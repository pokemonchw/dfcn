0x1401c44e0: mov     QWORD PTR [rsp+0x10],rbx
0x1401c44e5: mov     QWORD PTR [rsp+0x18],rsi
0x1401c44ea: mov     QWORD PTR [rsp+0x20],rdi
0x1401c44ef: push    rbp
0x1401c44f0: push    r12
0x1401c44f2: push    r13
0x1401c44f4: push    r14
0x1401c44f6: push    r15
0x1401c44f8: lea     rbp,[rsp-0x38c0]
0x1401c4500: mov     eax,0x39c0
0x1401c4505: call    0x14154f560
0x1401c450a: sub     rsp,rax
0x1401c450d: mov     rax,QWORD PTR [rip+0x16f3b2c]        # 0x1418b8040
0x1401c4514: xor     rax,rsp
0x1401c4517: mov     QWORD PTR [rbp+0x38b0],rax
0x1401c451e: mov     r13,rcx
0x1401c4521: mov     QWORD PTR [rsp+0x78],rcx
0x1401c4526: mov     BYTE PTR [rip+0x24a24ab],0x0        # 0x1426669d8
0x1401c452d: mov     DWORD PTR [rip+0x24a24a5],0xffffffff        # 0x1426669dc
0x1401c4537: cmp     BYTE PTR [rip+0x24a24b6],0x0        # 0x1426669f4
0x1401c453e: jne     0x1401d64ea
0x1401c4544: mov     ebx,0x2
0x1401c4549: cmp     BYTE PTR [rip+0x24a24a5],0x0        # 0x1426669f5
0x1401c4550: je      0x1401c4576
0x1401c4552: mov     rax,QWORD PTR [rip+0x24a228f]        # 0x1426667e8
0x1401c4559: test    rax,rax
0x1401c455c: je      0x1401c4561
0x1401c455e: or      DWORD PTR [rax],0x1
0x1401c4561: mov     BYTE PTR [rip+0x24a248d],0x0        # 0x1426669f5
0x1401c4568: mov     edx,ebx
0x1401c456a: lea     rcx,[rip+0x24a21ff]        # 0x142666770
0x1401c4571: call    0x140afe4c0
0x1401c4576: cmp     BYTE PTR [rip+0x16ff05b],0x0        # 0x1418c35d8
0x1401c457d: setne   BYTE PTR [rip+0x24a240c]        # 0x142666990
0x1401c4584: mov     DWORD PTR [rbp-0x38],0xffffffff
0x1401c458b: mov     DWORD PTR [rbp-0x3c],0xffffffff
0x1401c4592: cmp     BYTE PTR [rip+0x21e83bc],0x0        # 0x1423ac955
0x1401c4599: je      0x1401c45af
0x1401c459b: lea     r8,[rbp-0x3c]
0x1401c459f: lea     rdx,[rbp-0x38]
0x1401c45a3: lea     rcx,[rip+0x24a21c6]        # 0x142666770
0x1401c45aa: call    0x1400bc900
0x1401c45af: lea     r8,[rbp-0x18]
0x1401c45b3: lea     rdx,[rbp+0x1b8]
0x1401c45ba: lea     rcx,[rip+0x16f902f]        # 0x1418bd5f0
0x1401c45c1: call    0x140426140
0x1401c45c6: xor     r8d,r8d
0x1401c45c9: mov     dl,0xff
0x1401c45cb: xor     ecx,ecx
0x1401c45cd: call    0x1408d57c0
0x1401c45d2: xor     edx,edx
0x1401c45d4: lea     rcx,[rip+0x2225515]        # 0x1423e9af0
0x1401c45db: call    0x140073550
0x1401c45e0: test    al,al
0x1401c45e2: je      0x1401c471c
0x1401c45e8: xor     esi,esi
0x1401c45ea: mov     QWORD PTR [rbp-0x78],rsi
0x1401c45ee: cmp     QWORD PTR [rip+0x24a21f3],rsi        # 0x1426667e8
0x1401c45f5: je      0x1401c483e
0x1401c45fb: lea     rcx,[rbp+0x9b0]
0x1401c4602: call    0x1400bd550
0x1401c4607: mov     eax,DWORD PTR [r13+0x1b4]
0x1401c460e: cmp     eax,0x4
0x1401c4611: jne     0x1401c464f
0x1401c4613: mov     DWORD PTR [r13+0x550],esi
0x1401c461a: lea     rax,[r13+0x458]
0x1401c4621: mov     DWORD PTR [rsp+0x58],esi
0x1401c4625: mov     DWORD PTR [rsp+0x50],esi
0x1401c4629: mov     QWORD PTR [rsp+0x48],rax
0x1401c462e: mov     BYTE PTR [rsp+0x40],sil
0x1401c4633: mov     BYTE PTR [rsp+0x38],sil
0x1401c4638: mov     eax,DWORD PTR [rip+0x21eb3b2]        # 0x1423af9f0
0x1401c463e: mov     DWORD PTR [rsp+0x30],eax
0x1401c4642: mov     DWORD PTR [rsp+0x28],0x17
0x1401c464a: jmp     0x1401c46f1
0x1401c464f: cmp     eax,0x5
0x1401c4652: jne     0x1401c46c1
0x1401c4654: mov     rax,QWORD PTR [r13+0x8368]
0x1401c465b: test    rax,rax
0x1401c465e: je      0x1401c46c1
0x1401c4660: mov     QWORD PTR [rbp+0x9c8],rax
0x1401c4667: mov     eax,DWORD PTR [r13+0x8378]
0x1401c466e: mov     DWORD PTR [rbp+0x9d0],eax
0x1401c4674: mov     eax,DWORD PTR [r13+0x837c]
0x1401c467b: mov     DWORD PTR [rbp+0x9d4],eax
0x1401c4681: mov     DWORD PTR [rsp+0x58],esi
0x1401c4685: mov     DWORD PTR [rsp+0x50],esi
0x1401c4689: lea     rax,[rbp+0x9b0]
0x1401c4690: mov     QWORD PTR [rsp+0x48],rax
0x1401c4695: mov     BYTE PTR [rsp+0x40],sil
0x1401c469a: mov     BYTE PTR [rsp+0x38],sil
0x1401c469f: mov     eax,DWORD PTR [rip+0x21eb34b]        # 0x1423af9f0
0x1401c46a5: mov     DWORD PTR [rsp+0x30],eax
0x1401c46a9: mov     DWORD PTR [rsp+0x28],0x17
0x1401c46b1: mov     r9d,DWORD PTR [r13+0x8374]
0x1401c46b8: mov     r8d,DWORD PTR [r13+0x8370]
0x1401c46bf: jmp     0x1401c46ff
0x1401c46c1: mov     DWORD PTR [rsp+0x58],esi
0x1401c46c5: mov     DWORD PTR [rsp+0x50],esi
0x1401c46c9: lea     rax,[rbp+0x9b0]
0x1401c46d0: mov     QWORD PTR [rsp+0x48],rax
0x1401c46d5: mov     BYTE PTR [rsp+0x40],sil
0x1401c46da: mov     BYTE PTR [rsp+0x38],sil
0x1401c46df: mov     eax,DWORD PTR [rip+0x21eb30b]        # 0x1423af9f0
0x1401c46e5: mov     DWORD PTR [rsp+0x30],eax
0x1401c46e9: mov     DWORD PTR [rsp+0x28],0x18
0x1401c46f1: mov     r9d,DWORD PTR [r13+0x19c]
0x1401c46f8: mov     r8d,DWORD PTR [r13+0x198]
0x1401c46ff: mov     BYTE PTR [rsp+0x20],0x1
0x1401c4704: mov     rdx,QWORD PTR [rip+0x24a20dd]        # 0x1426667e8
0x1401c470b: mov     rcx,QWORD PTR [rip+0x23437c6]        # 0x142507ed8
0x1401c4712: call    0x1402f5260
0x1401c4717: jmp     0x1401c483e
0x1401c471c: lea     rcx,[rbp+0xb50]
0x1401c4723: call    0x1400bd550
0x1401c4728: mov     eax,DWORD PTR [r13+0x1b4]
0x1401c472f: cmp     eax,0x4
0x1401c4732: jne     0x1401c476a
0x1401c4734: xor     esi,esi
0x1401c4736: mov     DWORD PTR [r13+0x550],esi
0x1401c473d: lea     rax,[r13+0x458]
0x1401c4744: mov     QWORD PTR [rsp+0x60],rax
0x1401c4749: mov     BYTE PTR [rsp+0x58],sil
0x1401c474e: mov     BYTE PTR [rsp+0x50],sil
0x1401c4753: mov     eax,DWORD PTR [rip+0x21eb297]        # 0x1423af9f0
0x1401c4759: mov     DWORD PTR [rsp+0x48],eax
0x1401c475d: mov     DWORD PTR [rsp+0x40],0x17
0x1401c4765: jmp     0x1401c4800
0x1401c476a: cmp     eax,0x5
0x1401c476d: jne     0x1401c47d6
0x1401c476f: mov     rax,QWORD PTR [r13+0x8368]
0x1401c4776: test    rax,rax
0x1401c4779: je      0x1401c47d6
0x1401c477b: mov     QWORD PTR [rbp+0xb68],rax
0x1401c4782: mov     eax,DWORD PTR [r13+0x8378]
0x1401c4789: mov     DWORD PTR [rbp+0xb70],eax
0x1401c478f: mov     eax,DWORD PTR [r13+0x837c]
0x1401c4796: mov     DWORD PTR [rbp+0xb74],eax
0x1401c479c: lea     rax,[rbp+0xb50]
0x1401c47a3: mov     QWORD PTR [rsp+0x60],rax
0x1401c47a8: mov     BYTE PTR [rsp+0x58],0x0
0x1401c47ad: mov     BYTE PTR [rsp+0x50],0x0
0x1401c47b2: mov     eax,DWORD PTR [rip+0x21eb238]        # 0x1423af9f0
0x1401c47b8: mov     DWORD PTR [rsp+0x48],eax
0x1401c47bc: mov     DWORD PTR [rsp+0x40],0x17
0x1401c47c4: xor     esi,esi
0x1401c47c6: mov     r8d,DWORD PTR [r13+0x8374]
0x1401c47cd: mov     edx,DWORD PTR [r13+0x8370]
0x1401c47d4: jmp     0x1401c480e
0x1401c47d6: lea     rax,[rbp+0xb50]
0x1401c47dd: mov     QWORD PTR [rsp+0x60],rax
0x1401c47e2: mov     BYTE PTR [rsp+0x58],0x0
0x1401c47e7: mov     BYTE PTR [rsp+0x50],0x0
0x1401c47ec: mov     eax,DWORD PTR [rip+0x21eb1fe]        # 0x1423af9f0
0x1401c47f2: mov     DWORD PTR [rsp+0x48],eax
0x1401c47f6: mov     DWORD PTR [rsp+0x40],0x18
0x1401c47fe: xor     esi,esi
0x1401c4800: mov     r8d,DWORD PTR [r13+0x19c]
0x1401c4807: mov     edx,DWORD PTR [r13+0x198]
0x1401c480e: mov     BYTE PTR [rsp+0x38],0x1
0x1401c4813: mov     eax,DWORD PTR [rip+0x22252ef]        # 0x1423e9b08
0x1401c4819: mov     DWORD PTR [rsp+0x30],eax
0x1401c481d: mov     eax,DWORD PTR [rip+0x22252e1]        # 0x1423e9b04
0x1401c4823: mov     DWORD PTR [rsp+0x28],eax
0x1401c4827: mov     QWORD PTR [rbp-0x78],rsi
0x1401c482b: mov     DWORD PTR [rsp+0x20],esi
0x1401c482f: xor     r9d,r9d
0x1401c4832: mov     rcx,QWORD PTR [rip+0x234369f]        # 0x142507ed8
0x1401c4839: call    0x140f70920
0x1401c483e: mov     eax,0x1b4
0x1401c4843: mov     rcx,r13
0x1401c4846: movsxd  rdx,DWORD PTR [rax+rcx*1]
0x1401c484a: cmp     edx,0x8
0x1401c484d: ja      0x1401c8d68
0x1401c4853: lea     rcx,[rip+0xffffffffffe3b7a6]        # 0x140000000
0x1401c485a: mov     eax,DWORD PTR [rcx+rdx*4+0x1d651c]
0x1401c4861: add     rax,rcx
0x1401c4864: jmp     rax
0x1401c4866: cmp     BYTE PTR [rip+0x21e80e8],0x0        # 0x1423ac955
0x1401c486d: je      0x1401c8d68
0x1401c4873: lea     r8,[rbp+0x38]
0x1401c4877: lea     rdx,[rbp+0xd0]
0x1401c487e: lea     rcx,[rip+0x24a1eeb]        # 0x142666770
0x1401c4885: call    0x1400bc900
0x1401c488a: lea     r8,[rbp+0xd8]
0x1401c4891: lea     rdx,[rbp+0xe4]
0x1401c4898: lea     rcx,[rip+0x24a1ed1]        # 0x142666770
0x1401c489f: call    0x14014ec00
0x1401c48a4: xor     edx,edx
0x1401c48a6: lea     rcx,[rip+0x2225243]        # 0x1423e9af0
0x1401c48ad: call    0x140073550
0x1401c48b2: test    al,al
0x1401c48b4: je      0x1401c48fe
0x1401c48b6: mov     rax,QWORD PTR [rip+0x24a1f2b]        # 0x1426667e8
0x1401c48bd: mov     ecx,DWORD PTR [rax+0x4]
0x1401c48c0: mov     r8d,DWORD PTR [rax+0x8]
0x1401c48c4: sar     ecx,1
0x1401c48c6: mov     eax,DWORD PTR [rbp+0xe4]
0x1401c48cc: cdq     
0x1401c48cd: and     edx,0xf
0x1401c48d0: lea     ebx,[rdx+rax*1]
0x1401c48d3: sar     ebx,0x4
0x1401c48d6: sub     ebx,ecx
0x1401c48d8: add     ebx,DWORD PTR [r13+0x198]
0x1401c48df: sar     r8d,1
0x1401c48e2: mov     eax,DWORD PTR [rbp+0xd8]
0x1401c48e8: cdq     
0x1401c48e9: and     edx,0xf
0x1401c48ec: lea     ecx,[rdx+rax*1]
0x1401c48ef: sar     ecx,0x4
0x1401c48f2: sub     ecx,r8d
0x1401c48f5: add     ecx,DWORD PTR [r13+0x19c]
0x1401c48fc: jmp     0x1401c4929
0x1401c48fe: mov     eax,DWORD PTR [rip+0x2225200]        # 0x1423e9b04
0x1401c4904: sar     eax,1
0x1401c4906: mov     ebx,DWORD PTR [r13+0x198]
0x1401c490d: sub     ebx,eax
0x1401c490f: add     ebx,DWORD PTR [rbp+0xd0]
0x1401c4915: mov     eax,DWORD PTR [rip+0x22251ed]        # 0x1423e9b08
0x1401c491b: sar     eax,1
0x1401c491d: mov     ecx,DWORD PTR [r13+0x19c]
0x1401c4924: sub     ecx,eax
0x1401c4926: add     ecx,DWORD PTR [rbp+0x38]
0x1401c4929: mov     DWORD PTR [rbp-0x48],ecx
0x1401c492c: mov     DWORD PTR [rbp-0x58],ebx
0x1401c492f: test    ebx,ebx
0x1401c4931: js      0x1401c8d68
0x1401c4937: mov     rax,QWORD PTR [rip+0x234359a]        # 0x142507ed8
0x1401c493e: cmp     ebx,DWORD PTR [rax+0xa0]
0x1401c4944: jge     0x1401c8d68
0x1401c494a: test    ecx,ecx
0x1401c494c: js      0x1401c8d68
0x1401c4952: cmp     ecx,DWORD PTR [rax+0xa4]
0x1401c4958: jge     0x1401c8d68
0x1401c495e: mov     r8d,ecx
0x1401c4961: mov     edx,ebx
0x1401c4963: mov     rcx,r13
0x1401c4966: call    0x1401db5b0
0x1401c496b: mov     esi,DWORD PTR [rbp-0x18]
0x1401c496e: mov     DWORD PTR [rsp+0x74],esi
0x1401c4972: lea     r15d,[rsi-0x37]
0x1401c4976: mov     DWORD PTR [rsp+0x70],r15d
0x1401c497b: lea     r14d,[r15-0x2]
0x1401c497f: mov     r12d,0x14
0x1401c4985: mov     QWORD PTR [rbp-0x60],r12
0x1401c4989: mov     eax,DWORD PTR [rip+0x2225179]        # 0x1423e9b08
0x1401c498f: cmp     eax,0x2e
0x1401c4992: jle     0x1401c49ba
0x1401c4994: lea     r12d,[rax-0x1a]
0x1401c4998: mov     QWORD PTR [rbp-0x60],r12
0x1401c499c: cmp     r12d,0x1e
0x1401c49a0: jle     0x1401c49ba
0x1401c49a2: mov     eax,0x1e
0x1401c49a7: mov     DWORD PTR [rbp-0x6c],eax
0x1401c49aa: mov     r12d,eax
0x1401c49ad: mov     QWORD PTR [rbp-0x60],r12
0x1401c49b1: mov     edi,esi
0x1401c49b3: xor     eax,eax
0x1401c49b5: mov     r13d,eax
0x1401c49b8: jmp     0x1401c49ce
0x1401c49ba: mov     DWORD PTR [rbp-0x6c],r12d
0x1401c49be: mov     edi,esi
0x1401c49c0: xor     eax,eax
0x1401c49c2: mov     r13d,eax
0x1401c49c5: test    r12d,r12d
0x1401c49c8: js      0x1401c4aae
0x1401c49ce: mov     r15,rax
0x1401c49d1: mov     ebx,r14d
0x1401c49d4: cmp     r14d,edi
0x1401c49d7: jg      0x1401c4a93
0x1401c49dd: movsxd  rax,r12d
0x1401c49e0: mov     rsi,rax
0x1401c49e3: mov     r8d,ebx
0x1401c49e6: mov     edx,r13d
0x1401c49e9: lea     rcx,[rip+0x24a1d80]        # 0x142666770
0x1401c49f0: call    0x1400bc6e0
0x1401c49f5: xor     r8d,r8d
0x1401c49f8: xor     edx,edx
0x1401c49fa: lea     rcx,[rip+0x24a1d6f]        # 0x142666770
0x1401c4a01: call    0x1400bc750
0x1401c4a06: test    r15,r15
0x1401c4a09: jne     0x1401c4a33
0x1401c4a0b: cmp     ebx,r14d
0x1401c4a0e: jne     0x1401c4a18
0x1401c4a10: mov     edx,DWORD PTR [rip+0x24a367e]        # 0x142668094
0x1401c4a16: jmp     0x1401c4a7d
0x1401c4a18: lea     rcx,[rip+0x24a1d51]        # 0x142666770
0x1401c4a1f: cmp     ebx,edi
0x1401c4a21: jne     0x1401c4a2b
0x1401c4a23: mov     edx,DWORD PTR [rip+0x24a3683]        # 0x1426680ac
0x1401c4a29: jmp     0x1401c4a84
0x1401c4a2b: mov     edx,DWORD PTR [rip+0x24a366f]        # 0x1426680a0
0x1401c4a31: jmp     0x1401c4a84
0x1401c4a33: cmp     r15,rsi
0x1401c4a36: jne     0x1401c4a60
0x1401c4a38: cmp     ebx,r14d
0x1401c4a3b: jne     0x1401c4a45
0x1401c4a3d: mov     edx,DWORD PTR [rip+0x24a3659]        # 0x14266809c
0x1401c4a43: jmp     0x1401c4a7d
0x1401c4a45: lea     rcx,[rip+0x24a1d24]        # 0x142666770
0x1401c4a4c: cmp     ebx,edi
0x1401c4a4e: jne     0x1401c4a58
0x1401c4a50: mov     edx,DWORD PTR [rip+0x24a365e]        # 0x1426680b4
0x1401c4a56: jmp     0x1401c4a84
0x1401c4a58: mov     edx,DWORD PTR [rip+0x24a364a]        # 0x1426680a8
0x1401c4a5e: jmp     0x1401c4a84
0x1401c4a60: cmp     ebx,r14d
0x1401c4a63: jne     0x1401c4a6d
0x1401c4a65: mov     edx,DWORD PTR [rip+0x24a362d]        # 0x142668098
0x1401c4a6b: jmp     0x1401c4a7d
0x1401c4a6d: cmp     ebx,edi
0x1401c4a6f: mov     edx,DWORD PTR [rip+0x24a363b]        # 0x1426680b0
0x1401c4a75: je      0x1401c4a7d
0x1401c4a77: mov     edx,DWORD PTR [rip+0x24a3627]        # 0x1426680a4
0x1401c4a7d: lea     rcx,[rip+0x24a1cec]        # 0x142666770
0x1401c4a84: call    0x140af1390
0x1401c4a89: inc     ebx
0x1401c4a8b: cmp     ebx,edi
0x1401c4a8d: jle     0x1401c49e3
0x1401c4a93: inc     r13d
0x1401c4a96: inc     r15
0x1401c4a99: cmp     r13d,r12d
0x1401c4a9c: jle     0x1401c49d1
0x1401c4aa2: mov     esi,DWORD PTR [rsp+0x74]
0x1401c4aa6: mov     r15d,DWORD PTR [rsp+0x70]
0x1401c4aab: mov     ebx,DWORD PTR [rbp-0x58]
0x1401c4aae: xor     r8d,r8d
0x1401c4ab1: mov     edx,0x7
0x1401c4ab6: mov     r9b,0x1
0x1401c4ab9: lea     rcx,[rip+0x24a1cb0]        # 0x142666770
0x1401c4ac0: call    0x1400bc6f0
0x1401c4ac5: mov     edi,0x1
0x1401c4aca: mov     r13d,edi
0x1401c4acd: lea     rcx,[rbp+0xff0]
0x1401c4ad4: call    0x140070c50
0x1401c4ad9: nop     
0x1401c4ada: mov     r8d,r15d
0x1401c4add: mov     edx,edi
0x1401c4adf: lea     rcx,[rip+0x24a1c8a]        # 0x142666770
0x1401c4ae6: call    0x1400bc6e0
0x1401c4aeb: mov     edi,DWORD PTR [rbp-0x48]
0x1401c4aee: mov     r8d,edi
0x1401c4af1: mov     edx,ebx
0x1401c4af3: mov     rcx,QWORD PTR [rip+0x23433de]        # 0x142507ed8
0x1401c4afa: call    0x1401be9f0
0x1401c4aff: test    rax,rax
0x1401c4b02: je      0x1401c4bb7
0x1401c4b08: xor     r9d,r9d
0x1401c4b0b: mov     r8b,0x1
0x1401c4b0e: lea     rdx,[rbp+0xff0]
0x1401c4b15: mov     rcx,rax
0x1401c4b18: call    0x140aaafe0
0x1401c4b1d: sub     esi,r14d
0x1401c4b20: lea     rcx,[rbp+0xff0]
0x1401c4b27: call    0x1400708f0
0x1401c4b2c: lea     ecx,[rsi-0x7]
0x1401c4b2f: movsxd  rdx,ecx
0x1401c4b32: cmp     rax,rdx
0x1401c4b35: jb      0x1401c4b9c
0x1401c4b37: lea     r14d,[rsi-0x8]
0x1401c4b3b: test    r14d,r14d
0x1401c4b3e: js      0x1401c4b56
0x1401c4b40: movsxd  rdx,esi
0x1401c4b43: sub     rdx,0x8
0x1401c4b47: xor     r8d,r8d
0x1401c4b4a: lea     rcx,[rbp+0xff0]
0x1401c4b51: call    0x1400e27f0
0x1401c4b56: cmp     r14d,0x3
0x1401c4b5a: jle     0x1401c4b9c
0x1401c4b5c: movsxd  rdx,esi
0x1401c4b5f: sub     rdx,0xb
0x1401c4b63: lea     rcx,[rbp+0xff0]
0x1401c4b6a: call    0x1400fcb70
0x1401c4b6f: mov     BYTE PTR [rax],0x2e
0x1401c4b72: lea     eax,[rsi-0xa]
0x1401c4b75: movsxd  rdx,eax
0x1401c4b78: lea     rcx,[rbp+0xff0]
0x1401c4b7f: call    0x1400fcb70
0x1401c4b84: mov     BYTE PTR [rax],0x2e
0x1401c4b87: lea     eax,[rsi-0x9]
0x1401c4b8a: movsxd  rdx,eax
0x1401c4b8d: lea     rcx,[rbp+0xff0]
0x1401c4b94: call    0x1400fcb70
0x1401c4b99: mov     BYTE PTR [rax],0x2e
0x1401c4b9c: xor     r9d,r9d
0x1401c4b9f: xor     r8d,r8d
0x1401c4ba2: lea     rdx,[rbp+0xff0]
0x1401c4ba9: lea     rcx,[rip+0x24a1bc0]        # 0x142666770
0x1401c4bb0: call    0x140af0220
0x1401c4bb5: jmp     0x1401c4bbd
0x1401c4bb7: xor     r13d,r13d
0x1401c4bba: sub     esi,r14d
0x1401c4bbd: lea     rcx,[rbp+0xff0]
0x1401c4bc4: call    0x1400693f0
0x1401c4bc9: lea     rcx,[rbp+0x1010]
0x1401c4bd0: call    0x140070c50
0x1401c4bd5: nop     
0x1401c4bd6: lea     edx,[r13+0x1]
0x1401c4bda: mov     r8d,r15d
0x1401c4bdd: lea     rcx,[rip+0x24a1b8c]        # 0x142666770
0x1401c4be4: call    0x1400bc6e0
0x1401c4be9: mov     r8d,edi
0x1401c4bec: mov     edx,ebx
0x1401c4bee: mov     rcx,QWORD PTR [rip+0x23432e3]        # 0x142507ed8
0x1401c4bf5: call    0x1401be980
0x1401c4bfa: test    rax,rax
0x1401c4bfd: je      0x1401c4cae
0x1401c4c03: xor     r9d,r9d
0x1401c4c06: mov     r8b,0x1
0x1401c4c09: lea     rdx,[rbp+0x1010]
0x1401c4c10: mov     rcx,rax
0x1401c4c13: call    0x140aaafe0
0x1401c4c18: lea     rcx,[rbp+0x1010]
0x1401c4c1f: call    0x1400708f0
0x1401c4c24: lea     ecx,[rsi-0x7]
0x1401c4c27: movsxd  rdx,ecx
0x1401c4c2a: cmp     rax,rdx
0x1401c4c2d: jb      0x1401c4c94
0x1401c4c2f: lea     r14d,[rsi-0x8]
0x1401c4c33: test    r14d,r14d
0x1401c4c36: js      0x1401c4c4e
0x1401c4c38: movsxd  rdx,esi
0x1401c4c3b: sub     rdx,0x8
0x1401c4c3f: xor     r8d,r8d
0x1401c4c42: lea     rcx,[rbp+0x1010]
0x1401c4c49: call    0x1400e27f0
0x1401c4c4e: cmp     r14d,0x3
0x1401c4c52: jle     0x1401c4c94
0x1401c4c54: movsxd  rdx,esi
0x1401c4c57: sub     rdx,0xb
0x1401c4c5b: lea     rcx,[rbp+0x1010]
0x1401c4c62: call    0x1400fcb70
0x1401c4c67: mov     BYTE PTR [rax],0x2e
0x1401c4c6a: lea     eax,[rsi-0xa]
0x1401c4c6d: movsxd  rdx,eax
0x1401c4c70: lea     rcx,[rbp+0x1010]
0x1401c4c77: call    0x1400fcb70
0x1401c4c7c: mov     BYTE PTR [rax],0x2e
0x1401c4c7f: lea     eax,[rsi-0x9]
0x1401c4c82: movsxd  rdx,eax
0x1401c4c85: lea     rcx,[rbp+0x1010]
0x1401c4c8c: call    0x1400fcb70
0x1401c4c91: mov     BYTE PTR [rax],0x2e
0x1401c4c94: xor     r9d,r9d
0x1401c4c97: xor     r8d,r8d
0x1401c4c9a: lea     rdx,[rbp+0x1010]
0x1401c4ca1: lea     rcx,[rip+0x24a1ac8]        # 0x142666770
0x1401c4ca8: call    0x140af0220
0x1401c4cad: nop     
0x1401c4cae: lea     rcx,[rbp+0x1010]
0x1401c4cb5: call    0x1400693f0
0x1401c4cba: mov     rcx,QWORD PTR [rip+0x21f18af]        # 0x1423b6570
0x1401c4cc1: movsx   eax,WORD PTR [rcx+0x82]
0x1401c4cc8: cmp     ebx,eax
0x1401c4cca: jne     0x1401c4cdb
0x1401c4ccc: movsx   eax,WORD PTR [rcx+0x84]
0x1401c4cd3: cmp     edi,eax
0x1401c4cd5: je      0x1401c4dcf
0x1401c4cdb: cmp     r13d,0x1
0x1401c4cdf: jne     0x1401c4dcf
0x1401c4ce5: lea     rcx,[rbp+0xed0]
0x1401c4cec: call    0x140070c50
0x1401c4cf1: nop     
0x1401c4cf2: movzx   r8d,di
0x1401c4cf6: movzx   edx,bx
0x1401c4cf9: mov     rcx,QWORD PTR [rip+0x23431d8]        # 0x142507ed8
0x1401c4d00: call    0x1401bea60
0x1401c4d05: mov     ecx,eax
0x1401c4d07: cmp     eax,0x12
0x1401c4d0a: jl      0x1401c4d3f
0x1401c4d0c: mov     eax,0x38e38e39
0x1401c4d11: imul    ecx
0x1401c4d13: mov     ecx,edx
0x1401c4d15: sar     ecx,1
0x1401c4d17: mov     eax,ecx
0x1401c4d19: shr     eax,0x1f
0x1401c4d1c: add     ecx,eax
0x1401c4d1e: lea     rdx,[rbp+0xed0]
0x1401c4d25: call    0x140545040
0x1401c4d2a: lea     rcx,[rbp+0xed0]
0x1401c4d31: call    0x140544330
0x1401c4d36: lea     rdx,[rip+0x145564b]        # 0x14161a388 ; literal=" days' travel"
0x1401c4d3d: jmp     0x1401c4d89
0x1401c4d3f: cmp     ecx,0xb
0x1401c4d42: jl      0x1401c4d4d
0x1401c4d44: lea     rdx,[rip+0x145564d]        # 0x14161a398 ; literal="More than a day's travel"
0x1401c4d4b: jmp     0x1401c4d89
0x1401c4d4d: cmp     ecx,0x8
0x1401c4d50: jl      0x1401c4d5b
0x1401c4d52: lea     rdx,[rip+0x145565f]        # 0x14161a3b8 ; literal="A day's travel"
0x1401c4d59: jmp     0x1401c4d89
0x1401c4d5b: cmp     ecx,0x6
0x1401c4d5e: jl      0x1401c4d69
0x1401c4d60: lea     rdx,[rip+0x1455661]        # 0x14161a3c8 ; literal="Nearly a day's travel"
0x1401c4d67: jmp     0x1401c4d89
0x1401c4d69: cmp     ecx,0x3
0x1401c4d6c: jl      0x1401c4d77
0x1401c4d6e: lea     rdx,[rip+0x145566b]        # 0x14161a3e0 ; literal="A half day's travel"
0x1401c4d75: jmp     0x1401c4d89
0x1401c4d77: test    ecx,ecx
0x1401c4d79: lea     rdx,[rip+0x1455678]        # 0x14161a3f8 ; literal='A short trip'
0x1401c4d80: jns     0x1401c4d89
0x1401c4d82: lea     rdx,[rip+0x145567f]        # 0x14161a408 ; literal='Inaccessible from your location'
0x1401c4d89: lea     rcx,[rbp+0xed0]
0x1401c4d90: call    0x140070b20
0x1401c4d95: mov     r8d,r15d
0x1401c4d98: mov     edx,0x3
0x1401c4d9d: lea     rcx,[rip+0x24a19cc]        # 0x142666770
0x1401c4da4: call    0x1400bc6e0
0x1401c4da9: xor     r9d,r9d
0x1401c4dac: xor     r8d,r8d
0x1401c4daf: lea     rdx,[rbp+0xed0]
0x1401c4db6: lea     rcx,[rip+0x24a19b3]        # 0x142666770
0x1401c4dbd: call    0x140af0220
0x1401c4dc2: nop     
0x1401c4dc3: lea     rcx,[rbp+0xed0]
0x1401c4dca: call    0x1400693f0
0x1401c4dcf: mov     r13,QWORD PTR [rsp+0x78]
0x1401c4dd4: cmp     QWORD PTR [r13+0x1d8],0x0
0x1401c4ddc: je      0x1401c8d68
0x1401c4de2: lea     rdx,[rip+0x143ee4b]        # 0x141603c34 ; literal='The '
0x1401c4de9: lea     rcx,[rbp+0xe10]
0x1401c4df0: call    0x140069710
0x1401c4df5: nop     
0x1401c4df6: mov     r8d,r15d
0x1401c4df9: mov     edx,0x5
0x1401c4dfe: lea     rcx,[rip+0x24a196b]        # 0x142666770
0x1401c4e05: call    0x1400bc6e0
0x1401c4e0a: lea     rcx,[rbp+0x10b0]
0x1401c4e11: call    0x140070c50
0x1401c4e16: nop     
0x1401c4e17: lea     rdx,[rbp+0x10b0]
0x1401c4e1e: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c4e25: call    0x1410df470
0x1401c4e2a: lea     rcx,[rbp+0x10b0]
0x1401c4e31: call    0x140070ae0
0x1401c4e36: test    al,al
0x1401c4e38: jne     0x1401c4e5b
0x1401c4e3a: lea     rdx,[rbp+0x10b0]
0x1401c4e41: lea     rcx,[rbp+0xe10]
0x1401c4e48: call    0x1400bb2d0
0x1401c4e4d: mov     dl,0x20
0x1401c4e4f: lea     rcx,[rbp+0xe10]
0x1401c4e56: call    0x1400bb2f0
0x1401c4e5b: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c4e62: call    0x141095c20
0x1401c4e67: mov     rbx,rax
0x1401c4e6a: mov     QWORD PTR [rbp-0x20],rax
0x1401c4e6e: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c4e75: call    0x1409cbf30
0x1401c4e7a: mov     rdi,rax
0x1401c4e7d: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c4e84: cmp     WORD PTR [rcx+0x80],0xa
0x1401c4e8c: je      0x1401c4ef7
0x1401c4e8e: test    rbx,rbx
0x1401c4e91: je      0x1401c4ef7
0x1401c4e93: mov     ecx,DWORD PTR [rbx+0x9c]
0x1401c4e99: shr     ecx,0xa
0x1401c4e9c: not     ecx
0x1401c4e9e: test    cl,0x1
0x1401c4ea1: je      0x1401c4ef7
0x1401c4ea3: lea     rcx,[rbp+0x14b0]
0x1401c4eaa: call    0x140070c50
0x1401c4eaf: nop     
0x1401c4eb0: mov     r8d,0xffffffff
0x1401c4eb6: lea     rdx,[rbp+0x14b0]
0x1401c4ebd: movzx   ecx,WORD PTR [rbx+0x98]
0x1401c4ec4: call    0x140aba070
0x1401c4ec9: lea     rdx,[rbp+0x14b0]
0x1401c4ed0: lea     rcx,[rbp+0xe10]
0x1401c4ed7: call    0x1400bb2d0
0x1401c4edc: mov     dl,0x20
0x1401c4ede: lea     rcx,[rbp+0xe10]
0x1401c4ee5: call    0x1400bb2f0
0x1401c4eea: nop     
0x1401c4eeb: lea     rcx,[rbp+0x14b0]
0x1401c4ef2: call    0x1400693f0
0x1401c4ef7: lea     rdx,[rbp+0x10b0]
0x1401c4efe: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c4f05: call    0x1410df4b0
0x1401c4f0a: lea     rdx,[rbp+0x10b0]
0x1401c4f11: lea     rcx,[rbp+0xe10]
0x1401c4f18: call    0x1400bb2d0
0x1401c4f1d: lea     rdx,[rip+0x143c834]        # 0x141601758 ; literal=' of '
0x1401c4f24: lea     rcx,[rbp+0xe10]
0x1401c4f2b: call    0x140070b20
0x1401c4f30: xor     r9d,r9d
0x1401c4f33: mov     r8b,0x1
0x1401c4f36: lea     rdx,[rbp+0x10b0]
0x1401c4f3d: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c4f44: call    0x140aaafe0
0x1401c4f49: lea     rdx,[rbp+0x10b0]
0x1401c4f50: lea     rcx,[rbp+0xe10]
0x1401c4f57: call    0x1400bb2d0
0x1401c4f5c: lea     rcx,[rbp+0xe10]
0x1401c4f63: call    0x1405440a0
0x1401c4f68: lea     eax,[rsi-0x7]
0x1401c4f6b: movsxd  r14,eax
0x1401c4f6e: mov     QWORD PTR [rbp-0x78],r14
0x1401c4f72: lea     rcx,[rbp+0xe10]
0x1401c4f79: call    0x1400708f0
0x1401c4f7e: cmp     rax,r14
0x1401c4f81: jb      0x1401c4fec
0x1401c4f83: lea     r14d,[rsi-0x8]
0x1401c4f87: test    r14d,r14d
0x1401c4f8a: js      0x1401c4fa2
0x1401c4f8c: movsxd  rdx,esi
0x1401c4f8f: sub     rdx,0x8
0x1401c4f93: xor     r8d,r8d
0x1401c4f96: lea     rcx,[rbp+0xe10]
0x1401c4f9d: call    0x1400e27f0
0x1401c4fa2: cmp     r14d,0x3
0x1401c4fa6: jle     0x1401c4fe8
0x1401c4fa8: movsxd  rdx,esi
0x1401c4fab: sub     rdx,0xb
0x1401c4faf: lea     rcx,[rbp+0xe10]
0x1401c4fb6: call    0x1400fcb70
0x1401c4fbb: mov     BYTE PTR [rax],0x2e
0x1401c4fbe: lea     eax,[rsi-0xa]
0x1401c4fc1: movsxd  rdx,eax
0x1401c4fc4: lea     rcx,[rbp+0xe10]
0x1401c4fcb: call    0x1400fcb70
0x1401c4fd0: mov     BYTE PTR [rax],0x2e
0x1401c4fd3: lea     eax,[rsi-0x9]
0x1401c4fd6: movsxd  rdx,eax
0x1401c4fd9: lea     rcx,[rbp+0xe10]
0x1401c4fe0: call    0x1400fcb70
0x1401c4fe5: mov     BYTE PTR [rax],0x2e
0x1401c4fe8: mov     r14,QWORD PTR [rbp-0x78]
0x1401c4fec: xor     r9d,r9d
0x1401c4fef: xor     r8d,r8d
0x1401c4ff2: lea     rdx,[rbp+0xe10]
0x1401c4ff9: lea     rcx,[rip+0x24a1770]        # 0x142666770
0x1401c5000: call    0x140af0220
0x1401c5005: mov     rax,QWORD PTR [rip+0x21f1564]        # 0x1423b6570
0x1401c500c: mov     r8d,r15d
0x1401c500f: mov     edx,0x6
0x1401c5014: lea     rcx,[rip+0x24a1755]        # 0x142666770
0x1401c501b: cmp     QWORD PTR [r13+0x1d8],rax
0x1401c5022: jne     0x1401c5071
0x1401c5024: call    0x1400bc6e0
0x1401c5029: lea     rdx,[rip+0x14553f8]        # 0x14161a428 ; literal='Your location'
0x1401c5030: lea     rcx,[rbp+0x1670]
0x1401c5037: call    0x140069710
0x1401c503c: nop     
0x1401c503d: xor     r9d,r9d
0x1401c5040: xor     r8d,r8d
0x1401c5043: lea     rdx,[rbp+0x1670]
0x1401c504a: lea     rcx,[rip+0x24a171f]        # 0x142666770
0x1401c5051: call    0x140af0220
0x1401c5056: nop     
0x1401c5057: lea     rcx,[rbp+0x1670]
0x1401c505e: call    0x1400693f0
0x1401c5063: test    rdi,rdi
0x1401c5066: je      0x1401c58e7
0x1401c506c: jmp     0x1401c57a2
0x1401c5071: call    0x1400bc6e0
0x1401c5076: test    rdi,rdi
0x1401c5079: je      0x1401c58aa
0x1401c507f: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c5086: add     rcx,0x90
0x1401c508d: call    0x140070930
0x1401c5092: mov     rbx,rax
0x1401c5095: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c509c: add     rcx,0xd8
0x1401c50a3: lea     rdx,[rbp+0x50]
0x1401c50a7: call    0x140070800
0x1401c50ac: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c50b3: add     rcx,0xd8
0x1401c50ba: lea     rdx,[rbp+0x1a0]
0x1401c50c1: call    0x1400707f0
0x1401c50c6: lea     r8,[rbp+0x1a0]
0x1401c50cd: lea     rdx,[rbp+0x3]
0x1401c50d1: lea     rcx,[rbp+0x50]
0x1401c50d5: call    0x1400703e0
0x1401c50da: xor     edx,edx
0x1401c50dc: movzx   ecx,BYTE PTR [rax]
0x1401c50df: call    0x140066d70
0x1401c50e4: test    al,al
0x1401c50e6: je      0x1401c514c
0x1401c50e8: nop     DWORD PTR [rax+rax*1+0x0]
0x1401c50f0: lea     rcx,[rbp+0x50]
0x1401c50f4: call    0x1400703d0
0x1401c50f9: mov     rcx,QWORD PTR [rax]
0x1401c50fc: cmp     DWORD PTR [rcx],0x0
0x1401c50ff: jle     0x1401c5121
0x1401c5101: lea     rcx,[rbp+0x50]
0x1401c5105: call    0x1400703d0
0x1401c510a: mov     rcx,QWORD PTR [rax]
0x1401c510d: cmp     DWORD PTR [rcx+0x18],0xffffffff
0x1401c5111: jne     0x1401c5121
0x1401c5113: lea     rcx,[rbp+0x50]
0x1401c5117: call    0x1400703d0
0x1401c511c: mov     rcx,QWORD PTR [rax]
0x1401c511f: add     ebx,DWORD PTR [rcx]
0x1401c5121: lea     rcx,[rbp+0x50]
0x1401c5125: call    0x1400703c0
0x1401c512a: lea     r8,[rbp+0x1a0]
0x1401c5131: lea     rdx,[rbp+0x3]
0x1401c5135: lea     rcx,[rbp+0x50]
0x1401c5139: call    0x1400703e0
0x1401c513e: xor     edx,edx
0x1401c5140: movzx   ecx,BYTE PTR [rax]
0x1401c5143: call    0x140066d70
0x1401c5148: test    al,al
0x1401c514a: jne     0x1401c50f0
0x1401c514c: cmp     ebx,0x30d4
0x1401c5152: jl      0x1401c5191
0x1401c5154: lea     rdx,[rip+0x1455515]        # 0x14161a670 ; literal='Population: >10000'
0x1401c515b: lea     rcx,[rbp+0x1690]
0x1401c5162: call    0x140069710
0x1401c5167: nop     
0x1401c5168: mov     r9d,0x35
0x1401c516e: xor     r8d,r8d
0x1401c5171: lea     rdx,[rbp+0x1690]
0x1401c5178: lea     rcx,[rip+0x24a15f1]        # 0x142666770
0x1401c517f: call    0x140af0220
0x1401c5184: nop     
0x1401c5185: lea     rcx,[rbp+0x1690]
0x1401c518c: jmp     0x1401c5799
0x1401c5191: cmp     ebx,0x2134
0x1401c5197: jl      0x1401c51d6
0x1401c5199: lea     rdx,[rip+0x14554e8]        # 0x14161a688 ; literal='Population: ~10000'
0x1401c51a0: lea     rcx,[rbp+0x16b0]
0x1401c51a7: call    0x140069710
0x1401c51ac: nop     
0x1401c51ad: mov     r9d,0x35
0x1401c51b3: xor     r8d,r8d
0x1401c51b6: lea     rdx,[rbp+0x16b0]
0x1401c51bd: lea     rcx,[rip+0x24a15ac]        # 0x142666770
0x1401c51c4: call    0x140af0220
0x1401c51c9: nop     
0x1401c51ca: lea     rcx,[rbp+0x16b0]
0x1401c51d1: jmp     0x1401c5799
0x1401c51d6: cmp     ebx,0x1964
0x1401c51dc: jl      0x1401c521b
0x1401c51de: lea     rdx,[rip+0x14554bb]        # 0x14161a6a0 ; literal='Population: ~7500'
0x1401c51e5: lea     rcx,[rbp+0x16d0]
0x1401c51ec: call    0x140069710
0x1401c51f1: nop     
0x1401c51f2: mov     r9d,0x35
0x1401c51f8: xor     r8d,r8d
0x1401c51fb: lea     rdx,[rbp+0x16d0]
0x1401c5202: lea     rcx,[rip+0x24a1567]        # 0x142666770
0x1401c5209: call    0x140af0220
0x1401c520e: nop     
0x1401c520f: lea     rcx,[rbp+0x16d0]
0x1401c5216: jmp     0x1401c5799
0x1401c521b: cmp     ebx,0x157c
0x1401c5221: jl      0x1401c5260
0x1401c5223: lea     rdx,[rip+0x145548e]        # 0x14161a6b8 ; literal='Population: ~6000'
0x1401c522a: lea     rcx,[rbp+0x16f0]
0x1401c5231: call    0x140069710
0x1401c5236: nop     
0x1401c5237: mov     r9d,0x35
0x1401c523d: xor     r8d,r8d
0x1401c5240: lea     rdx,[rbp+0x16f0]
0x1401c5247: lea     rcx,[rip+0x24a1522]        # 0x142666770
0x1401c524e: call    0x140af0220
0x1401c5253: nop     
0x1401c5254: lea     rcx,[rbp+0x16f0]
0x1401c525b: jmp     0x1401c5799
0x1401c5260: cmp     ebx,0x1194
0x1401c5266: jl      0x1401c52a5
0x1401c5268: lea     rdx,[rip+0x1455461]        # 0x14161a6d0 ; literal='Population: ~5000'
0x1401c526f: lea     rcx,[rbp+0x1710]
0x1401c5276: call    0x140069710
0x1401c527b: nop     
0x1401c527c: mov     r9d,0x35
0x1401c5282: xor     r8d,r8d
0x1401c5285: lea     rdx,[rbp+0x1710]
0x1401c528c: lea     rcx,[rip+0x24a14dd]        # 0x142666770
0x1401c5293: call    0x140af0220
0x1401c5298: nop     
0x1401c5299: lea     rcx,[rbp+0x1710]
0x1401c52a0: jmp     0x1401c5799
0x1401c52a5: cmp     ebx,0xdac
0x1401c52ab: jl      0x1401c52ea
0x1401c52ad: lea     rdx,[rip+0x1455434]        # 0x14161a6e8 ; literal='Population: ~4000'
0x1401c52b4: lea     rcx,[rbp+0x1730]
0x1401c52bb: call    0x140069710
0x1401c52c0: nop     
0x1401c52c1: mov     r9d,0x35
0x1401c52c7: xor     r8d,r8d
0x1401c52ca: lea     rdx,[rbp+0x1730]
0x1401c52d1: lea     rcx,[rip+0x24a1498]        # 0x142666770
0x1401c52d8: call    0x140af0220
0x1401c52dd: nop     
0x1401c52de: lea     rcx,[rbp+0x1730]
0x1401c52e5: jmp     0x1401c5799
0x1401c52ea: cmp     ebx,0x9c4
0x1401c52f0: jl      0x1401c532f
0x1401c52f2: lea     rdx,[rip+0x1455407]        # 0x14161a700 ; literal='Population: ~3000'
0x1401c52f9: lea     rcx,[rbp+0x1750]
0x1401c5300: call    0x140069710
0x1401c5305: nop     
0x1401c5306: mov     r9d,0x35
0x1401c530c: xor     r8d,r8d
0x1401c530f: lea     rdx,[rbp+0x1750]
0x1401c5316: lea     rcx,[rip+0x24a1453]        # 0x142666770
0x1401c531d: call    0x140af0220
0x1401c5322: nop     
0x1401c5323: lea     rcx,[rbp+0x1750]
0x1401c532a: jmp     0x1401c5799
0x1401c532f: cmp     ebx,0x5dc
0x1401c5335: jl      0x1401c5374
0x1401c5337: lea     rdx,[rip+0x14553da]        # 0x14161a718 ; literal='Population: ~2000'
0x1401c533e: lea     rcx,[rbp+0x1770]
0x1401c5345: call    0x140069710
0x1401c534a: nop     
0x1401c534b: mov     r9d,0x35
0x1401c5351: xor     r8d,r8d
0x1401c5354: lea     rdx,[rbp+0x1770]
0x1401c535b: lea     rcx,[rip+0x24a140e]        # 0x142666770
0x1401c5362: call    0x140af0220
0x1401c5367: nop     
0x1401c5368: lea     rcx,[rbp+0x1770]
0x1401c536f: jmp     0x1401c5799
0x1401c5374: cmp     ebx,0x352
0x1401c537a: jl      0x1401c53b9
0x1401c537c: lea     rdx,[rip+0x14553ad]        # 0x14161a730 ; literal='Population: ~1000'
0x1401c5383: lea     rcx,[rbp+0x1790]
0x1401c538a: call    0x140069710
0x1401c538f: nop     
0x1401c5390: mov     r9d,0x35
0x1401c5396: xor     r8d,r8d
0x1401c5399: lea     rdx,[rbp+0x1790]
0x1401c53a0: lea     rcx,[rip+0x24a13c9]        # 0x142666770
0x1401c53a7: call    0x140af0220
0x1401c53ac: nop     
0x1401c53ad: lea     rcx,[rbp+0x1790]
0x1401c53b4: jmp     0x1401c5799
0x1401c53b9: cmp     ebx,0x28a
0x1401c53bf: jl      0x1401c53fe
0x1401c53c1: lea     rdx,[rip+0x1455380]        # 0x14161a748 ; literal='Population: ~750'
0x1401c53c8: lea     rcx,[rbp+0x17b0]
0x1401c53cf: call    0x140069710
0x1401c53d4: nop     
0x1401c53d5: mov     r9d,0x35
0x1401c53db: xor     r8d,r8d
0x1401c53de: lea     rdx,[rbp+0x17b0]
0x1401c53e5: lea     rcx,[rip+0x24a1384]        # 0x142666770
0x1401c53ec: call    0x140af0220
0x1401c53f1: nop     
0x1401c53f2: lea     rcx,[rbp+0x17b0]
0x1401c53f9: jmp     0x1401c5799
0x1401c53fe: cmp     ebx,0x226
0x1401c5404: jl      0x1401c5443
0x1401c5406: lea     rdx,[rip+0x1455353]        # 0x14161a760 ; literal='Population: ~600'
0x1401c540d: lea     rcx,[rbp+0x17d0]
0x1401c5414: call    0x140069710
0x1401c5419: nop     
0x1401c541a: mov     r9d,0x35
0x1401c5420: xor     r8d,r8d
0x1401c5423: lea     rdx,[rbp+0x17d0]
0x1401c542a: lea     rcx,[rip+0x24a133f]        # 0x142666770
0x1401c5431: call    0x140af0220
0x1401c5436: nop     
0x1401c5437: lea     rcx,[rbp+0x17d0]
0x1401c543e: jmp     0x1401c5799
0x1401c5443: cmp     ebx,0x1c2
0x1401c5449: jl      0x1401c5488
0x1401c544b: lea     rdx,[rip+0x1455326]        # 0x14161a778 ; literal='Population: ~500'
0x1401c5452: lea     rcx,[rbp+0x17f0]
0x1401c5459: call    0x140069710
0x1401c545e: nop     
0x1401c545f: mov     r9d,0x35
0x1401c5465: xor     r8d,r8d
0x1401c5468: lea     rdx,[rbp+0x17f0]
0x1401c546f: lea     rcx,[rip+0x24a12fa]        # 0x142666770
0x1401c5476: call    0x140af0220
0x1401c547b: nop     
0x1401c547c: lea     rcx,[rbp+0x17f0]
0x1401c5483: jmp     0x1401c5799
0x1401c5488: cmp     ebx,0x15e
0x1401c548e: jl      0x1401c54cd
0x1401c5490: lea     rdx,[rip+0x14552f9]        # 0x14161a790 ; literal='Population: ~400'
0x1401c5497: lea     rcx,[rbp+0x1810]
0x1401c549e: call    0x140069710
0x1401c54a3: nop     
0x1401c54a4: mov     r9d,0x35
0x1401c54aa: xor     r8d,r8d
0x1401c54ad: lea     rdx,[rbp+0x1810]
0x1401c54b4: lea     rcx,[rip+0x24a12b5]        # 0x142666770
0x1401c54bb: call    0x140af0220
0x1401c54c0: nop     
0x1401c54c1: lea     rcx,[rbp+0x1810]
0x1401c54c8: jmp     0x1401c5799
0x1401c54cd: cmp     ebx,0xfa
0x1401c54d3: jl      0x1401c5512
0x1401c54d5: lea     rdx,[rip+0x14552cc]        # 0x14161a7a8 ; literal='Population: ~300'
0x1401c54dc: lea     rcx,[rbp+0x1830]
0x1401c54e3: call    0x140069710
0x1401c54e8: nop     
0x1401c54e9: mov     r9d,0x35
0x1401c54ef: xor     r8d,r8d
0x1401c54f2: lea     rdx,[rbp+0x1830]
0x1401c54f9: lea     rcx,[rip+0x24a1270]        # 0x142666770
0x1401c5500: call    0x140af0220
0x1401c5505: nop     
0x1401c5506: lea     rcx,[rbp+0x1830]
0x1401c550d: jmp     0x1401c5799
0x1401c5512: cmp     ebx,0x96
0x1401c5518: jl      0x1401c5557
0x1401c551a: lea     rdx,[rip+0x145529f]        # 0x14161a7c0 ; literal='Population: ~200'
0x1401c5521: lea     rcx,[rbp+0x1850]
0x1401c5528: call    0x140069710
0x1401c552d: nop     
0x1401c552e: mov     r9d,0x35
0x1401c5534: xor     r8d,r8d
0x1401c5537: lea     rdx,[rbp+0x1850]
0x1401c553e: lea     rcx,[rip+0x24a122b]        # 0x142666770
0x1401c5545: call    0x140af0220
0x1401c554a: nop     
0x1401c554b: lea     rcx,[rbp+0x1850]
0x1401c5552: jmp     0x1401c5799
0x1401c5557: cmp     ebx,0x55
0x1401c555a: jl      0x1401c5599
0x1401c555c: lea     rdx,[rip+0x1455275]        # 0x14161a7d8 ; literal='Population: ~100'
0x1401c5563: lea     rcx,[rbp+0x1870]
0x1401c556a: call    0x140069710
0x1401c556f: nop     
0x1401c5570: mov     r9d,0x35
0x1401c5576: xor     r8d,r8d
0x1401c5579: lea     rdx,[rbp+0x1870]
0x1401c5580: lea     rcx,[rip+0x24a11e9]        # 0x142666770
0x1401c5587: call    0x140af0220
0x1401c558c: nop     
0x1401c558d: lea     rcx,[rbp+0x1870]
0x1401c5594: jmp     0x1401c5799
0x1401c5599: cmp     ebx,0x41
0x1401c559c: jl      0x1401c55db
0x1401c559e: lea     rdx,[rip+0x1454fcb]        # 0x14161a570 ; literal='Population: ~75'
0x1401c55a5: lea     rcx,[rbp+0x1890]
0x1401c55ac: call    0x140069710
0x1401c55b1: nop     
0x1401c55b2: mov     r9d,0x35
0x1401c55b8: xor     r8d,r8d
0x1401c55bb: lea     rdx,[rbp+0x1890]
0x1401c55c2: lea     rcx,[rip+0x24a11a7]        # 0x142666770
0x1401c55c9: call    0x140af0220
0x1401c55ce: nop     
0x1401c55cf: lea     rcx,[rbp+0x1890]
0x1401c55d6: jmp     0x1401c5799
0x1401c55db: cmp     ebx,0x37
0x1401c55de: jl      0x1401c561d
0x1401c55e0: lea     rdx,[rip+0x1454f99]        # 0x14161a580 ; literal='Population: ~60'
0x1401c55e7: lea     rcx,[rbp+0x18b0]
0x1401c55ee: call    0x140069710
0x1401c55f3: nop     
0x1401c55f4: mov     r9d,0x35
0x1401c55fa: xor     r8d,r8d
0x1401c55fd: lea     rdx,[rbp+0x18b0]
0x1401c5604: lea     rcx,[rip+0x24a1165]        # 0x142666770
0x1401c560b: call    0x140af0220
0x1401c5610: nop     
0x1401c5611: lea     rcx,[rbp+0x18b0]
0x1401c5618: jmp     0x1401c5799
0x1401c561d: cmp     ebx,0x2d
0x1401c5620: jl      0x1401c565f
0x1401c5622: lea     rdx,[rip+0x1454f67]        # 0x14161a590 ; literal='Population: ~50'
0x1401c5629: lea     rcx,[rbp+0x18d0]
0x1401c5630: call    0x140069710
0x1401c5635: nop     
0x1401c5636: mov     r9d,0x35
0x1401c563c: xor     r8d,r8d
0x1401c563f: lea     rdx,[rbp+0x18d0]
0x1401c5646: lea     rcx,[rip+0x24a1123]        # 0x142666770
0x1401c564d: call    0x140af0220
0x1401c5652: nop     
0x1401c5653: lea     rcx,[rbp+0x18d0]
0x1401c565a: jmp     0x1401c5799
0x1401c565f: cmp     ebx,0x23
0x1401c5662: jl      0x1401c56a1
0x1401c5664: lea     rdx,[rip+0x1454f35]        # 0x14161a5a0 ; literal='Population: ~40'
0x1401c566b: lea     rcx,[rbp+0x18f0]
0x1401c5672: call    0x140069710
0x1401c5677: nop     
0x1401c5678: mov     r9d,0x35
0x1401c567e: xor     r8d,r8d
0x1401c5681: lea     rdx,[rbp+0x18f0]
0x1401c5688: lea     rcx,[rip+0x24a10e1]        # 0x142666770
0x1401c568f: call    0x140af0220
0x1401c5694: nop     
0x1401c5695: lea     rcx,[rbp+0x18f0]
0x1401c569c: jmp     0x1401c5799
0x1401c56a1: cmp     ebx,0x19
0x1401c56a4: jl      0x1401c56e3
0x1401c56a6: lea     rdx,[rip+0x1454f03]        # 0x14161a5b0 ; literal='Population: ~30'
0x1401c56ad: lea     rcx,[rbp+0x1910]
0x1401c56b4: call    0x140069710
0x1401c56b9: nop     
0x1401c56ba: mov     r9d,0x35
0x1401c56c0: xor     r8d,r8d
0x1401c56c3: lea     rdx,[rbp+0x1910]
0x1401c56ca: lea     rcx,[rip+0x24a109f]        # 0x142666770
0x1401c56d1: call    0x140af0220
0x1401c56d6: nop     
0x1401c56d7: lea     rcx,[rbp+0x1910]
0x1401c56de: jmp     0x1401c5799
0x1401c56e3: cmp     ebx,0xf
0x1401c56e6: jl      0x1401c5722
0x1401c56e8: lea     rdx,[rip+0x1454ed1]        # 0x14161a5c0 ; literal='Population: ~20'
0x1401c56ef: lea     rcx,[rbp+0x1930]
0x1401c56f6: call    0x140069710
0x1401c56fb: nop     
0x1401c56fc: mov     r9d,0x35
0x1401c5702: xor     r8d,r8d
0x1401c5705: lea     rdx,[rbp+0x1930]
0x1401c570c: lea     rcx,[rip+0x24a105d]        # 0x142666770
0x1401c5713: call    0x140af0220
0x1401c5718: nop     
0x1401c5719: lea     rcx,[rbp+0x1930]
0x1401c5720: jmp     0x1401c5799
0x1401c5722: cmp     ebx,0x7
0x1401c5725: jl      0x1401c5761
0x1401c5727: lea     rdx,[rip+0x1454ea2]        # 0x14161a5d0 ; literal='Population: ~10'
0x1401c572e: lea     rcx,[rbp+0x1950]
0x1401c5735: call    0x140069710
0x1401c573a: nop     
0x1401c573b: mov     r9d,0x35
0x1401c5741: xor     r8d,r8d
0x1401c5744: lea     rdx,[rbp+0x1950]
0x1401c574b: lea     rcx,[rip+0x24a101e]        # 0x142666770
0x1401c5752: call    0x140af0220
0x1401c5757: nop     
0x1401c5758: lea     rcx,[rbp+0x1950]
0x1401c575f: jmp     0x1401c5799
0x1401c5761: lea     rdx,[rip+0x1454e78]        # 0x14161a5e0 ; literal='Population: <10'
0x1401c5768: lea     rcx,[rbp+0x1970]
0x1401c576f: call    0x140069710
0x1401c5774: nop     
0x1401c5775: mov     r9d,0x35
0x1401c577b: xor     r8d,r8d
0x1401c577e: lea     rdx,[rbp+0x1970]
0x1401c5785: lea     rcx,[rip+0x24a0fe4]        # 0x142666770
0x1401c578c: call    0x140af0220
0x1401c5791: nop     
0x1401c5792: lea     rcx,[rbp+0x1970]
0x1401c5799: call    0x1400693f0
0x1401c579e: mov     rbx,QWORD PTR [rbp-0x20]
0x1401c57a2: lea     rcx,[rbp+0x14d0]
0x1401c57a9: call    0x140070c50
0x1401c57ae: nop     
0x1401c57af: lea     rcx,[rdi+0x20]
0x1401c57b3: xor     r9d,r9d
0x1401c57b6: mov     r8b,0x1
0x1401c57b9: lea     rdx,[rbp+0x14d0]
0x1401c57c0: call    0x140aaafe0
0x1401c57c5: mov     r8d,r15d
0x1401c57c8: mov     edx,0x7
0x1401c57cd: lea     rcx,[rip+0x24a0f9c]        # 0x142666770
0x1401c57d4: call    0x1400bc6e0
0x1401c57d9: lea     rdx,[rip+0x1454e28]        # 0x14161a608 ; literal='Site government: '
0x1401c57e0: lea     rcx,[rbp+0x1030]
0x1401c57e7: call    0x140069710
0x1401c57ec: nop     
0x1401c57ed: lea     rdx,[rbp+0x14d0]
0x1401c57f4: lea     rcx,[rbp+0x1030]
0x1401c57fb: call    0x1400bb2d0
0x1401c5800: lea     rcx,[rbp+0x1030]
0x1401c5807: call    0x1400708f0
0x1401c580c: cmp     rax,r14
0x1401c580f: jb      0x1401c587a
0x1401c5811: lea     r14d,[rsi-0x8]
0x1401c5815: test    r14d,r14d
0x1401c5818: js      0x1401c5830
0x1401c581a: movsxd  rdx,esi
0x1401c581d: sub     rdx,0x8
0x1401c5821: xor     r8d,r8d
0x1401c5824: lea     rcx,[rbp+0x1030]
0x1401c582b: call    0x1400e27f0
0x1401c5830: cmp     r14d,0x3
0x1401c5834: jle     0x1401c5876
0x1401c5836: movsxd  rdx,esi
0x1401c5839: sub     rdx,0xb
0x1401c583d: lea     rcx,[rbp+0x1030]
0x1401c5844: call    0x1400fcb70
0x1401c5849: mov     BYTE PTR [rax],0x2e
0x1401c584c: lea     eax,[rsi-0xa]
0x1401c584f: movsxd  rdx,eax
0x1401c5852: lea     rcx,[rbp+0x1030]
0x1401c5859: call    0x1400fcb70
0x1401c585e: mov     BYTE PTR [rax],0x2e
0x1401c5861: lea     eax,[rsi-0x9]
0x1401c5864: movsxd  rdx,eax
0x1401c5867: lea     rcx,[rbp+0x1030]
0x1401c586e: call    0x1400fcb70
0x1401c5873: mov     BYTE PTR [rax],0x2e
0x1401c5876: mov     r14,QWORD PTR [rbp-0x78]
0x1401c587a: xor     r9d,r9d
0x1401c587d: xor     r8d,r8d
0x1401c5880: lea     rdx,[rbp+0x1030]
0x1401c5887: lea     rcx,[rip+0x24a0ee2]        # 0x142666770
0x1401c588e: call    0x140af0220
0x1401c5893: nop     
0x1401c5894: lea     rcx,[rbp+0x1030]
0x1401c589b: call    0x1400693f0
0x1401c58a0: nop     
0x1401c58a1: lea     rcx,[rbp+0x14d0]
0x1401c58a8: jmp     0x1401c58e2
0x1401c58aa: lea     rdx,[rip+0x1454d3f]        # 0x14161a5f0 ; literal='No civilized population'
0x1401c58b1: lea     rcx,[rbp+0x1990]
0x1401c58b8: call    0x140069710
0x1401c58bd: nop     
0x1401c58be: mov     r9d,0x35
0x1401c58c4: xor     r8d,r8d
0x1401c58c7: lea     rdx,[rbp+0x1990]
0x1401c58ce: lea     rcx,[rip+0x24a0e9b]        # 0x142666770
0x1401c58d5: call    0x140af0220
0x1401c58da: nop     
0x1401c58db: lea     rcx,[rbp+0x1990]
0x1401c58e2: call    0x1400693f0
0x1401c58e7: test    rbx,rbx
0x1401c58ea: je      0x1401c5a00
0x1401c58f0: cmp     rbx,rdi
0x1401c58f3: je      0x1401c5a00
0x1401c58f9: lea     rcx,[rbp+0x14f0]
0x1401c5900: call    0x140070c50
0x1401c5905: nop     
0x1401c5906: lea     rcx,[rbx+0x20]
0x1401c590a: xor     r9d,r9d
0x1401c590d: mov     r8b,0x1
0x1401c5910: lea     rdx,[rbp+0x14f0]
0x1401c5917: call    0x140aaafe0
0x1401c591c: mov     r8d,r15d
0x1401c591f: mov     edx,0x8
0x1401c5924: lea     rcx,[rip+0x24a0e45]        # 0x142666770
0x1401c592b: call    0x1400bc6e0
0x1401c5930: lea     rdx,[rip+0x1454ce9]        # 0x14161a620 ; literal='Civilization: '
0x1401c5937: lea     rcx,[rbp+0x1050]
0x1401c593e: call    0x140069710
0x1401c5943: nop     
0x1401c5944: lea     rdx,[rbp+0x14f0]
0x1401c594b: lea     rcx,[rbp+0x1050]
0x1401c5952: call    0x1400bb2d0
0x1401c5957: lea     rcx,[rbp+0x1050]
0x1401c595e: call    0x1400708f0
0x1401c5963: cmp     rax,r14
0x1401c5966: jb      0x1401c59cd
0x1401c5968: lea     r14d,[rsi-0x8]
0x1401c596c: test    r14d,r14d
0x1401c596f: js      0x1401c5987
0x1401c5971: movsxd  rdx,esi
0x1401c5974: sub     rdx,0x8
0x1401c5978: xor     r8d,r8d
0x1401c597b: lea     rcx,[rbp+0x1050]
0x1401c5982: call    0x1400e27f0
0x1401c5987: cmp     r14d,0x3
0x1401c598b: jle     0x1401c59cd
0x1401c598d: movsxd  rdx,esi
0x1401c5990: sub     rdx,0xb
0x1401c5994: lea     rcx,[rbp+0x1050]
0x1401c599b: call    0x1400fcb70
0x1401c59a0: mov     BYTE PTR [rax],0x2e
0x1401c59a3: lea     eax,[rsi-0xa]
0x1401c59a6: movsxd  rdx,eax
0x1401c59a9: lea     rcx,[rbp+0x1050]
0x1401c59b0: call    0x1400fcb70
0x1401c59b5: mov     BYTE PTR [rax],0x2e
0x1401c59b8: lea     eax,[rsi-0x9]
0x1401c59bb: movsxd  rdx,eax
0x1401c59be: lea     rcx,[rbp+0x1050]
0x1401c59c5: call    0x1400fcb70
0x1401c59ca: mov     BYTE PTR [rax],0x2e
0x1401c59cd: xor     r9d,r9d
0x1401c59d0: xor     r8d,r8d
0x1401c59d3: lea     rdx,[rbp+0x1050]
0x1401c59da: lea     rcx,[rip+0x24a0d8f]        # 0x142666770
0x1401c59e1: call    0x140af0220
0x1401c59e6: nop     
0x1401c59e7: lea     rcx,[rbp+0x1050]
0x1401c59ee: call    0x1400693f0
0x1401c59f3: nop     
0x1401c59f4: lea     rcx,[rbp+0x14f0]
0x1401c59fb: call    0x1400693f0
0x1401c5a00: mov     edx,DWORD PTR [rip+0x21e9ff2]        # 0x1423af9f8
0x1401c5a06: lea     rcx,[rip+0x222816b]        # 0x1423edb78
0x1401c5a0d: call    0x14007f0b0
0x1401c5a12: mov     r13,rax
0x1401c5a15: mov     edx,DWORD PTR [rip+0x21e9fd5]        # 0x1423af9f0
0x1401c5a1b: lea     rcx,[rip+0x2228156]        # 0x1423edb78
0x1401c5a22: call    0x14007f0b0
0x1401c5a27: mov     QWORD PTR [rbp-0x10],rax
0x1401c5a2b: test    rax,rax
0x1401c5a2e: je      0x1401c5e3e
0x1401c5a34: test    r13,r13
0x1401c5a37: je      0x1401c5e3e
0x1401c5a3d: test    rbx,rbx
0x1401c5a40: je      0x1401c5e3e
0x1401c5a46: test    rdi,rdi
0x1401c5a49: je      0x1401c5ea6
0x1401c5a4f: cmp     rax,rbx
0x1401c5a52: je      0x1401c5e43
0x1401c5a58: lea     rcx,[rax+0x1028]
0x1401c5a5f: mov     edx,DWORD PTR [rbx+0x4]
0x1401c5a62: call    0x1401010b0
0x1401c5a67: mov     r14,rax
0x1401c5a6a: lea     rcx,[r13+0x1028]
0x1401c5a71: mov     edx,DWORD PTR [rdi+0x4]
0x1401c5a74: call    0x1401010b0
0x1401c5a79: mov     rbx,rax
0x1401c5a7c: mov     r8d,r15d
0x1401c5a7f: mov     edx,0x9
0x1401c5a84: lea     rcx,[rip+0x24a0ce5]        # 0x142666770
0x1401c5a8b: call    0x1400bc6e0
0x1401c5a90: test    rbx,rbx
0x1401c5a93: je      0x1401c5c5d
0x1401c5a99: movzx   eax,WORD PTR [rbx+0x4]
0x1401c5a9d: cmp     ax,0x3
0x1401c5aa1: je      0x1401c5ae4
0x1401c5aa3: cmp     ax,0x4
0x1401c5aa7: jne     0x1401c5c5d
0x1401c5aad: lea     rdx,[rip+0x1454b8c]        # 0x14161a640 ; literal='They accept '
0x1401c5ab4: lea     rcx,[rbp+0x19b0]
0x1401c5abb: call    0x140069710
0x1401c5ac0: nop     
0x1401c5ac1: xor     r9d,r9d
0x1401c5ac4: mov     r8b,0x3
0x1401c5ac7: lea     rdx,[rbp+0x19b0]
0x1401c5ace: lea     rcx,[rip+0x24a0c9b]        # 0x142666770
0x1401c5ad5: call    0x140af0220
0x1401c5ada: nop     
0x1401c5adb: lea     rcx,[rbp+0x19b0]
0x1401c5ae2: jmp     0x1401c5b19
0x1401c5ae4: lea     rdx,[rip+0x1454b45]        # 0x14161a630 ; literal='They offer '
0x1401c5aeb: lea     rcx,[rbp+0x19d0]
0x1401c5af2: call    0x140069710
0x1401c5af7: nop     
0x1401c5af8: xor     r9d,r9d
0x1401c5afb: mov     r8b,0x3
0x1401c5afe: lea     rdx,[rbp+0x19d0]
0x1401c5b05: lea     rcx,[rip+0x24a0c64]        # 0x142666770
0x1401c5b0c: call    0x140af0220
0x1401c5b11: nop     
0x1401c5b12: lea     rcx,[rbp+0x19d0]
0x1401c5b19: call    0x1400693f0
0x1401c5b1e: mov     ecx,DWORD PTR [rbx+0x44]
0x1401c5b21: test    ecx,ecx
0x1401c5b23: je      0x1401c5be4
0x1401c5b29: sub     ecx,0x1
0x1401c5b2c: je      0x1401c5bad
0x1401c5b2e: sub     ecx,0x1
0x1401c5b31: je      0x1401c5b76
0x1401c5b33: cmp     ecx,0x1
0x1401c5b36: jne     0x1401c5c1e
0x1401c5b3c: lea     rdx,[rip+0x144e4d9]        # 0x14161401c ; literal='Winter'
0x1401c5b43: lea     rcx,[rbp+0x19f0]
0x1401c5b4a: call    0x140069710
0x1401c5b4f: nop     
0x1401c5b50: xor     r9d,r9d
0x1401c5b53: mov     r8b,0x3
0x1401c5b56: lea     rdx,[rbp+0x19f0]
0x1401c5b5d: lea     rcx,[rip+0x24a0c0c]        # 0x142666770
0x1401c5b64: call    0x140af0220
0x1401c5b69: nop     
0x1401c5b6a: lea     rcx,[rbp+0x19f0]
0x1401c5b71: jmp     0x1401c5c19
0x1401c5b76: lea     rdx,[rip+0x144e497]        # 0x141614014 ; literal='Autumn'
0x1401c5b7d: lea     rcx,[rbp+0x1a10]
0x1401c5b84: call    0x140069710
0x1401c5b89: nop     
0x1401c5b8a: xor     r9d,r9d
0x1401c5b8d: mov     r8b,0x3
0x1401c5b90: lea     rdx,[rbp+0x1a10]
0x1401c5b97: lea     rcx,[rip+0x24a0bd2]        # 0x142666770
0x1401c5b9e: call    0x140af0220
0x1401c5ba3: nop     
0x1401c5ba4: lea     rcx,[rbp+0x1a10]
0x1401c5bab: jmp     0x1401c5c19
0x1401c5bad: lea     rdx,[rip+0x144e458]        # 0x14161400c ; literal='Summer'
0x1401c5bb4: lea     rcx,[rbp+0x1a30]
0x1401c5bbb: call    0x140069710
0x1401c5bc0: nop     
0x1401c5bc1: xor     r9d,r9d
0x1401c5bc4: mov     r8b,0x3
0x1401c5bc7: lea     rdx,[rbp+0x1a30]
0x1401c5bce: lea     rcx,[rip+0x24a0b9b]        # 0x142666770
0x1401c5bd5: call    0x140af0220
0x1401c5bda: nop     
0x1401c5bdb: lea     rcx,[rbp+0x1a30]
0x1401c5be2: jmp     0x1401c5c19
0x1401c5be4: lea     rdx,[rip+0x144e419]        # 0x141614004 ; literal='Spring'
0x1401c5beb: lea     rcx,[rbp+0x1a50]
0x1401c5bf2: call    0x140069710
0x1401c5bf7: nop     
0x1401c5bf8: xor     r9d,r9d
0x1401c5bfb: mov     r8b,0x3
0x1401c5bfe: lea     rdx,[rbp+0x1a50]
0x1401c5c05: lea     rcx,[rip+0x24a0b64]        # 0x142666770
0x1401c5c0c: call    0x140af0220
0x1401c5c11: nop     
0x1401c5c12: lea     rcx,[rbp+0x1a50]
0x1401c5c19: call    0x1400693f0
0x1401c5c1e: lea     rdx,[rip+0x1454a2b]        # 0x14161a650 ; literal=' tribute'
0x1401c5c25: lea     rcx,[rbp+0x1a70]
0x1401c5c2c: call    0x140069710
0x1401c5c31: nop     
0x1401c5c32: xor     r9d,r9d
0x1401c5c35: xor     r8d,r8d
0x1401c5c38: lea     rdx,[rbp+0x1a70]
0x1401c5c3f: lea     rcx,[rip+0x24a0b2a]        # 0x142666770
0x1401c5c46: call    0x140af0220
0x1401c5c4b: nop     
0x1401c5c4c: lea     rcx,[rbp+0x1a70]
0x1401c5c53: call    0x1400693f0
0x1401c5c58: jmp     0x1401c5e43
0x1401c5c5d: test    r14,r14
0x1401c5c60: je      0x1401c5e02
0x1401c5c66: movsx   rax,WORD PTR [r14+0x4]
0x1401c5c6b: cmp     eax,0x5
0x1401c5c6e: ja      0x1401c5e43
0x1401c5c74: lea     rdx,[rip+0xffffffffffe3a385]        # 0x140000000
0x1401c5c7b: mov     ecx,DWORD PTR [rdx+rax*4+0x1d6540]
0x1401c5c82: add     rcx,rdx
0x1401c5c85: jmp     rcx
0x1401c5c87: test    BYTE PTR [r14+0x40],0x4
0x1401c5c8c: je      0x1401c5ccd
0x1401c5c8e: lea     rdx,[rip+0x14549cb]        # 0x14161a660 ; literal='Alliance'
0x1401c5c95: lea     rcx,[rbp+0x1a90]
0x1401c5c9c: call    0x140069710
0x1401c5ca1: nop     
0x1401c5ca2: xor     r9d,r9d
0x1401c5ca5: xor     r8d,r8d
0x1401c5ca8: lea     rdx,[rbp+0x1a90]
0x1401c5caf: lea     rcx,[rip+0x24a0aba]        # 0x142666770
0x1401c5cb6: call    0x140af0220
0x1401c5cbb: nop     
0x1401c5cbc: lea     rcx,[rbp+0x1a90]
0x1401c5cc3: call    0x1400693f0
0x1401c5cc8: jmp     0x1401c5e43
0x1401c5ccd: lea     rdx,[rip+0x1438f50]        # 0x1415fec24 ; literal='Peace'
0x1401c5cd4: lea     rcx,[rbp+0x1ab0]
0x1401c5cdb: call    0x140069710
0x1401c5ce0: nop     
0x1401c5ce1: xor     r9d,r9d
0x1401c5ce4: xor     r8d,r8d
0x1401c5ce7: lea     rdx,[rbp+0x1ab0]
0x1401c5cee: lea     rcx,[rip+0x24a0a7b]        # 0x142666770
0x1401c5cf5: call    0x140af0220
0x1401c5cfa: nop     
0x1401c5cfb: lea     rcx,[rbp+0x1ab0]
0x1401c5d02: call    0x1400693f0
0x1401c5d07: jmp     0x1401c5e43
0x1401c5d0c: lea     rdx,[rip+0x1454959]        # 0x14161a66c ; literal='War'
0x1401c5d13: lea     rcx,[rbp+0x1ad0]
0x1401c5d1a: call    0x140069710
0x1401c5d1f: nop     
0x1401c5d20: xor     r9d,r9d
0x1401c5d23: xor     r8d,r8d
0x1401c5d26: lea     rdx,[rbp+0x1ad0]
0x1401c5d2d: lea     rcx,[rip+0x24a0a3c]        # 0x142666770
0x1401c5d34: call    0x140af0220
0x1401c5d39: nop     
0x1401c5d3a: lea     rcx,[rbp+0x1ad0]
0x1401c5d41: call    0x1400693f0
0x1401c5d46: jmp     0x1401c5e43
0x1401c5d4b: lea     rdx,[rip+0x1454c16]        # 0x14161a968 ; literal='They offer tribute'
0x1401c5d52: lea     rcx,[rbp+0x1af0]
0x1401c5d59: call    0x140069710
0x1401c5d5e: nop     
0x1401c5d5f: xor     r9d,r9d
0x1401c5d62: xor     r8d,r8d
0x1401c5d65: lea     rdx,[rbp+0x1af0]
0x1401c5d6c: lea     rcx,[rip+0x24a09fd]        # 0x142666770
0x1401c5d73: call    0x140af0220
0x1401c5d78: nop     
0x1401c5d79: lea     rcx,[rbp+0x1af0]
0x1401c5d80: call    0x1400693f0
0x1401c5d85: jmp     0x1401c5e43
0x1401c5d8a: lea     rdx,[rip+0x1454bef]        # 0x14161a980 ; literal='They accept tribute'
0x1401c5d91: lea     rcx,[rbp+0x1b10]
0x1401c5d98: call    0x140069710
0x1401c5d9d: nop     
0x1401c5d9e: xor     r9d,r9d
0x1401c5da1: xor     r8d,r8d
0x1401c5da4: lea     rdx,[rbp+0x1b10]
0x1401c5dab: lea     rcx,[rip+0x24a09be]        # 0x142666770
0x1401c5db2: call    0x140af0220
0x1401c5db7: nop     
0x1401c5db8: lea     rcx,[rbp+0x1b10]
0x1401c5dbf: call    0x1400693f0
0x1401c5dc4: jmp     0x1401c5e43
0x1401c5dc6: lea     rdx,[rip+0x1454bcb]        # 0x14161a998 ; literal='Skirmishing'
0x1401c5dcd: lea     rcx,[rbp+0x1b30]
0x1401c5dd4: call    0x140069710
0x1401c5dd9: nop     
0x1401c5dda: xor     r9d,r9d
0x1401c5ddd: xor     r8d,r8d
0x1401c5de0: lea     rdx,[rbp+0x1b30]
0x1401c5de7: lea     rcx,[rip+0x24a0982]        # 0x142666770
0x1401c5dee: call    0x140af0220
0x1401c5df3: nop     
0x1401c5df4: lea     rcx,[rbp+0x1b30]
0x1401c5dfb: call    0x1400693f0
0x1401c5e00: jmp     0x1401c5e43
0x1401c5e02: lea     rdx,[rip+0x1454b4f]        # 0x14161a958 ; literal='No contact'
0x1401c5e09: lea     rcx,[rbp+0x1b50]
0x1401c5e10: call    0x140069710
0x1401c5e15: nop     
0x1401c5e16: xor     r9d,r9d
0x1401c5e19: xor     r8d,r8d
0x1401c5e1c: lea     rdx,[rbp+0x1b50]
0x1401c5e23: lea     rcx,[rip+0x24a0946]        # 0x142666770
0x1401c5e2a: call    0x140af0220
0x1401c5e2f: nop     
0x1401c5e30: lea     rcx,[rbp+0x1b50]
0x1401c5e37: call    0x1400693f0
0x1401c5e3c: jmp     0x1401c5e43
0x1401c5e3e: test    rdi,rdi
0x1401c5e41: je      0x1401c5ea6
0x1401c5e43: mov     edx,0x8
0x1401c5e48: mov     rcx,rdi
0x1401c5e4b: call    0x1409cbf00
0x1401c5e50: cmp     eax,DWORD PTR [rip+0x21e9b9e]        # 0x1423af9f4
0x1401c5e56: jne     0x1401c5ea6
0x1401c5e58: mov     r8d,r15d
0x1401c5e5b: mov     edx,0xa
0x1401c5e60: lea     rcx,[rip+0x24a0909]        # 0x142666770
0x1401c5e67: call    0x1400bc6e0
0x1401c5e6c: lea     rdx,[rip+0x1454b35]        # 0x14161a9a8 ; literal='Economically linked to you'
0x1401c5e73: lea     rcx,[rbp+0x1b70]
0x1401c5e7a: call    0x140069710
0x1401c5e7f: nop     
0x1401c5e80: xor     r9d,r9d
0x1401c5e83: xor     r8d,r8d
0x1401c5e86: lea     rdx,[rbp+0x1b70]
0x1401c5e8d: lea     rcx,[rip+0x24a08dc]        # 0x142666770
0x1401c5e94: call    0x140af0220
0x1401c5e99: nop     
0x1401c5e9a: lea     rcx,[rbp+0x1b70]
0x1401c5ea1: call    0x1400693f0
0x1401c5ea6: lea     eax,[r12-0xa]
0x1401c5eab: mov     DWORD PTR [rbp-0x68],eax
0x1401c5eae: mov     rax,QWORD PTR [rsp+0x78]
0x1401c5eb3: lea     r13,[rax+0x1f8]
0x1401c5eba: lea     r14,[rax+0x1e0]
0x1401c5ec1: mov     QWORD PTR [rbp-0x28],r14
0x1401c5ec5: mov     rcx,r14
0x1401c5ec8: call    0x140070410
0x1401c5ecd: mov     rbx,rax
0x1401c5ed0: mov     rcx,r13
0x1401c5ed3: call    0x140070410
0x1401c5ed8: add     ebx,eax
0x1401c5eda: mov     rcx,r14
0x1401c5edd: call    0x140070410
0x1401c5ee2: lea     edi,[rbx+0x1]
0x1401c5ee5: test    rax,rax
0x1401c5ee8: cmove   edi,ebx
0x1401c5eeb: mov     rcx,r13
0x1401c5eee: call    0x140070410
0x1401c5ef3: lea     ecx,[rdi+0x1]
0x1401c5ef6: test    rax,rax
0x1401c5ef9: cmove   ecx,edi
0x1401c5efc: mov     DWORD PTR [rsp+0x74],ecx
0x1401c5f00: mov     rcx,r14
0x1401c5f03: call    0x140070410
0x1401c5f08: mov     rdi,rax
0x1401c5f0b: mov     QWORD PTR [rbp-0x30],rax
0x1401c5f0f: mov     rcx,r13
0x1401c5f12: call    0x140070410
0x1401c5f17: mov     rbx,rax
0x1401c5f1a: mov     eax,DWORD PTR [rsp+0x74]
0x1401c5f1e: mov     ecx,DWORD PTR [rbp-0x68]
0x1401c5f21: cmp     eax,ecx
0x1401c5f23: jle     0x1401c5f56
0x1401c5f25: sub     eax,ecx
0x1401c5f27: mov     r8d,eax
0x1401c5f2a: mov     r9d,DWORD PTR [rbp-0x6c]
0x1401c5f2e: xchg    ax,ax
0x1401c5f30: lea     eax,[rbx-0x1]
0x1401c5f33: mov     ecx,ebx
0x1401c5f35: cmp     edi,ebx
0x1401c5f37: cmovle  ecx,eax
0x1401c5f3a: lea     eax,[rdi-0x1]
0x1401c5f3d: cmovle  eax,edi
0x1401c5f40: sub     r8,0x1
0x1401c5f44: mov     edi,eax
0x1401c5f46: mov     ebx,ecx
0x1401c5f48: jne     0x1401c5f30
0x1401c5f4a: mov     QWORD PTR [rbp-0x30],rdi
0x1401c5f4e: mov     QWORD PTR [rbp-0x60],r12
0x1401c5f52: mov     DWORD PTR [rbp-0x6c],r9d
0x1401c5f56: mov     edx,0xb
0x1401c5f5b: mov     DWORD PTR [rbp-0x48],edx
0x1401c5f5e: test    ebx,ebx
0x1401c5f60: jle     0x1401c6139
0x1401c5f66: mov     r8d,r15d
0x1401c5f69: lea     rcx,[rip+0x24a0800]        # 0x142666770
0x1401c5f70: call    0x1400bc6e0
0x1401c5f75: mov     DWORD PTR [rbp-0x48],0xc
0x1401c5f7c: xor     r8d,r8d
0x1401c5f7f: mov     edx,0x7
0x1401c5f84: mov     r9b,0x1
0x1401c5f87: lea     rcx,[rip+0x24a07e2]        # 0x142666770
0x1401c5f8e: call    0x1400bc6f0
0x1401c5f93: lea     rdx,[rip+0x1454a2e]        # 0x14161a9c8 ; literal='Prisoners'
0x1401c5f9a: lea     rcx,[rbp+0x3850]
0x1401c5fa1: call    0x140069710
0x1401c5fa6: nop     
0x1401c5fa7: xor     r9d,r9d
0x1401c5faa: xor     r8d,r8d
0x1401c5fad: lea     rdx,[rbp+0x3850]
0x1401c5fb4: lea     rcx,[rip+0x24a07b5]        # 0x142666770
0x1401c5fbb: call    0x140af0220
0x1401c5fc0: nop     
0x1401c5fc1: lea     rcx,[rbp+0x3850]
0x1401c5fc8: call    0x1400693f0
0x1401c5fcd: xor     r8d,r8d
0x1401c5fd0: mov     edx,0x7
0x1401c5fd5: xor     r9d,r9d
0x1401c5fd8: lea     rcx,[rip+0x24a0791]        # 0x142666770
0x1401c5fdf: call    0x1400bc6f0
0x1401c5fe4: xor     r14d,r14d
0x1401c5fe7: mov     rcx,r13
0x1401c5fea: call    0x140070410
0x1401c5fef: test    rax,rax
0x1401c5ff2: je      0x1401c6135
0x1401c5ff8: mov     edi,DWORD PTR [rbp-0x48]
0x1401c5ffb: mov     r12,QWORD PTR [rbp-0x78]
0x1401c5fff: nop     
0x1401c6000: cmp     r14d,ebx
0x1401c6003: jge     0x1401c612a
0x1401c6009: lea     rcx,[rbp+0x1070]
0x1401c6010: call    0x140070c50
0x1401c6015: nop     
0x1401c6016: lea     rcx,[rbp+0x810]
0x1401c601d: call    0x140073640
0x1401c6022: movsxd  rdx,r14d
0x1401c6025: mov     rcx,r13
0x1401c6028: call    0x1400707e0
0x1401c602d: mov     r8,QWORD PTR [rax]
0x1401c6030: mov     WORD PTR [rsp+0x28],0x2
0x1401c6037: mov     WORD PTR [rsp+0x20],0x1
0x1401c603e: lea     r9,[rbp+0x810]
0x1401c6045: mov     r8d,DWORD PTR [r8+0xe0]
0x1401c604c: lea     rdx,[rbp+0x1070]
0x1401c6053: lea     rcx,[rip+0x234ffde]        # 0x142516038
0x1401c605a: call    0x140ba79f0
0x1401c605f: mov     r8d,r15d
0x1401c6062: mov     edx,edi
0x1401c6064: lea     rcx,[rip+0x24a0705]        # 0x142666770
0x1401c606b: call    0x1400bc6e0
0x1401c6070: inc     edi
0x1401c6072: lea     rcx,[rbp+0x1070]
0x1401c6079: call    0x1400708f0
0x1401c607e: cmp     rax,r12
0x1401c6081: jb      0x1401c60ed
0x1401c6083: lea     r15d,[rsi-0x8]
0x1401c6087: test    r15d,r15d
0x1401c608a: js      0x1401c60a2
0x1401c608c: movsxd  rdx,esi
0x1401c608f: sub     rdx,0x8
0x1401c6093: xor     r8d,r8d
0x1401c6096: lea     rcx,[rbp+0x1070]
0x1401c609d: call    0x1400e27f0
0x1401c60a2: cmp     r15d,0x3
0x1401c60a6: jle     0x1401c60e8
0x1401c60a8: movsxd  rdx,esi
0x1401c60ab: sub     rdx,0xb
0x1401c60af: lea     rcx,[rbp+0x1070]
0x1401c60b6: call    0x1400fcb70
0x1401c60bb: mov     BYTE PTR [rax],0x2e
0x1401c60be: lea     eax,[rsi-0xa]
0x1401c60c1: movsxd  rdx,eax
0x1401c60c4: lea     rcx,[rbp+0x1070]
0x1401c60cb: call    0x1400fcb70
0x1401c60d0: mov     BYTE PTR [rax],0x2e
0x1401c60d3: lea     eax,[rsi-0x9]
0x1401c60d6: movsxd  rdx,eax
0x1401c60d9: lea     rcx,[rbp+0x1070]
0x1401c60e0: call    0x1400fcb70
0x1401c60e5: mov     BYTE PTR [rax],0x2e
0x1401c60e8: mov     r15d,DWORD PTR [rsp+0x70]
0x1401c60ed: xor     r9d,r9d
0x1401c60f0: xor     r8d,r8d
0x1401c60f3: lea     rdx,[rbp+0x1070]
0x1401c60fa: lea     rcx,[rip+0x24a066f]        # 0x142666770
0x1401c6101: call    0x140af0220
0x1401c6106: nop     
0x1401c6107: lea     rcx,[rbp+0x1070]
0x1401c610e: call    0x1400693f0
0x1401c6113: inc     r14d
0x1401c6116: mov     rcx,r13
0x1401c6119: call    0x140070410
0x1401c611e: movsxd  rcx,r14d
0x1401c6121: cmp     rcx,rax
0x1401c6124: jb      0x1401c6000
0x1401c612a: mov     DWORD PTR [rbp-0x48],edi
0x1401c612d: mov     r12,QWORD PTR [rbp-0x60]
0x1401c6131: mov     rdi,QWORD PTR [rbp-0x30]
0x1401c6135: mov     r14,QWORD PTR [rbp-0x28]
0x1401c6139: test    edi,edi
0x1401c613b: jle     0x1401c62e1
0x1401c6141: mov     r8d,r15d
0x1401c6144: mov     ebx,DWORD PTR [rbp-0x48]
0x1401c6147: mov     edx,ebx
0x1401c6149: lea     rcx,[rip+0x24a0620]        # 0x142666770
0x1401c6150: call    0x1400bc6e0
0x1401c6155: inc     ebx
0x1401c6157: xor     r8d,r8d
0x1401c615a: mov     edx,0x7
0x1401c615f: mov     r9b,0x1
0x1401c6162: lea     rcx,[rip+0x24a0607]        # 0x142666770
0x1401c6169: call    0x1400bc6f0
0x1401c616e: lea     rdx,[rip+0x1454863]        # 0x14161a9d8 ; literal='Artifacts (Rumored)'
0x1401c6175: lea     rcx,[rbp+0x3830]
0x1401c617c: call    0x140069710
0x1401c6181: nop     
0x1401c6182: xor     r9d,r9d
0x1401c6185: xor     r8d,r8d
0x1401c6188: lea     rdx,[rbp+0x3830]
0x1401c618f: lea     rcx,[rip+0x24a05da]        # 0x142666770
0x1401c6196: call    0x140af0220
0x1401c619b: nop     
0x1401c619c: lea     rcx,[rbp+0x3830]
0x1401c61a3: call    0x1400693f0
0x1401c61a8: xor     r8d,r8d
0x1401c61ab: mov     edx,0x7
0x1401c61b0: xor     r9d,r9d
0x1401c61b3: lea     rcx,[rip+0x24a05b6]        # 0x142666770
0x1401c61ba: call    0x1400bc6f0
0x1401c61bf: mov     rcx,r14
0x1401c61c2: call    0x140070410
0x1401c61c7: test    rax,rax
0x1401c61ca: je      0x1401c62e1
0x1401c61d0: mov     r12,QWORD PTR [rbp-0x78]
0x1401c61d4: xor     r13d,r13d
0x1401c61d7: cmp     r13d,edi
0x1401c61da: jge     0x1401c62dd
0x1401c61e0: lea     rcx,[rbp+0x1090]
0x1401c61e7: call    0x140070c50
0x1401c61ec: nop     
0x1401c61ed: movsxd  rdx,r13d
0x1401c61f0: mov     rcx,r14
0x1401c61f3: call    0x1400707e0
0x1401c61f8: mov     r8,QWORD PTR [rax]
0x1401c61fb: xor     r9d,r9d
0x1401c61fe: mov     r8d,DWORD PTR [r8]
0x1401c6201: lea     rdx,[rbp+0x1090]
0x1401c6208: lea     rcx,[rip+0x234fe29]        # 0x142516038
0x1401c620f: call    0x140ba8ee0
0x1401c6214: mov     r8d,r15d
0x1401c6217: mov     edx,ebx
0x1401c6219: lea     rcx,[rip+0x24a0550]        # 0x142666770
0x1401c6220: call    0x1400bc6e0
0x1401c6225: inc     ebx
0x1401c6227: mov     DWORD PTR [rbp-0x48],ebx
0x1401c622a: lea     rcx,[rbp+0x1090]
0x1401c6231: call    0x1400708f0
0x1401c6236: cmp     rax,r12
0x1401c6239: jb      0x1401c62a0
0x1401c623b: lea     ebx,[rsi-0x8]
0x1401c623e: test    ebx,ebx
0x1401c6240: js      0x1401c6258
0x1401c6242: movsxd  rdx,esi
0x1401c6245: sub     rdx,0x8
0x1401c6249: xor     r8d,r8d
0x1401c624c: lea     rcx,[rbp+0x1090]
0x1401c6253: call    0x1400e27f0
0x1401c6258: cmp     ebx,0x3
0x1401c625b: jle     0x1401c629d
0x1401c625d: movsxd  rdx,esi
0x1401c6260: sub     rdx,0xb
0x1401c6264: lea     rcx,[rbp+0x1090]
0x1401c626b: call    0x1400fcb70
0x1401c6270: mov     BYTE PTR [rax],0x2e
0x1401c6273: lea     eax,[rsi-0xa]
0x1401c6276: movsxd  rdx,eax
0x1401c6279: lea     rcx,[rbp+0x1090]
0x1401c6280: call    0x1400fcb70
0x1401c6285: mov     BYTE PTR [rax],0x2e
0x1401c6288: lea     eax,[rsi-0x9]
0x1401c628b: movsxd  rdx,eax
0x1401c628e: lea     rcx,[rbp+0x1090]
0x1401c6295: call    0x1400fcb70
0x1401c629a: mov     BYTE PTR [rax],0x2e
0x1401c629d: mov     ebx,DWORD PTR [rbp-0x48]
0x1401c62a0: xor     r9d,r9d
0x1401c62a3: xor     r8d,r8d
0x1401c62a6: lea     rdx,[rbp+0x1090]
0x1401c62ad: lea     rcx,[rip+0x24a04bc]        # 0x142666770
0x1401c62b4: call    0x140af0220
0x1401c62b9: nop     
0x1401c62ba: lea     rcx,[rbp+0x1090]
0x1401c62c1: call    0x1400693f0
0x1401c62c6: inc     r13d
0x1401c62c9: mov     rcx,r14
0x1401c62cc: call    0x140070410
0x1401c62d1: movsxd  rcx,r13d
0x1401c62d4: cmp     rcx,rax
0x1401c62d7: jb      0x1401c61d7
0x1401c62dd: mov     r12,QWORD PTR [rbp-0x60]
0x1401c62e1: mov     rbx,QWORD PTR [rbp-0x20]
0x1401c62e5: cmp     QWORD PTR [rbp-0x10],rbx
0x1401c62e9: jne     0x1401c651f
0x1401c62ef: test    rbx,rbx
0x1401c62f2: je      0x1401c651f
0x1401c62f8: mov     r13,QWORD PTR [rsp+0x78]
0x1401c62fd: movzx   r8d,WORD PTR [r13+0x1d4]
0x1401c6305: movzx   edx,WORD PTR [r13+0x1d0]
0x1401c630d: mov     rcx,QWORD PTR [rip+0x2341bc4]        # 0x142507ed8
0x1401c6314: call    0x1401bea60
0x1401c6319: mov     edi,DWORD PTR [rbp-0x6c]
0x1401c631c: test    eax,eax
0x1401c631e: js      0x1401c64bf
0x1401c6324: cmp     BYTE PTR [r13+0x210],0x0
0x1401c632c: jne     0x1401c638e
0x1401c632e: xor     r8d,r8d
0x1401c6331: xor     edx,edx
0x1401c6333: mov     r9b,0x1
0x1401c6336: lea     rcx,[rip+0x24a0433]        # 0x142666770
0x1401c633d: call    0x1400bc6f0
0x1401c6342: mov     r8d,r15d
0x1401c6345: lea     edx,[rdi-0x1]
0x1401c6348: lea     rcx,[rip+0x24a0421]        # 0x142666770
0x1401c634f: call    0x1400bc6e0
0x1401c6354: lea     rdx,[rip+0x1454695]        # 0x14161a9f0 ; literal='Cannot raid your civilization'
0x1401c635b: lea     rcx,[rbp+0x3810]
0x1401c6362: call    0x140069710
0x1401c6367: nop     
0x1401c6368: xor     r9d,r9d
0x1401c636b: xor     r8d,r8d
0x1401c636e: lea     rdx,[rbp+0x3810]
0x1401c6375: lea     rcx,[rip+0x24a03f4]        # 0x142666770
0x1401c637c: call    0x140af0220
0x1401c6381: nop     
0x1401c6382: lea     rcx,[rbp+0x3810]
0x1401c6389: jmp     0x1401c66ae
0x1401c638e: cmp     QWORD PTR [r13+0x1c8],0x0
0x1401c6396: jne     0x1401c63f8
0x1401c6398: xor     r8d,r8d
0x1401c639b: xor     edx,edx
0x1401c639d: mov     r9b,0x1
0x1401c63a0: lea     rcx,[rip+0x24a03c9]        # 0x142666770
0x1401c63a7: call    0x1400bc6f0
0x1401c63ac: mov     r8d,r15d
0x1401c63af: lea     edx,[rdi-0x1]
0x1401c63b2: lea     rcx,[rip+0x24a03b7]        # 0x142666770
0x1401c63b9: call    0x1400bc6e0
0x1401c63be: lea     rdx,[rip+0x145464b]        # 0x14161aa10 ; literal='Cannot make request without leader'
0x1401c63c5: lea     rcx,[rbp+0x37f0]
0x1401c63cc: call    0x140069710
0x1401c63d1: nop     
0x1401c63d2: xor     r9d,r9d
0x1401c63d5: xor     r8d,r8d
0x1401c63d8: lea     rdx,[rbp+0x37f0]
0x1401c63df: lea     rcx,[rip+0x24a038a]        # 0x142666770
0x1401c63e6: call    0x140af0220
0x1401c63eb: nop     
0x1401c63ec: lea     rcx,[rbp+0x37f0]
0x1401c63f3: jmp     0x1401c66ae
0x1401c63f8: lea     rcx,[r13+0x218]
0x1401c63ff: call    0x140070410
0x1401c6404: xor     r8d,r8d
0x1401c6407: mov     r9b,0x1
0x1401c640a: lea     rcx,[rip+0x24a035f]        # 0x142666770
0x1401c6411: test    rax,rax
0x1401c6414: jne     0x1401c6469
0x1401c6416: xor     edx,edx
0x1401c6418: call    0x1400bc6f0
0x1401c641d: mov     r8d,r15d
0x1401c6420: lea     edx,[rdi-0x1]
0x1401c6423: lea     rcx,[rip+0x24a0346]        # 0x142666770
0x1401c642a: call    0x1400bc6e0
0x1401c642f: lea     rdx,[rip+0x1454602]        # 0x14161aa38 ; literal='No workers available'
0x1401c6436: lea     rcx,[rbp+0x37d0]
0x1401c643d: call    0x140069710
0x1401c6442: nop     
0x1401c6443: xor     r9d,r9d
0x1401c6446: xor     r8d,r8d
0x1401c6449: lea     rdx,[rbp+0x37d0]
0x1401c6450: lea     rcx,[rip+0x24a0319]        # 0x142666770
0x1401c6457: call    0x140af0220
0x1401c645c: nop     
0x1401c645d: lea     rcx,[rbp+0x37d0]
0x1401c6464: jmp     0x1401c66ae
0x1401c6469: mov     edx,0x7
0x1401c646e: call    0x1400bc6f0
0x1401c6473: mov     r8d,r15d
0x1401c6476: lea     edx,[rdi-0x1]
0x1401c6479: lea     rcx,[rip+0x24a02f0]        # 0x142666770
0x1401c6480: call    0x1400bc6e0
0x1401c6485: lea     rdx,[rip+0x14545c4]        # 0x14161aa50 ; literal='Click to request workers'
0x1401c648c: lea     rcx,[rbp+0x37b0]
0x1401c6493: call    0x140069710
0x1401c6498: nop     
0x1401c6499: xor     r9d,r9d
0x1401c649c: xor     r8d,r8d
0x1401c649f: lea     rdx,[rbp+0x37b0]
0x1401c64a6: lea     rcx,[rip+0x24a02c3]        # 0x142666770
0x1401c64ad: call    0x140af0220
0x1401c64b2: nop     
0x1401c64b3: lea     rcx,[rbp+0x37b0]
0x1401c64ba: jmp     0x1401c66ae
0x1401c64bf: xor     r8d,r8d
0x1401c64c2: xor     edx,edx
0x1401c64c4: mov     r9b,0x1
0x1401c64c7: lea     rcx,[rip+0x24a02a2]        # 0x142666770
0x1401c64ce: call    0x1400bc6f0
0x1401c64d3: mov     r8d,r15d
0x1401c64d6: lea     edx,[rdi-0x1]
0x1401c64d9: lea     rcx,[rip+0x24a0290]        # 0x142666770
0x1401c64e0: call    0x1400bc6e0
0x1401c64e5: lea     rdx,[rip+0x1454584]        # 0x14161aa70 ; literal='Inaccessible mission location'
0x1401c64ec: lea     rcx,[rbp+0x3790]
0x1401c64f3: call    0x140069710
0x1401c64f8: nop     
0x1401c64f9: xor     r9d,r9d
0x1401c64fc: xor     r8d,r8d
0x1401c64ff: lea     rdx,[rbp+0x3790]
0x1401c6506: lea     rcx,[rip+0x24a0263]        # 0x142666770
0x1401c650d: call    0x140af0220
0x1401c6512: nop     
0x1401c6513: lea     rcx,[rbp+0x3790]
0x1401c651a: jmp     0x1401c66ae
0x1401c651f: mov     r13,QWORD PTR [rsp+0x78]
0x1401c6524: cmp     QWORD PTR [r13+0x1c0],0x0
0x1401c652c: jne     0x1401c659a
0x1401c652e: cmp     QWORD PTR [r13+0x1b8],0x0
0x1401c6536: jne     0x1401c659a
0x1401c6538: xor     r8d,r8d
0x1401c653b: xor     edx,edx
0x1401c653d: mov     r9b,0x1
0x1401c6540: lea     rcx,[rip+0x24a0229]        # 0x142666770
0x1401c6547: call    0x1400bc6f0
0x1401c654c: lea     edx,[r12-0x1]
0x1401c6551: mov     r8d,r15d
0x1401c6554: lea     rcx,[rip+0x24a0215]        # 0x142666770
0x1401c655b: call    0x1400bc6e0
0x1401c6560: lea     rdx,[rip+0x1454529]        # 0x14161aa90 ; literal='Cannot order mission without leader'
0x1401c6567: lea     rcx,[rbp+0x3770]
0x1401c656e: call    0x140069710
0x1401c6573: nop     
0x1401c6574: xor     r9d,r9d
0x1401c6577: xor     r8d,r8d
0x1401c657a: lea     rdx,[rbp+0x3770]
0x1401c6581: lea     rcx,[rip+0x24a01e8]        # 0x142666770
0x1401c6588: call    0x140af0220
0x1401c658d: nop     
0x1401c658e: lea     rcx,[rbp+0x3770]
0x1401c6595: jmp     0x1401c66ae
0x1401c659a: movzx   r8d,WORD PTR [r13+0x1d4]
0x1401c65a2: movzx   edx,WORD PTR [r13+0x1d0]
0x1401c65aa: mov     rcx,QWORD PTR [rip+0x2341927]        # 0x142507ed8
0x1401c65b1: call    0x1401bea60
0x1401c65b6: mov     edi,DWORD PTR [rbp-0x6c]
0x1401c65b9: xor     r8d,r8d
0x1401c65bc: mov     r9b,0x1
0x1401c65bf: lea     rcx,[rip+0x24a01aa]        # 0x142666770
0x1401c65c6: test    eax,eax
0x1401c65c8: js      0x1401c6660
0x1401c65ce: mov     edx,0x7
0x1401c65d3: call    0x1400bc6f0
0x1401c65d8: mov     r8d,r15d
0x1401c65db: lea     edx,[rdi-0x1]
0x1401c65de: lea     rcx,[rip+0x24a018b]        # 0x142666770
0x1401c65e5: call    0x1400bc6e0
0x1401c65ea: test    rbx,rbx
0x1401c65ed: jne     0x1401c6629
0x1401c65ef: lea     rdx,[rip+0x14544c2]        # 0x14161aab8 ; literal='Click to explore this site (creates new mission)'
0x1401c65f6: lea     rcx,[rbp+0x3590]
0x1401c65fd: call    0x140069710
0x1401c6602: nop     
0x1401c6603: xor     r9d,r9d
0x1401c6606: xor     r8d,r8d
0x1401c6609: lea     rdx,[rbp+0x3590]
0x1401c6610: lea     rcx,[rip+0x24a0159]        # 0x142666770
0x1401c6617: call    0x140af0220
0x1401c661c: nop     
0x1401c661d: lea     rcx,[rbp+0x3590]
0x1401c6624: jmp     0x1401c66ae
0x1401c6629: lea     rdx,[rip+0x14544c0]        # 0x14161aaf0 ; literal='Click to contact/raid this site (creates new mission)'
0x1401c6630: lea     rcx,[rbp+0x34f0]
0x1401c6637: call    0x140069710
0x1401c663c: nop     
0x1401c663d: xor     r9d,r9d
0x1401c6640: xor     r8d,r8d
0x1401c6643: lea     rdx,[rbp+0x34f0]
0x1401c664a: lea     rcx,[rip+0x24a011f]        # 0x142666770
0x1401c6651: call    0x140af0220
0x1401c6656: nop     
0x1401c6657: lea     rcx,[rbp+0x34f0]
0x1401c665e: jmp     0x1401c66ae
0x1401c6660: xor     edx,edx
0x1401c6662: call    0x1400bc6f0
0x1401c6667: mov     r8d,r15d
0x1401c666a: lea     edx,[rdi-0x1]
0x1401c666d: lea     rcx,[rip+0x24a00fc]        # 0x142666770
0x1401c6674: call    0x1400bc6e0
0x1401c6679: lea     rdx,[rip+0x14543f0]        # 0x14161aa70 ; literal='Inaccessible mission location'
0x1401c6680: lea     rcx,[rbp+0x3470]
0x1401c6687: call    0x140069710
0x1401c668c: nop     
0x1401c668d: xor     r9d,r9d
0x1401c6690: xor     r8d,r8d
0x1401c6693: lea     rdx,[rbp+0x3470]
0x1401c669a: lea     rcx,[rip+0x24a00cf]        # 0x142666770
0x1401c66a1: call    0x140af0220
0x1401c66a6: nop     
0x1401c66a7: lea     rcx,[rbp+0x3470]
0x1401c66ae: call    0x1400693f0
0x1401c66b3: nop     
0x1401c66b4: lea     rcx,[rbp+0x10b0]
0x1401c66bb: call    0x1400693f0
0x1401c66c0: nop     
0x1401c66c1: lea     rcx,[rbp+0xe10]
0x1401c66c8: call    0x1400693f0
0x1401c66cd: jmp     0x1401c8d68
0x1401c66d2: mov     r13d,DWORD PTR [rbp-0x18]
0x1401c66d6: mov     DWORD PTR [rsp+0x74],r13d
0x1401c66db: lea     ebx,[r13-0x37]
0x1401c66df: mov     DWORD PTR [rsp+0x70],ebx
0x1401c66e3: lea     ecx,[rbx-0x2]
0x1401c66e6: mov     DWORD PTR [rbp-0x58],ecx
0x1401c66e9: mov     r12d,0x14
0x1401c66ef: mov     eax,DWORD PTR [rip+0x2223413]        # 0x1423e9b08
0x1401c66f5: cmp     eax,0x2e
0x1401c66f8: jle     0x1401c6712
0x1401c66fa: lea     r12d,[rax-0x1a]
0x1401c66fe: cmp     r12d,0x1e
0x1401c6702: jle     0x1401c6712
0x1401c6704: mov     r12d,0x1e
0x1401c670a: mov     edi,r13d
0x1401c670d: mov     r14d,esi
0x1401c6710: jmp     0x1401c6721
0x1401c6712: mov     edi,r13d
0x1401c6715: mov     r14d,esi
0x1401c6718: test    r12d,r12d
0x1401c671b: js      0x1401c67ff
0x1401c6721: mov     ebx,ecx
0x1401c6723: cmp     ecx,edi
0x1401c6725: jg      0x1401c67ea
0x1401c672b: movsxd  r15,r12d
0x1401c672e: mov     r13d,DWORD PTR [rbp-0x58]
0x1401c6732: mov     r8d,ebx
0x1401c6735: mov     edx,r14d
0x1401c6738: lea     rcx,[rip+0x24a0031]        # 0x142666770
0x1401c673f: call    0x1400bc6e0
0x1401c6744: xor     r8d,r8d
0x1401c6747: xor     edx,edx
0x1401c6749: lea     rcx,[rip+0x24a0020]        # 0x142666770
0x1401c6750: call    0x1400bc750
0x1401c6755: test    rsi,rsi
0x1401c6758: jne     0x1401c6782
0x1401c675a: cmp     ebx,r13d
0x1401c675d: jne     0x1401c6767
0x1401c675f: mov     edx,DWORD PTR [rip+0x24a192f]        # 0x142668094
0x1401c6765: jmp     0x1401c67cc
0x1401c6767: lea     rcx,[rip+0x24a0002]        # 0x142666770
0x1401c676e: cmp     ebx,edi
0x1401c6770: jne     0x1401c677a
0x1401c6772: mov     edx,DWORD PTR [rip+0x24a1934]        # 0x1426680ac
0x1401c6778: jmp     0x1401c67d3
0x1401c677a: mov     edx,DWORD PTR [rip+0x24a1920]        # 0x1426680a0
0x1401c6780: jmp     0x1401c67d3
0x1401c6782: cmp     rsi,r15
0x1401c6785: jne     0x1401c67af
0x1401c6787: cmp     ebx,r13d
0x1401c678a: jne     0x1401c6794
0x1401c678c: mov     edx,DWORD PTR [rip+0x24a190a]        # 0x14266809c
0x1401c6792: jmp     0x1401c67cc
0x1401c6794: lea     rcx,[rip+0x249ffd5]        # 0x142666770
0x1401c679b: cmp     ebx,edi
0x1401c679d: jne     0x1401c67a7
0x1401c679f: mov     edx,DWORD PTR [rip+0x24a190f]        # 0x1426680b4
0x1401c67a5: jmp     0x1401c67d3
0x1401c67a7: mov     edx,DWORD PTR [rip+0x24a18fb]        # 0x1426680a8
0x1401c67ad: jmp     0x1401c67d3
0x1401c67af: cmp     ebx,r13d
0x1401c67b2: jne     0x1401c67bc
0x1401c67b4: mov     edx,DWORD PTR [rip+0x24a18de]        # 0x142668098
0x1401c67ba: jmp     0x1401c67cc
0x1401c67bc: cmp     ebx,edi
0x1401c67be: mov     edx,DWORD PTR [rip+0x24a18ec]        # 0x1426680b0
0x1401c67c4: je      0x1401c67cc
0x1401c67c6: mov     edx,DWORD PTR [rip+0x24a18d8]        # 0x1426680a4
0x1401c67cc: lea     rcx,[rip+0x249ff9d]        # 0x142666770
0x1401c67d3: call    0x140af1390
0x1401c67d8: inc     ebx
0x1401c67da: cmp     ebx,edi
0x1401c67dc: jle     0x1401c6732
0x1401c67e2: mov     r13d,DWORD PTR [rsp+0x74]
0x1401c67e7: mov     ecx,DWORD PTR [rbp-0x58]
0x1401c67ea: inc     r14d
0x1401c67ed: inc     rsi
0x1401c67f0: cmp     r14d,r12d
0x1401c67f3: jle     0x1401c6721
0x1401c67f9: lea     ebx,[r13-0x37]
0x1401c67fd: xor     esi,esi
0x1401c67ff: lea     eax,[r13-0x2]
0x1401c6803: mov     DWORD PTR [rbp-0x6c],eax
0x1401c6806: lea     ecx,[r12-0x1]
0x1401c680b: mov     eax,0x55555556
0x1401c6810: imul    ecx
0x1401c6812: mov     edi,edx
0x1401c6814: shr     edi,0x1f
0x1401c6817: add     edi,edx
0x1401c6819: mov     DWORD PTR [rbp-0x68],edi
0x1401c681c: mov     r15,QWORD PTR [rsp+0x78]
0x1401c6821: add     r15,0x230
0x1401c6828: mov     QWORD PTR [rbp-0x20],r15
0x1401c682c: mov     rcx,r15
0x1401c682f: call    0x140070410
0x1401c6834: mov     rdx,rax
0x1401c6837: mov     QWORD PTR [rbp-0x28],rax
0x1401c683b: cmp     eax,edi
0x1401c683d: jle     0x1401c6849
0x1401c683f: lea     r12d,[r13-0x4]
0x1401c6843: mov     DWORD PTR [rbp-0x6c],r12d
0x1401c6847: jmp     0x1401c684d
0x1401c6849: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c684d: mov     r14,rsi
0x1401c6850: mov     QWORD PTR [rbp-0x78],rsi
0x1401c6854: mov     DWORD PTR [rbp-0x70],0x1
0x1401c685b: mov     r13,QWORD PTR [rsp+0x78]
0x1401c6860: mov     ecx,DWORD PTR [r13+0x2b0]
0x1401c6867: sub     eax,edi
0x1401c6869: cmp     ecx,eax
0x1401c686b: cmovle  eax,ecx
0x1401c686e: xor     ecx,ecx
0x1401c6870: test    eax,eax
0x1401c6872: cmovns  ecx,eax
0x1401c6875: mov     DWORD PTR [rbp-0x10],ecx
0x1401c6878: lea     eax,[rdi+rcx*1]
0x1401c687b: mov     DWORD PTR [rsp+0x74],eax
0x1401c687f: cmp     ecx,eax
0x1401c6881: jge     0x1401c7406
0x1401c6887: mov     eax,DWORD PTR [rbp+0x38]
0x1401c688a: mov     DWORD PTR [rbp-0x48],eax
0x1401c688d: nop     DWORD PTR [rax]
0x1401c6890: cmp     ecx,edx
0x1401c6892: jge     0x1401c7382
0x1401c6898: movsxd  rdx,ecx
0x1401c689b: mov     rcx,r15
0x1401c689e: call    0x1400707e0
0x1401c68a3: mov     rdi,QWORD PTR [rax]
0x1401c68a6: mov     QWORD PTR [rbp-0x60],rdi
0x1401c68aa: cmp     BYTE PTR [rip+0x21e60a4],0x0        # 0x1423ac955
0x1401c68b1: je      0x1401c6d1e
0x1401c68b7: mov     eax,DWORD PTR [rbp-0x38]
0x1401c68ba: cmp     eax,ebx
0x1401c68bc: jl      0x1401c6d1e
0x1401c68c2: mov     ebx,DWORD PTR [rbp-0x70]
0x1401c68c5: cmp     eax,r12d
0x1401c68c8: jg      0x1401c6d21
0x1401c68ce: mov     ecx,DWORD PTR [rbp-0x3c]
0x1401c68d1: cmp     ecx,ebx
0x1401c68d3: jl      0x1401c6d21
0x1401c68d9: lea     eax,[rbx+0x2]
0x1401c68dc: cmp     ecx,eax
0x1401c68de: jg      0x1401c6d21
0x1401c68e4: cmp     QWORD PTR [r13+0x248],rdi
0x1401c68eb: je      0x1401c6d12
0x1401c68f1: mov     QWORD PTR [r13+0x248],rdi
0x1401c68f8: lea     rsi,[r13+0x250]
0x1401c68ff: mov     rcx,rsi
0x1401c6902: call    0x140070850
0x1401c6907: lea     r15,[r13+0x268]
0x1401c690e: mov     rcx,r15
0x1401c6911: call    0x140070850
0x1401c6916: lea     r12,[r13+0x280]
0x1401c691d: mov     QWORD PTR [rbp-0x30],r12
0x1401c6921: mov     rcx,r12
0x1401c6924: call    0x140070850
0x1401c6929: add     r13,0x298
0x1401c6930: mov     QWORD PTR [rbp-0x78],r13
0x1401c6934: mov     rcx,r13
0x1401c6937: call    0x140070850
0x1401c693c: lea     rdx,[rbp+0x78]
0x1401c6940: lea     rcx,[rdi+0x1450]
0x1401c6947: call    0x140070800
0x1401c694c: lea     rdx,[rbp+0xe8]
0x1401c6953: lea     rcx,[rdi+0x1450]
0x1401c695a: call    0x1400707f0
0x1401c695f: lea     r8,[rbp+0xe8]
0x1401c6966: lea     rdx,[rbp+0x4]
0x1401c696a: lea     rcx,[rbp+0x78]
0x1401c696e: call    0x1400703e0
0x1401c6973: xor     edx,edx
0x1401c6975: movzx   ecx,BYTE PTR [rax]
0x1401c6978: call    0x140066d70
0x1401c697d: test    al,al
0x1401c697f: je      0x1401c6aa7
0x1401c6985: xor     r12d,r12d
0x1401c6988: nop     DWORD PTR [rax+rax*1+0x0]
0x1401c6990: lea     rcx,[rbp+0x78]
0x1401c6994: call    0x1400703d0
0x1401c6999: mov     rcx,QWORD PTR [rax]
0x1401c699c: mov     QWORD PTR [rbp+0x1a8],rcx
0x1401c69a3: mov     rcx,QWORD PTR [rcx+0x10]
0x1401c69a7: cmp     DWORD PTR [rcx+0x30],0xffffffff
0x1401c69ab: jne     0x1401c6a70
0x1401c69b1: lea     r9,[rbp+0x1c0]
0x1401c69b8: lea     r8,[rbp+0x1c8]
0x1401c69bf: mov     edx,DWORD PTR [rdi+0x4]
0x1401c69c2: call    0x140c00260
0x1401c69c7: mov     r13,rax
0x1401c69ca: test    rax,rax
0x1401c69cd: je      0x1401c6a70
0x1401c69d3: mov     edi,r12d
0x1401c69d6: mov     rcx,rsi
0x1401c69d9: call    0x140070410
0x1401c69de: test    rax,rax
0x1401c69e1: je      0x1401c6a3e
0x1401c69e3: mov     rbx,r12
0x1401c69e6: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401c69f0: mov     rdx,rbx
0x1401c69f3: mov     rcx,r15
0x1401c69f6: call    0x140070920
0x1401c69fb: mov     ecx,DWORD PTR [r13+0x2d0]
0x1401c6a02: cmp     DWORD PTR [rax],ecx
0x1401c6a04: mov     rcx,rsi
0x1401c6a07: jg      0x1401c6a1a
0x1401c6a09: inc     edi
0x1401c6a0b: movsxd  rbx,edi
0x1401c6a0e: call    0x140070410
0x1401c6a13: cmp     rbx,rax
0x1401c6a16: jb      0x1401c69f0
0x1401c6a18: jmp     0x1401c6a3e
0x1401c6a1a: movsxd  rbx,edi
0x1401c6a1d: lea     r8,[rbp+0x1a8]
0x1401c6a24: mov     rdx,rbx
0x1401c6a27: call    0x1401bc6b0
0x1401c6a2c: lea     r8,[r13+0x2d0]
0x1401c6a33: mov     rdx,rbx
0x1401c6a36: mov     rcx,r15
0x1401c6a39: call    0x1400bafd0
0x1401c6a3e: mov     rcx,rsi
0x1401c6a41: call    0x140070410
0x1401c6a46: movsxd  rcx,edi
0x1401c6a49: cmp     rcx,rax
0x1401c6a4c: jne     0x1401c6a6c
0x1401c6a4e: lea     rdx,[rbp+0x1a8]
0x1401c6a55: mov     rcx,rsi
0x1401c6a58: call    0x1400baf40
0x1401c6a5d: lea     rdx,[r13+0x2d0]
0x1401c6a64: mov     rcx,r15
0x1401c6a67: call    0x1400709d0
0x1401c6a6c: mov     rdi,QWORD PTR [rbp-0x60]
0x1401c6a70: lea     rcx,[rbp+0x78]
0x1401c6a74: call    0x1400703c0
0x1401c6a79: lea     r8,[rbp+0xe8]
0x1401c6a80: lea     rdx,[rbp+0x4]
0x1401c6a84: lea     rcx,[rbp+0x78]
0x1401c6a88: call    0x1400703e0
0x1401c6a8d: xor     edx,edx
0x1401c6a8f: movzx   ecx,BYTE PTR [rax]
0x1401c6a92: call    0x140066d70
0x1401c6a97: test    al,al
0x1401c6a99: jne     0x1401c6990
0x1401c6a9f: mov     r12,QWORD PTR [rbp-0x30]
0x1401c6aa3: mov     r13,QWORD PTR [rbp-0x78]
0x1401c6aa7: lea     rdx,[rbp+0x40]
0x1401c6aab: lea     rcx,[rdi+0x1398]
0x1401c6ab2: call    0x140070800
0x1401c6ab7: lea     rdx,[rbp+0xf0]
0x1401c6abe: lea     rcx,[rdi+0x1398]
0x1401c6ac5: call    0x1400707f0
0x1401c6aca: lea     r8,[rbp+0xf0]
0x1401c6ad1: lea     rdx,[rbp+0x6]
0x1401c6ad5: lea     rcx,[rbp+0x40]
0x1401c6ad9: call    0x1400703e0
0x1401c6ade: xor     edx,edx
0x1401c6ae0: movzx   ecx,BYTE PTR [rax]
0x1401c6ae3: call    0x140066d70
0x1401c6ae8: test    al,al
0x1401c6aea: je      0x1401c6b79
0x1401c6af0: lea     rcx,[rbp+0x40]
0x1401c6af4: call    0x1400703d0
0x1401c6af9: mov     rcx,QWORD PTR [rax]
0x1401c6afc: cmp     WORD PTR [rcx],0x1
0x1401c6b00: je      0x1401c6b4a
0x1401c6b02: lea     rcx,[rbp+0x40]
0x1401c6b06: call    0x1400703d0
0x1401c6b0b: mov     rcx,QWORD PTR [rax]
0x1401c6b0e: cmp     WORD PTR [rcx],0x2
0x1401c6b12: je      0x1401c6b4a
0x1401c6b14: lea     rcx,[rbp+0x40]
0x1401c6b18: call    0x1400703d0
0x1401c6b1d: mov     rcx,QWORD PTR [rax]
0x1401c6b20: cmp     WORD PTR [rcx],0x3
0x1401c6b24: je      0x1401c6b4a
0x1401c6b26: lea     rcx,[rbp+0x40]
0x1401c6b2a: call    0x1400703d0
0x1401c6b2f: mov     rdx,rax
0x1401c6b32: mov     rcx,r12
0x1401c6b35: call    0x1400baf40
0x1401c6b3a: mov     BYTE PTR [rbp+0x5],0x0
0x1401c6b3e: lea     rdx,[rbp+0x5]
0x1401c6b42: mov     rcx,r13
0x1401c6b45: call    0x1401fc730
0x1401c6b4a: lea     rcx,[rbp+0x40]
0x1401c6b4e: call    0x1400703c0
0x1401c6b53: lea     r8,[rbp+0xf0]
0x1401c6b5a: lea     rdx,[rbp+0x6]
0x1401c6b5e: lea     rcx,[rbp+0x40]
0x1401c6b62: call    0x1400703e0
0x1401c6b67: xor     edx,edx
0x1401c6b69: movzx   ecx,BYTE PTR [rax]
0x1401c6b6c: call    0x140066d70
0x1401c6b71: test    al,al
0x1401c6b73: jne     0x1401c6af0
0x1401c6b79: xor     ebx,ebx
0x1401c6b7b: mov     r14d,ebx
0x1401c6b7e: lea     rcx,[rip+0x21e8d1b]        # 0x1423af8a0
0x1401c6b85: call    0x140070410
0x1401c6b8a: test    rax,rax
0x1401c6b8d: je      0x1401c6cfa
0x1401c6b93: mov     edi,ebx
0x1401c6b95: mov     r15,QWORD PTR [rbp-0x60]
0x1401c6b99: nop     DWORD PTR [rax+0x0]
0x1401c6ba0: mov     rdx,rdi
0x1401c6ba3: lea     rcx,[rip+0x21e8cf6]        # 0x1423af8a0
0x1401c6baa: call    0x1400707e0
0x1401c6baf: mov     rcx,QWORD PTR [rax]
0x1401c6bb2: mov     eax,DWORD PTR [r15+0x4]
0x1401c6bb6: cmp     DWORD PTR [rcx],eax
0x1401c6bb8: jne     0x1401c6cdc
0x1401c6bbe: mov     esi,ebx
0x1401c6bc0: mov     rdx,rdi
0x1401c6bc3: lea     rcx,[rip+0x21e8cd6]        # 0x1423af8a0
0x1401c6bca: call    0x1400707e0
0x1401c6bcf: mov     rcx,QWORD PTR [rax]
0x1401c6bd2: add     rcx,0xc0
0x1401c6bd9: call    0x140070410
0x1401c6bde: test    rax,rax
0x1401c6be1: je      0x1401c6cdc
0x1401c6be7: nop     WORD PTR [rax+rax*1+0x0]
0x1401c6bf0: mov     rdx,rdi
0x1401c6bf3: lea     rcx,[rip+0x21e8ca6]        # 0x1423af8a0
0x1401c6bfa: call    0x1400707e0
0x1401c6bff: mov     rcx,QWORD PTR [rax]
0x1401c6c02: add     rcx,0xc0
0x1401c6c09: mov     rdx,rbx
0x1401c6c0c: call    0x1400707e0
0x1401c6c11: mov     rcx,QWORD PTR [rax]
0x1401c6c14: cmp     WORD PTR [rcx],0x1
0x1401c6c18: je      0x1401c6cae
0x1401c6c1e: mov     rdx,rdi
0x1401c6c21: lea     rcx,[rip+0x21e8c78]        # 0x1423af8a0
0x1401c6c28: call    0x1400707e0
0x1401c6c2d: mov     rcx,QWORD PTR [rax]
0x1401c6c30: add     rcx,0xc0
0x1401c6c37: mov     rdx,rbx
0x1401c6c3a: call    0x1400707e0
0x1401c6c3f: mov     rcx,QWORD PTR [rax]
0x1401c6c42: cmp     WORD PTR [rcx],0x2
0x1401c6c46: je      0x1401c6cae
0x1401c6c48: mov     rdx,rdi
0x1401c6c4b: lea     rcx,[rip+0x21e8c4e]        # 0x1423af8a0
0x1401c6c52: call    0x1400707e0
0x1401c6c57: mov     rcx,QWORD PTR [rax]
0x1401c6c5a: add     rcx,0xc0
0x1401c6c61: mov     rdx,rbx
0x1401c6c64: call    0x1400707e0
0x1401c6c69: mov     rcx,QWORD PTR [rax]
0x1401c6c6c: cmp     WORD PTR [rcx],0x3
0x1401c6c70: je      0x1401c6cae
0x1401c6c72: mov     rdx,rdi
0x1401c6c75: lea     rcx,[rip+0x21e8c24]        # 0x1423af8a0
0x1401c6c7c: call    0x1400707e0
0x1401c6c81: mov     rcx,QWORD PTR [rax]
0x1401c6c84: add     rcx,0xc0
0x1401c6c8b: mov     rdx,rbx
0x1401c6c8e: call    0x1400707e0
0x1401c6c93: mov     rdx,rax
0x1401c6c96: mov     rcx,r12
0x1401c6c99: call    0x1400baf40
0x1401c6c9e: mov     BYTE PTR [rbp+0x8],0x1
0x1401c6ca2: lea     rdx,[rbp+0x8]
0x1401c6ca6: mov     rcx,r13
0x1401c6ca9: call    0x1401fc730
0x1401c6cae: inc     esi
0x1401c6cb0: mov     rdx,rdi
0x1401c6cb3: lea     rcx,[rip+0x21e8be6]        # 0x1423af8a0
0x1401c6cba: call    0x1400707e0
0x1401c6cbf: movsxd  rbx,esi
0x1401c6cc2: mov     rcx,QWORD PTR [rax]
0x1401c6cc5: add     rcx,0xc0
0x1401c6ccc: call    0x140070410
0x1401c6cd1: cmp     rbx,rax
0x1401c6cd4: jb      0x1401c6bf0
0x1401c6cda: xor     ebx,ebx
0x1401c6cdc: inc     r14d
0x1401c6cdf: movsxd  rdi,r14d
0x1401c6ce2: lea     rcx,[rip+0x21e8bb7]        # 0x1423af8a0
0x1401c6ce9: call    0x140070410
0x1401c6cee: cmp     rdi,rax
0x1401c6cf1: jb      0x1401c6ba0
0x1401c6cf7: mov     rdi,r15
0x1401c6cfa: mov     edx,0x2
0x1401c6cff: lea     rcx,[rip+0x249fa6a]        # 0x142666770
0x1401c6d06: call    0x140afe4c0
0x1401c6d0b: mov     ebx,DWORD PTR [rbp-0x70]
0x1401c6d0e: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c6d12: mov     QWORD PTR [rbp-0x78],rdi
0x1401c6d16: lea     eax,[rbx-0x1]
0x1401c6d19: mov     DWORD PTR [rbp-0x48],eax
0x1401c6d1c: jmp     0x1401c6d21
0x1401c6d1e: mov     ebx,DWORD PTR [rbp-0x70]
0x1401c6d21: xor     r8d,r8d
0x1401c6d24: mov     edx,0x7
0x1401c6d29: mov     r9b,0x1
0x1401c6d2c: lea     rcx,[rip+0x249fa3d]        # 0x142666770
0x1401c6d33: call    0x1400bc6f0
0x1401c6d38: movsxd  r13,DWORD PTR [rsp+0x70]
0x1401c6d3d: mov     esi,r13d
0x1401c6d40: cmp     r13d,r12d
0x1401c6d43: jg      0x1401c6ddb
0x1401c6d49: lea     r15d,[rbx+0x3]
0x1401c6d4d: mov     r14,r13
0x1401c6d50: mov     edi,ebx
0x1401c6d52: cmp     ebx,r15d
0x1401c6d55: jge     0x1401c6dc9
0x1401c6d57: movsxd  r12,r12d
0x1401c6d5a: lea     rbx,[rip+0x24a13cf]        # 0x142668130
0x1401c6d61: mov     r8d,esi
0x1401c6d64: mov     edx,edi
0x1401c6d66: lea     rcx,[rip+0x249fa03]        # 0x142666770
0x1401c6d6d: call    0x1400bc6e0
0x1401c6d72: cmp     esi,r13d
0x1401c6d75: jne     0x1401c6d7c
0x1401c6d77: mov     edx,DWORD PTR [rbx-0x18]
0x1401c6d7a: jmp     0x1401c6d88
0x1401c6d7c: cmp     r14,r12
0x1401c6d7f: jne     0x1401c6d85
0x1401c6d81: mov     edx,DWORD PTR [rbx]
0x1401c6d83: jmp     0x1401c6d88
0x1401c6d85: mov     edx,DWORD PTR [rbx-0xc]
0x1401c6d88: lea     rcx,[rip+0x249f9e1]        # 0x142666770
0x1401c6d8f: call    0x140af1390
0x1401c6d94: xor     edx,edx
0x1401c6d96: lea     rcx,[rip+0x2222d53]        # 0x1423e9af0
0x1401c6d9d: call    0x140073550
0x1401c6da2: test    al,al
0x1401c6da4: je      0x1401c6db7
0x1401c6da6: mov     r8b,0x1
0x1401c6da9: xor     edx,edx
0x1401c6dab: lea     rcx,[rip+0x249f9be]        # 0x142666770
0x1401c6db2: call    0x1400bc750
0x1401c6db7: inc     edi
0x1401c6db9: add     rbx,0x4
0x1401c6dbd: cmp     edi,r15d
0x1401c6dc0: jl      0x1401c6d61
0x1401c6dc2: mov     ebx,DWORD PTR [rbp-0x70]
0x1401c6dc5: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c6dc9: inc     esi
0x1401c6dcb: inc     r14
0x1401c6dce: cmp     esi,r12d
0x1401c6dd1: jle     0x1401c6d50
0x1401c6dd7: mov     rdi,QWORD PTR [rbp-0x60]
0x1401c6ddb: xor     r8d,r8d
0x1401c6dde: mov     edx,0x3
0x1401c6de3: mov     r9b,0x1
0x1401c6de6: lea     rcx,[rip+0x249f983]        # 0x142666770
0x1401c6ded: call    0x1400bc6f0
0x1401c6df2: lea     edx,[rbx+0x1]
0x1401c6df5: mov     r8d,r13d
0x1401c6df8: lea     rcx,[rip+0x249f971]        # 0x142666770
0x1401c6dff: call    0x1400bc6e0
0x1401c6e04: lea     rcx,[rbp+0xd50]
0x1401c6e0b: call    0x140070c50
0x1401c6e10: nop     
0x1401c6e11: lea     rcx,[rbp+0x10d0]
0x1401c6e18: call    0x140070c50
0x1401c6e1d: nop     
0x1401c6e1e: cmp     BYTE PTR [rdi+0x92],0x0
0x1401c6e25: je      0x1401c6eb9
0x1401c6e2b: lea     rdx,[rbp+0x10d0]
0x1401c6e32: lea     rcx,[rdi+0x20]
0x1401c6e36: call    0x140aaa930
0x1401c6e3b: lea     rdx,[rbp+0x10d0]
0x1401c6e42: lea     rcx,[rbp+0xd50]
0x1401c6e49: call    0x1400bb2d0
0x1401c6e4e: lea     rdx,[rip+0x14384b3]        # 0x1415ff308 ; literal=', '
0x1401c6e55: lea     rcx,[rbp+0xd50]
0x1401c6e5c: call    0x140070b20
0x1401c6e61: lea     rdx,[rip+0x1438ae0]        # 0x1415ff948 ; literal='"'
0x1401c6e68: lea     rcx,[rbp+0xd50]
0x1401c6e6f: call    0x140070b20
0x1401c6e74: xor     r9d,r9d
0x1401c6e77: mov     r8b,0x1
0x1401c6e7a: lea     rdx,[rbp+0x10d0]
0x1401c6e81: lea     rcx,[rdi+0x20]
0x1401c6e85: call    0x140aaafe0
0x1401c6e8a: lea     rdx,[rbp+0x10d0]
0x1401c6e91: lea     rcx,[rbp+0xd50]
0x1401c6e98: call    0x1400bb2d0
0x1401c6e9d: lea     rdx,[rip+0x1438aa4]        # 0x1415ff948 ; literal='"'
0x1401c6ea4: lea     rcx,[rbp+0xd50]
0x1401c6eab: call    0x140070b20
0x1401c6eb0: lea     rdx,[rip+0x1438451]        # 0x1415ff308 ; literal=', '
0x1401c6eb7: jmp     0x1401c6ec0
0x1401c6eb9: lea     rdx,[rip+0x1453c68]        # 0x14161ab28 ; literal='Unnamed '
0x1401c6ec0: lea     rcx,[rbp+0xd50]
0x1401c6ec7: call    0x140070b20
0x1401c6ecc: mov     r8d,0xffffffff
0x1401c6ed2: lea     rdx,[rbp+0x10d0]
0x1401c6ed9: movzx   ecx,WORD PTR [rdi+0x98]
0x1401c6ee0: call    0x140aba070
0x1401c6ee5: lea     rcx,[rbp+0x10d0]
0x1401c6eec: call    0x140544330
0x1401c6ef1: lea     rdx,[rbp+0x10d0]
0x1401c6ef8: lea     rcx,[rbp+0xd50]
0x1401c6eff: call    0x1400bb2d0
0x1401c6f04: cmp     BYTE PTR [rdi+0x92],0x0
0x1401c6f0b: jne     0x1401c6f26
0x1401c6f0d: cmp     WORD PTR [rdi],0x0
0x1401c6f11: jne     0x1401c6f26
0x1401c6f13: lea     rdx,[rip+0x14538d6]        # 0x14161a7f0 ; literal=' civilization'
0x1401c6f1a: lea     rcx,[rbp+0xd50]
0x1401c6f21: call    0x140070b20
0x1401c6f26: mov     ebx,r12d
0x1401c6f29: sub     ebx,r13d
0x1401c6f2c: lea     rcx,[rbp+0xd50]
0x1401c6f33: call    0x1400708f0
0x1401c6f38: lea     ecx,[rbx-0x2]
0x1401c6f3b: movsxd  rdx,ecx
0x1401c6f3e: cmp     rax,rdx
0x1401c6f41: jb      0x1401c6fa9
0x1401c6f43: lea     edi,[rbx-0x3]
0x1401c6f46: test    edi,edi
0x1401c6f48: js      0x1401c6f60
0x1401c6f4a: movsxd  rdx,ebx
0x1401c6f4d: sub     rdx,0x3
0x1401c6f51: xor     r8d,r8d
0x1401c6f54: lea     rcx,[rbp+0xd50]
0x1401c6f5b: call    0x1400e27f0
0x1401c6f60: cmp     edi,0x3
0x1401c6f63: jle     0x1401c6fa5
0x1401c6f65: movsxd  rdx,ebx
0x1401c6f68: sub     rdx,0x6
0x1401c6f6c: lea     rcx,[rbp+0xd50]
0x1401c6f73: call    0x1400fcb70
0x1401c6f78: mov     BYTE PTR [rax],0x2e
0x1401c6f7b: lea     eax,[rbx-0x5]
0x1401c6f7e: movsxd  rdx,eax
0x1401c6f81: lea     rcx,[rbp+0xd50]
0x1401c6f88: call    0x1400fcb70
0x1401c6f8d: mov     BYTE PTR [rax],0x2e
0x1401c6f90: lea     eax,[rbx-0x4]
0x1401c6f93: movsxd  rdx,eax
0x1401c6f96: lea     rcx,[rbp+0xd50]
0x1401c6f9d: call    0x1400fcb70
0x1401c6fa2: mov     BYTE PTR [rax],0x2e
0x1401c6fa5: mov     rdi,QWORD PTR [rbp-0x60]
0x1401c6fa9: xor     r9d,r9d
0x1401c6fac: xor     r8d,r8d
0x1401c6faf: lea     rdx,[rbp+0xd50]
0x1401c6fb6: lea     rcx,[rip+0x249f7b3]        # 0x142666770
0x1401c6fbd: call    0x140af0220
0x1401c6fc2: mov     rbx,QWORD PTR [rip+0x21ef59f]        # 0x1423b6568
0x1401c6fc9: test    rbx,rbx
0x1401c6fcc: je      0x1401c72cf
0x1401c6fd2: cmp     rdi,rbx
0x1401c6fd5: je      0x1401c72d4
0x1401c6fdb: xor     r12b,r12b
0x1401c6fde: xor     r13b,r13b
0x1401c6fe1: xor     dil,dil
0x1401c6fe4: xor     r14b,r14b
0x1401c6fe7: lea     r15,[rbx+0x1028]
0x1401c6fee: mov     rsi,QWORD PTR [rbp-0x60]
0x1401c6ff2: mov     edx,DWORD PTR [rsi+0x4]
0x1401c6ff5: mov     rcx,r15
0x1401c6ff8: call    0x1401010b0
0x1401c6ffd: test    rax,rax
0x1401c7000: je      0x1401c7036
0x1401c7002: movzx   ecx,WORD PTR [rax+0x4]
0x1401c7006: cmp     cx,0x1
0x1401c700a: je      0x1401c7033
0x1401c700c: cmp     cx,0x5
0x1401c7010: je      0x1401c7033
0x1401c7012: test    BYTE PTR [rax+0x40],0x4
0x1401c7016: je      0x1401c701d
0x1401c7018: mov     dil,0x1
0x1401c701b: jmp     0x1401c7036
0x1401c701d: cmp     cx,0x4
0x1401c7021: jne     0x1401c7028
0x1401c7023: mov     r12b,0x1
0x1401c7026: jmp     0x1401c7036
0x1401c7028: cmp     cx,0x3
0x1401c702c: jne     0x1401c7036
0x1401c702e: mov     r13b,0x1
0x1401c7031: jmp     0x1401c7036
0x1401c7033: mov     r14b,0x1
0x1401c7036: mov     rcx,rsi
0x1401c7039: call    0x140953ef0
0x1401c703e: mov     rsi,rax
0x1401c7041: mov     rcx,rbx
0x1401c7044: call    0x140953ef0
0x1401c7049: cmp     rsi,rax
0x1401c704c: je      0x1401c70ea
0x1401c7052: lea     rbx,[rax+0x1028]
0x1401c7059: mov     edx,DWORD PTR [rsi+0x4]
0x1401c705c: mov     rcx,rbx
0x1401c705f: call    0x1401010b0
0x1401c7064: test    rax,rax
0x1401c7067: je      0x1401c7087
0x1401c7069: movzx   ecx,WORD PTR [rax+0x4]
0x1401c706d: cmp     cx,0x1
0x1401c7071: je      0x1401c7084
0x1401c7073: cmp     cx,0x5
0x1401c7077: je      0x1401c7084
0x1401c7079: test    BYTE PTR [rax+0x40],0x4
0x1401c707d: je      0x1401c7087
0x1401c707f: mov     dil,0x1
0x1401c7082: jmp     0x1401c7087
0x1401c7084: mov     r14b,0x1
0x1401c7087: mov     rax,QWORD PTR [rbp-0x60]
0x1401c708b: mov     edx,DWORD PTR [rax+0x4]
0x1401c708e: mov     rcx,rbx
0x1401c7091: call    0x1401010b0
0x1401c7096: test    rax,rax
0x1401c7099: je      0x1401c70b9
0x1401c709b: movzx   ecx,WORD PTR [rax+0x4]
0x1401c709f: cmp     cx,0x1
0x1401c70a3: je      0x1401c70b6
0x1401c70a5: cmp     cx,0x5
0x1401c70a9: je      0x1401c70b6
0x1401c70ab: test    BYTE PTR [rax+0x40],0x4
0x1401c70af: je      0x1401c70b9
0x1401c70b1: mov     dil,0x1
0x1401c70b4: jmp     0x1401c70b9
0x1401c70b6: mov     r14b,0x1
0x1401c70b9: mov     edx,DWORD PTR [rsi+0x4]
0x1401c70bc: mov     rcx,r15
0x1401c70bf: call    0x1401010b0
0x1401c70c4: test    rax,rax
0x1401c70c7: je      0x1401c70ea
0x1401c70c9: movzx   ecx,WORD PTR [rax+0x4]
0x1401c70cd: cmp     cx,0x1
0x1401c70d1: je      0x1401c7160
0x1401c70d7: cmp     cx,0x5
0x1401c70db: je      0x1401c7160
0x1401c70e1: test    BYTE PTR [rax+0x40],0x4
0x1401c70e5: je      0x1401c70ea
0x1401c70e7: mov     dil,0x1
0x1401c70ea: mov     esi,DWORD PTR [rbp-0x70]
0x1401c70ed: lea     edx,[rsi+0x2]
0x1401c70f0: mov     r8d,DWORD PTR [rsp+0x70]
0x1401c70f5: lea     rcx,[rip+0x249f674]        # 0x142666770
0x1401c70fc: call    0x1400bc6e0
0x1401c7101: test    r14b,r14b
0x1401c7104: je      0x1401c7179
0x1401c7106: xor     r8d,r8d
0x1401c7109: mov     edx,0x4
0x1401c710e: mov     r9b,0x1
0x1401c7111: lea     rcx,[rip+0x249f658]        # 0x142666770
0x1401c7118: call    0x1400bc6f0
0x1401c711d: lea     rdx,[rip+0x1453548]        # 0x14161a66c ; literal='War'
0x1401c7124: lea     rcx,[rbp+0x3450]
0x1401c712b: call    0x140069710
0x1401c7130: nop     
0x1401c7131: xor     r9d,r9d
0x1401c7134: xor     r8d,r8d
0x1401c7137: lea     rdx,[rbp+0x3450]
0x1401c713e: lea     rcx,[rip+0x249f62b]        # 0x142666770
0x1401c7145: call    0x140af0220
0x1401c714a: nop     
0x1401c714b: lea     rcx,[rbp+0x3450]
0x1401c7152: call    0x1400693f0
0x1401c7157: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c715b: jmp     0x1401c7340
0x1401c7160: mov     esi,DWORD PTR [rbp-0x70]
0x1401c7163: lea     edx,[rsi+0x2]
0x1401c7166: mov     r8d,DWORD PTR [rsp+0x70]
0x1401c716b: lea     rcx,[rip+0x249f5fe]        # 0x142666770
0x1401c7172: call    0x1400bc6e0
0x1401c7177: jmp     0x1401c7106
0x1401c7179: xor     r8d,r8d
0x1401c717c: lea     rcx,[rip+0x249f5ed]        # 0x142666770
0x1401c7183: test    r12b,r12b
0x1401c7186: je      0x1401c71d8
0x1401c7188: mov     edx,0x6
0x1401c718d: mov     r9b,0x1
0x1401c7190: call    0x1400bc6f0
0x1401c7195: lea     rdx,[rip+0x1453664]        # 0x14161a800 ; literal='Offering tribute'
0x1401c719c: lea     rcx,[rbp+0x3430]
0x1401c71a3: call    0x140069710
0x1401c71a8: nop     
0x1401c71a9: xor     r9d,r9d
0x1401c71ac: xor     r8d,r8d
0x1401c71af: lea     rdx,[rbp+0x3430]
0x1401c71b6: lea     rcx,[rip+0x249f5b3]        # 0x142666770
0x1401c71bd: call    0x140af0220
0x1401c71c2: nop     
0x1401c71c3: lea     rcx,[rbp+0x3430]
0x1401c71ca: call    0x1400693f0
0x1401c71cf: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c71d3: jmp     0x1401c7340
0x1401c71d8: test    r13b,r13b
0x1401c71db: je      0x1401c722d
0x1401c71dd: mov     edx,0x7
0x1401c71e2: xor     r9d,r9d
0x1401c71e5: call    0x1400bc6f0
0x1401c71ea: lea     rdx,[rip+0x1453627]        # 0x14161a818 ; literal='Accepting tribute'
0x1401c71f1: lea     rcx,[rbp+0x2ed0]
0x1401c71f8: call    0x140069710
0x1401c71fd: nop     
0x1401c71fe: xor     r9d,r9d
0x1401c7201: xor     r8d,r8d
0x1401c7204: lea     rdx,[rbp+0x2ed0]
0x1401c720b: lea     rcx,[rip+0x249f55e]        # 0x142666770
0x1401c7212: call    0x140af0220
0x1401c7217: nop     
0x1401c7218: lea     rcx,[rbp+0x2ed0]
0x1401c721f: call    0x1400693f0
0x1401c7224: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c7228: jmp     0x1401c7340
0x1401c722d: test    dil,dil
0x1401c7230: je      0x1401c7282
0x1401c7232: mov     edx,0x2
0x1401c7237: mov     r9b,0x1
0x1401c723a: call    0x1400bc6f0
0x1401c723f: lea     rdx,[rip+0x145341a]        # 0x14161a660 ; literal='Alliance'
0x1401c7246: lea     rcx,[rbp+0x2df0]
0x1401c724d: call    0x140069710
0x1401c7252: nop     
0x1401c7253: xor     r9d,r9d
0x1401c7256: xor     r8d,r8d
0x1401c7259: lea     rdx,[rbp+0x2df0]
0x1401c7260: lea     rcx,[rip+0x249f509]        # 0x142666770
0x1401c7267: call    0x140af0220
0x1401c726c: nop     
0x1401c726d: lea     rcx,[rbp+0x2df0]
0x1401c7274: call    0x1400693f0
0x1401c7279: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c727d: jmp     0x1401c7340
0x1401c7282: mov     edx,0x7
0x1401c7287: xor     r9d,r9d
0x1401c728a: call    0x1400bc6f0
0x1401c728f: lea     rdx,[rip+0x143798e]        # 0x1415fec24 ; literal='Peace'
0x1401c7296: lea     rcx,[rbp+0x2d50]
0x1401c729d: call    0x140069710
0x1401c72a2: nop     
0x1401c72a3: xor     r9d,r9d
0x1401c72a6: xor     r8d,r8d
0x1401c72a9: lea     rdx,[rbp+0x2d50]
0x1401c72b0: lea     rcx,[rip+0x249f4b9]        # 0x142666770
0x1401c72b7: call    0x140af0220
0x1401c72bc: nop     
0x1401c72bd: lea     rcx,[rbp+0x2d50]
0x1401c72c4: call    0x1400693f0
0x1401c72c9: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c72cd: jmp     0x1401c7340
0x1401c72cf: cmp     rdi,rbx
0x1401c72d2: jne     0x1401c733d
0x1401c72d4: mov     esi,DWORD PTR [rbp-0x70]
0x1401c72d7: lea     edx,[rsi+0x2]
0x1401c72da: mov     r8d,r13d
0x1401c72dd: lea     rcx,[rip+0x249f48c]        # 0x142666770
0x1401c72e4: call    0x1400bc6e0
0x1401c72e9: xor     r8d,r8d
0x1401c72ec: mov     edx,0x1
0x1401c72f1: movzx   r9d,dl
0x1401c72f5: lea     rcx,[rip+0x249f474]        # 0x142666770
0x1401c72fc: call    0x1400bc6f0
0x1401c7301: lea     rdx,[rip+0x1453528]        # 0x14161a830 ; literal='Your site government'
0x1401c7308: lea     rcx,[rbp+0x2a10]
0x1401c730f: call    0x140069710
0x1401c7314: nop     
0x1401c7315: xor     r9d,r9d
0x1401c7318: xor     r8d,r8d
0x1401c731b: lea     rdx,[rbp+0x2a10]
0x1401c7322: lea     rcx,[rip+0x249f447]        # 0x142666770
0x1401c7329: call    0x140af0220
0x1401c732e: nop     
0x1401c732f: lea     rcx,[rbp+0x2a10]
0x1401c7336: call    0x1400693f0
0x1401c733b: jmp     0x1401c7340
0x1401c733d: mov     esi,DWORD PTR [rbp-0x70]
0x1401c7340: add     esi,0x3
0x1401c7343: mov     DWORD PTR [rbp-0x70],esi
0x1401c7346: lea     rcx,[rbp+0x10d0]
0x1401c734d: call    0x1400693f0
0x1401c7352: nop     
0x1401c7353: lea     rcx,[rbp+0xd50]
0x1401c735a: call    0x1400693f0
0x1401c735f: mov     ecx,DWORD PTR [rbp-0x10]
0x1401c7362: inc     ecx
0x1401c7364: mov     DWORD PTR [rbp-0x10],ecx
0x1401c7367: cmp     ecx,DWORD PTR [rsp+0x74]
0x1401c736b: mov     ebx,DWORD PTR [rsp+0x70]
0x1401c736f: mov     rdx,QWORD PTR [rbp-0x28]
0x1401c7373: mov     r15,QWORD PTR [rbp-0x20]
0x1401c7377: mov     r13,QWORD PTR [rsp+0x78]
0x1401c737c: jl      0x1401c6890
0x1401c7382: mov     edi,DWORD PTR [rbp-0x68]
0x1401c7385: mov     r15d,DWORD PTR [rbp-0x48]
0x1401c7389: mov     r14,QWORD PTR [rbp-0x78]
0x1401c738d: cmp     edx,edi
0x1401c738f: jle     0x1401c7413
0x1401c7395: lea     ebx,[rdi*2-0x1]
0x1401c739c: add     ebx,edi
0x1401c739e: lea     rcx,[rbp+0x1f0]
0x1401c73a5: call    0x1400bc920
0x1401c73aa: mov     r9,QWORD PTR [rbp-0x28]
0x1401c73ae: dec     r9d
0x1401c73b1: mov     DWORD PTR [rsp+0x30],ebx
0x1401c73b5: mov     ebx,0x2
0x1401c73ba: mov     DWORD PTR [rsp+0x28],ebx
0x1401c73be: mov     DWORD PTR [rsp+0x20],edi
0x1401c73c2: xor     r8d,r8d
0x1401c73c5: mov     edx,DWORD PTR [r13+0x2b0]
0x1401c73cc: lea     rcx,[rbp+0x1f0]
0x1401c73d3: call    0x1400bc940
0x1401c73d8: lea     r9d,[r12+0x1]
0x1401c73dd: mov     DWORD PTR [rsp+0x28],0x0
0x1401c73e5: movzx   eax,BYTE PTR [r13+0x2b4]
0x1401c73ed: mov     BYTE PTR [rsp+0x20],al
0x1401c73f1: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401c73f5: mov     edx,DWORD PTR [rbp-0x38]
0x1401c73f8: lea     rcx,[rbp+0x1f0]
0x1401c73ff: call    0x141423200
0x1401c7404: jmp     0x1401c7418
0x1401c7406: mov     r15d,DWORD PTR [rbp+0x38]
0x1401c740a: mov     DWORD PTR [rbp-0x48],r15d
0x1401c740e: jmp     0x1401c738d
0x1401c7413: mov     ebx,0x2
0x1401c7418: test    r14,r14
0x1401c741b: jne     0x1401c7444
0x1401c741d: cmp     QWORD PTR [r13+0x248],r14
0x1401c7424: je      0x1401c8d68
0x1401c742a: mov     QWORD PTR [r13+0x248],r14
0x1401c7431: mov     edx,ebx
0x1401c7433: lea     rcx,[rip+0x249f336]        # 0x142666770
0x1401c743a: call    0x140afe4c0
0x1401c743f: jmp     0x1401c8d68
0x1401c7444: mov     eax,DWORD PTR [rbp-0x58]
0x1401c7447: lea     esi,[rax-0x37]
0x1401c744a: mov     DWORD PTR [rbp-0x68],esi
0x1401c744d: lea     r12d,[rax-0x2]
0x1401c7451: mov     DWORD PTR [rsp+0x74],r12d
0x1401c7456: lea     edi,[r15+0x1]
0x1401c745a: mov     rcx,QWORD PTR [rip+0x21ef107]        # 0x1423b6568
0x1401c7461: cmp     r14,rcx
0x1401c7464: je      0x1401c7648
0x1401c746a: add     edi,0x3
0x1401c746d: add     rcx,0x1028
0x1401c7474: mov     edx,DWORD PTR [r14+0x4]
0x1401c7478: call    0x1401010b0
0x1401c747d: test    rax,rax
0x1401c7480: je      0x1401c748b
0x1401c7482: cmp     WORD PTR [rax+0x4],0x3
0x1401c7487: jne     0x1401c748b
0x1401c7489: inc     edi
0x1401c748b: lea     rcx,[r13+0x280]
0x1401c7492: call    0x140070410
0x1401c7497: test    rax,rax
0x1401c749a: je      0x1401c7645
0x1401c74a0: lea     rdx,[rbp+0x28]
0x1401c74a4: lea     rcx,[r13+0x280]
0x1401c74ab: call    0x140070800
0x1401c74b0: lea     rdx,[rbp+0xf8]
0x1401c74b7: lea     rcx,[r13+0x280]
0x1401c74be: call    0x1400707f0
0x1401c74c3: lea     rcx,[r13+0x298]
0x1401c74ca: lea     rdx,[rbp+0x1b0]
0x1401c74d1: call    0x140070800
0x1401c74d6: lea     r8,[rbp+0xf8]
0x1401c74dd: lea     rdx,[rbp+0x9]
0x1401c74e1: lea     rcx,[rbp+0x28]
0x1401c74e5: call    0x1400703e0
0x1401c74ea: xor     edx,edx
0x1401c74ec: movzx   ecx,BYTE PTR [rax]
0x1401c74ef: call    0x140066d70
0x1401c74f4: test    al,al
0x1401c74f6: je      0x1401c7648
0x1401c74fc: nop     DWORD PTR [rax+0x0]
0x1401c7500: add     edi,0x2
0x1401c7503: lea     rcx,[rbp+0x28]
0x1401c7507: call    0x1400703d0
0x1401c750c: mov     rcx,QWORD PTR [rax]
0x1401c750f: cmp     WORD PTR [rcx],0x4
0x1401c7513: jne     0x1401c75bd
0x1401c7519: lea     rcx,[rbp+0x28]
0x1401c751d: call    0x1400703d0
0x1401c7522: mov     rcx,QWORD PTR [rax]
0x1401c7525: cmp     QWORD PTR [rcx+0x48],0x0
0x1401c752a: je      0x1401c75bd
0x1401c7530: lea     rcx,[rbp+0x28]
0x1401c7534: call    0x1400703d0
0x1401c7539: mov     rcx,QWORD PTR [rax]
0x1401c753c: mov     rsi,QWORD PTR [rcx+0x48]
0x1401c7540: mov     QWORD PTR [rbp-0x60],rsi
0x1401c7544: mov     ebx,0x6b
0x1401c7549: mov     QWORD PTR [rbp-0x30],rbx
0x1401c754d: xor     r14d,r14d
0x1401c7550: mov     r12d,r14d
0x1401c7553: mov     r13d,r14d
0x1401c7556: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401c7560: lea     rcx,[rsi+0x8]
0x1401c7564: add     rcx,r12
0x1401c7567: call    0x140070930
0x1401c756c: test    eax,eax
0x1401c756e: jle     0x1401c75aa
0x1401c7570: lea     r15,[rsi+0x8]
0x1401c7574: mov     rsi,r14
0x1401c7577: mov     r14d,eax
0x1401c757a: nop     WORD PTR [rax+rax*1+0x0]
0x1401c7580: mov     ebx,edi
0x1401c7582: mov     rdx,rsi
0x1401c7585: lea     rcx,[r15+r13*1]
0x1401c7589: call    0x140070920
0x1401c758e: inc     edi
0x1401c7590: cmp     DWORD PTR [rax],0x80
0x1401c7596: cmove   edi,ebx
0x1401c7599: inc     rsi
0x1401c759c: sub     r14,0x1
0x1401c75a0: jne     0x1401c7580
0x1401c75a2: mov     rbx,QWORD PTR [rbp-0x30]
0x1401c75a6: mov     rsi,QWORD PTR [rbp-0x60]
0x1401c75aa: sub     rbx,0x1
0x1401c75ae: mov     QWORD PTR [rbp-0x30],rbx
0x1401c75b2: lea     r12,[r12+0x18]
0x1401c75b7: lea     r13,[r13+0x18]
0x1401c75bb: jne     0x1401c7560
0x1401c75bd: lea     rcx,[rbp+0x28]
0x1401c75c1: call    0x1400703d0
0x1401c75c6: mov     rcx,QWORD PTR [rax]
0x1401c75c9: cmp     WORD PTR [rcx],0x5
0x1401c75cd: jne     0x1401c75fc
0x1401c75cf: lea     rcx,[rbp+0x28]
0x1401c75d3: call    0x1400703d0
0x1401c75d8: mov     rcx,QWORD PTR [rax]
0x1401c75db: cmp     QWORD PTR [rcx+0x50],0x0
0x1401c75e0: je      0x1401c75fc
0x1401c75e2: lea     rcx,[rbp+0x28]
0x1401c75e6: call    0x1400703d0
0x1401c75eb: mov     rcx,QWORD PTR [rax]
0x1401c75ee: mov     rcx,QWORD PTR [rcx+0x50]
0x1401c75f2: mov     rcx,QWORD PTR [rcx]
0x1401c75f5: call    0x140070a10
0x1401c75fa: add     edi,eax
0x1401c75fc: lea     rcx,[rbp+0x28]
0x1401c7600: call    0x1400703c0
0x1401c7605: lea     rcx,[rbp+0x1b0]
0x1401c760c: call    0x1401fc720
0x1401c7611: lea     r8,[rbp+0xf8]
0x1401c7618: lea     rdx,[rbp+0x9]
0x1401c761c: lea     rcx,[rbp+0x28]
0x1401c7620: call    0x1400703e0
0x1401c7625: xor     edx,edx
0x1401c7627: movzx   ecx,BYTE PTR [rax]
0x1401c762a: call    0x140066d70
0x1401c762f: test    al,al
0x1401c7631: jne     0x1401c7500
0x1401c7637: mov     r12d,DWORD PTR [rsp+0x74]
0x1401c763c: mov     esi,DWORD PTR [rbp-0x68]
0x1401c763f: mov     r15d,DWORD PTR [rbp-0x48]
0x1401c7643: jmp     0x1401c7648
0x1401c7645: add     edi,0x2
0x1401c7648: mov     rcx,QWORD PTR [rsp+0x78]
0x1401c764d: add     rcx,0x250
0x1401c7654: call    0x140070410
0x1401c7659: add     edi,eax
0x1401c765b: mov     DWORD PTR [rbp-0x68],edi
0x1401c765e: mov     ecx,DWORD PTR [rip+0x22224a4]        # 0x1423e9b08
0x1401c7664: cmp     edi,ecx
0x1401c7666: jl      0x1401c7683
0x1401c7668: mov     eax,edi
0x1401c766a: sub     eax,ecx
0x1401c766c: inc     eax
0x1401c766e: sub     edi,eax
0x1401c7670: mov     DWORD PTR [rbp-0x68],edi
0x1401c7673: sub     r15d,eax
0x1401c7676: mov     eax,0x0
0x1401c767b: cmovs   r15d,eax
0x1401c767f: mov     DWORD PTR [rbp-0x48],r15d
0x1401c7683: movsxd  rax,DWORD PTR [rbp-0x48]
0x1401c7687: cmp     eax,edi
0x1401c7689: jg      0x1401c7778
0x1401c768f: mov     QWORD PTR [rbp-0x30],rax
0x1401c7693: mov     r14,rax
0x1401c7696: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401c76a0: mov     ebx,esi
0x1401c76a2: cmp     esi,r12d
0x1401c76a5: jg      0x1401c7766
0x1401c76ab: movsxd  r13,edi
0x1401c76ae: mov     rdi,QWORD PTR [rbp-0x30]
0x1401c76b2: mov     r8d,ebx
0x1401c76b5: mov     edx,r15d
0x1401c76b8: lea     rcx,[rip+0x249f0b1]        # 0x142666770
0x1401c76bf: call    0x1400bc6e0
0x1401c76c4: xor     r8d,r8d
0x1401c76c7: xor     edx,edx
0x1401c76c9: lea     rcx,[rip+0x249f0a0]        # 0x142666770
0x1401c76d0: call    0x1400bc750
0x1401c76d5: cmp     r14,rdi
0x1401c76d8: jne     0x1401c7702
0x1401c76da: cmp     ebx,esi
0x1401c76dc: jne     0x1401c76e6
0x1401c76de: mov     edx,DWORD PTR [rip+0x24a09b0]        # 0x142668094
0x1401c76e4: jmp     0x1401c774c
0x1401c76e6: lea     rcx,[rip+0x249f083]        # 0x142666770
0x1401c76ed: cmp     ebx,r12d
0x1401c76f0: jne     0x1401c76fa
0x1401c76f2: mov     edx,DWORD PTR [rip+0x24a09b4]        # 0x1426680ac
0x1401c76f8: jmp     0x1401c7753
0x1401c76fa: mov     edx,DWORD PTR [rip+0x24a09a0]        # 0x1426680a0
0x1401c7700: jmp     0x1401c7753
0x1401c7702: cmp     r14,r13
0x1401c7705: jne     0x1401c772f
0x1401c7707: cmp     ebx,esi
0x1401c7709: jne     0x1401c7713
0x1401c770b: mov     edx,DWORD PTR [rip+0x24a098b]        # 0x14266809c
0x1401c7711: jmp     0x1401c774c
0x1401c7713: lea     rcx,[rip+0x249f056]        # 0x142666770
0x1401c771a: cmp     ebx,r12d
0x1401c771d: jne     0x1401c7727
0x1401c771f: mov     edx,DWORD PTR [rip+0x24a098f]        # 0x1426680b4
0x1401c7725: jmp     0x1401c7753
0x1401c7727: mov     edx,DWORD PTR [rip+0x24a097b]        # 0x1426680a8
0x1401c772d: jmp     0x1401c7753
0x1401c772f: cmp     ebx,esi
0x1401c7731: jne     0x1401c773b
0x1401c7733: mov     edx,DWORD PTR [rip+0x24a095f]        # 0x142668098
0x1401c7739: jmp     0x1401c774c
0x1401c773b: cmp     ebx,r12d
0x1401c773e: mov     edx,DWORD PTR [rip+0x24a096c]        # 0x1426680b0
0x1401c7744: je      0x1401c774c
0x1401c7746: mov     edx,DWORD PTR [rip+0x24a0958]        # 0x1426680a4
0x1401c774c: lea     rcx,[rip+0x249f01d]        # 0x142666770
0x1401c7753: call    0x140af1390
0x1401c7758: inc     ebx
0x1401c775a: cmp     ebx,r12d
0x1401c775d: jle     0x1401c76b2
0x1401c7763: mov     edi,DWORD PTR [rbp-0x68]
0x1401c7766: inc     r15d
0x1401c7769: inc     r14
0x1401c776c: cmp     r15d,edi
0x1401c776f: jle     0x1401c76a0
0x1401c7775: mov     eax,DWORD PTR [rbp-0x48]
0x1401c7778: lea     ebx,[rsi+0x2]
0x1401c777b: mov     DWORD PTR [rbp-0x58],ebx
0x1401c777e: lea     r12d,[rax+0x1]
0x1401c7782: lea     r13d,[rdi-0x1]
0x1401c7786: mov     rsi,QWORD PTR [rbp-0x78]
0x1401c778a: mov     eax,DWORD PTR [rsi+0x13c0]
0x1401c7790: mov     DWORD PTR [rsp+0x74],eax
0x1401c7794: mov     eax,DWORD PTR [rsi+0x13c4]
0x1401c779a: mov     DWORD PTR [rbp-0x10],eax
0x1401c779d: mov     r14,QWORD PTR [rip+0x21eedcc]        # 0x1423b6570
0x1401c77a4: mov     QWORD PTR [rbp-0x60],r14
0x1401c77a8: cmp     rsi,QWORD PTR [rip+0x21eedb9]        # 0x1423b6568
0x1401c77af: je      0x1401c8b77
0x1401c77b5: lea     rcx,[rip+0x21e5e64]        # 0x1423ad620
0x1401c77bc: call    0x140e77190
0x1401c77c1: mov     r15d,eax
0x1401c77c4: mov     DWORD PTR [rbp-0x68],eax
0x1401c77c7: test    eax,eax
0x1401c77c9: jle     0x1401c7ff0
0x1401c77cf: mov     r14b,0x1
0x1401c77d2: mov     edx,DWORD PTR [rip+0x21e8218]        # 0x1423af9f0
0x1401c77d8: lea     rcx,[rip+0x2226399]        # 0x1423edb78
0x1401c77df: call    0x14007f0b0
0x1401c77e4: mov     rsi,rax
0x1401c77e7: xor     dil,dil
0x1401c77ea: test    rax,rax
0x1401c77ed: je      0x1401c794a
0x1401c77f3: lea     rcx,[rax+0x1028]
0x1401c77fa: mov     rdx,QWORD PTR [rbp-0x78]
0x1401c77fe: mov     edx,DWORD PTR [rdx+0x4]
0x1401c7801: call    0x1401010c0
0x1401c7806: movzx   r15d,ax
0x1401c780a: mov     rdx,rsi
0x1401c780d: mov     rcx,QWORD PTR [rbp-0x78]
0x1401c7811: call    0x1409aea40
0x1401c7816: mov     BYTE PTR [rbp-0x50],al
0x1401c7819: lea     ecx,[r15-0x3]
0x1401c781d: cmp     cx,0x1
0x1401c7821: jbe     0x1401c793a
0x1401c7827: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c782b: add     rcx,0x3a0
0x1401c7832: mov     edx,0x7
0x1401c7837: call    0x140073550
0x1401c783c: test    al,al
0x1401c783e: jne     0x1401c7867
0x1401c7840: mov     rax,QWORD PTR [rbp-0x78]
0x1401c7844: mov     rcx,QWORD PTR [rax+0x8]
0x1401c7848: add     rcx,0x3a0
0x1401c784f: mov     edx,0x7
0x1401c7854: call    0x140073550
0x1401c7859: movzx   edi,dil
0x1401c785d: test    al,al
0x1401c785f: mov     eax,0x1
0x1401c7864: cmovne  edi,eax
0x1401c7867: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c786b: add     rcx,0x3a0
0x1401c7872: mov     edx,0x8
0x1401c7877: call    0x140073550
0x1401c787c: test    al,al
0x1401c787e: jne     0x1401c78a7
0x1401c7880: mov     rax,QWORD PTR [rbp-0x78]
0x1401c7884: mov     rcx,QWORD PTR [rax+0x8]
0x1401c7888: add     rcx,0x3a0
0x1401c788f: mov     edx,0x8
0x1401c7894: call    0x140073550
0x1401c7899: movzx   edi,dil
0x1401c789d: test    al,al
0x1401c789f: mov     eax,0x1
0x1401c78a4: cmovne  edi,eax
0x1401c78a7: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c78ab: add     rcx,0x3a0
0x1401c78b2: mov     edx,0x7
0x1401c78b7: call    0x140073550
0x1401c78bc: test    al,al
0x1401c78be: je      0x1401c78e7
0x1401c78c0: mov     rax,QWORD PTR [rbp-0x78]
0x1401c78c4: mov     rcx,QWORD PTR [rax+0x8]
0x1401c78c8: add     rcx,0x3a0
0x1401c78cf: mov     edx,0x7
0x1401c78d4: call    0x140073550
0x1401c78d9: movzx   edi,dil
0x1401c78dd: test    al,al
0x1401c78df: mov     eax,0x1
0x1401c78e4: cmove   edi,eax
0x1401c78e7: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c78eb: add     rcx,0x3a0
0x1401c78f2: mov     edx,0x8
0x1401c78f7: call    0x140073550
0x1401c78fc: test    al,al
0x1401c78fe: je      0x1401c7927
0x1401c7900: mov     rax,QWORD PTR [rbp-0x78]
0x1401c7904: mov     rcx,QWORD PTR [rax+0x8]
0x1401c7908: add     rcx,0x3a0
0x1401c790f: mov     edx,0x8
0x1401c7914: call    0x140073550
0x1401c7919: movzx   edi,dil
0x1401c791d: test    al,al
0x1401c791f: mov     eax,0x1
0x1401c7924: cmove   edi,eax
0x1401c7927: dec     r15w
0x1401c792b: mov     eax,0xfffb
0x1401c7930: test    ax,r15w
0x1401c7934: je      0x1401c7943
0x1401c7936: movzx   eax,BYTE PTR [rbp-0x50]
0x1401c793a: test    al,al
0x1401c793c: je      0x1401c7943
0x1401c793e: test    dil,dil
0x1401c7941: je      0x1401c7946
0x1401c7943: xor     r14b,r14b
0x1401c7946: mov     r15d,DWORD PTR [rbp-0x68]
0x1401c794a: lea     rcx,[rbp+0x1430]
0x1401c7951: call    0x140070c50
0x1401c7956: nop     
0x1401c7957: lea     rcx,[rbp+0xef0]
0x1401c795e: call    0x140070c50
0x1401c7963: nop     
0x1401c7964: mov     rsi,QWORD PTR [rbp-0x78]
0x1401c7968: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c796c: add     rcx,0x3a0
0x1401c7973: mov     edx,0x2d
0x1401c7978: call    0x140073550
0x1401c797d: test    al,al
0x1401c797f: je      0x1401c7ab3
0x1401c7985: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c7989: add     rcx,0x3a0
0x1401c7990: mov     edx,0x8
0x1401c7995: call    0x140073550
0x1401c799a: test    al,al
0x1401c799c: je      0x1401c7ab3
0x1401c79a2: test    r14b,r14b
0x1401c79a5: jne     0x1401c7bc4
0x1401c79ab: xor     r8d,r8d
0x1401c79ae: mov     edx,0x6
0x1401c79b3: mov     r9b,0x1
0x1401c79b6: lea     rcx,[rip+0x249edb3]        # 0x142666770
0x1401c79bd: call    0x1400bc6f0
0x1401c79c2: mov     r8d,ebx
0x1401c79c5: mov     edx,r12d
0x1401c79c8: lea     rcx,[rip+0x249eda1]        # 0x142666770
0x1401c79cf: call    0x1400bc6e0
0x1401c79d4: lea     rdx,[rip+0x1452e6d]        # 0x14161a848 ; literal='Exports to '
0x1401c79db: lea     rcx,[rbp+0x1e50]
0x1401c79e2: call    0x140069710
0x1401c79e7: nop     
0x1401c79e8: xor     r9d,r9d
0x1401c79eb: xor     r8d,r8d
0x1401c79ee: lea     rdx,[rbp+0x1e50]
0x1401c79f5: lea     rcx,[rip+0x249ed74]        # 0x142666770
0x1401c79fc: call    0x140af0220
0x1401c7a01: nop     
0x1401c7a02: lea     rcx,[rbp+0x1e50]
0x1401c7a09: call    0x1400693f0
0x1401c7a0e: lea     rdx,[rbp+0xef0]
0x1401c7a15: mov     rcx,QWORD PTR [rbp-0x60]
0x1401c7a19: call    0x140aaa930
0x1401c7a1e: xor     r9d,r9d
0x1401c7a21: xor     r8d,r8d
0x1401c7a24: lea     rdx,[rbp+0xef0]
0x1401c7a2b: lea     rcx,[rip+0x249ed3e]        # 0x142666770
0x1401c7a32: call    0x140af0220
0x1401c7a37: mov     r8b,0x1
0x1401c7a3a: mov     dl,0x3a
0x1401c7a3c: lea     rcx,[rip+0x249ed2d]        # 0x142666770
0x1401c7a43: call    0x1400bc750
0x1401c7a48: lea     edi,[rbx+0x23]
0x1401c7a4b: mov     r8d,edi
0x1401c7a4e: mov     edx,r12d
0x1401c7a51: lea     rcx,[rip+0x249ed18]        # 0x142666770
0x1401c7a58: call    0x1400bc6e0
0x1401c7a5d: xor     r8d,r8d
0x1401c7a60: mov     edx,0x6
0x1401c7a65: xor     r9d,r9d
0x1401c7a68: lea     rcx,[rip+0x249ed01]        # 0x142666770
0x1401c7a6f: call    0x1400bc6f0
0x1401c7a74: lea     rdx,[rip+0x1452ddd]        # 0x14161a858 ; literal='Petty Annoyance'
0x1401c7a7b: lea     rcx,[rbp+0x3150]
0x1401c7a82: call    0x140069710
0x1401c7a87: nop     
0x1401c7a88: xor     r9d,r9d
0x1401c7a8b: xor     r8d,r8d
0x1401c7a8e: lea     rdx,[rbp+0x3150]
0x1401c7a95: lea     rcx,[rip+0x249ecd4]        # 0x142666770
0x1401c7a9c: call    0x140af0220
0x1401c7aa1: nop     
0x1401c7aa2: lea     rcx,[rbp+0x3150]
0x1401c7aa9: call    0x1400693f0
0x1401c7aae: jmp     0x1401c7d9d
0x1401c7ab3: test    r14b,r14b
0x1401c7ab6: jne     0x1401c7bc4
0x1401c7abc: xor     r8d,r8d
0x1401c7abf: mov     edx,0x6
0x1401c7ac4: mov     r9b,0x1
0x1401c7ac7: lea     rcx,[rip+0x249eca2]        # 0x142666770
0x1401c7ace: call    0x1400bc6f0
0x1401c7ad3: mov     r8d,ebx
0x1401c7ad6: mov     edx,r12d
0x1401c7ad9: lea     rcx,[rip+0x249ec90]        # 0x142666770
0x1401c7ae0: call    0x1400bc6e0
0x1401c7ae5: lea     rdx,[rip+0x1452d5c]        # 0x14161a848 ; literal='Exports to '
0x1401c7aec: lea     rcx,[rbp+0x3870]
0x1401c7af3: call    0x140069710
0x1401c7af8: nop     
0x1401c7af9: xor     r9d,r9d
0x1401c7afc: xor     r8d,r8d
0x1401c7aff: lea     rdx,[rbp+0x3870]
0x1401c7b06: lea     rcx,[rip+0x249ec63]        # 0x142666770
0x1401c7b0d: call    0x140af0220
0x1401c7b12: nop     
0x1401c7b13: lea     rcx,[rbp+0x3870]
0x1401c7b1a: call    0x1400693f0
0x1401c7b1f: lea     rdx,[rbp+0xef0]
0x1401c7b26: mov     rcx,QWORD PTR [rbp-0x60]
0x1401c7b2a: call    0x140aaa930
0x1401c7b2f: xor     r9d,r9d
0x1401c7b32: xor     r8d,r8d
0x1401c7b35: lea     rdx,[rbp+0xef0]
0x1401c7b3c: lea     rcx,[rip+0x249ec2d]        # 0x142666770
0x1401c7b43: call    0x140af0220
0x1401c7b48: mov     r8b,0x1
0x1401c7b4b: mov     dl,0x3a
0x1401c7b4d: lea     rcx,[rip+0x249ec1c]        # 0x142666770
0x1401c7b54: call    0x1400bc750
0x1401c7b59: lea     edi,[rbx+0x23]
0x1401c7b5c: mov     r8d,edi
0x1401c7b5f: mov     edx,r12d
0x1401c7b62: lea     rcx,[rip+0x249ec07]        # 0x142666770
0x1401c7b69: call    0x1400bc6e0
0x1401c7b6e: xor     r8d,r8d
0x1401c7b71: mov     edx,0x5
0x1401c7b76: mov     r9b,0x1
0x1401c7b79: lea     rcx,[rip+0x249ebf0]        # 0x142666770
0x1401c7b80: call    0x1400bc6f0
0x1401c7b85: lea     rdx,[rip+0x1452cdc]        # 0x14161a868 ; literal='Terror'
0x1401c7b8c: lea     rcx,[rbp+0x1b90]
0x1401c7b93: call    0x140069710
0x1401c7b98: nop     
0x1401c7b99: xor     r9d,r9d
0x1401c7b9c: xor     r8d,r8d
0x1401c7b9f: lea     rdx,[rbp+0x1b90]
0x1401c7ba6: lea     rcx,[rip+0x249ebc3]        # 0x142666770
0x1401c7bad: call    0x140af0220
0x1401c7bb2: nop     
0x1401c7bb3: lea     rcx,[rbp+0x1b90]
0x1401c7bba: call    0x1400693f0
0x1401c7bbf: jmp     0x1401c7d9d
0x1401c7bc4: mov     esi,DWORD PTR [rsp+0x74]
0x1401c7bc8: xor     r8d,r8d
0x1401c7bcb: mov     edx,0x6
0x1401c7bd0: mov     r9b,0x1
0x1401c7bd3: lea     rcx,[rip+0x249eb96]        # 0x142666770
0x1401c7bda: call    0x1400bc6f0
0x1401c7bdf: mov     r8d,ebx
0x1401c7be2: mov     edx,r12d
0x1401c7be5: lea     rcx,[rip+0x249eb84]        # 0x142666770
0x1401c7bec: call    0x1400bc6e0
0x1401c7bf1: lea     rdx,[rip+0x1452c78]        # 0x14161a870 ; literal='Imports from '
0x1401c7bf8: test    esi,esi
0x1401c7bfa: jne     0x1401c7cd5
0x1401c7c00: lea     rcx,[rbp+0x1bb0]
0x1401c7c07: call    0x140069710
0x1401c7c0c: nop     
0x1401c7c0d: xor     r9d,r9d
0x1401c7c10: xor     r8d,r8d
0x1401c7c13: lea     rdx,[rbp+0x1bb0]
0x1401c7c1a: lea     rcx,[rip+0x249eb4f]        # 0x142666770
0x1401c7c21: call    0x140af0220
0x1401c7c26: nop     
0x1401c7c27: lea     rcx,[rbp+0x1bb0]
0x1401c7c2e: call    0x1400693f0
0x1401c7c33: lea     rdx,[rbp+0xef0]
0x1401c7c3a: mov     rcx,QWORD PTR [rbp-0x60]
0x1401c7c3e: call    0x140aaa930
0x1401c7c43: xor     r9d,r9d
0x1401c7c46: xor     r8d,r8d
0x1401c7c49: lea     rdx,[rbp+0xef0]
0x1401c7c50: lea     rcx,[rip+0x249eb19]        # 0x142666770
0x1401c7c57: call    0x140af0220
0x1401c7c5c: mov     r8b,0x1
0x1401c7c5f: mov     dl,0x3a
0x1401c7c61: lea     rcx,[rip+0x249eb08]        # 0x142666770
0x1401c7c68: call    0x1400bc750
0x1401c7c6d: lea     edi,[rbx+0x23]
0x1401c7c70: mov     r8d,edi
0x1401c7c73: mov     edx,r12d
0x1401c7c76: lea     rcx,[rip+0x249eaf3]        # 0x142666770
0x1401c7c7d: call    0x1400bc6e0
0x1401c7c82: xor     r8d,r8d
0x1401c7c85: xor     edx,edx
0x1401c7c87: mov     r9b,0x1
0x1401c7c8a: lea     rcx,[rip+0x249eadf]        # 0x142666770
0x1401c7c91: call    0x1400bc6f0
0x1401c7c96: lea     rdx,[rip+0x144e837]        # 0x1416164d4 ; literal='None'
0x1401c7c9d: lea     rcx,[rbp+0x1bd0]
0x1401c7ca4: call    0x140069710
0x1401c7ca9: nop     
0x1401c7caa: xor     r9d,r9d
0x1401c7cad: xor     r8d,r8d
0x1401c7cb0: lea     rdx,[rbp+0x1bd0]
0x1401c7cb7: lea     rcx,[rip+0x249eab2]        # 0x142666770
0x1401c7cbe: call    0x140af0220
0x1401c7cc3: nop     
0x1401c7cc4: lea     rcx,[rbp+0x1bd0]
0x1401c7ccb: call    0x1400693f0
0x1401c7cd0: jmp     0x1401c7d99
0x1401c7cd5: lea     rcx,[rbp+0x1bf0]
0x1401c7cdc: call    0x140069710
0x1401c7ce1: nop     
0x1401c7ce2: xor     r9d,r9d
0x1401c7ce5: xor     r8d,r8d
0x1401c7ce8: lea     rdx,[rbp+0x1bf0]
0x1401c7cef: lea     rcx,[rip+0x249ea7a]        # 0x142666770
0x1401c7cf6: call    0x140af0220
0x1401c7cfb: nop     
0x1401c7cfc: lea     rcx,[rbp+0x1bf0]
0x1401c7d03: call    0x1400693f0
0x1401c7d08: lea     rdx,[rbp+0xef0]
0x1401c7d0f: mov     rcx,QWORD PTR [rbp-0x60]
0x1401c7d13: call    0x140aaa930
0x1401c7d18: xor     r9d,r9d
0x1401c7d1b: xor     r8d,r8d
0x1401c7d1e: lea     rdx,[rbp+0xef0]
0x1401c7d25: lea     rcx,[rip+0x249ea44]        # 0x142666770
0x1401c7d2c: call    0x140af0220
0x1401c7d31: mov     r8b,0x1
0x1401c7d34: mov     dl,0x3a
0x1401c7d36: lea     rcx,[rip+0x249ea33]        # 0x142666770
0x1401c7d3d: call    0x1400bc750
0x1401c7d42: lea     edi,[rbx+0x23]
0x1401c7d45: mov     r8d,edi
0x1401c7d48: mov     edx,r12d
0x1401c7d4b: lea     rcx,[rip+0x249ea1e]        # 0x142666770
0x1401c7d52: call    0x1400bc6e0
0x1401c7d57: xor     r8d,r8d
0x1401c7d5a: mov     edx,0x6
0x1401c7d5f: mov     r9b,0x1
0x1401c7d62: lea     rcx,[rip+0x249ea07]        # 0x142666770
0x1401c7d69: call    0x1400bc6f0
0x1401c7d6e: lea     r8d,[r15-0x1]
0x1401c7d72: mov     edx,esi
0x1401c7d74: lea     rcx,[rbp+0x1430]
0x1401c7d7b: call    0x140796710
0x1401c7d80: xor     r9d,r9d
0x1401c7d83: xor     r8d,r8d
0x1401c7d86: lea     rdx,[rbp+0x1430]
0x1401c7d8d: lea     rcx,[rip+0x249e9dc]        # 0x142666770
0x1401c7d94: call    0x140af0220
0x1401c7d99: mov     rsi,QWORD PTR [rbp-0x78]
0x1401c7d9d: mov     eax,0x1
0x1401c7da2: add     r12d,eax
0x1401c7da5: xor     r8d,r8d
0x1401c7da8: mov     edx,0x2
0x1401c7dad: movzx   r9d,al
0x1401c7db1: lea     rcx,[rip+0x249e9b8]        # 0x142666770
0x1401c7db8: call    0x1400bc6f0
0x1401c7dbd: mov     r8d,ebx
0x1401c7dc0: mov     edx,r12d
0x1401c7dc3: lea     rcx,[rip+0x249e9a6]        # 0x142666770
0x1401c7dca: call    0x1400bc6e0
0x1401c7dcf: lea     rdx,[rip+0x1452aaa]        # 0x14161a880 ; literal='Offerings from '
0x1401c7dd6: lea     rcx,[rbp+0x1c10]
0x1401c7ddd: call    0x140069710
0x1401c7de2: nop     
0x1401c7de3: xor     r9d,r9d
0x1401c7de6: xor     r8d,r8d
0x1401c7de9: lea     rdx,[rbp+0x1c10]
0x1401c7df0: lea     rcx,[rip+0x249e979]        # 0x142666770
0x1401c7df7: call    0x140af0220
0x1401c7dfc: nop     
0x1401c7dfd: lea     rcx,[rbp+0x1c10]
0x1401c7e04: call    0x1400693f0
0x1401c7e09: lea     rdx,[rbp+0xef0]
0x1401c7e10: mov     rcx,QWORD PTR [rbp-0x60]
0x1401c7e14: call    0x140aaa930
0x1401c7e19: xor     r9d,r9d
0x1401c7e1c: xor     r8d,r8d
0x1401c7e1f: lea     rdx,[rbp+0xef0]
0x1401c7e26: lea     rcx,[rip+0x249e943]        # 0x142666770
0x1401c7e2d: call    0x140af0220
0x1401c7e32: mov     r8b,0x1
0x1401c7e35: mov     dl,0x3a
0x1401c7e37: lea     rcx,[rip+0x249e932]        # 0x142666770
0x1401c7e3e: call    0x1400bc750
0x1401c7e43: mov     r8d,edi
0x1401c7e46: mov     edx,r12d
0x1401c7e49: lea     rcx,[rip+0x249e920]        # 0x142666770
0x1401c7e50: call    0x1400bc6e0
0x1401c7e55: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c7e59: add     rcx,0x3a0
0x1401c7e60: mov     edx,0x2d
0x1401c7e65: call    0x140073550
0x1401c7e6a: test    al,al
0x1401c7e6c: je      0x1401c7ee6
0x1401c7e6e: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c7e72: add     rcx,0x3a0
0x1401c7e79: mov     edx,0x8
0x1401c7e7e: call    0x140073550
0x1401c7e83: test    al,al
0x1401c7e85: je      0x1401c7ee6
0x1401c7e87: test    r14b,r14b
0x1401c7e8a: jne     0x1401c7f41
0x1401c7e90: xor     r8d,r8d
0x1401c7e93: mov     edx,0x4
0x1401c7e98: mov     r9b,0x1
0x1401c7e9b: lea     rcx,[rip+0x249e8ce]        # 0x142666770
0x1401c7ea2: call    0x1400bc6f0
0x1401c7ea7: lea     rdx,[rip+0x1445f3e]        # 0x14160ddec ; literal='Death'
0x1401c7eae: lea     rcx,[rbp+0x1c30]
0x1401c7eb5: call    0x140069710
0x1401c7eba: nop     
0x1401c7ebb: xor     r9d,r9d
0x1401c7ebe: xor     r8d,r8d
0x1401c7ec1: lea     rdx,[rbp+0x1c30]
0x1401c7ec8: lea     rcx,[rip+0x249e8a1]        # 0x142666770
0x1401c7ecf: call    0x140af0220
0x1401c7ed4: nop     
0x1401c7ed5: lea     rcx,[rbp+0x1c30]
0x1401c7edc: call    0x1400693f0
0x1401c7ee1: jmp     0x1401c7fce
0x1401c7ee6: test    r14b,r14b
0x1401c7ee9: jne     0x1401c7f41
0x1401c7eeb: xor     r8d,r8d
0x1401c7eee: mov     edx,0x4
0x1401c7ef3: mov     r9b,0x1
0x1401c7ef6: lea     rcx,[rip+0x249e873]        # 0x142666770
0x1401c7efd: call    0x1400bc6f0
0x1401c7f02: lea     rdx,[rip+0x1452987]        # 0x14161a890 ; literal='Vengeance'
0x1401c7f09: lea     rcx,[rbp+0x1c50]
0x1401c7f10: call    0x140069710
0x1401c7f15: nop     
0x1401c7f16: xor     r9d,r9d
0x1401c7f19: xor     r8d,r8d
0x1401c7f1c: lea     rdx,[rbp+0x1c50]
0x1401c7f23: lea     rcx,[rip+0x249e846]        # 0x142666770
0x1401c7f2a: call    0x140af0220
0x1401c7f2f: nop     
0x1401c7f30: lea     rcx,[rbp+0x1c50]
0x1401c7f37: call    0x1400693f0
0x1401c7f3c: jmp     0x1401c7fce
0x1401c7f41: mov     edi,DWORD PTR [rbp-0x10]
0x1401c7f44: xor     r8d,r8d
0x1401c7f47: mov     r9b,0x1
0x1401c7f4a: lea     rcx,[rip+0x249e81f]        # 0x142666770
0x1401c7f51: test    edi,edi
0x1401c7f53: jne     0x1401c7f98
0x1401c7f55: xor     edx,edx
0x1401c7f57: call    0x1400bc6f0
0x1401c7f5c: lea     rdx,[rip+0x144e571]        # 0x1416164d4 ; literal='None'
0x1401c7f63: lea     rcx,[rbp+0x1c70]
0x1401c7f6a: call    0x140069710
0x1401c7f6f: nop     
0x1401c7f70: xor     r9d,r9d
0x1401c7f73: xor     r8d,r8d
0x1401c7f76: lea     rdx,[rbp+0x1c70]
0x1401c7f7d: lea     rcx,[rip+0x249e7ec]        # 0x142666770
0x1401c7f84: call    0x140af0220
0x1401c7f89: nop     
0x1401c7f8a: lea     rcx,[rbp+0x1c70]
0x1401c7f91: call    0x1400693f0
0x1401c7f96: jmp     0x1401c7fce
0x1401c7f98: mov     edx,0x6
0x1401c7f9d: call    0x1400bc6f0
0x1401c7fa2: lea     r8d,[r15-0x1]
0x1401c7fa6: mov     edx,edi
0x1401c7fa8: lea     rcx,[rbp+0x1430]
0x1401c7faf: call    0x140796710
0x1401c7fb4: xor     r9d,r9d
0x1401c7fb7: xor     r8d,r8d
0x1401c7fba: lea     rdx,[rbp+0x1430]
0x1401c7fc1: lea     rcx,[rip+0x249e7a8]        # 0x142666770
0x1401c7fc8: call    0x140af0220
0x1401c7fcd: nop     
0x1401c7fce: lea     rcx,[rbp+0xef0]
0x1401c7fd5: call    0x1400693f0
0x1401c7fda: nop     
0x1401c7fdb: lea     rcx,[rbp+0x1430]
0x1401c7fe2: call    0x1400693f0
0x1401c7fe7: mov     r14,QWORD PTR [rbp-0x60]
0x1401c7feb: jmp     0x1401c80a2
0x1401c7ff0: mov     r8d,ebx
0x1401c7ff3: mov     edx,r12d
0x1401c7ff6: lea     rcx,[rip+0x249e773]        # 0x142666770
0x1401c7ffd: call    0x1400bc6e0
0x1401c8002: xor     r8d,r8d
0x1401c8005: mov     edx,0x7
0x1401c800a: xor     r9d,r9d
0x1401c800d: lea     rcx,[rip+0x249e75c]        # 0x142666770
0x1401c8014: call    0x1400bc6f0
0x1401c8019: lea     rdx,[rip+0x1452880]        # 0x14161a8a0 ; literal='You can look at trade information once you have'
0x1401c8020: lea     rcx,[rbp+0x1c90]
0x1401c8027: call    0x140069710
0x1401c802c: nop     
0x1401c802d: xor     r9d,r9d
0x1401c8030: xor     r8d,r8d
0x1401c8033: lea     rdx,[rbp+0x1c90]
0x1401c803a: lea     rcx,[rip+0x249e72f]        # 0x142666770
0x1401c8041: call    0x140af0220
0x1401c8046: nop     
0x1401c8047: lea     rcx,[rbp+0x1c90]
0x1401c804e: call    0x1400693f0
0x1401c8053: inc     r12d
0x1401c8056: mov     r8d,ebx
0x1401c8059: mov     edx,r12d
0x1401c805c: lea     rcx,[rip+0x249e70d]        # 0x142666770
0x1401c8063: call    0x1400bc6e0
0x1401c8068: lea     rdx,[rip+0x1452861]        # 0x14161a8d0 ; literal='a broker with appraisal skill.'
0x1401c806f: lea     rcx,[rbp+0x1cb0]
0x1401c8076: call    0x140069710
0x1401c807b: nop     
0x1401c807c: xor     r9d,r9d
0x1401c807f: xor     r8d,r8d
0x1401c8082: lea     rdx,[rbp+0x1cb0]
0x1401c8089: lea     rcx,[rip+0x249e6e0]        # 0x142666770
0x1401c8090: call    0x140af0220
0x1401c8095: nop     
0x1401c8096: lea     rcx,[rbp+0x1cb0]
0x1401c809d: call    0x1400693f0
0x1401c80a2: mov     eax,0x1
0x1401c80a7: add     r12d,eax
0x1401c80aa: mov     rcx,QWORD PTR [rip+0x21ee4b7]        # 0x1423b6568
0x1401c80b1: add     rcx,0x1028
0x1401c80b8: mov     edx,DWORD PTR [rsi+0x4]
0x1401c80bb: call    0x1401010b0
0x1401c80c0: mov     rdi,rax
0x1401c80c3: test    rax,rax
0x1401c80c6: je      0x1401c8277
0x1401c80cc: cmp     WORD PTR [rax+0x4],0x3
0x1401c80d1: jne     0x1401c8277
0x1401c80d7: mov     r8d,ebx
0x1401c80da: mov     edx,r12d
0x1401c80dd: lea     rcx,[rip+0x249e68c]        # 0x142666770
0x1401c80e4: call    0x1400bc6e0
0x1401c80e9: xor     r8d,r8d
0x1401c80ec: mov     edx,0x6
0x1401c80f1: mov     r9b,0x1
0x1401c80f4: lea     rcx,[rip+0x249e675]        # 0x142666770
0x1401c80fb: call    0x1400bc6f0
0x1401c8100: lea     rdx,[rip+0x14527e9]        # 0x14161a8f0 ; literal='You accept their tribute every '
0x1401c8107: lea     rcx,[rbp+0x1cd0]
0x1401c810e: call    0x140069710
0x1401c8113: nop     
0x1401c8114: xor     r9d,r9d
0x1401c8117: mov     r8b,0x3
0x1401c811a: lea     rdx,[rbp+0x1cd0]
0x1401c8121: lea     rcx,[rip+0x249e648]        # 0x142666770
0x1401c8128: call    0x140af0220
0x1401c812d: nop     
0x1401c812e: lea     rcx,[rbp+0x1cd0]
0x1401c8135: call    0x1400693f0
0x1401c813a: mov     ecx,DWORD PTR [rdi+0x44]
0x1401c813d: test    ecx,ecx
0x1401c813f: je      0x1401c8200
0x1401c8145: sub     ecx,0x1
0x1401c8148: je      0x1401c81c9
0x1401c814a: sub     ecx,0x1
0x1401c814d: je      0x1401c8192
0x1401c814f: cmp     ecx,0x1
0x1401c8152: jne     0x1401c823a
0x1401c8158: lea     rdx,[rip+0x144bebd]        # 0x14161401c ; literal='Winter'
0x1401c815f: lea     rcx,[rbp+0x1cf0]
0x1401c8166: call    0x140069710
0x1401c816b: nop     
0x1401c816c: xor     r9d,r9d
0x1401c816f: mov     r8b,0x3
0x1401c8172: lea     rdx,[rbp+0x1cf0]
0x1401c8179: lea     rcx,[rip+0x249e5f0]        # 0x142666770
0x1401c8180: call    0x140af0220
0x1401c8185: nop     
0x1401c8186: lea     rcx,[rbp+0x1cf0]
0x1401c818d: jmp     0x1401c8235
0x1401c8192: lea     rdx,[rip+0x144be7b]        # 0x141614014 ; literal='Autumn'
0x1401c8199: lea     rcx,[rbp+0x1d10]
0x1401c81a0: call    0x140069710
0x1401c81a5: nop     
0x1401c81a6: xor     r9d,r9d
0x1401c81a9: mov     r8b,0x3
0x1401c81ac: lea     rdx,[rbp+0x1d10]
0x1401c81b3: lea     rcx,[rip+0x249e5b6]        # 0x142666770
0x1401c81ba: call    0x140af0220
0x1401c81bf: nop     
0x1401c81c0: lea     rcx,[rbp+0x1d10]
0x1401c81c7: jmp     0x1401c8235
0x1401c81c9: lea     rdx,[rip+0x144be3c]        # 0x14161400c ; literal='Summer'
0x1401c81d0: lea     rcx,[rbp+0x1d30]
0x1401c81d7: call    0x140069710
0x1401c81dc: nop     
0x1401c81dd: xor     r9d,r9d
0x1401c81e0: mov     r8b,0x3
0x1401c81e3: lea     rdx,[rbp+0x1d30]
0x1401c81ea: lea     rcx,[rip+0x249e57f]        # 0x142666770
0x1401c81f1: call    0x140af0220
0x1401c81f6: nop     
0x1401c81f7: lea     rcx,[rbp+0x1d30]
0x1401c81fe: jmp     0x1401c8235
0x1401c8200: lea     rdx,[rip+0x144bdfd]        # 0x141614004 ; literal='Spring'
0x1401c8207: lea     rcx,[rbp+0x1d50]
0x1401c820e: call    0x140069710
0x1401c8213: nop     
0x1401c8214: xor     r9d,r9d
0x1401c8217: mov     r8b,0x3
0x1401c821a: lea     rdx,[rbp+0x1d50]
0x1401c8221: lea     rcx,[rip+0x249e548]        # 0x142666770
0x1401c8228: call    0x140af0220
0x1401c822d: nop     
0x1401c822e: lea     rcx,[rbp+0x1d50]
0x1401c8235: call    0x1400693f0
0x1401c823a: lea     rdx,[rip+0x14365a3]        # 0x1415fe7e4 ; literal='.'
0x1401c8241: lea     rcx,[rbp+0x1d70]
0x1401c8248: call    0x140069710
0x1401c824d: nop     
0x1401c824e: xor     r9d,r9d
0x1401c8251: xor     r8d,r8d
0x1401c8254: lea     rdx,[rbp+0x1d70]
0x1401c825b: lea     rcx,[rip+0x249e50e]        # 0x142666770
0x1401c8262: call    0x140af0220
0x1401c8267: nop     
0x1401c8268: lea     rcx,[rbp+0x1d70]
0x1401c826f: call    0x1400693f0
0x1401c8274: inc     r12d
0x1401c8277: inc     r12d
0x1401c827a: mov     r15,QWORD PTR [rsp+0x78]
0x1401c827f: lea     rcx,[r15+0x280]
0x1401c8286: call    0x140070410
0x1401c828b: test    rax,rax
0x1401c828e: je      0x1401c8b09
0x1401c8294: xor     r8d,r8d
0x1401c8297: mov     edx,0x7
0x1401c829c: xor     r9d,r9d
0x1401c829f: lea     rcx,[rip+0x249e4ca]        # 0x142666770
0x1401c82a6: call    0x1400bc6f0
0x1401c82ab: lea     rcx,[rbp+0xd10]
0x1401c82b2: call    0x140070c50
0x1401c82b7: nop     
0x1401c82b8: lea     rdx,[rbp-0x8]
0x1401c82bc: lea     rcx,[r15+0x280]
0x1401c82c3: call    0x140070800
0x1401c82c8: lea     rdx,[rbp+0x100]
0x1401c82cf: lea     rcx,[r15+0x280]
0x1401c82d6: call    0x1400707f0
0x1401c82db: lea     rcx,[r15+0x298]
0x1401c82e2: lea     rdx,[rbp+0x198]
0x1401c82e9: call    0x140070800
0x1401c82ee: lea     r8,[rbp+0x100]
0x1401c82f5: lea     rdx,[rbp+0xa]
0x1401c82f9: lea     rcx,[rbp-0x8]
0x1401c82fd: call    0x1400703e0
0x1401c8302: xor     edx,edx
0x1401c8304: movzx   ecx,BYTE PTR [rax]
0x1401c8307: call    0x140066d70
0x1401c830c: test    al,al
0x1401c830e: je      0x1401c8afb
0x1401c8314: cmp     r12d,r13d
0x1401c8317: jg      0x1401c8af7
0x1401c831d: lea     rcx,[rbp-0x8]
0x1401c8321: call    0x1400703d0
0x1401c8326: mov     rcx,QWORD PTR [rax]
0x1401c8329: cmp     WORD PTR [rcx],0x0
0x1401c832d: jne     0x1401c8487
0x1401c8333: xor     r8d,r8d
0x1401c8336: mov     edx,0x7
0x1401c833b: mov     r9b,0x1
0x1401c833e: lea     rcx,[rip+0x249e42b]        # 0x142666770
0x1401c8345: call    0x1400bc6f0
0x1401c834a: lea     rcx,[rbp-0x8]
0x1401c834e: call    0x1400703d0
0x1401c8353: mov     rcx,QWORD PTR [rax]
0x1401c8356: lea     rdx,[rbp+0xd10]
0x1401c835d: movzx   ecx,WORD PTR [rcx+0x2]
0x1401c8361: call    0x140ade250
0x1401c8366: lea     rcx,[rbp+0xd10]
0x1401c836d: call    0x140544330
0x1401c8372: mov     r8d,ebx
0x1401c8375: mov     edx,r12d
0x1401c8378: lea     rcx,[rip+0x249e3f1]        # 0x142666770
0x1401c837f: call    0x1400bc6e0
0x1401c8384: xor     r9d,r9d
0x1401c8387: xor     r8d,r8d
0x1401c838a: lea     rdx,[rbp+0xd10]
0x1401c8391: lea     rcx,[rip+0x249e3d8]        # 0x142666770
0x1401c8398: call    0x140af0220
0x1401c839d: lea     rcx,[rbp-0x8]
0x1401c83a1: call    0x1400703d0
0x1401c83a6: mov     rcx,QWORD PTR [rax]
0x1401c83a9: cmp     WORD PTR [rcx+0x2],0x2
0x1401c83ae: jne     0x1401c8487
0x1401c83b4: lea     rcx,[rbp-0x8]
0x1401c83b8: call    0x1400703d0
0x1401c83bd: mov     rcx,QWORD PTR [rax]
0x1401c83c0: cmp     DWORD PTR [rcx+0x3c],0x0
0x1401c83c4: jle     0x1401c83cd
0x1401c83c6: mov     edx,0x2
0x1401c83cb: jmp     0x1401c83e9
0x1401c83cd: lea     rcx,[rbp-0x8]
0x1401c83d1: call    0x1400703d0
0x1401c83d6: mov     rcx,QWORD PTR [rax]
0x1401c83d9: cmp     DWORD PTR [rcx+0x3c],0x0
0x1401c83dd: mov     edx,0x6
0x1401c83e2: je      0x1401c83e9
0x1401c83e4: mov     edx,0x4
0x1401c83e9: mov     r9b,0x1
0x1401c83ec: xor     r8d,r8d
0x1401c83ef: lea     rcx,[rip+0x249e37a]        # 0x142666770
0x1401c83f6: call    0x1400bc6f0
0x1401c83fb: lea     r8d,[rbx+0x1e]
0x1401c83ff: mov     edx,r12d
0x1401c8402: lea     rcx,[rip+0x249e367]        # 0x142666770
0x1401c8409: call    0x1400bc6e0
0x1401c840e: lea     rcx,[rbp-0x8]
0x1401c8412: call    0x1400703d0
0x1401c8417: mov     rcx,QWORD PTR [rax]
0x1401c841a: lea     rdx,[rbp+0xd10]
0x1401c8421: mov     ecx,DWORD PTR [rcx+0x3c]
0x1401c8424: call    0x140543070
0x1401c8429: xor     r9d,r9d
0x1401c842c: xor     r8d,r8d
0x1401c842f: lea     rdx,[rbp+0xd10]
0x1401c8436: lea     rcx,[rip+0x249e333]        # 0x142666770
0x1401c843d: call    0x140af0220
0x1401c8442: mov     r8b,0x1
0x1401c8445: mov     dl,0x2f
0x1401c8447: lea     rcx,[rip+0x249e322]        # 0x142666770
0x1401c844e: call    0x1400bc750
0x1401c8453: lea     rcx,[rbp-0x8]
0x1401c8457: call    0x1400703d0
0x1401c845c: mov     rcx,QWORD PTR [rax]
0x1401c845f: lea     rdx,[rbp+0xd10]
0x1401c8466: mov     ecx,DWORD PTR [rcx+0x38]
0x1401c8469: call    0x140543070
0x1401c846e: xor     r9d,r9d
0x1401c8471: xor     r8d,r8d
0x1401c8474: lea     rdx,[rbp+0xd10]
0x1401c847b: lea     rcx,[rip+0x249e2ee]        # 0x142666770
0x1401c8482: call    0x140af0220
0x1401c8487: lea     rcx,[rbp-0x8]
0x1401c848b: call    0x1400703d0
0x1401c8490: mov     rcx,QWORD PTR [rax]
0x1401c8493: cmp     WORD PTR [rcx],0x4
0x1401c8497: jne     0x1401c8553
0x1401c849d: xor     r8d,r8d
0x1401c84a0: mov     edx,0x7
0x1401c84a5: mov     r9b,0x1
0x1401c84a8: lea     rcx,[rip+0x249e2c1]        # 0x142666770
0x1401c84af: call    0x1400bc6f0
0x1401c84b4: mov     r8d,ebx
0x1401c84b7: mov     edx,r12d
0x1401c84ba: lea     rcx,[rip+0x249e2af]        # 0x142666770
0x1401c84c1: call    0x1400bc6e0
0x1401c84c6: lea     rdx,[rip+0x1452443]        # 0x14161a910 ; literal='Trade Agreement (Exports to '
0x1401c84cd: lea     rcx,[rbp+0x1d90]
0x1401c84d4: call    0x140069710
0x1401c84d9: nop     
0x1401c84da: xor     r9d,r9d
0x1401c84dd: xor     r8d,r8d
0x1401c84e0: lea     rdx,[rbp+0x1d90]
0x1401c84e7: lea     rcx,[rip+0x249e282]        # 0x142666770
0x1401c84ee: call    0x140af0220
0x1401c84f3: nop     
0x1401c84f4: lea     rcx,[rbp+0x1d90]
0x1401c84fb: call    0x1400693f0
0x1401c8500: lea     rcx,[rbp+0x1510]
0x1401c8507: call    0x140070c50
0x1401c850c: nop     
0x1401c850d: lea     rdx,[rbp+0x1510]
0x1401c8514: mov     rcx,r14
0x1401c8517: call    0x140aaa930
0x1401c851c: xor     r9d,r9d
0x1401c851f: xor     r8d,r8d
0x1401c8522: lea     rdx,[rbp+0x1510]
0x1401c8529: lea     rcx,[rip+0x249e240]        # 0x142666770
0x1401c8530: call    0x140af0220
0x1401c8535: mov     r8b,0x1
0x1401c8538: mov     dl,0x29
0x1401c853a: lea     rcx,[rip+0x249e22f]        # 0x142666770
0x1401c8541: call    0x1400bc750
0x1401c8546: nop     
0x1401c8547: lea     rcx,[rbp+0x1510]
0x1401c854e: call    0x1400693f0
0x1401c8553: lea     rcx,[rbp-0x8]
0x1401c8557: call    0x1400703d0
0x1401c855c: mov     rcx,QWORD PTR [rax]
0x1401c855f: cmp     WORD PTR [rcx],0x5
0x1401c8563: jne     0x1401c861f
0x1401c8569: xor     r8d,r8d
0x1401c856c: mov     edx,0x7
0x1401c8571: mov     r9b,0x1
0x1401c8574: lea     rcx,[rip+0x249e1f5]        # 0x142666770
0x1401c857b: call    0x1400bc6f0
0x1401c8580: mov     r8d,ebx
0x1401c8583: mov     edx,r12d
0x1401c8586: lea     rcx,[rip+0x249e1e3]        # 0x142666770
0x1401c858d: call    0x1400bc6e0
0x1401c8592: lea     rdx,[rip+0x1452397]        # 0x14161a930 ; literal='Requests (Imports from '
0x1401c8599: lea     rcx,[rbp+0x1db0]
0x1401c85a0: call    0x140069710
0x1401c85a5: nop     
0x1401c85a6: xor     r9d,r9d
0x1401c85a9: xor     r8d,r8d
0x1401c85ac: lea     rdx,[rbp+0x1db0]
0x1401c85b3: lea     rcx,[rip+0x249e1b6]        # 0x142666770
0x1401c85ba: call    0x140af0220
0x1401c85bf: nop     
0x1401c85c0: lea     rcx,[rbp+0x1db0]
0x1401c85c7: call    0x1400693f0
0x1401c85cc: lea     rcx,[rbp+0x1530]
0x1401c85d3: call    0x140070c50
0x1401c85d8: nop     
0x1401c85d9: lea     rdx,[rbp+0x1530]
0x1401c85e0: mov     rcx,r14
0x1401c85e3: call    0x140aaa930
0x1401c85e8: xor     r9d,r9d
0x1401c85eb: xor     r8d,r8d
0x1401c85ee: lea     rdx,[rbp+0x1530]
0x1401c85f5: lea     rcx,[rip+0x249e174]        # 0x142666770
0x1401c85fc: call    0x140af0220
0x1401c8601: mov     r8b,0x1
0x1401c8604: mov     dl,0x29
0x1401c8606: lea     rcx,[rip+0x249e163]        # 0x142666770
0x1401c860d: call    0x1400bc750
0x1401c8612: nop     
0x1401c8613: lea     rcx,[rbp+0x1530]
0x1401c861a: call    0x1400693f0
0x1401c861f: inc     r12d
0x1401c8622: cmp     r12d,r13d
0x1401c8625: jg      0x1401c8af7
0x1401c862b: xor     r8d,r8d
0x1401c862e: mov     edx,0x7
0x1401c8633: xor     r9d,r9d
0x1401c8636: lea     rcx,[rip+0x249e133]        # 0x142666770
0x1401c863d: call    0x1400bc6f0
0x1401c8642: lea     edi,[rbx+0x1]
0x1401c8645: mov     DWORD PTR [rbp-0x68],edi
0x1401c8648: mov     r8d,edi
0x1401c864b: mov     edx,r12d
0x1401c864e: lea     rcx,[rip+0x249e11b]        # 0x142666770
0x1401c8655: call    0x1400bc6e0
0x1401c865a: lea     rdx,[rip+0x14522e7]        # 0x14161a948 ; literal='Agreed in year '
0x1401c8661: lea     rcx,[rbp+0x1dd0]
0x1401c8668: call    0x140069710
0x1401c866d: nop     
0x1401c866e: xor     r9d,r9d
0x1401c8671: mov     r8b,0x3
0x1401c8674: lea     rdx,[rbp+0x1dd0]
0x1401c867b: lea     rcx,[rip+0x249e0ee]        # 0x142666770
0x1401c8682: call    0x140af0220
0x1401c8687: nop     
0x1401c8688: lea     rcx,[rbp+0x1dd0]
0x1401c868f: call    0x1400693f0
0x1401c8694: lea     rcx,[rbp-0x8]
0x1401c8698: call    0x1400703d0
0x1401c869d: mov     rcx,QWORD PTR [rax]
0x1401c86a0: lea     rdx,[rbp+0xd10]
0x1401c86a7: mov     ecx,DWORD PTR [rcx+0x40]
0x1401c86aa: call    0x140543070
0x1401c86af: xor     r9d,r9d
0x1401c86b2: xor     r8d,r8d
0x1401c86b5: lea     rdx,[rbp+0xd10]
0x1401c86bc: lea     rcx,[rip+0x249e0ad]        # 0x142666770
0x1401c86c3: call    0x140af0220
0x1401c86c8: lea     rcx,[rbp+0x198]
0x1401c86cf: call    0x1400703d0
0x1401c86d4: cmp     BYTE PTR [rax],0x0
0x1401c86d7: je      0x1401c873d
0x1401c86d9: lea     r8d,[rbx+0x1e]
0x1401c86dd: mov     edx,r12d
0x1401c86e0: lea     rcx,[rip+0x249e089]        # 0x142666770
0x1401c86e7: call    0x1400bc6e0
0x1401c86ec: xor     r8d,r8d
0x1401c86ef: mov     edx,0x3
0x1401c86f4: mov     r9b,0x1
0x1401c86f7: lea     rcx,[rip+0x249e072]        # 0x142666770
0x1401c86fe: call    0x1400bc6f0
0x1401c8703: lea     rdx,[rip+0x14525ae]        # 0x14161acb8 ; literal='Pending'
0x1401c870a: lea     rcx,[rbp+0x1df0]
0x1401c8711: call    0x140069710
0x1401c8716: nop     
0x1401c8717: xor     r9d,r9d
0x1401c871a: xor     r8d,r8d
0x1401c871d: lea     rdx,[rbp+0x1df0]
0x1401c8724: lea     rcx,[rip+0x249e045]        # 0x142666770
0x1401c872b: call    0x140af0220
0x1401c8730: nop     
0x1401c8731: lea     rcx,[rbp+0x1df0]
0x1401c8738: call    0x1400693f0
0x1401c873d: inc     r12d
0x1401c8740: cmp     r12d,r13d
0x1401c8743: jg      0x1401c8af7
0x1401c8749: lea     rcx,[rbp-0x8]
0x1401c874d: call    0x1400703d0
0x1401c8752: mov     rcx,QWORD PTR [rax]
0x1401c8755: cmp     WORD PTR [rcx],0x4
0x1401c8759: jne     0x1401c88c9
0x1401c875f: lea     rcx,[rbp-0x8]
0x1401c8763: call    0x1400703d0
0x1401c8768: mov     rcx,QWORD PTR [rax]
0x1401c876b: cmp     QWORD PTR [rcx+0x48],0x0
0x1401c8770: je      0x1401c88c9
0x1401c8776: lea     rcx,[rbp-0x8]
0x1401c877a: call    0x1400703d0
0x1401c877f: mov     rcx,QWORD PTR [rax]
0x1401c8782: mov     rsi,QWORD PTR [rcx+0x48]
0x1401c8786: xor     r15d,r15d
0x1401c8789: add     rsi,0x8
0x1401c878d: nop     DWORD PTR [rax]
0x1401c8790: mov     rcx,rsi
0x1401c8793: call    0x140070930
0x1401c8798: mov     r14,rax
0x1401c879b: xor     ebx,ebx
0x1401c879d: test    eax,eax
0x1401c879f: jle     0x1401c88b2
0x1401c87a5: cmp     r12d,r13d
0x1401c87a8: jg      0x1401c88b2
0x1401c87ae: movsxd  rdi,ebx
0x1401c87b1: mov     rdx,rdi
0x1401c87b4: mov     rcx,rsi
0x1401c87b7: call    0x140070920
0x1401c87bc: cmp     DWORD PTR [rax],0x80
0x1401c87c2: je      0x1401c88a7
0x1401c87c8: xor     r8d,r8d
0x1401c87cb: mov     edx,0x6
0x1401c87d0: xor     r9d,r9d
0x1401c87d3: lea     rcx,[rip+0x249df96]        # 0x142666770
0x1401c87da: call    0x1400bc6f0
0x1401c87df: mov     r8d,DWORD PTR [rbp-0x68]
0x1401c87e3: mov     edx,r12d
0x1401c87e6: lea     rcx,[rip+0x249df83]        # 0x142666770
0x1401c87ed: call    0x1400bc6e0
0x1401c87f2: lea     r9,[rbp+0xd10]
0x1401c87f9: movzx   r8d,bx
0x1401c87fd: movzx   edx,r15w
0x1401c8801: mov     rcx,QWORD PTR [rbp-0x78]
0x1401c8805: call    0x14092b600
0x1401c880a: lea     rcx,[rbp+0xd10]
0x1401c8811: call    0x140544330
0x1401c8816: xor     r9d,r9d
0x1401c8819: xor     r8d,r8d
0x1401c881c: lea     rdx,[rbp+0xd10]
0x1401c8823: lea     rcx,[rip+0x249df46]        # 0x142666770
0x1401c882a: call    0x140af0220
0x1401c882f: xor     r8d,r8d
0x1401c8832: mov     edx,0x6
0x1401c8837: mov     r9b,0x1
0x1401c883a: lea     rcx,[rip+0x249df2f]        # 0x142666770
0x1401c8841: call    0x1400bc6f0
0x1401c8846: mov     r8d,DWORD PTR [rbp-0x58]
0x1401c884a: add     r8d,0x2c
0x1401c884e: mov     edx,r12d
0x1401c8851: lea     rcx,[rip+0x249df18]        # 0x142666770
0x1401c8858: call    0x1400bc6e0
0x1401c885d: mov     rdx,rdi
0x1401c8860: mov     rcx,rsi
0x1401c8863: call    0x140070920
0x1401c8868: imul    ecx,DWORD PTR [rax],0x64
0x1401c886b: sar     ecx,0x7
0x1401c886e: lea     rdx,[rbp+0xd10]
0x1401c8875: call    0x140543070
0x1401c887a: xor     r9d,r9d
0x1401c887d: xor     r8d,r8d
0x1401c8880: lea     rdx,[rbp+0xd10]
0x1401c8887: lea     rcx,[rip+0x249dee2]        # 0x142666770
0x1401c888e: call    0x140af0220
0x1401c8893: mov     r8b,0x1
0x1401c8896: mov     dl,0x25
0x1401c8898: lea     rcx,[rip+0x249ded1]        # 0x142666770
0x1401c889f: call    0x1400bc750
0x1401c88a4: inc     r12d
0x1401c88a7: inc     ebx
0x1401c88a9: cmp     ebx,r14d
0x1401c88ac: jl      0x1401c87a5
0x1401c88b2: inc     r15d
0x1401c88b5: add     rsi,0x18
0x1401c88b9: cmp     r15d,0x6b
0x1401c88bd: jl      0x1401c8790
0x1401c88c3: mov     ebx,DWORD PTR [rbp-0x58]
0x1401c88c6: mov     edi,DWORD PTR [rbp-0x68]
0x1401c88c9: lea     rcx,[rbp-0x8]
0x1401c88cd: call    0x1400703d0
0x1401c88d2: mov     rcx,QWORD PTR [rax]
0x1401c88d5: cmp     WORD PTR [rcx],0x5
0x1401c88d9: jne     0x1401c8ab8
0x1401c88df: lea     rcx,[rbp-0x8]
0x1401c88e3: call    0x1400703d0
0x1401c88e8: mov     rcx,QWORD PTR [rax]
0x1401c88eb: cmp     QWORD PTR [rcx+0x50],0x0
0x1401c88f0: je      0x1401c8ab8
0x1401c88f6: lea     rcx,[rbp-0x8]
0x1401c88fa: call    0x1400703d0
0x1401c88ff: mov     rcx,QWORD PTR [rax]
0x1401c8902: mov     rax,QWORD PTR [rcx+0x50]
0x1401c8906: mov     QWORD PTR [rbp-0x28],rax
0x1401c890a: mov     rcx,QWORD PTR [rax]
0x1401c890d: call    0x140070a10
0x1401c8912: mov     QWORD PTR [rbp-0x30],rax
0x1401c8916: xor     esi,esi
0x1401c8918: mov     DWORD PTR [rbp-0x68],esi
0x1401c891b: test    eax,eax
0x1401c891d: jle     0x1401c8ab8
0x1401c8923: cmp     r12d,r13d
0x1401c8926: jg      0x1401c8ab8
0x1401c892c: xor     r8d,r8d
0x1401c892f: mov     edx,0x6
0x1401c8934: xor     r9d,r9d
0x1401c8937: lea     rcx,[rip+0x249de32]        # 0x142666770
0x1401c893e: call    0x1400bc6f0
0x1401c8943: mov     r8d,edi
0x1401c8946: mov     edx,r12d
0x1401c8949: lea     rcx,[rip+0x249de20]        # 0x142666770
0x1401c8950: call    0x1400bc6e0
0x1401c8955: mov     rbx,QWORD PTR [rbp-0x28]
0x1401c8959: mov     rcx,QWORD PTR [rbx]
0x1401c895c: add     rcx,0x60
0x1401c8960: movsxd  r15,esi
0x1401c8963: mov     rdx,r15
0x1401c8966: call    0x140070920
0x1401c896b: mov     esi,DWORD PTR [rax]
0x1401c896d: mov     rcx,QWORD PTR [rbx]
0x1401c8970: add     rcx,0x48
0x1401c8974: mov     rdx,r15
0x1401c8977: call    0x140070a00
0x1401c897c: movsx   r14d,WORD PTR [rax]
0x1401c8980: mov     rcx,QWORD PTR [rbx]
0x1401c8983: add     rcx,0x30
0x1401c8987: mov     rdx,r15
0x1401c898a: call    0x140070a00
0x1401c898f: movzx   edi,WORD PTR [rax]
0x1401c8992: mov     rcx,QWORD PTR [rbx]
0x1401c8995: add     rcx,0x18
0x1401c8999: mov     rdx,r15
0x1401c899c: call    0x140070a00
0x1401c89a1: movzx   ebx,WORD PTR [rax]
0x1401c89a4: mov     rdx,r15
0x1401c89a7: mov     rcx,QWORD PTR [rbp-0x28]
0x1401c89ab: mov     rcx,QWORD PTR [rcx]
0x1401c89ae: call    0x140070a00
0x1401c89b3: xor     ecx,ecx
0x1401c89b5: mov     DWORD PTR [rsp+0x68],ecx
0x1401c89b9: mov     DWORD PTR [rsp+0x60],esi
0x1401c89bd: mov     BYTE PTR [rsp+0x58],0x1
0x1401c89c2: mov     DWORD PTR [rsp+0x50],0xffffffff
0x1401c89ca: mov     DWORD PTR [rsp+0x48],0xffffffff
0x1401c89d2: mov     QWORD PTR [rsp+0x40],rcx
0x1401c89d7: mov     BYTE PTR [rsp+0x38],cl
0x1401c89db: mov     DWORD PTR [rsp+0x30],ecx
0x1401c89df: mov     DWORD PTR [rsp+0x28],0xffffffff
0x1401c89e7: mov     DWORD PTR [rsp+0x20],r14d
0x1401c89ec: movzx   r9d,di
0x1401c89f0: movzx   r8d,bx
0x1401c89f4: movzx   edx,WORD PTR [rax]
0x1401c89f7: lea     rcx,[rbp+0xd10]
0x1401c89fe: call    0x140a99510
0x1401c8a03: lea     rcx,[rbp+0xd10]
0x1401c8a0a: call    0x140544330
0x1401c8a0f: xor     r9d,r9d
0x1401c8a12: xor     r8d,r8d
0x1401c8a15: lea     rdx,[rbp+0xd10]
0x1401c8a1c: lea     rcx,[rip+0x249dd4d]        # 0x142666770
0x1401c8a23: call    0x140af0220
0x1401c8a28: xor     r8d,r8d
0x1401c8a2b: mov     edx,0x6
0x1401c8a30: mov     r9b,0x1
0x1401c8a33: lea     rcx,[rip+0x249dd36]        # 0x142666770
0x1401c8a3a: call    0x1400bc6f0
0x1401c8a3f: mov     ebx,DWORD PTR [rbp-0x58]
0x1401c8a42: lea     r8d,[rbx+0x2c]
0x1401c8a46: mov     edx,r12d
0x1401c8a49: lea     rcx,[rip+0x249dd20]        # 0x142666770
0x1401c8a50: call    0x1400bc6e0
0x1401c8a55: mov     rcx,QWORD PTR [rbp-0x28]
0x1401c8a59: add     rcx,0x8
0x1401c8a5d: mov     rdx,r15
0x1401c8a60: call    0x140070920
0x1401c8a65: imul    ecx,DWORD PTR [rax],0x64
0x1401c8a68: sar     ecx,0x7
0x1401c8a6b: lea     rdx,[rbp+0xd10]
0x1401c8a72: call    0x140543070
0x1401c8a77: xor     r9d,r9d
0x1401c8a7a: xor     r8d,r8d
0x1401c8a7d: lea     rdx,[rbp+0xd10]
0x1401c8a84: lea     rcx,[rip+0x249dce5]        # 0x142666770
0x1401c8a8b: call    0x140af0220
0x1401c8a90: mov     r8b,0x1
0x1401c8a93: mov     dl,0x25
0x1401c8a95: lea     rcx,[rip+0x249dcd4]        # 0x142666770
0x1401c8a9c: call    0x1400bc750
0x1401c8aa1: inc     r12d
0x1401c8aa4: mov     esi,DWORD PTR [rbp-0x68]
0x1401c8aa7: inc     esi
0x1401c8aa9: mov     DWORD PTR [rbp-0x68],esi
0x1401c8aac: cmp     esi,DWORD PTR [rbp-0x30]
0x1401c8aaf: lea     edi,[rbx+0x1]
0x1401c8ab2: jl      0x1401c8923
0x1401c8ab8: lea     rcx,[rbp-0x8]
0x1401c8abc: call    0x1400703c0
0x1401c8ac1: lea     rcx,[rbp+0x198]
0x1401c8ac8: call    0x1401fc720
0x1401c8acd: lea     r8,[rbp+0x100]
0x1401c8ad4: lea     rdx,[rbp+0xa]
0x1401c8ad8: lea     rcx,[rbp-0x8]
0x1401c8adc: call    0x1400703e0
0x1401c8ae1: xor     edx,edx
0x1401c8ae3: movzx   ecx,BYTE PTR [rax]
0x1401c8ae6: call    0x140066d70
0x1401c8aeb: test    al,al
0x1401c8aed: mov     r14,QWORD PTR [rbp-0x60]
0x1401c8af1: jne     0x1401c8314
0x1401c8af7: mov     rsi,QWORD PTR [rbp-0x78]
0x1401c8afb: lea     rcx,[rbp+0xd10]
0x1401c8b02: call    0x1400693f0
0x1401c8b07: jmp     0x1401c8b74
0x1401c8b09: cmp     r12d,r13d
0x1401c8b0c: jg      0x1401c8b74
0x1401c8b0e: mov     r8d,ebx
0x1401c8b11: mov     edx,r12d
0x1401c8b14: lea     rcx,[rip+0x249dc55]        # 0x142666770
0x1401c8b1b: call    0x1400bc6e0
0x1401c8b20: xor     r8d,r8d
0x1401c8b23: mov     edx,0x7
0x1401c8b28: xor     r9d,r9d
0x1401c8b2b: lea     rcx,[rip+0x249dc3e]        # 0x142666770
0x1401c8b32: call    0x1400bc6f0
0x1401c8b37: lea     rdx,[rip+0x1452182]        # 0x14161acc0 ; literal='You have no agreements with this land.'
0x1401c8b3e: lea     rcx,[rbp+0x1e10]
0x1401c8b45: call    0x140069710
0x1401c8b4a: nop     
0x1401c8b4b: xor     r9d,r9d
0x1401c8b4e: xor     r8d,r8d
0x1401c8b51: lea     rdx,[rbp+0x1e10]
0x1401c8b58: lea     rcx,[rip+0x249dc11]        # 0x142666770
0x1401c8b5f: call    0x140af0220
0x1401c8b64: nop     
0x1401c8b65: lea     rcx,[rbp+0x1e10]
0x1401c8b6c: call    0x1400693f0
0x1401c8b71: inc     r12d
0x1401c8b74: inc     r12d
0x1401c8b77: mov     rdi,QWORD PTR [rsp+0x78]
0x1401c8b7c: add     rdi,0x250
0x1401c8b83: mov     rcx,rdi
0x1401c8b86: call    0x140070410
0x1401c8b8b: test    rax,rax
0x1401c8b8e: je      0x1401c8e23
0x1401c8b94: xor     r8d,r8d
0x1401c8b97: mov     edx,0x7
0x1401c8b9c: xor     r9d,r9d
0x1401c8b9f: lea     rcx,[rip+0x249dbca]        # 0x142666770
0x1401c8ba6: call    0x1400bc6f0
0x1401c8bab: lea     rcx,[rbp+0xe90]
0x1401c8bb2: call    0x140070c50
0x1401c8bb7: nop     
0x1401c8bb8: lea     rdx,[rbp+0x68]
0x1401c8bbc: mov     rcx,rdi
0x1401c8bbf: call    0x140070800
0x1401c8bc4: lea     rdx,[rbp+0x108]
0x1401c8bcb: mov     rcx,rdi
0x1401c8bce: call    0x1400707f0
0x1401c8bd3: lea     r8,[rbp+0x108]
0x1401c8bda: lea     rdx,[rbp+0xb]
0x1401c8bde: lea     rcx,[rbp+0x68]
0x1401c8be2: call    0x1400703e0
0x1401c8be7: xor     edx,edx
0x1401c8be9: movzx   ecx,BYTE PTR [rax]
0x1401c8bec: call    0x140066d70
0x1401c8bf1: test    al,al
0x1401c8bf3: je      0x1401c8d57
0x1401c8bf9: nop     DWORD PTR [rax+0x0]
0x1401c8c00: cmp     r12d,r13d
0x1401c8c03: jg      0x1401c8d57
0x1401c8c09: lea     rcx,[rbp+0x68]
0x1401c8c0d: call    0x1400703d0
0x1401c8c12: mov     rcx,QWORD PTR [rax]
0x1401c8c15: mov     rcx,QWORD PTR [rcx+0x10]
0x1401c8c19: call    0x140c24140
0x1401c8c1e: test    rax,rax
0x1401c8c21: je      0x1401c8c38
0x1401c8c23: cmp     BYTE PTR [rax+0x72],0x0
0x1401c8c27: je      0x1401c8c38
0x1401c8c29: lea     rdx,[rbp+0xe90]
0x1401c8c30: mov     rcx,rax
0x1401c8c33: call    0x140aaa930
0x1401c8c38: lea     rcx,[rbp+0xe90]
0x1401c8c3f: call    0x140544330
0x1401c8c44: mov     r8d,ebx
0x1401c8c47: mov     edx,r12d
0x1401c8c4a: lea     rcx,[rip+0x249db1f]        # 0x142666770
0x1401c8c51: call    0x1400bc6e0
0x1401c8c56: xor     r9d,r9d
0x1401c8c59: xor     r8d,r8d
0x1401c8c5c: lea     rdx,[rbp+0xe90]
0x1401c8c63: lea     rcx,[rip+0x249db06]        # 0x142666770
0x1401c8c6a: call    0x140af0220
0x1401c8c6f: lea     r8d,[rbx+0x19]
0x1401c8c73: mov     edx,r12d
0x1401c8c76: lea     rcx,[rip+0x249daf3]        # 0x142666770
0x1401c8c7d: call    0x1400bc6e0
0x1401c8c82: lea     rcx,[rbp+0x68]
0x1401c8c86: call    0x1400703d0
0x1401c8c8b: mov     r8d,DWORD PTR [rsi+0x4]
0x1401c8c8f: lea     rdx,[rbp+0xe90]
0x1401c8c96: mov     rcx,QWORD PTR [rax]
0x1401c8c99: call    0x140df0480
0x1401c8c9e: lea     rcx,[rbp+0xe90]
0x1401c8ca5: call    0x140544330
0x1401c8caa: lea     rcx,[rbp+0xe90]
0x1401c8cb1: call    0x1400708f0
0x1401c8cb6: cmp     rax,0x1a
0x1401c8cba: jb      0x1401c8d0c
0x1401c8cbc: xor     r8d,r8d
0x1401c8cbf: mov     edx,0x19
0x1401c8cc4: lea     rcx,[rbp+0xe90]
0x1401c8ccb: call    0x1400e27f0
0x1401c8cd0: mov     edx,0x16
0x1401c8cd5: lea     rcx,[rbp+0xe90]
0x1401c8cdc: call    0x1400fcb70
0x1401c8ce1: mov     BYTE PTR [rax],0x2e
0x1401c8ce4: mov     edx,0x17
0x1401c8ce9: lea     rcx,[rbp+0xe90]
0x1401c8cf0: call    0x1400fcb70
0x1401c8cf5: mov     BYTE PTR [rax],0x2e
0x1401c8cf8: mov     edx,0x18
0x1401c8cfd: lea     rcx,[rbp+0xe90]
0x1401c8d04: call    0x1400fcb70
0x1401c8d09: mov     BYTE PTR [rax],0x2e
0x1401c8d0c: xor     r9d,r9d
0x1401c8d0f: xor     r8d,r8d
0x1401c8d12: lea     rdx,[rbp+0xe90]
0x1401c8d19: lea     rcx,[rip+0x249da50]        # 0x142666770
0x1401c8d20: call    0x140af0220
0x1401c8d25: inc     r12d
0x1401c8d28: lea     rcx,[rbp+0x68]
0x1401c8d2c: call    0x1400703c0
0x1401c8d31: lea     r8,[rbp+0x108]
0x1401c8d38: lea     rdx,[rbp+0xb]
0x1401c8d3c: lea     rcx,[rbp+0x68]
0x1401c8d40: call    0x1400703e0
0x1401c8d45: xor     edx,edx
0x1401c8d47: movzx   ecx,BYTE PTR [rax]
0x1401c8d4a: call    0x140066d70
0x1401c8d4f: test    al,al
0x1401c8d51: jne     0x1401c8c00
0x1401c8d57: lea     rcx,[rbp+0xe90]
0x1401c8d5e: call    0x1400693f0
0x1401c8d63: mov     r13,QWORD PTR [rsp+0x78]
0x1401c8d68: mov     eax,DWORD PTR [r13+0x1b4]
0x1401c8d6f: cmp     eax,0x3
0x1401c8d72: je      0x1401c8d79
0x1401c8d74: cmp     eax,0x8
0x1401c8d77: jne     0x1401c8d86
0x1401c8d79: cmp     DWORD PTR [rip+0x2220d88],0x42        # 0x1423e9b08
0x1401c8d80: jle     0x1401d64d5
0x1401c8d86: movsxd  rdi,DWORD PTR [rbp-0x18]
0x1401c8d8a: mov     DWORD PTR [rbp-0x68],edi
0x1401c8d8d: lea     esi,[rdi-0x12]
0x1401c8d90: mov     eax,DWORD PTR [rip+0x2220d72]        # 0x1423e9b08
0x1401c8d96: lea     ecx,[rax-0x18]
0x1401c8d99: mov     DWORD PTR [rsp+0x74],ecx
0x1401c8d9d: lea     r13d,[rax-0x15]
0x1401c8da1: mov     DWORD PTR [rbp-0x60],r13d
0x1401c8da5: lea     edx,[rax-0x12]
0x1401c8da8: mov     DWORD PTR [rbp-0x58],edx
0x1401c8dab: lea     edx,[rax-0xf]
0x1401c8dae: mov     DWORD PTR [rsp+0x70],edx
0x1401c8db2: lea     edx,[rax-0xc]
0x1401c8db5: mov     DWORD PTR [rbp-0x48],edx
0x1401c8db8: lea     edx,[rax-0x9]
0x1401c8dbb: mov     DWORD PTR [rbp-0x6c],edx
0x1401c8dbe: lea     edx,[rax-0x6]
0x1401c8dc1: mov     DWORD PTR [rbp-0x70],edx
0x1401c8dc4: lea     r8d,[rdi-0x7]
0x1401c8dc8: mov     DWORD PTR [rbp-0x28],r8d
0x1401c8dcc: add     eax,0xfffffffd
0x1401c8dcf: mov     DWORD PTR [rbp-0x10],eax
0x1401c8dd2: mov     r12d,esi
0x1401c8dd5: cmp     esi,edi
0x1401c8dd7: jg      0x1401d55b7
0x1401c8ddd: movsxd  r13,esi
0x1401c8de0: mov     r15,r13
0x1401c8de3: mov     rsi,rdi
0x1401c8de6: mov     r14d,ecx
0x1401c8de9: lea     rbx,[rip+0x249f424]        # 0x142668214
0x1401c8df0: lea     rdi,[rip+0x249f429]        # 0x142668220
0x1401c8df7: nop     WORD PTR [rax+rax*1+0x0]
0x1401c8e00: mov     r8d,r12d
0x1401c8e03: mov     edx,r14d
0x1401c8e06: lea     rcx,[rip+0x249d963]        # 0x142666770
0x1401c8e0d: call    0x1400bc6e0
0x1401c8e12: cmp     r15,r13
0x1401c8e15: jne     0x1401d5573
0x1401c8e1b: mov     edx,DWORD PTR [rbx-0x18]
0x1401c8e1e: jmp     0x1401d557f
0x1401c8e23: cmp     r12d,r13d
0x1401c8e26: jg      0x1401c8d63
0x1401c8e2c: mov     r8d,ebx
0x1401c8e2f: mov     edx,r12d
0x1401c8e32: lea     rcx,[rip+0x249d937]        # 0x142666770
0x1401c8e39: call    0x1400bc6e0
0x1401c8e3e: xor     r8d,r8d
0x1401c8e41: mov     edx,0x7
0x1401c8e46: xor     r9d,r9d
0x1401c8e49: lea     rcx,[rip+0x249d920]        # 0x142666770
0x1401c8e50: call    0x1400bc6f0
0x1401c8e55: lea     rdx,[rip+0x1451e8c]        # 0x14161ace8 ; literal='This land has no important leaders.'
0x1401c8e5c: lea     rcx,[rbp+0x1e30]
0x1401c8e63: call    0x140069710
0x1401c8e68: nop     
0x1401c8e69: xor     r9d,r9d
0x1401c8e6c: xor     r8d,r8d
0x1401c8e6f: lea     rdx,[rbp+0x1e30]
0x1401c8e76: lea     rcx,[rip+0x249d8f3]        # 0x142666770
0x1401c8e7d: call    0x140af0220
0x1401c8e82: nop     
0x1401c8e83: lea     rcx,[rbp+0x1e30]
0x1401c8e8a: jmp     0x1401c8d5e
0x1401c8e8f: mov     r13d,DWORD PTR [rbp-0x18]
0x1401c8e93: mov     DWORD PTR [rsp+0x74],r13d
0x1401c8e98: lea     r15d,[r13-0x37]
0x1401c8e9c: mov     DWORD PTR [rbp-0x68],r15d
0x1401c8ea0: lea     ecx,[r15-0x2]
0x1401c8ea4: mov     DWORD PTR [rbp-0x58],ecx
0x1401c8ea7: mov     r12d,0x14
0x1401c8ead: mov     eax,DWORD PTR [rip+0x2220c55]        # 0x1423e9b08
0x1401c8eb3: cmp     eax,0x2e
0x1401c8eb6: jle     0x1401c8ed0
0x1401c8eb8: lea     r12d,[rax-0x1a]
0x1401c8ebc: cmp     r12d,0x1e
0x1401c8ec0: jle     0x1401c8ed0
0x1401c8ec2: mov     r12d,0x1e
0x1401c8ec8: mov     edi,r13d
0x1401c8ecb: mov     r14d,esi
0x1401c8ece: jmp     0x1401c8ee0
0x1401c8ed0: mov     edi,r13d
0x1401c8ed3: mov     r14d,esi
0x1401c8ed6: test    r12d,r12d
0x1401c8ed9: js      0x1401c8fbc
0x1401c8edf: nop     
0x1401c8ee0: mov     ebx,ecx
0x1401c8ee2: cmp     ecx,edi
0x1401c8ee4: jg      0x1401c8fa9
0x1401c8eea: movsxd  r15,r12d
0x1401c8eed: mov     r13d,DWORD PTR [rbp-0x58]
0x1401c8ef1: mov     r8d,ebx
0x1401c8ef4: mov     edx,r14d
0x1401c8ef7: lea     rcx,[rip+0x249d872]        # 0x142666770
0x1401c8efe: call    0x1400bc6e0
0x1401c8f03: xor     r8d,r8d
0x1401c8f06: xor     edx,edx
0x1401c8f08: lea     rcx,[rip+0x249d861]        # 0x142666770
0x1401c8f0f: call    0x1400bc750
0x1401c8f14: test    rsi,rsi
0x1401c8f17: jne     0x1401c8f41
0x1401c8f19: cmp     ebx,r13d
0x1401c8f1c: jne     0x1401c8f26
0x1401c8f1e: mov     edx,DWORD PTR [rip+0x249f170]        # 0x142668094
0x1401c8f24: jmp     0x1401c8f8b
0x1401c8f26: lea     rcx,[rip+0x249d843]        # 0x142666770
0x1401c8f2d: cmp     ebx,edi
0x1401c8f2f: jne     0x1401c8f39
0x1401c8f31: mov     edx,DWORD PTR [rip+0x249f175]        # 0x1426680ac
0x1401c8f37: jmp     0x1401c8f92
0x1401c8f39: mov     edx,DWORD PTR [rip+0x249f161]        # 0x1426680a0
0x1401c8f3f: jmp     0x1401c8f92
0x1401c8f41: cmp     rsi,r15
0x1401c8f44: jne     0x1401c8f6e
0x1401c8f46: cmp     ebx,r13d
0x1401c8f49: jne     0x1401c8f53
0x1401c8f4b: mov     edx,DWORD PTR [rip+0x249f14b]        # 0x14266809c
0x1401c8f51: jmp     0x1401c8f8b
0x1401c8f53: lea     rcx,[rip+0x249d816]        # 0x142666770
0x1401c8f5a: cmp     ebx,edi
0x1401c8f5c: jne     0x1401c8f66
0x1401c8f5e: mov     edx,DWORD PTR [rip+0x249f150]        # 0x1426680b4
0x1401c8f64: jmp     0x1401c8f92
0x1401c8f66: mov     edx,DWORD PTR [rip+0x249f13c]        # 0x1426680a8
0x1401c8f6c: jmp     0x1401c8f92
0x1401c8f6e: cmp     ebx,r13d
0x1401c8f71: jne     0x1401c8f7b
0x1401c8f73: mov     edx,DWORD PTR [rip+0x249f11f]        # 0x142668098
0x1401c8f79: jmp     0x1401c8f8b
0x1401c8f7b: cmp     ebx,edi
0x1401c8f7d: mov     edx,DWORD PTR [rip+0x249f12d]        # 0x1426680b0
0x1401c8f83: je      0x1401c8f8b
0x1401c8f85: mov     edx,DWORD PTR [rip+0x249f119]        # 0x1426680a4
0x1401c8f8b: lea     rcx,[rip+0x249d7de]        # 0x142666770
0x1401c8f92: call    0x140af1390
0x1401c8f97: inc     ebx
0x1401c8f99: cmp     ebx,edi
0x1401c8f9b: jle     0x1401c8ef1
0x1401c8fa1: mov     r13d,DWORD PTR [rsp+0x74]
0x1401c8fa6: mov     ecx,DWORD PTR [rbp-0x58]
0x1401c8fa9: inc     r14d
0x1401c8fac: inc     rsi
0x1401c8faf: cmp     r14d,r12d
0x1401c8fb2: jle     0x1401c8ee0
0x1401c8fb8: lea     r15d,[r13-0x37]
0x1401c8fbc: lea     ebx,[r13-0x2]
0x1401c8fc0: mov     DWORD PTR [rbp-0x6c],ebx
0x1401c8fc3: lea     ecx,[r12-0x1]
0x1401c8fc8: mov     eax,0x55555556
0x1401c8fcd: imul    ecx
0x1401c8fcf: mov     edi,edx
0x1401c8fd1: shr     edi,0x1f
0x1401c8fd4: add     edi,edx
0x1401c8fd6: mov     DWORD PTR [rsp+0x74],edi
0x1401c8fda: mov     rcx,QWORD PTR [rsp+0x78]
0x1401c8fdf: add     rcx,0x2b8
0x1401c8fe6: call    0x140070410
0x1401c8feb: mov     rsi,rax
0x1401c8fee: mov     QWORD PTR [rbp-0x30],rax
0x1401c8ff2: cmp     eax,edi
0x1401c8ff4: jle     0x1401c8ffd
0x1401c8ff6: lea     ebx,[r13-0x4]
0x1401c8ffa: mov     DWORD PTR [rbp-0x6c],ebx
0x1401c8ffd: lea     r14d,[rbx-0x3]
0x1401c9001: mov     DWORD PTR [rbp-0x10],r14d
0x1401c9005: xor     r8d,r8d
0x1401c9008: mov     QWORD PTR [rbp-0x60],r8
0x1401c900c: mov     r12d,0x1
0x1401c9012: mov     DWORD PTR [rsp+0x70],r12d
0x1401c9017: mov     rax,QWORD PTR [rsp+0x78]
0x1401c901c: mov     ecx,DWORD PTR [rax+0x2e0]
0x1401c9022: mov     edx,esi
0x1401c9024: sub     edx,edi
0x1401c9026: cmp     ecx,edx
0x1401c9028: cmovle  edx,ecx
0x1401c902b: mov     eax,r8d
0x1401c902e: test    edx,edx
0x1401c9030: cmovns  eax,edx
0x1401c9033: mov     DWORD PTR [rbp-0x70],eax
0x1401c9036: lea     ecx,[rax+rdi*1]
0x1401c9039: mov     DWORD PTR [rbp-0x20],ecx
0x1401c903c: cmp     eax,ecx
0x1401c903e: jge     0x1401c9731
0x1401c9044: mov     ecx,DWORD PTR [rbp-0x20]
0x1401c9047: mov     DWORD PTR [rbp-0x48],ecx
0x1401c904a: nop     WORD PTR [rax+rax*1+0x0]
0x1401c9050: cmp     eax,esi
0x1401c9052: jge     0x1401c96ae
0x1401c9058: movsxd  rdx,eax
0x1401c905b: mov     rdi,QWORD PTR [rsp+0x78]
0x1401c9060: lea     rcx,[rdi+0x2b8]
0x1401c9067: call    0x1400707e0
0x1401c906c: mov     r13,QWORD PTR [rax]
0x1401c906f: mov     QWORD PTR [rbp-0x28],r13
0x1401c9073: cmp     BYTE PTR [rip+0x21e38db],0x0        # 0x1423ac955
0x1401c907a: je      0x1401c90c7
0x1401c907c: mov     eax,DWORD PTR [rbp-0x38]
0x1401c907f: cmp     eax,r15d
0x1401c9082: jl      0x1401c90c7
0x1401c9084: cmp     eax,ebx
0x1401c9086: jg      0x1401c90c7
0x1401c9088: mov     ecx,DWORD PTR [rbp-0x3c]
0x1401c908b: cmp     ecx,r12d
0x1401c908e: jl      0x1401c90c7
0x1401c9090: lea     ebx,[r12-0x1]
0x1401c9095: lea     eax,[rbx+0x3]
0x1401c9098: cmp     ecx,eax
0x1401c909a: jg      0x1401c90c4
0x1401c909c: cmp     QWORD PTR [rdi+0x2d0],r13
0x1401c90a3: je      0x1401c90bd
0x1401c90a5: mov     QWORD PTR [rdi+0x2d0],r13
0x1401c90ac: mov     edx,0x2
0x1401c90b1: lea     rcx,[rip+0x249d6b8]        # 0x142666770
0x1401c90b8: call    0x140afe4c0
0x1401c90bd: mov     QWORD PTR [rbp-0x60],r13
0x1401c90c1: mov     DWORD PTR [rbp-0x48],ebx
0x1401c90c4: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401c90c7: xor     r8d,r8d
0x1401c90ca: mov     edx,0x7
0x1401c90cf: mov     r9b,0x1
0x1401c90d2: lea     rcx,[rip+0x249d697]        # 0x142666770
0x1401c90d9: call    0x1400bc6f0
0x1401c90de: mov     esi,r15d
0x1401c90e1: cmp     r15d,ebx
0x1401c90e4: jg      0x1401c9192
0x1401c90ea: lea     r15d,[r12+0x3]
0x1401c90ef: movsxd  r13,DWORD PTR [rbp-0x68]
0x1401c90f3: mov     r14,r13
0x1401c90f6: mov     edi,r12d
0x1401c90f9: cmp     r12d,r15d
0x1401c90fc: jge     0x1401c9179
0x1401c90fe: movsxd  r12,ebx
0x1401c9101: lea     rbx,[rip+0x249f028]        # 0x142668130
0x1401c9108: nop     DWORD PTR [rax+rax*1+0x0]
0x1401c9110: mov     r8d,esi
0x1401c9113: mov     edx,edi
0x1401c9115: lea     rcx,[rip+0x249d654]        # 0x142666770
0x1401c911c: call    0x1400bc6e0
0x1401c9121: cmp     esi,r13d
0x1401c9124: jne     0x1401c912b
0x1401c9126: mov     edx,DWORD PTR [rbx-0x18]
0x1401c9129: jmp     0x1401c9137
0x1401c912b: cmp     r14,r12
0x1401c912e: jne     0x1401c9134
0x1401c9130: mov     edx,DWORD PTR [rbx]
0x1401c9132: jmp     0x1401c9137
0x1401c9134: mov     edx,DWORD PTR [rbx-0xc]
0x1401c9137: lea     rcx,[rip+0x249d632]        # 0x142666770
0x1401c913e: call    0x140af1390
0x1401c9143: xor     edx,edx
0x1401c9145: lea     rcx,[rip+0x22209a4]        # 0x1423e9af0
0x1401c914c: call    0x140073550
0x1401c9151: test    al,al
0x1401c9153: je      0x1401c9166
0x1401c9155: mov     r8b,0x1
0x1401c9158: xor     edx,edx
0x1401c915a: lea     rcx,[rip+0x249d60f]        # 0x142666770
0x1401c9161: call    0x1400bc750
0x1401c9166: inc     edi
0x1401c9168: add     rbx,0x4
0x1401c916c: cmp     edi,r15d
0x1401c916f: jl      0x1401c9110
0x1401c9171: mov     r12d,DWORD PTR [rsp+0x70]
0x1401c9176: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401c9179: inc     esi
0x1401c917b: inc     r14
0x1401c917e: cmp     esi,ebx
0x1401c9180: jle     0x1401c90f6
0x1401c9186: mov     r13,QWORD PTR [rbp-0x28]
0x1401c918a: mov     r15d,DWORD PTR [rbp-0x68]
0x1401c918e: mov     r14d,DWORD PTR [rbp-0x10]
0x1401c9192: xor     r8d,r8d
0x1401c9195: mov     edx,0x3
0x1401c919a: mov     r9b,0x1
0x1401c919d: lea     rcx,[rip+0x249d5cc]        # 0x142666770
0x1401c91a4: call    0x1400bc6f0
0x1401c91a9: lea     rcx,[rbp+0xcf0]
0x1401c91b0: call    0x140070c50
0x1401c91b5: nop     
0x1401c91b6: mov     rcx,r13
0x1401c91b9: call    0x1400766d0
0x1401c91be: sub     eax,0x2
0x1401c91c1: je      0x1401c92a9
0x1401c91c7: sub     eax,0xf
0x1401c91ca: je      0x1401c9271
0x1401c91d0: sub     eax,0x1
0x1401c91d3: je      0x1401c921a
0x1401c91d5: sub     eax,0x1
0x1401c91d8: je      0x1401c920e
0x1401c91da: cmp     eax,0x6
0x1401c91dd: jne     0x1401c932e
0x1401c91e3: lea     rdx,[rbp+0xcf0]
0x1401c91ea: mov     rcx,QWORD PTR [r13+0x130]
0x1401c91f1: call    0x1401bdb90
0x1401c91f6: lea     rdx,[rip+0x144fbcf]        # 0x141618dcc ; literal=' at '
0x1401c91fd: lea     rcx,[rbp+0xcf0]
0x1401c9204: call    0x140070b20
0x1401c9209: jmp     0x1401c9314
0x1401c920e: lea     rdx,[rip+0x1451afb]        # 0x14161ad10 ; literal='Request workers from '
0x1401c9215: jmp     0x1401c9308
0x1401c921a: lea     rdx,[rip+0x143b2d7]        # 0x1416044f8 ; literal='Rescue '
0x1401c9221: lea     rcx,[rbp+0xcf0]
0x1401c9228: call    0x140070b40
0x1401c922d: lea     rcx,[rbp+0x740]
0x1401c9234: call    0x140073640
0x1401c9239: mov     r8,QWORD PTR [r13+0x130]
0x1401c9240: mov     eax,0x1
0x1401c9245: mov     WORD PTR [rsp+0x28],ax
0x1401c924a: mov     WORD PTR [rsp+0x20],ax
0x1401c924f: lea     r9,[rbp+0x740]
0x1401c9256: mov     r8d,DWORD PTR [r8]
0x1401c9259: lea     rdx,[rbp+0xcf0]
0x1401c9260: lea     rcx,[rip+0x234cdd1]        # 0x142516038
0x1401c9267: call    0x140ba79f0
0x1401c926c: jmp     0x1401c932e
0x1401c9271: lea     rdx,[rip+0x1451b10]        # 0x14161ad88 ; literal='Recover '
0x1401c9278: lea     rcx,[rbp+0xcf0]
0x1401c927f: call    0x140070b40
0x1401c9284: mov     r8,QWORD PTR [r13+0x130]
0x1401c928b: xor     r9d,r9d
0x1401c928e: mov     r8d,DWORD PTR [r8]
0x1401c9291: lea     rdx,[rbp+0xcf0]
0x1401c9298: lea     rcx,[rip+0x234cd99]        # 0x142516038
0x1401c929f: call    0x140ba8ee0
0x1401c92a4: jmp     0x1401c932e
0x1401c92a9: mov     rax,QWORD PTR [r13+0x130]
0x1401c92b0: movsxd  rcx,DWORD PTR [rax]
0x1401c92b3: cmp     ecx,0x6
0x1401c92b6: ja      0x1401c9301
0x1401c92b8: lea     rdx,[rip+0xffffffffffe36d41]        # 0x140000000
0x1401c92bf: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d6558]
0x1401c92c6: add     rcx,rdx
0x1401c92c9: jmp     rcx
0x1401c92cb: lea     rdx,[rip+0x1451a56]        # 0x14161ad28 ; literal='Explore '
0x1401c92d2: jmp     0x1401c9308
0x1401c92d4: lea     rdx,[rip+0x1451a5d]        # 0x14161ad38 ; literal='Pillage '
0x1401c92db: jmp     0x1401c9308
0x1401c92dd: lea     rdx,[rip+0x1451a64]        # 0x14161ad48 ; literal='Demand tribute from '
0x1401c92e4: jmp     0x1401c9308
0x1401c92e6: lea     rdx,[rip+0x1451a73]        # 0x14161ad60 ; literal='Raze '
0x1401c92ed: jmp     0x1401c9308
0x1401c92ef: lea     rdx,[rip+0x1451a72]        # 0x14161ad68 ; literal='Take over '
0x1401c92f6: jmp     0x1401c9308
0x1401c92f8: lea     rdx,[rip+0x1451a75]        # 0x14161ad74 ; literal='Seize '
0x1401c92ff: jmp     0x1401c9308
0x1401c9301: lea     rdx,[rip+0x1451a74]        # 0x14161ad7c ; literal='Raid '
0x1401c9308: lea     rcx,[rbp+0xcf0]
0x1401c930f: call    0x140070b40
0x1401c9314: xor     r9d,r9d
0x1401c9317: mov     r8d,DWORD PTR [r13+0x8]
0x1401c931b: lea     rdx,[rbp+0xcf0]
0x1401c9322: lea     rcx,[rip+0x234cd0f]        # 0x142516038
0x1401c9329: call    0x140ba8410
0x1401c932e: lea     edx,[r12+0x1]
0x1401c9333: mov     r8d,r15d
0x1401c9336: lea     rcx,[rip+0x249d433]        # 0x142666770
0x1401c933d: call    0x1400bc6e0
0x1401c9342: mov     ebx,r14d
0x1401c9345: sub     ebx,r15d
0x1401c9348: lea     rcx,[rbp+0xcf0]
0x1401c934f: call    0x1400708f0
0x1401c9354: lea     ecx,[rbx-0x2]
0x1401c9357: movsxd  rdx,ecx
0x1401c935a: cmp     rax,rdx
0x1401c935d: jb      0x1401c93c1
0x1401c935f: lea     edi,[rbx-0x3]
0x1401c9362: test    edi,edi
0x1401c9364: js      0x1401c937c
0x1401c9366: movsxd  rdx,ebx
0x1401c9369: sub     rdx,0x3
0x1401c936d: xor     r8d,r8d
0x1401c9370: lea     rcx,[rbp+0xcf0]
0x1401c9377: call    0x1400e27f0
0x1401c937c: cmp     edi,0x3
0x1401c937f: jle     0x1401c93c1
0x1401c9381: movsxd  rdx,ebx
0x1401c9384: sub     rdx,0x6
0x1401c9388: lea     rcx,[rbp+0xcf0]
0x1401c938f: call    0x1400fcb70
0x1401c9394: mov     BYTE PTR [rax],0x2e
0x1401c9397: lea     eax,[rbx-0x5]
0x1401c939a: movsxd  rdx,eax
0x1401c939d: lea     rcx,[rbp+0xcf0]
0x1401c93a4: call    0x1400fcb70
0x1401c93a9: mov     BYTE PTR [rax],0x2e
0x1401c93ac: lea     eax,[rbx-0x4]
0x1401c93af: movsxd  rdx,eax
0x1401c93b2: lea     rcx,[rbp+0xcf0]
0x1401c93b9: call    0x1400fcb70
0x1401c93be: mov     BYTE PTR [rax],0x2e
0x1401c93c1: xor     r9d,r9d
0x1401c93c4: xor     r8d,r8d
0x1401c93c7: lea     rdx,[rbp+0xcf0]
0x1401c93ce: lea     rcx,[rip+0x249d39b]        # 0x142666770
0x1401c93d5: call    0x140af0220
0x1401c93da: mov     rcx,r13
0x1401c93dd: call    0x1400766d0
0x1401c93e2: cmp     eax,0x13
0x1401c93e5: je      0x1401c9506
0x1401c93eb: cmp     eax,0x19
0x1401c93ee: je      0x1401c9506
0x1401c93f4: xor     eax,eax
0x1401c93f6: mov     esi,eax
0x1401c93f8: mov     edi,eax
0x1401c93fa: lea     rdx,[rbp+0x80]
0x1401c9401: lea     rcx,[r13+0x80]
0x1401c9408: call    0x140070800
0x1401c940d: lea     rdx,[rbp+0x110]
0x1401c9414: lea     rcx,[r13+0x80]
0x1401c941b: call    0x1400707f0
0x1401c9420: lea     r8,[rbp+0x110]
0x1401c9427: lea     rdx,[rbp+0xc]
0x1401c942b: lea     rcx,[rbp+0x80]
0x1401c9432: call    0x1400703e0
0x1401c9437: xor     edx,edx
0x1401c9439: movzx   ecx,BYTE PTR [rax]
0x1401c943c: call    0x140066d70
0x1401c9441: test    al,al
0x1401c9443: je      0x1401c962a
0x1401c9449: nop     DWORD PTR [rax+0x0]
0x1401c9450: lea     rcx,[rbp+0x80]
0x1401c9457: call    0x1400703d0
0x1401c945c: mov     edx,DWORD PTR [rax]
0x1401c945e: lea     rcx,[rip+0x23366db]        # 0x1424ffb40
0x1401c9465: call    0x140076ac0
0x1401c946a: test    rax,rax
0x1401c946d: je      0x1401c94cc
0x1401c946f: lea     rbx,[rax+0xa0]
0x1401c9476: mov     rcx,rbx
0x1401c9479: call    0x140070410
0x1401c947e: test    rax,rax
0x1401c9481: je      0x1401c94cc
0x1401c9483: xor     edx,edx
0x1401c9485: mov     rcx,rbx
0x1401c9488: call    0x1400707e0
0x1401c948d: mov     rdx,QWORD PTR [rax]
0x1401c9490: cmp     DWORD PTR [rdx],0xffffffff
0x1401c9493: je      0x1401c94cc
0x1401c9495: xor     edx,edx
0x1401c9497: mov     rcx,rbx
0x1401c949a: call    0x1400707e0
0x1401c949f: mov     rdx,QWORD PTR [rax]
0x1401c94a2: mov     edx,DWORD PTR [rdx]
0x1401c94a4: lea     rcx,[rip+0x2237f85]        # 0x142401430
0x1401c94ab: call    0x1413e0200
0x1401c94b0: test    rax,rax
0x1401c94b3: je      0x1401c94ca
0x1401c94b5: mov     eax,DWORD PTR [rax+0x110]
0x1401c94bb: test    eax,0x102
0x1401c94c0: jne     0x1401c94ca
0x1401c94c2: test    eax,eax
0x1401c94c4: jns     0x1401c94ca
0x1401c94c6: inc     esi
0x1401c94c8: jmp     0x1401c94cc
0x1401c94ca: inc     edi
0x1401c94cc: lea     rcx,[rbp+0x80]
0x1401c94d3: call    0x140070910
0x1401c94d8: lea     r8,[rbp+0x110]
0x1401c94df: lea     rdx,[rbp+0xc]
0x1401c94e3: lea     rcx,[rbp+0x80]
0x1401c94ea: call    0x1400703e0
0x1401c94ef: xor     edx,edx
0x1401c94f1: movzx   ecx,BYTE PTR [rax]
0x1401c94f4: call    0x140066d70
0x1401c94f9: test    al,al
0x1401c94fb: jne     0x1401c9450
0x1401c9501: jmp     0x1401c9622
0x1401c9506: xor     eax,eax
0x1401c9508: mov     esi,eax
0x1401c950a: mov     edi,eax
0x1401c950c: lea     rdx,[rbp+0x88]
0x1401c9513: lea     rcx,[r13+0x98]
0x1401c951a: call    0x140070800
0x1401c951f: lea     rdx,[rbp+0x120]
0x1401c9526: lea     rcx,[r13+0x98]
0x1401c952d: call    0x1400707f0
0x1401c9532: lea     rcx,[r13+0xb0]
0x1401c9539: lea     rdx,[rbp+0x118]
0x1401c9540: call    0x140070800
0x1401c9545: lea     r8,[rbp+0x120]
0x1401c954c: lea     rdx,[rbp+0xd]
0x1401c9550: lea     rcx,[rbp+0x88]
0x1401c9557: call    0x1400703e0
0x1401c955c: xor     edx,edx
0x1401c955e: movzx   ecx,BYTE PTR [rax]
0x1401c9561: call    0x140066d70
0x1401c9566: test    al,al
0x1401c9568: je      0x1401c962a
0x1401c956e: xchg    ax,ax
0x1401c9570: lea     rcx,[rbp+0x88]
0x1401c9577: call    0x1400703d0
0x1401c957c: mov     edx,DWORD PTR [rax]
0x1401c957e: lea     rcx,[rip+0x22245f3]        # 0x1423edb78
0x1401c9585: call    0x14007f0b0
0x1401c958a: mov     rbx,rax
0x1401c958d: test    rax,rax
0x1401c9590: je      0x1401c95e1
0x1401c9592: lea     rcx,[rbp+0x118]
0x1401c9599: call    0x1400703d0
0x1401c959e: lea     rdx,[rbx+0x1110]
0x1401c95a5: mov     ecx,DWORD PTR [rax]
0x1401c95a7: call    0x1400bb380
0x1401c95ac: test    rax,rax
0x1401c95af: je      0x1401c95e1
0x1401c95b1: mov     edx,DWORD PTR [rax+0x4]
0x1401c95b4: cmp     edx,0xffffffff
0x1401c95b7: je      0x1401c95e1
0x1401c95b9: lea     rcx,[rip+0x2237e70]        # 0x142401430
0x1401c95c0: call    0x1413e0200
0x1401c95c5: test    rax,rax
0x1401c95c8: je      0x1401c95df
0x1401c95ca: mov     eax,DWORD PTR [rax+0x110]
0x1401c95d0: test    eax,0x102
0x1401c95d5: jne     0x1401c95df
0x1401c95d7: test    eax,eax
0x1401c95d9: jns     0x1401c95df
0x1401c95db: inc     esi
0x1401c95dd: jmp     0x1401c95e1
0x1401c95df: inc     edi
0x1401c95e1: lea     rcx,[rbp+0x88]
0x1401c95e8: call    0x140070910
0x1401c95ed: lea     rcx,[rbp+0x118]
0x1401c95f4: call    0x140070910
0x1401c95f9: lea     r8,[rbp+0x120]
0x1401c9600: lea     rdx,[rbp+0xd]
0x1401c9604: lea     rcx,[rbp+0x88]
0x1401c960b: call    0x1400703e0
0x1401c9610: xor     edx,edx
0x1401c9612: movzx   ecx,BYTE PTR [rax]
0x1401c9615: call    0x140066d70
0x1401c961a: test    al,al
0x1401c961c: jne     0x1401c9570
0x1401c9622: test    edi,edi
0x1401c9624: je      0x1401c962a
0x1401c9626: test    esi,esi
0x1401c9628: jle     0x1401c9681
0x1401c962a: lea     rbx,[rip+0x24a814f]        # 0x142671780
0x1401c9631: mov     edi,r12d
0x1401c9634: mov     esi,0x3
0x1401c9639: nop     DWORD PTR [rax+0x0]
0x1401c9640: mov     r8d,r14d
0x1401c9643: mov     edx,edi
0x1401c9645: lea     rcx,[rip+0x249d124]        # 0x142666770
0x1401c964c: call    0x1400bc6e0
0x1401c9651: xor     r8d,r8d
0x1401c9654: mov     edx,DWORD PTR [rbx]
0x1401c9656: lea     rcx,[rip+0x249d113]        # 0x142666770
0x1401c965d: call    0x140af19c0
0x1401c9662: inc     edi
0x1401c9664: add     rbx,0x4
0x1401c9668: sub     rsi,0x1
0x1401c966c: jne     0x1401c9640
0x1401c966e: inc     r14d
0x1401c9671: lea     rax,[rip+0x24a812c]        # 0x1426717a4
0x1401c9678: cmp     rbx,rax
0x1401c967b: jl      0x1401c9631
0x1401c967d: mov     r14d,DWORD PTR [rbp-0x10]
0x1401c9681: add     r12d,0x3
0x1401c9685: mov     DWORD PTR [rsp+0x70],r12d
0x1401c968a: lea     rcx,[rbp+0xcf0]
0x1401c9691: call    0x1400693f0
0x1401c9696: mov     eax,DWORD PTR [rbp-0x70]
0x1401c9699: inc     eax
0x1401c969b: mov     DWORD PTR [rbp-0x70],eax
0x1401c969e: cmp     eax,DWORD PTR [rbp-0x20]
0x1401c96a1: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401c96a4: mov     rsi,QWORD PTR [rbp-0x30]
0x1401c96a8: jl      0x1401c9050
0x1401c96ae: mov     r13d,DWORD PTR [rbp-0x48]
0x1401c96b2: mov     edi,DWORD PTR [rsp+0x74]
0x1401c96b6: cmp     esi,edi
0x1401c96b8: jle     0x1401c973e
0x1401c96be: lea     ebx,[rdi*2-0x1]
0x1401c96c5: add     ebx,edi
0x1401c96c7: lea     rcx,[rbp+0x210]
0x1401c96ce: call    0x1400bc920
0x1401c96d3: lea     r9d,[rsi-0x1]
0x1401c96d7: mov     DWORD PTR [rsp+0x30],ebx
0x1401c96db: mov     esi,0x2
0x1401c96e0: mov     DWORD PTR [rsp+0x28],esi
0x1401c96e4: mov     DWORD PTR [rsp+0x20],edi
0x1401c96e8: xor     r8d,r8d
0x1401c96eb: mov     rbx,QWORD PTR [rsp+0x78]
0x1401c96f0: mov     edx,DWORD PTR [rbx+0x2e0]
0x1401c96f6: lea     rcx,[rbp+0x210]
0x1401c96fd: call    0x1400bc940
0x1401c9702: mov     r9d,DWORD PTR [rbp-0x6c]
0x1401c9706: inc     r9d
0x1401c9709: mov     DWORD PTR [rsp+0x28],0x0
0x1401c9711: movzx   eax,BYTE PTR [rbx+0x2dc]
0x1401c9718: mov     BYTE PTR [rsp+0x20],al
0x1401c971c: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401c9720: mov     edx,DWORD PTR [rbp-0x38]
0x1401c9723: lea     rcx,[rbp+0x210]
0x1401c972a: call    0x141423200
0x1401c972f: jmp     0x1401c9743
0x1401c9731: mov     r13d,DWORD PTR [rbp-0x20]
0x1401c9735: mov     DWORD PTR [rbp-0x48],r13d
0x1401c9739: jmp     0x1401c96b6
0x1401c973e: mov     esi,0x2
0x1401c9743: mov     rbx,QWORD PTR [rbp-0x60]
0x1401c9747: test    rbx,rbx
0x1401c974a: jne     0x1401c9778
0x1401c974c: mov     r13,QWORD PTR [rsp+0x78]
0x1401c9751: cmp     QWORD PTR [r13+0x2d0],rbx
0x1401c9758: je      0x1401c8d68
0x1401c975e: mov     QWORD PTR [r13+0x2d0],rbx
0x1401c9765: mov     edx,esi
0x1401c9767: lea     rcx,[rip+0x249d002]        # 0x142666770
0x1401c976e: call    0x140afe4c0
0x1401c9773: jmp     0x1401c8d68
0x1401c9778: mov     eax,DWORD PTR [rbp-0x58]
0x1401c977b: lea     esi,[rax-0x37]
0x1401c977e: lea     edi,[rax-0x2]
0x1401c9781: lea     r12d,[r13+0xb]
0x1401c9785: mov     DWORD PTR [rsp+0x70],r12d
0x1401c978a: mov     r15d,r13d
0x1401c978d: cmp     r13d,r12d
0x1401c9790: jg      0x1401c9879
0x1401c9796: movsxd  r14,r13d
0x1401c9799: nop     DWORD PTR [rax+0x0]
0x1401c97a0: mov     ebx,esi
0x1401c97a2: cmp     esi,edi
0x1401c97a4: jg      0x1401c9866
0x1401c97aa: movsxd  r13,r13d
0x1401c97ad: movsxd  r12,r12d
0x1401c97b0: mov     r8d,ebx
0x1401c97b3: mov     edx,r15d
0x1401c97b6: lea     rcx,[rip+0x249cfb3]        # 0x142666770
0x1401c97bd: call    0x1400bc6e0
0x1401c97c2: xor     r8d,r8d
0x1401c97c5: xor     edx,edx
0x1401c97c7: lea     rcx,[rip+0x249cfa2]        # 0x142666770
0x1401c97ce: call    0x1400bc750
0x1401c97d3: cmp     r14,r13
0x1401c97d6: jne     0x1401c97ff
0x1401c97d8: cmp     ebx,esi
0x1401c97da: jne     0x1401c97e4
0x1401c97dc: mov     edx,DWORD PTR [rip+0x249e8b2]        # 0x142668094
0x1401c97e2: jmp     0x1401c9847
0x1401c97e4: lea     rcx,[rip+0x249cf85]        # 0x142666770
0x1401c97eb: cmp     ebx,edi
0x1401c97ed: jne     0x1401c97f7
0x1401c97ef: mov     edx,DWORD PTR [rip+0x249e8b7]        # 0x1426680ac
0x1401c97f5: jmp     0x1401c984e
0x1401c97f7: mov     edx,DWORD PTR [rip+0x249e8a3]        # 0x1426680a0
0x1401c97fd: jmp     0x1401c984e
0x1401c97ff: cmp     r14,r12
0x1401c9802: jne     0x1401c982b
0x1401c9804: cmp     ebx,esi
0x1401c9806: jne     0x1401c9810
0x1401c9808: mov     edx,DWORD PTR [rip+0x249e88e]        # 0x14266809c
0x1401c980e: jmp     0x1401c9847
0x1401c9810: lea     rcx,[rip+0x249cf59]        # 0x142666770
0x1401c9817: cmp     ebx,edi
0x1401c9819: jne     0x1401c9823
0x1401c981b: mov     edx,DWORD PTR [rip+0x249e893]        # 0x1426680b4
0x1401c9821: jmp     0x1401c984e
0x1401c9823: mov     edx,DWORD PTR [rip+0x249e87f]        # 0x1426680a8
0x1401c9829: jmp     0x1401c984e
0x1401c982b: cmp     ebx,esi
0x1401c982d: jne     0x1401c9837
0x1401c982f: mov     edx,DWORD PTR [rip+0x249e863]        # 0x142668098
0x1401c9835: jmp     0x1401c9847
0x1401c9837: cmp     ebx,edi
0x1401c9839: mov     edx,DWORD PTR [rip+0x249e871]        # 0x1426680b0
0x1401c983f: je      0x1401c9847
0x1401c9841: mov     edx,DWORD PTR [rip+0x249e85d]        # 0x1426680a4
0x1401c9847: lea     rcx,[rip+0x249cf22]        # 0x142666770
0x1401c984e: call    0x140af1390
0x1401c9853: inc     ebx
0x1401c9855: cmp     ebx,edi
0x1401c9857: jle     0x1401c97b0
0x1401c985d: mov     r12d,DWORD PTR [rsp+0x70]
0x1401c9862: mov     r13d,DWORD PTR [rbp-0x48]
0x1401c9866: inc     r15d
0x1401c9869: inc     r14
0x1401c986c: cmp     r15d,r12d
0x1401c986f: jle     0x1401c97a0
0x1401c9875: mov     rbx,QWORD PTR [rbp-0x60]
0x1401c9879: lea     r15d,[rsi+0x2]
0x1401c987d: lea     edi,[r13+0x1]
0x1401c9881: mov     rcx,rbx
0x1401c9884: call    0x1400766d0
0x1401c9889: cmp     eax,0x13
0x1401c988c: je      0x1401c9cfa
0x1401c9892: cmp     eax,0x19
0x1401c9895: je      0x1401c9cfa
0x1401c989b: xor     eax,eax
0x1401c989d: mov     esi,eax
0x1401c989f: mov     r14d,eax
0x1401c98a2: lea     rdx,[rbp+0x90]
0x1401c98a9: lea     rcx,[rbx+0x80]
0x1401c98b0: call    0x140070800
0x1401c98b5: lea     rdx,[rbp+0x128]
0x1401c98bc: lea     rcx,[rbx+0x80]
0x1401c98c3: call    0x1400707f0
0x1401c98c8: lea     r8,[rbp+0x128]
0x1401c98cf: lea     rdx,[rbp+0xe]
0x1401c98d3: lea     rcx,[rbp+0x90]
0x1401c98da: call    0x1400703e0
0x1401c98df: xor     edx,edx
0x1401c98e1: movzx   ecx,BYTE PTR [rax]
0x1401c98e4: call    0x140066d70
0x1401c98e9: test    al,al
0x1401c98eb: je      0x1401c99a3
0x1401c98f1: lea     rcx,[rbp+0x90]
0x1401c98f8: call    0x1400703d0
0x1401c98fd: mov     edx,DWORD PTR [rax]
0x1401c98ff: lea     rcx,[rip+0x233623a]        # 0x1424ffb40
0x1401c9906: call    0x140076ac0
0x1401c990b: test    rax,rax
0x1401c990e: je      0x1401c996e
0x1401c9910: lea     rbx,[rax+0xa0]
0x1401c9917: mov     rcx,rbx
0x1401c991a: call    0x140070410
0x1401c991f: test    rax,rax
0x1401c9922: je      0x1401c996e
0x1401c9924: xor     edx,edx
0x1401c9926: mov     rcx,rbx
0x1401c9929: call    0x1400707e0
0x1401c992e: mov     rdx,QWORD PTR [rax]
0x1401c9931: cmp     DWORD PTR [rdx],0xffffffff
0x1401c9934: je      0x1401c996e
0x1401c9936: xor     edx,edx
0x1401c9938: mov     rcx,rbx
0x1401c993b: call    0x1400707e0
0x1401c9940: mov     rdx,QWORD PTR [rax]
0x1401c9943: mov     edx,DWORD PTR [rdx]
0x1401c9945: lea     rcx,[rip+0x2237ae4]        # 0x142401430
0x1401c994c: call    0x1413e0200
0x1401c9951: test    rax,rax
0x1401c9954: je      0x1401c996b
0x1401c9956: mov     eax,DWORD PTR [rax+0x110]
0x1401c995c: test    eax,0x102
0x1401c9961: jne     0x1401c996b
0x1401c9963: test    eax,eax
0x1401c9965: jns     0x1401c996b
0x1401c9967: inc     esi
0x1401c9969: jmp     0x1401c996e
0x1401c996b: inc     r14d
0x1401c996e: lea     rcx,[rbp+0x90]
0x1401c9975: call    0x140070910
0x1401c997a: lea     r8,[rbp+0x128]
0x1401c9981: lea     rdx,[rbp+0xe]
0x1401c9985: lea     rcx,[rbp+0x90]
0x1401c998c: call    0x1400703e0
0x1401c9991: xor     edx,edx
0x1401c9993: movzx   ecx,BYTE PTR [rax]
0x1401c9996: call    0x140066d70
0x1401c999b: test    al,al
0x1401c999d: jne     0x1401c98f1
0x1401c99a3: mov     r8d,r15d
0x1401c99a6: mov     edx,edi
0x1401c99a8: lea     rcx,[rip+0x249cdc1]        # 0x142666770
0x1401c99af: call    0x1400bc6e0
0x1401c99b4: lea     eax,[r14+rsi*1]
0x1401c99b8: test    eax,eax
0x1401c99ba: jne     0x1401c9a14
0x1401c99bc: xor     r8d,r8d
0x1401c99bf: mov     edx,0x7
0x1401c99c4: xor     r9d,r9d
0x1401c99c7: lea     rcx,[rip+0x249cda2]        # 0x142666770
0x1401c99ce: call    0x1400bc6f0
0x1401c99d3: lea     rdx,[rip+0x145116e]        # 0x14161ab48 ; literal='No commanders'
0x1401c99da: lea     rcx,[rbp+0x1e70]
0x1401c99e1: call    0x140069710
0x1401c99e6: nop     
0x1401c99e7: xor     r9d,r9d
0x1401c99ea: xor     r8d,r8d
0x1401c99ed: lea     rdx,[rbp+0x1e70]
0x1401c99f4: lea     rcx,[rip+0x249cd75]        # 0x142666770
0x1401c99fb: call    0x140af0220
0x1401c9a00: nop     
0x1401c9a01: lea     rcx,[rbp+0x1e70]
0x1401c9a08: call    0x1400693f0
0x1401c9a0d: inc     edi
0x1401c9a0f: jmp     0x1401c9b72
0x1401c9a14: lea     rcx,[rbp+0xd70]
0x1401c9a1b: call    0x140070c50
0x1401c9a20: nop     
0x1401c9a21: test    esi,esi
0x1401c9a23: jne     0x1401c9a4d
0x1401c9a25: lea     rdx,[rip+0x145137c]        # 0x14161ada8 ; literal='no'
0x1401c9a2c: lea     rcx,[rbp+0xd70]
0x1401c9a33: call    0x140070b20
0x1401c9a38: lea     rdx,[rip+0x1451119]        # 0x14161ab58 ; literal=' commander'
0x1401c9a3f: lea     rcx,[rbp+0xd70]
0x1401c9a46: call    0x140070b20
0x1401c9a4b: jmp     0x1401c9a73
0x1401c9a4d: lea     rdx,[rbp+0xd70]
0x1401c9a54: mov     ecx,esi
0x1401c9a56: call    0x140542fb0
0x1401c9a5b: lea     rdx,[rip+0x14510f6]        # 0x14161ab58 ; literal=' commander'
0x1401c9a62: lea     rcx,[rbp+0xd70]
0x1401c9a69: call    0x140070b20
0x1401c9a6e: cmp     esi,0x1
0x1401c9a71: je      0x1401c9a86
0x1401c9a73: lea     rdx,[rip+0x1435a4e]        # 0x1415ff4c8 ; literal='s'
0x1401c9a7a: lea     rcx,[rbp+0xd70]
0x1401c9a81: call    0x140070b20
0x1401c9a86: lea     rdx,[rip+0x145132f]        # 0x14161adbc ; literal=' here'
0x1401c9a8d: lea     rcx,[rbp+0xd70]
0x1401c9a94: call    0x140070b20
0x1401c9a99: lea     rdx,[rip+0x1435868]        # 0x1415ff308 ; literal=', '
0x1401c9aa0: lea     rcx,[rbp+0xd70]
0x1401c9aa7: call    0x140070b20
0x1401c9aac: test    r14d,r14d
0x1401c9aaf: jne     0x1401c9ad9
0x1401c9ab1: lea     rdx,[rip+0x14512f0]        # 0x14161ada8 ; literal='no'
0x1401c9ab8: lea     rcx,[rbp+0xd70]
0x1401c9abf: call    0x140070b20
0x1401c9ac4: lea     rdx,[rip+0x145108d]        # 0x14161ab58 ; literal=' commander'
0x1401c9acb: lea     rcx,[rbp+0xd70]
0x1401c9ad2: call    0x140070b20
0x1401c9ad7: jmp     0x1401c9b01
0x1401c9ad9: lea     rdx,[rbp+0xd70]
0x1401c9ae0: mov     ecx,r14d
0x1401c9ae3: call    0x140542fb0
0x1401c9ae8: lea     rdx,[rip+0x1451069]        # 0x14161ab58 ; literal=' commander'
0x1401c9aef: lea     rcx,[rbp+0xd70]
0x1401c9af6: call    0x140070b20
0x1401c9afb: cmp     r14d,0x1
0x1401c9aff: je      0x1401c9b14
0x1401c9b01: lea     rdx,[rip+0x14359c0]        # 0x1415ff4c8 ; literal='s'
0x1401c9b08: lea     rcx,[rbp+0xd70]
0x1401c9b0f: call    0x140070b20
0x1401c9b14: lea     rdx,[rip+0x145101d]        # 0x14161ab38 ; literal=' traveling'
0x1401c9b1b: lea     rcx,[rbp+0xd70]
0x1401c9b22: call    0x140070b20
0x1401c9b27: lea     rcx,[rbp+0xd70]
0x1401c9b2e: call    0x140544330
0x1401c9b33: xor     r8d,r8d
0x1401c9b36: mov     edx,0x7
0x1401c9b3b: mov     r9b,0x1
0x1401c9b3e: lea     rcx,[rip+0x249cc2b]        # 0x142666770
0x1401c9b45: call    0x1400bc6f0
0x1401c9b4a: xor     r9d,r9d
0x1401c9b4d: xor     r8d,r8d
0x1401c9b50: lea     rdx,[rbp+0xd70]
0x1401c9b57: lea     rcx,[rip+0x249cc12]        # 0x142666770
0x1401c9b5e: call    0x140af0220
0x1401c9b63: nop     
0x1401c9b64: lea     rcx,[rbp+0xd70]
0x1401c9b6b: call    0x1400693f0
0x1401c9b70: inc     edi
0x1401c9b72: lea     eax,[r13+0x8]
0x1401c9b76: cmp     edi,eax
0x1401c9b78: jg      0x1401ca1a6
0x1401c9b7e: mov     r12,QWORD PTR [rbp-0x60]
0x1401c9b82: sub     r12,0xffffffffffffff80
0x1401c9b86: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401c9b90: movsxd  rbx,DWORD PTR [rbp-0x78]
0x1401c9b94: mov     rcx,r12
0x1401c9b97: call    0x140070930
0x1401c9b9c: cmp     rbx,rax
0x1401c9b9f: jae     0x1401ca1a1
0x1401c9ba5: mov     rdx,rbx
0x1401c9ba8: mov     rcx,r12
0x1401c9bab: call    0x140070920
0x1401c9bb0: mov     edx,DWORD PTR [rax]
0x1401c9bb2: lea     rcx,[rip+0x2335f87]        # 0x1424ffb40
0x1401c9bb9: call    0x140076ac0
0x1401c9bbe: mov     rbx,rax
0x1401c9bc1: test    rax,rax
0x1401c9bc4: je      0x1401c9ce6
0x1401c9bca: xor     r8d,r8d
0x1401c9bcd: mov     edx,0x3
0x1401c9bd2: mov     r9b,0x1
0x1401c9bd5: lea     rcx,[rip+0x249cb94]        # 0x142666770
0x1401c9bdc: call    0x1400bc6f0
0x1401c9be1: mov     r8d,r15d
0x1401c9be4: mov     edx,edi
0x1401c9be6: lea     rcx,[rip+0x249cb83]        # 0x142666770
0x1401c9bed: call    0x1400bc6e0
0x1401c9bf2: lea     rcx,[rbp+0x1450]
0x1401c9bf9: call    0x140070c50
0x1401c9bfe: nop     
0x1401c9bff: lea     rcx,[rbx+0x80]
0x1401c9c06: call    0x140070ae0
0x1401c9c0b: test    al,al
0x1401c9c0d: jne     0x1401c9c24
0x1401c9c0f: lea     rdx,[rbx+0x80]
0x1401c9c16: lea     rcx,[rbp+0x1450]
0x1401c9c1d: call    0x140070b60
0x1401c9c22: jmp     0x1401c9c3a
0x1401c9c24: lea     rcx,[rbx+0x8]
0x1401c9c28: xor     r9d,r9d
0x1401c9c2b: mov     r8b,0x1
0x1401c9c2e: lea     rdx,[rbp+0x1450]
0x1401c9c35: call    0x140aaafe0
0x1401c9c3a: mov     r9d,0x18
0x1401c9c40: xor     r8d,r8d
0x1401c9c43: lea     rdx,[rbp+0x1450]
0x1401c9c4a: lea     rcx,[rip+0x249cb1f]        # 0x142666770
0x1401c9c51: call    0x140af0220
0x1401c9c56: inc     edi
0x1401c9c58: mov     r13d,DWORD PTR [rbp-0x48]
0x1401c9c5c: lea     eax,[r13+0x9]
0x1401c9c60: cmp     edi,eax
0x1401c9c62: jne     0x1401c9cda
0x1401c9c64: mov     rcx,r12
0x1401c9c67: call    0x140070930
0x1401c9c6c: mov     rcx,QWORD PTR [rbp-0x78]
0x1401c9c70: inc     ecx
0x1401c9c72: cmp     ecx,eax
0x1401c9c74: jge     0x1401c9cda
0x1401c9c76: xor     r8d,r8d
0x1401c9c79: mov     edx,0x7
0x1401c9c7e: mov     r9b,0x1
0x1401c9c81: lea     rcx,[rip+0x249cae8]        # 0x142666770
0x1401c9c88: call    0x1400bc6f0
0x1401c9c8d: lea     r8d,[r15+0x19]
0x1401c9c91: mov     edx,edi
0x1401c9c93: lea     rcx,[rip+0x249cad6]        # 0x142666770
0x1401c9c9a: call    0x1400bc6e0
0x1401c9c9f: lea     rdx,[rip+0x1450eda]        # 0x14161ab80 ; literal='and more...'
0x1401c9ca6: lea     rcx,[rbp+0x1e90]
0x1401c9cad: call    0x140069710
0x1401c9cb2: nop     
0x1401c9cb3: xor     r9d,r9d
0x1401c9cb6: xor     r8d,r8d
0x1401c9cb9: lea     rdx,[rbp+0x1e90]
0x1401c9cc0: lea     rcx,[rip+0x249caa9]        # 0x142666770
0x1401c9cc7: call    0x140af0220
0x1401c9ccc: nop     
0x1401c9ccd: lea     rcx,[rbp+0x1e90]
0x1401c9cd4: call    0x1400693f0
0x1401c9cd9: nop     
0x1401c9cda: lea     rcx,[rbp+0x1450]
0x1401c9ce1: call    0x1400693f0
0x1401c9ce6: inc     DWORD PTR [rbp-0x78]
0x1401c9ce9: lea     eax,[r13+0x8]
0x1401c9ced: cmp     edi,eax
0x1401c9cef: jle     0x1401c9b90
0x1401c9cf5: jmp     0x1401ca1a1
0x1401c9cfa: xor     eax,eax
0x1401c9cfc: mov     esi,eax
0x1401c9cfe: mov     r14d,eax
0x1401c9d01: lea     rdx,[rbp+0x70]
0x1401c9d05: lea     rcx,[rbx+0x98]
0x1401c9d0c: call    0x140070800
0x1401c9d11: lea     rdx,[rbp+0x138]
0x1401c9d18: lea     rcx,[rbx+0x98]
0x1401c9d1f: call    0x1400707f0
0x1401c9d24: mov     rbx,QWORD PTR [rbp-0x60]
0x1401c9d28: lea     rcx,[rbx+0xb0]
0x1401c9d2f: lea     rdx,[rbp+0x130]
0x1401c9d36: call    0x140070800
0x1401c9d3b: lea     r8,[rbp+0x138]
0x1401c9d42: lea     rdx,[rbp+0x7]
0x1401c9d46: lea     rcx,[rbp+0x70]
0x1401c9d4a: call    0x1400703e0
0x1401c9d4f: xor     edx,edx
0x1401c9d51: movzx   ecx,BYTE PTR [rax]
0x1401c9d54: call    0x140066d70
0x1401c9d59: test    al,al
0x1401c9d5b: je      0x1401c9e0f
0x1401c9d61: lea     rcx,[rbp+0x70]
0x1401c9d65: call    0x1400703d0
0x1401c9d6a: mov     edx,DWORD PTR [rax]
0x1401c9d6c: lea     rcx,[rip+0x2223e05]        # 0x1423edb78
0x1401c9d73: call    0x14007f0b0
0x1401c9d78: mov     rbx,rax
0x1401c9d7b: test    rax,rax
0x1401c9d7e: je      0x1401c9dd0
0x1401c9d80: lea     rcx,[rbp+0x130]
0x1401c9d87: call    0x1400703d0
0x1401c9d8c: lea     rdx,[rbx+0x1110]
0x1401c9d93: mov     ecx,DWORD PTR [rax]
0x1401c9d95: call    0x1400bb380
0x1401c9d9a: test    rax,rax
0x1401c9d9d: je      0x1401c9dd0
0x1401c9d9f: mov     edx,DWORD PTR [rax+0x4]
0x1401c9da2: cmp     edx,0xffffffff
0x1401c9da5: je      0x1401c9dd0
0x1401c9da7: lea     rcx,[rip+0x2237682]        # 0x142401430
0x1401c9dae: call    0x1413e0200
0x1401c9db3: test    rax,rax
0x1401c9db6: je      0x1401c9dcd
0x1401c9db8: mov     eax,DWORD PTR [rax+0x110]
0x1401c9dbe: test    eax,0x102
0x1401c9dc3: jne     0x1401c9dcd
0x1401c9dc5: test    eax,eax
0x1401c9dc7: jns     0x1401c9dcd
0x1401c9dc9: inc     esi
0x1401c9dcb: jmp     0x1401c9dd0
0x1401c9dcd: inc     r14d
0x1401c9dd0: lea     rcx,[rbp+0x70]
0x1401c9dd4: call    0x140070910
0x1401c9dd9: lea     rcx,[rbp+0x130]
0x1401c9de0: call    0x140070910
0x1401c9de5: lea     r8,[rbp+0x138]
0x1401c9dec: lea     rdx,[rbp+0x7]
0x1401c9df0: lea     rcx,[rbp+0x70]
0x1401c9df4: call    0x1400703e0
0x1401c9df9: xor     edx,edx
0x1401c9dfb: movzx   ecx,BYTE PTR [rax]
0x1401c9dfe: call    0x140066d70
0x1401c9e03: test    al,al
0x1401c9e05: jne     0x1401c9d61
0x1401c9e0b: mov     rbx,QWORD PTR [rbp-0x60]
0x1401c9e0f: mov     r8d,r15d
0x1401c9e12: mov     edx,edi
0x1401c9e14: lea     rcx,[rip+0x249c955]        # 0x142666770
0x1401c9e1b: call    0x1400bc6e0
0x1401c9e20: lea     eax,[r14+rsi*1]
0x1401c9e24: test    eax,eax
0x1401c9e26: jne     0x1401c9e79
0x1401c9e28: xor     r8d,r8d
0x1401c9e2b: mov     edx,0x7
0x1401c9e30: xor     r9d,r9d
0x1401c9e33: lea     rcx,[rip+0x249c936]        # 0x142666770
0x1401c9e3a: call    0x1400bc6f0
0x1401c9e3f: lea     rdx,[rip+0x1450f52]        # 0x14161ad98 ; literal='No messengers'
0x1401c9e46: lea     rcx,[rbp+0x1eb0]
0x1401c9e4d: call    0x140069710
0x1401c9e52: nop     
0x1401c9e53: xor     r9d,r9d
0x1401c9e56: xor     r8d,r8d
0x1401c9e59: lea     rdx,[rbp+0x1eb0]
0x1401c9e60: lea     rcx,[rip+0x249c909]        # 0x142666770
0x1401c9e67: call    0x140af0220
0x1401c9e6c: nop     
0x1401c9e6d: lea     rcx,[rbp+0x1eb0]
0x1401c9e74: jmp     0x1401c9fd0
0x1401c9e79: lea     rcx,[rbp+0xd90]
0x1401c9e80: call    0x140070c50
0x1401c9e85: nop     
0x1401c9e86: test    esi,esi
0x1401c9e88: jne     0x1401c9eb2
0x1401c9e8a: lea     rdx,[rip+0x1450f17]        # 0x14161ada8 ; literal='no'
0x1401c9e91: lea     rcx,[rbp+0xd90]
0x1401c9e98: call    0x140070b20
0x1401c9e9d: lea     rdx,[rip+0x1450f0c]        # 0x14161adb0 ; literal=' messenger'
0x1401c9ea4: lea     rcx,[rbp+0xd90]
0x1401c9eab: call    0x140070b20
0x1401c9eb0: jmp     0x1401c9ed8
0x1401c9eb2: lea     rdx,[rbp+0xd90]
0x1401c9eb9: mov     ecx,esi
0x1401c9ebb: call    0x140542fb0
0x1401c9ec0: lea     rdx,[rip+0x1450ee9]        # 0x14161adb0 ; literal=' messenger'
0x1401c9ec7: lea     rcx,[rbp+0xd90]
0x1401c9ece: call    0x140070b20
0x1401c9ed3: cmp     esi,0x1
0x1401c9ed6: je      0x1401c9eeb
0x1401c9ed8: lea     rdx,[rip+0x14355e9]        # 0x1415ff4c8 ; literal='s'
0x1401c9edf: lea     rcx,[rbp+0xd90]
0x1401c9ee6: call    0x140070b20
0x1401c9eeb: lea     rdx,[rip+0x1450eca]        # 0x14161adbc ; literal=' here'
0x1401c9ef2: lea     rcx,[rbp+0xd90]
0x1401c9ef9: call    0x140070b20
0x1401c9efe: lea     rdx,[rip+0x1435403]        # 0x1415ff308 ; literal=', '
0x1401c9f05: lea     rcx,[rbp+0xd90]
0x1401c9f0c: call    0x140070b20
0x1401c9f11: test    r14d,r14d
0x1401c9f14: jne     0x1401c9f3e
0x1401c9f16: lea     rdx,[rip+0x1450e8b]        # 0x14161ada8 ; literal='no'
0x1401c9f1d: lea     rcx,[rbp+0xd90]
0x1401c9f24: call    0x140070b20
0x1401c9f29: lea     rdx,[rip+0x1450e80]        # 0x14161adb0 ; literal=' messenger'
0x1401c9f30: lea     rcx,[rbp+0xd90]
0x1401c9f37: call    0x140070b20
0x1401c9f3c: jmp     0x1401c9f66
0x1401c9f3e: lea     rdx,[rbp+0xd90]
0x1401c9f45: mov     ecx,r14d
0x1401c9f48: call    0x140542fb0
0x1401c9f4d: lea     rdx,[rip+0x1450e5c]        # 0x14161adb0 ; literal=' messenger'
0x1401c9f54: lea     rcx,[rbp+0xd90]
0x1401c9f5b: call    0x140070b20
0x1401c9f60: cmp     r14d,0x1
0x1401c9f64: je      0x1401c9f79
0x1401c9f66: lea     rdx,[rip+0x143555b]        # 0x1415ff4c8 ; literal='s'
0x1401c9f6d: lea     rcx,[rbp+0xd90]
0x1401c9f74: call    0x140070b20
0x1401c9f79: lea     rdx,[rip+0x1450bb8]        # 0x14161ab38 ; literal=' traveling'
0x1401c9f80: lea     rcx,[rbp+0xd90]
0x1401c9f87: call    0x140070b20
0x1401c9f8c: lea     rcx,[rbp+0xd90]
0x1401c9f93: call    0x140544330
0x1401c9f98: xor     r8d,r8d
0x1401c9f9b: mov     edx,0x7
0x1401c9fa0: mov     r9b,0x1
0x1401c9fa3: lea     rcx,[rip+0x249c7c6]        # 0x142666770
0x1401c9faa: call    0x1400bc6f0
0x1401c9faf: xor     r9d,r9d
0x1401c9fb2: xor     r8d,r8d
0x1401c9fb5: lea     rdx,[rbp+0xd90]
0x1401c9fbc: lea     rcx,[rip+0x249c7ad]        # 0x142666770
0x1401c9fc3: call    0x140af0220
0x1401c9fc8: nop     
0x1401c9fc9: lea     rcx,[rbp+0xd90]
0x1401c9fd0: call    0x1400693f0
0x1401c9fd5: inc     edi
0x1401c9fd7: lea     eax,[r13+0x8]
0x1401c9fdb: cmp     edi,eax
0x1401c9fdd: jg      0x1401ca1a6
0x1401c9fe3: lea     r12,[rbx+0x98]
0x1401c9fea: mov     DWORD PTR [rsp+0x74],esi
0x1401c9fee: mov     DWORD PTR [rbp-0x68],r14d
0x1401c9ff2: mov     esi,eax
0x1401c9ff4: mov     r14d,DWORD PTR [rbp-0x48]
0x1401c9ff8: xor     eax,eax
0x1401c9ffa: nop     WORD PTR [rax+rax*1+0x0]
0x1401ca000: movsxd  rbx,eax
0x1401ca003: mov     rcx,r12
0x1401ca006: call    0x140070930
0x1401ca00b: cmp     rbx,rax
0x1401ca00e: jae     0x1401ca199
0x1401ca014: mov     rdx,rbx
0x1401ca017: mov     rcx,r12
0x1401ca01a: call    0x140070920
0x1401ca01f: mov     edx,DWORD PTR [rax]
0x1401ca021: lea     rcx,[rip+0x2223b50]        # 0x1423edb78
0x1401ca028: call    0x14007f0b0
0x1401ca02d: mov     r13,rax
0x1401ca030: test    rax,rax
0x1401ca033: je      0x1401ca187
0x1401ca039: mov     rcx,QWORD PTR [rbp-0x60]
0x1401ca03d: add     rcx,0xb0
0x1401ca044: mov     rdx,rbx
0x1401ca047: call    0x140070920
0x1401ca04c: lea     rdx,[r13+0x1110]
0x1401ca053: mov     ecx,DWORD PTR [rax]
0x1401ca055: call    0x1400bb380
0x1401ca05a: mov     rbx,rax
0x1401ca05d: test    rax,rax
0x1401ca060: je      0x1401ca187
0x1401ca066: xor     r8d,r8d
0x1401ca069: mov     edx,0x3
0x1401ca06e: mov     r9b,0x1
0x1401ca071: lea     rcx,[rip+0x249c6f8]        # 0x142666770
0x1401ca078: call    0x1400bc6f0
0x1401ca07d: mov     r8d,r15d
0x1401ca080: mov     edx,edi
0x1401ca082: lea     rcx,[rip+0x249c6e7]        # 0x142666770
0x1401ca089: call    0x1400bc6e0
0x1401ca08e: lea     rcx,[rbp+0x1470]
0x1401ca095: call    0x140070c50
0x1401ca09a: nop     
0x1401ca09b: mov     edx,DWORD PTR [rbx+0x4]
0x1401ca09e: cmp     edx,0xffffffff
0x1401ca0a1: je      0x1401ca0cc
0x1401ca0a3: lea     rcx,[rip+0x234bf8e]        # 0x142516038
0x1401ca0aa: call    0x140069380
0x1401ca0af: test    rax,rax
0x1401ca0b2: je      0x1401ca0df
0x1401ca0b4: lea     rcx,[rax+0x38]
0x1401ca0b8: xor     r9d,r9d
0x1401ca0bb: mov     r8b,0x1
0x1401ca0be: lea     rdx,[rbp+0x1470]
0x1401ca0c5: call    0x140aaafe0
0x1401ca0ca: jmp     0x1401ca0df
0x1401ca0cc: lea     rdx,[rip+0x1450a95]        # 0x14161ab68 ; literal='Messenger (unfilled)'
0x1401ca0d3: lea     rcx,[rbp+0x1470]
0x1401ca0da: call    0x140070b40
0x1401ca0df: mov     r9d,0x18
0x1401ca0e5: xor     r8d,r8d
0x1401ca0e8: lea     rdx,[rbp+0x1470]
0x1401ca0ef: lea     rcx,[rip+0x249c67a]        # 0x142666770
0x1401ca0f6: call    0x140af0220
0x1401ca0fb: inc     edi
0x1401ca0fd: lea     eax,[r14+0x9]
0x1401ca101: cmp     edi,eax
0x1401ca103: jne     0x1401ca17b
0x1401ca105: mov     rcx,r12
0x1401ca108: call    0x140070930
0x1401ca10d: mov     rcx,QWORD PTR [rbp-0x78]
0x1401ca111: inc     ecx
0x1401ca113: cmp     ecx,eax
0x1401ca115: jge     0x1401ca17b
0x1401ca117: xor     r8d,r8d
0x1401ca11a: mov     edx,0x7
0x1401ca11f: mov     r9b,0x1
0x1401ca122: lea     rcx,[rip+0x249c647]        # 0x142666770
0x1401ca129: call    0x1400bc6f0
0x1401ca12e: lea     r8d,[r15+0x19]
0x1401ca132: mov     edx,edi
0x1401ca134: lea     rcx,[rip+0x249c635]        # 0x142666770
0x1401ca13b: call    0x1400bc6e0
0x1401ca140: lea     rdx,[rip+0x1450a39]        # 0x14161ab80 ; literal='and more...'
0x1401ca147: lea     rcx,[rbp+0x1ed0]
0x1401ca14e: call    0x140069710
0x1401ca153: nop     
0x1401ca154: xor     r9d,r9d
0x1401ca157: xor     r8d,r8d
0x1401ca15a: lea     rdx,[rbp+0x1ed0]
0x1401ca161: lea     rcx,[rip+0x249c608]        # 0x142666770
0x1401ca168: call    0x140af0220
0x1401ca16d: nop     
0x1401ca16e: lea     rcx,[rbp+0x1ed0]
0x1401ca175: call    0x1400693f0
0x1401ca17a: nop     
0x1401ca17b: lea     rcx,[rbp+0x1470]
0x1401ca182: call    0x1400693f0
0x1401ca187: mov     rax,QWORD PTR [rbp-0x78]
0x1401ca18b: inc     eax
0x1401ca18d: mov     QWORD PTR [rbp-0x78],rax
0x1401ca191: cmp     edi,esi
0x1401ca193: jle     0x1401ca000
0x1401ca199: mov     esi,DWORD PTR [rsp+0x74]
0x1401ca19d: mov     r14d,DWORD PTR [rbp-0x68]
0x1401ca1a1: mov     r12d,DWORD PTR [rsp+0x70]
0x1401ca1a6: test    r14d,r14d
0x1401ca1a9: je      0x1401ca214
0x1401ca1ab: test    esi,esi
0x1401ca1ad: jg      0x1401ca214
0x1401ca1af: xor     r8d,r8d
0x1401ca1b2: mov     edx,0x7
0x1401ca1b7: xor     r9d,r9d
0x1401ca1ba: lea     rcx,[rip+0x249c5af]        # 0x142666770
0x1401ca1c1: call    0x1400bc6f0
0x1401ca1c6: lea     edx,[r12-0x1]
0x1401ca1cb: mov     r8d,r15d
0x1401ca1ce: lea     rcx,[rip+0x249c59b]        # 0x142666770
0x1401ca1d5: call    0x1400bc6e0
0x1401ca1da: lea     rdx,[rip+0x14509d7]        # 0x14161abb8 ; literal='This mission cannot be altered now.'
0x1401ca1e1: lea     rcx,[rbp+0x1ef0]
0x1401ca1e8: call    0x140069710
0x1401ca1ed: nop     
0x1401ca1ee: xor     r9d,r9d
0x1401ca1f1: xor     r8d,r8d
0x1401ca1f4: lea     rdx,[rbp+0x1ef0]
0x1401ca1fb: lea     rcx,[rip+0x249c56e]        # 0x142666770
0x1401ca202: call    0x140af0220
0x1401ca207: nop     
0x1401ca208: lea     rcx,[rbp+0x1ef0]
0x1401ca20f: jmp     0x1401c8d5e
0x1401ca214: xor     r8d,r8d
0x1401ca217: mov     edx,0x7
0x1401ca21c: mov     r9b,0x1
0x1401ca21f: lea     rcx,[rip+0x249c54a]        # 0x142666770
0x1401ca226: call    0x1400bc6f0
0x1401ca22b: lea     edx,[r12-0x1]
0x1401ca230: mov     r8d,r15d
0x1401ca233: lea     rcx,[rip+0x249c536]        # 0x142666770
0x1401ca23a: call    0x1400bc6e0
0x1401ca23f: lea     rdx,[rip+0x145094a]        # 0x14161ab90 ; literal='Click for assignments and details'
0x1401ca246: lea     rcx,[rbp+0x1f10]
0x1401ca24d: call    0x140069710
0x1401ca252: nop     
0x1401ca253: xor     r9d,r9d
0x1401ca256: xor     r8d,r8d
0x1401ca259: lea     rdx,[rbp+0x1f10]
0x1401ca260: lea     rcx,[rip+0x249c509]        # 0x142666770
0x1401ca267: call    0x140af0220
0x1401ca26c: nop     
0x1401ca26d: lea     rcx,[rbp+0x1f10]
0x1401ca274: jmp     0x1401c8d5e
0x1401ca279: mov     ecx,DWORD PTR [rbp-0x18]
0x1401ca27c: mov     DWORD PTR [rsp+0x74],ecx
0x1401ca280: lea     r13d,[rcx-0x37]
0x1401ca284: lea     esi,[r13-0x2]
0x1401ca288: mov     DWORD PTR [rbp-0x20],esi
0x1401ca28b: mov     edx,DWORD PTR [rip+0x221f877]        # 0x1423e9b08
0x1401ca291: dec     edx
0x1401ca293: mov     DWORD PTR [rbp-0x70],edx
0x1401ca296: lea     eax,[rcx-0xb]
0x1401ca299: mov     DWORD PTR [rsp+0x70],eax
0x1401ca29d: lea     r12d,[rcx-0x1]
0x1401ca2a1: mov     DWORD PTR [rbp-0x58],r12d
0x1401ca2a5: mov     edi,ecx
0x1401ca2a7: cmp     edx,0x2a
0x1401ca2aa: jle     0x1401ca2bb
0x1401ca2ac: mov     edx,0x2a
0x1401ca2b1: mov     DWORD PTR [rbp-0x70],edx
0x1401ca2b4: xor     eax,eax
0x1401ca2b6: mov     r15d,eax
0x1401ca2b9: jmp     0x1401ca2d0
0x1401ca2bb: mov     DWORD PTR [rsp+0x70],eax
0x1401ca2bf: mov     DWORD PTR [rbp-0x58],r12d
0x1401ca2c3: xor     eax,eax
0x1401ca2c5: mov     r15d,eax
0x1401ca2c8: test    edx,edx
0x1401ca2ca: js      0x1401ca3a8
0x1401ca2d0: mov     r14,rax
0x1401ca2d3: mov     ebx,esi
0x1401ca2d5: cmp     esi,edi
0x1401ca2d7: jg      0x1401ca390
0x1401ca2dd: movsxd  r12,edx
0x1401ca2e0: mov     r8d,ebx
0x1401ca2e3: mov     edx,r15d
0x1401ca2e6: lea     rcx,[rip+0x249c483]        # 0x142666770
0x1401ca2ed: call    0x1400bc6e0
0x1401ca2f2: xor     r8d,r8d
0x1401ca2f5: xor     edx,edx
0x1401ca2f7: lea     rcx,[rip+0x249c472]        # 0x142666770
0x1401ca2fe: call    0x1400bc750
0x1401ca303: test    r14,r14
0x1401ca306: jne     0x1401ca32f
0x1401ca308: cmp     ebx,esi
0x1401ca30a: jne     0x1401ca314
0x1401ca30c: mov     edx,DWORD PTR [rip+0x249dd82]        # 0x142668094
0x1401ca312: jmp     0x1401ca377
0x1401ca314: lea     rcx,[rip+0x249c455]        # 0x142666770
0x1401ca31b: cmp     ebx,edi
0x1401ca31d: jne     0x1401ca327
0x1401ca31f: mov     edx,DWORD PTR [rip+0x249dd87]        # 0x1426680ac
0x1401ca325: jmp     0x1401ca37e
0x1401ca327: mov     edx,DWORD PTR [rip+0x249dd73]        # 0x1426680a0
0x1401ca32d: jmp     0x1401ca37e
0x1401ca32f: cmp     r14,r12
0x1401ca332: jne     0x1401ca35b
0x1401ca334: cmp     ebx,esi
0x1401ca336: jne     0x1401ca340
0x1401ca338: mov     edx,DWORD PTR [rip+0x249dd5e]        # 0x14266809c
0x1401ca33e: jmp     0x1401ca377
0x1401ca340: lea     rcx,[rip+0x249c429]        # 0x142666770
0x1401ca347: cmp     ebx,edi
0x1401ca349: jne     0x1401ca353
0x1401ca34b: mov     edx,DWORD PTR [rip+0x249dd63]        # 0x1426680b4
0x1401ca351: jmp     0x1401ca37e
0x1401ca353: mov     edx,DWORD PTR [rip+0x249dd4f]        # 0x1426680a8
0x1401ca359: jmp     0x1401ca37e
0x1401ca35b: cmp     ebx,esi
0x1401ca35d: jne     0x1401ca367
0x1401ca35f: mov     edx,DWORD PTR [rip+0x249dd33]        # 0x142668098
0x1401ca365: jmp     0x1401ca377
0x1401ca367: cmp     ebx,edi
0x1401ca369: mov     edx,DWORD PTR [rip+0x249dd41]        # 0x1426680b0
0x1401ca36f: je      0x1401ca377
0x1401ca371: mov     edx,DWORD PTR [rip+0x249dd2d]        # 0x1426680a4
0x1401ca377: lea     rcx,[rip+0x249c3f2]        # 0x142666770
0x1401ca37e: call    0x140af1390
0x1401ca383: inc     ebx
0x1401ca385: cmp     ebx,edi
0x1401ca387: jle     0x1401ca2e0
0x1401ca38d: mov     edx,DWORD PTR [rbp-0x70]
0x1401ca390: inc     r15d
0x1401ca393: inc     r14
0x1401ca396: cmp     r15d,edx
0x1401ca399: jle     0x1401ca2d3
0x1401ca39f: mov     r12d,DWORD PTR [rbp-0x58]
0x1401ca3a3: mov     ebx,0x2
0x1401ca3a8: mov     r15,QWORD PTR [rsp+0x78]
0x1401ca3ad: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca3b4: call    0x141095c20
0x1401ca3b9: mov     rdi,rax
0x1401ca3bc: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca3c3: call    0x1409cbf30
0x1401ca3c8: mov     r14,rax
0x1401ca3cb: xor     r8d,r8d
0x1401ca3ce: mov     edx,0x7
0x1401ca3d3: mov     r9b,0x1
0x1401ca3d6: lea     rcx,[rip+0x249c393]        # 0x142666770
0x1401ca3dd: call    0x1400bc6f0
0x1401ca3e2: lea     rcx,[rbp+0xf10]
0x1401ca3e9: call    0x140070c50
0x1401ca3ee: nop     
0x1401ca3ef: mov     r8,QWORD PTR [r15+0x1d8]
0x1401ca3f6: xor     r9d,r9d
0x1401ca3f9: mov     r8d,DWORD PTR [r8+0x88]
0x1401ca400: lea     rdx,[rbp+0xf10]
0x1401ca407: lea     rcx,[rip+0x234bc2a]        # 0x142516038
0x1401ca40e: call    0x140ba8410
0x1401ca413: lea     rdx,[rip+0x1434eee]        # 0x1415ff308 ; literal=', '
0x1401ca41a: lea     rcx,[rbp+0xf10]
0x1401ca421: call    0x140070b20
0x1401ca426: lea     rcx,[rbp+0x1410]
0x1401ca42d: call    0x140070c50
0x1401ca432: nop     
0x1401ca433: lea     rdx,[rbp+0x1410]
0x1401ca43a: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca441: call    0x1410df470
0x1401ca446: lea     rcx,[rbp+0x1410]
0x1401ca44d: call    0x140070ae0
0x1401ca452: test    al,al
0x1401ca454: jne     0x1401ca477
0x1401ca456: lea     rdx,[rbp+0x1410]
0x1401ca45d: lea     rcx,[rbp+0xf10]
0x1401ca464: call    0x1400bb2d0
0x1401ca469: mov     dl,0x20
0x1401ca46b: lea     rcx,[rbp+0xf10]
0x1401ca472: call    0x1400bb2f0
0x1401ca477: mov     rax,QWORD PTR [r15+0x1d8]
0x1401ca47e: cmp     WORD PTR [rax+0x80],0xa
0x1401ca486: je      0x1401ca4f0
0x1401ca488: test    rdi,rdi
0x1401ca48b: je      0x1401ca4f0
0x1401ca48d: mov     eax,DWORD PTR [rdi+0x9c]
0x1401ca493: shr     eax,0xa
0x1401ca496: not     eax
0x1401ca498: test    al,0x1
0x1401ca49a: je      0x1401ca4f0
0x1401ca49c: lea     rcx,[rbp+0x1550]
0x1401ca4a3: call    0x140070c50
0x1401ca4a8: nop     
0x1401ca4a9: mov     r8d,0xffffffff
0x1401ca4af: lea     rdx,[rbp+0x1550]
0x1401ca4b6: movzx   ecx,WORD PTR [rdi+0x98]
0x1401ca4bd: call    0x140aba070
0x1401ca4c2: lea     rdx,[rbp+0x1550]
0x1401ca4c9: lea     rcx,[rbp+0xf10]
0x1401ca4d0: call    0x1400bb2d0
0x1401ca4d5: mov     dl,0x20
0x1401ca4d7: lea     rcx,[rbp+0xf10]
0x1401ca4de: call    0x1400bb2f0
0x1401ca4e3: nop     
0x1401ca4e4: lea     rcx,[rbp+0x1550]
0x1401ca4eb: call    0x1400693f0
0x1401ca4f0: lea     rdx,[rbp+0x1410]
0x1401ca4f7: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca4fe: call    0x1410df4b0
0x1401ca503: lea     rdx,[rbp+0x1410]
0x1401ca50a: lea     rcx,[rbp+0xf10]
0x1401ca511: call    0x1400bb2d0
0x1401ca516: lea     rcx,[rbp+0xf10]
0x1401ca51d: call    0x1405440a0
0x1401ca522: mov     r8d,r13d
0x1401ca525: mov     edx,0x1
0x1401ca52a: lea     rcx,[rip+0x249c23f]        # 0x142666770
0x1401ca531: call    0x1400bc6e0
0x1401ca536: lea     rcx,[rbp+0xf10]
0x1401ca53d: call    0x1400708f0
0x1401ca542: xor     r9d,r9d
0x1401ca545: xor     r8d,r8d
0x1401ca548: lea     rdx,[rbp+0xf10]
0x1401ca54f: lea     rcx,[rip+0x249c21a]        # 0x142666770
0x1401ca556: call    0x140af0220
0x1401ca55b: xor     r8d,r8d
0x1401ca55e: mov     edx,0x7
0x1401ca563: mov     r9b,0x1
0x1401ca566: lea     rcx,[rip+0x249c203]        # 0x142666770
0x1401ca56d: call    0x1400bc6f0
0x1401ca572: mov     r8d,r13d
0x1401ca575: mov     edx,ebx
0x1401ca577: lea     rcx,[rip+0x249c1f2]        # 0x142666770
0x1401ca57e: call    0x1400bc6e0
0x1401ca583: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca58a: cmp     rcx,QWORD PTR [rip+0x21ebfdf]        # 0x1423b6570
0x1401ca591: jne     0x1401ca5cd
0x1401ca593: lea     rdx,[rip+0x144fe8e]        # 0x14161a428 ; literal='Your location'
0x1401ca59a: lea     rcx,[rbp+0x1f30]
0x1401ca5a1: call    0x140069710
0x1401ca5a6: nop     
0x1401ca5a7: xor     r9d,r9d
0x1401ca5aa: xor     r8d,r8d
0x1401ca5ad: lea     rdx,[rbp+0x1f30]
0x1401ca5b4: lea     rcx,[rip+0x249c1b5]        # 0x142666770
0x1401ca5bb: call    0x140af0220
0x1401ca5c0: nop     
0x1401ca5c1: lea     rcx,[rbp+0x1f30]
0x1401ca5c8: jmp     0x1401cad26
0x1401ca5cd: test    r14,r14
0x1401ca5d0: je      0x1401cacee
0x1401ca5d6: add     rcx,0x90
0x1401ca5dd: call    0x140070930
0x1401ca5e2: mov     rbx,rax
0x1401ca5e5: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca5ec: add     rcx,0xd8
0x1401ca5f3: lea     rdx,[rbp+0x58]
0x1401ca5f7: call    0x140070800
0x1401ca5fc: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca603: add     rcx,0xd8
0x1401ca60a: lea     rdx,[rbp+0x140]
0x1401ca611: call    0x1400707f0
0x1401ca616: lea     r8,[rbp+0x140]
0x1401ca61d: lea     rdx,[rbp+0xf]
0x1401ca621: lea     rcx,[rbp+0x58]
0x1401ca625: call    0x1400703e0
0x1401ca62a: xor     edx,edx
0x1401ca62c: movzx   ecx,BYTE PTR [rax]
0x1401ca62f: call    0x140066d70
0x1401ca634: test    al,al
0x1401ca636: je      0x1401ca69c
0x1401ca638: nop     DWORD PTR [rax+rax*1+0x0]
0x1401ca640: lea     rcx,[rbp+0x58]
0x1401ca644: call    0x1400703d0
0x1401ca649: mov     rcx,QWORD PTR [rax]
0x1401ca64c: cmp     DWORD PTR [rcx],0x0
0x1401ca64f: jle     0x1401ca671
0x1401ca651: lea     rcx,[rbp+0x58]
0x1401ca655: call    0x1400703d0
0x1401ca65a: mov     rcx,QWORD PTR [rax]
0x1401ca65d: cmp     DWORD PTR [rcx+0x18],0xffffffff
0x1401ca661: jne     0x1401ca671
0x1401ca663: lea     rcx,[rbp+0x58]
0x1401ca667: call    0x1400703d0
0x1401ca66c: mov     rcx,QWORD PTR [rax]
0x1401ca66f: add     ebx,DWORD PTR [rcx]
0x1401ca671: lea     rcx,[rbp+0x58]
0x1401ca675: call    0x1400703c0
0x1401ca67a: lea     r8,[rbp+0x140]
0x1401ca681: lea     rdx,[rbp+0xf]
0x1401ca685: lea     rcx,[rbp+0x58]
0x1401ca689: call    0x1400703e0
0x1401ca68e: xor     edx,edx
0x1401ca690: movzx   ecx,BYTE PTR [rax]
0x1401ca693: call    0x140066d70
0x1401ca698: test    al,al
0x1401ca69a: jne     0x1401ca640
0x1401ca69c: cmp     ebx,0x30d4
0x1401ca6a2: jl      0x1401ca6e1
0x1401ca6a4: lea     rdx,[rip+0x144ffc5]        # 0x14161a670 ; literal='Population: >10000'
0x1401ca6ab: lea     rcx,[rbp+0x1f50]
0x1401ca6b2: call    0x140069710
0x1401ca6b7: nop     
0x1401ca6b8: mov     r9d,0x35
0x1401ca6be: xor     r8d,r8d
0x1401ca6c1: lea     rdx,[rbp+0x1f50]
0x1401ca6c8: lea     rcx,[rip+0x249c0a1]        # 0x142666770
0x1401ca6cf: call    0x140af0220
0x1401ca6d4: nop     
0x1401ca6d5: lea     rcx,[rbp+0x1f50]
0x1401ca6dc: jmp     0x1401cad26
0x1401ca6e1: cmp     ebx,0x2134
0x1401ca6e7: jl      0x1401ca726
0x1401ca6e9: lea     rdx,[rip+0x144ff98]        # 0x14161a688 ; literal='Population: ~10000'
0x1401ca6f0: lea     rcx,[rbp+0x1f70]
0x1401ca6f7: call    0x140069710
0x1401ca6fc: nop     
0x1401ca6fd: mov     r9d,0x35
0x1401ca703: xor     r8d,r8d
0x1401ca706: lea     rdx,[rbp+0x1f70]
0x1401ca70d: lea     rcx,[rip+0x249c05c]        # 0x142666770
0x1401ca714: call    0x140af0220
0x1401ca719: nop     
0x1401ca71a: lea     rcx,[rbp+0x1f70]
0x1401ca721: jmp     0x1401cad26
0x1401ca726: cmp     ebx,0x1964
0x1401ca72c: jl      0x1401ca76b
0x1401ca72e: lea     rdx,[rip+0x144ff6b]        # 0x14161a6a0 ; literal='Population: ~7500'
0x1401ca735: lea     rcx,[rbp+0x1f90]
0x1401ca73c: call    0x140069710
0x1401ca741: nop     
0x1401ca742: mov     r9d,0x35
0x1401ca748: xor     r8d,r8d
0x1401ca74b: lea     rdx,[rbp+0x1f90]
0x1401ca752: lea     rcx,[rip+0x249c017]        # 0x142666770
0x1401ca759: call    0x140af0220
0x1401ca75e: nop     
0x1401ca75f: lea     rcx,[rbp+0x1f90]
0x1401ca766: jmp     0x1401cad26
0x1401ca76b: cmp     ebx,0x157c
0x1401ca771: jl      0x1401ca7b0
0x1401ca773: lea     rdx,[rip+0x144ff3e]        # 0x14161a6b8 ; literal='Population: ~6000'
0x1401ca77a: lea     rcx,[rbp+0x1fb0]
0x1401ca781: call    0x140069710
0x1401ca786: nop     
0x1401ca787: mov     r9d,0x35
0x1401ca78d: xor     r8d,r8d
0x1401ca790: lea     rdx,[rbp+0x1fb0]
0x1401ca797: lea     rcx,[rip+0x249bfd2]        # 0x142666770
0x1401ca79e: call    0x140af0220
0x1401ca7a3: nop     
0x1401ca7a4: lea     rcx,[rbp+0x1fb0]
0x1401ca7ab: jmp     0x1401cad26
0x1401ca7b0: cmp     ebx,0x1194
0x1401ca7b6: jl      0x1401ca7f5
0x1401ca7b8: lea     rdx,[rip+0x144ff11]        # 0x14161a6d0 ; literal='Population: ~5000'
0x1401ca7bf: lea     rcx,[rbp+0x1fd0]
0x1401ca7c6: call    0x140069710
0x1401ca7cb: nop     
0x1401ca7cc: mov     r9d,0x35
0x1401ca7d2: xor     r8d,r8d
0x1401ca7d5: lea     rdx,[rbp+0x1fd0]
0x1401ca7dc: lea     rcx,[rip+0x249bf8d]        # 0x142666770
0x1401ca7e3: call    0x140af0220
0x1401ca7e8: nop     
0x1401ca7e9: lea     rcx,[rbp+0x1fd0]
0x1401ca7f0: jmp     0x1401cad26
0x1401ca7f5: cmp     ebx,0xdac
0x1401ca7fb: jl      0x1401ca83a
0x1401ca7fd: lea     rdx,[rip+0x144fee4]        # 0x14161a6e8 ; literal='Population: ~4000'
0x1401ca804: lea     rcx,[rbp+0x1ff0]
0x1401ca80b: call    0x140069710
0x1401ca810: nop     
0x1401ca811: mov     r9d,0x35
0x1401ca817: xor     r8d,r8d
0x1401ca81a: lea     rdx,[rbp+0x1ff0]
0x1401ca821: lea     rcx,[rip+0x249bf48]        # 0x142666770
0x1401ca828: call    0x140af0220
0x1401ca82d: nop     
0x1401ca82e: lea     rcx,[rbp+0x1ff0]
0x1401ca835: jmp     0x1401cad26
0x1401ca83a: cmp     ebx,0x9c4
0x1401ca840: jl      0x1401ca87f
0x1401ca842: lea     rdx,[rip+0x144feb7]        # 0x14161a700 ; literal='Population: ~3000'
0x1401ca849: lea     rcx,[rbp+0x2010]
0x1401ca850: call    0x140069710
0x1401ca855: nop     
0x1401ca856: mov     r9d,0x35
0x1401ca85c: xor     r8d,r8d
0x1401ca85f: lea     rdx,[rbp+0x2010]
0x1401ca866: lea     rcx,[rip+0x249bf03]        # 0x142666770
0x1401ca86d: call    0x140af0220
0x1401ca872: nop     
0x1401ca873: lea     rcx,[rbp+0x2010]
0x1401ca87a: jmp     0x1401cad26
0x1401ca87f: cmp     ebx,0x5dc
0x1401ca885: jl      0x1401ca8c4
0x1401ca887: lea     rdx,[rip+0x144fe8a]        # 0x14161a718 ; literal='Population: ~2000'
0x1401ca88e: lea     rcx,[rbp+0x2030]
0x1401ca895: call    0x140069710
0x1401ca89a: nop     
0x1401ca89b: mov     r9d,0x35
0x1401ca8a1: xor     r8d,r8d
0x1401ca8a4: lea     rdx,[rbp+0x2030]
0x1401ca8ab: lea     rcx,[rip+0x249bebe]        # 0x142666770
0x1401ca8b2: call    0x140af0220
0x1401ca8b7: nop     
0x1401ca8b8: lea     rcx,[rbp+0x2030]
0x1401ca8bf: jmp     0x1401cad26
0x1401ca8c4: cmp     ebx,0x352
0x1401ca8ca: jl      0x1401ca909
0x1401ca8cc: lea     rdx,[rip+0x144fe5d]        # 0x14161a730 ; literal='Population: ~1000'
0x1401ca8d3: lea     rcx,[rbp+0x2050]
0x1401ca8da: call    0x140069710
0x1401ca8df: nop     
0x1401ca8e0: mov     r9d,0x35
0x1401ca8e6: xor     r8d,r8d
0x1401ca8e9: lea     rdx,[rbp+0x2050]
0x1401ca8f0: lea     rcx,[rip+0x249be79]        # 0x142666770
0x1401ca8f7: call    0x140af0220
0x1401ca8fc: nop     
0x1401ca8fd: lea     rcx,[rbp+0x2050]
0x1401ca904: jmp     0x1401cad26
0x1401ca909: cmp     ebx,0x28a
0x1401ca90f: jl      0x1401ca94e
0x1401ca911: lea     rdx,[rip+0x144fe30]        # 0x14161a748 ; literal='Population: ~750'
0x1401ca918: lea     rcx,[rbp+0x2070]
0x1401ca91f: call    0x140069710
0x1401ca924: nop     
0x1401ca925: mov     r9d,0x35
0x1401ca92b: xor     r8d,r8d
0x1401ca92e: lea     rdx,[rbp+0x2070]
0x1401ca935: lea     rcx,[rip+0x249be34]        # 0x142666770
0x1401ca93c: call    0x140af0220
0x1401ca941: nop     
0x1401ca942: lea     rcx,[rbp+0x2070]
0x1401ca949: jmp     0x1401cad26
0x1401ca94e: cmp     ebx,0x226
0x1401ca954: jl      0x1401ca993
0x1401ca956: lea     rdx,[rip+0x144fe03]        # 0x14161a760 ; literal='Population: ~600'
0x1401ca95d: lea     rcx,[rbp+0x2090]
0x1401ca964: call    0x140069710
0x1401ca969: nop     
0x1401ca96a: mov     r9d,0x35
0x1401ca970: xor     r8d,r8d
0x1401ca973: lea     rdx,[rbp+0x2090]
0x1401ca97a: lea     rcx,[rip+0x249bdef]        # 0x142666770
0x1401ca981: call    0x140af0220
0x1401ca986: nop     
0x1401ca987: lea     rcx,[rbp+0x2090]
0x1401ca98e: jmp     0x1401cad26
0x1401ca993: cmp     ebx,0x1c2
0x1401ca999: jl      0x1401ca9d8
0x1401ca99b: lea     rdx,[rip+0x144fdd6]        # 0x14161a778 ; literal='Population: ~500'
0x1401ca9a2: lea     rcx,[rbp+0x20b0]
0x1401ca9a9: call    0x140069710
0x1401ca9ae: nop     
0x1401ca9af: mov     r9d,0x35
0x1401ca9b5: xor     r8d,r8d
0x1401ca9b8: lea     rdx,[rbp+0x20b0]
0x1401ca9bf: lea     rcx,[rip+0x249bdaa]        # 0x142666770
0x1401ca9c6: call    0x140af0220
0x1401ca9cb: nop     
0x1401ca9cc: lea     rcx,[rbp+0x20b0]
0x1401ca9d3: jmp     0x1401cad26
0x1401ca9d8: cmp     ebx,0x15e
0x1401ca9de: jl      0x1401caa1d
0x1401ca9e0: lea     rdx,[rip+0x144fda9]        # 0x14161a790 ; literal='Population: ~400'
0x1401ca9e7: lea     rcx,[rbp+0x20d0]
0x1401ca9ee: call    0x140069710
0x1401ca9f3: nop     
0x1401ca9f4: mov     r9d,0x35
0x1401ca9fa: xor     r8d,r8d
0x1401ca9fd: lea     rdx,[rbp+0x20d0]
0x1401caa04: lea     rcx,[rip+0x249bd65]        # 0x142666770
0x1401caa0b: call    0x140af0220
0x1401caa10: nop     
0x1401caa11: lea     rcx,[rbp+0x20d0]
0x1401caa18: jmp     0x1401cad26
0x1401caa1d: cmp     ebx,0xfa
0x1401caa23: jl      0x1401caa62
0x1401caa25: lea     rdx,[rip+0x144fd7c]        # 0x14161a7a8 ; literal='Population: ~300'
0x1401caa2c: lea     rcx,[rbp+0x20f0]
0x1401caa33: call    0x140069710
0x1401caa38: nop     
0x1401caa39: mov     r9d,0x35
0x1401caa3f: xor     r8d,r8d
0x1401caa42: lea     rdx,[rbp+0x20f0]
0x1401caa49: lea     rcx,[rip+0x249bd20]        # 0x142666770
0x1401caa50: call    0x140af0220
0x1401caa55: nop     
0x1401caa56: lea     rcx,[rbp+0x20f0]
0x1401caa5d: jmp     0x1401cad26
0x1401caa62: cmp     ebx,0x96
0x1401caa68: jl      0x1401caaa7
0x1401caa6a: lea     rdx,[rip+0x144fd4f]        # 0x14161a7c0 ; literal='Population: ~200'
0x1401caa71: lea     rcx,[rbp+0x2110]
0x1401caa78: call    0x140069710
0x1401caa7d: nop     
0x1401caa7e: mov     r9d,0x35
0x1401caa84: xor     r8d,r8d
0x1401caa87: lea     rdx,[rbp+0x2110]
0x1401caa8e: lea     rcx,[rip+0x249bcdb]        # 0x142666770
0x1401caa95: call    0x140af0220
0x1401caa9a: nop     
0x1401caa9b: lea     rcx,[rbp+0x2110]
0x1401caaa2: jmp     0x1401cad26
0x1401caaa7: cmp     ebx,0x55
0x1401caaaa: jl      0x1401caae9
0x1401caaac: lea     rdx,[rip+0x144fd25]        # 0x14161a7d8 ; literal='Population: ~100'
0x1401caab3: lea     rcx,[rbp+0x2130]
0x1401caaba: call    0x140069710
0x1401caabf: nop     
0x1401caac0: mov     r9d,0x35
0x1401caac6: xor     r8d,r8d
0x1401caac9: lea     rdx,[rbp+0x2130]
0x1401caad0: lea     rcx,[rip+0x249bc99]        # 0x142666770
0x1401caad7: call    0x140af0220
0x1401caadc: nop     
0x1401caadd: lea     rcx,[rbp+0x2130]
0x1401caae4: jmp     0x1401cad26
0x1401caae9: cmp     ebx,0x41
0x1401caaec: jl      0x1401cab2b
0x1401caaee: lea     rdx,[rip+0x144fa7b]        # 0x14161a570 ; literal='Population: ~75'
0x1401caaf5: lea     rcx,[rbp+0x2150]
0x1401caafc: call    0x140069710
0x1401cab01: nop     
0x1401cab02: mov     r9d,0x35
0x1401cab08: xor     r8d,r8d
0x1401cab0b: lea     rdx,[rbp+0x2150]
0x1401cab12: lea     rcx,[rip+0x249bc57]        # 0x142666770
0x1401cab19: call    0x140af0220
0x1401cab1e: nop     
0x1401cab1f: lea     rcx,[rbp+0x2150]
0x1401cab26: jmp     0x1401cad26
0x1401cab2b: cmp     ebx,0x37
0x1401cab2e: jl      0x1401cab6d
0x1401cab30: lea     rdx,[rip+0x144fa49]        # 0x14161a580 ; literal='Population: ~60'
0x1401cab37: lea     rcx,[rbp+0x2170]
0x1401cab3e: call    0x140069710
0x1401cab43: nop     
0x1401cab44: mov     r9d,0x35
0x1401cab4a: xor     r8d,r8d
0x1401cab4d: lea     rdx,[rbp+0x2170]
0x1401cab54: lea     rcx,[rip+0x249bc15]        # 0x142666770
0x1401cab5b: call    0x140af0220
0x1401cab60: nop     
0x1401cab61: lea     rcx,[rbp+0x2170]
0x1401cab68: jmp     0x1401cad26
0x1401cab6d: cmp     ebx,0x2d
0x1401cab70: jl      0x1401cabaf
0x1401cab72: lea     rdx,[rip+0x144fa17]        # 0x14161a590 ; literal='Population: ~50'
0x1401cab79: lea     rcx,[rbp+0x2190]
0x1401cab80: call    0x140069710
0x1401cab85: nop     
0x1401cab86: mov     r9d,0x35
0x1401cab8c: xor     r8d,r8d
0x1401cab8f: lea     rdx,[rbp+0x2190]
0x1401cab96: lea     rcx,[rip+0x249bbd3]        # 0x142666770
0x1401cab9d: call    0x140af0220
0x1401caba2: nop     
0x1401caba3: lea     rcx,[rbp+0x2190]
0x1401cabaa: jmp     0x1401cad26
0x1401cabaf: cmp     ebx,0x23
0x1401cabb2: jl      0x1401cabf1
0x1401cabb4: lea     rdx,[rip+0x144f9e5]        # 0x14161a5a0 ; literal='Population: ~40'
0x1401cabbb: lea     rcx,[rbp+0x21b0]
0x1401cabc2: call    0x140069710
0x1401cabc7: nop     
0x1401cabc8: mov     r9d,0x35
0x1401cabce: xor     r8d,r8d
0x1401cabd1: lea     rdx,[rbp+0x21b0]
0x1401cabd8: lea     rcx,[rip+0x249bb91]        # 0x142666770
0x1401cabdf: call    0x140af0220
0x1401cabe4: nop     
0x1401cabe5: lea     rcx,[rbp+0x21b0]
0x1401cabec: jmp     0x1401cad26
0x1401cabf1: cmp     ebx,0x19
0x1401cabf4: jl      0x1401cac33
0x1401cabf6: lea     rdx,[rip+0x144f9b3]        # 0x14161a5b0 ; literal='Population: ~30'
0x1401cabfd: lea     rcx,[rbp+0x21d0]
0x1401cac04: call    0x140069710
0x1401cac09: nop     
0x1401cac0a: mov     r9d,0x35
0x1401cac10: xor     r8d,r8d
0x1401cac13: lea     rdx,[rbp+0x21d0]
0x1401cac1a: lea     rcx,[rip+0x249bb4f]        # 0x142666770
0x1401cac21: call    0x140af0220
0x1401cac26: nop     
0x1401cac27: lea     rcx,[rbp+0x21d0]
0x1401cac2e: jmp     0x1401cad26
0x1401cac33: cmp     ebx,0xf
0x1401cac36: jl      0x1401cac75
0x1401cac38: lea     rdx,[rip+0x144f981]        # 0x14161a5c0 ; literal='Population: ~20'
0x1401cac3f: lea     rcx,[rbp+0x21f0]
0x1401cac46: call    0x140069710
0x1401cac4b: nop     
0x1401cac4c: mov     r9d,0x35
0x1401cac52: xor     r8d,r8d
0x1401cac55: lea     rdx,[rbp+0x21f0]
0x1401cac5c: lea     rcx,[rip+0x249bb0d]        # 0x142666770
0x1401cac63: call    0x140af0220
0x1401cac68: nop     
0x1401cac69: lea     rcx,[rbp+0x21f0]
0x1401cac70: jmp     0x1401cad26
0x1401cac75: cmp     ebx,0x7
0x1401cac78: jl      0x1401cacb4
0x1401cac7a: lea     rdx,[rip+0x144f94f]        # 0x14161a5d0 ; literal='Population: ~10'
0x1401cac81: lea     rcx,[rbp+0x2210]
0x1401cac88: call    0x140069710
0x1401cac8d: nop     
0x1401cac8e: mov     r9d,0x35
0x1401cac94: xor     r8d,r8d
0x1401cac97: lea     rdx,[rbp+0x2210]
0x1401cac9e: lea     rcx,[rip+0x249bacb]        # 0x142666770
0x1401caca5: call    0x140af0220
0x1401cacaa: nop     
0x1401cacab: lea     rcx,[rbp+0x2210]
0x1401cacb2: jmp     0x1401cad26
0x1401cacb4: lea     rdx,[rip+0x144f925]        # 0x14161a5e0 ; literal='Population: <10'
0x1401cacbb: lea     rcx,[rbp+0x2230]
0x1401cacc2: call    0x140069710
0x1401cacc7: nop     
0x1401cacc8: mov     r9d,0x35
0x1401cacce: xor     r8d,r8d
0x1401cacd1: lea     rdx,[rbp+0x2230]
0x1401cacd8: lea     rcx,[rip+0x249ba91]        # 0x142666770
0x1401cacdf: call    0x140af0220
0x1401cace4: nop     
0x1401cace5: lea     rcx,[rbp+0x2230]
0x1401cacec: jmp     0x1401cad26
0x1401cacee: lea     rdx,[rip+0x144f8fb]        # 0x14161a5f0 ; literal='No civilized population'
0x1401cacf5: lea     rcx,[rbp+0x2250]
0x1401cacfc: call    0x140069710
0x1401cad01: nop     
0x1401cad02: mov     r9d,0x35
0x1401cad08: xor     r8d,r8d
0x1401cad0b: lea     rdx,[rbp+0x2250]
0x1401cad12: lea     rcx,[rip+0x249ba57]        # 0x142666770
0x1401cad19: call    0x140af0220
0x1401cad1e: nop     
0x1401cad1f: lea     rcx,[rbp+0x2250]
0x1401cad26: call    0x1400693f0
0x1401cad2b: xor     r8d,r8d
0x1401cad2e: mov     edx,0x7
0x1401cad33: mov     r9b,0x1
0x1401cad36: lea     rcx,[rip+0x249ba33]        # 0x142666770
0x1401cad3d: call    0x1400bc6f0
0x1401cad42: mov     r8d,r13d
0x1401cad45: mov     edx,0x3
0x1401cad4a: lea     rcx,[rip+0x249ba1f]        # 0x142666770
0x1401cad51: call    0x1400bc6e0
0x1401cad56: mov     edx,DWORD PTR [rip+0x21e4c9c]        # 0x1423af9f8
0x1401cad5c: lea     rcx,[rip+0x2222e15]        # 0x1423edb78
0x1401cad63: call    0x14007f0b0
0x1401cad68: mov     rbx,rax
0x1401cad6b: mov     edx,DWORD PTR [rip+0x21e4c7f]        # 0x1423af9f0
0x1401cad71: lea     rcx,[rip+0x2222e00]        # 0x1423edb78
0x1401cad78: call    0x14007f0b0
0x1401cad7d: test    rax,rax
0x1401cad80: je      0x1401cb157
0x1401cad86: test    rbx,rbx
0x1401cad89: je      0x1401cb157
0x1401cad8f: test    rdi,rdi
0x1401cad92: je      0x1401cb157
0x1401cad98: test    r14,r14
0x1401cad9b: je      0x1401cb157
0x1401cada1: cmp     rax,rdi
0x1401cada4: je      0x1401cb157
0x1401cadaa: lea     rcx,[rax+0x1028]
0x1401cadb1: mov     edx,DWORD PTR [rdi+0x4]
0x1401cadb4: call    0x1401010b0
0x1401cadb9: mov     rdi,rax
0x1401cadbc: lea     rcx,[rbx+0x1028]
0x1401cadc3: mov     edx,DWORD PTR [r14+0x4]
0x1401cadc7: call    0x1401010b0
0x1401cadcc: mov     rbx,rax
0x1401cadcf: test    rax,rax
0x1401cadd2: je      0x1401caf97
0x1401cadd8: movzx   eax,WORD PTR [rax+0x4]
0x1401caddc: cmp     ax,0x3
0x1401cade0: je      0x1401cae23
0x1401cade2: cmp     ax,0x4
0x1401cade6: jne     0x1401caf97
0x1401cadec: lea     rdx,[rip+0x144f84d]        # 0x14161a640 ; literal='They accept '
0x1401cadf3: lea     rcx,[rbp+0x2270]
0x1401cadfa: call    0x140069710
0x1401cadff: nop     
0x1401cae00: xor     r9d,r9d
0x1401cae03: mov     r8b,0x3
0x1401cae06: lea     rdx,[rbp+0x2270]
0x1401cae0d: lea     rcx,[rip+0x249b95c]        # 0x142666770
0x1401cae14: call    0x140af0220
0x1401cae19: nop     
0x1401cae1a: lea     rcx,[rbp+0x2270]
0x1401cae21: jmp     0x1401cae58
0x1401cae23: lea     rdx,[rip+0x144f806]        # 0x14161a630 ; literal='They offer '
0x1401cae2a: lea     rcx,[rbp+0x2290]
0x1401cae31: call    0x140069710
0x1401cae36: nop     
0x1401cae37: xor     r9d,r9d
0x1401cae3a: mov     r8b,0x3
0x1401cae3d: lea     rdx,[rbp+0x2290]
0x1401cae44: lea     rcx,[rip+0x249b925]        # 0x142666770
0x1401cae4b: call    0x140af0220
0x1401cae50: nop     
0x1401cae51: lea     rcx,[rbp+0x2290]
0x1401cae58: call    0x1400693f0
0x1401cae5d: mov     ecx,DWORD PTR [rbx+0x44]
0x1401cae60: test    ecx,ecx
0x1401cae62: je      0x1401caf23
0x1401cae68: sub     ecx,0x1
0x1401cae6b: je      0x1401caeec
0x1401cae6d: sub     ecx,0x1
0x1401cae70: je      0x1401caeb5
0x1401cae72: cmp     ecx,0x1
0x1401cae75: jne     0x1401caf5d
0x1401cae7b: lea     rdx,[rip+0x144919a]        # 0x14161401c ; literal='Winter'
0x1401cae82: lea     rcx,[rbp+0x22b0]
0x1401cae89: call    0x140069710
0x1401cae8e: nop     
0x1401cae8f: xor     r9d,r9d
0x1401cae92: mov     r8b,0x3
0x1401cae95: lea     rdx,[rbp+0x22b0]
0x1401cae9c: lea     rcx,[rip+0x249b8cd]        # 0x142666770
0x1401caea3: call    0x140af0220
0x1401caea8: nop     
0x1401caea9: lea     rcx,[rbp+0x22b0]
0x1401caeb0: jmp     0x1401caf58
0x1401caeb5: lea     rdx,[rip+0x1449158]        # 0x141614014 ; literal='Autumn'
0x1401caebc: lea     rcx,[rbp+0x22d0]
0x1401caec3: call    0x140069710
0x1401caec8: nop     
0x1401caec9: xor     r9d,r9d
0x1401caecc: mov     r8b,0x3
0x1401caecf: lea     rdx,[rbp+0x22d0]
0x1401caed6: lea     rcx,[rip+0x249b893]        # 0x142666770
0x1401caedd: call    0x140af0220
0x1401caee2: nop     
0x1401caee3: lea     rcx,[rbp+0x22d0]
0x1401caeea: jmp     0x1401caf58
0x1401caeec: lea     rdx,[rip+0x1449119]        # 0x14161400c ; literal='Summer'
0x1401caef3: lea     rcx,[rbp+0x22f0]
0x1401caefa: call    0x140069710
0x1401caeff: nop     
0x1401caf00: xor     r9d,r9d
0x1401caf03: mov     r8b,0x3
0x1401caf06: lea     rdx,[rbp+0x22f0]
0x1401caf0d: lea     rcx,[rip+0x249b85c]        # 0x142666770
0x1401caf14: call    0x140af0220
0x1401caf19: nop     
0x1401caf1a: lea     rcx,[rbp+0x22f0]
0x1401caf21: jmp     0x1401caf58
0x1401caf23: lea     rdx,[rip+0x14490da]        # 0x141614004 ; literal='Spring'
0x1401caf2a: lea     rcx,[rbp+0x2310]
0x1401caf31: call    0x140069710
0x1401caf36: nop     
0x1401caf37: xor     r9d,r9d
0x1401caf3a: mov     r8b,0x3
0x1401caf3d: lea     rdx,[rbp+0x2310]
0x1401caf44: lea     rcx,[rip+0x249b825]        # 0x142666770
0x1401caf4b: call    0x140af0220
0x1401caf50: nop     
0x1401caf51: lea     rcx,[rbp+0x2310]
0x1401caf58: call    0x1400693f0
0x1401caf5d: lea     rdx,[rip+0x144f6ec]        # 0x14161a650 ; literal=' tribute'
0x1401caf64: lea     rcx,[rbp+0x2330]
0x1401caf6b: call    0x140069710
0x1401caf70: nop     
0x1401caf71: xor     r9d,r9d
0x1401caf74: xor     r8d,r8d
0x1401caf77: lea     rdx,[rbp+0x2330]
0x1401caf7e: lea     rcx,[rip+0x249b7eb]        # 0x142666770
0x1401caf85: call    0x140af0220
0x1401caf8a: nop     
0x1401caf8b: lea     rcx,[rbp+0x2330]
0x1401caf92: jmp     0x1401cb152
0x1401caf97: test    rdi,rdi
0x1401caf9a: je      0x1401cb11d
0x1401cafa0: movsx   rax,WORD PTR [rdi+0x4]
0x1401cafa5: cmp     eax,0x5
0x1401cafa8: ja      0x1401cb157
0x1401cafae: lea     rdx,[rip+0xffffffffffe3504b]        # 0x140000000
0x1401cafb5: mov     ecx,DWORD PTR [rdx+rax*4+0x1d6574]
0x1401cafbc: add     rcx,rdx
0x1401cafbf: jmp     rcx
0x1401cafc1: test    BYTE PTR [rdi+0x40],0x4
0x1401cafc5: je      0x1401cb001
0x1401cafc7: lea     rdx,[rip+0x144f692]        # 0x14161a660 ; literal='Alliance'
0x1401cafce: lea     rcx,[rbp+0x2350]
0x1401cafd5: call    0x140069710
0x1401cafda: nop     
0x1401cafdb: xor     r9d,r9d
0x1401cafde: xor     r8d,r8d
0x1401cafe1: lea     rdx,[rbp+0x2350]
0x1401cafe8: lea     rcx,[rip+0x249b781]        # 0x142666770
0x1401cafef: call    0x140af0220
0x1401caff4: nop     
0x1401caff5: lea     rcx,[rbp+0x2350]
0x1401caffc: jmp     0x1401cb152
0x1401cb001: lea     rdx,[rip+0x1433c1c]        # 0x1415fec24 ; literal='Peace'
0x1401cb008: lea     rcx,[rbp+0x2370]
0x1401cb00f: call    0x140069710
0x1401cb014: nop     
0x1401cb015: xor     r9d,r9d
0x1401cb018: xor     r8d,r8d
0x1401cb01b: lea     rdx,[rbp+0x2370]
0x1401cb022: lea     rcx,[rip+0x249b747]        # 0x142666770
0x1401cb029: call    0x140af0220
0x1401cb02e: nop     
0x1401cb02f: lea     rcx,[rbp+0x2370]
0x1401cb036: jmp     0x1401cb152
0x1401cb03b: lea     rdx,[rip+0x144f62a]        # 0x14161a66c ; literal='War'
0x1401cb042: lea     rcx,[rbp+0x2390]
0x1401cb049: call    0x140069710
0x1401cb04e: nop     
0x1401cb04f: xor     r9d,r9d
0x1401cb052: xor     r8d,r8d
0x1401cb055: lea     rdx,[rbp+0x2390]
0x1401cb05c: lea     rcx,[rip+0x249b70d]        # 0x142666770
0x1401cb063: call    0x140af0220
0x1401cb068: nop     
0x1401cb069: lea     rcx,[rbp+0x2390]
0x1401cb070: jmp     0x1401cb152
0x1401cb075: lea     rdx,[rip+0x144f8ec]        # 0x14161a968 ; literal='They offer tribute'
0x1401cb07c: lea     rcx,[rbp+0x23b0]
0x1401cb083: call    0x140069710
0x1401cb088: nop     
0x1401cb089: xor     r9d,r9d
0x1401cb08c: xor     r8d,r8d
0x1401cb08f: lea     rdx,[rbp+0x23b0]
0x1401cb096: lea     rcx,[rip+0x249b6d3]        # 0x142666770
0x1401cb09d: call    0x140af0220
0x1401cb0a2: nop     
0x1401cb0a3: lea     rcx,[rbp+0x23b0]
0x1401cb0aa: jmp     0x1401cb152
0x1401cb0af: lea     rdx,[rip+0x144f8ca]        # 0x14161a980 ; literal='They accept tribute'
0x1401cb0b6: lea     rcx,[rbp+0x23d0]
0x1401cb0bd: call    0x140069710
0x1401cb0c2: nop     
0x1401cb0c3: xor     r9d,r9d
0x1401cb0c6: xor     r8d,r8d
0x1401cb0c9: lea     rdx,[rbp+0x23d0]
0x1401cb0d0: lea     rcx,[rip+0x249b699]        # 0x142666770
0x1401cb0d7: call    0x140af0220
0x1401cb0dc: nop     
0x1401cb0dd: lea     rcx,[rbp+0x23d0]
0x1401cb0e4: jmp     0x1401cb152
0x1401cb0e6: lea     rdx,[rip+0x144f8ab]        # 0x14161a998 ; literal='Skirmishing'
0x1401cb0ed: lea     rcx,[rbp+0x23f0]
0x1401cb0f4: call    0x140069710
0x1401cb0f9: nop     
0x1401cb0fa: xor     r9d,r9d
0x1401cb0fd: xor     r8d,r8d
0x1401cb100: lea     rdx,[rbp+0x23f0]
0x1401cb107: lea     rcx,[rip+0x249b662]        # 0x142666770
0x1401cb10e: call    0x140af0220
0x1401cb113: nop     
0x1401cb114: lea     rcx,[rbp+0x23f0]
0x1401cb11b: jmp     0x1401cb152
0x1401cb11d: lea     rdx,[rip+0x144f834]        # 0x14161a958 ; literal='No contact'
0x1401cb124: lea     rcx,[rbp+0x2410]
0x1401cb12b: call    0x140069710
0x1401cb130: nop     
0x1401cb131: xor     r9d,r9d
0x1401cb134: xor     r8d,r8d
0x1401cb137: lea     rdx,[rbp+0x2410]
0x1401cb13e: lea     rcx,[rip+0x249b62b]        # 0x142666770
0x1401cb145: call    0x140af0220
0x1401cb14a: nop     
0x1401cb14b: lea     rcx,[rbp+0x2410]
0x1401cb152: call    0x1400693f0
0x1401cb157: movsxd  rax,DWORD PTR [rsp+0x70]
0x1401cb15c: mov     r15d,eax
0x1401cb15f: cmp     eax,r12d
0x1401cb162: jg      0x1401cb1dd
0x1401cb164: mov     r13,rax
0x1401cb167: movsxd  rax,r12d
0x1401cb16a: mov     r14,r13
0x1401cb16d: lea     r12,[rip+0x249d0f4]        # 0x142668268
0x1401cb174: mov     rsi,rax
0x1401cb177: nop     WORD PTR [rax+rax*1+0x0]
0x1401cb180: mov     edi,0x1
0x1401cb185: lea     rbx,[rip+0x249d0d0]        # 0x14266825c
0x1401cb18c: nop     DWORD PTR [rax+0x0]
0x1401cb190: mov     r8d,r15d
0x1401cb193: mov     edx,edi
0x1401cb195: lea     rcx,[rip+0x249b5d4]        # 0x142666770
0x1401cb19c: call    0x1400bc6e0
0x1401cb1a1: cmp     r14,r13
0x1401cb1a4: jne     0x1401cb1ab
0x1401cb1a6: mov     edx,DWORD PTR [rbx-0x18]
0x1401cb1a9: jmp     0x1401cb1b7
0x1401cb1ab: cmp     r14,rsi
0x1401cb1ae: jne     0x1401cb1b4
0x1401cb1b0: mov     edx,DWORD PTR [rbx]
0x1401cb1b2: jmp     0x1401cb1b7
0x1401cb1b4: mov     edx,DWORD PTR [rbx-0xc]
0x1401cb1b7: lea     rcx,[rip+0x249b5b2]        # 0x142666770
0x1401cb1be: call    0x140af1390
0x1401cb1c3: inc     edi
0x1401cb1c5: add     rbx,0x4
0x1401cb1c9: cmp     rbx,r12
0x1401cb1cc: jl      0x1401cb190
0x1401cb1ce: inc     r15d
0x1401cb1d1: inc     r14
0x1401cb1d4: cmp     r15d,DWORD PTR [rbp-0x58]
0x1401cb1d8: jle     0x1401cb180
0x1401cb1da: mov     esi,DWORD PTR [rbp-0x20]
0x1401cb1dd: xor     r8d,r8d
0x1401cb1e0: mov     edx,0x7
0x1401cb1e5: mov     r9b,0x1
0x1401cb1e8: lea     rcx,[rip+0x249b581]        # 0x142666770
0x1401cb1ef: call    0x1400bc6f0
0x1401cb1f4: mov     r8d,DWORD PTR [rsp+0x70]
0x1401cb1f9: add     r8d,0x2
0x1401cb1fd: mov     edx,0x2
0x1401cb202: lea     rcx,[rip+0x249b567]        # 0x142666770
0x1401cb209: call    0x1400bc6e0
0x1401cb20e: lea     rdx,[rip+0x144a067]        # 0x14161527c ; literal='Cancel'
0x1401cb215: lea     rcx,[rbp+0x2430]
0x1401cb21c: call    0x140069710
0x1401cb221: nop     
0x1401cb222: xor     r9d,r9d
0x1401cb225: xor     r8d,r8d
0x1401cb228: lea     rdx,[rbp+0x2430]
0x1401cb22f: lea     rcx,[rip+0x249b53a]        # 0x142666770
0x1401cb236: call    0x140af0220
0x1401cb23b: nop     
0x1401cb23c: lea     rcx,[rbp+0x2430]
0x1401cb243: call    0x1400693f0
0x1401cb248: add     esi,0x2
0x1401cb24b: mov     edi,DWORD PTR [rsp+0x74]
0x1401cb24f: add     edi,0xfffffffe
0x1401cb252: mov     r15d,0x7
0x1401cb258: mov     r14,QWORD PTR [rsp+0x78]
0x1401cb25d: add     r14,0x2e4
0x1401cb264: xor     ebx,ebx
0x1401cb266: cmp     DWORD PTR [r14],0x1
0x1401cb26a: je      0x1401cb8e7
0x1401cb270: mov     ebx,esi
0x1401cb272: cmp     esi,edi
0x1401cb274: jg      0x1401cb3c1
0x1401cb27a: nop     WORD PTR [rax+rax*1+0x0]
0x1401cb280: mov     r8d,ebx
0x1401cb283: lea     edx,[r15-0x2]
0x1401cb287: lea     rcx,[rip+0x249b4e2]        # 0x142666770
0x1401cb28e: call    0x1400bc6e0
0x1401cb293: cmp     DWORD PTR [r14],0x0
0x1401cb297: je      0x1401cb2c0
0x1401cb299: cmp     ebx,esi
0x1401cb29b: jne     0x1401cb2a5
0x1401cb29d: mov     edx,DWORD PTR [rip+0x249cfa1]        # 0x142668244
0x1401cb2a3: jmp     0x1401cb2dc
0x1401cb2a5: lea     rcx,[rip+0x249b4c4]        # 0x142666770
0x1401cb2ac: cmp     ebx,edi
0x1401cb2ae: jne     0x1401cb2b8
0x1401cb2b0: mov     edx,DWORD PTR [rip+0x249cfa6]        # 0x14266825c
0x1401cb2b6: jmp     0x1401cb2e3
0x1401cb2b8: mov     edx,DWORD PTR [rip+0x249cf92]        # 0x142668250
0x1401cb2be: jmp     0x1401cb2e3
0x1401cb2c0: cmp     ebx,esi
0x1401cb2c2: jne     0x1401cb2cc
0x1401cb2c4: mov     edx,DWORD PTR [rip+0x249cf32]        # 0x1426681fc
0x1401cb2ca: jmp     0x1401cb2dc
0x1401cb2cc: cmp     ebx,edi
0x1401cb2ce: mov     edx,DWORD PTR [rip+0x249cf40]        # 0x142668214
0x1401cb2d4: je      0x1401cb2dc
0x1401cb2d6: mov     edx,DWORD PTR [rip+0x249cf2c]        # 0x142668208
0x1401cb2dc: lea     rcx,[rip+0x249b48d]        # 0x142666770
0x1401cb2e3: call    0x140af1390
0x1401cb2e8: mov     r8d,ebx
0x1401cb2eb: lea     edx,[r15-0x1]
0x1401cb2ef: lea     rcx,[rip+0x249b47a]        # 0x142666770
0x1401cb2f6: call    0x1400bc6e0
0x1401cb2fb: cmp     DWORD PTR [r14],0x0
0x1401cb2ff: je      0x1401cb328
0x1401cb301: cmp     ebx,esi
0x1401cb303: jne     0x1401cb30d
0x1401cb305: mov     edx,DWORD PTR [rip+0x249cf3d]        # 0x142668248
0x1401cb30b: jmp     0x1401cb344
0x1401cb30d: lea     rcx,[rip+0x249b45c]        # 0x142666770
0x1401cb314: cmp     ebx,edi
0x1401cb316: jne     0x1401cb320
0x1401cb318: mov     edx,DWORD PTR [rip+0x249cf42]        # 0x142668260
0x1401cb31e: jmp     0x1401cb34b
0x1401cb320: mov     edx,DWORD PTR [rip+0x249cf2e]        # 0x142668254
0x1401cb326: jmp     0x1401cb34b
0x1401cb328: cmp     ebx,esi
0x1401cb32a: jne     0x1401cb334
0x1401cb32c: mov     edx,DWORD PTR [rip+0x249cece]        # 0x142668200
0x1401cb332: jmp     0x1401cb344
0x1401cb334: cmp     ebx,edi
0x1401cb336: mov     edx,DWORD PTR [rip+0x249cedc]        # 0x142668218
0x1401cb33c: je      0x1401cb344
0x1401cb33e: mov     edx,DWORD PTR [rip+0x249cec8]        # 0x14266820c
0x1401cb344: lea     rcx,[rip+0x249b425]        # 0x142666770
0x1401cb34b: call    0x140af1390
0x1401cb350: mov     r8d,ebx
0x1401cb353: mov     edx,r15d
0x1401cb356: lea     rcx,[rip+0x249b413]        # 0x142666770
0x1401cb35d: call    0x1400bc6e0
0x1401cb362: cmp     DWORD PTR [r14],0x0
0x1401cb366: je      0x1401cb38f
0x1401cb368: cmp     ebx,esi
0x1401cb36a: jne     0x1401cb374
0x1401cb36c: mov     edx,DWORD PTR [rip+0x249ceda]        # 0x14266824c
0x1401cb372: jmp     0x1401cb3ab
0x1401cb374: lea     rcx,[rip+0x249b3f5]        # 0x142666770
0x1401cb37b: cmp     ebx,edi
0x1401cb37d: jne     0x1401cb387
0x1401cb37f: mov     edx,DWORD PTR [rip+0x249cedf]        # 0x142668264
0x1401cb385: jmp     0x1401cb3b2
0x1401cb387: mov     edx,DWORD PTR [rip+0x249cecb]        # 0x142668258
0x1401cb38d: jmp     0x1401cb3b2
0x1401cb38f: cmp     ebx,esi
0x1401cb391: jne     0x1401cb39b
0x1401cb393: mov     edx,DWORD PTR [rip+0x249ce6b]        # 0x142668204
0x1401cb399: jmp     0x1401cb3ab
0x1401cb39b: cmp     ebx,edi
0x1401cb39d: mov     edx,DWORD PTR [rip+0x249ce79]        # 0x14266821c
0x1401cb3a3: je      0x1401cb3ab
0x1401cb3a5: mov     edx,DWORD PTR [rip+0x249ce65]        # 0x142668210
0x1401cb3ab: lea     rcx,[rip+0x249b3be]        # 0x142666770
0x1401cb3b2: call    0x140af1390
0x1401cb3b7: inc     ebx
0x1401cb3b9: cmp     ebx,edi
0x1401cb3bb: jle     0x1401cb280
0x1401cb3c1: xor     r8d,r8d
0x1401cb3c4: lea     rcx,[rip+0x249b3a5]        # 0x142666770
0x1401cb3cb: cmp     DWORD PTR [r14],r8d
0x1401cb3ce: je      0x1401cb3d7
0x1401cb3d0: xor     edx,edx
0x1401cb3d2: xor     r9d,r9d
0x1401cb3d5: jmp     0x1401cb3df
0x1401cb3d7: mov     edx,0x7
0x1401cb3dc: mov     r9b,0x1
0x1401cb3df: call    0x1400bc6f0
0x1401cb3e4: lea     r8d,[rsi+0x2]
0x1401cb3e8: lea     edx,[r15-0x1]
0x1401cb3ec: lea     rcx,[rip+0x249b37d]        # 0x142666770
0x1401cb3f3: call    0x1400bc6e0
0x1401cb3f8: mov     rbx,QWORD PTR [rbp-0x78]
0x1401cb3fc: cmp     ebx,0x2
0x1401cb3ff: je      0x1401cb47d
0x1401cb401: cmp     ebx,0x13
0x1401cb404: je      0x1401cb446
0x1401cb406: cmp     ebx,0x19
0x1401cb409: jne     0x1401cb4b7
0x1401cb40f: lea     rdx,[rip+0x144edfa]        # 0x14161a210 ; literal='Diplomacy'
0x1401cb416: lea     rcx,[rbp+0x2450]
0x1401cb41d: call    0x140069710
0x1401cb422: nop     
0x1401cb423: xor     r9d,r9d
0x1401cb426: xor     r8d,r8d
0x1401cb429: lea     rdx,[rbp+0x2450]
0x1401cb430: lea     rcx,[rip+0x249b339]        # 0x142666770
0x1401cb437: call    0x140af0220
0x1401cb43c: nop     
0x1401cb43d: lea     rcx,[rbp+0x2450]
0x1401cb444: jmp     0x1401cb4b2
0x1401cb446: lea     rdx,[rip+0x144f793]        # 0x14161abe0 ; literal='Request workers'
0x1401cb44d: lea     rcx,[rbp+0x2470]
0x1401cb454: call    0x140069710
0x1401cb459: nop     
0x1401cb45a: xor     r9d,r9d
0x1401cb45d: xor     r8d,r8d
0x1401cb460: lea     rdx,[rbp+0x2470]
0x1401cb467: lea     rcx,[rip+0x249b302]        # 0x142666770
0x1401cb46e: call    0x140af0220
0x1401cb473: nop     
0x1401cb474: lea     rcx,[rbp+0x2470]
0x1401cb47b: jmp     0x1401cb4b2
0x1401cb47d: lea     rdx,[rip+0x144f76c]        # 0x14161abf0 ; literal='Attack'
0x1401cb484: lea     rcx,[rbp+0x2490]
0x1401cb48b: call    0x140069710
0x1401cb490: nop     
0x1401cb491: xor     r9d,r9d
0x1401cb494: xor     r8d,r8d
0x1401cb497: lea     rdx,[rbp+0x2490]
0x1401cb49e: lea     rcx,[rip+0x249b2cb]        # 0x142666770
0x1401cb4a5: call    0x140af0220
0x1401cb4aa: nop     
0x1401cb4ab: lea     rcx,[rbp+0x2490]
0x1401cb4b2: call    0x1400693f0
0x1401cb4b7: cmp     DWORD PTR [r14],0x0
0x1401cb4bb: je      0x1401cb8e3
0x1401cb4c1: xor     r8d,r8d
0x1401cb4c4: mov     edx,0x6
0x1401cb4c9: mov     r9b,0x1
0x1401cb4cc: lea     rcx,[rip+0x249b29d]        # 0x142666770
0x1401cb4d3: call    0x1400bc6f0
0x1401cb4d8: lea     r8d,[rsi+0x3]
0x1401cb4dc: mov     edx,r15d
0x1401cb4df: lea     rcx,[rip+0x249b28a]        # 0x142666770
0x1401cb4e6: call    0x1400bc6e0
0x1401cb4eb: mov     eax,DWORD PTR [r14]
0x1401cb4ee: add     eax,0xfffffffd
0x1401cb4f1: cmp     eax,0x11
0x1401cb4f4: ja      0x1401cb8e3
0x1401cb4fa: cdqe    
0x1401cb4fc: lea     rdx,[rip+0xffffffffffe34afd]        # 0x140000000
0x1401cb503: mov     ecx,DWORD PTR [rdx+rax*4+0x1d658c]
0x1401cb50a: add     rcx,rdx
0x1401cb50d: jmp     rcx
0x1401cb50f: lea     rdx,[rip+0x144f6e2]        # 0x14161abf8 ; literal='Belongs to your civilization'
0x1401cb516: lea     rcx,[rbp+0x24b0]
0x1401cb51d: call    0x140069710
0x1401cb522: nop     
0x1401cb523: xor     r9d,r9d
0x1401cb526: xor     r8d,r8d
0x1401cb529: lea     rdx,[rbp+0x24b0]
0x1401cb530: lea     rcx,[rip+0x249b239]        # 0x142666770
0x1401cb537: call    0x140af0220
0x1401cb53c: nop     
0x1401cb53d: lea     rcx,[rbp+0x24b0]
0x1401cb544: jmp     0x1401cb8de
0x1401cb549: lea     rdx,[rip+0x144f6c8]        # 0x14161ac18 ; literal='Not under your control'
0x1401cb550: lea     rcx,[rbp+0x24d0]
0x1401cb557: call    0x140069710
0x1401cb55c: nop     
0x1401cb55d: xor     r9d,r9d
0x1401cb560: xor     r8d,r8d
0x1401cb563: lea     rdx,[rbp+0x24d0]
0x1401cb56a: lea     rcx,[rip+0x249b1ff]        # 0x142666770
0x1401cb571: call    0x140af0220
0x1401cb576: nop     
0x1401cb577: lea     rcx,[rbp+0x24d0]
0x1401cb57e: jmp     0x1401cb8de
0x1401cb583: lea     rdx,[rip+0x144f6a6]        # 0x14161ac30 ; literal='No civilized inhabitants'
0x1401cb58a: lea     rcx,[rbp+0x24f0]
0x1401cb591: call    0x140069710
0x1401cb596: nop     
0x1401cb597: xor     r9d,r9d
0x1401cb59a: xor     r8d,r8d
0x1401cb59d: lea     rdx,[rbp+0x24f0]
0x1401cb5a4: lea     rcx,[rip+0x249b1c5]        # 0x142666770
0x1401cb5ab: call    0x140af0220
0x1401cb5b0: nop     
0x1401cb5b1: lea     rcx,[rbp+0x24f0]
0x1401cb5b8: jmp     0x1401cb8de
0x1401cb5bd: lea     rdx,[rip+0x144f68c]        # 0x14161ac50 ; literal='No requestable workers'
0x1401cb5c4: lea     rcx,[rbp+0x2510]
0x1401cb5cb: call    0x140069710
0x1401cb5d0: nop     
0x1401cb5d1: xor     r9d,r9d
0x1401cb5d4: xor     r8d,r8d
0x1401cb5d7: lea     rdx,[rbp+0x2510]
0x1401cb5de: lea     rcx,[rip+0x249b18b]        # 0x142666770
0x1401cb5e5: call    0x140af0220
0x1401cb5ea: nop     
0x1401cb5eb: lea     rcx,[rbp+0x2510]
0x1401cb5f2: jmp     0x1401cb8de
0x1401cb5f7: lea     rdx,[rip+0x144f66a]        # 0x14161ac68 ; literal='Inaccessible'
0x1401cb5fe: lea     rcx,[rbp+0x2530]
0x1401cb605: call    0x140069710
0x1401cb60a: nop     
0x1401cb60b: xor     r9d,r9d
0x1401cb60e: xor     r8d,r8d
0x1401cb611: lea     rdx,[rbp+0x2530]
0x1401cb618: lea     rcx,[rip+0x249b151]        # 0x142666770
0x1401cb61f: call    0x140af0220
0x1401cb624: nop     
0x1401cb625: lea     rcx,[rbp+0x2530]
0x1401cb62c: jmp     0x1401cb8de
0x1401cb631: lea     rdx,[rip+0x144f640]        # 0x14161ac78 ; literal='Need civilization military leader'
0x1401cb638: lea     rcx,[rbp+0x2550]
0x1401cb63f: call    0x140069710
0x1401cb644: nop     
0x1401cb645: xor     r9d,r9d
0x1401cb648: xor     r8d,r8d
0x1401cb64b: lea     rdx,[rbp+0x2550]
0x1401cb652: lea     rcx,[rip+0x249b117]        # 0x142666770
0x1401cb659: call    0x140af0220
0x1401cb65e: nop     
0x1401cb65f: lea     rcx,[rbp+0x2550]
0x1401cb666: jmp     0x1401cb8de
0x1401cb66b: lea     rdx,[rip+0x144f62e]        # 0x14161aca0 ; literal='Need military leader'
0x1401cb672: lea     rcx,[rbp+0x2570]
0x1401cb679: call    0x140069710
0x1401cb67e: nop     
0x1401cb67f: xor     r9d,r9d
0x1401cb682: xor     r8d,r8d
0x1401cb685: lea     rdx,[rbp+0x2570]
0x1401cb68c: lea     rcx,[rip+0x249b0dd]        # 0x142666770
0x1401cb693: call    0x140af0220
0x1401cb698: nop     
0x1401cb699: lea     rcx,[rbp+0x2570]
0x1401cb6a0: jmp     0x1401cb8de
0x1401cb6a5: lea     rdx,[rip+0x144f904]        # 0x14161afb0 ; literal='Need leader'
0x1401cb6ac: lea     rcx,[rbp+0x2590]
0x1401cb6b3: call    0x140069710
0x1401cb6b8: nop     
0x1401cb6b9: xor     r9d,r9d
0x1401cb6bc: xor     r8d,r8d
0x1401cb6bf: lea     rdx,[rbp+0x2590]
0x1401cb6c6: lea     rcx,[rip+0x249b0a3]        # 0x142666770
0x1401cb6cd: call    0x140af0220
0x1401cb6d2: nop     
0x1401cb6d3: lea     rcx,[rbp+0x2590]
0x1401cb6da: jmp     0x1401cb8de
0x1401cb6df: lea     rdx,[rip+0x144f8da]        # 0x14161afc0 ; literal='Not trading'
0x1401cb6e6: lea     rcx,[rbp+0x25b0]
0x1401cb6ed: call    0x140069710
0x1401cb6f2: nop     
0x1401cb6f3: xor     r9d,r9d
0x1401cb6f6: xor     r8d,r8d
0x1401cb6f9: lea     rdx,[rbp+0x25b0]
0x1401cb700: lea     rcx,[rip+0x249b069]        # 0x142666770
0x1401cb707: call    0x140af0220
0x1401cb70c: nop     
0x1401cb70d: lea     rcx,[rbp+0x25b0]
0x1401cb714: jmp     0x1401cb8de
0x1401cb719: lea     rdx,[rip+0x144f8b0]        # 0x14161afd0 ; literal='Already trading'
0x1401cb720: lea     rcx,[rbp+0x25d0]
0x1401cb727: call    0x140069710
0x1401cb72c: nop     
0x1401cb72d: xor     r9d,r9d
0x1401cb730: xor     r8d,r8d
0x1401cb733: lea     rdx,[rbp+0x25d0]
0x1401cb73a: lea     rcx,[rip+0x249b02f]        # 0x142666770
0x1401cb741: call    0x140af0220
0x1401cb746: nop     
0x1401cb747: lea     rcx,[rbp+0x25d0]
0x1401cb74e: jmp     0x1401cb8de
0x1401cb753: lea     rdx,[rip+0x144f886]        # 0x14161afe0 ; literal='Already at war'
0x1401cb75a: lea     rcx,[rbp+0x25f0]
0x1401cb761: call    0x140069710
0x1401cb766: nop     
0x1401cb767: xor     r9d,r9d
0x1401cb76a: xor     r8d,r8d
0x1401cb76d: lea     rdx,[rbp+0x25f0]
0x1401cb774: lea     rcx,[rip+0x249aff5]        # 0x142666770
0x1401cb77b: call    0x140af0220
0x1401cb780: nop     
0x1401cb781: lea     rcx,[rbp+0x25f0]
0x1401cb788: jmp     0x1401cb8de
0x1401cb78d: lea     rdx,[rip+0x144f85c]        # 0x14161aff0 ; literal='Already have peace'
0x1401cb794: lea     rcx,[rbp+0x2610]
0x1401cb79b: call    0x140069710
0x1401cb7a0: nop     
0x1401cb7a1: xor     r9d,r9d
0x1401cb7a4: xor     r8d,r8d
0x1401cb7a7: lea     rdx,[rbp+0x2610]
0x1401cb7ae: lea     rcx,[rip+0x249afbb]        # 0x142666770
0x1401cb7b5: call    0x140af0220
0x1401cb7ba: nop     
0x1401cb7bb: lea     rcx,[rbp+0x2610]
0x1401cb7c2: jmp     0x1401cb8de
0x1401cb7c7: lea     rdx,[rip+0x144f83a]        # 0x14161b008 ; literal='Already have alliance'
0x1401cb7ce: lea     rcx,[rbp+0x2630]
0x1401cb7d5: call    0x140069710
0x1401cb7da: nop     
0x1401cb7db: xor     r9d,r9d
0x1401cb7de: xor     r8d,r8d
0x1401cb7e1: lea     rdx,[rbp+0x2630]
0x1401cb7e8: lea     rcx,[rip+0x249af81]        # 0x142666770
0x1401cb7ef: call    0x140af0220
0x1401cb7f4: nop     
0x1401cb7f5: lea     rcx,[rbp+0x2630]
0x1401cb7fc: jmp     0x1401cb8de
0x1401cb801: lea     rdx,[rip+0x144f818]        # 0x14161b020 ; literal='At war'
0x1401cb808: lea     rcx,[rbp+0x2650]
0x1401cb80f: call    0x140069710
0x1401cb814: nop     
0x1401cb815: xor     r9d,r9d
0x1401cb818: xor     r8d,r8d
0x1401cb81b: lea     rdx,[rbp+0x2650]
0x1401cb822: lea     rcx,[rip+0x249af47]        # 0x142666770
0x1401cb829: call    0x140af0220
0x1401cb82e: nop     
0x1401cb82f: lea     rcx,[rbp+0x2650]
0x1401cb836: jmp     0x1401cb8de
0x1401cb83b: lea     rdx,[rip+0x144f7e6]        # 0x14161b028 ; literal='Cannot communicate'
0x1401cb842: lea     rcx,[rbp+0x2670]
0x1401cb849: call    0x140069710
0x1401cb84e: nop     
0x1401cb84f: xor     r9d,r9d
0x1401cb852: xor     r8d,r8d
0x1401cb855: lea     rdx,[rbp+0x2670]
0x1401cb85c: lea     rcx,[rip+0x249af0d]        # 0x142666770
0x1401cb863: call    0x140af0220
0x1401cb868: nop     
0x1401cb869: lea     rcx,[rbp+0x2670]
0x1401cb870: jmp     0x1401cb8de
0x1401cb872: lea     rdx,[rip+0x144f7c7]        # 0x14161b040 ; literal='Not in contact'
0x1401cb879: lea     rcx,[rbp+0x2690]
0x1401cb880: call    0x140069710
0x1401cb885: nop     
0x1401cb886: xor     r9d,r9d
0x1401cb889: xor     r8d,r8d
0x1401cb88c: lea     rdx,[rbp+0x2690]
0x1401cb893: lea     rcx,[rip+0x249aed6]        # 0x142666770
0x1401cb89a: call    0x140af0220
0x1401cb89f: nop     
0x1401cb8a0: lea     rcx,[rbp+0x2690]
0x1401cb8a7: jmp     0x1401cb8de
0x1401cb8a9: lea     rdx,[rip+0x144f7a0]        # 0x14161b050 ; literal='Too hostile'
0x1401cb8b0: lea     rcx,[rbp+0x26b0]
0x1401cb8b7: call    0x140069710
0x1401cb8bc: nop     
0x1401cb8bd: xor     r9d,r9d
0x1401cb8c0: xor     r8d,r8d
0x1401cb8c3: lea     rdx,[rbp+0x26b0]
0x1401cb8ca: lea     rcx,[rip+0x249ae9f]        # 0x142666770
0x1401cb8d1: call    0x140af0220
0x1401cb8d6: nop     
0x1401cb8d7: lea     rcx,[rbp+0x26b0]
0x1401cb8de: call    0x1400693f0
0x1401cb8e3: add     r15d,0x3
0x1401cb8e7: inc     ebx
0x1401cb8e9: mov     QWORD PTR [rbp-0x78],rbx
0x1401cb8ed: add     r14,0x4
0x1401cb8f1: cmp     ebx,0x1a
0x1401cb8f4: jl      0x1401cb266
0x1401cb8fa: lea     rcx,[rbp+0x1410]
0x1401cb901: call    0x1400693f0
0x1401cb906: nop     
0x1401cb907: lea     rcx,[rbp+0xf10]
0x1401cb90e: jmp     0x1401c8d5e
0x1401cb913: mov     r13d,DWORD PTR [rbp-0x18]
0x1401cb917: mov     DWORD PTR [rbp-0x20],r13d
0x1401cb91b: lea     ebx,[r13-0x37]
0x1401cb91f: mov     DWORD PTR [rbp-0x60],ebx
0x1401cb922: lea     ecx,[rbx-0x2]
0x1401cb925: mov     DWORD PTR [rbp-0x48],ecx
0x1401cb928: mov     eax,DWORD PTR [rip+0x221e1da]        # 0x1423e9b08
0x1401cb92e: dec     eax
0x1401cb930: mov     DWORD PTR [rbp-0x70],eax
0x1401cb933: lea     r15d,[r13-0xb]
0x1401cb937: mov     DWORD PTR [rsp+0x70],r15d
0x1401cb93c: lea     r12d,[r13-0x1]
0x1401cb940: mov     DWORD PTR [rbp-0x58],r12d
0x1401cb944: mov     edi,r13d
0x1401cb947: mov     r14d,esi
0x1401cb94a: cmp     eax,0x2a
0x1401cb94d: jle     0x1401cb959
0x1401cb94f: mov     eax,0x2a
0x1401cb954: mov     DWORD PTR [rbp-0x70],eax
0x1401cb957: jmp     0x1401cb970
0x1401cb959: mov     DWORD PTR [rsp+0x70],r15d
0x1401cb95e: mov     DWORD PTR [rbp-0x58],r12d
0x1401cb962: test    eax,eax
0x1401cb964: js      0x1401cba55
0x1401cb96a: nop     WORD PTR [rax+rax*1+0x0]
0x1401cb970: mov     ebx,ecx
0x1401cb972: cmp     ecx,edi
0x1401cb974: jg      0x1401cba37
0x1401cb97a: movsxd  r15,eax
0x1401cb97d: mov     r12d,DWORD PTR [rbp-0x48]
0x1401cb981: mov     r8d,ebx
0x1401cb984: mov     edx,r14d
0x1401cb987: lea     rcx,[rip+0x249ade2]        # 0x142666770
0x1401cb98e: call    0x1400bc6e0
0x1401cb993: xor     r8d,r8d
0x1401cb996: xor     edx,edx
0x1401cb998: lea     rcx,[rip+0x249add1]        # 0x142666770
0x1401cb99f: call    0x1400bc750
0x1401cb9a4: test    rsi,rsi
0x1401cb9a7: jne     0x1401cb9d1
0x1401cb9a9: cmp     ebx,r12d
0x1401cb9ac: jne     0x1401cb9b6
0x1401cb9ae: mov     edx,DWORD PTR [rip+0x249c6e0]        # 0x142668094
0x1401cb9b4: jmp     0x1401cba1b
0x1401cb9b6: lea     rcx,[rip+0x249adb3]        # 0x142666770
0x1401cb9bd: cmp     ebx,edi
0x1401cb9bf: jne     0x1401cb9c9
0x1401cb9c1: mov     edx,DWORD PTR [rip+0x249c6e5]        # 0x1426680ac
0x1401cb9c7: jmp     0x1401cba22
0x1401cb9c9: mov     edx,DWORD PTR [rip+0x249c6d1]        # 0x1426680a0
0x1401cb9cf: jmp     0x1401cba22
0x1401cb9d1: cmp     rsi,r15
0x1401cb9d4: jne     0x1401cb9fe
0x1401cb9d6: cmp     ebx,r12d
0x1401cb9d9: jne     0x1401cb9e3
0x1401cb9db: mov     edx,DWORD PTR [rip+0x249c6bb]        # 0x14266809c
0x1401cb9e1: jmp     0x1401cba1b
0x1401cb9e3: lea     rcx,[rip+0x249ad86]        # 0x142666770
0x1401cb9ea: cmp     ebx,edi
0x1401cb9ec: jne     0x1401cb9f6
0x1401cb9ee: mov     edx,DWORD PTR [rip+0x249c6c0]        # 0x1426680b4
0x1401cb9f4: jmp     0x1401cba22
0x1401cb9f6: mov     edx,DWORD PTR [rip+0x249c6ac]        # 0x1426680a8
0x1401cb9fc: jmp     0x1401cba22
0x1401cb9fe: cmp     ebx,r12d
0x1401cba01: jne     0x1401cba0b
0x1401cba03: mov     edx,DWORD PTR [rip+0x249c68f]        # 0x142668098
0x1401cba09: jmp     0x1401cba1b
0x1401cba0b: cmp     ebx,edi
0x1401cba0d: mov     edx,DWORD PTR [rip+0x249c69d]        # 0x1426680b0
0x1401cba13: je      0x1401cba1b
0x1401cba15: mov     edx,DWORD PTR [rip+0x249c689]        # 0x1426680a4
0x1401cba1b: lea     rcx,[rip+0x249ad4e]        # 0x142666770
0x1401cba22: call    0x140af1390
0x1401cba27: inc     ebx
0x1401cba29: cmp     ebx,edi
0x1401cba2b: jle     0x1401cb981
0x1401cba31: mov     ecx,r12d
0x1401cba34: mov     eax,DWORD PTR [rbp-0x70]
0x1401cba37: inc     r14d
0x1401cba3a: inc     rsi
0x1401cba3d: cmp     r14d,eax
0x1401cba40: jle     0x1401cb970
0x1401cba46: mov     r12d,DWORD PTR [rbp-0x58]
0x1401cba4a: mov     r15d,DWORD PTR [rsp+0x70]
0x1401cba4f: lea     ebx,[r13-0x37]
0x1401cba53: xor     esi,esi
0x1401cba55: mov     rax,QWORD PTR [rsp+0x78]
0x1401cba5a: lea     rcx,[rax+0x2b8]
0x1401cba61: movsxd  rdx,DWORD PTR [rax+0x2d8]
0x1401cba68: call    0x1400707e0
0x1401cba6d: mov     r14,QWORD PTR [rax]
0x1401cba70: mov     QWORD PTR [rbp-0x78],r14
0x1401cba74: xor     r8d,r8d
0x1401cba77: mov     edx,0x3
0x1401cba7c: mov     r9b,0x1
0x1401cba7f: lea     rcx,[rip+0x249acea]        # 0x142666770
0x1401cba86: call    0x1400bc6f0
0x1401cba8b: lea     rcx,[rbp+0xd30]
0x1401cba92: call    0x140070c50
0x1401cba97: nop     
0x1401cba98: mov     rcx,r14
0x1401cba9b: call    0x1400766d0
0x1401cbaa0: mov     edi,0x1
0x1401cbaa5: sub     eax,0x2
0x1401cbaa8: je      0x1401cbb89
0x1401cbaae: sub     eax,0xf
0x1401cbab1: je      0x1401cbb51
0x1401cbab7: sub     eax,edi
0x1401cbab9: je      0x1401cbaff
0x1401cbabb: sub     eax,edi
0x1401cbabd: je      0x1401cbaf3
0x1401cbabf: cmp     eax,0x6
0x1401cbac2: jne     0x1401cbc0e
0x1401cbac8: lea     rdx,[rbp+0xd30]
0x1401cbacf: mov     rcx,QWORD PTR [r14+0x130]
0x1401cbad6: call    0x1401bdb90
0x1401cbadb: lea     rdx,[rip+0x144d2ea]        # 0x141618dcc ; literal=' at '
0x1401cbae2: lea     rcx,[rbp+0xd30]
0x1401cbae9: call    0x140070b20
0x1401cbaee: jmp     0x1401cbbf4
0x1401cbaf3: lea     rdx,[rip+0x144f216]        # 0x14161ad10 ; literal='Request workers from '
0x1401cbafa: jmp     0x1401cbbe8
0x1401cbaff: lea     rdx,[rip+0x14389f2]        # 0x1416044f8 ; literal='Rescue '
0x1401cbb06: lea     rcx,[rbp+0xd30]
0x1401cbb0d: call    0x140070b40
0x1401cbb12: lea     rcx,[rbp+0x670]
0x1401cbb19: call    0x140073640
0x1401cbb1e: mov     r8,QWORD PTR [r14+0x130]
0x1401cbb25: mov     WORD PTR [rsp+0x28],di
0x1401cbb2a: mov     WORD PTR [rsp+0x20],di
0x1401cbb2f: lea     r9,[rbp+0x670]
0x1401cbb36: mov     r8d,DWORD PTR [r8]
0x1401cbb39: lea     rdx,[rbp+0xd30]
0x1401cbb40: lea     rcx,[rip+0x234a4f1]        # 0x142516038
0x1401cbb47: call    0x140ba79f0
0x1401cbb4c: jmp     0x1401cbc0e
0x1401cbb51: lea     rdx,[rip+0x144f230]        # 0x14161ad88 ; literal='Recover '
0x1401cbb58: lea     rcx,[rbp+0xd30]
0x1401cbb5f: call    0x140070b40
0x1401cbb64: mov     r8,QWORD PTR [r14+0x130]
0x1401cbb6b: xor     r9d,r9d
0x1401cbb6e: mov     r8d,DWORD PTR [r8]
0x1401cbb71: lea     rdx,[rbp+0xd30]
0x1401cbb78: lea     rcx,[rip+0x234a4b9]        # 0x142516038
0x1401cbb7f: call    0x140ba8ee0
0x1401cbb84: jmp     0x1401cbc0e
0x1401cbb89: mov     rax,QWORD PTR [r14+0x130]
0x1401cbb90: movsxd  rcx,DWORD PTR [rax]
0x1401cbb93: cmp     ecx,0x6
0x1401cbb96: ja      0x1401cbbe1
0x1401cbb98: lea     rdx,[rip+0xffffffffffe34461]        # 0x140000000
0x1401cbb9f: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d65d4]
0x1401cbba6: add     rcx,rdx
0x1401cbba9: jmp     rcx
0x1401cbbab: lea     rdx,[rip+0x144f176]        # 0x14161ad28 ; literal='Explore '
0x1401cbbb2: jmp     0x1401cbbe8
0x1401cbbb4: lea     rdx,[rip+0x144f17d]        # 0x14161ad38 ; literal='Pillage '
0x1401cbbbb: jmp     0x1401cbbe8
0x1401cbbbd: lea     rdx,[rip+0x144f184]        # 0x14161ad48 ; literal='Demand tribute from '
0x1401cbbc4: jmp     0x1401cbbe8
0x1401cbbc6: lea     rdx,[rip+0x144f193]        # 0x14161ad60 ; literal='Raze '
0x1401cbbcd: jmp     0x1401cbbe8
0x1401cbbcf: lea     rdx,[rip+0x144f192]        # 0x14161ad68 ; literal='Take over '
0x1401cbbd6: jmp     0x1401cbbe8
0x1401cbbd8: lea     rdx,[rip+0x144f195]        # 0x14161ad74 ; literal='Seize '
0x1401cbbdf: jmp     0x1401cbbe8
0x1401cbbe1: lea     rdx,[rip+0x144f194]        # 0x14161ad7c ; literal='Raid '
0x1401cbbe8: lea     rcx,[rbp+0xd30]
0x1401cbbef: call    0x140070b40
0x1401cbbf4: xor     r9d,r9d
0x1401cbbf7: mov     r8d,DWORD PTR [r14+0x8]
0x1401cbbfb: lea     rdx,[rbp+0xd30]
0x1401cbc02: lea     rcx,[rip+0x234a42f]        # 0x142516038
0x1401cbc09: call    0x140ba8410
0x1401cbc0e: mov     r8d,ebx
0x1401cbc11: mov     edx,edi
0x1401cbc13: lea     rcx,[rip+0x249ab56]        # 0x142666770
0x1401cbc1a: call    0x1400bc6e0
0x1401cbc1f: lea     rcx,[rbp+0xd30]
0x1401cbc26: call    0x1400708f0
0x1401cbc2b: xor     r9d,r9d
0x1401cbc2e: xor     r8d,r8d
0x1401cbc31: lea     rdx,[rbp+0xd30]
0x1401cbc38: lea     rcx,[rip+0x249ab31]        # 0x142666770
0x1401cbc3f: call    0x140af0220
0x1401cbc44: mov     rcx,r14
0x1401cbc47: call    0x1400766d0
0x1401cbc4c: cmp     eax,0x13
0x1401cbc4f: je      0x1401cbf3a
0x1401cbc55: cmp     eax,0x19
0x1401cbc58: je      0x1401cbf3a
0x1401cbc5e: mov     edi,esi
0x1401cbc60: lea     rdx,[rbp+0x98]
0x1401cbc67: lea     rcx,[r14+0x80]
0x1401cbc6e: call    0x140070800
0x1401cbc73: lea     rdx,[rbp+0x148]
0x1401cbc7a: lea     rcx,[r14+0x80]
0x1401cbc81: call    0x1400707f0
0x1401cbc86: lea     r8,[rbp+0x148]
0x1401cbc8d: lea     rdx,[rbp+0x10]
0x1401cbc91: lea     rcx,[rbp+0x98]
0x1401cbc98: call    0x1400703e0
0x1401cbc9d: mov     BYTE PTR [rbp-0x80],0x0
0x1401cbca1: xor     edx,edx
0x1401cbca3: movzx   ecx,BYTE PTR [rax]
0x1401cbca6: call    0x140066d70
0x1401cbcab: test    al,al
0x1401cbcad: je      0x1401cbd74
0x1401cbcb3: lea     rcx,[rbp+0x98]
0x1401cbcba: call    0x1400703d0
0x1401cbcbf: mov     edx,DWORD PTR [rax]
0x1401cbcc1: lea     rcx,[rip+0x2333e78]        # 0x1424ffb40
0x1401cbcc8: call    0x140076ac0
0x1401cbccd: mov     BYTE PTR [rbp-0x80],0x0
0x1401cbcd1: test    rax,rax
0x1401cbcd4: je      0x1401cbd3f
0x1401cbcd6: lea     rbx,[rax+0xa0]
0x1401cbcdd: mov     BYTE PTR [rbp-0x80],0x0
0x1401cbce1: mov     rcx,rbx
0x1401cbce4: call    0x140070410
0x1401cbce9: test    rax,rax
0x1401cbcec: je      0x1401cbd3f
0x1401cbcee: xor     edx,edx
0x1401cbcf0: mov     rcx,rbx
0x1401cbcf3: call    0x1400707e0
0x1401cbcf8: mov     BYTE PTR [rbp-0x80],0x0
0x1401cbcfc: mov     rax,QWORD PTR [rax]
0x1401cbcff: cmp     DWORD PTR [rax],0xffffffff
0x1401cbd02: je      0x1401cbd3f
0x1401cbd04: xor     edx,edx
0x1401cbd06: mov     rcx,rbx
0x1401cbd09: call    0x1400707e0
0x1401cbd0e: mov     rdx,QWORD PTR [rax]
0x1401cbd11: mov     edx,DWORD PTR [rdx]
0x1401cbd13: lea     rcx,[rip+0x2235716]        # 0x142401430
0x1401cbd1a: call    0x1413e0200
0x1401cbd1f: test    rax,rax
0x1401cbd22: je      0x1401cbd39
0x1401cbd24: mov     eax,DWORD PTR [rax+0x110]
0x1401cbd2a: test    eax,0x102
0x1401cbd2f: jne     0x1401cbd39
0x1401cbd31: test    eax,eax
0x1401cbd33: jns     0x1401cbd39
0x1401cbd35: inc     edi
0x1401cbd37: jmp     0x1401cbd3b
0x1401cbd39: inc     esi
0x1401cbd3b: mov     BYTE PTR [rbp-0x80],0x0
0x1401cbd3f: lea     rcx,[rbp+0x98]
0x1401cbd46: call    0x140070910
0x1401cbd4b: lea     r8,[rbp+0x148]
0x1401cbd52: lea     rdx,[rbp+0x10]
0x1401cbd56: lea     rcx,[rbp+0x98]
0x1401cbd5d: call    0x1400703e0
0x1401cbd62: xor     edx,edx
0x1401cbd64: movzx   ecx,BYTE PTR [rax]
0x1401cbd67: call    0x140066d70
0x1401cbd6c: test    al,al
0x1401cbd6e: jne     0x1401cbcb3
0x1401cbd74: lea     r8d,[r13-0x37]
0x1401cbd78: mov     edx,0x2
0x1401cbd7d: lea     rcx,[rip+0x249a9ec]        # 0x142666770
0x1401cbd84: call    0x1400bc6e0
0x1401cbd89: lea     eax,[rsi+rdi*1]
0x1401cbd8c: test    eax,eax
0x1401cbd8e: jne     0x1401cbde1
0x1401cbd90: xor     r8d,r8d
0x1401cbd93: mov     edx,0x7
0x1401cbd98: xor     r9d,r9d
0x1401cbd9b: lea     rcx,[rip+0x249a9ce]        # 0x142666770
0x1401cbda2: call    0x1400bc6f0
0x1401cbda7: lea     rdx,[rip+0x144ed9a]        # 0x14161ab48 ; literal='No commanders'
0x1401cbdae: lea     rcx,[rbp+0x26d0]
0x1401cbdb5: call    0x140069710
0x1401cbdba: nop     
0x1401cbdbb: xor     r9d,r9d
0x1401cbdbe: xor     r8d,r8d
0x1401cbdc1: lea     rdx,[rbp+0x26d0]
0x1401cbdc8: lea     rcx,[rip+0x249a9a1]        # 0x142666770
0x1401cbdcf: call    0x140af0220
0x1401cbdd4: nop     
0x1401cbdd5: lea     rcx,[rbp+0x26d0]
0x1401cbddc: jmp     0x1401cc223
0x1401cbde1: lea     rcx,[rbp+0xdb0]
0x1401cbde8: call    0x140070c50
0x1401cbded: nop     
0x1401cbdee: test    edi,edi
0x1401cbdf0: jne     0x1401cbe1a
0x1401cbdf2: lea     rdx,[rip+0x144efaf]        # 0x14161ada8 ; literal='no'
0x1401cbdf9: lea     rcx,[rbp+0xdb0]
0x1401cbe00: call    0x140070b20
0x1401cbe05: lea     rdx,[rip+0x144ed4c]        # 0x14161ab58 ; literal=' commander'
0x1401cbe0c: lea     rcx,[rbp+0xdb0]
0x1401cbe13: call    0x140070b20
0x1401cbe18: jmp     0x1401cbe40
0x1401cbe1a: lea     rdx,[rbp+0xdb0]
0x1401cbe21: mov     ecx,edi
0x1401cbe23: call    0x140542fb0
0x1401cbe28: lea     rdx,[rip+0x144ed29]        # 0x14161ab58 ; literal=' commander'
0x1401cbe2f: lea     rcx,[rbp+0xdb0]
0x1401cbe36: call    0x140070b20
0x1401cbe3b: cmp     edi,0x1
0x1401cbe3e: je      0x1401cbe53
0x1401cbe40: lea     rdx,[rip+0x1433681]        # 0x1415ff4c8 ; literal='s'
0x1401cbe47: lea     rcx,[rbp+0xdb0]
0x1401cbe4e: call    0x140070b20
0x1401cbe53: lea     rdx,[rip+0x144ef62]        # 0x14161adbc ; literal=' here'
0x1401cbe5a: lea     rcx,[rbp+0xdb0]
0x1401cbe61: call    0x140070b20
0x1401cbe66: lea     rdx,[rip+0x143349b]        # 0x1415ff308 ; literal=', '
0x1401cbe6d: lea     rcx,[rbp+0xdb0]
0x1401cbe74: call    0x140070b20
0x1401cbe79: test    esi,esi
0x1401cbe7b: jne     0x1401cbea5
0x1401cbe7d: lea     rdx,[rip+0x144ef24]        # 0x14161ada8 ; literal='no'
0x1401cbe84: lea     rcx,[rbp+0xdb0]
0x1401cbe8b: call    0x140070b20
0x1401cbe90: lea     rdx,[rip+0x144ecc1]        # 0x14161ab58 ; literal=' commander'
0x1401cbe97: lea     rcx,[rbp+0xdb0]
0x1401cbe9e: call    0x140070b20
0x1401cbea3: jmp     0x1401cbecb
0x1401cbea5: lea     rdx,[rbp+0xdb0]
0x1401cbeac: mov     ecx,esi
0x1401cbeae: call    0x140542fb0
0x1401cbeb3: lea     rdx,[rip+0x144ec9e]        # 0x14161ab58 ; literal=' commander'
0x1401cbeba: lea     rcx,[rbp+0xdb0]
0x1401cbec1: call    0x140070b20
0x1401cbec6: cmp     esi,0x1
0x1401cbec9: je      0x1401cbede
0x1401cbecb: lea     rdx,[rip+0x14335f6]        # 0x1415ff4c8 ; literal='s'
0x1401cbed2: lea     rcx,[rbp+0xdb0]
0x1401cbed9: call    0x140070b20
0x1401cbede: lea     rdx,[rip+0x144ec53]        # 0x14161ab38 ; literal=' traveling'
0x1401cbee5: lea     rcx,[rbp+0xdb0]
0x1401cbeec: call    0x140070b20
0x1401cbef1: lea     rcx,[rbp+0xdb0]
0x1401cbef8: call    0x140544330
0x1401cbefd: xor     r8d,r8d
0x1401cbf00: mov     edx,0x7
0x1401cbf05: mov     r9b,0x1
0x1401cbf08: lea     rcx,[rip+0x249a861]        # 0x142666770
0x1401cbf0f: call    0x1400bc6f0
0x1401cbf14: xor     r9d,r9d
0x1401cbf17: xor     r8d,r8d
0x1401cbf1a: lea     rdx,[rbp+0xdb0]
0x1401cbf21: lea     rcx,[rip+0x249a848]        # 0x142666770
0x1401cbf28: call    0x140af0220
0x1401cbf2d: nop     
0x1401cbf2e: lea     rcx,[rbp+0xdb0]
0x1401cbf35: jmp     0x1401cc223
0x1401cbf3a: mov     BYTE PTR [rbp-0x80],dil
0x1401cbf3e: lea     rdx,[rbp+0xa0]
0x1401cbf45: lea     rcx,[r14+0x98]
0x1401cbf4c: call    0x140070800
0x1401cbf51: lea     rdx,[rbp+0x158]
0x1401cbf58: lea     rcx,[r14+0x98]
0x1401cbf5f: call    0x1400707f0
0x1401cbf64: lea     rcx,[r14+0xb0]
0x1401cbf6b: lea     rdx,[rbp+0x150]
0x1401cbf72: call    0x140070800
0x1401cbf77: lea     r8,[rbp+0x158]
0x1401cbf7e: lea     rdx,[rbp+0x11]
0x1401cbf82: lea     rcx,[rbp+0xa0]
0x1401cbf89: call    0x1400703e0
0x1401cbf8e: mov     edi,esi
0x1401cbf90: xor     edx,edx
0x1401cbf92: movzx   ecx,BYTE PTR [rax]
0x1401cbf95: call    0x140066d70
0x1401cbf9a: test    al,al
0x1401cbf9c: je      0x1401cc062
0x1401cbfa2: mov     BYTE PTR [rbp-0x80],0x1
0x1401cbfa6: xor     eax,eax
0x1401cbfa8: mov     edi,eax
0x1401cbfaa: mov     esi,eax
0x1401cbfac: nop     DWORD PTR [rax+0x0]
0x1401cbfb0: lea     rcx,[rbp+0xa0]
0x1401cbfb7: call    0x1400703d0
0x1401cbfbc: mov     edx,DWORD PTR [rax]
0x1401cbfbe: lea     rcx,[rip+0x2221bb3]        # 0x1423edb78
0x1401cbfc5: call    0x14007f0b0
0x1401cbfca: mov     rbx,rax
0x1401cbfcd: test    rax,rax
0x1401cbfd0: je      0x1401cc021
0x1401cbfd2: lea     rcx,[rbp+0x150]
0x1401cbfd9: call    0x1400703d0
0x1401cbfde: lea     rdx,[rbx+0x1110]
0x1401cbfe5: mov     ecx,DWORD PTR [rax]
0x1401cbfe7: call    0x1400bb380
0x1401cbfec: test    rax,rax
0x1401cbfef: je      0x1401cc021
0x1401cbff1: mov     edx,DWORD PTR [rax+0x4]
0x1401cbff4: cmp     edx,0xffffffff
0x1401cbff7: je      0x1401cc021
0x1401cbff9: lea     rcx,[rip+0x2235430]        # 0x142401430
0x1401cc000: call    0x1413e0200
0x1401cc005: test    rax,rax
0x1401cc008: je      0x1401cc01f
0x1401cc00a: mov     eax,DWORD PTR [rax+0x110]
0x1401cc010: test    eax,0x102
0x1401cc015: jne     0x1401cc01f
0x1401cc017: test    eax,eax
0x1401cc019: jns     0x1401cc01f
0x1401cc01b: inc     edi
0x1401cc01d: jmp     0x1401cc021
0x1401cc01f: inc     esi
0x1401cc021: lea     rcx,[rbp+0xa0]
0x1401cc028: call    0x140070910
0x1401cc02d: lea     rcx,[rbp+0x150]
0x1401cc034: call    0x140070910
0x1401cc039: lea     r8,[rbp+0x158]
0x1401cc040: lea     rdx,[rbp+0x11]
0x1401cc044: lea     rcx,[rbp+0xa0]
0x1401cc04b: call    0x1400703e0
0x1401cc050: xor     edx,edx
0x1401cc052: movzx   ecx,BYTE PTR [rax]
0x1401cc055: call    0x140066d70
0x1401cc05a: test    al,al
0x1401cc05c: jne     0x1401cbfb0
0x1401cc062: lea     r8d,[r13-0x37]
0x1401cc066: mov     edx,0x2
0x1401cc06b: lea     rcx,[rip+0x249a6fe]        # 0x142666770
0x1401cc072: call    0x1400bc6e0
0x1401cc077: lea     eax,[rsi+rdi*1]
0x1401cc07a: test    eax,eax
0x1401cc07c: jne     0x1401cc0cf
0x1401cc07e: xor     r8d,r8d
0x1401cc081: mov     edx,0x7
0x1401cc086: xor     r9d,r9d
0x1401cc089: lea     rcx,[rip+0x249a6e0]        # 0x142666770
0x1401cc090: call    0x1400bc6f0
0x1401cc095: lea     rdx,[rip+0x144ecfc]        # 0x14161ad98 ; literal='No messengers'
0x1401cc09c: lea     rcx,[rbp+0x26f0]
0x1401cc0a3: call    0x140069710
0x1401cc0a8: nop     
0x1401cc0a9: xor     r9d,r9d
0x1401cc0ac: xor     r8d,r8d
0x1401cc0af: lea     rdx,[rbp+0x26f0]
0x1401cc0b6: lea     rcx,[rip+0x249a6b3]        # 0x142666770
0x1401cc0bd: call    0x140af0220
0x1401cc0c2: nop     
0x1401cc0c3: lea     rcx,[rbp+0x26f0]
0x1401cc0ca: jmp     0x1401cc223
0x1401cc0cf: lea     rcx,[rbp+0xdd0]
0x1401cc0d6: call    0x140070c50
0x1401cc0db: nop     
0x1401cc0dc: test    edi,edi
0x1401cc0de: jne     0x1401cc108
0x1401cc0e0: lea     rdx,[rip+0x144ecc1]        # 0x14161ada8 ; literal='no'
0x1401cc0e7: lea     rcx,[rbp+0xdd0]
0x1401cc0ee: call    0x140070b20
0x1401cc0f3: lea     rdx,[rip+0x144ecb6]        # 0x14161adb0 ; literal=' messenger'
0x1401cc0fa: lea     rcx,[rbp+0xdd0]
0x1401cc101: call    0x140070b20
0x1401cc106: jmp     0x1401cc12e
0x1401cc108: lea     rdx,[rbp+0xdd0]
0x1401cc10f: mov     ecx,edi
0x1401cc111: call    0x140542fb0
0x1401cc116: lea     rdx,[rip+0x144ec93]        # 0x14161adb0 ; literal=' messenger'
0x1401cc11d: lea     rcx,[rbp+0xdd0]
0x1401cc124: call    0x140070b20
0x1401cc129: cmp     edi,0x1
0x1401cc12c: je      0x1401cc141
0x1401cc12e: lea     rdx,[rip+0x1433393]        # 0x1415ff4c8 ; literal='s'
0x1401cc135: lea     rcx,[rbp+0xdd0]
0x1401cc13c: call    0x140070b20
0x1401cc141: lea     rdx,[rip+0x144ec74]        # 0x14161adbc ; literal=' here'
0x1401cc148: lea     rcx,[rbp+0xdd0]
0x1401cc14f: call    0x140070b20
0x1401cc154: lea     rdx,[rip+0x14331ad]        # 0x1415ff308 ; literal=', '
0x1401cc15b: lea     rcx,[rbp+0xdd0]
0x1401cc162: call    0x140070b20
0x1401cc167: test    esi,esi
0x1401cc169: jne     0x1401cc193
0x1401cc16b: lea     rdx,[rip+0x144ec36]        # 0x14161ada8 ; literal='no'
0x1401cc172: lea     rcx,[rbp+0xdd0]
0x1401cc179: call    0x140070b20
0x1401cc17e: lea     rdx,[rip+0x144ec2b]        # 0x14161adb0 ; literal=' messenger'
0x1401cc185: lea     rcx,[rbp+0xdd0]
0x1401cc18c: call    0x140070b20
0x1401cc191: jmp     0x1401cc1b9
0x1401cc193: lea     rdx,[rbp+0xdd0]
0x1401cc19a: mov     ecx,esi
0x1401cc19c: call    0x140542fb0
0x1401cc1a1: lea     rdx,[rip+0x144ec08]        # 0x14161adb0 ; literal=' messenger'
0x1401cc1a8: lea     rcx,[rbp+0xdd0]
0x1401cc1af: call    0x140070b20
0x1401cc1b4: cmp     esi,0x1
0x1401cc1b7: je      0x1401cc1cc
0x1401cc1b9: lea     rdx,[rip+0x1433308]        # 0x1415ff4c8 ; literal='s'
0x1401cc1c0: lea     rcx,[rbp+0xdd0]
0x1401cc1c7: call    0x140070b20
0x1401cc1cc: lea     rdx,[rip+0x144e965]        # 0x14161ab38 ; literal=' traveling'
0x1401cc1d3: lea     rcx,[rbp+0xdd0]
0x1401cc1da: call    0x140070b20
0x1401cc1df: lea     rcx,[rbp+0xdd0]
0x1401cc1e6: call    0x140544330
0x1401cc1eb: xor     r8d,r8d
0x1401cc1ee: mov     edx,0x7
0x1401cc1f3: mov     r9b,0x1
0x1401cc1f6: lea     rcx,[rip+0x249a573]        # 0x142666770
0x1401cc1fd: call    0x1400bc6f0
0x1401cc202: xor     r9d,r9d
0x1401cc205: xor     r8d,r8d
0x1401cc208: lea     rdx,[rbp+0xdd0]
0x1401cc20f: lea     rcx,[rip+0x249a55a]        # 0x142666770
0x1401cc216: call    0x140af0220
0x1401cc21b: nop     
0x1401cc21c: lea     rcx,[rbp+0xdd0]
0x1401cc223: call    0x1400693f0
0x1401cc228: mov     r14d,r15d
0x1401cc22b: cmp     r15d,r12d
0x1401cc22e: jg      0x1401cc2a3
0x1401cc230: movsxd  r15,r15d
0x1401cc233: movsxd  r13,r12d
0x1401cc236: mov     rsi,r15
0x1401cc239: lea     r12,[rip+0x249c028]        # 0x142668268
0x1401cc240: mov     edi,0x1
0x1401cc245: lea     rbx,[rip+0x249c010]        # 0x14266825c
0x1401cc24c: nop     DWORD PTR [rax+0x0]
0x1401cc250: mov     r8d,r14d
0x1401cc253: mov     edx,edi
0x1401cc255: lea     rcx,[rip+0x249a514]        # 0x142666770
0x1401cc25c: call    0x1400bc6e0
0x1401cc261: cmp     rsi,r15
0x1401cc264: jne     0x1401cc26b
0x1401cc266: mov     edx,DWORD PTR [rbx-0x18]
0x1401cc269: jmp     0x1401cc277
0x1401cc26b: cmp     rsi,r13
0x1401cc26e: jne     0x1401cc274
0x1401cc270: mov     edx,DWORD PTR [rbx]
0x1401cc272: jmp     0x1401cc277
0x1401cc274: mov     edx,DWORD PTR [rbx-0xc]
0x1401cc277: lea     rcx,[rip+0x249a4f2]        # 0x142666770
0x1401cc27e: call    0x140af1390
0x1401cc283: inc     edi
0x1401cc285: add     rbx,0x4
0x1401cc289: cmp     rbx,r12
0x1401cc28c: jl      0x1401cc250
0x1401cc28e: inc     r14d
0x1401cc291: inc     rsi
0x1401cc294: cmp     r14d,DWORD PTR [rbp-0x58]
0x1401cc298: jle     0x1401cc240
0x1401cc29a: mov     r13d,DWORD PTR [rbp-0x20]
0x1401cc29e: mov     r15d,DWORD PTR [rsp+0x70]
0x1401cc2a3: xor     r8d,r8d
0x1401cc2a6: mov     edx,0x7
0x1401cc2ab: mov     r9b,0x1
0x1401cc2ae: lea     rcx,[rip+0x249a4bb]        # 0x142666770
0x1401cc2b5: call    0x1400bc6f0
0x1401cc2ba: lea     r8d,[r15+0x2]
0x1401cc2be: mov     edx,0x2
0x1401cc2c3: lea     rcx,[rip+0x249a4a6]        # 0x142666770
0x1401cc2ca: call    0x1400bc6e0
0x1401cc2cf: lea     rdx,[rip+0x144ed86]        # 0x14161b05c ; literal='Remove'
0x1401cc2d6: lea     rcx,[rbp+0x2710]
0x1401cc2dd: call    0x140069710
0x1401cc2e2: nop     
0x1401cc2e3: xor     r9d,r9d
0x1401cc2e6: xor     r8d,r8d
0x1401cc2e9: lea     rdx,[rbp+0x2710]
0x1401cc2f0: lea     rcx,[rip+0x249a479]        # 0x142666770
0x1401cc2f7: call    0x140af0220
0x1401cc2fc: nop     
0x1401cc2fd: lea     rcx,[rbp+0x2710]
0x1401cc304: call    0x1400693f0
0x1401cc309: mov     r12,QWORD PTR [rbp-0x78]
0x1401cc30d: mov     rcx,r12
0x1401cc310: call    0x1400766d0
0x1401cc315: cmp     eax,0x2
0x1401cc318: je      0x1401cd35d
0x1401cc31e: cmp     eax,0x13
0x1401cc321: je      0x1401ccbdf
0x1401cc327: cmp     eax,0x19
0x1401cc32a: jne     0x1401ccb72
0x1401cc330: mov     edi,DWORD PTR [rbp-0x48]
0x1401cc333: add     edi,0x2
0x1401cc336: add     r13d,0xfffffffe
0x1401cc33a: xor     eax,eax
0x1401cc33c: movzx   r14d,ax
0x1401cc340: mov     r12d,0x7
0x1401cc346: mov     DWORD PTR [rbp-0x58],r12d
0x1401cc34a: mov     rsi,QWORD PTR [rsp+0x78]
0x1401cc34f: add     rsi,0x3f8
0x1401cc356: cmp     DWORD PTR [rsi],0x1
0x1401cc359: je      0x1401ccb5b
0x1401cc35f: mov     ebx,edi
0x1401cc361: cmp     edi,r13d
0x1401cc364: jg      0x1401cc57e
0x1401cc36a: nop     WORD PTR [rax+rax*1+0x0]
0x1401cc370: mov     r8d,ebx
0x1401cc373: lea     edx,[r12-0x2]
0x1401cc378: lea     rcx,[rip+0x249a3f1]        # 0x142666770
0x1401cc37f: call    0x1400bc6e0
0x1401cc384: cmp     DWORD PTR [rsi],0x0
0x1401cc387: je      0x1401cc3b1
0x1401cc389: cmp     ebx,edi
0x1401cc38b: jne     0x1401cc395
0x1401cc38d: mov     edx,DWORD PTR [rip+0x249beb1]        # 0x142668244
0x1401cc393: jmp     0x1401cc40f
0x1401cc395: lea     rcx,[rip+0x249a3d4]        # 0x142666770
0x1401cc39c: cmp     ebx,r13d
0x1401cc39f: jne     0x1401cc3a9
0x1401cc3a1: mov     edx,DWORD PTR [rip+0x249beb5]        # 0x14266825c
0x1401cc3a7: jmp     0x1401cc416
0x1401cc3a9: mov     edx,DWORD PTR [rip+0x249bea1]        # 0x142668250
0x1401cc3af: jmp     0x1401cc416
0x1401cc3b1: mov     rax,QWORD PTR [rbp-0x78]
0x1401cc3b5: mov     rdx,QWORD PTR [rax+0x130]
0x1401cc3bc: movzx   ecx,r14w
0x1401cc3c0: call    0x140071490
0x1401cc3c5: cmp     eax,0xffffffff
0x1401cc3c8: je      0x1401cc3f2
0x1401cc3ca: cmp     ebx,edi
0x1401cc3cc: jne     0x1401cc3d6
0x1401cc3ce: mov     edx,DWORD PTR [rip+0x249be28]        # 0x1426681fc
0x1401cc3d4: jmp     0x1401cc40f
0x1401cc3d6: lea     rcx,[rip+0x249a393]        # 0x142666770
0x1401cc3dd: cmp     ebx,r13d
0x1401cc3e0: jne     0x1401cc3ea
0x1401cc3e2: mov     edx,DWORD PTR [rip+0x249be2c]        # 0x142668214
0x1401cc3e8: jmp     0x1401cc416
0x1401cc3ea: mov     edx,DWORD PTR [rip+0x249be18]        # 0x142668208
0x1401cc3f0: jmp     0x1401cc416
0x1401cc3f2: cmp     ebx,edi
0x1401cc3f4: jne     0x1401cc3fe
0x1401cc3f6: mov     edx,DWORD PTR [rip+0x249bdb8]        # 0x1426681b4
0x1401cc3fc: jmp     0x1401cc40f
0x1401cc3fe: cmp     ebx,r13d
0x1401cc401: mov     edx,DWORD PTR [rip+0x249bdc5]        # 0x1426681cc
0x1401cc407: je      0x1401cc40f
0x1401cc409: mov     edx,DWORD PTR [rip+0x249bdb1]        # 0x1426681c0
0x1401cc40f: lea     rcx,[rip+0x249a35a]        # 0x142666770
0x1401cc416: call    0x140af1390
0x1401cc41b: mov     r8d,ebx
0x1401cc41e: lea     edx,[r12-0x1]
0x1401cc423: lea     rcx,[rip+0x249a346]        # 0x142666770
0x1401cc42a: call    0x1400bc6e0
0x1401cc42f: cmp     DWORD PTR [rsi],0x0
0x1401cc432: je      0x1401cc45c
0x1401cc434: cmp     ebx,edi
0x1401cc436: jne     0x1401cc440
0x1401cc438: mov     edx,DWORD PTR [rip+0x249be0a]        # 0x142668248
0x1401cc43e: jmp     0x1401cc4ba
0x1401cc440: lea     rcx,[rip+0x249a329]        # 0x142666770
0x1401cc447: cmp     ebx,r13d
0x1401cc44a: jne     0x1401cc454
0x1401cc44c: mov     edx,DWORD PTR [rip+0x249be0e]        # 0x142668260
0x1401cc452: jmp     0x1401cc4c1
0x1401cc454: mov     edx,DWORD PTR [rip+0x249bdfa]        # 0x142668254
0x1401cc45a: jmp     0x1401cc4c1
0x1401cc45c: mov     rax,QWORD PTR [rbp-0x78]
0x1401cc460: mov     rdx,QWORD PTR [rax+0x130]
0x1401cc467: movzx   ecx,r14w
0x1401cc46b: call    0x140071490
0x1401cc470: cmp     eax,0xffffffff
0x1401cc473: je      0x1401cc49d
0x1401cc475: cmp     ebx,edi
0x1401cc477: jne     0x1401cc481
0x1401cc479: mov     edx,DWORD PTR [rip+0x249bd81]        # 0x142668200
0x1401cc47f: jmp     0x1401cc4ba
0x1401cc481: lea     rcx,[rip+0x249a2e8]        # 0x142666770
0x1401cc488: cmp     ebx,r13d
0x1401cc48b: jne     0x1401cc495
0x1401cc48d: mov     edx,DWORD PTR [rip+0x249bd85]        # 0x142668218
0x1401cc493: jmp     0x1401cc4c1
0x1401cc495: mov     edx,DWORD PTR [rip+0x249bd71]        # 0x14266820c
0x1401cc49b: jmp     0x1401cc4c1
0x1401cc49d: cmp     ebx,edi
0x1401cc49f: jne     0x1401cc4a9
0x1401cc4a1: mov     edx,DWORD PTR [rip+0x249bd11]        # 0x1426681b8
0x1401cc4a7: jmp     0x1401cc4ba
0x1401cc4a9: cmp     ebx,r13d
0x1401cc4ac: mov     edx,DWORD PTR [rip+0x249bd1e]        # 0x1426681d0
0x1401cc4b2: je      0x1401cc4ba
0x1401cc4b4: mov     edx,DWORD PTR [rip+0x249bd0a]        # 0x1426681c4
0x1401cc4ba: lea     rcx,[rip+0x249a2af]        # 0x142666770
0x1401cc4c1: call    0x140af1390
0x1401cc4c6: mov     r8d,ebx
0x1401cc4c9: mov     edx,DWORD PTR [rbp-0x58]
0x1401cc4cc: lea     rcx,[rip+0x249a29d]        # 0x142666770
0x1401cc4d3: call    0x1400bc6e0
0x1401cc4d8: cmp     DWORD PTR [rsi],0x0
0x1401cc4db: je      0x1401cc505
0x1401cc4dd: cmp     ebx,edi
0x1401cc4df: jne     0x1401cc4e9
0x1401cc4e1: mov     edx,DWORD PTR [rip+0x249bd65]        # 0x14266824c
0x1401cc4e7: jmp     0x1401cc563
0x1401cc4e9: lea     rcx,[rip+0x249a280]        # 0x142666770
0x1401cc4f0: cmp     ebx,r13d
0x1401cc4f3: jne     0x1401cc4fd
0x1401cc4f5: mov     edx,DWORD PTR [rip+0x249bd69]        # 0x142668264
0x1401cc4fb: jmp     0x1401cc56a
0x1401cc4fd: mov     edx,DWORD PTR [rip+0x249bd55]        # 0x142668258
0x1401cc503: jmp     0x1401cc56a
0x1401cc505: mov     rax,QWORD PTR [rbp-0x78]
0x1401cc509: mov     rdx,QWORD PTR [rax+0x130]
0x1401cc510: movzx   ecx,r14w
0x1401cc514: call    0x140071490
0x1401cc519: cmp     eax,0xffffffff
0x1401cc51c: je      0x1401cc546
0x1401cc51e: cmp     ebx,edi
0x1401cc520: jne     0x1401cc52a
0x1401cc522: mov     edx,DWORD PTR [rip+0x249bcdc]        # 0x142668204
0x1401cc528: jmp     0x1401cc563
0x1401cc52a: lea     rcx,[rip+0x249a23f]        # 0x142666770
0x1401cc531: cmp     ebx,r13d
0x1401cc534: jne     0x1401cc53e
0x1401cc536: mov     edx,DWORD PTR [rip+0x249bce0]        # 0x14266821c
0x1401cc53c: jmp     0x1401cc56a
0x1401cc53e: mov     edx,DWORD PTR [rip+0x249bccc]        # 0x142668210
0x1401cc544: jmp     0x1401cc56a
0x1401cc546: cmp     ebx,edi
0x1401cc548: jne     0x1401cc552
0x1401cc54a: mov     edx,DWORD PTR [rip+0x249bc6c]        # 0x1426681bc
0x1401cc550: jmp     0x1401cc563
0x1401cc552: cmp     ebx,r13d
0x1401cc555: mov     edx,DWORD PTR [rip+0x249bc79]        # 0x1426681d4
0x1401cc55b: je      0x1401cc563
0x1401cc55d: mov     edx,DWORD PTR [rip+0x249bc65]        # 0x1426681c8
0x1401cc563: lea     rcx,[rip+0x249a206]        # 0x142666770
0x1401cc56a: call    0x140af1390
0x1401cc56f: inc     ebx
0x1401cc571: cmp     ebx,r13d
0x1401cc574: jle     0x1401cc370
0x1401cc57a: mov     r12d,DWORD PTR [rbp-0x58]
0x1401cc57e: xor     r8d,r8d
0x1401cc581: lea     rcx,[rip+0x249a1e8]        # 0x142666770
0x1401cc588: cmp     DWORD PTR [rsi],r8d
0x1401cc58b: je      0x1401cc594
0x1401cc58d: xor     edx,edx
0x1401cc58f: xor     r9d,r9d
0x1401cc592: jmp     0x1401cc59c
0x1401cc594: mov     edx,0x7
0x1401cc599: mov     r9b,0x1
0x1401cc59c: call    0x1400bc6f0
0x1401cc5a1: lea     r8d,[rdi+0x2]
0x1401cc5a5: lea     edx,[r12-0x1]
0x1401cc5aa: lea     rcx,[rip+0x249a1bf]        # 0x142666770
0x1401cc5b1: call    0x1400bc6e0
0x1401cc5b6: movzx   eax,r14w
0x1401cc5ba: dec     eax
0x1401cc5bc: lea     rbx,[rip+0xffffffffffe33a3d]        # 0x140000000
0x1401cc5c3: cmp     eax,0xf
0x1401cc5c6: ja      0x1401cc730
0x1401cc5cc: cdqe    
0x1401cc5ce: mov     ecx,DWORD PTR [rbx+rax*4+0x1d65f0]
0x1401cc5d5: add     rcx,rbx
0x1401cc5d8: jmp     rcx
0x1401cc5da: lea     rdx,[rip+0x144dbdf]        # 0x14161a1c0 ; literal='Make peace'
0x1401cc5e1: lea     rcx,[rbp+0x2730]
0x1401cc5e8: call    0x140069710
0x1401cc5ed: nop     
0x1401cc5ee: xor     r9d,r9d
0x1401cc5f1: xor     r8d,r8d
0x1401cc5f4: lea     rdx,[rbp+0x2730]
0x1401cc5fb: lea     rcx,[rip+0x249a16e]        # 0x142666770
0x1401cc602: call    0x140af0220
0x1401cc607: nop     
0x1401cc608: lea     rcx,[rbp+0x2730]
0x1401cc60f: jmp     0x1401cc72b
0x1401cc614: lea     rdx,[rip+0x144ea4d]        # 0x14161b068 ; literal='Demander unconditional surrender'
0x1401cc61b: lea     rcx,[rbp+0x2750]
0x1401cc622: call    0x140069710
0x1401cc627: nop     
0x1401cc628: xor     r9d,r9d
0x1401cc62b: xor     r8d,r8d
0x1401cc62e: lea     rdx,[rbp+0x2750]
0x1401cc635: lea     rcx,[rip+0x249a134]        # 0x142666770
0x1401cc63c: call    0x140af0220
0x1401cc641: nop     
0x1401cc642: lea     rcx,[rbp+0x2750]
0x1401cc649: jmp     0x1401cc72b
0x1401cc64e: lea     rdx,[rip+0x144db7b]        # 0x14161a1d0 ; literal='Declare war'
0x1401cc655: lea     rcx,[rbp+0x2770]
0x1401cc65c: call    0x140069710
0x1401cc661: nop     
0x1401cc662: xor     r9d,r9d
0x1401cc665: xor     r8d,r8d
0x1401cc668: lea     rdx,[rbp+0x2770]
0x1401cc66f: lea     rcx,[rip+0x249a0fa]        # 0x142666770
0x1401cc676: call    0x140af0220
0x1401cc67b: nop     
0x1401cc67c: lea     rcx,[rbp+0x2770]
0x1401cc683: jmp     0x1401cc72b
0x1401cc688: lea     rdx,[rip+0x144db51]        # 0x14161a1e0 ; literal='Seek alliance'
0x1401cc68f: lea     rcx,[rbp+0x2790]
0x1401cc696: call    0x140069710
0x1401cc69b: nop     
0x1401cc69c: xor     r9d,r9d
0x1401cc69f: xor     r8d,r8d
0x1401cc6a2: lea     rdx,[rbp+0x2790]
0x1401cc6a9: lea     rcx,[rip+0x249a0c0]        # 0x142666770
0x1401cc6b0: call    0x140af0220
0x1401cc6b5: nop     
0x1401cc6b6: lea     rcx,[rbp+0x2790]
0x1401cc6bd: jmp     0x1401cc72b
0x1401cc6bf: lea     rdx,[rip+0x144db2a]        # 0x14161a1f0 ; literal='Make contact'
0x1401cc6c6: lea     rcx,[rbp+0x27b0]
0x1401cc6cd: call    0x140069710
0x1401cc6d2: nop     
0x1401cc6d3: xor     r9d,r9d
0x1401cc6d6: xor     r8d,r8d
0x1401cc6d9: lea     rdx,[rbp+0x27b0]
0x1401cc6e0: lea     rcx,[rip+0x249a089]        # 0x142666770
0x1401cc6e7: call    0x140af0220
0x1401cc6ec: nop     
0x1401cc6ed: lea     rcx,[rbp+0x27b0]
0x1401cc6f4: jmp     0x1401cc72b
0x1401cc6f6: lea     rdx,[rip+0x144db03]        # 0x14161a200 ; literal='Improve trade'
0x1401cc6fd: lea     rcx,[rbp+0x27d0]
0x1401cc704: call    0x140069710
0x1401cc709: nop     
0x1401cc70a: xor     r9d,r9d
0x1401cc70d: xor     r8d,r8d
0x1401cc710: lea     rdx,[rbp+0x27d0]
0x1401cc717: lea     rcx,[rip+0x249a052]        # 0x142666770
0x1401cc71e: call    0x140af0220
0x1401cc723: nop     
0x1401cc724: lea     rcx,[rbp+0x27d0]
0x1401cc72b: call    0x1400693f0
0x1401cc730: cmp     DWORD PTR [rsi],0x0
0x1401cc733: je      0x1401ccb53
0x1401cc739: xor     r8d,r8d
0x1401cc73c: mov     edx,0x6
0x1401cc741: mov     r9b,0x1
0x1401cc744: lea     rcx,[rip+0x249a025]        # 0x142666770
0x1401cc74b: call    0x1400bc6f0
0x1401cc750: lea     r8d,[rdi+0x3]
0x1401cc754: mov     edx,r12d
0x1401cc757: lea     rcx,[rip+0x249a012]        # 0x142666770
0x1401cc75e: call    0x1400bc6e0
0x1401cc763: mov     eax,DWORD PTR [rsi]
0x1401cc765: add     eax,0xfffffffd
0x1401cc768: cmp     eax,0x11
0x1401cc76b: ja      0x1401ccb53
0x1401cc771: cdqe    
0x1401cc773: mov     ecx,DWORD PTR [rbx+rax*4+0x1d6630]
0x1401cc77a: add     rcx,rbx
0x1401cc77d: jmp     rcx
0x1401cc77f: lea     rdx,[rip+0x144e472]        # 0x14161abf8 ; literal='Belongs to your civilization'
0x1401cc786: lea     rcx,[rbp+0x27f0]
0x1401cc78d: call    0x140069710
0x1401cc792: nop     
0x1401cc793: xor     r9d,r9d
0x1401cc796: xor     r8d,r8d
0x1401cc799: lea     rdx,[rbp+0x27f0]
0x1401cc7a0: lea     rcx,[rip+0x2499fc9]        # 0x142666770
0x1401cc7a7: call    0x140af0220
0x1401cc7ac: nop     
0x1401cc7ad: lea     rcx,[rbp+0x27f0]
0x1401cc7b4: jmp     0x1401ccb4e
0x1401cc7b9: lea     rdx,[rip+0x144e458]        # 0x14161ac18 ; literal='Not under your control'
0x1401cc7c0: lea     rcx,[rbp+0x2810]
0x1401cc7c7: call    0x140069710
0x1401cc7cc: nop     
0x1401cc7cd: xor     r9d,r9d
0x1401cc7d0: xor     r8d,r8d
0x1401cc7d3: lea     rdx,[rbp+0x2810]
0x1401cc7da: lea     rcx,[rip+0x2499f8f]        # 0x142666770
0x1401cc7e1: call    0x140af0220
0x1401cc7e6: nop     
0x1401cc7e7: lea     rcx,[rbp+0x2810]
0x1401cc7ee: jmp     0x1401ccb4e
0x1401cc7f3: lea     rdx,[rip+0x144e436]        # 0x14161ac30 ; literal='No civilized inhabitants'
0x1401cc7fa: lea     rcx,[rbp+0x2830]
0x1401cc801: call    0x140069710
0x1401cc806: nop     
0x1401cc807: xor     r9d,r9d
0x1401cc80a: xor     r8d,r8d
0x1401cc80d: lea     rdx,[rbp+0x2830]
0x1401cc814: lea     rcx,[rip+0x2499f55]        # 0x142666770
0x1401cc81b: call    0x140af0220
0x1401cc820: nop     
0x1401cc821: lea     rcx,[rbp+0x2830]
0x1401cc828: jmp     0x1401ccb4e
0x1401cc82d: lea     rdx,[rip+0x144e41c]        # 0x14161ac50 ; literal='No requestable workers'
0x1401cc834: lea     rcx,[rbp+0x2850]
0x1401cc83b: call    0x140069710
0x1401cc840: nop     
0x1401cc841: xor     r9d,r9d
0x1401cc844: xor     r8d,r8d
0x1401cc847: lea     rdx,[rbp+0x2850]
0x1401cc84e: lea     rcx,[rip+0x2499f1b]        # 0x142666770
0x1401cc855: call    0x140af0220
0x1401cc85a: nop     
0x1401cc85b: lea     rcx,[rbp+0x2850]
0x1401cc862: jmp     0x1401ccb4e
0x1401cc867: lea     rdx,[rip+0x144e3fa]        # 0x14161ac68 ; literal='Inaccessible'
0x1401cc86e: lea     rcx,[rbp+0x2870]
0x1401cc875: call    0x140069710
0x1401cc87a: nop     
0x1401cc87b: xor     r9d,r9d
0x1401cc87e: xor     r8d,r8d
0x1401cc881: lea     rdx,[rbp+0x2870]
0x1401cc888: lea     rcx,[rip+0x2499ee1]        # 0x142666770
0x1401cc88f: call    0x140af0220
0x1401cc894: nop     
0x1401cc895: lea     rcx,[rbp+0x2870]
0x1401cc89c: jmp     0x1401ccb4e
0x1401cc8a1: lea     rdx,[rip+0x144e3d0]        # 0x14161ac78 ; literal='Need civilization military leader'
0x1401cc8a8: lea     rcx,[rbp+0x2890]
0x1401cc8af: call    0x140069710
0x1401cc8b4: nop     
0x1401cc8b5: xor     r9d,r9d
0x1401cc8b8: xor     r8d,r8d
0x1401cc8bb: lea     rdx,[rbp+0x2890]
0x1401cc8c2: lea     rcx,[rip+0x2499ea7]        # 0x142666770
0x1401cc8c9: call    0x140af0220
0x1401cc8ce: nop     
0x1401cc8cf: lea     rcx,[rbp+0x2890]
0x1401cc8d6: jmp     0x1401ccb4e
0x1401cc8db: lea     rdx,[rip+0x144e3be]        # 0x14161aca0 ; literal='Need military leader'
0x1401cc8e2: lea     rcx,[rbp+0x28b0]
0x1401cc8e9: call    0x140069710
0x1401cc8ee: nop     
0x1401cc8ef: xor     r9d,r9d
0x1401cc8f2: xor     r8d,r8d
0x1401cc8f5: lea     rdx,[rbp+0x28b0]
0x1401cc8fc: lea     rcx,[rip+0x2499e6d]        # 0x142666770
0x1401cc903: call    0x140af0220
0x1401cc908: nop     
0x1401cc909: lea     rcx,[rbp+0x28b0]
0x1401cc910: jmp     0x1401ccb4e
0x1401cc915: lea     rdx,[rip+0x144e694]        # 0x14161afb0 ; literal='Need leader'
0x1401cc91c: lea     rcx,[rbp+0x28d0]
0x1401cc923: call    0x140069710
0x1401cc928: nop     
0x1401cc929: xor     r9d,r9d
0x1401cc92c: xor     r8d,r8d
0x1401cc92f: lea     rdx,[rbp+0x28d0]
0x1401cc936: lea     rcx,[rip+0x2499e33]        # 0x142666770
0x1401cc93d: call    0x140af0220
0x1401cc942: nop     
0x1401cc943: lea     rcx,[rbp+0x28d0]
0x1401cc94a: jmp     0x1401ccb4e
0x1401cc94f: lea     rdx,[rip+0x144e66a]        # 0x14161afc0 ; literal='Not trading'
0x1401cc956: lea     rcx,[rbp+0x28f0]
0x1401cc95d: call    0x140069710
0x1401cc962: nop     
0x1401cc963: xor     r9d,r9d
0x1401cc966: xor     r8d,r8d
0x1401cc969: lea     rdx,[rbp+0x28f0]
0x1401cc970: lea     rcx,[rip+0x2499df9]        # 0x142666770
0x1401cc977: call    0x140af0220
0x1401cc97c: nop     
0x1401cc97d: lea     rcx,[rbp+0x28f0]
0x1401cc984: jmp     0x1401ccb4e
0x1401cc989: lea     rdx,[rip+0x144e640]        # 0x14161afd0 ; literal='Already trading'
0x1401cc990: lea     rcx,[rbp+0x2910]
0x1401cc997: call    0x140069710
0x1401cc99c: nop     
0x1401cc99d: xor     r9d,r9d
0x1401cc9a0: xor     r8d,r8d
0x1401cc9a3: lea     rdx,[rbp+0x2910]
0x1401cc9aa: lea     rcx,[rip+0x2499dbf]        # 0x142666770
0x1401cc9b1: call    0x140af0220
0x1401cc9b6: nop     
0x1401cc9b7: lea     rcx,[rbp+0x2910]
0x1401cc9be: jmp     0x1401ccb4e
0x1401cc9c3: lea     rdx,[rip+0x144e616]        # 0x14161afe0 ; literal='Already at war'
0x1401cc9ca: lea     rcx,[rbp+0x2930]
0x1401cc9d1: call    0x140069710
0x1401cc9d6: nop     
0x1401cc9d7: xor     r9d,r9d
0x1401cc9da: xor     r8d,r8d
0x1401cc9dd: lea     rdx,[rbp+0x2930]
0x1401cc9e4: lea     rcx,[rip+0x2499d85]        # 0x142666770
0x1401cc9eb: call    0x140af0220
0x1401cc9f0: nop     
0x1401cc9f1: lea     rcx,[rbp+0x2930]
0x1401cc9f8: jmp     0x1401ccb4e
0x1401cc9fd: lea     rdx,[rip+0x144e5ec]        # 0x14161aff0 ; literal='Already have peace'
0x1401cca04: lea     rcx,[rbp+0x2950]
0x1401cca0b: call    0x140069710
0x1401cca10: nop     
0x1401cca11: xor     r9d,r9d
0x1401cca14: xor     r8d,r8d
0x1401cca17: lea     rdx,[rbp+0x2950]
0x1401cca1e: lea     rcx,[rip+0x2499d4b]        # 0x142666770
0x1401cca25: call    0x140af0220
0x1401cca2a: nop     
0x1401cca2b: lea     rcx,[rbp+0x2950]
0x1401cca32: jmp     0x1401ccb4e
0x1401cca37: lea     rdx,[rip+0x144e5ca]        # 0x14161b008 ; literal='Already have alliance'
0x1401cca3e: lea     rcx,[rbp+0x2970]
0x1401cca45: call    0x140069710
0x1401cca4a: nop     
0x1401cca4b: xor     r9d,r9d
0x1401cca4e: xor     r8d,r8d
0x1401cca51: lea     rdx,[rbp+0x2970]
0x1401cca58: lea     rcx,[rip+0x2499d11]        # 0x142666770
0x1401cca5f: call    0x140af0220
0x1401cca64: nop     
0x1401cca65: lea     rcx,[rbp+0x2970]
0x1401cca6c: jmp     0x1401ccb4e
0x1401cca71: lea     rdx,[rip+0x144e5a8]        # 0x14161b020 ; literal='At war'
0x1401cca78: lea     rcx,[rbp+0x2990]
0x1401cca7f: call    0x140069710
0x1401cca84: nop     
0x1401cca85: xor     r9d,r9d
0x1401cca88: xor     r8d,r8d
0x1401cca8b: lea     rdx,[rbp+0x2990]
0x1401cca92: lea     rcx,[rip+0x2499cd7]        # 0x142666770
0x1401cca99: call    0x140af0220
0x1401cca9e: nop     
0x1401cca9f: lea     rcx,[rbp+0x2990]
0x1401ccaa6: jmp     0x1401ccb4e
0x1401ccaab: lea     rdx,[rip+0x144e576]        # 0x14161b028 ; literal='Cannot communicate'
0x1401ccab2: lea     rcx,[rbp+0x29b0]
0x1401ccab9: call    0x140069710
0x1401ccabe: nop     
0x1401ccabf: xor     r9d,r9d
0x1401ccac2: xor     r8d,r8d
0x1401ccac5: lea     rdx,[rbp+0x29b0]
0x1401ccacc: lea     rcx,[rip+0x2499c9d]        # 0x142666770
0x1401ccad3: call    0x140af0220
0x1401ccad8: nop     
0x1401ccad9: lea     rcx,[rbp+0x29b0]
0x1401ccae0: jmp     0x1401ccb4e
0x1401ccae2: lea     rdx,[rip+0x144e557]        # 0x14161b040 ; literal='Not in contact'
0x1401ccae9: lea     rcx,[rbp+0x29d0]
0x1401ccaf0: call    0x140069710
0x1401ccaf5: nop     
0x1401ccaf6: xor     r9d,r9d
0x1401ccaf9: xor     r8d,r8d
0x1401ccafc: lea     rdx,[rbp+0x29d0]
0x1401ccb03: lea     rcx,[rip+0x2499c66]        # 0x142666770
0x1401ccb0a: call    0x140af0220
0x1401ccb0f: nop     
0x1401ccb10: lea     rcx,[rbp+0x29d0]
0x1401ccb17: jmp     0x1401ccb4e
0x1401ccb19: lea     rdx,[rip+0x144e530]        # 0x14161b050 ; literal='Too hostile'
0x1401ccb20: lea     rcx,[rbp+0x29f0]
0x1401ccb27: call    0x140069710
0x1401ccb2c: nop     
0x1401ccb2d: xor     r9d,r9d
0x1401ccb30: xor     r8d,r8d
0x1401ccb33: lea     rdx,[rbp+0x29f0]
0x1401ccb3a: lea     rcx,[rip+0x2499c2f]        # 0x142666770
0x1401ccb41: call    0x140af0220
0x1401ccb46: nop     
0x1401ccb47: lea     rcx,[rbp+0x29f0]
0x1401ccb4e: call    0x1400693f0
0x1401ccb53: add     r12d,0x3
0x1401ccb57: mov     DWORD PTR [rbp-0x58],r12d
0x1401ccb5b: inc     r14w
0x1401ccb5f: add     rsi,0x4
0x1401ccb63: cmp     r14w,0x11
0x1401ccb68: jl      0x1401cc356
0x1401ccb6e: mov     r12,QWORD PTR [rbp-0x78]
0x1401ccb72: mov     eax,DWORD PTR [rbp-0x48]
0x1401ccb75: lea     r13d,[rax-0x37]
0x1401ccb79: lea     r15d,[rax-0x2]
0x1401ccb7d: xor     eax,eax
0x1401ccb7f: mov     esi,eax
0x1401ccb81: mov     r14d,DWORD PTR [rbp-0x70]
0x1401ccb85: test    r14d,r14d
0x1401ccb88: js      0x1401cf492
0x1401ccb8e: mov     edi,eax
0x1401ccb90: movsxd  r12,r14d
0x1401ccb93: mov     ebx,r13d
0x1401ccb96: cmp     r13d,r15d
0x1401ccb99: jg      0x1401cf480
0x1401ccb9f: nop     
0x1401ccba0: mov     r8d,ebx
0x1401ccba3: mov     edx,esi
0x1401ccba5: lea     rcx,[rip+0x2499bc4]        # 0x142666770
0x1401ccbac: call    0x1400bc6e0
0x1401ccbb1: xor     r8d,r8d
0x1401ccbb4: xor     edx,edx
0x1401ccbb6: lea     rcx,[rip+0x2499bb3]        # 0x142666770
0x1401ccbbd: call    0x1400bc750
0x1401ccbc2: test    rdi,rdi
0x1401ccbc5: jne     0x1401cf41d
0x1401ccbcb: cmp     ebx,r13d
0x1401ccbce: jne     0x1401cf401
0x1401ccbd4: mov     edx,DWORD PTR [rip+0x249b4ba]        # 0x142668094
0x1401ccbda: jmp     0x1401cf469
0x1401ccbdf: mov     rbx,QWORD PTR [rsp+0x78]
0x1401ccbe4: lea     rcx,[rbx+0x3d8]
0x1401ccbeb: call    0x140070410
0x1401ccbf0: test    rax,rax
0x1401ccbf3: je      0x1401cd2f2
0x1401ccbf9: mov     edi,DWORD PTR [rbp-0x48]
0x1401ccbfc: lea     r15d,[rdi+0x2]
0x1401ccc00: mov     DWORD PTR [rbp-0x58],r15d
0x1401ccc04: lea     eax,[rdi+0x20]
0x1401ccc07: mov     DWORD PTR [rbp-0x6c],eax
0x1401ccc0a: mov     ecx,DWORD PTR [rbp-0x70]
0x1401ccc0d: lea     eax,[rcx-0x1]
0x1401ccc10: mov     DWORD PTR [rbp-0x60],eax
0x1401ccc13: lea     edx,[rcx-0x5]
0x1401ccc16: mov     eax,0x55555556
0x1401ccc1b: imul    edx
0x1401ccc1d: mov     r14d,edx
0x1401ccc20: shr     r14d,0x1f
0x1401ccc24: add     r14d,edx
0x1401ccc27: mov     DWORD PTR [rbp-0x28],r14d
0x1401ccc2b: lea     rcx,[rbx+0x3d8]
0x1401ccc32: call    0x140070410
0x1401ccc37: mov     rsi,rax
0x1401ccc3a: mov     QWORD PTR [rbp+0x30],rax
0x1401ccc3e: cmp     eax,r14d
0x1401ccc41: jle     0x1401ccc4b
0x1401ccc43: lea     ebx,[rdi+0x1e]
0x1401ccc46: mov     DWORD PTR [rbp-0x6c],ebx
0x1401ccc49: jmp     0x1401ccc4e
0x1401ccc4b: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401ccc4e: lea     eax,[rbx-0x3]
0x1401ccc51: mov     DWORD PTR [rsp+0x74],eax
0x1401ccc55: xor     eax,eax
0x1401ccc57: mov     edi,eax
0x1401ccc59: mov     QWORD PTR [rbp-0x30],rax
0x1401ccc5d: mov     r12d,0x5
0x1401ccc63: mov     DWORD PTR [rsp+0x70],r12d
0x1401ccc68: mov     r13d,r12d
0x1401ccc6b: mov     DWORD PTR [rbp-0x68],r12d
0x1401ccc6f: mov     r8,QWORD PTR [rsp+0x78]
0x1401ccc74: mov     ecx,DWORD PTR [r8+0x3f0]
0x1401ccc7b: mov     edx,esi
0x1401ccc7d: sub     edx,r14d
0x1401ccc80: cmp     ecx,edx
0x1401ccc82: cmovle  edx,ecx
0x1401ccc85: test    edx,edx
0x1401ccc87: cmovns  eax,edx
0x1401ccc8a: mov     DWORD PTR [rbp-0x10],eax
0x1401ccc8d: lea     ecx,[r14+rax*1]
0x1401ccc91: mov     DWORD PTR [rbp-0x20],ecx
0x1401ccc94: cmp     eax,ecx
0x1401ccc96: jge     0x1401ccf83
0x1401ccc9c: lea     rcx,[r8+0x3d8]
0x1401ccca3: mov     QWORD PTR [rbp+0x18],rcx
0x1401ccca7: cmp     eax,esi
0x1401ccca9: jge     0x1401ccf79
0x1401cccaf: movsxd  rdx,eax
0x1401cccb2: call    0x1400707e0
0x1401cccb7: mov     r12,QWORD PTR [rax]
0x1401cccba: mov     QWORD PTR [rbp+0x48],r12
0x1401cccbe: cmp     BYTE PTR [rip+0x21dfc90],0x0        # 0x1423ac955
0x1401cccc5: je      0x1401ccce9
0x1401cccc7: mov     eax,DWORD PTR [rbp-0x38]
0x1401cccca: cmp     eax,r15d
0x1401ccccd: jl      0x1401ccce9
0x1401ccccf: cmp     eax,ebx
0x1401cccd1: jg      0x1401ccce9
0x1401cccd3: mov     ecx,DWORD PTR [rbp-0x3c]
0x1401cccd6: cmp     ecx,r13d
0x1401cccd9: jl      0x1401ccce9
0x1401cccdb: lea     eax,[r13+0x2]
0x1401cccdf: cmp     ecx,eax
0x1401ccce1: cmovle  rdi,r12
0x1401ccce5: mov     QWORD PTR [rbp-0x30],rdi
0x1401ccce9: xor     r8d,r8d
0x1401cccec: mov     edx,0x7
0x1401cccf1: mov     r9b,0x1
0x1401cccf4: lea     rcx,[rip+0x2499a75]        # 0x142666770
0x1401cccfb: call    0x1400bc6f0
0x1401ccd00: mov     esi,r15d
0x1401ccd03: cmp     r15d,ebx
0x1401ccd06: jg      0x1401ccdad
0x1401ccd0c: lea     r12d,[r13+0x3]
0x1401ccd10: movsxd  r14,r15d
0x1401ccd13: mov     edi,r13d
0x1401ccd16: cmp     r13d,r12d
0x1401ccd19: jge     0x1401ccd98
0x1401ccd1b: movsxd  r15,ebx
0x1401ccd1e: lea     rbx,[rip+0x249b40b]        # 0x142668130
0x1401ccd25: mov     r13d,DWORD PTR [rbp-0x58]
0x1401ccd29: nop     DWORD PTR [rax+0x0]
0x1401ccd30: mov     r8d,esi
0x1401ccd33: mov     edx,edi
0x1401ccd35: lea     rcx,[rip+0x2499a34]        # 0x142666770
0x1401ccd3c: call    0x1400bc6e0
0x1401ccd41: cmp     esi,r13d
0x1401ccd44: jne     0x1401ccd4b
0x1401ccd46: mov     edx,DWORD PTR [rbx-0x18]
0x1401ccd49: jmp     0x1401ccd57
0x1401ccd4b: cmp     r14,r15
0x1401ccd4e: jne     0x1401ccd54
0x1401ccd50: mov     edx,DWORD PTR [rbx]
0x1401ccd52: jmp     0x1401ccd57
0x1401ccd54: mov     edx,DWORD PTR [rbx-0xc]
0x1401ccd57: lea     rcx,[rip+0x2499a12]        # 0x142666770
0x1401ccd5e: call    0x140af1390
0x1401ccd63: xor     edx,edx
0x1401ccd65: lea     rcx,[rip+0x221cd84]        # 0x1423e9af0
0x1401ccd6c: call    0x140073550
0x1401ccd71: test    al,al
0x1401ccd73: je      0x1401ccd86
0x1401ccd75: mov     r8b,0x1
0x1401ccd78: xor     edx,edx
0x1401ccd7a: lea     rcx,[rip+0x24999ef]        # 0x142666770
0x1401ccd81: call    0x1400bc750
0x1401ccd86: inc     edi
0x1401ccd88: add     rbx,0x4
0x1401ccd8c: cmp     edi,r12d
0x1401ccd8f: jl      0x1401ccd30
0x1401ccd91: mov     r13d,DWORD PTR [rbp-0x68]
0x1401ccd95: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401ccd98: inc     esi
0x1401ccd9a: inc     r14
0x1401ccd9d: cmp     esi,ebx
0x1401ccd9f: jle     0x1401ccd13
0x1401ccda5: mov     r15d,DWORD PTR [rbp-0x58]
0x1401ccda9: mov     r12,QWORD PTR [rbp+0x48]
0x1401ccdad: xor     r8d,r8d
0x1401ccdb0: mov     edx,0x7
0x1401ccdb5: mov     r9b,0x1
0x1401ccdb8: lea     rcx,[rip+0x24999b1]        # 0x142666770
0x1401ccdbf: call    0x1400bc6f0
0x1401ccdc4: lea     rcx,[rbp+0x10f0]
0x1401ccdcb: call    0x140070c50
0x1401ccdd0: nop     
0x1401ccdd1: lea     rcx,[rbp+0x1570]
0x1401ccdd8: call    0x140070c50
0x1401ccddd: nop     
0x1401ccdde: mov     rcx,QWORD PTR [r12+0x10]
0x1401ccde3: add     rcx,0x38
0x1401ccde7: xor     r9d,r9d
0x1401ccdea: mov     r8b,0x1
0x1401ccded: lea     rdx,[rbp+0x1570]
0x1401ccdf4: call    0x140aaafe0
0x1401ccdf9: lea     rdx,[rbp+0x1570]
0x1401cce00: lea     rcx,[rbp+0x10f0]
0x1401cce07: call    0x1400bb2d0
0x1401cce0c: lea     edx,[r13+0x1]
0x1401cce10: mov     r8d,r15d
0x1401cce13: lea     rcx,[rip+0x2499956]        # 0x142666770
0x1401cce1a: call    0x1400bc6e0
0x1401cce1f: sub     ebx,r15d
0x1401cce22: lea     rcx,[rbp+0x10f0]
0x1401cce29: call    0x1400708f0
0x1401cce2e: lea     ecx,[rbx-0x2]
0x1401cce31: movsxd  rdx,ecx
0x1401cce34: cmp     rax,rdx
0x1401cce37: jb      0x1401cce9b
0x1401cce39: lea     edi,[rbx-0x3]
0x1401cce3c: test    edi,edi
0x1401cce3e: js      0x1401cce56
0x1401cce40: movsxd  rdx,ebx
0x1401cce43: sub     rdx,0x3
0x1401cce47: xor     r8d,r8d
0x1401cce4a: lea     rcx,[rbp+0x10f0]
0x1401cce51: call    0x1400e27f0
0x1401cce56: cmp     edi,0x3
0x1401cce59: jle     0x1401cce9b
0x1401cce5b: movsxd  rdx,ebx
0x1401cce5e: sub     rdx,0x6
0x1401cce62: lea     rcx,[rbp+0x10f0]
0x1401cce69: call    0x1400fcb70
0x1401cce6e: mov     BYTE PTR [rax],0x2e
0x1401cce71: lea     eax,[rbx-0x5]
0x1401cce74: movsxd  rdx,eax
0x1401cce77: lea     rcx,[rbp+0x10f0]
0x1401cce7e: call    0x1400fcb70
0x1401cce83: mov     BYTE PTR [rax],0x2e
0x1401cce86: lea     eax,[rbx-0x4]
0x1401cce89: movsxd  rdx,eax
0x1401cce8c: lea     rcx,[rbp+0x10f0]
0x1401cce93: call    0x1400fcb70
0x1401cce98: mov     BYTE PTR [rax],0x2e
0x1401cce9b: xor     r9d,r9d
0x1401cce9e: xor     r8d,r8d
0x1401ccea1: lea     rdx,[rbp+0x10f0]
0x1401ccea8: lea     rcx,[rip+0x24998c1]        # 0x142666770
0x1401cceaf: call    0x140af0220
0x1401cceb4: lea     r14,[rip+0x24a0d9d]        # 0x14266dc58
0x1401ccebb: mov     r15d,DWORD PTR [rsp+0x74]
0x1401ccec0: mov     edi,r15d
0x1401ccec3: mov     rbx,r14
0x1401ccec6: mov     esi,0x4
0x1401ccecb: mov     r15,QWORD PTR [rbp-0x78]
0x1401ccecf: nop     
0x1401cced0: mov     r8d,edi
0x1401cced3: mov     edx,r13d
0x1401cced6: lea     rcx,[rip+0x2499893]        # 0x142666770
0x1401ccedd: call    0x1400bc6e0
0x1401ccee2: mov     rcx,QWORD PTR [r12+0x10]
0x1401ccee7: mov     rdx,QWORD PTR [r15+0x130]
0x1401cceee: mov     ecx,DWORD PTR [rcx+0xe0]
0x1401ccef4: call    0x1400bb530
0x1401ccef9: xor     r8d,r8d
0x1401ccefc: lea     rcx,[rip+0x249986d]        # 0x142666770
0x1401ccf03: cmp     eax,0xffffffff
0x1401ccf06: je      0x1401ccf0d
0x1401ccf08: mov     edx,DWORD PTR [rbx-0x30]
0x1401ccf0b: jmp     0x1401ccf0f
0x1401ccf0d: mov     edx,DWORD PTR [rbx]
0x1401ccf0f: call    0x140af19c0
0x1401ccf14: inc     edi
0x1401ccf16: add     rbx,0xc
0x1401ccf1a: sub     rsi,0x1
0x1401ccf1e: jne     0x1401cced0
0x1401ccf20: inc     r13d
0x1401ccf23: add     r14,0x4
0x1401ccf27: lea     rax,[rip+0x24a0d36]        # 0x14266dc64
0x1401ccf2e: cmp     r14,rax
0x1401ccf31: mov     r15d,DWORD PTR [rsp+0x74]
0x1401ccf36: jl      0x1401ccec0
0x1401ccf38: mov     DWORD PTR [rbp-0x68],r13d
0x1401ccf3c: lea     rcx,[rbp+0x1570]
0x1401ccf43: call    0x1400693f0
0x1401ccf48: nop     
0x1401ccf49: lea     rcx,[rbp+0x10f0]
0x1401ccf50: call    0x1400693f0
0x1401ccf55: mov     eax,DWORD PTR [rbp-0x10]
0x1401ccf58: inc     eax
0x1401ccf5a: mov     DWORD PTR [rbp-0x10],eax
0x1401ccf5d: cmp     eax,DWORD PTR [rbp-0x20]
0x1401ccf60: mov     r15d,DWORD PTR [rbp-0x58]
0x1401ccf64: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401ccf67: mov     rdi,QWORD PTR [rbp-0x30]
0x1401ccf6b: mov     rsi,QWORD PTR [rbp+0x30]
0x1401ccf6f: mov     rcx,QWORD PTR [rbp+0x18]
0x1401ccf73: jl      0x1401ccca7
0x1401ccf79: mov     r14d,DWORD PTR [rbp-0x28]
0x1401ccf7d: mov     r12d,0x5
0x1401ccf83: cmp     esi,r14d
0x1401ccf86: jle     0x1401ccff9
0x1401ccf88: lea     eax,[r14+0x1]
0x1401ccf8c: lea     ebx,[rax+rax*2]
0x1401ccf8f: lea     rcx,[rbp+0x1d0]
0x1401ccf96: call    0x1400bc920
0x1401ccf9b: lea     r9d,[rsi-0x1]
0x1401ccf9f: mov     DWORD PTR [rsp+0x30],ebx
0x1401ccfa3: mov     DWORD PTR [rsp+0x28],0x6
0x1401ccfab: mov     DWORD PTR [rsp+0x20],r14d
0x1401ccfb0: xor     r8d,r8d
0x1401ccfb3: mov     rsi,QWORD PTR [rsp+0x78]
0x1401ccfb8: mov     edx,DWORD PTR [rsi+0x3f0]
0x1401ccfbe: lea     rcx,[rbp+0x1d0]
0x1401ccfc5: call    0x1400bc940
0x1401ccfca: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401ccfcd: lea     r9d,[rbx+0x1]
0x1401ccfd1: xor     r15d,r15d
0x1401ccfd4: mov     DWORD PTR [rsp+0x28],r15d
0x1401ccfd9: movzx   eax,BYTE PTR [rsi+0x3f4]
0x1401ccfe0: mov     BYTE PTR [rsp+0x20],al
0x1401ccfe4: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401ccfe8: mov     edx,DWORD PTR [rbp-0x38]
0x1401ccfeb: lea     rcx,[rbp+0x1d0]
0x1401ccff2: call    0x141423200
0x1401ccff7: jmp     0x1401ccffc
0x1401ccff9: xor     r15d,r15d
0x1401ccffc: test    rdi,rdi
0x1401ccfff: je      0x1401ccb6e
0x1401cd005: lea     esi,[rbx+0x2]
0x1401cd008: mov     rax,QWORD PTR [rdi+0x10]
0x1401cd00c: mov     rbx,QWORD PTR [rax+0x130]
0x1401cd013: test    rbx,rbx
0x1401cd016: je      0x1401cd28a
0x1401cd01c: mov     rbx,QWORD PTR [rbx+0x8]
0x1401cd020: test    rbx,rbx
0x1401cd023: je      0x1401cd28a
0x1401cd029: lea     rdx,[rbp+0xc8]
0x1401cd030: mov     rcx,rbx
0x1401cd033: call    0x140070800
0x1401cd038: lea     rdx,[rbp+0x168]
0x1401cd03f: mov     rcx,rbx
0x1401cd042: call    0x1400707f0
0x1401cd047: lea     rcx,[rbx+0x18]
0x1401cd04b: lea     rdx,[rbp+0x160]
0x1401cd052: call    0x140070800
0x1401cd057: lea     r8,[rbp+0x168]
0x1401cd05e: lea     rdx,[rbp+0x2]
0x1401cd062: lea     rcx,[rbp+0xc8]
0x1401cd069: call    0x1400703e0
0x1401cd06e: xor     edx,edx
0x1401cd070: movzx   ecx,BYTE PTR [rax]
0x1401cd073: call    0x140066d70
0x1401cd078: test    al,al
0x1401cd07a: je      0x1401cd28a
0x1401cd080: mov     r12d,0x14
0x1401cd086: mov     r14d,DWORD PTR [rbp-0x60]
0x1401cd08a: nop     WORD PTR [rax+rax*1+0x0]
0x1401cd090: mov     ebx,r15d
0x1401cd093: lea     rcx,[rbp+0x160]
0x1401cd09a: call    0x1400703d0
0x1401cd09f: mov     r8d,DWORD PTR [rax]
0x1401cd0a2: cmp     r8d,0x1f4
0x1401cd0a9: jl      0x1401cd0e6
0x1401cd0ab: mov     ecx,0x1f4
0x1401cd0b0: movzx   r9d,BYTE PTR [rbp-0x80]
0x1401cd0b5: mov     r10d,DWORD PTR [rbp-0x70]
0x1401cd0b9: nop     DWORD PTR [rax+0x0]
0x1401cd0c0: sub     r8d,ecx
0x1401cd0c3: lea     edx,[rbx+0x1]
0x1401cd0c6: cmp     ebx,0xbb8
0x1401cd0cc: cmovge  edx,ebx
0x1401cd0cf: lea     eax,[rcx+0x64]
0x1401cd0d2: cmovge  eax,ecx
0x1401cd0d5: mov     ecx,eax
0x1401cd0d7: mov     ebx,edx
0x1401cd0d9: cmp     r8d,eax
0x1401cd0dc: jge     0x1401cd0c0
0x1401cd0de: mov     BYTE PTR [rbp-0x80],r9b
0x1401cd0e2: mov     DWORD PTR [rbp-0x70],r10d
0x1401cd0e6: lea     rcx,[rbp+0xeb0]
0x1401cd0ed: call    0x140070c50
0x1401cd0f2: nop     
0x1401cd0f3: lea     rcx,[rbp+0x1490]
0x1401cd0fa: call    0x140070c50
0x1401cd0ff: nop     
0x1401cd100: mov     edx,ebx
0x1401cd102: lea     rcx,[rbp+0xeb0]
0x1401cd109: call    0x14078a5b0
0x1401cd10e: lea     rcx,[rbp+0xeb0]
0x1401cd115: call    0x140070ae0
0x1401cd11a: test    al,al
0x1401cd11c: jne     0x1401cd131
0x1401cd11e: lea     rdx,[rip+0x1431847]        # 0x1415fe96c ; literal=' '
0x1401cd125: lea     rcx,[rbp+0xeb0]
0x1401cd12c: call    0x140070b20
0x1401cd131: mov     rax,QWORD PTR [rdi+0x10]
0x1401cd135: movzx   ebx,WORD PTR [rax+0x4]
0x1401cd139: movzx   edi,WORD PTR [rax+0x2]
0x1401cd13d: lea     rcx,[rbp+0xc8]
0x1401cd144: call    0x1400703d0
0x1401cd149: movzx   r9d,bx
0x1401cd14d: movzx   r8d,di
0x1401cd151: movzx   edx,WORD PTR [rax]
0x1401cd154: lea     rcx,[rbp+0x1490]
0x1401cd15b: call    0x14078b520
0x1401cd160: lea     rdx,[rbp+0x1490]
0x1401cd167: lea     rcx,[rbp+0xeb0]
0x1401cd16e: call    0x1400bb2d0
0x1401cd173: xor     r8d,r8d
0x1401cd176: mov     edx,0x7
0x1401cd17b: mov     r9b,0x1
0x1401cd17e: lea     rcx,[rip+0x24995eb]        # 0x142666770
0x1401cd185: call    0x1400bc6f0
0x1401cd18a: mov     r8d,esi
0x1401cd18d: mov     ebx,DWORD PTR [rsp+0x70]
0x1401cd191: mov     edx,ebx
0x1401cd193: lea     rcx,[rip+0x24995d6]        # 0x142666770
0x1401cd19a: call    0x1400bc6e0
0x1401cd19f: lea     rcx,[rbp+0xeb0]
0x1401cd1a6: call    0x1400708f0
0x1401cd1ab: cmp     rax,0x17
0x1401cd1af: jbe     0x1401cd1ff
0x1401cd1b1: xor     r8d,r8d
0x1401cd1b4: mov     edx,0x17
0x1401cd1b9: lea     rcx,[rbp+0xeb0]
0x1401cd1c0: call    0x1400e27f0
0x1401cd1c5: mov     rdx,r12
0x1401cd1c8: lea     rcx,[rbp+0xeb0]
0x1401cd1cf: call    0x1400fcb70
0x1401cd1d4: mov     BYTE PTR [rax],0x2e
0x1401cd1d7: mov     edx,0x15
0x1401cd1dc: lea     rcx,[rbp+0xeb0]
0x1401cd1e3: call    0x1400fcb70
0x1401cd1e8: mov     BYTE PTR [rax],0x2e
0x1401cd1eb: mov     edx,0x16
0x1401cd1f0: lea     rcx,[rbp+0xeb0]
0x1401cd1f7: call    0x1400fcb70
0x1401cd1fc: mov     BYTE PTR [rax],0x2e
0x1401cd1ff: xor     r9d,r9d
0x1401cd202: xor     r8d,r8d
0x1401cd205: lea     rdx,[rbp+0xeb0]
0x1401cd20c: lea     rcx,[rip+0x249955d]        # 0x142666770
0x1401cd213: call    0x140af0220
0x1401cd218: inc     ebx
0x1401cd21a: mov     DWORD PTR [rsp+0x70],ebx
0x1401cd21e: lea     rcx,[rbp+0x1490]
0x1401cd225: call    0x1400693f0
0x1401cd22a: nop     
0x1401cd22b: lea     rcx,[rbp+0xeb0]
0x1401cd232: call    0x1400693f0
0x1401cd237: cmp     ebx,r14d
0x1401cd23a: jg      0x1401ccb6e
0x1401cd240: lea     rcx,[rbp+0xc8]
0x1401cd247: call    0x1400709f0
0x1401cd24c: lea     rcx,[rbp+0x160]
0x1401cd253: call    0x140070910
0x1401cd258: lea     r8,[rbp+0x168]
0x1401cd25f: lea     rdx,[rbp+0x2]
0x1401cd263: lea     rcx,[rbp+0xc8]
0x1401cd26a: call    0x1400703e0
0x1401cd26f: xor     edx,edx
0x1401cd271: movzx   ecx,BYTE PTR [rax]
0x1401cd274: call    0x140066d70
0x1401cd279: test    al,al
0x1401cd27b: mov     rdi,QWORD PTR [rbp-0x30]
0x1401cd27f: jne     0x1401cd090
0x1401cd285: jmp     0x1401ccb6e
0x1401cd28a: xor     r8d,r8d
0x1401cd28d: mov     edx,0x7
0x1401cd292: mov     r9b,0x1
0x1401cd295: lea     rcx,[rip+0x24994d4]        # 0x142666770
0x1401cd29c: call    0x1400bc6f0
0x1401cd2a1: mov     r8d,esi
0x1401cd2a4: mov     edx,r12d
0x1401cd2a7: lea     rcx,[rip+0x24994c2]        # 0x142666770
0x1401cd2ae: call    0x1400bc6e0
0x1401cd2b3: lea     rdx,[rip+0x144ddd6]        # 0x14161b090 ; literal='No notable skills'
0x1401cd2ba: lea     rcx,[rbp+0x2a30]
0x1401cd2c1: call    0x140069710
0x1401cd2c6: nop     
0x1401cd2c7: xor     r9d,r9d
0x1401cd2ca: xor     r8d,r8d
0x1401cd2cd: lea     rdx,[rbp+0x2a30]
0x1401cd2d4: lea     rcx,[rip+0x2499495]        # 0x142666770
0x1401cd2db: call    0x140af0220
0x1401cd2e0: nop     
0x1401cd2e1: lea     rcx,[rbp+0x2a30]
0x1401cd2e8: call    0x1400693f0
0x1401cd2ed: jmp     0x1401ccb6e
0x1401cd2f2: xor     r8d,r8d
0x1401cd2f5: mov     edx,0x6
0x1401cd2fa: mov     r9b,0x1
0x1401cd2fd: lea     rcx,[rip+0x249946c]        # 0x142666770
0x1401cd304: call    0x1400bc6f0
0x1401cd309: mov     r8d,DWORD PTR [rbp-0x60]
0x1401cd30d: mov     edx,0x5
0x1401cd312: lea     rcx,[rip+0x2499457]        # 0x142666770
0x1401cd319: call    0x1400bc6e0
0x1401cd31e: lea     rdx,[rip+0x144d713]        # 0x14161aa38 ; literal='No workers available'
0x1401cd325: lea     rcx,[rbp+0x2a50]
0x1401cd32c: call    0x140069710
0x1401cd331: nop     
0x1401cd332: xor     r9d,r9d
0x1401cd335: xor     r8d,r8d
0x1401cd338: lea     rdx,[rbp+0x2a50]
0x1401cd33f: lea     rcx,[rip+0x249942a]        # 0x142666770
0x1401cd346: call    0x140af0220
0x1401cd34b: nop     
0x1401cd34c: lea     rcx,[rbp+0x2a50]
0x1401cd353: call    0x1400693f0
0x1401cd358: jmp     0x1401ccb72
0x1401cd35d: mov     edi,DWORD PTR [rbp-0x48]
0x1401cd360: add     edi,0x2
0x1401cd363: lea     ebx,[r13-0x2]
0x1401cd367: mov     rax,QWORD PTR [r12+0x130]
0x1401cd36f: mov     esi,edi
0x1401cd371: cmp     DWORD PTR [rax],0x5
0x1401cd374: jne     0x1401cdca8
0x1401cd37a: cmp     edi,ebx
0x1401cd37c: jg      0x1401cd4ef
0x1401cd382: mov     eax,0x5
0x1401cd387: nop     WORD PTR [rax+rax*1+0x0]
0x1401cd390: mov     r8d,esi
0x1401cd393: mov     edx,eax
0x1401cd395: lea     rcx,[rip+0x24993d4]        # 0x142666770
0x1401cd39c: call    0x1400bc6e0
0x1401cd3a1: mov     rax,QWORD PTR [r12+0x130]
0x1401cd3a9: test    BYTE PTR [rax+0x58],0x8
0x1401cd3ad: je      0x1401cd3d6
0x1401cd3af: cmp     esi,edi
0x1401cd3b1: jne     0x1401cd3bb
0x1401cd3b3: mov     edx,DWORD PTR [rip+0x249ae43]        # 0x1426681fc
0x1401cd3b9: jmp     0x1401cd3f2
0x1401cd3bb: lea     rcx,[rip+0x24993ae]        # 0x142666770
0x1401cd3c2: cmp     esi,ebx
0x1401cd3c4: jne     0x1401cd3ce
0x1401cd3c6: mov     edx,DWORD PTR [rip+0x249ae48]        # 0x142668214
0x1401cd3cc: jmp     0x1401cd3f9
0x1401cd3ce: mov     edx,DWORD PTR [rip+0x249ae34]        # 0x142668208
0x1401cd3d4: jmp     0x1401cd3f9
0x1401cd3d6: cmp     esi,edi
0x1401cd3d8: jne     0x1401cd3e2
0x1401cd3da: mov     edx,DWORD PTR [rip+0x249add4]        # 0x1426681b4
0x1401cd3e0: jmp     0x1401cd3f2
0x1401cd3e2: cmp     esi,ebx
0x1401cd3e4: mov     edx,DWORD PTR [rip+0x249ade2]        # 0x1426681cc
0x1401cd3ea: je      0x1401cd3f2
0x1401cd3ec: mov     edx,DWORD PTR [rip+0x249adce]        # 0x1426681c0
0x1401cd3f2: lea     rcx,[rip+0x2499377]        # 0x142666770
0x1401cd3f9: call    0x140af1390
0x1401cd3fe: mov     r8d,esi
0x1401cd401: mov     edx,0x6
0x1401cd406: lea     rcx,[rip+0x2499363]        # 0x142666770
0x1401cd40d: call    0x1400bc6e0
0x1401cd412: mov     rax,QWORD PTR [r12+0x130]
0x1401cd41a: test    BYTE PTR [rax+0x58],0x8
0x1401cd41e: je      0x1401cd447
0x1401cd420: cmp     esi,edi
0x1401cd422: jne     0x1401cd42c
0x1401cd424: mov     edx,DWORD PTR [rip+0x249add6]        # 0x142668200
0x1401cd42a: jmp     0x1401cd463
0x1401cd42c: lea     rcx,[rip+0x249933d]        # 0x142666770
0x1401cd433: cmp     esi,ebx
0x1401cd435: jne     0x1401cd43f
0x1401cd437: mov     edx,DWORD PTR [rip+0x249addb]        # 0x142668218
0x1401cd43d: jmp     0x1401cd46a
0x1401cd43f: mov     edx,DWORD PTR [rip+0x249adc7]        # 0x14266820c
0x1401cd445: jmp     0x1401cd46a
0x1401cd447: cmp     esi,edi
0x1401cd449: jne     0x1401cd453
0x1401cd44b: mov     edx,DWORD PTR [rip+0x249ad67]        # 0x1426681b8
0x1401cd451: jmp     0x1401cd463
0x1401cd453: cmp     esi,ebx
0x1401cd455: mov     edx,DWORD PTR [rip+0x249ad75]        # 0x1426681d0
0x1401cd45b: je      0x1401cd463
0x1401cd45d: mov     edx,DWORD PTR [rip+0x249ad61]        # 0x1426681c4
0x1401cd463: lea     rcx,[rip+0x2499306]        # 0x142666770
0x1401cd46a: call    0x140af1390
0x1401cd46f: mov     r8d,esi
0x1401cd472: mov     edx,0x7
0x1401cd477: lea     rcx,[rip+0x24992f2]        # 0x142666770
0x1401cd47e: call    0x1400bc6e0
0x1401cd483: mov     rax,QWORD PTR [r12+0x130]
0x1401cd48b: test    BYTE PTR [rax+0x58],0x8
0x1401cd48f: je      0x1401cd4b8
0x1401cd491: cmp     esi,edi
0x1401cd493: jne     0x1401cd49d
0x1401cd495: mov     edx,DWORD PTR [rip+0x249ad69]        # 0x142668204
0x1401cd49b: jmp     0x1401cd4d4
0x1401cd49d: lea     rcx,[rip+0x24992cc]        # 0x142666770
0x1401cd4a4: cmp     esi,ebx
0x1401cd4a6: jne     0x1401cd4b0
0x1401cd4a8: mov     edx,DWORD PTR [rip+0x249ad6e]        # 0x14266821c
0x1401cd4ae: jmp     0x1401cd4db
0x1401cd4b0: mov     edx,DWORD PTR [rip+0x249ad5a]        # 0x142668210
0x1401cd4b6: jmp     0x1401cd4db
0x1401cd4b8: cmp     esi,edi
0x1401cd4ba: jne     0x1401cd4c4
0x1401cd4bc: mov     edx,DWORD PTR [rip+0x249acfa]        # 0x1426681bc
0x1401cd4c2: jmp     0x1401cd4d4
0x1401cd4c4: cmp     esi,ebx
0x1401cd4c6: mov     edx,DWORD PTR [rip+0x249ad08]        # 0x1426681d4
0x1401cd4cc: je      0x1401cd4d4
0x1401cd4ce: mov     edx,DWORD PTR [rip+0x249acf4]        # 0x1426681c8
0x1401cd4d4: lea     rcx,[rip+0x2499295]        # 0x142666770
0x1401cd4db: call    0x140af1390
0x1401cd4e0: inc     esi
0x1401cd4e2: cmp     esi,ebx
0x1401cd4e4: mov     eax,0x5
0x1401cd4e9: jle     0x1401cd390
0x1401cd4ef: xor     r8d,r8d
0x1401cd4f2: mov     edx,0x7
0x1401cd4f7: mov     r9b,0x1
0x1401cd4fa: lea     rcx,[rip+0x249926f]        # 0x142666770
0x1401cd501: call    0x1400bc6f0
0x1401cd506: lea     r8d,[rdi+0x2]
0x1401cd50a: mov     edx,0x6
0x1401cd50f: lea     rcx,[rip+0x249925a]        # 0x142666770
0x1401cd516: call    0x1400bc6e0
0x1401cd51b: lea     rdx,[rip+0x144db86]        # 0x14161b0a8 ; literal='Free captives belonging to your civilization'
0x1401cd522: lea     rcx,[rbp+0x2a70]
0x1401cd529: call    0x140069710
0x1401cd52e: nop     
0x1401cd52f: xor     r9d,r9d
0x1401cd532: xor     r8d,r8d
0x1401cd535: lea     rdx,[rbp+0x2a70]
0x1401cd53c: lea     rcx,[rip+0x249922d]        # 0x142666770
0x1401cd543: call    0x140af0220
0x1401cd548: nop     
0x1401cd549: lea     rcx,[rbp+0x2a70]
0x1401cd550: call    0x1400693f0
0x1401cd555: mov     esi,edi
0x1401cd557: cmp     edi,ebx
0x1401cd559: jg      0x1401cd6bd
0x1401cd55f: nop     
0x1401cd560: mov     r8d,esi
0x1401cd563: mov     edx,0x8
0x1401cd568: lea     rcx,[rip+0x2499201]        # 0x142666770
0x1401cd56f: call    0x1400bc6e0
0x1401cd574: mov     rax,QWORD PTR [r12+0x130]
0x1401cd57c: test    BYTE PTR [rax+0x58],0x10
0x1401cd580: je      0x1401cd5a9
0x1401cd582: cmp     esi,edi
0x1401cd584: jne     0x1401cd58e
0x1401cd586: mov     edx,DWORD PTR [rip+0x249ac70]        # 0x1426681fc
0x1401cd58c: jmp     0x1401cd5c5
0x1401cd58e: lea     rcx,[rip+0x24991db]        # 0x142666770
0x1401cd595: cmp     esi,ebx
0x1401cd597: jne     0x1401cd5a1
0x1401cd599: mov     edx,DWORD PTR [rip+0x249ac75]        # 0x142668214
0x1401cd59f: jmp     0x1401cd5cc
0x1401cd5a1: mov     edx,DWORD PTR [rip+0x249ac61]        # 0x142668208
0x1401cd5a7: jmp     0x1401cd5cc
0x1401cd5a9: cmp     esi,edi
0x1401cd5ab: jne     0x1401cd5b5
0x1401cd5ad: mov     edx,DWORD PTR [rip+0x249ac01]        # 0x1426681b4
0x1401cd5b3: jmp     0x1401cd5c5
0x1401cd5b5: cmp     esi,ebx
0x1401cd5b7: mov     edx,DWORD PTR [rip+0x249ac0f]        # 0x1426681cc
0x1401cd5bd: je      0x1401cd5c5
0x1401cd5bf: mov     edx,DWORD PTR [rip+0x249abfb]        # 0x1426681c0
0x1401cd5c5: lea     rcx,[rip+0x24991a4]        # 0x142666770
0x1401cd5cc: call    0x140af1390
0x1401cd5d1: mov     r8d,esi
0x1401cd5d4: mov     edx,0x9
0x1401cd5d9: lea     rcx,[rip+0x2499190]        # 0x142666770
0x1401cd5e0: call    0x1400bc6e0
0x1401cd5e5: mov     rax,QWORD PTR [r12+0x130]
0x1401cd5ed: test    BYTE PTR [rax+0x58],0x10
0x1401cd5f1: je      0x1401cd61a
0x1401cd5f3: cmp     esi,edi
0x1401cd5f5: jne     0x1401cd5ff
0x1401cd5f7: mov     edx,DWORD PTR [rip+0x249ac03]        # 0x142668200
0x1401cd5fd: jmp     0x1401cd636
0x1401cd5ff: lea     rcx,[rip+0x249916a]        # 0x142666770
0x1401cd606: cmp     esi,ebx
0x1401cd608: jne     0x1401cd612
0x1401cd60a: mov     edx,DWORD PTR [rip+0x249ac08]        # 0x142668218
0x1401cd610: jmp     0x1401cd63d
0x1401cd612: mov     edx,DWORD PTR [rip+0x249abf4]        # 0x14266820c
0x1401cd618: jmp     0x1401cd63d
0x1401cd61a: cmp     esi,edi
0x1401cd61c: jne     0x1401cd626
0x1401cd61e: mov     edx,DWORD PTR [rip+0x249ab94]        # 0x1426681b8
0x1401cd624: jmp     0x1401cd636
0x1401cd626: cmp     esi,ebx
0x1401cd628: mov     edx,DWORD PTR [rip+0x249aba2]        # 0x1426681d0
0x1401cd62e: je      0x1401cd636
0x1401cd630: mov     edx,DWORD PTR [rip+0x249ab8e]        # 0x1426681c4
0x1401cd636: lea     rcx,[rip+0x2499133]        # 0x142666770
0x1401cd63d: call    0x140af1390
0x1401cd642: mov     r8d,esi
0x1401cd645: mov     edx,0xa
0x1401cd64a: lea     rcx,[rip+0x249911f]        # 0x142666770
0x1401cd651: call    0x1400bc6e0
0x1401cd656: mov     rax,QWORD PTR [r12+0x130]
0x1401cd65e: test    BYTE PTR [rax+0x58],0x10
0x1401cd662: je      0x1401cd68b
0x1401cd664: cmp     esi,edi
0x1401cd666: jne     0x1401cd670
0x1401cd668: mov     edx,DWORD PTR [rip+0x249ab96]        # 0x142668204
0x1401cd66e: jmp     0x1401cd6a7
0x1401cd670: lea     rcx,[rip+0x24990f9]        # 0x142666770
0x1401cd677: cmp     esi,ebx
0x1401cd679: jne     0x1401cd683
0x1401cd67b: mov     edx,DWORD PTR [rip+0x249ab9b]        # 0x14266821c
0x1401cd681: jmp     0x1401cd6ae
0x1401cd683: mov     edx,DWORD PTR [rip+0x249ab87]        # 0x142668210
0x1401cd689: jmp     0x1401cd6ae
0x1401cd68b: cmp     esi,edi
0x1401cd68d: jne     0x1401cd697
0x1401cd68f: mov     edx,DWORD PTR [rip+0x249ab27]        # 0x1426681bc
0x1401cd695: jmp     0x1401cd6a7
0x1401cd697: cmp     esi,ebx
0x1401cd699: mov     edx,DWORD PTR [rip+0x249ab35]        # 0x1426681d4
0x1401cd69f: je      0x1401cd6a7
0x1401cd6a1: mov     edx,DWORD PTR [rip+0x249ab21]        # 0x1426681c8
0x1401cd6a7: lea     rcx,[rip+0x24990c2]        # 0x142666770
0x1401cd6ae: call    0x140af1390
0x1401cd6b3: inc     esi
0x1401cd6b5: cmp     esi,ebx
0x1401cd6b7: jle     0x1401cd560
0x1401cd6bd: xor     r8d,r8d
0x1401cd6c0: mov     edx,0x7
0x1401cd6c5: mov     r9b,0x1
0x1401cd6c8: lea     rcx,[rip+0x24990a1]        # 0x142666770
0x1401cd6cf: call    0x1400bc6f0
0x1401cd6d4: lea     r8d,[rdi+0x2]
0x1401cd6d8: mov     edx,0x9
0x1401cd6dd: lea     rcx,[rip+0x249908c]        # 0x142666770
0x1401cd6e4: call    0x1400bc6e0
0x1401cd6e9: lea     rdx,[rip+0x144d9e8]        # 0x14161b0d8 ; literal='Release other prisoners'
0x1401cd6f0: lea     rcx,[rbp+0x2a90]
0x1401cd6f7: call    0x140069710
0x1401cd6fc: nop     
0x1401cd6fd: xor     r9d,r9d
0x1401cd700: xor     r8d,r8d
0x1401cd703: lea     rdx,[rbp+0x2a90]
0x1401cd70a: lea     rcx,[rip+0x249905f]        # 0x142666770
0x1401cd711: call    0x140af0220
0x1401cd716: nop     
0x1401cd717: lea     rcx,[rbp+0x2a90]
0x1401cd71e: call    0x1400693f0
0x1401cd723: mov     esi,edi
0x1401cd725: mov     r14d,0xc
0x1401cd72b: cmp     edi,ebx
0x1401cd72d: jg      0x1401cd89d
0x1401cd733: mov     eax,0xb
0x1401cd738: nop     DWORD PTR [rax+rax*1+0x0]
0x1401cd740: mov     r8d,esi
0x1401cd743: mov     edx,eax
0x1401cd745: lea     rcx,[rip+0x2499024]        # 0x142666770
0x1401cd74c: call    0x1400bc6e0
0x1401cd751: mov     rax,QWORD PTR [r12+0x130]
0x1401cd759: test    BYTE PTR [rax+0x58],0x20
0x1401cd75d: je      0x1401cd786
0x1401cd75f: cmp     esi,edi
0x1401cd761: jne     0x1401cd76b
0x1401cd763: mov     edx,DWORD PTR [rip+0x249aa93]        # 0x1426681fc
0x1401cd769: jmp     0x1401cd7a2
0x1401cd76b: lea     rcx,[rip+0x2498ffe]        # 0x142666770
0x1401cd772: cmp     esi,ebx
0x1401cd774: jne     0x1401cd77e
0x1401cd776: mov     edx,DWORD PTR [rip+0x249aa98]        # 0x142668214
0x1401cd77c: jmp     0x1401cd7a9
0x1401cd77e: mov     edx,DWORD PTR [rip+0x249aa84]        # 0x142668208
0x1401cd784: jmp     0x1401cd7a9
0x1401cd786: cmp     esi,edi
0x1401cd788: jne     0x1401cd792
0x1401cd78a: mov     edx,DWORD PTR [rip+0x249aa24]        # 0x1426681b4
0x1401cd790: jmp     0x1401cd7a2
0x1401cd792: cmp     esi,ebx
0x1401cd794: mov     edx,DWORD PTR [rip+0x249aa32]        # 0x1426681cc
0x1401cd79a: je      0x1401cd7a2
0x1401cd79c: mov     edx,DWORD PTR [rip+0x249aa1e]        # 0x1426681c0
0x1401cd7a2: lea     rcx,[rip+0x2498fc7]        # 0x142666770
0x1401cd7a9: call    0x140af1390
0x1401cd7ae: mov     r8d,esi
0x1401cd7b1: mov     edx,r14d
0x1401cd7b4: lea     rcx,[rip+0x2498fb5]        # 0x142666770
0x1401cd7bb: call    0x1400bc6e0
0x1401cd7c0: mov     rax,QWORD PTR [r12+0x130]
0x1401cd7c8: test    BYTE PTR [rax+0x58],0x20
0x1401cd7cc: je      0x1401cd7f5
0x1401cd7ce: cmp     esi,edi
0x1401cd7d0: jne     0x1401cd7da
0x1401cd7d2: mov     edx,DWORD PTR [rip+0x249aa28]        # 0x142668200
0x1401cd7d8: jmp     0x1401cd811
0x1401cd7da: lea     rcx,[rip+0x2498f8f]        # 0x142666770
0x1401cd7e1: cmp     esi,ebx
0x1401cd7e3: jne     0x1401cd7ed
0x1401cd7e5: mov     edx,DWORD PTR [rip+0x249aa2d]        # 0x142668218
0x1401cd7eb: jmp     0x1401cd818
0x1401cd7ed: mov     edx,DWORD PTR [rip+0x249aa19]        # 0x14266820c
0x1401cd7f3: jmp     0x1401cd818
0x1401cd7f5: cmp     esi,edi
0x1401cd7f7: jne     0x1401cd801
0x1401cd7f9: mov     edx,DWORD PTR [rip+0x249a9b9]        # 0x1426681b8
0x1401cd7ff: jmp     0x1401cd811
0x1401cd801: cmp     esi,ebx
0x1401cd803: mov     edx,DWORD PTR [rip+0x249a9c7]        # 0x1426681d0
0x1401cd809: je      0x1401cd811
0x1401cd80b: mov     edx,DWORD PTR [rip+0x249a9b3]        # 0x1426681c4
0x1401cd811: lea     rcx,[rip+0x2498f58]        # 0x142666770
0x1401cd818: call    0x140af1390
0x1401cd81d: mov     r8d,esi
0x1401cd820: mov     edx,0xd
0x1401cd825: lea     rcx,[rip+0x2498f44]        # 0x142666770
0x1401cd82c: call    0x1400bc6e0
0x1401cd831: mov     rax,QWORD PTR [r12+0x130]
0x1401cd839: test    BYTE PTR [rax+0x58],0x20
0x1401cd83d: je      0x1401cd866
0x1401cd83f: cmp     esi,edi
0x1401cd841: jne     0x1401cd84b
0x1401cd843: mov     edx,DWORD PTR [rip+0x249a9bb]        # 0x142668204
0x1401cd849: jmp     0x1401cd882
0x1401cd84b: lea     rcx,[rip+0x2498f1e]        # 0x142666770
0x1401cd852: cmp     esi,ebx
0x1401cd854: jne     0x1401cd85e
0x1401cd856: mov     edx,DWORD PTR [rip+0x249a9c0]        # 0x14266821c
0x1401cd85c: jmp     0x1401cd889
0x1401cd85e: mov     edx,DWORD PTR [rip+0x249a9ac]        # 0x142668210
0x1401cd864: jmp     0x1401cd889
0x1401cd866: cmp     esi,edi
0x1401cd868: jne     0x1401cd872
0x1401cd86a: mov     edx,DWORD PTR [rip+0x249a94c]        # 0x1426681bc
0x1401cd870: jmp     0x1401cd882
0x1401cd872: cmp     esi,ebx
0x1401cd874: mov     edx,DWORD PTR [rip+0x249a95a]        # 0x1426681d4
0x1401cd87a: je      0x1401cd882
0x1401cd87c: mov     edx,DWORD PTR [rip+0x249a946]        # 0x1426681c8
0x1401cd882: lea     rcx,[rip+0x2498ee7]        # 0x142666770
0x1401cd889: call    0x140af1390
0x1401cd88e: inc     esi
0x1401cd890: cmp     esi,ebx
0x1401cd892: mov     eax,0xb
0x1401cd897: jle     0x1401cd740
0x1401cd89d: xor     r8d,r8d
0x1401cd8a0: mov     edx,0x7
0x1401cd8a5: mov     r9b,0x1
0x1401cd8a8: lea     rcx,[rip+0x2498ec1]        # 0x142666770
0x1401cd8af: call    0x1400bc6f0
0x1401cd8b4: lea     r8d,[rdi+0x2]
0x1401cd8b8: mov     edx,r14d
0x1401cd8bb: lea     rcx,[rip+0x2498eae]        # 0x142666770
0x1401cd8c2: call    0x1400bc6e0
0x1401cd8c7: lea     rdx,[rip+0x144d822]        # 0x14161b0f0 ; literal='Take important treasures'
0x1401cd8ce: lea     rcx,[rbp+0x2ab0]
0x1401cd8d5: call    0x140069710
0x1401cd8da: nop     
0x1401cd8db: xor     r9d,r9d
0x1401cd8de: xor     r8d,r8d
0x1401cd8e1: lea     rdx,[rbp+0x2ab0]
0x1401cd8e8: lea     rcx,[rip+0x2498e81]        # 0x142666770
0x1401cd8ef: call    0x140af0220
0x1401cd8f4: nop     
0x1401cd8f5: lea     rcx,[rbp+0x2ab0]
0x1401cd8fc: call    0x1400693f0
0x1401cd901: mov     esi,edi
0x1401cd903: cmp     edi,ebx
0x1401cd905: jg      0x1401cda6d
0x1401cd90b: nop     DWORD PTR [rax+rax*1+0x0]
0x1401cd910: mov     r8d,esi
0x1401cd913: mov     edx,0xe
0x1401cd918: lea     rcx,[rip+0x2498e51]        # 0x142666770
0x1401cd91f: call    0x1400bc6e0
0x1401cd924: mov     rax,QWORD PTR [r12+0x130]
0x1401cd92c: test    BYTE PTR [rax+0x58],0x40
0x1401cd930: je      0x1401cd959
0x1401cd932: cmp     esi,edi
0x1401cd934: jne     0x1401cd93e
0x1401cd936: mov     edx,DWORD PTR [rip+0x249a8c0]        # 0x1426681fc
0x1401cd93c: jmp     0x1401cd975
0x1401cd93e: lea     rcx,[rip+0x2498e2b]        # 0x142666770
0x1401cd945: cmp     esi,ebx
0x1401cd947: jne     0x1401cd951
0x1401cd949: mov     edx,DWORD PTR [rip+0x249a8c5]        # 0x142668214
0x1401cd94f: jmp     0x1401cd97c
0x1401cd951: mov     edx,DWORD PTR [rip+0x249a8b1]        # 0x142668208
0x1401cd957: jmp     0x1401cd97c
0x1401cd959: cmp     esi,edi
0x1401cd95b: jne     0x1401cd965
0x1401cd95d: mov     edx,DWORD PTR [rip+0x249a851]        # 0x1426681b4
0x1401cd963: jmp     0x1401cd975
0x1401cd965: cmp     esi,ebx
0x1401cd967: mov     edx,DWORD PTR [rip+0x249a85f]        # 0x1426681cc
0x1401cd96d: je      0x1401cd975
0x1401cd96f: mov     edx,DWORD PTR [rip+0x249a84b]        # 0x1426681c0
0x1401cd975: lea     rcx,[rip+0x2498df4]        # 0x142666770
0x1401cd97c: call    0x140af1390
0x1401cd981: mov     r8d,esi
0x1401cd984: mov     edx,0xf
0x1401cd989: lea     rcx,[rip+0x2498de0]        # 0x142666770
0x1401cd990: call    0x1400bc6e0
0x1401cd995: mov     rax,QWORD PTR [r12+0x130]
0x1401cd99d: test    BYTE PTR [rax+0x58],0x40
0x1401cd9a1: je      0x1401cd9ca
0x1401cd9a3: cmp     esi,edi
0x1401cd9a5: jne     0x1401cd9af
0x1401cd9a7: mov     edx,DWORD PTR [rip+0x249a853]        # 0x142668200
0x1401cd9ad: jmp     0x1401cd9e6
0x1401cd9af: lea     rcx,[rip+0x2498dba]        # 0x142666770
0x1401cd9b6: cmp     esi,ebx
0x1401cd9b8: jne     0x1401cd9c2
0x1401cd9ba: mov     edx,DWORD PTR [rip+0x249a858]        # 0x142668218
0x1401cd9c0: jmp     0x1401cd9ed
0x1401cd9c2: mov     edx,DWORD PTR [rip+0x249a844]        # 0x14266820c
0x1401cd9c8: jmp     0x1401cd9ed
0x1401cd9ca: cmp     esi,edi
0x1401cd9cc: jne     0x1401cd9d6
0x1401cd9ce: mov     edx,DWORD PTR [rip+0x249a7e4]        # 0x1426681b8
0x1401cd9d4: jmp     0x1401cd9e6
0x1401cd9d6: cmp     esi,ebx
0x1401cd9d8: mov     edx,DWORD PTR [rip+0x249a7f2]        # 0x1426681d0
0x1401cd9de: je      0x1401cd9e6
0x1401cd9e0: mov     edx,DWORD PTR [rip+0x249a7de]        # 0x1426681c4
0x1401cd9e6: lea     rcx,[rip+0x2498d83]        # 0x142666770
0x1401cd9ed: call    0x140af1390
0x1401cd9f2: mov     r8d,esi
0x1401cd9f5: mov     edx,0x10
0x1401cd9fa: lea     rcx,[rip+0x2498d6f]        # 0x142666770
0x1401cda01: call    0x1400bc6e0
0x1401cda06: mov     rax,QWORD PTR [r12+0x130]
0x1401cda0e: test    BYTE PTR [rax+0x58],0x40
0x1401cda12: je      0x1401cda3b
0x1401cda14: cmp     esi,edi
0x1401cda16: jne     0x1401cda20
0x1401cda18: mov     edx,DWORD PTR [rip+0x249a7e6]        # 0x142668204
0x1401cda1e: jmp     0x1401cda57
0x1401cda20: lea     rcx,[rip+0x2498d49]        # 0x142666770
0x1401cda27: cmp     esi,ebx
0x1401cda29: jne     0x1401cda33
0x1401cda2b: mov     edx,DWORD PTR [rip+0x249a7eb]        # 0x14266821c
0x1401cda31: jmp     0x1401cda5e
0x1401cda33: mov     edx,DWORD PTR [rip+0x249a7d7]        # 0x142668210
0x1401cda39: jmp     0x1401cda5e
0x1401cda3b: cmp     esi,edi
0x1401cda3d: jne     0x1401cda47
0x1401cda3f: mov     edx,DWORD PTR [rip+0x249a777]        # 0x1426681bc
0x1401cda45: jmp     0x1401cda57
0x1401cda47: cmp     esi,ebx
0x1401cda49: mov     edx,DWORD PTR [rip+0x249a785]        # 0x1426681d4
0x1401cda4f: je      0x1401cda57
0x1401cda51: mov     edx,DWORD PTR [rip+0x249a771]        # 0x1426681c8
0x1401cda57: lea     rcx,[rip+0x2498d12]        # 0x142666770
0x1401cda5e: call    0x140af1390
0x1401cda63: inc     esi
0x1401cda65: cmp     esi,ebx
0x1401cda67: jle     0x1401cd910
0x1401cda6d: xor     r8d,r8d
0x1401cda70: mov     edx,0x7
0x1401cda75: mov     r9b,0x1
0x1401cda78: lea     rcx,[rip+0x2498cf1]        # 0x142666770
0x1401cda7f: call    0x1400bc6f0
0x1401cda84: lea     r8d,[rdi+0x2]
0x1401cda88: mov     edx,0xf
0x1401cda8d: lea     rcx,[rip+0x2498cdc]        # 0x142666770
0x1401cda94: call    0x1400bc6e0
0x1401cda99: lea     rdx,[rip+0x144d328]        # 0x14161adc8 ; literal='Loot other items'
0x1401cdaa0: lea     rcx,[rbp+0x2ad0]
0x1401cdaa7: call    0x140069710
0x1401cdaac: nop     
0x1401cdaad: xor     r9d,r9d
0x1401cdab0: xor     r8d,r8d
0x1401cdab3: lea     rdx,[rbp+0x2ad0]
0x1401cdaba: lea     rcx,[rip+0x2498caf]        # 0x142666770
0x1401cdac1: call    0x140af0220
0x1401cdac6: nop     
0x1401cdac7: lea     rcx,[rbp+0x2ad0]
0x1401cdace: call    0x1400693f0
0x1401cdad3: mov     esi,edi
0x1401cdad5: cmp     edi,ebx
0x1401cdad7: jg      0x1401cdc3d
0x1401cdadd: nop     DWORD PTR [rax]
0x1401cdae0: mov     r8d,esi
0x1401cdae3: mov     edx,0x11
0x1401cdae8: lea     rcx,[rip+0x2498c81]        # 0x142666770
0x1401cdaef: call    0x1400bc6e0
0x1401cdaf4: mov     rax,QWORD PTR [r12+0x130]
0x1401cdafc: test    BYTE PTR [rax+0x58],0x80
0x1401cdb00: je      0x1401cdb29
0x1401cdb02: cmp     esi,edi
0x1401cdb04: jne     0x1401cdb0e
0x1401cdb06: mov     edx,DWORD PTR [rip+0x249a6f0]        # 0x1426681fc
0x1401cdb0c: jmp     0x1401cdb45
0x1401cdb0e: lea     rcx,[rip+0x2498c5b]        # 0x142666770
0x1401cdb15: cmp     esi,ebx
0x1401cdb17: jne     0x1401cdb21
0x1401cdb19: mov     edx,DWORD PTR [rip+0x249a6f5]        # 0x142668214
0x1401cdb1f: jmp     0x1401cdb4c
0x1401cdb21: mov     edx,DWORD PTR [rip+0x249a6e1]        # 0x142668208
0x1401cdb27: jmp     0x1401cdb4c
0x1401cdb29: cmp     esi,edi
0x1401cdb2b: jne     0x1401cdb35
0x1401cdb2d: mov     edx,DWORD PTR [rip+0x249a681]        # 0x1426681b4
0x1401cdb33: jmp     0x1401cdb45
0x1401cdb35: cmp     esi,ebx
0x1401cdb37: mov     edx,DWORD PTR [rip+0x249a68f]        # 0x1426681cc
0x1401cdb3d: je      0x1401cdb45
0x1401cdb3f: mov     edx,DWORD PTR [rip+0x249a67b]        # 0x1426681c0
0x1401cdb45: lea     rcx,[rip+0x2498c24]        # 0x142666770
0x1401cdb4c: call    0x140af1390
0x1401cdb51: mov     r8d,esi
0x1401cdb54: mov     edx,0x12
0x1401cdb59: lea     rcx,[rip+0x2498c10]        # 0x142666770
0x1401cdb60: call    0x1400bc6e0
0x1401cdb65: mov     rax,QWORD PTR [r12+0x130]
0x1401cdb6d: test    BYTE PTR [rax+0x58],0x80
0x1401cdb71: je      0x1401cdb9a
0x1401cdb73: cmp     esi,edi
0x1401cdb75: jne     0x1401cdb7f
0x1401cdb77: mov     edx,DWORD PTR [rip+0x249a683]        # 0x142668200
0x1401cdb7d: jmp     0x1401cdbb6
0x1401cdb7f: lea     rcx,[rip+0x2498bea]        # 0x142666770
0x1401cdb86: cmp     esi,ebx
0x1401cdb88: jne     0x1401cdb92
0x1401cdb8a: mov     edx,DWORD PTR [rip+0x249a688]        # 0x142668218
0x1401cdb90: jmp     0x1401cdbbd
0x1401cdb92: mov     edx,DWORD PTR [rip+0x249a674]        # 0x14266820c
0x1401cdb98: jmp     0x1401cdbbd
0x1401cdb9a: cmp     esi,edi
0x1401cdb9c: jne     0x1401cdba6
0x1401cdb9e: mov     edx,DWORD PTR [rip+0x249a614]        # 0x1426681b8
0x1401cdba4: jmp     0x1401cdbb6
0x1401cdba6: cmp     esi,ebx
0x1401cdba8: mov     edx,DWORD PTR [rip+0x249a622]        # 0x1426681d0
0x1401cdbae: je      0x1401cdbb6
0x1401cdbb0: mov     edx,DWORD PTR [rip+0x249a60e]        # 0x1426681c4
0x1401cdbb6: lea     rcx,[rip+0x2498bb3]        # 0x142666770
0x1401cdbbd: call    0x140af1390
0x1401cdbc2: mov     r8d,esi
0x1401cdbc5: mov     edx,0x13
0x1401cdbca: lea     rcx,[rip+0x2498b9f]        # 0x142666770
0x1401cdbd1: call    0x1400bc6e0
0x1401cdbd6: mov     rax,QWORD PTR [r12+0x130]
0x1401cdbde: test    BYTE PTR [rax+0x58],0x80
0x1401cdbe2: je      0x1401cdc0b
0x1401cdbe4: cmp     esi,edi
0x1401cdbe6: jne     0x1401cdbf0
0x1401cdbe8: mov     edx,DWORD PTR [rip+0x249a616]        # 0x142668204
0x1401cdbee: jmp     0x1401cdc27
0x1401cdbf0: lea     rcx,[rip+0x2498b79]        # 0x142666770
0x1401cdbf7: cmp     esi,ebx
0x1401cdbf9: jne     0x1401cdc03
0x1401cdbfb: mov     edx,DWORD PTR [rip+0x249a61b]        # 0x14266821c
0x1401cdc01: jmp     0x1401cdc2e
0x1401cdc03: mov     edx,DWORD PTR [rip+0x249a607]        # 0x142668210
0x1401cdc09: jmp     0x1401cdc2e
0x1401cdc0b: cmp     esi,edi
0x1401cdc0d: jne     0x1401cdc17
0x1401cdc0f: mov     edx,DWORD PTR [rip+0x249a5a7]        # 0x1426681bc
0x1401cdc15: jmp     0x1401cdc27
0x1401cdc17: cmp     esi,ebx
0x1401cdc19: mov     edx,DWORD PTR [rip+0x249a5b5]        # 0x1426681d4
0x1401cdc1f: je      0x1401cdc27
0x1401cdc21: mov     edx,DWORD PTR [rip+0x249a5a1]        # 0x1426681c8
0x1401cdc27: lea     rcx,[rip+0x2498b42]        # 0x142666770
0x1401cdc2e: call    0x140af1390
0x1401cdc33: inc     esi
0x1401cdc35: cmp     esi,ebx
0x1401cdc37: jle     0x1401cdae0
0x1401cdc3d: xor     r8d,r8d
0x1401cdc40: mov     edx,0x7
0x1401cdc45: mov     r9b,0x1
0x1401cdc48: lea     rcx,[rip+0x2498b21]        # 0x142666770
0x1401cdc4f: call    0x1400bc6f0
0x1401cdc54: lea     r8d,[rdi+0x2]
0x1401cdc58: mov     edx,0x12
0x1401cdc5d: lea     rcx,[rip+0x2498b0c]        # 0x142666770
0x1401cdc64: call    0x1400bc6e0
0x1401cdc69: lea     rdx,[rip+0x144d170]        # 0x14161ade0 ; literal='Steal livestock'
0x1401cdc70: lea     rcx,[rbp+0x2af0]
0x1401cdc77: call    0x140069710
0x1401cdc7c: nop     
0x1401cdc7d: xor     r9d,r9d
0x1401cdc80: xor     r8d,r8d
0x1401cdc83: lea     rdx,[rbp+0x2af0]
0x1401cdc8a: lea     rcx,[rip+0x2498adf]        # 0x142666770
0x1401cdc91: call    0x140af0220
0x1401cdc96: nop     
0x1401cdc97: lea     rcx,[rbp+0x2af0]
0x1401cdc9e: call    0x1400693f0
0x1401cdca3: jmp     0x1401ccb72
0x1401cdca8: cmp     edi,ebx
0x1401cdcaa: jg      0x1401cde1c
0x1401cdcb0: mov     eax,0x5
0x1401cdcb5: data16  data16 nop WORD PTR [rax+rax*1+0x0]
0x1401cdcc0: mov     r8d,esi
0x1401cdcc3: mov     edx,eax
0x1401cdcc5: lea     rcx,[rip+0x2498aa4]        # 0x142666770
0x1401cdccc: call    0x1400bc6e0
0x1401cdcd1: mov     rax,QWORD PTR [r12+0x130]
0x1401cdcd9: cmp     DWORD PTR [rax],0x4
0x1401cdcdc: jne     0x1401cdd05
0x1401cdcde: cmp     esi,edi
0x1401cdce0: jne     0x1401cdcea
0x1401cdce2: mov     edx,DWORD PTR [rip+0x249a514]        # 0x1426681fc
0x1401cdce8: jmp     0x1401cdd21
0x1401cdcea: lea     rcx,[rip+0x2498a7f]        # 0x142666770
0x1401cdcf1: cmp     esi,ebx
0x1401cdcf3: jne     0x1401cdcfd
0x1401cdcf5: mov     edx,DWORD PTR [rip+0x249a519]        # 0x142668214
0x1401cdcfb: jmp     0x1401cdd28
0x1401cdcfd: mov     edx,DWORD PTR [rip+0x249a505]        # 0x142668208
0x1401cdd03: jmp     0x1401cdd28
0x1401cdd05: cmp     esi,edi
0x1401cdd07: jne     0x1401cdd11
0x1401cdd09: mov     edx,DWORD PTR [rip+0x249a4a5]        # 0x1426681b4
0x1401cdd0f: jmp     0x1401cdd21
0x1401cdd11: cmp     esi,ebx
0x1401cdd13: mov     edx,DWORD PTR [rip+0x249a4b3]        # 0x1426681cc
0x1401cdd19: je      0x1401cdd21
0x1401cdd1b: mov     edx,DWORD PTR [rip+0x249a49f]        # 0x1426681c0
0x1401cdd21: lea     rcx,[rip+0x2498a48]        # 0x142666770
0x1401cdd28: call    0x140af1390
0x1401cdd2d: mov     r8d,esi
0x1401cdd30: mov     edx,0x6
0x1401cdd35: lea     rcx,[rip+0x2498a34]        # 0x142666770
0x1401cdd3c: call    0x1400bc6e0
0x1401cdd41: mov     rax,QWORD PTR [r12+0x130]
0x1401cdd49: cmp     DWORD PTR [rax],0x4
0x1401cdd4c: jne     0x1401cdd75
0x1401cdd4e: cmp     esi,edi
0x1401cdd50: jne     0x1401cdd5a
0x1401cdd52: mov     edx,DWORD PTR [rip+0x249a4a8]        # 0x142668200
0x1401cdd58: jmp     0x1401cdd91
0x1401cdd5a: lea     rcx,[rip+0x2498a0f]        # 0x142666770
0x1401cdd61: cmp     esi,ebx
0x1401cdd63: jne     0x1401cdd6d
0x1401cdd65: mov     edx,DWORD PTR [rip+0x249a4ad]        # 0x142668218
0x1401cdd6b: jmp     0x1401cdd98
0x1401cdd6d: mov     edx,DWORD PTR [rip+0x249a499]        # 0x14266820c
0x1401cdd73: jmp     0x1401cdd98
0x1401cdd75: cmp     esi,edi
0x1401cdd77: jne     0x1401cdd81
0x1401cdd79: mov     edx,DWORD PTR [rip+0x249a439]        # 0x1426681b8
0x1401cdd7f: jmp     0x1401cdd91
0x1401cdd81: cmp     esi,ebx
0x1401cdd83: mov     edx,DWORD PTR [rip+0x249a447]        # 0x1426681d0
0x1401cdd89: je      0x1401cdd91
0x1401cdd8b: mov     edx,DWORD PTR [rip+0x249a433]        # 0x1426681c4
0x1401cdd91: lea     rcx,[rip+0x24989d8]        # 0x142666770
0x1401cdd98: call    0x140af1390
0x1401cdd9d: mov     r8d,esi
0x1401cdda0: mov     edx,0x7
0x1401cdda5: lea     rcx,[rip+0x24989c4]        # 0x142666770
0x1401cddac: call    0x1400bc6e0
0x1401cddb1: mov     rax,QWORD PTR [r12+0x130]
0x1401cddb9: cmp     DWORD PTR [rax],0x4
0x1401cddbc: jne     0x1401cdde5
0x1401cddbe: cmp     esi,edi
0x1401cddc0: jne     0x1401cddca
0x1401cddc2: mov     edx,DWORD PTR [rip+0x249a43c]        # 0x142668204
0x1401cddc8: jmp     0x1401cde01
0x1401cddca: lea     rcx,[rip+0x249899f]        # 0x142666770
0x1401cddd1: cmp     esi,ebx
0x1401cddd3: jne     0x1401cdddd
0x1401cddd5: mov     edx,DWORD PTR [rip+0x249a441]        # 0x14266821c
0x1401cdddb: jmp     0x1401cde08
0x1401cdddd: mov     edx,DWORD PTR [rip+0x249a42d]        # 0x142668210
0x1401cdde3: jmp     0x1401cde08
0x1401cdde5: cmp     esi,edi
0x1401cdde7: jne     0x1401cddf1
0x1401cdde9: mov     edx,DWORD PTR [rip+0x249a3cd]        # 0x1426681bc
0x1401cddef: jmp     0x1401cde01
0x1401cddf1: cmp     esi,ebx
0x1401cddf3: mov     edx,DWORD PTR [rip+0x249a3db]        # 0x1426681d4
0x1401cddf9: je      0x1401cde01
0x1401cddfb: mov     edx,DWORD PTR [rip+0x249a3c7]        # 0x1426681c8
0x1401cde01: lea     rcx,[rip+0x2498968]        # 0x142666770
0x1401cde08: call    0x140af1390
0x1401cde0d: inc     esi
0x1401cde0f: cmp     esi,ebx
0x1401cde11: mov     eax,0x5
0x1401cde16: jle     0x1401cdcc0
0x1401cde1c: xor     r8d,r8d
0x1401cde1f: mov     edx,0x7
0x1401cde24: mov     r9b,0x1
0x1401cde27: lea     rcx,[rip+0x2498942]        # 0x142666770
0x1401cde2e: call    0x1400bc6f0
0x1401cde33: lea     r8d,[rdi+0x2]
0x1401cde37: mov     edx,0x6
0x1401cde3c: lea     rcx,[rip+0x249892d]        # 0x142666770
0x1401cde43: call    0x1400bc6e0
0x1401cde48: lea     rdx,[rip+0x144cfa1]        # 0x14161adf0 ; literal='Raid (squads will try to avoid detection)'
0x1401cde4f: lea     rcx,[rbp+0x2b10]
0x1401cde56: call    0x140069710
0x1401cde5b: nop     
0x1401cde5c: xor     r9d,r9d
0x1401cde5f: xor     r8d,r8d
0x1401cde62: lea     rdx,[rbp+0x2b10]
0x1401cde69: lea     rcx,[rip+0x2498900]        # 0x142666770
0x1401cde70: call    0x140af0220
0x1401cde75: nop     
0x1401cde76: lea     rcx,[rbp+0x2b10]
0x1401cde7d: call    0x1400693f0
0x1401cde82: mov     esi,edi
0x1401cde84: cmp     edi,ebx
0x1401cde86: jg      0x1401cdfea
0x1401cde8c: nop     DWORD PTR [rax+0x0]
0x1401cde90: mov     r8d,esi
0x1401cde93: mov     edx,0x8
0x1401cde98: lea     rcx,[rip+0x24988d1]        # 0x142666770
0x1401cde9f: call    0x1400bc6e0
0x1401cdea4: mov     rax,QWORD PTR [r12+0x130]
0x1401cdeac: cmp     DWORD PTR [rax],0x6
0x1401cdeaf: jne     0x1401cded8
0x1401cdeb1: cmp     esi,edi
0x1401cdeb3: jne     0x1401cdebd
0x1401cdeb5: mov     edx,DWORD PTR [rip+0x249a341]        # 0x1426681fc
0x1401cdebb: jmp     0x1401cdef4
0x1401cdebd: lea     rcx,[rip+0x24988ac]        # 0x142666770
0x1401cdec4: cmp     esi,ebx
0x1401cdec6: jne     0x1401cded0
0x1401cdec8: mov     edx,DWORD PTR [rip+0x249a346]        # 0x142668214
0x1401cdece: jmp     0x1401cdefb
0x1401cded0: mov     edx,DWORD PTR [rip+0x249a332]        # 0x142668208
0x1401cded6: jmp     0x1401cdefb
0x1401cded8: cmp     esi,edi
0x1401cdeda: jne     0x1401cdee4
0x1401cdedc: mov     edx,DWORD PTR [rip+0x249a2d2]        # 0x1426681b4
0x1401cdee2: jmp     0x1401cdef4
0x1401cdee4: cmp     esi,ebx
0x1401cdee6: mov     edx,DWORD PTR [rip+0x249a2e0]        # 0x1426681cc
0x1401cdeec: je      0x1401cdef4
0x1401cdeee: mov     edx,DWORD PTR [rip+0x249a2cc]        # 0x1426681c0
0x1401cdef4: lea     rcx,[rip+0x2498875]        # 0x142666770
0x1401cdefb: call    0x140af1390
0x1401cdf00: mov     r8d,esi
0x1401cdf03: mov     edx,0x9
0x1401cdf08: lea     rcx,[rip+0x2498861]        # 0x142666770
0x1401cdf0f: call    0x1400bc6e0
0x1401cdf14: mov     rax,QWORD PTR [r12+0x130]
0x1401cdf1c: cmp     DWORD PTR [rax],0x6
0x1401cdf1f: jne     0x1401cdf48
0x1401cdf21: cmp     esi,edi
0x1401cdf23: jne     0x1401cdf2d
0x1401cdf25: mov     edx,DWORD PTR [rip+0x249a2d5]        # 0x142668200
0x1401cdf2b: jmp     0x1401cdf64
0x1401cdf2d: lea     rcx,[rip+0x249883c]        # 0x142666770
0x1401cdf34: cmp     esi,ebx
0x1401cdf36: jne     0x1401cdf40
0x1401cdf38: mov     edx,DWORD PTR [rip+0x249a2da]        # 0x142668218
0x1401cdf3e: jmp     0x1401cdf6b
0x1401cdf40: mov     edx,DWORD PTR [rip+0x249a2c6]        # 0x14266820c
0x1401cdf46: jmp     0x1401cdf6b
0x1401cdf48: cmp     esi,edi
0x1401cdf4a: jne     0x1401cdf54
0x1401cdf4c: mov     edx,DWORD PTR [rip+0x249a266]        # 0x1426681b8
0x1401cdf52: jmp     0x1401cdf64
0x1401cdf54: cmp     esi,ebx
0x1401cdf56: mov     edx,DWORD PTR [rip+0x249a274]        # 0x1426681d0
0x1401cdf5c: je      0x1401cdf64
0x1401cdf5e: mov     edx,DWORD PTR [rip+0x249a260]        # 0x1426681c4
0x1401cdf64: lea     rcx,[rip+0x2498805]        # 0x142666770
0x1401cdf6b: call    0x140af1390
0x1401cdf70: mov     r8d,esi
0x1401cdf73: mov     edx,0xa
0x1401cdf78: lea     rcx,[rip+0x24987f1]        # 0x142666770
0x1401cdf7f: call    0x1400bc6e0
0x1401cdf84: mov     rax,QWORD PTR [r12+0x130]
0x1401cdf8c: cmp     DWORD PTR [rax],0x6
0x1401cdf8f: jne     0x1401cdfb8
0x1401cdf91: cmp     esi,edi
0x1401cdf93: jne     0x1401cdf9d
0x1401cdf95: mov     edx,DWORD PTR [rip+0x249a269]        # 0x142668204
0x1401cdf9b: jmp     0x1401cdfd4
0x1401cdf9d: lea     rcx,[rip+0x24987cc]        # 0x142666770
0x1401cdfa4: cmp     esi,ebx
0x1401cdfa6: jne     0x1401cdfb0
0x1401cdfa8: mov     edx,DWORD PTR [rip+0x249a26e]        # 0x14266821c
0x1401cdfae: jmp     0x1401cdfdb
0x1401cdfb0: mov     edx,DWORD PTR [rip+0x249a25a]        # 0x142668210
0x1401cdfb6: jmp     0x1401cdfdb
0x1401cdfb8: cmp     esi,edi
0x1401cdfba: jne     0x1401cdfc4
0x1401cdfbc: mov     edx,DWORD PTR [rip+0x249a1fa]        # 0x1426681bc
0x1401cdfc2: jmp     0x1401cdfd4
0x1401cdfc4: cmp     esi,ebx
0x1401cdfc6: mov     edx,DWORD PTR [rip+0x249a208]        # 0x1426681d4
0x1401cdfcc: je      0x1401cdfd4
0x1401cdfce: mov     edx,DWORD PTR [rip+0x249a1f4]        # 0x1426681c8
0x1401cdfd4: lea     rcx,[rip+0x2498795]        # 0x142666770
0x1401cdfdb: call    0x140af1390
0x1401cdfe0: inc     esi
0x1401cdfe2: cmp     esi,ebx
0x1401cdfe4: jle     0x1401cde90
0x1401cdfea: xor     r8d,r8d
0x1401cdfed: mov     edx,0x7
0x1401cdff2: mov     r9b,0x1
0x1401cdff5: lea     rcx,[rip+0x2498774]        # 0x142666770
0x1401cdffc: call    0x1400bc6f0
0x1401ce001: lea     r8d,[rdi+0x2]
0x1401ce005: mov     edx,0x9
0x1401ce00a: lea     rcx,[rip+0x249875f]        # 0x142666770
0x1401ce011: call    0x1400bc6e0
0x1401ce016: lea     rdx,[rip+0x144ce03]        # 0x14161ae20 ; literal='Pillage (openly attack)'
0x1401ce01d: lea     rcx,[rbp+0x2b30]
0x1401ce024: call    0x140069710
0x1401ce029: nop     
0x1401ce02a: xor     r9d,r9d
0x1401ce02d: xor     r8d,r8d
0x1401ce030: lea     rdx,[rbp+0x2b30]
0x1401ce037: lea     rcx,[rip+0x2498732]        # 0x142666770
0x1401ce03e: call    0x140af0220
0x1401ce043: nop     
0x1401ce044: lea     rcx,[rbp+0x2b30]
0x1401ce04b: call    0x1400693f0
0x1401ce050: mov     esi,edi
0x1401ce052: mov     r14d,0xc
0x1401ce058: cmp     edi,ebx
0x1401ce05a: jg      0x1401ce1ca
0x1401ce060: mov     eax,0xb
0x1401ce065: data16  data16 nop WORD PTR [rax+rax*1+0x0]
0x1401ce070: mov     r8d,esi
0x1401ce073: mov     edx,eax
0x1401ce075: lea     rcx,[rip+0x24986f4]        # 0x142666770
0x1401ce07c: call    0x1400bc6e0
0x1401ce081: mov     rax,QWORD PTR [r12+0x130]
0x1401ce089: cmp     DWORD PTR [rax],0x0
0x1401ce08c: jne     0x1401ce0b5
0x1401ce08e: cmp     esi,edi
0x1401ce090: jne     0x1401ce09a
0x1401ce092: mov     edx,DWORD PTR [rip+0x249a164]        # 0x1426681fc
0x1401ce098: jmp     0x1401ce0d1
0x1401ce09a: lea     rcx,[rip+0x24986cf]        # 0x142666770
0x1401ce0a1: cmp     esi,ebx
0x1401ce0a3: jne     0x1401ce0ad
0x1401ce0a5: mov     edx,DWORD PTR [rip+0x249a169]        # 0x142668214
0x1401ce0ab: jmp     0x1401ce0d8
0x1401ce0ad: mov     edx,DWORD PTR [rip+0x249a155]        # 0x142668208
0x1401ce0b3: jmp     0x1401ce0d8
0x1401ce0b5: cmp     esi,edi
0x1401ce0b7: jne     0x1401ce0c1
0x1401ce0b9: mov     edx,DWORD PTR [rip+0x249a0f5]        # 0x1426681b4
0x1401ce0bf: jmp     0x1401ce0d1
0x1401ce0c1: cmp     esi,ebx
0x1401ce0c3: mov     edx,DWORD PTR [rip+0x249a103]        # 0x1426681cc
0x1401ce0c9: je      0x1401ce0d1
0x1401ce0cb: mov     edx,DWORD PTR [rip+0x249a0ef]        # 0x1426681c0
0x1401ce0d1: lea     rcx,[rip+0x2498698]        # 0x142666770
0x1401ce0d8: call    0x140af1390
0x1401ce0dd: mov     r8d,esi
0x1401ce0e0: mov     edx,r14d
0x1401ce0e3: lea     rcx,[rip+0x2498686]        # 0x142666770
0x1401ce0ea: call    0x1400bc6e0
0x1401ce0ef: mov     rax,QWORD PTR [r12+0x130]
0x1401ce0f7: cmp     DWORD PTR [rax],0x0
0x1401ce0fa: jne     0x1401ce123
0x1401ce0fc: cmp     esi,edi
0x1401ce0fe: jne     0x1401ce108
0x1401ce100: mov     edx,DWORD PTR [rip+0x249a0fa]        # 0x142668200
0x1401ce106: jmp     0x1401ce13f
0x1401ce108: lea     rcx,[rip+0x2498661]        # 0x142666770
0x1401ce10f: cmp     esi,ebx
0x1401ce111: jne     0x1401ce11b
0x1401ce113: mov     edx,DWORD PTR [rip+0x249a0ff]        # 0x142668218
0x1401ce119: jmp     0x1401ce146
0x1401ce11b: mov     edx,DWORD PTR [rip+0x249a0eb]        # 0x14266820c
0x1401ce121: jmp     0x1401ce146
0x1401ce123: cmp     esi,edi
0x1401ce125: jne     0x1401ce12f
0x1401ce127: mov     edx,DWORD PTR [rip+0x249a08b]        # 0x1426681b8
0x1401ce12d: jmp     0x1401ce13f
0x1401ce12f: cmp     esi,ebx
0x1401ce131: mov     edx,DWORD PTR [rip+0x249a099]        # 0x1426681d0
0x1401ce137: je      0x1401ce13f
0x1401ce139: mov     edx,DWORD PTR [rip+0x249a085]        # 0x1426681c4
0x1401ce13f: lea     rcx,[rip+0x249862a]        # 0x142666770
0x1401ce146: call    0x140af1390
0x1401ce14b: mov     r8d,esi
0x1401ce14e: mov     edx,0xd
0x1401ce153: lea     rcx,[rip+0x2498616]        # 0x142666770
0x1401ce15a: call    0x1400bc6e0
0x1401ce15f: mov     rax,QWORD PTR [r12+0x130]
0x1401ce167: cmp     DWORD PTR [rax],0x0
0x1401ce16a: jne     0x1401ce193
0x1401ce16c: cmp     esi,edi
0x1401ce16e: jne     0x1401ce178
0x1401ce170: mov     edx,DWORD PTR [rip+0x249a08e]        # 0x142668204
0x1401ce176: jmp     0x1401ce1af
0x1401ce178: lea     rcx,[rip+0x24985f1]        # 0x142666770
0x1401ce17f: cmp     esi,ebx
0x1401ce181: jne     0x1401ce18b
0x1401ce183: mov     edx,DWORD PTR [rip+0x249a093]        # 0x14266821c
0x1401ce189: jmp     0x1401ce1b6
0x1401ce18b: mov     edx,DWORD PTR [rip+0x249a07f]        # 0x142668210
0x1401ce191: jmp     0x1401ce1b6
0x1401ce193: cmp     esi,edi
0x1401ce195: jne     0x1401ce19f
0x1401ce197: mov     edx,DWORD PTR [rip+0x249a01f]        # 0x1426681bc
0x1401ce19d: jmp     0x1401ce1af
0x1401ce19f: cmp     esi,ebx
0x1401ce1a1: mov     edx,DWORD PTR [rip+0x249a02d]        # 0x1426681d4
0x1401ce1a7: je      0x1401ce1af
0x1401ce1a9: mov     edx,DWORD PTR [rip+0x249a019]        # 0x1426681c8
0x1401ce1af: lea     rcx,[rip+0x24985ba]        # 0x142666770
0x1401ce1b6: call    0x140af1390
0x1401ce1bb: inc     esi
0x1401ce1bd: cmp     esi,ebx
0x1401ce1bf: mov     eax,0xb
0x1401ce1c4: jle     0x1401ce070
0x1401ce1ca: xor     r8d,r8d
0x1401ce1cd: mov     edx,0x7
0x1401ce1d2: mov     r9b,0x1
0x1401ce1d5: lea     rcx,[rip+0x2498594]        # 0x142666770
0x1401ce1dc: call    0x1400bc6f0
0x1401ce1e1: lea     r8d,[rdi+0x2]
0x1401ce1e5: mov     edx,r14d
0x1401ce1e8: lea     rcx,[rip+0x2498581]        # 0x142666770
0x1401ce1ef: call    0x1400bc6e0
0x1401ce1f4: lea     rdx,[rip+0x144cc3d]        # 0x14161ae38 ; literal='Raze (openly attack and destroy site)'
0x1401ce1fb: lea     rcx,[rbp+0x2b50]
0x1401ce202: call    0x140069710
0x1401ce207: nop     
0x1401ce208: xor     r9d,r9d
0x1401ce20b: xor     r8d,r8d
0x1401ce20e: lea     rdx,[rbp+0x2b50]
0x1401ce215: lea     rcx,[rip+0x2498554]        # 0x142666770
0x1401ce21c: call    0x140af0220
0x1401ce221: nop     
0x1401ce222: lea     rcx,[rbp+0x2b50]
0x1401ce229: call    0x1400693f0
0x1401ce22e: mov     esi,edi
0x1401ce230: cmp     edi,ebx
0x1401ce232: jg      0x1401ce39d
0x1401ce238: nop     DWORD PTR [rax+rax*1+0x0]
0x1401ce240: mov     r8d,esi
0x1401ce243: mov     edx,0xe
0x1401ce248: lea     rcx,[rip+0x2498521]        # 0x142666770
0x1401ce24f: call    0x1400bc6e0
0x1401ce254: mov     rax,QWORD PTR [r12+0x130]
0x1401ce25c: test    BYTE PTR [rax+0x58],0x2
0x1401ce260: je      0x1401ce289
0x1401ce262: cmp     esi,edi
0x1401ce264: jne     0x1401ce26e
0x1401ce266: mov     edx,DWORD PTR [rip+0x2499f90]        # 0x1426681fc
0x1401ce26c: jmp     0x1401ce2a5
0x1401ce26e: lea     rcx,[rip+0x24984fb]        # 0x142666770
0x1401ce275: cmp     esi,ebx
0x1401ce277: jne     0x1401ce281
0x1401ce279: mov     edx,DWORD PTR [rip+0x2499f95]        # 0x142668214
0x1401ce27f: jmp     0x1401ce2ac
0x1401ce281: mov     edx,DWORD PTR [rip+0x2499f81]        # 0x142668208
0x1401ce287: jmp     0x1401ce2ac
0x1401ce289: cmp     esi,edi
0x1401ce28b: jne     0x1401ce295
0x1401ce28d: mov     edx,DWORD PTR [rip+0x2499f21]        # 0x1426681b4
0x1401ce293: jmp     0x1401ce2a5
0x1401ce295: cmp     esi,ebx
0x1401ce297: mov     edx,DWORD PTR [rip+0x2499f2f]        # 0x1426681cc
0x1401ce29d: je      0x1401ce2a5
0x1401ce29f: mov     edx,DWORD PTR [rip+0x2499f1b]        # 0x1426681c0
0x1401ce2a5: lea     rcx,[rip+0x24984c4]        # 0x142666770
0x1401ce2ac: call    0x140af1390
0x1401ce2b1: mov     r8d,esi
0x1401ce2b4: mov     edx,0xf
0x1401ce2b9: lea     rcx,[rip+0x24984b0]        # 0x142666770
0x1401ce2c0: call    0x1400bc6e0
0x1401ce2c5: mov     rax,QWORD PTR [r12+0x130]
0x1401ce2cd: test    BYTE PTR [rax+0x58],0x2
0x1401ce2d1: je      0x1401ce2fa
0x1401ce2d3: cmp     esi,edi
0x1401ce2d5: jne     0x1401ce2df
0x1401ce2d7: mov     edx,DWORD PTR [rip+0x2499f23]        # 0x142668200
0x1401ce2dd: jmp     0x1401ce316
0x1401ce2df: lea     rcx,[rip+0x249848a]        # 0x142666770
0x1401ce2e6: cmp     esi,ebx
0x1401ce2e8: jne     0x1401ce2f2
0x1401ce2ea: mov     edx,DWORD PTR [rip+0x2499f28]        # 0x142668218
0x1401ce2f0: jmp     0x1401ce31d
0x1401ce2f2: mov     edx,DWORD PTR [rip+0x2499f14]        # 0x14266820c
0x1401ce2f8: jmp     0x1401ce31d
0x1401ce2fa: cmp     esi,edi
0x1401ce2fc: jne     0x1401ce306
0x1401ce2fe: mov     edx,DWORD PTR [rip+0x2499eb4]        # 0x1426681b8
0x1401ce304: jmp     0x1401ce316
0x1401ce306: cmp     esi,ebx
0x1401ce308: mov     edx,DWORD PTR [rip+0x2499ec2]        # 0x1426681d0
0x1401ce30e: je      0x1401ce316
0x1401ce310: mov     edx,DWORD PTR [rip+0x2499eae]        # 0x1426681c4
0x1401ce316: lea     rcx,[rip+0x2498453]        # 0x142666770
0x1401ce31d: call    0x140af1390
0x1401ce322: mov     r8d,esi
0x1401ce325: mov     edx,0x10
0x1401ce32a: lea     rcx,[rip+0x249843f]        # 0x142666770
0x1401ce331: call    0x1400bc6e0
0x1401ce336: mov     rax,QWORD PTR [r12+0x130]
0x1401ce33e: test    BYTE PTR [rax+0x58],0x2
0x1401ce342: je      0x1401ce36b
0x1401ce344: cmp     esi,edi
0x1401ce346: jne     0x1401ce350
0x1401ce348: mov     edx,DWORD PTR [rip+0x2499eb6]        # 0x142668204
0x1401ce34e: jmp     0x1401ce387
0x1401ce350: lea     rcx,[rip+0x2498419]        # 0x142666770
0x1401ce357: cmp     esi,ebx
0x1401ce359: jne     0x1401ce363
0x1401ce35b: mov     edx,DWORD PTR [rip+0x2499ebb]        # 0x14266821c
0x1401ce361: jmp     0x1401ce38e
0x1401ce363: mov     edx,DWORD PTR [rip+0x2499ea7]        # 0x142668210
0x1401ce369: jmp     0x1401ce38e
0x1401ce36b: cmp     esi,edi
0x1401ce36d: jne     0x1401ce377
0x1401ce36f: mov     edx,DWORD PTR [rip+0x2499e47]        # 0x1426681bc
0x1401ce375: jmp     0x1401ce387
0x1401ce377: cmp     esi,ebx
0x1401ce379: mov     edx,DWORD PTR [rip+0x2499e55]        # 0x1426681d4
0x1401ce37f: je      0x1401ce387
0x1401ce381: mov     edx,DWORD PTR [rip+0x2499e41]        # 0x1426681c8
0x1401ce387: lea     rcx,[rip+0x24983e2]        # 0x142666770
0x1401ce38e: call    0x140af1390
0x1401ce393: inc     esi
0x1401ce395: cmp     esi,ebx
0x1401ce397: jle     0x1401ce240
0x1401ce39d: xor     r8d,r8d
0x1401ce3a0: mov     edx,0x7
0x1401ce3a5: mov     r9b,0x1
0x1401ce3a8: lea     rcx,[rip+0x24983c1]        # 0x142666770
0x1401ce3af: call    0x1400bc6f0
0x1401ce3b4: lea     r8d,[rdi+0x2]
0x1401ce3b8: mov     edx,0xf
0x1401ce3bd: lea     rcx,[rip+0x24983ac]        # 0x142666770
0x1401ce3c4: call    0x1400bc6e0
0x1401ce3c9: lea     rdx,[rip+0x144ca90]        # 0x14161ae60 ; literal='Demand one-time tribute'
0x1401ce3d0: lea     rcx,[rbp+0x2b70]
0x1401ce3d7: call    0x140069710
0x1401ce3dc: nop     
0x1401ce3dd: xor     r9d,r9d
0x1401ce3e0: xor     r8d,r8d
0x1401ce3e3: lea     rdx,[rbp+0x2b70]
0x1401ce3ea: lea     rcx,[rip+0x249837f]        # 0x142666770
0x1401ce3f1: call    0x140af0220
0x1401ce3f6: nop     
0x1401ce3f7: lea     rcx,[rbp+0x2b70]
0x1401ce3fe: call    0x1400693f0
0x1401ce403: mov     esi,edi
0x1401ce405: cmp     edi,ebx
0x1401ce407: jg      0x1401ce56d
0x1401ce40d: nop     DWORD PTR [rax]
0x1401ce410: mov     r8d,esi
0x1401ce413: mov     edx,0x11
0x1401ce418: lea     rcx,[rip+0x2498351]        # 0x142666770
0x1401ce41f: call    0x1400bc6e0
0x1401ce424: mov     rax,QWORD PTR [r12+0x130]
0x1401ce42c: test    BYTE PTR [rax+0x58],0x4
0x1401ce430: je      0x1401ce459
0x1401ce432: cmp     esi,edi
0x1401ce434: jne     0x1401ce43e
0x1401ce436: mov     edx,DWORD PTR [rip+0x2499dc0]        # 0x1426681fc
0x1401ce43c: jmp     0x1401ce475
0x1401ce43e: lea     rcx,[rip+0x249832b]        # 0x142666770
0x1401ce445: cmp     esi,ebx
0x1401ce447: jne     0x1401ce451
0x1401ce449: mov     edx,DWORD PTR [rip+0x2499dc5]        # 0x142668214
0x1401ce44f: jmp     0x1401ce47c
0x1401ce451: mov     edx,DWORD PTR [rip+0x2499db1]        # 0x142668208
0x1401ce457: jmp     0x1401ce47c
0x1401ce459: cmp     esi,edi
0x1401ce45b: jne     0x1401ce465
0x1401ce45d: mov     edx,DWORD PTR [rip+0x2499d51]        # 0x1426681b4
0x1401ce463: jmp     0x1401ce475
0x1401ce465: cmp     esi,ebx
0x1401ce467: mov     edx,DWORD PTR [rip+0x2499d5f]        # 0x1426681cc
0x1401ce46d: je      0x1401ce475
0x1401ce46f: mov     edx,DWORD PTR [rip+0x2499d4b]        # 0x1426681c0
0x1401ce475: lea     rcx,[rip+0x24982f4]        # 0x142666770
0x1401ce47c: call    0x140af1390
0x1401ce481: mov     r8d,esi
0x1401ce484: mov     edx,0x12
0x1401ce489: lea     rcx,[rip+0x24982e0]        # 0x142666770
0x1401ce490: call    0x1400bc6e0
0x1401ce495: mov     rax,QWORD PTR [r12+0x130]
0x1401ce49d: test    BYTE PTR [rax+0x58],0x4
0x1401ce4a1: je      0x1401ce4ca
0x1401ce4a3: cmp     esi,edi
0x1401ce4a5: jne     0x1401ce4af
0x1401ce4a7: mov     edx,DWORD PTR [rip+0x2499d53]        # 0x142668200
0x1401ce4ad: jmp     0x1401ce4e6
0x1401ce4af: lea     rcx,[rip+0x24982ba]        # 0x142666770
0x1401ce4b6: cmp     esi,ebx
0x1401ce4b8: jne     0x1401ce4c2
0x1401ce4ba: mov     edx,DWORD PTR [rip+0x2499d58]        # 0x142668218
0x1401ce4c0: jmp     0x1401ce4ed
0x1401ce4c2: mov     edx,DWORD PTR [rip+0x2499d44]        # 0x14266820c
0x1401ce4c8: jmp     0x1401ce4ed
0x1401ce4ca: cmp     esi,edi
0x1401ce4cc: jne     0x1401ce4d6
0x1401ce4ce: mov     edx,DWORD PTR [rip+0x2499ce4]        # 0x1426681b8
0x1401ce4d4: jmp     0x1401ce4e6
0x1401ce4d6: cmp     esi,ebx
0x1401ce4d8: mov     edx,DWORD PTR [rip+0x2499cf2]        # 0x1426681d0
0x1401ce4de: je      0x1401ce4e6
0x1401ce4e0: mov     edx,DWORD PTR [rip+0x2499cde]        # 0x1426681c4
0x1401ce4e6: lea     rcx,[rip+0x2498283]        # 0x142666770
0x1401ce4ed: call    0x140af1390
0x1401ce4f2: mov     r8d,esi
0x1401ce4f5: mov     edx,0x13
0x1401ce4fa: lea     rcx,[rip+0x249826f]        # 0x142666770
0x1401ce501: call    0x1400bc6e0
0x1401ce506: mov     rax,QWORD PTR [r12+0x130]
0x1401ce50e: test    BYTE PTR [rax+0x58],0x4
0x1401ce512: je      0x1401ce53b
0x1401ce514: cmp     esi,edi
0x1401ce516: jne     0x1401ce520
0x1401ce518: mov     edx,DWORD PTR [rip+0x2499ce6]        # 0x142668204
0x1401ce51e: jmp     0x1401ce557
0x1401ce520: lea     rcx,[rip+0x2498249]        # 0x142666770
0x1401ce527: cmp     esi,ebx
0x1401ce529: jne     0x1401ce533
0x1401ce52b: mov     edx,DWORD PTR [rip+0x2499ceb]        # 0x14266821c
0x1401ce531: jmp     0x1401ce55e
0x1401ce533: mov     edx,DWORD PTR [rip+0x2499cd7]        # 0x142668210
0x1401ce539: jmp     0x1401ce55e
0x1401ce53b: cmp     esi,edi
0x1401ce53d: jne     0x1401ce547
0x1401ce53f: mov     edx,DWORD PTR [rip+0x2499c77]        # 0x1426681bc
0x1401ce545: jmp     0x1401ce557
0x1401ce547: cmp     esi,ebx
0x1401ce549: mov     edx,DWORD PTR [rip+0x2499c85]        # 0x1426681d4
0x1401ce54f: je      0x1401ce557
0x1401ce551: mov     edx,DWORD PTR [rip+0x2499c71]        # 0x1426681c8
0x1401ce557: lea     rcx,[rip+0x2498212]        # 0x142666770
0x1401ce55e: call    0x140af1390
0x1401ce563: inc     esi
0x1401ce565: cmp     esi,ebx
0x1401ce567: jle     0x1401ce410
0x1401ce56d: xor     r8d,r8d
0x1401ce570: mov     edx,0x7
0x1401ce575: mov     r9b,0x1
0x1401ce578: lea     rcx,[rip+0x24981f1]        # 0x142666770
0x1401ce57f: call    0x1400bc6f0
0x1401ce584: lea     r8d,[rdi+0x2]
0x1401ce588: mov     edx,0x12
0x1401ce58d: lea     rcx,[rip+0x24981dc]        # 0x142666770
0x1401ce594: call    0x1400bc6e0
0x1401ce599: lea     rdx,[rip+0x144c8d8]        # 0x14161ae78 ; literal='Demand ongoing tribute'
0x1401ce5a0: lea     rcx,[rbp+0x2b90]
0x1401ce5a7: call    0x140069710
0x1401ce5ac: nop     
0x1401ce5ad: xor     r9d,r9d
0x1401ce5b0: xor     r8d,r8d
0x1401ce5b3: lea     rdx,[rbp+0x2b90]
0x1401ce5ba: lea     rcx,[rip+0x24981af]        # 0x142666770
0x1401ce5c1: call    0x140af0220
0x1401ce5c6: nop     
0x1401ce5c7: lea     rcx,[rbp+0x2b90]
0x1401ce5ce: call    0x1400693f0
0x1401ce5d3: mov     esi,edi
0x1401ce5d5: cmp     edi,ebx
0x1401ce5d7: jg      0x1401ce763
0x1401ce5dd: mov     r12d,0x14
0x1401ce5e3: mov     r14,QWORD PTR [rbp-0x78]
0x1401ce5e7: nop     WORD PTR [rax+rax*1+0x0]
0x1401ce5f0: mov     r8d,esi
0x1401ce5f3: mov     edx,r12d
0x1401ce5f6: lea     rcx,[rip+0x2498173]        # 0x142666770
0x1401ce5fd: call    0x1400bc6e0
0x1401ce602: mov     rax,QWORD PTR [r14+0x130]
0x1401ce609: cmp     DWORD PTR [rax],0x2
0x1401ce60c: jne     0x1401ce63e
0x1401ce60e: test    DWORD PTR [rax+0x58],0x200
0x1401ce615: jne     0x1401ce63e
0x1401ce617: cmp     esi,edi
0x1401ce619: jne     0x1401ce623
0x1401ce61b: mov     edx,DWORD PTR [rip+0x2499bdb]        # 0x1426681fc
0x1401ce621: jmp     0x1401ce65a
0x1401ce623: lea     rcx,[rip+0x2498146]        # 0x142666770
0x1401ce62a: cmp     esi,ebx
0x1401ce62c: jne     0x1401ce636
0x1401ce62e: mov     edx,DWORD PTR [rip+0x2499be0]        # 0x142668214
0x1401ce634: jmp     0x1401ce661
0x1401ce636: mov     edx,DWORD PTR [rip+0x2499bcc]        # 0x142668208
0x1401ce63c: jmp     0x1401ce661
0x1401ce63e: cmp     esi,edi
0x1401ce640: jne     0x1401ce64a
0x1401ce642: mov     edx,DWORD PTR [rip+0x2499b6c]        # 0x1426681b4
0x1401ce648: jmp     0x1401ce65a
0x1401ce64a: cmp     esi,ebx
0x1401ce64c: mov     edx,DWORD PTR [rip+0x2499b7a]        # 0x1426681cc
0x1401ce652: je      0x1401ce65a
0x1401ce654: mov     edx,DWORD PTR [rip+0x2499b66]        # 0x1426681c0
0x1401ce65a: lea     rcx,[rip+0x249810f]        # 0x142666770
0x1401ce661: call    0x140af1390
0x1401ce666: mov     r8d,esi
0x1401ce669: mov     edx,0x15
0x1401ce66e: lea     rcx,[rip+0x24980fb]        # 0x142666770
0x1401ce675: call    0x1400bc6e0
0x1401ce67a: mov     rax,QWORD PTR [r14+0x130]
0x1401ce681: cmp     DWORD PTR [rax],0x2
0x1401ce684: jne     0x1401ce6b6
0x1401ce686: test    DWORD PTR [rax+0x58],0x200
0x1401ce68d: jne     0x1401ce6b6
0x1401ce68f: cmp     esi,edi
0x1401ce691: jne     0x1401ce69b
0x1401ce693: mov     edx,DWORD PTR [rip+0x2499b67]        # 0x142668200
0x1401ce699: jmp     0x1401ce6d2
0x1401ce69b: lea     rcx,[rip+0x24980ce]        # 0x142666770
0x1401ce6a2: cmp     esi,ebx
0x1401ce6a4: jne     0x1401ce6ae
0x1401ce6a6: mov     edx,DWORD PTR [rip+0x2499b6c]        # 0x142668218
0x1401ce6ac: jmp     0x1401ce6d9
0x1401ce6ae: mov     edx,DWORD PTR [rip+0x2499b58]        # 0x14266820c
0x1401ce6b4: jmp     0x1401ce6d9
0x1401ce6b6: cmp     esi,edi
0x1401ce6b8: jne     0x1401ce6c2
0x1401ce6ba: mov     edx,DWORD PTR [rip+0x2499af8]        # 0x1426681b8
0x1401ce6c0: jmp     0x1401ce6d2
0x1401ce6c2: cmp     esi,ebx
0x1401ce6c4: mov     edx,DWORD PTR [rip+0x2499b06]        # 0x1426681d0
0x1401ce6ca: je      0x1401ce6d2
0x1401ce6cc: mov     edx,DWORD PTR [rip+0x2499af2]        # 0x1426681c4
0x1401ce6d2: lea     rcx,[rip+0x2498097]        # 0x142666770
0x1401ce6d9: call    0x140af1390
0x1401ce6de: mov     r8d,esi
0x1401ce6e1: mov     edx,0x16
0x1401ce6e6: lea     rcx,[rip+0x2498083]        # 0x142666770
0x1401ce6ed: call    0x1400bc6e0
0x1401ce6f2: mov     rax,QWORD PTR [r14+0x130]
0x1401ce6f9: cmp     DWORD PTR [rax],0x2
0x1401ce6fc: jne     0x1401ce72e
0x1401ce6fe: test    DWORD PTR [rax+0x58],0x200
0x1401ce705: jne     0x1401ce72e
0x1401ce707: cmp     esi,edi
0x1401ce709: jne     0x1401ce713
0x1401ce70b: mov     edx,DWORD PTR [rip+0x2499af3]        # 0x142668204
0x1401ce711: jmp     0x1401ce74a
0x1401ce713: lea     rcx,[rip+0x2498056]        # 0x142666770
0x1401ce71a: cmp     esi,ebx
0x1401ce71c: jne     0x1401ce726
0x1401ce71e: mov     edx,DWORD PTR [rip+0x2499af8]        # 0x14266821c
0x1401ce724: jmp     0x1401ce751
0x1401ce726: mov     edx,DWORD PTR [rip+0x2499ae4]        # 0x142668210
0x1401ce72c: jmp     0x1401ce751
0x1401ce72e: cmp     esi,edi
0x1401ce730: jne     0x1401ce73a
0x1401ce732: mov     edx,DWORD PTR [rip+0x2499a84]        # 0x1426681bc
0x1401ce738: jmp     0x1401ce74a
0x1401ce73a: cmp     esi,ebx
0x1401ce73c: mov     edx,DWORD PTR [rip+0x2499a92]        # 0x1426681d4
0x1401ce742: je      0x1401ce74a
0x1401ce744: mov     edx,DWORD PTR [rip+0x2499a7e]        # 0x1426681c8
0x1401ce74a: lea     rcx,[rip+0x249801f]        # 0x142666770
0x1401ce751: call    0x140af1390
0x1401ce756: inc     esi
0x1401ce758: cmp     esi,ebx
0x1401ce75a: jle     0x1401ce5f0
0x1401ce760: mov     r12,r14
0x1401ce763: xor     r8d,r8d
0x1401ce766: mov     edx,0x7
0x1401ce76b: mov     r9b,0x1
0x1401ce76e: lea     rcx,[rip+0x2497ffb]        # 0x142666770
0x1401ce775: call    0x1400bc6f0
0x1401ce77a: lea     r8d,[rdi+0x2]
0x1401ce77e: mov     edx,0x15
0x1401ce783: lea     rcx,[rip+0x2497fe6]        # 0x142666770
0x1401ce78a: call    0x1400bc6e0
0x1401ce78f: lea     rdx,[rip+0x144c6fa]        # 0x14161ae90 ; literal='Conquer and occupy'
0x1401ce796: lea     rcx,[rbp+0x2bb0]
0x1401ce79d: call    0x140069710
0x1401ce7a2: nop     
0x1401ce7a3: xor     r9d,r9d
0x1401ce7a6: xor     r8d,r8d
0x1401ce7a9: lea     rdx,[rbp+0x2bb0]
0x1401ce7b0: lea     rcx,[rip+0x2497fb9]        # 0x142666770
0x1401ce7b7: call    0x140af0220
0x1401ce7bc: nop     
0x1401ce7bd: lea     rcx,[rbp+0x2bb0]
0x1401ce7c4: call    0x1400693f0
0x1401ce7c9: mov     esi,edi
0x1401ce7cb: cmp     edi,ebx
0x1401ce7cd: jg      0x1401ce955
0x1401ce7d3: nop     DWORD PTR [rax+0x0]
0x1401ce7d7: nop     WORD PTR [rax+rax*1+0x0]
0x1401ce7e0: mov     r8d,esi
0x1401ce7e3: mov     edx,0x17
0x1401ce7e8: lea     rcx,[rip+0x2497f81]        # 0x142666770
0x1401ce7ef: call    0x1400bc6e0
0x1401ce7f4: mov     rax,QWORD PTR [r12+0x130]
0x1401ce7fc: cmp     DWORD PTR [rax],0x2
0x1401ce7ff: jne     0x1401ce831
0x1401ce801: test    DWORD PTR [rax+0x58],0x200
0x1401ce808: je      0x1401ce831
0x1401ce80a: cmp     esi,edi
0x1401ce80c: jne     0x1401ce816
0x1401ce80e: mov     edx,DWORD PTR [rip+0x24999e8]        # 0x1426681fc
0x1401ce814: jmp     0x1401ce84d
0x1401ce816: lea     rcx,[rip+0x2497f53]        # 0x142666770
0x1401ce81d: cmp     esi,ebx
0x1401ce81f: jne     0x1401ce829
0x1401ce821: mov     edx,DWORD PTR [rip+0x24999ed]        # 0x142668214
0x1401ce827: jmp     0x1401ce854
0x1401ce829: mov     edx,DWORD PTR [rip+0x24999d9]        # 0x142668208
0x1401ce82f: jmp     0x1401ce854
0x1401ce831: cmp     esi,edi
0x1401ce833: jne     0x1401ce83d
0x1401ce835: mov     edx,DWORD PTR [rip+0x2499979]        # 0x1426681b4
0x1401ce83b: jmp     0x1401ce84d
0x1401ce83d: cmp     esi,ebx
0x1401ce83f: mov     edx,DWORD PTR [rip+0x2499987]        # 0x1426681cc
0x1401ce845: je      0x1401ce84d
0x1401ce847: mov     edx,DWORD PTR [rip+0x2499973]        # 0x1426681c0
0x1401ce84d: lea     rcx,[rip+0x2497f1c]        # 0x142666770
0x1401ce854: call    0x140af1390
0x1401ce859: mov     r8d,esi
0x1401ce85c: mov     edx,0x18
0x1401ce861: lea     rcx,[rip+0x2497f08]        # 0x142666770
0x1401ce868: call    0x1400bc6e0
0x1401ce86d: mov     rax,QWORD PTR [r12+0x130]
0x1401ce875: cmp     DWORD PTR [rax],0x2
0x1401ce878: jne     0x1401ce8aa
0x1401ce87a: test    DWORD PTR [rax+0x58],0x200
0x1401ce881: je      0x1401ce8aa
0x1401ce883: cmp     esi,edi
0x1401ce885: jne     0x1401ce88f
0x1401ce887: mov     edx,DWORD PTR [rip+0x2499973]        # 0x142668200
0x1401ce88d: jmp     0x1401ce8c6
0x1401ce88f: lea     rcx,[rip+0x2497eda]        # 0x142666770
0x1401ce896: cmp     esi,ebx
0x1401ce898: jne     0x1401ce8a2
0x1401ce89a: mov     edx,DWORD PTR [rip+0x2499978]        # 0x142668218
0x1401ce8a0: jmp     0x1401ce8cd
0x1401ce8a2: mov     edx,DWORD PTR [rip+0x2499964]        # 0x14266820c
0x1401ce8a8: jmp     0x1401ce8cd
0x1401ce8aa: cmp     esi,edi
0x1401ce8ac: jne     0x1401ce8b6
0x1401ce8ae: mov     edx,DWORD PTR [rip+0x2499904]        # 0x1426681b8
0x1401ce8b4: jmp     0x1401ce8c6
0x1401ce8b6: cmp     esi,ebx
0x1401ce8b8: mov     edx,DWORD PTR [rip+0x2499912]        # 0x1426681d0
0x1401ce8be: je      0x1401ce8c6
0x1401ce8c0: mov     edx,DWORD PTR [rip+0x24998fe]        # 0x1426681c4
0x1401ce8c6: lea     rcx,[rip+0x2497ea3]        # 0x142666770
0x1401ce8cd: call    0x140af1390
0x1401ce8d2: mov     r8d,esi
0x1401ce8d5: mov     edx,0x19
0x1401ce8da: lea     rcx,[rip+0x2497e8f]        # 0x142666770
0x1401ce8e1: call    0x1400bc6e0
0x1401ce8e6: mov     rax,QWORD PTR [r12+0x130]
0x1401ce8ee: cmp     DWORD PTR [rax],0x2
0x1401ce8f1: jne     0x1401ce923
0x1401ce8f3: test    DWORD PTR [rax+0x58],0x200
0x1401ce8fa: je      0x1401ce923
0x1401ce8fc: cmp     esi,edi
0x1401ce8fe: jne     0x1401ce908
0x1401ce900: mov     edx,DWORD PTR [rip+0x24998fe]        # 0x142668204
0x1401ce906: jmp     0x1401ce93f
0x1401ce908: lea     rcx,[rip+0x2497e61]        # 0x142666770
0x1401ce90f: cmp     esi,ebx
0x1401ce911: jne     0x1401ce91b
0x1401ce913: mov     edx,DWORD PTR [rip+0x2499903]        # 0x14266821c
0x1401ce919: jmp     0x1401ce946
0x1401ce91b: mov     edx,DWORD PTR [rip+0x24998ef]        # 0x142668210
0x1401ce921: jmp     0x1401ce946
0x1401ce923: cmp     esi,edi
0x1401ce925: jne     0x1401ce92f
0x1401ce927: mov     edx,DWORD PTR [rip+0x249988f]        # 0x1426681bc
0x1401ce92d: jmp     0x1401ce93f
0x1401ce92f: cmp     esi,ebx
0x1401ce931: mov     edx,DWORD PTR [rip+0x249989d]        # 0x1426681d4
0x1401ce937: je      0x1401ce93f
0x1401ce939: mov     edx,DWORD PTR [rip+0x2499889]        # 0x1426681c8
0x1401ce93f: lea     rcx,[rip+0x2497e2a]        # 0x142666770
0x1401ce946: call    0x140af1390
0x1401ce94b: inc     esi
0x1401ce94d: cmp     esi,ebx
0x1401ce94f: jle     0x1401ce7e0
0x1401ce955: xor     r8d,r8d
0x1401ce958: mov     edx,0x7
0x1401ce95d: mov     r9b,0x1
0x1401ce960: lea     rcx,[rip+0x2497e09]        # 0x142666770
0x1401ce967: call    0x1400bc6f0
0x1401ce96c: lea     r8d,[rdi+0x2]
0x1401ce970: mov     edx,0x18
0x1401ce975: lea     rcx,[rip+0x2497df4]        # 0x142666770
0x1401ce97c: call    0x1400bc6e0
0x1401ce981: lea     rdx,[rip+0x144c520]        # 0x14161aea8 ; literal='Demand surrender and occupy'
0x1401ce988: lea     rcx,[rbp+0x2bd0]
0x1401ce98f: call    0x140069710
0x1401ce994: nop     
0x1401ce995: xor     r9d,r9d
0x1401ce998: xor     r8d,r8d
0x1401ce99b: lea     rdx,[rbp+0x2bd0]
0x1401ce9a2: lea     rcx,[rip+0x2497dc7]        # 0x142666770
0x1401ce9a9: call    0x140af0220
0x1401ce9ae: nop     
0x1401ce9af: lea     rcx,[rbp+0x2bd0]
0x1401ce9b6: call    0x1400693f0
0x1401ce9bb: mov     rax,QWORD PTR [r12+0x130]
0x1401ce9c3: mov     ecx,DWORD PTR [rax]
0x1401ce9c5: cmp     ecx,0x1
0x1401ce9c8: je      0x1401cf2f8
0x1401ce9ce: cmp     ecx,0x2
0x1401ce9d1: je      0x1401cf2f8
0x1401ce9d7: cmp     ecx,0x3
0x1401ce9da: je      0x1401ccb72
0x1401ce9e0: mov     esi,edi
0x1401ce9e2: cmp     edi,ebx
0x1401ce9e4: jg      0x1401ceb4d
0x1401ce9ea: nop     WORD PTR [rax+rax*1+0x0]
0x1401ce9f0: mov     r8d,esi
0x1401ce9f3: mov     edx,0x1b
0x1401ce9f8: lea     rcx,[rip+0x2497d71]        # 0x142666770
0x1401ce9ff: call    0x1400bc6e0
0x1401cea04: mov     rax,QWORD PTR [r12+0x130]
0x1401cea0c: test    BYTE PTR [rax+0x58],0x8
0x1401cea10: je      0x1401cea39
0x1401cea12: cmp     esi,edi
0x1401cea14: jne     0x1401cea1e
0x1401cea16: mov     edx,DWORD PTR [rip+0x24997e0]        # 0x1426681fc
0x1401cea1c: jmp     0x1401cea55
0x1401cea1e: lea     rcx,[rip+0x2497d4b]        # 0x142666770
0x1401cea25: cmp     esi,ebx
0x1401cea27: jne     0x1401cea31
0x1401cea29: mov     edx,DWORD PTR [rip+0x24997e5]        # 0x142668214
0x1401cea2f: jmp     0x1401cea5c
0x1401cea31: mov     edx,DWORD PTR [rip+0x24997d1]        # 0x142668208
0x1401cea37: jmp     0x1401cea5c
0x1401cea39: cmp     esi,edi
0x1401cea3b: jne     0x1401cea45
0x1401cea3d: mov     edx,DWORD PTR [rip+0x2499771]        # 0x1426681b4
0x1401cea43: jmp     0x1401cea55
0x1401cea45: cmp     esi,ebx
0x1401cea47: mov     edx,DWORD PTR [rip+0x249977f]        # 0x1426681cc
0x1401cea4d: je      0x1401cea55
0x1401cea4f: mov     edx,DWORD PTR [rip+0x249976b]        # 0x1426681c0
0x1401cea55: lea     rcx,[rip+0x2497d14]        # 0x142666770
0x1401cea5c: call    0x140af1390
0x1401cea61: mov     r8d,esi
0x1401cea64: mov     edx,0x1c
0x1401cea69: lea     rcx,[rip+0x2497d00]        # 0x142666770
0x1401cea70: call    0x1400bc6e0
0x1401cea75: mov     rax,QWORD PTR [r12+0x130]
0x1401cea7d: test    BYTE PTR [rax+0x58],0x8
0x1401cea81: je      0x1401ceaaa
0x1401cea83: cmp     esi,edi
0x1401cea85: jne     0x1401cea8f
0x1401cea87: mov     edx,DWORD PTR [rip+0x2499773]        # 0x142668200
0x1401cea8d: jmp     0x1401ceac6
0x1401cea8f: lea     rcx,[rip+0x2497cda]        # 0x142666770
0x1401cea96: cmp     esi,ebx
0x1401cea98: jne     0x1401ceaa2
0x1401cea9a: mov     edx,DWORD PTR [rip+0x2499778]        # 0x142668218
0x1401ceaa0: jmp     0x1401ceacd
0x1401ceaa2: mov     edx,DWORD PTR [rip+0x2499764]        # 0x14266820c
0x1401ceaa8: jmp     0x1401ceacd
0x1401ceaaa: cmp     esi,edi
0x1401ceaac: jne     0x1401ceab6
0x1401ceaae: mov     edx,DWORD PTR [rip+0x2499704]        # 0x1426681b8
0x1401ceab4: jmp     0x1401ceac6
0x1401ceab6: cmp     esi,ebx
0x1401ceab8: mov     edx,DWORD PTR [rip+0x2499712]        # 0x1426681d0
0x1401ceabe: je      0x1401ceac6
0x1401ceac0: mov     edx,DWORD PTR [rip+0x24996fe]        # 0x1426681c4
0x1401ceac6: lea     rcx,[rip+0x2497ca3]        # 0x142666770
0x1401ceacd: call    0x140af1390
0x1401cead2: mov     r8d,esi
0x1401cead5: mov     edx,0x1d
0x1401ceada: lea     rcx,[rip+0x2497c8f]        # 0x142666770
0x1401ceae1: call    0x1400bc6e0
0x1401ceae6: mov     rax,QWORD PTR [r12+0x130]
0x1401ceaee: test    BYTE PTR [rax+0x58],0x8
0x1401ceaf2: je      0x1401ceb1b
0x1401ceaf4: cmp     esi,edi
0x1401ceaf6: jne     0x1401ceb00
0x1401ceaf8: mov     edx,DWORD PTR [rip+0x2499706]        # 0x142668204
0x1401ceafe: jmp     0x1401ceb37
0x1401ceb00: lea     rcx,[rip+0x2497c69]        # 0x142666770
0x1401ceb07: cmp     esi,ebx
0x1401ceb09: jne     0x1401ceb13
0x1401ceb0b: mov     edx,DWORD PTR [rip+0x249970b]        # 0x14266821c
0x1401ceb11: jmp     0x1401ceb3e
0x1401ceb13: mov     edx,DWORD PTR [rip+0x24996f7]        # 0x142668210
0x1401ceb19: jmp     0x1401ceb3e
0x1401ceb1b: cmp     esi,edi
0x1401ceb1d: jne     0x1401ceb27
0x1401ceb1f: mov     edx,DWORD PTR [rip+0x2499697]        # 0x1426681bc
0x1401ceb25: jmp     0x1401ceb37
0x1401ceb27: cmp     esi,ebx
0x1401ceb29: mov     edx,DWORD PTR [rip+0x24996a5]        # 0x1426681d4
0x1401ceb2f: je      0x1401ceb37
0x1401ceb31: mov     edx,DWORD PTR [rip+0x2499691]        # 0x1426681c8
0x1401ceb37: lea     rcx,[rip+0x2497c32]        # 0x142666770
0x1401ceb3e: call    0x140af1390
0x1401ceb43: inc     esi
0x1401ceb45: cmp     esi,ebx
0x1401ceb47: jle     0x1401ce9f0
0x1401ceb4d: xor     r8d,r8d
0x1401ceb50: mov     edx,0x7
0x1401ceb55: mov     r9b,0x1
0x1401ceb58: lea     rcx,[rip+0x2497c11]        # 0x142666770
0x1401ceb5f: call    0x1400bc6f0
0x1401ceb64: lea     r8d,[rdi+0x2]
0x1401ceb68: mov     edx,0x1c
0x1401ceb6d: lea     rcx,[rip+0x2497bfc]        # 0x142666770
0x1401ceb74: call    0x1400bc6e0
0x1401ceb79: lea     rdx,[rip+0x144c528]        # 0x14161b0a8 ; literal='Free captives belonging to your civilization'
0x1401ceb80: lea     rcx,[rbp+0x2bf0]
0x1401ceb87: call    0x140069710
0x1401ceb8c: nop     
0x1401ceb8d: xor     r9d,r9d
0x1401ceb90: xor     r8d,r8d
0x1401ceb93: lea     rdx,[rbp+0x2bf0]
0x1401ceb9a: lea     rcx,[rip+0x2497bcf]        # 0x142666770
0x1401ceba1: call    0x140af0220
0x1401ceba6: nop     
0x1401ceba7: lea     rcx,[rbp+0x2bf0]
0x1401cebae: call    0x1400693f0
0x1401cebb3: mov     esi,edi
0x1401cebb5: cmp     edi,ebx
0x1401cebb7: jg      0x1401ced21
0x1401cebbd: mov     eax,0x1e
0x1401cebc2: mov     r8d,esi
0x1401cebc5: mov     edx,eax
0x1401cebc7: lea     rcx,[rip+0x2497ba2]        # 0x142666770
0x1401cebce: call    0x1400bc6e0
0x1401cebd3: mov     rax,QWORD PTR [r12+0x130]
0x1401cebdb: test    BYTE PTR [rax+0x58],0x10
0x1401cebdf: je      0x1401cec08
0x1401cebe1: cmp     esi,edi
0x1401cebe3: jne     0x1401cebed
0x1401cebe5: mov     edx,DWORD PTR [rip+0x2499611]        # 0x1426681fc
0x1401cebeb: jmp     0x1401cec24
0x1401cebed: lea     rcx,[rip+0x2497b7c]        # 0x142666770
0x1401cebf4: cmp     esi,ebx
0x1401cebf6: jne     0x1401cec00
0x1401cebf8: mov     edx,DWORD PTR [rip+0x2499616]        # 0x142668214
0x1401cebfe: jmp     0x1401cec2b
0x1401cec00: mov     edx,DWORD PTR [rip+0x2499602]        # 0x142668208
0x1401cec06: jmp     0x1401cec2b
0x1401cec08: cmp     esi,edi
0x1401cec0a: jne     0x1401cec14
0x1401cec0c: mov     edx,DWORD PTR [rip+0x24995a2]        # 0x1426681b4
0x1401cec12: jmp     0x1401cec24
0x1401cec14: cmp     esi,ebx
0x1401cec16: mov     edx,DWORD PTR [rip+0x24995b0]        # 0x1426681cc
0x1401cec1c: je      0x1401cec24
0x1401cec1e: mov     edx,DWORD PTR [rip+0x249959c]        # 0x1426681c0
0x1401cec24: lea     rcx,[rip+0x2497b45]        # 0x142666770
0x1401cec2b: call    0x140af1390
0x1401cec30: mov     r8d,esi
0x1401cec33: mov     edx,0x1f
0x1401cec38: lea     rcx,[rip+0x2497b31]        # 0x142666770
0x1401cec3f: call    0x1400bc6e0
0x1401cec44: mov     rax,QWORD PTR [r12+0x130]
0x1401cec4c: test    BYTE PTR [rax+0x58],0x10
0x1401cec50: je      0x1401cec79
0x1401cec52: cmp     esi,edi
0x1401cec54: jne     0x1401cec5e
0x1401cec56: mov     edx,DWORD PTR [rip+0x24995a4]        # 0x142668200
0x1401cec5c: jmp     0x1401cec95
0x1401cec5e: lea     rcx,[rip+0x2497b0b]        # 0x142666770
0x1401cec65: cmp     esi,ebx
0x1401cec67: jne     0x1401cec71
0x1401cec69: mov     edx,DWORD PTR [rip+0x24995a9]        # 0x142668218
0x1401cec6f: jmp     0x1401cec9c
0x1401cec71: mov     edx,DWORD PTR [rip+0x2499595]        # 0x14266820c
0x1401cec77: jmp     0x1401cec9c
0x1401cec79: cmp     esi,edi
0x1401cec7b: jne     0x1401cec85
0x1401cec7d: mov     edx,DWORD PTR [rip+0x2499535]        # 0x1426681b8
0x1401cec83: jmp     0x1401cec95
0x1401cec85: cmp     esi,ebx
0x1401cec87: mov     edx,DWORD PTR [rip+0x2499543]        # 0x1426681d0
0x1401cec8d: je      0x1401cec95
0x1401cec8f: mov     edx,DWORD PTR [rip+0x249952f]        # 0x1426681c4
0x1401cec95: lea     rcx,[rip+0x2497ad4]        # 0x142666770
0x1401cec9c: call    0x140af1390
0x1401ceca1: mov     r8d,esi
0x1401ceca4: mov     edx,0x20
0x1401ceca9: lea     rcx,[rip+0x2497ac0]        # 0x142666770
0x1401cecb0: call    0x1400bc6e0
0x1401cecb5: mov     rax,QWORD PTR [r12+0x130]
0x1401cecbd: test    BYTE PTR [rax+0x58],0x10
0x1401cecc1: je      0x1401cecea
0x1401cecc3: cmp     esi,edi
0x1401cecc5: jne     0x1401ceccf
0x1401cecc7: mov     edx,DWORD PTR [rip+0x2499537]        # 0x142668204
0x1401ceccd: jmp     0x1401ced06
0x1401ceccf: lea     rcx,[rip+0x2497a9a]        # 0x142666770
0x1401cecd6: cmp     esi,ebx
0x1401cecd8: jne     0x1401cece2
0x1401cecda: mov     edx,DWORD PTR [rip+0x249953c]        # 0x14266821c
0x1401cece0: jmp     0x1401ced0d
0x1401cece2: mov     edx,DWORD PTR [rip+0x2499528]        # 0x142668210
0x1401cece8: jmp     0x1401ced0d
0x1401cecea: cmp     esi,edi
0x1401cecec: jne     0x1401cecf6
0x1401cecee: mov     edx,DWORD PTR [rip+0x24994c8]        # 0x1426681bc
0x1401cecf4: jmp     0x1401ced06
0x1401cecf6: cmp     esi,ebx
0x1401cecf8: mov     edx,DWORD PTR [rip+0x24994d6]        # 0x1426681d4
0x1401cecfe: je      0x1401ced06
0x1401ced00: mov     edx,DWORD PTR [rip+0x24994c2]        # 0x1426681c8
0x1401ced06: lea     rcx,[rip+0x2497a63]        # 0x142666770
0x1401ced0d: call    0x140af1390
0x1401ced12: inc     esi
0x1401ced14: cmp     esi,ebx
0x1401ced16: mov     eax,0x1e
0x1401ced1b: jle     0x1401cebc2
0x1401ced21: xor     r8d,r8d
0x1401ced24: mov     edx,0x7
0x1401ced29: mov     r9b,0x1
0x1401ced2c: lea     rcx,[rip+0x2497a3d]        # 0x142666770
0x1401ced33: call    0x1400bc6f0
0x1401ced38: lea     r8d,[rdi+0x2]
0x1401ced3c: mov     edx,0x1f
0x1401ced41: lea     rcx,[rip+0x2497a28]        # 0x142666770
0x1401ced48: call    0x1400bc6e0
0x1401ced4d: lea     rdx,[rip+0x144c384]        # 0x14161b0d8 ; literal='Release other prisoners'
0x1401ced54: lea     rcx,[rbp+0x2c10]
0x1401ced5b: call    0x140069710
0x1401ced60: nop     
0x1401ced61: xor     r9d,r9d
0x1401ced64: xor     r8d,r8d
0x1401ced67: lea     rdx,[rbp+0x2c10]
0x1401ced6e: lea     rcx,[rip+0x24979fb]        # 0x142666770
0x1401ced75: call    0x140af0220
0x1401ced7a: nop     
0x1401ced7b: lea     rcx,[rbp+0x2c10]
0x1401ced82: call    0x1400693f0
0x1401ced87: mov     esi,edi
0x1401ced89: cmp     edi,ebx
0x1401ced8b: jg      0x1401ceeee
0x1401ced91: mov     r8d,esi
0x1401ced94: mov     edx,0x21
0x1401ced99: lea     rcx,[rip+0x24979d0]        # 0x142666770
0x1401ceda0: call    0x1400bc6e0
0x1401ceda5: mov     rax,QWORD PTR [r12+0x130]
0x1401cedad: test    BYTE PTR [rax+0x58],0x20
0x1401cedb1: je      0x1401cedda
0x1401cedb3: cmp     esi,edi
0x1401cedb5: jne     0x1401cedbf
0x1401cedb7: mov     edx,DWORD PTR [rip+0x249943f]        # 0x1426681fc
0x1401cedbd: jmp     0x1401cedf6
0x1401cedbf: lea     rcx,[rip+0x24979aa]        # 0x142666770
0x1401cedc6: cmp     esi,ebx
0x1401cedc8: jne     0x1401cedd2
0x1401cedca: mov     edx,DWORD PTR [rip+0x2499444]        # 0x142668214
0x1401cedd0: jmp     0x1401cedfd
0x1401cedd2: mov     edx,DWORD PTR [rip+0x2499430]        # 0x142668208
0x1401cedd8: jmp     0x1401cedfd
0x1401cedda: cmp     esi,edi
0x1401ceddc: jne     0x1401cede6
0x1401cedde: mov     edx,DWORD PTR [rip+0x24993d0]        # 0x1426681b4
0x1401cede4: jmp     0x1401cedf6
0x1401cede6: cmp     esi,ebx
0x1401cede8: mov     edx,DWORD PTR [rip+0x24993de]        # 0x1426681cc
0x1401cedee: je      0x1401cedf6
0x1401cedf0: mov     edx,DWORD PTR [rip+0x24993ca]        # 0x1426681c0
0x1401cedf6: lea     rcx,[rip+0x2497973]        # 0x142666770
0x1401cedfd: call    0x140af1390
0x1401cee02: mov     r8d,esi
0x1401cee05: mov     edx,0x22
0x1401cee0a: lea     rcx,[rip+0x249795f]        # 0x142666770
0x1401cee11: call    0x1400bc6e0
0x1401cee16: mov     rax,QWORD PTR [r12+0x130]
0x1401cee1e: test    BYTE PTR [rax+0x58],0x20
0x1401cee22: je      0x1401cee4b
0x1401cee24: cmp     esi,edi
0x1401cee26: jne     0x1401cee30
0x1401cee28: mov     edx,DWORD PTR [rip+0x24993d2]        # 0x142668200
0x1401cee2e: jmp     0x1401cee67
0x1401cee30: lea     rcx,[rip+0x2497939]        # 0x142666770
0x1401cee37: cmp     esi,ebx
0x1401cee39: jne     0x1401cee43
0x1401cee3b: mov     edx,DWORD PTR [rip+0x24993d7]        # 0x142668218
0x1401cee41: jmp     0x1401cee6e
0x1401cee43: mov     edx,DWORD PTR [rip+0x24993c3]        # 0x14266820c
0x1401cee49: jmp     0x1401cee6e
0x1401cee4b: cmp     esi,edi
0x1401cee4d: jne     0x1401cee57
0x1401cee4f: mov     edx,DWORD PTR [rip+0x2499363]        # 0x1426681b8
0x1401cee55: jmp     0x1401cee67
0x1401cee57: cmp     esi,ebx
0x1401cee59: mov     edx,DWORD PTR [rip+0x2499371]        # 0x1426681d0
0x1401cee5f: je      0x1401cee67
0x1401cee61: mov     edx,DWORD PTR [rip+0x249935d]        # 0x1426681c4
0x1401cee67: lea     rcx,[rip+0x2497902]        # 0x142666770
0x1401cee6e: call    0x140af1390
0x1401cee73: mov     r8d,esi
0x1401cee76: mov     edx,0x23
0x1401cee7b: lea     rcx,[rip+0x24978ee]        # 0x142666770
0x1401cee82: call    0x1400bc6e0
0x1401cee87: mov     rax,QWORD PTR [r12+0x130]
0x1401cee8f: test    BYTE PTR [rax+0x58],0x20
0x1401cee93: je      0x1401ceebc
0x1401cee95: cmp     esi,edi
0x1401cee97: jne     0x1401ceea1
0x1401cee99: mov     edx,DWORD PTR [rip+0x2499365]        # 0x142668204
0x1401cee9f: jmp     0x1401ceed8
0x1401ceea1: lea     rcx,[rip+0x24978c8]        # 0x142666770
0x1401ceea8: cmp     esi,ebx
0x1401ceeaa: jne     0x1401ceeb4
0x1401ceeac: mov     edx,DWORD PTR [rip+0x249936a]        # 0x14266821c
0x1401ceeb2: jmp     0x1401ceedf
0x1401ceeb4: mov     edx,DWORD PTR [rip+0x2499356]        # 0x142668210
0x1401ceeba: jmp     0x1401ceedf
0x1401ceebc: cmp     esi,edi
0x1401ceebe: jne     0x1401ceec8
0x1401ceec0: mov     edx,DWORD PTR [rip+0x24992f6]        # 0x1426681bc
0x1401ceec6: jmp     0x1401ceed8
0x1401ceec8: cmp     esi,ebx
0x1401ceeca: mov     edx,DWORD PTR [rip+0x2499304]        # 0x1426681d4
0x1401ceed0: je      0x1401ceed8
0x1401ceed2: mov     edx,DWORD PTR [rip+0x24992f0]        # 0x1426681c8
0x1401ceed8: lea     rcx,[rip+0x2497891]        # 0x142666770
0x1401ceedf: call    0x140af1390
0x1401ceee4: inc     esi
0x1401ceee6: cmp     esi,ebx
0x1401ceee8: jle     0x1401ced91
0x1401ceeee: xor     r8d,r8d
0x1401ceef1: mov     edx,0x7
0x1401ceef6: mov     r9b,0x1
0x1401ceef9: lea     rcx,[rip+0x2497870]        # 0x142666770
0x1401cef00: call    0x1400bc6f0
0x1401cef05: lea     r8d,[rdi+0x2]
0x1401cef09: mov     edx,0x22
0x1401cef0e: lea     rcx,[rip+0x249785b]        # 0x142666770
0x1401cef15: call    0x1400bc6e0
0x1401cef1a: lea     rdx,[rip+0x144c1cf]        # 0x14161b0f0 ; literal='Take important treasures'
0x1401cef21: lea     rcx,[rbp+0x2c30]
0x1401cef28: call    0x140069710
0x1401cef2d: nop     
0x1401cef2e: xor     r9d,r9d
0x1401cef31: xor     r8d,r8d
0x1401cef34: lea     rdx,[rbp+0x2c30]
0x1401cef3b: lea     rcx,[rip+0x249782e]        # 0x142666770
0x1401cef42: call    0x140af0220
0x1401cef47: nop     
0x1401cef48: lea     rcx,[rbp+0x2c30]
0x1401cef4f: call    0x1400693f0
0x1401cef54: mov     esi,edi
0x1401cef56: cmp     edi,ebx
0x1401cef58: jg      0x1401cf0bd
0x1401cef5e: xchg    ax,ax
0x1401cef60: mov     r8d,esi
0x1401cef63: mov     edx,0x24
0x1401cef68: lea     rcx,[rip+0x2497801]        # 0x142666770
0x1401cef6f: call    0x1400bc6e0
0x1401cef74: mov     rax,QWORD PTR [r12+0x130]
0x1401cef7c: test    BYTE PTR [rax+0x58],0x40
0x1401cef80: je      0x1401cefa9
0x1401cef82: cmp     esi,edi
0x1401cef84: jne     0x1401cef8e
0x1401cef86: mov     edx,DWORD PTR [rip+0x2499270]        # 0x1426681fc
0x1401cef8c: jmp     0x1401cefc5
0x1401cef8e: lea     rcx,[rip+0x24977db]        # 0x142666770
0x1401cef95: cmp     esi,ebx
0x1401cef97: jne     0x1401cefa1
0x1401cef99: mov     edx,DWORD PTR [rip+0x2499275]        # 0x142668214
0x1401cef9f: jmp     0x1401cefcc
0x1401cefa1: mov     edx,DWORD PTR [rip+0x2499261]        # 0x142668208
0x1401cefa7: jmp     0x1401cefcc
0x1401cefa9: cmp     esi,edi
0x1401cefab: jne     0x1401cefb5
0x1401cefad: mov     edx,DWORD PTR [rip+0x2499201]        # 0x1426681b4
0x1401cefb3: jmp     0x1401cefc5
0x1401cefb5: cmp     esi,ebx
0x1401cefb7: mov     edx,DWORD PTR [rip+0x249920f]        # 0x1426681cc
0x1401cefbd: je      0x1401cefc5
0x1401cefbf: mov     edx,DWORD PTR [rip+0x24991fb]        # 0x1426681c0
0x1401cefc5: lea     rcx,[rip+0x24977a4]        # 0x142666770
0x1401cefcc: call    0x140af1390
0x1401cefd1: mov     r8d,esi
0x1401cefd4: mov     edx,0x25
0x1401cefd9: lea     rcx,[rip+0x2497790]        # 0x142666770
0x1401cefe0: call    0x1400bc6e0
0x1401cefe5: mov     rax,QWORD PTR [r12+0x130]
0x1401cefed: test    BYTE PTR [rax+0x58],0x40
0x1401ceff1: je      0x1401cf01a
0x1401ceff3: cmp     esi,edi
0x1401ceff5: jne     0x1401cefff
0x1401ceff7: mov     edx,DWORD PTR [rip+0x2499203]        # 0x142668200
0x1401ceffd: jmp     0x1401cf036
0x1401cefff: lea     rcx,[rip+0x249776a]        # 0x142666770
0x1401cf006: cmp     esi,ebx
0x1401cf008: jne     0x1401cf012
0x1401cf00a: mov     edx,DWORD PTR [rip+0x2499208]        # 0x142668218
0x1401cf010: jmp     0x1401cf03d
0x1401cf012: mov     edx,DWORD PTR [rip+0x24991f4]        # 0x14266820c
0x1401cf018: jmp     0x1401cf03d
0x1401cf01a: cmp     esi,edi
0x1401cf01c: jne     0x1401cf026
0x1401cf01e: mov     edx,DWORD PTR [rip+0x2499194]        # 0x1426681b8
0x1401cf024: jmp     0x1401cf036
0x1401cf026: cmp     esi,ebx
0x1401cf028: mov     edx,DWORD PTR [rip+0x24991a2]        # 0x1426681d0
0x1401cf02e: je      0x1401cf036
0x1401cf030: mov     edx,DWORD PTR [rip+0x249918e]        # 0x1426681c4
0x1401cf036: lea     rcx,[rip+0x2497733]        # 0x142666770
0x1401cf03d: call    0x140af1390
0x1401cf042: mov     r8d,esi
0x1401cf045: mov     edx,0x26
0x1401cf04a: lea     rcx,[rip+0x249771f]        # 0x142666770
0x1401cf051: call    0x1400bc6e0
0x1401cf056: mov     rax,QWORD PTR [r12+0x130]
0x1401cf05e: test    BYTE PTR [rax+0x58],0x40
0x1401cf062: je      0x1401cf08b
0x1401cf064: cmp     esi,edi
0x1401cf066: jne     0x1401cf070
0x1401cf068: mov     edx,DWORD PTR [rip+0x2499196]        # 0x142668204
0x1401cf06e: jmp     0x1401cf0a7
0x1401cf070: lea     rcx,[rip+0x24976f9]        # 0x142666770
0x1401cf077: cmp     esi,ebx
0x1401cf079: jne     0x1401cf083
0x1401cf07b: mov     edx,DWORD PTR [rip+0x249919b]        # 0x14266821c
0x1401cf081: jmp     0x1401cf0ae
0x1401cf083: mov     edx,DWORD PTR [rip+0x2499187]        # 0x142668210
0x1401cf089: jmp     0x1401cf0ae
0x1401cf08b: cmp     esi,edi
0x1401cf08d: jne     0x1401cf097
0x1401cf08f: mov     edx,DWORD PTR [rip+0x2499127]        # 0x1426681bc
0x1401cf095: jmp     0x1401cf0a7
0x1401cf097: cmp     esi,ebx
0x1401cf099: mov     edx,DWORD PTR [rip+0x2499135]        # 0x1426681d4
0x1401cf09f: je      0x1401cf0a7
0x1401cf0a1: mov     edx,DWORD PTR [rip+0x2499121]        # 0x1426681c8
0x1401cf0a7: lea     rcx,[rip+0x24976c2]        # 0x142666770
0x1401cf0ae: call    0x140af1390
0x1401cf0b3: inc     esi
0x1401cf0b5: cmp     esi,ebx
0x1401cf0b7: jle     0x1401cef60
0x1401cf0bd: xor     r8d,r8d
0x1401cf0c0: mov     edx,0x7
0x1401cf0c5: mov     r9b,0x1
0x1401cf0c8: lea     rcx,[rip+0x24976a1]        # 0x142666770
0x1401cf0cf: call    0x1400bc6f0
0x1401cf0d4: lea     r8d,[rdi+0x2]
0x1401cf0d8: mov     edx,0x25
0x1401cf0dd: lea     rcx,[rip+0x249768c]        # 0x142666770
0x1401cf0e4: call    0x1400bc6e0
0x1401cf0e9: lea     rdx,[rip+0x144bcd8]        # 0x14161adc8 ; literal='Loot other items'
0x1401cf0f0: lea     rcx,[rbp+0x2c50]
0x1401cf0f7: call    0x140069710
0x1401cf0fc: nop     
0x1401cf0fd: xor     r9d,r9d
0x1401cf100: xor     r8d,r8d
0x1401cf103: lea     rdx,[rbp+0x2c50]
0x1401cf10a: lea     rcx,[rip+0x249765f]        # 0x142666770
0x1401cf111: call    0x140af0220
0x1401cf116: nop     
0x1401cf117: lea     rcx,[rbp+0x2c50]
0x1401cf11e: call    0x1400693f0
0x1401cf123: mov     esi,edi
0x1401cf125: cmp     edi,ebx
0x1401cf127: jg      0x1401cf28d
0x1401cf12d: nop     DWORD PTR [rax]
0x1401cf130: mov     r8d,esi
0x1401cf133: mov     edx,0x27
0x1401cf138: lea     rcx,[rip+0x2497631]        # 0x142666770
0x1401cf13f: call    0x1400bc6e0
0x1401cf144: mov     rax,QWORD PTR [r12+0x130]
0x1401cf14c: test    BYTE PTR [rax+0x58],0x80
0x1401cf150: je      0x1401cf179
0x1401cf152: cmp     esi,edi
0x1401cf154: jne     0x1401cf15e
0x1401cf156: mov     edx,DWORD PTR [rip+0x24990a0]        # 0x1426681fc
0x1401cf15c: jmp     0x1401cf195
0x1401cf15e: lea     rcx,[rip+0x249760b]        # 0x142666770
0x1401cf165: cmp     esi,ebx
0x1401cf167: jne     0x1401cf171
0x1401cf169: mov     edx,DWORD PTR [rip+0x24990a5]        # 0x142668214
0x1401cf16f: jmp     0x1401cf19c
0x1401cf171: mov     edx,DWORD PTR [rip+0x2499091]        # 0x142668208
0x1401cf177: jmp     0x1401cf19c
0x1401cf179: cmp     esi,edi
0x1401cf17b: jne     0x1401cf185
0x1401cf17d: mov     edx,DWORD PTR [rip+0x2499031]        # 0x1426681b4
0x1401cf183: jmp     0x1401cf195
0x1401cf185: cmp     esi,ebx
0x1401cf187: mov     edx,DWORD PTR [rip+0x249903f]        # 0x1426681cc
0x1401cf18d: je      0x1401cf195
0x1401cf18f: mov     edx,DWORD PTR [rip+0x249902b]        # 0x1426681c0
0x1401cf195: lea     rcx,[rip+0x24975d4]        # 0x142666770
0x1401cf19c: call    0x140af1390
0x1401cf1a1: mov     r8d,esi
0x1401cf1a4: mov     edx,0x28
0x1401cf1a9: lea     rcx,[rip+0x24975c0]        # 0x142666770
0x1401cf1b0: call    0x1400bc6e0
0x1401cf1b5: mov     rax,QWORD PTR [r12+0x130]
0x1401cf1bd: test    BYTE PTR [rax+0x58],0x80
0x1401cf1c1: je      0x1401cf1ea
0x1401cf1c3: cmp     esi,edi
0x1401cf1c5: jne     0x1401cf1cf
0x1401cf1c7: mov     edx,DWORD PTR [rip+0x2499033]        # 0x142668200
0x1401cf1cd: jmp     0x1401cf206
0x1401cf1cf: lea     rcx,[rip+0x249759a]        # 0x142666770
0x1401cf1d6: cmp     esi,ebx
0x1401cf1d8: jne     0x1401cf1e2
0x1401cf1da: mov     edx,DWORD PTR [rip+0x2499038]        # 0x142668218
0x1401cf1e0: jmp     0x1401cf20d
0x1401cf1e2: mov     edx,DWORD PTR [rip+0x2499024]        # 0x14266820c
0x1401cf1e8: jmp     0x1401cf20d
0x1401cf1ea: cmp     esi,edi
0x1401cf1ec: jne     0x1401cf1f6
0x1401cf1ee: mov     edx,DWORD PTR [rip+0x2498fc4]        # 0x1426681b8
0x1401cf1f4: jmp     0x1401cf206
0x1401cf1f6: cmp     esi,ebx
0x1401cf1f8: mov     edx,DWORD PTR [rip+0x2498fd2]        # 0x1426681d0
0x1401cf1fe: je      0x1401cf206
0x1401cf200: mov     edx,DWORD PTR [rip+0x2498fbe]        # 0x1426681c4
0x1401cf206: lea     rcx,[rip+0x2497563]        # 0x142666770
0x1401cf20d: call    0x140af1390
0x1401cf212: mov     r8d,esi
0x1401cf215: mov     edx,0x29
0x1401cf21a: lea     rcx,[rip+0x249754f]        # 0x142666770
0x1401cf221: call    0x1400bc6e0
0x1401cf226: mov     rax,QWORD PTR [r12+0x130]
0x1401cf22e: test    BYTE PTR [rax+0x58],0x80
0x1401cf232: je      0x1401cf25b
0x1401cf234: cmp     esi,edi
0x1401cf236: jne     0x1401cf240
0x1401cf238: mov     edx,DWORD PTR [rip+0x2498fc6]        # 0x142668204
0x1401cf23e: jmp     0x1401cf277
0x1401cf240: lea     rcx,[rip+0x2497529]        # 0x142666770
0x1401cf247: cmp     esi,ebx
0x1401cf249: jne     0x1401cf253
0x1401cf24b: mov     edx,DWORD PTR [rip+0x2498fcb]        # 0x14266821c
0x1401cf251: jmp     0x1401cf27e
0x1401cf253: mov     edx,DWORD PTR [rip+0x2498fb7]        # 0x142668210
0x1401cf259: jmp     0x1401cf27e
0x1401cf25b: cmp     esi,edi
0x1401cf25d: jne     0x1401cf267
0x1401cf25f: mov     edx,DWORD PTR [rip+0x2498f57]        # 0x1426681bc
0x1401cf265: jmp     0x1401cf277
0x1401cf267: cmp     esi,ebx
0x1401cf269: mov     edx,DWORD PTR [rip+0x2498f65]        # 0x1426681d4
0x1401cf26f: je      0x1401cf277
0x1401cf271: mov     edx,DWORD PTR [rip+0x2498f51]        # 0x1426681c8
0x1401cf277: lea     rcx,[rip+0x24974f2]        # 0x142666770
0x1401cf27e: call    0x140af1390
0x1401cf283: inc     esi
0x1401cf285: cmp     esi,ebx
0x1401cf287: jle     0x1401cf130
0x1401cf28d: xor     r8d,r8d
0x1401cf290: mov     edx,0x7
0x1401cf295: mov     r9b,0x1
0x1401cf298: lea     rcx,[rip+0x24974d1]        # 0x142666770
0x1401cf29f: call    0x1400bc6f0
0x1401cf2a4: lea     r8d,[rdi+0x2]
0x1401cf2a8: mov     edx,0x28
0x1401cf2ad: lea     rcx,[rip+0x24974bc]        # 0x142666770
0x1401cf2b4: call    0x1400bc6e0
0x1401cf2b9: lea     rdx,[rip+0x144bb20]        # 0x14161ade0 ; literal='Steal livestock'
0x1401cf2c0: lea     rcx,[rbp+0x2c70]
0x1401cf2c7: call    0x140069710
0x1401cf2cc: nop     
0x1401cf2cd: xor     r9d,r9d
0x1401cf2d0: xor     r8d,r8d
0x1401cf2d3: lea     rdx,[rbp+0x2c70]
0x1401cf2da: lea     rcx,[rip+0x249748f]        # 0x142666770
0x1401cf2e1: call    0x140af0220
0x1401cf2e6: nop     
0x1401cf2e7: lea     rcx,[rbp+0x2c70]
0x1401cf2ee: call    0x1400693f0
0x1401cf2f3: jmp     0x1401ccb72
0x1401cf2f8: xor     r8d,r8d
0x1401cf2fb: mov     edx,0x6
0x1401cf300: mov     r9b,0x1
0x1401cf303: lea     rcx,[rip+0x2497466]        # 0x142666770
0x1401cf30a: call    0x1400bc6f0
0x1401cf30f: lea     r8d,[r13-0x37]
0x1401cf313: mov     edx,0x1b
0x1401cf318: lea     rcx,[rip+0x2497451]        # 0x142666770
0x1401cf31f: call    0x1400bc6e0
0x1401cf324: lea     rdx,[rip+0x144bb9d]        # 0x14161aec8 ; literal='WARNING:  If successful, your soldiers will join the'
0x1401cf32b: lea     rcx,[rbp+0x2c90]
0x1401cf332: call    0x140069710
0x1401cf337: nop     
0x1401cf338: xor     r9d,r9d
0x1401cf33b: xor     r8d,r8d
0x1401cf33e: lea     rdx,[rbp+0x2c90]
0x1401cf345: lea     rcx,[rip+0x2497424]        # 0x142666770
0x1401cf34c: call    0x140af0220
0x1401cf351: nop     
0x1401cf352: lea     rcx,[rbp+0x2c90]
0x1401cf359: call    0x1400693f0
0x1401cf35e: lea     r8d,[r13-0x37]
0x1401cf362: mov     edx,0x1c
0x1401cf367: lea     rcx,[rip+0x2497402]        # 0x142666770
0x1401cf36e: call    0x1400bc6e0
0x1401cf373: lea     rdx,[rip+0x144bb86]        # 0x14161af00 ; literal='occupation and not return.  Your new holdings will'
0x1401cf37a: lea     rcx,[rbp+0x2cb0]
0x1401cf381: call    0x140069710
0x1401cf386: nop     
0x1401cf387: xor     r9d,r9d
0x1401cf38a: xor     r8d,r8d
0x1401cf38d: lea     rdx,[rbp+0x2cb0]
0x1401cf394: lea     rcx,[rip+0x24973d5]        # 0x142666770
0x1401cf39b: call    0x140af0220
0x1401cf3a0: nop     
0x1401cf3a1: lea     rcx,[rbp+0x2cb0]
0x1401cf3a8: call    0x1400693f0
0x1401cf3ad: lea     r8d,[r13-0x37]
0x1401cf3b1: mov     edx,0x1d
0x1401cf3b6: lea     rcx,[rip+0x24973b3]        # 0x142666770
0x1401cf3bd: call    0x1400bc6e0
0x1401cf3c2: lea     rdx,[rip+0x144bb6f]        # 0x14161af38 ; literal='be manageable from this screen.'
0x1401cf3c9: lea     rcx,[rbp+0x2cd0]
0x1401cf3d0: call    0x140069710
0x1401cf3d5: nop     
0x1401cf3d6: xor     r9d,r9d
0x1401cf3d9: xor     r8d,r8d
0x1401cf3dc: lea     rdx,[rbp+0x2cd0]
0x1401cf3e3: lea     rcx,[rip+0x2497386]        # 0x142666770
0x1401cf3ea: call    0x140af0220
0x1401cf3ef: nop     
0x1401cf3f0: lea     rcx,[rbp+0x2cd0]
0x1401cf3f7: call    0x1400693f0
0x1401cf3fc: jmp     0x1401ccb72
0x1401cf401: lea     rcx,[rip+0x2497368]        # 0x142666770
0x1401cf408: cmp     ebx,r15d
0x1401cf40b: jne     0x1401cf415
0x1401cf40d: mov     edx,DWORD PTR [rip+0x2498c99]        # 0x1426680ac
0x1401cf413: jmp     0x1401cf470
0x1401cf415: mov     edx,DWORD PTR [rip+0x2498c85]        # 0x1426680a0
0x1401cf41b: jmp     0x1401cf470
0x1401cf41d: cmp     rdi,r12
0x1401cf420: jne     0x1401cf44b
0x1401cf422: cmp     ebx,r13d
0x1401cf425: jne     0x1401cf42f
0x1401cf427: mov     edx,DWORD PTR [rip+0x2498c6f]        # 0x14266809c
0x1401cf42d: jmp     0x1401cf469
0x1401cf42f: lea     rcx,[rip+0x249733a]        # 0x142666770
0x1401cf436: cmp     ebx,r15d
0x1401cf439: jne     0x1401cf443
0x1401cf43b: mov     edx,DWORD PTR [rip+0x2498c73]        # 0x1426680b4
0x1401cf441: jmp     0x1401cf470
0x1401cf443: mov     edx,DWORD PTR [rip+0x2498c5f]        # 0x1426680a8
0x1401cf449: jmp     0x1401cf470
0x1401cf44b: cmp     ebx,r13d
0x1401cf44e: jne     0x1401cf458
0x1401cf450: mov     edx,DWORD PTR [rip+0x2498c42]        # 0x142668098
0x1401cf456: jmp     0x1401cf469
0x1401cf458: cmp     ebx,r15d
0x1401cf45b: mov     edx,DWORD PTR [rip+0x2498c4f]        # 0x1426680b0
0x1401cf461: je      0x1401cf469
0x1401cf463: mov     edx,DWORD PTR [rip+0x2498c3b]        # 0x1426680a4
0x1401cf469: lea     rcx,[rip+0x2497300]        # 0x142666770
0x1401cf470: call    0x140af1390
0x1401cf475: inc     ebx
0x1401cf477: cmp     ebx,r15d
0x1401cf47a: jle     0x1401ccba0
0x1401cf480: inc     esi
0x1401cf482: inc     rdi
0x1401cf485: cmp     esi,r12d
0x1401cf488: jle     0x1401ccb93
0x1401cf48e: mov     r12,QWORD PTR [rbp-0x78]
0x1401cf492: mov     BYTE PTR [rbp-0x40],0x0
0x1401cf496: mov     BYTE PTR [rbp-0x50],0x0
0x1401cf49a: mov     rbx,QWORD PTR [rsp+0x78]
0x1401cf49f: cmp     BYTE PTR [rbp-0x80],0x0
0x1401cf4a3: je      0x1401cffa9
0x1401cf4a9: add     rbx,0x380
0x1401cf4b0: mov     rcx,rbx
0x1401cf4b3: call    0x140070410
0x1401cf4b8: test    rax,rax
0x1401cf4bb: je      0x1401cff43
0x1401cf4c1: lea     rdx,[rbp+0xa8]
0x1401cf4c8: mov     rcx,rbx
0x1401cf4cb: call    0x140070800
0x1401cf4d0: lea     rdx,[rbp+0x170]
0x1401cf4d7: mov     rcx,rbx
0x1401cf4da: call    0x1400707f0
0x1401cf4df: lea     rdx,[rbp+0x170]
0x1401cf4e6: lea     rcx,[rbp+0xa8]
0x1401cf4ed: call    0x1400baf30
0x1401cf4f2: test    al,al
0x1401cf4f4: jne     0x1401cf565
0x1401cf4f6: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401cf500: lea     rcx,[rbp+0xa8]
0x1401cf507: call    0x1400703d0
0x1401cf50c: mov     rcx,QWORD PTR [rax]
0x1401cf50f: mov     eax,DWORD PTR [r12]
0x1401cf513: cmp     DWORD PTR [rcx+0x58],eax
0x1401cf516: jne     0x1401cf542
0x1401cf518: mov     BYTE PTR [rbp-0x40],0x1
0x1401cf51c: mov     rcx,r12
0x1401cf51f: call    0x1400766d0
0x1401cf524: cmp     eax,0x19
0x1401cf527: jne     0x1401cf542
0x1401cf529: mov     rcx,QWORD PTR [r12+0x130]
0x1401cf531: call    0x140070a10
0x1401cf536: test    rax,rax
0x1401cf539: jne     0x1401cf542
0x1401cf53b: mov     BYTE PTR [rbp-0x40],al
0x1401cf53e: mov     BYTE PTR [rbp-0x50],0x1
0x1401cf542: lea     rcx,[rbp+0xa8]
0x1401cf549: call    0x1400703c0
0x1401cf54e: lea     rdx,[rbp+0x170]
0x1401cf555: lea     rcx,[rbp+0xa8]
0x1401cf55c: call    0x1400baf30
0x1401cf561: test    al,al
0x1401cf563: je      0x1401cf500
0x1401cf565: add     r13d,0x2
0x1401cf569: mov     DWORD PTR [rbp-0x28],r13d
0x1401cf56d: lea     ebx,[r15-0x2]
0x1401cf571: mov     DWORD PTR [rbp-0x6c],ebx
0x1401cf574: lea     ecx,[r14-0x7]
0x1401cf578: mov     eax,0x55555556
0x1401cf57d: imul    ecx
0x1401cf57f: mov     edi,edx
0x1401cf581: shr     edi,0x1f
0x1401cf584: add     edi,edx
0x1401cf586: mov     DWORD PTR [rsp+0x74],edi
0x1401cf58a: mov     r14,QWORD PTR [rsp+0x78]
0x1401cf58f: lea     rcx,[r14+0x380]
0x1401cf596: call    0x140070410
0x1401cf59b: mov     r12,rax
0x1401cf59e: mov     QWORD PTR [rbp+0x18],rax
0x1401cf5a2: cmp     eax,edi
0x1401cf5a4: jle     0x1401cf5ad
0x1401cf5a6: lea     ebx,[r15-0x4]
0x1401cf5aa: mov     DWORD PTR [rbp-0x6c],ebx
0x1401cf5ad: lea     eax,[rbx-0x3]
0x1401cf5b0: mov     DWORD PTR [rbp-0x60],eax
0x1401cf5b3: mov     r15d,0x1
0x1401cf5b9: mov     DWORD PTR [rsp+0x70],r15d
0x1401cf5be: mov     ecx,DWORD PTR [r14+0x3d0]
0x1401cf5c5: mov     edx,r12d
0x1401cf5c8: sub     edx,edi
0x1401cf5ca: cmp     ecx,edx
0x1401cf5cc: cmovle  edx,ecx
0x1401cf5cf: xor     esi,esi
0x1401cf5d1: test    edx,edx
0x1401cf5d3: cmovns  esi,edx
0x1401cf5d6: mov     DWORD PTR [rbp-0x58],esi
0x1401cf5d9: lea     eax,[rdi+rsi*1]
0x1401cf5dc: mov     DWORD PTR [rbp-0x20],eax
0x1401cf5df: cmp     esi,eax
0x1401cf5e1: jge     0x1401cfedf
0x1401cf5e7: add     r14,0x380
0x1401cf5ee: mov     QWORD PTR [rbp-0x30],r14
0x1401cf5f2: cmp     esi,r12d
0x1401cf5f5: jge     0x1401cfed6
0x1401cf5fb: xor     r8d,r8d
0x1401cf5fe: mov     edx,0x7
0x1401cf603: mov     r9b,0x1
0x1401cf606: lea     rcx,[rip+0x2497163]        # 0x142666770
0x1401cf60d: call    0x1400bc6f0
0x1401cf612: mov     esi,r13d
0x1401cf615: cmp     r13d,ebx
0x1401cf618: jg      0x1401cf6ba
0x1401cf61e: lea     r12d,[r15+0x3]
0x1401cf622: movsxd  r14,r13d
0x1401cf625: mov     edi,r15d
0x1401cf628: cmp     r15d,r12d
0x1401cf62b: jge     0x1401cf6a9
0x1401cf62d: movsxd  r15,ebx
0x1401cf630: lea     rbx,[rip+0x2498af9]        # 0x142668130
0x1401cf637: nop     WORD PTR [rax+rax*1+0x0]
0x1401cf640: mov     r8d,esi
0x1401cf643: mov     edx,edi
0x1401cf645: lea     rcx,[rip+0x2497124]        # 0x142666770
0x1401cf64c: call    0x1400bc6e0
0x1401cf651: cmp     esi,r13d
0x1401cf654: jne     0x1401cf65b
0x1401cf656: mov     edx,DWORD PTR [rbx-0x18]
0x1401cf659: jmp     0x1401cf667
0x1401cf65b: cmp     r14,r15
0x1401cf65e: jne     0x1401cf664
0x1401cf660: mov     edx,DWORD PTR [rbx]
0x1401cf662: jmp     0x1401cf667
0x1401cf664: mov     edx,DWORD PTR [rbx-0xc]
0x1401cf667: lea     rcx,[rip+0x2497102]        # 0x142666770
0x1401cf66e: call    0x140af1390
0x1401cf673: xor     edx,edx
0x1401cf675: lea     rcx,[rip+0x221a474]        # 0x1423e9af0
0x1401cf67c: call    0x140073550
0x1401cf681: test    al,al
0x1401cf683: je      0x1401cf696
0x1401cf685: mov     r8b,0x1
0x1401cf688: xor     edx,edx
0x1401cf68a: lea     rcx,[rip+0x24970df]        # 0x142666770
0x1401cf691: call    0x1400bc750
0x1401cf696: inc     edi
0x1401cf698: add     rbx,0x4
0x1401cf69c: cmp     edi,r12d
0x1401cf69f: jl      0x1401cf640
0x1401cf6a1: mov     r15d,DWORD PTR [rsp+0x70]
0x1401cf6a6: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401cf6a9: inc     esi
0x1401cf6ab: inc     r14
0x1401cf6ae: cmp     esi,ebx
0x1401cf6b0: jle     0x1401cf625
0x1401cf6b6: mov     r14,QWORD PTR [rbp-0x30]
0x1401cf6ba: mov     r12,QWORD PTR [rsp+0x78]
0x1401cf6bf: lea     rcx,[r12+0x3b0]
0x1401cf6c7: movsxd  rsi,DWORD PTR [rbp-0x58]
0x1401cf6cb: mov     rbx,rsi
0x1401cf6ce: mov     rdx,rsi
0x1401cf6d1: call    0x140070920
0x1401cf6d6: xor     r8d,r8d
0x1401cf6d9: mov     r9b,0x1
0x1401cf6dc: lea     rcx,[rip+0x249708d]        # 0x142666770
0x1401cf6e3: test    BYTE PTR [rax],r9b
0x1401cf6e6: mov     edx,0x3
0x1401cf6eb: je      0x1401cf6f2
0x1401cf6ed: mov     edx,0x4
0x1401cf6f2: call    0x1400bc6f0
0x1401cf6f7: mov     r8d,r13d
0x1401cf6fa: lea     edx,[r15+0x1]
0x1401cf6fe: lea     rcx,[rip+0x249706b]        # 0x142666770
0x1401cf705: call    0x1400bc6e0
0x1401cf70a: lea     rcx,[rbp+0xfb0]
0x1401cf711: call    0x140070c50
0x1401cf716: nop     
0x1401cf717: mov     rdx,rbx
0x1401cf71a: mov     rcx,r14
0x1401cf71d: call    0x1400707e0
0x1401cf722: mov     rcx,QWORD PTR [rax]
0x1401cf725: cmp     DWORD PTR [rcx+0x4],0xffffffff
0x1401cf729: je      0x1401cf765
0x1401cf72b: mov     rdx,rbx
0x1401cf72e: mov     rcx,r14
0x1401cf731: call    0x1400707e0
0x1401cf736: mov     rdx,QWORD PTR [rax]
0x1401cf739: mov     edx,DWORD PTR [rdx+0x4]
0x1401cf73c: lea     rcx,[rip+0x23468f5]        # 0x142516038
0x1401cf743: call    0x140069380
0x1401cf748: test    rax,rax
0x1401cf74b: je      0x1401cf778
0x1401cf74d: lea     rcx,[rax+0x38]
0x1401cf751: xor     r9d,r9d
0x1401cf754: mov     r8b,0x1
0x1401cf757: lea     rdx,[rbp+0xfb0]
0x1401cf75e: call    0x140aaafe0
0x1401cf763: jmp     0x1401cf778
0x1401cf765: lea     rdx,[rip+0x144b3fc]        # 0x14161ab68 ; literal='Messenger (unfilled)'
0x1401cf76c: lea     rcx,[rbp+0xfb0]
0x1401cf773: call    0x140070b40
0x1401cf778: lea     rcx,[rbp+0xfb0]
0x1401cf77f: call    0x1400708f0
0x1401cf784: cmp     rax,0x19
0x1401cf788: jb      0x1401cf7da
0x1401cf78a: xor     r8d,r8d
0x1401cf78d: mov     edx,0x18
0x1401cf792: lea     rcx,[rbp+0xfb0]
0x1401cf799: call    0x1400e27f0
0x1401cf79e: mov     edx,0x15
0x1401cf7a3: lea     rcx,[rbp+0xfb0]
0x1401cf7aa: call    0x1400fcb70
0x1401cf7af: mov     BYTE PTR [rax],0x2e
0x1401cf7b2: mov     edx,0x16
0x1401cf7b7: lea     rcx,[rbp+0xfb0]
0x1401cf7be: call    0x1400fcb70
0x1401cf7c3: mov     BYTE PTR [rax],0x2e
0x1401cf7c6: mov     edx,0x17
0x1401cf7cb: lea     rcx,[rbp+0xfb0]
0x1401cf7d2: call    0x1400fcb70
0x1401cf7d7: mov     BYTE PTR [rax],0x2e
0x1401cf7da: xor     r9d,r9d
0x1401cf7dd: xor     r8d,r8d
0x1401cf7e0: lea     rdx,[rbp+0xfb0]
0x1401cf7e7: lea     rcx,[rip+0x2496f82]        # 0x142666770
0x1401cf7ee: call    0x140af0220
0x1401cf7f3: lea     r8d,[r13+0x19]
0x1401cf7f7: lea     edx,[r15+0x1]
0x1401cf7fb: lea     rcx,[rip+0x2496f6e]        # 0x142666770
0x1401cf802: call    0x1400bc6e0
0x1401cf807: mov     rdx,rsi
0x1401cf80a: mov     rcx,r14
0x1401cf80d: call    0x1400707e0
0x1401cf812: mov     rcx,QWORD PTR [rax]
0x1401cf815: cmp     DWORD PTR [rcx+0x58],0xffffffff
0x1401cf819: je      0x1401cfd8c
0x1401cf81f: mov     rdx,rsi
0x1401cf822: mov     rcx,r14
0x1401cf825: call    0x1400707e0
0x1401cf82a: mov     rcx,QWORD PTR [rax]
0x1401cf82d: mov     rbx,QWORD PTR [rbp-0x78]
0x1401cf831: mov     eax,DWORD PTR [rbx]
0x1401cf833: xor     r8d,r8d
0x1401cf836: cmp     DWORD PTR [rcx+0x58],eax
0x1401cf839: lea     rcx,[rip+0x2496f30]        # 0x142666770
0x1401cf840: jne     0x1401cf88e
0x1401cf842: mov     edx,0x2
0x1401cf847: mov     r9b,0x1
0x1401cf84a: call    0x1400bc6f0
0x1401cf84f: lea     rdx,[rip+0x144b702]        # 0x14161af58 ; literal='On this mission'
0x1401cf856: lea     rcx,[rbp+0x2cf0]
0x1401cf85d: call    0x140069710
0x1401cf862: nop     
0x1401cf863: xor     r9d,r9d
0x1401cf866: xor     r8d,r8d
0x1401cf869: lea     rdx,[rbp+0x2cf0]
0x1401cf870: lea     rcx,[rip+0x2496ef9]        # 0x142666770
0x1401cf877: call    0x140af0220
0x1401cf87c: nop     
0x1401cf87d: lea     rcx,[rbp+0x2cf0]
0x1401cf884: call    0x1400693f0
0x1401cf889: jmp     0x1401cfde1
0x1401cf88e: mov     edx,0x3
0x1401cf893: xor     r9d,r9d
0x1401cf896: call    0x1400bc6f0
0x1401cf89b: mov     rdx,rsi
0x1401cf89e: mov     rcx,r14
0x1401cf8a1: call    0x1400707e0
0x1401cf8a6: mov     rdx,QWORD PTR [rax]
0x1401cf8a9: mov     edx,DWORD PTR [rdx+0x58]
0x1401cf8ac: lea     rcx,[rip+0x23348d5]        # 0x142504188
0x1401cf8b3: call    0x140073b30
0x1401cf8b8: mov     rbx,rax
0x1401cf8bb: test    rax,rax
0x1401cf8be: je      0x1401cfd3e
0x1401cf8c4: mov     rcx,rax
0x1401cf8c7: call    0x1400766d0
0x1401cf8cc: sub     eax,0x2
0x1401cf8cf: je      0x1401cfc24
0x1401cf8d5: sub     eax,0xf
0x1401cf8d8: je      0x1401cfb68
0x1401cf8de: sub     eax,0x1
0x1401cf8e1: je      0x1401cfa84
0x1401cf8e7: sub     eax,0x1
0x1401cf8ea: je      0x1401cf9ce
0x1401cf8f0: cmp     eax,0x6
0x1401cf8f3: jne     0x1401cfddd
0x1401cf8f9: lea     rcx,[rbp+0xf70]
0x1401cf900: call    0x140070c50
0x1401cf905: nop     
0x1401cf906: lea     rdx,[rbp+0xf70]
0x1401cf90d: mov     rcx,QWORD PTR [rbx+0x130]
0x1401cf914: call    0x1401bdb90
0x1401cf919: lea     rdx,[rip+0x14494ac]        # 0x141618dcc ; literal=' at '
0x1401cf920: lea     rcx,[rbp+0xf70]
0x1401cf927: call    0x140070b20
0x1401cf92c: xor     r9d,r9d
0x1401cf92f: mov     r8d,DWORD PTR [rbx+0x8]
0x1401cf933: lea     rdx,[rbp+0xf70]
0x1401cf93a: lea     rcx,[rip+0x23466f7]        # 0x142516038
0x1401cf941: call    0x140ba8410
0x1401cf946: lea     rcx,[rbp+0xf70]
0x1401cf94d: call    0x1400708f0
0x1401cf952: cmp     rax,0x1e
0x1401cf956: jb      0x1401cf9a8
0x1401cf958: xor     r8d,r8d
0x1401cf95b: mov     edx,0x1d
0x1401cf960: lea     rcx,[rbp+0xf70]
0x1401cf967: call    0x1400e27f0
0x1401cf96c: mov     edx,0x1a
0x1401cf971: lea     rcx,[rbp+0xf70]
0x1401cf978: call    0x1400fcb70
0x1401cf97d: mov     BYTE PTR [rax],0x2e
0x1401cf980: mov     edx,0x1b
0x1401cf985: lea     rcx,[rbp+0xf70]
0x1401cf98c: call    0x1400fcb70
0x1401cf991: mov     BYTE PTR [rax],0x2e
0x1401cf994: mov     edx,0x1c
0x1401cf999: lea     rcx,[rbp+0xf70]
0x1401cf9a0: call    0x1400fcb70
0x1401cf9a5: mov     BYTE PTR [rax],0x2e
0x1401cf9a8: xor     r9d,r9d
0x1401cf9ab: xor     r8d,r8d
0x1401cf9ae: lea     rdx,[rbp+0xf70]
0x1401cf9b5: lea     rcx,[rip+0x2496db4]        # 0x142666770
0x1401cf9bc: call    0x140af0220
0x1401cf9c1: nop     
0x1401cf9c2: lea     rcx,[rbp+0xf70]
0x1401cf9c9: jmp     0x1401cfdd8
0x1401cf9ce: lea     rdx,[rip+0x144b33b]        # 0x14161ad10 ; literal='Request workers from '
0x1401cf9d5: lea     rcx,[rbp+0x1110]
0x1401cf9dc: call    0x140069710
0x1401cf9e1: nop     
0x1401cf9e2: xor     r9d,r9d
0x1401cf9e5: mov     r8d,DWORD PTR [rbx+0x8]
0x1401cf9e9: lea     rdx,[rbp+0x1110]
0x1401cf9f0: lea     rcx,[rip+0x2346641]        # 0x142516038
0x1401cf9f7: call    0x140ba8410
0x1401cf9fc: lea     rcx,[rbp+0x1110]
0x1401cfa03: call    0x1400708f0
0x1401cfa08: cmp     rax,0x1e
0x1401cfa0c: jb      0x1401cfa5e
0x1401cfa0e: xor     r8d,r8d
0x1401cfa11: mov     edx,0x1d
0x1401cfa16: lea     rcx,[rbp+0x1110]
0x1401cfa1d: call    0x1400e27f0
0x1401cfa22: mov     edx,0x1a
0x1401cfa27: lea     rcx,[rbp+0x1110]
0x1401cfa2e: call    0x1400fcb70
0x1401cfa33: mov     BYTE PTR [rax],0x2e
0x1401cfa36: mov     edx,0x1b
0x1401cfa3b: lea     rcx,[rbp+0x1110]
0x1401cfa42: call    0x1400fcb70
0x1401cfa47: mov     BYTE PTR [rax],0x2e
0x1401cfa4a: mov     edx,0x1c
0x1401cfa4f: lea     rcx,[rbp+0x1110]
0x1401cfa56: call    0x1400fcb70
0x1401cfa5b: mov     BYTE PTR [rax],0x2e
0x1401cfa5e: xor     r9d,r9d
0x1401cfa61: xor     r8d,r8d
0x1401cfa64: lea     rdx,[rbp+0x1110]
0x1401cfa6b: lea     rcx,[rip+0x2496cfe]        # 0x142666770
0x1401cfa72: call    0x140af0220
0x1401cfa77: nop     
0x1401cfa78: lea     rcx,[rbp+0x1110]
0x1401cfa7f: jmp     0x1401cfdd8
0x1401cfa84: lea     rdx,[rip+0x1434a6d]        # 0x1416044f8 ; literal='Rescue '
0x1401cfa8b: lea     rcx,[rbp+0x1130]
0x1401cfa92: call    0x140069710
0x1401cfa97: nop     
0x1401cfa98: lea     rcx,[rbp+0x5a0]
0x1401cfa9f: call    0x140073640
0x1401cfaa4: mov     r8,QWORD PTR [rbx+0x130]
0x1401cfaab: mov     edi,0x1
0x1401cfab0: mov     WORD PTR [rsp+0x28],di
0x1401cfab5: mov     WORD PTR [rsp+0x20],di
0x1401cfaba: lea     r9,[rbp+0x5a0]
0x1401cfac1: mov     r8d,DWORD PTR [r8]
0x1401cfac4: lea     rdx,[rbp+0x1130]
0x1401cfacb: lea     rcx,[rip+0x2346566]        # 0x142516038
0x1401cfad2: call    0x140ba79f0
0x1401cfad7: lea     rcx,[rbp+0x1130]
0x1401cfade: call    0x1400708f0
0x1401cfae3: cmp     rax,0x1e
0x1401cfae7: jb      0x1401cfb39
0x1401cfae9: xor     r8d,r8d
0x1401cfaec: mov     edx,0x1d
0x1401cfaf1: lea     rcx,[rbp+0x1130]
0x1401cfaf8: call    0x1400e27f0
0x1401cfafd: mov     edx,0x1a
0x1401cfb02: lea     rcx,[rbp+0x1130]
0x1401cfb09: call    0x1400fcb70
0x1401cfb0e: mov     BYTE PTR [rax],0x2e
0x1401cfb11: mov     edx,0x1b
0x1401cfb16: lea     rcx,[rbp+0x1130]
0x1401cfb1d: call    0x1400fcb70
0x1401cfb22: mov     BYTE PTR [rax],0x2e
0x1401cfb25: mov     edx,0x1c
0x1401cfb2a: lea     rcx,[rbp+0x1130]
0x1401cfb31: call    0x1400fcb70
0x1401cfb36: mov     BYTE PTR [rax],0x2e
0x1401cfb39: xor     r9d,r9d
0x1401cfb3c: xor     r8d,r8d
0x1401cfb3f: lea     rdx,[rbp+0x1130]
0x1401cfb46: lea     rcx,[rip+0x2496c23]        # 0x142666770
0x1401cfb4d: call    0x140af0220
0x1401cfb52: nop     
0x1401cfb53: lea     rcx,[rbp+0x1130]
0x1401cfb5a: call    0x1400693f0
0x1401cfb5f: mov     rbx,QWORD PTR [rbp-0x78]
0x1401cfb63: jmp     0x1401cfde6
0x1401cfb68: lea     rdx,[rip+0x144b219]        # 0x14161ad88 ; literal='Recover '
0x1401cfb6f: lea     rcx,[rbp+0x1150]
0x1401cfb76: call    0x140069710
0x1401cfb7b: nop     
0x1401cfb7c: mov     r8,QWORD PTR [rbx+0x130]
0x1401cfb83: xor     r9d,r9d
0x1401cfb86: mov     r8d,DWORD PTR [r8]
0x1401cfb89: lea     rdx,[rbp+0x1150]
0x1401cfb90: lea     rcx,[rip+0x23464a1]        # 0x142516038
0x1401cfb97: call    0x140ba8ee0
0x1401cfb9c: lea     rcx,[rbp+0x1150]
0x1401cfba3: call    0x1400708f0
0x1401cfba8: cmp     rax,0x1e
0x1401cfbac: jb      0x1401cfbfe
0x1401cfbae: xor     r8d,r8d
0x1401cfbb1: mov     edx,0x1d
0x1401cfbb6: lea     rcx,[rbp+0x1150]
0x1401cfbbd: call    0x1400e27f0
0x1401cfbc2: mov     edx,0x1a
0x1401cfbc7: lea     rcx,[rbp+0x1150]
0x1401cfbce: call    0x1400fcb70
0x1401cfbd3: mov     BYTE PTR [rax],0x2e
0x1401cfbd6: mov     edx,0x1b
0x1401cfbdb: lea     rcx,[rbp+0x1150]
0x1401cfbe2: call    0x1400fcb70
0x1401cfbe7: mov     BYTE PTR [rax],0x2e
0x1401cfbea: mov     edx,0x1c
0x1401cfbef: lea     rcx,[rbp+0x1150]
0x1401cfbf6: call    0x1400fcb70
0x1401cfbfb: mov     BYTE PTR [rax],0x2e
0x1401cfbfe: xor     r9d,r9d
0x1401cfc01: xor     r8d,r8d
0x1401cfc04: lea     rdx,[rbp+0x1150]
0x1401cfc0b: lea     rcx,[rip+0x2496b5e]        # 0x142666770
0x1401cfc12: call    0x140af0220
0x1401cfc17: nop     
0x1401cfc18: lea     rcx,[rbp+0x1150]
0x1401cfc1f: jmp     0x1401cfdd8
0x1401cfc24: lea     rcx,[rbp+0xe30]
0x1401cfc2b: call    0x140070c50
0x1401cfc30: nop     
0x1401cfc31: mov     rax,QWORD PTR [rbx+0x130]
0x1401cfc38: movsxd  rcx,DWORD PTR [rax]
0x1401cfc3b: cmp     ecx,0x6
0x1401cfc3e: ja      0x1401cfc89
0x1401cfc40: lea     rdx,[rip+0xffffffffffe303b9]        # 0x140000000
0x1401cfc47: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d6678]
0x1401cfc4e: add     rcx,rdx
0x1401cfc51: jmp     rcx
0x1401cfc53: lea     rdx,[rip+0x144b0ce]        # 0x14161ad28 ; literal='Explore '
0x1401cfc5a: jmp     0x1401cfc90
0x1401cfc5c: lea     rdx,[rip+0x144b0d5]        # 0x14161ad38 ; literal='Pillage '
0x1401cfc63: jmp     0x1401cfc90
0x1401cfc65: lea     rdx,[rip+0x144b0dc]        # 0x14161ad48 ; literal='Demand tribute from '
0x1401cfc6c: jmp     0x1401cfc90
0x1401cfc6e: lea     rdx,[rip+0x144b0eb]        # 0x14161ad60 ; literal='Raze '
0x1401cfc75: jmp     0x1401cfc90
0x1401cfc77: lea     rdx,[rip+0x144b0ea]        # 0x14161ad68 ; literal='Take over '
0x1401cfc7e: jmp     0x1401cfc90
0x1401cfc80: lea     rdx,[rip+0x144b0ed]        # 0x14161ad74 ; literal='Seize '
0x1401cfc87: jmp     0x1401cfc90
0x1401cfc89: lea     rdx,[rip+0x144b0ec]        # 0x14161ad7c ; literal='Raid '
0x1401cfc90: lea     rcx,[rbp+0xe30]
0x1401cfc97: call    0x140070b40
0x1401cfc9c: xor     r9d,r9d
0x1401cfc9f: mov     r8d,DWORD PTR [rbx+0x8]
0x1401cfca3: lea     rdx,[rbp+0xe30]
0x1401cfcaa: lea     rcx,[rip+0x2346387]        # 0x142516038
0x1401cfcb1: call    0x140ba8410
0x1401cfcb6: lea     rcx,[rbp+0xe30]
0x1401cfcbd: call    0x1400708f0
0x1401cfcc2: cmp     rax,0x1e
0x1401cfcc6: jb      0x1401cfd18
0x1401cfcc8: xor     r8d,r8d
0x1401cfccb: mov     edx,0x1d
0x1401cfcd0: lea     rcx,[rbp+0xe30]
0x1401cfcd7: call    0x1400e27f0
0x1401cfcdc: mov     edx,0x1a
0x1401cfce1: lea     rcx,[rbp+0xe30]
0x1401cfce8: call    0x1400fcb70
0x1401cfced: mov     BYTE PTR [rax],0x2e
0x1401cfcf0: mov     edx,0x1b
0x1401cfcf5: lea     rcx,[rbp+0xe30]
0x1401cfcfc: call    0x1400fcb70
0x1401cfd01: mov     BYTE PTR [rax],0x2e
0x1401cfd04: mov     edx,0x1c
0x1401cfd09: lea     rcx,[rbp+0xe30]
0x1401cfd10: call    0x1400fcb70
0x1401cfd15: mov     BYTE PTR [rax],0x2e
0x1401cfd18: xor     r9d,r9d
0x1401cfd1b: xor     r8d,r8d
0x1401cfd1e: lea     rdx,[rbp+0xe30]
0x1401cfd25: lea     rcx,[rip+0x2496a44]        # 0x142666770
0x1401cfd2c: call    0x140af0220
0x1401cfd31: nop     
0x1401cfd32: lea     rcx,[rbp+0xe30]
0x1401cfd39: jmp     0x1401cfdd8
0x1401cfd3e: xor     r8d,r8d
0x1401cfd41: mov     edx,0x7
0x1401cfd46: xor     r9d,r9d
0x1401cfd49: lea     rcx,[rip+0x2496a20]        # 0x142666770
0x1401cfd50: call    0x1400bc6f0
0x1401cfd55: lea     rdx,[rip+0x144b20c]        # 0x14161af68 ; literal='No specific orders'
0x1401cfd5c: lea     rcx,[rbp+0x2d10]
0x1401cfd63: call    0x140069710
0x1401cfd68: nop     
0x1401cfd69: xor     r9d,r9d
0x1401cfd6c: xor     r8d,r8d
0x1401cfd6f: lea     rdx,[rbp+0x2d10]
0x1401cfd76: lea     rcx,[rip+0x24969f3]        # 0x142666770
0x1401cfd7d: call    0x140af0220
0x1401cfd82: nop     
0x1401cfd83: lea     rcx,[rbp+0x2d10]
0x1401cfd8a: jmp     0x1401cfdd8
0x1401cfd8c: xor     r8d,r8d
0x1401cfd8f: mov     edx,0x7
0x1401cfd94: xor     r9d,r9d
0x1401cfd97: lea     rcx,[rip+0x24969d2]        # 0x142666770
0x1401cfd9e: call    0x1400bc6f0
0x1401cfda3: lea     rdx,[rip+0x144b1be]        # 0x14161af68 ; literal='No specific orders'
0x1401cfdaa: lea     rcx,[rbp+0x2d30]
0x1401cfdb1: call    0x140069710
0x1401cfdb6: nop     
0x1401cfdb7: xor     r9d,r9d
0x1401cfdba: xor     r8d,r8d
0x1401cfdbd: lea     rdx,[rbp+0x2d30]
0x1401cfdc4: lea     rcx,[rip+0x24969a5]        # 0x142666770
0x1401cfdcb: call    0x140af0220
0x1401cfdd0: nop     
0x1401cfdd1: lea     rcx,[rbp+0x2d30]
0x1401cfdd8: call    0x1400693f0
0x1401cfddd: mov     rbx,QWORD PTR [rbp-0x78]
0x1401cfde1: mov     edi,0x1
0x1401cfde6: lea     rcx,[r12+0x3b0]
0x1401cfdee: mov     rdx,rsi
0x1401cfdf1: call    0x140070920
0x1401cfdf6: test    BYTE PTR [rax],0x1
0x1401cfdf9: jne     0x1401cfeac
0x1401cfdff: xor     r15b,r15b
0x1401cfe02: mov     rdx,rsi
0x1401cfe05: mov     rcx,r14
0x1401cfe08: call    0x1400707e0
0x1401cfe0d: mov     rcx,QWORD PTR [rax]
0x1401cfe10: cmp     DWORD PTR [rcx+0x58],0xffffffff
0x1401cfe14: je      0x1401cfe31
0x1401cfe16: mov     rdx,rsi
0x1401cfe19: mov     rcx,r14
0x1401cfe1c: call    0x1400707e0
0x1401cfe21: mov     rcx,QWORD PTR [rax]
0x1401cfe24: movzx   r15d,r15b
0x1401cfe28: mov     eax,DWORD PTR [rbx]
0x1401cfe2a: cmp     DWORD PTR [rcx+0x58],eax
0x1401cfe2d: cmove   r15d,edi
0x1401cfe31: mov     r14d,DWORD PTR [rsp+0x70]
0x1401cfe36: lea     r12,[rip+0x249de1b]        # 0x14266dc58
0x1401cfe3d: mov     r13d,DWORD PTR [rbp-0x60]
0x1401cfe41: mov     edi,r13d
0x1401cfe44: mov     rbx,r12
0x1401cfe47: mov     esi,0x4
0x1401cfe4c: nop     DWORD PTR [rax+0x0]
0x1401cfe50: mov     r8d,edi
0x1401cfe53: mov     edx,r14d
0x1401cfe56: lea     rcx,[rip+0x2496913]        # 0x142666770
0x1401cfe5d: call    0x1400bc6e0
0x1401cfe62: xor     r8d,r8d
0x1401cfe65: lea     rcx,[rip+0x2496904]        # 0x142666770
0x1401cfe6c: test    r15b,r15b
0x1401cfe6f: je      0x1401cfe76
0x1401cfe71: mov     edx,DWORD PTR [rbx-0x30]
0x1401cfe74: jmp     0x1401cfe78
0x1401cfe76: mov     edx,DWORD PTR [rbx]
0x1401cfe78: call    0x140af19c0
0x1401cfe7d: inc     edi
0x1401cfe7f: add     rbx,0xc
0x1401cfe83: sub     rsi,0x1
0x1401cfe87: jne     0x1401cfe50
0x1401cfe89: inc     r14d
0x1401cfe8c: add     r12,0x4
0x1401cfe90: lea     rax,[rip+0x249ddcd]        # 0x14266dc64
0x1401cfe97: cmp     r12,rax
0x1401cfe9a: jl      0x1401cfe41
0x1401cfe9c: mov     r13d,DWORD PTR [rbp-0x28]
0x1401cfea0: mov     r15d,DWORD PTR [rsp+0x70]
0x1401cfea5: mov     esi,DWORD PTR [rbp-0x58]
0x1401cfea8: mov     r14,QWORD PTR [rbp-0x30]
0x1401cfeac: add     r15d,0x3
0x1401cfeb0: mov     DWORD PTR [rsp+0x70],r15d
0x1401cfeb5: lea     rcx,[rbp+0xfb0]
0x1401cfebc: call    0x1400693f0
0x1401cfec1: inc     esi
0x1401cfec3: mov     DWORD PTR [rbp-0x58],esi
0x1401cfec6: cmp     esi,DWORD PTR [rbp-0x20]
0x1401cfec9: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401cfecc: mov     r12,QWORD PTR [rbp+0x18]
0x1401cfed0: jl      0x1401cf5f2
0x1401cfed6: mov     edi,DWORD PTR [rsp+0x74]
0x1401cfeda: mov     r14,QWORD PTR [rsp+0x78]
0x1401cfedf: cmp     r12d,edi
0x1401cfee2: jle     0x1401d0bc0
0x1401cfee8: lea     ebx,[rdi*2-0x1]
0x1401cfeef: add     ebx,edi
0x1401cfef1: lea     rcx,[rbp+0x230]
0x1401cfef8: call    0x1400bc920
0x1401cfefd: lea     r9d,[r12-0x1]
0x1401cff02: mov     DWORD PTR [rsp+0x30],ebx
0x1401cff06: mov     DWORD PTR [rsp+0x28],0x2
0x1401cff0e: mov     DWORD PTR [rsp+0x20],edi
0x1401cff12: xor     r8d,r8d
0x1401cff15: mov     edx,DWORD PTR [r14+0x3d0]
0x1401cff1c: lea     rcx,[rbp+0x230]
0x1401cff23: call    0x1400bc940
0x1401cff28: mov     r9d,DWORD PTR [rbp-0x6c]
0x1401cff2c: inc     r9d
0x1401cff2f: movzx   eax,BYTE PTR [r14+0x3d4]
0x1401cff37: lea     rcx,[rbp+0x230]
0x1401cff3e: jmp     0x1401d0ba8
0x1401cff43: xor     r8d,r8d
0x1401cff46: mov     edx,0x6
0x1401cff4b: mov     r9b,0x1
0x1401cff4e: lea     rcx,[rip+0x249681b]        # 0x142666770
0x1401cff55: call    0x1400bc6f0
0x1401cff5a: lea     r8d,[r13+0x2]
0x1401cff5e: mov     edx,0x1
0x1401cff63: lea     rcx,[rip+0x2496806]        # 0x142666770
0x1401cff6a: call    0x1400bc6e0
0x1401cff6f: lea     rdx,[rip+0x144b00a]        # 0x14161af80 ; literal='No messengers available'
0x1401cff76: lea     rcx,[rbp+0x2d70]
0x1401cff7d: call    0x140069710
0x1401cff82: nop     
0x1401cff83: xor     r9d,r9d
0x1401cff86: xor     r8d,r8d
0x1401cff89: lea     rdx,[rbp+0x2d70]
0x1401cff90: lea     rcx,[rip+0x24967d9]        # 0x142666770
0x1401cff97: call    0x140af0220
0x1401cff9c: nop     
0x1401cff9d: lea     rcx,[rbp+0x2d70]
0x1401cffa4: jmp     0x1401d0e6f
0x1401cffa9: add     rbx,0x350
0x1401cffb0: mov     rcx,rbx
0x1401cffb3: call    0x140070410
0x1401cffb8: test    rax,rax
0x1401cffbb: je      0x1401d0e0e
0x1401cffc1: lea     rdx,[rbp+0xb0]
0x1401cffc8: mov     rcx,rbx
0x1401cffcb: call    0x140070800
0x1401cffd0: lea     rdx,[rbp+0x178]
0x1401cffd7: mov     rcx,rbx
0x1401cffda: call    0x1400707f0
0x1401cffdf: lea     rdx,[rbp+0x178]
0x1401cffe6: lea     rcx,[rbp+0xb0]
0x1401cffed: call    0x1400baf30
0x1401cfff2: test    al,al
0x1401cfff4: jne     0x1401d0068
0x1401cfff6: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401d0000: lea     rcx,[rbp+0xb0]
0x1401d0007: call    0x1400703d0
0x1401d000c: mov     rcx,QWORD PTR [rax]
0x1401d000f: mov     eax,DWORD PTR [r12]
0x1401d0013: cmp     DWORD PTR [rcx+0x1d0],eax
0x1401d0019: jne     0x1401d0045
0x1401d001b: mov     BYTE PTR [rbp-0x40],0x1
0x1401d001f: mov     rcx,r12
0x1401d0022: call    0x1400766d0
0x1401d0027: cmp     eax,0x19
0x1401d002a: jne     0x1401d0045
0x1401d002c: mov     rcx,QWORD PTR [r12+0x130]
0x1401d0034: call    0x140070a10
0x1401d0039: test    rax,rax
0x1401d003c: jne     0x1401d0045
0x1401d003e: mov     BYTE PTR [rbp-0x40],al
0x1401d0041: mov     BYTE PTR [rbp-0x50],0x1
0x1401d0045: lea     rcx,[rbp+0xb0]
0x1401d004c: call    0x1400703c0
0x1401d0051: lea     rdx,[rbp+0x178]
0x1401d0058: lea     rcx,[rbp+0xb0]
0x1401d005f: call    0x1400baf30
0x1401d0064: test    al,al
0x1401d0066: je      0x1401d0000
0x1401d0068: add     r13d,0x2
0x1401d006c: mov     DWORD PTR [rbp-0x28],r13d
0x1401d0070: lea     edi,[r15-0x2]
0x1401d0074: mov     DWORD PTR [rsp+0x70],edi
0x1401d0078: lea     ecx,[r14-0x7]
0x1401d007c: mov     eax,0x55555556
0x1401d0081: imul    ecx
0x1401d0083: mov     esi,edx
0x1401d0085: shr     esi,0x1f
0x1401d0088: add     esi,edx
0x1401d008a: mov     DWORD PTR [rbp-0x68],esi
0x1401d008d: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d0092: lea     rcx,[rbx+0x350]
0x1401d0099: call    0x140070410
0x1401d009e: mov     r14,rax
0x1401d00a1: mov     QWORD PTR [rbp+0x30],rax
0x1401d00a5: cmp     eax,esi
0x1401d00a7: jle     0x1401d00b1
0x1401d00a9: lea     edi,[r15-0x4]
0x1401d00ad: mov     DWORD PTR [rsp+0x70],edi
0x1401d00b1: lea     eax,[rdi-0x3]
0x1401d00b4: mov     DWORD PTR [rbp-0x60],eax
0x1401d00b7: mov     r12d,0x1
0x1401d00bd: mov     DWORD PTR [rsp+0x74],r12d
0x1401d00c2: mov     ecx,DWORD PTR [rbx+0x3c8]
0x1401d00c8: mov     edx,r14d
0x1401d00cb: sub     edx,esi
0x1401d00cd: cmp     ecx,edx
0x1401d00cf: cmovle  edx,ecx
0x1401d00d2: xor     r15d,r15d
0x1401d00d5: test    edx,edx
0x1401d00d7: cmovns  r15d,edx
0x1401d00db: mov     DWORD PTR [rbp-0x58],r15d
0x1401d00df: lea     eax,[r15+rsi*1]
0x1401d00e3: mov     DWORD PTR [rbp-0x20],eax
0x1401d00e6: cmp     r15d,eax
0x1401d00e9: jge     0x1401d0b4e
0x1401d00ef: lea     rax,[rbx+0x350]
0x1401d00f6: mov     QWORD PTR [rbp+0x48],rax
0x1401d00fa: jmp     0x1401d0105
0x1401d00fc: nop     DWORD PTR [rax+0x0]
0x1401d0100: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d0105: cmp     r15d,r14d
0x1401d0108: jge     0x1401d0b47
0x1401d010e: movsxd  rdx,r15d
0x1401d0111: mov     rcx,rax
0x1401d0114: call    0x1400707e0
0x1401d0119: mov     r14,QWORD PTR [rax]
0x1401d011c: mov     QWORD PTR [rbp+0x18],r14
0x1401d0120: xor     r8d,r8d
0x1401d0123: mov     edx,0x7
0x1401d0128: mov     r9b,0x1
0x1401d012b: lea     rcx,[rip+0x249663e]        # 0x142666770
0x1401d0132: call    0x1400bc6f0
0x1401d0137: mov     edi,r13d
0x1401d013a: mov     eax,DWORD PTR [rsp+0x70]
0x1401d013e: cmp     r13d,eax
0x1401d0141: jg      0x1401d0247
0x1401d0147: lea     r15d,[r12+0x3]
0x1401d014c: movsxd  rsi,r13d
0x1401d014f: nop     
0x1401d0150: mov     ebx,r12d
0x1401d0153: cmp     r12d,r15d
0x1401d0156: jge     0x1401d022d
0x1401d015c: movsxd  r14,eax
0x1401d015f: nop     
0x1401d0160: mov     r8d,edi
0x1401d0163: mov     edx,ebx
0x1401d0165: lea     rcx,[rip+0x2496604]        # 0x142666770
0x1401d016c: call    0x1400bc6e0
0x1401d0171: cmp     ebx,r12d
0x1401d0174: jne     0x1401d019f
0x1401d0176: cmp     edi,r13d
0x1401d0179: jne     0x1401d0183
0x1401d017b: mov     edx,DWORD PTR [rip+0x2498033]        # 0x1426681b4
0x1401d0181: jmp     0x1401d01ef
0x1401d0183: lea     rcx,[rip+0x24965e6]        # 0x142666770
0x1401d018a: cmp     rsi,r14
0x1401d018d: jne     0x1401d0197
0x1401d018f: mov     edx,DWORD PTR [rip+0x2498037]        # 0x1426681cc
0x1401d0195: jmp     0x1401d01f6
0x1401d0197: mov     edx,DWORD PTR [rip+0x2498023]        # 0x1426681c0
0x1401d019d: jmp     0x1401d01f6
0x1401d019f: lea     eax,[r12+0x2]
0x1401d01a4: cmp     ebx,eax
0x1401d01a6: jne     0x1401d01d1
0x1401d01a8: cmp     edi,r13d
0x1401d01ab: jne     0x1401d01b5
0x1401d01ad: mov     edx,DWORD PTR [rip+0x2498009]        # 0x1426681bc
0x1401d01b3: jmp     0x1401d01ef
0x1401d01b5: lea     rcx,[rip+0x24965b4]        # 0x142666770
0x1401d01bc: cmp     rsi,r14
0x1401d01bf: jne     0x1401d01c9
0x1401d01c1: mov     edx,DWORD PTR [rip+0x249800d]        # 0x1426681d4
0x1401d01c7: jmp     0x1401d01f6
0x1401d01c9: mov     edx,DWORD PTR [rip+0x2497ff9]        # 0x1426681c8
0x1401d01cf: jmp     0x1401d01f6
0x1401d01d1: cmp     edi,r13d
0x1401d01d4: jne     0x1401d01de
0x1401d01d6: mov     edx,DWORD PTR [rip+0x2497fdc]        # 0x1426681b8
0x1401d01dc: jmp     0x1401d01ef
0x1401d01de: cmp     rsi,r14
0x1401d01e1: mov     edx,DWORD PTR [rip+0x2497fe9]        # 0x1426681d0
0x1401d01e7: je      0x1401d01ef
0x1401d01e9: mov     edx,DWORD PTR [rip+0x2497fd5]        # 0x1426681c4
0x1401d01ef: lea     rcx,[rip+0x249657a]        # 0x142666770
0x1401d01f6: call    0x140af1390
0x1401d01fb: xor     edx,edx
0x1401d01fd: lea     rcx,[rip+0x22198ec]        # 0x1423e9af0
0x1401d0204: call    0x140073550
0x1401d0209: test    al,al
0x1401d020b: je      0x1401d021e
0x1401d020d: mov     r8b,0x1
0x1401d0210: xor     edx,edx
0x1401d0212: lea     rcx,[rip+0x2496557]        # 0x142666770
0x1401d0219: call    0x1400bc750
0x1401d021e: inc     ebx
0x1401d0220: cmp     ebx,r15d
0x1401d0223: jl      0x1401d0160
0x1401d0229: mov     eax,DWORD PTR [rsp+0x70]
0x1401d022d: inc     edi
0x1401d022f: inc     rsi
0x1401d0232: cmp     edi,eax
0x1401d0234: jle     0x1401d0150
0x1401d023a: mov     r14,QWORD PTR [rbp+0x18]
0x1401d023e: mov     r15d,DWORD PTR [rbp-0x58]
0x1401d0242: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d0247: cmp     DWORD PTR [r14+0x1d4],0x0
0x1401d024f: jne     0x1401d028c
0x1401d0251: cmp     DWORD PTR [r14+0x1dc],0x0
0x1401d0259: jl      0x1401d027a
0x1401d025b: lea     rcx,[rip+0x2496e4e]        # 0x1426670b0
0x1401d0262: call    0x140070930
0x1401d0267: cmp     DWORD PTR [r14+0x1dc],eax
0x1401d026e: jge     0x1401d027a
0x1401d0270: mov     rcx,r14
0x1401d0273: call    0x140411c60
0x1401d0278: jmp     0x1401d0282
0x1401d027a: mov     rcx,r14
0x1401d027d: call    0x140411a40
0x1401d0282: cmp     DWORD PTR [r14+0x1d4],0x0
0x1401d028a: je      0x1401d02cf
0x1401d028c: mov     r8d,r13d
0x1401d028f: mov     edx,r12d
0x1401d0292: lea     rcx,[rip+0x24964d7]        # 0x142666770
0x1401d0299: call    0x1400bc6e0
0x1401d029e: mov     BYTE PTR [rsp+0x30],0x0
0x1401d02a3: mov     DWORD PTR [rsp+0x28],0x3
0x1401d02ab: mov     DWORD PTR [rsp+0x20],0x4
0x1401d02b3: mov     r9d,0x2
0x1401d02b9: xor     r8d,r8d
0x1401d02bc: mov     edx,DWORD PTR [r14+0x1d4]
0x1401d02c3: lea     rcx,[rip+0x24964a6]        # 0x142666770
0x1401d02ca: call    0x140af1630
0x1401d02cf: lea     rcx,[rbx+0x368]
0x1401d02d6: movsxd  rdx,r15d
0x1401d02d9: call    0x140070920
0x1401d02de: xor     r8d,r8d
0x1401d02e1: mov     r9b,0x1
0x1401d02e4: lea     rcx,[rip+0x2496485]        # 0x142666770
0x1401d02eb: test    BYTE PTR [rax],r9b
0x1401d02ee: mov     edx,0x3
0x1401d02f3: je      0x1401d02fa
0x1401d02f5: mov     edx,0x4
0x1401d02fa: call    0x1400bc6f0
0x1401d02ff: lea     edx,[r12+0x1]
0x1401d0304: lea     r8d,[r13+0x6]
0x1401d0308: lea     rcx,[rip+0x2496461]        # 0x142666770
0x1401d030f: call    0x1400bc6e0
0x1401d0314: lea     rcx,[rbp+0xfd0]
0x1401d031b: call    0x140070c50
0x1401d0320: nop     
0x1401d0321: lea     rcx,[r14+0x80]
0x1401d0328: call    0x140070ae0
0x1401d032d: test    al,al
0x1401d032f: jne     0x1401d0346
0x1401d0331: lea     rdx,[r14+0x80]
0x1401d0338: lea     rcx,[rbp+0xfd0]
0x1401d033f: call    0x140070b60
0x1401d0344: jmp     0x1401d035c
0x1401d0346: lea     rcx,[r14+0x8]
0x1401d034a: xor     r9d,r9d
0x1401d034d: mov     r8b,0x1
0x1401d0350: lea     rdx,[rbp+0xfd0]
0x1401d0357: call    0x140aaafe0
0x1401d035c: lea     rcx,[rbp+0xfd0]
0x1401d0363: call    0x1400708f0
0x1401d0368: cmp     rax,0x12
0x1401d036c: jb      0x1401d03be
0x1401d036e: xor     r8d,r8d
0x1401d0371: mov     edx,0x11
0x1401d0376: lea     rcx,[rbp+0xfd0]
0x1401d037d: call    0x1400e27f0
0x1401d0382: mov     edx,0xe
0x1401d0387: lea     rcx,[rbp+0xfd0]
0x1401d038e: call    0x1400fcb70
0x1401d0393: mov     BYTE PTR [rax],0x2e
0x1401d0396: mov     edx,0xf
0x1401d039b: lea     rcx,[rbp+0xfd0]
0x1401d03a2: call    0x1400fcb70
0x1401d03a7: mov     BYTE PTR [rax],0x2e
0x1401d03aa: mov     edx,0x10
0x1401d03af: lea     rcx,[rbp+0xfd0]
0x1401d03b6: call    0x1400fcb70
0x1401d03bb: mov     BYTE PTR [rax],0x2e
0x1401d03be: xor     r9d,r9d
0x1401d03c1: xor     r8d,r8d
0x1401d03c4: lea     rdx,[rbp+0xfd0]
0x1401d03cb: lea     rcx,[rip+0x249639e]        # 0x142666770
0x1401d03d2: call    0x140af0220
0x1401d03d7: lea     r8d,[r13+0x6]
0x1401d03db: lea     edx,[r12+0x2]
0x1401d03e0: lea     rcx,[rip+0x2496389]        # 0x142666770
0x1401d03e7: call    0x1400bc6e0
0x1401d03ec: mov     eax,DWORD PTR [r14+0x1d0]
0x1401d03f3: xor     r8d,r8d
0x1401d03f6: lea     rcx,[rip+0x2496373]        # 0x142666770
0x1401d03fd: cmp     eax,0xffffffff
0x1401d0400: je      0x1401d0951
0x1401d0406: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d040a: cmp     eax,DWORD PTR [rbx]
0x1401d040c: jne     0x1401d045a
0x1401d040e: mov     edx,0x2
0x1401d0413: mov     r9b,0x1
0x1401d0416: call    0x1400bc6f0
0x1401d041b: lea     rdx,[rip+0x144ab36]        # 0x14161af58 ; literal='On this mission'
0x1401d0422: lea     rcx,[rbp+0x2d90]
0x1401d0429: call    0x140069710
0x1401d042e: nop     
0x1401d042f: xor     r9d,r9d
0x1401d0432: xor     r8d,r8d
0x1401d0435: lea     rdx,[rbp+0x2d90]
0x1401d043c: lea     rcx,[rip+0x249632d]        # 0x142666770
0x1401d0443: call    0x140af0220
0x1401d0448: nop     
0x1401d0449: lea     rcx,[rbp+0x2d90]
0x1401d0450: call    0x1400693f0
0x1401d0455: jmp     0x1401d0a68
0x1401d045a: mov     edx,0x3
0x1401d045f: xor     r9d,r9d
0x1401d0462: call    0x1400bc6f0
0x1401d0467: mov     edx,DWORD PTR [r14+0x1d0]
0x1401d046e: lea     rcx,[rip+0x2333d13]        # 0x142504188
0x1401d0475: call    0x140073b30
0x1401d047a: mov     rbx,rax
0x1401d047d: test    rax,rax
0x1401d0480: je      0x1401d0900
0x1401d0486: mov     rcx,rax
0x1401d0489: call    0x1400766d0
0x1401d048e: sub     eax,0x2
0x1401d0491: je      0x1401d07e6
0x1401d0497: sub     eax,0xf
0x1401d049a: je      0x1401d072a
0x1401d04a0: sub     eax,0x1
0x1401d04a3: je      0x1401d0646
0x1401d04a9: sub     eax,0x1
0x1401d04ac: je      0x1401d0590
0x1401d04b2: cmp     eax,0x6
0x1401d04b5: jne     0x1401d0a64
0x1401d04bb: lea     rcx,[rbp+0xf90]
0x1401d04c2: call    0x140070c50
0x1401d04c7: nop     
0x1401d04c8: lea     rdx,[rbp+0xf90]
0x1401d04cf: mov     rcx,QWORD PTR [rbx+0x130]
0x1401d04d6: call    0x1401bdb90
0x1401d04db: lea     rdx,[rip+0x14488ea]        # 0x141618dcc ; literal=' at '
0x1401d04e2: lea     rcx,[rbp+0xf90]
0x1401d04e9: call    0x140070b20
0x1401d04ee: xor     r9d,r9d
0x1401d04f1: mov     r8d,DWORD PTR [rbx+0x8]
0x1401d04f5: lea     rdx,[rbp+0xf90]
0x1401d04fc: lea     rcx,[rip+0x2345b35]        # 0x142516038
0x1401d0503: call    0x140ba8410
0x1401d0508: lea     rcx,[rbp+0xf90]
0x1401d050f: call    0x1400708f0
0x1401d0514: cmp     rax,0x1e
0x1401d0518: jb      0x1401d056a
0x1401d051a: xor     r8d,r8d
0x1401d051d: mov     edx,0x1d
0x1401d0522: lea     rcx,[rbp+0xf90]
0x1401d0529: call    0x1400e27f0
0x1401d052e: mov     edx,0x1a
0x1401d0533: lea     rcx,[rbp+0xf90]
0x1401d053a: call    0x1400fcb70
0x1401d053f: mov     BYTE PTR [rax],0x2e
0x1401d0542: mov     edx,0x1b
0x1401d0547: lea     rcx,[rbp+0xf90]
0x1401d054e: call    0x1400fcb70
0x1401d0553: mov     BYTE PTR [rax],0x2e
0x1401d0556: mov     edx,0x1c
0x1401d055b: lea     rcx,[rbp+0xf90]
0x1401d0562: call    0x1400fcb70
0x1401d0567: mov     BYTE PTR [rax],0x2e
0x1401d056a: xor     r9d,r9d
0x1401d056d: xor     r8d,r8d
0x1401d0570: lea     rdx,[rbp+0xf90]
0x1401d0577: lea     rcx,[rip+0x24961f2]        # 0x142666770
0x1401d057e: call    0x140af0220
0x1401d0583: nop     
0x1401d0584: lea     rcx,[rbp+0xf90]
0x1401d058b: jmp     0x1401d0a5f
0x1401d0590: lea     rdx,[rip+0x144a779]        # 0x14161ad10 ; literal='Request workers from '
0x1401d0597: lea     rcx,[rbp+0x1170]
0x1401d059e: call    0x140069710
0x1401d05a3: nop     
0x1401d05a4: xor     r9d,r9d
0x1401d05a7: mov     r8d,DWORD PTR [rbx+0x8]
0x1401d05ab: lea     rdx,[rbp+0x1170]
0x1401d05b2: lea     rcx,[rip+0x2345a7f]        # 0x142516038
0x1401d05b9: call    0x140ba8410
0x1401d05be: lea     rcx,[rbp+0x1170]
0x1401d05c5: call    0x1400708f0
0x1401d05ca: cmp     rax,0x1e
0x1401d05ce: jb      0x1401d0620
0x1401d05d0: xor     r8d,r8d
0x1401d05d3: mov     edx,0x1d
0x1401d05d8: lea     rcx,[rbp+0x1170]
0x1401d05df: call    0x1400e27f0
0x1401d05e4: mov     edx,0x1a
0x1401d05e9: lea     rcx,[rbp+0x1170]
0x1401d05f0: call    0x1400fcb70
0x1401d05f5: mov     BYTE PTR [rax],0x2e
0x1401d05f8: mov     edx,0x1b
0x1401d05fd: lea     rcx,[rbp+0x1170]
0x1401d0604: call    0x1400fcb70
0x1401d0609: mov     BYTE PTR [rax],0x2e
0x1401d060c: mov     edx,0x1c
0x1401d0611: lea     rcx,[rbp+0x1170]
0x1401d0618: call    0x1400fcb70
0x1401d061d: mov     BYTE PTR [rax],0x2e
0x1401d0620: xor     r9d,r9d
0x1401d0623: xor     r8d,r8d
0x1401d0626: lea     rdx,[rbp+0x1170]
0x1401d062d: lea     rcx,[rip+0x249613c]        # 0x142666770
0x1401d0634: call    0x140af0220
0x1401d0639: nop     
0x1401d063a: lea     rcx,[rbp+0x1170]
0x1401d0641: jmp     0x1401d0a5f
0x1401d0646: lea     rdx,[rip+0x1433eab]        # 0x1416044f8 ; literal='Rescue '
0x1401d064d: lea     rcx,[rbp+0x1190]
0x1401d0654: call    0x140069710
0x1401d0659: nop     
0x1401d065a: lea     rcx,[rbp+0x4d0]
0x1401d0661: call    0x140073640
0x1401d0666: mov     r8,QWORD PTR [rbx+0x130]
0x1401d066d: mov     edi,0x1
0x1401d0672: mov     WORD PTR [rsp+0x28],di
0x1401d0677: mov     WORD PTR [rsp+0x20],di
0x1401d067c: lea     r9,[rbp+0x4d0]
0x1401d0683: mov     r8d,DWORD PTR [r8]
0x1401d0686: lea     rdx,[rbp+0x1190]
0x1401d068d: lea     rcx,[rip+0x23459a4]        # 0x142516038
0x1401d0694: call    0x140ba79f0
0x1401d0699: lea     rcx,[rbp+0x1190]
0x1401d06a0: call    0x1400708f0
0x1401d06a5: cmp     rax,0x1e
0x1401d06a9: jb      0x1401d06fb
0x1401d06ab: xor     r8d,r8d
0x1401d06ae: mov     edx,0x1d
0x1401d06b3: lea     rcx,[rbp+0x1190]
0x1401d06ba: call    0x1400e27f0
0x1401d06bf: mov     edx,0x1a
0x1401d06c4: lea     rcx,[rbp+0x1190]
0x1401d06cb: call    0x1400fcb70
0x1401d06d0: mov     BYTE PTR [rax],0x2e
0x1401d06d3: mov     edx,0x1b
0x1401d06d8: lea     rcx,[rbp+0x1190]
0x1401d06df: call    0x1400fcb70
0x1401d06e4: mov     BYTE PTR [rax],0x2e
0x1401d06e7: mov     edx,0x1c
0x1401d06ec: lea     rcx,[rbp+0x1190]
0x1401d06f3: call    0x1400fcb70
0x1401d06f8: mov     BYTE PTR [rax],0x2e
0x1401d06fb: xor     r9d,r9d
0x1401d06fe: xor     r8d,r8d
0x1401d0701: lea     rdx,[rbp+0x1190]
0x1401d0708: lea     rcx,[rip+0x2496061]        # 0x142666770
0x1401d070f: call    0x140af0220
0x1401d0714: nop     
0x1401d0715: lea     rcx,[rbp+0x1190]
0x1401d071c: call    0x1400693f0
0x1401d0721: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d0725: jmp     0x1401d0a6d
0x1401d072a: lea     rdx,[rip+0x144a657]        # 0x14161ad88 ; literal='Recover '
0x1401d0731: lea     rcx,[rbp+0x11b0]
0x1401d0738: call    0x140069710
0x1401d073d: nop     
0x1401d073e: mov     r8,QWORD PTR [rbx+0x130]
0x1401d0745: xor     r9d,r9d
0x1401d0748: mov     r8d,DWORD PTR [r8]
0x1401d074b: lea     rdx,[rbp+0x11b0]
0x1401d0752: lea     rcx,[rip+0x23458df]        # 0x142516038
0x1401d0759: call    0x140ba8ee0
0x1401d075e: lea     rcx,[rbp+0x11b0]
0x1401d0765: call    0x1400708f0
0x1401d076a: cmp     rax,0x1e
0x1401d076e: jb      0x1401d07c0
0x1401d0770: xor     r8d,r8d
0x1401d0773: mov     edx,0x1d
0x1401d0778: lea     rcx,[rbp+0x11b0]
0x1401d077f: call    0x1400e27f0
0x1401d0784: mov     edx,0x1a
0x1401d0789: lea     rcx,[rbp+0x11b0]
0x1401d0790: call    0x1400fcb70
0x1401d0795: mov     BYTE PTR [rax],0x2e
0x1401d0798: mov     edx,0x1b
0x1401d079d: lea     rcx,[rbp+0x11b0]
0x1401d07a4: call    0x1400fcb70
0x1401d07a9: mov     BYTE PTR [rax],0x2e
0x1401d07ac: mov     edx,0x1c
0x1401d07b1: lea     rcx,[rbp+0x11b0]
0x1401d07b8: call    0x1400fcb70
0x1401d07bd: mov     BYTE PTR [rax],0x2e
0x1401d07c0: xor     r9d,r9d
0x1401d07c3: xor     r8d,r8d
0x1401d07c6: lea     rdx,[rbp+0x11b0]
0x1401d07cd: lea     rcx,[rip+0x2495f9c]        # 0x142666770
0x1401d07d4: call    0x140af0220
0x1401d07d9: nop     
0x1401d07da: lea     rcx,[rbp+0x11b0]
0x1401d07e1: jmp     0x1401d0a5f
0x1401d07e6: lea     rcx,[rbp+0xe50]
0x1401d07ed: call    0x140070c50
0x1401d07f2: nop     
0x1401d07f3: mov     rax,QWORD PTR [rbx+0x130]
0x1401d07fa: movsxd  rcx,DWORD PTR [rax]
0x1401d07fd: cmp     ecx,0x6
0x1401d0800: ja      0x1401d084b
0x1401d0802: lea     rdx,[rip+0xffffffffffe2f7f7]        # 0x140000000
0x1401d0809: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d6694]
0x1401d0810: add     rcx,rdx
0x1401d0813: jmp     rcx
0x1401d0815: lea     rdx,[rip+0x144a50c]        # 0x14161ad28 ; literal='Explore '
0x1401d081c: jmp     0x1401d0852
0x1401d081e: lea     rdx,[rip+0x144a513]        # 0x14161ad38 ; literal='Pillage '
0x1401d0825: jmp     0x1401d0852
0x1401d0827: lea     rdx,[rip+0x144a51a]        # 0x14161ad48 ; literal='Demand tribute from '
0x1401d082e: jmp     0x1401d0852
0x1401d0830: lea     rdx,[rip+0x144a529]        # 0x14161ad60 ; literal='Raze '
0x1401d0837: jmp     0x1401d0852
0x1401d0839: lea     rdx,[rip+0x144a528]        # 0x14161ad68 ; literal='Take over '
0x1401d0840: jmp     0x1401d0852
0x1401d0842: lea     rdx,[rip+0x144a52b]        # 0x14161ad74 ; literal='Seize '
0x1401d0849: jmp     0x1401d0852
0x1401d084b: lea     rdx,[rip+0x144a52a]        # 0x14161ad7c ; literal='Raid '
0x1401d0852: lea     rcx,[rbp+0xe50]
0x1401d0859: call    0x140070b40
0x1401d085e: xor     r9d,r9d
0x1401d0861: mov     r8d,DWORD PTR [rbx+0x8]
0x1401d0865: lea     rdx,[rbp+0xe50]
0x1401d086c: lea     rcx,[rip+0x23457c5]        # 0x142516038
0x1401d0873: call    0x140ba8410
0x1401d0878: lea     rcx,[rbp+0xe50]
0x1401d087f: call    0x1400708f0
0x1401d0884: cmp     rax,0x1e
0x1401d0888: jb      0x1401d08da
0x1401d088a: xor     r8d,r8d
0x1401d088d: mov     edx,0x1d
0x1401d0892: lea     rcx,[rbp+0xe50]
0x1401d0899: call    0x1400e27f0
0x1401d089e: mov     edx,0x1a
0x1401d08a3: lea     rcx,[rbp+0xe50]
0x1401d08aa: call    0x1400fcb70
0x1401d08af: mov     BYTE PTR [rax],0x2e
0x1401d08b2: mov     edx,0x1b
0x1401d08b7: lea     rcx,[rbp+0xe50]
0x1401d08be: call    0x1400fcb70
0x1401d08c3: mov     BYTE PTR [rax],0x2e
0x1401d08c6: mov     edx,0x1c
0x1401d08cb: lea     rcx,[rbp+0xe50]
0x1401d08d2: call    0x1400fcb70
0x1401d08d7: mov     BYTE PTR [rax],0x2e
0x1401d08da: xor     r9d,r9d
0x1401d08dd: xor     r8d,r8d
0x1401d08e0: lea     rdx,[rbp+0xe50]
0x1401d08e7: lea     rcx,[rip+0x2495e82]        # 0x142666770
0x1401d08ee: call    0x140af0220
0x1401d08f3: nop     
0x1401d08f4: lea     rcx,[rbp+0xe50]
0x1401d08fb: jmp     0x1401d0a5f
0x1401d0900: xor     r8d,r8d
0x1401d0903: mov     edx,0x7
0x1401d0908: xor     r9d,r9d
0x1401d090b: lea     rcx,[rip+0x2495e5e]        # 0x142666770
0x1401d0912: call    0x1400bc6f0
0x1401d0917: lea     rdx,[rip+0x144a64a]        # 0x14161af68 ; literal='No specific orders'
0x1401d091e: lea     rcx,[rbp+0x2db0]
0x1401d0925: call    0x140069710
0x1401d092a: nop     
0x1401d092b: xor     r9d,r9d
0x1401d092e: xor     r8d,r8d
0x1401d0931: lea     rdx,[rbp+0x2db0]
0x1401d0938: lea     rcx,[rip+0x2495e31]        # 0x142666770
0x1401d093f: call    0x140af0220
0x1401d0944: nop     
0x1401d0945: lea     rcx,[rbp+0x2db0]
0x1401d094c: jmp     0x1401d0a5f
0x1401d0951: mov     edx,0x7
0x1401d0956: xor     r9d,r9d
0x1401d0959: call    0x1400bc6f0
0x1401d095e: lea     rcx,[r14+0xb8]
0x1401d0965: call    0x140070410
0x1401d096a: test    rax,rax
0x1401d096d: je      0x1401d0a2a
0x1401d0973: xor     edx,edx
0x1401d0975: lea     rcx,[r14+0xb8]
0x1401d097c: call    0x1400707e0
0x1401d0981: mov     rbx,QWORD PTR [rax]
0x1401d0984: lea     rcx,[rbp+0x11d0]
0x1401d098b: call    0x140070c50
0x1401d0990: nop     
0x1401d0991: mov     rax,QWORD PTR [rbx]
0x1401d0994: mov     r8,QWORD PTR [rax+0x68]
0x1401d0998: lea     rdx,[rbp+0x11d0]
0x1401d099f: mov     rcx,rbx
0x1401d09a2: call    r8
0x1401d09a5: lea     rcx,[rbp+0x11d0]
0x1401d09ac: call    0x1400708f0
0x1401d09b1: cmp     rax,0x1e
0x1401d09b5: jb      0x1401d0a07
0x1401d09b7: xor     r8d,r8d
0x1401d09ba: mov     edx,0x1d
0x1401d09bf: lea     rcx,[rbp+0x11d0]
0x1401d09c6: call    0x1400e27f0
0x1401d09cb: mov     edx,0x1a
0x1401d09d0: lea     rcx,[rbp+0x11d0]
0x1401d09d7: call    0x1400fcb70
0x1401d09dc: mov     BYTE PTR [rax],0x2e
0x1401d09df: mov     edx,0x1b
0x1401d09e4: lea     rcx,[rbp+0x11d0]
0x1401d09eb: call    0x1400fcb70
0x1401d09f0: mov     BYTE PTR [rax],0x2e
0x1401d09f3: mov     edx,0x1c
0x1401d09f8: lea     rcx,[rbp+0x11d0]
0x1401d09ff: call    0x1400fcb70
0x1401d0a04: mov     BYTE PTR [rax],0x2e
0x1401d0a07: xor     r9d,r9d
0x1401d0a0a: xor     r8d,r8d
0x1401d0a0d: lea     rdx,[rbp+0x11d0]
0x1401d0a14: lea     rcx,[rip+0x2495d55]        # 0x142666770
0x1401d0a1b: call    0x140af0220
0x1401d0a20: nop     
0x1401d0a21: lea     rcx,[rbp+0x11d0]
0x1401d0a28: jmp     0x1401d0a5f
0x1401d0a2a: lea     rdx,[rip+0x144a537]        # 0x14161af68 ; literal='No specific orders'
0x1401d0a31: lea     rcx,[rbp+0x2dd0]
0x1401d0a38: call    0x140069710
0x1401d0a3d: nop     
0x1401d0a3e: xor     r9d,r9d
0x1401d0a41: xor     r8d,r8d
0x1401d0a44: lea     rdx,[rbp+0x2dd0]
0x1401d0a4b: lea     rcx,[rip+0x2495d1e]        # 0x142666770
0x1401d0a52: call    0x140af0220
0x1401d0a57: nop     
0x1401d0a58: lea     rcx,[rbp+0x2dd0]
0x1401d0a5f: call    0x1400693f0
0x1401d0a64: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d0a68: mov     edi,0x1
0x1401d0a6d: mov     rcx,QWORD PTR [rsp+0x78]
0x1401d0a72: add     rcx,0x368
0x1401d0a79: movsxd  rdx,r15d
0x1401d0a7c: call    0x140070920
0x1401d0a81: test    BYTE PTR [rax],0x1
0x1401d0a84: jne     0x1401d0b19
0x1401d0a8a: xor     r15b,r15b
0x1401d0a8d: mov     eax,DWORD PTR [r14+0x1d0]
0x1401d0a94: cmp     eax,0xffffffff
0x1401d0a97: je      0x1401d0aa3
0x1401d0a99: movzx   r15d,r15b
0x1401d0a9d: cmp     eax,DWORD PTR [rbx]
0x1401d0a9f: cmove   r15d,edi
0x1401d0aa3: mov     r14d,r12d
0x1401d0aa6: lea     r12,[rip+0x249d1ab]        # 0x14266dc58
0x1401d0aad: mov     r13d,DWORD PTR [rbp-0x60]
0x1401d0ab1: mov     edi,r13d
0x1401d0ab4: mov     rbx,r12
0x1401d0ab7: mov     esi,0x4
0x1401d0abc: nop     DWORD PTR [rax+0x0]
0x1401d0ac0: mov     r8d,edi
0x1401d0ac3: mov     edx,r14d
0x1401d0ac6: lea     rcx,[rip+0x2495ca3]        # 0x142666770
0x1401d0acd: call    0x1400bc6e0
0x1401d0ad2: xor     r8d,r8d
0x1401d0ad5: lea     rcx,[rip+0x2495c94]        # 0x142666770
0x1401d0adc: test    r15b,r15b
0x1401d0adf: je      0x1401d0ae6
0x1401d0ae1: mov     edx,DWORD PTR [rbx-0x30]
0x1401d0ae4: jmp     0x1401d0ae8
0x1401d0ae6: mov     edx,DWORD PTR [rbx]
0x1401d0ae8: call    0x140af19c0
0x1401d0aed: inc     edi
0x1401d0aef: add     rbx,0xc
0x1401d0af3: sub     rsi,0x1
0x1401d0af7: jne     0x1401d0ac0
0x1401d0af9: inc     r14d
0x1401d0afc: add     r12,0x4
0x1401d0b00: lea     rax,[rip+0x249d15d]        # 0x14266dc64
0x1401d0b07: cmp     r12,rax
0x1401d0b0a: jl      0x1401d0ab1
0x1401d0b0c: mov     r13d,DWORD PTR [rbp-0x28]
0x1401d0b10: mov     r12d,DWORD PTR [rsp+0x74]
0x1401d0b15: mov     r15d,DWORD PTR [rbp-0x58]
0x1401d0b19: add     r12d,0x3
0x1401d0b1d: mov     DWORD PTR [rsp+0x74],r12d
0x1401d0b22: lea     rcx,[rbp+0xfd0]
0x1401d0b29: call    0x1400693f0
0x1401d0b2e: inc     r15d
0x1401d0b31: mov     DWORD PTR [rbp-0x58],r15d
0x1401d0b35: cmp     r15d,DWORD PTR [rbp-0x20]
0x1401d0b39: mov     r14,QWORD PTR [rbp+0x30]
0x1401d0b3d: mov     rax,QWORD PTR [rbp+0x48]
0x1401d0b41: jl      0x1401d0100
0x1401d0b47: mov     edi,DWORD PTR [rsp+0x70]
0x1401d0b4b: mov     esi,DWORD PTR [rbp-0x68]
0x1401d0b4e: cmp     r14d,esi
0x1401d0b51: jle     0x1401d0bc0
0x1401d0b53: lea     ebx,[rsi*2-0x1]
0x1401d0b5a: add     ebx,esi
0x1401d0b5c: lea     rcx,[rbp+0x310]
0x1401d0b63: call    0x1400bc920
0x1401d0b68: lea     r9d,[r14-0x1]
0x1401d0b6c: mov     DWORD PTR [rsp+0x30],ebx
0x1401d0b70: mov     DWORD PTR [rsp+0x28],0x2
0x1401d0b78: mov     DWORD PTR [rsp+0x20],esi
0x1401d0b7c: xor     r8d,r8d
0x1401d0b7f: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d0b84: mov     edx,DWORD PTR [rbx+0x3c8]
0x1401d0b8a: lea     rcx,[rbp+0x310]
0x1401d0b91: call    0x1400bc940
0x1401d0b96: lea     r9d,[rdi+0x1]
0x1401d0b9a: movzx   eax,BYTE PTR [rbx+0x3cc]
0x1401d0ba1: lea     rcx,[rbp+0x310]
0x1401d0ba8: mov     DWORD PTR [rsp+0x28],0x0
0x1401d0bb0: mov     BYTE PTR [rsp+0x20],al
0x1401d0bb4: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d0bb8: mov     edx,DWORD PTR [rbp-0x38]
0x1401d0bbb: call    0x141423200
0x1401d0bc0: mov     edx,DWORD PTR [rbp-0x48]
0x1401d0bc3: lea     eax,[rdx-0x2]
0x1401d0bc6: lea     ecx,[rdx-0x37]
0x1401d0bc9: add     eax,ecx
0x1401d0bcb: cdq     
0x1401d0bcc: sub     eax,edx
0x1401d0bce: sar     eax,1
0x1401d0bd0: lea     r13d,[rax-0x9]
0x1401d0bd4: mov     DWORD PTR [rbp-0x28],r13d
0x1401d0bd8: add     eax,0x8
0x1401d0bdb: mov     DWORD PTR [rbp-0x60],eax
0x1401d0bde: mov     ebx,DWORD PTR [rbp-0x70]
0x1401d0be1: add     ebx,0xfffffffc
0x1401d0be4: mov     DWORD PTR [rbp-0x58],ebx
0x1401d0be7: cmp     BYTE PTR [rbp-0x40],0x0
0x1401d0beb: je      0x1401d0cd9
0x1401d0bf1: mov     r14d,r13d
0x1401d0bf4: cmp     r13d,eax
0x1401d0bf7: jg      0x1401d0c75
0x1401d0bf9: movsxd  r15,r13d
0x1401d0bfc: movsxd  r12,eax
0x1401d0bff: mov     rsi,r15
0x1401d0c02: mov     r13d,ebx
0x1401d0c05: mov     edi,r13d
0x1401d0c08: lea     rbx,[rip+0x2497605]        # 0x142668214
0x1401d0c0f: lea     r13,[rip+0x249760a]        # 0x142668220
0x1401d0c16: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401d0c20: mov     r8d,r14d
0x1401d0c23: mov     edx,edi
0x1401d0c25: lea     rcx,[rip+0x2495b44]        # 0x142666770
0x1401d0c2c: call    0x1400bc6e0
0x1401d0c31: cmp     rsi,r15
0x1401d0c34: jne     0x1401d0c3b
0x1401d0c36: mov     edx,DWORD PTR [rbx-0x18]
0x1401d0c39: jmp     0x1401d0c47
0x1401d0c3b: cmp     rsi,r12
0x1401d0c3e: jne     0x1401d0c44
0x1401d0c40: mov     edx,DWORD PTR [rbx]
0x1401d0c42: jmp     0x1401d0c47
0x1401d0c44: mov     edx,DWORD PTR [rbx-0xc]
0x1401d0c47: lea     rcx,[rip+0x2495b22]        # 0x142666770
0x1401d0c4e: call    0x140af1390
0x1401d0c53: inc     edi
0x1401d0c55: add     rbx,0x4
0x1401d0c59: cmp     rbx,r13
0x1401d0c5c: jl      0x1401d0c20
0x1401d0c5e: inc     r14d
0x1401d0c61: inc     rsi
0x1401d0c64: cmp     r14d,DWORD PTR [rbp-0x60]
0x1401d0c68: mov     r13d,DWORD PTR [rbp-0x58]
0x1401d0c6c: jle     0x1401d0c05
0x1401d0c6e: mov     r13d,DWORD PTR [rbp-0x28]
0x1401d0c72: mov     ebx,DWORD PTR [rbp-0x58]
0x1401d0c75: xor     r8d,r8d
0x1401d0c78: mov     edx,0x7
0x1401d0c7d: mov     r9b,0x1
0x1401d0c80: lea     rcx,[rip+0x2495ae9]        # 0x142666770
0x1401d0c87: call    0x1400bc6f0
0x1401d0c8c: lea     r8d,[r13+0x2]
0x1401d0c90: lea     edx,[rbx+0x1]
0x1401d0c93: lea     rcx,[rip+0x2495ad6]        # 0x142666770
0x1401d0c9a: call    0x1400bc6e0
0x1401d0c9f: lea     rdx,[rip+0x144a57a]        # 0x14161b220 ; literal='Done assigning'
0x1401d0ca6: lea     rcx,[rbp+0x2e10]
0x1401d0cad: call    0x140069710
0x1401d0cb2: nop     
0x1401d0cb3: xor     r9d,r9d
0x1401d0cb6: xor     r8d,r8d
0x1401d0cb9: lea     rdx,[rbp+0x2e10]
0x1401d0cc0: lea     rcx,[rip+0x2495aa9]        # 0x142666770
0x1401d0cc7: call    0x140af0220
0x1401d0ccc: nop     
0x1401d0ccd: lea     rcx,[rbp+0x2e10]
0x1401d0cd4: jmp     0x1401d0e6f
0x1401d0cd9: xor     r8d,r8d
0x1401d0cdc: mov     edx,0x7
0x1401d0ce1: mov     r9b,0x1
0x1401d0ce4: lea     rcx,[rip+0x2495a85]        # 0x142666770
0x1401d0ceb: call    0x1400bc6f0
0x1401d0cf0: lea     edx,[rbx+0x1]
0x1401d0cf3: lea     rcx,[rip+0x2495a76]        # 0x142666770
0x1401d0cfa: cmp     BYTE PTR [rbp-0x80],0x0
0x1401d0cfe: je      0x1401d0d86
0x1401d0d04: mov     r8d,r13d
0x1401d0d07: call    0x1400bc6e0
0x1401d0d0c: cmp     BYTE PTR [rbp-0x50],0x0
0x1401d0d10: je      0x1401d0d4c
0x1401d0d12: lea     rdx,[rip+0x144a517]        # 0x14161b230 ; literal='Choose a proposal.'
0x1401d0d19: lea     rcx,[rbp+0x2e30]
0x1401d0d20: call    0x140069710
0x1401d0d25: nop     
0x1401d0d26: xor     r9d,r9d
0x1401d0d29: xor     r8d,r8d
0x1401d0d2c: lea     rdx,[rbp+0x2e30]
0x1401d0d33: lea     rcx,[rip+0x2495a36]        # 0x142666770
0x1401d0d3a: call    0x140af0220
0x1401d0d3f: nop     
0x1401d0d40: lea     rcx,[rbp+0x2e30]
0x1401d0d47: jmp     0x1401d0e6f
0x1401d0d4c: lea     rdx,[rip+0x144a4f5]        # 0x14161b248 ; literal='Assign messengers.'
0x1401d0d53: lea     rcx,[rbp+0x2e50]
0x1401d0d5a: call    0x140069710
0x1401d0d5f: nop     
0x1401d0d60: xor     r9d,r9d
0x1401d0d63: xor     r8d,r8d
0x1401d0d66: lea     rdx,[rbp+0x2e50]
0x1401d0d6d: lea     rcx,[rip+0x24959fc]        # 0x142666770
0x1401d0d74: call    0x140af0220
0x1401d0d79: nop     
0x1401d0d7a: lea     rcx,[rbp+0x2e50]
0x1401d0d81: jmp     0x1401d0e6f
0x1401d0d86: cmp     BYTE PTR [rbp-0x50],0x0
0x1401d0d8a: je      0x1401d0dce
0x1401d0d8c: mov     r8d,r13d
0x1401d0d8f: call    0x1400bc6e0
0x1401d0d94: lea     rdx,[rip+0x144a495]        # 0x14161b230 ; literal='Choose a proposal.'
0x1401d0d9b: lea     rcx,[rbp+0x2e70]
0x1401d0da2: call    0x140069710
0x1401d0da7: nop     
0x1401d0da8: xor     r9d,r9d
0x1401d0dab: xor     r8d,r8d
0x1401d0dae: lea     rdx,[rbp+0x2e70]
0x1401d0db5: lea     rcx,[rip+0x24959b4]        # 0x142666770
0x1401d0dbc: call    0x140af0220
0x1401d0dc1: nop     
0x1401d0dc2: lea     rcx,[rbp+0x2e70]
0x1401d0dc9: jmp     0x1401d0e6f
0x1401d0dce: lea     r8d,[r13+0x2]
0x1401d0dd2: call    0x1400bc6e0
0x1401d0dd7: lea     rdx,[rip+0x144a482]        # 0x14161b260 ; literal='Assign squads.'
0x1401d0dde: lea     rcx,[rbp+0x2e90]
0x1401d0de5: call    0x140069710
0x1401d0dea: nop     
0x1401d0deb: xor     r9d,r9d
0x1401d0dee: xor     r8d,r8d
0x1401d0df1: lea     rdx,[rbp+0x2e90]
0x1401d0df8: lea     rcx,[rip+0x2495971]        # 0x142666770
0x1401d0dff: call    0x140af0220
0x1401d0e04: nop     
0x1401d0e05: lea     rcx,[rbp+0x2e90]
0x1401d0e0c: jmp     0x1401d0e6f
0x1401d0e0e: xor     r8d,r8d
0x1401d0e11: mov     edx,0x6
0x1401d0e16: mov     r9b,0x1
0x1401d0e19: lea     rcx,[rip+0x2495950]        # 0x142666770
0x1401d0e20: call    0x1400bc6f0
0x1401d0e25: lea     r8d,[r13+0x2]
0x1401d0e29: mov     edx,0x1
0x1401d0e2e: lea     rcx,[rip+0x249593b]        # 0x142666770
0x1401d0e35: call    0x1400bc6e0
0x1401d0e3a: lea     rdx,[rip+0x144a157]        # 0x14161af98 ; literal='No squads available'
0x1401d0e41: lea     rcx,[rbp+0x2eb0]
0x1401d0e48: call    0x140069710
0x1401d0e4d: nop     
0x1401d0e4e: xor     r9d,r9d
0x1401d0e51: xor     r8d,r8d
0x1401d0e54: lea     rdx,[rbp+0x2eb0]
0x1401d0e5b: lea     rcx,[rip+0x249590e]        # 0x142666770
0x1401d0e62: call    0x140af0220
0x1401d0e67: nop     
0x1401d0e68: lea     rcx,[rbp+0x2eb0]
0x1401d0e6f: call    0x1400693f0
0x1401d0e74: nop     
0x1401d0e75: lea     rcx,[rbp+0xd30]
0x1401d0e7c: jmp     0x1401c8d5e
0x1401d0e81: cmp     BYTE PTR [r13+0x8308],0x0
0x1401d0e89: je      0x1401d10d4
0x1401d0e8f: mov     ebx,DWORD PTR [rbp-0x18]
0x1401d0e92: mov     DWORD PTR [rbp-0x60],ebx
0x1401d0e95: lea     esi,[rbx-0x39]
0x1401d0e98: mov     r12d,0x14
0x1401d0e9e: mov     eax,DWORD PTR [rip+0x2218c64]        # 0x1423e9b08
0x1401d0ea4: cmp     eax,0x2e
0x1401d0ea7: jle     0x1401d0ec2
0x1401d0ea9: lea     r12d,[rax-0x1a]
0x1401d0ead: cmp     r12d,0x1e
0x1401d0eb1: jle     0x1401d0ec2
0x1401d0eb3: mov     r12d,0x1e
0x1401d0eb9: mov     edi,ebx
0x1401d0ebb: xor     eax,eax
0x1401d0ebd: mov     r15d,eax
0x1401d0ec0: jmp     0x1401d0ed2
0x1401d0ec2: mov     edi,ebx
0x1401d0ec4: xor     eax,eax
0x1401d0ec6: mov     r15d,eax
0x1401d0ec9: test    r12d,r12d
0x1401d0ecc: js      0x1401d0fa1
0x1401d0ed2: mov     r14,rax
0x1401d0ed5: mov     ebx,esi
0x1401d0ed7: cmp     esi,edi
0x1401d0ed9: jg      0x1401d0f8f
0x1401d0edf: movsxd  r13,r12d
0x1401d0ee2: mov     r8d,ebx
0x1401d0ee5: mov     edx,r15d
0x1401d0ee8: lea     rcx,[rip+0x2495881]        # 0x142666770
0x1401d0eef: call    0x1400bc6e0
0x1401d0ef4: xor     r8d,r8d
0x1401d0ef7: xor     edx,edx
0x1401d0ef9: lea     rcx,[rip+0x2495870]        # 0x142666770
0x1401d0f00: call    0x1400bc750
0x1401d0f05: test    r14,r14
0x1401d0f08: jne     0x1401d0f31
0x1401d0f0a: cmp     ebx,esi
0x1401d0f0c: jne     0x1401d0f16
0x1401d0f0e: mov     edx,DWORD PTR [rip+0x2497180]        # 0x142668094
0x1401d0f14: jmp     0x1401d0f79
0x1401d0f16: lea     rcx,[rip+0x2495853]        # 0x142666770
0x1401d0f1d: cmp     ebx,edi
0x1401d0f1f: jne     0x1401d0f29
0x1401d0f21: mov     edx,DWORD PTR [rip+0x2497185]        # 0x1426680ac
0x1401d0f27: jmp     0x1401d0f80
0x1401d0f29: mov     edx,DWORD PTR [rip+0x2497171]        # 0x1426680a0
0x1401d0f2f: jmp     0x1401d0f80
0x1401d0f31: cmp     r14,r13
0x1401d0f34: jne     0x1401d0f5d
0x1401d0f36: cmp     ebx,esi
0x1401d0f38: jne     0x1401d0f42
0x1401d0f3a: mov     edx,DWORD PTR [rip+0x249715c]        # 0x14266809c
0x1401d0f40: jmp     0x1401d0f79
0x1401d0f42: lea     rcx,[rip+0x2495827]        # 0x142666770
0x1401d0f49: cmp     ebx,edi
0x1401d0f4b: jne     0x1401d0f55
0x1401d0f4d: mov     edx,DWORD PTR [rip+0x2497161]        # 0x1426680b4
0x1401d0f53: jmp     0x1401d0f80
0x1401d0f55: mov     edx,DWORD PTR [rip+0x249714d]        # 0x1426680a8
0x1401d0f5b: jmp     0x1401d0f80
0x1401d0f5d: cmp     ebx,esi
0x1401d0f5f: jne     0x1401d0f69
0x1401d0f61: mov     edx,DWORD PTR [rip+0x2497131]        # 0x142668098
0x1401d0f67: jmp     0x1401d0f79
0x1401d0f69: cmp     ebx,edi
0x1401d0f6b: mov     edx,DWORD PTR [rip+0x249713f]        # 0x1426680b0
0x1401d0f71: je      0x1401d0f79
0x1401d0f73: mov     edx,DWORD PTR [rip+0x249712b]        # 0x1426680a4
0x1401d0f79: lea     rcx,[rip+0x24957f0]        # 0x142666770
0x1401d0f80: call    0x140af1390
0x1401d0f85: inc     ebx
0x1401d0f87: cmp     ebx,edi
0x1401d0f89: jle     0x1401d0ee2
0x1401d0f8f: inc     r15d
0x1401d0f92: inc     r14
0x1401d0f95: cmp     r15d,r12d
0x1401d0f98: jle     0x1401d0ed5
0x1401d0f9e: mov     ebx,DWORD PTR [rbp-0x60]
0x1401d0fa1: lea     r15d,[rsi+0x2]
0x1401d0fa5: lea     r13d,[rbx-0x2]
0x1401d0fa9: dec     r12d
0x1401d0fac: mov     DWORD PTR [rbp-0x60],r12d
0x1401d0fb0: mov     r14,QWORD PTR [rsp+0x78]
0x1401d0fb5: lea     rcx,[r14+0x8310]
0x1401d0fbc: call    0x140070410
0x1401d0fc1: mov     rdi,rax
0x1401d0fc4: cmp     eax,r12d
0x1401d0fc7: jle     0x1401d0fcd
0x1401d0fc9: lea     r13d,[rbx-0x4]
0x1401d0fcd: test    edi,edi
0x1401d0fcf: jle     0x1401d556b
0x1401d0fd5: xor     r8d,r8d
0x1401d0fd8: mov     edx,0x7
0x1401d0fdd: xor     r9d,r9d
0x1401d0fe0: lea     rcx,[rip+0x2495789]        # 0x142666770
0x1401d0fe7: call    0x1400bc6f0
0x1401d0fec: mov     eax,DWORD PTR [r14+0x8328]
0x1401d0ff3: mov     ecx,edi
0x1401d0ff5: sub     ecx,r12d
0x1401d0ff8: cmp     eax,ecx
0x1401d0ffa: cmovle  ecx,eax
0x1401d0ffd: xor     ebx,ebx
0x1401d0fff: test    ecx,ecx
0x1401d1001: cmovns  ebx,ecx
0x1401d1004: lea     esi,[rbx+r12*1]
0x1401d1008: cmp     ebx,esi
0x1401d100a: jge     0x1401d105a
0x1401d100c: mov     r12d,0x1
0x1401d1012: sub     r12d,ebx
0x1401d1015: cmp     ebx,edi
0x1401d1017: jge     0x1401d1056
0x1401d1019: lea     edx,[rbx+r12*1]
0x1401d101d: mov     r8d,r15d
0x1401d1020: lea     rcx,[rip+0x2495749]        # 0x142666770
0x1401d1027: call    0x1400bc6e0
0x1401d102c: movsxd  rdx,ebx
0x1401d102f: lea     rcx,[r14+0x8310]
0x1401d1036: call    0x1400707e0
0x1401d103b: xor     r9d,r9d
0x1401d103e: xor     r8d,r8d
0x1401d1041: mov     rdx,QWORD PTR [rax]
0x1401d1044: lea     rcx,[rip+0x2495725]        # 0x142666770
0x1401d104b: call    0x140af0220
0x1401d1050: inc     ebx
0x1401d1052: cmp     ebx,esi
0x1401d1054: jl      0x1401d1015
0x1401d1056: mov     r12d,DWORD PTR [rbp-0x60]
0x1401d105a: cmp     edi,r12d
0x1401d105d: jle     0x1401c8d63
0x1401d1063: lea     ebx,[r12-0x1]
0x1401d1068: lea     rcx,[rbp+0x2f0]
0x1401d106f: call    0x1400bc920
0x1401d1074: lea     r9d,[rdi-0x1]
0x1401d1078: mov     DWORD PTR [rsp+0x30],ebx
0x1401d107c: mov     DWORD PTR [rsp+0x28],0x2
0x1401d1084: mov     DWORD PTR [rsp+0x20],r12d
0x1401d1089: xor     r8d,r8d
0x1401d108c: mov     edx,DWORD PTR [r14+0x8328]
0x1401d1093: lea     rcx,[rbp+0x2f0]
0x1401d109a: call    0x1400bc940
0x1401d109f: lea     r9d,[r13+0x1]
0x1401d10a3: mov     DWORD PTR [rsp+0x28],0x0
0x1401d10ab: mov     r13,QWORD PTR [rsp+0x78]
0x1401d10b0: movzx   eax,BYTE PTR [r13+0x832c]
0x1401d10b8: mov     BYTE PTR [rsp+0x20],al
0x1401d10bc: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d10c0: mov     edx,DWORD PTR [rbp-0x38]
0x1401d10c3: lea     rcx,[rbp+0x2f0]
0x1401d10ca: call    0x141423200
0x1401d10cf: jmp     0x1401c8d68
0x1401d10d4: cmp     BYTE PTR [rip+0x21db87a],0x0        # 0x1423ac955
0x1401d10db: je      0x1401c8d68
0x1401d10e1: lea     r8,[rbp+0x20]
0x1401d10e5: lea     rdx,[rbp+0xe0]
0x1401d10ec: lea     rcx,[rip+0x249567d]        # 0x142666770
0x1401d10f3: call    0x1400bc900
0x1401d10f8: lea     r8,[rbp+0xdc]
0x1401d10ff: lea     rdx,[rbp+0xd4]
0x1401d1106: lea     rcx,[rip+0x2495663]        # 0x142666770
0x1401d110d: call    0x14014ec00
0x1401d1112: xor     edx,edx
0x1401d1114: lea     rcx,[rip+0x22189d5]        # 0x1423e9af0
0x1401d111b: call    0x140073550
0x1401d1120: test    al,al
0x1401d1122: je      0x1401d1163
0x1401d1124: mov     rax,QWORD PTR [rip+0x24956bd]        # 0x1426667e8
0x1401d112b: mov     ecx,DWORD PTR [rax+0x4]
0x1401d112e: mov     r8d,DWORD PTR [rax+0x8]
0x1401d1132: sar     ecx,1
0x1401d1134: mov     eax,DWORD PTR [rbp+0xd4]
0x1401d113a: cdq     
0x1401d113b: and     edx,0xf
0x1401d113e: lea     r13d,[rdx+rax*1]
0x1401d1142: sar     r13d,0x4
0x1401d1146: sub     r13d,ecx
0x1401d1149: sar     r8d,1
0x1401d114c: mov     eax,DWORD PTR [rbp+0xdc]
0x1401d1152: cdq     
0x1401d1153: and     edx,0xf
0x1401d1156: lea     r14d,[rdx+rax*1]
0x1401d115a: sar     r14d,0x4
0x1401d115e: sub     r14d,r8d
0x1401d1161: jmp     0x1401d1184
0x1401d1163: mov     eax,DWORD PTR [rip+0x221899b]        # 0x1423e9b04
0x1401d1169: sar     eax,1
0x1401d116b: mov     r13d,DWORD PTR [rbp+0xe0]
0x1401d1172: sub     r13d,eax
0x1401d1175: mov     eax,DWORD PTR [rip+0x221898d]        # 0x1423e9b08
0x1401d117b: sar     eax,1
0x1401d117d: mov     r14d,DWORD PTR [rbp+0x20]
0x1401d1181: sub     r14d,eax
0x1401d1184: mov     rcx,QWORD PTR [rsp+0x78]
0x1401d1189: add     r13d,DWORD PTR [rcx+0x198]
0x1401d1190: add     r14d,DWORD PTR [rcx+0x19c]
0x1401d1197: mov     DWORD PTR [rsp+0x74],r14d
0x1401d119c: mov     DWORD PTR [rbp-0x68],r13d
0x1401d11a0: test    r13d,r13d
0x1401d11a3: js      0x1401c8d63
0x1401d11a9: mov     rax,QWORD PTR [rip+0x2336d28]        # 0x142507ed8
0x1401d11b0: cmp     r13d,DWORD PTR [rax+0xa0]
0x1401d11b7: jge     0x1401c8d63
0x1401d11bd: test    r14d,r14d
0x1401d11c0: js      0x1401c8d63
0x1401d11c6: cmp     r14d,DWORD PTR [rax+0xa4]
0x1401d11cd: jge     0x1401c8d63
0x1401d11d3: mov     r8d,r14d
0x1401d11d6: mov     edx,r13d
0x1401d11d9: call    0x1401db5b0
0x1401d11de: mov     ebx,DWORD PTR [rbp-0x18]
0x1401d11e1: mov     DWORD PTR [rbp-0x6c],ebx
0x1401d11e4: lea     eax,[rbx-0x37]
0x1401d11e7: mov     DWORD PTR [rbp-0x70],eax
0x1401d11ea: lea     esi,[rax-0x2]
0x1401d11ed: mov     r12d,0x14
0x1401d11f3: mov     eax,DWORD PTR [rip+0x221890f]        # 0x1423e9b08
0x1401d11f9: cmp     eax,0x2e
0x1401d11fc: jle     0x1401d1217
0x1401d11fe: lea     r12d,[rax-0x1a]
0x1401d1202: cmp     r12d,0x1e
0x1401d1206: jle     0x1401d1217
0x1401d1208: mov     r12d,0x1e
0x1401d120e: mov     edi,ebx
0x1401d1210: xor     eax,eax
0x1401d1212: mov     r15d,eax
0x1401d1215: jmp     0x1401d1227
0x1401d1217: mov     edi,ebx
0x1401d1219: xor     eax,eax
0x1401d121b: mov     r15d,eax
0x1401d121e: test    r12d,r12d
0x1401d1221: js      0x1401d1308
0x1401d1227: mov     r14,rax
0x1401d122a: nop     WORD PTR [rax+rax*1+0x0]
0x1401d1230: mov     ebx,esi
0x1401d1232: cmp     esi,edi
0x1401d1234: jg      0x1401d12ed
0x1401d123a: movsxd  r13,r12d
0x1401d123d: nop     DWORD PTR [rax]
0x1401d1240: mov     r8d,ebx
0x1401d1243: mov     edx,r15d
0x1401d1246: lea     rcx,[rip+0x2495523]        # 0x142666770
0x1401d124d: call    0x1400bc6e0
0x1401d1252: xor     r8d,r8d
0x1401d1255: xor     edx,edx
0x1401d1257: lea     rcx,[rip+0x2495512]        # 0x142666770
0x1401d125e: call    0x1400bc750
0x1401d1263: test    r14,r14
0x1401d1266: jne     0x1401d128f
0x1401d1268: cmp     ebx,esi
0x1401d126a: jne     0x1401d1274
0x1401d126c: mov     edx,DWORD PTR [rip+0x2496e22]        # 0x142668094
0x1401d1272: jmp     0x1401d12d7
0x1401d1274: lea     rcx,[rip+0x24954f5]        # 0x142666770
0x1401d127b: cmp     ebx,edi
0x1401d127d: jne     0x1401d1287
0x1401d127f: mov     edx,DWORD PTR [rip+0x2496e27]        # 0x1426680ac
0x1401d1285: jmp     0x1401d12de
0x1401d1287: mov     edx,DWORD PTR [rip+0x2496e13]        # 0x1426680a0
0x1401d128d: jmp     0x1401d12de
0x1401d128f: cmp     r14,r13
0x1401d1292: jne     0x1401d12bb
0x1401d1294: cmp     ebx,esi
0x1401d1296: jne     0x1401d12a0
0x1401d1298: mov     edx,DWORD PTR [rip+0x2496dfe]        # 0x14266809c
0x1401d129e: jmp     0x1401d12d7
0x1401d12a0: lea     rcx,[rip+0x24954c9]        # 0x142666770
0x1401d12a7: cmp     ebx,edi
0x1401d12a9: jne     0x1401d12b3
0x1401d12ab: mov     edx,DWORD PTR [rip+0x2496e03]        # 0x1426680b4
0x1401d12b1: jmp     0x1401d12de
0x1401d12b3: mov     edx,DWORD PTR [rip+0x2496def]        # 0x1426680a8
0x1401d12b9: jmp     0x1401d12de
0x1401d12bb: cmp     ebx,esi
0x1401d12bd: jne     0x1401d12c7
0x1401d12bf: mov     edx,DWORD PTR [rip+0x2496dd3]        # 0x142668098
0x1401d12c5: jmp     0x1401d12d7
0x1401d12c7: cmp     ebx,edi
0x1401d12c9: mov     edx,DWORD PTR [rip+0x2496de1]        # 0x1426680b0
0x1401d12cf: je      0x1401d12d7
0x1401d12d1: mov     edx,DWORD PTR [rip+0x2496dcd]        # 0x1426680a4
0x1401d12d7: lea     rcx,[rip+0x2495492]        # 0x142666770
0x1401d12de: call    0x140af1390
0x1401d12e3: inc     ebx
0x1401d12e5: cmp     ebx,edi
0x1401d12e7: jle     0x1401d1240
0x1401d12ed: inc     r15d
0x1401d12f0: inc     r14
0x1401d12f3: cmp     r15d,r12d
0x1401d12f6: jle     0x1401d1230
0x1401d12fc: mov     r14d,DWORD PTR [rsp+0x74]
0x1401d1301: mov     r13d,DWORD PTR [rbp-0x68]
0x1401d1305: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401d1308: xor     r8d,r8d
0x1401d130b: mov     edx,0x7
0x1401d1310: mov     r9b,0x1
0x1401d1313: lea     rcx,[rip+0x2495456]        # 0x142666770
0x1401d131a: call    0x1400bc6f0
0x1401d131f: mov     edi,0x1
0x1401d1324: mov     DWORD PTR [rbp-0x48],edi
0x1401d1327: lea     rcx,[rbp+0x11f0]
0x1401d132e: call    0x140070c50
0x1401d1333: nop     
0x1401d1334: mov     r15d,DWORD PTR [rbp-0x70]
0x1401d1338: mov     r8d,r15d
0x1401d133b: mov     edx,edi
0x1401d133d: lea     rcx,[rip+0x249542c]        # 0x142666770
0x1401d1344: call    0x1400bc6e0
0x1401d1349: mov     r8d,r14d
0x1401d134c: mov     edx,r13d
0x1401d134f: mov     rcx,QWORD PTR [rip+0x2336b82]        # 0x142507ed8
0x1401d1356: call    0x1401be9f0
0x1401d135b: test    rax,rax
0x1401d135e: je      0x1401d1415
0x1401d1364: xor     r9d,r9d
0x1401d1367: movzx   r8d,dil
0x1401d136b: lea     rdx,[rbp+0x11f0]
0x1401d1372: mov     rcx,rax
0x1401d1375: call    0x140aaafe0
0x1401d137a: sub     ebx,esi
0x1401d137c: lea     rcx,[rbp+0x11f0]
0x1401d1383: call    0x1400708f0
0x1401d1388: lea     ecx,[rbx-0x7]
0x1401d138b: movsxd  rdx,ecx
0x1401d138e: cmp     rax,rdx
0x1401d1391: jb      0x1401d13fa
0x1401d1393: lea     edi,[rbx-0x8]
0x1401d1396: test    edi,edi
0x1401d1398: js      0x1401d13b0
0x1401d139a: movsxd  rdx,ebx
0x1401d139d: sub     rdx,0x8
0x1401d13a1: xor     r8d,r8d
0x1401d13a4: lea     rcx,[rbp+0x11f0]
0x1401d13ab: call    0x1400e27f0
0x1401d13b0: cmp     edi,0x3
0x1401d13b3: jle     0x1401d13f5
0x1401d13b5: movsxd  rdx,ebx
0x1401d13b8: sub     rdx,0xb
0x1401d13bc: lea     rcx,[rbp+0x11f0]
0x1401d13c3: call    0x1400fcb70
0x1401d13c8: mov     BYTE PTR [rax],0x2e
0x1401d13cb: lea     eax,[rbx-0xa]
0x1401d13ce: movsxd  rdx,eax
0x1401d13d1: lea     rcx,[rbp+0x11f0]
0x1401d13d8: call    0x1400fcb70
0x1401d13dd: mov     BYTE PTR [rax],0x2e
0x1401d13e0: lea     eax,[rbx-0x9]
0x1401d13e3: movsxd  rdx,eax
0x1401d13e6: lea     rcx,[rbp+0x11f0]
0x1401d13ed: call    0x1400fcb70
0x1401d13f2: mov     BYTE PTR [rax],0x2e
0x1401d13f5: mov     edi,0x1
0x1401d13fa: xor     r9d,r9d
0x1401d13fd: xor     r8d,r8d
0x1401d1400: lea     rdx,[rbp+0x11f0]
0x1401d1407: lea     rcx,[rip+0x2495362]        # 0x142666770
0x1401d140e: call    0x140af0220
0x1401d1413: jmp     0x1401d141a
0x1401d1415: xor     edi,edi
0x1401d1417: mov     DWORD PTR [rbp-0x48],edi
0x1401d141a: lea     rcx,[rbp+0x11f0]
0x1401d1421: call    0x1400693f0
0x1401d1426: lea     rcx,[rbp+0x1210]
0x1401d142d: call    0x140070c50
0x1401d1432: nop     
0x1401d1433: lea     edx,[rdi+0x1]
0x1401d1436: mov     r8d,r15d
0x1401d1439: lea     rcx,[rip+0x2495330]        # 0x142666770
0x1401d1440: call    0x1400bc6e0
0x1401d1445: mov     r8d,r14d
0x1401d1448: mov     edx,r13d
0x1401d144b: mov     rcx,QWORD PTR [rip+0x2336a86]        # 0x142507ed8
0x1401d1452: call    0x1401be980
0x1401d1457: test    rax,rax
0x1401d145a: je      0x1401d1510
0x1401d1460: xor     r9d,r9d
0x1401d1463: mov     r8b,0x1
0x1401d1466: lea     rdx,[rbp+0x1210]
0x1401d146d: mov     rcx,rax
0x1401d1470: call    0x140aaafe0
0x1401d1475: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401d1478: sub     ebx,esi
0x1401d147a: lea     rcx,[rbp+0x1210]
0x1401d1481: call    0x1400708f0
0x1401d1486: lea     ecx,[rbx-0x7]
0x1401d1489: movsxd  rdx,ecx
0x1401d148c: cmp     rax,rdx
0x1401d148f: jb      0x1401d14f6
0x1401d1491: lea     edi,[rbx-0x8]
0x1401d1494: test    edi,edi
0x1401d1496: js      0x1401d14ae
0x1401d1498: movsxd  rdx,ebx
0x1401d149b: sub     rdx,0x8
0x1401d149f: xor     r8d,r8d
0x1401d14a2: lea     rcx,[rbp+0x1210]
0x1401d14a9: call    0x1400e27f0
0x1401d14ae: cmp     edi,0x3
0x1401d14b1: jle     0x1401d14f3
0x1401d14b3: movsxd  rdx,ebx
0x1401d14b6: sub     rdx,0xb
0x1401d14ba: lea     rcx,[rbp+0x1210]
0x1401d14c1: call    0x1400fcb70
0x1401d14c6: mov     BYTE PTR [rax],0x2e
0x1401d14c9: lea     eax,[rbx-0xa]
0x1401d14cc: movsxd  rdx,eax
0x1401d14cf: lea     rcx,[rbp+0x1210]
0x1401d14d6: call    0x1400fcb70
0x1401d14db: mov     BYTE PTR [rax],0x2e
0x1401d14de: lea     eax,[rbx-0x9]
0x1401d14e1: movsxd  rdx,eax
0x1401d14e4: lea     rcx,[rbp+0x1210]
0x1401d14eb: call    0x1400fcb70
0x1401d14f0: mov     BYTE PTR [rax],0x2e
0x1401d14f3: mov     edi,DWORD PTR [rbp-0x48]
0x1401d14f6: xor     r9d,r9d
0x1401d14f9: xor     r8d,r8d
0x1401d14fc: lea     rdx,[rbp+0x1210]
0x1401d1503: lea     rcx,[rip+0x2495266]        # 0x142666770
0x1401d150a: call    0x140af0220
0x1401d150f: nop     
0x1401d1510: lea     rcx,[rbp+0x1210]
0x1401d1517: call    0x1400693f0
0x1401d151c: mov     rcx,QWORD PTR [rip+0x21e504d]        # 0x1423b6570
0x1401d1523: movsx   eax,WORD PTR [rcx+0x82]
0x1401d152a: cmp     r13d,eax
0x1401d152d: jne     0x1401d153f
0x1401d152f: movsx   eax,WORD PTR [rcx+0x84]
0x1401d1536: cmp     r14d,eax
0x1401d1539: je      0x1401d1633
0x1401d153f: cmp     edi,0x1
0x1401d1542: jne     0x1401d1633
0x1401d1548: lea     rcx,[rbp+0xf30]
0x1401d154f: call    0x140070c50
0x1401d1554: nop     
0x1401d1555: movzx   r8d,r14w
0x1401d1559: movzx   edx,r13w
0x1401d155d: mov     rcx,QWORD PTR [rip+0x2336974]        # 0x142507ed8
0x1401d1564: call    0x1401bea60
0x1401d1569: mov     ecx,eax
0x1401d156b: cmp     eax,0x12
0x1401d156e: jl      0x1401d15a3
0x1401d1570: mov     eax,0x38e38e39
0x1401d1575: imul    ecx
0x1401d1577: mov     ecx,edx
0x1401d1579: sar     ecx,1
0x1401d157b: mov     eax,ecx
0x1401d157d: shr     eax,0x1f
0x1401d1580: add     ecx,eax
0x1401d1582: lea     rdx,[rbp+0xf30]
0x1401d1589: call    0x140545040
0x1401d158e: lea     rcx,[rbp+0xf30]
0x1401d1595: call    0x140544330
0x1401d159a: lea     rdx,[rip+0x1448de7]        # 0x14161a388 ; literal=" days' travel"
0x1401d15a1: jmp     0x1401d15ed
0x1401d15a3: cmp     ecx,0xb
0x1401d15a6: jl      0x1401d15b1
0x1401d15a8: lea     rdx,[rip+0x1448de9]        # 0x14161a398 ; literal="More than a day's travel"
0x1401d15af: jmp     0x1401d15ed
0x1401d15b1: cmp     ecx,0x8
0x1401d15b4: jl      0x1401d15bf
0x1401d15b6: lea     rdx,[rip+0x1448dfb]        # 0x14161a3b8 ; literal="A day's travel"
0x1401d15bd: jmp     0x1401d15ed
0x1401d15bf: cmp     ecx,0x6
0x1401d15c2: jl      0x1401d15cd
0x1401d15c4: lea     rdx,[rip+0x1448dfd]        # 0x14161a3c8 ; literal="Nearly a day's travel"
0x1401d15cb: jmp     0x1401d15ed
0x1401d15cd: cmp     ecx,0x3
0x1401d15d0: jl      0x1401d15db
0x1401d15d2: lea     rdx,[rip+0x1448e07]        # 0x14161a3e0 ; literal="A half day's travel"
0x1401d15d9: jmp     0x1401d15ed
0x1401d15db: test    ecx,ecx
0x1401d15dd: lea     rdx,[rip+0x1448e14]        # 0x14161a3f8 ; literal='A short trip'
0x1401d15e4: jns     0x1401d15ed
0x1401d15e6: lea     rdx,[rip+0x1448e1b]        # 0x14161a408 ; literal='Inaccessible from your location'
0x1401d15ed: lea     rcx,[rbp+0xf30]
0x1401d15f4: call    0x140070b20
0x1401d15f9: mov     r8d,r15d
0x1401d15fc: mov     edx,0x3
0x1401d1601: lea     rcx,[rip+0x2495168]        # 0x142666770
0x1401d1608: call    0x1400bc6e0
0x1401d160d: xor     r9d,r9d
0x1401d1610: xor     r8d,r8d
0x1401d1613: lea     rdx,[rbp+0xf30]
0x1401d161a: lea     rcx,[rip+0x249514f]        # 0x142666770
0x1401d1621: call    0x140af0220
0x1401d1626: nop     
0x1401d1627: lea     rcx,[rbp+0xf30]
0x1401d162e: call    0x1400693f0
0x1401d1633: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d1638: cmp     QWORD PTR [rbx+0x1d8],0x0
0x1401d1640: je      0x1401d2747
0x1401d1646: lea     rdx,[rip+0x14325e7]        # 0x141603c34 ; literal='The '
0x1401d164d: lea     rcx,[rbp+0xe70]
0x1401d1654: call    0x140069710
0x1401d1659: nop     
0x1401d165a: mov     r8d,r15d
0x1401d165d: mov     edx,0x5
0x1401d1662: lea     rcx,[rip+0x2495107]        # 0x142666770
0x1401d1669: call    0x1400bc6e0
0x1401d166e: lea     rcx,[rbp+0x1270]
0x1401d1675: call    0x140070c50
0x1401d167a: nop     
0x1401d167b: lea     rdx,[rbp+0x1270]
0x1401d1682: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d1689: call    0x1410df470
0x1401d168e: lea     rcx,[rbp+0x1270]
0x1401d1695: call    0x140070ae0
0x1401d169a: test    al,al
0x1401d169c: jne     0x1401d16bf
0x1401d169e: lea     rdx,[rbp+0x1270]
0x1401d16a5: lea     rcx,[rbp+0xe70]
0x1401d16ac: call    0x1400bb2d0
0x1401d16b1: mov     dl,0x20
0x1401d16b3: lea     rcx,[rbp+0xe70]
0x1401d16ba: call    0x1400bb2f0
0x1401d16bf: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d16c6: call    0x141095c20
0x1401d16cb: mov     rdi,rax
0x1401d16ce: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d16d5: call    0x1409cbf30
0x1401d16da: mov     r15,rax
0x1401d16dd: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d16e4: cmp     WORD PTR [rcx+0x80],0xa
0x1401d16ec: je      0x1401d1757
0x1401d16ee: test    rdi,rdi
0x1401d16f1: je      0x1401d1757
0x1401d16f3: mov     ecx,DWORD PTR [rdi+0x9c]
0x1401d16f9: shr     ecx,0xa
0x1401d16fc: not     ecx
0x1401d16fe: test    cl,0x1
0x1401d1701: je      0x1401d1757
0x1401d1703: lea     rcx,[rbp+0x1590]
0x1401d170a: call    0x140070c50
0x1401d170f: nop     
0x1401d1710: mov     r8d,0xffffffff
0x1401d1716: lea     rdx,[rbp+0x1590]
0x1401d171d: movzx   ecx,WORD PTR [rdi+0x98]
0x1401d1724: call    0x140aba070
0x1401d1729: lea     rdx,[rbp+0x1590]
0x1401d1730: lea     rcx,[rbp+0xe70]
0x1401d1737: call    0x1400bb2d0
0x1401d173c: mov     dl,0x20
0x1401d173e: lea     rcx,[rbp+0xe70]
0x1401d1745: call    0x1400bb2f0
0x1401d174a: nop     
0x1401d174b: lea     rcx,[rbp+0x1590]
0x1401d1752: call    0x1400693f0
0x1401d1757: lea     rdx,[rbp+0x1270]
0x1401d175e: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d1765: call    0x1410df4b0
0x1401d176a: lea     rdx,[rbp+0x1270]
0x1401d1771: lea     rcx,[rbp+0xe70]
0x1401d1778: call    0x1400bb2d0
0x1401d177d: lea     rdx,[rip+0x142ffd4]        # 0x141601758 ; literal=' of '
0x1401d1784: lea     rcx,[rbp+0xe70]
0x1401d178b: call    0x140070b20
0x1401d1790: xor     r9d,r9d
0x1401d1793: mov     r8b,0x1
0x1401d1796: lea     rdx,[rbp+0x1270]
0x1401d179d: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d17a4: call    0x140aaafe0
0x1401d17a9: lea     rdx,[rbp+0x1270]
0x1401d17b0: lea     rcx,[rbp+0xe70]
0x1401d17b7: call    0x1400bb2d0
0x1401d17bc: lea     rcx,[rbp+0xe70]
0x1401d17c3: call    0x1405440a0
0x1401d17c8: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401d17cb: sub     ebx,esi
0x1401d17cd: lea     rcx,[rbp+0xe70]
0x1401d17d4: call    0x1400708f0
0x1401d17d9: lea     ecx,[rbx-0x7]
0x1401d17dc: movsxd  rdx,ecx
0x1401d17df: cmp     rax,rdx
0x1401d17e2: jb      0x1401d1849
0x1401d17e4: lea     eax,[rbx-0x8]
0x1401d17e7: test    eax,eax
0x1401d17e9: js      0x1401d1804
0x1401d17eb: movsxd  rdx,ebx
0x1401d17ee: sub     rdx,0x8
0x1401d17f2: xor     r8d,r8d
0x1401d17f5: lea     rcx,[rbp+0xe70]
0x1401d17fc: call    0x1400e27f0
0x1401d1801: lea     eax,[rbx-0x8]
0x1401d1804: cmp     eax,0x3
0x1401d1807: jle     0x1401d1849
0x1401d1809: movsxd  rdx,ebx
0x1401d180c: sub     rdx,0xb
0x1401d1810: lea     rcx,[rbp+0xe70]
0x1401d1817: call    0x1400fcb70
0x1401d181c: mov     BYTE PTR [rax],0x2e
0x1401d181f: lea     eax,[rbx-0xa]
0x1401d1822: movsxd  rdx,eax
0x1401d1825: lea     rcx,[rbp+0xe70]
0x1401d182c: call    0x1400fcb70
0x1401d1831: mov     BYTE PTR [rax],0x2e
0x1401d1834: lea     eax,[rbx-0x9]
0x1401d1837: movsxd  rdx,eax
0x1401d183a: lea     rcx,[rbp+0xe70]
0x1401d1841: call    0x1400fcb70
0x1401d1846: mov     BYTE PTR [rax],0x2e
0x1401d1849: xor     r9d,r9d
0x1401d184c: xor     r8d,r8d
0x1401d184f: lea     rdx,[rbp+0xe70]
0x1401d1856: lea     rcx,[rip+0x2494f13]        # 0x142666770
0x1401d185d: call    0x140af0220
0x1401d1862: mov     rax,QWORD PTR [rip+0x21e4d07]        # 0x1423b6570
0x1401d1869: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d186e: mov     r8d,DWORD PTR [rbp-0x70]
0x1401d1872: mov     edx,0x6
0x1401d1877: lea     rcx,[rip+0x2494ef2]        # 0x142666770
0x1401d187e: cmp     QWORD PTR [rbx+0x1d8],rax
0x1401d1885: jne     0x1401d18d4
0x1401d1887: call    0x1400bc6e0
0x1401d188c: lea     rdx,[rip+0x1448b95]        # 0x14161a428 ; literal='Your location'
0x1401d1893: lea     rcx,[rbp+0x2ef0]
0x1401d189a: call    0x140069710
0x1401d189f: nop     
0x1401d18a0: xor     r9d,r9d
0x1401d18a3: xor     r8d,r8d
0x1401d18a6: lea     rdx,[rbp+0x2ef0]
0x1401d18ad: lea     rcx,[rip+0x2494ebc]        # 0x142666770
0x1401d18b4: call    0x140af0220
0x1401d18b9: nop     
0x1401d18ba: lea     rcx,[rbp+0x2ef0]
0x1401d18c1: call    0x1400693f0
0x1401d18c6: test    r15,r15
0x1401d18c9: je      0x1401d2156
0x1401d18cf: jmp     0x1401d2003
0x1401d18d4: call    0x1400bc6e0
0x1401d18d9: test    r15,r15
0x1401d18dc: je      0x1401d2119
0x1401d18e2: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d18e9: add     rcx,0x90
0x1401d18f0: call    0x140070930
0x1401d18f5: mov     rbx,rax
0x1401d18f8: mov     rax,QWORD PTR [rsp+0x78]
0x1401d18fd: mov     rcx,QWORD PTR [rax+0x1d8]
0x1401d1904: add     rcx,0xd8
0x1401d190b: lea     rdx,[rbp+0x60]
0x1401d190f: call    0x140070800
0x1401d1914: mov     rax,QWORD PTR [rsp+0x78]
0x1401d1919: mov     rcx,QWORD PTR [rax+0x1d8]
0x1401d1920: add     rcx,0xd8
0x1401d1927: lea     rdx,[rbp+0x180]
0x1401d192e: call    0x1400707f0
0x1401d1933: lea     r8,[rbp+0x180]
0x1401d193a: lea     rdx,[rbp+0x12]
0x1401d193e: lea     rcx,[rbp+0x60]
0x1401d1942: call    0x1400703e0
0x1401d1947: xor     edx,edx
0x1401d1949: movzx   ecx,BYTE PTR [rax]
0x1401d194c: call    0x140066d70
0x1401d1951: test    al,al
0x1401d1953: je      0x1401d19b1
0x1401d1955: lea     rcx,[rbp+0x60]
0x1401d1959: call    0x1400703d0
0x1401d195e: mov     rcx,QWORD PTR [rax]
0x1401d1961: cmp     DWORD PTR [rcx],0x0
0x1401d1964: jle     0x1401d1986
0x1401d1966: lea     rcx,[rbp+0x60]
0x1401d196a: call    0x1400703d0
0x1401d196f: mov     rcx,QWORD PTR [rax]
0x1401d1972: cmp     DWORD PTR [rcx+0x18],0xffffffff
0x1401d1976: jne     0x1401d1986
0x1401d1978: lea     rcx,[rbp+0x60]
0x1401d197c: call    0x1400703d0
0x1401d1981: mov     rcx,QWORD PTR [rax]
0x1401d1984: add     ebx,DWORD PTR [rcx]
0x1401d1986: lea     rcx,[rbp+0x60]
0x1401d198a: call    0x1400703c0
0x1401d198f: lea     r8,[rbp+0x180]
0x1401d1996: lea     rdx,[rbp+0x12]
0x1401d199a: lea     rcx,[rbp+0x60]
0x1401d199e: call    0x1400703e0
0x1401d19a3: xor     edx,edx
0x1401d19a5: movzx   ecx,BYTE PTR [rax]
0x1401d19a8: call    0x140066d70
0x1401d19ad: test    al,al
0x1401d19af: jne     0x1401d1955
0x1401d19b1: cmp     ebx,0x30d4
0x1401d19b7: jl      0x1401d19f6
0x1401d19b9: lea     rdx,[rip+0x1448cb0]        # 0x14161a670 ; literal='Population: >10000'
0x1401d19c0: lea     rcx,[rbp+0x2f10]
0x1401d19c7: call    0x140069710
0x1401d19cc: nop     
0x1401d19cd: mov     r9d,0x35
0x1401d19d3: xor     r8d,r8d
0x1401d19d6: lea     rdx,[rbp+0x2f10]
0x1401d19dd: lea     rcx,[rip+0x2494d8c]        # 0x142666770
0x1401d19e4: call    0x140af0220
0x1401d19e9: nop     
0x1401d19ea: lea     rcx,[rbp+0x2f10]
0x1401d19f1: jmp     0x1401d1ffe
0x1401d19f6: cmp     ebx,0x2134
0x1401d19fc: jl      0x1401d1a3b
0x1401d19fe: lea     rdx,[rip+0x1448c83]        # 0x14161a688 ; literal='Population: ~10000'
0x1401d1a05: lea     rcx,[rbp+0x2f30]
0x1401d1a0c: call    0x140069710
0x1401d1a11: nop     
0x1401d1a12: mov     r9d,0x35
0x1401d1a18: xor     r8d,r8d
0x1401d1a1b: lea     rdx,[rbp+0x2f30]
0x1401d1a22: lea     rcx,[rip+0x2494d47]        # 0x142666770
0x1401d1a29: call    0x140af0220
0x1401d1a2e: nop     
0x1401d1a2f: lea     rcx,[rbp+0x2f30]
0x1401d1a36: jmp     0x1401d1ffe
0x1401d1a3b: cmp     ebx,0x1964
0x1401d1a41: jl      0x1401d1a80
0x1401d1a43: lea     rdx,[rip+0x1448c56]        # 0x14161a6a0 ; literal='Population: ~7500'
0x1401d1a4a: lea     rcx,[rbp+0x2f50]
0x1401d1a51: call    0x140069710
0x1401d1a56: nop     
0x1401d1a57: mov     r9d,0x35
0x1401d1a5d: xor     r8d,r8d
0x1401d1a60: lea     rdx,[rbp+0x2f50]
0x1401d1a67: lea     rcx,[rip+0x2494d02]        # 0x142666770
0x1401d1a6e: call    0x140af0220
0x1401d1a73: nop     
0x1401d1a74: lea     rcx,[rbp+0x2f50]
0x1401d1a7b: jmp     0x1401d1ffe
0x1401d1a80: cmp     ebx,0x157c
0x1401d1a86: jl      0x1401d1ac5
0x1401d1a88: lea     rdx,[rip+0x1448c29]        # 0x14161a6b8 ; literal='Population: ~6000'
0x1401d1a8f: lea     rcx,[rbp+0x2f70]
0x1401d1a96: call    0x140069710
0x1401d1a9b: nop     
0x1401d1a9c: mov     r9d,0x35
0x1401d1aa2: xor     r8d,r8d
0x1401d1aa5: lea     rdx,[rbp+0x2f70]
0x1401d1aac: lea     rcx,[rip+0x2494cbd]        # 0x142666770
0x1401d1ab3: call    0x140af0220
0x1401d1ab8: nop     
0x1401d1ab9: lea     rcx,[rbp+0x2f70]
0x1401d1ac0: jmp     0x1401d1ffe
0x1401d1ac5: cmp     ebx,0x1194
0x1401d1acb: jl      0x1401d1b0a
0x1401d1acd: lea     rdx,[rip+0x1448bfc]        # 0x14161a6d0 ; literal='Population: ~5000'
0x1401d1ad4: lea     rcx,[rbp+0x2f90]
0x1401d1adb: call    0x140069710
0x1401d1ae0: nop     
0x1401d1ae1: mov     r9d,0x35
0x1401d1ae7: xor     r8d,r8d
0x1401d1aea: lea     rdx,[rbp+0x2f90]
0x1401d1af1: lea     rcx,[rip+0x2494c78]        # 0x142666770
0x1401d1af8: call    0x140af0220
0x1401d1afd: nop     
0x1401d1afe: lea     rcx,[rbp+0x2f90]
0x1401d1b05: jmp     0x1401d1ffe
0x1401d1b0a: cmp     ebx,0xdac
0x1401d1b10: jl      0x1401d1b4f
0x1401d1b12: lea     rdx,[rip+0x1448bcf]        # 0x14161a6e8 ; literal='Population: ~4000'
0x1401d1b19: lea     rcx,[rbp+0x2fb0]
0x1401d1b20: call    0x140069710
0x1401d1b25: nop     
0x1401d1b26: mov     r9d,0x35
0x1401d1b2c: xor     r8d,r8d
0x1401d1b2f: lea     rdx,[rbp+0x2fb0]
0x1401d1b36: lea     rcx,[rip+0x2494c33]        # 0x142666770
0x1401d1b3d: call    0x140af0220
0x1401d1b42: nop     
0x1401d1b43: lea     rcx,[rbp+0x2fb0]
0x1401d1b4a: jmp     0x1401d1ffe
0x1401d1b4f: cmp     ebx,0x9c4
0x1401d1b55: jl      0x1401d1b94
0x1401d1b57: lea     rdx,[rip+0x1448ba2]        # 0x14161a700 ; literal='Population: ~3000'
0x1401d1b5e: lea     rcx,[rbp+0x2fd0]
0x1401d1b65: call    0x140069710
0x1401d1b6a: nop     
0x1401d1b6b: mov     r9d,0x35
0x1401d1b71: xor     r8d,r8d
0x1401d1b74: lea     rdx,[rbp+0x2fd0]
0x1401d1b7b: lea     rcx,[rip+0x2494bee]        # 0x142666770
0x1401d1b82: call    0x140af0220
0x1401d1b87: nop     
0x1401d1b88: lea     rcx,[rbp+0x2fd0]
0x1401d1b8f: jmp     0x1401d1ffe
0x1401d1b94: cmp     ebx,0x5dc
0x1401d1b9a: jl      0x1401d1bd9
0x1401d1b9c: lea     rdx,[rip+0x1448b75]        # 0x14161a718 ; literal='Population: ~2000'
0x1401d1ba3: lea     rcx,[rbp+0x2ff0]
0x1401d1baa: call    0x140069710
0x1401d1baf: nop     
0x1401d1bb0: mov     r9d,0x35
0x1401d1bb6: xor     r8d,r8d
0x1401d1bb9: lea     rdx,[rbp+0x2ff0]
0x1401d1bc0: lea     rcx,[rip+0x2494ba9]        # 0x142666770
0x1401d1bc7: call    0x140af0220
0x1401d1bcc: nop     
0x1401d1bcd: lea     rcx,[rbp+0x2ff0]
0x1401d1bd4: jmp     0x1401d1ffe
0x1401d1bd9: cmp     ebx,0x352
0x1401d1bdf: jl      0x1401d1c1e
0x1401d1be1: lea     rdx,[rip+0x1448b48]        # 0x14161a730 ; literal='Population: ~1000'
0x1401d1be8: lea     rcx,[rbp+0x3010]
0x1401d1bef: call    0x140069710
0x1401d1bf4: nop     
0x1401d1bf5: mov     r9d,0x35
0x1401d1bfb: xor     r8d,r8d
0x1401d1bfe: lea     rdx,[rbp+0x3010]
0x1401d1c05: lea     rcx,[rip+0x2494b64]        # 0x142666770
0x1401d1c0c: call    0x140af0220
0x1401d1c11: nop     
0x1401d1c12: lea     rcx,[rbp+0x3010]
0x1401d1c19: jmp     0x1401d1ffe
0x1401d1c1e: cmp     ebx,0x28a
0x1401d1c24: jl      0x1401d1c63
0x1401d1c26: lea     rdx,[rip+0x1448b1b]        # 0x14161a748 ; literal='Population: ~750'
0x1401d1c2d: lea     rcx,[rbp+0x3030]
0x1401d1c34: call    0x140069710
0x1401d1c39: nop     
0x1401d1c3a: mov     r9d,0x35
0x1401d1c40: xor     r8d,r8d
0x1401d1c43: lea     rdx,[rbp+0x3030]
0x1401d1c4a: lea     rcx,[rip+0x2494b1f]        # 0x142666770
0x1401d1c51: call    0x140af0220
0x1401d1c56: nop     
0x1401d1c57: lea     rcx,[rbp+0x3030]
0x1401d1c5e: jmp     0x1401d1ffe
0x1401d1c63: cmp     ebx,0x226
0x1401d1c69: jl      0x1401d1ca8
0x1401d1c6b: lea     rdx,[rip+0x1448aee]        # 0x14161a760 ; literal='Population: ~600'
0x1401d1c72: lea     rcx,[rbp+0x3050]
0x1401d1c79: call    0x140069710
0x1401d1c7e: nop     
0x1401d1c7f: mov     r9d,0x35
0x1401d1c85: xor     r8d,r8d
0x1401d1c88: lea     rdx,[rbp+0x3050]
0x1401d1c8f: lea     rcx,[rip+0x2494ada]        # 0x142666770
0x1401d1c96: call    0x140af0220
0x1401d1c9b: nop     
0x1401d1c9c: lea     rcx,[rbp+0x3050]
0x1401d1ca3: jmp     0x1401d1ffe
0x1401d1ca8: cmp     ebx,0x1c2
0x1401d1cae: jl      0x1401d1ced
0x1401d1cb0: lea     rdx,[rip+0x1448ac1]        # 0x14161a778 ; literal='Population: ~500'
0x1401d1cb7: lea     rcx,[rbp+0x3070]
0x1401d1cbe: call    0x140069710
0x1401d1cc3: nop     
0x1401d1cc4: mov     r9d,0x35
0x1401d1cca: xor     r8d,r8d
0x1401d1ccd: lea     rdx,[rbp+0x3070]
0x1401d1cd4: lea     rcx,[rip+0x2494a95]        # 0x142666770
0x1401d1cdb: call    0x140af0220
0x1401d1ce0: nop     
0x1401d1ce1: lea     rcx,[rbp+0x3070]
0x1401d1ce8: jmp     0x1401d1ffe
0x1401d1ced: cmp     ebx,0x15e
0x1401d1cf3: jl      0x1401d1d32
0x1401d1cf5: lea     rdx,[rip+0x1448a94]        # 0x14161a790 ; literal='Population: ~400'
0x1401d1cfc: lea     rcx,[rbp+0x3090]
0x1401d1d03: call    0x140069710
0x1401d1d08: nop     
0x1401d1d09: mov     r9d,0x35
0x1401d1d0f: xor     r8d,r8d
0x1401d1d12: lea     rdx,[rbp+0x3090]
0x1401d1d19: lea     rcx,[rip+0x2494a50]        # 0x142666770
0x1401d1d20: call    0x140af0220
0x1401d1d25: nop     
0x1401d1d26: lea     rcx,[rbp+0x3090]
0x1401d1d2d: jmp     0x1401d1ffe
0x1401d1d32: cmp     ebx,0xfa
0x1401d1d38: jl      0x1401d1d77
0x1401d1d3a: lea     rdx,[rip+0x1448a67]        # 0x14161a7a8 ; literal='Population: ~300'
0x1401d1d41: lea     rcx,[rbp+0x30b0]
0x1401d1d48: call    0x140069710
0x1401d1d4d: nop     
0x1401d1d4e: mov     r9d,0x35
0x1401d1d54: xor     r8d,r8d
0x1401d1d57: lea     rdx,[rbp+0x30b0]
0x1401d1d5e: lea     rcx,[rip+0x2494a0b]        # 0x142666770
0x1401d1d65: call    0x140af0220
0x1401d1d6a: nop     
0x1401d1d6b: lea     rcx,[rbp+0x30b0]
0x1401d1d72: jmp     0x1401d1ffe
0x1401d1d77: cmp     ebx,0x96
0x1401d1d7d: jl      0x1401d1dbc
0x1401d1d7f: lea     rdx,[rip+0x1448a3a]        # 0x14161a7c0 ; literal='Population: ~200'
0x1401d1d86: lea     rcx,[rbp+0x30d0]
0x1401d1d8d: call    0x140069710
0x1401d1d92: nop     
0x1401d1d93: mov     r9d,0x35
0x1401d1d99: xor     r8d,r8d
0x1401d1d9c: lea     rdx,[rbp+0x30d0]
0x1401d1da3: lea     rcx,[rip+0x24949c6]        # 0x142666770
0x1401d1daa: call    0x140af0220
0x1401d1daf: nop     
0x1401d1db0: lea     rcx,[rbp+0x30d0]
0x1401d1db7: jmp     0x1401d1ffe
0x1401d1dbc: cmp     ebx,0x55
0x1401d1dbf: jl      0x1401d1dfe
0x1401d1dc1: lea     rdx,[rip+0x1448a10]        # 0x14161a7d8 ; literal='Population: ~100'
0x1401d1dc8: lea     rcx,[rbp+0x30f0]
0x1401d1dcf: call    0x140069710
0x1401d1dd4: nop     
0x1401d1dd5: mov     r9d,0x35
0x1401d1ddb: xor     r8d,r8d
0x1401d1dde: lea     rdx,[rbp+0x30f0]
0x1401d1de5: lea     rcx,[rip+0x2494984]        # 0x142666770
0x1401d1dec: call    0x140af0220
0x1401d1df1: nop     
0x1401d1df2: lea     rcx,[rbp+0x30f0]
0x1401d1df9: jmp     0x1401d1ffe
0x1401d1dfe: cmp     ebx,0x41
0x1401d1e01: jl      0x1401d1e40
0x1401d1e03: lea     rdx,[rip+0x1448766]        # 0x14161a570 ; literal='Population: ~75'
0x1401d1e0a: lea     rcx,[rbp+0x3110]
0x1401d1e11: call    0x140069710
0x1401d1e16: nop     
0x1401d1e17: mov     r9d,0x35
0x1401d1e1d: xor     r8d,r8d
0x1401d1e20: lea     rdx,[rbp+0x3110]
0x1401d1e27: lea     rcx,[rip+0x2494942]        # 0x142666770
0x1401d1e2e: call    0x140af0220
0x1401d1e33: nop     
0x1401d1e34: lea     rcx,[rbp+0x3110]
0x1401d1e3b: jmp     0x1401d1ffe
0x1401d1e40: cmp     ebx,0x37
0x1401d1e43: jl      0x1401d1e82
0x1401d1e45: lea     rdx,[rip+0x1448734]        # 0x14161a580 ; literal='Population: ~60'
0x1401d1e4c: lea     rcx,[rbp+0x3130]
0x1401d1e53: call    0x140069710
0x1401d1e58: nop     
0x1401d1e59: mov     r9d,0x35
0x1401d1e5f: xor     r8d,r8d
0x1401d1e62: lea     rdx,[rbp+0x3130]
0x1401d1e69: lea     rcx,[rip+0x2494900]        # 0x142666770
0x1401d1e70: call    0x140af0220
0x1401d1e75: nop     
0x1401d1e76: lea     rcx,[rbp+0x3130]
0x1401d1e7d: jmp     0x1401d1ffe
0x1401d1e82: cmp     ebx,0x2d
0x1401d1e85: jl      0x1401d1ec4
0x1401d1e87: lea     rdx,[rip+0x1448702]        # 0x14161a590 ; literal='Population: ~50'
0x1401d1e8e: lea     rcx,[rbp+0x3890]
0x1401d1e95: call    0x140069710
0x1401d1e9a: nop     
0x1401d1e9b: mov     r9d,0x35
0x1401d1ea1: xor     r8d,r8d
0x1401d1ea4: lea     rdx,[rbp+0x3890]
0x1401d1eab: lea     rcx,[rip+0x24948be]        # 0x142666770
0x1401d1eb2: call    0x140af0220
0x1401d1eb7: nop     
0x1401d1eb8: lea     rcx,[rbp+0x3890]
0x1401d1ebf: jmp     0x1401d1ffe
0x1401d1ec4: cmp     ebx,0x23
0x1401d1ec7: jl      0x1401d1f06
0x1401d1ec9: lea     rdx,[rip+0x14486d0]        # 0x14161a5a0 ; literal='Population: ~40'
0x1401d1ed0: lea     rcx,[rbp+0x3170]
0x1401d1ed7: call    0x140069710
0x1401d1edc: nop     
0x1401d1edd: mov     r9d,0x35
0x1401d1ee3: xor     r8d,r8d
0x1401d1ee6: lea     rdx,[rbp+0x3170]
0x1401d1eed: lea     rcx,[rip+0x249487c]        # 0x142666770
0x1401d1ef4: call    0x140af0220
0x1401d1ef9: nop     
0x1401d1efa: lea     rcx,[rbp+0x3170]
0x1401d1f01: jmp     0x1401d1ffe
0x1401d1f06: cmp     ebx,0x19
0x1401d1f09: jl      0x1401d1f48
0x1401d1f0b: lea     rdx,[rip+0x144869e]        # 0x14161a5b0 ; literal='Population: ~30'
0x1401d1f12: lea     rcx,[rbp+0x3190]
0x1401d1f19: call    0x140069710
0x1401d1f1e: nop     
0x1401d1f1f: mov     r9d,0x35
0x1401d1f25: xor     r8d,r8d
0x1401d1f28: lea     rdx,[rbp+0x3190]
0x1401d1f2f: lea     rcx,[rip+0x249483a]        # 0x142666770
0x1401d1f36: call    0x140af0220
0x1401d1f3b: nop     
0x1401d1f3c: lea     rcx,[rbp+0x3190]
0x1401d1f43: jmp     0x1401d1ffe
0x1401d1f48: cmp     ebx,0xf
0x1401d1f4b: jl      0x1401d1f87
0x1401d1f4d: lea     rdx,[rip+0x144866c]        # 0x14161a5c0 ; literal='Population: ~20'
0x1401d1f54: lea     rcx,[rbp+0x31b0]
0x1401d1f5b: call    0x140069710
0x1401d1f60: nop     
0x1401d1f61: mov     r9d,0x35
0x1401d1f67: xor     r8d,r8d
0x1401d1f6a: lea     rdx,[rbp+0x31b0]
0x1401d1f71: lea     rcx,[rip+0x24947f8]        # 0x142666770
0x1401d1f78: call    0x140af0220
0x1401d1f7d: nop     
0x1401d1f7e: lea     rcx,[rbp+0x31b0]
0x1401d1f85: jmp     0x1401d1ffe
0x1401d1f87: cmp     ebx,0x7
0x1401d1f8a: jl      0x1401d1fc6
0x1401d1f8c: lea     rdx,[rip+0x144863d]        # 0x14161a5d0 ; literal='Population: ~10'
0x1401d1f93: lea     rcx,[rbp+0x31d0]
0x1401d1f9a: call    0x140069710
0x1401d1f9f: nop     
0x1401d1fa0: mov     r9d,0x35
0x1401d1fa6: xor     r8d,r8d
0x1401d1fa9: lea     rdx,[rbp+0x31d0]
0x1401d1fb0: lea     rcx,[rip+0x24947b9]        # 0x142666770
0x1401d1fb7: call    0x140af0220
0x1401d1fbc: nop     
0x1401d1fbd: lea     rcx,[rbp+0x31d0]
0x1401d1fc4: jmp     0x1401d1ffe
0x1401d1fc6: lea     rdx,[rip+0x1448613]        # 0x14161a5e0 ; literal='Population: <10'
0x1401d1fcd: lea     rcx,[rbp+0x31f0]
0x1401d1fd4: call    0x140069710
0x1401d1fd9: nop     
0x1401d1fda: mov     r9d,0x35
0x1401d1fe0: xor     r8d,r8d
0x1401d1fe3: lea     rdx,[rbp+0x31f0]
0x1401d1fea: lea     rcx,[rip+0x249477f]        # 0x142666770
0x1401d1ff1: call    0x140af0220
0x1401d1ff6: nop     
0x1401d1ff7: lea     rcx,[rbp+0x31f0]
0x1401d1ffe: call    0x1400693f0
0x1401d2003: lea     rcx,[rbp+0x15b0]
0x1401d200a: call    0x140070c50
0x1401d200f: nop     
0x1401d2010: lea     rcx,[r15+0x20]
0x1401d2014: xor     r9d,r9d
0x1401d2017: mov     r8b,0x1
0x1401d201a: lea     rdx,[rbp+0x15b0]
0x1401d2021: call    0x140aaafe0
0x1401d2026: mov     r8d,DWORD PTR [rbp-0x70]
0x1401d202a: mov     edx,0x7
0x1401d202f: lea     rcx,[rip+0x249473a]        # 0x142666770
0x1401d2036: call    0x1400bc6e0
0x1401d203b: lea     rdx,[rip+0x14485c6]        # 0x14161a608 ; literal='Site government: '
0x1401d2042: lea     rcx,[rbp+0x1230]
0x1401d2049: call    0x140069710
0x1401d204e: nop     
0x1401d204f: lea     rdx,[rbp+0x15b0]
0x1401d2056: lea     rcx,[rbp+0x1230]
0x1401d205d: call    0x1400bb2d0
0x1401d2062: lea     rcx,[rbp+0x1230]
0x1401d2069: call    0x1400708f0
0x1401d206e: mov     edx,DWORD PTR [rbp-0x6c]
0x1401d2071: mov     ecx,edx
0x1401d2073: sub     ecx,esi
0x1401d2075: sub     ecx,0x7
0x1401d2078: movsxd  rcx,ecx
0x1401d207b: cmp     rax,rcx
0x1401d207e: jb      0x1401d20e9
0x1401d2080: mov     ebx,edx
0x1401d2082: sub     ebx,esi
0x1401d2084: lea     eax,[rbx-0x8]
0x1401d2087: test    eax,eax
0x1401d2089: js      0x1401d20a4
0x1401d208b: movsxd  rdx,ebx
0x1401d208e: sub     rdx,0x8
0x1401d2092: xor     r8d,r8d
0x1401d2095: lea     rcx,[rbp+0x1230]
0x1401d209c: call    0x1400e27f0
0x1401d20a1: lea     eax,[rbx-0x8]
0x1401d20a4: cmp     eax,0x3
0x1401d20a7: jle     0x1401d20e9
0x1401d20a9: movsxd  rdx,ebx
0x1401d20ac: sub     rdx,0xb
0x1401d20b0: lea     rcx,[rbp+0x1230]
0x1401d20b7: call    0x1400fcb70
0x1401d20bc: mov     BYTE PTR [rax],0x2e
0x1401d20bf: lea     eax,[rbx-0xa]
0x1401d20c2: movsxd  rdx,eax
0x1401d20c5: lea     rcx,[rbp+0x1230]
0x1401d20cc: call    0x1400fcb70
0x1401d20d1: mov     BYTE PTR [rax],0x2e
0x1401d20d4: lea     eax,[rbx-0x9]
0x1401d20d7: movsxd  rdx,eax
0x1401d20da: lea     rcx,[rbp+0x1230]
0x1401d20e1: call    0x1400fcb70
0x1401d20e6: mov     BYTE PTR [rax],0x2e
0x1401d20e9: xor     r9d,r9d
0x1401d20ec: xor     r8d,r8d
0x1401d20ef: lea     rdx,[rbp+0x1230]
0x1401d20f6: lea     rcx,[rip+0x2494673]        # 0x142666770
0x1401d20fd: call    0x140af0220
0x1401d2102: nop     
0x1401d2103: lea     rcx,[rbp+0x1230]
0x1401d210a: call    0x1400693f0
0x1401d210f: nop     
0x1401d2110: lea     rcx,[rbp+0x15b0]
0x1401d2117: jmp     0x1401d2151
0x1401d2119: lea     rdx,[rip+0x14484d0]        # 0x14161a5f0 ; literal='No civilized population'
0x1401d2120: lea     rcx,[rbp+0x3210]
0x1401d2127: call    0x140069710
0x1401d212c: nop     
0x1401d212d: mov     r9d,0x35
0x1401d2133: xor     r8d,r8d
0x1401d2136: lea     rdx,[rbp+0x3210]
0x1401d213d: lea     rcx,[rip+0x249462c]        # 0x142666770
0x1401d2144: call    0x140af0220
0x1401d2149: nop     
0x1401d214a: lea     rcx,[rbp+0x3210]
0x1401d2151: call    0x1400693f0
0x1401d2156: test    rdi,rdi
0x1401d2159: je      0x1401d227c
0x1401d215f: cmp     rdi,r15
0x1401d2162: je      0x1401d227c
0x1401d2168: lea     rcx,[rbp+0x15d0]
0x1401d216f: call    0x140070c50
0x1401d2174: nop     
0x1401d2175: lea     rcx,[rdi+0x20]
0x1401d2179: xor     r9d,r9d
0x1401d217c: mov     r8b,0x1
0x1401d217f: lea     rdx,[rbp+0x15d0]
0x1401d2186: call    0x140aaafe0
0x1401d218b: mov     r8d,DWORD PTR [rbp-0x70]
0x1401d218f: mov     edx,0x8
0x1401d2194: lea     rcx,[rip+0x24945d5]        # 0x142666770
0x1401d219b: call    0x1400bc6e0
0x1401d21a0: lea     rdx,[rip+0x1448479]        # 0x14161a620 ; literal='Civilization: '
0x1401d21a7: lea     rcx,[rbp+0x1250]
0x1401d21ae: call    0x140069710
0x1401d21b3: nop     
0x1401d21b4: lea     rdx,[rbp+0x15d0]
0x1401d21bb: lea     rcx,[rbp+0x1250]
0x1401d21c2: call    0x1400bb2d0
0x1401d21c7: lea     rcx,[rbp+0x1250]
0x1401d21ce: call    0x1400708f0
0x1401d21d3: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401d21d6: mov     ecx,ebx
0x1401d21d8: sub     ecx,esi
0x1401d21da: sub     ecx,0x7
0x1401d21dd: movsxd  rcx,ecx
0x1401d21e0: cmp     rax,rcx
0x1401d21e3: jb      0x1401d2249
0x1401d21e5: sub     ebx,esi
0x1401d21e7: lea     esi,[rbx-0x8]
0x1401d21ea: test    esi,esi
0x1401d21ec: js      0x1401d2204
0x1401d21ee: movsxd  rdx,ebx
0x1401d21f1: sub     rdx,0x8
0x1401d21f5: xor     r8d,r8d
0x1401d21f8: lea     rcx,[rbp+0x1250]
0x1401d21ff: call    0x1400e27f0
0x1401d2204: cmp     esi,0x3
0x1401d2207: jle     0x1401d2249
0x1401d2209: movsxd  rdx,ebx
0x1401d220c: sub     rdx,0xb
0x1401d2210: lea     rcx,[rbp+0x1250]
0x1401d2217: call    0x1400fcb70
0x1401d221c: mov     BYTE PTR [rax],0x2e
0x1401d221f: lea     eax,[rbx-0xa]
0x1401d2222: movsxd  rdx,eax
0x1401d2225: lea     rcx,[rbp+0x1250]
0x1401d222c: call    0x1400fcb70
0x1401d2231: mov     BYTE PTR [rax],0x2e
0x1401d2234: lea     eax,[rbx-0x9]
0x1401d2237: movsxd  rdx,eax
0x1401d223a: lea     rcx,[rbp+0x1250]
0x1401d2241: call    0x1400fcb70
0x1401d2246: mov     BYTE PTR [rax],0x2e
0x1401d2249: xor     r9d,r9d
0x1401d224c: xor     r8d,r8d
0x1401d224f: lea     rdx,[rbp+0x1250]
0x1401d2256: lea     rcx,[rip+0x2494513]        # 0x142666770
0x1401d225d: call    0x140af0220
0x1401d2262: nop     
0x1401d2263: lea     rcx,[rbp+0x1250]
0x1401d226a: call    0x1400693f0
0x1401d226f: nop     
0x1401d2270: lea     rcx,[rbp+0x15d0]
0x1401d2277: call    0x1400693f0
0x1401d227c: mov     edx,DWORD PTR [rip+0x21dd776]        # 0x1423af9f8
0x1401d2282: lea     rcx,[rip+0x221b8ef]        # 0x1423edb78
0x1401d2289: call    0x14007f0b0
0x1401d228e: mov     rbx,rax
0x1401d2291: mov     edx,DWORD PTR [rip+0x21dd759]        # 0x1423af9f0
0x1401d2297: lea     rcx,[rip+0x221b8da]        # 0x1423edb78
0x1401d229e: call    0x14007f0b0
0x1401d22a3: test    rax,rax
0x1401d22a6: je      0x1401d26b7
0x1401d22ac: test    rbx,rbx
0x1401d22af: je      0x1401d26b7
0x1401d22b5: test    rdi,rdi
0x1401d22b8: je      0x1401d26b7
0x1401d22be: test    r15,r15
0x1401d22c1: je      0x1401d2725
0x1401d22c7: cmp     rax,rdi
0x1401d22ca: je      0x1401d26bc
0x1401d22d0: lea     rcx,[rax+0x1028]
0x1401d22d7: mov     edx,DWORD PTR [rdi+0x4]
0x1401d22da: call    0x1401010b0
0x1401d22df: mov     rdi,rax
0x1401d22e2: lea     rcx,[rbx+0x1028]
0x1401d22e9: mov     edx,DWORD PTR [r15+0x4]
0x1401d22ed: call    0x1401010b0
0x1401d22f2: mov     rbx,rax
0x1401d22f5: mov     r8d,DWORD PTR [rbp-0x70]
0x1401d22f9: mov     edx,0x9
0x1401d22fe: lea     rcx,[rip+0x249446b]        # 0x142666770
0x1401d2305: call    0x1400bc6e0
0x1401d230a: test    rbx,rbx
0x1401d230d: je      0x1401d24d7
0x1401d2313: movzx   eax,WORD PTR [rbx+0x4]
0x1401d2317: cmp     ax,0x3
0x1401d231b: je      0x1401d235e
0x1401d231d: cmp     ax,0x4
0x1401d2321: jne     0x1401d24d7
0x1401d2327: lea     rdx,[rip+0x1448312]        # 0x14161a640 ; literal='They accept '
0x1401d232e: lea     rcx,[rbp+0x3230]
0x1401d2335: call    0x140069710
0x1401d233a: nop     
0x1401d233b: xor     r9d,r9d
0x1401d233e: mov     r8b,0x3
0x1401d2341: lea     rdx,[rbp+0x3230]
0x1401d2348: lea     rcx,[rip+0x2494421]        # 0x142666770
0x1401d234f: call    0x140af0220
0x1401d2354: nop     
0x1401d2355: lea     rcx,[rbp+0x3230]
0x1401d235c: jmp     0x1401d2393
0x1401d235e: lea     rdx,[rip+0x14482cb]        # 0x14161a630 ; literal='They offer '
0x1401d2365: lea     rcx,[rbp+0x3250]
0x1401d236c: call    0x140069710
0x1401d2371: nop     
0x1401d2372: xor     r9d,r9d
0x1401d2375: mov     r8b,0x3
0x1401d2378: lea     rdx,[rbp+0x3250]
0x1401d237f: lea     rcx,[rip+0x24943ea]        # 0x142666770
0x1401d2386: call    0x140af0220
0x1401d238b: nop     
0x1401d238c: lea     rcx,[rbp+0x3250]
0x1401d2393: call    0x1400693f0
0x1401d2398: mov     ecx,DWORD PTR [rbx+0x44]
0x1401d239b: test    ecx,ecx
0x1401d239d: je      0x1401d245e
0x1401d23a3: sub     ecx,0x1
0x1401d23a6: je      0x1401d2427
0x1401d23a8: sub     ecx,0x1
0x1401d23ab: je      0x1401d23f0
0x1401d23ad: cmp     ecx,0x1
0x1401d23b0: jne     0x1401d2498
0x1401d23b6: lea     rdx,[rip+0x1441c5f]        # 0x14161401c ; literal='Winter'
0x1401d23bd: lea     rcx,[rbp+0x3270]
0x1401d23c4: call    0x140069710
0x1401d23c9: nop     
0x1401d23ca: xor     r9d,r9d
0x1401d23cd: mov     r8b,0x3
0x1401d23d0: lea     rdx,[rbp+0x3270]
0x1401d23d7: lea     rcx,[rip+0x2494392]        # 0x142666770
0x1401d23de: call    0x140af0220
0x1401d23e3: nop     
0x1401d23e4: lea     rcx,[rbp+0x3270]
0x1401d23eb: jmp     0x1401d2493
0x1401d23f0: lea     rdx,[rip+0x1441c1d]        # 0x141614014 ; literal='Autumn'
0x1401d23f7: lea     rcx,[rbp+0x3290]
0x1401d23fe: call    0x140069710
0x1401d2403: nop     
0x1401d2404: xor     r9d,r9d
0x1401d2407: mov     r8b,0x3
0x1401d240a: lea     rdx,[rbp+0x3290]
0x1401d2411: lea     rcx,[rip+0x2494358]        # 0x142666770
0x1401d2418: call    0x140af0220
0x1401d241d: nop     
0x1401d241e: lea     rcx,[rbp+0x3290]
0x1401d2425: jmp     0x1401d2493
0x1401d2427: lea     rdx,[rip+0x1441bde]        # 0x14161400c ; literal='Summer'
0x1401d242e: lea     rcx,[rbp+0x32b0]
0x1401d2435: call    0x140069710
0x1401d243a: nop     
0x1401d243b: xor     r9d,r9d
0x1401d243e: mov     r8b,0x3
0x1401d2441: lea     rdx,[rbp+0x32b0]
0x1401d2448: lea     rcx,[rip+0x2494321]        # 0x142666770
0x1401d244f: call    0x140af0220
0x1401d2454: nop     
0x1401d2455: lea     rcx,[rbp+0x32b0]
0x1401d245c: jmp     0x1401d2493
0x1401d245e: lea     rdx,[rip+0x1441b9f]        # 0x141614004 ; literal='Spring'
0x1401d2465: lea     rcx,[rbp+0x32d0]
0x1401d246c: call    0x140069710
0x1401d2471: nop     
0x1401d2472: xor     r9d,r9d
0x1401d2475: mov     r8b,0x3
0x1401d2478: lea     rdx,[rbp+0x32d0]
0x1401d247f: lea     rcx,[rip+0x24942ea]        # 0x142666770
0x1401d2486: call    0x140af0220
0x1401d248b: nop     
0x1401d248c: lea     rcx,[rbp+0x32d0]
0x1401d2493: call    0x1400693f0
0x1401d2498: lea     rdx,[rip+0x14481b1]        # 0x14161a650 ; literal=' tribute'
0x1401d249f: lea     rcx,[rbp+0x32f0]
0x1401d24a6: call    0x140069710
0x1401d24ab: nop     
0x1401d24ac: xor     r9d,r9d
0x1401d24af: xor     r8d,r8d
0x1401d24b2: lea     rdx,[rbp+0x32f0]
0x1401d24b9: lea     rcx,[rip+0x24942b0]        # 0x142666770
0x1401d24c0: call    0x140af0220
0x1401d24c5: nop     
0x1401d24c6: lea     rcx,[rbp+0x32f0]
0x1401d24cd: call    0x1400693f0
0x1401d24d2: jmp     0x1401d26bc
0x1401d24d7: test    rdi,rdi
0x1401d24da: je      0x1401d267b
0x1401d24e0: movsx   rax,WORD PTR [rdi+0x4]
0x1401d24e5: cmp     eax,0x5
0x1401d24e8: ja      0x1401d26bc
0x1401d24ee: lea     rdx,[rip+0xffffffffffe2db0b]        # 0x140000000
0x1401d24f5: mov     ecx,DWORD PTR [rdx+rax*4+0x1d66b0]
0x1401d24fc: add     rcx,rdx
0x1401d24ff: jmp     rcx
0x1401d2501: test    BYTE PTR [rdi+0x40],0x4
0x1401d2505: je      0x1401d2546
0x1401d2507: lea     rdx,[rip+0x1448152]        # 0x14161a660 ; literal='Alliance'
0x1401d250e: lea     rcx,[rbp+0x3310]
0x1401d2515: call    0x140069710
0x1401d251a: nop     
0x1401d251b: xor     r9d,r9d
0x1401d251e: xor     r8d,r8d
0x1401d2521: lea     rdx,[rbp+0x3310]
0x1401d2528: lea     rcx,[rip+0x2494241]        # 0x142666770
0x1401d252f: call    0x140af0220
0x1401d2534: nop     
0x1401d2535: lea     rcx,[rbp+0x3310]
0x1401d253c: call    0x1400693f0
0x1401d2541: jmp     0x1401d26bc
0x1401d2546: lea     rdx,[rip+0x142c6d7]        # 0x1415fec24 ; literal='Peace'
0x1401d254d: lea     rcx,[rbp+0x3330]
0x1401d2554: call    0x140069710
0x1401d2559: nop     
0x1401d255a: xor     r9d,r9d
0x1401d255d: xor     r8d,r8d
0x1401d2560: lea     rdx,[rbp+0x3330]
0x1401d2567: lea     rcx,[rip+0x2494202]        # 0x142666770
0x1401d256e: call    0x140af0220
0x1401d2573: nop     
0x1401d2574: lea     rcx,[rbp+0x3330]
0x1401d257b: call    0x1400693f0
0x1401d2580: jmp     0x1401d26bc
0x1401d2585: lea     rdx,[rip+0x14480e0]        # 0x14161a66c ; literal='War'
0x1401d258c: lea     rcx,[rbp+0x3350]
0x1401d2593: call    0x140069710
0x1401d2598: nop     
0x1401d2599: xor     r9d,r9d
0x1401d259c: xor     r8d,r8d
0x1401d259f: lea     rdx,[rbp+0x3350]
0x1401d25a6: lea     rcx,[rip+0x24941c3]        # 0x142666770
0x1401d25ad: call    0x140af0220
0x1401d25b2: nop     
0x1401d25b3: lea     rcx,[rbp+0x3350]
0x1401d25ba: call    0x1400693f0
0x1401d25bf: jmp     0x1401d26bc
0x1401d25c4: lea     rdx,[rip+0x144839d]        # 0x14161a968 ; literal='They offer tribute'
0x1401d25cb: lea     rcx,[rbp+0x3370]
0x1401d25d2: call    0x140069710
0x1401d25d7: nop     
0x1401d25d8: xor     r9d,r9d
0x1401d25db: xor     r8d,r8d
0x1401d25de: lea     rdx,[rbp+0x3370]
0x1401d25e5: lea     rcx,[rip+0x2494184]        # 0x142666770
0x1401d25ec: call    0x140af0220
0x1401d25f1: nop     
0x1401d25f2: lea     rcx,[rbp+0x3370]
0x1401d25f9: call    0x1400693f0
0x1401d25fe: jmp     0x1401d26bc
0x1401d2603: lea     rdx,[rip+0x1448376]        # 0x14161a980 ; literal='They accept tribute'
0x1401d260a: lea     rcx,[rbp+0x3390]
0x1401d2611: call    0x140069710
0x1401d2616: nop     
0x1401d2617: xor     r9d,r9d
0x1401d261a: xor     r8d,r8d
0x1401d261d: lea     rdx,[rbp+0x3390]
0x1401d2624: lea     rcx,[rip+0x2494145]        # 0x142666770
0x1401d262b: call    0x140af0220
0x1401d2630: nop     
0x1401d2631: lea     rcx,[rbp+0x3390]
0x1401d2638: call    0x1400693f0
0x1401d263d: jmp     0x1401d26bc
0x1401d263f: lea     rdx,[rip+0x1448352]        # 0x14161a998 ; literal='Skirmishing'
0x1401d2646: lea     rcx,[rbp+0x33b0]
0x1401d264d: call    0x140069710
0x1401d2652: nop     
0x1401d2653: xor     r9d,r9d
0x1401d2656: xor     r8d,r8d
0x1401d2659: lea     rdx,[rbp+0x33b0]
0x1401d2660: lea     rcx,[rip+0x2494109]        # 0x142666770
0x1401d2667: call    0x140af0220
0x1401d266c: nop     
0x1401d266d: lea     rcx,[rbp+0x33b0]
0x1401d2674: call    0x1400693f0
0x1401d2679: jmp     0x1401d26bc
0x1401d267b: lea     rdx,[rip+0x14482d6]        # 0x14161a958 ; literal='No contact'
0x1401d2682: lea     rcx,[rbp+0x33d0]
0x1401d2689: call    0x140069710
0x1401d268e: nop     
0x1401d268f: xor     r9d,r9d
0x1401d2692: xor     r8d,r8d
0x1401d2695: lea     rdx,[rbp+0x33d0]
0x1401d269c: lea     rcx,[rip+0x24940cd]        # 0x142666770
0x1401d26a3: call    0x140af0220
0x1401d26a8: nop     
0x1401d26a9: lea     rcx,[rbp+0x33d0]
0x1401d26b0: call    0x1400693f0
0x1401d26b5: jmp     0x1401d26bc
0x1401d26b7: test    r15,r15
0x1401d26ba: je      0x1401d2725
0x1401d26bc: mov     edx,0x8
0x1401d26c1: mov     rcx,r15
0x1401d26c4: call    0x1409cbf00
0x1401d26c9: mov     r15d,DWORD PTR [rbp-0x70]
0x1401d26cd: cmp     eax,DWORD PTR [rip+0x21dd321]        # 0x1423af9f4
0x1401d26d3: jne     0x1401d2729
0x1401d26d5: mov     r8d,r15d
0x1401d26d8: mov     edx,0xa
0x1401d26dd: lea     rcx,[rip+0x249408c]        # 0x142666770
0x1401d26e4: call    0x1400bc6e0
0x1401d26e9: lea     rdx,[rip+0x14482b8]        # 0x14161a9a8 ; literal='Economically linked to you'
0x1401d26f0: lea     rcx,[rbp+0x33f0]
0x1401d26f7: call    0x140069710
0x1401d26fc: nop     
0x1401d26fd: xor     r9d,r9d
0x1401d2700: xor     r8d,r8d
0x1401d2703: lea     rdx,[rbp+0x33f0]
0x1401d270a: lea     rcx,[rip+0x249405f]        # 0x142666770
0x1401d2711: call    0x140af0220
0x1401d2716: nop     
0x1401d2717: lea     rcx,[rbp+0x33f0]
0x1401d271e: call    0x1400693f0
0x1401d2723: jmp     0x1401d2729
0x1401d2725: mov     r15d,DWORD PTR [rbp-0x70]
0x1401d2729: lea     rcx,[rbp+0x1270]
0x1401d2730: call    0x1400693f0
0x1401d2735: nop     
0x1401d2736: lea     rcx,[rbp+0xe70]
0x1401d273d: call    0x1400693f0
0x1401d2742: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d2747: cmp     DWORD PTR [rbx+0x8300],r13d
0x1401d274e: jne     0x1401d2759
0x1401d2750: cmp     DWORD PTR [rbx+0x8304],r14d
0x1401d2757: je      0x1401d277c
0x1401d2759: mov     DWORD PTR [rbx+0x8300],r13d
0x1401d2760: mov     DWORD PTR [rbx+0x8304],r14d
0x1401d2767: mov     r8d,r14d
0x1401d276a: mov     edx,r13d
0x1401d276d: mov     r13,QWORD PTR [rsp+0x78]
0x1401d2772: mov     rcx,r13
0x1401d2775: call    0x1401dd340
0x1401d277a: jmp     0x1401d2781
0x1401d277c: mov     r13,QWORD PTR [rsp+0x78]
0x1401d2781: xor     r8d,r8d
0x1401d2784: mov     edx,0x7
0x1401d2789: xor     r9d,r9d
0x1401d278c: lea     rcx,[rip+0x2493fdd]        # 0x142666770
0x1401d2793: call    0x1400bc6f0
0x1401d2798: mov     r14d,0xc
0x1401d279e: lea     rdx,[rbp+0xb8]
0x1401d27a5: lea     rcx,[r13+0x8310]
0x1401d27ac: call    0x140070800
0x1401d27b1: lea     rdx,[rbp+0x188]
0x1401d27b8: lea     rcx,[r13+0x8310]
0x1401d27bf: call    0x1400707f0
0x1401d27c4: lea     r8,[rbp+0x188]
0x1401d27cb: lea     rdx,[rbp+0x0]
0x1401d27cf: lea     rcx,[rbp+0xb8]
0x1401d27d6: call    0x1400703e0
0x1401d27db: xor     edx,edx
0x1401d27dd: movzx   ecx,BYTE PTR [rax]
0x1401d27e0: call    0x140066d70
0x1401d27e5: test    al,al
0x1401d27e7: je      0x1401c8d68
0x1401d27ed: lea     edi,[r12-0x2]
0x1401d27f2: cmp     r14d,edi
0x1401d27f5: jne     0x1401d280b
0x1401d27f7: lea     rcx,[r13+0x8310]
0x1401d27fe: call    0x140070410
0x1401d2803: lea     ecx,[r14-0xa]
0x1401d2807: cmp     ecx,eax
0x1401d2809: jl      0x1401d2877
0x1401d280b: mov     r8d,r15d
0x1401d280e: mov     edx,r14d
0x1401d2811: lea     rcx,[rip+0x2493f58]        # 0x142666770
0x1401d2818: call    0x1400bc6e0
0x1401d281d: lea     rcx,[rbp+0xb8]
0x1401d2824: call    0x1400703d0
0x1401d2829: xor     r9d,r9d
0x1401d282c: xor     r8d,r8d
0x1401d282f: mov     rdx,QWORD PTR [rax]
0x1401d2832: lea     rcx,[rip+0x2493f37]        # 0x142666770
0x1401d2839: call    0x140af0220
0x1401d283e: lea     rcx,[rbp+0xb8]
0x1401d2845: call    0x1400703c0
0x1401d284a: inc     r14d
0x1401d284d: lea     r8,[rbp+0x188]
0x1401d2854: lea     rdx,[rbp+0x0]
0x1401d2858: lea     rcx,[rbp+0xb8]
0x1401d285f: call    0x1400703e0
0x1401d2864: xor     edx,edx
0x1401d2866: movzx   ecx,BYTE PTR [rax]
0x1401d2869: call    0x140066d70
0x1401d286e: test    al,al
0x1401d2870: jne     0x1401d27f2
0x1401d2872: jmp     0x1401c8d68
0x1401d2877: xor     r8d,r8d
0x1401d287a: mov     edx,0x7
0x1401d287f: mov     r9b,0x1
0x1401d2882: lea     rcx,[rip+0x2493ee7]        # 0x142666770
0x1401d2889: call    0x1400bc6f0
0x1401d288e: lea     edx,[r12-0x1]
0x1401d2893: mov     r8d,r15d
0x1401d2896: lea     rcx,[rip+0x2493ed3]        # 0x142666770
0x1401d289d: call    0x1400bc6e0
0x1401d28a2: lea     rdx,[rip+0x14489c7]        # 0x14161b270 ; literal='Click to view all news and rumors'
0x1401d28a9: lea     rcx,[rbp+0x3410]
0x1401d28b0: call    0x140069710
0x1401d28b5: nop     
0x1401d28b6: xor     r9d,r9d
0x1401d28b9: xor     r8d,r8d
0x1401d28bc: lea     rdx,[rbp+0x3410]
0x1401d28c3: lea     rcx,[rip+0x2493ea6]        # 0x142666770
0x1401d28ca: call    0x140af0220
0x1401d28cf: nop     
0x1401d28d0: lea     rcx,[rbp+0x3410]
0x1401d28d7: call    0x1400693f0
0x1401d28dc: jmp     0x1401c8d68
0x1401d28e1: mov     edi,DWORD PTR [rbp-0x18]
0x1401d28e4: lea     esi,[rdi-0x3a]
0x1401d28e7: mov     eax,DWORD PTR [rip+0x221721b]        # 0x1423e9b08
0x1401d28ed: lea     ecx,[rax-0x1]
0x1401d28f0: lea     r13d,[rax-0x1a]
0x1401d28f4: cmp     ecx,r13d
0x1401d28f7: cmovle  r13d,ecx
0x1401d28fb: mov     DWORD PTR [rbp-0x60],r13d
0x1401d28ff: xor     eax,eax
0x1401d2901: mov     r15d,eax
0x1401d2904: test    r13d,r13d
0x1401d2907: js      0x1401d29dc
0x1401d290d: mov     r14d,eax
0x1401d2910: mov     ebx,esi
0x1401d2912: cmp     esi,edi
0x1401d2914: jg      0x1401d29cd
0x1401d291a: movsxd  r12,r13d
0x1401d291d: nop     DWORD PTR [rax]
0x1401d2920: mov     r8d,ebx
0x1401d2923: mov     edx,r15d
0x1401d2926: lea     rcx,[rip+0x2493e43]        # 0x142666770
0x1401d292d: call    0x1400bc6e0
0x1401d2932: xor     r8d,r8d
0x1401d2935: xor     edx,edx
0x1401d2937: lea     rcx,[rip+0x2493e32]        # 0x142666770
0x1401d293e: call    0x1400bc750
0x1401d2943: test    r14,r14
0x1401d2946: jne     0x1401d296f
0x1401d2948: cmp     ebx,esi
0x1401d294a: jne     0x1401d2954
0x1401d294c: mov     edx,DWORD PTR [rip+0x2495742]        # 0x142668094
0x1401d2952: jmp     0x1401d29b7
0x1401d2954: lea     rcx,[rip+0x2493e15]        # 0x142666770
0x1401d295b: cmp     ebx,edi
0x1401d295d: jne     0x1401d2967
0x1401d295f: mov     edx,DWORD PTR [rip+0x2495747]        # 0x1426680ac
0x1401d2965: jmp     0x1401d29be
0x1401d2967: mov     edx,DWORD PTR [rip+0x2495733]        # 0x1426680a0
0x1401d296d: jmp     0x1401d29be
0x1401d296f: cmp     r14,r12
0x1401d2972: jne     0x1401d299b
0x1401d2974: cmp     ebx,esi
0x1401d2976: jne     0x1401d2980
0x1401d2978: mov     edx,DWORD PTR [rip+0x249571e]        # 0x14266809c
0x1401d297e: jmp     0x1401d29b7
0x1401d2980: lea     rcx,[rip+0x2493de9]        # 0x142666770
0x1401d2987: cmp     ebx,edi
0x1401d2989: jne     0x1401d2993
0x1401d298b: mov     edx,DWORD PTR [rip+0x2495723]        # 0x1426680b4
0x1401d2991: jmp     0x1401d29be
0x1401d2993: mov     edx,DWORD PTR [rip+0x249570f]        # 0x1426680a8
0x1401d2999: jmp     0x1401d29be
0x1401d299b: cmp     ebx,esi
0x1401d299d: jne     0x1401d29a7
0x1401d299f: mov     edx,DWORD PTR [rip+0x24956f3]        # 0x142668098
0x1401d29a5: jmp     0x1401d29b7
0x1401d29a7: cmp     ebx,edi
0x1401d29a9: mov     edx,DWORD PTR [rip+0x2495701]        # 0x1426680b0
0x1401d29af: je      0x1401d29b7
0x1401d29b1: mov     edx,DWORD PTR [rip+0x24956ed]        # 0x1426680a4
0x1401d29b7: lea     rcx,[rip+0x2493db2]        # 0x142666770
0x1401d29be: call    0x140af1390
0x1401d29c3: inc     ebx
0x1401d29c5: cmp     ebx,edi
0x1401d29c7: jle     0x1401d2920
0x1401d29cd: inc     r15d
0x1401d29d0: inc     r14
0x1401d29d3: cmp     r15d,r13d
0x1401d29d6: jle     0x1401d2910
0x1401d29dc: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d29e1: lea     r12d,[rdi-0x2]
0x1401d29e5: cmp     QWORD PTR [rbx+0x8368],0x0
0x1401d29ed: je      0x1401d3347
0x1401d29f3: lea     r15d,[rdi-0x4]
0x1401d29f7: cmp     DWORD PTR [rbx+0x83c0],0x0
0x1401d29fe: cmovle  r15d,edi
0x1401d2a02: lea     eax,[rsi+0x2]
0x1401d2a05: mov     DWORD PTR [rbp-0x60],eax
0x1401d2a08: add     r13d,0xfffffffb
0x1401d2a0c: mov     DWORD PTR [rsp+0x74],r13d
0x1401d2a11: lea     rcx,[rbx+0x8388]
0x1401d2a18: call    0x140070410
0x1401d2a1d: mov     QWORD PTR [rbp-0x78],rax
0x1401d2a21: mov     ecx,r12d
0x1401d2a24: cmp     eax,r13d
0x1401d2a27: cmovle  ecx,edi
0x1401d2a2a: mov     DWORD PTR [rbp-0x28],ecx
0x1401d2a2d: xor     r8d,r8d
0x1401d2a30: mov     edx,0x3
0x1401d2a35: mov     r9b,0x1
0x1401d2a38: lea     rcx,[rip+0x2493d31]        # 0x142666770
0x1401d2a3f: call    0x1400bc6f0
0x1401d2a44: lea     r8d,[rsi+0x2]
0x1401d2a48: mov     edx,0x1
0x1401d2a4d: lea     rcx,[rip+0x2493d1c]        # 0x142666770
0x1401d2a54: call    0x1400bc6e0
0x1401d2a59: mov     r13,rbx
0x1401d2a5c: mov     rdx,QWORD PTR [rbx+0x8368]
0x1401d2a63: add     rdx,0x28
0x1401d2a67: lea     rcx,[rbp+0x13b0]
0x1401d2a6e: call    0x140070b90
0x1401d2a73: nop     
0x1401d2a74: mov     ebx,r15d
0x1401d2a77: sub     ebx,esi
0x1401d2a79: lea     rcx,[rbp+0x13b0]
0x1401d2a80: call    0x1400708f0
0x1401d2a85: lea     ecx,[rbx-0x2]
0x1401d2a88: movsxd  rdx,ecx
0x1401d2a8b: cmp     rax,rdx
0x1401d2a8e: jb      0x1401d2af2
0x1401d2a90: lea     edi,[rbx-0x3]
0x1401d2a93: test    edi,edi
0x1401d2a95: js      0x1401d2aad
0x1401d2a97: movsxd  rdx,ebx
0x1401d2a9a: sub     rdx,0x3
0x1401d2a9e: xor     r8d,r8d
0x1401d2aa1: lea     rcx,[rbp+0x13b0]
0x1401d2aa8: call    0x1400e27f0
0x1401d2aad: cmp     edi,0x3
0x1401d2ab0: jle     0x1401d2af2
0x1401d2ab2: movsxd  rdx,ebx
0x1401d2ab5: sub     rdx,0x6
0x1401d2ab9: lea     rcx,[rbp+0x13b0]
0x1401d2ac0: call    0x1400fcb70
0x1401d2ac5: mov     BYTE PTR [rax],0x2e
0x1401d2ac8: lea     eax,[rbx-0x5]
0x1401d2acb: movsxd  rdx,eax
0x1401d2ace: lea     rcx,[rbp+0x13b0]
0x1401d2ad5: call    0x1400fcb70
0x1401d2ada: mov     BYTE PTR [rax],0x2e
0x1401d2add: lea     eax,[rbx-0x4]
0x1401d2ae0: movsxd  rdx,eax
0x1401d2ae3: lea     rcx,[rbp+0x13b0]
0x1401d2aea: call    0x1400fcb70
0x1401d2aef: mov     BYTE PTR [rax],0x2e
0x1401d2af2: xor     r9d,r9d
0x1401d2af5: xor     r8d,r8d
0x1401d2af8: lea     rdx,[rbp+0x13b0]
0x1401d2aff: lea     rcx,[rip+0x2493c6a]        # 0x142666770
0x1401d2b06: call    0x140af0220
0x1401d2b0b: cmp     DWORD PTR [r13+0x83b8],0x0
0x1401d2b13: jl      0x1401d2d02
0x1401d2b19: mov     eax,0x1b4e81b5
0x1401d2b1e: imul    DWORD PTR [r13+0x83bc]
0x1401d2b25: mov     edi,edx
0x1401d2b27: sar     edi,0x7
0x1401d2b2a: mov     eax,edi
0x1401d2b2c: shr     eax,0x1f
0x1401d2b2f: add     edi,eax
0x1401d2b31: mov     eax,0x92492493
0x1401d2b36: imul    edi
0x1401d2b38: lea     r14d,[rdi+rdx*1]
0x1401d2b3c: sar     r14d,0x4
0x1401d2b40: mov     eax,r14d
0x1401d2b43: shr     eax,0x1f
0x1401d2b46: add     r14d,eax
0x1401d2b49: imul    eax,r14d,0x1c
0x1401d2b4d: sub     edi,eax
0x1401d2b4f: lea     rcx,[rbp+0xdf0]
0x1401d2b56: call    0x140070c50
0x1401d2b5b: nop     
0x1401d2b5c: lea     rdx,[rbp+0xdf0]
0x1401d2b63: lea     ecx,[rdi+0x1]
0x1401d2b66: call    0x140542fb0
0x1401d2b6b: cmp     edi,0x20
0x1401d2b6e: ja      0x1401d2ba9
0x1401d2b70: movsxd  rax,edi
0x1401d2b73: lea     rdx,[rip+0xffffffffffe2d486]        # 0x140000000
0x1401d2b7a: movzx   eax,BYTE PTR [rdx+rax*1+0x1d66d8]
0x1401d2b82: mov     ecx,DWORD PTR [rdx+rax*4+0x1d66c8]
0x1401d2b89: add     rcx,rdx
0x1401d2b8c: jmp     rcx
0x1401d2b8e: lea     rdx,[rip+0x142fd43]        # 0x1416028d8 ; literal='st'
0x1401d2b95: jmp     0x1401d2bb0
0x1401d2b97: lea     rdx,[rip+0x142fd3e]        # 0x1416028dc ; literal='nd'
0x1401d2b9e: jmp     0x1401d2bb0
0x1401d2ba0: lea     rdx,[rip+0x142fd29]        # 0x1416028d0 ; literal='rd'
0x1401d2ba7: jmp     0x1401d2bb0
0x1401d2ba9: lea     rdx,[rip+0x142fd24]        # 0x1416028d4 ; literal='th'
0x1401d2bb0: lea     rcx,[rbp+0xdf0]
0x1401d2bb7: call    0x140070b20
0x1401d2bbc: lea     rdx,[rip+0x142bda9]        # 0x1415fe96c ; literal=' '
0x1401d2bc3: lea     rcx,[rbp+0xdf0]
0x1401d2bca: call    0x140070b20
0x1401d2bcf: lea     rcx,[rbp+0x15f0]
0x1401d2bd6: call    0x140070c50
0x1401d2bdb: nop     
0x1401d2bdc: lea     rdx,[rbp+0x15f0]
0x1401d2be3: mov     ecx,r14d
0x1401d2be6: call    0x14078a180
0x1401d2beb: lea     rdx,[rbp+0x15f0]
0x1401d2bf2: lea     rcx,[rbp+0xdf0]
0x1401d2bf9: call    0x1400bb2d0
0x1401d2bfe: lea     rdx,[rip+0x142c703]        # 0x1415ff308 ; literal=', '
0x1401d2c05: lea     rcx,[rbp+0xdf0]
0x1401d2c0c: call    0x140070b20
0x1401d2c11: lea     rdx,[rbp+0xdf0]
0x1401d2c18: mov     ecx,DWORD PTR [r13+0x83b8]
0x1401d2c1f: call    0x140542fb0
0x1401d2c24: xor     r8d,r8d
0x1401d2c27: mov     edx,0x7
0x1401d2c2c: mov     r9b,0x1
0x1401d2c2f: lea     rcx,[rip+0x2493b3a]        # 0x142666770
0x1401d2c36: call    0x1400bc6f0
0x1401d2c3b: lea     r8d,[rsi+0x2]
0x1401d2c3f: mov     edx,0x2
0x1401d2c44: lea     rcx,[rip+0x2493b25]        # 0x142666770
0x1401d2c4b: call    0x1400bc6e0
0x1401d2c50: lea     rcx,[rbp+0xdf0]
0x1401d2c57: call    0x1400708f0
0x1401d2c5c: mov     ecx,r15d
0x1401d2c5f: sub     ecx,esi
0x1401d2c61: sub     ecx,0x2
0x1401d2c64: movsxd  rcx,ecx
0x1401d2c67: cmp     rax,rcx
0x1401d2c6a: jb      0x1401d2ccf
0x1401d2c6c: mov     edi,r15d
0x1401d2c6f: sub     edi,esi
0x1401d2c71: lea     ebx,[rdi-0x3]
0x1401d2c74: movsxd  rdx,edi
0x1401d2c77: sub     rdx,0x3
0x1401d2c7b: xor     r8d,r8d
0x1401d2c7e: lea     rcx,[rbp+0xdf0]
0x1401d2c85: call    0x1400e27f0
0x1401d2c8a: cmp     ebx,0x3
0x1401d2c8d: jle     0x1401d2ccf
0x1401d2c8f: movsxd  rdx,edi
0x1401d2c92: sub     rdx,0x6
0x1401d2c96: lea     rcx,[rbp+0xdf0]
0x1401d2c9d: call    0x1400fcb70
0x1401d2ca2: mov     BYTE PTR [rax],0x2e
0x1401d2ca5: lea     eax,[rdi-0x5]
0x1401d2ca8: movsxd  rdx,eax
0x1401d2cab: lea     rcx,[rbp+0xdf0]
0x1401d2cb2: call    0x1400fcb70
0x1401d2cb7: mov     BYTE PTR [rax],0x2e
0x1401d2cba: lea     eax,[rdi-0x4]
0x1401d2cbd: movsxd  rdx,eax
0x1401d2cc0: lea     rcx,[rbp+0xdf0]
0x1401d2cc7: call    0x1400fcb70
0x1401d2ccc: mov     BYTE PTR [rax],0x2e
0x1401d2ccf: xor     r9d,r9d
0x1401d2cd2: xor     r8d,r8d
0x1401d2cd5: lea     rdx,[rbp+0xdf0]
0x1401d2cdc: lea     rcx,[rip+0x2493a8d]        # 0x142666770
0x1401d2ce3: call    0x140af0220
0x1401d2ce8: nop     
0x1401d2ce9: lea     rcx,[rbp+0x15f0]
0x1401d2cf0: call    0x1400693f0
0x1401d2cf5: nop     
0x1401d2cf6: lea     rcx,[rbp+0xdf0]
0x1401d2cfd: call    0x1400693f0
0x1401d2d02: cmp     DWORD PTR [r13+0x83c0],0x0
0x1401d2d0a: jle     0x1401d2e80
0x1401d2d10: mov     edi,0x1
0x1401d2d15: lea     rbx,[rip+0x249e0f4]        # 0x142670e10
0x1401d2d1c: nop     DWORD PTR [rax+0x0]
0x1401d2d20: mov     r8d,r15d
0x1401d2d23: mov     edx,edi
0x1401d2d25: lea     rcx,[rip+0x2493a44]        # 0x142666770
0x1401d2d2c: call    0x1400bc6e0
0x1401d2d31: lea     rcx,[rip+0x2493a38]        # 0x142666770
0x1401d2d38: cmp     BYTE PTR [r13+0x83c4],0x0
0x1401d2d40: je      0x1401d2d47
0x1401d2d42: mov     edx,DWORD PTR [rbx-0x18]
0x1401d2d45: jmp     0x1401d2d4a
0x1401d2d47: mov     edx,DWORD PTR [rbx-0x8]
0x1401d2d4a: call    0x140af1390
0x1401d2d4f: xor     edx,edx
0x1401d2d51: lea     rcx,[rip+0x2216d98]        # 0x1423e9af0
0x1401d2d58: call    0x140073550
0x1401d2d5d: test    al,al
0x1401d2d5f: je      0x1401d2d72
0x1401d2d61: mov     r8b,0x1
0x1401d2d64: xor     edx,edx
0x1401d2d66: lea     rcx,[rip+0x2493a03]        # 0x142666770
0x1401d2d6d: call    0x1400bc750
0x1401d2d72: mov     r8d,r12d
0x1401d2d75: mov     edx,edi
0x1401d2d77: lea     rcx,[rip+0x24939f2]        # 0x142666770
0x1401d2d7e: call    0x1400bc6e0
0x1401d2d83: lea     rcx,[rip+0x24939e6]        # 0x142666770
0x1401d2d8a: cmp     BYTE PTR [r13+0x83c4],0x0
0x1401d2d92: je      0x1401d2d99
0x1401d2d94: mov     edx,DWORD PTR [rbx+0x18]
0x1401d2d97: jmp     0x1401d2d9c
0x1401d2d99: mov     edx,DWORD PTR [rbx+0x8]
0x1401d2d9c: call    0x140af1390
0x1401d2da1: xor     edx,edx
0x1401d2da3: lea     rcx,[rip+0x2216d46]        # 0x1423e9af0
0x1401d2daa: call    0x140073550
0x1401d2daf: test    al,al
0x1401d2db1: je      0x1401d2dc4
0x1401d2db3: mov     r8b,0x1
0x1401d2db6: xor     edx,edx
0x1401d2db8: lea     rcx,[rip+0x24939b1]        # 0x142666770
0x1401d2dbf: call    0x1400bc750
0x1401d2dc4: lea     r8d,[r15+0x1]
0x1401d2dc8: mov     edx,edi
0x1401d2dca: lea     rcx,[rip+0x249399f]        # 0x142666770
0x1401d2dd1: call    0x1400bc6e0
0x1401d2dd6: lea     rcx,[rip+0x2493993]        # 0x142666770
0x1401d2ddd: cmp     BYTE PTR [r13+0x83c4],0x0
0x1401d2de5: je      0x1401d2dec
0x1401d2de7: mov     edx,DWORD PTR [rbx-0x10]
0x1401d2dea: jmp     0x1401d2dee
0x1401d2dec: mov     edx,DWORD PTR [rbx]
0x1401d2dee: call    0x140af1390
0x1401d2df3: xor     edx,edx
0x1401d2df5: lea     rcx,[rip+0x2216cf4]        # 0x1423e9af0
0x1401d2dfc: call    0x140073550
0x1401d2e01: test    al,al
0x1401d2e03: je      0x1401d2e16
0x1401d2e05: mov     r8b,0x1
0x1401d2e08: xor     edx,edx
0x1401d2e0a: lea     rcx,[rip+0x249395f]        # 0x142666770
0x1401d2e11: call    0x1400bc750
0x1401d2e16: lea     r8d,[r12+0x1]
0x1401d2e1b: mov     edx,edi
0x1401d2e1d: lea     rcx,[rip+0x249394c]        # 0x142666770
0x1401d2e24: call    0x1400bc6e0
0x1401d2e29: lea     rcx,[rip+0x2493940]        # 0x142666770
0x1401d2e30: cmp     BYTE PTR [r13+0x83c4],0x0
0x1401d2e38: je      0x1401d2e3f
0x1401d2e3a: mov     edx,DWORD PTR [rbx+0x20]
0x1401d2e3d: jmp     0x1401d2e42
0x1401d2e3f: mov     edx,DWORD PTR [rbx+0x10]
0x1401d2e42: call    0x140af1390
0x1401d2e47: xor     edx,edx
0x1401d2e49: lea     rcx,[rip+0x2216ca0]        # 0x1423e9af0
0x1401d2e50: call    0x140073550
0x1401d2e55: test    al,al
0x1401d2e57: je      0x1401d2e6a
0x1401d2e59: mov     r8b,0x1
0x1401d2e5c: xor     edx,edx
0x1401d2e5e: lea     rcx,[rip+0x249390b]        # 0x142666770
0x1401d2e65: call    0x1400bc750
0x1401d2e6a: inc     edi
0x1401d2e6c: add     rbx,0x4
0x1401d2e70: lea     rax,[rip+0x249dfa1]        # 0x142670e18
0x1401d2e77: cmp     rbx,rax
0x1401d2e7a: jl      0x1401d2d20
0x1401d2e80: mov     r14,QWORD PTR [rbp-0x78]
0x1401d2e84: test    r14d,r14d
0x1401d2e87: jle     0x1401d3336
0x1401d2e8d: mov     eax,DWORD PTR [r13+0x83d0]
0x1401d2e94: mov     ecx,r14d
0x1401d2e97: mov     r15d,DWORD PTR [rsp+0x74]
0x1401d2e9c: sub     ecx,r15d
0x1401d2e9f: cmp     eax,ecx
0x1401d2ea1: cmovle  ecx,eax
0x1401d2ea4: xor     esi,esi
0x1401d2ea6: test    ecx,ecx
0x1401d2ea8: cmovns  esi,ecx
0x1401d2eab: lea     r13d,[rsi+r15*1]
0x1401d2eaf: cmp     esi,r13d
0x1401d2eb2: jge     0x1401d2f9b
0x1401d2eb8: mov     rdi,QWORD PTR [rsp+0x78]
0x1401d2ebd: add     rdi,0x8388
0x1401d2ec4: mov     ebx,0x5
0x1401d2ec9: mov     r12d,ebx
0x1401d2ecc: sub     r12d,esi
0x1401d2ecf: mov     r15d,0x4
0x1401d2ed5: cmp     esi,r14d
0x1401d2ed8: jge     0x1401d2f96
0x1401d2ede: lea     edx,[r12+rsi*1]
0x1401d2ee2: mov     r8d,DWORD PTR [rbp-0x60]
0x1401d2ee6: lea     rcx,[rip+0x2493883]        # 0x142666770
0x1401d2eed: call    0x1400bc6e0
0x1401d2ef2: mov     rcx,QWORD PTR [rsp+0x78]
0x1401d2ef7: mov     eax,DWORD PTR [rcx+0x83c8]
0x1401d2efd: cmp     eax,0x42
0x1401d2f00: jl      0x1401d3017
0x1401d2f06: cmp     esi,DWORD PTR [rcx+0x83cc]
0x1401d2f0c: jl      0x1401d310c
0x1401d2f12: xor     r8d,r8d
0x1401d2f15: xor     edx,edx
0x1401d2f17: mov     r9b,0x1
0x1401d2f1a: lea     rcx,[rip+0x249384f]        # 0x142666770
0x1401d2f21: call    0x1400bc6f0
0x1401d2f26: movsxd  r15,esi
0x1401d2f29: mov     rdx,r15
0x1401d2f2c: mov     rcx,rdi
0x1401d2f2f: call    0x1400707e0
0x1401d2f34: mov     rcx,QWORD PTR [rax]
0x1401d2f37: call    0x1400708f0
0x1401d2f3c: test    eax,eax
0x1401d2f3e: jle     0x1401d2f85
0x1401d2f40: xor     ebx,ebx
0x1401d2f42: mov     r14d,eax
0x1401d2f45: mov     rdx,r15
0x1401d2f48: mov     rcx,rdi
0x1401d2f4b: call    0x1400707e0
0x1401d2f50: mov     rdx,rbx
0x1401d2f53: mov     rcx,QWORD PTR [rax]
0x1401d2f56: call    0x1400fcb70
0x1401d2f5b: mov     r8b,0x1
0x1401d2f5e: lea     rcx,[rip+0x249380b]        # 0x142666770
0x1401d2f65: cmp     BYTE PTR [rax],0x20
0x1401d2f68: mov     dl,0x20
0x1401d2f6a: je      0x1401d2f6e
0x1401d2f6c: mov     dl,0xfa
0x1401d2f6e: call    0x1400bc750
0x1401d2f73: inc     rbx
0x1401d2f76: sub     r14,0x1
0x1401d2f7a: jne     0x1401d2f45
0x1401d2f7c: mov     ebx,0x5
0x1401d2f81: mov     r14,QWORD PTR [rbp-0x78]
0x1401d2f85: mov     r15d,0x4
0x1401d2f8b: inc     esi
0x1401d2f8d: cmp     esi,r13d
0x1401d2f90: jl      0x1401d2ed5
0x1401d2f96: mov     r15d,DWORD PTR [rsp+0x74]
0x1401d2f9b: cmp     r14d,r15d
0x1401d2f9e: jle     0x1401d3331
0x1401d2fa4: lea     ebx,[r15+0x3]
0x1401d2fa8: lea     rcx,[rbp+0x2d0]
0x1401d2faf: call    0x1400bc920
0x1401d2fb4: lea     r9d,[r14-0x1]
0x1401d2fb8: mov     DWORD PTR [rsp+0x30],ebx
0x1401d2fbc: mov     DWORD PTR [rsp+0x28],0x6
0x1401d2fc4: mov     DWORD PTR [rsp+0x20],r15d
0x1401d2fc9: xor     r8d,r8d
0x1401d2fcc: mov     r13,QWORD PTR [rsp+0x78]
0x1401d2fd1: mov     edx,DWORD PTR [r13+0x83d0]
0x1401d2fd8: lea     rcx,[rbp+0x2d0]
0x1401d2fdf: call    0x1400bc940
0x1401d2fe4: mov     r9d,DWORD PTR [rbp-0x28]
0x1401d2fe8: dec     r9d
0x1401d2feb: mov     DWORD PTR [rsp+0x28],0x0
0x1401d2ff3: movzx   eax,BYTE PTR [r13+0x83d4]
0x1401d2ffb: mov     BYTE PTR [rsp+0x20],al
0x1401d2fff: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d3003: mov     edx,DWORD PTR [rbp-0x38]
0x1401d3006: lea     rcx,[rbp+0x2d0]
0x1401d300d: call    0x141423200
0x1401d3012: jmp     0x1401d3336
0x1401d3017: cmp     eax,0x21
0x1401d301a: jl      0x1401d310c
0x1401d3020: cmp     esi,DWORD PTR [rcx+0x83cc]
0x1401d3026: jl      0x1401d310c
0x1401d302c: add     rcx,0x83a0
0x1401d3033: movsxd  r15,esi
0x1401d3036: mov     rdx,r15
0x1401d3039: call    0x140070920
0x1401d303e: movsxd  rcx,DWORD PTR [rax]
0x1401d3041: cmp     ecx,0xf
0x1401d3044: ja      0x1401d3095
0x1401d3046: lea     rdx,[rip+0xffffffffffe2cfb3]        # 0x140000000
0x1401d304d: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d66fc]
0x1401d3054: add     rcx,rdx
0x1401d3057: jmp     rcx
0x1401d3059: xor     edx,edx
0x1401d305b: jmp     0x1401d309a
0x1401d305d: mov     edx,0x6
0x1401d3062: mov     r9b,0x1
0x1401d3065: jmp     0x1401d309d
0x1401d3067: xor     edx,edx
0x1401d3069: mov     r9b,0x1
0x1401d306c: jmp     0x1401d309d
0x1401d306e: mov     edx,0x1
0x1401d3073: jmp     0x1401d309a
0x1401d3075: mov     edx,0x2
0x1401d307a: jmp     0x1401d309a
0x1401d307c: mov     edx,0x3
0x1401d3081: jmp     0x1401d309a
0x1401d3083: mov     edx,0x4
0x1401d3088: jmp     0x1401d309a
0x1401d308a: mov     edx,ebx
0x1401d308c: jmp     0x1401d309a
0x1401d308e: mov     edx,0x6
0x1401d3093: jmp     0x1401d309a
0x1401d3095: mov     edx,0x7
0x1401d309a: xor     r9d,r9d
0x1401d309d: xor     r8d,r8d
0x1401d30a0: lea     rcx,[rip+0x24936c9]        # 0x142666770
0x1401d30a7: call    0x1400bc6f0
0x1401d30ac: mov     rdx,r15
0x1401d30af: mov     rcx,rdi
0x1401d30b2: call    0x1400707e0
0x1401d30b7: mov     rcx,QWORD PTR [rax]
0x1401d30ba: call    0x1400708f0
0x1401d30bf: test    eax,eax
0x1401d30c1: jle     0x1401d2f85
0x1401d30c7: xor     ebx,ebx
0x1401d30c9: mov     r14d,eax
0x1401d30cc: nop     DWORD PTR [rax+0x0]
0x1401d30d0: mov     rdx,r15
0x1401d30d3: mov     rcx,rdi
0x1401d30d6: call    0x1400707e0
0x1401d30db: mov     rdx,rbx
0x1401d30de: mov     rcx,QWORD PTR [rax]
0x1401d30e1: call    0x1400fcb70
0x1401d30e6: mov     r8b,0x1
0x1401d30e9: lea     rcx,[rip+0x2493680]        # 0x142666770
0x1401d30f0: cmp     BYTE PTR [rax],0x20
0x1401d30f3: mov     dl,0x20
0x1401d30f5: je      0x1401d30f9
0x1401d30f7: mov     dl,0xf9
0x1401d30f9: call    0x1400bc750
0x1401d30fe: inc     rbx
0x1401d3101: sub     r14,0x1
0x1401d3105: jne     0x1401d30d0
0x1401d3107: jmp     0x1401d2f7c
0x1401d310c: cmp     eax,0x2
0x1401d310f: jl      0x1401d3241
0x1401d3115: cmp     esi,DWORD PTR [rcx+0x83cc]
0x1401d311b: jl      0x1401d3241
0x1401d3121: add     rcx,0x83a0
0x1401d3128: movsxd  r15,esi
0x1401d312b: mov     rdx,r15
0x1401d312e: call    0x140070920
0x1401d3133: movsxd  rcx,DWORD PTR [rax]
0x1401d3136: cmp     ecx,0xf
0x1401d3139: ja      0x1401d31ce
0x1401d313f: lea     rdx,[rip+0xffffffffffe2ceba]        # 0x140000000
0x1401d3146: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d673c]
0x1401d314d: add     rcx,rdx
0x1401d3150: jmp     rcx
0x1401d3152: xor     edx,edx
0x1401d3154: xor     r9d,r9d
0x1401d3157: jmp     0x1401d31d6
0x1401d3159: mov     edx,0x1
0x1401d315e: xor     r9d,r9d
0x1401d3161: jmp     0x1401d31d6
0x1401d3163: mov     edx,0x2
0x1401d3168: xor     r9d,r9d
0x1401d316b: jmp     0x1401d31d6
0x1401d316d: mov     edx,0x3
0x1401d3172: xor     r9d,r9d
0x1401d3175: jmp     0x1401d31d6
0x1401d3177: mov     edx,0x4
0x1401d317c: xor     r9d,r9d
0x1401d317f: jmp     0x1401d31d6
0x1401d3181: mov     edx,ebx
0x1401d3183: xor     r9d,r9d
0x1401d3186: jmp     0x1401d31d6
0x1401d3188: xor     r9d,r9d
0x1401d318b: jmp     0x1401d31d1
0x1401d318d: xor     edx,edx
0x1401d318f: mov     r9b,0x1
0x1401d3192: jmp     0x1401d31d6
0x1401d3194: mov     edx,0x1
0x1401d3199: movzx   r9d,dl
0x1401d319d: jmp     0x1401d31d6
0x1401d319f: mov     edx,0x2
0x1401d31a4: mov     r9b,0x1
0x1401d31a7: jmp     0x1401d31d6
0x1401d31a9: mov     edx,0x3
0x1401d31ae: mov     r9b,0x1
0x1401d31b1: jmp     0x1401d31d6
0x1401d31b3: mov     edx,0x4
0x1401d31b8: mov     r9b,0x1
0x1401d31bb: jmp     0x1401d31d6
0x1401d31bd: mov     edx,ebx
0x1401d31bf: mov     r9b,0x1
0x1401d31c2: jmp     0x1401d31d6
0x1401d31c4: mov     edx,0x6
0x1401d31c9: mov     r9b,0x1
0x1401d31cc: jmp     0x1401d31d6
0x1401d31ce: mov     r9b,0x1
0x1401d31d1: mov     edx,0x7
0x1401d31d6: xor     r8d,r8d
0x1401d31d9: lea     rcx,[rip+0x2493590]        # 0x142666770
0x1401d31e0: call    0x1400bc6f0
0x1401d31e5: mov     rdx,r15
0x1401d31e8: mov     rcx,rdi
0x1401d31eb: call    0x1400707e0
0x1401d31f0: mov     rcx,QWORD PTR [rax]
0x1401d31f3: call    0x1400708f0
0x1401d31f8: test    eax,eax
0x1401d31fa: jle     0x1401d2f85
0x1401d3200: xor     ebx,ebx
0x1401d3202: mov     r14d,eax
0x1401d3205: mov     rdx,r15
0x1401d3208: mov     rcx,rdi
0x1401d320b: call    0x1400707e0
0x1401d3210: mov     rdx,rbx
0x1401d3213: mov     rcx,QWORD PTR [rax]
0x1401d3216: call    0x1400fcb70
0x1401d321b: mov     r8b,0x1
0x1401d321e: lea     rcx,[rip+0x249354b]        # 0x142666770
0x1401d3225: cmp     BYTE PTR [rax],0x20
0x1401d3228: mov     dl,0x20
0x1401d322a: je      0x1401d322e
0x1401d322c: mov     dl,0xfe
0x1401d322e: call    0x1400bc750
0x1401d3233: inc     rbx
0x1401d3236: sub     r14,0x1
0x1401d323a: jne     0x1401d3205
0x1401d323c: jmp     0x1401d2f7c
0x1401d3241: add     rcx,0x83a0
0x1401d3248: movsxd  rbx,esi
0x1401d324b: mov     rdx,rbx
0x1401d324e: call    0x140070920
0x1401d3253: movsxd  rcx,DWORD PTR [rax]
0x1401d3256: cmp     ecx,0xf
0x1401d3259: ja      0x1401d32f0
0x1401d325f: lea     rdx,[rip+0xffffffffffe2cd9a]        # 0x140000000
0x1401d3266: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d677c]
0x1401d326d: add     rcx,rdx
0x1401d3270: jmp     rcx
0x1401d3272: xor     edx,edx
0x1401d3274: xor     r9d,r9d
0x1401d3277: jmp     0x1401d32f8
0x1401d3279: mov     edx,0x1
0x1401d327e: xor     r9d,r9d
0x1401d3281: jmp     0x1401d32f8
0x1401d3283: mov     edx,0x2
0x1401d3288: xor     r9d,r9d
0x1401d328b: jmp     0x1401d32f8
0x1401d328d: mov     edx,0x3
0x1401d3292: xor     r9d,r9d
0x1401d3295: jmp     0x1401d32f8
0x1401d3297: mov     edx,r15d
0x1401d329a: xor     r9d,r9d
0x1401d329d: jmp     0x1401d32f8
0x1401d329f: mov     edx,0x5
0x1401d32a4: xor     r9d,r9d
0x1401d32a7: jmp     0x1401d32f8
0x1401d32a9: xor     r9d,r9d
0x1401d32ac: jmp     0x1401d32f3
0x1401d32ae: xor     edx,edx
0x1401d32b0: mov     r9b,0x1
0x1401d32b3: jmp     0x1401d32f8
0x1401d32b5: mov     edx,0x1
0x1401d32ba: movzx   r9d,dl
0x1401d32be: jmp     0x1401d32f8
0x1401d32c0: mov     edx,0x2
0x1401d32c5: mov     r9b,0x1
0x1401d32c8: jmp     0x1401d32f8
0x1401d32ca: mov     edx,0x3
0x1401d32cf: mov     r9b,0x1
0x1401d32d2: jmp     0x1401d32f8
0x1401d32d4: mov     edx,r15d
0x1401d32d7: mov     r9b,0x1
0x1401d32da: jmp     0x1401d32f8
0x1401d32dc: mov     edx,0x5
0x1401d32e1: mov     r9b,0x1
0x1401d32e4: jmp     0x1401d32f8
0x1401d32e6: mov     edx,0x6
0x1401d32eb: mov     r9b,0x1
0x1401d32ee: jmp     0x1401d32f8
0x1401d32f0: mov     r9b,0x1
0x1401d32f3: mov     edx,0x7
0x1401d32f8: xor     r8d,r8d
0x1401d32fb: lea     rcx,[rip+0x249346e]        # 0x142666770
0x1401d3302: call    0x1400bc6f0
0x1401d3307: mov     rdx,rbx
0x1401d330a: mov     rcx,rdi
0x1401d330d: call    0x1400707e0
0x1401d3312: xor     r9d,r9d
0x1401d3315: xor     r8d,r8d
0x1401d3318: mov     rdx,QWORD PTR [rax]
0x1401d331b: lea     rcx,[rip+0x249344e]        # 0x142666770
0x1401d3322: call    0x140af0220
0x1401d3327: mov     ebx,0x5
0x1401d332c: jmp     0x1401d2f8b
0x1401d3331: mov     r13,QWORD PTR [rsp+0x78]
0x1401d3336: lea     rcx,[rbp+0x13b0]
0x1401d333d: call    0x1400693f0
0x1401d3342: jmp     0x1401c8d68
0x1401d3347: mov     rcx,QWORD PTR [rbx+0x83d8]
0x1401d334e: lea     r13d,[rsi+0x2]
0x1401d3352: mov     edx,DWORD PTR [rbp-0x60]
0x1401d3355: dec     edx
0x1401d3357: test    rcx,rcx
0x1401d335a: je      0x1401d382d
0x1401d3360: lea     ebx,[rdx-0x4]
0x1401d3363: mov     DWORD PTR [rsp+0x74],ebx
0x1401d3367: add     rcx,0x30
0x1401d336b: call    0x140070a10
0x1401d3370: mov     r15,rax
0x1401d3373: mov     QWORD PTR [rbp+0x18],rax
0x1401d3377: mov     rax,QWORD PTR [rsp+0x78]
0x1401d337c: mov     rcx,QWORD PTR [rax+0x83d8]
0x1401d3383: add     rcx,0xa8
0x1401d338a: call    0x140070930
0x1401d338f: lea     r14d,[rax+r15*1]
0x1401d3393: mov     DWORD PTR [rbp-0x60],r14d
0x1401d3397: cmp     r14d,ebx
0x1401d339a: cmovle  r12d,edi
0x1401d339e: mov     DWORD PTR [rbp-0x58],r12d
0x1401d33a2: xor     r8d,r8d
0x1401d33a5: mov     edx,0x3
0x1401d33aa: mov     r9b,0x1
0x1401d33ad: lea     rcx,[rip+0x24933bc]        # 0x142666770
0x1401d33b4: call    0x1400bc6f0
0x1401d33b9: lea     r8d,[rsi+0x2]
0x1401d33bd: mov     edx,0x1
0x1401d33c2: lea     rcx,[rip+0x24933a7]        # 0x142666770
0x1401d33c9: call    0x1400bc6e0
0x1401d33ce: mov     rax,QWORD PTR [rsp+0x78]
0x1401d33d3: mov     rdx,QWORD PTR [rax+0x83d8]
0x1401d33da: lea     rcx,[rbp+0x13d0]
0x1401d33e1: call    0x140070b90
0x1401d33e6: nop     
0x1401d33e7: sub     edi,esi
0x1401d33e9: lea     rcx,[rbp+0x13d0]
0x1401d33f0: call    0x1400708f0
0x1401d33f5: lea     ecx,[rdi-0x2]
0x1401d33f8: movsxd  rdx,ecx
0x1401d33fb: cmp     rax,rdx
0x1401d33fe: jb      0x1401d3462
0x1401d3400: lea     esi,[rdi-0x3]
0x1401d3403: test    esi,esi
0x1401d3405: js      0x1401d341d
0x1401d3407: movsxd  rdx,edi
0x1401d340a: sub     rdx,0x3
0x1401d340e: xor     r8d,r8d
0x1401d3411: lea     rcx,[rbp+0x13d0]
0x1401d3418: call    0x1400e27f0
0x1401d341d: cmp     esi,0x3
0x1401d3420: jle     0x1401d3462
0x1401d3422: movsxd  rdx,edi
0x1401d3425: sub     rdx,0x6
0x1401d3429: lea     rcx,[rbp+0x13d0]
0x1401d3430: call    0x1400fcb70
0x1401d3435: mov     BYTE PTR [rax],0x2e
0x1401d3438: lea     eax,[rdi-0x5]
0x1401d343b: movsxd  rdx,eax
0x1401d343e: lea     rcx,[rbp+0x13d0]
0x1401d3445: call    0x1400fcb70
0x1401d344a: mov     BYTE PTR [rax],0x2e
0x1401d344d: lea     eax,[rdi-0x4]
0x1401d3450: movsxd  rdx,eax
0x1401d3453: lea     rcx,[rbp+0x13d0]
0x1401d345a: call    0x1400fcb70
0x1401d345f: mov     BYTE PTR [rax],0x2e
0x1401d3462: xor     r9d,r9d
0x1401d3465: xor     r8d,r8d
0x1401d3468: lea     rdx,[rbp+0x13d0]
0x1401d346f: lea     rcx,[rip+0x24932fa]        # 0x142666770
0x1401d3476: call    0x140af0220
0x1401d347b: test    r14d,r14d
0x1401d347e: jle     0x1401d3817
0x1401d3484: mov     rdi,QWORD PTR [rsp+0x78]
0x1401d3489: mov     eax,DWORD PTR [rdi+0x83e0]
0x1401d348f: mov     ecx,r14d
0x1401d3492: sub     ecx,ebx
0x1401d3494: cmp     eax,ecx
0x1401d3496: cmovle  ecx,eax
0x1401d3499: xor     esi,esi
0x1401d349b: mov     r12d,esi
0x1401d349e: test    ecx,ecx
0x1401d34a0: cmovns  r12d,ecx
0x1401d34a4: lea     eax,[rbx+r12*1]
0x1401d34a8: mov     DWORD PTR [rbp-0x28],eax
0x1401d34ab: cmp     r12d,eax
0x1401d34ae: jge     0x1401d37a4
0x1401d34b4: mov     eax,r15d
0x1401d34b7: sub     eax,r12d
0x1401d34ba: add     eax,0x5
0x1401d34bd: mov     DWORD PTR [rbp-0x20],eax
0x1401d34c0: cmp     r12d,r14d
0x1401d34c3: jge     0x1401d37a0
0x1401d34c9: mov     ebx,r12d
0x1401d34cc: sub     ebx,r15d
0x1401d34cf: lea     edx,[rax+rbx*1]
0x1401d34d2: mov     r8d,r13d
0x1401d34d5: lea     rcx,[rip+0x2493294]        # 0x142666770
0x1401d34dc: call    0x1400bc6e0
0x1401d34e1: lea     rcx,[rbp+0xf50]
0x1401d34e8: call    0x140070c50
0x1401d34ed: nop     
0x1401d34ee: mov     rcx,QWORD PTR [rdi+0x83d8]
0x1401d34f5: cmp     r12d,r15d
0x1401d34f8: jge     0x1401d3671
0x1401d34fe: add     rcx,0x90
0x1401d3505: movsxd  r15,r12d
0x1401d3508: mov     rdx,r15
0x1401d350b: call    0x140070920
0x1401d3510: lea     rdx,[rbp+0xf50]
0x1401d3517: mov     ecx,DWORD PTR [rax]
0x1401d3519: call    0x140545040
0x1401d351e: lea     rcx,[rbp+0xf50]
0x1401d3525: call    0x140544330
0x1401d352a: lea     rdx,[rip+0x142b43b]        # 0x1415fe96c ; literal=' '
0x1401d3531: lea     rcx,[rbp+0xf50]
0x1401d3538: call    0x140070b20
0x1401d353d: lea     rcx,[rbp+0x1610]
0x1401d3544: call    0x140070c50
0x1401d3549: nop     
0x1401d354a: mov     rcx,QWORD PTR [rdi+0x83d8]
0x1401d3551: add     rcx,0x90
0x1401d3558: mov     rdx,r15
0x1401d355b: call    0x140070920
0x1401d3560: mov     r14d,esi
0x1401d3563: cmp     DWORD PTR [rax],0x1
0x1401d3566: setle   r14b
0x1401d356a: mov     rcx,QWORD PTR [rdi+0x83d8]
0x1401d3571: add     rcx,0x78
0x1401d3575: mov     rdx,r15
0x1401d3578: call    0x140070920
0x1401d357d: mov     esi,DWORD PTR [rax]
0x1401d357f: mov     rcx,QWORD PTR [rdi+0x83d8]
0x1401d3586: add     rcx,0x60
0x1401d358a: mov     rdx,r15
0x1401d358d: call    0x140070a00
0x1401d3592: movzx   edi,WORD PTR [rax]
0x1401d3595: mov     rax,QWORD PTR [rsp+0x78]
0x1401d359a: mov     rcx,QWORD PTR [rax+0x83d8]
0x1401d35a1: add     rcx,0x48
0x1401d35a5: mov     rdx,r15
0x1401d35a8: call    0x140070a00
0x1401d35ad: movzx   ebx,WORD PTR [rax]
0x1401d35b0: mov     rax,QWORD PTR [rsp+0x78]
0x1401d35b5: mov     rcx,QWORD PTR [rax+0x83d8]
0x1401d35bc: add     rcx,0x30
0x1401d35c0: mov     rdx,r15
0x1401d35c3: call    0x140070a00
0x1401d35c8: xor     ecx,ecx
0x1401d35ca: mov     DWORD PTR [rsp+0x68],ecx
0x1401d35ce: mov     DWORD PTR [rsp+0x60],ecx
0x1401d35d2: mov     BYTE PTR [rsp+0x58],0x1
0x1401d35d7: mov     DWORD PTR [rsp+0x50],0xffffffff
0x1401d35df: mov     DWORD PTR [rsp+0x48],0xffffffff
0x1401d35e7: mov     QWORD PTR [rsp+0x40],rcx
0x1401d35ec: mov     BYTE PTR [rsp+0x38],cl
0x1401d35f0: mov     DWORD PTR [rsp+0x30],ecx
0x1401d35f4: mov     DWORD PTR [rsp+0x28],r14d
0x1401d35f9: mov     DWORD PTR [rsp+0x20],esi
0x1401d35fd: movzx   r9d,di
0x1401d3601: movzx   r8d,bx
0x1401d3605: movzx   edx,WORD PTR [rax]
0x1401d3608: lea     rcx,[rbp+0x1610]
0x1401d360f: call    0x140a99510
0x1401d3614: lea     rdx,[rbp+0x1610]
0x1401d361b: lea     rcx,[rbp+0xf50]
0x1401d3622: call    0x1400bb2d0
0x1401d3627: xor     r8d,r8d
0x1401d362a: mov     edx,0x6
0x1401d362f: mov     r9b,0x1
0x1401d3632: lea     rcx,[rip+0x2493137]        # 0x142666770
0x1401d3639: call    0x1400bc6f0
0x1401d363e: xor     r9d,r9d
0x1401d3641: xor     r8d,r8d
0x1401d3644: lea     rdx,[rbp+0xf50]
0x1401d364b: lea     rcx,[rip+0x249311e]        # 0x142666770
0x1401d3652: call    0x140af0220
0x1401d3657: nop     
0x1401d3658: lea     rcx,[rbp+0x1610]
0x1401d365f: call    0x1400693f0
0x1401d3664: mov     r14d,DWORD PTR [rbp-0x60]
0x1401d3668: mov     r15,QWORD PTR [rbp+0x18]
0x1401d366c: jmp     0x1401d377a
0x1401d3671: add     rcx,0xd8
0x1401d3678: movsxd  rsi,ebx
0x1401d367b: mov     rdx,rsi
0x1401d367e: call    0x140070920
0x1401d3683: lea     rdx,[rbp+0xf50]
0x1401d368a: mov     ecx,DWORD PTR [rax]
0x1401d368c: call    0x140545040
0x1401d3691: lea     rcx,[rbp+0xf50]
0x1401d3698: call    0x140544330
0x1401d369d: lea     rdx,[rip+0x142b2c8]        # 0x1415fe96c ; literal=' '
0x1401d36a4: lea     rcx,[rbp+0xf50]
0x1401d36ab: call    0x140070b20
0x1401d36b0: lea     rcx,[rbp+0x1630]
0x1401d36b7: call    0x140070c50
0x1401d36bc: nop     
0x1401d36bd: mov     rcx,QWORD PTR [rdi+0x83d8]
0x1401d36c4: add     rcx,0xc0
0x1401d36cb: mov     rdx,rsi
0x1401d36ce: call    0x140070920
0x1401d36d3: movzx   edi,WORD PTR [rax]
0x1401d36d6: mov     rax,QWORD PTR [rsp+0x78]
0x1401d36db: mov     rcx,QWORD PTR [rax+0x83d8]
0x1401d36e2: add     rcx,0xd8
0x1401d36e9: mov     rdx,rsi
0x1401d36ec: call    0x140070920
0x1401d36f1: cmp     DWORD PTR [rax],0x1
0x1401d36f4: setne   bl
0x1401d36f7: mov     rax,QWORD PTR [rsp+0x78]
0x1401d36fc: mov     rcx,QWORD PTR [rax+0x83d8]
0x1401d3703: add     rcx,0xa8
0x1401d370a: mov     rdx,rsi
0x1401d370d: call    0x140070920
0x1401d3712: movzx   r9d,di
0x1401d3716: movzx   r8d,bl
0x1401d371a: lea     rdx,[rbp+0x1630]
0x1401d3721: movzx   ecx,WORD PTR [rax]
0x1401d3724: call    0x140aba4d0
0x1401d3729: lea     rdx,[rbp+0x1630]
0x1401d3730: lea     rcx,[rbp+0xf50]
0x1401d3737: call    0x1400bb2d0
0x1401d373c: xor     r8d,r8d
0x1401d373f: mov     edx,0x2
0x1401d3744: mov     r9b,0x1
0x1401d3747: lea     rcx,[rip+0x2493022]        # 0x142666770
0x1401d374e: call    0x1400bc6f0
0x1401d3753: xor     r9d,r9d
0x1401d3756: xor     r8d,r8d
0x1401d3759: lea     rdx,[rbp+0xf50]
0x1401d3760: lea     rcx,[rip+0x2493009]        # 0x142666770
0x1401d3767: call    0x140af0220
0x1401d376c: nop     
0x1401d376d: lea     rcx,[rbp+0x1630]
0x1401d3774: call    0x1400693f0
0x1401d3779: nop     
0x1401d377a: lea     rcx,[rbp+0xf50]
0x1401d3781: call    0x1400693f0
0x1401d3786: inc     r12d
0x1401d3789: cmp     r12d,DWORD PTR [rbp-0x28]
0x1401d378d: mov     eax,DWORD PTR [rbp-0x20]
0x1401d3790: mov     rdi,QWORD PTR [rsp+0x78]
0x1401d3795: mov     esi,0x0
0x1401d379a: jl      0x1401d34c0
0x1401d37a0: mov     ebx,DWORD PTR [rsp+0x74]
0x1401d37a4: cmp     r14d,ebx
0x1401d37a7: jle     0x1401d3817
0x1401d37a9: add     ebx,0x3
0x1401d37ac: lea     rcx,[rbp+0x2b0]
0x1401d37b3: call    0x1400bc920
0x1401d37b8: lea     r9d,[r14-0x1]
0x1401d37bc: mov     DWORD PTR [rsp+0x30],ebx
0x1401d37c0: mov     DWORD PTR [rsp+0x28],0x6
0x1401d37c8: mov     eax,DWORD PTR [rsp+0x74]
0x1401d37cc: mov     DWORD PTR [rsp+0x20],eax
0x1401d37d0: xor     r8d,r8d
0x1401d37d3: mov     r13,QWORD PTR [rsp+0x78]
0x1401d37d8: mov     edx,DWORD PTR [r13+0x83e0]
0x1401d37df: lea     rcx,[rbp+0x2b0]
0x1401d37e6: call    0x1400bc940
0x1401d37eb: mov     r9d,DWORD PTR [rbp-0x58]
0x1401d37ef: dec     r9d
0x1401d37f2: mov     DWORD PTR [rsp+0x28],esi
0x1401d37f6: movzx   eax,BYTE PTR [r13+0x83e4]
0x1401d37fe: mov     BYTE PTR [rsp+0x20],al
0x1401d3802: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d3806: mov     edx,DWORD PTR [rbp-0x38]
0x1401d3809: lea     rcx,[rbp+0x2b0]
0x1401d3810: call    0x141423200
0x1401d3815: jmp     0x1401d381c
0x1401d3817: mov     r13,QWORD PTR [rsp+0x78]
0x1401d381c: lea     rcx,[rbp+0x13d0]
0x1401d3823: call    0x1400693f0
0x1401d3828: jmp     0x1401c8d68
0x1401d382d: mov     eax,0x55555556
0x1401d3832: imul    edx
0x1401d3834: mov     r15d,edx
0x1401d3837: shr     r15d,0x1f
0x1401d383b: add     r15d,edx
0x1401d383e: mov     DWORD PTR [rbp-0x28],r15d
0x1401d3842: lea     rcx,[rbx+0x8348]
0x1401d3849: call    0x140070930
0x1401d384e: mov     r14,rax
0x1401d3851: lea     rcx,[rbx+0x8330]
0x1401d3858: call    0x140070930
0x1401d385d: add     r14d,eax
0x1401d3860: mov     QWORD PTR [rbp+0x18],r14
0x1401d3864: cmp     r14d,r15d
0x1401d3867: cmovle  r12d,edi
0x1401d386b: sub     r12d,0x2
0x1401d386f: mov     DWORD PTR [rbp-0x58],r12d
0x1401d3873: test    r14d,r14d
0x1401d3876: jle     0x1401d3be1
0x1401d387c: mov     DWORD PTR [rbp-0x48],0x1
0x1401d3883: mov     eax,DWORD PTR [rbx+0x8360]
0x1401d3889: mov     ecx,r14d
0x1401d388c: sub     ecx,r15d
0x1401d388f: cmp     eax,ecx
0x1401d3891: cmovle  ecx,eax
0x1401d3894: xor     edx,edx
0x1401d3896: mov     edi,edx
0x1401d3898: test    ecx,ecx
0x1401d389a: cmovns  edi,ecx
0x1401d389d: mov     DWORD PTR [rsp+0x74],edi
0x1401d38a1: lea     eax,[r15+rdi*1]
0x1401d38a5: mov     DWORD PTR [rbp-0x60],eax
0x1401d38a8: cmp     edi,eax
0x1401d38aa: jge     0x1401d3b60
0x1401d38b0: lea     r15,[rbx+0x8348]
0x1401d38b7: mov     QWORD PTR [rbp+0x30],r15
0x1401d38bb: lea     rsi,[rbx+0x8330]
0x1401d38c2: mov     QWORD PTR [rbp+0x48],rsi
0x1401d38c6: cmp     edi,r14d
0x1401d38c9: jge     0x1401d3b5c
0x1401d38cf: mov     QWORD PTR [rbp-0x30],rdx
0x1401d38d3: mov     QWORD PTR [rbp-0x78],rdx
0x1401d38d7: mov     rcx,rsi
0x1401d38da: call    0x140070930
0x1401d38df: mov     rcx,rsi
0x1401d38e2: cmp     edi,eax
0x1401d38e4: jge     0x1401d3906
0x1401d38e6: movsxd  rdx,edi
0x1401d38e9: call    0x140070920
0x1401d38ee: movsxd  rdx,DWORD PTR [rax]
0x1401d38f1: lea     rcx,[rip+0x232c390]        # 0x1424ffc88
0x1401d38f8: call    0x1400707e0
0x1401d38fd: mov     rax,QWORD PTR [rax]
0x1401d3900: mov     QWORD PTR [rbp-0x30],rax
0x1401d3904: jmp     0x1401d394c
0x1401d3906: call    0x140070930
0x1401d390b: mov     ecx,edi
0x1401d390d: sub     ecx,eax
0x1401d390f: movsxd  rbx,ecx
0x1401d3912: mov     rcx,r15
0x1401d3915: call    0x140070930
0x1401d391a: cmp     rbx,rax
0x1401d391d: jae     0x1401d394c
0x1401d391f: mov     rcx,rsi
0x1401d3922: call    0x140070930
0x1401d3927: mov     ecx,edi
0x1401d3929: sub     ecx,eax
0x1401d392b: movsxd  rdx,ecx
0x1401d392e: mov     rcx,r15
0x1401d3931: call    0x140070920
0x1401d3936: movsxd  rdx,DWORD PTR [rax]
0x1401d3939: lea     rcx,[rip+0x232c360]        # 0x1424ffca0
0x1401d3940: call    0x1400707e0
0x1401d3945: mov     rcx,QWORD PTR [rax]
0x1401d3948: mov     QWORD PTR [rbp-0x78],rcx
0x1401d394c: xor     r8d,r8d
0x1401d394f: mov     edx,0x7
0x1401d3954: mov     r9b,0x1
0x1401d3957: lea     rcx,[rip+0x2492e12]        # 0x142666770
0x1401d395e: call    0x1400bc6f0
0x1401d3963: mov     esi,r13d
0x1401d3966: cmp     r13d,r12d
0x1401d3969: jg      0x1401d3a13
0x1401d396f: mov     eax,DWORD PTR [rbp-0x48]
0x1401d3972: lea     r15d,[rax+0x3]
0x1401d3976: movsxd  r14,r13d
0x1401d3979: nop     DWORD PTR [rax+0x0]
0x1401d3980: mov     edi,eax
0x1401d3982: cmp     eax,r15d
0x1401d3985: jge     0x1401d39f9
0x1401d3987: movsxd  r12,r12d
0x1401d398a: lea     rbx,[rip+0x249479f]        # 0x142668130
0x1401d3991: mov     r8d,esi
0x1401d3994: mov     edx,edi
0x1401d3996: lea     rcx,[rip+0x2492dd3]        # 0x142666770
0x1401d399d: call    0x1400bc6e0
0x1401d39a2: cmp     esi,r13d
0x1401d39a5: jne     0x1401d39ac
0x1401d39a7: mov     edx,DWORD PTR [rbx-0x18]
0x1401d39aa: jmp     0x1401d39b8
0x1401d39ac: cmp     r14,r12
0x1401d39af: jne     0x1401d39b5
0x1401d39b1: mov     edx,DWORD PTR [rbx]
0x1401d39b3: jmp     0x1401d39b8
0x1401d39b5: mov     edx,DWORD PTR [rbx-0xc]
0x1401d39b8: lea     rcx,[rip+0x2492db1]        # 0x142666770
0x1401d39bf: call    0x140af1390
0x1401d39c4: xor     edx,edx
0x1401d39c6: lea     rcx,[rip+0x2216123]        # 0x1423e9af0
0x1401d39cd: call    0x140073550
0x1401d39d2: test    al,al
0x1401d39d4: je      0x1401d39e7
0x1401d39d6: mov     r8b,0x1
0x1401d39d9: xor     edx,edx
0x1401d39db: lea     rcx,[rip+0x2492d8e]        # 0x142666770
0x1401d39e2: call    0x1400bc750
0x1401d39e7: inc     edi
0x1401d39e9: add     rbx,0x4
0x1401d39ed: cmp     edi,r15d
0x1401d39f0: jl      0x1401d3991
0x1401d39f2: mov     r12d,DWORD PTR [rbp-0x58]
0x1401d39f6: mov     eax,DWORD PTR [rbp-0x48]
0x1401d39f9: inc     esi
0x1401d39fb: inc     r14
0x1401d39fe: cmp     esi,r12d
0x1401d3a01: jle     0x1401d3980
0x1401d3a07: mov     edi,DWORD PTR [rsp+0x74]
0x1401d3a0b: mov     r14,QWORD PTR [rbp+0x18]
0x1401d3a0f: mov     r15,QWORD PTR [rbp+0x30]
0x1401d3a13: mov     esi,DWORD PTR [rbp-0x48]
0x1401d3a16: lea     edx,[rsi+0x1]
0x1401d3a19: mov     r8d,r13d
0x1401d3a1c: lea     rcx,[rip+0x2492d4d]        # 0x142666770
0x1401d3a23: call    0x1400bc6e0
0x1401d3a28: lea     rcx,[rbp+0x13f0]
0x1401d3a2f: call    0x140070c50
0x1401d3a34: nop     
0x1401d3a35: mov     rbx,QWORD PTR [rbp-0x30]
0x1401d3a39: test    rbx,rbx
0x1401d3a3c: je      0x1401d3a6f
0x1401d3a3e: xor     r8d,r8d
0x1401d3a41: mov     edx,0x6
0x1401d3a46: lea     rcx,[rip+0x2492d23]        # 0x142666770
0x1401d3a4d: test    BYTE PTR [rbx+0x48],0x1
0x1401d3a51: je      0x1401d3a61
0x1401d3a53: xor     r9d,r9d
0x1401d3a56: call    0x1400bc6f0
0x1401d3a5b: lea     rdx,[rbx+0x28]
0x1401d3a5f: jmp     0x1401d3a9d
0x1401d3a61: mov     r9b,0x1
0x1401d3a64: call    0x1400bc6f0
0x1401d3a69: lea     rdx,[rbx+0x28]
0x1401d3a6d: jmp     0x1401d3a9d
0x1401d3a6f: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d3a73: test    rbx,rbx
0x1401d3a76: je      0x1401d3ab7
0x1401d3a78: xor     r8d,r8d
0x1401d3a7b: mov     edx,0x6
0x1401d3a80: lea     rcx,[rip+0x2492ce9]        # 0x142666770
0x1401d3a87: test    BYTE PTR [rbx+0x20],0x1
0x1401d3a8b: je      0x1401d3a92
0x1401d3a8d: xor     r9d,r9d
0x1401d3a90: jmp     0x1401d3a95
0x1401d3a92: mov     r9b,0x1
0x1401d3a95: call    0x1400bc6f0
0x1401d3a9a: mov     rdx,rbx
0x1401d3a9d: mov     r9d,DWORD PTR [rip+0x2216060]        # 0x1423e9b04
0x1401d3aa4: add     r9d,0xfffffffd
0x1401d3aa8: xor     r8d,r8d
0x1401d3aab: lea     rcx,[rip+0x2492cbe]        # 0x142666770
0x1401d3ab2: call    0x140af0220
0x1401d3ab7: lea     rcx,[rbp+0x13f0]
0x1401d3abe: call    0x1400708f0
0x1401d3ac3: cmp     rax,0x34
0x1401d3ac7: jb      0x1401d3b19
0x1401d3ac9: xor     r8d,r8d
0x1401d3acc: mov     edx,0x33
0x1401d3ad1: lea     rcx,[rbp+0x13f0]
0x1401d3ad8: call    0x1400e27f0
0x1401d3add: mov     edx,0x30
0x1401d3ae2: lea     rcx,[rbp+0x13f0]
0x1401d3ae9: call    0x1400fcb70
0x1401d3aee: mov     BYTE PTR [rax],0x2e
0x1401d3af1: mov     edx,0x31
0x1401d3af6: lea     rcx,[rbp+0x13f0]
0x1401d3afd: call    0x1400fcb70
0x1401d3b02: mov     BYTE PTR [rax],0x2e
0x1401d3b05: mov     edx,0x32
0x1401d3b0a: lea     rcx,[rbp+0x13f0]
0x1401d3b11: call    0x1400fcb70
0x1401d3b16: mov     BYTE PTR [rax],0x2e
0x1401d3b19: xor     r9d,r9d
0x1401d3b1c: xor     r8d,r8d
0x1401d3b1f: lea     rdx,[rbp+0x13f0]
0x1401d3b26: lea     rcx,[rip+0x2492c43]        # 0x142666770
0x1401d3b2d: call    0x140af0220
0x1401d3b32: add     esi,0x3
0x1401d3b35: mov     DWORD PTR [rbp-0x48],esi
0x1401d3b38: lea     rcx,[rbp+0x13f0]
0x1401d3b3f: call    0x1400693f0
0x1401d3b44: inc     edi
0x1401d3b46: mov     DWORD PTR [rsp+0x74],edi
0x1401d3b4a: cmp     edi,DWORD PTR [rbp-0x60]
0x1401d3b4d: mov     rsi,QWORD PTR [rbp+0x48]
0x1401d3b51: mov     edx,0x0
0x1401d3b56: jl      0x1401d38c6
0x1401d3b5c: mov     r15d,DWORD PTR [rbp-0x28]
0x1401d3b60: cmp     r14d,r15d
0x1401d3b63: jle     0x1401c8d63
0x1401d3b69: lea     ebx,[r15*2-0x1]
0x1401d3b71: add     ebx,r15d
0x1401d3b74: lea     rcx,[rbp+0x290]
0x1401d3b7b: call    0x1400bc920
0x1401d3b80: lea     r9d,[r14-0x1]
0x1401d3b84: mov     DWORD PTR [rsp+0x30],ebx
0x1401d3b88: mov     DWORD PTR [rsp+0x28],0x2
0x1401d3b90: mov     DWORD PTR [rsp+0x20],r15d
0x1401d3b95: xor     r8d,r8d
0x1401d3b98: mov     r13,QWORD PTR [rsp+0x78]
0x1401d3b9d: mov     edx,DWORD PTR [r13+0x8360]
0x1401d3ba4: lea     rcx,[rbp+0x290]
0x1401d3bab: call    0x1400bc940
0x1401d3bb0: lea     r9d,[r12+0x1]
0x1401d3bb5: mov     DWORD PTR [rsp+0x28],0x0
0x1401d3bbd: movzx   eax,BYTE PTR [r13+0x8364]
0x1401d3bc5: mov     BYTE PTR [rsp+0x20],al
0x1401d3bc9: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d3bcd: mov     edx,DWORD PTR [rbp-0x38]
0x1401d3bd0: lea     rcx,[rbp+0x290]
0x1401d3bd7: call    0x141423200
0x1401d3bdc: jmp     0x1401c8d68
0x1401d3be1: xor     r8d,r8d
0x1401d3be4: mov     edx,0x6
0x1401d3be9: mov     r9b,0x1
0x1401d3bec: lea     rcx,[rip+0x2492b7d]        # 0x142666770
0x1401d3bf3: call    0x1400bc6f0
0x1401d3bf8: lea     r8d,[rsi+0x2]
0x1401d3bfc: mov     edx,0x1
0x1401d3c01: lea     rcx,[rip+0x2492b68]        # 0x142666770
0x1401d3c08: call    0x1400bc6e0
0x1401d3c0d: lea     rdx,[rip+0x1447684]        # 0x14161b298 ; literal='No reports available'
0x1401d3c14: lea     rcx,[rbp+0x3490]
0x1401d3c1b: call    0x140069710
0x1401d3c20: nop     
0x1401d3c21: xor     r9d,r9d
0x1401d3c24: xor     r8d,r8d
0x1401d3c27: lea     rdx,[rbp+0x3490]
0x1401d3c2e: lea     rcx,[rip+0x2492b3b]        # 0x142666770
0x1401d3c35: call    0x140af0220
0x1401d3c3a: nop     
0x1401d3c3b: lea     rcx,[rbp+0x3490]
0x1401d3c42: jmp     0x1401c8d5e
0x1401d3c47: mov     ebx,DWORD PTR [rbp-0x18]
0x1401d3c4a: mov     DWORD PTR [rbp-0x60],ebx
0x1401d3c4d: lea     r15d,[rbx-0x39]
0x1401d3c51: mov     DWORD PTR [rbp-0x10],r15d
0x1401d3c55: mov     r12d,0x14
0x1401d3c5b: mov     eax,DWORD PTR [rip+0x2215ea7]        # 0x1423e9b08
0x1401d3c61: cmp     eax,0x2e
0x1401d3c64: jle     0x1401d3c7d
0x1401d3c66: lea     r12d,[rax-0x1a]
0x1401d3c6a: cmp     r12d,0x1e
0x1401d3c6e: jle     0x1401d3c7d
0x1401d3c70: mov     r12d,0x1e
0x1401d3c76: mov     edi,ebx
0x1401d3c78: mov     r14d,esi
0x1401d3c7b: jmp     0x1401d3c90
0x1401d3c7d: mov     edi,ebx
0x1401d3c7f: mov     r14d,esi
0x1401d3c82: test    r12d,r12d
0x1401d3c85: js      0x1401d3d62
0x1401d3c8b: nop     DWORD PTR [rax+rax*1+0x0]
0x1401d3c90: mov     ebx,r15d
0x1401d3c93: cmp     r15d,edi
0x1401d3c96: jg      0x1401d3d50
0x1401d3c9c: movsxd  r13,r12d
0x1401d3c9f: nop     
0x1401d3ca0: mov     r8d,ebx
0x1401d3ca3: mov     edx,r14d
0x1401d3ca6: lea     rcx,[rip+0x2492ac3]        # 0x142666770
0x1401d3cad: call    0x1400bc6e0
0x1401d3cb2: xor     r8d,r8d
0x1401d3cb5: xor     edx,edx
0x1401d3cb7: lea     rcx,[rip+0x2492ab2]        # 0x142666770
0x1401d3cbe: call    0x1400bc750
0x1401d3cc3: test    rsi,rsi
0x1401d3cc6: jne     0x1401d3cf0
0x1401d3cc8: cmp     ebx,r15d
0x1401d3ccb: jne     0x1401d3cd5
0x1401d3ccd: mov     edx,DWORD PTR [rip+0x24943c1]        # 0x142668094
0x1401d3cd3: jmp     0x1401d3d3a
0x1401d3cd5: lea     rcx,[rip+0x2492a94]        # 0x142666770
0x1401d3cdc: cmp     ebx,edi
0x1401d3cde: jne     0x1401d3ce8
0x1401d3ce0: mov     edx,DWORD PTR [rip+0x24943c6]        # 0x1426680ac
0x1401d3ce6: jmp     0x1401d3d41
0x1401d3ce8: mov     edx,DWORD PTR [rip+0x24943b2]        # 0x1426680a0
0x1401d3cee: jmp     0x1401d3d41
0x1401d3cf0: cmp     rsi,r13
0x1401d3cf3: jne     0x1401d3d1d
0x1401d3cf5: cmp     ebx,r15d
0x1401d3cf8: jne     0x1401d3d02
0x1401d3cfa: mov     edx,DWORD PTR [rip+0x249439c]        # 0x14266809c
0x1401d3d00: jmp     0x1401d3d3a
0x1401d3d02: lea     rcx,[rip+0x2492a67]        # 0x142666770
0x1401d3d09: cmp     ebx,edi
0x1401d3d0b: jne     0x1401d3d15
0x1401d3d0d: mov     edx,DWORD PTR [rip+0x24943a1]        # 0x1426680b4
0x1401d3d13: jmp     0x1401d3d41
0x1401d3d15: mov     edx,DWORD PTR [rip+0x249438d]        # 0x1426680a8
0x1401d3d1b: jmp     0x1401d3d41
0x1401d3d1d: cmp     ebx,r15d
0x1401d3d20: jne     0x1401d3d2a
0x1401d3d22: mov     edx,DWORD PTR [rip+0x2494370]        # 0x142668098
0x1401d3d28: jmp     0x1401d3d3a
0x1401d3d2a: cmp     ebx,edi
0x1401d3d2c: mov     edx,DWORD PTR [rip+0x249437e]        # 0x1426680b0
0x1401d3d32: je      0x1401d3d3a
0x1401d3d34: mov     edx,DWORD PTR [rip+0x249436a]        # 0x1426680a4
0x1401d3d3a: lea     rcx,[rip+0x2492a2f]        # 0x142666770
0x1401d3d41: call    0x140af1390
0x1401d3d46: inc     ebx
0x1401d3d48: cmp     ebx,edi
0x1401d3d4a: jle     0x1401d3ca0
0x1401d3d50: inc     r14d
0x1401d3d53: inc     rsi
0x1401d3d56: cmp     r14d,r12d
0x1401d3d59: jle     0x1401d3c90
0x1401d3d5f: mov     ebx,DWORD PTR [rbp-0x60]
0x1401d3d62: lea     r14d,[r15+0x2]
0x1401d3d66: lea     r13d,[rbx-0x2]
0x1401d3d6a: mov     DWORD PTR [rsp+0x74],r13d
0x1401d3d6f: lea     ecx,[r12-0x1]
0x1401d3d74: mov     eax,0x55555556
0x1401d3d79: imul    ecx
0x1401d3d7b: mov     edi,edx
0x1401d3d7d: shr     edi,0x1f
0x1401d3d80: add     edi,edx
0x1401d3d82: mov     DWORD PTR [rbp-0x58],edi
0x1401d3d85: mov     r12,QWORD PTR [rsp+0x78]
0x1401d3d8a: lea     rcx,[r12+0x83e8]
0x1401d3d92: call    0x140070410
0x1401d3d97: mov     rsi,rax
0x1401d3d9a: mov     QWORD PTR [rbp-0x30],rax
0x1401d3d9e: cmp     eax,edi
0x1401d3da0: jle     0x1401d3dab
0x1401d3da2: lea     r13d,[rbx-0x4]
0x1401d3da6: mov     DWORD PTR [rsp+0x74],r13d
0x1401d3dab: mov     QWORD PTR [rbp-0x20],0x0
0x1401d3db3: mov     ecx,DWORD PTR [r12+0x8400]
0x1401d3dbb: mov     edx,eax
0x1401d3dbd: sub     edx,edi
0x1401d3dbf: cmp     ecx,edx
0x1401d3dc1: cmovle  edx,ecx
0x1401d3dc4: xor     r12d,r12d
0x1401d3dc7: test    edx,edx
0x1401d3dc9: cmovns  r12d,edx
0x1401d3dcd: mov     DWORD PTR [rbp-0x68],r12d
0x1401d3dd1: lea     eax,[rdi+r12*1]
0x1401d3dd5: mov     DWORD PTR [rbp-0x28],eax
0x1401d3dd8: cmp     r12d,eax
0x1401d3ddb: mov     eax,DWORD PTR [rbp+0x20]
0x1401d3dde: mov     DWORD PTR [rsp+0x70],eax
0x1401d3de2: jge     0x1401d4402
0x1401d3de8: mov     rdi,QWORD PTR [rsp+0x78]
0x1401d3ded: lea     rcx,[rdi+0x83e8]
0x1401d3df4: mov     QWORD PTR [rbp+0x30],rcx
0x1401d3df8: mov     ebx,0x4
0x1401d3dfd: mov     QWORD PTR [rbp-0x78],rbx
0x1401d3e01: cmp     r12d,esi
0x1401d3e04: jge     0x1401d43fb
0x1401d3e0a: movsxd  rdx,r12d
0x1401d3e0d: call    0x1400707e0
0x1401d3e12: mov     r15,QWORD PTR [rax]
0x1401d3e15: mov     QWORD PTR [rbp+0x18],r15
0x1401d3e19: cmp     BYTE PTR [rip+0x21d8b35],0x0        # 0x1423ac955
0x1401d3e20: je      0x1401d3e77
0x1401d3e22: mov     eax,DWORD PTR [rbp-0x38]
0x1401d3e25: cmp     eax,r14d
0x1401d3e28: jl      0x1401d3e77
0x1401d3e2a: cmp     eax,r13d
0x1401d3e2d: jg      0x1401d3e77
0x1401d3e2f: lea     eax,[rbx-0x3]
0x1401d3e32: mov     ecx,DWORD PTR [rbp-0x3c]
0x1401d3e35: cmp     ecx,eax
0x1401d3e37: jl      0x1401d3e77
0x1401d3e39: lea     eax,[rbx-0x1]
0x1401d3e3c: cmp     ecx,eax
0x1401d3e3e: jg      0x1401d3e77
0x1401d3e40: cmp     QWORD PTR [rdi+0x8408],r15
0x1401d3e47: je      0x1401d3e6c
0x1401d3e49: mov     QWORD PTR [rdi+0x8408],r15
0x1401d3e50: mov     rdx,r15
0x1401d3e53: mov     rcx,rdi
0x1401d3e56: call    0x1401dcbe0
0x1401d3e5b: mov     edx,0x2
0x1401d3e60: lea     rcx,[rip+0x2492909]        # 0x142666770
0x1401d3e67: call    0x140afe4c0
0x1401d3e6c: mov     QWORD PTR [rbp-0x20],r15
0x1401d3e70: lea     eax,[rbx-0x4]
0x1401d3e73: mov     DWORD PTR [rsp+0x70],eax
0x1401d3e77: xor     r8d,r8d
0x1401d3e7a: mov     edx,0x7
0x1401d3e7f: mov     r9b,0x1
0x1401d3e82: lea     rcx,[rip+0x24928e7]        # 0x142666770
0x1401d3e89: call    0x1400bc6f0
0x1401d3e8e: mov     esi,r14d
0x1401d3e91: cmp     r14d,r13d
0x1401d3e94: jg      0x1401d3f43
0x1401d3e9a: movsxd  r15,r14d
0x1401d3e9d: lea     eax,[rbx-0x3]
0x1401d3ea0: mov     DWORD PTR [rbp-0x60],eax
0x1401d3ea3: mov     edi,eax
0x1401d3ea5: cmp     eax,ebx
0x1401d3ea7: jge     0x1401d3f2d
0x1401d3ead: movsxd  r12,r13d
0x1401d3eb0: lea     rbx,[rip+0x2494279]        # 0x142668130
0x1401d3eb7: mov     r13,QWORD PTR [rbp-0x78]
0x1401d3ebb: nop     DWORD PTR [rax+rax*1+0x0]
0x1401d3ec0: mov     r8d,esi
0x1401d3ec3: mov     edx,edi
0x1401d3ec5: lea     rcx,[rip+0x24928a4]        # 0x142666770
0x1401d3ecc: call    0x1400bc6e0
0x1401d3ed1: cmp     esi,r14d
0x1401d3ed4: jne     0x1401d3edb
0x1401d3ed6: mov     edx,DWORD PTR [rbx-0x18]
0x1401d3ed9: jmp     0x1401d3ee7
0x1401d3edb: cmp     r15,r12
0x1401d3ede: jne     0x1401d3ee4
0x1401d3ee0: mov     edx,DWORD PTR [rbx]
0x1401d3ee2: jmp     0x1401d3ee7
0x1401d3ee4: mov     edx,DWORD PTR [rbx-0xc]
0x1401d3ee7: lea     rcx,[rip+0x2492882]        # 0x142666770
0x1401d3eee: call    0x140af1390
0x1401d3ef3: xor     edx,edx
0x1401d3ef5: lea     rcx,[rip+0x2215bf4]        # 0x1423e9af0
0x1401d3efc: call    0x140073550
0x1401d3f01: test    al,al
0x1401d3f03: je      0x1401d3f16
0x1401d3f05: mov     r8b,0x1
0x1401d3f08: xor     edx,edx
0x1401d3f0a: lea     rcx,[rip+0x249285f]        # 0x142666770
0x1401d3f11: call    0x1400bc750
0x1401d3f16: inc     edi
0x1401d3f18: add     rbx,0x4
0x1401d3f1c: cmp     edi,r13d
0x1401d3f1f: jl      0x1401d3ec0
0x1401d3f21: mov     r13d,DWORD PTR [rsp+0x74]
0x1401d3f26: mov     eax,DWORD PTR [rbp-0x60]
0x1401d3f29: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d3f2d: inc     esi
0x1401d3f2f: inc     r15
0x1401d3f32: cmp     esi,r13d
0x1401d3f35: jle     0x1401d3ea3
0x1401d3f3b: mov     r15,QWORD PTR [rbp+0x18]
0x1401d3f3f: mov     r12d,DWORD PTR [rbp-0x68]
0x1401d3f43: xor     r8d,r8d
0x1401d3f46: mov     edx,0x3
0x1401d3f4b: mov     r9b,0x1
0x1401d3f4e: lea     rcx,[rip+0x249281b]        # 0x142666770
0x1401d3f55: call    0x1400bc6f0
0x1401d3f5a: lea     edx,[rbx-0x2]
0x1401d3f5d: mov     r8d,r14d
0x1401d3f60: lea     rcx,[rip+0x2492809]        # 0x142666770
0x1401d3f67: call    0x1400bc6e0
0x1401d3f6c: lea     rcx,[rbp+0x12f0]
0x1401d3f73: call    0x140070c50
0x1401d3f78: nop     
0x1401d3f79: lea     rcx,[rbp+0x400]
0x1401d3f80: call    0x140073640
0x1401d3f85: mov     WORD PTR [rsp+0x28],0x2
0x1401d3f8c: mov     WORD PTR [rsp+0x20],0x1
0x1401d3f93: lea     r9,[rbp+0x400]
0x1401d3f9a: mov     r8d,DWORD PTR [r15+0xe0]
0x1401d3fa1: lea     rdx,[rbp+0x12f0]
0x1401d3fa8: lea     rcx,[rip+0x2342089]        # 0x142516038
0x1401d3faf: call    0x140ba79f0
0x1401d3fb4: mov     ebx,r13d
0x1401d3fb7: sub     ebx,r14d
0x1401d3fba: lea     rcx,[rbp+0x12f0]
0x1401d3fc1: call    0x1400708f0
0x1401d3fc6: lea     ecx,[rbx-0x2]
0x1401d3fc9: movsxd  rdx,ecx
0x1401d3fcc: cmp     rax,rdx
0x1401d3fcf: jb      0x1401d4033
0x1401d3fd1: lea     edi,[rbx-0x3]
0x1401d3fd4: test    edi,edi
0x1401d3fd6: js      0x1401d3fee
0x1401d3fd8: movsxd  rdx,ebx
0x1401d3fdb: sub     rdx,0x3
0x1401d3fdf: xor     r8d,r8d
0x1401d3fe2: lea     rcx,[rbp+0x12f0]
0x1401d3fe9: call    0x1400e27f0
0x1401d3fee: cmp     edi,0x3
0x1401d3ff1: jle     0x1401d4033
0x1401d3ff3: movsxd  rdx,ebx
0x1401d3ff6: sub     rdx,0x6
0x1401d3ffa: lea     rcx,[rbp+0x12f0]
0x1401d4001: call    0x1400fcb70
0x1401d4006: mov     BYTE PTR [rax],0x2e
0x1401d4009: lea     eax,[rbx-0x5]
0x1401d400c: movsxd  rdx,eax
0x1401d400f: lea     rcx,[rbp+0x12f0]
0x1401d4016: call    0x1400fcb70
0x1401d401b: mov     BYTE PTR [rax],0x2e
0x1401d401e: lea     eax,[rbx-0x4]
0x1401d4021: movsxd  rdx,eax
0x1401d4024: lea     rcx,[rbp+0x12f0]
0x1401d402b: call    0x1400fcb70
0x1401d4030: mov     BYTE PTR [rax],0x2e
0x1401d4033: xor     r9d,r9d
0x1401d4036: xor     r8d,r8d
0x1401d4039: lea     rdx,[rbp+0x12f0]
0x1401d4040: lea     rcx,[rip+0x2492729]        # 0x142666770
0x1401d4047: call    0x140af0220
0x1401d404c: mov     rax,QWORD PTR [r15+0x130]
0x1401d4053: test    rax,rax
0x1401d4056: je      0x1401d43c6
0x1401d405c: cmp     QWORD PTR [rax+0x28],0x0
0x1401d4061: je      0x1401d43c6
0x1401d4067: lea     r8d,[r14+0x1]
0x1401d406b: mov     rdx,QWORD PTR [rbp-0x78]
0x1401d406f: dec     edx
0x1401d4071: lea     rcx,[rip+0x24926f8]        # 0x142666770
0x1401d4078: call    0x1400bc6e0
0x1401d407d: mov     rcx,QWORD PTR [r15+0x130]
0x1401d4084: mov     rax,QWORD PTR [rcx+0x28]
0x1401d4088: cmp     DWORD PTR [rax+0x4],0xffffffff
0x1401d408c: je      0x1401d4176
0x1401d4092: lea     rdx,[rip+0x1447217]        # 0x14161b2b0 ; literal='Last in '
0x1401d4099: lea     rcx,[rbp+0x1290]
0x1401d40a0: call    0x140069710
0x1401d40a5: nop     
0x1401d40a6: mov     rax,QWORD PTR [r15+0x130]
0x1401d40ad: mov     r8,QWORD PTR [rax+0x28]
0x1401d40b1: xor     r9d,r9d
0x1401d40b4: mov     r8d,DWORD PTR [r8+0x4]
0x1401d40b8: lea     rdx,[rbp+0x1290]
0x1401d40bf: lea     rcx,[rip+0x2341f72]        # 0x142516038
0x1401d40c6: call    0x140ba8410
0x1401d40cb: lea     rcx,[rbp+0x1290]
0x1401d40d2: call    0x1400708f0
0x1401d40d7: mov     ecx,r13d
0x1401d40da: sub     ecx,r14d
0x1401d40dd: sub     ecx,0x3
0x1401d40e0: movsxd  rcx,ecx
0x1401d40e3: cmp     rax,rcx
0x1401d40e6: jb      0x1401d4150
0x1401d40e8: mov     ebx,r13d
0x1401d40eb: sub     ebx,r14d
0x1401d40ee: lea     edi,[rbx-0x4]
0x1401d40f1: test    edi,edi
0x1401d40f3: js      0x1401d410b
0x1401d40f5: movsxd  rdx,ebx
0x1401d40f8: sub     rdx,0x4
0x1401d40fc: xor     r8d,r8d
0x1401d40ff: lea     rcx,[rbp+0x1290]
0x1401d4106: call    0x1400e27f0
0x1401d410b: cmp     edi,0x3
0x1401d410e: jle     0x1401d4150
0x1401d4110: movsxd  rdx,ebx
0x1401d4113: sub     rdx,0x7
0x1401d4117: lea     rcx,[rbp+0x1290]
0x1401d411e: call    0x1400fcb70
0x1401d4123: mov     BYTE PTR [rax],0x2e
0x1401d4126: lea     eax,[rbx-0x6]
0x1401d4129: movsxd  rdx,eax
0x1401d412c: lea     rcx,[rbp+0x1290]
0x1401d4133: call    0x1400fcb70
0x1401d4138: mov     BYTE PTR [rax],0x2e
0x1401d413b: lea     eax,[rbx-0x5]
0x1401d413e: movsxd  rdx,eax
0x1401d4141: lea     rcx,[rbp+0x1290]
0x1401d4148: call    0x1400fcb70
0x1401d414d: mov     BYTE PTR [rax],0x2e
0x1401d4150: xor     r9d,r9d
0x1401d4153: xor     r8d,r8d
0x1401d4156: lea     rdx,[rbp+0x1290]
0x1401d415d: lea     rcx,[rip+0x249260c]        # 0x142666770
0x1401d4164: call    0x140af0220
0x1401d4169: nop     
0x1401d416a: lea     rcx,[rbp+0x1290]
0x1401d4171: jmp     0x1401d43c1
0x1401d4176: cmp     DWORD PTR [rax+0x8],0xffffffff
0x1401d417a: je      0x1401d4264
0x1401d4180: lea     rdx,[rip+0x1447129]        # 0x14161b2b0 ; literal='Last in '
0x1401d4187: lea     rcx,[rbp+0x12b0]
0x1401d418e: call    0x140069710
0x1401d4193: nop     
0x1401d4194: mov     rax,QWORD PTR [r15+0x130]
0x1401d419b: mov     r8,QWORD PTR [rax+0x28]
0x1401d419f: xor     r9d,r9d
0x1401d41a2: mov     r8d,DWORD PTR [r8+0x8]
0x1401d41a6: lea     rdx,[rbp+0x12b0]
0x1401d41ad: lea     rcx,[rip+0x2341e84]        # 0x142516038
0x1401d41b4: call    0x140ba9520
0x1401d41b9: lea     rcx,[rbp+0x12b0]
0x1401d41c0: call    0x1400708f0
0x1401d41c5: mov     ecx,r13d
0x1401d41c8: sub     ecx,r14d
0x1401d41cb: sub     ecx,0x3
0x1401d41ce: movsxd  rcx,ecx
0x1401d41d1: cmp     rax,rcx
0x1401d41d4: jb      0x1401d423e
0x1401d41d6: mov     ebx,r13d
0x1401d41d9: sub     ebx,r14d
0x1401d41dc: lea     edi,[rbx-0x4]
0x1401d41df: test    edi,edi
0x1401d41e1: js      0x1401d41f9
0x1401d41e3: movsxd  rdx,ebx
0x1401d41e6: sub     rdx,0x4
0x1401d41ea: xor     r8d,r8d
0x1401d41ed: lea     rcx,[rbp+0x12b0]
0x1401d41f4: call    0x1400e27f0
0x1401d41f9: cmp     edi,0x3
0x1401d41fc: jle     0x1401d423e
0x1401d41fe: movsxd  rdx,ebx
0x1401d4201: sub     rdx,0x7
0x1401d4205: lea     rcx,[rbp+0x12b0]
0x1401d420c: call    0x1400fcb70
0x1401d4211: mov     BYTE PTR [rax],0x2e
0x1401d4214: lea     eax,[rbx-0x6]
0x1401d4217: movsxd  rdx,eax
0x1401d421a: lea     rcx,[rbp+0x12b0]
0x1401d4221: call    0x1400fcb70
0x1401d4226: mov     BYTE PTR [rax],0x2e
0x1401d4229: lea     eax,[rbx-0x5]
0x1401d422c: movsxd  rdx,eax
0x1401d422f: lea     rcx,[rbp+0x12b0]
0x1401d4236: call    0x1400fcb70
0x1401d423b: mov     BYTE PTR [rax],0x2e
0x1401d423e: xor     r9d,r9d
0x1401d4241: xor     r8d,r8d
0x1401d4244: lea     rdx,[rbp+0x12b0]
0x1401d424b: lea     rcx,[rip+0x249251e]        # 0x142666770
0x1401d4252: call    0x140af0220
0x1401d4257: nop     
0x1401d4258: lea     rcx,[rbp+0x12b0]
0x1401d425f: jmp     0x1401d43c1
0x1401d4264: cmp     DWORD PTR [rax+0xc],0xffffffff
0x1401d4268: je      0x1401d434f
0x1401d426e: lea     rdx,[rip+0x144703b]        # 0x14161b2b0 ; literal='Last in '
0x1401d4275: lea     rcx,[rbp+0x12d0]
0x1401d427c: call    0x140069710
0x1401d4281: nop     
0x1401d4282: mov     rax,QWORD PTR [r15+0x130]
0x1401d4289: mov     r8,QWORD PTR [rax+0x28]
0x1401d428d: xor     r9d,r9d
0x1401d4290: mov     r8d,DWORD PTR [r8+0xc]
0x1401d4294: lea     rdx,[rbp+0x12d0]
0x1401d429b: lea     rcx,[rip+0x2341d96]        # 0x142516038
0x1401d42a2: call    0x140ba9420
0x1401d42a7: lea     rcx,[rbp+0x12d0]
0x1401d42ae: call    0x1400708f0
0x1401d42b3: mov     ecx,r13d
0x1401d42b6: sub     ecx,r14d
0x1401d42b9: sub     ecx,0x3
0x1401d42bc: movsxd  rcx,ecx
0x1401d42bf: cmp     rax,rcx
0x1401d42c2: jb      0x1401d432c
0x1401d42c4: mov     ebx,r13d
0x1401d42c7: sub     ebx,r14d
0x1401d42ca: lea     edi,[rbx-0x4]
0x1401d42cd: test    edi,edi
0x1401d42cf: js      0x1401d42e7
0x1401d42d1: movsxd  rdx,ebx
0x1401d42d4: sub     rdx,0x4
0x1401d42d8: xor     r8d,r8d
0x1401d42db: lea     rcx,[rbp+0x12d0]
0x1401d42e2: call    0x1400e27f0
0x1401d42e7: cmp     edi,0x3
0x1401d42ea: jle     0x1401d432c
0x1401d42ec: movsxd  rdx,ebx
0x1401d42ef: sub     rdx,0x7
0x1401d42f3: lea     rcx,[rbp+0x12d0]
0x1401d42fa: call    0x1400fcb70
0x1401d42ff: mov     BYTE PTR [rax],0x2e
0x1401d4302: lea     eax,[rbx-0x6]
0x1401d4305: movsxd  rdx,eax
0x1401d4308: lea     rcx,[rbp+0x12d0]
0x1401d430f: call    0x1400fcb70
0x1401d4314: mov     BYTE PTR [rax],0x2e
0x1401d4317: lea     eax,[rbx-0x5]
0x1401d431a: movsxd  rdx,eax
0x1401d431d: lea     rcx,[rbp+0x12d0]
0x1401d4324: call    0x1400fcb70
0x1401d4329: mov     BYTE PTR [rax],0x2e
0x1401d432c: xor     r9d,r9d
0x1401d432f: xor     r8d,r8d
0x1401d4332: lea     rdx,[rbp+0x12d0]
0x1401d4339: lea     rcx,[rip+0x2492430]        # 0x142666770
0x1401d4340: call    0x140af0220
0x1401d4345: nop     
0x1401d4346: lea     rcx,[rbp+0x12d0]
0x1401d434d: jmp     0x1401d43c1
0x1401d434f: cmp     DWORD PTR [rax+0x10],0xffffffff
0x1401d4353: je      0x1401d438c
0x1401d4355: lea     rdx,[rip+0x1446f64]        # 0x14161b2c0 ; literal='Last known to be traveling'
0x1401d435c: lea     rcx,[rbp+0x34b0]
0x1401d4363: call    0x140069710
0x1401d4368: nop     
0x1401d4369: xor     r9d,r9d
0x1401d436c: xor     r8d,r8d
0x1401d436f: lea     rdx,[rbp+0x34b0]
0x1401d4376: lea     rcx,[rip+0x24923f3]        # 0x142666770
0x1401d437d: call    0x140af0220
0x1401d4382: nop     
0x1401d4383: lea     rcx,[rbp+0x34b0]
0x1401d438a: jmp     0x1401d43c1
0x1401d438c: lea     rdx,[rip+0x1446f4d]        # 0x14161b2e0 ; literal='Location unknown'
0x1401d4393: lea     rcx,[rbp+0x34d0]
0x1401d439a: call    0x140069710
0x1401d439f: nop     
0x1401d43a0: xor     r9d,r9d
0x1401d43a3: xor     r8d,r8d
0x1401d43a6: lea     rdx,[rbp+0x34d0]
0x1401d43ad: lea     rcx,[rip+0x24923bc]        # 0x142666770
0x1401d43b4: call    0x140af0220
0x1401d43b9: nop     
0x1401d43ba: lea     rcx,[rbp+0x34d0]
0x1401d43c1: call    0x1400693f0
0x1401d43c6: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d43ca: add     ebx,0x3
0x1401d43cd: mov     QWORD PTR [rbp-0x78],rbx
0x1401d43d1: lea     rcx,[rbp+0x12f0]
0x1401d43d8: call    0x1400693f0
0x1401d43dd: inc     r12d
0x1401d43e0: mov     DWORD PTR [rbp-0x68],r12d
0x1401d43e4: cmp     r12d,DWORD PTR [rbp-0x28]
0x1401d43e8: mov     rsi,QWORD PTR [rbp-0x30]
0x1401d43ec: mov     rcx,QWORD PTR [rbp+0x30]
0x1401d43f0: mov     rdi,QWORD PTR [rsp+0x78]
0x1401d43f5: jl      0x1401d3e01
0x1401d43fb: mov     edi,DWORD PTR [rbp-0x58]
0x1401d43fe: mov     r15d,DWORD PTR [rbp-0x10]
0x1401d4402: cmp     esi,edi
0x1401d4404: jle     0x1401d447c
0x1401d4406: lea     ebx,[rdi*2-0x1]
0x1401d440d: add     ebx,edi
0x1401d440f: lea     rcx,[rbp+0x270]
0x1401d4416: call    0x1400bc920
0x1401d441b: lea     r9d,[rsi-0x1]
0x1401d441f: mov     DWORD PTR [rsp+0x30],ebx
0x1401d4423: mov     ebx,0x2
0x1401d4428: mov     DWORD PTR [rsp+0x28],ebx
0x1401d442c: mov     DWORD PTR [rsp+0x20],edi
0x1401d4430: xor     r8d,r8d
0x1401d4433: mov     rax,QWORD PTR [rsp+0x78]
0x1401d4438: mov     edx,DWORD PTR [rax+0x8400]
0x1401d443e: lea     rcx,[rbp+0x270]
0x1401d4445: call    0x1400bc940
0x1401d444a: lea     r9d,[r13+0x1]
0x1401d444e: mov     DWORD PTR [rsp+0x28],0x0
0x1401d4456: mov     r13,QWORD PTR [rsp+0x78]
0x1401d445b: movzx   eax,BYTE PTR [r13+0x8404]
0x1401d4463: mov     BYTE PTR [rsp+0x20],al
0x1401d4467: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d446b: mov     edx,DWORD PTR [rbp-0x38]
0x1401d446e: lea     rcx,[rbp+0x270]
0x1401d4475: call    0x141423200
0x1401d447a: jmp     0x1401d4486
0x1401d447c: mov     r13,QWORD PTR [rsp+0x78]
0x1401d4481: mov     ebx,0x2
0x1401d4486: cmp     QWORD PTR [rbp-0x20],0x0
0x1401d448b: jne     0x1401d44b9
0x1401d448d: cmp     QWORD PTR [r13+0x8408],0x0
0x1401d4495: je      0x1401c8d68
0x1401d449b: mov     QWORD PTR [r13+0x8408],0x0
0x1401d44a6: mov     edx,ebx
0x1401d44a8: lea     rcx,[rip+0x24922c1]        # 0x142666770
0x1401d44af: call    0x140afe4c0
0x1401d44b4: jmp     0x1401c8d68
0x1401d44b9: lea     esi,[r15-0x37]
0x1401d44bd: lea     edi,[r15-0x2]
0x1401d44c1: movsxd  rax,DWORD PTR [rsp+0x70]
0x1401d44c6: lea     r12d,[rax+0x2]
0x1401d44ca: mov     DWORD PTR [rbp-0x60],r12d
0x1401d44ce: mov     r15d,eax
0x1401d44d1: cmp     eax,r12d
0x1401d44d4: jg      0x1401d45b9
0x1401d44da: mov     r14,rax
0x1401d44dd: nop     DWORD PTR [rax]
0x1401d44e0: mov     ebx,esi
0x1401d44e2: cmp     esi,edi
0x1401d44e4: jg      0x1401d45a5
0x1401d44ea: movsxd  r13,eax
0x1401d44ed: movsxd  r12,r12d
0x1401d44f0: mov     r8d,ebx
0x1401d44f3: mov     edx,r15d
0x1401d44f6: lea     rcx,[rip+0x2492273]        # 0x142666770
0x1401d44fd: call    0x1400bc6e0
0x1401d4502: xor     r8d,r8d
0x1401d4505: xor     edx,edx
0x1401d4507: lea     rcx,[rip+0x2492262]        # 0x142666770
0x1401d450e: call    0x1400bc750
0x1401d4513: cmp     r14,r13
0x1401d4516: jne     0x1401d453f
0x1401d4518: cmp     ebx,esi
0x1401d451a: jne     0x1401d4524
0x1401d451c: mov     edx,DWORD PTR [rip+0x2493b72]        # 0x142668094
0x1401d4522: jmp     0x1401d4587
0x1401d4524: lea     rcx,[rip+0x2492245]        # 0x142666770
0x1401d452b: cmp     ebx,edi
0x1401d452d: jne     0x1401d4537
0x1401d452f: mov     edx,DWORD PTR [rip+0x2493b77]        # 0x1426680ac
0x1401d4535: jmp     0x1401d458e
0x1401d4537: mov     edx,DWORD PTR [rip+0x2493b63]        # 0x1426680a0
0x1401d453d: jmp     0x1401d458e
0x1401d453f: cmp     r14,r12
0x1401d4542: jne     0x1401d456b
0x1401d4544: cmp     ebx,esi
0x1401d4546: jne     0x1401d4550
0x1401d4548: mov     edx,DWORD PTR [rip+0x2493b4e]        # 0x14266809c
0x1401d454e: jmp     0x1401d4587
0x1401d4550: lea     rcx,[rip+0x2492219]        # 0x142666770
0x1401d4557: cmp     ebx,edi
0x1401d4559: jne     0x1401d4563
0x1401d455b: mov     edx,DWORD PTR [rip+0x2493b53]        # 0x1426680b4
0x1401d4561: jmp     0x1401d458e
0x1401d4563: mov     edx,DWORD PTR [rip+0x2493b3f]        # 0x1426680a8
0x1401d4569: jmp     0x1401d458e
0x1401d456b: cmp     ebx,esi
0x1401d456d: jne     0x1401d4577
0x1401d456f: mov     edx,DWORD PTR [rip+0x2493b23]        # 0x142668098
0x1401d4575: jmp     0x1401d4587
0x1401d4577: cmp     ebx,edi
0x1401d4579: mov     edx,DWORD PTR [rip+0x2493b31]        # 0x1426680b0
0x1401d457f: je      0x1401d4587
0x1401d4581: mov     edx,DWORD PTR [rip+0x2493b1d]        # 0x1426680a4
0x1401d4587: lea     rcx,[rip+0x24921e2]        # 0x142666770
0x1401d458e: call    0x140af1390
0x1401d4593: inc     ebx
0x1401d4595: cmp     ebx,edi
0x1401d4597: jle     0x1401d44f0
0x1401d459d: mov     r12d,DWORD PTR [rbp-0x60]
0x1401d45a1: mov     eax,DWORD PTR [rsp+0x70]
0x1401d45a5: inc     r15d
0x1401d45a8: inc     r14
0x1401d45ab: cmp     r15d,r12d
0x1401d45ae: jle     0x1401d44e0
0x1401d45b4: mov     r13,QWORD PTR [rsp+0x78]
0x1401d45b9: add     esi,0x2
0x1401d45bc: cmp     QWORD PTR [r13+0x1c0],0x0
0x1401d45c4: jne     0x1401d4637
0x1401d45c6: cmp     QWORD PTR [r13+0x1b8],0x0
0x1401d45ce: jne     0x1401d4637
0x1401d45d0: xor     r8d,r8d
0x1401d45d3: xor     edx,edx
0x1401d45d5: mov     r9b,0x1
0x1401d45d8: lea     rcx,[rip+0x2492191]        # 0x142666770
0x1401d45df: call    0x1400bc6f0
0x1401d45e4: lea     edx,[r12-0x1]
0x1401d45e9: mov     r8d,esi
0x1401d45ec: lea     rcx,[rip+0x249217d]        # 0x142666770
0x1401d45f3: call    0x1400bc6e0
0x1401d45f8: lea     rdx,[rip+0x1446491]        # 0x14161aa90 ; literal='Cannot order mission without leader'
0x1401d45ff: lea     rcx,[rbp+0x3510]
0x1401d4606: call    0x140069710
0x1401d460b: nop     
0x1401d460c: xor     r9d,r9d
0x1401d460f: xor     r8d,r8d
0x1401d4612: lea     rdx,[rbp+0x3510]
0x1401d4619: lea     rcx,[rip+0x2492150]        # 0x142666770
0x1401d4620: call    0x140af0220
0x1401d4625: nop     
0x1401d4626: lea     rcx,[rbp+0x3510]
0x1401d462d: call    0x1400693f0
0x1401d4632: jmp     0x1401c8d68
0x1401d4637: movzx   r8d,WORD PTR [r13+0x19c]
0x1401d463f: movzx   edx,WORD PTR [r13+0x198]
0x1401d4647: mov     rcx,QWORD PTR [rip+0x233388a]        # 0x142507ed8
0x1401d464e: call    0x1401bea60
0x1401d4653: xor     r8d,r8d
0x1401d4656: mov     r9b,0x1
0x1401d4659: lea     rcx,[rip+0x2492110]        # 0x142666770
0x1401d4660: test    eax,eax
0x1401d4662: js      0x1401d46c1
0x1401d4664: mov     edx,0x7
0x1401d4669: call    0x1400bc6f0
0x1401d466e: mov     r8d,esi
0x1401d4671: lea     edx,[r12-0x1]
0x1401d4676: lea     rcx,[rip+0x24920f3]        # 0x142666770
0x1401d467d: call    0x1400bc6e0
0x1401d4682: lea     rdx,[rip+0x1446c6f]        # 0x14161b2f8 ; literal='Click to rescue (creates new mission)'
0x1401d4689: lea     rcx,[rbp+0x3530]
0x1401d4690: call    0x140069710
0x1401d4695: nop     
0x1401d4696: xor     r9d,r9d
0x1401d4699: xor     r8d,r8d
0x1401d469c: lea     rdx,[rbp+0x3530]
0x1401d46a3: lea     rcx,[rip+0x24920c6]        # 0x142666770
0x1401d46aa: call    0x140af0220
0x1401d46af: nop     
0x1401d46b0: lea     rcx,[rbp+0x3530]
0x1401d46b7: call    0x1400693f0
0x1401d46bc: jmp     0x1401c8d68
0x1401d46c1: xor     edx,edx
0x1401d46c3: call    0x1400bc6f0
0x1401d46c8: mov     r8d,esi
0x1401d46cb: lea     edx,[r12-0x1]
0x1401d46d0: lea     rcx,[rip+0x2492099]        # 0x142666770
0x1401d46d7: call    0x1400bc6e0
0x1401d46dc: lea     rdx,[rip+0x144638d]        # 0x14161aa70 ; literal='Inaccessible mission location'
0x1401d46e3: lea     rcx,[rbp+0x3550]
0x1401d46ea: call    0x140069710
0x1401d46ef: nop     
0x1401d46f0: xor     r9d,r9d
0x1401d46f3: xor     r8d,r8d
0x1401d46f6: lea     rdx,[rbp+0x3550]
0x1401d46fd: lea     rcx,[rip+0x249206c]        # 0x142666770
0x1401d4704: call    0x140af0220
0x1401d4709: nop     
0x1401d470a: lea     rcx,[rbp+0x3550]
0x1401d4711: call    0x1400693f0
0x1401d4716: jmp     0x1401c8d68
0x1401d471b: mov     ebx,DWORD PTR [rbp-0x18]
0x1401d471e: mov     DWORD PTR [rbp-0x60],ebx
0x1401d4721: lea     r13d,[rbx-0x39]
0x1401d4725: mov     DWORD PTR [rbp-0x20],r13d
0x1401d4729: mov     r12d,0x14
0x1401d472f: mov     eax,DWORD PTR [rip+0x22153d3]        # 0x1423e9b08
0x1401d4735: cmp     eax,0x2e
0x1401d4738: jle     0x1401d4751
0x1401d473a: lea     r12d,[rax-0x1a]
0x1401d473e: cmp     r12d,0x1e
0x1401d4742: jle     0x1401d4751
0x1401d4744: mov     r12d,0x1e
0x1401d474a: mov     edi,ebx
0x1401d474c: mov     r14d,esi
0x1401d474f: jmp     0x1401d4760
0x1401d4751: mov     edi,ebx
0x1401d4753: mov     r14d,esi
0x1401d4756: test    r12d,r12d
0x1401d4759: js      0x1401d4832
0x1401d475f: nop     
0x1401d4760: mov     ebx,r13d
0x1401d4763: cmp     r13d,edi
0x1401d4766: jg      0x1401d4820
0x1401d476c: movsxd  r15,r12d
0x1401d476f: nop     
0x1401d4770: mov     r8d,ebx
0x1401d4773: mov     edx,r14d
0x1401d4776: lea     rcx,[rip+0x2491ff3]        # 0x142666770
0x1401d477d: call    0x1400bc6e0
0x1401d4782: xor     r8d,r8d
0x1401d4785: xor     edx,edx
0x1401d4787: lea     rcx,[rip+0x2491fe2]        # 0x142666770
0x1401d478e: call    0x1400bc750
0x1401d4793: test    rsi,rsi
0x1401d4796: jne     0x1401d47c0
0x1401d4798: cmp     ebx,r13d
0x1401d479b: jne     0x1401d47a5
0x1401d479d: mov     edx,DWORD PTR [rip+0x24938f1]        # 0x142668094
0x1401d47a3: jmp     0x1401d480a
0x1401d47a5: lea     rcx,[rip+0x2491fc4]        # 0x142666770
0x1401d47ac: cmp     ebx,edi
0x1401d47ae: jne     0x1401d47b8
0x1401d47b0: mov     edx,DWORD PTR [rip+0x24938f6]        # 0x1426680ac
0x1401d47b6: jmp     0x1401d4811
0x1401d47b8: mov     edx,DWORD PTR [rip+0x24938e2]        # 0x1426680a0
0x1401d47be: jmp     0x1401d4811
0x1401d47c0: cmp     rsi,r15
0x1401d47c3: jne     0x1401d47ed
0x1401d47c5: cmp     ebx,r13d
0x1401d47c8: jne     0x1401d47d2
0x1401d47ca: mov     edx,DWORD PTR [rip+0x24938cc]        # 0x14266809c
0x1401d47d0: jmp     0x1401d480a
0x1401d47d2: lea     rcx,[rip+0x2491f97]        # 0x142666770
0x1401d47d9: cmp     ebx,edi
0x1401d47db: jne     0x1401d47e5
0x1401d47dd: mov     edx,DWORD PTR [rip+0x24938d1]        # 0x1426680b4
0x1401d47e3: jmp     0x1401d4811
0x1401d47e5: mov     edx,DWORD PTR [rip+0x24938bd]        # 0x1426680a8
0x1401d47eb: jmp     0x1401d4811
0x1401d47ed: cmp     ebx,r13d
0x1401d47f0: jne     0x1401d47fa
0x1401d47f2: mov     edx,DWORD PTR [rip+0x24938a0]        # 0x142668098
0x1401d47f8: jmp     0x1401d480a
0x1401d47fa: cmp     ebx,edi
0x1401d47fc: mov     edx,DWORD PTR [rip+0x24938ae]        # 0x1426680b0
0x1401d4802: je      0x1401d480a
0x1401d4804: mov     edx,DWORD PTR [rip+0x249389a]        # 0x1426680a4
0x1401d480a: lea     rcx,[rip+0x2491f5f]        # 0x142666770
0x1401d4811: call    0x140af1390
0x1401d4816: inc     ebx
0x1401d4818: cmp     ebx,edi
0x1401d481a: jle     0x1401d4770
0x1401d4820: inc     r14d
0x1401d4823: inc     rsi
0x1401d4826: cmp     r14d,r12d
0x1401d4829: jle     0x1401d4760
0x1401d482f: mov     ebx,DWORD PTR [rbp-0x60]
0x1401d4832: lea     r14d,[r13+0x2]
0x1401d4836: lea     r13d,[rbx-0x2]
0x1401d483a: mov     DWORD PTR [rsp+0x74],r13d
0x1401d483f: lea     ecx,[r12-0x1]
0x1401d4844: mov     eax,0x55555556
0x1401d4849: imul    ecx
0x1401d484b: mov     edi,edx
0x1401d484d: shr     edi,0x1f
0x1401d4850: add     edi,edx
0x1401d4852: mov     DWORD PTR [rbp-0x10],edi
0x1401d4855: mov     r12,QWORD PTR [rsp+0x78]
0x1401d485a: lea     rcx,[r12+0x8410]
0x1401d4862: call    0x140070410
0x1401d4867: mov     rsi,rax
0x1401d486a: mov     QWORD PTR [rbp-0x58],rax
0x1401d486e: cmp     eax,edi
0x1401d4870: jle     0x1401d487b
0x1401d4872: lea     r13d,[rbx-0x4]
0x1401d4876: mov     DWORD PTR [rsp+0x74],r13d
0x1401d487b: xor     r15d,r15d
0x1401d487e: mov     QWORD PTR [rbp-0x30],r15
0x1401d4882: mov     ecx,DWORD PTR [r12+0x8440]
0x1401d488a: mov     edx,eax
0x1401d488c: sub     edx,edi
0x1401d488e: cmp     ecx,edx
0x1401d4890: cmovle  edx,ecx
0x1401d4893: xor     eax,eax
0x1401d4895: test    edx,edx
0x1401d4897: cmovns  eax,edx
0x1401d489a: mov     DWORD PTR [rbp-0x68],eax
0x1401d489d: lea     ecx,[rax+rdi*1]
0x1401d48a0: mov     DWORD PTR [rbp-0x28],ecx
0x1401d48a3: cmp     eax,ecx
0x1401d48a5: mov     ecx,DWORD PTR [rbp+0x20]
0x1401d48a8: mov     DWORD PTR [rsp+0x70],ecx
0x1401d48ac: jge     0x1401d4fb5
0x1401d48b2: mov     r15,r12
0x1401d48b5: lea     r8,[r12+0x8410]
0x1401d48bd: mov     QWORD PTR [rbp+0x48],r8
0x1401d48c1: mov     ebx,0x4
0x1401d48c6: mov     QWORD PTR [rbp-0x78],rbx
0x1401d48ca: nop     WORD PTR [rax+rax*1+0x0]
0x1401d48d0: cmp     eax,esi
0x1401d48d2: jge     0x1401d4fa9
0x1401d48d8: movsxd  rdi,eax
0x1401d48db: mov     rdx,rdi
0x1401d48de: mov     rcx,r8
0x1401d48e1: call    0x1400707e0
0x1401d48e6: mov     r12,QWORD PTR [rax]
0x1401d48e9: mov     QWORD PTR [rbp+0x30],r12
0x1401d48ed: mov     rdx,rdi
0x1401d48f0: lea     rcx,[r15+0x8428]
0x1401d48f7: call    0x1400707e0
0x1401d48fc: cmp     QWORD PTR [rax],0x0
0x1401d4900: jne     0x1401d4952
0x1401d4902: mov     ecx,0x30
0x1401d4907: call    0x14154de30
0x1401d490c: mov     QWORD PTR [rbp-0x48],rax
0x1401d4910: mov     rcx,rax
0x1401d4913: call    0x140074710
0x1401d4918: mov     rbx,rax
0x1401d491b: mov     QWORD PTR [rax],r12
0x1401d491e: mov     rcx,rax
0x1401d4921: call    0x1409f59a0
0x1401d4926: mov     rdx,QWORD PTR [rip+0x21e1c3b]        # 0x1423b6568
0x1401d492d: add     rdx,0x1250
0x1401d4934: mov     rcx,rbx
0x1401d4937: call    0x1409f59f0
0x1401d493c: mov     rdx,rdi
0x1401d493f: lea     rcx,[r15+0x8428]
0x1401d4946: call    0x1400707e0
0x1401d494b: mov     QWORD PTR [rax],rbx
0x1401d494e: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d4952: mov     rdx,rdi
0x1401d4955: lea     rcx,[r15+0x8428]
0x1401d495c: call    0x1400707e0
0x1401d4961: mov     r15,QWORD PTR [rax]
0x1401d4964: mov     QWORD PTR [rbp+0x18],r15
0x1401d4968: cmp     BYTE PTR [rip+0x21d7fe6],0x0        # 0x1423ac955
0x1401d496f: je      0x1401d49ce
0x1401d4971: mov     eax,DWORD PTR [rbp-0x38]
0x1401d4974: cmp     eax,r14d
0x1401d4977: jl      0x1401d49ce
0x1401d4979: cmp     eax,r13d
0x1401d497c: jg      0x1401d49ce
0x1401d497e: lea     eax,[rbx-0x3]
0x1401d4981: mov     ecx,DWORD PTR [rbp-0x3c]
0x1401d4984: cmp     ecx,eax
0x1401d4986: jl      0x1401d49ce
0x1401d4988: lea     eax,[rbx-0x1]
0x1401d498b: cmp     ecx,eax
0x1401d498d: jg      0x1401d49ce
0x1401d498f: mov     rax,QWORD PTR [rsp+0x78]
0x1401d4994: cmp     QWORD PTR [rax+0x8448],r12
0x1401d499b: je      0x1401d49c3
0x1401d499d: mov     QWORD PTR [rax+0x8448],r12
0x1401d49a4: mov     r8,r15
0x1401d49a7: mov     rdx,r12
0x1401d49aa: mov     rcx,rax
0x1401d49ad: call    0x1401dccf0
0x1401d49b2: mov     edx,0x2
0x1401d49b7: lea     rcx,[rip+0x2491db2]        # 0x142666770
0x1401d49be: call    0x140afe4c0
0x1401d49c3: mov     QWORD PTR [rbp-0x30],r12
0x1401d49c7: lea     ecx,[rbx-0x4]
0x1401d49ca: mov     DWORD PTR [rsp+0x70],ecx
0x1401d49ce: xor     r8d,r8d
0x1401d49d1: mov     edx,0x7
0x1401d49d6: mov     r9b,0x1
0x1401d49d9: lea     rcx,[rip+0x2491d90]        # 0x142666770
0x1401d49e0: call    0x1400bc6f0
0x1401d49e5: mov     esi,r14d
0x1401d49e8: cmp     r14d,r13d
0x1401d49eb: jg      0x1401d4a97
0x1401d49f1: movsxd  r15,r14d
0x1401d49f4: lea     eax,[rbx-0x3]
0x1401d49f7: mov     DWORD PTR [rbp-0x60],eax
0x1401d49fa: nop     WORD PTR [rax+rax*1+0x0]
0x1401d4a00: mov     edi,eax
0x1401d4a02: cmp     eax,ebx
0x1401d4a04: jge     0x1401d4a81
0x1401d4a06: movsxd  r12,r13d
0x1401d4a09: lea     rbx,[rip+0x2493720]        # 0x142668130
0x1401d4a10: mov     r13,QWORD PTR [rbp-0x78]
0x1401d4a14: mov     r8d,esi
0x1401d4a17: mov     edx,edi
0x1401d4a19: lea     rcx,[rip+0x2491d50]        # 0x142666770
0x1401d4a20: call    0x1400bc6e0
0x1401d4a25: cmp     esi,r14d
0x1401d4a28: jne     0x1401d4a2f
0x1401d4a2a: mov     edx,DWORD PTR [rbx-0x18]
0x1401d4a2d: jmp     0x1401d4a3b
0x1401d4a2f: cmp     r15,r12
0x1401d4a32: jne     0x1401d4a38
0x1401d4a34: mov     edx,DWORD PTR [rbx]
0x1401d4a36: jmp     0x1401d4a3b
0x1401d4a38: mov     edx,DWORD PTR [rbx-0xc]
0x1401d4a3b: lea     rcx,[rip+0x2491d2e]        # 0x142666770
0x1401d4a42: call    0x140af1390
0x1401d4a47: xor     edx,edx
0x1401d4a49: lea     rcx,[rip+0x22150a0]        # 0x1423e9af0
0x1401d4a50: call    0x140073550
0x1401d4a55: test    al,al
0x1401d4a57: je      0x1401d4a6a
0x1401d4a59: mov     r8b,0x1
0x1401d4a5c: xor     edx,edx
0x1401d4a5e: lea     rcx,[rip+0x2491d0b]        # 0x142666770
0x1401d4a65: call    0x1400bc750
0x1401d4a6a: inc     edi
0x1401d4a6c: add     rbx,0x4
0x1401d4a70: cmp     edi,r13d
0x1401d4a73: jl      0x1401d4a14
0x1401d4a75: mov     r13d,DWORD PTR [rsp+0x74]
0x1401d4a7a: mov     eax,DWORD PTR [rbp-0x60]
0x1401d4a7d: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d4a81: inc     esi
0x1401d4a83: inc     r15
0x1401d4a86: cmp     esi,r13d
0x1401d4a89: jle     0x1401d4a00
0x1401d4a8f: mov     r15,QWORD PTR [rbp+0x18]
0x1401d4a93: mov     r12,QWORD PTR [rbp+0x30]
0x1401d4a97: xor     r8d,r8d
0x1401d4a9a: mov     edx,0x3
0x1401d4a9f: mov     r9b,0x1
0x1401d4aa2: lea     rcx,[rip+0x2491cc7]        # 0x142666770
0x1401d4aa9: call    0x1400bc6f0
0x1401d4aae: lea     edx,[rbx-0x2]
0x1401d4ab1: mov     r8d,r14d
0x1401d4ab4: lea     rcx,[rip+0x2491cb5]        # 0x142666770
0x1401d4abb: call    0x1400bc6e0
0x1401d4ac0: lea     rcx,[rbp+0x1390]
0x1401d4ac7: call    0x140070c50
0x1401d4acc: nop     
0x1401d4acd: xor     r9d,r9d
0x1401d4ad0: mov     r8d,DWORD PTR [r12]
0x1401d4ad4: lea     rdx,[rbp+0x1390]
0x1401d4adb: lea     rcx,[rip+0x2341556]        # 0x142516038
0x1401d4ae2: call    0x140ba8ee0
0x1401d4ae7: mov     ebx,r13d
0x1401d4aea: sub     ebx,r14d
0x1401d4aed: lea     rcx,[rbp+0x1390]
0x1401d4af4: call    0x1400708f0
0x1401d4af9: lea     ecx,[rbx-0x2]
0x1401d4afc: movsxd  rdx,ecx
0x1401d4aff: cmp     rax,rdx
0x1401d4b02: jb      0x1401d4b66
0x1401d4b04: lea     edi,[rbx-0x3]
0x1401d4b07: test    edi,edi
0x1401d4b09: js      0x1401d4b21
0x1401d4b0b: movsxd  rdx,ebx
0x1401d4b0e: sub     rdx,0x3
0x1401d4b12: xor     r8d,r8d
0x1401d4b15: lea     rcx,[rbp+0x1390]
0x1401d4b1c: call    0x1400e27f0
0x1401d4b21: cmp     edi,0x3
0x1401d4b24: jle     0x1401d4b66
0x1401d4b26: movsxd  rdx,ebx
0x1401d4b29: sub     rdx,0x6
0x1401d4b2d: lea     rcx,[rbp+0x1390]
0x1401d4b34: call    0x1400fcb70
0x1401d4b39: mov     BYTE PTR [rax],0x2e
0x1401d4b3c: lea     eax,[rbx-0x5]
0x1401d4b3f: movsxd  rdx,eax
0x1401d4b42: lea     rcx,[rbp+0x1390]
0x1401d4b49: call    0x1400fcb70
0x1401d4b4e: mov     BYTE PTR [rax],0x2e
0x1401d4b51: lea     eax,[rbx-0x4]
0x1401d4b54: movsxd  rdx,eax
0x1401d4b57: lea     rcx,[rbp+0x1390]
0x1401d4b5e: call    0x1400fcb70
0x1401d4b63: mov     BYTE PTR [rax],0x2e
0x1401d4b66: xor     r9d,r9d
0x1401d4b69: xor     r8d,r8d
0x1401d4b6c: lea     rdx,[rbp+0x1390]
0x1401d4b73: lea     rcx,[rip+0x2491bf6]        # 0x142666770
0x1401d4b7a: call    0x140af0220
0x1401d4b7f: lea     r8d,[r14+0x1]
0x1401d4b83: mov     rdx,QWORD PTR [rbp-0x78]
0x1401d4b87: dec     edx
0x1401d4b89: lea     rcx,[rip+0x2491be0]        # 0x142666770
0x1401d4b90: call    0x1400bc6e0
0x1401d4b95: cmp     DWORD PTR [r15+0x10],0xffffffff
0x1401d4b9a: je      0x1401d4c91
0x1401d4ba0: lea     rdx,[rip+0x1446779]        # 0x14161b320 ; literal='Last held by '
0x1401d4ba7: lea     rcx,[rbp+0x1310]
0x1401d4bae: call    0x140069710
0x1401d4bb3: nop     
0x1401d4bb4: lea     rcx,[rbp+0x8e0]
0x1401d4bbb: call    0x140073640
0x1401d4bc0: xor     eax,eax
0x1401d4bc2: mov     WORD PTR [rsp+0x28],ax
0x1401d4bc7: mov     WORD PTR [rsp+0x20],0x1
0x1401d4bce: lea     r9,[rbp+0x8e0]
0x1401d4bd5: mov     r8d,DWORD PTR [r15+0x10]
0x1401d4bd9: lea     rdx,[rbp+0x1310]
0x1401d4be0: lea     rcx,[rip+0x2341451]        # 0x142516038
0x1401d4be7: call    0x140ba79f0
0x1401d4bec: lea     rcx,[rbp+0x1310]
0x1401d4bf3: call    0x1400708f0
0x1401d4bf8: lea     ecx,[rbx-0x3]
0x1401d4bfb: movsxd  rdx,ecx
0x1401d4bfe: cmp     rax,rdx
0x1401d4c01: jb      0x1401d4c6b
0x1401d4c03: mov     ebx,r13d
0x1401d4c06: sub     ebx,r14d
0x1401d4c09: lea     edi,[rbx-0x4]
0x1401d4c0c: test    edi,edi
0x1401d4c0e: js      0x1401d4c26
0x1401d4c10: movsxd  rdx,ebx
0x1401d4c13: sub     rdx,0x4
0x1401d4c17: xor     r8d,r8d
0x1401d4c1a: lea     rcx,[rbp+0x1310]
0x1401d4c21: call    0x1400e27f0
0x1401d4c26: cmp     edi,0x3
0x1401d4c29: jle     0x1401d4c6b
0x1401d4c2b: movsxd  rdx,ebx
0x1401d4c2e: sub     rdx,0x7
0x1401d4c32: lea     rcx,[rbp+0x1310]
0x1401d4c39: call    0x1400fcb70
0x1401d4c3e: mov     BYTE PTR [rax],0x2e
0x1401d4c41: lea     eax,[rbx-0x6]
0x1401d4c44: movsxd  rdx,eax
0x1401d4c47: lea     rcx,[rbp+0x1310]
0x1401d4c4e: call    0x1400fcb70
0x1401d4c53: mov     BYTE PTR [rax],0x2e
0x1401d4c56: lea     eax,[rbx-0x5]
0x1401d4c59: movsxd  rdx,eax
0x1401d4c5c: lea     rcx,[rbp+0x1310]
0x1401d4c63: call    0x1400fcb70
0x1401d4c68: mov     BYTE PTR [rax],0x2e
0x1401d4c6b: xor     r9d,r9d
0x1401d4c6e: xor     r8d,r8d
0x1401d4c71: lea     rdx,[rbp+0x1310]
0x1401d4c78: lea     rcx,[rip+0x2491af1]        # 0x142666770
0x1401d4c7f: call    0x140af0220
0x1401d4c84: nop     
0x1401d4c85: lea     rcx,[rbp+0x1310]
0x1401d4c8c: jmp     0x1401d4f6f
0x1401d4c91: cmp     DWORD PTR [r15+0x8],0xffffffff
0x1401d4c96: je      0x1401d4d75
0x1401d4c9c: lea     rdx,[rip+0x144660d]        # 0x14161b2b0 ; literal='Last in '
0x1401d4ca3: lea     rcx,[rbp+0x1330]
0x1401d4caa: call    0x140069710
0x1401d4caf: nop     
0x1401d4cb0: xor     r9d,r9d
0x1401d4cb3: mov     r8d,DWORD PTR [r15+0x8]
0x1401d4cb7: lea     rdx,[rbp+0x1330]
0x1401d4cbe: lea     rcx,[rip+0x2341373]        # 0x142516038
0x1401d4cc5: call    0x140ba8410
0x1401d4cca: lea     rcx,[rbp+0x1330]
0x1401d4cd1: call    0x1400708f0
0x1401d4cd6: mov     ecx,r13d
0x1401d4cd9: sub     ecx,r14d
0x1401d4cdc: sub     ecx,0x3
0x1401d4cdf: movsxd  rcx,ecx
0x1401d4ce2: cmp     rax,rcx
0x1401d4ce5: jb      0x1401d4d4f
0x1401d4ce7: mov     ebx,r13d
0x1401d4cea: sub     ebx,r14d
0x1401d4ced: lea     edi,[rbx-0x4]
0x1401d4cf0: test    edi,edi
0x1401d4cf2: js      0x1401d4d0a
0x1401d4cf4: movsxd  rdx,ebx
0x1401d4cf7: sub     rdx,0x4
0x1401d4cfb: xor     r8d,r8d
0x1401d4cfe: lea     rcx,[rbp+0x1330]
0x1401d4d05: call    0x1400e27f0
0x1401d4d0a: cmp     edi,0x3
0x1401d4d0d: jle     0x1401d4d4f
0x1401d4d0f: movsxd  rdx,ebx
0x1401d4d12: sub     rdx,0x7
0x1401d4d16: lea     rcx,[rbp+0x1330]
0x1401d4d1d: call    0x1400fcb70
0x1401d4d22: mov     BYTE PTR [rax],0x2e
0x1401d4d25: lea     eax,[rbx-0x6]
0x1401d4d28: movsxd  rdx,eax
0x1401d4d2b: lea     rcx,[rbp+0x1330]
0x1401d4d32: call    0x1400fcb70
0x1401d4d37: mov     BYTE PTR [rax],0x2e
0x1401d4d3a: lea     eax,[rbx-0x5]
0x1401d4d3d: movsxd  rdx,eax
0x1401d4d40: lea     rcx,[rbp+0x1330]
0x1401d4d47: call    0x1400fcb70
0x1401d4d4c: mov     BYTE PTR [rax],0x2e
0x1401d4d4f: xor     r9d,r9d
0x1401d4d52: xor     r8d,r8d
0x1401d4d55: lea     rdx,[rbp+0x1330]
0x1401d4d5c: lea     rcx,[rip+0x2491a0d]        # 0x142666770
0x1401d4d63: call    0x140af0220
0x1401d4d68: nop     
0x1401d4d69: lea     rcx,[rbp+0x1330]
0x1401d4d70: jmp     0x1401d4f6f
0x1401d4d75: cmp     DWORD PTR [r15+0x14],0xffffffff
0x1401d4d7a: je      0x1401d4e59
0x1401d4d80: lea     rdx,[rip+0x1446529]        # 0x14161b2b0 ; literal='Last in '
0x1401d4d87: lea     rcx,[rbp+0x1350]
0x1401d4d8e: call    0x140069710
0x1401d4d93: nop     
0x1401d4d94: xor     r9d,r9d
0x1401d4d97: mov     r8d,DWORD PTR [r15+0x14]
0x1401d4d9b: lea     rdx,[rbp+0x1350]
0x1401d4da2: lea     rcx,[rip+0x234128f]        # 0x142516038
0x1401d4da9: call    0x140ba9520
0x1401d4dae: lea     rcx,[rbp+0x1350]
0x1401d4db5: call    0x1400708f0
0x1401d4dba: mov     ecx,r13d
0x1401d4dbd: sub     ecx,r14d
0x1401d4dc0: sub     ecx,0x3
0x1401d4dc3: movsxd  rcx,ecx
0x1401d4dc6: cmp     rax,rcx
0x1401d4dc9: jb      0x1401d4e33
0x1401d4dcb: mov     ebx,r13d
0x1401d4dce: sub     ebx,r14d
0x1401d4dd1: lea     edi,[rbx-0x4]
0x1401d4dd4: test    edi,edi
0x1401d4dd6: js      0x1401d4dee
0x1401d4dd8: movsxd  rdx,ebx
0x1401d4ddb: sub     rdx,0x4
0x1401d4ddf: xor     r8d,r8d
0x1401d4de2: lea     rcx,[rbp+0x1350]
0x1401d4de9: call    0x1400e27f0
0x1401d4dee: cmp     edi,0x3
0x1401d4df1: jle     0x1401d4e33
0x1401d4df3: movsxd  rdx,ebx
0x1401d4df6: sub     rdx,0x7
0x1401d4dfa: lea     rcx,[rbp+0x1350]
0x1401d4e01: call    0x1400fcb70
0x1401d4e06: mov     BYTE PTR [rax],0x2e
0x1401d4e09: lea     eax,[rbx-0x6]
0x1401d4e0c: movsxd  rdx,eax
0x1401d4e0f: lea     rcx,[rbp+0x1350]
0x1401d4e16: call    0x1400fcb70
0x1401d4e1b: mov     BYTE PTR [rax],0x2e
0x1401d4e1e: lea     eax,[rbx-0x5]
0x1401d4e21: movsxd  rdx,eax
0x1401d4e24: lea     rcx,[rbp+0x1350]
0x1401d4e2b: call    0x1400fcb70
0x1401d4e30: mov     BYTE PTR [rax],0x2e
0x1401d4e33: xor     r9d,r9d
0x1401d4e36: xor     r8d,r8d
0x1401d4e39: lea     rdx,[rbp+0x1350]
0x1401d4e40: lea     rcx,[rip+0x2491929]        # 0x142666770
0x1401d4e47: call    0x140af0220
0x1401d4e4c: nop     
0x1401d4e4d: lea     rcx,[rbp+0x1350]
0x1401d4e54: jmp     0x1401d4f6f
0x1401d4e59: cmp     DWORD PTR [r15+0x18],0xffffffff
0x1401d4e5e: je      0x1401d4f3a
0x1401d4e64: lea     rdx,[rip+0x1446445]        # 0x14161b2b0 ; literal='Last in '
0x1401d4e6b: lea     rcx,[rbp+0x1370]
0x1401d4e72: call    0x140069710
0x1401d4e77: nop     
0x1401d4e78: xor     r9d,r9d
0x1401d4e7b: mov     r8d,DWORD PTR [r15+0x18]
0x1401d4e7f: lea     rdx,[rbp+0x1370]
0x1401d4e86: lea     rcx,[rip+0x23411ab]        # 0x142516038
0x1401d4e8d: call    0x140ba9420
0x1401d4e92: lea     rcx,[rbp+0x1370]
0x1401d4e99: call    0x1400708f0
0x1401d4e9e: mov     ecx,r13d
0x1401d4ea1: sub     ecx,r14d
0x1401d4ea4: sub     ecx,0x3
0x1401d4ea7: movsxd  rcx,ecx
0x1401d4eaa: cmp     rax,rcx
0x1401d4ead: jb      0x1401d4f17
0x1401d4eaf: mov     ebx,r13d
0x1401d4eb2: sub     ebx,r14d
0x1401d4eb5: lea     edi,[rbx-0x4]
0x1401d4eb8: test    edi,edi
0x1401d4eba: js      0x1401d4ed2
0x1401d4ebc: movsxd  rdx,ebx
0x1401d4ebf: sub     rdx,0x4
0x1401d4ec3: xor     r8d,r8d
0x1401d4ec6: lea     rcx,[rbp+0x1370]
0x1401d4ecd: call    0x1400e27f0
0x1401d4ed2: cmp     edi,0x3
0x1401d4ed5: jle     0x1401d4f17
0x1401d4ed7: movsxd  rdx,ebx
0x1401d4eda: sub     rdx,0x7
0x1401d4ede: lea     rcx,[rbp+0x1370]
0x1401d4ee5: call    0x1400fcb70
0x1401d4eea: mov     BYTE PTR [rax],0x2e
0x1401d4eed: lea     eax,[rbx-0x6]
0x1401d4ef0: movsxd  rdx,eax
0x1401d4ef3: lea     rcx,[rbp+0x1370]
0x1401d4efa: call    0x1400fcb70
0x1401d4eff: mov     BYTE PTR [rax],0x2e
0x1401d4f02: lea     eax,[rbx-0x5]
0x1401d4f05: movsxd  rdx,eax
0x1401d4f08: lea     rcx,[rbp+0x1370]
0x1401d4f0f: call    0x1400fcb70
0x1401d4f14: mov     BYTE PTR [rax],0x2e
0x1401d4f17: xor     r9d,r9d
0x1401d4f1a: xor     r8d,r8d
0x1401d4f1d: lea     rdx,[rbp+0x1370]
0x1401d4f24: lea     rcx,[rip+0x2491845]        # 0x142666770
0x1401d4f2b: call    0x140af0220
0x1401d4f30: nop     
0x1401d4f31: lea     rcx,[rbp+0x1370]
0x1401d4f38: jmp     0x1401d4f6f
0x1401d4f3a: lea     rdx,[rip+0x144639f]        # 0x14161b2e0 ; literal='Location unknown'
0x1401d4f41: lea     rcx,[rbp+0x3570]
0x1401d4f48: call    0x140069710
0x1401d4f4d: nop     
0x1401d4f4e: xor     r9d,r9d
0x1401d4f51: xor     r8d,r8d
0x1401d4f54: lea     rdx,[rbp+0x3570]
0x1401d4f5b: lea     rcx,[rip+0x249180e]        # 0x142666770
0x1401d4f62: call    0x140af0220
0x1401d4f67: nop     
0x1401d4f68: lea     rcx,[rbp+0x3570]
0x1401d4f6f: call    0x1400693f0
0x1401d4f74: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d4f78: add     ebx,0x3
0x1401d4f7b: mov     QWORD PTR [rbp-0x78],rbx
0x1401d4f7f: lea     rcx,[rbp+0x1390]
0x1401d4f86: call    0x1400693f0
0x1401d4f8b: mov     eax,DWORD PTR [rbp-0x68]
0x1401d4f8e: inc     eax
0x1401d4f90: mov     DWORD PTR [rbp-0x68],eax
0x1401d4f93: cmp     eax,DWORD PTR [rbp-0x28]
0x1401d4f96: mov     rsi,QWORD PTR [rbp-0x58]
0x1401d4f9a: mov     r8,QWORD PTR [rbp+0x48]
0x1401d4f9e: mov     r15,QWORD PTR [rsp+0x78]
0x1401d4fa3: jl      0x1401d48d0
0x1401d4fa9: mov     r12,QWORD PTR [rsp+0x78]
0x1401d4fae: mov     r15,QWORD PTR [rbp-0x30]
0x1401d4fb2: mov     edi,DWORD PTR [rbp-0x10]
0x1401d4fb5: cmp     esi,edi
0x1401d4fb7: jle     0x1401d502c
0x1401d4fb9: lea     ebx,[rdi*2-0x1]
0x1401d4fc0: add     ebx,edi
0x1401d4fc2: lea     rcx,[rbp+0x250]
0x1401d4fc9: call    0x1400bc920
0x1401d4fce: lea     r9d,[rsi-0x1]
0x1401d4fd2: mov     DWORD PTR [rsp+0x30],ebx
0x1401d4fd6: mov     ebx,0x2
0x1401d4fdb: mov     DWORD PTR [rsp+0x28],ebx
0x1401d4fdf: mov     DWORD PTR [rsp+0x20],edi
0x1401d4fe3: xor     r8d,r8d
0x1401d4fe6: mov     edx,DWORD PTR [r12+0x8440]
0x1401d4fee: lea     rcx,[rbp+0x250]
0x1401d4ff5: call    0x1400bc940
0x1401d4ffa: lea     r9d,[r13+0x1]
0x1401d4ffe: mov     DWORD PTR [rsp+0x28],0x0
0x1401d5006: mov     r13,QWORD PTR [rsp+0x78]
0x1401d500b: movzx   eax,BYTE PTR [r13+0x8444]
0x1401d5013: mov     BYTE PTR [rsp+0x20],al
0x1401d5017: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d501b: mov     edx,DWORD PTR [rbp-0x38]
0x1401d501e: lea     rcx,[rbp+0x250]
0x1401d5025: call    0x141423200
0x1401d502a: jmp     0x1401d5036
0x1401d502c: mov     r13,QWORD PTR [rsp+0x78]
0x1401d5031: mov     ebx,0x2
0x1401d5036: test    r15,r15
0x1401d5039: jne     0x1401d5062
0x1401d503b: cmp     QWORD PTR [r13+0x8448],r15
0x1401d5042: je      0x1401c8d68
0x1401d5048: mov     QWORD PTR [r13+0x8448],r15
0x1401d504f: mov     edx,ebx
0x1401d5051: lea     rcx,[rip+0x2491718]        # 0x142666770
0x1401d5058: call    0x140afe4c0
0x1401d505d: jmp     0x1401c8d68
0x1401d5062: mov     edi,DWORD PTR [rbp-0x20]
0x1401d5065: lea     esi,[rdi-0x37]
0x1401d5068: add     edi,0xfffffffe
0x1401d506b: movsxd  r13,DWORD PTR [rsp+0x70]
0x1401d5070: lea     r12d,[r13+0xd]
0x1401d5074: mov     DWORD PTR [rbp-0x60],r12d
0x1401d5078: mov     r15d,r13d
0x1401d507b: cmp     r13d,r12d
0x1401d507e: jg      0x1401d5165
0x1401d5084: mov     r14,r13
0x1401d5087: nop     WORD PTR [rax+rax*1+0x0]
0x1401d5090: mov     ebx,esi
0x1401d5092: cmp     esi,edi
0x1401d5094: jg      0x1401d5156
0x1401d509a: movsxd  r13,r13d
0x1401d509d: movsxd  r12,r12d
0x1401d50a0: mov     r8d,ebx
0x1401d50a3: mov     edx,r15d
0x1401d50a6: lea     rcx,[rip+0x24916c3]        # 0x142666770
0x1401d50ad: call    0x1400bc6e0
0x1401d50b2: xor     r8d,r8d
0x1401d50b5: xor     edx,edx
0x1401d50b7: lea     rcx,[rip+0x24916b2]        # 0x142666770
0x1401d50be: call    0x1400bc750
0x1401d50c3: cmp     r14,r13
0x1401d50c6: jne     0x1401d50ef
0x1401d50c8: cmp     ebx,esi
0x1401d50ca: jne     0x1401d50d4
0x1401d50cc: mov     edx,DWORD PTR [rip+0x2492fc2]        # 0x142668094
0x1401d50d2: jmp     0x1401d5137
0x1401d50d4: lea     rcx,[rip+0x2491695]        # 0x142666770
0x1401d50db: cmp     ebx,edi
0x1401d50dd: jne     0x1401d50e7
0x1401d50df: mov     edx,DWORD PTR [rip+0x2492fc7]        # 0x1426680ac
0x1401d50e5: jmp     0x1401d513e
0x1401d50e7: mov     edx,DWORD PTR [rip+0x2492fb3]        # 0x1426680a0
0x1401d50ed: jmp     0x1401d513e
0x1401d50ef: cmp     r14,r12
0x1401d50f2: jne     0x1401d511b
0x1401d50f4: cmp     ebx,esi
0x1401d50f6: jne     0x1401d5100
0x1401d50f8: mov     edx,DWORD PTR [rip+0x2492f9e]        # 0x14266809c
0x1401d50fe: jmp     0x1401d5137
0x1401d5100: lea     rcx,[rip+0x2491669]        # 0x142666770
0x1401d5107: cmp     ebx,edi
0x1401d5109: jne     0x1401d5113
0x1401d510b: mov     edx,DWORD PTR [rip+0x2492fa3]        # 0x1426680b4
0x1401d5111: jmp     0x1401d513e
0x1401d5113: mov     edx,DWORD PTR [rip+0x2492f8f]        # 0x1426680a8
0x1401d5119: jmp     0x1401d513e
0x1401d511b: cmp     ebx,esi
0x1401d511d: jne     0x1401d5127
0x1401d511f: mov     edx,DWORD PTR [rip+0x2492f73]        # 0x142668098
0x1401d5125: jmp     0x1401d5137
0x1401d5127: cmp     ebx,edi
0x1401d5129: mov     edx,DWORD PTR [rip+0x2492f81]        # 0x1426680b0
0x1401d512f: je      0x1401d5137
0x1401d5131: mov     edx,DWORD PTR [rip+0x2492f6d]        # 0x1426680a4
0x1401d5137: lea     rcx,[rip+0x2491632]        # 0x142666770
0x1401d513e: call    0x140af1390
0x1401d5143: inc     ebx
0x1401d5145: cmp     ebx,edi
0x1401d5147: jle     0x1401d50a0
0x1401d514d: mov     r12d,DWORD PTR [rbp-0x60]
0x1401d5151: mov     r13d,DWORD PTR [rsp+0x70]
0x1401d5156: inc     r15d
0x1401d5159: inc     r14
0x1401d515c: cmp     r15d,r12d
0x1401d515f: jle     0x1401d5090
0x1401d5165: add     esi,0x2
0x1401d5168: lea     edi,[r13+0x1]
0x1401d516c: xor     r8d,r8d
0x1401d516f: mov     edx,0x7
0x1401d5174: mov     r9b,0x1
0x1401d5177: lea     rcx,[rip+0x24915f2]        # 0x142666770
0x1401d517e: call    0x1400bc6f0
0x1401d5183: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d5188: lea     rdx,[rbp+0xc0]
0x1401d518f: lea     rcx,[rbx+0x8450]
0x1401d5196: call    0x140070800
0x1401d519b: lea     rdx,[rbp+0x190]
0x1401d51a2: lea     rcx,[rbx+0x8450]
0x1401d51a9: call    0x1400707f0
0x1401d51ae: lea     r8,[rbp+0x190]
0x1401d51b5: lea     rdx,[rbp+0x1]
0x1401d51b9: lea     rcx,[rbp+0xc0]
0x1401d51c0: call    0x1400703e0
0x1401d51c5: xor     edx,edx
0x1401d51c7: movzx   ecx,BYTE PTR [rax]
0x1401d51ca: call    0x140066d70
0x1401d51cf: test    al,al
0x1401d51d1: je      0x1401d5249
0x1401d51d3: lea     ebx,[r13+0x8]
0x1401d51d7: nop     WORD PTR [rax+rax*1+0x0]
0x1401d51e0: mov     r8d,esi
0x1401d51e3: mov     edx,edi
0x1401d51e5: lea     rcx,[rip+0x2491584]        # 0x142666770
0x1401d51ec: call    0x1400bc6e0
0x1401d51f1: lea     rcx,[rbp+0xc0]
0x1401d51f8: call    0x1400703d0
0x1401d51fd: xor     r9d,r9d
0x1401d5200: xor     r8d,r8d
0x1401d5203: mov     rdx,QWORD PTR [rax]
0x1401d5206: lea     rcx,[rip+0x2491563]        # 0x142666770
0x1401d520d: call    0x140af0220
0x1401d5212: cmp     edi,ebx
0x1401d5214: jge     0x1401d5249
0x1401d5216: lea     rcx,[rbp+0xc0]
0x1401d521d: call    0x1400703c0
0x1401d5222: inc     edi
0x1401d5224: lea     r8,[rbp+0x190]
0x1401d522b: lea     rdx,[rbp+0x1]
0x1401d522f: lea     rcx,[rbp+0xc0]
0x1401d5236: call    0x1400703e0
0x1401d523b: xor     edx,edx
0x1401d523d: movzx   ecx,BYTE PTR [rax]
0x1401d5240: call    0x140066d70
0x1401d5245: test    al,al
0x1401d5247: jne     0x1401d51e0
0x1401d5249: add     edi,0x2
0x1401d524c: mov     r13,QWORD PTR [rsp+0x78]
0x1401d5251: cmp     QWORD PTR [r13+0x8468],0x0
0x1401d5259: je      0x1401d52bd
0x1401d525b: xor     r8d,r8d
0x1401d525e: mov     edx,0x6
0x1401d5263: mov     r9b,0x1
0x1401d5266: lea     rcx,[rip+0x2491503]        # 0x142666770
0x1401d526d: call    0x1400bc6f0
0x1401d5272: mov     r8d,esi
0x1401d5275: mov     edx,edi
0x1401d5277: lea     rcx,[rip+0x24914f2]        # 0x142666770
0x1401d527e: call    0x1400bc6e0
0x1401d5283: lea     rdx,[rip+0x14460a6]        # 0x14161b330 ; literal='Claimed by your local government'
0x1401d528a: lea     rcx,[rbp+0x35b0]
0x1401d5291: call    0x140069710
0x1401d5296: nop     
0x1401d5297: xor     r9d,r9d
0x1401d529a: xor     r8d,r8d
0x1401d529d: lea     rdx,[rbp+0x35b0]
0x1401d52a4: lea     rcx,[rip+0x24914c5]        # 0x142666770
0x1401d52ab: call    0x140af0220
0x1401d52b0: nop     
0x1401d52b1: lea     rcx,[rbp+0x35b0]
0x1401d52b8: jmp     0x1401d5407
0x1401d52bd: cmp     QWORD PTR [r13+0x8470],0x0
0x1401d52c5: je      0x1401d53a0
0x1401d52cb: xor     r8d,r8d
0x1401d52ce: mov     edx,0x6
0x1401d52d3: mov     r9b,0x1
0x1401d52d6: lea     rcx,[rip+0x2491493]        # 0x142666770
0x1401d52dd: call    0x1400bc6f0
0x1401d52e2: mov     r8d,esi
0x1401d52e5: mov     edx,edi
0x1401d52e7: lea     rcx,[rip+0x2491482]        # 0x142666770
0x1401d52ee: call    0x1400bc6e0
0x1401d52f3: lea     rdx,[rip+0x144605e]        # 0x14161b358 ; literal='Claimed by local '
0x1401d52fa: lea     rcx,[rbp+0x35d0]
0x1401d5301: call    0x140069710
0x1401d5306: nop     
0x1401d5307: xor     r9d,r9d
0x1401d530a: mov     r8b,0x3
0x1401d530d: lea     rdx,[rbp+0x35d0]
0x1401d5314: lea     rcx,[rip+0x2491455]        # 0x142666770
0x1401d531b: call    0x140af0220
0x1401d5320: nop     
0x1401d5321: lea     rcx,[rbp+0x35d0]
0x1401d5328: call    0x1400693f0
0x1401d532d: lea     rcx,[rbp+0x330]
0x1401d5334: call    0x140073640
0x1401d5339: lea     rcx,[rbp+0x1650]
0x1401d5340: call    0x140070c50
0x1401d5345: nop     
0x1401d5346: mov     r8,QWORD PTR [r13+0x8470]
0x1401d534d: mov     eax,0x1
0x1401d5352: mov     WORD PTR [rsp+0x28],ax
0x1401d5357: mov     WORD PTR [rsp+0x20],ax
0x1401d535c: lea     r9,[rbp+0x330]
0x1401d5363: mov     r8d,DWORD PTR [r8+0xe0]
0x1401d536a: lea     rdx,[rbp+0x1650]
0x1401d5371: lea     rcx,[rip+0x2340cc0]        # 0x142516038
0x1401d5378: call    0x140ba79f0
0x1401d537d: xor     r9d,r9d
0x1401d5380: xor     r8d,r8d
0x1401d5383: lea     rdx,[rbp+0x1650]
0x1401d538a: lea     rcx,[rip+0x24913df]        # 0x142666770
0x1401d5391: call    0x140af0220
0x1401d5396: nop     
0x1401d5397: lea     rcx,[rbp+0x1650]
0x1401d539e: jmp     0x1401d5407
0x1401d53a0: cmp     QWORD PTR [r13+0x8478],0x0
0x1401d53a8: je      0x1401d540c
0x1401d53aa: xor     r8d,r8d
0x1401d53ad: mov     edx,0x6
0x1401d53b2: mov     r9b,0x1
0x1401d53b5: lea     rcx,[rip+0x24913b4]        # 0x142666770
0x1401d53bc: call    0x1400bc6f0
0x1401d53c1: mov     r8d,esi
0x1401d53c4: mov     edx,edi
0x1401d53c6: lea     rcx,[rip+0x24913a3]        # 0x142666770
0x1401d53cd: call    0x1400bc6e0
0x1401d53d2: lea     rdx,[rip+0x1445f97]        # 0x14161b370 ; literal='Claimed by local family'
0x1401d53d9: lea     rcx,[rbp+0x35f0]
0x1401d53e0: call    0x140069710
0x1401d53e5: nop     
0x1401d53e6: xor     r9d,r9d
0x1401d53e9: xor     r8d,r8d
0x1401d53ec: lea     rdx,[rbp+0x35f0]
0x1401d53f3: lea     rcx,[rip+0x2491376]        # 0x142666770
0x1401d53fa: call    0x140af0220
0x1401d53ff: nop     
0x1401d5400: lea     rcx,[rbp+0x35f0]
0x1401d5407: call    0x1400693f0
0x1401d540c: cmp     QWORD PTR [r13+0x1c0],0x0
0x1401d5414: jne     0x1401d5487
0x1401d5416: cmp     QWORD PTR [r13+0x1b8],0x0
0x1401d541e: jne     0x1401d5487
0x1401d5420: xor     r8d,r8d
0x1401d5423: xor     edx,edx
0x1401d5425: mov     r9b,0x1
0x1401d5428: lea     rcx,[rip+0x2491341]        # 0x142666770
0x1401d542f: call    0x1400bc6f0
0x1401d5434: lea     edx,[r12-0x1]
0x1401d5439: mov     r8d,esi
0x1401d543c: lea     rcx,[rip+0x249132d]        # 0x142666770
0x1401d5443: call    0x1400bc6e0
0x1401d5448: lea     rdx,[rip+0x1445641]        # 0x14161aa90 ; literal='Cannot order mission without leader'
0x1401d544f: lea     rcx,[rbp+0x3610]
0x1401d5456: call    0x140069710
0x1401d545b: nop     
0x1401d545c: xor     r9d,r9d
0x1401d545f: xor     r8d,r8d
0x1401d5462: lea     rdx,[rbp+0x3610]
0x1401d5469: lea     rcx,[rip+0x2491300]        # 0x142666770
0x1401d5470: call    0x140af0220
0x1401d5475: nop     
0x1401d5476: lea     rcx,[rbp+0x3610]
0x1401d547d: call    0x1400693f0
0x1401d5482: jmp     0x1401c8d68
0x1401d5487: movzx   r8d,WORD PTR [r13+0x19c]
0x1401d548f: movzx   edx,WORD PTR [r13+0x198]
0x1401d5497: mov     rcx,QWORD PTR [rip+0x2332a3a]        # 0x142507ed8
0x1401d549e: call    0x1401bea60
0x1401d54a3: xor     r8d,r8d
0x1401d54a6: mov     r9b,0x1
0x1401d54a9: lea     rcx,[rip+0x24912c0]        # 0x142666770
0x1401d54b0: test    eax,eax
0x1401d54b2: js      0x1401d5511
0x1401d54b4: mov     edx,0x7
0x1401d54b9: call    0x1400bc6f0
0x1401d54be: mov     r8d,esi
0x1401d54c1: lea     edx,[r12-0x1]
0x1401d54c6: lea     rcx,[rip+0x24912a3]        # 0x142666770
0x1401d54cd: call    0x1400bc6e0
0x1401d54d2: lea     rdx,[rip+0x1445eaf]        # 0x14161b388 ; literal='Click to recover (creates new mission)'
0x1401d54d9: lea     rcx,[rbp+0x3630]
0x1401d54e0: call    0x140069710
0x1401d54e5: nop     
0x1401d54e6: xor     r9d,r9d
0x1401d54e9: xor     r8d,r8d
0x1401d54ec: lea     rdx,[rbp+0x3630]
0x1401d54f3: lea     rcx,[rip+0x2491276]        # 0x142666770
0x1401d54fa: call    0x140af0220
0x1401d54ff: nop     
0x1401d5500: lea     rcx,[rbp+0x3630]
0x1401d5507: call    0x1400693f0
0x1401d550c: jmp     0x1401c8d68
0x1401d5511: xor     edx,edx
0x1401d5513: call    0x1400bc6f0
0x1401d5518: mov     r8d,esi
0x1401d551b: lea     edx,[r12-0x1]
0x1401d5520: lea     rcx,[rip+0x2491249]        # 0x142666770
0x1401d5527: call    0x1400bc6e0
0x1401d552c: lea     rdx,[rip+0x144553d]        # 0x14161aa70 ; literal='Inaccessible mission location'
0x1401d5533: lea     rcx,[rbp+0x3650]
0x1401d553a: call    0x140069710
0x1401d553f: nop     
0x1401d5540: xor     r9d,r9d
0x1401d5543: xor     r8d,r8d
0x1401d5546: lea     rdx,[rbp+0x3650]
0x1401d554d: lea     rcx,[rip+0x249121c]        # 0x142666770
0x1401d5554: call    0x140af0220
0x1401d5559: nop     
0x1401d555a: lea     rcx,[rbp+0x3650]
0x1401d5561: call    0x1400693f0
0x1401d5566: jmp     0x1401c8d68
0x1401d556b: mov     r13,r14
0x1401d556e: jmp     0x1401c8d68
0x1401d5573: cmp     r15,rsi
0x1401d5576: jne     0x1401d557c
0x1401d5578: mov     edx,DWORD PTR [rbx]
0x1401d557a: jmp     0x1401d557f
0x1401d557c: mov     edx,DWORD PTR [rbx-0xc]
0x1401d557f: lea     rcx,[rip+0x24911ea]        # 0x142666770
0x1401d5586: call    0x140af1390
0x1401d558b: inc     r14d
0x1401d558e: add     rbx,0x4
0x1401d5592: cmp     rbx,rdi
0x1401d5595: jl      0x1401c8e00
0x1401d559b: inc     r12d
0x1401d559e: inc     r15
0x1401d55a1: mov     edi,esi
0x1401d55a3: cmp     r12d,esi
0x1401d55a6: mov     ecx,DWORD PTR [rsp+0x74]
0x1401d55aa: jle     0x1401c8de6
0x1401d55b0: lea     esi,[rsi-0x12]
0x1401d55b3: mov     r13d,DWORD PTR [rbp-0x60]
0x1401d55b7: xor     r8d,r8d
0x1401d55ba: mov     edx,0x7
0x1401d55bf: mov     r9b,0x1
0x1401d55c2: lea     rcx,[rip+0x24911a7]        # 0x142666770
0x1401d55c9: call    0x1400bc6f0
0x1401d55ce: lea     r8d,[rsi+0x2]
0x1401d55d2: mov     edx,DWORD PTR [rsp+0x74]
0x1401d55d6: inc     edx
0x1401d55d8: lea     rcx,[rip+0x2491191]        # 0x142666770
0x1401d55df: call    0x1400bc6e0
0x1401d55e4: lea     rdx,[rip+0x1445dc5]        # 0x14161b3b0 ; literal='Center on fort'
0x1401d55eb: lea     rcx,[rbp+0x3670]
0x1401d55f2: call    0x140069710
0x1401d55f7: nop     
0x1401d55f8: xor     r9d,r9d
0x1401d55fb: xor     r8d,r8d
0x1401d55fe: lea     rdx,[rbp+0x3670]
0x1401d5605: lea     rcx,[rip+0x2491164]        # 0x142666770
0x1401d560c: call    0x140af0220
0x1401d5611: nop     
0x1401d5612: lea     rcx,[rbp+0x3670]
0x1401d5619: call    0x1400693f0
0x1401d561e: mov     ebx,esi
0x1401d5620: cmp     esi,edi
0x1401d5622: jg      0x1401d584f
0x1401d5628: mov     r12,QWORD PTR [rsp+0x78]
0x1401d562d: nop     DWORD PTR [rax]
0x1401d5630: mov     r8d,ebx
0x1401d5633: mov     edx,r13d
0x1401d5636: lea     rcx,[rip+0x2491133]        # 0x142666770
0x1401d563d: call    0x1400bc6e0
0x1401d5642: mov     eax,DWORD PTR [r12+0x1b4]
0x1401d564a: cmp     eax,0x2
0x1401d564d: je      0x1401d56b9
0x1401d564f: cmp     eax,0x3
0x1401d5652: je      0x1401d56b9
0x1401d5654: cmp     eax,0x8
0x1401d5657: je      0x1401d56b9
0x1401d5659: lea     rcx,[r12+0x2b8]
0x1401d5661: call    0x140070410
0x1401d5666: test    rax,rax
0x1401d5669: je      0x1401d5692
0x1401d566b: cmp     ebx,esi
0x1401d566d: jne     0x1401d5677
0x1401d566f: mov     edx,DWORD PTR [rip+0x2492b87]        # 0x1426681fc
0x1401d5675: jmp     0x1401d56d5
0x1401d5677: lea     rcx,[rip+0x24910f2]        # 0x142666770
0x1401d567e: cmp     ebx,edi
0x1401d5680: jne     0x1401d568a
0x1401d5682: mov     edx,DWORD PTR [rip+0x2492b8c]        # 0x142668214
0x1401d5688: jmp     0x1401d56dc
0x1401d568a: mov     edx,DWORD PTR [rip+0x2492b78]        # 0x142668208
0x1401d5690: jmp     0x1401d56dc
0x1401d5692: cmp     ebx,esi
0x1401d5694: jne     0x1401d569e
0x1401d5696: mov     edx,DWORD PTR [rip+0x2492ba8]        # 0x142668244
0x1401d569c: jmp     0x1401d56d5
0x1401d569e: lea     rcx,[rip+0x24910cb]        # 0x142666770
0x1401d56a5: cmp     ebx,edi
0x1401d56a7: jne     0x1401d56b1
0x1401d56a9: mov     edx,DWORD PTR [rip+0x2492bad]        # 0x14266825c
0x1401d56af: jmp     0x1401d56dc
0x1401d56b1: mov     edx,DWORD PTR [rip+0x2492b99]        # 0x142668250
0x1401d56b7: jmp     0x1401d56dc
0x1401d56b9: cmp     ebx,esi
0x1401d56bb: jne     0x1401d56c5
0x1401d56bd: mov     edx,DWORD PTR [rip+0x2492b5d]        # 0x142668220
0x1401d56c3: jmp     0x1401d56d5
0x1401d56c5: cmp     ebx,edi
0x1401d56c7: mov     edx,DWORD PTR [rip+0x2492b6b]        # 0x142668238
0x1401d56cd: je      0x1401d56d5
0x1401d56cf: mov     edx,DWORD PTR [rip+0x2492b57]        # 0x14266822c
0x1401d56d5: lea     rcx,[rip+0x2491094]        # 0x142666770
0x1401d56dc: call    0x140af1390
0x1401d56e1: mov     r8d,ebx
0x1401d56e4: lea     edx,[r13+0x1]
0x1401d56e8: lea     rcx,[rip+0x2491081]        # 0x142666770
0x1401d56ef: call    0x1400bc6e0
0x1401d56f4: mov     eax,DWORD PTR [r12+0x1b4]
0x1401d56fc: cmp     eax,0x2
0x1401d56ff: je      0x1401d576b
0x1401d5701: cmp     eax,0x3
0x1401d5704: je      0x1401d576b
0x1401d5706: cmp     eax,0x8
0x1401d5709: je      0x1401d576b
0x1401d570b: lea     rcx,[r12+0x2b8]
0x1401d5713: call    0x140070410
0x1401d5718: test    rax,rax
0x1401d571b: je      0x1401d5744
0x1401d571d: cmp     ebx,esi
0x1401d571f: jne     0x1401d5729
0x1401d5721: mov     edx,DWORD PTR [rip+0x2492ad9]        # 0x142668200
0x1401d5727: jmp     0x1401d5787
0x1401d5729: lea     rcx,[rip+0x2491040]        # 0x142666770
0x1401d5730: cmp     ebx,edi
0x1401d5732: jne     0x1401d573c
0x1401d5734: mov     edx,DWORD PTR [rip+0x2492ade]        # 0x142668218
0x1401d573a: jmp     0x1401d578e
0x1401d573c: mov     edx,DWORD PTR [rip+0x2492aca]        # 0x14266820c
0x1401d5742: jmp     0x1401d578e
0x1401d5744: cmp     ebx,esi
0x1401d5746: jne     0x1401d5750
0x1401d5748: mov     edx,DWORD PTR [rip+0x2492afa]        # 0x142668248
0x1401d574e: jmp     0x1401d5787
0x1401d5750: lea     rcx,[rip+0x2491019]        # 0x142666770
0x1401d5757: cmp     ebx,edi
0x1401d5759: jne     0x1401d5763
0x1401d575b: mov     edx,DWORD PTR [rip+0x2492aff]        # 0x142668260
0x1401d5761: jmp     0x1401d578e
0x1401d5763: mov     edx,DWORD PTR [rip+0x2492aeb]        # 0x142668254
0x1401d5769: jmp     0x1401d578e
0x1401d576b: cmp     ebx,esi
0x1401d576d: jne     0x1401d5777
0x1401d576f: mov     edx,DWORD PTR [rip+0x2492aaf]        # 0x142668224
0x1401d5775: jmp     0x1401d5787
0x1401d5777: cmp     ebx,edi
0x1401d5779: mov     edx,DWORD PTR [rip+0x2492abd]        # 0x14266823c
0x1401d577f: je      0x1401d5787
0x1401d5781: mov     edx,DWORD PTR [rip+0x2492aa9]        # 0x142668230
0x1401d5787: lea     rcx,[rip+0x2490fe2]        # 0x142666770
0x1401d578e: call    0x140af1390
0x1401d5793: mov     r8d,ebx
0x1401d5796: lea     edx,[r13+0x2]
0x1401d579a: lea     rcx,[rip+0x2490fcf]        # 0x142666770
0x1401d57a1: call    0x1400bc6e0
0x1401d57a6: mov     eax,DWORD PTR [r12+0x1b4]
0x1401d57ae: cmp     eax,0x2
0x1401d57b1: je      0x1401d581d
0x1401d57b3: cmp     eax,0x3
0x1401d57b6: je      0x1401d581d
0x1401d57b8: cmp     eax,0x8
0x1401d57bb: je      0x1401d581d
0x1401d57bd: lea     rcx,[r12+0x2b8]
0x1401d57c5: call    0x140070410
0x1401d57ca: test    rax,rax
0x1401d57cd: je      0x1401d57f6
0x1401d57cf: cmp     ebx,esi
0x1401d57d1: jne     0x1401d57db
0x1401d57d3: mov     edx,DWORD PTR [rip+0x2492a2b]        # 0x142668204
0x1401d57d9: jmp     0x1401d5839
0x1401d57db: lea     rcx,[rip+0x2490f8e]        # 0x142666770
0x1401d57e2: cmp     ebx,edi
0x1401d57e4: jne     0x1401d57ee
0x1401d57e6: mov     edx,DWORD PTR [rip+0x2492a30]        # 0x14266821c
0x1401d57ec: jmp     0x1401d5840
0x1401d57ee: mov     edx,DWORD PTR [rip+0x2492a1c]        # 0x142668210
0x1401d57f4: jmp     0x1401d5840
0x1401d57f6: cmp     ebx,esi
0x1401d57f8: jne     0x1401d5802
0x1401d57fa: mov     edx,DWORD PTR [rip+0x2492a4c]        # 0x14266824c
0x1401d5800: jmp     0x1401d5839
0x1401d5802: lea     rcx,[rip+0x2490f67]        # 0x142666770
0x1401d5809: cmp     ebx,edi
0x1401d580b: jne     0x1401d5815
0x1401d580d: mov     edx,DWORD PTR [rip+0x2492a51]        # 0x142668264
0x1401d5813: jmp     0x1401d5840
0x1401d5815: mov     edx,DWORD PTR [rip+0x2492a3d]        # 0x142668258
0x1401d581b: jmp     0x1401d5840
0x1401d581d: cmp     ebx,esi
0x1401d581f: jne     0x1401d5829
0x1401d5821: mov     edx,DWORD PTR [rip+0x2492a01]        # 0x142668228
0x1401d5827: jmp     0x1401d5839
0x1401d5829: cmp     ebx,edi
0x1401d582b: mov     edx,DWORD PTR [rip+0x2492a0f]        # 0x142668240
0x1401d5831: je      0x1401d5839
0x1401d5833: mov     edx,DWORD PTR [rip+0x24929fb]        # 0x142668234
0x1401d5839: lea     rcx,[rip+0x2490f30]        # 0x142666770
0x1401d5840: call    0x140af1390
0x1401d5845: inc     ebx
0x1401d5847: cmp     ebx,edi
0x1401d5849: jle     0x1401d5630
0x1401d584f: xor     r8d,r8d
0x1401d5852: mov     edx,0x7
0x1401d5857: mov     r9b,0x1
0x1401d585a: lea     rcx,[rip+0x2490f0f]        # 0x142666770
0x1401d5861: call    0x1400bc6f0
0x1401d5866: lea     r8d,[rsi+0x5]
0x1401d586a: lea     edx,[r13+0x1]
0x1401d586e: lea     rcx,[rip+0x2490efb]        # 0x142666770
0x1401d5875: call    0x1400bc6e0
0x1401d587a: lea     rdx,[rip+0x144588f]        # 0x14161b110 ; literal='Missions'
0x1401d5881: lea     rcx,[rbp+0x3690]
0x1401d5888: call    0x140069710
0x1401d588d: nop     
0x1401d588e: xor     r9d,r9d
0x1401d5891: xor     r8d,r8d
0x1401d5894: lea     rdx,[rbp+0x3690]
0x1401d589b: lea     rcx,[rip+0x2490ece]        # 0x142666770
0x1401d58a2: call    0x140af0220
0x1401d58a7: nop     
0x1401d58a8: lea     rcx,[rbp+0x3690]
0x1401d58af: call    0x1400693f0
0x1401d58b4: mov     ebx,esi
0x1401d58b6: mov     r13,QWORD PTR [rsp+0x78]
0x1401d58bb: cmp     esi,edi
0x1401d58bd: jg      0x1401d5a1d
0x1401d58c3: mov     eax,DWORD PTR [rbp-0x58]
0x1401d58c6: lea     r14d,[rax+0x1]
0x1401d58ca: lea     r15d,[rax+0x2]
0x1401d58ce: xchg    ax,ax
0x1401d58d0: mov     r8d,ebx
0x1401d58d3: mov     edx,eax
0x1401d58d5: lea     rcx,[rip+0x2490e94]        # 0x142666770
0x1401d58dc: call    0x1400bc6e0
0x1401d58e1: cmp     DWORD PTR [r13+0x1b4],0x4
0x1401d58e9: jne     0x1401d5912
0x1401d58eb: cmp     ebx,esi
0x1401d58ed: jne     0x1401d58f7
0x1401d58ef: mov     edx,DWORD PTR [rip+0x249292b]        # 0x142668220
0x1401d58f5: jmp     0x1401d592e
0x1401d58f7: lea     rcx,[rip+0x2490e72]        # 0x142666770
0x1401d58fe: cmp     ebx,edi
0x1401d5900: jne     0x1401d590a
0x1401d5902: mov     edx,DWORD PTR [rip+0x2492930]        # 0x142668238
0x1401d5908: jmp     0x1401d5935
0x1401d590a: mov     edx,DWORD PTR [rip+0x249291c]        # 0x14266822c
0x1401d5910: jmp     0x1401d5935
0x1401d5912: cmp     ebx,esi
0x1401d5914: jne     0x1401d591e
0x1401d5916: mov     edx,DWORD PTR [rip+0x24928e0]        # 0x1426681fc
0x1401d591c: jmp     0x1401d592e
0x1401d591e: cmp     ebx,edi
0x1401d5920: mov     edx,DWORD PTR [rip+0x24928ee]        # 0x142668214
0x1401d5926: je      0x1401d592e
0x1401d5928: mov     edx,DWORD PTR [rip+0x24928da]        # 0x142668208
0x1401d592e: lea     rcx,[rip+0x2490e3b]        # 0x142666770
0x1401d5935: call    0x140af1390
0x1401d593a: mov     r8d,ebx
0x1401d593d: mov     edx,r14d
0x1401d5940: lea     rcx,[rip+0x2490e29]        # 0x142666770
0x1401d5947: call    0x1400bc6e0
0x1401d594c: cmp     DWORD PTR [r13+0x1b4],0x4
0x1401d5954: jne     0x1401d597d
0x1401d5956: cmp     ebx,esi
0x1401d5958: jne     0x1401d5962
0x1401d595a: mov     edx,DWORD PTR [rip+0x24928c4]        # 0x142668224
0x1401d5960: jmp     0x1401d5999
0x1401d5962: lea     rcx,[rip+0x2490e07]        # 0x142666770
0x1401d5969: cmp     ebx,edi
0x1401d596b: jne     0x1401d5975
0x1401d596d: mov     edx,DWORD PTR [rip+0x24928c9]        # 0x14266823c
0x1401d5973: jmp     0x1401d59a0
0x1401d5975: mov     edx,DWORD PTR [rip+0x24928b5]        # 0x142668230
0x1401d597b: jmp     0x1401d59a0
0x1401d597d: cmp     ebx,esi
0x1401d597f: jne     0x1401d5989
0x1401d5981: mov     edx,DWORD PTR [rip+0x2492879]        # 0x142668200
0x1401d5987: jmp     0x1401d5999
0x1401d5989: cmp     ebx,edi
0x1401d598b: mov     edx,DWORD PTR [rip+0x2492887]        # 0x142668218
0x1401d5991: je      0x1401d5999
0x1401d5993: mov     edx,DWORD PTR [rip+0x2492873]        # 0x14266820c
0x1401d5999: lea     rcx,[rip+0x2490dd0]        # 0x142666770
0x1401d59a0: call    0x140af1390
0x1401d59a5: mov     r8d,ebx
0x1401d59a8: mov     edx,r15d
0x1401d59ab: lea     rcx,[rip+0x2490dbe]        # 0x142666770
0x1401d59b2: call    0x1400bc6e0
0x1401d59b7: cmp     DWORD PTR [r13+0x1b4],0x4
0x1401d59bf: jne     0x1401d59e8
0x1401d59c1: cmp     ebx,esi
0x1401d59c3: jne     0x1401d59cd
0x1401d59c5: mov     edx,DWORD PTR [rip+0x249285d]        # 0x142668228
0x1401d59cb: jmp     0x1401d5a04
0x1401d59cd: lea     rcx,[rip+0x2490d9c]        # 0x142666770
0x1401d59d4: cmp     ebx,edi
0x1401d59d6: jne     0x1401d59e0
0x1401d59d8: mov     edx,DWORD PTR [rip+0x2492862]        # 0x142668240
0x1401d59de: jmp     0x1401d5a0b
0x1401d59e0: mov     edx,DWORD PTR [rip+0x249284e]        # 0x142668234
0x1401d59e6: jmp     0x1401d5a0b
0x1401d59e8: cmp     ebx,esi
0x1401d59ea: jne     0x1401d59f4
0x1401d59ec: mov     edx,DWORD PTR [rip+0x2492812]        # 0x142668204
0x1401d59f2: jmp     0x1401d5a04
0x1401d59f4: cmp     ebx,edi
0x1401d59f6: mov     edx,DWORD PTR [rip+0x2492820]        # 0x14266821c
0x1401d59fc: je      0x1401d5a04
0x1401d59fe: mov     edx,DWORD PTR [rip+0x249280c]        # 0x142668210
0x1401d5a04: lea     rcx,[rip+0x2490d65]        # 0x142666770
0x1401d5a0b: call    0x140af1390
0x1401d5a10: inc     ebx
0x1401d5a12: cmp     ebx,edi
0x1401d5a14: mov     eax,DWORD PTR [rbp-0x58]
0x1401d5a17: jle     0x1401d58d0
0x1401d5a1d: xor     r8d,r8d
0x1401d5a20: mov     edx,0x7
0x1401d5a25: mov     r9b,0x1
0x1401d5a28: lea     rcx,[rip+0x2490d41]        # 0x142666770
0x1401d5a2f: call    0x1400bc6f0
0x1401d5a34: lea     r8d,[rsi+0x2]
0x1401d5a38: mov     edx,DWORD PTR [rbp-0x58]
0x1401d5a3b: inc     edx
0x1401d5a3d: lea     rcx,[rip+0x2490d2c]        # 0x142666770
0x1401d5a44: call    0x1400bc6e0
0x1401d5a49: lea     rdx,[rip+0x14456d0]        # 0x14161b120 ; literal='News and rumors'
0x1401d5a50: lea     rcx,[rbp+0x36b0]
0x1401d5a57: call    0x140069710
0x1401d5a5c: nop     
0x1401d5a5d: xor     r9d,r9d
0x1401d5a60: xor     r8d,r8d
0x1401d5a63: lea     rdx,[rbp+0x36b0]
0x1401d5a6a: lea     rcx,[rip+0x2490cff]        # 0x142666770
0x1401d5a71: call    0x140af0220
0x1401d5a76: nop     
0x1401d5a77: lea     rcx,[rbp+0x36b0]
0x1401d5a7e: call    0x1400693f0
0x1401d5a83: mov     ebx,esi
0x1401d5a85: cmp     esi,edi
0x1401d5a87: jg      0x1401d5bee
0x1401d5a8d: mov     eax,DWORD PTR [rsp+0x70]
0x1401d5a91: lea     r14d,[rax+0x1]
0x1401d5a95: lea     r15d,[rax+0x2]
0x1401d5a99: nop     DWORD PTR [rax+0x0]
0x1401d5aa0: mov     r8d,ebx
0x1401d5aa3: mov     edx,eax
0x1401d5aa5: lea     rcx,[rip+0x2490cc4]        # 0x142666770
0x1401d5aac: call    0x1400bc6e0
0x1401d5ab1: cmp     DWORD PTR [r13+0x1b4],0x1
0x1401d5ab9: jne     0x1401d5ae2
0x1401d5abb: cmp     ebx,esi
0x1401d5abd: jne     0x1401d5ac7
0x1401d5abf: mov     edx,DWORD PTR [rip+0x249275b]        # 0x142668220
0x1401d5ac5: jmp     0x1401d5afe
0x1401d5ac7: lea     rcx,[rip+0x2490ca2]        # 0x142666770
0x1401d5ace: cmp     ebx,edi
0x1401d5ad0: jne     0x1401d5ada
0x1401d5ad2: mov     edx,DWORD PTR [rip+0x2492760]        # 0x142668238
0x1401d5ad8: jmp     0x1401d5b05
0x1401d5ada: mov     edx,DWORD PTR [rip+0x249274c]        # 0x14266822c
0x1401d5ae0: jmp     0x1401d5b05
0x1401d5ae2: cmp     ebx,esi
0x1401d5ae4: jne     0x1401d5aee
0x1401d5ae6: mov     edx,DWORD PTR [rip+0x2492710]        # 0x1426681fc
0x1401d5aec: jmp     0x1401d5afe
0x1401d5aee: cmp     ebx,edi
0x1401d5af0: mov     edx,DWORD PTR [rip+0x249271e]        # 0x142668214
0x1401d5af6: je      0x1401d5afe
0x1401d5af8: mov     edx,DWORD PTR [rip+0x249270a]        # 0x142668208
0x1401d5afe: lea     rcx,[rip+0x2490c6b]        # 0x142666770
0x1401d5b05: call    0x140af1390
0x1401d5b0a: mov     r8d,ebx
0x1401d5b0d: mov     edx,r14d
0x1401d5b10: lea     rcx,[rip+0x2490c59]        # 0x142666770
0x1401d5b17: call    0x1400bc6e0
0x1401d5b1c: cmp     DWORD PTR [r13+0x1b4],0x1
0x1401d5b24: jne     0x1401d5b4d
0x1401d5b26: cmp     ebx,esi
0x1401d5b28: jne     0x1401d5b32
0x1401d5b2a: mov     edx,DWORD PTR [rip+0x24926f4]        # 0x142668224
0x1401d5b30: jmp     0x1401d5b69
0x1401d5b32: lea     rcx,[rip+0x2490c37]        # 0x142666770
0x1401d5b39: cmp     ebx,edi
0x1401d5b3b: jne     0x1401d5b45
0x1401d5b3d: mov     edx,DWORD PTR [rip+0x24926f9]        # 0x14266823c
0x1401d5b43: jmp     0x1401d5b70
0x1401d5b45: mov     edx,DWORD PTR [rip+0x24926e5]        # 0x142668230
0x1401d5b4b: jmp     0x1401d5b70
0x1401d5b4d: cmp     ebx,esi
0x1401d5b4f: jne     0x1401d5b59
0x1401d5b51: mov     edx,DWORD PTR [rip+0x24926a9]        # 0x142668200
0x1401d5b57: jmp     0x1401d5b69
0x1401d5b59: cmp     ebx,edi
0x1401d5b5b: mov     edx,DWORD PTR [rip+0x24926b7]        # 0x142668218
0x1401d5b61: je      0x1401d5b69
0x1401d5b63: mov     edx,DWORD PTR [rip+0x24926a3]        # 0x14266820c
0x1401d5b69: lea     rcx,[rip+0x2490c00]        # 0x142666770
0x1401d5b70: call    0x140af1390
0x1401d5b75: mov     r8d,ebx
0x1401d5b78: mov     edx,r15d
0x1401d5b7b: lea     rcx,[rip+0x2490bee]        # 0x142666770
0x1401d5b82: call    0x1400bc6e0
0x1401d5b87: cmp     DWORD PTR [r13+0x1b4],0x1
0x1401d5b8f: jne     0x1401d5bb8
0x1401d5b91: cmp     ebx,esi
0x1401d5b93: jne     0x1401d5b9d
0x1401d5b95: mov     edx,DWORD PTR [rip+0x249268d]        # 0x142668228
0x1401d5b9b: jmp     0x1401d5bd4
0x1401d5b9d: lea     rcx,[rip+0x2490bcc]        # 0x142666770
0x1401d5ba4: cmp     ebx,edi
0x1401d5ba6: jne     0x1401d5bb0
0x1401d5ba8: mov     edx,DWORD PTR [rip+0x2492692]        # 0x142668240
0x1401d5bae: jmp     0x1401d5bdb
0x1401d5bb0: mov     edx,DWORD PTR [rip+0x249267e]        # 0x142668234
0x1401d5bb6: jmp     0x1401d5bdb
0x1401d5bb8: cmp     ebx,esi
0x1401d5bba: jne     0x1401d5bc4
0x1401d5bbc: mov     edx,DWORD PTR [rip+0x2492642]        # 0x142668204
0x1401d5bc2: jmp     0x1401d5bd4
0x1401d5bc4: cmp     ebx,edi
0x1401d5bc6: mov     edx,DWORD PTR [rip+0x2492650]        # 0x14266821c
0x1401d5bcc: je      0x1401d5bd4
0x1401d5bce: mov     edx,DWORD PTR [rip+0x249263c]        # 0x142668210
0x1401d5bd4: lea     rcx,[rip+0x2490b95]        # 0x142666770
0x1401d5bdb: call    0x140af1390
0x1401d5be0: inc     ebx
0x1401d5be2: cmp     ebx,edi
0x1401d5be4: mov     eax,DWORD PTR [rsp+0x70]
0x1401d5be8: jle     0x1401d5aa0
0x1401d5bee: xor     r8d,r8d
0x1401d5bf1: mov     edx,0x7
0x1401d5bf6: mov     r9b,0x1
0x1401d5bf9: lea     rcx,[rip+0x2490b70]        # 0x142666770
0x1401d5c00: call    0x1400bc6f0
0x1401d5c05: lea     r8d,[rsi+0x3]
0x1401d5c09: mov     edx,DWORD PTR [rsp+0x70]
0x1401d5c0d: inc     edx
0x1401d5c0f: lea     rcx,[rip+0x2490b5a]        # 0x142666770
0x1401d5c16: call    0x1400bc6e0
0x1401d5c1b: lea     rdx,[rip+0x144550e]        # 0x14161b130 ; literal='Civilizations'
0x1401d5c22: lea     rcx,[rbp+0x36d0]
0x1401d5c29: call    0x140069710
0x1401d5c2e: nop     
0x1401d5c2f: xor     r9d,r9d
0x1401d5c32: xor     r8d,r8d
0x1401d5c35: lea     rdx,[rbp+0x36d0]
0x1401d5c3c: lea     rcx,[rip+0x2490b2d]        # 0x142666770
0x1401d5c43: call    0x140af0220
0x1401d5c48: nop     
0x1401d5c49: lea     rcx,[rbp+0x36d0]
0x1401d5c50: call    0x1400693f0
0x1401d5c55: mov     ebx,esi
0x1401d5c57: cmp     esi,edi
0x1401d5c59: jg      0x1401d5e65
0x1401d5c5f: mov     eax,DWORD PTR [rbp-0x48]
0x1401d5c62: lea     r14d,[rax+0x1]
0x1401d5c66: lea     r15d,[rax+0x2]
0x1401d5c6a: nop     WORD PTR [rax+rax*1+0x0]
0x1401d5c70: mov     r8d,ebx
0x1401d5c73: mov     edx,eax
0x1401d5c75: lea     rcx,[rip+0x2490af4]        # 0x142666770
0x1401d5c7c: call    0x1400bc6e0
0x1401d5c81: cmp     DWORD PTR [r13+0x1b4],0x6
0x1401d5c89: jne     0x1401d5cb2
0x1401d5c8b: cmp     ebx,esi
0x1401d5c8d: jne     0x1401d5c97
0x1401d5c8f: mov     edx,DWORD PTR [rip+0x249258b]        # 0x142668220
0x1401d5c95: jmp     0x1401d5d06
0x1401d5c97: lea     rcx,[rip+0x2490ad2]        # 0x142666770
0x1401d5c9e: cmp     ebx,edi
0x1401d5ca0: jne     0x1401d5caa
0x1401d5ca2: mov     edx,DWORD PTR [rip+0x2492590]        # 0x142668238
0x1401d5ca8: jmp     0x1401d5d0d
0x1401d5caa: mov     edx,DWORD PTR [rip+0x249257c]        # 0x14266822c
0x1401d5cb0: jmp     0x1401d5d0d
0x1401d5cb2: lea     rcx,[r13+0x83e8]
0x1401d5cb9: call    0x140070410
0x1401d5cbe: test    rax,rax
0x1401d5cc1: je      0x1401d5cea
0x1401d5cc3: cmp     ebx,esi
0x1401d5cc5: jne     0x1401d5ccf
0x1401d5cc7: mov     edx,DWORD PTR [rip+0x249252f]        # 0x1426681fc
0x1401d5ccd: jmp     0x1401d5d06
0x1401d5ccf: lea     rcx,[rip+0x2490a9a]        # 0x142666770
0x1401d5cd6: cmp     ebx,edi
0x1401d5cd8: jne     0x1401d5ce2
0x1401d5cda: mov     edx,DWORD PTR [rip+0x2492534]        # 0x142668214
0x1401d5ce0: jmp     0x1401d5d0d
0x1401d5ce2: mov     edx,DWORD PTR [rip+0x2492520]        # 0x142668208
0x1401d5ce8: jmp     0x1401d5d0d
0x1401d5cea: cmp     ebx,esi
0x1401d5cec: jne     0x1401d5cf6
0x1401d5cee: mov     edx,DWORD PTR [rip+0x2492550]        # 0x142668244
0x1401d5cf4: jmp     0x1401d5d06
0x1401d5cf6: cmp     ebx,edi
0x1401d5cf8: mov     edx,DWORD PTR [rip+0x249255e]        # 0x14266825c
0x1401d5cfe: je      0x1401d5d06
0x1401d5d00: mov     edx,DWORD PTR [rip+0x249254a]        # 0x142668250
0x1401d5d06: lea     rcx,[rip+0x2490a63]        # 0x142666770
0x1401d5d0d: call    0x140af1390
0x1401d5d12: mov     r8d,ebx
0x1401d5d15: mov     edx,r14d
0x1401d5d18: lea     rcx,[rip+0x2490a51]        # 0x142666770
0x1401d5d1f: call    0x1400bc6e0
0x1401d5d24: cmp     DWORD PTR [r13+0x1b4],0x6
0x1401d5d2c: jne     0x1401d5d55
0x1401d5d2e: cmp     ebx,esi
0x1401d5d30: jne     0x1401d5d3a
0x1401d5d32: mov     edx,DWORD PTR [rip+0x24924ec]        # 0x142668224
0x1401d5d38: jmp     0x1401d5da9
0x1401d5d3a: lea     rcx,[rip+0x2490a2f]        # 0x142666770
0x1401d5d41: cmp     ebx,edi
0x1401d5d43: jne     0x1401d5d4d
0x1401d5d45: mov     edx,DWORD PTR [rip+0x24924f1]        # 0x14266823c
0x1401d5d4b: jmp     0x1401d5db0
0x1401d5d4d: mov     edx,DWORD PTR [rip+0x24924dd]        # 0x142668230
0x1401d5d53: jmp     0x1401d5db0
0x1401d5d55: lea     rcx,[r13+0x83e8]
0x1401d5d5c: call    0x140070410
0x1401d5d61: test    rax,rax
0x1401d5d64: je      0x1401d5d8d
0x1401d5d66: cmp     ebx,esi
0x1401d5d68: jne     0x1401d5d72
0x1401d5d6a: mov     edx,DWORD PTR [rip+0x2492490]        # 0x142668200
0x1401d5d70: jmp     0x1401d5da9
0x1401d5d72: lea     rcx,[rip+0x24909f7]        # 0x142666770
0x1401d5d79: cmp     ebx,edi
0x1401d5d7b: jne     0x1401d5d85
0x1401d5d7d: mov     edx,DWORD PTR [rip+0x2492495]        # 0x142668218
0x1401d5d83: jmp     0x1401d5db0
0x1401d5d85: mov     edx,DWORD PTR [rip+0x2492481]        # 0x14266820c
0x1401d5d8b: jmp     0x1401d5db0
0x1401d5d8d: cmp     ebx,esi
0x1401d5d8f: jne     0x1401d5d99
0x1401d5d91: mov     edx,DWORD PTR [rip+0x24924b1]        # 0x142668248
0x1401d5d97: jmp     0x1401d5da9
0x1401d5d99: cmp     ebx,edi
0x1401d5d9b: mov     edx,DWORD PTR [rip+0x24924bf]        # 0x142668260
0x1401d5da1: je      0x1401d5da9
0x1401d5da3: mov     edx,DWORD PTR [rip+0x24924ab]        # 0x142668254
0x1401d5da9: lea     rcx,[rip+0x24909c0]        # 0x142666770
0x1401d5db0: call    0x140af1390
0x1401d5db5: mov     r8d,ebx
0x1401d5db8: mov     edx,r15d
0x1401d5dbb: lea     rcx,[rip+0x24909ae]        # 0x142666770
0x1401d5dc2: call    0x1400bc6e0
0x1401d5dc7: cmp     DWORD PTR [r13+0x1b4],0x6
0x1401d5dcf: jne     0x1401d5df8
0x1401d5dd1: cmp     ebx,esi
0x1401d5dd3: jne     0x1401d5ddd
0x1401d5dd5: mov     edx,DWORD PTR [rip+0x249244d]        # 0x142668228
0x1401d5ddb: jmp     0x1401d5e4c
0x1401d5ddd: lea     rcx,[rip+0x249098c]        # 0x142666770
0x1401d5de4: cmp     ebx,edi
0x1401d5de6: jne     0x1401d5df0
0x1401d5de8: mov     edx,DWORD PTR [rip+0x2492452]        # 0x142668240
0x1401d5dee: jmp     0x1401d5e53
0x1401d5df0: mov     edx,DWORD PTR [rip+0x249243e]        # 0x142668234
0x1401d5df6: jmp     0x1401d5e53
0x1401d5df8: lea     rcx,[r13+0x83e8]
0x1401d5dff: call    0x140070410
0x1401d5e04: test    rax,rax
0x1401d5e07: je      0x1401d5e30
0x1401d5e09: cmp     ebx,esi
0x1401d5e0b: jne     0x1401d5e15
0x1401d5e0d: mov     edx,DWORD PTR [rip+0x24923f1]        # 0x142668204
0x1401d5e13: jmp     0x1401d5e4c
0x1401d5e15: lea     rcx,[rip+0x2490954]        # 0x142666770
0x1401d5e1c: cmp     ebx,edi
0x1401d5e1e: jne     0x1401d5e28
0x1401d5e20: mov     edx,DWORD PTR [rip+0x24923f6]        # 0x14266821c
0x1401d5e26: jmp     0x1401d5e53
0x1401d5e28: mov     edx,DWORD PTR [rip+0x24923e2]        # 0x142668210
0x1401d5e2e: jmp     0x1401d5e53
0x1401d5e30: cmp     ebx,esi
0x1401d5e32: jne     0x1401d5e3c
0x1401d5e34: mov     edx,DWORD PTR [rip+0x2492412]        # 0x14266824c
0x1401d5e3a: jmp     0x1401d5e4c
0x1401d5e3c: cmp     ebx,edi
0x1401d5e3e: mov     edx,DWORD PTR [rip+0x2492420]        # 0x142668264
0x1401d5e44: je      0x1401d5e4c
0x1401d5e46: mov     edx,DWORD PTR [rip+0x249240c]        # 0x142668258
0x1401d5e4c: lea     rcx,[rip+0x249091d]        # 0x142666770
0x1401d5e53: call    0x140af1390
0x1401d5e58: inc     ebx
0x1401d5e5a: cmp     ebx,edi
0x1401d5e5c: mov     eax,DWORD PTR [rbp-0x48]
0x1401d5e5f: jle     0x1401d5c70
0x1401d5e65: xor     r8d,r8d
0x1401d5e68: mov     edx,0x7
0x1401d5e6d: mov     r9b,0x1
0x1401d5e70: lea     rcx,[rip+0x24908f9]        # 0x142666770
0x1401d5e77: call    0x1400bc6f0
0x1401d5e7c: lea     r8d,[rsi+0x1]
0x1401d5e80: mov     edx,DWORD PTR [rbp-0x48]
0x1401d5e83: inc     edx
0x1401d5e85: lea     rcx,[rip+0x24908e4]        # 0x142666770
0x1401d5e8c: call    0x1400bc6e0
0x1401d5e91: lea     rdx,[rip+0x14452a8]        # 0x14161b140 ; literal='Missing citizens'
0x1401d5e98: lea     rcx,[rbp+0x36f0]
0x1401d5e9f: call    0x140069710
0x1401d5ea4: nop     
0x1401d5ea5: xor     r9d,r9d
0x1401d5ea8: xor     r8d,r8d
0x1401d5eab: lea     rdx,[rbp+0x36f0]
0x1401d5eb2: lea     rcx,[rip+0x24908b7]        # 0x142666770
0x1401d5eb9: call    0x140af0220
0x1401d5ebe: nop     
0x1401d5ebf: lea     rcx,[rbp+0x36f0]
0x1401d5ec6: call    0x1400693f0
0x1401d5ecb: mov     ebx,esi
0x1401d5ecd: cmp     esi,edi
0x1401d5ecf: jg      0x1401d60d5
0x1401d5ed5: mov     eax,DWORD PTR [rbp-0x6c]
0x1401d5ed8: lea     r14d,[rax+0x1]
0x1401d5edc: lea     r15d,[rax+0x2]
0x1401d5ee0: mov     r8d,ebx
0x1401d5ee3: mov     edx,eax
0x1401d5ee5: lea     rcx,[rip+0x2490884]        # 0x142666770
0x1401d5eec: call    0x1400bc6e0
0x1401d5ef1: cmp     DWORD PTR [r13+0x1b4],0x7
0x1401d5ef9: jne     0x1401d5f22
0x1401d5efb: cmp     ebx,esi
0x1401d5efd: jne     0x1401d5f07
0x1401d5eff: mov     edx,DWORD PTR [rip+0x249231b]        # 0x142668220
0x1401d5f05: jmp     0x1401d5f76
0x1401d5f07: lea     rcx,[rip+0x2490862]        # 0x142666770
0x1401d5f0e: cmp     ebx,edi
0x1401d5f10: jne     0x1401d5f1a
0x1401d5f12: mov     edx,DWORD PTR [rip+0x2492320]        # 0x142668238
0x1401d5f18: jmp     0x1401d5f7d
0x1401d5f1a: mov     edx,DWORD PTR [rip+0x249230c]        # 0x14266822c
0x1401d5f20: jmp     0x1401d5f7d
0x1401d5f22: lea     rcx,[r13+0x8410]
0x1401d5f29: call    0x140070410
0x1401d5f2e: test    rax,rax
0x1401d5f31: je      0x1401d5f5a
0x1401d5f33: cmp     ebx,esi
0x1401d5f35: jne     0x1401d5f3f
0x1401d5f37: mov     edx,DWORD PTR [rip+0x24922bf]        # 0x1426681fc
0x1401d5f3d: jmp     0x1401d5f76
0x1401d5f3f: lea     rcx,[rip+0x249082a]        # 0x142666770
0x1401d5f46: cmp     ebx,edi
0x1401d5f48: jne     0x1401d5f52
0x1401d5f4a: mov     edx,DWORD PTR [rip+0x24922c4]        # 0x142668214
0x1401d5f50: jmp     0x1401d5f7d
0x1401d5f52: mov     edx,DWORD PTR [rip+0x24922b0]        # 0x142668208
0x1401d5f58: jmp     0x1401d5f7d
0x1401d5f5a: cmp     ebx,esi
0x1401d5f5c: jne     0x1401d5f66
0x1401d5f5e: mov     edx,DWORD PTR [rip+0x24922e0]        # 0x142668244
0x1401d5f64: jmp     0x1401d5f76
0x1401d5f66: cmp     ebx,edi
0x1401d5f68: mov     edx,DWORD PTR [rip+0x24922ee]        # 0x14266825c
0x1401d5f6e: je      0x1401d5f76
0x1401d5f70: mov     edx,DWORD PTR [rip+0x24922da]        # 0x142668250
0x1401d5f76: lea     rcx,[rip+0x24907f3]        # 0x142666770
0x1401d5f7d: call    0x140af1390
0x1401d5f82: mov     r8d,ebx
0x1401d5f85: mov     edx,r14d
0x1401d5f88: lea     rcx,[rip+0x24907e1]        # 0x142666770
0x1401d5f8f: call    0x1400bc6e0
0x1401d5f94: cmp     DWORD PTR [r13+0x1b4],0x7
0x1401d5f9c: jne     0x1401d5fc5
0x1401d5f9e: cmp     ebx,esi
0x1401d5fa0: jne     0x1401d5faa
0x1401d5fa2: mov     edx,DWORD PTR [rip+0x249227c]        # 0x142668224
0x1401d5fa8: jmp     0x1401d6019
0x1401d5faa: lea     rcx,[rip+0x24907bf]        # 0x142666770
0x1401d5fb1: cmp     ebx,edi
0x1401d5fb3: jne     0x1401d5fbd
0x1401d5fb5: mov     edx,DWORD PTR [rip+0x2492281]        # 0x14266823c
0x1401d5fbb: jmp     0x1401d6020
0x1401d5fbd: mov     edx,DWORD PTR [rip+0x249226d]        # 0x142668230
0x1401d5fc3: jmp     0x1401d6020
0x1401d5fc5: lea     rcx,[r13+0x8410]
0x1401d5fcc: call    0x140070410
0x1401d5fd1: test    rax,rax
0x1401d5fd4: je      0x1401d5ffd
0x1401d5fd6: cmp     ebx,esi
0x1401d5fd8: jne     0x1401d5fe2
0x1401d5fda: mov     edx,DWORD PTR [rip+0x2492220]        # 0x142668200
0x1401d5fe0: jmp     0x1401d6019
0x1401d5fe2: lea     rcx,[rip+0x2490787]        # 0x142666770
0x1401d5fe9: cmp     ebx,edi
0x1401d5feb: jne     0x1401d5ff5
0x1401d5fed: mov     edx,DWORD PTR [rip+0x2492225]        # 0x142668218
0x1401d5ff3: jmp     0x1401d6020
0x1401d5ff5: mov     edx,DWORD PTR [rip+0x2492211]        # 0x14266820c
0x1401d5ffb: jmp     0x1401d6020
0x1401d5ffd: cmp     ebx,esi
0x1401d5fff: jne     0x1401d6009
0x1401d6001: mov     edx,DWORD PTR [rip+0x2492241]        # 0x142668248
0x1401d6007: jmp     0x1401d6019
0x1401d6009: cmp     ebx,edi
0x1401d600b: mov     edx,DWORD PTR [rip+0x249224f]        # 0x142668260
0x1401d6011: je      0x1401d6019
0x1401d6013: mov     edx,DWORD PTR [rip+0x249223b]        # 0x142668254
0x1401d6019: lea     rcx,[rip+0x2490750]        # 0x142666770
0x1401d6020: call    0x140af1390
0x1401d6025: mov     r8d,ebx
0x1401d6028: mov     edx,r15d
0x1401d602b: lea     rcx,[rip+0x249073e]        # 0x142666770
0x1401d6032: call    0x1400bc6e0
0x1401d6037: cmp     DWORD PTR [r13+0x1b4],0x7
0x1401d603f: jne     0x1401d6068
0x1401d6041: cmp     ebx,esi
0x1401d6043: jne     0x1401d604d
0x1401d6045: mov     edx,DWORD PTR [rip+0x24921dd]        # 0x142668228
0x1401d604b: jmp     0x1401d60bc
0x1401d604d: lea     rcx,[rip+0x249071c]        # 0x142666770
0x1401d6054: cmp     ebx,edi
0x1401d6056: jne     0x1401d6060
0x1401d6058: mov     edx,DWORD PTR [rip+0x24921e2]        # 0x142668240
0x1401d605e: jmp     0x1401d60c3
0x1401d6060: mov     edx,DWORD PTR [rip+0x24921ce]        # 0x142668234
0x1401d6066: jmp     0x1401d60c3
0x1401d6068: lea     rcx,[r13+0x8410]
0x1401d606f: call    0x140070410
0x1401d6074: test    rax,rax
0x1401d6077: je      0x1401d60a0
0x1401d6079: cmp     ebx,esi
0x1401d607b: jne     0x1401d6085
0x1401d607d: mov     edx,DWORD PTR [rip+0x2492181]        # 0x142668204
0x1401d6083: jmp     0x1401d60bc
0x1401d6085: lea     rcx,[rip+0x24906e4]        # 0x142666770
0x1401d608c: cmp     ebx,edi
0x1401d608e: jne     0x1401d6098
0x1401d6090: mov     edx,DWORD PTR [rip+0x2492186]        # 0x14266821c
0x1401d6096: jmp     0x1401d60c3
0x1401d6098: mov     edx,DWORD PTR [rip+0x2492172]        # 0x142668210
0x1401d609e: jmp     0x1401d60c3
0x1401d60a0: cmp     ebx,esi
0x1401d60a2: jne     0x1401d60ac
0x1401d60a4: mov     edx,DWORD PTR [rip+0x24921a2]        # 0x14266824c
0x1401d60aa: jmp     0x1401d60bc
0x1401d60ac: cmp     ebx,edi
0x1401d60ae: mov     edx,DWORD PTR [rip+0x24921b0]        # 0x142668264
0x1401d60b4: je      0x1401d60bc
0x1401d60b6: mov     edx,DWORD PTR [rip+0x249219c]        # 0x142668258
0x1401d60bc: lea     rcx,[rip+0x24906ad]        # 0x142666770
0x1401d60c3: call    0x140af1390
0x1401d60c8: inc     ebx
0x1401d60ca: cmp     ebx,edi
0x1401d60cc: mov     eax,DWORD PTR [rbp-0x6c]
0x1401d60cf: jle     0x1401d5ee0
0x1401d60d5: xor     r8d,r8d
0x1401d60d8: mov     edx,0x7
0x1401d60dd: mov     r9b,0x1
0x1401d60e0: lea     rcx,[rip+0x2490689]        # 0x142666770
0x1401d60e7: call    0x1400bc6f0
0x1401d60ec: lea     r8d,[rsi+0x5]
0x1401d60f0: mov     edx,DWORD PTR [rbp-0x6c]
0x1401d60f3: inc     edx
0x1401d60f5: lea     rcx,[rip+0x2490674]        # 0x142666770
0x1401d60fc: call    0x1400bc6e0
0x1401d6101: lea     rdx,[rip+0x142c370]        # 0x141602478 ; literal='Artifacts'
0x1401d6108: lea     rcx,[rbp+0x3710]
0x1401d610f: call    0x140069710
0x1401d6114: nop     
0x1401d6115: xor     r9d,r9d
0x1401d6118: xor     r8d,r8d
0x1401d611b: lea     rdx,[rbp+0x3710]
0x1401d6122: lea     rcx,[rip+0x2490647]        # 0x142666770
0x1401d6129: call    0x140af0220
0x1401d612e: nop     
0x1401d612f: lea     rcx,[rbp+0x3710]
0x1401d6136: call    0x1400693f0
0x1401d613b: mov     r14d,esi
0x1401d613e: cmp     esi,edi
0x1401d6140: jg      0x1401d6390
0x1401d6146: mov     eax,DWORD PTR [rbp-0x70]
0x1401d6149: lea     r15d,[rax+0x1]
0x1401d614d: lea     r12d,[rax+0x2]
0x1401d6151: mov     r8d,r14d
0x1401d6154: mov     edx,eax
0x1401d6156: lea     rcx,[rip+0x2490613]        # 0x142666770
0x1401d615d: call    0x1400bc6e0
0x1401d6162: cmp     DWORD PTR [r13+0x1b4],0x5
0x1401d616a: jne     0x1401d6198
0x1401d616c: cmp     r14d,esi
0x1401d616f: jne     0x1401d617c
0x1401d6171: mov     edx,DWORD PTR [rip+0x24920a9]        # 0x142668220
0x1401d6177: jmp     0x1401d61ff
0x1401d617c: lea     rcx,[rip+0x24905ed]        # 0x142666770
0x1401d6183: cmp     r14d,edi
0x1401d6186: jne     0x1401d6190
0x1401d6188: mov     edx,DWORD PTR [rip+0x24920aa]        # 0x142668238
0x1401d618e: jmp     0x1401d6206
0x1401d6190: mov     edx,DWORD PTR [rip+0x2492096]        # 0x14266822c
0x1401d6196: jmp     0x1401d6206
0x1401d6198: lea     rcx,[r13+0x8348]
0x1401d619f: call    0x140070930
0x1401d61a4: mov     rbx,rax
0x1401d61a7: lea     rcx,[r13+0x8330]
0x1401d61ae: call    0x140070930
0x1401d61b3: add     rbx,rax
0x1401d61b6: je      0x1401d61e1
0x1401d61b8: cmp     r14d,esi
0x1401d61bb: jne     0x1401d61c5
0x1401d61bd: mov     edx,DWORD PTR [rip+0x2492039]        # 0x1426681fc
0x1401d61c3: jmp     0x1401d61ff
0x1401d61c5: lea     rcx,[rip+0x24905a4]        # 0x142666770
0x1401d61cc: cmp     r14d,edi
0x1401d61cf: jne     0x1401d61d9
0x1401d61d1: mov     edx,DWORD PTR [rip+0x249203d]        # 0x142668214
0x1401d61d7: jmp     0x1401d6206
0x1401d61d9: mov     edx,DWORD PTR [rip+0x2492029]        # 0x142668208
0x1401d61df: jmp     0x1401d6206
0x1401d61e1: cmp     r14d,esi
0x1401d61e4: jne     0x1401d61ee
0x1401d61e6: mov     edx,DWORD PTR [rip+0x2492058]        # 0x142668244
0x1401d61ec: jmp     0x1401d61ff
0x1401d61ee: cmp     r14d,edi
0x1401d61f1: mov     edx,DWORD PTR [rip+0x2492065]        # 0x14266825c
0x1401d61f7: je      0x1401d61ff
0x1401d61f9: mov     edx,DWORD PTR [rip+0x2492051]        # 0x142668250
0x1401d61ff: lea     rcx,[rip+0x249056a]        # 0x142666770
0x1401d6206: call    0x140af1390
0x1401d620b: mov     r8d,r14d
0x1401d620e: mov     edx,r15d
0x1401d6211: lea     rcx,[rip+0x2490558]        # 0x142666770
0x1401d6218: call    0x1400bc6e0
0x1401d621d: cmp     DWORD PTR [r13+0x1b4],0x5
0x1401d6225: jne     0x1401d6253
0x1401d6227: cmp     r14d,esi
0x1401d622a: jne     0x1401d6237
0x1401d622c: mov     edx,DWORD PTR [rip+0x2491ff2]        # 0x142668224
0x1401d6232: jmp     0x1401d62ba
0x1401d6237: lea     rcx,[rip+0x2490532]        # 0x142666770
0x1401d623e: cmp     r14d,edi
0x1401d6241: jne     0x1401d624b
0x1401d6243: mov     edx,DWORD PTR [rip+0x2491ff3]        # 0x14266823c
0x1401d6249: jmp     0x1401d62c1
0x1401d624b: mov     edx,DWORD PTR [rip+0x2491fdf]        # 0x142668230
0x1401d6251: jmp     0x1401d62c1
0x1401d6253: lea     rcx,[r13+0x8348]
0x1401d625a: call    0x140070930
0x1401d625f: mov     rbx,rax
0x1401d6262: lea     rcx,[r13+0x8330]
0x1401d6269: call    0x140070930
0x1401d626e: add     rbx,rax
0x1401d6271: je      0x1401d629c
0x1401d6273: cmp     r14d,esi
0x1401d6276: jne     0x1401d6280
0x1401d6278: mov     edx,DWORD PTR [rip+0x2491f82]        # 0x142668200
0x1401d627e: jmp     0x1401d62ba
0x1401d6280: lea     rcx,[rip+0x24904e9]        # 0x142666770
0x1401d6287: cmp     r14d,edi
0x1401d628a: jne     0x1401d6294
0x1401d628c: mov     edx,DWORD PTR [rip+0x2491f86]        # 0x142668218
0x1401d6292: jmp     0x1401d62c1
0x1401d6294: mov     edx,DWORD PTR [rip+0x2491f72]        # 0x14266820c
0x1401d629a: jmp     0x1401d62c1
0x1401d629c: cmp     r14d,esi
0x1401d629f: jne     0x1401d62a9
0x1401d62a1: mov     edx,DWORD PTR [rip+0x2491fa1]        # 0x142668248
0x1401d62a7: jmp     0x1401d62ba
0x1401d62a9: cmp     r14d,edi
0x1401d62ac: mov     edx,DWORD PTR [rip+0x2491fae]        # 0x142668260
0x1401d62b2: je      0x1401d62ba
0x1401d62b4: mov     edx,DWORD PTR [rip+0x2491f9a]        # 0x142668254
0x1401d62ba: lea     rcx,[rip+0x24904af]        # 0x142666770
0x1401d62c1: call    0x140af1390
0x1401d62c6: mov     r8d,r14d
0x1401d62c9: mov     edx,r12d
0x1401d62cc: lea     rcx,[rip+0x249049d]        # 0x142666770
0x1401d62d3: call    0x1400bc6e0
0x1401d62d8: cmp     DWORD PTR [r13+0x1b4],0x5
0x1401d62e0: jne     0x1401d630e
0x1401d62e2: cmp     r14d,esi
0x1401d62e5: jne     0x1401d62f2
0x1401d62e7: mov     edx,DWORD PTR [rip+0x2491f3b]        # 0x142668228
0x1401d62ed: jmp     0x1401d6375
0x1401d62f2: lea     rcx,[rip+0x2490477]        # 0x142666770
0x1401d62f9: cmp     r14d,edi
0x1401d62fc: jne     0x1401d6306
0x1401d62fe: mov     edx,DWORD PTR [rip+0x2491f3c]        # 0x142668240
0x1401d6304: jmp     0x1401d637c
0x1401d6306: mov     edx,DWORD PTR [rip+0x2491f28]        # 0x142668234
0x1401d630c: jmp     0x1401d637c
0x1401d630e: lea     rcx,[r13+0x8348]
0x1401d6315: call    0x140070930
0x1401d631a: mov     rbx,rax
0x1401d631d: lea     rcx,[r13+0x8330]
0x1401d6324: call    0x140070930
0x1401d6329: add     rbx,rax
0x1401d632c: je      0x1401d6357
0x1401d632e: cmp     r14d,esi
0x1401d6331: jne     0x1401d633b
0x1401d6333: mov     edx,DWORD PTR [rip+0x2491ecb]        # 0x142668204
0x1401d6339: jmp     0x1401d6375
0x1401d633b: lea     rcx,[rip+0x249042e]        # 0x142666770
0x1401d6342: cmp     r14d,edi
0x1401d6345: jne     0x1401d634f
0x1401d6347: mov     edx,DWORD PTR [rip+0x2491ecf]        # 0x14266821c
0x1401d634d: jmp     0x1401d637c
0x1401d634f: mov     edx,DWORD PTR [rip+0x2491ebb]        # 0x142668210
0x1401d6355: jmp     0x1401d637c
0x1401d6357: cmp     r14d,esi
0x1401d635a: jne     0x1401d6364
0x1401d635c: mov     edx,DWORD PTR [rip+0x2491eea]        # 0x14266824c
0x1401d6362: jmp     0x1401d6375
0x1401d6364: cmp     r14d,edi
0x1401d6367: mov     edx,DWORD PTR [rip+0x2491ef7]        # 0x142668264
0x1401d636d: je      0x1401d6375
0x1401d636f: mov     edx,DWORD PTR [rip+0x2491ee3]        # 0x142668258
0x1401d6375: lea     rcx,[rip+0x24903f4]        # 0x142666770
0x1401d637c: call    0x140af1390
0x1401d6381: inc     r14d
0x1401d6384: cmp     r14d,edi
0x1401d6387: mov     eax,DWORD PTR [rbp-0x70]
0x1401d638a: jle     0x1401d6151
0x1401d6390: xor     r8d,r8d
0x1401d6393: mov     edx,0x7
0x1401d6398: mov     r9b,0x1
0x1401d639b: lea     rcx,[rip+0x24903ce]        # 0x142666770
0x1401d63a2: call    0x1400bc6f0
0x1401d63a7: lea     r8d,[rsi+0x6]
0x1401d63ab: mov     edx,DWORD PTR [rbp-0x70]
0x1401d63ae: inc     edx
0x1401d63b0: lea     rcx,[rip+0x24903b9]        # 0x142666770
0x1401d63b7: call    0x1400bc6e0
0x1401d63bc: lea     rdx,[rip+0x1444d95]        # 0x14161b158 ; literal='Reports'
0x1401d63c3: lea     rcx,[rbp+0x3730]
0x1401d63ca: call    0x140069710
0x1401d63cf: nop     
0x1401d63d0: xor     r9d,r9d
0x1401d63d3: xor     r8d,r8d
0x1401d63d6: lea     rdx,[rbp+0x3730]
0x1401d63dd: lea     rcx,[rip+0x249038c]        # 0x142666770
0x1401d63e4: call    0x140af0220
0x1401d63e9: nop     
0x1401d63ea: lea     rcx,[rbp+0x3730]
0x1401d63f1: call    0x1400693f0
0x1401d63f6: lea     eax,[rdi-0x7]
0x1401d63f9: mov     r15d,eax
0x1401d63fc: cmp     eax,edi
0x1401d63fe: jg      0x1401d646b
0x1401d6400: movsxd  r12,eax
0x1401d6403: movsxd  r13,edi
0x1401d6406: mov     r14,r12
0x1401d6409: nop     DWORD PTR [rax+0x0]
0x1401d6410: mov     esi,DWORD PTR [rbp-0x10]
0x1401d6413: lea     rbx,[rip+0x2491dfa]        # 0x142668214
0x1401d641a: lea     rdi,[rip+0x2491dff]        # 0x142668220
0x1401d6421: mov     r8d,r15d
0x1401d6424: mov     edx,esi
0x1401d6426: lea     rcx,[rip+0x2490343]        # 0x142666770
0x1401d642d: call    0x1400bc6e0
0x1401d6432: cmp     r14,r12
0x1401d6435: jne     0x1401d643c
0x1401d6437: mov     edx,DWORD PTR [rbx-0x18]
0x1401d643a: jmp     0x1401d6448
0x1401d643c: cmp     r14,r13
0x1401d643f: jne     0x1401d6445
0x1401d6441: mov     edx,DWORD PTR [rbx]
0x1401d6443: jmp     0x1401d6448
0x1401d6445: mov     edx,DWORD PTR [rbx-0xc]
0x1401d6448: lea     rcx,[rip+0x2490321]        # 0x142666770
0x1401d644f: call    0x140af1390
0x1401d6454: inc     esi
0x1401d6456: add     rbx,0x4
0x1401d645a: cmp     rbx,rdi
0x1401d645d: jl      0x1401d6421
0x1401d645f: inc     r15d
0x1401d6462: inc     r14
0x1401d6465: cmp     r15d,DWORD PTR [rbp-0x68]
0x1401d6469: jle     0x1401d6410
0x1401d646b: xor     r8d,r8d
0x1401d646e: mov     edx,0x7
0x1401d6473: mov     r9b,0x1
0x1401d6476: lea     rcx,[rip+0x24902f3]        # 0x142666770
0x1401d647d: call    0x1400bc6f0
0x1401d6482: mov     r8d,DWORD PTR [rbp-0x28]
0x1401d6486: add     r8d,0x2
0x1401d648a: mov     edx,DWORD PTR [rbp-0x10]
0x1401d648d: inc     edx
0x1401d648f: lea     rcx,[rip+0x24902da]        # 0x142666770
0x1401d6496: call    0x1400bc6e0
0x1401d649b: lea     rdx,[rip+0x1444cbe]        # 0x14161b160 ; literal='Done'
0x1401d64a2: lea     rcx,[rbp+0x3750]
0x1401d64a9: call    0x140069710
0x1401d64ae: nop     
0x1401d64af: xor     r9d,r9d
0x1401d64b2: xor     r8d,r8d
0x1401d64b5: lea     rdx,[rbp+0x3750]
0x1401d64bc: lea     rcx,[rip+0x24902ad]        # 0x142666770
0x1401d64c3: call    0x140af0220
0x1401d64c8: nop     
0x1401d64c9: lea     rcx,[rbp+0x3750]
0x1401d64d0: call    0x1400693f0
0x1401d64d5: cmp     BYTE PTR [rip+0x16ed0fc],0x0        # 0x1418c35d8
0x1401d64dc: je      0x1401d64ea
0x1401d64de: lea     rcx,[rip+0x16ed0f3]        # 0x1418c35d8
0x1401d64e5: call    0x1401eb660
0x1401d64ea: mov     rcx,QWORD PTR [rbp+0x38b0]
0x1401d64f1: xor     rcx,rsp
0x1401d64f4: call    0x14154de00
0x1401d64f9: lea     r11,[rsp+0x39c0]
0x1401d6501: mov     rbx,QWORD PTR [r11+0x38]
0x1401d6505: mov     rsi,QWORD PTR [r11+0x40]
0x1401d6509: mov     rdi,QWORD PTR [r11+0x48]
0x1401d650d: mov     rsp,r11
0x1401d6510: pop     r15
0x1401d6512: pop     r14
0x1401d6514: pop     r13
0x1401d6516: pop     r12
0x1401d6518: pop     rbp
0x1401d6519: ret     
0x1401d651a: xchg    ax,ax
0x1401d651c: data16  rex.W sbb al,0x0
0x1401d6520: shl     BYTE PTR [rsi+0x1c],cl
0x1401d6523: add     BYTE PTR [rdi+0x13001c8e],cl
0x1401d6529: mov     ecx,0xe81001c
0x1401d652e: sbb     eax,0x1d28e100
0x1401d6533: add     BYTE PTR [rdi+0x3c],al
0x1401d6536: sbb     eax,0x1d471b00
0x1401d653b: add     BYTE PTR [rcx-0x5e],bh
0x1401d653e: sbb     al,0x0
0x1401d6540: xchg    DWORD PTR [rsp+rbx*1+0x0],ebx
0x1401d6544: or      al,0x5d
0x1401d6546: sbb     al,0x0
0x1401d6548: add     bl,BYTE PTR [rsi+0x1c]
0x1401d654b: add     BYTE PTR [rbx+0x5d],cl
0x1401d654e: sbb     al,0x0
0x1401d6550: mov     bl,BYTE PTR [rbp+0x1c]
0x1401d6553: add     dh,al
0x1401d6555: pop     rbp
0x1401d6556: sbb     al,0x0
0x1401d6558: out     0x92,al
0x1401d655a: sbb     al,0x0
0x1401d655c: out     dx,eax
0x1401d655d: xchg    edx,eax
0x1401d655e: sbb     al,0x0
0x1401d6560: clc     
0x1401d6561: xchg    edx,eax
0x1401d6562: sbb     al,0x0
0x1401d6564: fst     QWORD PTR [rdx-0x6cfeffe4]
0x1401d656a: sbb     al,0x0
0x1401d656c: retf    
0x1401d656d: xchg    edx,eax
0x1401d656e: sbb     al,0x0
0x1401d6571: xchg    edx,eax
0x1401d6572: sbb     al,0x0
0x1401d6574: shr     DWORD PTR [rdi-0x4fc4ffe4],0x1c
0x1401d657b: add     BYTE PTR [rip+0x75001cb1],bl        # 0x1b51d8232
0x1401d6581: mov     al,0x1c
0x1401d6583: add     BYTE PTR [rdi-0x19ffe350],ch
0x1401d6589: mov     al,0x1c
0x1401d658b: add     BYTE PTR [rdi],cl
0x1401d658d: mov     ch,0x1c
0x1401d658f: add     BYTE PTR [rcx-0x4b],cl
0x1401d6592: sbb     al,0x0
0x1401d6594: xor     DWORD PTR [rbp-0x4a42ffe4],0x1c
0x1401d659b: add     bh,dh
0x1401d659d: mov     ch,0x1c
0x1401d659f: add     BYTE PTR [rbx-0x4a],ch
0x1401d65a2: sbb     al,0x0
0x1401d65a4: movs    DWORD PTR [rdi],DWORD PTR [rsi]
0x1401d65a5: mov     dh,0x1c
0x1401d65a7: add     BYTE PTR [rdx-0x48],dh
0x1401d65aa: sbb     al,0x0
0x1401d65ac: jrcxz   0x1401d6566
0x1401d65ae: sbb     al,0x0
0x1401d65b0: push    rbx
0x1401d65b1: mov     bh,0x1c
0x1401d65b3: add     BYTE PTR [rbp-0x38ffe349],cl
0x1401d65b9: mov     bh,0x1c
0x1401d65bb: add     BYTE PTR [rcx],al
0x1401d65bd: mov     eax,0xb83b001c
0x1401d65c2: sbb     al,0x0
0x1401d65c4: test    eax,0xdf001cb8
0x1401d65c9: mov     dh,0x1c
0x1401d65cb: add     BYTE PTR [rcx],bl
0x1401d65cd: mov     bh,0x1c
0x1401d65cf: add     BYTE PTR [rcx],dh
0x1401d65d1: mov     dh,0x1c
0x1401d65d3: add     dh,al
0x1401d65d5: mov     ebx,0xbbcf001c
0x1401d65da: sbb     al,0x0
0x1401d65dc: fdivr   DWORD PTR [rbx-0x4442ffe4]
0x1401d65e2: sbb     al,0x0
0x1401d65e4: loope   0x1401d65a1
0x1401d65e6: sbb     al,0x0
0x1401d65e8: stos    DWORD PTR [rdi],eax
0x1401d65e9: mov     ebx,0xbbb4001c
0x1401d65ee: sbb     al,0x0
0x1401d65f0: fcmovb  st,st(5)
0x1401d65f2: sbb     al,0x0
0x1401d65f4: xor     bh,al
0x1401d65f6: sbb     al,0x0
0x1401d65f8: xor     bh,al
0x1401d65fa: sbb     al,0x0
0x1401d65fc: xor     bh,al
0x1401d65fe: sbb     al,0x0
0x1401d6600: xor     bh,al
0x1401d6602: sbb     al,0x0
0x1401d6604: xor     bh,al
0x1401d6606: sbb     al,0x0
0x1401d6608: xor     bh,al
0x1401d660a: sbb     al,0x0
0x1401d660c: xor     bh,al
0x1401d660e: sbb     al,0x0
0x1401d6610: xor     bh,al
0x1401d6612: sbb     al,0x0
0x1401d6614: adc     al,0xc6
0x1401d6616: sbb     al,0x0
0x1401d6618: xor     bh,al
0x1401d661a: sbb     al,0x0
0x1401d661c: xor     bh,al
0x1401d661e: sbb     al,0x0
0x1401d6620: rex     .WRX (bad)
0x1401d6622: sbb     al,0x0
0x1401d6624: mov     dh,al
0x1401d6626: sbb     al,0x0
0x1401d6628: mov     edi,0xf6001cc6
0x1401d662e: sbb     al,0x0
0x1401d6630: jg      0x1401d65f9
0x1401d6632: sbb     al,0x0
0x1401d6634: mov     ecx,0xf3001cc7
0x1401d663a: sbb     al,0x0
0x1401d663c: sub     eax,0x67001cc8
0x1401d6641: enter   0x1c,0xdb
0x1401d6645: enter   0x1c,0x15
0x1401d6649: leave   
0x1401d664a: sbb     al,0x0
0x1401d664c: loop    0x1401d6618
0x1401d664e: sbb     al,0x0
0x1401d6650: push    rbx
0x1401d6651: retf    
0x1401d6652: sbb     al,0x0
0x1401d6654: ret     
0x1401d6655: leave   
0x1401d6656: sbb     al,0x0
0x1401d6658: std     
0x1401d6659: leave   
0x1401d665a: sbb     al,0x0
0x1401d665d: retf    0x1c
0x1401d6660: jno     0x1401d662c
0x1401d6662: sbb     al,0x0
0x1401d6664: stos    DWORD PTR [rdi],eax
0x1401d6665: retf    0x1c
0x1401d6668: sbb     ebx,ecx
0x1401d666a: sbb     al,0x0
0x1401d666c: rex     .WRXB leave
0x1401d666e: sbb     al,0x0
0x1401d6670: mov     ecx,ecx
0x1401d6672: sbb     al,0x0
0x1401d6674: movabs  eax,ds:0x77001cfc6e001cc8
0x1401d667d: cld     
0x1401d667e: sbb     al,0x0
0x1401d6680: cmp     ah,0x1c
0x1401d6683: add     BYTE PTR [rbp-0x4],ah
0x1401d6686: sbb     al,0x0
0x1401d6688: mov     esp,edi
0x1401d668a: sbb     al,0x0
0x1401d668c: push    rbx
0x1401d668d: cld     
0x1401d668e: sbb     al,0x0
0x1401d6690: pop     rsp
0x1401d6691: cld     
0x1401d6692: sbb     al,0x0
0x1401d6694: xor     BYTE PTR [rax],cl
0x1401d6696: sbb     eax,0x1d083900
0x1401d669b: add     BYTE PTR [rdx+0x8],al
0x1401d669e: sbb     eax,0x1d082700
0x1401d66a3: add     BYTE PTR [rbx+0x8],cl
0x1401d66a6: sbb     eax,0x1d081500
0x1401d66ab: add     BYTE PTR [rsi],bl
0x1401d66ad: or      BYTE PTR [rip+0x1d250100],bl        # 0x15d4267b3
0x1401d66b3: add     BYTE PTR [rbp+0x7b001d25],al
0x1401d66b9: es      sbb eax,0x1d25c400
0x1401d66bf: add     BYTE PTR [rbx],al
0x1401d66c1: es      sbb eax,0x1d263f00
0x1401d66c7: add     BYTE PTR [rsi-0x68ffe2d5],cl
0x1401d66cd: sub     ebx,DWORD PTR [rip+0x1d2ba000]        # 0x15d4906d3
0x1401d66d3: add     BYTE PTR [rcx+0x1d2b],ch
0x1401d66d9: add     DWORD PTR [rdx],eax
0x1401d66db: add     eax,DWORD PTR [rbx]
0x1401d66dd: add     eax,DWORD PTR [rbx]
0x1401d66df: add     eax,DWORD PTR [rbx]
0x1401d66e1: add     eax,DWORD PTR [rbx]
0x1401d66e3: add     eax,DWORD PTR [rbx]
0x1401d66e5: add     eax,DWORD PTR [rbx]
0x1401d66e7: add     eax,DWORD PTR [rbx]
0x1401d66e9: add     eax,DWORD PTR [rbx]
0x1401d66eb: add     eax,DWORD PTR [rax]
0x1401d66ed: add     DWORD PTR [rdx],eax
0x1401d66ef: add     eax,DWORD PTR [rbx]
0x1401d66f1: add     eax,DWORD PTR [rbx]
0x1401d66f3: add     eax,DWORD PTR [rbx]
0x1401d66f5: add     eax,DWORD PTR [rax]
0x1401d66f7: add     DWORD PTR [rdx],eax
0x1401d66f9: nop     DWORD PTR [rax]
0x1401d66fc: pop     rcx
0x1401d66fd: xor     BYTE PTR [rip+0x1d306e00],bl        # 0x15d4dd503
0x1401d6703: add     BYTE PTR [rbp+0x30],dh
0x1401d6706: sbb     eax,0x1d307c00
0x1401d670b: add     BYTE PTR [rbx-0x75ffe2d0],al
0x1401d6711: xor     BYTE PTR [rip+0x1d305d00],bl        # 0x15d4dc417
0x1401d6717: add     BYTE PTR [rbp+0x67001d30],dl
0x1401d671d: xor     BYTE PTR [rip+0x1d306e00],bl        # 0x15d4dd523
0x1401d6723: add     BYTE PTR [rbp+0x30],dh
0x1401d6726: sbb     eax,0x1d307c00
0x1401d672b: add     BYTE PTR [rbx-0x75ffe2d0],al
0x1401d6731: xor     BYTE PTR [rip+0x1d308e00],bl        # 0x15d4df537
0x1401d6737: add     BYTE PTR [rbp+0x52001d30],dl
0x1401d673d: xor     DWORD PTR [rip+0x1d315900],ebx        # 0x15d4ec043
0x1401d6743: add     BYTE PTR [rbx+0x31],ah
0x1401d6746: sbb     eax,0x1d316d00
0x1401d674b: add     BYTE PTR [rdi+0x31],dh
0x1401d674e: sbb     eax,0x1d318100
0x1401d6753: add     ah,al
0x1401d6755: xor     DWORD PTR [rip+0x1d318800],ebx        # 0x15d4eef5b
0x1401d675b: add     BYTE PTR [rbp-0x6bffe2cf],cl
0x1401d6761: xor     DWORD PTR [rip+0x1d319f00],ebx        # 0x15d4f0667
0x1401d6767: add     BYTE PTR [rcx-0x4cffe2cf],ch
0x1401d676d: xor     DWORD PTR [rip+0x1d31bd00],ebx        # 0x15d4f2473
0x1401d6773: add     ah,al
0x1401d6775: xor     DWORD PTR [rip+0x1d31ce00],ebx        # 0x15d4f357b
0x1401d677b: add     BYTE PTR [rdx+0x32],dh
0x1401d677e: sbb     eax,0x1d327900
0x1401d6783: add     BYTE PTR [rbx-0x72ffe2ce],al
0x1401d6789: xor     bl,BYTE PTR [rip+0x1d329700]        # 0x15d4ffe8f
0x1401d678f: add     BYTE PTR [rdi-0x19ffe2ce],bl
0x1401d6795: xor     bl,BYTE PTR [rip+0x1d32a900]        # 0x15d50109b
0x1401d679b: add     BYTE PTR [rsi-0x4affe2ce],ch
0x1401d67a1: xor     bl,BYTE PTR [rip+0x1d32c000]        # 0x15d5027a7
0x1401d67a7: add     dl,cl
0x1401d67a9: xor     bl,BYTE PTR [rip+0x1d32d400]        # 0x15d503baf
0x1401d67af: add     ah,bl
0x1401d67b1: xor     bl,BYTE PTR [rip+0x1d32e600]        # 0x15d504db7
0x1401d67b7: add     al,dh
