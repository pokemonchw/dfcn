0x1401c4550: mov     QWORD PTR [rsp+0x10],rbx
0x1401c4555: mov     QWORD PTR [rsp+0x18],rsi
0x1401c455a: mov     QWORD PTR [rsp+0x20],rdi
0x1401c455f: push    rbp
0x1401c4560: push    r12
0x1401c4562: push    r13
0x1401c4564: push    r14
0x1401c4566: push    r15
0x1401c4568: lea     rbp,[rsp-0x38c0]
0x1401c4570: mov     eax,0x39c0
0x1401c4575: call    0x141554810
0x1401c457a: sub     rsp,rax
0x1401c457d: mov     rax,QWORD PTR [rip+0x16f9abc]        # 0x1418be040
0x1401c4584: xor     rax,rsp
0x1401c4587: mov     QWORD PTR [rbp+0x38b0],rax
0x1401c458e: mov     r13,rcx
0x1401c4591: mov     QWORD PTR [rsp+0x78],rcx
0x1401c4596: mov     BYTE PTR [rip+0x24a853b],0x0        # 0x14266cad8
0x1401c459d: mov     DWORD PTR [rip+0x24a8535],0xffffffff        # 0x14266cadc
0x1401c45a7: cmp     BYTE PTR [rip+0x24a8546],0x0        # 0x14266caf4
0x1401c45ae: jne     0x1401d655a
0x1401c45b4: mov     ebx,0x2
0x1401c45b9: cmp     BYTE PTR [rip+0x24a8535],0x0        # 0x14266caf5
0x1401c45c0: je      0x1401c45e6
0x1401c45c2: mov     rax,QWORD PTR [rip+0x24a831f]        # 0x14266c8e8
0x1401c45c9: test    rax,rax
0x1401c45cc: je      0x1401c45d1
0x1401c45ce: or      DWORD PTR [rax],0x1
0x1401c45d1: mov     BYTE PTR [rip+0x24a851d],0x0        # 0x14266caf5
0x1401c45d8: mov     edx,ebx
0x1401c45da: lea     rcx,[rip+0x24a828f]        # 0x14266c870
0x1401c45e1: call    0x140b016a0
0x1401c45e6: cmp     BYTE PTR [rip+0x170501b],0x0        # 0x1418c9608
0x1401c45ed: setne   BYTE PTR [rip+0x24a849c]        # 0x14266ca90
0x1401c45f4: mov     DWORD PTR [rbp-0x38],0xffffffff
0x1401c45fb: mov     DWORD PTR [rbp-0x3c],0xffffffff
0x1401c4602: cmp     BYTE PTR [rip+0x21ee44c],0x0        # 0x1423b2a55
0x1401c4609: je      0x1401c461f
0x1401c460b: lea     r8,[rbp-0x3c]
0x1401c460f: lea     rdx,[rbp-0x38]
0x1401c4613: lea     rcx,[rip+0x24a8256]        # 0x14266c870
0x1401c461a: call    0x1400bc970
0x1401c461f: lea     r8,[rbp-0x18]
0x1401c4623: lea     rdx,[rbp+0x1b8]
0x1401c462a: lea     rcx,[rip+0x16fefef]        # 0x1418c3620
0x1401c4631: call    0x1404287a0
0x1401c4636: xor     r8d,r8d
0x1401c4639: mov     dl,0xff
0x1401c463b: xor     ecx,ecx
0x1401c463d: call    0x1408d8160
0x1401c4642: xor     edx,edx
0x1401c4644: lea     rcx,[rip+0x222b5a5]        # 0x1423efbf0
0x1401c464b: call    0x1400735c0
0x1401c4650: test    al,al
0x1401c4652: je      0x1401c478c
0x1401c4658: xor     esi,esi
0x1401c465a: mov     QWORD PTR [rbp-0x78],rsi
0x1401c465e: cmp     QWORD PTR [rip+0x24a8283],rsi        # 0x14266c8e8
0x1401c4665: je      0x1401c48ae
0x1401c466b: lea     rcx,[rbp+0x9b0]
0x1401c4672: call    0x1400bd5c0
0x1401c4677: mov     eax,DWORD PTR [r13+0x1b4]
0x1401c467e: cmp     eax,0x4
0x1401c4681: jne     0x1401c46bf
0x1401c4683: mov     DWORD PTR [r13+0x550],esi
0x1401c468a: lea     rax,[r13+0x458]
0x1401c4691: mov     DWORD PTR [rsp+0x58],esi
0x1401c4695: mov     DWORD PTR [rsp+0x50],esi
0x1401c4699: mov     QWORD PTR [rsp+0x48],rax
0x1401c469e: mov     BYTE PTR [rsp+0x40],sil
0x1401c46a3: mov     BYTE PTR [rsp+0x38],sil
0x1401c46a8: mov     eax,DWORD PTR [rip+0x21f1442]        # 0x1423b5af0
0x1401c46ae: mov     DWORD PTR [rsp+0x30],eax
0x1401c46b2: mov     DWORD PTR [rsp+0x28],0x17
0x1401c46ba: jmp     0x1401c4761
0x1401c46bf: cmp     eax,0x5
0x1401c46c2: jne     0x1401c4731
0x1401c46c4: mov     rax,QWORD PTR [r13+0x8368]
0x1401c46cb: test    rax,rax
0x1401c46ce: je      0x1401c4731
0x1401c46d0: mov     QWORD PTR [rbp+0x9c8],rax
0x1401c46d7: mov     eax,DWORD PTR [r13+0x8378]
0x1401c46de: mov     DWORD PTR [rbp+0x9d0],eax
0x1401c46e4: mov     eax,DWORD PTR [r13+0x837c]
0x1401c46eb: mov     DWORD PTR [rbp+0x9d4],eax
0x1401c46f1: mov     DWORD PTR [rsp+0x58],esi
0x1401c46f5: mov     DWORD PTR [rsp+0x50],esi
0x1401c46f9: lea     rax,[rbp+0x9b0]
0x1401c4700: mov     QWORD PTR [rsp+0x48],rax
0x1401c4705: mov     BYTE PTR [rsp+0x40],sil
0x1401c470a: mov     BYTE PTR [rsp+0x38],sil
0x1401c470f: mov     eax,DWORD PTR [rip+0x21f13db]        # 0x1423b5af0
0x1401c4715: mov     DWORD PTR [rsp+0x30],eax
0x1401c4719: mov     DWORD PTR [rsp+0x28],0x17
0x1401c4721: mov     r9d,DWORD PTR [r13+0x8374]
0x1401c4728: mov     r8d,DWORD PTR [r13+0x8370]
0x1401c472f: jmp     0x1401c476f
0x1401c4731: mov     DWORD PTR [rsp+0x58],esi
0x1401c4735: mov     DWORD PTR [rsp+0x50],esi
0x1401c4739: lea     rax,[rbp+0x9b0]
0x1401c4740: mov     QWORD PTR [rsp+0x48],rax
0x1401c4745: mov     BYTE PTR [rsp+0x40],sil
0x1401c474a: mov     BYTE PTR [rsp+0x38],sil
0x1401c474f: mov     eax,DWORD PTR [rip+0x21f139b]        # 0x1423b5af0
0x1401c4755: mov     DWORD PTR [rsp+0x30],eax
0x1401c4759: mov     DWORD PTR [rsp+0x28],0x18
0x1401c4761: mov     r9d,DWORD PTR [r13+0x19c]
0x1401c4768: mov     r8d,DWORD PTR [r13+0x198]
0x1401c476f: mov     BYTE PTR [rsp+0x20],0x1
0x1401c4774: mov     rdx,QWORD PTR [rip+0x24a816d]        # 0x14266c8e8
0x1401c477b: mov     rcx,QWORD PTR [rip+0x2349856]        # 0x14250dfd8
0x1401c4782: call    0x1402f78c0
0x1401c4787: jmp     0x1401c48ae
0x1401c478c: lea     rcx,[rbp+0xb50]
0x1401c4793: call    0x1400bd5c0
0x1401c4798: mov     eax,DWORD PTR [r13+0x1b4]
0x1401c479f: cmp     eax,0x4
0x1401c47a2: jne     0x1401c47da
0x1401c47a4: xor     esi,esi
0x1401c47a6: mov     DWORD PTR [r13+0x550],esi
0x1401c47ad: lea     rax,[r13+0x458]
0x1401c47b4: mov     QWORD PTR [rsp+0x60],rax
0x1401c47b9: mov     BYTE PTR [rsp+0x58],sil
0x1401c47be: mov     BYTE PTR [rsp+0x50],sil
0x1401c47c3: mov     eax,DWORD PTR [rip+0x21f1327]        # 0x1423b5af0
0x1401c47c9: mov     DWORD PTR [rsp+0x48],eax
0x1401c47cd: mov     DWORD PTR [rsp+0x40],0x17
0x1401c47d5: jmp     0x1401c4870
0x1401c47da: cmp     eax,0x5
0x1401c47dd: jne     0x1401c4846
0x1401c47df: mov     rax,QWORD PTR [r13+0x8368]
0x1401c47e6: test    rax,rax
0x1401c47e9: je      0x1401c4846
0x1401c47eb: mov     QWORD PTR [rbp+0xb68],rax
0x1401c47f2: mov     eax,DWORD PTR [r13+0x8378]
0x1401c47f9: mov     DWORD PTR [rbp+0xb70],eax
0x1401c47ff: mov     eax,DWORD PTR [r13+0x837c]
0x1401c4806: mov     DWORD PTR [rbp+0xb74],eax
0x1401c480c: lea     rax,[rbp+0xb50]
0x1401c4813: mov     QWORD PTR [rsp+0x60],rax
0x1401c4818: mov     BYTE PTR [rsp+0x58],0x0
0x1401c481d: mov     BYTE PTR [rsp+0x50],0x0
0x1401c4822: mov     eax,DWORD PTR [rip+0x21f12c8]        # 0x1423b5af0
0x1401c4828: mov     DWORD PTR [rsp+0x48],eax
0x1401c482c: mov     DWORD PTR [rsp+0x40],0x17
0x1401c4834: xor     esi,esi
0x1401c4836: mov     r8d,DWORD PTR [r13+0x8374]
0x1401c483d: mov     edx,DWORD PTR [r13+0x8370]
0x1401c4844: jmp     0x1401c487e
0x1401c4846: lea     rax,[rbp+0xb50]
0x1401c484d: mov     QWORD PTR [rsp+0x60],rax
0x1401c4852: mov     BYTE PTR [rsp+0x58],0x0
0x1401c4857: mov     BYTE PTR [rsp+0x50],0x0
0x1401c485c: mov     eax,DWORD PTR [rip+0x21f128e]        # 0x1423b5af0
0x1401c4862: mov     DWORD PTR [rsp+0x48],eax
0x1401c4866: mov     DWORD PTR [rsp+0x40],0x18
0x1401c486e: xor     esi,esi
0x1401c4870: mov     r8d,DWORD PTR [r13+0x19c]
0x1401c4877: mov     edx,DWORD PTR [r13+0x198]
0x1401c487e: mov     BYTE PTR [rsp+0x38],0x1
0x1401c4883: mov     eax,DWORD PTR [rip+0x222b37f]        # 0x1423efc08
0x1401c4889: mov     DWORD PTR [rsp+0x30],eax
0x1401c488d: mov     eax,DWORD PTR [rip+0x222b371]        # 0x1423efc04
0x1401c4893: mov     DWORD PTR [rsp+0x28],eax
0x1401c4897: mov     QWORD PTR [rbp-0x78],rsi
0x1401c489b: mov     DWORD PTR [rsp+0x20],esi
0x1401c489f: xor     r9d,r9d
0x1401c48a2: mov     rcx,QWORD PTR [rip+0x234972f]        # 0x14250dfd8
0x1401c48a9: call    0x140f75bd0
0x1401c48ae: mov     eax,0x1b4
0x1401c48b3: mov     rcx,r13
0x1401c48b6: movsxd  rdx,DWORD PTR [rax+rcx*1]
0x1401c48ba: cmp     edx,0x8
0x1401c48bd: ja      0x1401c8dd8
0x1401c48c3: lea     rcx,[rip+0xffffffffffe3b736]        # 0x140000000
0x1401c48ca: mov     eax,DWORD PTR [rcx+rdx*4+0x1d658c]
0x1401c48d1: add     rax,rcx
0x1401c48d4: jmp     rax
0x1401c48d6: cmp     BYTE PTR [rip+0x21ee178],0x0        # 0x1423b2a55
0x1401c48dd: je      0x1401c8dd8
0x1401c48e3: lea     r8,[rbp+0x38]
0x1401c48e7: lea     rdx,[rbp+0xd0]
0x1401c48ee: lea     rcx,[rip+0x24a7f7b]        # 0x14266c870
0x1401c48f5: call    0x1400bc970
0x1401c48fa: lea     r8,[rbp+0xd8]
0x1401c4901: lea     rdx,[rbp+0xe4]
0x1401c4908: lea     rcx,[rip+0x24a7f61]        # 0x14266c870
0x1401c490f: call    0x14014ec70
0x1401c4914: xor     edx,edx
0x1401c4916: lea     rcx,[rip+0x222b2d3]        # 0x1423efbf0
0x1401c491d: call    0x1400735c0
0x1401c4922: test    al,al
0x1401c4924: je      0x1401c496e
0x1401c4926: mov     rax,QWORD PTR [rip+0x24a7fbb]        # 0x14266c8e8
0x1401c492d: mov     ecx,DWORD PTR [rax+0x4]
0x1401c4930: mov     r8d,DWORD PTR [rax+0x8]
0x1401c4934: sar     ecx,1
0x1401c4936: mov     eax,DWORD PTR [rbp+0xe4]
0x1401c493c: cdq     
0x1401c493d: and     edx,0xf
0x1401c4940: lea     ebx,[rdx+rax*1]
0x1401c4943: sar     ebx,0x4
0x1401c4946: sub     ebx,ecx
0x1401c4948: add     ebx,DWORD PTR [r13+0x198]
0x1401c494f: sar     r8d,1
0x1401c4952: mov     eax,DWORD PTR [rbp+0xd8]
0x1401c4958: cdq     
0x1401c4959: and     edx,0xf
0x1401c495c: lea     ecx,[rdx+rax*1]
0x1401c495f: sar     ecx,0x4
0x1401c4962: sub     ecx,r8d
0x1401c4965: add     ecx,DWORD PTR [r13+0x19c]
0x1401c496c: jmp     0x1401c4999
0x1401c496e: mov     eax,DWORD PTR [rip+0x222b290]        # 0x1423efc04
0x1401c4974: sar     eax,1
0x1401c4976: mov     ebx,DWORD PTR [r13+0x198]
0x1401c497d: sub     ebx,eax
0x1401c497f: add     ebx,DWORD PTR [rbp+0xd0]
0x1401c4985: mov     eax,DWORD PTR [rip+0x222b27d]        # 0x1423efc08
0x1401c498b: sar     eax,1
0x1401c498d: mov     ecx,DWORD PTR [r13+0x19c]
0x1401c4994: sub     ecx,eax
0x1401c4996: add     ecx,DWORD PTR [rbp+0x38]
0x1401c4999: mov     DWORD PTR [rbp-0x48],ecx
0x1401c499c: mov     DWORD PTR [rbp-0x58],ebx
0x1401c499f: test    ebx,ebx
0x1401c49a1: js      0x1401c8dd8
0x1401c49a7: mov     rax,QWORD PTR [rip+0x234962a]        # 0x14250dfd8
0x1401c49ae: cmp     ebx,DWORD PTR [rax+0xa0]
0x1401c49b4: jge     0x1401c8dd8
0x1401c49ba: test    ecx,ecx
0x1401c49bc: js      0x1401c8dd8
0x1401c49c2: cmp     ecx,DWORD PTR [rax+0xa4]
0x1401c49c8: jge     0x1401c8dd8
0x1401c49ce: mov     r8d,ecx
0x1401c49d1: mov     edx,ebx
0x1401c49d3: mov     rcx,r13
0x1401c49d6: call    0x1401db620
0x1401c49db: mov     esi,DWORD PTR [rbp-0x18]
0x1401c49de: mov     DWORD PTR [rsp+0x74],esi
0x1401c49e2: lea     r15d,[rsi-0x37]
0x1401c49e6: mov     DWORD PTR [rsp+0x70],r15d
0x1401c49eb: lea     r14d,[r15-0x2]
0x1401c49ef: mov     r12d,0x14
0x1401c49f5: mov     QWORD PTR [rbp-0x60],r12
0x1401c49f9: mov     eax,DWORD PTR [rip+0x222b209]        # 0x1423efc08
0x1401c49ff: cmp     eax,0x2e
0x1401c4a02: jle     0x1401c4a2a
0x1401c4a04: lea     r12d,[rax-0x1a]
0x1401c4a08: mov     QWORD PTR [rbp-0x60],r12
0x1401c4a0c: cmp     r12d,0x1e
0x1401c4a10: jle     0x1401c4a2a
0x1401c4a12: mov     eax,0x1e
0x1401c4a17: mov     DWORD PTR [rbp-0x6c],eax
0x1401c4a1a: mov     r12d,eax
0x1401c4a1d: mov     QWORD PTR [rbp-0x60],r12
0x1401c4a21: mov     edi,esi
0x1401c4a23: xor     eax,eax
0x1401c4a25: mov     r13d,eax
0x1401c4a28: jmp     0x1401c4a3e
0x1401c4a2a: mov     DWORD PTR [rbp-0x6c],r12d
0x1401c4a2e: mov     edi,esi
0x1401c4a30: xor     eax,eax
0x1401c4a32: mov     r13d,eax
0x1401c4a35: test    r12d,r12d
0x1401c4a38: js      0x1401c4b1e
0x1401c4a3e: mov     r15,rax
0x1401c4a41: mov     ebx,r14d
0x1401c4a44: cmp     r14d,edi
0x1401c4a47: jg      0x1401c4b03
0x1401c4a4d: movsxd  rax,r12d
0x1401c4a50: mov     rsi,rax
0x1401c4a53: mov     r8d,ebx
0x1401c4a56: mov     edx,r13d
0x1401c4a59: lea     rcx,[rip+0x24a7e10]        # 0x14266c870
0x1401c4a60: call    0x1400bc750
0x1401c4a65: xor     r8d,r8d
0x1401c4a68: xor     edx,edx
0x1401c4a6a: lea     rcx,[rip+0x24a7dff]        # 0x14266c870
0x1401c4a71: call    0x1400bc7c0
0x1401c4a76: test    r15,r15
0x1401c4a79: jne     0x1401c4aa3
0x1401c4a7b: cmp     ebx,r14d
0x1401c4a7e: jne     0x1401c4a88
0x1401c4a80: mov     edx,DWORD PTR [rip+0x24a970e]        # 0x14266e194
0x1401c4a86: jmp     0x1401c4aed
0x1401c4a88: lea     rcx,[rip+0x24a7de1]        # 0x14266c870
0x1401c4a8f: cmp     ebx,edi
0x1401c4a91: jne     0x1401c4a9b
0x1401c4a93: mov     edx,DWORD PTR [rip+0x24a9713]        # 0x14266e1ac
0x1401c4a99: jmp     0x1401c4af4
0x1401c4a9b: mov     edx,DWORD PTR [rip+0x24a96ff]        # 0x14266e1a0
0x1401c4aa1: jmp     0x1401c4af4
0x1401c4aa3: cmp     r15,rsi
0x1401c4aa6: jne     0x1401c4ad0
0x1401c4aa8: cmp     ebx,r14d
0x1401c4aab: jne     0x1401c4ab5
0x1401c4aad: mov     edx,DWORD PTR [rip+0x24a96e9]        # 0x14266e19c
0x1401c4ab3: jmp     0x1401c4aed
0x1401c4ab5: lea     rcx,[rip+0x24a7db4]        # 0x14266c870
0x1401c4abc: cmp     ebx,edi
0x1401c4abe: jne     0x1401c4ac8
0x1401c4ac0: mov     edx,DWORD PTR [rip+0x24a96ee]        # 0x14266e1b4
0x1401c4ac6: jmp     0x1401c4af4
0x1401c4ac8: mov     edx,DWORD PTR [rip+0x24a96da]        # 0x14266e1a8
0x1401c4ace: jmp     0x1401c4af4
0x1401c4ad0: cmp     ebx,r14d
0x1401c4ad3: jne     0x1401c4add
0x1401c4ad5: mov     edx,DWORD PTR [rip+0x24a96bd]        # 0x14266e198
0x1401c4adb: jmp     0x1401c4aed
0x1401c4add: cmp     ebx,edi
0x1401c4adf: mov     edx,DWORD PTR [rip+0x24a96cb]        # 0x14266e1b0
0x1401c4ae5: je      0x1401c4aed
0x1401c4ae7: mov     edx,DWORD PTR [rip+0x24a96b7]        # 0x14266e1a4
0x1401c4aed: lea     rcx,[rip+0x24a7d7c]        # 0x14266c870
0x1401c4af4: call    0x140af4570
0x1401c4af9: inc     ebx
0x1401c4afb: cmp     ebx,edi
0x1401c4afd: jle     0x1401c4a53
0x1401c4b03: inc     r13d
0x1401c4b06: inc     r15
0x1401c4b09: cmp     r13d,r12d
0x1401c4b0c: jle     0x1401c4a41
0x1401c4b12: mov     esi,DWORD PTR [rsp+0x74]
0x1401c4b16: mov     r15d,DWORD PTR [rsp+0x70]
0x1401c4b1b: mov     ebx,DWORD PTR [rbp-0x58]
0x1401c4b1e: xor     r8d,r8d
0x1401c4b21: mov     edx,0x7
0x1401c4b26: mov     r9b,0x1
0x1401c4b29: lea     rcx,[rip+0x24a7d40]        # 0x14266c870
0x1401c4b30: call    0x1400bc760
0x1401c4b35: mov     edi,0x1
0x1401c4b3a: mov     r13d,edi
0x1401c4b3d: lea     rcx,[rbp+0xff0]
0x1401c4b44: call    0x140070cc0
0x1401c4b49: nop     
0x1401c4b4a: mov     r8d,r15d
0x1401c4b4d: mov     edx,edi
0x1401c4b4f: lea     rcx,[rip+0x24a7d1a]        # 0x14266c870
0x1401c4b56: call    0x1400bc750
0x1401c4b5b: mov     edi,DWORD PTR [rbp-0x48]
0x1401c4b5e: mov     r8d,edi
0x1401c4b61: mov     edx,ebx
0x1401c4b63: mov     rcx,QWORD PTR [rip+0x234946e]        # 0x14250dfd8
0x1401c4b6a: call    0x1401bea60
0x1401c4b6f: test    rax,rax
0x1401c4b72: je      0x1401c4c27
0x1401c4b78: xor     r9d,r9d
0x1401c4b7b: mov     r8b,0x1
0x1401c4b7e: lea     rdx,[rbp+0xff0]
0x1401c4b85: mov     rcx,rax
0x1401c4b88: call    0x140aae180
0x1401c4b8d: sub     esi,r14d
0x1401c4b90: lea     rcx,[rbp+0xff0]
0x1401c4b97: call    0x140070960
0x1401c4b9c: lea     ecx,[rsi-0x7]
0x1401c4b9f: movsxd  rdx,ecx
0x1401c4ba2: cmp     rax,rdx
0x1401c4ba5: jb      0x1401c4c0c
0x1401c4ba7: lea     r14d,[rsi-0x8]
0x1401c4bab: test    r14d,r14d
0x1401c4bae: js      0x1401c4bc6
0x1401c4bb0: movsxd  rdx,esi
0x1401c4bb3: sub     rdx,0x8
0x1401c4bb7: xor     r8d,r8d
0x1401c4bba: lea     rcx,[rbp+0xff0]
0x1401c4bc1: call    0x1400e2860
0x1401c4bc6: cmp     r14d,0x3
0x1401c4bca: jle     0x1401c4c0c
0x1401c4bcc: movsxd  rdx,esi
0x1401c4bcf: sub     rdx,0xb
0x1401c4bd3: lea     rcx,[rbp+0xff0]
0x1401c4bda: call    0x1400fcbe0
0x1401c4bdf: mov     BYTE PTR [rax],0x2e
0x1401c4be2: lea     eax,[rsi-0xa]
0x1401c4be5: movsxd  rdx,eax
0x1401c4be8: lea     rcx,[rbp+0xff0]
0x1401c4bef: call    0x1400fcbe0
0x1401c4bf4: mov     BYTE PTR [rax],0x2e
0x1401c4bf7: lea     eax,[rsi-0x9]
0x1401c4bfa: movsxd  rdx,eax
0x1401c4bfd: lea     rcx,[rbp+0xff0]
0x1401c4c04: call    0x1400fcbe0
0x1401c4c09: mov     BYTE PTR [rax],0x2e
0x1401c4c0c: xor     r9d,r9d
0x1401c4c0f: xor     r8d,r8d
0x1401c4c12: lea     rdx,[rbp+0xff0]
0x1401c4c19: lea     rcx,[rip+0x24a7c50]        # 0x14266c870
0x1401c4c20: call    0x140af3400
0x1401c4c25: jmp     0x1401c4c2d
0x1401c4c27: xor     r13d,r13d
0x1401c4c2a: sub     esi,r14d
0x1401c4c2d: lea     rcx,[rbp+0xff0]
0x1401c4c34: call    0x140069460
0x1401c4c39: lea     rcx,[rbp+0x1010]
0x1401c4c40: call    0x140070cc0
0x1401c4c45: nop     
0x1401c4c46: lea     edx,[r13+0x1]
0x1401c4c4a: mov     r8d,r15d
0x1401c4c4d: lea     rcx,[rip+0x24a7c1c]        # 0x14266c870
0x1401c4c54: call    0x1400bc750
0x1401c4c59: mov     r8d,edi
0x1401c4c5c: mov     edx,ebx
0x1401c4c5e: mov     rcx,QWORD PTR [rip+0x2349373]        # 0x14250dfd8
0x1401c4c65: call    0x1401be9f0
0x1401c4c6a: test    rax,rax
0x1401c4c6d: je      0x1401c4d1e
0x1401c4c73: xor     r9d,r9d
0x1401c4c76: mov     r8b,0x1
0x1401c4c79: lea     rdx,[rbp+0x1010]
0x1401c4c80: mov     rcx,rax
0x1401c4c83: call    0x140aae180
0x1401c4c88: lea     rcx,[rbp+0x1010]
0x1401c4c8f: call    0x140070960
0x1401c4c94: lea     ecx,[rsi-0x7]
0x1401c4c97: movsxd  rdx,ecx
0x1401c4c9a: cmp     rax,rdx
0x1401c4c9d: jb      0x1401c4d04
0x1401c4c9f: lea     r14d,[rsi-0x8]
0x1401c4ca3: test    r14d,r14d
0x1401c4ca6: js      0x1401c4cbe
0x1401c4ca8: movsxd  rdx,esi
0x1401c4cab: sub     rdx,0x8
0x1401c4caf: xor     r8d,r8d
0x1401c4cb2: lea     rcx,[rbp+0x1010]
0x1401c4cb9: call    0x1400e2860
0x1401c4cbe: cmp     r14d,0x3
0x1401c4cc2: jle     0x1401c4d04
0x1401c4cc4: movsxd  rdx,esi
0x1401c4cc7: sub     rdx,0xb
0x1401c4ccb: lea     rcx,[rbp+0x1010]
0x1401c4cd2: call    0x1400fcbe0
0x1401c4cd7: mov     BYTE PTR [rax],0x2e
0x1401c4cda: lea     eax,[rsi-0xa]
0x1401c4cdd: movsxd  rdx,eax
0x1401c4ce0: lea     rcx,[rbp+0x1010]
0x1401c4ce7: call    0x1400fcbe0
0x1401c4cec: mov     BYTE PTR [rax],0x2e
0x1401c4cef: lea     eax,[rsi-0x9]
0x1401c4cf2: movsxd  rdx,eax
0x1401c4cf5: lea     rcx,[rbp+0x1010]
0x1401c4cfc: call    0x1400fcbe0
0x1401c4d01: mov     BYTE PTR [rax],0x2e
0x1401c4d04: xor     r9d,r9d
0x1401c4d07: xor     r8d,r8d
0x1401c4d0a: lea     rdx,[rbp+0x1010]
0x1401c4d11: lea     rcx,[rip+0x24a7b58]        # 0x14266c870
0x1401c4d18: call    0x140af3400
0x1401c4d1d: nop     
0x1401c4d1e: lea     rcx,[rbp+0x1010]
0x1401c4d25: call    0x140069460
0x1401c4d2a: mov     rcx,QWORD PTR [rip+0x21f793f]        # 0x1423bc670
0x1401c4d31: movsx   eax,WORD PTR [rcx+0x82]
0x1401c4d38: cmp     ebx,eax
0x1401c4d3a: jne     0x1401c4d4b
0x1401c4d3c: movsx   eax,WORD PTR [rcx+0x84]
0x1401c4d43: cmp     edi,eax
0x1401c4d45: je      0x1401c4e3f
0x1401c4d4b: cmp     r13d,0x1
0x1401c4d4f: jne     0x1401c4e3f
0x1401c4d55: lea     rcx,[rbp+0xed0]
0x1401c4d5c: call    0x140070cc0
0x1401c4d61: nop     
0x1401c4d62: movzx   r8d,di
0x1401c4d66: movzx   edx,bx
0x1401c4d69: mov     rcx,QWORD PTR [rip+0x2349268]        # 0x14250dfd8
0x1401c4d70: call    0x1401bead0
0x1401c4d75: mov     ecx,eax
0x1401c4d77: cmp     eax,0x12
0x1401c4d7a: jl      0x1401c4daf
0x1401c4d7c: mov     eax,0x38e38e39
0x1401c4d81: imul    ecx
0x1401c4d83: mov     ecx,edx
0x1401c4d85: sar     ecx,1
0x1401c4d87: mov     eax,ecx
0x1401c4d89: shr     eax,0x1f
0x1401c4d8c: add     ecx,eax
0x1401c4d8e: lea     rdx,[rbp+0xed0]
0x1401c4d95: call    0x140547840
0x1401c4d9a: lea     rcx,[rbp+0xed0]
0x1401c4da1: call    0x140546b30
0x1401c4da6: lea     rdx,[rip+0x145a64b]        # 0x14161f3f8 ; literal=" days' travel"
0x1401c4dad: jmp     0x1401c4df9
0x1401c4daf: cmp     ecx,0xb
0x1401c4db2: jl      0x1401c4dbd
0x1401c4db4: lea     rdx,[rip+0x145a64d]        # 0x14161f408 ; literal="More than a day's travel"
0x1401c4dbb: jmp     0x1401c4df9
0x1401c4dbd: cmp     ecx,0x8
0x1401c4dc0: jl      0x1401c4dcb
0x1401c4dc2: lea     rdx,[rip+0x145a65f]        # 0x14161f428 ; literal="A day's travel"
0x1401c4dc9: jmp     0x1401c4df9
0x1401c4dcb: cmp     ecx,0x6
0x1401c4dce: jl      0x1401c4dd9
0x1401c4dd0: lea     rdx,[rip+0x145a661]        # 0x14161f438 ; literal="Nearly a day's travel"
0x1401c4dd7: jmp     0x1401c4df9
0x1401c4dd9: cmp     ecx,0x3
0x1401c4ddc: jl      0x1401c4de7
0x1401c4dde: lea     rdx,[rip+0x145a66b]        # 0x14161f450 ; literal="A half day's travel"
0x1401c4de5: jmp     0x1401c4df9
0x1401c4de7: test    ecx,ecx
0x1401c4de9: lea     rdx,[rip+0x145a678]        # 0x14161f468 ; literal='A short trip'
0x1401c4df0: jns     0x1401c4df9
0x1401c4df2: lea     rdx,[rip+0x145a67f]        # 0x14161f478 ; literal='Inaccessible from your location'
0x1401c4df9: lea     rcx,[rbp+0xed0]
0x1401c4e00: call    0x140070b90
0x1401c4e05: mov     r8d,r15d
0x1401c4e08: mov     edx,0x3
0x1401c4e0d: lea     rcx,[rip+0x24a7a5c]        # 0x14266c870
0x1401c4e14: call    0x1400bc750
0x1401c4e19: xor     r9d,r9d
0x1401c4e1c: xor     r8d,r8d
0x1401c4e1f: lea     rdx,[rbp+0xed0]
0x1401c4e26: lea     rcx,[rip+0x24a7a43]        # 0x14266c870
0x1401c4e2d: call    0x140af3400
0x1401c4e32: nop     
0x1401c4e33: lea     rcx,[rbp+0xed0]
0x1401c4e3a: call    0x140069460
0x1401c4e3f: mov     r13,QWORD PTR [rsp+0x78]
0x1401c4e44: cmp     QWORD PTR [r13+0x1d8],0x0
0x1401c4e4c: je      0x1401c8dd8
0x1401c4e52: lea     rdx,[rip+0x1443de3]        # 0x141608c3c ; literal='The '
0x1401c4e59: lea     rcx,[rbp+0xe10]
0x1401c4e60: call    0x140069780
0x1401c4e65: nop     
0x1401c4e66: mov     r8d,r15d
0x1401c4e69: mov     edx,0x5
0x1401c4e6e: lea     rcx,[rip+0x24a79fb]        # 0x14266c870
0x1401c4e75: call    0x1400bc750
0x1401c4e7a: lea     rcx,[rbp+0x10b0]
0x1401c4e81: call    0x140070cc0
0x1401c4e86: nop     
0x1401c4e87: lea     rdx,[rbp+0x10b0]
0x1401c4e8e: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c4e95: call    0x1410e4720
0x1401c4e9a: lea     rcx,[rbp+0x10b0]
0x1401c4ea1: call    0x140070b50
0x1401c4ea6: test    al,al
0x1401c4ea8: jne     0x1401c4ecb
0x1401c4eaa: lea     rdx,[rbp+0x10b0]
0x1401c4eb1: lea     rcx,[rbp+0xe10]
0x1401c4eb8: call    0x1400bb340
0x1401c4ebd: mov     dl,0x20
0x1401c4ebf: lea     rcx,[rbp+0xe10]
0x1401c4ec6: call    0x1400bb360
0x1401c4ecb: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c4ed2: call    0x14109aed0
0x1401c4ed7: mov     rbx,rax
0x1401c4eda: mov     QWORD PTR [rbp-0x20],rax
0x1401c4ede: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c4ee5: call    0x1409ce920
0x1401c4eea: mov     rdi,rax
0x1401c4eed: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c4ef4: cmp     WORD PTR [rcx+0x80],0xa
0x1401c4efc: je      0x1401c4f67
0x1401c4efe: test    rbx,rbx
0x1401c4f01: je      0x1401c4f67
0x1401c4f03: mov     ecx,DWORD PTR [rbx+0x9c]
0x1401c4f09: shr     ecx,0xa
0x1401c4f0c: not     ecx
0x1401c4f0e: test    cl,0x1
0x1401c4f11: je      0x1401c4f67
0x1401c4f13: lea     rcx,[rbp+0x14b0]
0x1401c4f1a: call    0x140070cc0
0x1401c4f1f: nop     
0x1401c4f20: mov     r8d,0xffffffff
0x1401c4f26: lea     rdx,[rbp+0x14b0]
0x1401c4f2d: movzx   ecx,WORD PTR [rbx+0x98]
0x1401c4f34: call    0x140abd210
0x1401c4f39: lea     rdx,[rbp+0x14b0]
0x1401c4f40: lea     rcx,[rbp+0xe10]
0x1401c4f47: call    0x1400bb340
0x1401c4f4c: mov     dl,0x20
0x1401c4f4e: lea     rcx,[rbp+0xe10]
0x1401c4f55: call    0x1400bb360
0x1401c4f5a: nop     
0x1401c4f5b: lea     rcx,[rbp+0x14b0]
0x1401c4f62: call    0x140069460
0x1401c4f67: lea     rdx,[rbp+0x10b0]
0x1401c4f6e: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c4f75: call    0x1410e4760
0x1401c4f7a: lea     rdx,[rbp+0x10b0]
0x1401c4f81: lea     rcx,[rbp+0xe10]
0x1401c4f88: call    0x1400bb340
0x1401c4f8d: lea     rdx,[rip+0x144181c]        # 0x1416067b0 ; literal=' of '
0x1401c4f94: lea     rcx,[rbp+0xe10]
0x1401c4f9b: call    0x140070b90
0x1401c4fa0: xor     r9d,r9d
0x1401c4fa3: mov     r8b,0x1
0x1401c4fa6: lea     rdx,[rbp+0x10b0]
0x1401c4fad: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c4fb4: call    0x140aae180
0x1401c4fb9: lea     rdx,[rbp+0x10b0]
0x1401c4fc0: lea     rcx,[rbp+0xe10]
0x1401c4fc7: call    0x1400bb340
0x1401c4fcc: lea     rcx,[rbp+0xe10]
0x1401c4fd3: call    0x1405468a0
0x1401c4fd8: lea     eax,[rsi-0x7]
0x1401c4fdb: movsxd  r14,eax
0x1401c4fde: mov     QWORD PTR [rbp-0x78],r14
0x1401c4fe2: lea     rcx,[rbp+0xe10]
0x1401c4fe9: call    0x140070960
0x1401c4fee: cmp     rax,r14
0x1401c4ff1: jb      0x1401c505c
0x1401c4ff3: lea     r14d,[rsi-0x8]
0x1401c4ff7: test    r14d,r14d
0x1401c4ffa: js      0x1401c5012
0x1401c4ffc: movsxd  rdx,esi
0x1401c4fff: sub     rdx,0x8
0x1401c5003: xor     r8d,r8d
0x1401c5006: lea     rcx,[rbp+0xe10]
0x1401c500d: call    0x1400e2860
0x1401c5012: cmp     r14d,0x3
0x1401c5016: jle     0x1401c5058
0x1401c5018: movsxd  rdx,esi
0x1401c501b: sub     rdx,0xb
0x1401c501f: lea     rcx,[rbp+0xe10]
0x1401c5026: call    0x1400fcbe0
0x1401c502b: mov     BYTE PTR [rax],0x2e
0x1401c502e: lea     eax,[rsi-0xa]
0x1401c5031: movsxd  rdx,eax
0x1401c5034: lea     rcx,[rbp+0xe10]
0x1401c503b: call    0x1400fcbe0
0x1401c5040: mov     BYTE PTR [rax],0x2e
0x1401c5043: lea     eax,[rsi-0x9]
0x1401c5046: movsxd  rdx,eax
0x1401c5049: lea     rcx,[rbp+0xe10]
0x1401c5050: call    0x1400fcbe0
0x1401c5055: mov     BYTE PTR [rax],0x2e
0x1401c5058: mov     r14,QWORD PTR [rbp-0x78]
0x1401c505c: xor     r9d,r9d
0x1401c505f: xor     r8d,r8d
0x1401c5062: lea     rdx,[rbp+0xe10]
0x1401c5069: lea     rcx,[rip+0x24a7800]        # 0x14266c870
0x1401c5070: call    0x140af3400
0x1401c5075: mov     rax,QWORD PTR [rip+0x21f75f4]        # 0x1423bc670
0x1401c507c: mov     r8d,r15d
0x1401c507f: mov     edx,0x6
0x1401c5084: lea     rcx,[rip+0x24a77e5]        # 0x14266c870
0x1401c508b: cmp     QWORD PTR [r13+0x1d8],rax
0x1401c5092: jne     0x1401c50e1
0x1401c5094: call    0x1400bc750
0x1401c5099: lea     rdx,[rip+0x145a648]        # 0x14161f6e8 ; literal='Your location'
0x1401c50a0: lea     rcx,[rbp+0x1670]
0x1401c50a7: call    0x140069780
0x1401c50ac: nop     
0x1401c50ad: xor     r9d,r9d
0x1401c50b0: xor     r8d,r8d
0x1401c50b3: lea     rdx,[rbp+0x1670]
0x1401c50ba: lea     rcx,[rip+0x24a77af]        # 0x14266c870
0x1401c50c1: call    0x140af3400
0x1401c50c6: nop     
0x1401c50c7: lea     rcx,[rbp+0x1670]
0x1401c50ce: call    0x140069460
0x1401c50d3: test    rdi,rdi
0x1401c50d6: je      0x1401c5957
0x1401c50dc: jmp     0x1401c5812
0x1401c50e1: call    0x1400bc750
0x1401c50e6: test    rdi,rdi
0x1401c50e9: je      0x1401c591a
0x1401c50ef: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c50f6: add     rcx,0x90
0x1401c50fd: call    0x1400709a0
0x1401c5102: mov     rbx,rax
0x1401c5105: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c510c: add     rcx,0xd8
0x1401c5113: lea     rdx,[rbp+0x50]
0x1401c5117: call    0x140070870
0x1401c511c: mov     rcx,QWORD PTR [r13+0x1d8]
0x1401c5123: add     rcx,0xd8
0x1401c512a: lea     rdx,[rbp+0x1a0]
0x1401c5131: call    0x140070860
0x1401c5136: lea     r8,[rbp+0x1a0]
0x1401c513d: lea     rdx,[rbp+0x3]
0x1401c5141: lea     rcx,[rbp+0x50]
0x1401c5145: call    0x140070450
0x1401c514a: xor     edx,edx
0x1401c514c: movzx   ecx,BYTE PTR [rax]
0x1401c514f: call    0x140066de0
0x1401c5154: test    al,al
0x1401c5156: je      0x1401c51bc
0x1401c5158: nop     DWORD PTR [rax+rax*1+0x0]
0x1401c5160: lea     rcx,[rbp+0x50]
0x1401c5164: call    0x140070440
0x1401c5169: mov     rcx,QWORD PTR [rax]
0x1401c516c: cmp     DWORD PTR [rcx],0x0
0x1401c516f: jle     0x1401c5191
0x1401c5171: lea     rcx,[rbp+0x50]
0x1401c5175: call    0x140070440
0x1401c517a: mov     rcx,QWORD PTR [rax]
0x1401c517d: cmp     DWORD PTR [rcx+0x18],0xffffffff
0x1401c5181: jne     0x1401c5191
0x1401c5183: lea     rcx,[rbp+0x50]
0x1401c5187: call    0x140070440
0x1401c518c: mov     rcx,QWORD PTR [rax]
0x1401c518f: add     ebx,DWORD PTR [rcx]
0x1401c5191: lea     rcx,[rbp+0x50]
0x1401c5195: call    0x140070430
0x1401c519a: lea     r8,[rbp+0x1a0]
0x1401c51a1: lea     rdx,[rbp+0x3]
0x1401c51a5: lea     rcx,[rbp+0x50]
0x1401c51a9: call    0x140070450
0x1401c51ae: xor     edx,edx
0x1401c51b0: movzx   ecx,BYTE PTR [rax]
0x1401c51b3: call    0x140066de0
0x1401c51b8: test    al,al
0x1401c51ba: jne     0x1401c5160
0x1401c51bc: cmp     ebx,0x30d4
0x1401c51c2: jl      0x1401c5201
0x1401c51c4: lea     rdx,[rip+0x145a52d]        # 0x14161f6f8 ; literal='Population: >10000'
0x1401c51cb: lea     rcx,[rbp+0x1690]
0x1401c51d2: call    0x140069780
0x1401c51d7: nop     
0x1401c51d8: mov     r9d,0x35
0x1401c51de: xor     r8d,r8d
0x1401c51e1: lea     rdx,[rbp+0x1690]
0x1401c51e8: lea     rcx,[rip+0x24a7681]        # 0x14266c870
0x1401c51ef: call    0x140af3400
0x1401c51f4: nop     
0x1401c51f5: lea     rcx,[rbp+0x1690]
0x1401c51fc: jmp     0x1401c5809
0x1401c5201: cmp     ebx,0x2134
0x1401c5207: jl      0x1401c5246
0x1401c5209: lea     rdx,[rip+0x145a500]        # 0x14161f710 ; literal='Population: ~10000'
0x1401c5210: lea     rcx,[rbp+0x16b0]
0x1401c5217: call    0x140069780
0x1401c521c: nop     
0x1401c521d: mov     r9d,0x35
0x1401c5223: xor     r8d,r8d
0x1401c5226: lea     rdx,[rbp+0x16b0]
0x1401c522d: lea     rcx,[rip+0x24a763c]        # 0x14266c870
0x1401c5234: call    0x140af3400
0x1401c5239: nop     
0x1401c523a: lea     rcx,[rbp+0x16b0]
0x1401c5241: jmp     0x1401c5809
0x1401c5246: cmp     ebx,0x1964
0x1401c524c: jl      0x1401c528b
0x1401c524e: lea     rdx,[rip+0x145a4d3]        # 0x14161f728 ; literal='Population: ~7500'
0x1401c5255: lea     rcx,[rbp+0x16d0]
0x1401c525c: call    0x140069780
0x1401c5261: nop     
0x1401c5262: mov     r9d,0x35
0x1401c5268: xor     r8d,r8d
0x1401c526b: lea     rdx,[rbp+0x16d0]
0x1401c5272: lea     rcx,[rip+0x24a75f7]        # 0x14266c870
0x1401c5279: call    0x140af3400
0x1401c527e: nop     
0x1401c527f: lea     rcx,[rbp+0x16d0]
0x1401c5286: jmp     0x1401c5809
0x1401c528b: cmp     ebx,0x157c
0x1401c5291: jl      0x1401c52d0
0x1401c5293: lea     rdx,[rip+0x145a4a6]        # 0x14161f740 ; literal='Population: ~6000'
0x1401c529a: lea     rcx,[rbp+0x16f0]
0x1401c52a1: call    0x140069780
0x1401c52a6: nop     
0x1401c52a7: mov     r9d,0x35
0x1401c52ad: xor     r8d,r8d
0x1401c52b0: lea     rdx,[rbp+0x16f0]
0x1401c52b7: lea     rcx,[rip+0x24a75b2]        # 0x14266c870
0x1401c52be: call    0x140af3400
0x1401c52c3: nop     
0x1401c52c4: lea     rcx,[rbp+0x16f0]
0x1401c52cb: jmp     0x1401c5809
0x1401c52d0: cmp     ebx,0x1194
0x1401c52d6: jl      0x1401c5315
0x1401c52d8: lea     rdx,[rip+0x145a479]        # 0x14161f758 ; literal='Population: ~5000'
0x1401c52df: lea     rcx,[rbp+0x1710]
0x1401c52e6: call    0x140069780
0x1401c52eb: nop     
0x1401c52ec: mov     r9d,0x35
0x1401c52f2: xor     r8d,r8d
0x1401c52f5: lea     rdx,[rbp+0x1710]
0x1401c52fc: lea     rcx,[rip+0x24a756d]        # 0x14266c870
0x1401c5303: call    0x140af3400
0x1401c5308: nop     
0x1401c5309: lea     rcx,[rbp+0x1710]
0x1401c5310: jmp     0x1401c5809
0x1401c5315: cmp     ebx,0xdac
0x1401c531b: jl      0x1401c535a
0x1401c531d: lea     rdx,[rip+0x145a44c]        # 0x14161f770 ; literal='Population: ~4000'
0x1401c5324: lea     rcx,[rbp+0x1730]
0x1401c532b: call    0x140069780
0x1401c5330: nop     
0x1401c5331: mov     r9d,0x35
0x1401c5337: xor     r8d,r8d
0x1401c533a: lea     rdx,[rbp+0x1730]
0x1401c5341: lea     rcx,[rip+0x24a7528]        # 0x14266c870
0x1401c5348: call    0x140af3400
0x1401c534d: nop     
0x1401c534e: lea     rcx,[rbp+0x1730]
0x1401c5355: jmp     0x1401c5809
0x1401c535a: cmp     ebx,0x9c4
0x1401c5360: jl      0x1401c539f
0x1401c5362: lea     rdx,[rip+0x145a41f]        # 0x14161f788 ; literal='Population: ~3000'
0x1401c5369: lea     rcx,[rbp+0x1750]
0x1401c5370: call    0x140069780
0x1401c5375: nop     
0x1401c5376: mov     r9d,0x35
0x1401c537c: xor     r8d,r8d
0x1401c537f: lea     rdx,[rbp+0x1750]
0x1401c5386: lea     rcx,[rip+0x24a74e3]        # 0x14266c870
0x1401c538d: call    0x140af3400
0x1401c5392: nop     
0x1401c5393: lea     rcx,[rbp+0x1750]
0x1401c539a: jmp     0x1401c5809
0x1401c539f: cmp     ebx,0x5dc
0x1401c53a5: jl      0x1401c53e4
0x1401c53a7: lea     rdx,[rip+0x145a3f2]        # 0x14161f7a0 ; literal='Population: ~2000'
0x1401c53ae: lea     rcx,[rbp+0x1770]
0x1401c53b5: call    0x140069780
0x1401c53ba: nop     
0x1401c53bb: mov     r9d,0x35
0x1401c53c1: xor     r8d,r8d
0x1401c53c4: lea     rdx,[rbp+0x1770]
0x1401c53cb: lea     rcx,[rip+0x24a749e]        # 0x14266c870
0x1401c53d2: call    0x140af3400
0x1401c53d7: nop     
0x1401c53d8: lea     rcx,[rbp+0x1770]
0x1401c53df: jmp     0x1401c5809
0x1401c53e4: cmp     ebx,0x352
0x1401c53ea: jl      0x1401c5429
0x1401c53ec: lea     rdx,[rip+0x145a3c5]        # 0x14161f7b8 ; literal='Population: ~1000'
0x1401c53f3: lea     rcx,[rbp+0x1790]
0x1401c53fa: call    0x140069780
0x1401c53ff: nop     
0x1401c5400: mov     r9d,0x35
0x1401c5406: xor     r8d,r8d
0x1401c5409: lea     rdx,[rbp+0x1790]
0x1401c5410: lea     rcx,[rip+0x24a7459]        # 0x14266c870
0x1401c5417: call    0x140af3400
0x1401c541c: nop     
0x1401c541d: lea     rcx,[rbp+0x1790]
0x1401c5424: jmp     0x1401c5809
0x1401c5429: cmp     ebx,0x28a
0x1401c542f: jl      0x1401c546e
0x1401c5431: lea     rdx,[rip+0x145a398]        # 0x14161f7d0 ; literal='Population: ~750'
0x1401c5438: lea     rcx,[rbp+0x17b0]
0x1401c543f: call    0x140069780
0x1401c5444: nop     
0x1401c5445: mov     r9d,0x35
0x1401c544b: xor     r8d,r8d
0x1401c544e: lea     rdx,[rbp+0x17b0]
0x1401c5455: lea     rcx,[rip+0x24a7414]        # 0x14266c870
0x1401c545c: call    0x140af3400
0x1401c5461: nop     
0x1401c5462: lea     rcx,[rbp+0x17b0]
0x1401c5469: jmp     0x1401c5809
0x1401c546e: cmp     ebx,0x226
0x1401c5474: jl      0x1401c54b3
0x1401c5476: lea     rdx,[rip+0x145a36b]        # 0x14161f7e8 ; literal='Population: ~600'
0x1401c547d: lea     rcx,[rbp+0x17d0]
0x1401c5484: call    0x140069780
0x1401c5489: nop     
0x1401c548a: mov     r9d,0x35
0x1401c5490: xor     r8d,r8d
0x1401c5493: lea     rdx,[rbp+0x17d0]
0x1401c549a: lea     rcx,[rip+0x24a73cf]        # 0x14266c870
0x1401c54a1: call    0x140af3400
0x1401c54a6: nop     
0x1401c54a7: lea     rcx,[rbp+0x17d0]
0x1401c54ae: jmp     0x1401c5809
0x1401c54b3: cmp     ebx,0x1c2
0x1401c54b9: jl      0x1401c54f8
0x1401c54bb: lea     rdx,[rip+0x145a33e]        # 0x14161f800 ; literal='Population: ~500'
0x1401c54c2: lea     rcx,[rbp+0x17f0]
0x1401c54c9: call    0x140069780
0x1401c54ce: nop     
0x1401c54cf: mov     r9d,0x35
0x1401c54d5: xor     r8d,r8d
0x1401c54d8: lea     rdx,[rbp+0x17f0]
0x1401c54df: lea     rcx,[rip+0x24a738a]        # 0x14266c870
0x1401c54e6: call    0x140af3400
0x1401c54eb: nop     
0x1401c54ec: lea     rcx,[rbp+0x17f0]
0x1401c54f3: jmp     0x1401c5809
0x1401c54f8: cmp     ebx,0x15e
0x1401c54fe: jl      0x1401c553d
0x1401c5500: lea     rdx,[rip+0x145a311]        # 0x14161f818 ; literal='Population: ~400'
0x1401c5507: lea     rcx,[rbp+0x1810]
0x1401c550e: call    0x140069780
0x1401c5513: nop     
0x1401c5514: mov     r9d,0x35
0x1401c551a: xor     r8d,r8d
0x1401c551d: lea     rdx,[rbp+0x1810]
0x1401c5524: lea     rcx,[rip+0x24a7345]        # 0x14266c870
0x1401c552b: call    0x140af3400
0x1401c5530: nop     
0x1401c5531: lea     rcx,[rbp+0x1810]
0x1401c5538: jmp     0x1401c5809
0x1401c553d: cmp     ebx,0xfa
0x1401c5543: jl      0x1401c5582
0x1401c5545: lea     rdx,[rip+0x145a2e4]        # 0x14161f830 ; literal='Population: ~300'
0x1401c554c: lea     rcx,[rbp+0x1830]
0x1401c5553: call    0x140069780
0x1401c5558: nop     
0x1401c5559: mov     r9d,0x35
0x1401c555f: xor     r8d,r8d
0x1401c5562: lea     rdx,[rbp+0x1830]
0x1401c5569: lea     rcx,[rip+0x24a7300]        # 0x14266c870
0x1401c5570: call    0x140af3400
0x1401c5575: nop     
0x1401c5576: lea     rcx,[rbp+0x1830]
0x1401c557d: jmp     0x1401c5809
0x1401c5582: cmp     ebx,0x96
0x1401c5588: jl      0x1401c55c7
0x1401c558a: lea     rdx,[rip+0x145a2b7]        # 0x14161f848 ; literal='Population: ~200'
0x1401c5591: lea     rcx,[rbp+0x1850]
0x1401c5598: call    0x140069780
0x1401c559d: nop     
0x1401c559e: mov     r9d,0x35
0x1401c55a4: xor     r8d,r8d
0x1401c55a7: lea     rdx,[rbp+0x1850]
0x1401c55ae: lea     rcx,[rip+0x24a72bb]        # 0x14266c870
0x1401c55b5: call    0x140af3400
0x1401c55ba: nop     
0x1401c55bb: lea     rcx,[rbp+0x1850]
0x1401c55c2: jmp     0x1401c5809
0x1401c55c7: cmp     ebx,0x55
0x1401c55ca: jl      0x1401c5609
0x1401c55cc: lea     rdx,[rip+0x1459ffd]        # 0x14161f5d0 ; literal='Population: ~100'
0x1401c55d3: lea     rcx,[rbp+0x1870]
0x1401c55da: call    0x140069780
0x1401c55df: nop     
0x1401c55e0: mov     r9d,0x35
0x1401c55e6: xor     r8d,r8d
0x1401c55e9: lea     rdx,[rbp+0x1870]
0x1401c55f0: lea     rcx,[rip+0x24a7279]        # 0x14266c870
0x1401c55f7: call    0x140af3400
0x1401c55fc: nop     
0x1401c55fd: lea     rcx,[rbp+0x1870]
0x1401c5604: jmp     0x1401c5809
0x1401c5609: cmp     ebx,0x41
0x1401c560c: jl      0x1401c564b
0x1401c560e: lea     rdx,[rip+0x1459fd3]        # 0x14161f5e8 ; literal='Population: ~75'
0x1401c5615: lea     rcx,[rbp+0x1890]
0x1401c561c: call    0x140069780
0x1401c5621: nop     
0x1401c5622: mov     r9d,0x35
0x1401c5628: xor     r8d,r8d
0x1401c562b: lea     rdx,[rbp+0x1890]
0x1401c5632: lea     rcx,[rip+0x24a7237]        # 0x14266c870
0x1401c5639: call    0x140af3400
0x1401c563e: nop     
0x1401c563f: lea     rcx,[rbp+0x1890]
0x1401c5646: jmp     0x1401c5809
0x1401c564b: cmp     ebx,0x37
0x1401c564e: jl      0x1401c568d
0x1401c5650: lea     rdx,[rip+0x1459fa1]        # 0x14161f5f8 ; literal='Population: ~60'
0x1401c5657: lea     rcx,[rbp+0x18b0]
0x1401c565e: call    0x140069780
0x1401c5663: nop     
0x1401c5664: mov     r9d,0x35
0x1401c566a: xor     r8d,r8d
0x1401c566d: lea     rdx,[rbp+0x18b0]
0x1401c5674: lea     rcx,[rip+0x24a71f5]        # 0x14266c870
0x1401c567b: call    0x140af3400
0x1401c5680: nop     
0x1401c5681: lea     rcx,[rbp+0x18b0]
0x1401c5688: jmp     0x1401c5809
0x1401c568d: cmp     ebx,0x2d
0x1401c5690: jl      0x1401c56cf
0x1401c5692: lea     rdx,[rip+0x1459f6f]        # 0x14161f608 ; literal='Population: ~50'
0x1401c5699: lea     rcx,[rbp+0x18d0]
0x1401c56a0: call    0x140069780
0x1401c56a5: nop     
0x1401c56a6: mov     r9d,0x35
0x1401c56ac: xor     r8d,r8d
0x1401c56af: lea     rdx,[rbp+0x18d0]
0x1401c56b6: lea     rcx,[rip+0x24a71b3]        # 0x14266c870
0x1401c56bd: call    0x140af3400
0x1401c56c2: nop     
0x1401c56c3: lea     rcx,[rbp+0x18d0]
0x1401c56ca: jmp     0x1401c5809
0x1401c56cf: cmp     ebx,0x23
0x1401c56d2: jl      0x1401c5711
0x1401c56d4: lea     rdx,[rip+0x1459f3d]        # 0x14161f618 ; literal='Population: ~40'
0x1401c56db: lea     rcx,[rbp+0x18f0]
0x1401c56e2: call    0x140069780
0x1401c56e7: nop     
0x1401c56e8: mov     r9d,0x35
0x1401c56ee: xor     r8d,r8d
0x1401c56f1: lea     rdx,[rbp+0x18f0]
0x1401c56f8: lea     rcx,[rip+0x24a7171]        # 0x14266c870
0x1401c56ff: call    0x140af3400
0x1401c5704: nop     
0x1401c5705: lea     rcx,[rbp+0x18f0]
0x1401c570c: jmp     0x1401c5809
0x1401c5711: cmp     ebx,0x19
0x1401c5714: jl      0x1401c5753
0x1401c5716: lea     rdx,[rip+0x1459f0b]        # 0x14161f628 ; literal='Population: ~30'
0x1401c571d: lea     rcx,[rbp+0x1910]
0x1401c5724: call    0x140069780
0x1401c5729: nop     
0x1401c572a: mov     r9d,0x35
0x1401c5730: xor     r8d,r8d
0x1401c5733: lea     rdx,[rbp+0x1910]
0x1401c573a: lea     rcx,[rip+0x24a712f]        # 0x14266c870
0x1401c5741: call    0x140af3400
0x1401c5746: nop     
0x1401c5747: lea     rcx,[rbp+0x1910]
0x1401c574e: jmp     0x1401c5809
0x1401c5753: cmp     ebx,0xf
0x1401c5756: jl      0x1401c5792
0x1401c5758: lea     rdx,[rip+0x1459ed9]        # 0x14161f638 ; literal='Population: ~20'
0x1401c575f: lea     rcx,[rbp+0x1930]
0x1401c5766: call    0x140069780
0x1401c576b: nop     
0x1401c576c: mov     r9d,0x35
0x1401c5772: xor     r8d,r8d
0x1401c5775: lea     rdx,[rbp+0x1930]
0x1401c577c: lea     rcx,[rip+0x24a70ed]        # 0x14266c870
0x1401c5783: call    0x140af3400
0x1401c5788: nop     
0x1401c5789: lea     rcx,[rbp+0x1930]
0x1401c5790: jmp     0x1401c5809
0x1401c5792: cmp     ebx,0x7
0x1401c5795: jl      0x1401c57d1
0x1401c5797: lea     rdx,[rip+0x1459eaa]        # 0x14161f648 ; literal='Population: ~10'
0x1401c579e: lea     rcx,[rbp+0x1950]
0x1401c57a5: call    0x140069780
0x1401c57aa: nop     
0x1401c57ab: mov     r9d,0x35
0x1401c57b1: xor     r8d,r8d
0x1401c57b4: lea     rdx,[rbp+0x1950]
0x1401c57bb: lea     rcx,[rip+0x24a70ae]        # 0x14266c870
0x1401c57c2: call    0x140af3400
0x1401c57c7: nop     
0x1401c57c8: lea     rcx,[rbp+0x1950]
0x1401c57cf: jmp     0x1401c5809
0x1401c57d1: lea     rdx,[rip+0x1459e80]        # 0x14161f658 ; literal='Population: <10'
0x1401c57d8: lea     rcx,[rbp+0x1970]
0x1401c57df: call    0x140069780
0x1401c57e4: nop     
0x1401c57e5: mov     r9d,0x35
0x1401c57eb: xor     r8d,r8d
0x1401c57ee: lea     rdx,[rbp+0x1970]
0x1401c57f5: lea     rcx,[rip+0x24a7074]        # 0x14266c870
0x1401c57fc: call    0x140af3400
0x1401c5801: nop     
0x1401c5802: lea     rcx,[rbp+0x1970]
0x1401c5809: call    0x140069460
0x1401c580e: mov     rbx,QWORD PTR [rbp-0x20]
0x1401c5812: lea     rcx,[rbp+0x14d0]
0x1401c5819: call    0x140070cc0
0x1401c581e: nop     
0x1401c581f: lea     rcx,[rdi+0x20]
0x1401c5823: xor     r9d,r9d
0x1401c5826: mov     r8b,0x1
0x1401c5829: lea     rdx,[rbp+0x14d0]
0x1401c5830: call    0x140aae180
0x1401c5835: mov     r8d,r15d
0x1401c5838: mov     edx,0x7
0x1401c583d: lea     rcx,[rip+0x24a702c]        # 0x14266c870
0x1401c5844: call    0x1400bc750
0x1401c5849: lea     rdx,[rip+0x1459e30]        # 0x14161f680 ; literal='Site government: '
0x1401c5850: lea     rcx,[rbp+0x1030]
0x1401c5857: call    0x140069780
0x1401c585c: nop     
0x1401c585d: lea     rdx,[rbp+0x14d0]
0x1401c5864: lea     rcx,[rbp+0x1030]
0x1401c586b: call    0x1400bb340
0x1401c5870: lea     rcx,[rbp+0x1030]
0x1401c5877: call    0x140070960
0x1401c587c: cmp     rax,r14
0x1401c587f: jb      0x1401c58ea
0x1401c5881: lea     r14d,[rsi-0x8]
0x1401c5885: test    r14d,r14d
0x1401c5888: js      0x1401c58a0
0x1401c588a: movsxd  rdx,esi
0x1401c588d: sub     rdx,0x8
0x1401c5891: xor     r8d,r8d
0x1401c5894: lea     rcx,[rbp+0x1030]
0x1401c589b: call    0x1400e2860
0x1401c58a0: cmp     r14d,0x3
0x1401c58a4: jle     0x1401c58e6
0x1401c58a6: movsxd  rdx,esi
0x1401c58a9: sub     rdx,0xb
0x1401c58ad: lea     rcx,[rbp+0x1030]
0x1401c58b4: call    0x1400fcbe0
0x1401c58b9: mov     BYTE PTR [rax],0x2e
0x1401c58bc: lea     eax,[rsi-0xa]
0x1401c58bf: movsxd  rdx,eax
0x1401c58c2: lea     rcx,[rbp+0x1030]
0x1401c58c9: call    0x1400fcbe0
0x1401c58ce: mov     BYTE PTR [rax],0x2e
0x1401c58d1: lea     eax,[rsi-0x9]
0x1401c58d4: movsxd  rdx,eax
0x1401c58d7: lea     rcx,[rbp+0x1030]
0x1401c58de: call    0x1400fcbe0
0x1401c58e3: mov     BYTE PTR [rax],0x2e
0x1401c58e6: mov     r14,QWORD PTR [rbp-0x78]
0x1401c58ea: xor     r9d,r9d
0x1401c58ed: xor     r8d,r8d
0x1401c58f0: lea     rdx,[rbp+0x1030]
0x1401c58f7: lea     rcx,[rip+0x24a6f72]        # 0x14266c870
0x1401c58fe: call    0x140af3400
0x1401c5903: nop     
0x1401c5904: lea     rcx,[rbp+0x1030]
0x1401c590b: call    0x140069460
0x1401c5910: nop     
0x1401c5911: lea     rcx,[rbp+0x14d0]
0x1401c5918: jmp     0x1401c5952
0x1401c591a: lea     rdx,[rip+0x1459d47]        # 0x14161f668 ; literal='No civilized population'
0x1401c5921: lea     rcx,[rbp+0x1990]
0x1401c5928: call    0x140069780
0x1401c592d: nop     
0x1401c592e: mov     r9d,0x35
0x1401c5934: xor     r8d,r8d
0x1401c5937: lea     rdx,[rbp+0x1990]
0x1401c593e: lea     rcx,[rip+0x24a6f2b]        # 0x14266c870
0x1401c5945: call    0x140af3400
0x1401c594a: nop     
0x1401c594b: lea     rcx,[rbp+0x1990]
0x1401c5952: call    0x140069460
0x1401c5957: test    rbx,rbx
0x1401c595a: je      0x1401c5a70
0x1401c5960: cmp     rbx,rdi
0x1401c5963: je      0x1401c5a70
0x1401c5969: lea     rcx,[rbp+0x14f0]
0x1401c5970: call    0x140070cc0
0x1401c5975: nop     
0x1401c5976: lea     rcx,[rbx+0x20]
0x1401c597a: xor     r9d,r9d
0x1401c597d: mov     r8b,0x1
0x1401c5980: lea     rdx,[rbp+0x14f0]
0x1401c5987: call    0x140aae180
0x1401c598c: mov     r8d,r15d
0x1401c598f: mov     edx,0x8
0x1401c5994: lea     rcx,[rip+0x24a6ed5]        # 0x14266c870
0x1401c599b: call    0x1400bc750
0x1401c59a0: lea     rdx,[rip+0x1459cf1]        # 0x14161f698 ; literal='Civilization: '
0x1401c59a7: lea     rcx,[rbp+0x1050]
0x1401c59ae: call    0x140069780
0x1401c59b3: nop     
0x1401c59b4: lea     rdx,[rbp+0x14f0]
0x1401c59bb: lea     rcx,[rbp+0x1050]
0x1401c59c2: call    0x1400bb340
0x1401c59c7: lea     rcx,[rbp+0x1050]
0x1401c59ce: call    0x140070960
0x1401c59d3: cmp     rax,r14
0x1401c59d6: jb      0x1401c5a3d
0x1401c59d8: lea     r14d,[rsi-0x8]
0x1401c59dc: test    r14d,r14d
0x1401c59df: js      0x1401c59f7
0x1401c59e1: movsxd  rdx,esi
0x1401c59e4: sub     rdx,0x8
0x1401c59e8: xor     r8d,r8d
0x1401c59eb: lea     rcx,[rbp+0x1050]
0x1401c59f2: call    0x1400e2860
0x1401c59f7: cmp     r14d,0x3
0x1401c59fb: jle     0x1401c5a3d
0x1401c59fd: movsxd  rdx,esi
0x1401c5a00: sub     rdx,0xb
0x1401c5a04: lea     rcx,[rbp+0x1050]
0x1401c5a0b: call    0x1400fcbe0
0x1401c5a10: mov     BYTE PTR [rax],0x2e
0x1401c5a13: lea     eax,[rsi-0xa]
0x1401c5a16: movsxd  rdx,eax
0x1401c5a19: lea     rcx,[rbp+0x1050]
0x1401c5a20: call    0x1400fcbe0
0x1401c5a25: mov     BYTE PTR [rax],0x2e
0x1401c5a28: lea     eax,[rsi-0x9]
0x1401c5a2b: movsxd  rdx,eax
0x1401c5a2e: lea     rcx,[rbp+0x1050]
0x1401c5a35: call    0x1400fcbe0
0x1401c5a3a: mov     BYTE PTR [rax],0x2e
0x1401c5a3d: xor     r9d,r9d
0x1401c5a40: xor     r8d,r8d
0x1401c5a43: lea     rdx,[rbp+0x1050]
0x1401c5a4a: lea     rcx,[rip+0x24a6e1f]        # 0x14266c870
0x1401c5a51: call    0x140af3400
0x1401c5a56: nop     
0x1401c5a57: lea     rcx,[rbp+0x1050]
0x1401c5a5e: call    0x140069460
0x1401c5a63: nop     
0x1401c5a64: lea     rcx,[rbp+0x14f0]
0x1401c5a6b: call    0x140069460
0x1401c5a70: mov     edx,DWORD PTR [rip+0x21f0082]        # 0x1423b5af8
0x1401c5a76: lea     rcx,[rip+0x222e1fb]        # 0x1423f3c78
0x1401c5a7d: call    0x14007f120
0x1401c5a82: mov     r13,rax
0x1401c5a85: mov     edx,DWORD PTR [rip+0x21f0065]        # 0x1423b5af0
0x1401c5a8b: lea     rcx,[rip+0x222e1e6]        # 0x1423f3c78
0x1401c5a92: call    0x14007f120
0x1401c5a97: mov     QWORD PTR [rbp-0x10],rax
0x1401c5a9b: test    rax,rax
0x1401c5a9e: je      0x1401c5eae
0x1401c5aa4: test    r13,r13
0x1401c5aa7: je      0x1401c5eae
0x1401c5aad: test    rbx,rbx
0x1401c5ab0: je      0x1401c5eae
0x1401c5ab6: test    rdi,rdi
0x1401c5ab9: je      0x1401c5f16
0x1401c5abf: cmp     rax,rbx
0x1401c5ac2: je      0x1401c5eb3
0x1401c5ac8: lea     rcx,[rax+0x1028]
0x1401c5acf: mov     edx,DWORD PTR [rbx+0x4]
0x1401c5ad2: call    0x140101120
0x1401c5ad7: mov     r14,rax
0x1401c5ada: lea     rcx,[r13+0x1028]
0x1401c5ae1: mov     edx,DWORD PTR [rdi+0x4]
0x1401c5ae4: call    0x140101120
0x1401c5ae9: mov     rbx,rax
0x1401c5aec: mov     r8d,r15d
0x1401c5aef: mov     edx,0x9
0x1401c5af4: lea     rcx,[rip+0x24a6d75]        # 0x14266c870
0x1401c5afb: call    0x1400bc750
0x1401c5b00: test    rbx,rbx
0x1401c5b03: je      0x1401c5ccd
0x1401c5b09: movzx   eax,WORD PTR [rbx+0x4]
0x1401c5b0d: cmp     ax,0x3
0x1401c5b11: je      0x1401c5b54
0x1401c5b13: cmp     ax,0x4
0x1401c5b17: jne     0x1401c5ccd
0x1401c5b1d: lea     rdx,[rip+0x1459b94]        # 0x14161f6b8 ; literal='They accept '
0x1401c5b24: lea     rcx,[rbp+0x19b0]
0x1401c5b2b: call    0x140069780
0x1401c5b30: nop     
0x1401c5b31: xor     r9d,r9d
0x1401c5b34: mov     r8b,0x3
0x1401c5b37: lea     rdx,[rbp+0x19b0]
0x1401c5b3e: lea     rcx,[rip+0x24a6d2b]        # 0x14266c870
0x1401c5b45: call    0x140af3400
0x1401c5b4a: nop     
0x1401c5b4b: lea     rcx,[rbp+0x19b0]
0x1401c5b52: jmp     0x1401c5b89
0x1401c5b54: lea     rdx,[rip+0x1459b4d]        # 0x14161f6a8 ; literal='They offer '
0x1401c5b5b: lea     rcx,[rbp+0x19d0]
0x1401c5b62: call    0x140069780
0x1401c5b67: nop     
0x1401c5b68: xor     r9d,r9d
0x1401c5b6b: mov     r8b,0x3
0x1401c5b6e: lea     rdx,[rbp+0x19d0]
0x1401c5b75: lea     rcx,[rip+0x24a6cf4]        # 0x14266c870
0x1401c5b7c: call    0x140af3400
0x1401c5b81: nop     
0x1401c5b82: lea     rcx,[rbp+0x19d0]
0x1401c5b89: call    0x140069460
0x1401c5b8e: mov     ecx,DWORD PTR [rbx+0x44]
0x1401c5b91: test    ecx,ecx
0x1401c5b93: je      0x1401c5c54
0x1401c5b99: sub     ecx,0x1
0x1401c5b9c: je      0x1401c5c1d
0x1401c5b9e: sub     ecx,0x1
0x1401c5ba1: je      0x1401c5be6
0x1401c5ba3: cmp     ecx,0x1
0x1401c5ba6: jne     0x1401c5c8e
0x1401c5bac: lea     rdx,[rip+0x14533f5]        # 0x141618fa8 ; literal='Winter'
0x1401c5bb3: lea     rcx,[rbp+0x19f0]
0x1401c5bba: call    0x140069780
0x1401c5bbf: nop     
0x1401c5bc0: xor     r9d,r9d
0x1401c5bc3: mov     r8b,0x3
0x1401c5bc6: lea     rdx,[rbp+0x19f0]
0x1401c5bcd: lea     rcx,[rip+0x24a6c9c]        # 0x14266c870
0x1401c5bd4: call    0x140af3400
0x1401c5bd9: nop     
0x1401c5bda: lea     rcx,[rbp+0x19f0]
0x1401c5be1: jmp     0x1401c5c89
0x1401c5be6: lea     rdx,[rip+0x14531ef]        # 0x141618ddc ; literal='Autumn'
0x1401c5bed: lea     rcx,[rbp+0x1a10]
0x1401c5bf4: call    0x140069780
0x1401c5bf9: nop     
0x1401c5bfa: xor     r9d,r9d
0x1401c5bfd: mov     r8b,0x3
0x1401c5c00: lea     rdx,[rbp+0x1a10]
0x1401c5c07: lea     rcx,[rip+0x24a6c62]        # 0x14266c870
0x1401c5c0e: call    0x140af3400
0x1401c5c13: nop     
0x1401c5c14: lea     rcx,[rbp+0x1a10]
0x1401c5c1b: jmp     0x1401c5c89
0x1401c5c1d: lea     rdx,[rip+0x14531b0]        # 0x141618dd4 ; literal='Summer'
0x1401c5c24: lea     rcx,[rbp+0x1a30]
0x1401c5c2b: call    0x140069780
0x1401c5c30: nop     
0x1401c5c31: xor     r9d,r9d
0x1401c5c34: mov     r8b,0x3
0x1401c5c37: lea     rdx,[rbp+0x1a30]
0x1401c5c3e: lea     rcx,[rip+0x24a6c2b]        # 0x14266c870
0x1401c5c45: call    0x140af3400
0x1401c5c4a: nop     
0x1401c5c4b: lea     rcx,[rbp+0x1a30]
0x1401c5c52: jmp     0x1401c5c89
0x1401c5c54: lea     rdx,[rip+0x1453171]        # 0x141618dcc ; literal='Spring'
0x1401c5c5b: lea     rcx,[rbp+0x1a50]
0x1401c5c62: call    0x140069780
0x1401c5c67: nop     
0x1401c5c68: xor     r9d,r9d
0x1401c5c6b: mov     r8b,0x3
0x1401c5c6e: lea     rdx,[rbp+0x1a50]
0x1401c5c75: lea     rcx,[rip+0x24a6bf4]        # 0x14266c870
0x1401c5c7c: call    0x140af3400
0x1401c5c81: nop     
0x1401c5c82: lea     rcx,[rbp+0x1a50]
0x1401c5c89: call    0x140069460
0x1401c5c8e: lea     rdx,[rip+0x1459a33]        # 0x14161f6c8 ; literal=' tribute'
0x1401c5c95: lea     rcx,[rbp+0x1a70]
0x1401c5c9c: call    0x140069780
0x1401c5ca1: nop     
0x1401c5ca2: xor     r9d,r9d
0x1401c5ca5: xor     r8d,r8d
0x1401c5ca8: lea     rdx,[rbp+0x1a70]
0x1401c5caf: lea     rcx,[rip+0x24a6bba]        # 0x14266c870
0x1401c5cb6: call    0x140af3400
0x1401c5cbb: nop     
0x1401c5cbc: lea     rcx,[rbp+0x1a70]
0x1401c5cc3: call    0x140069460
0x1401c5cc8: jmp     0x1401c5eb3
0x1401c5ccd: test    r14,r14
0x1401c5cd0: je      0x1401c5e72
0x1401c5cd6: movsx   rax,WORD PTR [r14+0x4]
0x1401c5cdb: cmp     eax,0x5
0x1401c5cde: ja      0x1401c5eb3
0x1401c5ce4: lea     rdx,[rip+0xffffffffffe3a315]        # 0x140000000
0x1401c5ceb: mov     ecx,DWORD PTR [rdx+rax*4+0x1d65b0]
0x1401c5cf2: add     rcx,rdx
0x1401c5cf5: jmp     rcx
0x1401c5cf7: test    BYTE PTR [r14+0x40],0x4
0x1401c5cfc: je      0x1401c5d3d
0x1401c5cfe: lea     rdx,[rip+0x14599d3]        # 0x14161f6d8 ; literal='Alliance'
0x1401c5d05: lea     rcx,[rbp+0x1a90]
0x1401c5d0c: call    0x140069780
0x1401c5d11: nop     
0x1401c5d12: xor     r9d,r9d
0x1401c5d15: xor     r8d,r8d
0x1401c5d18: lea     rdx,[rbp+0x1a90]
0x1401c5d1f: lea     rcx,[rip+0x24a6b4a]        # 0x14266c870
0x1401c5d26: call    0x140af3400
0x1401c5d2b: nop     
0x1401c5d2c: lea     rcx,[rbp+0x1a90]
0x1401c5d33: call    0x140069460
0x1401c5d38: jmp     0x1401c5eb3
0x1401c5d3d: lea     rdx,[rip+0x143df38]        # 0x141603c7c ; literal='Peace'
0x1401c5d44: lea     rcx,[rbp+0x1ab0]
0x1401c5d4b: call    0x140069780
0x1401c5d50: nop     
0x1401c5d51: xor     r9d,r9d
0x1401c5d54: xor     r8d,r8d
0x1401c5d57: lea     rdx,[rbp+0x1ab0]
0x1401c5d5e: lea     rcx,[rip+0x24a6b0b]        # 0x14266c870
0x1401c5d65: call    0x140af3400
0x1401c5d6a: nop     
0x1401c5d6b: lea     rcx,[rbp+0x1ab0]
0x1401c5d72: call    0x140069460
0x1401c5d77: jmp     0x1401c5eb3
0x1401c5d7c: lea     rdx,[rip+0x1459c45]        # 0x14161f9c8 ; literal='War'
0x1401c5d83: lea     rcx,[rbp+0x1ad0]
0x1401c5d8a: call    0x140069780
0x1401c5d8f: nop     
0x1401c5d90: xor     r9d,r9d
0x1401c5d93: xor     r8d,r8d
0x1401c5d96: lea     rdx,[rbp+0x1ad0]
0x1401c5d9d: lea     rcx,[rip+0x24a6acc]        # 0x14266c870
0x1401c5da4: call    0x140af3400
0x1401c5da9: nop     
0x1401c5daa: lea     rcx,[rbp+0x1ad0]
0x1401c5db1: call    0x140069460
0x1401c5db6: jmp     0x1401c5eb3
0x1401c5dbb: lea     rdx,[rip+0x1459c1e]        # 0x14161f9e0 ; literal='They offer tribute'
0x1401c5dc2: lea     rcx,[rbp+0x1af0]
0x1401c5dc9: call    0x140069780
0x1401c5dce: nop     
0x1401c5dcf: xor     r9d,r9d
0x1401c5dd2: xor     r8d,r8d
0x1401c5dd5: lea     rdx,[rbp+0x1af0]
0x1401c5ddc: lea     rcx,[rip+0x24a6a8d]        # 0x14266c870
0x1401c5de3: call    0x140af3400
0x1401c5de8: nop     
0x1401c5de9: lea     rcx,[rbp+0x1af0]
0x1401c5df0: call    0x140069460
0x1401c5df5: jmp     0x1401c5eb3
0x1401c5dfa: lea     rdx,[rip+0x1459bf7]        # 0x14161f9f8 ; literal='They accept tribute'
0x1401c5e01: lea     rcx,[rbp+0x1b10]
0x1401c5e08: call    0x140069780
0x1401c5e0d: nop     
0x1401c5e0e: xor     r9d,r9d
0x1401c5e11: xor     r8d,r8d
0x1401c5e14: lea     rdx,[rbp+0x1b10]
0x1401c5e1b: lea     rcx,[rip+0x24a6a4e]        # 0x14266c870
0x1401c5e22: call    0x140af3400
0x1401c5e27: nop     
0x1401c5e28: lea     rcx,[rbp+0x1b10]
0x1401c5e2f: call    0x140069460
0x1401c5e34: jmp     0x1401c5eb3
0x1401c5e36: lea     rdx,[rip+0x1459bd3]        # 0x14161fa10 ; literal='Skirmishing'
0x1401c5e3d: lea     rcx,[rbp+0x1b30]
0x1401c5e44: call    0x140069780
0x1401c5e49: nop     
0x1401c5e4a: xor     r9d,r9d
0x1401c5e4d: xor     r8d,r8d
0x1401c5e50: lea     rdx,[rbp+0x1b30]
0x1401c5e57: lea     rcx,[rip+0x24a6a12]        # 0x14266c870
0x1401c5e5e: call    0x140af3400
0x1401c5e63: nop     
0x1401c5e64: lea     rcx,[rbp+0x1b30]
0x1401c5e6b: call    0x140069460
0x1401c5e70: jmp     0x1401c5eb3
0x1401c5e72: lea     rdx,[rip+0x1459b57]        # 0x14161f9d0 ; literal='No contact'
0x1401c5e79: lea     rcx,[rbp+0x1b50]
0x1401c5e80: call    0x140069780
0x1401c5e85: nop     
0x1401c5e86: xor     r9d,r9d
0x1401c5e89: xor     r8d,r8d
0x1401c5e8c: lea     rdx,[rbp+0x1b50]
0x1401c5e93: lea     rcx,[rip+0x24a69d6]        # 0x14266c870
0x1401c5e9a: call    0x140af3400
0x1401c5e9f: nop     
0x1401c5ea0: lea     rcx,[rbp+0x1b50]
0x1401c5ea7: call    0x140069460
0x1401c5eac: jmp     0x1401c5eb3
0x1401c5eae: test    rdi,rdi
0x1401c5eb1: je      0x1401c5f16
0x1401c5eb3: mov     edx,0x8
0x1401c5eb8: mov     rcx,rdi
0x1401c5ebb: call    0x1409ce8f0
0x1401c5ec0: cmp     eax,DWORD PTR [rip+0x21efc2e]        # 0x1423b5af4
0x1401c5ec6: jne     0x1401c5f16
0x1401c5ec8: mov     r8d,r15d
0x1401c5ecb: mov     edx,0xa
0x1401c5ed0: lea     rcx,[rip+0x24a6999]        # 0x14266c870
0x1401c5ed7: call    0x1400bc750
0x1401c5edc: lea     rdx,[rip+0x1459b3d]        # 0x14161fa20 ; literal='Economically linked to you'
0x1401c5ee3: lea     rcx,[rbp+0x1b70]
0x1401c5eea: call    0x140069780
0x1401c5eef: nop     
0x1401c5ef0: xor     r9d,r9d
0x1401c5ef3: xor     r8d,r8d
0x1401c5ef6: lea     rdx,[rbp+0x1b70]
0x1401c5efd: lea     rcx,[rip+0x24a696c]        # 0x14266c870
0x1401c5f04: call    0x140af3400
0x1401c5f09: nop     
0x1401c5f0a: lea     rcx,[rbp+0x1b70]
0x1401c5f11: call    0x140069460
0x1401c5f16: lea     eax,[r12-0xa]
0x1401c5f1b: mov     DWORD PTR [rbp-0x68],eax
0x1401c5f1e: mov     rax,QWORD PTR [rsp+0x78]
0x1401c5f23: lea     r13,[rax+0x1f8]
0x1401c5f2a: lea     r14,[rax+0x1e0]
0x1401c5f31: mov     QWORD PTR [rbp-0x28],r14
0x1401c5f35: mov     rcx,r14
0x1401c5f38: call    0x140070480
0x1401c5f3d: mov     rbx,rax
0x1401c5f40: mov     rcx,r13
0x1401c5f43: call    0x140070480
0x1401c5f48: add     ebx,eax
0x1401c5f4a: mov     rcx,r14
0x1401c5f4d: call    0x140070480
0x1401c5f52: lea     edi,[rbx+0x1]
0x1401c5f55: test    rax,rax
0x1401c5f58: cmove   edi,ebx
0x1401c5f5b: mov     rcx,r13
0x1401c5f5e: call    0x140070480
0x1401c5f63: lea     ecx,[rdi+0x1]
0x1401c5f66: test    rax,rax
0x1401c5f69: cmove   ecx,edi
0x1401c5f6c: mov     DWORD PTR [rsp+0x74],ecx
0x1401c5f70: mov     rcx,r14
0x1401c5f73: call    0x140070480
0x1401c5f78: mov     rdi,rax
0x1401c5f7b: mov     QWORD PTR [rbp-0x30],rax
0x1401c5f7f: mov     rcx,r13
0x1401c5f82: call    0x140070480
0x1401c5f87: mov     rbx,rax
0x1401c5f8a: mov     eax,DWORD PTR [rsp+0x74]
0x1401c5f8e: mov     ecx,DWORD PTR [rbp-0x68]
0x1401c5f91: cmp     eax,ecx
0x1401c5f93: jle     0x1401c5fc6
0x1401c5f95: sub     eax,ecx
0x1401c5f97: mov     r8d,eax
0x1401c5f9a: mov     r9d,DWORD PTR [rbp-0x6c]
0x1401c5f9e: xchg    ax,ax
0x1401c5fa0: lea     eax,[rbx-0x1]
0x1401c5fa3: mov     ecx,ebx
0x1401c5fa5: cmp     edi,ebx
0x1401c5fa7: cmovle  ecx,eax
0x1401c5faa: lea     eax,[rdi-0x1]
0x1401c5fad: cmovle  eax,edi
0x1401c5fb0: sub     r8,0x1
0x1401c5fb4: mov     edi,eax
0x1401c5fb6: mov     ebx,ecx
0x1401c5fb8: jne     0x1401c5fa0
0x1401c5fba: mov     QWORD PTR [rbp-0x30],rdi
0x1401c5fbe: mov     QWORD PTR [rbp-0x60],r12
0x1401c5fc2: mov     DWORD PTR [rbp-0x6c],r9d
0x1401c5fc6: mov     edx,0xb
0x1401c5fcb: mov     DWORD PTR [rbp-0x48],edx
0x1401c5fce: test    ebx,ebx
0x1401c5fd0: jle     0x1401c61a9
0x1401c5fd6: mov     r8d,r15d
0x1401c5fd9: lea     rcx,[rip+0x24a6890]        # 0x14266c870
0x1401c5fe0: call    0x1400bc750
0x1401c5fe5: mov     DWORD PTR [rbp-0x48],0xc
0x1401c5fec: xor     r8d,r8d
0x1401c5fef: mov     edx,0x7
0x1401c5ff4: mov     r9b,0x1
0x1401c5ff7: lea     rcx,[rip+0x24a6872]        # 0x14266c870
0x1401c5ffe: call    0x1400bc760
0x1401c6003: lea     rdx,[rip+0x1459a36]        # 0x14161fa40 ; literal='Prisoners'
0x1401c600a: lea     rcx,[rbp+0x3850]
0x1401c6011: call    0x140069780
0x1401c6016: nop     
0x1401c6017: xor     r9d,r9d
0x1401c601a: xor     r8d,r8d
0x1401c601d: lea     rdx,[rbp+0x3850]
0x1401c6024: lea     rcx,[rip+0x24a6845]        # 0x14266c870
0x1401c602b: call    0x140af3400
0x1401c6030: nop     
0x1401c6031: lea     rcx,[rbp+0x3850]
0x1401c6038: call    0x140069460
0x1401c603d: xor     r8d,r8d
0x1401c6040: mov     edx,0x7
0x1401c6045: xor     r9d,r9d
0x1401c6048: lea     rcx,[rip+0x24a6821]        # 0x14266c870
0x1401c604f: call    0x1400bc760
0x1401c6054: xor     r14d,r14d
0x1401c6057: mov     rcx,r13
0x1401c605a: call    0x140070480
0x1401c605f: test    rax,rax
0x1401c6062: je      0x1401c61a5
0x1401c6068: mov     edi,DWORD PTR [rbp-0x48]
0x1401c606b: mov     r12,QWORD PTR [rbp-0x78]
0x1401c606f: nop     
0x1401c6070: cmp     r14d,ebx
0x1401c6073: jge     0x1401c619a
0x1401c6079: lea     rcx,[rbp+0x1070]
0x1401c6080: call    0x140070cc0
0x1401c6085: nop     
0x1401c6086: lea     rcx,[rbp+0x810]
0x1401c608d: call    0x1400736b0
0x1401c6092: movsxd  rdx,r14d
0x1401c6095: mov     rcx,r13
0x1401c6098: call    0x140070850
0x1401c609d: mov     r8,QWORD PTR [rax]
0x1401c60a0: mov     WORD PTR [rsp+0x28],0x2
0x1401c60a7: mov     WORD PTR [rsp+0x20],0x1
0x1401c60ae: lea     r9,[rbp+0x810]
0x1401c60b5: mov     r8d,DWORD PTR [r8+0xe0]
0x1401c60bc: lea     rdx,[rbp+0x1070]
0x1401c60c3: lea     rcx,[rip+0x235606e]        # 0x14251c138
0x1401c60ca: call    0x140baabd0
0x1401c60cf: mov     r8d,r15d
0x1401c60d2: mov     edx,edi
0x1401c60d4: lea     rcx,[rip+0x24a6795]        # 0x14266c870
0x1401c60db: call    0x1400bc750
0x1401c60e0: inc     edi
0x1401c60e2: lea     rcx,[rbp+0x1070]
0x1401c60e9: call    0x140070960
0x1401c60ee: cmp     rax,r12
0x1401c60f1: jb      0x1401c615d
0x1401c60f3: lea     r15d,[rsi-0x8]
0x1401c60f7: test    r15d,r15d
0x1401c60fa: js      0x1401c6112
0x1401c60fc: movsxd  rdx,esi
0x1401c60ff: sub     rdx,0x8
0x1401c6103: xor     r8d,r8d
0x1401c6106: lea     rcx,[rbp+0x1070]
0x1401c610d: call    0x1400e2860
0x1401c6112: cmp     r15d,0x3
0x1401c6116: jle     0x1401c6158
0x1401c6118: movsxd  rdx,esi
0x1401c611b: sub     rdx,0xb
0x1401c611f: lea     rcx,[rbp+0x1070]
0x1401c6126: call    0x1400fcbe0
0x1401c612b: mov     BYTE PTR [rax],0x2e
0x1401c612e: lea     eax,[rsi-0xa]
0x1401c6131: movsxd  rdx,eax
0x1401c6134: lea     rcx,[rbp+0x1070]
0x1401c613b: call    0x1400fcbe0
0x1401c6140: mov     BYTE PTR [rax],0x2e
0x1401c6143: lea     eax,[rsi-0x9]
0x1401c6146: movsxd  rdx,eax
0x1401c6149: lea     rcx,[rbp+0x1070]
0x1401c6150: call    0x1400fcbe0
0x1401c6155: mov     BYTE PTR [rax],0x2e
0x1401c6158: mov     r15d,DWORD PTR [rsp+0x70]
0x1401c615d: xor     r9d,r9d
0x1401c6160: xor     r8d,r8d
0x1401c6163: lea     rdx,[rbp+0x1070]
0x1401c616a: lea     rcx,[rip+0x24a66ff]        # 0x14266c870
0x1401c6171: call    0x140af3400
0x1401c6176: nop     
0x1401c6177: lea     rcx,[rbp+0x1070]
0x1401c617e: call    0x140069460
0x1401c6183: inc     r14d
0x1401c6186: mov     rcx,r13
0x1401c6189: call    0x140070480
0x1401c618e: movsxd  rcx,r14d
0x1401c6191: cmp     rcx,rax
0x1401c6194: jb      0x1401c6070
0x1401c619a: mov     DWORD PTR [rbp-0x48],edi
0x1401c619d: mov     r12,QWORD PTR [rbp-0x60]
0x1401c61a1: mov     rdi,QWORD PTR [rbp-0x30]
0x1401c61a5: mov     r14,QWORD PTR [rbp-0x28]
0x1401c61a9: test    edi,edi
0x1401c61ab: jle     0x1401c6351
0x1401c61b1: mov     r8d,r15d
0x1401c61b4: mov     ebx,DWORD PTR [rbp-0x48]
0x1401c61b7: mov     edx,ebx
0x1401c61b9: lea     rcx,[rip+0x24a66b0]        # 0x14266c870
0x1401c61c0: call    0x1400bc750
0x1401c61c5: inc     ebx
0x1401c61c7: xor     r8d,r8d
0x1401c61ca: mov     edx,0x7
0x1401c61cf: mov     r9b,0x1
0x1401c61d2: lea     rcx,[rip+0x24a6697]        # 0x14266c870
0x1401c61d9: call    0x1400bc760
0x1401c61de: lea     rdx,[rip+0x145986b]        # 0x14161fa50 ; literal='Artifacts (Rumored)'
0x1401c61e5: lea     rcx,[rbp+0x3830]
0x1401c61ec: call    0x140069780
0x1401c61f1: nop     
0x1401c61f2: xor     r9d,r9d
0x1401c61f5: xor     r8d,r8d
0x1401c61f8: lea     rdx,[rbp+0x3830]
0x1401c61ff: lea     rcx,[rip+0x24a666a]        # 0x14266c870
0x1401c6206: call    0x140af3400
0x1401c620b: nop     
0x1401c620c: lea     rcx,[rbp+0x3830]
0x1401c6213: call    0x140069460
0x1401c6218: xor     r8d,r8d
0x1401c621b: mov     edx,0x7
0x1401c6220: xor     r9d,r9d
0x1401c6223: lea     rcx,[rip+0x24a6646]        # 0x14266c870
0x1401c622a: call    0x1400bc760
0x1401c622f: mov     rcx,r14
0x1401c6232: call    0x140070480
0x1401c6237: test    rax,rax
0x1401c623a: je      0x1401c6351
0x1401c6240: mov     r12,QWORD PTR [rbp-0x78]
0x1401c6244: xor     r13d,r13d
0x1401c6247: cmp     r13d,edi
0x1401c624a: jge     0x1401c634d
0x1401c6250: lea     rcx,[rbp+0x1090]
0x1401c6257: call    0x140070cc0
0x1401c625c: nop     
0x1401c625d: movsxd  rdx,r13d
0x1401c6260: mov     rcx,r14
0x1401c6263: call    0x140070850
0x1401c6268: mov     r8,QWORD PTR [rax]
0x1401c626b: xor     r9d,r9d
0x1401c626e: mov     r8d,DWORD PTR [r8]
0x1401c6271: lea     rdx,[rbp+0x1090]
0x1401c6278: lea     rcx,[rip+0x2355eb9]        # 0x14251c138
0x1401c627f: call    0x140bac0c0
0x1401c6284: mov     r8d,r15d
0x1401c6287: mov     edx,ebx
0x1401c6289: lea     rcx,[rip+0x24a65e0]        # 0x14266c870
0x1401c6290: call    0x1400bc750
0x1401c6295: inc     ebx
0x1401c6297: mov     DWORD PTR [rbp-0x48],ebx
0x1401c629a: lea     rcx,[rbp+0x1090]
0x1401c62a1: call    0x140070960
0x1401c62a6: cmp     rax,r12
0x1401c62a9: jb      0x1401c6310
0x1401c62ab: lea     ebx,[rsi-0x8]
0x1401c62ae: test    ebx,ebx
0x1401c62b0: js      0x1401c62c8
0x1401c62b2: movsxd  rdx,esi
0x1401c62b5: sub     rdx,0x8
0x1401c62b9: xor     r8d,r8d
0x1401c62bc: lea     rcx,[rbp+0x1090]
0x1401c62c3: call    0x1400e2860
0x1401c62c8: cmp     ebx,0x3
0x1401c62cb: jle     0x1401c630d
0x1401c62cd: movsxd  rdx,esi
0x1401c62d0: sub     rdx,0xb
0x1401c62d4: lea     rcx,[rbp+0x1090]
0x1401c62db: call    0x1400fcbe0
0x1401c62e0: mov     BYTE PTR [rax],0x2e
0x1401c62e3: lea     eax,[rsi-0xa]
0x1401c62e6: movsxd  rdx,eax
0x1401c62e9: lea     rcx,[rbp+0x1090]
0x1401c62f0: call    0x1400fcbe0
0x1401c62f5: mov     BYTE PTR [rax],0x2e
0x1401c62f8: lea     eax,[rsi-0x9]
0x1401c62fb: movsxd  rdx,eax
0x1401c62fe: lea     rcx,[rbp+0x1090]
0x1401c6305: call    0x1400fcbe0
0x1401c630a: mov     BYTE PTR [rax],0x2e
0x1401c630d: mov     ebx,DWORD PTR [rbp-0x48]
0x1401c6310: xor     r9d,r9d
0x1401c6313: xor     r8d,r8d
0x1401c6316: lea     rdx,[rbp+0x1090]
0x1401c631d: lea     rcx,[rip+0x24a654c]        # 0x14266c870
0x1401c6324: call    0x140af3400
0x1401c6329: nop     
0x1401c632a: lea     rcx,[rbp+0x1090]
0x1401c6331: call    0x140069460
0x1401c6336: inc     r13d
0x1401c6339: mov     rcx,r14
0x1401c633c: call    0x140070480
0x1401c6341: movsxd  rcx,r13d
0x1401c6344: cmp     rcx,rax
0x1401c6347: jb      0x1401c6247
0x1401c634d: mov     r12,QWORD PTR [rbp-0x60]
0x1401c6351: mov     rbx,QWORD PTR [rbp-0x20]
0x1401c6355: cmp     QWORD PTR [rbp-0x10],rbx
0x1401c6359: jne     0x1401c658f
0x1401c635f: test    rbx,rbx
0x1401c6362: je      0x1401c658f
0x1401c6368: mov     r13,QWORD PTR [rsp+0x78]
0x1401c636d: movzx   r8d,WORD PTR [r13+0x1d4]
0x1401c6375: movzx   edx,WORD PTR [r13+0x1d0]
0x1401c637d: mov     rcx,QWORD PTR [rip+0x2347c54]        # 0x14250dfd8
0x1401c6384: call    0x1401bead0
0x1401c6389: mov     edi,DWORD PTR [rbp-0x6c]
0x1401c638c: test    eax,eax
0x1401c638e: js      0x1401c652f
0x1401c6394: cmp     BYTE PTR [r13+0x210],0x0
0x1401c639c: jne     0x1401c63fe
0x1401c639e: xor     r8d,r8d
0x1401c63a1: xor     edx,edx
0x1401c63a3: mov     r9b,0x1
0x1401c63a6: lea     rcx,[rip+0x24a64c3]        # 0x14266c870
0x1401c63ad: call    0x1400bc760
0x1401c63b2: mov     r8d,r15d
0x1401c63b5: lea     edx,[rdi-0x1]
0x1401c63b8: lea     rcx,[rip+0x24a64b1]        # 0x14266c870
0x1401c63bf: call    0x1400bc750
0x1401c63c4: lea     rdx,[rip+0x145969d]        # 0x14161fa68 ; literal='Cannot raid your civilization'
0x1401c63cb: lea     rcx,[rbp+0x3810]
0x1401c63d2: call    0x140069780
0x1401c63d7: nop     
0x1401c63d8: xor     r9d,r9d
0x1401c63db: xor     r8d,r8d
0x1401c63de: lea     rdx,[rbp+0x3810]
0x1401c63e5: lea     rcx,[rip+0x24a6484]        # 0x14266c870
0x1401c63ec: call    0x140af3400
0x1401c63f1: nop     
0x1401c63f2: lea     rcx,[rbp+0x3810]
0x1401c63f9: jmp     0x1401c671e
0x1401c63fe: cmp     QWORD PTR [r13+0x1c8],0x0
0x1401c6406: jne     0x1401c6468
0x1401c6408: xor     r8d,r8d
0x1401c640b: xor     edx,edx
0x1401c640d: mov     r9b,0x1
0x1401c6410: lea     rcx,[rip+0x24a6459]        # 0x14266c870
0x1401c6417: call    0x1400bc760
0x1401c641c: mov     r8d,r15d
0x1401c641f: lea     edx,[rdi-0x1]
0x1401c6422: lea     rcx,[rip+0x24a6447]        # 0x14266c870
0x1401c6429: call    0x1400bc750
0x1401c642e: lea     rdx,[rip+0x1459653]        # 0x14161fa88 ; literal='Cannot make request without leader'
0x1401c6435: lea     rcx,[rbp+0x37f0]
0x1401c643c: call    0x140069780
0x1401c6441: nop     
0x1401c6442: xor     r9d,r9d
0x1401c6445: xor     r8d,r8d
0x1401c6448: lea     rdx,[rbp+0x37f0]
0x1401c644f: lea     rcx,[rip+0x24a641a]        # 0x14266c870
0x1401c6456: call    0x140af3400
0x1401c645b: nop     
0x1401c645c: lea     rcx,[rbp+0x37f0]
0x1401c6463: jmp     0x1401c671e
0x1401c6468: lea     rcx,[r13+0x218]
0x1401c646f: call    0x140070480
0x1401c6474: xor     r8d,r8d
0x1401c6477: mov     r9b,0x1
0x1401c647a: lea     rcx,[rip+0x24a63ef]        # 0x14266c870
0x1401c6481: test    rax,rax
0x1401c6484: jne     0x1401c64d9
0x1401c6486: xor     edx,edx
0x1401c6488: call    0x1400bc760
0x1401c648d: mov     r8d,r15d
0x1401c6490: lea     edx,[rdi-0x1]
0x1401c6493: lea     rcx,[rip+0x24a63d6]        # 0x14266c870
0x1401c649a: call    0x1400bc750
0x1401c649f: lea     rdx,[rip+0x145960a]        # 0x14161fab0 ; literal='No workers available'
0x1401c64a6: lea     rcx,[rbp+0x37d0]
0x1401c64ad: call    0x140069780
0x1401c64b2: nop     
0x1401c64b3: xor     r9d,r9d
0x1401c64b6: xor     r8d,r8d
0x1401c64b9: lea     rdx,[rbp+0x37d0]
0x1401c64c0: lea     rcx,[rip+0x24a63a9]        # 0x14266c870
0x1401c64c7: call    0x140af3400
0x1401c64cc: nop     
0x1401c64cd: lea     rcx,[rbp+0x37d0]
0x1401c64d4: jmp     0x1401c671e
0x1401c64d9: mov     edx,0x7
0x1401c64de: call    0x1400bc760
0x1401c64e3: mov     r8d,r15d
0x1401c64e6: lea     edx,[rdi-0x1]
0x1401c64e9: lea     rcx,[rip+0x24a6380]        # 0x14266c870
0x1401c64f0: call    0x1400bc750
0x1401c64f5: lea     rdx,[rip+0x14595cc]        # 0x14161fac8 ; literal='Click to request workers'
0x1401c64fc: lea     rcx,[rbp+0x37b0]
0x1401c6503: call    0x140069780
0x1401c6508: nop     
0x1401c6509: xor     r9d,r9d
0x1401c650c: xor     r8d,r8d
0x1401c650f: lea     rdx,[rbp+0x37b0]
0x1401c6516: lea     rcx,[rip+0x24a6353]        # 0x14266c870
0x1401c651d: call    0x140af3400
0x1401c6522: nop     
0x1401c6523: lea     rcx,[rbp+0x37b0]
0x1401c652a: jmp     0x1401c671e
0x1401c652f: xor     r8d,r8d
0x1401c6532: xor     edx,edx
0x1401c6534: mov     r9b,0x1
0x1401c6537: lea     rcx,[rip+0x24a6332]        # 0x14266c870
0x1401c653e: call    0x1400bc760
0x1401c6543: mov     r8d,r15d
0x1401c6546: lea     edx,[rdi-0x1]
0x1401c6549: lea     rcx,[rip+0x24a6320]        # 0x14266c870
0x1401c6550: call    0x1400bc750
0x1401c6555: lea     rdx,[rip+0x145958c]        # 0x14161fae8 ; literal='Inaccessible mission location'
0x1401c655c: lea     rcx,[rbp+0x3790]
0x1401c6563: call    0x140069780
0x1401c6568: nop     
0x1401c6569: xor     r9d,r9d
0x1401c656c: xor     r8d,r8d
0x1401c656f: lea     rdx,[rbp+0x3790]
0x1401c6576: lea     rcx,[rip+0x24a62f3]        # 0x14266c870
0x1401c657d: call    0x140af3400
0x1401c6582: nop     
0x1401c6583: lea     rcx,[rbp+0x3790]
0x1401c658a: jmp     0x1401c671e
0x1401c658f: mov     r13,QWORD PTR [rsp+0x78]
0x1401c6594: cmp     QWORD PTR [r13+0x1c0],0x0
0x1401c659c: jne     0x1401c660a
0x1401c659e: cmp     QWORD PTR [r13+0x1b8],0x0
0x1401c65a6: jne     0x1401c660a
0x1401c65a8: xor     r8d,r8d
0x1401c65ab: xor     edx,edx
0x1401c65ad: mov     r9b,0x1
0x1401c65b0: lea     rcx,[rip+0x24a62b9]        # 0x14266c870
0x1401c65b7: call    0x1400bc760
0x1401c65bc: lea     edx,[r12-0x1]
0x1401c65c1: mov     r8d,r15d
0x1401c65c4: lea     rcx,[rip+0x24a62a5]        # 0x14266c870
0x1401c65cb: call    0x1400bc750
0x1401c65d0: lea     rdx,[rip+0x1459531]        # 0x14161fb08 ; literal='Cannot order mission without leader'
0x1401c65d7: lea     rcx,[rbp+0x3770]
0x1401c65de: call    0x140069780
0x1401c65e3: nop     
0x1401c65e4: xor     r9d,r9d
0x1401c65e7: xor     r8d,r8d
0x1401c65ea: lea     rdx,[rbp+0x3770]
0x1401c65f1: lea     rcx,[rip+0x24a6278]        # 0x14266c870
0x1401c65f8: call    0x140af3400
0x1401c65fd: nop     
0x1401c65fe: lea     rcx,[rbp+0x3770]
0x1401c6605: jmp     0x1401c671e
0x1401c660a: movzx   r8d,WORD PTR [r13+0x1d4]
0x1401c6612: movzx   edx,WORD PTR [r13+0x1d0]
0x1401c661a: mov     rcx,QWORD PTR [rip+0x23479b7]        # 0x14250dfd8
0x1401c6621: call    0x1401bead0
0x1401c6626: mov     edi,DWORD PTR [rbp-0x6c]
0x1401c6629: xor     r8d,r8d
0x1401c662c: mov     r9b,0x1
0x1401c662f: lea     rcx,[rip+0x24a623a]        # 0x14266c870
0x1401c6636: test    eax,eax
0x1401c6638: js      0x1401c66d0
0x1401c663e: mov     edx,0x7
0x1401c6643: call    0x1400bc760
0x1401c6648: mov     r8d,r15d
0x1401c664b: lea     edx,[rdi-0x1]
0x1401c664e: lea     rcx,[rip+0x24a621b]        # 0x14266c870
0x1401c6655: call    0x1400bc750
0x1401c665a: test    rbx,rbx
0x1401c665d: jne     0x1401c6699
0x1401c665f: lea     rdx,[rip+0x14594ca]        # 0x14161fb30 ; literal='Click to explore this site (creates new mission)'
0x1401c6666: lea     rcx,[rbp+0x3590]
0x1401c666d: call    0x140069780
0x1401c6672: nop     
0x1401c6673: xor     r9d,r9d
0x1401c6676: xor     r8d,r8d
0x1401c6679: lea     rdx,[rbp+0x3590]
0x1401c6680: lea     rcx,[rip+0x24a61e9]        # 0x14266c870
0x1401c6687: call    0x140af3400
0x1401c668c: nop     
0x1401c668d: lea     rcx,[rbp+0x3590]
0x1401c6694: jmp     0x1401c671e
0x1401c6699: lea     rdx,[rip+0x14594c8]        # 0x14161fb68 ; literal='Click to contact/raid this site (creates new mission)'
0x1401c66a0: lea     rcx,[rbp+0x34f0]
0x1401c66a7: call    0x140069780
0x1401c66ac: nop     
0x1401c66ad: xor     r9d,r9d
0x1401c66b0: xor     r8d,r8d
0x1401c66b3: lea     rdx,[rbp+0x34f0]
0x1401c66ba: lea     rcx,[rip+0x24a61af]        # 0x14266c870
0x1401c66c1: call    0x140af3400
0x1401c66c6: nop     
0x1401c66c7: lea     rcx,[rbp+0x34f0]
0x1401c66ce: jmp     0x1401c671e
0x1401c66d0: xor     edx,edx
0x1401c66d2: call    0x1400bc760
0x1401c66d7: mov     r8d,r15d
0x1401c66da: lea     edx,[rdi-0x1]
0x1401c66dd: lea     rcx,[rip+0x24a618c]        # 0x14266c870
0x1401c66e4: call    0x1400bc750
0x1401c66e9: lea     rdx,[rip+0x14593f8]        # 0x14161fae8 ; literal='Inaccessible mission location'
0x1401c66f0: lea     rcx,[rbp+0x3470]
0x1401c66f7: call    0x140069780
0x1401c66fc: nop     
0x1401c66fd: xor     r9d,r9d
0x1401c6700: xor     r8d,r8d
0x1401c6703: lea     rdx,[rbp+0x3470]
0x1401c670a: lea     rcx,[rip+0x24a615f]        # 0x14266c870
0x1401c6711: call    0x140af3400
0x1401c6716: nop     
0x1401c6717: lea     rcx,[rbp+0x3470]
0x1401c671e: call    0x140069460
0x1401c6723: nop     
0x1401c6724: lea     rcx,[rbp+0x10b0]
0x1401c672b: call    0x140069460
0x1401c6730: nop     
0x1401c6731: lea     rcx,[rbp+0xe10]
0x1401c6738: call    0x140069460
0x1401c673d: jmp     0x1401c8dd8
0x1401c6742: mov     r13d,DWORD PTR [rbp-0x18]
0x1401c6746: mov     DWORD PTR [rsp+0x74],r13d
0x1401c674b: lea     ebx,[r13-0x37]
0x1401c674f: mov     DWORD PTR [rsp+0x70],ebx
0x1401c6753: lea     ecx,[rbx-0x2]
0x1401c6756: mov     DWORD PTR [rbp-0x58],ecx
0x1401c6759: mov     r12d,0x14
0x1401c675f: mov     eax,DWORD PTR [rip+0x22294a3]        # 0x1423efc08
0x1401c6765: cmp     eax,0x2e
0x1401c6768: jle     0x1401c6782
0x1401c676a: lea     r12d,[rax-0x1a]
0x1401c676e: cmp     r12d,0x1e
0x1401c6772: jle     0x1401c6782
0x1401c6774: mov     r12d,0x1e
0x1401c677a: mov     edi,r13d
0x1401c677d: mov     r14d,esi
0x1401c6780: jmp     0x1401c6791
0x1401c6782: mov     edi,r13d
0x1401c6785: mov     r14d,esi
0x1401c6788: test    r12d,r12d
0x1401c678b: js      0x1401c686f
0x1401c6791: mov     ebx,ecx
0x1401c6793: cmp     ecx,edi
0x1401c6795: jg      0x1401c685a
0x1401c679b: movsxd  r15,r12d
0x1401c679e: mov     r13d,DWORD PTR [rbp-0x58]
0x1401c67a2: mov     r8d,ebx
0x1401c67a5: mov     edx,r14d
0x1401c67a8: lea     rcx,[rip+0x24a60c1]        # 0x14266c870
0x1401c67af: call    0x1400bc750
0x1401c67b4: xor     r8d,r8d
0x1401c67b7: xor     edx,edx
0x1401c67b9: lea     rcx,[rip+0x24a60b0]        # 0x14266c870
0x1401c67c0: call    0x1400bc7c0
0x1401c67c5: test    rsi,rsi
0x1401c67c8: jne     0x1401c67f2
0x1401c67ca: cmp     ebx,r13d
0x1401c67cd: jne     0x1401c67d7
0x1401c67cf: mov     edx,DWORD PTR [rip+0x24a79bf]        # 0x14266e194
0x1401c67d5: jmp     0x1401c683c
0x1401c67d7: lea     rcx,[rip+0x24a6092]        # 0x14266c870
0x1401c67de: cmp     ebx,edi
0x1401c67e0: jne     0x1401c67ea
0x1401c67e2: mov     edx,DWORD PTR [rip+0x24a79c4]        # 0x14266e1ac
0x1401c67e8: jmp     0x1401c6843
0x1401c67ea: mov     edx,DWORD PTR [rip+0x24a79b0]        # 0x14266e1a0
0x1401c67f0: jmp     0x1401c6843
0x1401c67f2: cmp     rsi,r15
0x1401c67f5: jne     0x1401c681f
0x1401c67f7: cmp     ebx,r13d
0x1401c67fa: jne     0x1401c6804
0x1401c67fc: mov     edx,DWORD PTR [rip+0x24a799a]        # 0x14266e19c
0x1401c6802: jmp     0x1401c683c
0x1401c6804: lea     rcx,[rip+0x24a6065]        # 0x14266c870
0x1401c680b: cmp     ebx,edi
0x1401c680d: jne     0x1401c6817
0x1401c680f: mov     edx,DWORD PTR [rip+0x24a799f]        # 0x14266e1b4
0x1401c6815: jmp     0x1401c6843
0x1401c6817: mov     edx,DWORD PTR [rip+0x24a798b]        # 0x14266e1a8
0x1401c681d: jmp     0x1401c6843
0x1401c681f: cmp     ebx,r13d
0x1401c6822: jne     0x1401c682c
0x1401c6824: mov     edx,DWORD PTR [rip+0x24a796e]        # 0x14266e198
0x1401c682a: jmp     0x1401c683c
0x1401c682c: cmp     ebx,edi
0x1401c682e: mov     edx,DWORD PTR [rip+0x24a797c]        # 0x14266e1b0
0x1401c6834: je      0x1401c683c
0x1401c6836: mov     edx,DWORD PTR [rip+0x24a7968]        # 0x14266e1a4
0x1401c683c: lea     rcx,[rip+0x24a602d]        # 0x14266c870
0x1401c6843: call    0x140af4570
0x1401c6848: inc     ebx
0x1401c684a: cmp     ebx,edi
0x1401c684c: jle     0x1401c67a2
0x1401c6852: mov     r13d,DWORD PTR [rsp+0x74]
0x1401c6857: mov     ecx,DWORD PTR [rbp-0x58]
0x1401c685a: inc     r14d
0x1401c685d: inc     rsi
0x1401c6860: cmp     r14d,r12d
0x1401c6863: jle     0x1401c6791
0x1401c6869: lea     ebx,[r13-0x37]
0x1401c686d: xor     esi,esi
0x1401c686f: lea     eax,[r13-0x2]
0x1401c6873: mov     DWORD PTR [rbp-0x6c],eax
0x1401c6876: lea     ecx,[r12-0x1]
0x1401c687b: mov     eax,0x55555556
0x1401c6880: imul    ecx
0x1401c6882: mov     edi,edx
0x1401c6884: shr     edi,0x1f
0x1401c6887: add     edi,edx
0x1401c6889: mov     DWORD PTR [rbp-0x68],edi
0x1401c688c: mov     r15,QWORD PTR [rsp+0x78]
0x1401c6891: add     r15,0x230
0x1401c6898: mov     QWORD PTR [rbp-0x20],r15
0x1401c689c: mov     rcx,r15
0x1401c689f: call    0x140070480
0x1401c68a4: mov     rdx,rax
0x1401c68a7: mov     QWORD PTR [rbp-0x28],rax
0x1401c68ab: cmp     eax,edi
0x1401c68ad: jle     0x1401c68b9
0x1401c68af: lea     r12d,[r13-0x4]
0x1401c68b3: mov     DWORD PTR [rbp-0x6c],r12d
0x1401c68b7: jmp     0x1401c68bd
0x1401c68b9: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c68bd: mov     r14,rsi
0x1401c68c0: mov     QWORD PTR [rbp-0x78],rsi
0x1401c68c4: mov     DWORD PTR [rbp-0x70],0x1
0x1401c68cb: mov     r13,QWORD PTR [rsp+0x78]
0x1401c68d0: mov     ecx,DWORD PTR [r13+0x2b0]
0x1401c68d7: sub     eax,edi
0x1401c68d9: cmp     ecx,eax
0x1401c68db: cmovle  eax,ecx
0x1401c68de: xor     ecx,ecx
0x1401c68e0: test    eax,eax
0x1401c68e2: cmovns  ecx,eax
0x1401c68e5: mov     DWORD PTR [rbp-0x10],ecx
0x1401c68e8: lea     eax,[rdi+rcx*1]
0x1401c68eb: mov     DWORD PTR [rsp+0x74],eax
0x1401c68ef: cmp     ecx,eax
0x1401c68f1: jge     0x1401c7476
0x1401c68f7: mov     eax,DWORD PTR [rbp+0x38]
0x1401c68fa: mov     DWORD PTR [rbp-0x48],eax
0x1401c68fd: nop     DWORD PTR [rax]
0x1401c6900: cmp     ecx,edx
0x1401c6902: jge     0x1401c73f2
0x1401c6908: movsxd  rdx,ecx
0x1401c690b: mov     rcx,r15
0x1401c690e: call    0x140070850
0x1401c6913: mov     rdi,QWORD PTR [rax]
0x1401c6916: mov     QWORD PTR [rbp-0x60],rdi
0x1401c691a: cmp     BYTE PTR [rip+0x21ec134],0x0        # 0x1423b2a55
0x1401c6921: je      0x1401c6d8e
0x1401c6927: mov     eax,DWORD PTR [rbp-0x38]
0x1401c692a: cmp     eax,ebx
0x1401c692c: jl      0x1401c6d8e
0x1401c6932: mov     ebx,DWORD PTR [rbp-0x70]
0x1401c6935: cmp     eax,r12d
0x1401c6938: jg      0x1401c6d91
0x1401c693e: mov     ecx,DWORD PTR [rbp-0x3c]
0x1401c6941: cmp     ecx,ebx
0x1401c6943: jl      0x1401c6d91
0x1401c6949: lea     eax,[rbx+0x2]
0x1401c694c: cmp     ecx,eax
0x1401c694e: jg      0x1401c6d91
0x1401c6954: cmp     QWORD PTR [r13+0x248],rdi
0x1401c695b: je      0x1401c6d82
0x1401c6961: mov     QWORD PTR [r13+0x248],rdi
0x1401c6968: lea     rsi,[r13+0x250]
0x1401c696f: mov     rcx,rsi
0x1401c6972: call    0x1400708c0
0x1401c6977: lea     r15,[r13+0x268]
0x1401c697e: mov     rcx,r15
0x1401c6981: call    0x1400708c0
0x1401c6986: lea     r12,[r13+0x280]
0x1401c698d: mov     QWORD PTR [rbp-0x30],r12
0x1401c6991: mov     rcx,r12
0x1401c6994: call    0x1400708c0
0x1401c6999: add     r13,0x298
0x1401c69a0: mov     QWORD PTR [rbp-0x78],r13
0x1401c69a4: mov     rcx,r13
0x1401c69a7: call    0x1400708c0
0x1401c69ac: lea     rdx,[rbp+0x78]
0x1401c69b0: lea     rcx,[rdi+0x1450]
0x1401c69b7: call    0x140070870
0x1401c69bc: lea     rdx,[rbp+0xe8]
0x1401c69c3: lea     rcx,[rdi+0x1450]
0x1401c69ca: call    0x140070860
0x1401c69cf: lea     r8,[rbp+0xe8]
0x1401c69d6: lea     rdx,[rbp+0x4]
0x1401c69da: lea     rcx,[rbp+0x78]
0x1401c69de: call    0x140070450
0x1401c69e3: xor     edx,edx
0x1401c69e5: movzx   ecx,BYTE PTR [rax]
0x1401c69e8: call    0x140066de0
0x1401c69ed: test    al,al
0x1401c69ef: je      0x1401c6b17
0x1401c69f5: xor     r12d,r12d
0x1401c69f8: nop     DWORD PTR [rax+rax*1+0x0]
0x1401c6a00: lea     rcx,[rbp+0x78]
0x1401c6a04: call    0x140070440
0x1401c6a09: mov     rcx,QWORD PTR [rax]
0x1401c6a0c: mov     QWORD PTR [rbp+0x1a8],rcx
0x1401c6a13: mov     rcx,QWORD PTR [rcx+0x10]
0x1401c6a17: cmp     DWORD PTR [rcx+0x30],0xffffffff
0x1401c6a1b: jne     0x1401c6ae0
0x1401c6a21: lea     r9,[rbp+0x1c0]
0x1401c6a28: lea     r8,[rbp+0x1c8]
0x1401c6a2f: mov     edx,DWORD PTR [rdi+0x4]
0x1401c6a32: call    0x140c03440
0x1401c6a37: mov     r13,rax
0x1401c6a3a: test    rax,rax
0x1401c6a3d: je      0x1401c6ae0
0x1401c6a43: mov     edi,r12d
0x1401c6a46: mov     rcx,rsi
0x1401c6a49: call    0x140070480
0x1401c6a4e: test    rax,rax
0x1401c6a51: je      0x1401c6aae
0x1401c6a53: mov     rbx,r12
0x1401c6a56: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401c6a60: mov     rdx,rbx
0x1401c6a63: mov     rcx,r15
0x1401c6a66: call    0x140070990
0x1401c6a6b: mov     ecx,DWORD PTR [r13+0x2d0]
0x1401c6a72: cmp     DWORD PTR [rax],ecx
0x1401c6a74: mov     rcx,rsi
0x1401c6a77: jg      0x1401c6a8a
0x1401c6a79: inc     edi
0x1401c6a7b: movsxd  rbx,edi
0x1401c6a7e: call    0x140070480
0x1401c6a83: cmp     rbx,rax
0x1401c6a86: jb      0x1401c6a60
0x1401c6a88: jmp     0x1401c6aae
0x1401c6a8a: movsxd  rbx,edi
0x1401c6a8d: lea     r8,[rbp+0x1a8]
0x1401c6a94: mov     rdx,rbx
0x1401c6a97: call    0x1401bc720
0x1401c6a9c: lea     r8,[r13+0x2d0]
0x1401c6aa3: mov     rdx,rbx
0x1401c6aa6: mov     rcx,r15
0x1401c6aa9: call    0x1400bb040
0x1401c6aae: mov     rcx,rsi
0x1401c6ab1: call    0x140070480
0x1401c6ab6: movsxd  rcx,edi
0x1401c6ab9: cmp     rcx,rax
0x1401c6abc: jne     0x1401c6adc
0x1401c6abe: lea     rdx,[rbp+0x1a8]
0x1401c6ac5: mov     rcx,rsi
0x1401c6ac8: call    0x1400bafb0
0x1401c6acd: lea     rdx,[r13+0x2d0]
0x1401c6ad4: mov     rcx,r15
0x1401c6ad7: call    0x140070a40
0x1401c6adc: mov     rdi,QWORD PTR [rbp-0x60]
0x1401c6ae0: lea     rcx,[rbp+0x78]
0x1401c6ae4: call    0x140070430
0x1401c6ae9: lea     r8,[rbp+0xe8]
0x1401c6af0: lea     rdx,[rbp+0x4]
0x1401c6af4: lea     rcx,[rbp+0x78]
0x1401c6af8: call    0x140070450
0x1401c6afd: xor     edx,edx
0x1401c6aff: movzx   ecx,BYTE PTR [rax]
0x1401c6b02: call    0x140066de0
0x1401c6b07: test    al,al
0x1401c6b09: jne     0x1401c6a00
0x1401c6b0f: mov     r12,QWORD PTR [rbp-0x30]
0x1401c6b13: mov     r13,QWORD PTR [rbp-0x78]
0x1401c6b17: lea     rdx,[rbp+0x40]
0x1401c6b1b: lea     rcx,[rdi+0x1398]
0x1401c6b22: call    0x140070870
0x1401c6b27: lea     rdx,[rbp+0xf0]
0x1401c6b2e: lea     rcx,[rdi+0x1398]
0x1401c6b35: call    0x140070860
0x1401c6b3a: lea     r8,[rbp+0xf0]
0x1401c6b41: lea     rdx,[rbp+0x6]
0x1401c6b45: lea     rcx,[rbp+0x40]
0x1401c6b49: call    0x140070450
0x1401c6b4e: xor     edx,edx
0x1401c6b50: movzx   ecx,BYTE PTR [rax]
0x1401c6b53: call    0x140066de0
0x1401c6b58: test    al,al
0x1401c6b5a: je      0x1401c6be9
0x1401c6b60: lea     rcx,[rbp+0x40]
0x1401c6b64: call    0x140070440
0x1401c6b69: mov     rcx,QWORD PTR [rax]
0x1401c6b6c: cmp     WORD PTR [rcx],0x1
0x1401c6b70: je      0x1401c6bba
0x1401c6b72: lea     rcx,[rbp+0x40]
0x1401c6b76: call    0x140070440
0x1401c6b7b: mov     rcx,QWORD PTR [rax]
0x1401c6b7e: cmp     WORD PTR [rcx],0x2
0x1401c6b82: je      0x1401c6bba
0x1401c6b84: lea     rcx,[rbp+0x40]
0x1401c6b88: call    0x140070440
0x1401c6b8d: mov     rcx,QWORD PTR [rax]
0x1401c6b90: cmp     WORD PTR [rcx],0x3
0x1401c6b94: je      0x1401c6bba
0x1401c6b96: lea     rcx,[rbp+0x40]
0x1401c6b9a: call    0x140070440
0x1401c6b9f: mov     rdx,rax
0x1401c6ba2: mov     rcx,r12
0x1401c6ba5: call    0x1400bafb0
0x1401c6baa: mov     BYTE PTR [rbp+0x5],0x0
0x1401c6bae: lea     rdx,[rbp+0x5]
0x1401c6bb2: mov     rcx,r13
0x1401c6bb5: call    0x1401fc7a0
0x1401c6bba: lea     rcx,[rbp+0x40]
0x1401c6bbe: call    0x140070430
0x1401c6bc3: lea     r8,[rbp+0xf0]
0x1401c6bca: lea     rdx,[rbp+0x6]
0x1401c6bce: lea     rcx,[rbp+0x40]
0x1401c6bd2: call    0x140070450
0x1401c6bd7: xor     edx,edx
0x1401c6bd9: movzx   ecx,BYTE PTR [rax]
0x1401c6bdc: call    0x140066de0
0x1401c6be1: test    al,al
0x1401c6be3: jne     0x1401c6b60
0x1401c6be9: xor     ebx,ebx
0x1401c6beb: mov     r14d,ebx
0x1401c6bee: lea     rcx,[rip+0x21eedab]        # 0x1423b59a0
0x1401c6bf5: call    0x140070480
0x1401c6bfa: test    rax,rax
0x1401c6bfd: je      0x1401c6d6a
0x1401c6c03: mov     edi,ebx
0x1401c6c05: mov     r15,QWORD PTR [rbp-0x60]
0x1401c6c09: nop     DWORD PTR [rax+0x0]
0x1401c6c10: mov     rdx,rdi
0x1401c6c13: lea     rcx,[rip+0x21eed86]        # 0x1423b59a0
0x1401c6c1a: call    0x140070850
0x1401c6c1f: mov     rcx,QWORD PTR [rax]
0x1401c6c22: mov     eax,DWORD PTR [r15+0x4]
0x1401c6c26: cmp     DWORD PTR [rcx],eax
0x1401c6c28: jne     0x1401c6d4c
0x1401c6c2e: mov     esi,ebx
0x1401c6c30: mov     rdx,rdi
0x1401c6c33: lea     rcx,[rip+0x21eed66]        # 0x1423b59a0
0x1401c6c3a: call    0x140070850
0x1401c6c3f: mov     rcx,QWORD PTR [rax]
0x1401c6c42: add     rcx,0xc0
0x1401c6c49: call    0x140070480
0x1401c6c4e: test    rax,rax
0x1401c6c51: je      0x1401c6d4c
0x1401c6c57: nop     WORD PTR [rax+rax*1+0x0]
0x1401c6c60: mov     rdx,rdi
0x1401c6c63: lea     rcx,[rip+0x21eed36]        # 0x1423b59a0
0x1401c6c6a: call    0x140070850
0x1401c6c6f: mov     rcx,QWORD PTR [rax]
0x1401c6c72: add     rcx,0xc0
0x1401c6c79: mov     rdx,rbx
0x1401c6c7c: call    0x140070850
0x1401c6c81: mov     rcx,QWORD PTR [rax]
0x1401c6c84: cmp     WORD PTR [rcx],0x1
0x1401c6c88: je      0x1401c6d1e
0x1401c6c8e: mov     rdx,rdi
0x1401c6c91: lea     rcx,[rip+0x21eed08]        # 0x1423b59a0
0x1401c6c98: call    0x140070850
0x1401c6c9d: mov     rcx,QWORD PTR [rax]
0x1401c6ca0: add     rcx,0xc0
0x1401c6ca7: mov     rdx,rbx
0x1401c6caa: call    0x140070850
0x1401c6caf: mov     rcx,QWORD PTR [rax]
0x1401c6cb2: cmp     WORD PTR [rcx],0x2
0x1401c6cb6: je      0x1401c6d1e
0x1401c6cb8: mov     rdx,rdi
0x1401c6cbb: lea     rcx,[rip+0x21eecde]        # 0x1423b59a0
0x1401c6cc2: call    0x140070850
0x1401c6cc7: mov     rcx,QWORD PTR [rax]
0x1401c6cca: add     rcx,0xc0
0x1401c6cd1: mov     rdx,rbx
0x1401c6cd4: call    0x140070850
0x1401c6cd9: mov     rcx,QWORD PTR [rax]
0x1401c6cdc: cmp     WORD PTR [rcx],0x3
0x1401c6ce0: je      0x1401c6d1e
0x1401c6ce2: mov     rdx,rdi
0x1401c6ce5: lea     rcx,[rip+0x21eecb4]        # 0x1423b59a0
0x1401c6cec: call    0x140070850
0x1401c6cf1: mov     rcx,QWORD PTR [rax]
0x1401c6cf4: add     rcx,0xc0
0x1401c6cfb: mov     rdx,rbx
0x1401c6cfe: call    0x140070850
0x1401c6d03: mov     rdx,rax
0x1401c6d06: mov     rcx,r12
0x1401c6d09: call    0x1400bafb0
0x1401c6d0e: mov     BYTE PTR [rbp+0x8],0x1
0x1401c6d12: lea     rdx,[rbp+0x8]
0x1401c6d16: mov     rcx,r13
0x1401c6d19: call    0x1401fc7a0
0x1401c6d1e: inc     esi
0x1401c6d20: mov     rdx,rdi
0x1401c6d23: lea     rcx,[rip+0x21eec76]        # 0x1423b59a0
0x1401c6d2a: call    0x140070850
0x1401c6d2f: movsxd  rbx,esi
0x1401c6d32: mov     rcx,QWORD PTR [rax]
0x1401c6d35: add     rcx,0xc0
0x1401c6d3c: call    0x140070480
0x1401c6d41: cmp     rbx,rax
0x1401c6d44: jb      0x1401c6c60
0x1401c6d4a: xor     ebx,ebx
0x1401c6d4c: inc     r14d
0x1401c6d4f: movsxd  rdi,r14d
0x1401c6d52: lea     rcx,[rip+0x21eec47]        # 0x1423b59a0
0x1401c6d59: call    0x140070480
0x1401c6d5e: cmp     rdi,rax
0x1401c6d61: jb      0x1401c6c10
0x1401c6d67: mov     rdi,r15
0x1401c6d6a: mov     edx,0x2
0x1401c6d6f: lea     rcx,[rip+0x24a5afa]        # 0x14266c870
0x1401c6d76: call    0x140b016a0
0x1401c6d7b: mov     ebx,DWORD PTR [rbp-0x70]
0x1401c6d7e: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c6d82: mov     QWORD PTR [rbp-0x78],rdi
0x1401c6d86: lea     eax,[rbx-0x1]
0x1401c6d89: mov     DWORD PTR [rbp-0x48],eax
0x1401c6d8c: jmp     0x1401c6d91
0x1401c6d8e: mov     ebx,DWORD PTR [rbp-0x70]
0x1401c6d91: xor     r8d,r8d
0x1401c6d94: mov     edx,0x7
0x1401c6d99: mov     r9b,0x1
0x1401c6d9c: lea     rcx,[rip+0x24a5acd]        # 0x14266c870
0x1401c6da3: call    0x1400bc760
0x1401c6da8: movsxd  r13,DWORD PTR [rsp+0x70]
0x1401c6dad: mov     esi,r13d
0x1401c6db0: cmp     r13d,r12d
0x1401c6db3: jg      0x1401c6e4b
0x1401c6db9: lea     r15d,[rbx+0x3]
0x1401c6dbd: mov     r14,r13
0x1401c6dc0: mov     edi,ebx
0x1401c6dc2: cmp     ebx,r15d
0x1401c6dc5: jge     0x1401c6e39
0x1401c6dc7: movsxd  r12,r12d
0x1401c6dca: lea     rbx,[rip+0x24a745f]        # 0x14266e230
0x1401c6dd1: mov     r8d,esi
0x1401c6dd4: mov     edx,edi
0x1401c6dd6: lea     rcx,[rip+0x24a5a93]        # 0x14266c870
0x1401c6ddd: call    0x1400bc750
0x1401c6de2: cmp     esi,r13d
0x1401c6de5: jne     0x1401c6dec
0x1401c6de7: mov     edx,DWORD PTR [rbx-0x18]
0x1401c6dea: jmp     0x1401c6df8
0x1401c6dec: cmp     r14,r12
0x1401c6def: jne     0x1401c6df5
0x1401c6df1: mov     edx,DWORD PTR [rbx]
0x1401c6df3: jmp     0x1401c6df8
0x1401c6df5: mov     edx,DWORD PTR [rbx-0xc]
0x1401c6df8: lea     rcx,[rip+0x24a5a71]        # 0x14266c870
0x1401c6dff: call    0x140af4570
0x1401c6e04: xor     edx,edx
0x1401c6e06: lea     rcx,[rip+0x2228de3]        # 0x1423efbf0
0x1401c6e0d: call    0x1400735c0
0x1401c6e12: test    al,al
0x1401c6e14: je      0x1401c6e27
0x1401c6e16: mov     r8b,0x1
0x1401c6e19: xor     edx,edx
0x1401c6e1b: lea     rcx,[rip+0x24a5a4e]        # 0x14266c870
0x1401c6e22: call    0x1400bc7c0
0x1401c6e27: inc     edi
0x1401c6e29: add     rbx,0x4
0x1401c6e2d: cmp     edi,r15d
0x1401c6e30: jl      0x1401c6dd1
0x1401c6e32: mov     ebx,DWORD PTR [rbp-0x70]
0x1401c6e35: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c6e39: inc     esi
0x1401c6e3b: inc     r14
0x1401c6e3e: cmp     esi,r12d
0x1401c6e41: jle     0x1401c6dc0
0x1401c6e47: mov     rdi,QWORD PTR [rbp-0x60]
0x1401c6e4b: xor     r8d,r8d
0x1401c6e4e: mov     edx,0x3
0x1401c6e53: mov     r9b,0x1
0x1401c6e56: lea     rcx,[rip+0x24a5a13]        # 0x14266c870
0x1401c6e5d: call    0x1400bc760
0x1401c6e62: lea     edx,[rbx+0x1]
0x1401c6e65: mov     r8d,r13d
0x1401c6e68: lea     rcx,[rip+0x24a5a01]        # 0x14266c870
0x1401c6e6f: call    0x1400bc750
0x1401c6e74: lea     rcx,[rbp+0xd50]
0x1401c6e7b: call    0x140070cc0
0x1401c6e80: nop     
0x1401c6e81: lea     rcx,[rbp+0x10d0]
0x1401c6e88: call    0x140070cc0
0x1401c6e8d: nop     
0x1401c6e8e: cmp     BYTE PTR [rdi+0x92],0x0
0x1401c6e95: je      0x1401c6f29
0x1401c6e9b: lea     rdx,[rbp+0x10d0]
0x1401c6ea2: lea     rcx,[rdi+0x20]
0x1401c6ea6: call    0x140aadad0
0x1401c6eab: lea     rdx,[rbp+0x10d0]
0x1401c6eb2: lea     rcx,[rbp+0xd50]
0x1401c6eb9: call    0x1400bb340
0x1401c6ebe: lea     rdx,[rip+0x143d4cf]        # 0x141604394 ; literal=', '
0x1401c6ec5: lea     rcx,[rbp+0xd50]
0x1401c6ecc: call    0x140070b90
0x1401c6ed1: lea     rdx,[rip+0x143daf4]        # 0x1416049cc ; literal='"'
0x1401c6ed8: lea     rcx,[rbp+0xd50]
0x1401c6edf: call    0x140070b90
0x1401c6ee4: xor     r9d,r9d
0x1401c6ee7: mov     r8b,0x1
0x1401c6eea: lea     rdx,[rbp+0x10d0]
0x1401c6ef1: lea     rcx,[rdi+0x20]
0x1401c6ef5: call    0x140aae180
0x1401c6efa: lea     rdx,[rbp+0x10d0]
0x1401c6f01: lea     rcx,[rbp+0xd50]
0x1401c6f08: call    0x1400bb340
0x1401c6f0d: lea     rdx,[rip+0x143dab8]        # 0x1416049cc ; literal='"'
0x1401c6f14: lea     rcx,[rbp+0xd50]
0x1401c6f1b: call    0x140070b90
0x1401c6f20: lea     rdx,[rip+0x143d46d]        # 0x141604394 ; literal=', '
0x1401c6f27: jmp     0x1401c6f30
0x1401c6f29: lea     rdx,[rip+0x1458930]        # 0x14161f860 ; literal='Unnamed '
0x1401c6f30: lea     rcx,[rbp+0xd50]
0x1401c6f37: call    0x140070b90
0x1401c6f3c: mov     r8d,0xffffffff
0x1401c6f42: lea     rdx,[rbp+0x10d0]
0x1401c6f49: movzx   ecx,WORD PTR [rdi+0x98]
0x1401c6f50: call    0x140abd210
0x1401c6f55: lea     rcx,[rbp+0x10d0]
0x1401c6f5c: call    0x140546b30
0x1401c6f61: lea     rdx,[rbp+0x10d0]
0x1401c6f68: lea     rcx,[rbp+0xd50]
0x1401c6f6f: call    0x1400bb340
0x1401c6f74: cmp     BYTE PTR [rdi+0x92],0x0
0x1401c6f7b: jne     0x1401c6f96
0x1401c6f7d: cmp     WORD PTR [rdi],0x0
0x1401c6f81: jne     0x1401c6f96
0x1401c6f83: lea     rdx,[rip+0x14588e6]        # 0x14161f870 ; literal=' civilization'
0x1401c6f8a: lea     rcx,[rbp+0xd50]
0x1401c6f91: call    0x140070b90
0x1401c6f96: mov     ebx,r12d
0x1401c6f99: sub     ebx,r13d
0x1401c6f9c: lea     rcx,[rbp+0xd50]
0x1401c6fa3: call    0x140070960
0x1401c6fa8: lea     ecx,[rbx-0x2]
0x1401c6fab: movsxd  rdx,ecx
0x1401c6fae: cmp     rax,rdx
0x1401c6fb1: jb      0x1401c7019
0x1401c6fb3: lea     edi,[rbx-0x3]
0x1401c6fb6: test    edi,edi
0x1401c6fb8: js      0x1401c6fd0
0x1401c6fba: movsxd  rdx,ebx
0x1401c6fbd: sub     rdx,0x3
0x1401c6fc1: xor     r8d,r8d
0x1401c6fc4: lea     rcx,[rbp+0xd50]
0x1401c6fcb: call    0x1400e2860
0x1401c6fd0: cmp     edi,0x3
0x1401c6fd3: jle     0x1401c7015
0x1401c6fd5: movsxd  rdx,ebx
0x1401c6fd8: sub     rdx,0x6
0x1401c6fdc: lea     rcx,[rbp+0xd50]
0x1401c6fe3: call    0x1400fcbe0
0x1401c6fe8: mov     BYTE PTR [rax],0x2e
0x1401c6feb: lea     eax,[rbx-0x5]
0x1401c6fee: movsxd  rdx,eax
0x1401c6ff1: lea     rcx,[rbp+0xd50]
0x1401c6ff8: call    0x1400fcbe0
0x1401c6ffd: mov     BYTE PTR [rax],0x2e
0x1401c7000: lea     eax,[rbx-0x4]
0x1401c7003: movsxd  rdx,eax
0x1401c7006: lea     rcx,[rbp+0xd50]
0x1401c700d: call    0x1400fcbe0
0x1401c7012: mov     BYTE PTR [rax],0x2e
0x1401c7015: mov     rdi,QWORD PTR [rbp-0x60]
0x1401c7019: xor     r9d,r9d
0x1401c701c: xor     r8d,r8d
0x1401c701f: lea     rdx,[rbp+0xd50]
0x1401c7026: lea     rcx,[rip+0x24a5843]        # 0x14266c870
0x1401c702d: call    0x140af3400
0x1401c7032: mov     rbx,QWORD PTR [rip+0x21f562f]        # 0x1423bc668
0x1401c7039: test    rbx,rbx
0x1401c703c: je      0x1401c733f
0x1401c7042: cmp     rdi,rbx
0x1401c7045: je      0x1401c7344
0x1401c704b: xor     r12b,r12b
0x1401c704e: xor     r13b,r13b
0x1401c7051: xor     dil,dil
0x1401c7054: xor     r14b,r14b
0x1401c7057: lea     r15,[rbx+0x1028]
0x1401c705e: mov     rsi,QWORD PTR [rbp-0x60]
0x1401c7062: mov     edx,DWORD PTR [rsi+0x4]
0x1401c7065: mov     rcx,r15
0x1401c7068: call    0x140101120
0x1401c706d: test    rax,rax
0x1401c7070: je      0x1401c70a6
0x1401c7072: movzx   ecx,WORD PTR [rax+0x4]
0x1401c7076: cmp     cx,0x1
0x1401c707a: je      0x1401c70a3
0x1401c707c: cmp     cx,0x5
0x1401c7080: je      0x1401c70a3
0x1401c7082: test    BYTE PTR [rax+0x40],0x4
0x1401c7086: je      0x1401c708d
0x1401c7088: mov     dil,0x1
0x1401c708b: jmp     0x1401c70a6
0x1401c708d: cmp     cx,0x4
0x1401c7091: jne     0x1401c7098
0x1401c7093: mov     r12b,0x1
0x1401c7096: jmp     0x1401c70a6
0x1401c7098: cmp     cx,0x3
0x1401c709c: jne     0x1401c70a6
0x1401c709e: mov     r13b,0x1
0x1401c70a1: jmp     0x1401c70a6
0x1401c70a3: mov     r14b,0x1
0x1401c70a6: mov     rcx,rsi
0x1401c70a9: call    0x1409568e0
0x1401c70ae: mov     rsi,rax
0x1401c70b1: mov     rcx,rbx
0x1401c70b4: call    0x1409568e0
0x1401c70b9: cmp     rsi,rax
0x1401c70bc: je      0x1401c715a
0x1401c70c2: lea     rbx,[rax+0x1028]
0x1401c70c9: mov     edx,DWORD PTR [rsi+0x4]
0x1401c70cc: mov     rcx,rbx
0x1401c70cf: call    0x140101120
0x1401c70d4: test    rax,rax
0x1401c70d7: je      0x1401c70f7
0x1401c70d9: movzx   ecx,WORD PTR [rax+0x4]
0x1401c70dd: cmp     cx,0x1
0x1401c70e1: je      0x1401c70f4
0x1401c70e3: cmp     cx,0x5
0x1401c70e7: je      0x1401c70f4
0x1401c70e9: test    BYTE PTR [rax+0x40],0x4
0x1401c70ed: je      0x1401c70f7
0x1401c70ef: mov     dil,0x1
0x1401c70f2: jmp     0x1401c70f7
0x1401c70f4: mov     r14b,0x1
0x1401c70f7: mov     rax,QWORD PTR [rbp-0x60]
0x1401c70fb: mov     edx,DWORD PTR [rax+0x4]
0x1401c70fe: mov     rcx,rbx
0x1401c7101: call    0x140101120
0x1401c7106: test    rax,rax
0x1401c7109: je      0x1401c7129
0x1401c710b: movzx   ecx,WORD PTR [rax+0x4]
0x1401c710f: cmp     cx,0x1
0x1401c7113: je      0x1401c7126
0x1401c7115: cmp     cx,0x5
0x1401c7119: je      0x1401c7126
0x1401c711b: test    BYTE PTR [rax+0x40],0x4
0x1401c711f: je      0x1401c7129
0x1401c7121: mov     dil,0x1
0x1401c7124: jmp     0x1401c7129
0x1401c7126: mov     r14b,0x1
0x1401c7129: mov     edx,DWORD PTR [rsi+0x4]
0x1401c712c: mov     rcx,r15
0x1401c712f: call    0x140101120
0x1401c7134: test    rax,rax
0x1401c7137: je      0x1401c715a
0x1401c7139: movzx   ecx,WORD PTR [rax+0x4]
0x1401c713d: cmp     cx,0x1
0x1401c7141: je      0x1401c71d0
0x1401c7147: cmp     cx,0x5
0x1401c714b: je      0x1401c71d0
0x1401c7151: test    BYTE PTR [rax+0x40],0x4
0x1401c7155: je      0x1401c715a
0x1401c7157: mov     dil,0x1
0x1401c715a: mov     esi,DWORD PTR [rbp-0x70]
0x1401c715d: lea     edx,[rsi+0x2]
0x1401c7160: mov     r8d,DWORD PTR [rsp+0x70]
0x1401c7165: lea     rcx,[rip+0x24a5704]        # 0x14266c870
0x1401c716c: call    0x1400bc750
0x1401c7171: test    r14b,r14b
0x1401c7174: je      0x1401c71e9
0x1401c7176: xor     r8d,r8d
0x1401c7179: mov     edx,0x4
0x1401c717e: mov     r9b,0x1
0x1401c7181: lea     rcx,[rip+0x24a56e8]        # 0x14266c870
0x1401c7188: call    0x1400bc760
0x1401c718d: lea     rdx,[rip+0x1458834]        # 0x14161f9c8 ; literal='War'
0x1401c7194: lea     rcx,[rbp+0x3450]
0x1401c719b: call    0x140069780
0x1401c71a0: nop     
0x1401c71a1: xor     r9d,r9d
0x1401c71a4: xor     r8d,r8d
0x1401c71a7: lea     rdx,[rbp+0x3450]
0x1401c71ae: lea     rcx,[rip+0x24a56bb]        # 0x14266c870
0x1401c71b5: call    0x140af3400
0x1401c71ba: nop     
0x1401c71bb: lea     rcx,[rbp+0x3450]
0x1401c71c2: call    0x140069460
0x1401c71c7: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c71cb: jmp     0x1401c73b0
0x1401c71d0: mov     esi,DWORD PTR [rbp-0x70]
0x1401c71d3: lea     edx,[rsi+0x2]
0x1401c71d6: mov     r8d,DWORD PTR [rsp+0x70]
0x1401c71db: lea     rcx,[rip+0x24a568e]        # 0x14266c870
0x1401c71e2: call    0x1400bc750
0x1401c71e7: jmp     0x1401c7176
0x1401c71e9: xor     r8d,r8d
0x1401c71ec: lea     rcx,[rip+0x24a567d]        # 0x14266c870
0x1401c71f3: test    r12b,r12b
0x1401c71f6: je      0x1401c7248
0x1401c71f8: mov     edx,0x6
0x1401c71fd: mov     r9b,0x1
0x1401c7200: call    0x1400bc760
0x1401c7205: lea     rdx,[rip+0x1458674]        # 0x14161f880 ; literal='Offering tribute'
0x1401c720c: lea     rcx,[rbp+0x3430]
0x1401c7213: call    0x140069780
0x1401c7218: nop     
0x1401c7219: xor     r9d,r9d
0x1401c721c: xor     r8d,r8d
0x1401c721f: lea     rdx,[rbp+0x3430]
0x1401c7226: lea     rcx,[rip+0x24a5643]        # 0x14266c870
0x1401c722d: call    0x140af3400
0x1401c7232: nop     
0x1401c7233: lea     rcx,[rbp+0x3430]
0x1401c723a: call    0x140069460
0x1401c723f: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c7243: jmp     0x1401c73b0
0x1401c7248: test    r13b,r13b
0x1401c724b: je      0x1401c729d
0x1401c724d: mov     edx,0x7
0x1401c7252: xor     r9d,r9d
0x1401c7255: call    0x1400bc760
0x1401c725a: lea     rdx,[rip+0x1458637]        # 0x14161f898 ; literal='Accepting tribute'
0x1401c7261: lea     rcx,[rbp+0x2ed0]
0x1401c7268: call    0x140069780
0x1401c726d: nop     
0x1401c726e: xor     r9d,r9d
0x1401c7271: xor     r8d,r8d
0x1401c7274: lea     rdx,[rbp+0x2ed0]
0x1401c727b: lea     rcx,[rip+0x24a55ee]        # 0x14266c870
0x1401c7282: call    0x140af3400
0x1401c7287: nop     
0x1401c7288: lea     rcx,[rbp+0x2ed0]
0x1401c728f: call    0x140069460
0x1401c7294: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c7298: jmp     0x1401c73b0
0x1401c729d: test    dil,dil
0x1401c72a0: je      0x1401c72f2
0x1401c72a2: mov     edx,0x2
0x1401c72a7: mov     r9b,0x1
0x1401c72aa: call    0x1400bc760
0x1401c72af: lea     rdx,[rip+0x1458422]        # 0x14161f6d8 ; literal='Alliance'
0x1401c72b6: lea     rcx,[rbp+0x2df0]
0x1401c72bd: call    0x140069780
0x1401c72c2: nop     
0x1401c72c3: xor     r9d,r9d
0x1401c72c6: xor     r8d,r8d
0x1401c72c9: lea     rdx,[rbp+0x2df0]
0x1401c72d0: lea     rcx,[rip+0x24a5599]        # 0x14266c870
0x1401c72d7: call    0x140af3400
0x1401c72dc: nop     
0x1401c72dd: lea     rcx,[rbp+0x2df0]
0x1401c72e4: call    0x140069460
0x1401c72e9: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c72ed: jmp     0x1401c73b0
0x1401c72f2: mov     edx,0x7
0x1401c72f7: xor     r9d,r9d
0x1401c72fa: call    0x1400bc760
0x1401c72ff: lea     rdx,[rip+0x143c976]        # 0x141603c7c ; literal='Peace'
0x1401c7306: lea     rcx,[rbp+0x2d50]
0x1401c730d: call    0x140069780
0x1401c7312: nop     
0x1401c7313: xor     r9d,r9d
0x1401c7316: xor     r8d,r8d
0x1401c7319: lea     rdx,[rbp+0x2d50]
0x1401c7320: lea     rcx,[rip+0x24a5549]        # 0x14266c870
0x1401c7327: call    0x140af3400
0x1401c732c: nop     
0x1401c732d: lea     rcx,[rbp+0x2d50]
0x1401c7334: call    0x140069460
0x1401c7339: mov     r12d,DWORD PTR [rbp-0x6c]
0x1401c733d: jmp     0x1401c73b0
0x1401c733f: cmp     rdi,rbx
0x1401c7342: jne     0x1401c73ad
0x1401c7344: mov     esi,DWORD PTR [rbp-0x70]
0x1401c7347: lea     edx,[rsi+0x2]
0x1401c734a: mov     r8d,r13d
0x1401c734d: lea     rcx,[rip+0x24a551c]        # 0x14266c870
0x1401c7354: call    0x1400bc750
0x1401c7359: xor     r8d,r8d
0x1401c735c: mov     edx,0x1
0x1401c7361: movzx   r9d,dl
0x1401c7365: lea     rcx,[rip+0x24a5504]        # 0x14266c870
0x1401c736c: call    0x1400bc760
0x1401c7371: lea     rdx,[rip+0x1458538]        # 0x14161f8b0 ; literal='Your site government'
0x1401c7378: lea     rcx,[rbp+0x2a10]
0x1401c737f: call    0x140069780
0x1401c7384: nop     
0x1401c7385: xor     r9d,r9d
0x1401c7388: xor     r8d,r8d
0x1401c738b: lea     rdx,[rbp+0x2a10]
0x1401c7392: lea     rcx,[rip+0x24a54d7]        # 0x14266c870
0x1401c7399: call    0x140af3400
0x1401c739e: nop     
0x1401c739f: lea     rcx,[rbp+0x2a10]
0x1401c73a6: call    0x140069460
0x1401c73ab: jmp     0x1401c73b0
0x1401c73ad: mov     esi,DWORD PTR [rbp-0x70]
0x1401c73b0: add     esi,0x3
0x1401c73b3: mov     DWORD PTR [rbp-0x70],esi
0x1401c73b6: lea     rcx,[rbp+0x10d0]
0x1401c73bd: call    0x140069460
0x1401c73c2: nop     
0x1401c73c3: lea     rcx,[rbp+0xd50]
0x1401c73ca: call    0x140069460
0x1401c73cf: mov     ecx,DWORD PTR [rbp-0x10]
0x1401c73d2: inc     ecx
0x1401c73d4: mov     DWORD PTR [rbp-0x10],ecx
0x1401c73d7: cmp     ecx,DWORD PTR [rsp+0x74]
0x1401c73db: mov     ebx,DWORD PTR [rsp+0x70]
0x1401c73df: mov     rdx,QWORD PTR [rbp-0x28]
0x1401c73e3: mov     r15,QWORD PTR [rbp-0x20]
0x1401c73e7: mov     r13,QWORD PTR [rsp+0x78]
0x1401c73ec: jl      0x1401c6900
0x1401c73f2: mov     edi,DWORD PTR [rbp-0x68]
0x1401c73f5: mov     r15d,DWORD PTR [rbp-0x48]
0x1401c73f9: mov     r14,QWORD PTR [rbp-0x78]
0x1401c73fd: cmp     edx,edi
0x1401c73ff: jle     0x1401c7483
0x1401c7405: lea     ebx,[rdi*2-0x1]
0x1401c740c: add     ebx,edi
0x1401c740e: lea     rcx,[rbp+0x1f0]
0x1401c7415: call    0x1400bc990
0x1401c741a: mov     r9,QWORD PTR [rbp-0x28]
0x1401c741e: dec     r9d
0x1401c7421: mov     DWORD PTR [rsp+0x30],ebx
0x1401c7425: mov     ebx,0x2
0x1401c742a: mov     DWORD PTR [rsp+0x28],ebx
0x1401c742e: mov     DWORD PTR [rsp+0x20],edi
0x1401c7432: xor     r8d,r8d
0x1401c7435: mov     edx,DWORD PTR [r13+0x2b0]
0x1401c743c: lea     rcx,[rbp+0x1f0]
0x1401c7443: call    0x1400bc9b0
0x1401c7448: lea     r9d,[r12+0x1]
0x1401c744d: mov     DWORD PTR [rsp+0x28],0x0
0x1401c7455: movzx   eax,BYTE PTR [r13+0x2b4]
0x1401c745d: mov     BYTE PTR [rsp+0x20],al
0x1401c7461: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401c7465: mov     edx,DWORD PTR [rbp-0x38]
0x1401c7468: lea     rcx,[rbp+0x1f0]
0x1401c746f: call    0x1414284b0
0x1401c7474: jmp     0x1401c7488
0x1401c7476: mov     r15d,DWORD PTR [rbp+0x38]
0x1401c747a: mov     DWORD PTR [rbp-0x48],r15d
0x1401c747e: jmp     0x1401c73fd
0x1401c7483: mov     ebx,0x2
0x1401c7488: test    r14,r14
0x1401c748b: jne     0x1401c74b4
0x1401c748d: cmp     QWORD PTR [r13+0x248],r14
0x1401c7494: je      0x1401c8dd8
0x1401c749a: mov     QWORD PTR [r13+0x248],r14
0x1401c74a1: mov     edx,ebx
0x1401c74a3: lea     rcx,[rip+0x24a53c6]        # 0x14266c870
0x1401c74aa: call    0x140b016a0
0x1401c74af: jmp     0x1401c8dd8
0x1401c74b4: mov     eax,DWORD PTR [rbp-0x58]
0x1401c74b7: lea     esi,[rax-0x37]
0x1401c74ba: mov     DWORD PTR [rbp-0x68],esi
0x1401c74bd: lea     r12d,[rax-0x2]
0x1401c74c1: mov     DWORD PTR [rsp+0x74],r12d
0x1401c74c6: lea     edi,[r15+0x1]
0x1401c74ca: mov     rcx,QWORD PTR [rip+0x21f5197]        # 0x1423bc668
0x1401c74d1: cmp     r14,rcx
0x1401c74d4: je      0x1401c76b8
0x1401c74da: add     edi,0x3
0x1401c74dd: add     rcx,0x1028
0x1401c74e4: mov     edx,DWORD PTR [r14+0x4]
0x1401c74e8: call    0x140101120
0x1401c74ed: test    rax,rax
0x1401c74f0: je      0x1401c74fb
0x1401c74f2: cmp     WORD PTR [rax+0x4],0x3
0x1401c74f7: jne     0x1401c74fb
0x1401c74f9: inc     edi
0x1401c74fb: lea     rcx,[r13+0x280]
0x1401c7502: call    0x140070480
0x1401c7507: test    rax,rax
0x1401c750a: je      0x1401c76b5
0x1401c7510: lea     rdx,[rbp+0x28]
0x1401c7514: lea     rcx,[r13+0x280]
0x1401c751b: call    0x140070870
0x1401c7520: lea     rdx,[rbp+0xf8]
0x1401c7527: lea     rcx,[r13+0x280]
0x1401c752e: call    0x140070860
0x1401c7533: lea     rcx,[r13+0x298]
0x1401c753a: lea     rdx,[rbp+0x1b0]
0x1401c7541: call    0x140070870
0x1401c7546: lea     r8,[rbp+0xf8]
0x1401c754d: lea     rdx,[rbp+0x9]
0x1401c7551: lea     rcx,[rbp+0x28]
0x1401c7555: call    0x140070450
0x1401c755a: xor     edx,edx
0x1401c755c: movzx   ecx,BYTE PTR [rax]
0x1401c755f: call    0x140066de0
0x1401c7564: test    al,al
0x1401c7566: je      0x1401c76b8
0x1401c756c: nop     DWORD PTR [rax+0x0]
0x1401c7570: add     edi,0x2
0x1401c7573: lea     rcx,[rbp+0x28]
0x1401c7577: call    0x140070440
0x1401c757c: mov     rcx,QWORD PTR [rax]
0x1401c757f: cmp     WORD PTR [rcx],0x4
0x1401c7583: jne     0x1401c762d
0x1401c7589: lea     rcx,[rbp+0x28]
0x1401c758d: call    0x140070440
0x1401c7592: mov     rcx,QWORD PTR [rax]
0x1401c7595: cmp     QWORD PTR [rcx+0x48],0x0
0x1401c759a: je      0x1401c762d
0x1401c75a0: lea     rcx,[rbp+0x28]
0x1401c75a4: call    0x140070440
0x1401c75a9: mov     rcx,QWORD PTR [rax]
0x1401c75ac: mov     rsi,QWORD PTR [rcx+0x48]
0x1401c75b0: mov     QWORD PTR [rbp-0x60],rsi
0x1401c75b4: mov     ebx,0x6b
0x1401c75b9: mov     QWORD PTR [rbp-0x30],rbx
0x1401c75bd: xor     r14d,r14d
0x1401c75c0: mov     r12d,r14d
0x1401c75c3: mov     r13d,r14d
0x1401c75c6: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401c75d0: lea     rcx,[rsi+0x8]
0x1401c75d4: add     rcx,r12
0x1401c75d7: call    0x1400709a0
0x1401c75dc: test    eax,eax
0x1401c75de: jle     0x1401c761a
0x1401c75e0: lea     r15,[rsi+0x8]
0x1401c75e4: mov     rsi,r14
0x1401c75e7: mov     r14d,eax
0x1401c75ea: nop     WORD PTR [rax+rax*1+0x0]
0x1401c75f0: mov     ebx,edi
0x1401c75f2: mov     rdx,rsi
0x1401c75f5: lea     rcx,[r15+r13*1]
0x1401c75f9: call    0x140070990
0x1401c75fe: inc     edi
0x1401c7600: cmp     DWORD PTR [rax],0x80
0x1401c7606: cmove   edi,ebx
0x1401c7609: inc     rsi
0x1401c760c: sub     r14,0x1
0x1401c7610: jne     0x1401c75f0
0x1401c7612: mov     rbx,QWORD PTR [rbp-0x30]
0x1401c7616: mov     rsi,QWORD PTR [rbp-0x60]
0x1401c761a: sub     rbx,0x1
0x1401c761e: mov     QWORD PTR [rbp-0x30],rbx
0x1401c7622: lea     r12,[r12+0x18]
0x1401c7627: lea     r13,[r13+0x18]
0x1401c762b: jne     0x1401c75d0
0x1401c762d: lea     rcx,[rbp+0x28]
0x1401c7631: call    0x140070440
0x1401c7636: mov     rcx,QWORD PTR [rax]
0x1401c7639: cmp     WORD PTR [rcx],0x5
0x1401c763d: jne     0x1401c766c
0x1401c763f: lea     rcx,[rbp+0x28]
0x1401c7643: call    0x140070440
0x1401c7648: mov     rcx,QWORD PTR [rax]
0x1401c764b: cmp     QWORD PTR [rcx+0x50],0x0
0x1401c7650: je      0x1401c766c
0x1401c7652: lea     rcx,[rbp+0x28]
0x1401c7656: call    0x140070440
0x1401c765b: mov     rcx,QWORD PTR [rax]
0x1401c765e: mov     rcx,QWORD PTR [rcx+0x50]
0x1401c7662: mov     rcx,QWORD PTR [rcx]
0x1401c7665: call    0x140070a80
0x1401c766a: add     edi,eax
0x1401c766c: lea     rcx,[rbp+0x28]
0x1401c7670: call    0x140070430
0x1401c7675: lea     rcx,[rbp+0x1b0]
0x1401c767c: call    0x1401fc790
0x1401c7681: lea     r8,[rbp+0xf8]
0x1401c7688: lea     rdx,[rbp+0x9]
0x1401c768c: lea     rcx,[rbp+0x28]
0x1401c7690: call    0x140070450
0x1401c7695: xor     edx,edx
0x1401c7697: movzx   ecx,BYTE PTR [rax]
0x1401c769a: call    0x140066de0
0x1401c769f: test    al,al
0x1401c76a1: jne     0x1401c7570
0x1401c76a7: mov     r12d,DWORD PTR [rsp+0x74]
0x1401c76ac: mov     esi,DWORD PTR [rbp-0x68]
0x1401c76af: mov     r15d,DWORD PTR [rbp-0x48]
0x1401c76b3: jmp     0x1401c76b8
0x1401c76b5: add     edi,0x2
0x1401c76b8: mov     rcx,QWORD PTR [rsp+0x78]
0x1401c76bd: add     rcx,0x250
0x1401c76c4: call    0x140070480
0x1401c76c9: add     edi,eax
0x1401c76cb: mov     DWORD PTR [rbp-0x68],edi
0x1401c76ce: mov     ecx,DWORD PTR [rip+0x2228534]        # 0x1423efc08
0x1401c76d4: cmp     edi,ecx
0x1401c76d6: jl      0x1401c76f3
0x1401c76d8: mov     eax,edi
0x1401c76da: sub     eax,ecx
0x1401c76dc: inc     eax
0x1401c76de: sub     edi,eax
0x1401c76e0: mov     DWORD PTR [rbp-0x68],edi
0x1401c76e3: sub     r15d,eax
0x1401c76e6: mov     eax,0x0
0x1401c76eb: cmovs   r15d,eax
0x1401c76ef: mov     DWORD PTR [rbp-0x48],r15d
0x1401c76f3: movsxd  rax,DWORD PTR [rbp-0x48]
0x1401c76f7: cmp     eax,edi
0x1401c76f9: jg      0x1401c77e8
0x1401c76ff: mov     QWORD PTR [rbp-0x30],rax
0x1401c7703: mov     r14,rax
0x1401c7706: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401c7710: mov     ebx,esi
0x1401c7712: cmp     esi,r12d
0x1401c7715: jg      0x1401c77d6
0x1401c771b: movsxd  r13,edi
0x1401c771e: mov     rdi,QWORD PTR [rbp-0x30]
0x1401c7722: mov     r8d,ebx
0x1401c7725: mov     edx,r15d
0x1401c7728: lea     rcx,[rip+0x24a5141]        # 0x14266c870
0x1401c772f: call    0x1400bc750
0x1401c7734: xor     r8d,r8d
0x1401c7737: xor     edx,edx
0x1401c7739: lea     rcx,[rip+0x24a5130]        # 0x14266c870
0x1401c7740: call    0x1400bc7c0
0x1401c7745: cmp     r14,rdi
0x1401c7748: jne     0x1401c7772
0x1401c774a: cmp     ebx,esi
0x1401c774c: jne     0x1401c7756
0x1401c774e: mov     edx,DWORD PTR [rip+0x24a6a40]        # 0x14266e194
0x1401c7754: jmp     0x1401c77bc
0x1401c7756: lea     rcx,[rip+0x24a5113]        # 0x14266c870
0x1401c775d: cmp     ebx,r12d
0x1401c7760: jne     0x1401c776a
0x1401c7762: mov     edx,DWORD PTR [rip+0x24a6a44]        # 0x14266e1ac
0x1401c7768: jmp     0x1401c77c3
0x1401c776a: mov     edx,DWORD PTR [rip+0x24a6a30]        # 0x14266e1a0
0x1401c7770: jmp     0x1401c77c3
0x1401c7772: cmp     r14,r13
0x1401c7775: jne     0x1401c779f
0x1401c7777: cmp     ebx,esi
0x1401c7779: jne     0x1401c7783
0x1401c777b: mov     edx,DWORD PTR [rip+0x24a6a1b]        # 0x14266e19c
0x1401c7781: jmp     0x1401c77bc
0x1401c7783: lea     rcx,[rip+0x24a50e6]        # 0x14266c870
0x1401c778a: cmp     ebx,r12d
0x1401c778d: jne     0x1401c7797
0x1401c778f: mov     edx,DWORD PTR [rip+0x24a6a1f]        # 0x14266e1b4
0x1401c7795: jmp     0x1401c77c3
0x1401c7797: mov     edx,DWORD PTR [rip+0x24a6a0b]        # 0x14266e1a8
0x1401c779d: jmp     0x1401c77c3
0x1401c779f: cmp     ebx,esi
0x1401c77a1: jne     0x1401c77ab
0x1401c77a3: mov     edx,DWORD PTR [rip+0x24a69ef]        # 0x14266e198
0x1401c77a9: jmp     0x1401c77bc
0x1401c77ab: cmp     ebx,r12d
0x1401c77ae: mov     edx,DWORD PTR [rip+0x24a69fc]        # 0x14266e1b0
0x1401c77b4: je      0x1401c77bc
0x1401c77b6: mov     edx,DWORD PTR [rip+0x24a69e8]        # 0x14266e1a4
0x1401c77bc: lea     rcx,[rip+0x24a50ad]        # 0x14266c870
0x1401c77c3: call    0x140af4570
0x1401c77c8: inc     ebx
0x1401c77ca: cmp     ebx,r12d
0x1401c77cd: jle     0x1401c7722
0x1401c77d3: mov     edi,DWORD PTR [rbp-0x68]
0x1401c77d6: inc     r15d
0x1401c77d9: inc     r14
0x1401c77dc: cmp     r15d,edi
0x1401c77df: jle     0x1401c7710
0x1401c77e5: mov     eax,DWORD PTR [rbp-0x48]
0x1401c77e8: lea     ebx,[rsi+0x2]
0x1401c77eb: mov     DWORD PTR [rbp-0x58],ebx
0x1401c77ee: lea     r12d,[rax+0x1]
0x1401c77f2: lea     r13d,[rdi-0x1]
0x1401c77f6: mov     rsi,QWORD PTR [rbp-0x78]
0x1401c77fa: mov     eax,DWORD PTR [rsi+0x13c0]
0x1401c7800: mov     DWORD PTR [rsp+0x74],eax
0x1401c7804: mov     eax,DWORD PTR [rsi+0x13c4]
0x1401c780a: mov     DWORD PTR [rbp-0x10],eax
0x1401c780d: mov     r14,QWORD PTR [rip+0x21f4e5c]        # 0x1423bc670
0x1401c7814: mov     QWORD PTR [rbp-0x60],r14
0x1401c7818: cmp     rsi,QWORD PTR [rip+0x21f4e49]        # 0x1423bc668
0x1401c781f: je      0x1401c8be7
0x1401c7825: lea     rcx,[rip+0x21ebef4]        # 0x1423b3720
0x1401c782c: call    0x140e7c440
0x1401c7831: mov     r15d,eax
0x1401c7834: mov     DWORD PTR [rbp-0x68],eax
0x1401c7837: test    eax,eax
0x1401c7839: jle     0x1401c8060
0x1401c783f: mov     r14b,0x1
0x1401c7842: mov     edx,DWORD PTR [rip+0x21ee2a8]        # 0x1423b5af0
0x1401c7848: lea     rcx,[rip+0x222c429]        # 0x1423f3c78
0x1401c784f: call    0x14007f120
0x1401c7854: mov     rsi,rax
0x1401c7857: xor     dil,dil
0x1401c785a: test    rax,rax
0x1401c785d: je      0x1401c79ba
0x1401c7863: lea     rcx,[rax+0x1028]
0x1401c786a: mov     rdx,QWORD PTR [rbp-0x78]
0x1401c786e: mov     edx,DWORD PTR [rdx+0x4]
0x1401c7871: call    0x140101130
0x1401c7876: movzx   r15d,ax
0x1401c787a: mov     rdx,rsi
0x1401c787d: mov     rcx,QWORD PTR [rbp-0x78]
0x1401c7881: call    0x1409b1430
0x1401c7886: mov     BYTE PTR [rbp-0x50],al
0x1401c7889: lea     ecx,[r15-0x3]
0x1401c788d: cmp     cx,0x1
0x1401c7891: jbe     0x1401c79aa
0x1401c7897: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c789b: add     rcx,0x3a0
0x1401c78a2: mov     edx,0x7
0x1401c78a7: call    0x1400735c0
0x1401c78ac: test    al,al
0x1401c78ae: jne     0x1401c78d7
0x1401c78b0: mov     rax,QWORD PTR [rbp-0x78]
0x1401c78b4: mov     rcx,QWORD PTR [rax+0x8]
0x1401c78b8: add     rcx,0x3a0
0x1401c78bf: mov     edx,0x7
0x1401c78c4: call    0x1400735c0
0x1401c78c9: movzx   edi,dil
0x1401c78cd: test    al,al
0x1401c78cf: mov     eax,0x1
0x1401c78d4: cmovne  edi,eax
0x1401c78d7: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c78db: add     rcx,0x3a0
0x1401c78e2: mov     edx,0x8
0x1401c78e7: call    0x1400735c0
0x1401c78ec: test    al,al
0x1401c78ee: jne     0x1401c7917
0x1401c78f0: mov     rax,QWORD PTR [rbp-0x78]
0x1401c78f4: mov     rcx,QWORD PTR [rax+0x8]
0x1401c78f8: add     rcx,0x3a0
0x1401c78ff: mov     edx,0x8
0x1401c7904: call    0x1400735c0
0x1401c7909: movzx   edi,dil
0x1401c790d: test    al,al
0x1401c790f: mov     eax,0x1
0x1401c7914: cmovne  edi,eax
0x1401c7917: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c791b: add     rcx,0x3a0
0x1401c7922: mov     edx,0x7
0x1401c7927: call    0x1400735c0
0x1401c792c: test    al,al
0x1401c792e: je      0x1401c7957
0x1401c7930: mov     rax,QWORD PTR [rbp-0x78]
0x1401c7934: mov     rcx,QWORD PTR [rax+0x8]
0x1401c7938: add     rcx,0x3a0
0x1401c793f: mov     edx,0x7
0x1401c7944: call    0x1400735c0
0x1401c7949: movzx   edi,dil
0x1401c794d: test    al,al
0x1401c794f: mov     eax,0x1
0x1401c7954: cmove   edi,eax
0x1401c7957: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c795b: add     rcx,0x3a0
0x1401c7962: mov     edx,0x8
0x1401c7967: call    0x1400735c0
0x1401c796c: test    al,al
0x1401c796e: je      0x1401c7997
0x1401c7970: mov     rax,QWORD PTR [rbp-0x78]
0x1401c7974: mov     rcx,QWORD PTR [rax+0x8]
0x1401c7978: add     rcx,0x3a0
0x1401c797f: mov     edx,0x8
0x1401c7984: call    0x1400735c0
0x1401c7989: movzx   edi,dil
0x1401c798d: test    al,al
0x1401c798f: mov     eax,0x1
0x1401c7994: cmove   edi,eax
0x1401c7997: dec     r15w
0x1401c799b: mov     eax,0xfffb
0x1401c79a0: test    ax,r15w
0x1401c79a4: je      0x1401c79b3
0x1401c79a6: movzx   eax,BYTE PTR [rbp-0x50]
0x1401c79aa: test    al,al
0x1401c79ac: je      0x1401c79b3
0x1401c79ae: test    dil,dil
0x1401c79b1: je      0x1401c79b6
0x1401c79b3: xor     r14b,r14b
0x1401c79b6: mov     r15d,DWORD PTR [rbp-0x68]
0x1401c79ba: lea     rcx,[rbp+0x1430]
0x1401c79c1: call    0x140070cc0
0x1401c79c6: nop     
0x1401c79c7: lea     rcx,[rbp+0xef0]
0x1401c79ce: call    0x140070cc0
0x1401c79d3: nop     
0x1401c79d4: mov     rsi,QWORD PTR [rbp-0x78]
0x1401c79d8: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c79dc: add     rcx,0x3a0
0x1401c79e3: mov     edx,0x2d
0x1401c79e8: call    0x1400735c0
0x1401c79ed: test    al,al
0x1401c79ef: je      0x1401c7b23
0x1401c79f5: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c79f9: add     rcx,0x3a0
0x1401c7a00: mov     edx,0x8
0x1401c7a05: call    0x1400735c0
0x1401c7a0a: test    al,al
0x1401c7a0c: je      0x1401c7b23
0x1401c7a12: test    r14b,r14b
0x1401c7a15: jne     0x1401c7c34
0x1401c7a1b: xor     r8d,r8d
0x1401c7a1e: mov     edx,0x6
0x1401c7a23: mov     r9b,0x1
0x1401c7a26: lea     rcx,[rip+0x24a4e43]        # 0x14266c870
0x1401c7a2d: call    0x1400bc760
0x1401c7a32: mov     r8d,ebx
0x1401c7a35: mov     edx,r12d
0x1401c7a38: lea     rcx,[rip+0x24a4e31]        # 0x14266c870
0x1401c7a3f: call    0x1400bc750
0x1401c7a44: lea     rdx,[rip+0x1457e7d]        # 0x14161f8c8 ; literal='Exports to '
0x1401c7a4b: lea     rcx,[rbp+0x1e50]
0x1401c7a52: call    0x140069780
0x1401c7a57: nop     
0x1401c7a58: xor     r9d,r9d
0x1401c7a5b: xor     r8d,r8d
0x1401c7a5e: lea     rdx,[rbp+0x1e50]
0x1401c7a65: lea     rcx,[rip+0x24a4e04]        # 0x14266c870
0x1401c7a6c: call    0x140af3400
0x1401c7a71: nop     
0x1401c7a72: lea     rcx,[rbp+0x1e50]
0x1401c7a79: call    0x140069460
0x1401c7a7e: lea     rdx,[rbp+0xef0]
0x1401c7a85: mov     rcx,QWORD PTR [rbp-0x60]
0x1401c7a89: call    0x140aadad0
0x1401c7a8e: xor     r9d,r9d
0x1401c7a91: xor     r8d,r8d
0x1401c7a94: lea     rdx,[rbp+0xef0]
0x1401c7a9b: lea     rcx,[rip+0x24a4dce]        # 0x14266c870
0x1401c7aa2: call    0x140af3400
0x1401c7aa7: mov     r8b,0x1
0x1401c7aaa: mov     dl,0x3a
0x1401c7aac: lea     rcx,[rip+0x24a4dbd]        # 0x14266c870
0x1401c7ab3: call    0x1400bc7c0
0x1401c7ab8: lea     edi,[rbx+0x23]
0x1401c7abb: mov     r8d,edi
0x1401c7abe: mov     edx,r12d
0x1401c7ac1: lea     rcx,[rip+0x24a4da8]        # 0x14266c870
0x1401c7ac8: call    0x1400bc750
0x1401c7acd: xor     r8d,r8d
0x1401c7ad0: mov     edx,0x6
0x1401c7ad5: xor     r9d,r9d
0x1401c7ad8: lea     rcx,[rip+0x24a4d91]        # 0x14266c870
0x1401c7adf: call    0x1400bc760
0x1401c7ae4: lea     rdx,[rip+0x1457ded]        # 0x14161f8d8 ; literal='Petty Annoyance'
0x1401c7aeb: lea     rcx,[rbp+0x3150]
0x1401c7af2: call    0x140069780
0x1401c7af7: nop     
0x1401c7af8: xor     r9d,r9d
0x1401c7afb: xor     r8d,r8d
0x1401c7afe: lea     rdx,[rbp+0x3150]
0x1401c7b05: lea     rcx,[rip+0x24a4d64]        # 0x14266c870
0x1401c7b0c: call    0x140af3400
0x1401c7b11: nop     
0x1401c7b12: lea     rcx,[rbp+0x3150]
0x1401c7b19: call    0x140069460
0x1401c7b1e: jmp     0x1401c7e0d
0x1401c7b23: test    r14b,r14b
0x1401c7b26: jne     0x1401c7c34
0x1401c7b2c: xor     r8d,r8d
0x1401c7b2f: mov     edx,0x6
0x1401c7b34: mov     r9b,0x1
0x1401c7b37: lea     rcx,[rip+0x24a4d32]        # 0x14266c870
0x1401c7b3e: call    0x1400bc760
0x1401c7b43: mov     r8d,ebx
0x1401c7b46: mov     edx,r12d
0x1401c7b49: lea     rcx,[rip+0x24a4d20]        # 0x14266c870
0x1401c7b50: call    0x1400bc750
0x1401c7b55: lea     rdx,[rip+0x1457d6c]        # 0x14161f8c8 ; literal='Exports to '
0x1401c7b5c: lea     rcx,[rbp+0x3870]
0x1401c7b63: call    0x140069780
0x1401c7b68: nop     
0x1401c7b69: xor     r9d,r9d
0x1401c7b6c: xor     r8d,r8d
0x1401c7b6f: lea     rdx,[rbp+0x3870]
0x1401c7b76: lea     rcx,[rip+0x24a4cf3]        # 0x14266c870
0x1401c7b7d: call    0x140af3400
0x1401c7b82: nop     
0x1401c7b83: lea     rcx,[rbp+0x3870]
0x1401c7b8a: call    0x140069460
0x1401c7b8f: lea     rdx,[rbp+0xef0]
0x1401c7b96: mov     rcx,QWORD PTR [rbp-0x60]
0x1401c7b9a: call    0x140aadad0
0x1401c7b9f: xor     r9d,r9d
0x1401c7ba2: xor     r8d,r8d
0x1401c7ba5: lea     rdx,[rbp+0xef0]
0x1401c7bac: lea     rcx,[rip+0x24a4cbd]        # 0x14266c870
0x1401c7bb3: call    0x140af3400
0x1401c7bb8: mov     r8b,0x1
0x1401c7bbb: mov     dl,0x3a
0x1401c7bbd: lea     rcx,[rip+0x24a4cac]        # 0x14266c870
0x1401c7bc4: call    0x1400bc7c0
0x1401c7bc9: lea     edi,[rbx+0x23]
0x1401c7bcc: mov     r8d,edi
0x1401c7bcf: mov     edx,r12d
0x1401c7bd2: lea     rcx,[rip+0x24a4c97]        # 0x14266c870
0x1401c7bd9: call    0x1400bc750
0x1401c7bde: xor     r8d,r8d
0x1401c7be1: mov     edx,0x5
0x1401c7be6: mov     r9b,0x1
0x1401c7be9: lea     rcx,[rip+0x24a4c80]        # 0x14266c870
0x1401c7bf0: call    0x1400bc760
0x1401c7bf5: lea     rdx,[rip+0x1457cec]        # 0x14161f8e8 ; literal='Terror'
0x1401c7bfc: lea     rcx,[rbp+0x1b90]
0x1401c7c03: call    0x140069780
0x1401c7c08: nop     
0x1401c7c09: xor     r9d,r9d
0x1401c7c0c: xor     r8d,r8d
0x1401c7c0f: lea     rdx,[rbp+0x1b90]
0x1401c7c16: lea     rcx,[rip+0x24a4c53]        # 0x14266c870
0x1401c7c1d: call    0x140af3400
0x1401c7c22: nop     
0x1401c7c23: lea     rcx,[rbp+0x1b90]
0x1401c7c2a: call    0x140069460
0x1401c7c2f: jmp     0x1401c7e0d
0x1401c7c34: mov     esi,DWORD PTR [rsp+0x74]
0x1401c7c38: xor     r8d,r8d
0x1401c7c3b: mov     edx,0x6
0x1401c7c40: mov     r9b,0x1
0x1401c7c43: lea     rcx,[rip+0x24a4c26]        # 0x14266c870
0x1401c7c4a: call    0x1400bc760
0x1401c7c4f: mov     r8d,ebx
0x1401c7c52: mov     edx,r12d
0x1401c7c55: lea     rcx,[rip+0x24a4c14]        # 0x14266c870
0x1401c7c5c: call    0x1400bc750
0x1401c7c61: lea     rdx,[rip+0x1457c88]        # 0x14161f8f0 ; literal='Imports from '
0x1401c7c68: test    esi,esi
0x1401c7c6a: jne     0x1401c7d45
0x1401c7c70: lea     rcx,[rbp+0x1bb0]
0x1401c7c77: call    0x140069780
0x1401c7c7c: nop     
0x1401c7c7d: xor     r9d,r9d
0x1401c7c80: xor     r8d,r8d
0x1401c7c83: lea     rdx,[rbp+0x1bb0]
0x1401c7c8a: lea     rcx,[rip+0x24a4bdf]        # 0x14266c870
0x1401c7c91: call    0x140af3400
0x1401c7c96: nop     
0x1401c7c97: lea     rcx,[rbp+0x1bb0]
0x1401c7c9e: call    0x140069460
0x1401c7ca3: lea     rdx,[rbp+0xef0]
0x1401c7caa: mov     rcx,QWORD PTR [rbp-0x60]
0x1401c7cae: call    0x140aadad0
0x1401c7cb3: xor     r9d,r9d
0x1401c7cb6: xor     r8d,r8d
0x1401c7cb9: lea     rdx,[rbp+0xef0]
0x1401c7cc0: lea     rcx,[rip+0x24a4ba9]        # 0x14266c870
0x1401c7cc7: call    0x140af3400
0x1401c7ccc: mov     r8b,0x1
0x1401c7ccf: mov     dl,0x3a
0x1401c7cd1: lea     rcx,[rip+0x24a4b98]        # 0x14266c870
0x1401c7cd8: call    0x1400bc7c0
0x1401c7cdd: lea     edi,[rbx+0x23]
0x1401c7ce0: mov     r8d,edi
0x1401c7ce3: mov     edx,r12d
0x1401c7ce6: lea     rcx,[rip+0x24a4b83]        # 0x14266c870
0x1401c7ced: call    0x1400bc750
0x1401c7cf2: xor     r8d,r8d
0x1401c7cf5: xor     edx,edx
0x1401c7cf7: mov     r9b,0x1
0x1401c7cfa: lea     rcx,[rip+0x24a4b6f]        # 0x14266c870
0x1401c7d01: call    0x1400bc760
0x1401c7d06: lea     rdx,[rip+0x145377f]        # 0x14161b48c ; literal='None'
0x1401c7d0d: lea     rcx,[rbp+0x1bd0]
0x1401c7d14: call    0x140069780
0x1401c7d19: nop     
0x1401c7d1a: xor     r9d,r9d
0x1401c7d1d: xor     r8d,r8d
0x1401c7d20: lea     rdx,[rbp+0x1bd0]
0x1401c7d27: lea     rcx,[rip+0x24a4b42]        # 0x14266c870
0x1401c7d2e: call    0x140af3400
0x1401c7d33: nop     
0x1401c7d34: lea     rcx,[rbp+0x1bd0]
0x1401c7d3b: call    0x140069460
0x1401c7d40: jmp     0x1401c7e09
0x1401c7d45: lea     rcx,[rbp+0x1bf0]
0x1401c7d4c: call    0x140069780
0x1401c7d51: nop     
0x1401c7d52: xor     r9d,r9d
0x1401c7d55: xor     r8d,r8d
0x1401c7d58: lea     rdx,[rbp+0x1bf0]
0x1401c7d5f: lea     rcx,[rip+0x24a4b0a]        # 0x14266c870
0x1401c7d66: call    0x140af3400
0x1401c7d6b: nop     
0x1401c7d6c: lea     rcx,[rbp+0x1bf0]
0x1401c7d73: call    0x140069460
0x1401c7d78: lea     rdx,[rbp+0xef0]
0x1401c7d7f: mov     rcx,QWORD PTR [rbp-0x60]
0x1401c7d83: call    0x140aadad0
0x1401c7d88: xor     r9d,r9d
0x1401c7d8b: xor     r8d,r8d
0x1401c7d8e: lea     rdx,[rbp+0xef0]
0x1401c7d95: lea     rcx,[rip+0x24a4ad4]        # 0x14266c870
0x1401c7d9c: call    0x140af3400
0x1401c7da1: mov     r8b,0x1
0x1401c7da4: mov     dl,0x3a
0x1401c7da6: lea     rcx,[rip+0x24a4ac3]        # 0x14266c870
0x1401c7dad: call    0x1400bc7c0
0x1401c7db2: lea     edi,[rbx+0x23]
0x1401c7db5: mov     r8d,edi
0x1401c7db8: mov     edx,r12d
0x1401c7dbb: lea     rcx,[rip+0x24a4aae]        # 0x14266c870
0x1401c7dc2: call    0x1400bc750
0x1401c7dc7: xor     r8d,r8d
0x1401c7dca: mov     edx,0x6
0x1401c7dcf: mov     r9b,0x1
0x1401c7dd2: lea     rcx,[rip+0x24a4a97]        # 0x14266c870
0x1401c7dd9: call    0x1400bc760
0x1401c7dde: lea     r8d,[r15-0x1]
0x1401c7de2: mov     edx,esi
0x1401c7de4: lea     rcx,[rbp+0x1430]
0x1401c7deb: call    0x140798f10
0x1401c7df0: xor     r9d,r9d
0x1401c7df3: xor     r8d,r8d
0x1401c7df6: lea     rdx,[rbp+0x1430]
0x1401c7dfd: lea     rcx,[rip+0x24a4a6c]        # 0x14266c870
0x1401c7e04: call    0x140af3400
0x1401c7e09: mov     rsi,QWORD PTR [rbp-0x78]
0x1401c7e0d: mov     eax,0x1
0x1401c7e12: add     r12d,eax
0x1401c7e15: xor     r8d,r8d
0x1401c7e18: mov     edx,0x2
0x1401c7e1d: movzx   r9d,al
0x1401c7e21: lea     rcx,[rip+0x24a4a48]        # 0x14266c870
0x1401c7e28: call    0x1400bc760
0x1401c7e2d: mov     r8d,ebx
0x1401c7e30: mov     edx,r12d
0x1401c7e33: lea     rcx,[rip+0x24a4a36]        # 0x14266c870
0x1401c7e3a: call    0x1400bc750
0x1401c7e3f: lea     rdx,[rip+0x1457aba]        # 0x14161f900 ; literal='Offerings from '
0x1401c7e46: lea     rcx,[rbp+0x1c10]
0x1401c7e4d: call    0x140069780
0x1401c7e52: nop     
0x1401c7e53: xor     r9d,r9d
0x1401c7e56: xor     r8d,r8d
0x1401c7e59: lea     rdx,[rbp+0x1c10]
0x1401c7e60: lea     rcx,[rip+0x24a4a09]        # 0x14266c870
0x1401c7e67: call    0x140af3400
0x1401c7e6c: nop     
0x1401c7e6d: lea     rcx,[rbp+0x1c10]
0x1401c7e74: call    0x140069460
0x1401c7e79: lea     rdx,[rbp+0xef0]
0x1401c7e80: mov     rcx,QWORD PTR [rbp-0x60]
0x1401c7e84: call    0x140aadad0
0x1401c7e89: xor     r9d,r9d
0x1401c7e8c: xor     r8d,r8d
0x1401c7e8f: lea     rdx,[rbp+0xef0]
0x1401c7e96: lea     rcx,[rip+0x24a49d3]        # 0x14266c870
0x1401c7e9d: call    0x140af3400
0x1401c7ea2: mov     r8b,0x1
0x1401c7ea5: mov     dl,0x3a
0x1401c7ea7: lea     rcx,[rip+0x24a49c2]        # 0x14266c870
0x1401c7eae: call    0x1400bc7c0
0x1401c7eb3: mov     r8d,edi
0x1401c7eb6: mov     edx,r12d
0x1401c7eb9: lea     rcx,[rip+0x24a49b0]        # 0x14266c870
0x1401c7ec0: call    0x1400bc750
0x1401c7ec5: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c7ec9: add     rcx,0x3a0
0x1401c7ed0: mov     edx,0x2d
0x1401c7ed5: call    0x1400735c0
0x1401c7eda: test    al,al
0x1401c7edc: je      0x1401c7f56
0x1401c7ede: mov     rcx,QWORD PTR [rsi+0x8]
0x1401c7ee2: add     rcx,0x3a0
0x1401c7ee9: mov     edx,0x8
0x1401c7eee: call    0x1400735c0
0x1401c7ef3: test    al,al
0x1401c7ef5: je      0x1401c7f56
0x1401c7ef7: test    r14b,r14b
0x1401c7efa: jne     0x1401c7fb1
0x1401c7f00: xor     r8d,r8d
0x1401c7f03: mov     edx,0x4
0x1401c7f08: mov     r9b,0x1
0x1401c7f0b: lea     rcx,[rip+0x24a495e]        # 0x14266c870
0x1401c7f12: call    0x1400bc760
0x1401c7f17: lea     rdx,[rip+0x144aefa]        # 0x141612e18 ; literal='Death'
0x1401c7f1e: lea     rcx,[rbp+0x1c30]
0x1401c7f25: call    0x140069780
0x1401c7f2a: nop     
0x1401c7f2b: xor     r9d,r9d
0x1401c7f2e: xor     r8d,r8d
0x1401c7f31: lea     rdx,[rbp+0x1c30]
0x1401c7f38: lea     rcx,[rip+0x24a4931]        # 0x14266c870
0x1401c7f3f: call    0x140af3400
0x1401c7f44: nop     
0x1401c7f45: lea     rcx,[rbp+0x1c30]
0x1401c7f4c: call    0x140069460
0x1401c7f51: jmp     0x1401c803e
0x1401c7f56: test    r14b,r14b
0x1401c7f59: jne     0x1401c7fb1
0x1401c7f5b: xor     r8d,r8d
0x1401c7f5e: mov     edx,0x4
0x1401c7f63: mov     r9b,0x1
0x1401c7f66: lea     rcx,[rip+0x24a4903]        # 0x14266c870
0x1401c7f6d: call    0x1400bc760
0x1401c7f72: lea     rdx,[rip+0x1457997]        # 0x14161f910 ; literal='Vengeance'
0x1401c7f79: lea     rcx,[rbp+0x1c50]
0x1401c7f80: call    0x140069780
0x1401c7f85: nop     
0x1401c7f86: xor     r9d,r9d
0x1401c7f89: xor     r8d,r8d
0x1401c7f8c: lea     rdx,[rbp+0x1c50]
0x1401c7f93: lea     rcx,[rip+0x24a48d6]        # 0x14266c870
0x1401c7f9a: call    0x140af3400
0x1401c7f9f: nop     
0x1401c7fa0: lea     rcx,[rbp+0x1c50]
0x1401c7fa7: call    0x140069460
0x1401c7fac: jmp     0x1401c803e
0x1401c7fb1: mov     edi,DWORD PTR [rbp-0x10]
0x1401c7fb4: xor     r8d,r8d
0x1401c7fb7: mov     r9b,0x1
0x1401c7fba: lea     rcx,[rip+0x24a48af]        # 0x14266c870
0x1401c7fc1: test    edi,edi
0x1401c7fc3: jne     0x1401c8008
0x1401c7fc5: xor     edx,edx
0x1401c7fc7: call    0x1400bc760
0x1401c7fcc: lea     rdx,[rip+0x14534b9]        # 0x14161b48c ; literal='None'
0x1401c7fd3: lea     rcx,[rbp+0x1c70]
0x1401c7fda: call    0x140069780
0x1401c7fdf: nop     
0x1401c7fe0: xor     r9d,r9d
0x1401c7fe3: xor     r8d,r8d
0x1401c7fe6: lea     rdx,[rbp+0x1c70]
0x1401c7fed: lea     rcx,[rip+0x24a487c]        # 0x14266c870
0x1401c7ff4: call    0x140af3400
0x1401c7ff9: nop     
0x1401c7ffa: lea     rcx,[rbp+0x1c70]
0x1401c8001: call    0x140069460
0x1401c8006: jmp     0x1401c803e
0x1401c8008: mov     edx,0x6
0x1401c800d: call    0x1400bc760
0x1401c8012: lea     r8d,[r15-0x1]
0x1401c8016: mov     edx,edi
0x1401c8018: lea     rcx,[rbp+0x1430]
0x1401c801f: call    0x140798f10
0x1401c8024: xor     r9d,r9d
0x1401c8027: xor     r8d,r8d
0x1401c802a: lea     rdx,[rbp+0x1430]
0x1401c8031: lea     rcx,[rip+0x24a4838]        # 0x14266c870
0x1401c8038: call    0x140af3400
0x1401c803d: nop     
0x1401c803e: lea     rcx,[rbp+0xef0]
0x1401c8045: call    0x140069460
0x1401c804a: nop     
0x1401c804b: lea     rcx,[rbp+0x1430]
0x1401c8052: call    0x140069460
0x1401c8057: mov     r14,QWORD PTR [rbp-0x60]
0x1401c805b: jmp     0x1401c8112
0x1401c8060: mov     r8d,ebx
0x1401c8063: mov     edx,r12d
0x1401c8066: lea     rcx,[rip+0x24a4803]        # 0x14266c870
0x1401c806d: call    0x1400bc750
0x1401c8072: xor     r8d,r8d
0x1401c8075: mov     edx,0x7
0x1401c807a: xor     r9d,r9d
0x1401c807d: lea     rcx,[rip+0x24a47ec]        # 0x14266c870
0x1401c8084: call    0x1400bc760
0x1401c8089: lea     rdx,[rip+0x1457890]        # 0x14161f920 ; literal='You can look at trade information once you have'
0x1401c8090: lea     rcx,[rbp+0x1c90]
0x1401c8097: call    0x140069780
0x1401c809c: nop     
0x1401c809d: xor     r9d,r9d
0x1401c80a0: xor     r8d,r8d
0x1401c80a3: lea     rdx,[rbp+0x1c90]
0x1401c80aa: lea     rcx,[rip+0x24a47bf]        # 0x14266c870
0x1401c80b1: call    0x140af3400
0x1401c80b6: nop     
0x1401c80b7: lea     rcx,[rbp+0x1c90]
0x1401c80be: call    0x140069460
0x1401c80c3: inc     r12d
0x1401c80c6: mov     r8d,ebx
0x1401c80c9: mov     edx,r12d
0x1401c80cc: lea     rcx,[rip+0x24a479d]        # 0x14266c870
0x1401c80d3: call    0x1400bc750
0x1401c80d8: lea     rdx,[rip+0x1457871]        # 0x14161f950 ; literal='a broker with appraisal skill.'
0x1401c80df: lea     rcx,[rbp+0x1cb0]
0x1401c80e6: call    0x140069780
0x1401c80eb: nop     
0x1401c80ec: xor     r9d,r9d
0x1401c80ef: xor     r8d,r8d
0x1401c80f2: lea     rdx,[rbp+0x1cb0]
0x1401c80f9: lea     rcx,[rip+0x24a4770]        # 0x14266c870
0x1401c8100: call    0x140af3400
0x1401c8105: nop     
0x1401c8106: lea     rcx,[rbp+0x1cb0]
0x1401c810d: call    0x140069460
0x1401c8112: mov     eax,0x1
0x1401c8117: add     r12d,eax
0x1401c811a: mov     rcx,QWORD PTR [rip+0x21f4547]        # 0x1423bc668
0x1401c8121: add     rcx,0x1028
0x1401c8128: mov     edx,DWORD PTR [rsi+0x4]
0x1401c812b: call    0x140101120
0x1401c8130: mov     rdi,rax
0x1401c8133: test    rax,rax
0x1401c8136: je      0x1401c82e7
0x1401c813c: cmp     WORD PTR [rax+0x4],0x3
0x1401c8141: jne     0x1401c82e7
0x1401c8147: mov     r8d,ebx
0x1401c814a: mov     edx,r12d
0x1401c814d: lea     rcx,[rip+0x24a471c]        # 0x14266c870
0x1401c8154: call    0x1400bc750
0x1401c8159: xor     r8d,r8d
0x1401c815c: mov     edx,0x6
0x1401c8161: mov     r9b,0x1
0x1401c8164: lea     rcx,[rip+0x24a4705]        # 0x14266c870
0x1401c816b: call    0x1400bc760
0x1401c8170: lea     rdx,[rip+0x14577f9]        # 0x14161f970 ; literal='You accept their tribute every '
0x1401c8177: lea     rcx,[rbp+0x1cd0]
0x1401c817e: call    0x140069780
0x1401c8183: nop     
0x1401c8184: xor     r9d,r9d
0x1401c8187: mov     r8b,0x3
0x1401c818a: lea     rdx,[rbp+0x1cd0]
0x1401c8191: lea     rcx,[rip+0x24a46d8]        # 0x14266c870
0x1401c8198: call    0x140af3400
0x1401c819d: nop     
0x1401c819e: lea     rcx,[rbp+0x1cd0]
0x1401c81a5: call    0x140069460
0x1401c81aa: mov     ecx,DWORD PTR [rdi+0x44]
0x1401c81ad: test    ecx,ecx
0x1401c81af: je      0x1401c8270
0x1401c81b5: sub     ecx,0x1
0x1401c81b8: je      0x1401c8239
0x1401c81ba: sub     ecx,0x1
0x1401c81bd: je      0x1401c8202
0x1401c81bf: cmp     ecx,0x1
0x1401c81c2: jne     0x1401c82aa
0x1401c81c8: lea     rdx,[rip+0x1450dd9]        # 0x141618fa8 ; literal='Winter'
0x1401c81cf: lea     rcx,[rbp+0x1cf0]
0x1401c81d6: call    0x140069780
0x1401c81db: nop     
0x1401c81dc: xor     r9d,r9d
0x1401c81df: mov     r8b,0x3
0x1401c81e2: lea     rdx,[rbp+0x1cf0]
0x1401c81e9: lea     rcx,[rip+0x24a4680]        # 0x14266c870
0x1401c81f0: call    0x140af3400
0x1401c81f5: nop     
0x1401c81f6: lea     rcx,[rbp+0x1cf0]
0x1401c81fd: jmp     0x1401c82a5
0x1401c8202: lea     rdx,[rip+0x1450bd3]        # 0x141618ddc ; literal='Autumn'
0x1401c8209: lea     rcx,[rbp+0x1d10]
0x1401c8210: call    0x140069780
0x1401c8215: nop     
0x1401c8216: xor     r9d,r9d
0x1401c8219: mov     r8b,0x3
0x1401c821c: lea     rdx,[rbp+0x1d10]
0x1401c8223: lea     rcx,[rip+0x24a4646]        # 0x14266c870
0x1401c822a: call    0x140af3400
0x1401c822f: nop     
0x1401c8230: lea     rcx,[rbp+0x1d10]
0x1401c8237: jmp     0x1401c82a5
0x1401c8239: lea     rdx,[rip+0x1450b94]        # 0x141618dd4 ; literal='Summer'
0x1401c8240: lea     rcx,[rbp+0x1d30]
0x1401c8247: call    0x140069780
0x1401c824c: nop     
0x1401c824d: xor     r9d,r9d
0x1401c8250: mov     r8b,0x3
0x1401c8253: lea     rdx,[rbp+0x1d30]
0x1401c825a: lea     rcx,[rip+0x24a460f]        # 0x14266c870
0x1401c8261: call    0x140af3400
0x1401c8266: nop     
0x1401c8267: lea     rcx,[rbp+0x1d30]
0x1401c826e: jmp     0x1401c82a5
0x1401c8270: lea     rdx,[rip+0x1450b55]        # 0x141618dcc ; literal='Spring'
0x1401c8277: lea     rcx,[rbp+0x1d50]
0x1401c827e: call    0x140069780
0x1401c8283: nop     
0x1401c8284: xor     r9d,r9d
0x1401c8287: mov     r8b,0x3
0x1401c828a: lea     rdx,[rbp+0x1d50]
0x1401c8291: lea     rcx,[rip+0x24a45d8]        # 0x14266c870
0x1401c8298: call    0x140af3400
0x1401c829d: nop     
0x1401c829e: lea     rcx,[rbp+0x1d50]
0x1401c82a5: call    0x140069460
0x1401c82aa: lea     rdx,[rip+0x143b593]        # 0x141603844 ; literal='.'
0x1401c82b1: lea     rcx,[rbp+0x1d70]
0x1401c82b8: call    0x140069780
0x1401c82bd: nop     
0x1401c82be: xor     r9d,r9d
0x1401c82c1: xor     r8d,r8d
0x1401c82c4: lea     rdx,[rbp+0x1d70]
0x1401c82cb: lea     rcx,[rip+0x24a459e]        # 0x14266c870
0x1401c82d2: call    0x140af3400
0x1401c82d7: nop     
0x1401c82d8: lea     rcx,[rbp+0x1d70]
0x1401c82df: call    0x140069460
0x1401c82e4: inc     r12d
0x1401c82e7: inc     r12d
0x1401c82ea: mov     r15,QWORD PTR [rsp+0x78]
0x1401c82ef: lea     rcx,[r15+0x280]
0x1401c82f6: call    0x140070480
0x1401c82fb: test    rax,rax
0x1401c82fe: je      0x1401c8b79
0x1401c8304: xor     r8d,r8d
0x1401c8307: mov     edx,0x7
0x1401c830c: xor     r9d,r9d
0x1401c830f: lea     rcx,[rip+0x24a455a]        # 0x14266c870
0x1401c8316: call    0x1400bc760
0x1401c831b: lea     rcx,[rbp+0xd10]
0x1401c8322: call    0x140070cc0
0x1401c8327: nop     
0x1401c8328: lea     rdx,[rbp-0x8]
0x1401c832c: lea     rcx,[r15+0x280]
0x1401c8333: call    0x140070870
0x1401c8338: lea     rdx,[rbp+0x100]
0x1401c833f: lea     rcx,[r15+0x280]
0x1401c8346: call    0x140070860
0x1401c834b: lea     rcx,[r15+0x298]
0x1401c8352: lea     rdx,[rbp+0x198]
0x1401c8359: call    0x140070870
0x1401c835e: lea     r8,[rbp+0x100]
0x1401c8365: lea     rdx,[rbp+0xa]
0x1401c8369: lea     rcx,[rbp-0x8]
0x1401c836d: call    0x140070450
0x1401c8372: xor     edx,edx
0x1401c8374: movzx   ecx,BYTE PTR [rax]
0x1401c8377: call    0x140066de0
0x1401c837c: test    al,al
0x1401c837e: je      0x1401c8b6b
0x1401c8384: cmp     r12d,r13d
0x1401c8387: jg      0x1401c8b67
0x1401c838d: lea     rcx,[rbp-0x8]
0x1401c8391: call    0x140070440
0x1401c8396: mov     rcx,QWORD PTR [rax]
0x1401c8399: cmp     WORD PTR [rcx],0x0
0x1401c839d: jne     0x1401c84f7
0x1401c83a3: xor     r8d,r8d
0x1401c83a6: mov     edx,0x7
0x1401c83ab: mov     r9b,0x1
0x1401c83ae: lea     rcx,[rip+0x24a44bb]        # 0x14266c870
0x1401c83b5: call    0x1400bc760
0x1401c83ba: lea     rcx,[rbp-0x8]
0x1401c83be: call    0x140070440
0x1401c83c3: mov     rcx,QWORD PTR [rax]
0x1401c83c6: lea     rdx,[rbp+0xd10]
0x1401c83cd: movzx   ecx,WORD PTR [rcx+0x2]
0x1401c83d1: call    0x140ae13f0
0x1401c83d6: lea     rcx,[rbp+0xd10]
0x1401c83dd: call    0x140546b30
0x1401c83e2: mov     r8d,ebx
0x1401c83e5: mov     edx,r12d
0x1401c83e8: lea     rcx,[rip+0x24a4481]        # 0x14266c870
0x1401c83ef: call    0x1400bc750
0x1401c83f4: xor     r9d,r9d
0x1401c83f7: xor     r8d,r8d
0x1401c83fa: lea     rdx,[rbp+0xd10]
0x1401c8401: lea     rcx,[rip+0x24a4468]        # 0x14266c870
0x1401c8408: call    0x140af3400
0x1401c840d: lea     rcx,[rbp-0x8]
0x1401c8411: call    0x140070440
0x1401c8416: mov     rcx,QWORD PTR [rax]
0x1401c8419: cmp     WORD PTR [rcx+0x2],0x2
0x1401c841e: jne     0x1401c84f7
0x1401c8424: lea     rcx,[rbp-0x8]
0x1401c8428: call    0x140070440
0x1401c842d: mov     rcx,QWORD PTR [rax]
0x1401c8430: cmp     DWORD PTR [rcx+0x3c],0x0
0x1401c8434: jle     0x1401c843d
0x1401c8436: mov     edx,0x2
0x1401c843b: jmp     0x1401c8459
0x1401c843d: lea     rcx,[rbp-0x8]
0x1401c8441: call    0x140070440
0x1401c8446: mov     rcx,QWORD PTR [rax]
0x1401c8449: cmp     DWORD PTR [rcx+0x3c],0x0
0x1401c844d: mov     edx,0x6
0x1401c8452: je      0x1401c8459
0x1401c8454: mov     edx,0x4
0x1401c8459: mov     r9b,0x1
0x1401c845c: xor     r8d,r8d
0x1401c845f: lea     rcx,[rip+0x24a440a]        # 0x14266c870
0x1401c8466: call    0x1400bc760
0x1401c846b: lea     r8d,[rbx+0x1e]
0x1401c846f: mov     edx,r12d
0x1401c8472: lea     rcx,[rip+0x24a43f7]        # 0x14266c870
0x1401c8479: call    0x1400bc750
0x1401c847e: lea     rcx,[rbp-0x8]
0x1401c8482: call    0x140070440
0x1401c8487: mov     rcx,QWORD PTR [rax]
0x1401c848a: lea     rdx,[rbp+0xd10]
0x1401c8491: mov     ecx,DWORD PTR [rcx+0x3c]
0x1401c8494: call    0x140545790
0x1401c8499: xor     r9d,r9d
0x1401c849c: xor     r8d,r8d
0x1401c849f: lea     rdx,[rbp+0xd10]
0x1401c84a6: lea     rcx,[rip+0x24a43c3]        # 0x14266c870
0x1401c84ad: call    0x140af3400
0x1401c84b2: mov     r8b,0x1
0x1401c84b5: mov     dl,0x2f
0x1401c84b7: lea     rcx,[rip+0x24a43b2]        # 0x14266c870
0x1401c84be: call    0x1400bc7c0
0x1401c84c3: lea     rcx,[rbp-0x8]
0x1401c84c7: call    0x140070440
0x1401c84cc: mov     rcx,QWORD PTR [rax]
0x1401c84cf: lea     rdx,[rbp+0xd10]
0x1401c84d6: mov     ecx,DWORD PTR [rcx+0x38]
0x1401c84d9: call    0x140545790
0x1401c84de: xor     r9d,r9d
0x1401c84e1: xor     r8d,r8d
0x1401c84e4: lea     rdx,[rbp+0xd10]
0x1401c84eb: lea     rcx,[rip+0x24a437e]        # 0x14266c870
0x1401c84f2: call    0x140af3400
0x1401c84f7: lea     rcx,[rbp-0x8]
0x1401c84fb: call    0x140070440
0x1401c8500: mov     rcx,QWORD PTR [rax]
0x1401c8503: cmp     WORD PTR [rcx],0x4
0x1401c8507: jne     0x1401c85c3
0x1401c850d: xor     r8d,r8d
0x1401c8510: mov     edx,0x7
0x1401c8515: mov     r9b,0x1
0x1401c8518: lea     rcx,[rip+0x24a4351]        # 0x14266c870
0x1401c851f: call    0x1400bc760
0x1401c8524: mov     r8d,ebx
0x1401c8527: mov     edx,r12d
0x1401c852a: lea     rcx,[rip+0x24a433f]        # 0x14266c870
0x1401c8531: call    0x1400bc750
0x1401c8536: lea     rdx,[rip+0x1457453]        # 0x14161f990 ; literal='Trade Agreement (Exports to '
0x1401c853d: lea     rcx,[rbp+0x1d90]
0x1401c8544: call    0x140069780
0x1401c8549: nop     
0x1401c854a: xor     r9d,r9d
0x1401c854d: xor     r8d,r8d
0x1401c8550: lea     rdx,[rbp+0x1d90]
0x1401c8557: lea     rcx,[rip+0x24a4312]        # 0x14266c870
0x1401c855e: call    0x140af3400
0x1401c8563: nop     
0x1401c8564: lea     rcx,[rbp+0x1d90]
0x1401c856b: call    0x140069460
0x1401c8570: lea     rcx,[rbp+0x1510]
0x1401c8577: call    0x140070cc0
0x1401c857c: nop     
0x1401c857d: lea     rdx,[rbp+0x1510]
0x1401c8584: mov     rcx,r14
0x1401c8587: call    0x140aadad0
0x1401c858c: xor     r9d,r9d
0x1401c858f: xor     r8d,r8d
0x1401c8592: lea     rdx,[rbp+0x1510]
0x1401c8599: lea     rcx,[rip+0x24a42d0]        # 0x14266c870
0x1401c85a0: call    0x140af3400
0x1401c85a5: mov     r8b,0x1
0x1401c85a8: mov     dl,0x29
0x1401c85aa: lea     rcx,[rip+0x24a42bf]        # 0x14266c870
0x1401c85b1: call    0x1400bc7c0
0x1401c85b6: nop     
0x1401c85b7: lea     rcx,[rbp+0x1510]
0x1401c85be: call    0x140069460
0x1401c85c3: lea     rcx,[rbp-0x8]
0x1401c85c7: call    0x140070440
0x1401c85cc: mov     rcx,QWORD PTR [rax]
0x1401c85cf: cmp     WORD PTR [rcx],0x5
0x1401c85d3: jne     0x1401c868f
0x1401c85d9: xor     r8d,r8d
0x1401c85dc: mov     edx,0x7
0x1401c85e1: mov     r9b,0x1
0x1401c85e4: lea     rcx,[rip+0x24a4285]        # 0x14266c870
0x1401c85eb: call    0x1400bc760
0x1401c85f0: mov     r8d,ebx
0x1401c85f3: mov     edx,r12d
0x1401c85f6: lea     rcx,[rip+0x24a4273]        # 0x14266c870
0x1401c85fd: call    0x1400bc750
0x1401c8602: lea     rdx,[rip+0x14573a7]        # 0x14161f9b0 ; literal='Requests (Imports from '
0x1401c8609: lea     rcx,[rbp+0x1db0]
0x1401c8610: call    0x140069780
0x1401c8615: nop     
0x1401c8616: xor     r9d,r9d
0x1401c8619: xor     r8d,r8d
0x1401c861c: lea     rdx,[rbp+0x1db0]
0x1401c8623: lea     rcx,[rip+0x24a4246]        # 0x14266c870
0x1401c862a: call    0x140af3400
0x1401c862f: nop     
0x1401c8630: lea     rcx,[rbp+0x1db0]
0x1401c8637: call    0x140069460
0x1401c863c: lea     rcx,[rbp+0x1530]
0x1401c8643: call    0x140070cc0
0x1401c8648: nop     
0x1401c8649: lea     rdx,[rbp+0x1530]
0x1401c8650: mov     rcx,r14
0x1401c8653: call    0x140aadad0
0x1401c8658: xor     r9d,r9d
0x1401c865b: xor     r8d,r8d
0x1401c865e: lea     rdx,[rbp+0x1530]
0x1401c8665: lea     rcx,[rip+0x24a4204]        # 0x14266c870
0x1401c866c: call    0x140af3400
0x1401c8671: mov     r8b,0x1
0x1401c8674: mov     dl,0x29
0x1401c8676: lea     rcx,[rip+0x24a41f3]        # 0x14266c870
0x1401c867d: call    0x1400bc7c0
0x1401c8682: nop     
0x1401c8683: lea     rcx,[rbp+0x1530]
0x1401c868a: call    0x140069460
0x1401c868f: inc     r12d
0x1401c8692: cmp     r12d,r13d
0x1401c8695: jg      0x1401c8b67
0x1401c869b: xor     r8d,r8d
0x1401c869e: mov     edx,0x7
0x1401c86a3: xor     r9d,r9d
0x1401c86a6: lea     rcx,[rip+0x24a41c3]        # 0x14266c870
0x1401c86ad: call    0x1400bc760
0x1401c86b2: lea     edi,[rbx+0x1]
0x1401c86b5: mov     DWORD PTR [rbp-0x68],edi
0x1401c86b8: mov     r8d,edi
0x1401c86bb: mov     edx,r12d
0x1401c86be: lea     rcx,[rip+0x24a41ab]        # 0x14266c870
0x1401c86c5: call    0x1400bc750
0x1401c86ca: lea     rdx,[rip+0x145763f]        # 0x14161fd10 ; literal='Agreed in year '
0x1401c86d1: lea     rcx,[rbp+0x1dd0]
0x1401c86d8: call    0x140069780
0x1401c86dd: nop     
0x1401c86de: xor     r9d,r9d
0x1401c86e1: mov     r8b,0x3
0x1401c86e4: lea     rdx,[rbp+0x1dd0]
0x1401c86eb: lea     rcx,[rip+0x24a417e]        # 0x14266c870
0x1401c86f2: call    0x140af3400
0x1401c86f7: nop     
0x1401c86f8: lea     rcx,[rbp+0x1dd0]
0x1401c86ff: call    0x140069460
0x1401c8704: lea     rcx,[rbp-0x8]
0x1401c8708: call    0x140070440
0x1401c870d: mov     rcx,QWORD PTR [rax]
0x1401c8710: lea     rdx,[rbp+0xd10]
0x1401c8717: mov     ecx,DWORD PTR [rcx+0x40]
0x1401c871a: call    0x140545790
0x1401c871f: xor     r9d,r9d
0x1401c8722: xor     r8d,r8d
0x1401c8725: lea     rdx,[rbp+0xd10]
0x1401c872c: lea     rcx,[rip+0x24a413d]        # 0x14266c870
0x1401c8733: call    0x140af3400
0x1401c8738: lea     rcx,[rbp+0x198]
0x1401c873f: call    0x140070440
0x1401c8744: cmp     BYTE PTR [rax],0x0
0x1401c8747: je      0x1401c87ad
0x1401c8749: lea     r8d,[rbx+0x1e]
0x1401c874d: mov     edx,r12d
0x1401c8750: lea     rcx,[rip+0x24a4119]        # 0x14266c870
0x1401c8757: call    0x1400bc750
0x1401c875c: xor     r8d,r8d
0x1401c875f: mov     edx,0x3
0x1401c8764: mov     r9b,0x1
0x1401c8767: lea     rcx,[rip+0x24a4102]        # 0x14266c870
0x1401c876e: call    0x1400bc760
0x1401c8773: lea     rdx,[rip+0x14575a6]        # 0x14161fd20 ; literal='Pending'
0x1401c877a: lea     rcx,[rbp+0x1df0]
0x1401c8781: call    0x140069780
0x1401c8786: nop     
0x1401c8787: xor     r9d,r9d
0x1401c878a: xor     r8d,r8d
0x1401c878d: lea     rdx,[rbp+0x1df0]
0x1401c8794: lea     rcx,[rip+0x24a40d5]        # 0x14266c870
0x1401c879b: call    0x140af3400
0x1401c87a0: nop     
0x1401c87a1: lea     rcx,[rbp+0x1df0]
0x1401c87a8: call    0x140069460
0x1401c87ad: inc     r12d
0x1401c87b0: cmp     r12d,r13d
0x1401c87b3: jg      0x1401c8b67
0x1401c87b9: lea     rcx,[rbp-0x8]
0x1401c87bd: call    0x140070440
0x1401c87c2: mov     rcx,QWORD PTR [rax]
0x1401c87c5: cmp     WORD PTR [rcx],0x4
0x1401c87c9: jne     0x1401c8939
0x1401c87cf: lea     rcx,[rbp-0x8]
0x1401c87d3: call    0x140070440
0x1401c87d8: mov     rcx,QWORD PTR [rax]
0x1401c87db: cmp     QWORD PTR [rcx+0x48],0x0
0x1401c87e0: je      0x1401c8939
0x1401c87e6: lea     rcx,[rbp-0x8]
0x1401c87ea: call    0x140070440
0x1401c87ef: mov     rcx,QWORD PTR [rax]
0x1401c87f2: mov     rsi,QWORD PTR [rcx+0x48]
0x1401c87f6: xor     r15d,r15d
0x1401c87f9: add     rsi,0x8
0x1401c87fd: nop     DWORD PTR [rax]
0x1401c8800: mov     rcx,rsi
0x1401c8803: call    0x1400709a0
0x1401c8808: mov     r14,rax
0x1401c880b: xor     ebx,ebx
0x1401c880d: test    eax,eax
0x1401c880f: jle     0x1401c8922
0x1401c8815: cmp     r12d,r13d
0x1401c8818: jg      0x1401c8922
0x1401c881e: movsxd  rdi,ebx
0x1401c8821: mov     rdx,rdi
0x1401c8824: mov     rcx,rsi
0x1401c8827: call    0x140070990
0x1401c882c: cmp     DWORD PTR [rax],0x80
0x1401c8832: je      0x1401c8917
0x1401c8838: xor     r8d,r8d
0x1401c883b: mov     edx,0x6
0x1401c8840: xor     r9d,r9d
0x1401c8843: lea     rcx,[rip+0x24a4026]        # 0x14266c870
0x1401c884a: call    0x1400bc760
0x1401c884f: mov     r8d,DWORD PTR [rbp-0x68]
0x1401c8853: mov     edx,r12d
0x1401c8856: lea     rcx,[rip+0x24a4013]        # 0x14266c870
0x1401c885d: call    0x1400bc750
0x1401c8862: lea     r9,[rbp+0xd10]
0x1401c8869: movzx   r8d,bx
0x1401c886d: movzx   edx,r15w
0x1401c8871: mov     rcx,QWORD PTR [rbp-0x78]
0x1401c8875: call    0x14092dff0
0x1401c887a: lea     rcx,[rbp+0xd10]
0x1401c8881: call    0x140546b30
0x1401c8886: xor     r9d,r9d
0x1401c8889: xor     r8d,r8d
0x1401c888c: lea     rdx,[rbp+0xd10]
0x1401c8893: lea     rcx,[rip+0x24a3fd6]        # 0x14266c870
0x1401c889a: call    0x140af3400
0x1401c889f: xor     r8d,r8d
0x1401c88a2: mov     edx,0x6
0x1401c88a7: mov     r9b,0x1
0x1401c88aa: lea     rcx,[rip+0x24a3fbf]        # 0x14266c870
0x1401c88b1: call    0x1400bc760
0x1401c88b6: mov     r8d,DWORD PTR [rbp-0x58]
0x1401c88ba: add     r8d,0x2c
0x1401c88be: mov     edx,r12d
0x1401c88c1: lea     rcx,[rip+0x24a3fa8]        # 0x14266c870
0x1401c88c8: call    0x1400bc750
0x1401c88cd: mov     rdx,rdi
0x1401c88d0: mov     rcx,rsi
0x1401c88d3: call    0x140070990
0x1401c88d8: imul    ecx,DWORD PTR [rax],0x64
0x1401c88db: sar     ecx,0x7
0x1401c88de: lea     rdx,[rbp+0xd10]
0x1401c88e5: call    0x140545790
0x1401c88ea: xor     r9d,r9d
0x1401c88ed: xor     r8d,r8d
0x1401c88f0: lea     rdx,[rbp+0xd10]
0x1401c88f7: lea     rcx,[rip+0x24a3f72]        # 0x14266c870
0x1401c88fe: call    0x140af3400
0x1401c8903: mov     r8b,0x1
0x1401c8906: mov     dl,0x25
0x1401c8908: lea     rcx,[rip+0x24a3f61]        # 0x14266c870
0x1401c890f: call    0x1400bc7c0
0x1401c8914: inc     r12d
0x1401c8917: inc     ebx
0x1401c8919: cmp     ebx,r14d
0x1401c891c: jl      0x1401c8815
0x1401c8922: inc     r15d
0x1401c8925: add     rsi,0x18
0x1401c8929: cmp     r15d,0x6b
0x1401c892d: jl      0x1401c8800
0x1401c8933: mov     ebx,DWORD PTR [rbp-0x58]
0x1401c8936: mov     edi,DWORD PTR [rbp-0x68]
0x1401c8939: lea     rcx,[rbp-0x8]
0x1401c893d: call    0x140070440
0x1401c8942: mov     rcx,QWORD PTR [rax]
0x1401c8945: cmp     WORD PTR [rcx],0x5
0x1401c8949: jne     0x1401c8b28
0x1401c894f: lea     rcx,[rbp-0x8]
0x1401c8953: call    0x140070440
0x1401c8958: mov     rcx,QWORD PTR [rax]
0x1401c895b: cmp     QWORD PTR [rcx+0x50],0x0
0x1401c8960: je      0x1401c8b28
0x1401c8966: lea     rcx,[rbp-0x8]
0x1401c896a: call    0x140070440
0x1401c896f: mov     rcx,QWORD PTR [rax]
0x1401c8972: mov     rax,QWORD PTR [rcx+0x50]
0x1401c8976: mov     QWORD PTR [rbp-0x28],rax
0x1401c897a: mov     rcx,QWORD PTR [rax]
0x1401c897d: call    0x140070a80
0x1401c8982: mov     QWORD PTR [rbp-0x30],rax
0x1401c8986: xor     esi,esi
0x1401c8988: mov     DWORD PTR [rbp-0x68],esi
0x1401c898b: test    eax,eax
0x1401c898d: jle     0x1401c8b28
0x1401c8993: cmp     r12d,r13d
0x1401c8996: jg      0x1401c8b28
0x1401c899c: xor     r8d,r8d
0x1401c899f: mov     edx,0x6
0x1401c89a4: xor     r9d,r9d
0x1401c89a7: lea     rcx,[rip+0x24a3ec2]        # 0x14266c870
0x1401c89ae: call    0x1400bc760
0x1401c89b3: mov     r8d,edi
0x1401c89b6: mov     edx,r12d
0x1401c89b9: lea     rcx,[rip+0x24a3eb0]        # 0x14266c870
0x1401c89c0: call    0x1400bc750
0x1401c89c5: mov     rbx,QWORD PTR [rbp-0x28]
0x1401c89c9: mov     rcx,QWORD PTR [rbx]
0x1401c89cc: add     rcx,0x60
0x1401c89d0: movsxd  r15,esi
0x1401c89d3: mov     rdx,r15
0x1401c89d6: call    0x140070990
0x1401c89db: mov     esi,DWORD PTR [rax]
0x1401c89dd: mov     rcx,QWORD PTR [rbx]
0x1401c89e0: add     rcx,0x48
0x1401c89e4: mov     rdx,r15
0x1401c89e7: call    0x140070a70
0x1401c89ec: movsx   r14d,WORD PTR [rax]
0x1401c89f0: mov     rcx,QWORD PTR [rbx]
0x1401c89f3: add     rcx,0x30
0x1401c89f7: mov     rdx,r15
0x1401c89fa: call    0x140070a70
0x1401c89ff: movzx   edi,WORD PTR [rax]
0x1401c8a02: mov     rcx,QWORD PTR [rbx]
0x1401c8a05: add     rcx,0x18
0x1401c8a09: mov     rdx,r15
0x1401c8a0c: call    0x140070a70
0x1401c8a11: movzx   ebx,WORD PTR [rax]
0x1401c8a14: mov     rdx,r15
0x1401c8a17: mov     rcx,QWORD PTR [rbp-0x28]
0x1401c8a1b: mov     rcx,QWORD PTR [rcx]
0x1401c8a1e: call    0x140070a70
0x1401c8a23: xor     ecx,ecx
0x1401c8a25: mov     DWORD PTR [rsp+0x68],ecx
0x1401c8a29: mov     DWORD PTR [rsp+0x60],esi
0x1401c8a2d: mov     BYTE PTR [rsp+0x58],0x1
0x1401c8a32: mov     DWORD PTR [rsp+0x50],0xffffffff
0x1401c8a3a: mov     DWORD PTR [rsp+0x48],0xffffffff
0x1401c8a42: mov     QWORD PTR [rsp+0x40],rcx
0x1401c8a47: mov     BYTE PTR [rsp+0x38],cl
0x1401c8a4b: mov     DWORD PTR [rsp+0x30],ecx
0x1401c8a4f: mov     DWORD PTR [rsp+0x28],0xffffffff
0x1401c8a57: mov     DWORD PTR [rsp+0x20],r14d
0x1401c8a5c: movzx   r9d,di
0x1401c8a60: movzx   r8d,bx
0x1401c8a64: movzx   edx,WORD PTR [rax]
0x1401c8a67: lea     rcx,[rbp+0xd10]
0x1401c8a6e: call    0x140a9c6b0
0x1401c8a73: lea     rcx,[rbp+0xd10]
0x1401c8a7a: call    0x140546b30
0x1401c8a7f: xor     r9d,r9d
0x1401c8a82: xor     r8d,r8d
0x1401c8a85: lea     rdx,[rbp+0xd10]
0x1401c8a8c: lea     rcx,[rip+0x24a3ddd]        # 0x14266c870
0x1401c8a93: call    0x140af3400
0x1401c8a98: xor     r8d,r8d
0x1401c8a9b: mov     edx,0x6
0x1401c8aa0: mov     r9b,0x1
0x1401c8aa3: lea     rcx,[rip+0x24a3dc6]        # 0x14266c870
0x1401c8aaa: call    0x1400bc760
0x1401c8aaf: mov     ebx,DWORD PTR [rbp-0x58]
0x1401c8ab2: lea     r8d,[rbx+0x2c]
0x1401c8ab6: mov     edx,r12d
0x1401c8ab9: lea     rcx,[rip+0x24a3db0]        # 0x14266c870
0x1401c8ac0: call    0x1400bc750
0x1401c8ac5: mov     rcx,QWORD PTR [rbp-0x28]
0x1401c8ac9: add     rcx,0x8
0x1401c8acd: mov     rdx,r15
0x1401c8ad0: call    0x140070990
0x1401c8ad5: imul    ecx,DWORD PTR [rax],0x64
0x1401c8ad8: sar     ecx,0x7
0x1401c8adb: lea     rdx,[rbp+0xd10]
0x1401c8ae2: call    0x140545790
0x1401c8ae7: xor     r9d,r9d
0x1401c8aea: xor     r8d,r8d
0x1401c8aed: lea     rdx,[rbp+0xd10]
0x1401c8af4: lea     rcx,[rip+0x24a3d75]        # 0x14266c870
0x1401c8afb: call    0x140af3400
0x1401c8b00: mov     r8b,0x1
0x1401c8b03: mov     dl,0x25
0x1401c8b05: lea     rcx,[rip+0x24a3d64]        # 0x14266c870
0x1401c8b0c: call    0x1400bc7c0
0x1401c8b11: inc     r12d
0x1401c8b14: mov     esi,DWORD PTR [rbp-0x68]
0x1401c8b17: inc     esi
0x1401c8b19: mov     DWORD PTR [rbp-0x68],esi
0x1401c8b1c: cmp     esi,DWORD PTR [rbp-0x30]
0x1401c8b1f: lea     edi,[rbx+0x1]
0x1401c8b22: jl      0x1401c8993
0x1401c8b28: lea     rcx,[rbp-0x8]
0x1401c8b2c: call    0x140070430
0x1401c8b31: lea     rcx,[rbp+0x198]
0x1401c8b38: call    0x1401fc790
0x1401c8b3d: lea     r8,[rbp+0x100]
0x1401c8b44: lea     rdx,[rbp+0xa]
0x1401c8b48: lea     rcx,[rbp-0x8]
0x1401c8b4c: call    0x140070450
0x1401c8b51: xor     edx,edx
0x1401c8b53: movzx   ecx,BYTE PTR [rax]
0x1401c8b56: call    0x140066de0
0x1401c8b5b: test    al,al
0x1401c8b5d: mov     r14,QWORD PTR [rbp-0x60]
0x1401c8b61: jne     0x1401c8384
0x1401c8b67: mov     rsi,QWORD PTR [rbp-0x78]
0x1401c8b6b: lea     rcx,[rbp+0xd10]
0x1401c8b72: call    0x140069460
0x1401c8b77: jmp     0x1401c8be4
0x1401c8b79: cmp     r12d,r13d
0x1401c8b7c: jg      0x1401c8be4
0x1401c8b7e: mov     r8d,ebx
0x1401c8b81: mov     edx,r12d
0x1401c8b84: lea     rcx,[rip+0x24a3ce5]        # 0x14266c870
0x1401c8b8b: call    0x1400bc750
0x1401c8b90: xor     r8d,r8d
0x1401c8b93: mov     edx,0x7
0x1401c8b98: xor     r9d,r9d
0x1401c8b9b: lea     rcx,[rip+0x24a3cce]        # 0x14266c870
0x1401c8ba2: call    0x1400bc760
0x1401c8ba7: lea     rdx,[rip+0x145717a]        # 0x14161fd28 ; literal='You have no agreements with this land.'
0x1401c8bae: lea     rcx,[rbp+0x1e10]
0x1401c8bb5: call    0x140069780
0x1401c8bba: nop     
0x1401c8bbb: xor     r9d,r9d
0x1401c8bbe: xor     r8d,r8d
0x1401c8bc1: lea     rdx,[rbp+0x1e10]
0x1401c8bc8: lea     rcx,[rip+0x24a3ca1]        # 0x14266c870
0x1401c8bcf: call    0x140af3400
0x1401c8bd4: nop     
0x1401c8bd5: lea     rcx,[rbp+0x1e10]
0x1401c8bdc: call    0x140069460
0x1401c8be1: inc     r12d
0x1401c8be4: inc     r12d
0x1401c8be7: mov     rdi,QWORD PTR [rsp+0x78]
0x1401c8bec: add     rdi,0x250
0x1401c8bf3: mov     rcx,rdi
0x1401c8bf6: call    0x140070480
0x1401c8bfb: test    rax,rax
0x1401c8bfe: je      0x1401c8e93
0x1401c8c04: xor     r8d,r8d
0x1401c8c07: mov     edx,0x7
0x1401c8c0c: xor     r9d,r9d
0x1401c8c0f: lea     rcx,[rip+0x24a3c5a]        # 0x14266c870
0x1401c8c16: call    0x1400bc760
0x1401c8c1b: lea     rcx,[rbp+0xe90]
0x1401c8c22: call    0x140070cc0
0x1401c8c27: nop     
0x1401c8c28: lea     rdx,[rbp+0x68]
0x1401c8c2c: mov     rcx,rdi
0x1401c8c2f: call    0x140070870
0x1401c8c34: lea     rdx,[rbp+0x108]
0x1401c8c3b: mov     rcx,rdi
0x1401c8c3e: call    0x140070860
0x1401c8c43: lea     r8,[rbp+0x108]
0x1401c8c4a: lea     rdx,[rbp+0xb]
0x1401c8c4e: lea     rcx,[rbp+0x68]
0x1401c8c52: call    0x140070450
0x1401c8c57: xor     edx,edx
0x1401c8c59: movzx   ecx,BYTE PTR [rax]
0x1401c8c5c: call    0x140066de0
0x1401c8c61: test    al,al
0x1401c8c63: je      0x1401c8dc7
0x1401c8c69: nop     DWORD PTR [rax+0x0]
0x1401c8c70: cmp     r12d,r13d
0x1401c8c73: jg      0x1401c8dc7
0x1401c8c79: lea     rcx,[rbp+0x68]
0x1401c8c7d: call    0x140070440
0x1401c8c82: mov     rcx,QWORD PTR [rax]
0x1401c8c85: mov     rcx,QWORD PTR [rcx+0x10]
0x1401c8c89: call    0x140c27320
0x1401c8c8e: test    rax,rax
0x1401c8c91: je      0x1401c8ca8
0x1401c8c93: cmp     BYTE PTR [rax+0x72],0x0
0x1401c8c97: je      0x1401c8ca8
0x1401c8c99: lea     rdx,[rbp+0xe90]
0x1401c8ca0: mov     rcx,rax
0x1401c8ca3: call    0x140aadad0
0x1401c8ca8: lea     rcx,[rbp+0xe90]
0x1401c8caf: call    0x140546b30
0x1401c8cb4: mov     r8d,ebx
0x1401c8cb7: mov     edx,r12d
0x1401c8cba: lea     rcx,[rip+0x24a3baf]        # 0x14266c870
0x1401c8cc1: call    0x1400bc750
0x1401c8cc6: xor     r9d,r9d
0x1401c8cc9: xor     r8d,r8d
0x1401c8ccc: lea     rdx,[rbp+0xe90]
0x1401c8cd3: lea     rcx,[rip+0x24a3b96]        # 0x14266c870
0x1401c8cda: call    0x140af3400
0x1401c8cdf: lea     r8d,[rbx+0x19]
0x1401c8ce3: mov     edx,r12d
0x1401c8ce6: lea     rcx,[rip+0x24a3b83]        # 0x14266c870
0x1401c8ced: call    0x1400bc750
0x1401c8cf2: lea     rcx,[rbp+0x68]
0x1401c8cf6: call    0x140070440
0x1401c8cfb: mov     r8d,DWORD PTR [rsi+0x4]
0x1401c8cff: lea     rdx,[rbp+0xe90]
0x1401c8d06: mov     rcx,QWORD PTR [rax]
0x1401c8d09: call    0x140df5730
0x1401c8d0e: lea     rcx,[rbp+0xe90]
0x1401c8d15: call    0x140546b30
0x1401c8d1a: lea     rcx,[rbp+0xe90]
0x1401c8d21: call    0x140070960
0x1401c8d26: cmp     rax,0x1a
0x1401c8d2a: jb      0x1401c8d7c
0x1401c8d2c: xor     r8d,r8d
0x1401c8d2f: mov     edx,0x19
0x1401c8d34: lea     rcx,[rbp+0xe90]
0x1401c8d3b: call    0x1400e2860
0x1401c8d40: mov     edx,0x16
0x1401c8d45: lea     rcx,[rbp+0xe90]
0x1401c8d4c: call    0x1400fcbe0
0x1401c8d51: mov     BYTE PTR [rax],0x2e
0x1401c8d54: mov     edx,0x17
0x1401c8d59: lea     rcx,[rbp+0xe90]
0x1401c8d60: call    0x1400fcbe0
0x1401c8d65: mov     BYTE PTR [rax],0x2e
0x1401c8d68: mov     edx,0x18
0x1401c8d6d: lea     rcx,[rbp+0xe90]
0x1401c8d74: call    0x1400fcbe0
0x1401c8d79: mov     BYTE PTR [rax],0x2e
0x1401c8d7c: xor     r9d,r9d
0x1401c8d7f: xor     r8d,r8d
0x1401c8d82: lea     rdx,[rbp+0xe90]
0x1401c8d89: lea     rcx,[rip+0x24a3ae0]        # 0x14266c870
0x1401c8d90: call    0x140af3400
0x1401c8d95: inc     r12d
0x1401c8d98: lea     rcx,[rbp+0x68]
0x1401c8d9c: call    0x140070430
0x1401c8da1: lea     r8,[rbp+0x108]
0x1401c8da8: lea     rdx,[rbp+0xb]
0x1401c8dac: lea     rcx,[rbp+0x68]
0x1401c8db0: call    0x140070450
0x1401c8db5: xor     edx,edx
0x1401c8db7: movzx   ecx,BYTE PTR [rax]
0x1401c8dba: call    0x140066de0
0x1401c8dbf: test    al,al
0x1401c8dc1: jne     0x1401c8c70
0x1401c8dc7: lea     rcx,[rbp+0xe90]
0x1401c8dce: call    0x140069460
0x1401c8dd3: mov     r13,QWORD PTR [rsp+0x78]
0x1401c8dd8: mov     eax,DWORD PTR [r13+0x1b4]
0x1401c8ddf: cmp     eax,0x3
0x1401c8de2: je      0x1401c8de9
0x1401c8de4: cmp     eax,0x8
0x1401c8de7: jne     0x1401c8df6
0x1401c8de9: cmp     DWORD PTR [rip+0x2226e18],0x42        # 0x1423efc08
0x1401c8df0: jle     0x1401d6545
0x1401c8df6: movsxd  rdi,DWORD PTR [rbp-0x18]
0x1401c8dfa: mov     DWORD PTR [rbp-0x68],edi
0x1401c8dfd: lea     esi,[rdi-0x12]
0x1401c8e00: mov     eax,DWORD PTR [rip+0x2226e02]        # 0x1423efc08
0x1401c8e06: lea     ecx,[rax-0x18]
0x1401c8e09: mov     DWORD PTR [rsp+0x74],ecx
0x1401c8e0d: lea     r13d,[rax-0x15]
0x1401c8e11: mov     DWORD PTR [rbp-0x60],r13d
0x1401c8e15: lea     edx,[rax-0x12]
0x1401c8e18: mov     DWORD PTR [rbp-0x58],edx
0x1401c8e1b: lea     edx,[rax-0xf]
0x1401c8e1e: mov     DWORD PTR [rsp+0x70],edx
0x1401c8e22: lea     edx,[rax-0xc]
0x1401c8e25: mov     DWORD PTR [rbp-0x48],edx
0x1401c8e28: lea     edx,[rax-0x9]
0x1401c8e2b: mov     DWORD PTR [rbp-0x6c],edx
0x1401c8e2e: lea     edx,[rax-0x6]
0x1401c8e31: mov     DWORD PTR [rbp-0x70],edx
0x1401c8e34: lea     r8d,[rdi-0x7]
0x1401c8e38: mov     DWORD PTR [rbp-0x28],r8d
0x1401c8e3c: add     eax,0xfffffffd
0x1401c8e3f: mov     DWORD PTR [rbp-0x10],eax
0x1401c8e42: mov     r12d,esi
0x1401c8e45: cmp     esi,edi
0x1401c8e47: jg      0x1401d5627
0x1401c8e4d: movsxd  r13,esi
0x1401c8e50: mov     r15,r13
0x1401c8e53: mov     rsi,rdi
0x1401c8e56: mov     r14d,ecx
0x1401c8e59: lea     rbx,[rip+0x24a54b4]        # 0x14266e314
0x1401c8e60: lea     rdi,[rip+0x24a54b9]        # 0x14266e320
0x1401c8e67: nop     WORD PTR [rax+rax*1+0x0]
0x1401c8e70: mov     r8d,r12d
0x1401c8e73: mov     edx,r14d
0x1401c8e76: lea     rcx,[rip+0x24a39f3]        # 0x14266c870
0x1401c8e7d: call    0x1400bc750
0x1401c8e82: cmp     r15,r13
0x1401c8e85: jne     0x1401d55e3
0x1401c8e8b: mov     edx,DWORD PTR [rbx-0x18]
0x1401c8e8e: jmp     0x1401d55ef
0x1401c8e93: cmp     r12d,r13d
0x1401c8e96: jg      0x1401c8dd3
0x1401c8e9c: mov     r8d,ebx
0x1401c8e9f: mov     edx,r12d
0x1401c8ea2: lea     rcx,[rip+0x24a39c7]        # 0x14266c870
0x1401c8ea9: call    0x1400bc750
0x1401c8eae: xor     r8d,r8d
0x1401c8eb1: mov     edx,0x7
0x1401c8eb6: xor     r9d,r9d
0x1401c8eb9: lea     rcx,[rip+0x24a39b0]        # 0x14266c870
0x1401c8ec0: call    0x1400bc760
0x1401c8ec5: lea     rdx,[rip+0x1456e84]        # 0x14161fd50 ; literal='This land has no important leaders.'
0x1401c8ecc: lea     rcx,[rbp+0x1e30]
0x1401c8ed3: call    0x140069780
0x1401c8ed8: nop     
0x1401c8ed9: xor     r9d,r9d
0x1401c8edc: xor     r8d,r8d
0x1401c8edf: lea     rdx,[rbp+0x1e30]
0x1401c8ee6: lea     rcx,[rip+0x24a3983]        # 0x14266c870
0x1401c8eed: call    0x140af3400
0x1401c8ef2: nop     
0x1401c8ef3: lea     rcx,[rbp+0x1e30]
0x1401c8efa: jmp     0x1401c8dce
0x1401c8eff: mov     r13d,DWORD PTR [rbp-0x18]
0x1401c8f03: mov     DWORD PTR [rsp+0x74],r13d
0x1401c8f08: lea     r15d,[r13-0x37]
0x1401c8f0c: mov     DWORD PTR [rbp-0x68],r15d
0x1401c8f10: lea     ecx,[r15-0x2]
0x1401c8f14: mov     DWORD PTR [rbp-0x58],ecx
0x1401c8f17: mov     r12d,0x14
0x1401c8f1d: mov     eax,DWORD PTR [rip+0x2226ce5]        # 0x1423efc08
0x1401c8f23: cmp     eax,0x2e
0x1401c8f26: jle     0x1401c8f40
0x1401c8f28: lea     r12d,[rax-0x1a]
0x1401c8f2c: cmp     r12d,0x1e
0x1401c8f30: jle     0x1401c8f40
0x1401c8f32: mov     r12d,0x1e
0x1401c8f38: mov     edi,r13d
0x1401c8f3b: mov     r14d,esi
0x1401c8f3e: jmp     0x1401c8f50
0x1401c8f40: mov     edi,r13d
0x1401c8f43: mov     r14d,esi
0x1401c8f46: test    r12d,r12d
0x1401c8f49: js      0x1401c902c
0x1401c8f4f: nop     
0x1401c8f50: mov     ebx,ecx
0x1401c8f52: cmp     ecx,edi
0x1401c8f54: jg      0x1401c9019
0x1401c8f5a: movsxd  r15,r12d
0x1401c8f5d: mov     r13d,DWORD PTR [rbp-0x58]
0x1401c8f61: mov     r8d,ebx
0x1401c8f64: mov     edx,r14d
0x1401c8f67: lea     rcx,[rip+0x24a3902]        # 0x14266c870
0x1401c8f6e: call    0x1400bc750
0x1401c8f73: xor     r8d,r8d
0x1401c8f76: xor     edx,edx
0x1401c8f78: lea     rcx,[rip+0x24a38f1]        # 0x14266c870
0x1401c8f7f: call    0x1400bc7c0
0x1401c8f84: test    rsi,rsi
0x1401c8f87: jne     0x1401c8fb1
0x1401c8f89: cmp     ebx,r13d
0x1401c8f8c: jne     0x1401c8f96
0x1401c8f8e: mov     edx,DWORD PTR [rip+0x24a5200]        # 0x14266e194
0x1401c8f94: jmp     0x1401c8ffb
0x1401c8f96: lea     rcx,[rip+0x24a38d3]        # 0x14266c870
0x1401c8f9d: cmp     ebx,edi
0x1401c8f9f: jne     0x1401c8fa9
0x1401c8fa1: mov     edx,DWORD PTR [rip+0x24a5205]        # 0x14266e1ac
0x1401c8fa7: jmp     0x1401c9002
0x1401c8fa9: mov     edx,DWORD PTR [rip+0x24a51f1]        # 0x14266e1a0
0x1401c8faf: jmp     0x1401c9002
0x1401c8fb1: cmp     rsi,r15
0x1401c8fb4: jne     0x1401c8fde
0x1401c8fb6: cmp     ebx,r13d
0x1401c8fb9: jne     0x1401c8fc3
0x1401c8fbb: mov     edx,DWORD PTR [rip+0x24a51db]        # 0x14266e19c
0x1401c8fc1: jmp     0x1401c8ffb
0x1401c8fc3: lea     rcx,[rip+0x24a38a6]        # 0x14266c870
0x1401c8fca: cmp     ebx,edi
0x1401c8fcc: jne     0x1401c8fd6
0x1401c8fce: mov     edx,DWORD PTR [rip+0x24a51e0]        # 0x14266e1b4
0x1401c8fd4: jmp     0x1401c9002
0x1401c8fd6: mov     edx,DWORD PTR [rip+0x24a51cc]        # 0x14266e1a8
0x1401c8fdc: jmp     0x1401c9002
0x1401c8fde: cmp     ebx,r13d
0x1401c8fe1: jne     0x1401c8feb
0x1401c8fe3: mov     edx,DWORD PTR [rip+0x24a51af]        # 0x14266e198
0x1401c8fe9: jmp     0x1401c8ffb
0x1401c8feb: cmp     ebx,edi
0x1401c8fed: mov     edx,DWORD PTR [rip+0x24a51bd]        # 0x14266e1b0
0x1401c8ff3: je      0x1401c8ffb
0x1401c8ff5: mov     edx,DWORD PTR [rip+0x24a51a9]        # 0x14266e1a4
0x1401c8ffb: lea     rcx,[rip+0x24a386e]        # 0x14266c870
0x1401c9002: call    0x140af4570
0x1401c9007: inc     ebx
0x1401c9009: cmp     ebx,edi
0x1401c900b: jle     0x1401c8f61
0x1401c9011: mov     r13d,DWORD PTR [rsp+0x74]
0x1401c9016: mov     ecx,DWORD PTR [rbp-0x58]
0x1401c9019: inc     r14d
0x1401c901c: inc     rsi
0x1401c901f: cmp     r14d,r12d
0x1401c9022: jle     0x1401c8f50
0x1401c9028: lea     r15d,[r13-0x37]
0x1401c902c: lea     ebx,[r13-0x2]
0x1401c9030: mov     DWORD PTR [rbp-0x6c],ebx
0x1401c9033: lea     ecx,[r12-0x1]
0x1401c9038: mov     eax,0x55555556
0x1401c903d: imul    ecx
0x1401c903f: mov     edi,edx
0x1401c9041: shr     edi,0x1f
0x1401c9044: add     edi,edx
0x1401c9046: mov     DWORD PTR [rsp+0x74],edi
0x1401c904a: mov     rcx,QWORD PTR [rsp+0x78]
0x1401c904f: add     rcx,0x2b8
0x1401c9056: call    0x140070480
0x1401c905b: mov     rsi,rax
0x1401c905e: mov     QWORD PTR [rbp-0x30],rax
0x1401c9062: cmp     eax,edi
0x1401c9064: jle     0x1401c906d
0x1401c9066: lea     ebx,[r13-0x4]
0x1401c906a: mov     DWORD PTR [rbp-0x6c],ebx
0x1401c906d: lea     r14d,[rbx-0x3]
0x1401c9071: mov     DWORD PTR [rbp-0x10],r14d
0x1401c9075: xor     r8d,r8d
0x1401c9078: mov     QWORD PTR [rbp-0x60],r8
0x1401c907c: mov     r12d,0x1
0x1401c9082: mov     DWORD PTR [rsp+0x70],r12d
0x1401c9087: mov     rax,QWORD PTR [rsp+0x78]
0x1401c908c: mov     ecx,DWORD PTR [rax+0x2e0]
0x1401c9092: mov     edx,esi
0x1401c9094: sub     edx,edi
0x1401c9096: cmp     ecx,edx
0x1401c9098: cmovle  edx,ecx
0x1401c909b: mov     eax,r8d
0x1401c909e: test    edx,edx
0x1401c90a0: cmovns  eax,edx
0x1401c90a3: mov     DWORD PTR [rbp-0x70],eax
0x1401c90a6: lea     ecx,[rax+rdi*1]
0x1401c90a9: mov     DWORD PTR [rbp-0x20],ecx
0x1401c90ac: cmp     eax,ecx
0x1401c90ae: jge     0x1401c97a1
0x1401c90b4: mov     ecx,DWORD PTR [rbp-0x20]
0x1401c90b7: mov     DWORD PTR [rbp-0x48],ecx
0x1401c90ba: nop     WORD PTR [rax+rax*1+0x0]
0x1401c90c0: cmp     eax,esi
0x1401c90c2: jge     0x1401c971e
0x1401c90c8: movsxd  rdx,eax
0x1401c90cb: mov     rdi,QWORD PTR [rsp+0x78]
0x1401c90d0: lea     rcx,[rdi+0x2b8]
0x1401c90d7: call    0x140070850
0x1401c90dc: mov     r13,QWORD PTR [rax]
0x1401c90df: mov     QWORD PTR [rbp-0x28],r13
0x1401c90e3: cmp     BYTE PTR [rip+0x21e996b],0x0        # 0x1423b2a55
0x1401c90ea: je      0x1401c9137
0x1401c90ec: mov     eax,DWORD PTR [rbp-0x38]
0x1401c90ef: cmp     eax,r15d
0x1401c90f2: jl      0x1401c9137
0x1401c90f4: cmp     eax,ebx
0x1401c90f6: jg      0x1401c9137
0x1401c90f8: mov     ecx,DWORD PTR [rbp-0x3c]
0x1401c90fb: cmp     ecx,r12d
0x1401c90fe: jl      0x1401c9137
0x1401c9100: lea     ebx,[r12-0x1]
0x1401c9105: lea     eax,[rbx+0x3]
0x1401c9108: cmp     ecx,eax
0x1401c910a: jg      0x1401c9134
0x1401c910c: cmp     QWORD PTR [rdi+0x2d0],r13
0x1401c9113: je      0x1401c912d
0x1401c9115: mov     QWORD PTR [rdi+0x2d0],r13
0x1401c911c: mov     edx,0x2
0x1401c9121: lea     rcx,[rip+0x24a3748]        # 0x14266c870
0x1401c9128: call    0x140b016a0
0x1401c912d: mov     QWORD PTR [rbp-0x60],r13
0x1401c9131: mov     DWORD PTR [rbp-0x48],ebx
0x1401c9134: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401c9137: xor     r8d,r8d
0x1401c913a: mov     edx,0x7
0x1401c913f: mov     r9b,0x1
0x1401c9142: lea     rcx,[rip+0x24a3727]        # 0x14266c870
0x1401c9149: call    0x1400bc760
0x1401c914e: mov     esi,r15d
0x1401c9151: cmp     r15d,ebx
0x1401c9154: jg      0x1401c9202
0x1401c915a: lea     r15d,[r12+0x3]
0x1401c915f: movsxd  r13,DWORD PTR [rbp-0x68]
0x1401c9163: mov     r14,r13
0x1401c9166: mov     edi,r12d
0x1401c9169: cmp     r12d,r15d
0x1401c916c: jge     0x1401c91e9
0x1401c916e: movsxd  r12,ebx
0x1401c9171: lea     rbx,[rip+0x24a50b8]        # 0x14266e230
0x1401c9178: nop     DWORD PTR [rax+rax*1+0x0]
0x1401c9180: mov     r8d,esi
0x1401c9183: mov     edx,edi
0x1401c9185: lea     rcx,[rip+0x24a36e4]        # 0x14266c870
0x1401c918c: call    0x1400bc750
0x1401c9191: cmp     esi,r13d
0x1401c9194: jne     0x1401c919b
0x1401c9196: mov     edx,DWORD PTR [rbx-0x18]
0x1401c9199: jmp     0x1401c91a7
0x1401c919b: cmp     r14,r12
0x1401c919e: jne     0x1401c91a4
0x1401c91a0: mov     edx,DWORD PTR [rbx]
0x1401c91a2: jmp     0x1401c91a7
0x1401c91a4: mov     edx,DWORD PTR [rbx-0xc]
0x1401c91a7: lea     rcx,[rip+0x24a36c2]        # 0x14266c870
0x1401c91ae: call    0x140af4570
0x1401c91b3: xor     edx,edx
0x1401c91b5: lea     rcx,[rip+0x2226a34]        # 0x1423efbf0
0x1401c91bc: call    0x1400735c0
0x1401c91c1: test    al,al
0x1401c91c3: je      0x1401c91d6
0x1401c91c5: mov     r8b,0x1
0x1401c91c8: xor     edx,edx
0x1401c91ca: lea     rcx,[rip+0x24a369f]        # 0x14266c870
0x1401c91d1: call    0x1400bc7c0
0x1401c91d6: inc     edi
0x1401c91d8: add     rbx,0x4
0x1401c91dc: cmp     edi,r15d
0x1401c91df: jl      0x1401c9180
0x1401c91e1: mov     r12d,DWORD PTR [rsp+0x70]
0x1401c91e6: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401c91e9: inc     esi
0x1401c91eb: inc     r14
0x1401c91ee: cmp     esi,ebx
0x1401c91f0: jle     0x1401c9166
0x1401c91f6: mov     r13,QWORD PTR [rbp-0x28]
0x1401c91fa: mov     r15d,DWORD PTR [rbp-0x68]
0x1401c91fe: mov     r14d,DWORD PTR [rbp-0x10]
0x1401c9202: xor     r8d,r8d
0x1401c9205: mov     edx,0x3
0x1401c920a: mov     r9b,0x1
0x1401c920d: lea     rcx,[rip+0x24a365c]        # 0x14266c870
0x1401c9214: call    0x1400bc760
0x1401c9219: lea     rcx,[rbp+0xcf0]
0x1401c9220: call    0x140070cc0
0x1401c9225: nop     
0x1401c9226: mov     rcx,r13
0x1401c9229: call    0x140076740
0x1401c922e: sub     eax,0x2
0x1401c9231: je      0x1401c9319
0x1401c9237: sub     eax,0xf
0x1401c923a: je      0x1401c92e1
0x1401c9240: sub     eax,0x1
0x1401c9243: je      0x1401c928a
0x1401c9245: sub     eax,0x1
0x1401c9248: je      0x1401c927e
0x1401c924a: cmp     eax,0x6
0x1401c924d: jne     0x1401c939e
0x1401c9253: lea     rdx,[rbp+0xcf0]
0x1401c925a: mov     rcx,QWORD PTR [r13+0x130]
0x1401c9261: call    0x1401bdc00
0x1401c9266: lea     rdx,[rip+0x1454e57]        # 0x14161e0c4 ; literal=' at '
0x1401c926d: lea     rcx,[rbp+0xcf0]
0x1401c9274: call    0x140070b90
0x1401c9279: jmp     0x1401c9384
0x1401c927e: lea     rdx,[rip+0x1456af3]        # 0x14161fd78 ; literal='Request workers from '
0x1401c9285: jmp     0x1401c9378
0x1401c928a: lea     rdx,[rip+0x144030f]        # 0x1416095a0 ; literal='Rescue '
0x1401c9291: lea     rcx,[rbp+0xcf0]
0x1401c9298: call    0x140070bb0
0x1401c929d: lea     rcx,[rbp+0x740]
0x1401c92a4: call    0x1400736b0
0x1401c92a9: mov     r8,QWORD PTR [r13+0x130]
0x1401c92b0: mov     eax,0x1
0x1401c92b5: mov     WORD PTR [rsp+0x28],ax
0x1401c92ba: mov     WORD PTR [rsp+0x20],ax
0x1401c92bf: lea     r9,[rbp+0x740]
0x1401c92c6: mov     r8d,DWORD PTR [r8]
0x1401c92c9: lea     rdx,[rbp+0xcf0]
0x1401c92d0: lea     rcx,[rip+0x2352e61]        # 0x14251c138
0x1401c92d7: call    0x140baabd0
0x1401c92dc: jmp     0x1401c939e
0x1401c92e1: lea     rdx,[rip+0x1456b08]        # 0x14161fdf0 ; literal='Recover '
0x1401c92e8: lea     rcx,[rbp+0xcf0]
0x1401c92ef: call    0x140070bb0
0x1401c92f4: mov     r8,QWORD PTR [r13+0x130]
0x1401c92fb: xor     r9d,r9d
0x1401c92fe: mov     r8d,DWORD PTR [r8]
0x1401c9301: lea     rdx,[rbp+0xcf0]
0x1401c9308: lea     rcx,[rip+0x2352e29]        # 0x14251c138
0x1401c930f: call    0x140bac0c0
0x1401c9314: jmp     0x1401c939e
0x1401c9319: mov     rax,QWORD PTR [r13+0x130]
0x1401c9320: movsxd  rcx,DWORD PTR [rax]
0x1401c9323: cmp     ecx,0x6
0x1401c9326: ja      0x1401c9371
0x1401c9328: lea     rdx,[rip+0xffffffffffe36cd1]        # 0x140000000
0x1401c932f: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d65c8]
0x1401c9336: add     rcx,rdx
0x1401c9339: jmp     rcx
0x1401c933b: lea     rdx,[rip+0x1456a4e]        # 0x14161fd90 ; literal='Explore '
0x1401c9342: jmp     0x1401c9378
0x1401c9344: lea     rdx,[rip+0x1456a55]        # 0x14161fda0 ; literal='Pillage '
0x1401c934b: jmp     0x1401c9378
0x1401c934d: lea     rdx,[rip+0x1456a5c]        # 0x14161fdb0 ; literal='Demand tribute from '
0x1401c9354: jmp     0x1401c9378
0x1401c9356: lea     rdx,[rip+0x1456a6b]        # 0x14161fdc8 ; literal='Raze '
0x1401c935d: jmp     0x1401c9378
0x1401c935f: lea     rdx,[rip+0x1456a6a]        # 0x14161fdd0 ; literal='Take over '
0x1401c9366: jmp     0x1401c9378
0x1401c9368: lea     rdx,[rip+0x1456a6d]        # 0x14161fddc ; literal='Seize '
0x1401c936f: jmp     0x1401c9378
0x1401c9371: lea     rdx,[rip+0x1456a6c]        # 0x14161fde4 ; literal='Raid '
0x1401c9378: lea     rcx,[rbp+0xcf0]
0x1401c937f: call    0x140070bb0
0x1401c9384: xor     r9d,r9d
0x1401c9387: mov     r8d,DWORD PTR [r13+0x8]
0x1401c938b: lea     rdx,[rbp+0xcf0]
0x1401c9392: lea     rcx,[rip+0x2352d9f]        # 0x14251c138
0x1401c9399: call    0x140bab5f0
0x1401c939e: lea     edx,[r12+0x1]
0x1401c93a3: mov     r8d,r15d
0x1401c93a6: lea     rcx,[rip+0x24a34c3]        # 0x14266c870
0x1401c93ad: call    0x1400bc750
0x1401c93b2: mov     ebx,r14d
0x1401c93b5: sub     ebx,r15d
0x1401c93b8: lea     rcx,[rbp+0xcf0]
0x1401c93bf: call    0x140070960
0x1401c93c4: lea     ecx,[rbx-0x2]
0x1401c93c7: movsxd  rdx,ecx
0x1401c93ca: cmp     rax,rdx
0x1401c93cd: jb      0x1401c9431
0x1401c93cf: lea     edi,[rbx-0x3]
0x1401c93d2: test    edi,edi
0x1401c93d4: js      0x1401c93ec
0x1401c93d6: movsxd  rdx,ebx
0x1401c93d9: sub     rdx,0x3
0x1401c93dd: xor     r8d,r8d
0x1401c93e0: lea     rcx,[rbp+0xcf0]
0x1401c93e7: call    0x1400e2860
0x1401c93ec: cmp     edi,0x3
0x1401c93ef: jle     0x1401c9431
0x1401c93f1: movsxd  rdx,ebx
0x1401c93f4: sub     rdx,0x6
0x1401c93f8: lea     rcx,[rbp+0xcf0]
0x1401c93ff: call    0x1400fcbe0
0x1401c9404: mov     BYTE PTR [rax],0x2e
0x1401c9407: lea     eax,[rbx-0x5]
0x1401c940a: movsxd  rdx,eax
0x1401c940d: lea     rcx,[rbp+0xcf0]
0x1401c9414: call    0x1400fcbe0
0x1401c9419: mov     BYTE PTR [rax],0x2e
0x1401c941c: lea     eax,[rbx-0x4]
0x1401c941f: movsxd  rdx,eax
0x1401c9422: lea     rcx,[rbp+0xcf0]
0x1401c9429: call    0x1400fcbe0
0x1401c942e: mov     BYTE PTR [rax],0x2e
0x1401c9431: xor     r9d,r9d
0x1401c9434: xor     r8d,r8d
0x1401c9437: lea     rdx,[rbp+0xcf0]
0x1401c943e: lea     rcx,[rip+0x24a342b]        # 0x14266c870
0x1401c9445: call    0x140af3400
0x1401c944a: mov     rcx,r13
0x1401c944d: call    0x140076740
0x1401c9452: cmp     eax,0x13
0x1401c9455: je      0x1401c9576
0x1401c945b: cmp     eax,0x19
0x1401c945e: je      0x1401c9576
0x1401c9464: xor     eax,eax
0x1401c9466: mov     esi,eax
0x1401c9468: mov     edi,eax
0x1401c946a: lea     rdx,[rbp+0x80]
0x1401c9471: lea     rcx,[r13+0x80]
0x1401c9478: call    0x140070870
0x1401c947d: lea     rdx,[rbp+0x110]
0x1401c9484: lea     rcx,[r13+0x80]
0x1401c948b: call    0x140070860
0x1401c9490: lea     r8,[rbp+0x110]
0x1401c9497: lea     rdx,[rbp+0xc]
0x1401c949b: lea     rcx,[rbp+0x80]
0x1401c94a2: call    0x140070450
0x1401c94a7: xor     edx,edx
0x1401c94a9: movzx   ecx,BYTE PTR [rax]
0x1401c94ac: call    0x140066de0
0x1401c94b1: test    al,al
0x1401c94b3: je      0x1401c969a
0x1401c94b9: nop     DWORD PTR [rax+0x0]
0x1401c94c0: lea     rcx,[rbp+0x80]
0x1401c94c7: call    0x140070440
0x1401c94cc: mov     edx,DWORD PTR [rax]
0x1401c94ce: lea     rcx,[rip+0x233c76b]        # 0x142505c40
0x1401c94d5: call    0x140076b30
0x1401c94da: test    rax,rax
0x1401c94dd: je      0x1401c953c
0x1401c94df: lea     rbx,[rax+0xa0]
0x1401c94e6: mov     rcx,rbx
0x1401c94e9: call    0x140070480
0x1401c94ee: test    rax,rax
0x1401c94f1: je      0x1401c953c
0x1401c94f3: xor     edx,edx
0x1401c94f5: mov     rcx,rbx
0x1401c94f8: call    0x140070850
0x1401c94fd: mov     rdx,QWORD PTR [rax]
0x1401c9500: cmp     DWORD PTR [rdx],0xffffffff
0x1401c9503: je      0x1401c953c
0x1401c9505: xor     edx,edx
0x1401c9507: mov     rcx,rbx
0x1401c950a: call    0x140070850
0x1401c950f: mov     rdx,QWORD PTR [rax]
0x1401c9512: mov     edx,DWORD PTR [rdx]
0x1401c9514: lea     rcx,[rip+0x223e015]        # 0x142407530
0x1401c951b: call    0x1413e54b0
0x1401c9520: test    rax,rax
0x1401c9523: je      0x1401c953a
0x1401c9525: mov     eax,DWORD PTR [rax+0x110]
0x1401c952b: test    eax,0x102
0x1401c9530: jne     0x1401c953a
0x1401c9532: test    eax,eax
0x1401c9534: jns     0x1401c953a
0x1401c9536: inc     esi
0x1401c9538: jmp     0x1401c953c
0x1401c953a: inc     edi
0x1401c953c: lea     rcx,[rbp+0x80]
0x1401c9543: call    0x140070980
0x1401c9548: lea     r8,[rbp+0x110]
0x1401c954f: lea     rdx,[rbp+0xc]
0x1401c9553: lea     rcx,[rbp+0x80]
0x1401c955a: call    0x140070450
0x1401c955f: xor     edx,edx
0x1401c9561: movzx   ecx,BYTE PTR [rax]
0x1401c9564: call    0x140066de0
0x1401c9569: test    al,al
0x1401c956b: jne     0x1401c94c0
0x1401c9571: jmp     0x1401c9692
0x1401c9576: xor     eax,eax
0x1401c9578: mov     esi,eax
0x1401c957a: mov     edi,eax
0x1401c957c: lea     rdx,[rbp+0x88]
0x1401c9583: lea     rcx,[r13+0x98]
0x1401c958a: call    0x140070870
0x1401c958f: lea     rdx,[rbp+0x120]
0x1401c9596: lea     rcx,[r13+0x98]
0x1401c959d: call    0x140070860
0x1401c95a2: lea     rcx,[r13+0xb0]
0x1401c95a9: lea     rdx,[rbp+0x118]
0x1401c95b0: call    0x140070870
0x1401c95b5: lea     r8,[rbp+0x120]
0x1401c95bc: lea     rdx,[rbp+0xd]
0x1401c95c0: lea     rcx,[rbp+0x88]
0x1401c95c7: call    0x140070450
0x1401c95cc: xor     edx,edx
0x1401c95ce: movzx   ecx,BYTE PTR [rax]
0x1401c95d1: call    0x140066de0
0x1401c95d6: test    al,al
0x1401c95d8: je      0x1401c969a
0x1401c95de: xchg    ax,ax
0x1401c95e0: lea     rcx,[rbp+0x88]
0x1401c95e7: call    0x140070440
0x1401c95ec: mov     edx,DWORD PTR [rax]
0x1401c95ee: lea     rcx,[rip+0x222a683]        # 0x1423f3c78
0x1401c95f5: call    0x14007f120
0x1401c95fa: mov     rbx,rax
0x1401c95fd: test    rax,rax
0x1401c9600: je      0x1401c9651
0x1401c9602: lea     rcx,[rbp+0x118]
0x1401c9609: call    0x140070440
0x1401c960e: lea     rdx,[rbx+0x1110]
0x1401c9615: mov     ecx,DWORD PTR [rax]
0x1401c9617: call    0x1400bb3f0
0x1401c961c: test    rax,rax
0x1401c961f: je      0x1401c9651
0x1401c9621: mov     edx,DWORD PTR [rax+0x4]
0x1401c9624: cmp     edx,0xffffffff
0x1401c9627: je      0x1401c9651
0x1401c9629: lea     rcx,[rip+0x223df00]        # 0x142407530
0x1401c9630: call    0x1413e54b0
0x1401c9635: test    rax,rax
0x1401c9638: je      0x1401c964f
0x1401c963a: mov     eax,DWORD PTR [rax+0x110]
0x1401c9640: test    eax,0x102
0x1401c9645: jne     0x1401c964f
0x1401c9647: test    eax,eax
0x1401c9649: jns     0x1401c964f
0x1401c964b: inc     esi
0x1401c964d: jmp     0x1401c9651
0x1401c964f: inc     edi
0x1401c9651: lea     rcx,[rbp+0x88]
0x1401c9658: call    0x140070980
0x1401c965d: lea     rcx,[rbp+0x118]
0x1401c9664: call    0x140070980
0x1401c9669: lea     r8,[rbp+0x120]
0x1401c9670: lea     rdx,[rbp+0xd]
0x1401c9674: lea     rcx,[rbp+0x88]
0x1401c967b: call    0x140070450
0x1401c9680: xor     edx,edx
0x1401c9682: movzx   ecx,BYTE PTR [rax]
0x1401c9685: call    0x140066de0
0x1401c968a: test    al,al
0x1401c968c: jne     0x1401c95e0
0x1401c9692: test    edi,edi
0x1401c9694: je      0x1401c969a
0x1401c9696: test    esi,esi
0x1401c9698: jle     0x1401c96f1
0x1401c969a: lea     rbx,[rip+0x24ae1df]        # 0x142677880
0x1401c96a1: mov     edi,r12d
0x1401c96a4: mov     esi,0x3
0x1401c96a9: nop     DWORD PTR [rax+0x0]
0x1401c96b0: mov     r8d,r14d
0x1401c96b3: mov     edx,edi
0x1401c96b5: lea     rcx,[rip+0x24a31b4]        # 0x14266c870
0x1401c96bc: call    0x1400bc750
0x1401c96c1: xor     r8d,r8d
0x1401c96c4: mov     edx,DWORD PTR [rbx]
0x1401c96c6: lea     rcx,[rip+0x24a31a3]        # 0x14266c870
0x1401c96cd: call    0x140af4ba0
0x1401c96d2: inc     edi
0x1401c96d4: add     rbx,0x4
0x1401c96d8: sub     rsi,0x1
0x1401c96dc: jne     0x1401c96b0
0x1401c96de: inc     r14d
0x1401c96e1: lea     rax,[rip+0x24ae1bc]        # 0x1426778a4
0x1401c96e8: cmp     rbx,rax
0x1401c96eb: jl      0x1401c96a1
0x1401c96ed: mov     r14d,DWORD PTR [rbp-0x10]
0x1401c96f1: add     r12d,0x3
0x1401c96f5: mov     DWORD PTR [rsp+0x70],r12d
0x1401c96fa: lea     rcx,[rbp+0xcf0]
0x1401c9701: call    0x140069460
0x1401c9706: mov     eax,DWORD PTR [rbp-0x70]
0x1401c9709: inc     eax
0x1401c970b: mov     DWORD PTR [rbp-0x70],eax
0x1401c970e: cmp     eax,DWORD PTR [rbp-0x20]
0x1401c9711: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401c9714: mov     rsi,QWORD PTR [rbp-0x30]
0x1401c9718: jl      0x1401c90c0
0x1401c971e: mov     r13d,DWORD PTR [rbp-0x48]
0x1401c9722: mov     edi,DWORD PTR [rsp+0x74]
0x1401c9726: cmp     esi,edi
0x1401c9728: jle     0x1401c97ae
0x1401c972e: lea     ebx,[rdi*2-0x1]
0x1401c9735: add     ebx,edi
0x1401c9737: lea     rcx,[rbp+0x210]
0x1401c973e: call    0x1400bc990
0x1401c9743: lea     r9d,[rsi-0x1]
0x1401c9747: mov     DWORD PTR [rsp+0x30],ebx
0x1401c974b: mov     esi,0x2
0x1401c9750: mov     DWORD PTR [rsp+0x28],esi
0x1401c9754: mov     DWORD PTR [rsp+0x20],edi
0x1401c9758: xor     r8d,r8d
0x1401c975b: mov     rbx,QWORD PTR [rsp+0x78]
0x1401c9760: mov     edx,DWORD PTR [rbx+0x2e0]
0x1401c9766: lea     rcx,[rbp+0x210]
0x1401c976d: call    0x1400bc9b0
0x1401c9772: mov     r9d,DWORD PTR [rbp-0x6c]
0x1401c9776: inc     r9d
0x1401c9779: mov     DWORD PTR [rsp+0x28],0x0
0x1401c9781: movzx   eax,BYTE PTR [rbx+0x2dc]
0x1401c9788: mov     BYTE PTR [rsp+0x20],al
0x1401c978c: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401c9790: mov     edx,DWORD PTR [rbp-0x38]
0x1401c9793: lea     rcx,[rbp+0x210]
0x1401c979a: call    0x1414284b0
0x1401c979f: jmp     0x1401c97b3
0x1401c97a1: mov     r13d,DWORD PTR [rbp-0x20]
0x1401c97a5: mov     DWORD PTR [rbp-0x48],r13d
0x1401c97a9: jmp     0x1401c9726
0x1401c97ae: mov     esi,0x2
0x1401c97b3: mov     rbx,QWORD PTR [rbp-0x60]
0x1401c97b7: test    rbx,rbx
0x1401c97ba: jne     0x1401c97e8
0x1401c97bc: mov     r13,QWORD PTR [rsp+0x78]
0x1401c97c1: cmp     QWORD PTR [r13+0x2d0],rbx
0x1401c97c8: je      0x1401c8dd8
0x1401c97ce: mov     QWORD PTR [r13+0x2d0],rbx
0x1401c97d5: mov     edx,esi
0x1401c97d7: lea     rcx,[rip+0x24a3092]        # 0x14266c870
0x1401c97de: call    0x140b016a0
0x1401c97e3: jmp     0x1401c8dd8
0x1401c97e8: mov     eax,DWORD PTR [rbp-0x58]
0x1401c97eb: lea     esi,[rax-0x37]
0x1401c97ee: lea     edi,[rax-0x2]
0x1401c97f1: lea     r12d,[r13+0xb]
0x1401c97f5: mov     DWORD PTR [rsp+0x70],r12d
0x1401c97fa: mov     r15d,r13d
0x1401c97fd: cmp     r13d,r12d
0x1401c9800: jg      0x1401c98e9
0x1401c9806: movsxd  r14,r13d
0x1401c9809: nop     DWORD PTR [rax+0x0]
0x1401c9810: mov     ebx,esi
0x1401c9812: cmp     esi,edi
0x1401c9814: jg      0x1401c98d6
0x1401c981a: movsxd  r13,r13d
0x1401c981d: movsxd  r12,r12d
0x1401c9820: mov     r8d,ebx
0x1401c9823: mov     edx,r15d
0x1401c9826: lea     rcx,[rip+0x24a3043]        # 0x14266c870
0x1401c982d: call    0x1400bc750
0x1401c9832: xor     r8d,r8d
0x1401c9835: xor     edx,edx
0x1401c9837: lea     rcx,[rip+0x24a3032]        # 0x14266c870
0x1401c983e: call    0x1400bc7c0
0x1401c9843: cmp     r14,r13
0x1401c9846: jne     0x1401c986f
0x1401c9848: cmp     ebx,esi
0x1401c984a: jne     0x1401c9854
0x1401c984c: mov     edx,DWORD PTR [rip+0x24a4942]        # 0x14266e194
0x1401c9852: jmp     0x1401c98b7
0x1401c9854: lea     rcx,[rip+0x24a3015]        # 0x14266c870
0x1401c985b: cmp     ebx,edi
0x1401c985d: jne     0x1401c9867
0x1401c985f: mov     edx,DWORD PTR [rip+0x24a4947]        # 0x14266e1ac
0x1401c9865: jmp     0x1401c98be
0x1401c9867: mov     edx,DWORD PTR [rip+0x24a4933]        # 0x14266e1a0
0x1401c986d: jmp     0x1401c98be
0x1401c986f: cmp     r14,r12
0x1401c9872: jne     0x1401c989b
0x1401c9874: cmp     ebx,esi
0x1401c9876: jne     0x1401c9880
0x1401c9878: mov     edx,DWORD PTR [rip+0x24a491e]        # 0x14266e19c
0x1401c987e: jmp     0x1401c98b7
0x1401c9880: lea     rcx,[rip+0x24a2fe9]        # 0x14266c870
0x1401c9887: cmp     ebx,edi
0x1401c9889: jne     0x1401c9893
0x1401c988b: mov     edx,DWORD PTR [rip+0x24a4923]        # 0x14266e1b4
0x1401c9891: jmp     0x1401c98be
0x1401c9893: mov     edx,DWORD PTR [rip+0x24a490f]        # 0x14266e1a8
0x1401c9899: jmp     0x1401c98be
0x1401c989b: cmp     ebx,esi
0x1401c989d: jne     0x1401c98a7
0x1401c989f: mov     edx,DWORD PTR [rip+0x24a48f3]        # 0x14266e198
0x1401c98a5: jmp     0x1401c98b7
0x1401c98a7: cmp     ebx,edi
0x1401c98a9: mov     edx,DWORD PTR [rip+0x24a4901]        # 0x14266e1b0
0x1401c98af: je      0x1401c98b7
0x1401c98b1: mov     edx,DWORD PTR [rip+0x24a48ed]        # 0x14266e1a4
0x1401c98b7: lea     rcx,[rip+0x24a2fb2]        # 0x14266c870
0x1401c98be: call    0x140af4570
0x1401c98c3: inc     ebx
0x1401c98c5: cmp     ebx,edi
0x1401c98c7: jle     0x1401c9820
0x1401c98cd: mov     r12d,DWORD PTR [rsp+0x70]
0x1401c98d2: mov     r13d,DWORD PTR [rbp-0x48]
0x1401c98d6: inc     r15d
0x1401c98d9: inc     r14
0x1401c98dc: cmp     r15d,r12d
0x1401c98df: jle     0x1401c9810
0x1401c98e5: mov     rbx,QWORD PTR [rbp-0x60]
0x1401c98e9: lea     r15d,[rsi+0x2]
0x1401c98ed: lea     edi,[r13+0x1]
0x1401c98f1: mov     rcx,rbx
0x1401c98f4: call    0x140076740
0x1401c98f9: cmp     eax,0x13
0x1401c98fc: je      0x1401c9d6a
0x1401c9902: cmp     eax,0x19
0x1401c9905: je      0x1401c9d6a
0x1401c990b: xor     eax,eax
0x1401c990d: mov     esi,eax
0x1401c990f: mov     r14d,eax
0x1401c9912: lea     rdx,[rbp+0x90]
0x1401c9919: lea     rcx,[rbx+0x80]
0x1401c9920: call    0x140070870
0x1401c9925: lea     rdx,[rbp+0x128]
0x1401c992c: lea     rcx,[rbx+0x80]
0x1401c9933: call    0x140070860
0x1401c9938: lea     r8,[rbp+0x128]
0x1401c993f: lea     rdx,[rbp+0xe]
0x1401c9943: lea     rcx,[rbp+0x90]
0x1401c994a: call    0x140070450
0x1401c994f: xor     edx,edx
0x1401c9951: movzx   ecx,BYTE PTR [rax]
0x1401c9954: call    0x140066de0
0x1401c9959: test    al,al
0x1401c995b: je      0x1401c9a13
0x1401c9961: lea     rcx,[rbp+0x90]
0x1401c9968: call    0x140070440
0x1401c996d: mov     edx,DWORD PTR [rax]
0x1401c996f: lea     rcx,[rip+0x233c2ca]        # 0x142505c40
0x1401c9976: call    0x140076b30
0x1401c997b: test    rax,rax
0x1401c997e: je      0x1401c99de
0x1401c9980: lea     rbx,[rax+0xa0]
0x1401c9987: mov     rcx,rbx
0x1401c998a: call    0x140070480
0x1401c998f: test    rax,rax
0x1401c9992: je      0x1401c99de
0x1401c9994: xor     edx,edx
0x1401c9996: mov     rcx,rbx
0x1401c9999: call    0x140070850
0x1401c999e: mov     rdx,QWORD PTR [rax]
0x1401c99a1: cmp     DWORD PTR [rdx],0xffffffff
0x1401c99a4: je      0x1401c99de
0x1401c99a6: xor     edx,edx
0x1401c99a8: mov     rcx,rbx
0x1401c99ab: call    0x140070850
0x1401c99b0: mov     rdx,QWORD PTR [rax]
0x1401c99b3: mov     edx,DWORD PTR [rdx]
0x1401c99b5: lea     rcx,[rip+0x223db74]        # 0x142407530
0x1401c99bc: call    0x1413e54b0
0x1401c99c1: test    rax,rax
0x1401c99c4: je      0x1401c99db
0x1401c99c6: mov     eax,DWORD PTR [rax+0x110]
0x1401c99cc: test    eax,0x102
0x1401c99d1: jne     0x1401c99db
0x1401c99d3: test    eax,eax
0x1401c99d5: jns     0x1401c99db
0x1401c99d7: inc     esi
0x1401c99d9: jmp     0x1401c99de
0x1401c99db: inc     r14d
0x1401c99de: lea     rcx,[rbp+0x90]
0x1401c99e5: call    0x140070980
0x1401c99ea: lea     r8,[rbp+0x128]
0x1401c99f1: lea     rdx,[rbp+0xe]
0x1401c99f5: lea     rcx,[rbp+0x90]
0x1401c99fc: call    0x140070450
0x1401c9a01: xor     edx,edx
0x1401c9a03: movzx   ecx,BYTE PTR [rax]
0x1401c9a06: call    0x140066de0
0x1401c9a0b: test    al,al
0x1401c9a0d: jne     0x1401c9961
0x1401c9a13: mov     r8d,r15d
0x1401c9a16: mov     edx,edi
0x1401c9a18: lea     rcx,[rip+0x24a2e51]        # 0x14266c870
0x1401c9a1f: call    0x1400bc750
0x1401c9a24: lea     eax,[r14+rsi*1]
0x1401c9a28: test    eax,eax
0x1401c9a2a: jne     0x1401c9a84
0x1401c9a2c: xor     r8d,r8d
0x1401c9a2f: mov     edx,0x7
0x1401c9a34: xor     r9d,r9d
0x1401c9a37: lea     rcx,[rip+0x24a2e32]        # 0x14266c870
0x1401c9a3e: call    0x1400bc760
0x1401c9a43: lea     rdx,[rip+0x145616e]        # 0x14161fbb8 ; literal='No commanders'
0x1401c9a4a: lea     rcx,[rbp+0x1e70]
0x1401c9a51: call    0x140069780
0x1401c9a56: nop     
0x1401c9a57: xor     r9d,r9d
0x1401c9a5a: xor     r8d,r8d
0x1401c9a5d: lea     rdx,[rbp+0x1e70]
0x1401c9a64: lea     rcx,[rip+0x24a2e05]        # 0x14266c870
0x1401c9a6b: call    0x140af3400
0x1401c9a70: nop     
0x1401c9a71: lea     rcx,[rbp+0x1e70]
0x1401c9a78: call    0x140069460
0x1401c9a7d: inc     edi
0x1401c9a7f: jmp     0x1401c9be2
0x1401c9a84: lea     rcx,[rbp+0xd70]
0x1401c9a8b: call    0x140070cc0
0x1401c9a90: nop     
0x1401c9a91: test    esi,esi
0x1401c9a93: jne     0x1401c9abd
0x1401c9a95: lea     rdx,[rip+0x1456374]        # 0x14161fe10 ; literal='no'
0x1401c9a9c: lea     rcx,[rbp+0xd70]
0x1401c9aa3: call    0x140070b90
0x1401c9aa8: lea     rdx,[rip+0x1456119]        # 0x14161fbc8 ; literal=' commander'
0x1401c9aaf: lea     rcx,[rbp+0xd70]
0x1401c9ab6: call    0x140070b90
0x1401c9abb: jmp     0x1401c9ae3
0x1401c9abd: lea     rdx,[rbp+0xd70]
0x1401c9ac4: mov     ecx,esi
0x1401c9ac6: call    0x140545610
0x1401c9acb: lea     rdx,[rip+0x14560f6]        # 0x14161fbc8 ; literal=' commander'
0x1401c9ad2: lea     rcx,[rbp+0xd70]
0x1401c9ad9: call    0x140070b90
0x1401c9ade: cmp     esi,0x1
0x1401c9ae1: je      0x1401c9af6
0x1401c9ae3: lea     rdx,[rip+0x143aa06]        # 0x1416044f0 ; literal='s'
0x1401c9aea: lea     rcx,[rbp+0xd70]
0x1401c9af1: call    0x140070b90
0x1401c9af6: lea     rdx,[rip+0x14560a3]        # 0x14161fba0 ; literal=' here'
0x1401c9afd: lea     rcx,[rbp+0xd70]
0x1401c9b04: call    0x140070b90
0x1401c9b09: lea     rdx,[rip+0x143a884]        # 0x141604394 ; literal=', '
0x1401c9b10: lea     rcx,[rbp+0xd70]
0x1401c9b17: call    0x140070b90
0x1401c9b1c: test    r14d,r14d
0x1401c9b1f: jne     0x1401c9b49
0x1401c9b21: lea     rdx,[rip+0x14562e8]        # 0x14161fe10 ; literal='no'
0x1401c9b28: lea     rcx,[rbp+0xd70]
0x1401c9b2f: call    0x140070b90
0x1401c9b34: lea     rdx,[rip+0x145608d]        # 0x14161fbc8 ; literal=' commander'
0x1401c9b3b: lea     rcx,[rbp+0xd70]
0x1401c9b42: call    0x140070b90
0x1401c9b47: jmp     0x1401c9b71
0x1401c9b49: lea     rdx,[rbp+0xd70]
0x1401c9b50: mov     ecx,r14d
0x1401c9b53: call    0x140545610
0x1401c9b58: lea     rdx,[rip+0x1456069]        # 0x14161fbc8 ; literal=' commander'
0x1401c9b5f: lea     rcx,[rbp+0xd70]
0x1401c9b66: call    0x140070b90
0x1401c9b6b: cmp     r14d,0x1
0x1401c9b6f: je      0x1401c9b84
0x1401c9b71: lea     rdx,[rip+0x143a978]        # 0x1416044f0 ; literal='s'
0x1401c9b78: lea     rcx,[rbp+0xd70]
0x1401c9b7f: call    0x140070b90
0x1401c9b84: lea     rdx,[rip+0x145601d]        # 0x14161fba8 ; literal=' traveling'
0x1401c9b8b: lea     rcx,[rbp+0xd70]
0x1401c9b92: call    0x140070b90
0x1401c9b97: lea     rcx,[rbp+0xd70]
0x1401c9b9e: call    0x140546b30
0x1401c9ba3: xor     r8d,r8d
0x1401c9ba6: mov     edx,0x7
0x1401c9bab: mov     r9b,0x1
0x1401c9bae: lea     rcx,[rip+0x24a2cbb]        # 0x14266c870
0x1401c9bb5: call    0x1400bc760
0x1401c9bba: xor     r9d,r9d
0x1401c9bbd: xor     r8d,r8d
0x1401c9bc0: lea     rdx,[rbp+0xd70]
0x1401c9bc7: lea     rcx,[rip+0x24a2ca2]        # 0x14266c870
0x1401c9bce: call    0x140af3400
0x1401c9bd3: nop     
0x1401c9bd4: lea     rcx,[rbp+0xd70]
0x1401c9bdb: call    0x140069460
0x1401c9be0: inc     edi
0x1401c9be2: lea     eax,[r13+0x8]
0x1401c9be6: cmp     edi,eax
0x1401c9be8: jg      0x1401ca216
0x1401c9bee: mov     r12,QWORD PTR [rbp-0x60]
0x1401c9bf2: sub     r12,0xffffffffffffff80
0x1401c9bf6: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401c9c00: movsxd  rbx,DWORD PTR [rbp-0x78]
0x1401c9c04: mov     rcx,r12
0x1401c9c07: call    0x1400709a0
0x1401c9c0c: cmp     rbx,rax
0x1401c9c0f: jae     0x1401ca211
0x1401c9c15: mov     rdx,rbx
0x1401c9c18: mov     rcx,r12
0x1401c9c1b: call    0x140070990
0x1401c9c20: mov     edx,DWORD PTR [rax]
0x1401c9c22: lea     rcx,[rip+0x233c017]        # 0x142505c40
0x1401c9c29: call    0x140076b30
0x1401c9c2e: mov     rbx,rax
0x1401c9c31: test    rax,rax
0x1401c9c34: je      0x1401c9d56
0x1401c9c3a: xor     r8d,r8d
0x1401c9c3d: mov     edx,0x3
0x1401c9c42: mov     r9b,0x1
0x1401c9c45: lea     rcx,[rip+0x24a2c24]        # 0x14266c870
0x1401c9c4c: call    0x1400bc760
0x1401c9c51: mov     r8d,r15d
0x1401c9c54: mov     edx,edi
0x1401c9c56: lea     rcx,[rip+0x24a2c13]        # 0x14266c870
0x1401c9c5d: call    0x1400bc750
0x1401c9c62: lea     rcx,[rbp+0x1450]
0x1401c9c69: call    0x140070cc0
0x1401c9c6e: nop     
0x1401c9c6f: lea     rcx,[rbx+0x80]
0x1401c9c76: call    0x140070b50
0x1401c9c7b: test    al,al
0x1401c9c7d: jne     0x1401c9c94
0x1401c9c7f: lea     rdx,[rbx+0x80]
0x1401c9c86: lea     rcx,[rbp+0x1450]
0x1401c9c8d: call    0x140070bd0
0x1401c9c92: jmp     0x1401c9caa
0x1401c9c94: lea     rcx,[rbx+0x8]
0x1401c9c98: xor     r9d,r9d
0x1401c9c9b: mov     r8b,0x1
0x1401c9c9e: lea     rdx,[rbp+0x1450]
0x1401c9ca5: call    0x140aae180
0x1401c9caa: mov     r9d,0x18
0x1401c9cb0: xor     r8d,r8d
0x1401c9cb3: lea     rdx,[rbp+0x1450]
0x1401c9cba: lea     rcx,[rip+0x24a2baf]        # 0x14266c870
0x1401c9cc1: call    0x140af3400
0x1401c9cc6: inc     edi
0x1401c9cc8: mov     r13d,DWORD PTR [rbp-0x48]
0x1401c9ccc: lea     eax,[r13+0x9]
0x1401c9cd0: cmp     edi,eax
0x1401c9cd2: jne     0x1401c9d4a
0x1401c9cd4: mov     rcx,r12
0x1401c9cd7: call    0x1400709a0
0x1401c9cdc: mov     rcx,QWORD PTR [rbp-0x78]
0x1401c9ce0: inc     ecx
0x1401c9ce2: cmp     ecx,eax
0x1401c9ce4: jge     0x1401c9d4a
0x1401c9ce6: xor     r8d,r8d
0x1401c9ce9: mov     edx,0x7
0x1401c9cee: mov     r9b,0x1
0x1401c9cf1: lea     rcx,[rip+0x24a2b78]        # 0x14266c870
0x1401c9cf8: call    0x1400bc760
0x1401c9cfd: lea     r8d,[r15+0x19]
0x1401c9d01: mov     edx,edi
0x1401c9d03: lea     rcx,[rip+0x24a2b66]        # 0x14266c870
0x1401c9d0a: call    0x1400bc750
0x1401c9d0f: lea     rdx,[rip+0x1455eda]        # 0x14161fbf0 ; literal='and more...'
0x1401c9d16: lea     rcx,[rbp+0x1e90]
0x1401c9d1d: call    0x140069780
0x1401c9d22: nop     
0x1401c9d23: xor     r9d,r9d
0x1401c9d26: xor     r8d,r8d
0x1401c9d29: lea     rdx,[rbp+0x1e90]
0x1401c9d30: lea     rcx,[rip+0x24a2b39]        # 0x14266c870
0x1401c9d37: call    0x140af3400
0x1401c9d3c: nop     
0x1401c9d3d: lea     rcx,[rbp+0x1e90]
0x1401c9d44: call    0x140069460
0x1401c9d49: nop     
0x1401c9d4a: lea     rcx,[rbp+0x1450]
0x1401c9d51: call    0x140069460
0x1401c9d56: inc     DWORD PTR [rbp-0x78]
0x1401c9d59: lea     eax,[r13+0x8]
0x1401c9d5d: cmp     edi,eax
0x1401c9d5f: jle     0x1401c9c00
0x1401c9d65: jmp     0x1401ca211
0x1401c9d6a: xor     eax,eax
0x1401c9d6c: mov     esi,eax
0x1401c9d6e: mov     r14d,eax
0x1401c9d71: lea     rdx,[rbp+0x70]
0x1401c9d75: lea     rcx,[rbx+0x98]
0x1401c9d7c: call    0x140070870
0x1401c9d81: lea     rdx,[rbp+0x138]
0x1401c9d88: lea     rcx,[rbx+0x98]
0x1401c9d8f: call    0x140070860
0x1401c9d94: mov     rbx,QWORD PTR [rbp-0x60]
0x1401c9d98: lea     rcx,[rbx+0xb0]
0x1401c9d9f: lea     rdx,[rbp+0x130]
0x1401c9da6: call    0x140070870
0x1401c9dab: lea     r8,[rbp+0x138]
0x1401c9db2: lea     rdx,[rbp+0x7]
0x1401c9db6: lea     rcx,[rbp+0x70]
0x1401c9dba: call    0x140070450
0x1401c9dbf: xor     edx,edx
0x1401c9dc1: movzx   ecx,BYTE PTR [rax]
0x1401c9dc4: call    0x140066de0
0x1401c9dc9: test    al,al
0x1401c9dcb: je      0x1401c9e7f
0x1401c9dd1: lea     rcx,[rbp+0x70]
0x1401c9dd5: call    0x140070440
0x1401c9dda: mov     edx,DWORD PTR [rax]
0x1401c9ddc: lea     rcx,[rip+0x2229e95]        # 0x1423f3c78
0x1401c9de3: call    0x14007f120
0x1401c9de8: mov     rbx,rax
0x1401c9deb: test    rax,rax
0x1401c9dee: je      0x1401c9e40
0x1401c9df0: lea     rcx,[rbp+0x130]
0x1401c9df7: call    0x140070440
0x1401c9dfc: lea     rdx,[rbx+0x1110]
0x1401c9e03: mov     ecx,DWORD PTR [rax]
0x1401c9e05: call    0x1400bb3f0
0x1401c9e0a: test    rax,rax
0x1401c9e0d: je      0x1401c9e40
0x1401c9e0f: mov     edx,DWORD PTR [rax+0x4]
0x1401c9e12: cmp     edx,0xffffffff
0x1401c9e15: je      0x1401c9e40
0x1401c9e17: lea     rcx,[rip+0x223d712]        # 0x142407530
0x1401c9e1e: call    0x1413e54b0
0x1401c9e23: test    rax,rax
0x1401c9e26: je      0x1401c9e3d
0x1401c9e28: mov     eax,DWORD PTR [rax+0x110]
0x1401c9e2e: test    eax,0x102
0x1401c9e33: jne     0x1401c9e3d
0x1401c9e35: test    eax,eax
0x1401c9e37: jns     0x1401c9e3d
0x1401c9e39: inc     esi
0x1401c9e3b: jmp     0x1401c9e40
0x1401c9e3d: inc     r14d
0x1401c9e40: lea     rcx,[rbp+0x70]
0x1401c9e44: call    0x140070980
0x1401c9e49: lea     rcx,[rbp+0x130]
0x1401c9e50: call    0x140070980
0x1401c9e55: lea     r8,[rbp+0x138]
0x1401c9e5c: lea     rdx,[rbp+0x7]
0x1401c9e60: lea     rcx,[rbp+0x70]
0x1401c9e64: call    0x140070450
0x1401c9e69: xor     edx,edx
0x1401c9e6b: movzx   ecx,BYTE PTR [rax]
0x1401c9e6e: call    0x140066de0
0x1401c9e73: test    al,al
0x1401c9e75: jne     0x1401c9dd1
0x1401c9e7b: mov     rbx,QWORD PTR [rbp-0x60]
0x1401c9e7f: mov     r8d,r15d
0x1401c9e82: mov     edx,edi
0x1401c9e84: lea     rcx,[rip+0x24a29e5]        # 0x14266c870
0x1401c9e8b: call    0x1400bc750
0x1401c9e90: lea     eax,[r14+rsi*1]
0x1401c9e94: test    eax,eax
0x1401c9e96: jne     0x1401c9ee9
0x1401c9e98: xor     r8d,r8d
0x1401c9e9b: mov     edx,0x7
0x1401c9ea0: xor     r9d,r9d
0x1401c9ea3: lea     rcx,[rip+0x24a29c6]        # 0x14266c870
0x1401c9eaa: call    0x1400bc760
0x1401c9eaf: lea     rdx,[rip+0x1455f4a]        # 0x14161fe00 ; literal='No messengers'
0x1401c9eb6: lea     rcx,[rbp+0x1eb0]
0x1401c9ebd: call    0x140069780
0x1401c9ec2: nop     
0x1401c9ec3: xor     r9d,r9d
0x1401c9ec6: xor     r8d,r8d
0x1401c9ec9: lea     rdx,[rbp+0x1eb0]
0x1401c9ed0: lea     rcx,[rip+0x24a2999]        # 0x14266c870
0x1401c9ed7: call    0x140af3400
0x1401c9edc: nop     
0x1401c9edd: lea     rcx,[rbp+0x1eb0]
0x1401c9ee4: jmp     0x1401ca040
0x1401c9ee9: lea     rcx,[rbp+0xd90]
0x1401c9ef0: call    0x140070cc0
0x1401c9ef5: nop     
0x1401c9ef6: test    esi,esi
0x1401c9ef8: jne     0x1401c9f22
0x1401c9efa: lea     rdx,[rip+0x1455f0f]        # 0x14161fe10 ; literal='no'
0x1401c9f01: lea     rcx,[rbp+0xd90]
0x1401c9f08: call    0x140070b90
0x1401c9f0d: lea     rdx,[rip+0x1455f04]        # 0x14161fe18 ; literal=' messenger'
0x1401c9f14: lea     rcx,[rbp+0xd90]
0x1401c9f1b: call    0x140070b90
0x1401c9f20: jmp     0x1401c9f48
0x1401c9f22: lea     rdx,[rbp+0xd90]
0x1401c9f29: mov     ecx,esi
0x1401c9f2b: call    0x140545610
0x1401c9f30: lea     rdx,[rip+0x1455ee1]        # 0x14161fe18 ; literal=' messenger'
0x1401c9f37: lea     rcx,[rbp+0xd90]
0x1401c9f3e: call    0x140070b90
0x1401c9f43: cmp     esi,0x1
0x1401c9f46: je      0x1401c9f5b
0x1401c9f48: lea     rdx,[rip+0x143a5a1]        # 0x1416044f0 ; literal='s'
0x1401c9f4f: lea     rcx,[rbp+0xd90]
0x1401c9f56: call    0x140070b90
0x1401c9f5b: lea     rdx,[rip+0x1455c3e]        # 0x14161fba0 ; literal=' here'
0x1401c9f62: lea     rcx,[rbp+0xd90]
0x1401c9f69: call    0x140070b90
0x1401c9f6e: lea     rdx,[rip+0x143a41f]        # 0x141604394 ; literal=', '
0x1401c9f75: lea     rcx,[rbp+0xd90]
0x1401c9f7c: call    0x140070b90
0x1401c9f81: test    r14d,r14d
0x1401c9f84: jne     0x1401c9fae
0x1401c9f86: lea     rdx,[rip+0x1455e83]        # 0x14161fe10 ; literal='no'
0x1401c9f8d: lea     rcx,[rbp+0xd90]
0x1401c9f94: call    0x140070b90
0x1401c9f99: lea     rdx,[rip+0x1455e78]        # 0x14161fe18 ; literal=' messenger'
0x1401c9fa0: lea     rcx,[rbp+0xd90]
0x1401c9fa7: call    0x140070b90
0x1401c9fac: jmp     0x1401c9fd6
0x1401c9fae: lea     rdx,[rbp+0xd90]
0x1401c9fb5: mov     ecx,r14d
0x1401c9fb8: call    0x140545610
0x1401c9fbd: lea     rdx,[rip+0x1455e54]        # 0x14161fe18 ; literal=' messenger'
0x1401c9fc4: lea     rcx,[rbp+0xd90]
0x1401c9fcb: call    0x140070b90
0x1401c9fd0: cmp     r14d,0x1
0x1401c9fd4: je      0x1401c9fe9
0x1401c9fd6: lea     rdx,[rip+0x143a513]        # 0x1416044f0 ; literal='s'
0x1401c9fdd: lea     rcx,[rbp+0xd90]
0x1401c9fe4: call    0x140070b90
0x1401c9fe9: lea     rdx,[rip+0x1455bb8]        # 0x14161fba8 ; literal=' traveling'
0x1401c9ff0: lea     rcx,[rbp+0xd90]
0x1401c9ff7: call    0x140070b90
0x1401c9ffc: lea     rcx,[rbp+0xd90]
0x1401ca003: call    0x140546b30
0x1401ca008: xor     r8d,r8d
0x1401ca00b: mov     edx,0x7
0x1401ca010: mov     r9b,0x1
0x1401ca013: lea     rcx,[rip+0x24a2856]        # 0x14266c870
0x1401ca01a: call    0x1400bc760
0x1401ca01f: xor     r9d,r9d
0x1401ca022: xor     r8d,r8d
0x1401ca025: lea     rdx,[rbp+0xd90]
0x1401ca02c: lea     rcx,[rip+0x24a283d]        # 0x14266c870
0x1401ca033: call    0x140af3400
0x1401ca038: nop     
0x1401ca039: lea     rcx,[rbp+0xd90]
0x1401ca040: call    0x140069460
0x1401ca045: inc     edi
0x1401ca047: lea     eax,[r13+0x8]
0x1401ca04b: cmp     edi,eax
0x1401ca04d: jg      0x1401ca216
0x1401ca053: lea     r12,[rbx+0x98]
0x1401ca05a: mov     DWORD PTR [rsp+0x74],esi
0x1401ca05e: mov     DWORD PTR [rbp-0x68],r14d
0x1401ca062: mov     esi,eax
0x1401ca064: mov     r14d,DWORD PTR [rbp-0x48]
0x1401ca068: xor     eax,eax
0x1401ca06a: nop     WORD PTR [rax+rax*1+0x0]
0x1401ca070: movsxd  rbx,eax
0x1401ca073: mov     rcx,r12
0x1401ca076: call    0x1400709a0
0x1401ca07b: cmp     rbx,rax
0x1401ca07e: jae     0x1401ca209
0x1401ca084: mov     rdx,rbx
0x1401ca087: mov     rcx,r12
0x1401ca08a: call    0x140070990
0x1401ca08f: mov     edx,DWORD PTR [rax]
0x1401ca091: lea     rcx,[rip+0x2229be0]        # 0x1423f3c78
0x1401ca098: call    0x14007f120
0x1401ca09d: mov     r13,rax
0x1401ca0a0: test    rax,rax
0x1401ca0a3: je      0x1401ca1f7
0x1401ca0a9: mov     rcx,QWORD PTR [rbp-0x60]
0x1401ca0ad: add     rcx,0xb0
0x1401ca0b4: mov     rdx,rbx
0x1401ca0b7: call    0x140070990
0x1401ca0bc: lea     rdx,[r13+0x1110]
0x1401ca0c3: mov     ecx,DWORD PTR [rax]
0x1401ca0c5: call    0x1400bb3f0
0x1401ca0ca: mov     rbx,rax
0x1401ca0cd: test    rax,rax
0x1401ca0d0: je      0x1401ca1f7
0x1401ca0d6: xor     r8d,r8d
0x1401ca0d9: mov     edx,0x3
0x1401ca0de: mov     r9b,0x1
0x1401ca0e1: lea     rcx,[rip+0x24a2788]        # 0x14266c870
0x1401ca0e8: call    0x1400bc760
0x1401ca0ed: mov     r8d,r15d
0x1401ca0f0: mov     edx,edi
0x1401ca0f2: lea     rcx,[rip+0x24a2777]        # 0x14266c870
0x1401ca0f9: call    0x1400bc750
0x1401ca0fe: lea     rcx,[rbp+0x1470]
0x1401ca105: call    0x140070cc0
0x1401ca10a: nop     
0x1401ca10b: mov     edx,DWORD PTR [rbx+0x4]
0x1401ca10e: cmp     edx,0xffffffff
0x1401ca111: je      0x1401ca13c
0x1401ca113: lea     rcx,[rip+0x235201e]        # 0x14251c138
0x1401ca11a: call    0x1400693f0
0x1401ca11f: test    rax,rax
0x1401ca122: je      0x1401ca14f
0x1401ca124: lea     rcx,[rax+0x38]
0x1401ca128: xor     r9d,r9d
0x1401ca12b: mov     r8b,0x1
0x1401ca12e: lea     rdx,[rbp+0x1470]
0x1401ca135: call    0x140aae180
0x1401ca13a: jmp     0x1401ca14f
0x1401ca13c: lea     rdx,[rip+0x1455a95]        # 0x14161fbd8 ; literal='Messenger (unfilled)'
0x1401ca143: lea     rcx,[rbp+0x1470]
0x1401ca14a: call    0x140070bb0
0x1401ca14f: mov     r9d,0x18
0x1401ca155: xor     r8d,r8d
0x1401ca158: lea     rdx,[rbp+0x1470]
0x1401ca15f: lea     rcx,[rip+0x24a270a]        # 0x14266c870
0x1401ca166: call    0x140af3400
0x1401ca16b: inc     edi
0x1401ca16d: lea     eax,[r14+0x9]
0x1401ca171: cmp     edi,eax
0x1401ca173: jne     0x1401ca1eb
0x1401ca175: mov     rcx,r12
0x1401ca178: call    0x1400709a0
0x1401ca17d: mov     rcx,QWORD PTR [rbp-0x78]
0x1401ca181: inc     ecx
0x1401ca183: cmp     ecx,eax
0x1401ca185: jge     0x1401ca1eb
0x1401ca187: xor     r8d,r8d
0x1401ca18a: mov     edx,0x7
0x1401ca18f: mov     r9b,0x1
0x1401ca192: lea     rcx,[rip+0x24a26d7]        # 0x14266c870
0x1401ca199: call    0x1400bc760
0x1401ca19e: lea     r8d,[r15+0x19]
0x1401ca1a2: mov     edx,edi
0x1401ca1a4: lea     rcx,[rip+0x24a26c5]        # 0x14266c870
0x1401ca1ab: call    0x1400bc750
0x1401ca1b0: lea     rdx,[rip+0x1455a39]        # 0x14161fbf0 ; literal='and more...'
0x1401ca1b7: lea     rcx,[rbp+0x1ed0]
0x1401ca1be: call    0x140069780
0x1401ca1c3: nop     
0x1401ca1c4: xor     r9d,r9d
0x1401ca1c7: xor     r8d,r8d
0x1401ca1ca: lea     rdx,[rbp+0x1ed0]
0x1401ca1d1: lea     rcx,[rip+0x24a2698]        # 0x14266c870
0x1401ca1d8: call    0x140af3400
0x1401ca1dd: nop     
0x1401ca1de: lea     rcx,[rbp+0x1ed0]
0x1401ca1e5: call    0x140069460
0x1401ca1ea: nop     
0x1401ca1eb: lea     rcx,[rbp+0x1470]
0x1401ca1f2: call    0x140069460
0x1401ca1f7: mov     rax,QWORD PTR [rbp-0x78]
0x1401ca1fb: inc     eax
0x1401ca1fd: mov     QWORD PTR [rbp-0x78],rax
0x1401ca201: cmp     edi,esi
0x1401ca203: jle     0x1401ca070
0x1401ca209: mov     esi,DWORD PTR [rsp+0x74]
0x1401ca20d: mov     r14d,DWORD PTR [rbp-0x68]
0x1401ca211: mov     r12d,DWORD PTR [rsp+0x70]
0x1401ca216: test    r14d,r14d
0x1401ca219: je      0x1401ca284
0x1401ca21b: test    esi,esi
0x1401ca21d: jg      0x1401ca284
0x1401ca21f: xor     r8d,r8d
0x1401ca222: mov     edx,0x7
0x1401ca227: xor     r9d,r9d
0x1401ca22a: lea     rcx,[rip+0x24a263f]        # 0x14266c870
0x1401ca231: call    0x1400bc760
0x1401ca236: lea     edx,[r12-0x1]
0x1401ca23b: mov     r8d,r15d
0x1401ca23e: lea     rcx,[rip+0x24a262b]        # 0x14266c870
0x1401ca245: call    0x1400bc750
0x1401ca24a: lea     rdx,[rip+0x14559d7]        # 0x14161fc28 ; literal='This mission cannot be altered now.'
0x1401ca251: lea     rcx,[rbp+0x1ef0]
0x1401ca258: call    0x140069780
0x1401ca25d: nop     
0x1401ca25e: xor     r9d,r9d
0x1401ca261: xor     r8d,r8d
0x1401ca264: lea     rdx,[rbp+0x1ef0]
0x1401ca26b: lea     rcx,[rip+0x24a25fe]        # 0x14266c870
0x1401ca272: call    0x140af3400
0x1401ca277: nop     
0x1401ca278: lea     rcx,[rbp+0x1ef0]
0x1401ca27f: jmp     0x1401c8dce
0x1401ca284: xor     r8d,r8d
0x1401ca287: mov     edx,0x7
0x1401ca28c: mov     r9b,0x1
0x1401ca28f: lea     rcx,[rip+0x24a25da]        # 0x14266c870
0x1401ca296: call    0x1400bc760
0x1401ca29b: lea     edx,[r12-0x1]
0x1401ca2a0: mov     r8d,r15d
0x1401ca2a3: lea     rcx,[rip+0x24a25c6]        # 0x14266c870
0x1401ca2aa: call    0x1400bc750
0x1401ca2af: lea     rdx,[rip+0x145594a]        # 0x14161fc00 ; literal='Click for assignments and details'
0x1401ca2b6: lea     rcx,[rbp+0x1f10]
0x1401ca2bd: call    0x140069780
0x1401ca2c2: nop     
0x1401ca2c3: xor     r9d,r9d
0x1401ca2c6: xor     r8d,r8d
0x1401ca2c9: lea     rdx,[rbp+0x1f10]
0x1401ca2d0: lea     rcx,[rip+0x24a2599]        # 0x14266c870
0x1401ca2d7: call    0x140af3400
0x1401ca2dc: nop     
0x1401ca2dd: lea     rcx,[rbp+0x1f10]
0x1401ca2e4: jmp     0x1401c8dce
0x1401ca2e9: mov     ecx,DWORD PTR [rbp-0x18]
0x1401ca2ec: mov     DWORD PTR [rsp+0x74],ecx
0x1401ca2f0: lea     r13d,[rcx-0x37]
0x1401ca2f4: lea     esi,[r13-0x2]
0x1401ca2f8: mov     DWORD PTR [rbp-0x20],esi
0x1401ca2fb: mov     edx,DWORD PTR [rip+0x2225907]        # 0x1423efc08
0x1401ca301: dec     edx
0x1401ca303: mov     DWORD PTR [rbp-0x70],edx
0x1401ca306: lea     eax,[rcx-0xb]
0x1401ca309: mov     DWORD PTR [rsp+0x70],eax
0x1401ca30d: lea     r12d,[rcx-0x1]
0x1401ca311: mov     DWORD PTR [rbp-0x58],r12d
0x1401ca315: mov     edi,ecx
0x1401ca317: cmp     edx,0x2a
0x1401ca31a: jle     0x1401ca32b
0x1401ca31c: mov     edx,0x2a
0x1401ca321: mov     DWORD PTR [rbp-0x70],edx
0x1401ca324: xor     eax,eax
0x1401ca326: mov     r15d,eax
0x1401ca329: jmp     0x1401ca340
0x1401ca32b: mov     DWORD PTR [rsp+0x70],eax
0x1401ca32f: mov     DWORD PTR [rbp-0x58],r12d
0x1401ca333: xor     eax,eax
0x1401ca335: mov     r15d,eax
0x1401ca338: test    edx,edx
0x1401ca33a: js      0x1401ca418
0x1401ca340: mov     r14,rax
0x1401ca343: mov     ebx,esi
0x1401ca345: cmp     esi,edi
0x1401ca347: jg      0x1401ca400
0x1401ca34d: movsxd  r12,edx
0x1401ca350: mov     r8d,ebx
0x1401ca353: mov     edx,r15d
0x1401ca356: lea     rcx,[rip+0x24a2513]        # 0x14266c870
0x1401ca35d: call    0x1400bc750
0x1401ca362: xor     r8d,r8d
0x1401ca365: xor     edx,edx
0x1401ca367: lea     rcx,[rip+0x24a2502]        # 0x14266c870
0x1401ca36e: call    0x1400bc7c0
0x1401ca373: test    r14,r14
0x1401ca376: jne     0x1401ca39f
0x1401ca378: cmp     ebx,esi
0x1401ca37a: jne     0x1401ca384
0x1401ca37c: mov     edx,DWORD PTR [rip+0x24a3e12]        # 0x14266e194
0x1401ca382: jmp     0x1401ca3e7
0x1401ca384: lea     rcx,[rip+0x24a24e5]        # 0x14266c870
0x1401ca38b: cmp     ebx,edi
0x1401ca38d: jne     0x1401ca397
0x1401ca38f: mov     edx,DWORD PTR [rip+0x24a3e17]        # 0x14266e1ac
0x1401ca395: jmp     0x1401ca3ee
0x1401ca397: mov     edx,DWORD PTR [rip+0x24a3e03]        # 0x14266e1a0
0x1401ca39d: jmp     0x1401ca3ee
0x1401ca39f: cmp     r14,r12
0x1401ca3a2: jne     0x1401ca3cb
0x1401ca3a4: cmp     ebx,esi
0x1401ca3a6: jne     0x1401ca3b0
0x1401ca3a8: mov     edx,DWORD PTR [rip+0x24a3dee]        # 0x14266e19c
0x1401ca3ae: jmp     0x1401ca3e7
0x1401ca3b0: lea     rcx,[rip+0x24a24b9]        # 0x14266c870
0x1401ca3b7: cmp     ebx,edi
0x1401ca3b9: jne     0x1401ca3c3
0x1401ca3bb: mov     edx,DWORD PTR [rip+0x24a3df3]        # 0x14266e1b4
0x1401ca3c1: jmp     0x1401ca3ee
0x1401ca3c3: mov     edx,DWORD PTR [rip+0x24a3ddf]        # 0x14266e1a8
0x1401ca3c9: jmp     0x1401ca3ee
0x1401ca3cb: cmp     ebx,esi
0x1401ca3cd: jne     0x1401ca3d7
0x1401ca3cf: mov     edx,DWORD PTR [rip+0x24a3dc3]        # 0x14266e198
0x1401ca3d5: jmp     0x1401ca3e7
0x1401ca3d7: cmp     ebx,edi
0x1401ca3d9: mov     edx,DWORD PTR [rip+0x24a3dd1]        # 0x14266e1b0
0x1401ca3df: je      0x1401ca3e7
0x1401ca3e1: mov     edx,DWORD PTR [rip+0x24a3dbd]        # 0x14266e1a4
0x1401ca3e7: lea     rcx,[rip+0x24a2482]        # 0x14266c870
0x1401ca3ee: call    0x140af4570
0x1401ca3f3: inc     ebx
0x1401ca3f5: cmp     ebx,edi
0x1401ca3f7: jle     0x1401ca350
0x1401ca3fd: mov     edx,DWORD PTR [rbp-0x70]
0x1401ca400: inc     r15d
0x1401ca403: inc     r14
0x1401ca406: cmp     r15d,edx
0x1401ca409: jle     0x1401ca343
0x1401ca40f: mov     r12d,DWORD PTR [rbp-0x58]
0x1401ca413: mov     ebx,0x2
0x1401ca418: mov     r15,QWORD PTR [rsp+0x78]
0x1401ca41d: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca424: call    0x14109aed0
0x1401ca429: mov     rdi,rax
0x1401ca42c: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca433: call    0x1409ce920
0x1401ca438: mov     r14,rax
0x1401ca43b: xor     r8d,r8d
0x1401ca43e: mov     edx,0x7
0x1401ca443: mov     r9b,0x1
0x1401ca446: lea     rcx,[rip+0x24a2423]        # 0x14266c870
0x1401ca44d: call    0x1400bc760
0x1401ca452: lea     rcx,[rbp+0xf10]
0x1401ca459: call    0x140070cc0
0x1401ca45e: nop     
0x1401ca45f: mov     r8,QWORD PTR [r15+0x1d8]
0x1401ca466: xor     r9d,r9d
0x1401ca469: mov     r8d,DWORD PTR [r8+0x88]
0x1401ca470: lea     rdx,[rbp+0xf10]
0x1401ca477: lea     rcx,[rip+0x2351cba]        # 0x14251c138
0x1401ca47e: call    0x140bab5f0
0x1401ca483: lea     rdx,[rip+0x1439f0a]        # 0x141604394 ; literal=', '
0x1401ca48a: lea     rcx,[rbp+0xf10]
0x1401ca491: call    0x140070b90
0x1401ca496: lea     rcx,[rbp+0x1410]
0x1401ca49d: call    0x140070cc0
0x1401ca4a2: nop     
0x1401ca4a3: lea     rdx,[rbp+0x1410]
0x1401ca4aa: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca4b1: call    0x1410e4720
0x1401ca4b6: lea     rcx,[rbp+0x1410]
0x1401ca4bd: call    0x140070b50
0x1401ca4c2: test    al,al
0x1401ca4c4: jne     0x1401ca4e7
0x1401ca4c6: lea     rdx,[rbp+0x1410]
0x1401ca4cd: lea     rcx,[rbp+0xf10]
0x1401ca4d4: call    0x1400bb340
0x1401ca4d9: mov     dl,0x20
0x1401ca4db: lea     rcx,[rbp+0xf10]
0x1401ca4e2: call    0x1400bb360
0x1401ca4e7: mov     rax,QWORD PTR [r15+0x1d8]
0x1401ca4ee: cmp     WORD PTR [rax+0x80],0xa
0x1401ca4f6: je      0x1401ca560
0x1401ca4f8: test    rdi,rdi
0x1401ca4fb: je      0x1401ca560
0x1401ca4fd: mov     eax,DWORD PTR [rdi+0x9c]
0x1401ca503: shr     eax,0xa
0x1401ca506: not     eax
0x1401ca508: test    al,0x1
0x1401ca50a: je      0x1401ca560
0x1401ca50c: lea     rcx,[rbp+0x1550]
0x1401ca513: call    0x140070cc0
0x1401ca518: nop     
0x1401ca519: mov     r8d,0xffffffff
0x1401ca51f: lea     rdx,[rbp+0x1550]
0x1401ca526: movzx   ecx,WORD PTR [rdi+0x98]
0x1401ca52d: call    0x140abd210
0x1401ca532: lea     rdx,[rbp+0x1550]
0x1401ca539: lea     rcx,[rbp+0xf10]
0x1401ca540: call    0x1400bb340
0x1401ca545: mov     dl,0x20
0x1401ca547: lea     rcx,[rbp+0xf10]
0x1401ca54e: call    0x1400bb360
0x1401ca553: nop     
0x1401ca554: lea     rcx,[rbp+0x1550]
0x1401ca55b: call    0x140069460
0x1401ca560: lea     rdx,[rbp+0x1410]
0x1401ca567: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca56e: call    0x1410e4760
0x1401ca573: lea     rdx,[rbp+0x1410]
0x1401ca57a: lea     rcx,[rbp+0xf10]
0x1401ca581: call    0x1400bb340
0x1401ca586: lea     rcx,[rbp+0xf10]
0x1401ca58d: call    0x1405468a0
0x1401ca592: mov     r8d,r13d
0x1401ca595: mov     edx,0x1
0x1401ca59a: lea     rcx,[rip+0x24a22cf]        # 0x14266c870
0x1401ca5a1: call    0x1400bc750
0x1401ca5a6: lea     rcx,[rbp+0xf10]
0x1401ca5ad: call    0x140070960
0x1401ca5b2: xor     r9d,r9d
0x1401ca5b5: xor     r8d,r8d
0x1401ca5b8: lea     rdx,[rbp+0xf10]
0x1401ca5bf: lea     rcx,[rip+0x24a22aa]        # 0x14266c870
0x1401ca5c6: call    0x140af3400
0x1401ca5cb: xor     r8d,r8d
0x1401ca5ce: mov     edx,0x7
0x1401ca5d3: mov     r9b,0x1
0x1401ca5d6: lea     rcx,[rip+0x24a2293]        # 0x14266c870
0x1401ca5dd: call    0x1400bc760
0x1401ca5e2: mov     r8d,r13d
0x1401ca5e5: mov     edx,ebx
0x1401ca5e7: lea     rcx,[rip+0x24a2282]        # 0x14266c870
0x1401ca5ee: call    0x1400bc750
0x1401ca5f3: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca5fa: cmp     rcx,QWORD PTR [rip+0x21f206f]        # 0x1423bc670
0x1401ca601: jne     0x1401ca63d
0x1401ca603: lea     rdx,[rip+0x14550de]        # 0x14161f6e8 ; literal='Your location'
0x1401ca60a: lea     rcx,[rbp+0x1f30]
0x1401ca611: call    0x140069780
0x1401ca616: nop     
0x1401ca617: xor     r9d,r9d
0x1401ca61a: xor     r8d,r8d
0x1401ca61d: lea     rdx,[rbp+0x1f30]
0x1401ca624: lea     rcx,[rip+0x24a2245]        # 0x14266c870
0x1401ca62b: call    0x140af3400
0x1401ca630: nop     
0x1401ca631: lea     rcx,[rbp+0x1f30]
0x1401ca638: jmp     0x1401cad96
0x1401ca63d: test    r14,r14
0x1401ca640: je      0x1401cad5e
0x1401ca646: add     rcx,0x90
0x1401ca64d: call    0x1400709a0
0x1401ca652: mov     rbx,rax
0x1401ca655: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca65c: add     rcx,0xd8
0x1401ca663: lea     rdx,[rbp+0x58]
0x1401ca667: call    0x140070870
0x1401ca66c: mov     rcx,QWORD PTR [r15+0x1d8]
0x1401ca673: add     rcx,0xd8
0x1401ca67a: lea     rdx,[rbp+0x140]
0x1401ca681: call    0x140070860
0x1401ca686: lea     r8,[rbp+0x140]
0x1401ca68d: lea     rdx,[rbp+0xf]
0x1401ca691: lea     rcx,[rbp+0x58]
0x1401ca695: call    0x140070450
0x1401ca69a: xor     edx,edx
0x1401ca69c: movzx   ecx,BYTE PTR [rax]
0x1401ca69f: call    0x140066de0
0x1401ca6a4: test    al,al
0x1401ca6a6: je      0x1401ca70c
0x1401ca6a8: nop     DWORD PTR [rax+rax*1+0x0]
0x1401ca6b0: lea     rcx,[rbp+0x58]
0x1401ca6b4: call    0x140070440
0x1401ca6b9: mov     rcx,QWORD PTR [rax]
0x1401ca6bc: cmp     DWORD PTR [rcx],0x0
0x1401ca6bf: jle     0x1401ca6e1
0x1401ca6c1: lea     rcx,[rbp+0x58]
0x1401ca6c5: call    0x140070440
0x1401ca6ca: mov     rcx,QWORD PTR [rax]
0x1401ca6cd: cmp     DWORD PTR [rcx+0x18],0xffffffff
0x1401ca6d1: jne     0x1401ca6e1
0x1401ca6d3: lea     rcx,[rbp+0x58]
0x1401ca6d7: call    0x140070440
0x1401ca6dc: mov     rcx,QWORD PTR [rax]
0x1401ca6df: add     ebx,DWORD PTR [rcx]
0x1401ca6e1: lea     rcx,[rbp+0x58]
0x1401ca6e5: call    0x140070430
0x1401ca6ea: lea     r8,[rbp+0x140]
0x1401ca6f1: lea     rdx,[rbp+0xf]
0x1401ca6f5: lea     rcx,[rbp+0x58]
0x1401ca6f9: call    0x140070450
0x1401ca6fe: xor     edx,edx
0x1401ca700: movzx   ecx,BYTE PTR [rax]
0x1401ca703: call    0x140066de0
0x1401ca708: test    al,al
0x1401ca70a: jne     0x1401ca6b0
0x1401ca70c: cmp     ebx,0x30d4
0x1401ca712: jl      0x1401ca751
0x1401ca714: lea     rdx,[rip+0x1454fdd]        # 0x14161f6f8 ; literal='Population: >10000'
0x1401ca71b: lea     rcx,[rbp+0x1f50]
0x1401ca722: call    0x140069780
0x1401ca727: nop     
0x1401ca728: mov     r9d,0x35
0x1401ca72e: xor     r8d,r8d
0x1401ca731: lea     rdx,[rbp+0x1f50]
0x1401ca738: lea     rcx,[rip+0x24a2131]        # 0x14266c870
0x1401ca73f: call    0x140af3400
0x1401ca744: nop     
0x1401ca745: lea     rcx,[rbp+0x1f50]
0x1401ca74c: jmp     0x1401cad96
0x1401ca751: cmp     ebx,0x2134
0x1401ca757: jl      0x1401ca796
0x1401ca759: lea     rdx,[rip+0x1454fb0]        # 0x14161f710 ; literal='Population: ~10000'
0x1401ca760: lea     rcx,[rbp+0x1f70]
0x1401ca767: call    0x140069780
0x1401ca76c: nop     
0x1401ca76d: mov     r9d,0x35
0x1401ca773: xor     r8d,r8d
0x1401ca776: lea     rdx,[rbp+0x1f70]
0x1401ca77d: lea     rcx,[rip+0x24a20ec]        # 0x14266c870
0x1401ca784: call    0x140af3400
0x1401ca789: nop     
0x1401ca78a: lea     rcx,[rbp+0x1f70]
0x1401ca791: jmp     0x1401cad96
0x1401ca796: cmp     ebx,0x1964
0x1401ca79c: jl      0x1401ca7db
0x1401ca79e: lea     rdx,[rip+0x1454f83]        # 0x14161f728 ; literal='Population: ~7500'
0x1401ca7a5: lea     rcx,[rbp+0x1f90]
0x1401ca7ac: call    0x140069780
0x1401ca7b1: nop     
0x1401ca7b2: mov     r9d,0x35
0x1401ca7b8: xor     r8d,r8d
0x1401ca7bb: lea     rdx,[rbp+0x1f90]
0x1401ca7c2: lea     rcx,[rip+0x24a20a7]        # 0x14266c870
0x1401ca7c9: call    0x140af3400
0x1401ca7ce: nop     
0x1401ca7cf: lea     rcx,[rbp+0x1f90]
0x1401ca7d6: jmp     0x1401cad96
0x1401ca7db: cmp     ebx,0x157c
0x1401ca7e1: jl      0x1401ca820
0x1401ca7e3: lea     rdx,[rip+0x1454f56]        # 0x14161f740 ; literal='Population: ~6000'
0x1401ca7ea: lea     rcx,[rbp+0x1fb0]
0x1401ca7f1: call    0x140069780
0x1401ca7f6: nop     
0x1401ca7f7: mov     r9d,0x35
0x1401ca7fd: xor     r8d,r8d
0x1401ca800: lea     rdx,[rbp+0x1fb0]
0x1401ca807: lea     rcx,[rip+0x24a2062]        # 0x14266c870
0x1401ca80e: call    0x140af3400
0x1401ca813: nop     
0x1401ca814: lea     rcx,[rbp+0x1fb0]
0x1401ca81b: jmp     0x1401cad96
0x1401ca820: cmp     ebx,0x1194
0x1401ca826: jl      0x1401ca865
0x1401ca828: lea     rdx,[rip+0x1454f29]        # 0x14161f758 ; literal='Population: ~5000'
0x1401ca82f: lea     rcx,[rbp+0x1fd0]
0x1401ca836: call    0x140069780
0x1401ca83b: nop     
0x1401ca83c: mov     r9d,0x35
0x1401ca842: xor     r8d,r8d
0x1401ca845: lea     rdx,[rbp+0x1fd0]
0x1401ca84c: lea     rcx,[rip+0x24a201d]        # 0x14266c870
0x1401ca853: call    0x140af3400
0x1401ca858: nop     
0x1401ca859: lea     rcx,[rbp+0x1fd0]
0x1401ca860: jmp     0x1401cad96
0x1401ca865: cmp     ebx,0xdac
0x1401ca86b: jl      0x1401ca8aa
0x1401ca86d: lea     rdx,[rip+0x1454efc]        # 0x14161f770 ; literal='Population: ~4000'
0x1401ca874: lea     rcx,[rbp+0x1ff0]
0x1401ca87b: call    0x140069780
0x1401ca880: nop     
0x1401ca881: mov     r9d,0x35
0x1401ca887: xor     r8d,r8d
0x1401ca88a: lea     rdx,[rbp+0x1ff0]
0x1401ca891: lea     rcx,[rip+0x24a1fd8]        # 0x14266c870
0x1401ca898: call    0x140af3400
0x1401ca89d: nop     
0x1401ca89e: lea     rcx,[rbp+0x1ff0]
0x1401ca8a5: jmp     0x1401cad96
0x1401ca8aa: cmp     ebx,0x9c4
0x1401ca8b0: jl      0x1401ca8ef
0x1401ca8b2: lea     rdx,[rip+0x1454ecf]        # 0x14161f788 ; literal='Population: ~3000'
0x1401ca8b9: lea     rcx,[rbp+0x2010]
0x1401ca8c0: call    0x140069780
0x1401ca8c5: nop     
0x1401ca8c6: mov     r9d,0x35
0x1401ca8cc: xor     r8d,r8d
0x1401ca8cf: lea     rdx,[rbp+0x2010]
0x1401ca8d6: lea     rcx,[rip+0x24a1f93]        # 0x14266c870
0x1401ca8dd: call    0x140af3400
0x1401ca8e2: nop     
0x1401ca8e3: lea     rcx,[rbp+0x2010]
0x1401ca8ea: jmp     0x1401cad96
0x1401ca8ef: cmp     ebx,0x5dc
0x1401ca8f5: jl      0x1401ca934
0x1401ca8f7: lea     rdx,[rip+0x1454ea2]        # 0x14161f7a0 ; literal='Population: ~2000'
0x1401ca8fe: lea     rcx,[rbp+0x2030]
0x1401ca905: call    0x140069780
0x1401ca90a: nop     
0x1401ca90b: mov     r9d,0x35
0x1401ca911: xor     r8d,r8d
0x1401ca914: lea     rdx,[rbp+0x2030]
0x1401ca91b: lea     rcx,[rip+0x24a1f4e]        # 0x14266c870
0x1401ca922: call    0x140af3400
0x1401ca927: nop     
0x1401ca928: lea     rcx,[rbp+0x2030]
0x1401ca92f: jmp     0x1401cad96
0x1401ca934: cmp     ebx,0x352
0x1401ca93a: jl      0x1401ca979
0x1401ca93c: lea     rdx,[rip+0x1454e75]        # 0x14161f7b8 ; literal='Population: ~1000'
0x1401ca943: lea     rcx,[rbp+0x2050]
0x1401ca94a: call    0x140069780
0x1401ca94f: nop     
0x1401ca950: mov     r9d,0x35
0x1401ca956: xor     r8d,r8d
0x1401ca959: lea     rdx,[rbp+0x2050]
0x1401ca960: lea     rcx,[rip+0x24a1f09]        # 0x14266c870
0x1401ca967: call    0x140af3400
0x1401ca96c: nop     
0x1401ca96d: lea     rcx,[rbp+0x2050]
0x1401ca974: jmp     0x1401cad96
0x1401ca979: cmp     ebx,0x28a
0x1401ca97f: jl      0x1401ca9be
0x1401ca981: lea     rdx,[rip+0x1454e48]        # 0x14161f7d0 ; literal='Population: ~750'
0x1401ca988: lea     rcx,[rbp+0x2070]
0x1401ca98f: call    0x140069780
0x1401ca994: nop     
0x1401ca995: mov     r9d,0x35
0x1401ca99b: xor     r8d,r8d
0x1401ca99e: lea     rdx,[rbp+0x2070]
0x1401ca9a5: lea     rcx,[rip+0x24a1ec4]        # 0x14266c870
0x1401ca9ac: call    0x140af3400
0x1401ca9b1: nop     
0x1401ca9b2: lea     rcx,[rbp+0x2070]
0x1401ca9b9: jmp     0x1401cad96
0x1401ca9be: cmp     ebx,0x226
0x1401ca9c4: jl      0x1401caa03
0x1401ca9c6: lea     rdx,[rip+0x1454e1b]        # 0x14161f7e8 ; literal='Population: ~600'
0x1401ca9cd: lea     rcx,[rbp+0x2090]
0x1401ca9d4: call    0x140069780
0x1401ca9d9: nop     
0x1401ca9da: mov     r9d,0x35
0x1401ca9e0: xor     r8d,r8d
0x1401ca9e3: lea     rdx,[rbp+0x2090]
0x1401ca9ea: lea     rcx,[rip+0x24a1e7f]        # 0x14266c870
0x1401ca9f1: call    0x140af3400
0x1401ca9f6: nop     
0x1401ca9f7: lea     rcx,[rbp+0x2090]
0x1401ca9fe: jmp     0x1401cad96
0x1401caa03: cmp     ebx,0x1c2
0x1401caa09: jl      0x1401caa48
0x1401caa0b: lea     rdx,[rip+0x1454dee]        # 0x14161f800 ; literal='Population: ~500'
0x1401caa12: lea     rcx,[rbp+0x20b0]
0x1401caa19: call    0x140069780
0x1401caa1e: nop     
0x1401caa1f: mov     r9d,0x35
0x1401caa25: xor     r8d,r8d
0x1401caa28: lea     rdx,[rbp+0x20b0]
0x1401caa2f: lea     rcx,[rip+0x24a1e3a]        # 0x14266c870
0x1401caa36: call    0x140af3400
0x1401caa3b: nop     
0x1401caa3c: lea     rcx,[rbp+0x20b0]
0x1401caa43: jmp     0x1401cad96
0x1401caa48: cmp     ebx,0x15e
0x1401caa4e: jl      0x1401caa8d
0x1401caa50: lea     rdx,[rip+0x1454dc1]        # 0x14161f818 ; literal='Population: ~400'
0x1401caa57: lea     rcx,[rbp+0x20d0]
0x1401caa5e: call    0x140069780
0x1401caa63: nop     
0x1401caa64: mov     r9d,0x35
0x1401caa6a: xor     r8d,r8d
0x1401caa6d: lea     rdx,[rbp+0x20d0]
0x1401caa74: lea     rcx,[rip+0x24a1df5]        # 0x14266c870
0x1401caa7b: call    0x140af3400
0x1401caa80: nop     
0x1401caa81: lea     rcx,[rbp+0x20d0]
0x1401caa88: jmp     0x1401cad96
0x1401caa8d: cmp     ebx,0xfa
0x1401caa93: jl      0x1401caad2
0x1401caa95: lea     rdx,[rip+0x1454d94]        # 0x14161f830 ; literal='Population: ~300'
0x1401caa9c: lea     rcx,[rbp+0x20f0]
0x1401caaa3: call    0x140069780
0x1401caaa8: nop     
0x1401caaa9: mov     r9d,0x35
0x1401caaaf: xor     r8d,r8d
0x1401caab2: lea     rdx,[rbp+0x20f0]
0x1401caab9: lea     rcx,[rip+0x24a1db0]        # 0x14266c870
0x1401caac0: call    0x140af3400
0x1401caac5: nop     
0x1401caac6: lea     rcx,[rbp+0x20f0]
0x1401caacd: jmp     0x1401cad96
0x1401caad2: cmp     ebx,0x96
0x1401caad8: jl      0x1401cab17
0x1401caada: lea     rdx,[rip+0x1454d67]        # 0x14161f848 ; literal='Population: ~200'
0x1401caae1: lea     rcx,[rbp+0x2110]
0x1401caae8: call    0x140069780
0x1401caaed: nop     
0x1401caaee: mov     r9d,0x35
0x1401caaf4: xor     r8d,r8d
0x1401caaf7: lea     rdx,[rbp+0x2110]
0x1401caafe: lea     rcx,[rip+0x24a1d6b]        # 0x14266c870
0x1401cab05: call    0x140af3400
0x1401cab0a: nop     
0x1401cab0b: lea     rcx,[rbp+0x2110]
0x1401cab12: jmp     0x1401cad96
0x1401cab17: cmp     ebx,0x55
0x1401cab1a: jl      0x1401cab59
0x1401cab1c: lea     rdx,[rip+0x1454aad]        # 0x14161f5d0 ; literal='Population: ~100'
0x1401cab23: lea     rcx,[rbp+0x2130]
0x1401cab2a: call    0x140069780
0x1401cab2f: nop     
0x1401cab30: mov     r9d,0x35
0x1401cab36: xor     r8d,r8d
0x1401cab39: lea     rdx,[rbp+0x2130]
0x1401cab40: lea     rcx,[rip+0x24a1d29]        # 0x14266c870
0x1401cab47: call    0x140af3400
0x1401cab4c: nop     
0x1401cab4d: lea     rcx,[rbp+0x2130]
0x1401cab54: jmp     0x1401cad96
0x1401cab59: cmp     ebx,0x41
0x1401cab5c: jl      0x1401cab9b
0x1401cab5e: lea     rdx,[rip+0x1454a83]        # 0x14161f5e8 ; literal='Population: ~75'
0x1401cab65: lea     rcx,[rbp+0x2150]
0x1401cab6c: call    0x140069780
0x1401cab71: nop     
0x1401cab72: mov     r9d,0x35
0x1401cab78: xor     r8d,r8d
0x1401cab7b: lea     rdx,[rbp+0x2150]
0x1401cab82: lea     rcx,[rip+0x24a1ce7]        # 0x14266c870
0x1401cab89: call    0x140af3400
0x1401cab8e: nop     
0x1401cab8f: lea     rcx,[rbp+0x2150]
0x1401cab96: jmp     0x1401cad96
0x1401cab9b: cmp     ebx,0x37
0x1401cab9e: jl      0x1401cabdd
0x1401caba0: lea     rdx,[rip+0x1454a51]        # 0x14161f5f8 ; literal='Population: ~60'
0x1401caba7: lea     rcx,[rbp+0x2170]
0x1401cabae: call    0x140069780
0x1401cabb3: nop     
0x1401cabb4: mov     r9d,0x35
0x1401cabba: xor     r8d,r8d
0x1401cabbd: lea     rdx,[rbp+0x2170]
0x1401cabc4: lea     rcx,[rip+0x24a1ca5]        # 0x14266c870
0x1401cabcb: call    0x140af3400
0x1401cabd0: nop     
0x1401cabd1: lea     rcx,[rbp+0x2170]
0x1401cabd8: jmp     0x1401cad96
0x1401cabdd: cmp     ebx,0x2d
0x1401cabe0: jl      0x1401cac1f
0x1401cabe2: lea     rdx,[rip+0x1454a1f]        # 0x14161f608 ; literal='Population: ~50'
0x1401cabe9: lea     rcx,[rbp+0x2190]
0x1401cabf0: call    0x140069780
0x1401cabf5: nop     
0x1401cabf6: mov     r9d,0x35
0x1401cabfc: xor     r8d,r8d
0x1401cabff: lea     rdx,[rbp+0x2190]
0x1401cac06: lea     rcx,[rip+0x24a1c63]        # 0x14266c870
0x1401cac0d: call    0x140af3400
0x1401cac12: nop     
0x1401cac13: lea     rcx,[rbp+0x2190]
0x1401cac1a: jmp     0x1401cad96
0x1401cac1f: cmp     ebx,0x23
0x1401cac22: jl      0x1401cac61
0x1401cac24: lea     rdx,[rip+0x14549ed]        # 0x14161f618 ; literal='Population: ~40'
0x1401cac2b: lea     rcx,[rbp+0x21b0]
0x1401cac32: call    0x140069780
0x1401cac37: nop     
0x1401cac38: mov     r9d,0x35
0x1401cac3e: xor     r8d,r8d
0x1401cac41: lea     rdx,[rbp+0x21b0]
0x1401cac48: lea     rcx,[rip+0x24a1c21]        # 0x14266c870
0x1401cac4f: call    0x140af3400
0x1401cac54: nop     
0x1401cac55: lea     rcx,[rbp+0x21b0]
0x1401cac5c: jmp     0x1401cad96
0x1401cac61: cmp     ebx,0x19
0x1401cac64: jl      0x1401caca3
0x1401cac66: lea     rdx,[rip+0x14549bb]        # 0x14161f628 ; literal='Population: ~30'
0x1401cac6d: lea     rcx,[rbp+0x21d0]
0x1401cac74: call    0x140069780
0x1401cac79: nop     
0x1401cac7a: mov     r9d,0x35
0x1401cac80: xor     r8d,r8d
0x1401cac83: lea     rdx,[rbp+0x21d0]
0x1401cac8a: lea     rcx,[rip+0x24a1bdf]        # 0x14266c870
0x1401cac91: call    0x140af3400
0x1401cac96: nop     
0x1401cac97: lea     rcx,[rbp+0x21d0]
0x1401cac9e: jmp     0x1401cad96
0x1401caca3: cmp     ebx,0xf
0x1401caca6: jl      0x1401cace5
0x1401caca8: lea     rdx,[rip+0x1454989]        # 0x14161f638 ; literal='Population: ~20'
0x1401cacaf: lea     rcx,[rbp+0x21f0]
0x1401cacb6: call    0x140069780
0x1401cacbb: nop     
0x1401cacbc: mov     r9d,0x35
0x1401cacc2: xor     r8d,r8d
0x1401cacc5: lea     rdx,[rbp+0x21f0]
0x1401caccc: lea     rcx,[rip+0x24a1b9d]        # 0x14266c870
0x1401cacd3: call    0x140af3400
0x1401cacd8: nop     
0x1401cacd9: lea     rcx,[rbp+0x21f0]
0x1401cace0: jmp     0x1401cad96
0x1401cace5: cmp     ebx,0x7
0x1401cace8: jl      0x1401cad24
0x1401cacea: lea     rdx,[rip+0x1454957]        # 0x14161f648 ; literal='Population: ~10'
0x1401cacf1: lea     rcx,[rbp+0x2210]
0x1401cacf8: call    0x140069780
0x1401cacfd: nop     
0x1401cacfe: mov     r9d,0x35
0x1401cad04: xor     r8d,r8d
0x1401cad07: lea     rdx,[rbp+0x2210]
0x1401cad0e: lea     rcx,[rip+0x24a1b5b]        # 0x14266c870
0x1401cad15: call    0x140af3400
0x1401cad1a: nop     
0x1401cad1b: lea     rcx,[rbp+0x2210]
0x1401cad22: jmp     0x1401cad96
0x1401cad24: lea     rdx,[rip+0x145492d]        # 0x14161f658 ; literal='Population: <10'
0x1401cad2b: lea     rcx,[rbp+0x2230]
0x1401cad32: call    0x140069780
0x1401cad37: nop     
0x1401cad38: mov     r9d,0x35
0x1401cad3e: xor     r8d,r8d
0x1401cad41: lea     rdx,[rbp+0x2230]
0x1401cad48: lea     rcx,[rip+0x24a1b21]        # 0x14266c870
0x1401cad4f: call    0x140af3400
0x1401cad54: nop     
0x1401cad55: lea     rcx,[rbp+0x2230]
0x1401cad5c: jmp     0x1401cad96
0x1401cad5e: lea     rdx,[rip+0x1454903]        # 0x14161f668 ; literal='No civilized population'
0x1401cad65: lea     rcx,[rbp+0x2250]
0x1401cad6c: call    0x140069780
0x1401cad71: nop     
0x1401cad72: mov     r9d,0x35
0x1401cad78: xor     r8d,r8d
0x1401cad7b: lea     rdx,[rbp+0x2250]
0x1401cad82: lea     rcx,[rip+0x24a1ae7]        # 0x14266c870
0x1401cad89: call    0x140af3400
0x1401cad8e: nop     
0x1401cad8f: lea     rcx,[rbp+0x2250]
0x1401cad96: call    0x140069460
0x1401cad9b: xor     r8d,r8d
0x1401cad9e: mov     edx,0x7
0x1401cada3: mov     r9b,0x1
0x1401cada6: lea     rcx,[rip+0x24a1ac3]        # 0x14266c870
0x1401cadad: call    0x1400bc760
0x1401cadb2: mov     r8d,r13d
0x1401cadb5: mov     edx,0x3
0x1401cadba: lea     rcx,[rip+0x24a1aaf]        # 0x14266c870
0x1401cadc1: call    0x1400bc750
0x1401cadc6: mov     edx,DWORD PTR [rip+0x21ead2c]        # 0x1423b5af8
0x1401cadcc: lea     rcx,[rip+0x2228ea5]        # 0x1423f3c78
0x1401cadd3: call    0x14007f120
0x1401cadd8: mov     rbx,rax
0x1401caddb: mov     edx,DWORD PTR [rip+0x21ead0f]        # 0x1423b5af0
0x1401cade1: lea     rcx,[rip+0x2228e90]        # 0x1423f3c78
0x1401cade8: call    0x14007f120
0x1401caded: test    rax,rax
0x1401cadf0: je      0x1401cb1c7
0x1401cadf6: test    rbx,rbx
0x1401cadf9: je      0x1401cb1c7
0x1401cadff: test    rdi,rdi
0x1401cae02: je      0x1401cb1c7
0x1401cae08: test    r14,r14
0x1401cae0b: je      0x1401cb1c7
0x1401cae11: cmp     rax,rdi
0x1401cae14: je      0x1401cb1c7
0x1401cae1a: lea     rcx,[rax+0x1028]
0x1401cae21: mov     edx,DWORD PTR [rdi+0x4]
0x1401cae24: call    0x140101120
0x1401cae29: mov     rdi,rax
0x1401cae2c: lea     rcx,[rbx+0x1028]
0x1401cae33: mov     edx,DWORD PTR [r14+0x4]
0x1401cae37: call    0x140101120
0x1401cae3c: mov     rbx,rax
0x1401cae3f: test    rax,rax
0x1401cae42: je      0x1401cb007
0x1401cae48: movzx   eax,WORD PTR [rax+0x4]
0x1401cae4c: cmp     ax,0x3
0x1401cae50: je      0x1401cae93
0x1401cae52: cmp     ax,0x4
0x1401cae56: jne     0x1401cb007
0x1401cae5c: lea     rdx,[rip+0x1454855]        # 0x14161f6b8 ; literal='They accept '
0x1401cae63: lea     rcx,[rbp+0x2270]
0x1401cae6a: call    0x140069780
0x1401cae6f: nop     
0x1401cae70: xor     r9d,r9d
0x1401cae73: mov     r8b,0x3
0x1401cae76: lea     rdx,[rbp+0x2270]
0x1401cae7d: lea     rcx,[rip+0x24a19ec]        # 0x14266c870
0x1401cae84: call    0x140af3400
0x1401cae89: nop     
0x1401cae8a: lea     rcx,[rbp+0x2270]
0x1401cae91: jmp     0x1401caec8
0x1401cae93: lea     rdx,[rip+0x145480e]        # 0x14161f6a8 ; literal='They offer '
0x1401cae9a: lea     rcx,[rbp+0x2290]
0x1401caea1: call    0x140069780
0x1401caea6: nop     
0x1401caea7: xor     r9d,r9d
0x1401caeaa: mov     r8b,0x3
0x1401caead: lea     rdx,[rbp+0x2290]
0x1401caeb4: lea     rcx,[rip+0x24a19b5]        # 0x14266c870
0x1401caebb: call    0x140af3400
0x1401caec0: nop     
0x1401caec1: lea     rcx,[rbp+0x2290]
0x1401caec8: call    0x140069460
0x1401caecd: mov     ecx,DWORD PTR [rbx+0x44]
0x1401caed0: test    ecx,ecx
0x1401caed2: je      0x1401caf93
0x1401caed8: sub     ecx,0x1
0x1401caedb: je      0x1401caf5c
0x1401caedd: sub     ecx,0x1
0x1401caee0: je      0x1401caf25
0x1401caee2: cmp     ecx,0x1
0x1401caee5: jne     0x1401cafcd
0x1401caeeb: lea     rdx,[rip+0x144e0b6]        # 0x141618fa8 ; literal='Winter'
0x1401caef2: lea     rcx,[rbp+0x22b0]
0x1401caef9: call    0x140069780
0x1401caefe: nop     
0x1401caeff: xor     r9d,r9d
0x1401caf02: mov     r8b,0x3
0x1401caf05: lea     rdx,[rbp+0x22b0]
0x1401caf0c: lea     rcx,[rip+0x24a195d]        # 0x14266c870
0x1401caf13: call    0x140af3400
0x1401caf18: nop     
0x1401caf19: lea     rcx,[rbp+0x22b0]
0x1401caf20: jmp     0x1401cafc8
0x1401caf25: lea     rdx,[rip+0x144deb0]        # 0x141618ddc ; literal='Autumn'
0x1401caf2c: lea     rcx,[rbp+0x22d0]
0x1401caf33: call    0x140069780
0x1401caf38: nop     
0x1401caf39: xor     r9d,r9d
0x1401caf3c: mov     r8b,0x3
0x1401caf3f: lea     rdx,[rbp+0x22d0]
0x1401caf46: lea     rcx,[rip+0x24a1923]        # 0x14266c870
0x1401caf4d: call    0x140af3400
0x1401caf52: nop     
0x1401caf53: lea     rcx,[rbp+0x22d0]
0x1401caf5a: jmp     0x1401cafc8
0x1401caf5c: lea     rdx,[rip+0x144de71]        # 0x141618dd4 ; literal='Summer'
0x1401caf63: lea     rcx,[rbp+0x22f0]
0x1401caf6a: call    0x140069780
0x1401caf6f: nop     
0x1401caf70: xor     r9d,r9d
0x1401caf73: mov     r8b,0x3
0x1401caf76: lea     rdx,[rbp+0x22f0]
0x1401caf7d: lea     rcx,[rip+0x24a18ec]        # 0x14266c870
0x1401caf84: call    0x140af3400
0x1401caf89: nop     
0x1401caf8a: lea     rcx,[rbp+0x22f0]
0x1401caf91: jmp     0x1401cafc8
0x1401caf93: lea     rdx,[rip+0x144de32]        # 0x141618dcc ; literal='Spring'
0x1401caf9a: lea     rcx,[rbp+0x2310]
0x1401cafa1: call    0x140069780
0x1401cafa6: nop     
0x1401cafa7: xor     r9d,r9d
0x1401cafaa: mov     r8b,0x3
0x1401cafad: lea     rdx,[rbp+0x2310]
0x1401cafb4: lea     rcx,[rip+0x24a18b5]        # 0x14266c870
0x1401cafbb: call    0x140af3400
0x1401cafc0: nop     
0x1401cafc1: lea     rcx,[rbp+0x2310]
0x1401cafc8: call    0x140069460
0x1401cafcd: lea     rdx,[rip+0x14546f4]        # 0x14161f6c8 ; literal=' tribute'
0x1401cafd4: lea     rcx,[rbp+0x2330]
0x1401cafdb: call    0x140069780
0x1401cafe0: nop     
0x1401cafe1: xor     r9d,r9d
0x1401cafe4: xor     r8d,r8d
0x1401cafe7: lea     rdx,[rbp+0x2330]
0x1401cafee: lea     rcx,[rip+0x24a187b]        # 0x14266c870
0x1401caff5: call    0x140af3400
0x1401caffa: nop     
0x1401caffb: lea     rcx,[rbp+0x2330]
0x1401cb002: jmp     0x1401cb1c2
0x1401cb007: test    rdi,rdi
0x1401cb00a: je      0x1401cb18d
0x1401cb010: movsx   rax,WORD PTR [rdi+0x4]
0x1401cb015: cmp     eax,0x5
0x1401cb018: ja      0x1401cb1c7
0x1401cb01e: lea     rdx,[rip+0xffffffffffe34fdb]        # 0x140000000
0x1401cb025: mov     ecx,DWORD PTR [rdx+rax*4+0x1d65e4]
0x1401cb02c: add     rcx,rdx
0x1401cb02f: jmp     rcx
0x1401cb031: test    BYTE PTR [rdi+0x40],0x4
0x1401cb035: je      0x1401cb071
0x1401cb037: lea     rdx,[rip+0x145469a]        # 0x14161f6d8 ; literal='Alliance'
0x1401cb03e: lea     rcx,[rbp+0x2350]
0x1401cb045: call    0x140069780
0x1401cb04a: nop     
0x1401cb04b: xor     r9d,r9d
0x1401cb04e: xor     r8d,r8d
0x1401cb051: lea     rdx,[rbp+0x2350]
0x1401cb058: lea     rcx,[rip+0x24a1811]        # 0x14266c870
0x1401cb05f: call    0x140af3400
0x1401cb064: nop     
0x1401cb065: lea     rcx,[rbp+0x2350]
0x1401cb06c: jmp     0x1401cb1c2
0x1401cb071: lea     rdx,[rip+0x1438c04]        # 0x141603c7c ; literal='Peace'
0x1401cb078: lea     rcx,[rbp+0x2370]
0x1401cb07f: call    0x140069780
0x1401cb084: nop     
0x1401cb085: xor     r9d,r9d
0x1401cb088: xor     r8d,r8d
0x1401cb08b: lea     rdx,[rbp+0x2370]
0x1401cb092: lea     rcx,[rip+0x24a17d7]        # 0x14266c870
0x1401cb099: call    0x140af3400
0x1401cb09e: nop     
0x1401cb09f: lea     rcx,[rbp+0x2370]
0x1401cb0a6: jmp     0x1401cb1c2
0x1401cb0ab: lea     rdx,[rip+0x1454916]        # 0x14161f9c8 ; literal='War'
0x1401cb0b2: lea     rcx,[rbp+0x2390]
0x1401cb0b9: call    0x140069780
0x1401cb0be: nop     
0x1401cb0bf: xor     r9d,r9d
0x1401cb0c2: xor     r8d,r8d
0x1401cb0c5: lea     rdx,[rbp+0x2390]
0x1401cb0cc: lea     rcx,[rip+0x24a179d]        # 0x14266c870
0x1401cb0d3: call    0x140af3400
0x1401cb0d8: nop     
0x1401cb0d9: lea     rcx,[rbp+0x2390]
0x1401cb0e0: jmp     0x1401cb1c2
0x1401cb0e5: lea     rdx,[rip+0x14548f4]        # 0x14161f9e0 ; literal='They offer tribute'
0x1401cb0ec: lea     rcx,[rbp+0x23b0]
0x1401cb0f3: call    0x140069780
0x1401cb0f8: nop     
0x1401cb0f9: xor     r9d,r9d
0x1401cb0fc: xor     r8d,r8d
0x1401cb0ff: lea     rdx,[rbp+0x23b0]
0x1401cb106: lea     rcx,[rip+0x24a1763]        # 0x14266c870
0x1401cb10d: call    0x140af3400
0x1401cb112: nop     
0x1401cb113: lea     rcx,[rbp+0x23b0]
0x1401cb11a: jmp     0x1401cb1c2
0x1401cb11f: lea     rdx,[rip+0x14548d2]        # 0x14161f9f8 ; literal='They accept tribute'
0x1401cb126: lea     rcx,[rbp+0x23d0]
0x1401cb12d: call    0x140069780
0x1401cb132: nop     
0x1401cb133: xor     r9d,r9d
0x1401cb136: xor     r8d,r8d
0x1401cb139: lea     rdx,[rbp+0x23d0]
0x1401cb140: lea     rcx,[rip+0x24a1729]        # 0x14266c870
0x1401cb147: call    0x140af3400
0x1401cb14c: nop     
0x1401cb14d: lea     rcx,[rbp+0x23d0]
0x1401cb154: jmp     0x1401cb1c2
0x1401cb156: lea     rdx,[rip+0x14548b3]        # 0x14161fa10 ; literal='Skirmishing'
0x1401cb15d: lea     rcx,[rbp+0x23f0]
0x1401cb164: call    0x140069780
0x1401cb169: nop     
0x1401cb16a: xor     r9d,r9d
0x1401cb16d: xor     r8d,r8d
0x1401cb170: lea     rdx,[rbp+0x23f0]
0x1401cb177: lea     rcx,[rip+0x24a16f2]        # 0x14266c870
0x1401cb17e: call    0x140af3400
0x1401cb183: nop     
0x1401cb184: lea     rcx,[rbp+0x23f0]
0x1401cb18b: jmp     0x1401cb1c2
0x1401cb18d: lea     rdx,[rip+0x145483c]        # 0x14161f9d0 ; literal='No contact'
0x1401cb194: lea     rcx,[rbp+0x2410]
0x1401cb19b: call    0x140069780
0x1401cb1a0: nop     
0x1401cb1a1: xor     r9d,r9d
0x1401cb1a4: xor     r8d,r8d
0x1401cb1a7: lea     rdx,[rbp+0x2410]
0x1401cb1ae: lea     rcx,[rip+0x24a16bb]        # 0x14266c870
0x1401cb1b5: call    0x140af3400
0x1401cb1ba: nop     
0x1401cb1bb: lea     rcx,[rbp+0x2410]
0x1401cb1c2: call    0x140069460
0x1401cb1c7: movsxd  rax,DWORD PTR [rsp+0x70]
0x1401cb1cc: mov     r15d,eax
0x1401cb1cf: cmp     eax,r12d
0x1401cb1d2: jg      0x1401cb24d
0x1401cb1d4: mov     r13,rax
0x1401cb1d7: movsxd  rax,r12d
0x1401cb1da: mov     r14,r13
0x1401cb1dd: lea     r12,[rip+0x24a3184]        # 0x14266e368
0x1401cb1e4: mov     rsi,rax
0x1401cb1e7: nop     WORD PTR [rax+rax*1+0x0]
0x1401cb1f0: mov     edi,0x1
0x1401cb1f5: lea     rbx,[rip+0x24a3160]        # 0x14266e35c
0x1401cb1fc: nop     DWORD PTR [rax+0x0]
0x1401cb200: mov     r8d,r15d
0x1401cb203: mov     edx,edi
0x1401cb205: lea     rcx,[rip+0x24a1664]        # 0x14266c870
0x1401cb20c: call    0x1400bc750
0x1401cb211: cmp     r14,r13
0x1401cb214: jne     0x1401cb21b
0x1401cb216: mov     edx,DWORD PTR [rbx-0x18]
0x1401cb219: jmp     0x1401cb227
0x1401cb21b: cmp     r14,rsi
0x1401cb21e: jne     0x1401cb224
0x1401cb220: mov     edx,DWORD PTR [rbx]
0x1401cb222: jmp     0x1401cb227
0x1401cb224: mov     edx,DWORD PTR [rbx-0xc]
0x1401cb227: lea     rcx,[rip+0x24a1642]        # 0x14266c870
0x1401cb22e: call    0x140af4570
0x1401cb233: inc     edi
0x1401cb235: add     rbx,0x4
0x1401cb239: cmp     rbx,r12
0x1401cb23c: jl      0x1401cb200
0x1401cb23e: inc     r15d
0x1401cb241: inc     r14
0x1401cb244: cmp     r15d,DWORD PTR [rbp-0x58]
0x1401cb248: jle     0x1401cb1f0
0x1401cb24a: mov     esi,DWORD PTR [rbp-0x20]
0x1401cb24d: xor     r8d,r8d
0x1401cb250: mov     edx,0x7
0x1401cb255: mov     r9b,0x1
0x1401cb258: lea     rcx,[rip+0x24a1611]        # 0x14266c870
0x1401cb25f: call    0x1400bc760
0x1401cb264: mov     r8d,DWORD PTR [rsp+0x70]
0x1401cb269: add     r8d,0x2
0x1401cb26d: mov     edx,0x2
0x1401cb272: lea     rcx,[rip+0x24a15f7]        # 0x14266c870
0x1401cb279: call    0x1400bc750
0x1401cb27e: lea     rdx,[rip+0x144f1c7]        # 0x14161a44c ; literal='Cancel'
0x1401cb285: lea     rcx,[rbp+0x2430]
0x1401cb28c: call    0x140069780
0x1401cb291: nop     
0x1401cb292: xor     r9d,r9d
0x1401cb295: xor     r8d,r8d
0x1401cb298: lea     rdx,[rbp+0x2430]
0x1401cb29f: lea     rcx,[rip+0x24a15ca]        # 0x14266c870
0x1401cb2a6: call    0x140af3400
0x1401cb2ab: nop     
0x1401cb2ac: lea     rcx,[rbp+0x2430]
0x1401cb2b3: call    0x140069460
0x1401cb2b8: add     esi,0x2
0x1401cb2bb: mov     edi,DWORD PTR [rsp+0x74]
0x1401cb2bf: add     edi,0xfffffffe
0x1401cb2c2: mov     r15d,0x7
0x1401cb2c8: mov     r14,QWORD PTR [rsp+0x78]
0x1401cb2cd: add     r14,0x2e4
0x1401cb2d4: xor     ebx,ebx
0x1401cb2d6: cmp     DWORD PTR [r14],0x1
0x1401cb2da: je      0x1401cb957
0x1401cb2e0: mov     ebx,esi
0x1401cb2e2: cmp     esi,edi
0x1401cb2e4: jg      0x1401cb431
0x1401cb2ea: nop     WORD PTR [rax+rax*1+0x0]
0x1401cb2f0: mov     r8d,ebx
0x1401cb2f3: lea     edx,[r15-0x2]
0x1401cb2f7: lea     rcx,[rip+0x24a1572]        # 0x14266c870
0x1401cb2fe: call    0x1400bc750
0x1401cb303: cmp     DWORD PTR [r14],0x0
0x1401cb307: je      0x1401cb330
0x1401cb309: cmp     ebx,esi
0x1401cb30b: jne     0x1401cb315
0x1401cb30d: mov     edx,DWORD PTR [rip+0x24a3031]        # 0x14266e344
0x1401cb313: jmp     0x1401cb34c
0x1401cb315: lea     rcx,[rip+0x24a1554]        # 0x14266c870
0x1401cb31c: cmp     ebx,edi
0x1401cb31e: jne     0x1401cb328
0x1401cb320: mov     edx,DWORD PTR [rip+0x24a3036]        # 0x14266e35c
0x1401cb326: jmp     0x1401cb353
0x1401cb328: mov     edx,DWORD PTR [rip+0x24a3022]        # 0x14266e350
0x1401cb32e: jmp     0x1401cb353
0x1401cb330: cmp     ebx,esi
0x1401cb332: jne     0x1401cb33c
0x1401cb334: mov     edx,DWORD PTR [rip+0x24a2fc2]        # 0x14266e2fc
0x1401cb33a: jmp     0x1401cb34c
0x1401cb33c: cmp     ebx,edi
0x1401cb33e: mov     edx,DWORD PTR [rip+0x24a2fd0]        # 0x14266e314
0x1401cb344: je      0x1401cb34c
0x1401cb346: mov     edx,DWORD PTR [rip+0x24a2fbc]        # 0x14266e308
0x1401cb34c: lea     rcx,[rip+0x24a151d]        # 0x14266c870
0x1401cb353: call    0x140af4570
0x1401cb358: mov     r8d,ebx
0x1401cb35b: lea     edx,[r15-0x1]
0x1401cb35f: lea     rcx,[rip+0x24a150a]        # 0x14266c870
0x1401cb366: call    0x1400bc750
0x1401cb36b: cmp     DWORD PTR [r14],0x0
0x1401cb36f: je      0x1401cb398
0x1401cb371: cmp     ebx,esi
0x1401cb373: jne     0x1401cb37d
0x1401cb375: mov     edx,DWORD PTR [rip+0x24a2fcd]        # 0x14266e348
0x1401cb37b: jmp     0x1401cb3b4
0x1401cb37d: lea     rcx,[rip+0x24a14ec]        # 0x14266c870
0x1401cb384: cmp     ebx,edi
0x1401cb386: jne     0x1401cb390
0x1401cb388: mov     edx,DWORD PTR [rip+0x24a2fd2]        # 0x14266e360
0x1401cb38e: jmp     0x1401cb3bb
0x1401cb390: mov     edx,DWORD PTR [rip+0x24a2fbe]        # 0x14266e354
0x1401cb396: jmp     0x1401cb3bb
0x1401cb398: cmp     ebx,esi
0x1401cb39a: jne     0x1401cb3a4
0x1401cb39c: mov     edx,DWORD PTR [rip+0x24a2f5e]        # 0x14266e300
0x1401cb3a2: jmp     0x1401cb3b4
0x1401cb3a4: cmp     ebx,edi
0x1401cb3a6: mov     edx,DWORD PTR [rip+0x24a2f6c]        # 0x14266e318
0x1401cb3ac: je      0x1401cb3b4
0x1401cb3ae: mov     edx,DWORD PTR [rip+0x24a2f58]        # 0x14266e30c
0x1401cb3b4: lea     rcx,[rip+0x24a14b5]        # 0x14266c870
0x1401cb3bb: call    0x140af4570
0x1401cb3c0: mov     r8d,ebx
0x1401cb3c3: mov     edx,r15d
0x1401cb3c6: lea     rcx,[rip+0x24a14a3]        # 0x14266c870
0x1401cb3cd: call    0x1400bc750
0x1401cb3d2: cmp     DWORD PTR [r14],0x0
0x1401cb3d6: je      0x1401cb3ff
0x1401cb3d8: cmp     ebx,esi
0x1401cb3da: jne     0x1401cb3e4
0x1401cb3dc: mov     edx,DWORD PTR [rip+0x24a2f6a]        # 0x14266e34c
0x1401cb3e2: jmp     0x1401cb41b
0x1401cb3e4: lea     rcx,[rip+0x24a1485]        # 0x14266c870
0x1401cb3eb: cmp     ebx,edi
0x1401cb3ed: jne     0x1401cb3f7
0x1401cb3ef: mov     edx,DWORD PTR [rip+0x24a2f6f]        # 0x14266e364
0x1401cb3f5: jmp     0x1401cb422
0x1401cb3f7: mov     edx,DWORD PTR [rip+0x24a2f5b]        # 0x14266e358
0x1401cb3fd: jmp     0x1401cb422
0x1401cb3ff: cmp     ebx,esi
0x1401cb401: jne     0x1401cb40b
0x1401cb403: mov     edx,DWORD PTR [rip+0x24a2efb]        # 0x14266e304
0x1401cb409: jmp     0x1401cb41b
0x1401cb40b: cmp     ebx,edi
0x1401cb40d: mov     edx,DWORD PTR [rip+0x24a2f09]        # 0x14266e31c
0x1401cb413: je      0x1401cb41b
0x1401cb415: mov     edx,DWORD PTR [rip+0x24a2ef5]        # 0x14266e310
0x1401cb41b: lea     rcx,[rip+0x24a144e]        # 0x14266c870
0x1401cb422: call    0x140af4570
0x1401cb427: inc     ebx
0x1401cb429: cmp     ebx,edi
0x1401cb42b: jle     0x1401cb2f0
0x1401cb431: xor     r8d,r8d
0x1401cb434: lea     rcx,[rip+0x24a1435]        # 0x14266c870
0x1401cb43b: cmp     DWORD PTR [r14],r8d
0x1401cb43e: je      0x1401cb447
0x1401cb440: xor     edx,edx
0x1401cb442: xor     r9d,r9d
0x1401cb445: jmp     0x1401cb44f
0x1401cb447: mov     edx,0x7
0x1401cb44c: mov     r9b,0x1
0x1401cb44f: call    0x1400bc760
0x1401cb454: lea     r8d,[rsi+0x2]
0x1401cb458: lea     edx,[r15-0x1]
0x1401cb45c: lea     rcx,[rip+0x24a140d]        # 0x14266c870
0x1401cb463: call    0x1400bc750
0x1401cb468: mov     rbx,QWORD PTR [rbp-0x78]
0x1401cb46c: cmp     ebx,0x2
0x1401cb46f: je      0x1401cb4ed
0x1401cb471: cmp     ebx,0x13
0x1401cb474: je      0x1401cb4b6
0x1401cb476: cmp     ebx,0x19
0x1401cb479: jne     0x1401cb527
0x1401cb47f: lea     rdx,[rip+0x1453dfa]        # 0x14161f280 ; literal='Diplomacy'
0x1401cb486: lea     rcx,[rbp+0x2450]
0x1401cb48d: call    0x140069780
0x1401cb492: nop     
0x1401cb493: xor     r9d,r9d
0x1401cb496: xor     r8d,r8d
0x1401cb499: lea     rdx,[rbp+0x2450]
0x1401cb4a0: lea     rcx,[rip+0x24a13c9]        # 0x14266c870
0x1401cb4a7: call    0x140af3400
0x1401cb4ac: nop     
0x1401cb4ad: lea     rcx,[rbp+0x2450]
0x1401cb4b4: jmp     0x1401cb522
0x1401cb4b6: lea     rdx,[rip+0x1454793]        # 0x14161fc50 ; literal='Request workers'
0x1401cb4bd: lea     rcx,[rbp+0x2470]
0x1401cb4c4: call    0x140069780
0x1401cb4c9: nop     
0x1401cb4ca: xor     r9d,r9d
0x1401cb4cd: xor     r8d,r8d
0x1401cb4d0: lea     rdx,[rbp+0x2470]
0x1401cb4d7: lea     rcx,[rip+0x24a1392]        # 0x14266c870
0x1401cb4de: call    0x140af3400
0x1401cb4e3: nop     
0x1401cb4e4: lea     rcx,[rbp+0x2470]
0x1401cb4eb: jmp     0x1401cb522
0x1401cb4ed: lea     rdx,[rip+0x145476c]        # 0x14161fc60 ; literal='Attack'
0x1401cb4f4: lea     rcx,[rbp+0x2490]
0x1401cb4fb: call    0x140069780
0x1401cb500: nop     
0x1401cb501: xor     r9d,r9d
0x1401cb504: xor     r8d,r8d
0x1401cb507: lea     rdx,[rbp+0x2490]
0x1401cb50e: lea     rcx,[rip+0x24a135b]        # 0x14266c870
0x1401cb515: call    0x140af3400
0x1401cb51a: nop     
0x1401cb51b: lea     rcx,[rbp+0x2490]
0x1401cb522: call    0x140069460
0x1401cb527: cmp     DWORD PTR [r14],0x0
0x1401cb52b: je      0x1401cb953
0x1401cb531: xor     r8d,r8d
0x1401cb534: mov     edx,0x6
0x1401cb539: mov     r9b,0x1
0x1401cb53c: lea     rcx,[rip+0x24a132d]        # 0x14266c870
0x1401cb543: call    0x1400bc760
0x1401cb548: lea     r8d,[rsi+0x3]
0x1401cb54c: mov     edx,r15d
0x1401cb54f: lea     rcx,[rip+0x24a131a]        # 0x14266c870
0x1401cb556: call    0x1400bc750
0x1401cb55b: mov     eax,DWORD PTR [r14]
0x1401cb55e: add     eax,0xfffffffd
0x1401cb561: cmp     eax,0x11
0x1401cb564: ja      0x1401cb953
0x1401cb56a: cdqe    
0x1401cb56c: lea     rdx,[rip+0xffffffffffe34a8d]        # 0x140000000
0x1401cb573: mov     ecx,DWORD PTR [rdx+rax*4+0x1d65fc]
0x1401cb57a: add     rcx,rdx
0x1401cb57d: jmp     rcx
0x1401cb57f: lea     rdx,[rip+0x14546e2]        # 0x14161fc68 ; literal='Belongs to your civilization'
0x1401cb586: lea     rcx,[rbp+0x24b0]
0x1401cb58d: call    0x140069780
0x1401cb592: nop     
0x1401cb593: xor     r9d,r9d
0x1401cb596: xor     r8d,r8d
0x1401cb599: lea     rdx,[rbp+0x24b0]
0x1401cb5a0: lea     rcx,[rip+0x24a12c9]        # 0x14266c870
0x1401cb5a7: call    0x140af3400
0x1401cb5ac: nop     
0x1401cb5ad: lea     rcx,[rbp+0x24b0]
0x1401cb5b4: jmp     0x1401cb94e
0x1401cb5b9: lea     rdx,[rip+0x14546c8]        # 0x14161fc88 ; literal='Not under your control'
0x1401cb5c0: lea     rcx,[rbp+0x24d0]
0x1401cb5c7: call    0x140069780
0x1401cb5cc: nop     
0x1401cb5cd: xor     r9d,r9d
0x1401cb5d0: xor     r8d,r8d
0x1401cb5d3: lea     rdx,[rbp+0x24d0]
0x1401cb5da: lea     rcx,[rip+0x24a128f]        # 0x14266c870
0x1401cb5e1: call    0x140af3400
0x1401cb5e6: nop     
0x1401cb5e7: lea     rcx,[rbp+0x24d0]
0x1401cb5ee: jmp     0x1401cb94e
0x1401cb5f3: lea     rdx,[rip+0x14546a6]        # 0x14161fca0 ; literal='No civilized inhabitants'
0x1401cb5fa: lea     rcx,[rbp+0x24f0]
0x1401cb601: call    0x140069780
0x1401cb606: nop     
0x1401cb607: xor     r9d,r9d
0x1401cb60a: xor     r8d,r8d
0x1401cb60d: lea     rdx,[rbp+0x24f0]
0x1401cb614: lea     rcx,[rip+0x24a1255]        # 0x14266c870
0x1401cb61b: call    0x140af3400
0x1401cb620: nop     
0x1401cb621: lea     rcx,[rbp+0x24f0]
0x1401cb628: jmp     0x1401cb94e
0x1401cb62d: lea     rdx,[rip+0x145468c]        # 0x14161fcc0 ; literal='No requestable workers'
0x1401cb634: lea     rcx,[rbp+0x2510]
0x1401cb63b: call    0x140069780
0x1401cb640: nop     
0x1401cb641: xor     r9d,r9d
0x1401cb644: xor     r8d,r8d
0x1401cb647: lea     rdx,[rbp+0x2510]
0x1401cb64e: lea     rcx,[rip+0x24a121b]        # 0x14266c870
0x1401cb655: call    0x140af3400
0x1401cb65a: nop     
0x1401cb65b: lea     rcx,[rbp+0x2510]
0x1401cb662: jmp     0x1401cb94e
0x1401cb667: lea     rdx,[rip+0x145466a]        # 0x14161fcd8 ; literal='Inaccessible'
0x1401cb66e: lea     rcx,[rbp+0x2530]
0x1401cb675: call    0x140069780
0x1401cb67a: nop     
0x1401cb67b: xor     r9d,r9d
0x1401cb67e: xor     r8d,r8d
0x1401cb681: lea     rdx,[rbp+0x2530]
0x1401cb688: lea     rcx,[rip+0x24a11e1]        # 0x14266c870
0x1401cb68f: call    0x140af3400
0x1401cb694: nop     
0x1401cb695: lea     rcx,[rbp+0x2530]
0x1401cb69c: jmp     0x1401cb94e
0x1401cb6a1: lea     rdx,[rip+0x1454640]        # 0x14161fce8 ; literal='Need civilization military leader'
0x1401cb6a8: lea     rcx,[rbp+0x2550]
0x1401cb6af: call    0x140069780
0x1401cb6b4: nop     
0x1401cb6b5: xor     r9d,r9d
0x1401cb6b8: xor     r8d,r8d
0x1401cb6bb: lea     rdx,[rbp+0x2550]
0x1401cb6c2: lea     rcx,[rip+0x24a11a7]        # 0x14266c870
0x1401cb6c9: call    0x140af3400
0x1401cb6ce: nop     
0x1401cb6cf: lea     rcx,[rbp+0x2550]
0x1401cb6d6: jmp     0x1401cb94e
0x1401cb6db: lea     rdx,[rip+0x1454936]        # 0x141620018 ; literal='Need military leader'
0x1401cb6e2: lea     rcx,[rbp+0x2570]
0x1401cb6e9: call    0x140069780
0x1401cb6ee: nop     
0x1401cb6ef: xor     r9d,r9d
0x1401cb6f2: xor     r8d,r8d
0x1401cb6f5: lea     rdx,[rbp+0x2570]
0x1401cb6fc: lea     rcx,[rip+0x24a116d]        # 0x14266c870
0x1401cb703: call    0x140af3400
0x1401cb708: nop     
0x1401cb709: lea     rcx,[rbp+0x2570]
0x1401cb710: jmp     0x1401cb94e
0x1401cb715: lea     rdx,[rip+0x1454914]        # 0x141620030 ; literal='Need leader'
0x1401cb71c: lea     rcx,[rbp+0x2590]
0x1401cb723: call    0x140069780
0x1401cb728: nop     
0x1401cb729: xor     r9d,r9d
0x1401cb72c: xor     r8d,r8d
0x1401cb72f: lea     rdx,[rbp+0x2590]
0x1401cb736: lea     rcx,[rip+0x24a1133]        # 0x14266c870
0x1401cb73d: call    0x140af3400
0x1401cb742: nop     
0x1401cb743: lea     rcx,[rbp+0x2590]
0x1401cb74a: jmp     0x1401cb94e
0x1401cb74f: lea     rdx,[rip+0x14548ea]        # 0x141620040 ; literal='Not trading'
0x1401cb756: lea     rcx,[rbp+0x25b0]
0x1401cb75d: call    0x140069780
0x1401cb762: nop     
0x1401cb763: xor     r9d,r9d
0x1401cb766: xor     r8d,r8d
0x1401cb769: lea     rdx,[rbp+0x25b0]
0x1401cb770: lea     rcx,[rip+0x24a10f9]        # 0x14266c870
0x1401cb777: call    0x140af3400
0x1401cb77c: nop     
0x1401cb77d: lea     rcx,[rbp+0x25b0]
0x1401cb784: jmp     0x1401cb94e
0x1401cb789: lea     rdx,[rip+0x14548c0]        # 0x141620050 ; literal='Already trading'
0x1401cb790: lea     rcx,[rbp+0x25d0]
0x1401cb797: call    0x140069780
0x1401cb79c: nop     
0x1401cb79d: xor     r9d,r9d
0x1401cb7a0: xor     r8d,r8d
0x1401cb7a3: lea     rdx,[rbp+0x25d0]
0x1401cb7aa: lea     rcx,[rip+0x24a10bf]        # 0x14266c870
0x1401cb7b1: call    0x140af3400
0x1401cb7b6: nop     
0x1401cb7b7: lea     rcx,[rbp+0x25d0]
0x1401cb7be: jmp     0x1401cb94e
0x1401cb7c3: lea     rdx,[rip+0x1454896]        # 0x141620060 ; literal='Already at war'
0x1401cb7ca: lea     rcx,[rbp+0x25f0]
0x1401cb7d1: call    0x140069780
0x1401cb7d6: nop     
0x1401cb7d7: xor     r9d,r9d
0x1401cb7da: xor     r8d,r8d
0x1401cb7dd: lea     rdx,[rbp+0x25f0]
0x1401cb7e4: lea     rcx,[rip+0x24a1085]        # 0x14266c870
0x1401cb7eb: call    0x140af3400
0x1401cb7f0: nop     
0x1401cb7f1: lea     rcx,[rbp+0x25f0]
0x1401cb7f8: jmp     0x1401cb94e
0x1401cb7fd: lea     rdx,[rip+0x145486c]        # 0x141620070 ; literal='Already have peace'
0x1401cb804: lea     rcx,[rbp+0x2610]
0x1401cb80b: call    0x140069780
0x1401cb810: nop     
0x1401cb811: xor     r9d,r9d
0x1401cb814: xor     r8d,r8d
0x1401cb817: lea     rdx,[rbp+0x2610]
0x1401cb81e: lea     rcx,[rip+0x24a104b]        # 0x14266c870
0x1401cb825: call    0x140af3400
0x1401cb82a: nop     
0x1401cb82b: lea     rcx,[rbp+0x2610]
0x1401cb832: jmp     0x1401cb94e
0x1401cb837: lea     rdx,[rip+0x145484a]        # 0x141620088 ; literal='Already have alliance'
0x1401cb83e: lea     rcx,[rbp+0x2630]
0x1401cb845: call    0x140069780
0x1401cb84a: nop     
0x1401cb84b: xor     r9d,r9d
0x1401cb84e: xor     r8d,r8d
0x1401cb851: lea     rdx,[rbp+0x2630]
0x1401cb858: lea     rcx,[rip+0x24a1011]        # 0x14266c870
0x1401cb85f: call    0x140af3400
0x1401cb864: nop     
0x1401cb865: lea     rcx,[rbp+0x2630]
0x1401cb86c: jmp     0x1401cb94e
0x1401cb871: lea     rdx,[rip+0x1454828]        # 0x1416200a0 ; literal='At war'
0x1401cb878: lea     rcx,[rbp+0x2650]
0x1401cb87f: call    0x140069780
0x1401cb884: nop     
0x1401cb885: xor     r9d,r9d
0x1401cb888: xor     r8d,r8d
0x1401cb88b: lea     rdx,[rbp+0x2650]
0x1401cb892: lea     rcx,[rip+0x24a0fd7]        # 0x14266c870
0x1401cb899: call    0x140af3400
0x1401cb89e: nop     
0x1401cb89f: lea     rcx,[rbp+0x2650]
0x1401cb8a6: jmp     0x1401cb94e
0x1401cb8ab: lea     rdx,[rip+0x14547f6]        # 0x1416200a8 ; literal='Cannot communicate'
0x1401cb8b2: lea     rcx,[rbp+0x2670]
0x1401cb8b9: call    0x140069780
0x1401cb8be: nop     
0x1401cb8bf: xor     r9d,r9d
0x1401cb8c2: xor     r8d,r8d
0x1401cb8c5: lea     rdx,[rbp+0x2670]
0x1401cb8cc: lea     rcx,[rip+0x24a0f9d]        # 0x14266c870
0x1401cb8d3: call    0x140af3400
0x1401cb8d8: nop     
0x1401cb8d9: lea     rcx,[rbp+0x2670]
0x1401cb8e0: jmp     0x1401cb94e
0x1401cb8e2: lea     rdx,[rip+0x14547d7]        # 0x1416200c0 ; literal='Not in contact'
0x1401cb8e9: lea     rcx,[rbp+0x2690]
0x1401cb8f0: call    0x140069780
0x1401cb8f5: nop     
0x1401cb8f6: xor     r9d,r9d
0x1401cb8f9: xor     r8d,r8d
0x1401cb8fc: lea     rdx,[rbp+0x2690]
0x1401cb903: lea     rcx,[rip+0x24a0f66]        # 0x14266c870
0x1401cb90a: call    0x140af3400
0x1401cb90f: nop     
0x1401cb910: lea     rcx,[rbp+0x2690]
0x1401cb917: jmp     0x1401cb94e
0x1401cb919: lea     rdx,[rip+0x14547b0]        # 0x1416200d0 ; literal='Too hostile'
0x1401cb920: lea     rcx,[rbp+0x26b0]
0x1401cb927: call    0x140069780
0x1401cb92c: nop     
0x1401cb92d: xor     r9d,r9d
0x1401cb930: xor     r8d,r8d
0x1401cb933: lea     rdx,[rbp+0x26b0]
0x1401cb93a: lea     rcx,[rip+0x24a0f2f]        # 0x14266c870
0x1401cb941: call    0x140af3400
0x1401cb946: nop     
0x1401cb947: lea     rcx,[rbp+0x26b0]
0x1401cb94e: call    0x140069460
0x1401cb953: add     r15d,0x3
0x1401cb957: inc     ebx
0x1401cb959: mov     QWORD PTR [rbp-0x78],rbx
0x1401cb95d: add     r14,0x4
0x1401cb961: cmp     ebx,0x1a
0x1401cb964: jl      0x1401cb2d6
0x1401cb96a: lea     rcx,[rbp+0x1410]
0x1401cb971: call    0x140069460
0x1401cb976: nop     
0x1401cb977: lea     rcx,[rbp+0xf10]
0x1401cb97e: jmp     0x1401c8dce
0x1401cb983: mov     r13d,DWORD PTR [rbp-0x18]
0x1401cb987: mov     DWORD PTR [rbp-0x20],r13d
0x1401cb98b: lea     ebx,[r13-0x37]
0x1401cb98f: mov     DWORD PTR [rbp-0x60],ebx
0x1401cb992: lea     ecx,[rbx-0x2]
0x1401cb995: mov     DWORD PTR [rbp-0x48],ecx
0x1401cb998: mov     eax,DWORD PTR [rip+0x222426a]        # 0x1423efc08
0x1401cb99e: dec     eax
0x1401cb9a0: mov     DWORD PTR [rbp-0x70],eax
0x1401cb9a3: lea     r15d,[r13-0xb]
0x1401cb9a7: mov     DWORD PTR [rsp+0x70],r15d
0x1401cb9ac: lea     r12d,[r13-0x1]
0x1401cb9b0: mov     DWORD PTR [rbp-0x58],r12d
0x1401cb9b4: mov     edi,r13d
0x1401cb9b7: mov     r14d,esi
0x1401cb9ba: cmp     eax,0x2a
0x1401cb9bd: jle     0x1401cb9c9
0x1401cb9bf: mov     eax,0x2a
0x1401cb9c4: mov     DWORD PTR [rbp-0x70],eax
0x1401cb9c7: jmp     0x1401cb9e0
0x1401cb9c9: mov     DWORD PTR [rsp+0x70],r15d
0x1401cb9ce: mov     DWORD PTR [rbp-0x58],r12d
0x1401cb9d2: test    eax,eax
0x1401cb9d4: js      0x1401cbac5
0x1401cb9da: nop     WORD PTR [rax+rax*1+0x0]
0x1401cb9e0: mov     ebx,ecx
0x1401cb9e2: cmp     ecx,edi
0x1401cb9e4: jg      0x1401cbaa7
0x1401cb9ea: movsxd  r15,eax
0x1401cb9ed: mov     r12d,DWORD PTR [rbp-0x48]
0x1401cb9f1: mov     r8d,ebx
0x1401cb9f4: mov     edx,r14d
0x1401cb9f7: lea     rcx,[rip+0x24a0e72]        # 0x14266c870
0x1401cb9fe: call    0x1400bc750
0x1401cba03: xor     r8d,r8d
0x1401cba06: xor     edx,edx
0x1401cba08: lea     rcx,[rip+0x24a0e61]        # 0x14266c870
0x1401cba0f: call    0x1400bc7c0
0x1401cba14: test    rsi,rsi
0x1401cba17: jne     0x1401cba41
0x1401cba19: cmp     ebx,r12d
0x1401cba1c: jne     0x1401cba26
0x1401cba1e: mov     edx,DWORD PTR [rip+0x24a2770]        # 0x14266e194
0x1401cba24: jmp     0x1401cba8b
0x1401cba26: lea     rcx,[rip+0x24a0e43]        # 0x14266c870
0x1401cba2d: cmp     ebx,edi
0x1401cba2f: jne     0x1401cba39
0x1401cba31: mov     edx,DWORD PTR [rip+0x24a2775]        # 0x14266e1ac
0x1401cba37: jmp     0x1401cba92
0x1401cba39: mov     edx,DWORD PTR [rip+0x24a2761]        # 0x14266e1a0
0x1401cba3f: jmp     0x1401cba92
0x1401cba41: cmp     rsi,r15
0x1401cba44: jne     0x1401cba6e
0x1401cba46: cmp     ebx,r12d
0x1401cba49: jne     0x1401cba53
0x1401cba4b: mov     edx,DWORD PTR [rip+0x24a274b]        # 0x14266e19c
0x1401cba51: jmp     0x1401cba8b
0x1401cba53: lea     rcx,[rip+0x24a0e16]        # 0x14266c870
0x1401cba5a: cmp     ebx,edi
0x1401cba5c: jne     0x1401cba66
0x1401cba5e: mov     edx,DWORD PTR [rip+0x24a2750]        # 0x14266e1b4
0x1401cba64: jmp     0x1401cba92
0x1401cba66: mov     edx,DWORD PTR [rip+0x24a273c]        # 0x14266e1a8
0x1401cba6c: jmp     0x1401cba92
0x1401cba6e: cmp     ebx,r12d
0x1401cba71: jne     0x1401cba7b
0x1401cba73: mov     edx,DWORD PTR [rip+0x24a271f]        # 0x14266e198
0x1401cba79: jmp     0x1401cba8b
0x1401cba7b: cmp     ebx,edi
0x1401cba7d: mov     edx,DWORD PTR [rip+0x24a272d]        # 0x14266e1b0
0x1401cba83: je      0x1401cba8b
0x1401cba85: mov     edx,DWORD PTR [rip+0x24a2719]        # 0x14266e1a4
0x1401cba8b: lea     rcx,[rip+0x24a0dde]        # 0x14266c870
0x1401cba92: call    0x140af4570
0x1401cba97: inc     ebx
0x1401cba99: cmp     ebx,edi
0x1401cba9b: jle     0x1401cb9f1
0x1401cbaa1: mov     ecx,r12d
0x1401cbaa4: mov     eax,DWORD PTR [rbp-0x70]
0x1401cbaa7: inc     r14d
0x1401cbaaa: inc     rsi
0x1401cbaad: cmp     r14d,eax
0x1401cbab0: jle     0x1401cb9e0
0x1401cbab6: mov     r12d,DWORD PTR [rbp-0x58]
0x1401cbaba: mov     r15d,DWORD PTR [rsp+0x70]
0x1401cbabf: lea     ebx,[r13-0x37]
0x1401cbac3: xor     esi,esi
0x1401cbac5: mov     rax,QWORD PTR [rsp+0x78]
0x1401cbaca: lea     rcx,[rax+0x2b8]
0x1401cbad1: movsxd  rdx,DWORD PTR [rax+0x2d8]
0x1401cbad8: call    0x140070850
0x1401cbadd: mov     r14,QWORD PTR [rax]
0x1401cbae0: mov     QWORD PTR [rbp-0x78],r14
0x1401cbae4: xor     r8d,r8d
0x1401cbae7: mov     edx,0x3
0x1401cbaec: mov     r9b,0x1
0x1401cbaef: lea     rcx,[rip+0x24a0d7a]        # 0x14266c870
0x1401cbaf6: call    0x1400bc760
0x1401cbafb: lea     rcx,[rbp+0xd30]
0x1401cbb02: call    0x140070cc0
0x1401cbb07: nop     
0x1401cbb08: mov     rcx,r14
0x1401cbb0b: call    0x140076740
0x1401cbb10: mov     edi,0x1
0x1401cbb15: sub     eax,0x2
0x1401cbb18: je      0x1401cbbf9
0x1401cbb1e: sub     eax,0xf
0x1401cbb21: je      0x1401cbbc1
0x1401cbb27: sub     eax,edi
0x1401cbb29: je      0x1401cbb6f
0x1401cbb2b: sub     eax,edi
0x1401cbb2d: je      0x1401cbb63
0x1401cbb2f: cmp     eax,0x6
0x1401cbb32: jne     0x1401cbc7e
0x1401cbb38: lea     rdx,[rbp+0xd30]
0x1401cbb3f: mov     rcx,QWORD PTR [r14+0x130]
0x1401cbb46: call    0x1401bdc00
0x1401cbb4b: lea     rdx,[rip+0x1452572]        # 0x14161e0c4 ; literal=' at '
0x1401cbb52: lea     rcx,[rbp+0xd30]
0x1401cbb59: call    0x140070b90
0x1401cbb5e: jmp     0x1401cbc64
0x1401cbb63: lea     rdx,[rip+0x145420e]        # 0x14161fd78 ; literal='Request workers from '
0x1401cbb6a: jmp     0x1401cbc58
0x1401cbb6f: lea     rdx,[rip+0x143da2a]        # 0x1416095a0 ; literal='Rescue '
0x1401cbb76: lea     rcx,[rbp+0xd30]
0x1401cbb7d: call    0x140070bb0
0x1401cbb82: lea     rcx,[rbp+0x670]
0x1401cbb89: call    0x1400736b0
0x1401cbb8e: mov     r8,QWORD PTR [r14+0x130]
0x1401cbb95: mov     WORD PTR [rsp+0x28],di
0x1401cbb9a: mov     WORD PTR [rsp+0x20],di
0x1401cbb9f: lea     r9,[rbp+0x670]
0x1401cbba6: mov     r8d,DWORD PTR [r8]
0x1401cbba9: lea     rdx,[rbp+0xd30]
0x1401cbbb0: lea     rcx,[rip+0x2350581]        # 0x14251c138
0x1401cbbb7: call    0x140baabd0
0x1401cbbbc: jmp     0x1401cbc7e
0x1401cbbc1: lea     rdx,[rip+0x1454228]        # 0x14161fdf0 ; literal='Recover '
0x1401cbbc8: lea     rcx,[rbp+0xd30]
0x1401cbbcf: call    0x140070bb0
0x1401cbbd4: mov     r8,QWORD PTR [r14+0x130]
0x1401cbbdb: xor     r9d,r9d
0x1401cbbde: mov     r8d,DWORD PTR [r8]
0x1401cbbe1: lea     rdx,[rbp+0xd30]
0x1401cbbe8: lea     rcx,[rip+0x2350549]        # 0x14251c138
0x1401cbbef: call    0x140bac0c0
0x1401cbbf4: jmp     0x1401cbc7e
0x1401cbbf9: mov     rax,QWORD PTR [r14+0x130]
0x1401cbc00: movsxd  rcx,DWORD PTR [rax]
0x1401cbc03: cmp     ecx,0x6
0x1401cbc06: ja      0x1401cbc51
0x1401cbc08: lea     rdx,[rip+0xffffffffffe343f1]        # 0x140000000
0x1401cbc0f: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d6644]
0x1401cbc16: add     rcx,rdx
0x1401cbc19: jmp     rcx
0x1401cbc1b: lea     rdx,[rip+0x145416e]        # 0x14161fd90 ; literal='Explore '
0x1401cbc22: jmp     0x1401cbc58
0x1401cbc24: lea     rdx,[rip+0x1454175]        # 0x14161fda0 ; literal='Pillage '
0x1401cbc2b: jmp     0x1401cbc58
0x1401cbc2d: lea     rdx,[rip+0x145417c]        # 0x14161fdb0 ; literal='Demand tribute from '
0x1401cbc34: jmp     0x1401cbc58
0x1401cbc36: lea     rdx,[rip+0x145418b]        # 0x14161fdc8 ; literal='Raze '
0x1401cbc3d: jmp     0x1401cbc58
0x1401cbc3f: lea     rdx,[rip+0x145418a]        # 0x14161fdd0 ; literal='Take over '
0x1401cbc46: jmp     0x1401cbc58
0x1401cbc48: lea     rdx,[rip+0x145418d]        # 0x14161fddc ; literal='Seize '
0x1401cbc4f: jmp     0x1401cbc58
0x1401cbc51: lea     rdx,[rip+0x145418c]        # 0x14161fde4 ; literal='Raid '
0x1401cbc58: lea     rcx,[rbp+0xd30]
0x1401cbc5f: call    0x140070bb0
0x1401cbc64: xor     r9d,r9d
0x1401cbc67: mov     r8d,DWORD PTR [r14+0x8]
0x1401cbc6b: lea     rdx,[rbp+0xd30]
0x1401cbc72: lea     rcx,[rip+0x23504bf]        # 0x14251c138
0x1401cbc79: call    0x140bab5f0
0x1401cbc7e: mov     r8d,ebx
0x1401cbc81: mov     edx,edi
0x1401cbc83: lea     rcx,[rip+0x24a0be6]        # 0x14266c870
0x1401cbc8a: call    0x1400bc750
0x1401cbc8f: lea     rcx,[rbp+0xd30]
0x1401cbc96: call    0x140070960
0x1401cbc9b: xor     r9d,r9d
0x1401cbc9e: xor     r8d,r8d
0x1401cbca1: lea     rdx,[rbp+0xd30]
0x1401cbca8: lea     rcx,[rip+0x24a0bc1]        # 0x14266c870
0x1401cbcaf: call    0x140af3400
0x1401cbcb4: mov     rcx,r14
0x1401cbcb7: call    0x140076740
0x1401cbcbc: cmp     eax,0x13
0x1401cbcbf: je      0x1401cbfaa
0x1401cbcc5: cmp     eax,0x19
0x1401cbcc8: je      0x1401cbfaa
0x1401cbcce: mov     edi,esi
0x1401cbcd0: lea     rdx,[rbp+0x98]
0x1401cbcd7: lea     rcx,[r14+0x80]
0x1401cbcde: call    0x140070870
0x1401cbce3: lea     rdx,[rbp+0x148]
0x1401cbcea: lea     rcx,[r14+0x80]
0x1401cbcf1: call    0x140070860
0x1401cbcf6: lea     r8,[rbp+0x148]
0x1401cbcfd: lea     rdx,[rbp+0x10]
0x1401cbd01: lea     rcx,[rbp+0x98]
0x1401cbd08: call    0x140070450
0x1401cbd0d: mov     BYTE PTR [rbp-0x80],0x0
0x1401cbd11: xor     edx,edx
0x1401cbd13: movzx   ecx,BYTE PTR [rax]
0x1401cbd16: call    0x140066de0
0x1401cbd1b: test    al,al
0x1401cbd1d: je      0x1401cbde4
0x1401cbd23: lea     rcx,[rbp+0x98]
0x1401cbd2a: call    0x140070440
0x1401cbd2f: mov     edx,DWORD PTR [rax]
0x1401cbd31: lea     rcx,[rip+0x2339f08]        # 0x142505c40
0x1401cbd38: call    0x140076b30
0x1401cbd3d: mov     BYTE PTR [rbp-0x80],0x0
0x1401cbd41: test    rax,rax
0x1401cbd44: je      0x1401cbdaf
0x1401cbd46: lea     rbx,[rax+0xa0]
0x1401cbd4d: mov     BYTE PTR [rbp-0x80],0x0
0x1401cbd51: mov     rcx,rbx
0x1401cbd54: call    0x140070480
0x1401cbd59: test    rax,rax
0x1401cbd5c: je      0x1401cbdaf
0x1401cbd5e: xor     edx,edx
0x1401cbd60: mov     rcx,rbx
0x1401cbd63: call    0x140070850
0x1401cbd68: mov     BYTE PTR [rbp-0x80],0x0
0x1401cbd6c: mov     rax,QWORD PTR [rax]
0x1401cbd6f: cmp     DWORD PTR [rax],0xffffffff
0x1401cbd72: je      0x1401cbdaf
0x1401cbd74: xor     edx,edx
0x1401cbd76: mov     rcx,rbx
0x1401cbd79: call    0x140070850
0x1401cbd7e: mov     rdx,QWORD PTR [rax]
0x1401cbd81: mov     edx,DWORD PTR [rdx]
0x1401cbd83: lea     rcx,[rip+0x223b7a6]        # 0x142407530
0x1401cbd8a: call    0x1413e54b0
0x1401cbd8f: test    rax,rax
0x1401cbd92: je      0x1401cbda9
0x1401cbd94: mov     eax,DWORD PTR [rax+0x110]
0x1401cbd9a: test    eax,0x102
0x1401cbd9f: jne     0x1401cbda9
0x1401cbda1: test    eax,eax
0x1401cbda3: jns     0x1401cbda9
0x1401cbda5: inc     edi
0x1401cbda7: jmp     0x1401cbdab
0x1401cbda9: inc     esi
0x1401cbdab: mov     BYTE PTR [rbp-0x80],0x0
0x1401cbdaf: lea     rcx,[rbp+0x98]
0x1401cbdb6: call    0x140070980
0x1401cbdbb: lea     r8,[rbp+0x148]
0x1401cbdc2: lea     rdx,[rbp+0x10]
0x1401cbdc6: lea     rcx,[rbp+0x98]
0x1401cbdcd: call    0x140070450
0x1401cbdd2: xor     edx,edx
0x1401cbdd4: movzx   ecx,BYTE PTR [rax]
0x1401cbdd7: call    0x140066de0
0x1401cbddc: test    al,al
0x1401cbdde: jne     0x1401cbd23
0x1401cbde4: lea     r8d,[r13-0x37]
0x1401cbde8: mov     edx,0x2
0x1401cbded: lea     rcx,[rip+0x24a0a7c]        # 0x14266c870
0x1401cbdf4: call    0x1400bc750
0x1401cbdf9: lea     eax,[rsi+rdi*1]
0x1401cbdfc: test    eax,eax
0x1401cbdfe: jne     0x1401cbe51
0x1401cbe00: xor     r8d,r8d
0x1401cbe03: mov     edx,0x7
0x1401cbe08: xor     r9d,r9d
0x1401cbe0b: lea     rcx,[rip+0x24a0a5e]        # 0x14266c870
0x1401cbe12: call    0x1400bc760
0x1401cbe17: lea     rdx,[rip+0x1453d9a]        # 0x14161fbb8 ; literal='No commanders'
0x1401cbe1e: lea     rcx,[rbp+0x26d0]
0x1401cbe25: call    0x140069780
0x1401cbe2a: nop     
0x1401cbe2b: xor     r9d,r9d
0x1401cbe2e: xor     r8d,r8d
0x1401cbe31: lea     rdx,[rbp+0x26d0]
0x1401cbe38: lea     rcx,[rip+0x24a0a31]        # 0x14266c870
0x1401cbe3f: call    0x140af3400
0x1401cbe44: nop     
0x1401cbe45: lea     rcx,[rbp+0x26d0]
0x1401cbe4c: jmp     0x1401cc293
0x1401cbe51: lea     rcx,[rbp+0xdb0]
0x1401cbe58: call    0x140070cc0
0x1401cbe5d: nop     
0x1401cbe5e: test    edi,edi
0x1401cbe60: jne     0x1401cbe8a
0x1401cbe62: lea     rdx,[rip+0x1453fa7]        # 0x14161fe10 ; literal='no'
0x1401cbe69: lea     rcx,[rbp+0xdb0]
0x1401cbe70: call    0x140070b90
0x1401cbe75: lea     rdx,[rip+0x1453d4c]        # 0x14161fbc8 ; literal=' commander'
0x1401cbe7c: lea     rcx,[rbp+0xdb0]
0x1401cbe83: call    0x140070b90
0x1401cbe88: jmp     0x1401cbeb0
0x1401cbe8a: lea     rdx,[rbp+0xdb0]
0x1401cbe91: mov     ecx,edi
0x1401cbe93: call    0x140545610
0x1401cbe98: lea     rdx,[rip+0x1453d29]        # 0x14161fbc8 ; literal=' commander'
0x1401cbe9f: lea     rcx,[rbp+0xdb0]
0x1401cbea6: call    0x140070b90
0x1401cbeab: cmp     edi,0x1
0x1401cbeae: je      0x1401cbec3
0x1401cbeb0: lea     rdx,[rip+0x1438639]        # 0x1416044f0 ; literal='s'
0x1401cbeb7: lea     rcx,[rbp+0xdb0]
0x1401cbebe: call    0x140070b90
0x1401cbec3: lea     rdx,[rip+0x1453cd6]        # 0x14161fba0 ; literal=' here'
0x1401cbeca: lea     rcx,[rbp+0xdb0]
0x1401cbed1: call    0x140070b90
0x1401cbed6: lea     rdx,[rip+0x14384b7]        # 0x141604394 ; literal=', '
0x1401cbedd: lea     rcx,[rbp+0xdb0]
0x1401cbee4: call    0x140070b90
0x1401cbee9: test    esi,esi
0x1401cbeeb: jne     0x1401cbf15
0x1401cbeed: lea     rdx,[rip+0x1453f1c]        # 0x14161fe10 ; literal='no'
0x1401cbef4: lea     rcx,[rbp+0xdb0]
0x1401cbefb: call    0x140070b90
0x1401cbf00: lea     rdx,[rip+0x1453cc1]        # 0x14161fbc8 ; literal=' commander'
0x1401cbf07: lea     rcx,[rbp+0xdb0]
0x1401cbf0e: call    0x140070b90
0x1401cbf13: jmp     0x1401cbf3b
0x1401cbf15: lea     rdx,[rbp+0xdb0]
0x1401cbf1c: mov     ecx,esi
0x1401cbf1e: call    0x140545610
0x1401cbf23: lea     rdx,[rip+0x1453c9e]        # 0x14161fbc8 ; literal=' commander'
0x1401cbf2a: lea     rcx,[rbp+0xdb0]
0x1401cbf31: call    0x140070b90
0x1401cbf36: cmp     esi,0x1
0x1401cbf39: je      0x1401cbf4e
0x1401cbf3b: lea     rdx,[rip+0x14385ae]        # 0x1416044f0 ; literal='s'
0x1401cbf42: lea     rcx,[rbp+0xdb0]
0x1401cbf49: call    0x140070b90
0x1401cbf4e: lea     rdx,[rip+0x1453c53]        # 0x14161fba8 ; literal=' traveling'
0x1401cbf55: lea     rcx,[rbp+0xdb0]
0x1401cbf5c: call    0x140070b90
0x1401cbf61: lea     rcx,[rbp+0xdb0]
0x1401cbf68: call    0x140546b30
0x1401cbf6d: xor     r8d,r8d
0x1401cbf70: mov     edx,0x7
0x1401cbf75: mov     r9b,0x1
0x1401cbf78: lea     rcx,[rip+0x24a08f1]        # 0x14266c870
0x1401cbf7f: call    0x1400bc760
0x1401cbf84: xor     r9d,r9d
0x1401cbf87: xor     r8d,r8d
0x1401cbf8a: lea     rdx,[rbp+0xdb0]
0x1401cbf91: lea     rcx,[rip+0x24a08d8]        # 0x14266c870
0x1401cbf98: call    0x140af3400
0x1401cbf9d: nop     
0x1401cbf9e: lea     rcx,[rbp+0xdb0]
0x1401cbfa5: jmp     0x1401cc293
0x1401cbfaa: mov     BYTE PTR [rbp-0x80],dil
0x1401cbfae: lea     rdx,[rbp+0xa0]
0x1401cbfb5: lea     rcx,[r14+0x98]
0x1401cbfbc: call    0x140070870
0x1401cbfc1: lea     rdx,[rbp+0x158]
0x1401cbfc8: lea     rcx,[r14+0x98]
0x1401cbfcf: call    0x140070860
0x1401cbfd4: lea     rcx,[r14+0xb0]
0x1401cbfdb: lea     rdx,[rbp+0x150]
0x1401cbfe2: call    0x140070870
0x1401cbfe7: lea     r8,[rbp+0x158]
0x1401cbfee: lea     rdx,[rbp+0x11]
0x1401cbff2: lea     rcx,[rbp+0xa0]
0x1401cbff9: call    0x140070450
0x1401cbffe: mov     edi,esi
0x1401cc000: xor     edx,edx
0x1401cc002: movzx   ecx,BYTE PTR [rax]
0x1401cc005: call    0x140066de0
0x1401cc00a: test    al,al
0x1401cc00c: je      0x1401cc0d2
0x1401cc012: mov     BYTE PTR [rbp-0x80],0x1
0x1401cc016: xor     eax,eax
0x1401cc018: mov     edi,eax
0x1401cc01a: mov     esi,eax
0x1401cc01c: nop     DWORD PTR [rax+0x0]
0x1401cc020: lea     rcx,[rbp+0xa0]
0x1401cc027: call    0x140070440
0x1401cc02c: mov     edx,DWORD PTR [rax]
0x1401cc02e: lea     rcx,[rip+0x2227c43]        # 0x1423f3c78
0x1401cc035: call    0x14007f120
0x1401cc03a: mov     rbx,rax
0x1401cc03d: test    rax,rax
0x1401cc040: je      0x1401cc091
0x1401cc042: lea     rcx,[rbp+0x150]
0x1401cc049: call    0x140070440
0x1401cc04e: lea     rdx,[rbx+0x1110]
0x1401cc055: mov     ecx,DWORD PTR [rax]
0x1401cc057: call    0x1400bb3f0
0x1401cc05c: test    rax,rax
0x1401cc05f: je      0x1401cc091
0x1401cc061: mov     edx,DWORD PTR [rax+0x4]
0x1401cc064: cmp     edx,0xffffffff
0x1401cc067: je      0x1401cc091
0x1401cc069: lea     rcx,[rip+0x223b4c0]        # 0x142407530
0x1401cc070: call    0x1413e54b0
0x1401cc075: test    rax,rax
0x1401cc078: je      0x1401cc08f
0x1401cc07a: mov     eax,DWORD PTR [rax+0x110]
0x1401cc080: test    eax,0x102
0x1401cc085: jne     0x1401cc08f
0x1401cc087: test    eax,eax
0x1401cc089: jns     0x1401cc08f
0x1401cc08b: inc     edi
0x1401cc08d: jmp     0x1401cc091
0x1401cc08f: inc     esi
0x1401cc091: lea     rcx,[rbp+0xa0]
0x1401cc098: call    0x140070980
0x1401cc09d: lea     rcx,[rbp+0x150]
0x1401cc0a4: call    0x140070980
0x1401cc0a9: lea     r8,[rbp+0x158]
0x1401cc0b0: lea     rdx,[rbp+0x11]
0x1401cc0b4: lea     rcx,[rbp+0xa0]
0x1401cc0bb: call    0x140070450
0x1401cc0c0: xor     edx,edx
0x1401cc0c2: movzx   ecx,BYTE PTR [rax]
0x1401cc0c5: call    0x140066de0
0x1401cc0ca: test    al,al
0x1401cc0cc: jne     0x1401cc020
0x1401cc0d2: lea     r8d,[r13-0x37]
0x1401cc0d6: mov     edx,0x2
0x1401cc0db: lea     rcx,[rip+0x24a078e]        # 0x14266c870
0x1401cc0e2: call    0x1400bc750
0x1401cc0e7: lea     eax,[rsi+rdi*1]
0x1401cc0ea: test    eax,eax
0x1401cc0ec: jne     0x1401cc13f
0x1401cc0ee: xor     r8d,r8d
0x1401cc0f1: mov     edx,0x7
0x1401cc0f6: xor     r9d,r9d
0x1401cc0f9: lea     rcx,[rip+0x24a0770]        # 0x14266c870
0x1401cc100: call    0x1400bc760
0x1401cc105: lea     rdx,[rip+0x1453cf4]        # 0x14161fe00 ; literal='No messengers'
0x1401cc10c: lea     rcx,[rbp+0x26f0]
0x1401cc113: call    0x140069780
0x1401cc118: nop     
0x1401cc119: xor     r9d,r9d
0x1401cc11c: xor     r8d,r8d
0x1401cc11f: lea     rdx,[rbp+0x26f0]
0x1401cc126: lea     rcx,[rip+0x24a0743]        # 0x14266c870
0x1401cc12d: call    0x140af3400
0x1401cc132: nop     
0x1401cc133: lea     rcx,[rbp+0x26f0]
0x1401cc13a: jmp     0x1401cc293
0x1401cc13f: lea     rcx,[rbp+0xdd0]
0x1401cc146: call    0x140070cc0
0x1401cc14b: nop     
0x1401cc14c: test    edi,edi
0x1401cc14e: jne     0x1401cc178
0x1401cc150: lea     rdx,[rip+0x1453cb9]        # 0x14161fe10 ; literal='no'
0x1401cc157: lea     rcx,[rbp+0xdd0]
0x1401cc15e: call    0x140070b90
0x1401cc163: lea     rdx,[rip+0x1453cae]        # 0x14161fe18 ; literal=' messenger'
0x1401cc16a: lea     rcx,[rbp+0xdd0]
0x1401cc171: call    0x140070b90
0x1401cc176: jmp     0x1401cc19e
0x1401cc178: lea     rdx,[rbp+0xdd0]
0x1401cc17f: mov     ecx,edi
0x1401cc181: call    0x140545610
0x1401cc186: lea     rdx,[rip+0x1453c8b]        # 0x14161fe18 ; literal=' messenger'
0x1401cc18d: lea     rcx,[rbp+0xdd0]
0x1401cc194: call    0x140070b90
0x1401cc199: cmp     edi,0x1
0x1401cc19c: je      0x1401cc1b1
0x1401cc19e: lea     rdx,[rip+0x143834b]        # 0x1416044f0 ; literal='s'
0x1401cc1a5: lea     rcx,[rbp+0xdd0]
0x1401cc1ac: call    0x140070b90
0x1401cc1b1: lea     rdx,[rip+0x14539e8]        # 0x14161fba0 ; literal=' here'
0x1401cc1b8: lea     rcx,[rbp+0xdd0]
0x1401cc1bf: call    0x140070b90
0x1401cc1c4: lea     rdx,[rip+0x14381c9]        # 0x141604394 ; literal=', '
0x1401cc1cb: lea     rcx,[rbp+0xdd0]
0x1401cc1d2: call    0x140070b90
0x1401cc1d7: test    esi,esi
0x1401cc1d9: jne     0x1401cc203
0x1401cc1db: lea     rdx,[rip+0x1453c2e]        # 0x14161fe10 ; literal='no'
0x1401cc1e2: lea     rcx,[rbp+0xdd0]
0x1401cc1e9: call    0x140070b90
0x1401cc1ee: lea     rdx,[rip+0x1453c23]        # 0x14161fe18 ; literal=' messenger'
0x1401cc1f5: lea     rcx,[rbp+0xdd0]
0x1401cc1fc: call    0x140070b90
0x1401cc201: jmp     0x1401cc229
0x1401cc203: lea     rdx,[rbp+0xdd0]
0x1401cc20a: mov     ecx,esi
0x1401cc20c: call    0x140545610
0x1401cc211: lea     rdx,[rip+0x1453c00]        # 0x14161fe18 ; literal=' messenger'
0x1401cc218: lea     rcx,[rbp+0xdd0]
0x1401cc21f: call    0x140070b90
0x1401cc224: cmp     esi,0x1
0x1401cc227: je      0x1401cc23c
0x1401cc229: lea     rdx,[rip+0x14382c0]        # 0x1416044f0 ; literal='s'
0x1401cc230: lea     rcx,[rbp+0xdd0]
0x1401cc237: call    0x140070b90
0x1401cc23c: lea     rdx,[rip+0x1453965]        # 0x14161fba8 ; literal=' traveling'
0x1401cc243: lea     rcx,[rbp+0xdd0]
0x1401cc24a: call    0x140070b90
0x1401cc24f: lea     rcx,[rbp+0xdd0]
0x1401cc256: call    0x140546b30
0x1401cc25b: xor     r8d,r8d
0x1401cc25e: mov     edx,0x7
0x1401cc263: mov     r9b,0x1
0x1401cc266: lea     rcx,[rip+0x24a0603]        # 0x14266c870
0x1401cc26d: call    0x1400bc760
0x1401cc272: xor     r9d,r9d
0x1401cc275: xor     r8d,r8d
0x1401cc278: lea     rdx,[rbp+0xdd0]
0x1401cc27f: lea     rcx,[rip+0x24a05ea]        # 0x14266c870
0x1401cc286: call    0x140af3400
0x1401cc28b: nop     
0x1401cc28c: lea     rcx,[rbp+0xdd0]
0x1401cc293: call    0x140069460
0x1401cc298: mov     r14d,r15d
0x1401cc29b: cmp     r15d,r12d
0x1401cc29e: jg      0x1401cc313
0x1401cc2a0: movsxd  r15,r15d
0x1401cc2a3: movsxd  r13,r12d
0x1401cc2a6: mov     rsi,r15
0x1401cc2a9: lea     r12,[rip+0x24a20b8]        # 0x14266e368
0x1401cc2b0: mov     edi,0x1
0x1401cc2b5: lea     rbx,[rip+0x24a20a0]        # 0x14266e35c
0x1401cc2bc: nop     DWORD PTR [rax+0x0]
0x1401cc2c0: mov     r8d,r14d
0x1401cc2c3: mov     edx,edi
0x1401cc2c5: lea     rcx,[rip+0x24a05a4]        # 0x14266c870
0x1401cc2cc: call    0x1400bc750
0x1401cc2d1: cmp     rsi,r15
0x1401cc2d4: jne     0x1401cc2db
0x1401cc2d6: mov     edx,DWORD PTR [rbx-0x18]
0x1401cc2d9: jmp     0x1401cc2e7
0x1401cc2db: cmp     rsi,r13
0x1401cc2de: jne     0x1401cc2e4
0x1401cc2e0: mov     edx,DWORD PTR [rbx]
0x1401cc2e2: jmp     0x1401cc2e7
0x1401cc2e4: mov     edx,DWORD PTR [rbx-0xc]
0x1401cc2e7: lea     rcx,[rip+0x24a0582]        # 0x14266c870
0x1401cc2ee: call    0x140af4570
0x1401cc2f3: inc     edi
0x1401cc2f5: add     rbx,0x4
0x1401cc2f9: cmp     rbx,r12
0x1401cc2fc: jl      0x1401cc2c0
0x1401cc2fe: inc     r14d
0x1401cc301: inc     rsi
0x1401cc304: cmp     r14d,DWORD PTR [rbp-0x58]
0x1401cc308: jle     0x1401cc2b0
0x1401cc30a: mov     r13d,DWORD PTR [rbp-0x20]
0x1401cc30e: mov     r15d,DWORD PTR [rsp+0x70]
0x1401cc313: xor     r8d,r8d
0x1401cc316: mov     edx,0x7
0x1401cc31b: mov     r9b,0x1
0x1401cc31e: lea     rcx,[rip+0x24a054b]        # 0x14266c870
0x1401cc325: call    0x1400bc760
0x1401cc32a: lea     r8d,[r15+0x2]
0x1401cc32e: mov     edx,0x2
0x1401cc333: lea     rcx,[rip+0x24a0536]        # 0x14266c870
0x1401cc33a: call    0x1400bc750
0x1401cc33f: lea     rdx,[rip+0x1453d96]        # 0x1416200dc ; literal='Remove'
0x1401cc346: lea     rcx,[rbp+0x2710]
0x1401cc34d: call    0x140069780
0x1401cc352: nop     
0x1401cc353: xor     r9d,r9d
0x1401cc356: xor     r8d,r8d
0x1401cc359: lea     rdx,[rbp+0x2710]
0x1401cc360: lea     rcx,[rip+0x24a0509]        # 0x14266c870
0x1401cc367: call    0x140af3400
0x1401cc36c: nop     
0x1401cc36d: lea     rcx,[rbp+0x2710]
0x1401cc374: call    0x140069460
0x1401cc379: mov     r12,QWORD PTR [rbp-0x78]
0x1401cc37d: mov     rcx,r12
0x1401cc380: call    0x140076740
0x1401cc385: cmp     eax,0x2
0x1401cc388: je      0x1401cd3cd
0x1401cc38e: cmp     eax,0x13
0x1401cc391: je      0x1401ccc4f
0x1401cc397: cmp     eax,0x19
0x1401cc39a: jne     0x1401ccbe2
0x1401cc3a0: mov     edi,DWORD PTR [rbp-0x48]
0x1401cc3a3: add     edi,0x2
0x1401cc3a6: add     r13d,0xfffffffe
0x1401cc3aa: xor     eax,eax
0x1401cc3ac: movzx   r14d,ax
0x1401cc3b0: mov     r12d,0x7
0x1401cc3b6: mov     DWORD PTR [rbp-0x58],r12d
0x1401cc3ba: mov     rsi,QWORD PTR [rsp+0x78]
0x1401cc3bf: add     rsi,0x3f8
0x1401cc3c6: cmp     DWORD PTR [rsi],0x1
0x1401cc3c9: je      0x1401ccbcb
0x1401cc3cf: mov     ebx,edi
0x1401cc3d1: cmp     edi,r13d
0x1401cc3d4: jg      0x1401cc5ee
0x1401cc3da: nop     WORD PTR [rax+rax*1+0x0]
0x1401cc3e0: mov     r8d,ebx
0x1401cc3e3: lea     edx,[r12-0x2]
0x1401cc3e8: lea     rcx,[rip+0x24a0481]        # 0x14266c870
0x1401cc3ef: call    0x1400bc750
0x1401cc3f4: cmp     DWORD PTR [rsi],0x0
0x1401cc3f7: je      0x1401cc421
0x1401cc3f9: cmp     ebx,edi
0x1401cc3fb: jne     0x1401cc405
0x1401cc3fd: mov     edx,DWORD PTR [rip+0x24a1f41]        # 0x14266e344
0x1401cc403: jmp     0x1401cc47f
0x1401cc405: lea     rcx,[rip+0x24a0464]        # 0x14266c870
0x1401cc40c: cmp     ebx,r13d
0x1401cc40f: jne     0x1401cc419
0x1401cc411: mov     edx,DWORD PTR [rip+0x24a1f45]        # 0x14266e35c
0x1401cc417: jmp     0x1401cc486
0x1401cc419: mov     edx,DWORD PTR [rip+0x24a1f31]        # 0x14266e350
0x1401cc41f: jmp     0x1401cc486
0x1401cc421: mov     rax,QWORD PTR [rbp-0x78]
0x1401cc425: mov     rdx,QWORD PTR [rax+0x130]
0x1401cc42c: movzx   ecx,r14w
0x1401cc430: call    0x140071500
0x1401cc435: cmp     eax,0xffffffff
0x1401cc438: je      0x1401cc462
0x1401cc43a: cmp     ebx,edi
0x1401cc43c: jne     0x1401cc446
0x1401cc43e: mov     edx,DWORD PTR [rip+0x24a1eb8]        # 0x14266e2fc
0x1401cc444: jmp     0x1401cc47f
0x1401cc446: lea     rcx,[rip+0x24a0423]        # 0x14266c870
0x1401cc44d: cmp     ebx,r13d
0x1401cc450: jne     0x1401cc45a
0x1401cc452: mov     edx,DWORD PTR [rip+0x24a1ebc]        # 0x14266e314
0x1401cc458: jmp     0x1401cc486
0x1401cc45a: mov     edx,DWORD PTR [rip+0x24a1ea8]        # 0x14266e308
0x1401cc460: jmp     0x1401cc486
0x1401cc462: cmp     ebx,edi
0x1401cc464: jne     0x1401cc46e
0x1401cc466: mov     edx,DWORD PTR [rip+0x24a1e48]        # 0x14266e2b4
0x1401cc46c: jmp     0x1401cc47f
0x1401cc46e: cmp     ebx,r13d
0x1401cc471: mov     edx,DWORD PTR [rip+0x24a1e55]        # 0x14266e2cc
0x1401cc477: je      0x1401cc47f
0x1401cc479: mov     edx,DWORD PTR [rip+0x24a1e41]        # 0x14266e2c0
0x1401cc47f: lea     rcx,[rip+0x24a03ea]        # 0x14266c870
0x1401cc486: call    0x140af4570
0x1401cc48b: mov     r8d,ebx
0x1401cc48e: lea     edx,[r12-0x1]
0x1401cc493: lea     rcx,[rip+0x24a03d6]        # 0x14266c870
0x1401cc49a: call    0x1400bc750
0x1401cc49f: cmp     DWORD PTR [rsi],0x0
0x1401cc4a2: je      0x1401cc4cc
0x1401cc4a4: cmp     ebx,edi
0x1401cc4a6: jne     0x1401cc4b0
0x1401cc4a8: mov     edx,DWORD PTR [rip+0x24a1e9a]        # 0x14266e348
0x1401cc4ae: jmp     0x1401cc52a
0x1401cc4b0: lea     rcx,[rip+0x24a03b9]        # 0x14266c870
0x1401cc4b7: cmp     ebx,r13d
0x1401cc4ba: jne     0x1401cc4c4
0x1401cc4bc: mov     edx,DWORD PTR [rip+0x24a1e9e]        # 0x14266e360
0x1401cc4c2: jmp     0x1401cc531
0x1401cc4c4: mov     edx,DWORD PTR [rip+0x24a1e8a]        # 0x14266e354
0x1401cc4ca: jmp     0x1401cc531
0x1401cc4cc: mov     rax,QWORD PTR [rbp-0x78]
0x1401cc4d0: mov     rdx,QWORD PTR [rax+0x130]
0x1401cc4d7: movzx   ecx,r14w
0x1401cc4db: call    0x140071500
0x1401cc4e0: cmp     eax,0xffffffff
0x1401cc4e3: je      0x1401cc50d
0x1401cc4e5: cmp     ebx,edi
0x1401cc4e7: jne     0x1401cc4f1
0x1401cc4e9: mov     edx,DWORD PTR [rip+0x24a1e11]        # 0x14266e300
0x1401cc4ef: jmp     0x1401cc52a
0x1401cc4f1: lea     rcx,[rip+0x24a0378]        # 0x14266c870
0x1401cc4f8: cmp     ebx,r13d
0x1401cc4fb: jne     0x1401cc505
0x1401cc4fd: mov     edx,DWORD PTR [rip+0x24a1e15]        # 0x14266e318
0x1401cc503: jmp     0x1401cc531
0x1401cc505: mov     edx,DWORD PTR [rip+0x24a1e01]        # 0x14266e30c
0x1401cc50b: jmp     0x1401cc531
0x1401cc50d: cmp     ebx,edi
0x1401cc50f: jne     0x1401cc519
0x1401cc511: mov     edx,DWORD PTR [rip+0x24a1da1]        # 0x14266e2b8
0x1401cc517: jmp     0x1401cc52a
0x1401cc519: cmp     ebx,r13d
0x1401cc51c: mov     edx,DWORD PTR [rip+0x24a1dae]        # 0x14266e2d0
0x1401cc522: je      0x1401cc52a
0x1401cc524: mov     edx,DWORD PTR [rip+0x24a1d9a]        # 0x14266e2c4
0x1401cc52a: lea     rcx,[rip+0x24a033f]        # 0x14266c870
0x1401cc531: call    0x140af4570
0x1401cc536: mov     r8d,ebx
0x1401cc539: mov     edx,DWORD PTR [rbp-0x58]
0x1401cc53c: lea     rcx,[rip+0x24a032d]        # 0x14266c870
0x1401cc543: call    0x1400bc750
0x1401cc548: cmp     DWORD PTR [rsi],0x0
0x1401cc54b: je      0x1401cc575
0x1401cc54d: cmp     ebx,edi
0x1401cc54f: jne     0x1401cc559
0x1401cc551: mov     edx,DWORD PTR [rip+0x24a1df5]        # 0x14266e34c
0x1401cc557: jmp     0x1401cc5d3
0x1401cc559: lea     rcx,[rip+0x24a0310]        # 0x14266c870
0x1401cc560: cmp     ebx,r13d
0x1401cc563: jne     0x1401cc56d
0x1401cc565: mov     edx,DWORD PTR [rip+0x24a1df9]        # 0x14266e364
0x1401cc56b: jmp     0x1401cc5da
0x1401cc56d: mov     edx,DWORD PTR [rip+0x24a1de5]        # 0x14266e358
0x1401cc573: jmp     0x1401cc5da
0x1401cc575: mov     rax,QWORD PTR [rbp-0x78]
0x1401cc579: mov     rdx,QWORD PTR [rax+0x130]
0x1401cc580: movzx   ecx,r14w
0x1401cc584: call    0x140071500
0x1401cc589: cmp     eax,0xffffffff
0x1401cc58c: je      0x1401cc5b6
0x1401cc58e: cmp     ebx,edi
0x1401cc590: jne     0x1401cc59a
0x1401cc592: mov     edx,DWORD PTR [rip+0x24a1d6c]        # 0x14266e304
0x1401cc598: jmp     0x1401cc5d3
0x1401cc59a: lea     rcx,[rip+0x24a02cf]        # 0x14266c870
0x1401cc5a1: cmp     ebx,r13d
0x1401cc5a4: jne     0x1401cc5ae
0x1401cc5a6: mov     edx,DWORD PTR [rip+0x24a1d70]        # 0x14266e31c
0x1401cc5ac: jmp     0x1401cc5da
0x1401cc5ae: mov     edx,DWORD PTR [rip+0x24a1d5c]        # 0x14266e310
0x1401cc5b4: jmp     0x1401cc5da
0x1401cc5b6: cmp     ebx,edi
0x1401cc5b8: jne     0x1401cc5c2
0x1401cc5ba: mov     edx,DWORD PTR [rip+0x24a1cfc]        # 0x14266e2bc
0x1401cc5c0: jmp     0x1401cc5d3
0x1401cc5c2: cmp     ebx,r13d
0x1401cc5c5: mov     edx,DWORD PTR [rip+0x24a1d09]        # 0x14266e2d4
0x1401cc5cb: je      0x1401cc5d3
0x1401cc5cd: mov     edx,DWORD PTR [rip+0x24a1cf5]        # 0x14266e2c8
0x1401cc5d3: lea     rcx,[rip+0x24a0296]        # 0x14266c870
0x1401cc5da: call    0x140af4570
0x1401cc5df: inc     ebx
0x1401cc5e1: cmp     ebx,r13d
0x1401cc5e4: jle     0x1401cc3e0
0x1401cc5ea: mov     r12d,DWORD PTR [rbp-0x58]
0x1401cc5ee: xor     r8d,r8d
0x1401cc5f1: lea     rcx,[rip+0x24a0278]        # 0x14266c870
0x1401cc5f8: cmp     DWORD PTR [rsi],r8d
0x1401cc5fb: je      0x1401cc604
0x1401cc5fd: xor     edx,edx
0x1401cc5ff: xor     r9d,r9d
0x1401cc602: jmp     0x1401cc60c
0x1401cc604: mov     edx,0x7
0x1401cc609: mov     r9b,0x1
0x1401cc60c: call    0x1400bc760
0x1401cc611: lea     r8d,[rdi+0x2]
0x1401cc615: lea     edx,[r12-0x1]
0x1401cc61a: lea     rcx,[rip+0x24a024f]        # 0x14266c870
0x1401cc621: call    0x1400bc750
0x1401cc626: movzx   eax,r14w
0x1401cc62a: dec     eax
0x1401cc62c: lea     rbx,[rip+0xffffffffffe339cd]        # 0x140000000
0x1401cc633: cmp     eax,0xf
0x1401cc636: ja      0x1401cc7a0
0x1401cc63c: cdqe    
0x1401cc63e: mov     ecx,DWORD PTR [rbx+rax*4+0x1d6660]
0x1401cc645: add     rcx,rbx
0x1401cc648: jmp     rcx
0x1401cc64a: lea     rdx,[rip+0x1452bdf]        # 0x14161f230 ; literal='Make peace'
0x1401cc651: lea     rcx,[rbp+0x2730]
0x1401cc658: call    0x140069780
0x1401cc65d: nop     
0x1401cc65e: xor     r9d,r9d
0x1401cc661: xor     r8d,r8d
0x1401cc664: lea     rdx,[rbp+0x2730]
0x1401cc66b: lea     rcx,[rip+0x24a01fe]        # 0x14266c870
0x1401cc672: call    0x140af3400
0x1401cc677: nop     
0x1401cc678: lea     rcx,[rbp+0x2730]
0x1401cc67f: jmp     0x1401cc79b
0x1401cc684: lea     rdx,[rip+0x1453a5d]        # 0x1416200e8 ; literal='Demander unconditional surrender'
0x1401cc68b: lea     rcx,[rbp+0x2750]
0x1401cc692: call    0x140069780
0x1401cc697: nop     
0x1401cc698: xor     r9d,r9d
0x1401cc69b: xor     r8d,r8d
0x1401cc69e: lea     rdx,[rbp+0x2750]
0x1401cc6a5: lea     rcx,[rip+0x24a01c4]        # 0x14266c870
0x1401cc6ac: call    0x140af3400
0x1401cc6b1: nop     
0x1401cc6b2: lea     rcx,[rbp+0x2750]
0x1401cc6b9: jmp     0x1401cc79b
0x1401cc6be: lea     rdx,[rip+0x1452b7b]        # 0x14161f240 ; literal='Declare war'
0x1401cc6c5: lea     rcx,[rbp+0x2770]
0x1401cc6cc: call    0x140069780
0x1401cc6d1: nop     
0x1401cc6d2: xor     r9d,r9d
0x1401cc6d5: xor     r8d,r8d
0x1401cc6d8: lea     rdx,[rbp+0x2770]
0x1401cc6df: lea     rcx,[rip+0x24a018a]        # 0x14266c870
0x1401cc6e6: call    0x140af3400
0x1401cc6eb: nop     
0x1401cc6ec: lea     rcx,[rbp+0x2770]
0x1401cc6f3: jmp     0x1401cc79b
0x1401cc6f8: lea     rdx,[rip+0x1452b51]        # 0x14161f250 ; literal='Seek alliance'
0x1401cc6ff: lea     rcx,[rbp+0x2790]
0x1401cc706: call    0x140069780
0x1401cc70b: nop     
0x1401cc70c: xor     r9d,r9d
0x1401cc70f: xor     r8d,r8d
0x1401cc712: lea     rdx,[rbp+0x2790]
0x1401cc719: lea     rcx,[rip+0x24a0150]        # 0x14266c870
0x1401cc720: call    0x140af3400
0x1401cc725: nop     
0x1401cc726: lea     rcx,[rbp+0x2790]
0x1401cc72d: jmp     0x1401cc79b
0x1401cc72f: lea     rdx,[rip+0x1452b2a]        # 0x14161f260 ; literal='Make contact'
0x1401cc736: lea     rcx,[rbp+0x27b0]
0x1401cc73d: call    0x140069780
0x1401cc742: nop     
0x1401cc743: xor     r9d,r9d
0x1401cc746: xor     r8d,r8d
0x1401cc749: lea     rdx,[rbp+0x27b0]
0x1401cc750: lea     rcx,[rip+0x24a0119]        # 0x14266c870
0x1401cc757: call    0x140af3400
0x1401cc75c: nop     
0x1401cc75d: lea     rcx,[rbp+0x27b0]
0x1401cc764: jmp     0x1401cc79b
0x1401cc766: lea     rdx,[rip+0x1452b03]        # 0x14161f270 ; literal='Improve trade'
0x1401cc76d: lea     rcx,[rbp+0x27d0]
0x1401cc774: call    0x140069780
0x1401cc779: nop     
0x1401cc77a: xor     r9d,r9d
0x1401cc77d: xor     r8d,r8d
0x1401cc780: lea     rdx,[rbp+0x27d0]
0x1401cc787: lea     rcx,[rip+0x24a00e2]        # 0x14266c870
0x1401cc78e: call    0x140af3400
0x1401cc793: nop     
0x1401cc794: lea     rcx,[rbp+0x27d0]
0x1401cc79b: call    0x140069460
0x1401cc7a0: cmp     DWORD PTR [rsi],0x0
0x1401cc7a3: je      0x1401ccbc3
0x1401cc7a9: xor     r8d,r8d
0x1401cc7ac: mov     edx,0x6
0x1401cc7b1: mov     r9b,0x1
0x1401cc7b4: lea     rcx,[rip+0x24a00b5]        # 0x14266c870
0x1401cc7bb: call    0x1400bc760
0x1401cc7c0: lea     r8d,[rdi+0x3]
0x1401cc7c4: mov     edx,r12d
0x1401cc7c7: lea     rcx,[rip+0x24a00a2]        # 0x14266c870
0x1401cc7ce: call    0x1400bc750
0x1401cc7d3: mov     eax,DWORD PTR [rsi]
0x1401cc7d5: add     eax,0xfffffffd
0x1401cc7d8: cmp     eax,0x11
0x1401cc7db: ja      0x1401ccbc3
0x1401cc7e1: cdqe    
0x1401cc7e3: mov     ecx,DWORD PTR [rbx+rax*4+0x1d66a0]
0x1401cc7ea: add     rcx,rbx
0x1401cc7ed: jmp     rcx
0x1401cc7ef: lea     rdx,[rip+0x1453472]        # 0x14161fc68 ; literal='Belongs to your civilization'
0x1401cc7f6: lea     rcx,[rbp+0x27f0]
0x1401cc7fd: call    0x140069780
0x1401cc802: nop     
0x1401cc803: xor     r9d,r9d
0x1401cc806: xor     r8d,r8d
0x1401cc809: lea     rdx,[rbp+0x27f0]
0x1401cc810: lea     rcx,[rip+0x24a0059]        # 0x14266c870
0x1401cc817: call    0x140af3400
0x1401cc81c: nop     
0x1401cc81d: lea     rcx,[rbp+0x27f0]
0x1401cc824: jmp     0x1401ccbbe
0x1401cc829: lea     rdx,[rip+0x1453458]        # 0x14161fc88 ; literal='Not under your control'
0x1401cc830: lea     rcx,[rbp+0x2810]
0x1401cc837: call    0x140069780
0x1401cc83c: nop     
0x1401cc83d: xor     r9d,r9d
0x1401cc840: xor     r8d,r8d
0x1401cc843: lea     rdx,[rbp+0x2810]
0x1401cc84a: lea     rcx,[rip+0x24a001f]        # 0x14266c870
0x1401cc851: call    0x140af3400
0x1401cc856: nop     
0x1401cc857: lea     rcx,[rbp+0x2810]
0x1401cc85e: jmp     0x1401ccbbe
0x1401cc863: lea     rdx,[rip+0x1453436]        # 0x14161fca0 ; literal='No civilized inhabitants'
0x1401cc86a: lea     rcx,[rbp+0x2830]
0x1401cc871: call    0x140069780
0x1401cc876: nop     
0x1401cc877: xor     r9d,r9d
0x1401cc87a: xor     r8d,r8d
0x1401cc87d: lea     rdx,[rbp+0x2830]
0x1401cc884: lea     rcx,[rip+0x249ffe5]        # 0x14266c870
0x1401cc88b: call    0x140af3400
0x1401cc890: nop     
0x1401cc891: lea     rcx,[rbp+0x2830]
0x1401cc898: jmp     0x1401ccbbe
0x1401cc89d: lea     rdx,[rip+0x145341c]        # 0x14161fcc0 ; literal='No requestable workers'
0x1401cc8a4: lea     rcx,[rbp+0x2850]
0x1401cc8ab: call    0x140069780
0x1401cc8b0: nop     
0x1401cc8b1: xor     r9d,r9d
0x1401cc8b4: xor     r8d,r8d
0x1401cc8b7: lea     rdx,[rbp+0x2850]
0x1401cc8be: lea     rcx,[rip+0x249ffab]        # 0x14266c870
0x1401cc8c5: call    0x140af3400
0x1401cc8ca: nop     
0x1401cc8cb: lea     rcx,[rbp+0x2850]
0x1401cc8d2: jmp     0x1401ccbbe
0x1401cc8d7: lea     rdx,[rip+0x14533fa]        # 0x14161fcd8 ; literal='Inaccessible'
0x1401cc8de: lea     rcx,[rbp+0x2870]
0x1401cc8e5: call    0x140069780
0x1401cc8ea: nop     
0x1401cc8eb: xor     r9d,r9d
0x1401cc8ee: xor     r8d,r8d
0x1401cc8f1: lea     rdx,[rbp+0x2870]
0x1401cc8f8: lea     rcx,[rip+0x249ff71]        # 0x14266c870
0x1401cc8ff: call    0x140af3400
0x1401cc904: nop     
0x1401cc905: lea     rcx,[rbp+0x2870]
0x1401cc90c: jmp     0x1401ccbbe
0x1401cc911: lea     rdx,[rip+0x14533d0]        # 0x14161fce8 ; literal='Need civilization military leader'
0x1401cc918: lea     rcx,[rbp+0x2890]
0x1401cc91f: call    0x140069780
0x1401cc924: nop     
0x1401cc925: xor     r9d,r9d
0x1401cc928: xor     r8d,r8d
0x1401cc92b: lea     rdx,[rbp+0x2890]
0x1401cc932: lea     rcx,[rip+0x249ff37]        # 0x14266c870
0x1401cc939: call    0x140af3400
0x1401cc93e: nop     
0x1401cc93f: lea     rcx,[rbp+0x2890]
0x1401cc946: jmp     0x1401ccbbe
0x1401cc94b: lea     rdx,[rip+0x14536c6]        # 0x141620018 ; literal='Need military leader'
0x1401cc952: lea     rcx,[rbp+0x28b0]
0x1401cc959: call    0x140069780
0x1401cc95e: nop     
0x1401cc95f: xor     r9d,r9d
0x1401cc962: xor     r8d,r8d
0x1401cc965: lea     rdx,[rbp+0x28b0]
0x1401cc96c: lea     rcx,[rip+0x249fefd]        # 0x14266c870
0x1401cc973: call    0x140af3400
0x1401cc978: nop     
0x1401cc979: lea     rcx,[rbp+0x28b0]
0x1401cc980: jmp     0x1401ccbbe
0x1401cc985: lea     rdx,[rip+0x14536a4]        # 0x141620030 ; literal='Need leader'
0x1401cc98c: lea     rcx,[rbp+0x28d0]
0x1401cc993: call    0x140069780
0x1401cc998: nop     
0x1401cc999: xor     r9d,r9d
0x1401cc99c: xor     r8d,r8d
0x1401cc99f: lea     rdx,[rbp+0x28d0]
0x1401cc9a6: lea     rcx,[rip+0x249fec3]        # 0x14266c870
0x1401cc9ad: call    0x140af3400
0x1401cc9b2: nop     
0x1401cc9b3: lea     rcx,[rbp+0x28d0]
0x1401cc9ba: jmp     0x1401ccbbe
0x1401cc9bf: lea     rdx,[rip+0x145367a]        # 0x141620040 ; literal='Not trading'
0x1401cc9c6: lea     rcx,[rbp+0x28f0]
0x1401cc9cd: call    0x140069780
0x1401cc9d2: nop     
0x1401cc9d3: xor     r9d,r9d
0x1401cc9d6: xor     r8d,r8d
0x1401cc9d9: lea     rdx,[rbp+0x28f0]
0x1401cc9e0: lea     rcx,[rip+0x249fe89]        # 0x14266c870
0x1401cc9e7: call    0x140af3400
0x1401cc9ec: nop     
0x1401cc9ed: lea     rcx,[rbp+0x28f0]
0x1401cc9f4: jmp     0x1401ccbbe
0x1401cc9f9: lea     rdx,[rip+0x1453650]        # 0x141620050 ; literal='Already trading'
0x1401cca00: lea     rcx,[rbp+0x2910]
0x1401cca07: call    0x140069780
0x1401cca0c: nop     
0x1401cca0d: xor     r9d,r9d
0x1401cca10: xor     r8d,r8d
0x1401cca13: lea     rdx,[rbp+0x2910]
0x1401cca1a: lea     rcx,[rip+0x249fe4f]        # 0x14266c870
0x1401cca21: call    0x140af3400
0x1401cca26: nop     
0x1401cca27: lea     rcx,[rbp+0x2910]
0x1401cca2e: jmp     0x1401ccbbe
0x1401cca33: lea     rdx,[rip+0x1453626]        # 0x141620060 ; literal='Already at war'
0x1401cca3a: lea     rcx,[rbp+0x2930]
0x1401cca41: call    0x140069780
0x1401cca46: nop     
0x1401cca47: xor     r9d,r9d
0x1401cca4a: xor     r8d,r8d
0x1401cca4d: lea     rdx,[rbp+0x2930]
0x1401cca54: lea     rcx,[rip+0x249fe15]        # 0x14266c870
0x1401cca5b: call    0x140af3400
0x1401cca60: nop     
0x1401cca61: lea     rcx,[rbp+0x2930]
0x1401cca68: jmp     0x1401ccbbe
0x1401cca6d: lea     rdx,[rip+0x14535fc]        # 0x141620070 ; literal='Already have peace'
0x1401cca74: lea     rcx,[rbp+0x2950]
0x1401cca7b: call    0x140069780
0x1401cca80: nop     
0x1401cca81: xor     r9d,r9d
0x1401cca84: xor     r8d,r8d
0x1401cca87: lea     rdx,[rbp+0x2950]
0x1401cca8e: lea     rcx,[rip+0x249fddb]        # 0x14266c870
0x1401cca95: call    0x140af3400
0x1401cca9a: nop     
0x1401cca9b: lea     rcx,[rbp+0x2950]
0x1401ccaa2: jmp     0x1401ccbbe
0x1401ccaa7: lea     rdx,[rip+0x14535da]        # 0x141620088 ; literal='Already have alliance'
0x1401ccaae: lea     rcx,[rbp+0x2970]
0x1401ccab5: call    0x140069780
0x1401ccaba: nop     
0x1401ccabb: xor     r9d,r9d
0x1401ccabe: xor     r8d,r8d
0x1401ccac1: lea     rdx,[rbp+0x2970]
0x1401ccac8: lea     rcx,[rip+0x249fda1]        # 0x14266c870
0x1401ccacf: call    0x140af3400
0x1401ccad4: nop     
0x1401ccad5: lea     rcx,[rbp+0x2970]
0x1401ccadc: jmp     0x1401ccbbe
0x1401ccae1: lea     rdx,[rip+0x14535b8]        # 0x1416200a0 ; literal='At war'
0x1401ccae8: lea     rcx,[rbp+0x2990]
0x1401ccaef: call    0x140069780
0x1401ccaf4: nop     
0x1401ccaf5: xor     r9d,r9d
0x1401ccaf8: xor     r8d,r8d
0x1401ccafb: lea     rdx,[rbp+0x2990]
0x1401ccb02: lea     rcx,[rip+0x249fd67]        # 0x14266c870
0x1401ccb09: call    0x140af3400
0x1401ccb0e: nop     
0x1401ccb0f: lea     rcx,[rbp+0x2990]
0x1401ccb16: jmp     0x1401ccbbe
0x1401ccb1b: lea     rdx,[rip+0x1453586]        # 0x1416200a8 ; literal='Cannot communicate'
0x1401ccb22: lea     rcx,[rbp+0x29b0]
0x1401ccb29: call    0x140069780
0x1401ccb2e: nop     
0x1401ccb2f: xor     r9d,r9d
0x1401ccb32: xor     r8d,r8d
0x1401ccb35: lea     rdx,[rbp+0x29b0]
0x1401ccb3c: lea     rcx,[rip+0x249fd2d]        # 0x14266c870
0x1401ccb43: call    0x140af3400
0x1401ccb48: nop     
0x1401ccb49: lea     rcx,[rbp+0x29b0]
0x1401ccb50: jmp     0x1401ccbbe
0x1401ccb52: lea     rdx,[rip+0x1453567]        # 0x1416200c0 ; literal='Not in contact'
0x1401ccb59: lea     rcx,[rbp+0x29d0]
0x1401ccb60: call    0x140069780
0x1401ccb65: nop     
0x1401ccb66: xor     r9d,r9d
0x1401ccb69: xor     r8d,r8d
0x1401ccb6c: lea     rdx,[rbp+0x29d0]
0x1401ccb73: lea     rcx,[rip+0x249fcf6]        # 0x14266c870
0x1401ccb7a: call    0x140af3400
0x1401ccb7f: nop     
0x1401ccb80: lea     rcx,[rbp+0x29d0]
0x1401ccb87: jmp     0x1401ccbbe
0x1401ccb89: lea     rdx,[rip+0x1453540]        # 0x1416200d0 ; literal='Too hostile'
0x1401ccb90: lea     rcx,[rbp+0x29f0]
0x1401ccb97: call    0x140069780
0x1401ccb9c: nop     
0x1401ccb9d: xor     r9d,r9d
0x1401ccba0: xor     r8d,r8d
0x1401ccba3: lea     rdx,[rbp+0x29f0]
0x1401ccbaa: lea     rcx,[rip+0x249fcbf]        # 0x14266c870
0x1401ccbb1: call    0x140af3400
0x1401ccbb6: nop     
0x1401ccbb7: lea     rcx,[rbp+0x29f0]
0x1401ccbbe: call    0x140069460
0x1401ccbc3: add     r12d,0x3
0x1401ccbc7: mov     DWORD PTR [rbp-0x58],r12d
0x1401ccbcb: inc     r14w
0x1401ccbcf: add     rsi,0x4
0x1401ccbd3: cmp     r14w,0x11
0x1401ccbd8: jl      0x1401cc3c6
0x1401ccbde: mov     r12,QWORD PTR [rbp-0x78]
0x1401ccbe2: mov     eax,DWORD PTR [rbp-0x48]
0x1401ccbe5: lea     r13d,[rax-0x37]
0x1401ccbe9: lea     r15d,[rax-0x2]
0x1401ccbed: xor     eax,eax
0x1401ccbef: mov     esi,eax
0x1401ccbf1: mov     r14d,DWORD PTR [rbp-0x70]
0x1401ccbf5: test    r14d,r14d
0x1401ccbf8: js      0x1401cf502
0x1401ccbfe: mov     edi,eax
0x1401ccc00: movsxd  r12,r14d
0x1401ccc03: mov     ebx,r13d
0x1401ccc06: cmp     r13d,r15d
0x1401ccc09: jg      0x1401cf4f0
0x1401ccc0f: nop     
0x1401ccc10: mov     r8d,ebx
0x1401ccc13: mov     edx,esi
0x1401ccc15: lea     rcx,[rip+0x249fc54]        # 0x14266c870
0x1401ccc1c: call    0x1400bc750
0x1401ccc21: xor     r8d,r8d
0x1401ccc24: xor     edx,edx
0x1401ccc26: lea     rcx,[rip+0x249fc43]        # 0x14266c870
0x1401ccc2d: call    0x1400bc7c0
0x1401ccc32: test    rdi,rdi
0x1401ccc35: jne     0x1401cf48d
0x1401ccc3b: cmp     ebx,r13d
0x1401ccc3e: jne     0x1401cf471
0x1401ccc44: mov     edx,DWORD PTR [rip+0x24a154a]        # 0x14266e194
0x1401ccc4a: jmp     0x1401cf4d9
0x1401ccc4f: mov     rbx,QWORD PTR [rsp+0x78]
0x1401ccc54: lea     rcx,[rbx+0x3d8]
0x1401ccc5b: call    0x140070480
0x1401ccc60: test    rax,rax
0x1401ccc63: je      0x1401cd362
0x1401ccc69: mov     edi,DWORD PTR [rbp-0x48]
0x1401ccc6c: lea     r15d,[rdi+0x2]
0x1401ccc70: mov     DWORD PTR [rbp-0x58],r15d
0x1401ccc74: lea     eax,[rdi+0x20]
0x1401ccc77: mov     DWORD PTR [rbp-0x6c],eax
0x1401ccc7a: mov     ecx,DWORD PTR [rbp-0x70]
0x1401ccc7d: lea     eax,[rcx-0x1]
0x1401ccc80: mov     DWORD PTR [rbp-0x60],eax
0x1401ccc83: lea     edx,[rcx-0x5]
0x1401ccc86: mov     eax,0x55555556
0x1401ccc8b: imul    edx
0x1401ccc8d: mov     r14d,edx
0x1401ccc90: shr     r14d,0x1f
0x1401ccc94: add     r14d,edx
0x1401ccc97: mov     DWORD PTR [rbp-0x28],r14d
0x1401ccc9b: lea     rcx,[rbx+0x3d8]
0x1401ccca2: call    0x140070480
0x1401ccca7: mov     rsi,rax
0x1401cccaa: mov     QWORD PTR [rbp+0x30],rax
0x1401cccae: cmp     eax,r14d
0x1401cccb1: jle     0x1401cccbb
0x1401cccb3: lea     ebx,[rdi+0x1e]
0x1401cccb6: mov     DWORD PTR [rbp-0x6c],ebx
0x1401cccb9: jmp     0x1401cccbe
0x1401cccbb: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401cccbe: lea     eax,[rbx-0x3]
0x1401cccc1: mov     DWORD PTR [rsp+0x74],eax
0x1401cccc5: xor     eax,eax
0x1401cccc7: mov     edi,eax
0x1401cccc9: mov     QWORD PTR [rbp-0x30],rax
0x1401ccccd: mov     r12d,0x5
0x1401cccd3: mov     DWORD PTR [rsp+0x70],r12d
0x1401cccd8: mov     r13d,r12d
0x1401cccdb: mov     DWORD PTR [rbp-0x68],r12d
0x1401cccdf: mov     r8,QWORD PTR [rsp+0x78]
0x1401ccce4: mov     ecx,DWORD PTR [r8+0x3f0]
0x1401ccceb: mov     edx,esi
0x1401ccced: sub     edx,r14d
0x1401cccf0: cmp     ecx,edx
0x1401cccf2: cmovle  edx,ecx
0x1401cccf5: test    edx,edx
0x1401cccf7: cmovns  eax,edx
0x1401cccfa: mov     DWORD PTR [rbp-0x10],eax
0x1401cccfd: lea     ecx,[r14+rax*1]
0x1401ccd01: mov     DWORD PTR [rbp-0x20],ecx
0x1401ccd04: cmp     eax,ecx
0x1401ccd06: jge     0x1401ccff3
0x1401ccd0c: lea     rcx,[r8+0x3d8]
0x1401ccd13: mov     QWORD PTR [rbp+0x18],rcx
0x1401ccd17: cmp     eax,esi
0x1401ccd19: jge     0x1401ccfe9
0x1401ccd1f: movsxd  rdx,eax
0x1401ccd22: call    0x140070850
0x1401ccd27: mov     r12,QWORD PTR [rax]
0x1401ccd2a: mov     QWORD PTR [rbp+0x48],r12
0x1401ccd2e: cmp     BYTE PTR [rip+0x21e5d20],0x0        # 0x1423b2a55
0x1401ccd35: je      0x1401ccd59
0x1401ccd37: mov     eax,DWORD PTR [rbp-0x38]
0x1401ccd3a: cmp     eax,r15d
0x1401ccd3d: jl      0x1401ccd59
0x1401ccd3f: cmp     eax,ebx
0x1401ccd41: jg      0x1401ccd59
0x1401ccd43: mov     ecx,DWORD PTR [rbp-0x3c]
0x1401ccd46: cmp     ecx,r13d
0x1401ccd49: jl      0x1401ccd59
0x1401ccd4b: lea     eax,[r13+0x2]
0x1401ccd4f: cmp     ecx,eax
0x1401ccd51: cmovle  rdi,r12
0x1401ccd55: mov     QWORD PTR [rbp-0x30],rdi
0x1401ccd59: xor     r8d,r8d
0x1401ccd5c: mov     edx,0x7
0x1401ccd61: mov     r9b,0x1
0x1401ccd64: lea     rcx,[rip+0x249fb05]        # 0x14266c870
0x1401ccd6b: call    0x1400bc760
0x1401ccd70: mov     esi,r15d
0x1401ccd73: cmp     r15d,ebx
0x1401ccd76: jg      0x1401cce1d
0x1401ccd7c: lea     r12d,[r13+0x3]
0x1401ccd80: movsxd  r14,r15d
0x1401ccd83: mov     edi,r13d
0x1401ccd86: cmp     r13d,r12d
0x1401ccd89: jge     0x1401cce08
0x1401ccd8b: movsxd  r15,ebx
0x1401ccd8e: lea     rbx,[rip+0x24a149b]        # 0x14266e230
0x1401ccd95: mov     r13d,DWORD PTR [rbp-0x58]
0x1401ccd99: nop     DWORD PTR [rax+0x0]
0x1401ccda0: mov     r8d,esi
0x1401ccda3: mov     edx,edi
0x1401ccda5: lea     rcx,[rip+0x249fac4]        # 0x14266c870
0x1401ccdac: call    0x1400bc750
0x1401ccdb1: cmp     esi,r13d
0x1401ccdb4: jne     0x1401ccdbb
0x1401ccdb6: mov     edx,DWORD PTR [rbx-0x18]
0x1401ccdb9: jmp     0x1401ccdc7
0x1401ccdbb: cmp     r14,r15
0x1401ccdbe: jne     0x1401ccdc4
0x1401ccdc0: mov     edx,DWORD PTR [rbx]
0x1401ccdc2: jmp     0x1401ccdc7
0x1401ccdc4: mov     edx,DWORD PTR [rbx-0xc]
0x1401ccdc7: lea     rcx,[rip+0x249faa2]        # 0x14266c870
0x1401ccdce: call    0x140af4570
0x1401ccdd3: xor     edx,edx
0x1401ccdd5: lea     rcx,[rip+0x2222e14]        # 0x1423efbf0
0x1401ccddc: call    0x1400735c0
0x1401ccde1: test    al,al
0x1401ccde3: je      0x1401ccdf6
0x1401ccde5: mov     r8b,0x1
0x1401ccde8: xor     edx,edx
0x1401ccdea: lea     rcx,[rip+0x249fa7f]        # 0x14266c870
0x1401ccdf1: call    0x1400bc7c0
0x1401ccdf6: inc     edi
0x1401ccdf8: add     rbx,0x4
0x1401ccdfc: cmp     edi,r12d
0x1401ccdff: jl      0x1401ccda0
0x1401cce01: mov     r13d,DWORD PTR [rbp-0x68]
0x1401cce05: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401cce08: inc     esi
0x1401cce0a: inc     r14
0x1401cce0d: cmp     esi,ebx
0x1401cce0f: jle     0x1401ccd83
0x1401cce15: mov     r15d,DWORD PTR [rbp-0x58]
0x1401cce19: mov     r12,QWORD PTR [rbp+0x48]
0x1401cce1d: xor     r8d,r8d
0x1401cce20: mov     edx,0x7
0x1401cce25: mov     r9b,0x1
0x1401cce28: lea     rcx,[rip+0x249fa41]        # 0x14266c870
0x1401cce2f: call    0x1400bc760
0x1401cce34: lea     rcx,[rbp+0x10f0]
0x1401cce3b: call    0x140070cc0
0x1401cce40: nop     
0x1401cce41: lea     rcx,[rbp+0x1570]
0x1401cce48: call    0x140070cc0
0x1401cce4d: nop     
0x1401cce4e: mov     rcx,QWORD PTR [r12+0x10]
0x1401cce53: add     rcx,0x38
0x1401cce57: xor     r9d,r9d
0x1401cce5a: mov     r8b,0x1
0x1401cce5d: lea     rdx,[rbp+0x1570]
0x1401cce64: call    0x140aae180
0x1401cce69: lea     rdx,[rbp+0x1570]
0x1401cce70: lea     rcx,[rbp+0x10f0]
0x1401cce77: call    0x1400bb340
0x1401cce7c: lea     edx,[r13+0x1]
0x1401cce80: mov     r8d,r15d
0x1401cce83: lea     rcx,[rip+0x249f9e6]        # 0x14266c870
0x1401cce8a: call    0x1400bc750
0x1401cce8f: sub     ebx,r15d
0x1401cce92: lea     rcx,[rbp+0x10f0]
0x1401cce99: call    0x140070960
0x1401cce9e: lea     ecx,[rbx-0x2]
0x1401ccea1: movsxd  rdx,ecx
0x1401ccea4: cmp     rax,rdx
0x1401ccea7: jb      0x1401ccf0b
0x1401ccea9: lea     edi,[rbx-0x3]
0x1401cceac: test    edi,edi
0x1401cceae: js      0x1401ccec6
0x1401cceb0: movsxd  rdx,ebx
0x1401cceb3: sub     rdx,0x3
0x1401cceb7: xor     r8d,r8d
0x1401cceba: lea     rcx,[rbp+0x10f0]
0x1401ccec1: call    0x1400e2860
0x1401ccec6: cmp     edi,0x3
0x1401ccec9: jle     0x1401ccf0b
0x1401ccecb: movsxd  rdx,ebx
0x1401ccece: sub     rdx,0x6
0x1401cced2: lea     rcx,[rbp+0x10f0]
0x1401cced9: call    0x1400fcbe0
0x1401ccede: mov     BYTE PTR [rax],0x2e
0x1401ccee1: lea     eax,[rbx-0x5]
0x1401ccee4: movsxd  rdx,eax
0x1401ccee7: lea     rcx,[rbp+0x10f0]
0x1401cceee: call    0x1400fcbe0
0x1401ccef3: mov     BYTE PTR [rax],0x2e
0x1401ccef6: lea     eax,[rbx-0x4]
0x1401ccef9: movsxd  rdx,eax
0x1401ccefc: lea     rcx,[rbp+0x10f0]
0x1401ccf03: call    0x1400fcbe0
0x1401ccf08: mov     BYTE PTR [rax],0x2e
0x1401ccf0b: xor     r9d,r9d
0x1401ccf0e: xor     r8d,r8d
0x1401ccf11: lea     rdx,[rbp+0x10f0]
0x1401ccf18: lea     rcx,[rip+0x249f951]        # 0x14266c870
0x1401ccf1f: call    0x140af3400
0x1401ccf24: lea     r14,[rip+0x24a6e2d]        # 0x142673d58
0x1401ccf2b: mov     r15d,DWORD PTR [rsp+0x74]
0x1401ccf30: mov     edi,r15d
0x1401ccf33: mov     rbx,r14
0x1401ccf36: mov     esi,0x4
0x1401ccf3b: mov     r15,QWORD PTR [rbp-0x78]
0x1401ccf3f: nop     
0x1401ccf40: mov     r8d,edi
0x1401ccf43: mov     edx,r13d
0x1401ccf46: lea     rcx,[rip+0x249f923]        # 0x14266c870
0x1401ccf4d: call    0x1400bc750
0x1401ccf52: mov     rcx,QWORD PTR [r12+0x10]
0x1401ccf57: mov     rdx,QWORD PTR [r15+0x130]
0x1401ccf5e: mov     ecx,DWORD PTR [rcx+0xe0]
0x1401ccf64: call    0x1400bb5a0
0x1401ccf69: xor     r8d,r8d
0x1401ccf6c: lea     rcx,[rip+0x249f8fd]        # 0x14266c870
0x1401ccf73: cmp     eax,0xffffffff
0x1401ccf76: je      0x1401ccf7d
0x1401ccf78: mov     edx,DWORD PTR [rbx-0x30]
0x1401ccf7b: jmp     0x1401ccf7f
0x1401ccf7d: mov     edx,DWORD PTR [rbx]
0x1401ccf7f: call    0x140af4ba0
0x1401ccf84: inc     edi
0x1401ccf86: add     rbx,0xc
0x1401ccf8a: sub     rsi,0x1
0x1401ccf8e: jne     0x1401ccf40
0x1401ccf90: inc     r13d
0x1401ccf93: add     r14,0x4
0x1401ccf97: lea     rax,[rip+0x24a6dc6]        # 0x142673d64
0x1401ccf9e: cmp     r14,rax
0x1401ccfa1: mov     r15d,DWORD PTR [rsp+0x74]
0x1401ccfa6: jl      0x1401ccf30
0x1401ccfa8: mov     DWORD PTR [rbp-0x68],r13d
0x1401ccfac: lea     rcx,[rbp+0x1570]
0x1401ccfb3: call    0x140069460
0x1401ccfb8: nop     
0x1401ccfb9: lea     rcx,[rbp+0x10f0]
0x1401ccfc0: call    0x140069460
0x1401ccfc5: mov     eax,DWORD PTR [rbp-0x10]
0x1401ccfc8: inc     eax
0x1401ccfca: mov     DWORD PTR [rbp-0x10],eax
0x1401ccfcd: cmp     eax,DWORD PTR [rbp-0x20]
0x1401ccfd0: mov     r15d,DWORD PTR [rbp-0x58]
0x1401ccfd4: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401ccfd7: mov     rdi,QWORD PTR [rbp-0x30]
0x1401ccfdb: mov     rsi,QWORD PTR [rbp+0x30]
0x1401ccfdf: mov     rcx,QWORD PTR [rbp+0x18]
0x1401ccfe3: jl      0x1401ccd17
0x1401ccfe9: mov     r14d,DWORD PTR [rbp-0x28]
0x1401ccfed: mov     r12d,0x5
0x1401ccff3: cmp     esi,r14d
0x1401ccff6: jle     0x1401cd069
0x1401ccff8: lea     eax,[r14+0x1]
0x1401ccffc: lea     ebx,[rax+rax*2]
0x1401ccfff: lea     rcx,[rbp+0x1d0]
0x1401cd006: call    0x1400bc990
0x1401cd00b: lea     r9d,[rsi-0x1]
0x1401cd00f: mov     DWORD PTR [rsp+0x30],ebx
0x1401cd013: mov     DWORD PTR [rsp+0x28],0x6
0x1401cd01b: mov     DWORD PTR [rsp+0x20],r14d
0x1401cd020: xor     r8d,r8d
0x1401cd023: mov     rsi,QWORD PTR [rsp+0x78]
0x1401cd028: mov     edx,DWORD PTR [rsi+0x3f0]
0x1401cd02e: lea     rcx,[rbp+0x1d0]
0x1401cd035: call    0x1400bc9b0
0x1401cd03a: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401cd03d: lea     r9d,[rbx+0x1]
0x1401cd041: xor     r15d,r15d
0x1401cd044: mov     DWORD PTR [rsp+0x28],r15d
0x1401cd049: movzx   eax,BYTE PTR [rsi+0x3f4]
0x1401cd050: mov     BYTE PTR [rsp+0x20],al
0x1401cd054: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401cd058: mov     edx,DWORD PTR [rbp-0x38]
0x1401cd05b: lea     rcx,[rbp+0x1d0]
0x1401cd062: call    0x1414284b0
0x1401cd067: jmp     0x1401cd06c
0x1401cd069: xor     r15d,r15d
0x1401cd06c: test    rdi,rdi
0x1401cd06f: je      0x1401ccbde
0x1401cd075: lea     esi,[rbx+0x2]
0x1401cd078: mov     rax,QWORD PTR [rdi+0x10]
0x1401cd07c: mov     rbx,QWORD PTR [rax+0x130]
0x1401cd083: test    rbx,rbx
0x1401cd086: je      0x1401cd2fa
0x1401cd08c: mov     rbx,QWORD PTR [rbx+0x8]
0x1401cd090: test    rbx,rbx
0x1401cd093: je      0x1401cd2fa
0x1401cd099: lea     rdx,[rbp+0xc8]
0x1401cd0a0: mov     rcx,rbx
0x1401cd0a3: call    0x140070870
0x1401cd0a8: lea     rdx,[rbp+0x168]
0x1401cd0af: mov     rcx,rbx
0x1401cd0b2: call    0x140070860
0x1401cd0b7: lea     rcx,[rbx+0x18]
0x1401cd0bb: lea     rdx,[rbp+0x160]
0x1401cd0c2: call    0x140070870
0x1401cd0c7: lea     r8,[rbp+0x168]
0x1401cd0ce: lea     rdx,[rbp+0x2]
0x1401cd0d2: lea     rcx,[rbp+0xc8]
0x1401cd0d9: call    0x140070450
0x1401cd0de: xor     edx,edx
0x1401cd0e0: movzx   ecx,BYTE PTR [rax]
0x1401cd0e3: call    0x140066de0
0x1401cd0e8: test    al,al
0x1401cd0ea: je      0x1401cd2fa
0x1401cd0f0: mov     r12d,0x14
0x1401cd0f6: mov     r14d,DWORD PTR [rbp-0x60]
0x1401cd0fa: nop     WORD PTR [rax+rax*1+0x0]
0x1401cd100: mov     ebx,r15d
0x1401cd103: lea     rcx,[rbp+0x160]
0x1401cd10a: call    0x140070440
0x1401cd10f: mov     r8d,DWORD PTR [rax]
0x1401cd112: cmp     r8d,0x1f4
0x1401cd119: jl      0x1401cd156
0x1401cd11b: mov     ecx,0x1f4
0x1401cd120: movzx   r9d,BYTE PTR [rbp-0x80]
0x1401cd125: mov     r10d,DWORD PTR [rbp-0x70]
0x1401cd129: nop     DWORD PTR [rax+0x0]
0x1401cd130: sub     r8d,ecx
0x1401cd133: lea     edx,[rbx+0x1]
0x1401cd136: cmp     ebx,0xbb8
0x1401cd13c: cmovge  edx,ebx
0x1401cd13f: lea     eax,[rcx+0x64]
0x1401cd142: cmovge  eax,ecx
0x1401cd145: mov     ecx,eax
0x1401cd147: mov     ebx,edx
0x1401cd149: cmp     r8d,eax
0x1401cd14c: jge     0x1401cd130
0x1401cd14e: mov     BYTE PTR [rbp-0x80],r9b
0x1401cd152: mov     DWORD PTR [rbp-0x70],r10d
0x1401cd156: lea     rcx,[rbp+0xeb0]
0x1401cd15d: call    0x140070cc0
0x1401cd162: nop     
0x1401cd163: lea     rcx,[rbp+0x1490]
0x1401cd16a: call    0x140070cc0
0x1401cd16f: nop     
0x1401cd170: mov     edx,ebx
0x1401cd172: lea     rcx,[rbp+0xeb0]
0x1401cd179: call    0x14078cdb0
0x1401cd17e: lea     rcx,[rbp+0xeb0]
0x1401cd185: call    0x140070b50
0x1401cd18a: test    al,al
0x1401cd18c: jne     0x1401cd1a1
0x1401cd18e: lea     rdx,[rip+0x143685b]        # 0x1416039f0 ; literal=' '
0x1401cd195: lea     rcx,[rbp+0xeb0]
0x1401cd19c: call    0x140070b90
0x1401cd1a1: mov     rax,QWORD PTR [rdi+0x10]
0x1401cd1a5: movzx   ebx,WORD PTR [rax+0x4]
0x1401cd1a9: movzx   edi,WORD PTR [rax+0x2]
0x1401cd1ad: lea     rcx,[rbp+0xc8]
0x1401cd1b4: call    0x140070440
0x1401cd1b9: movzx   r9d,bx
0x1401cd1bd: movzx   r8d,di
0x1401cd1c1: movzx   edx,WORD PTR [rax]
0x1401cd1c4: lea     rcx,[rbp+0x1490]
0x1401cd1cb: call    0x14078dd20
0x1401cd1d0: lea     rdx,[rbp+0x1490]
0x1401cd1d7: lea     rcx,[rbp+0xeb0]
0x1401cd1de: call    0x1400bb340
0x1401cd1e3: xor     r8d,r8d
0x1401cd1e6: mov     edx,0x7
0x1401cd1eb: mov     r9b,0x1
0x1401cd1ee: lea     rcx,[rip+0x249f67b]        # 0x14266c870
0x1401cd1f5: call    0x1400bc760
0x1401cd1fa: mov     r8d,esi
0x1401cd1fd: mov     ebx,DWORD PTR [rsp+0x70]
0x1401cd201: mov     edx,ebx
0x1401cd203: lea     rcx,[rip+0x249f666]        # 0x14266c870
0x1401cd20a: call    0x1400bc750
0x1401cd20f: lea     rcx,[rbp+0xeb0]
0x1401cd216: call    0x140070960
0x1401cd21b: cmp     rax,0x17
0x1401cd21f: jbe     0x1401cd26f
0x1401cd221: xor     r8d,r8d
0x1401cd224: mov     edx,0x17
0x1401cd229: lea     rcx,[rbp+0xeb0]
0x1401cd230: call    0x1400e2860
0x1401cd235: mov     rdx,r12
0x1401cd238: lea     rcx,[rbp+0xeb0]
0x1401cd23f: call    0x1400fcbe0
0x1401cd244: mov     BYTE PTR [rax],0x2e
0x1401cd247: mov     edx,0x15
0x1401cd24c: lea     rcx,[rbp+0xeb0]
0x1401cd253: call    0x1400fcbe0
0x1401cd258: mov     BYTE PTR [rax],0x2e
0x1401cd25b: mov     edx,0x16
0x1401cd260: lea     rcx,[rbp+0xeb0]
0x1401cd267: call    0x1400fcbe0
0x1401cd26c: mov     BYTE PTR [rax],0x2e
0x1401cd26f: xor     r9d,r9d
0x1401cd272: xor     r8d,r8d
0x1401cd275: lea     rdx,[rbp+0xeb0]
0x1401cd27c: lea     rcx,[rip+0x249f5ed]        # 0x14266c870
0x1401cd283: call    0x140af3400
0x1401cd288: inc     ebx
0x1401cd28a: mov     DWORD PTR [rsp+0x70],ebx
0x1401cd28e: lea     rcx,[rbp+0x1490]
0x1401cd295: call    0x140069460
0x1401cd29a: nop     
0x1401cd29b: lea     rcx,[rbp+0xeb0]
0x1401cd2a2: call    0x140069460
0x1401cd2a7: cmp     ebx,r14d
0x1401cd2aa: jg      0x1401ccbde
0x1401cd2b0: lea     rcx,[rbp+0xc8]
0x1401cd2b7: call    0x140070a60
0x1401cd2bc: lea     rcx,[rbp+0x160]
0x1401cd2c3: call    0x140070980
0x1401cd2c8: lea     r8,[rbp+0x168]
0x1401cd2cf: lea     rdx,[rbp+0x2]
0x1401cd2d3: lea     rcx,[rbp+0xc8]
0x1401cd2da: call    0x140070450
0x1401cd2df: xor     edx,edx
0x1401cd2e1: movzx   ecx,BYTE PTR [rax]
0x1401cd2e4: call    0x140066de0
0x1401cd2e9: test    al,al
0x1401cd2eb: mov     rdi,QWORD PTR [rbp-0x30]
0x1401cd2ef: jne     0x1401cd100
0x1401cd2f5: jmp     0x1401ccbde
0x1401cd2fa: xor     r8d,r8d
0x1401cd2fd: mov     edx,0x7
0x1401cd302: mov     r9b,0x1
0x1401cd305: lea     rcx,[rip+0x249f564]        # 0x14266c870
0x1401cd30c: call    0x1400bc760
0x1401cd311: mov     r8d,esi
0x1401cd314: mov     edx,r12d
0x1401cd317: lea     rcx,[rip+0x249f552]        # 0x14266c870
0x1401cd31e: call    0x1400bc750
0x1401cd323: lea     rdx,[rip+0x1452de6]        # 0x141620110 ; literal='No notable skills'
0x1401cd32a: lea     rcx,[rbp+0x2a30]
0x1401cd331: call    0x140069780
0x1401cd336: nop     
0x1401cd337: xor     r9d,r9d
0x1401cd33a: xor     r8d,r8d
0x1401cd33d: lea     rdx,[rbp+0x2a30]
0x1401cd344: lea     rcx,[rip+0x249f525]        # 0x14266c870
0x1401cd34b: call    0x140af3400
0x1401cd350: nop     
0x1401cd351: lea     rcx,[rbp+0x2a30]
0x1401cd358: call    0x140069460
0x1401cd35d: jmp     0x1401ccbde
0x1401cd362: xor     r8d,r8d
0x1401cd365: mov     edx,0x6
0x1401cd36a: mov     r9b,0x1
0x1401cd36d: lea     rcx,[rip+0x249f4fc]        # 0x14266c870
0x1401cd374: call    0x1400bc760
0x1401cd379: mov     r8d,DWORD PTR [rbp-0x60]
0x1401cd37d: mov     edx,0x5
0x1401cd382: lea     rcx,[rip+0x249f4e7]        # 0x14266c870
0x1401cd389: call    0x1400bc750
0x1401cd38e: lea     rdx,[rip+0x145271b]        # 0x14161fab0 ; literal='No workers available'
0x1401cd395: lea     rcx,[rbp+0x2a50]
0x1401cd39c: call    0x140069780
0x1401cd3a1: nop     
0x1401cd3a2: xor     r9d,r9d
0x1401cd3a5: xor     r8d,r8d
0x1401cd3a8: lea     rdx,[rbp+0x2a50]
0x1401cd3af: lea     rcx,[rip+0x249f4ba]        # 0x14266c870
0x1401cd3b6: call    0x140af3400
0x1401cd3bb: nop     
0x1401cd3bc: lea     rcx,[rbp+0x2a50]
0x1401cd3c3: call    0x140069460
0x1401cd3c8: jmp     0x1401ccbe2
0x1401cd3cd: mov     edi,DWORD PTR [rbp-0x48]
0x1401cd3d0: add     edi,0x2
0x1401cd3d3: lea     ebx,[r13-0x2]
0x1401cd3d7: mov     rax,QWORD PTR [r12+0x130]
0x1401cd3df: mov     esi,edi
0x1401cd3e1: cmp     DWORD PTR [rax],0x5
0x1401cd3e4: jne     0x1401cdd18
0x1401cd3ea: cmp     edi,ebx
0x1401cd3ec: jg      0x1401cd55f
0x1401cd3f2: mov     eax,0x5
0x1401cd3f7: nop     WORD PTR [rax+rax*1+0x0]
0x1401cd400: mov     r8d,esi
0x1401cd403: mov     edx,eax
0x1401cd405: lea     rcx,[rip+0x249f464]        # 0x14266c870
0x1401cd40c: call    0x1400bc750
0x1401cd411: mov     rax,QWORD PTR [r12+0x130]
0x1401cd419: test    BYTE PTR [rax+0x58],0x8
0x1401cd41d: je      0x1401cd446
0x1401cd41f: cmp     esi,edi
0x1401cd421: jne     0x1401cd42b
0x1401cd423: mov     edx,DWORD PTR [rip+0x24a0ed3]        # 0x14266e2fc
0x1401cd429: jmp     0x1401cd462
0x1401cd42b: lea     rcx,[rip+0x249f43e]        # 0x14266c870
0x1401cd432: cmp     esi,ebx
0x1401cd434: jne     0x1401cd43e
0x1401cd436: mov     edx,DWORD PTR [rip+0x24a0ed8]        # 0x14266e314
0x1401cd43c: jmp     0x1401cd469
0x1401cd43e: mov     edx,DWORD PTR [rip+0x24a0ec4]        # 0x14266e308
0x1401cd444: jmp     0x1401cd469
0x1401cd446: cmp     esi,edi
0x1401cd448: jne     0x1401cd452
0x1401cd44a: mov     edx,DWORD PTR [rip+0x24a0e64]        # 0x14266e2b4
0x1401cd450: jmp     0x1401cd462
0x1401cd452: cmp     esi,ebx
0x1401cd454: mov     edx,DWORD PTR [rip+0x24a0e72]        # 0x14266e2cc
0x1401cd45a: je      0x1401cd462
0x1401cd45c: mov     edx,DWORD PTR [rip+0x24a0e5e]        # 0x14266e2c0
0x1401cd462: lea     rcx,[rip+0x249f407]        # 0x14266c870
0x1401cd469: call    0x140af4570
0x1401cd46e: mov     r8d,esi
0x1401cd471: mov     edx,0x6
0x1401cd476: lea     rcx,[rip+0x249f3f3]        # 0x14266c870
0x1401cd47d: call    0x1400bc750
0x1401cd482: mov     rax,QWORD PTR [r12+0x130]
0x1401cd48a: test    BYTE PTR [rax+0x58],0x8
0x1401cd48e: je      0x1401cd4b7
0x1401cd490: cmp     esi,edi
0x1401cd492: jne     0x1401cd49c
0x1401cd494: mov     edx,DWORD PTR [rip+0x24a0e66]        # 0x14266e300
0x1401cd49a: jmp     0x1401cd4d3
0x1401cd49c: lea     rcx,[rip+0x249f3cd]        # 0x14266c870
0x1401cd4a3: cmp     esi,ebx
0x1401cd4a5: jne     0x1401cd4af
0x1401cd4a7: mov     edx,DWORD PTR [rip+0x24a0e6b]        # 0x14266e318
0x1401cd4ad: jmp     0x1401cd4da
0x1401cd4af: mov     edx,DWORD PTR [rip+0x24a0e57]        # 0x14266e30c
0x1401cd4b5: jmp     0x1401cd4da
0x1401cd4b7: cmp     esi,edi
0x1401cd4b9: jne     0x1401cd4c3
0x1401cd4bb: mov     edx,DWORD PTR [rip+0x24a0df7]        # 0x14266e2b8
0x1401cd4c1: jmp     0x1401cd4d3
0x1401cd4c3: cmp     esi,ebx
0x1401cd4c5: mov     edx,DWORD PTR [rip+0x24a0e05]        # 0x14266e2d0
0x1401cd4cb: je      0x1401cd4d3
0x1401cd4cd: mov     edx,DWORD PTR [rip+0x24a0df1]        # 0x14266e2c4
0x1401cd4d3: lea     rcx,[rip+0x249f396]        # 0x14266c870
0x1401cd4da: call    0x140af4570
0x1401cd4df: mov     r8d,esi
0x1401cd4e2: mov     edx,0x7
0x1401cd4e7: lea     rcx,[rip+0x249f382]        # 0x14266c870
0x1401cd4ee: call    0x1400bc750
0x1401cd4f3: mov     rax,QWORD PTR [r12+0x130]
0x1401cd4fb: test    BYTE PTR [rax+0x58],0x8
0x1401cd4ff: je      0x1401cd528
0x1401cd501: cmp     esi,edi
0x1401cd503: jne     0x1401cd50d
0x1401cd505: mov     edx,DWORD PTR [rip+0x24a0df9]        # 0x14266e304
0x1401cd50b: jmp     0x1401cd544
0x1401cd50d: lea     rcx,[rip+0x249f35c]        # 0x14266c870
0x1401cd514: cmp     esi,ebx
0x1401cd516: jne     0x1401cd520
0x1401cd518: mov     edx,DWORD PTR [rip+0x24a0dfe]        # 0x14266e31c
0x1401cd51e: jmp     0x1401cd54b
0x1401cd520: mov     edx,DWORD PTR [rip+0x24a0dea]        # 0x14266e310
0x1401cd526: jmp     0x1401cd54b
0x1401cd528: cmp     esi,edi
0x1401cd52a: jne     0x1401cd534
0x1401cd52c: mov     edx,DWORD PTR [rip+0x24a0d8a]        # 0x14266e2bc
0x1401cd532: jmp     0x1401cd544
0x1401cd534: cmp     esi,ebx
0x1401cd536: mov     edx,DWORD PTR [rip+0x24a0d98]        # 0x14266e2d4
0x1401cd53c: je      0x1401cd544
0x1401cd53e: mov     edx,DWORD PTR [rip+0x24a0d84]        # 0x14266e2c8
0x1401cd544: lea     rcx,[rip+0x249f325]        # 0x14266c870
0x1401cd54b: call    0x140af4570
0x1401cd550: inc     esi
0x1401cd552: cmp     esi,ebx
0x1401cd554: mov     eax,0x5
0x1401cd559: jle     0x1401cd400
0x1401cd55f: xor     r8d,r8d
0x1401cd562: mov     edx,0x7
0x1401cd567: mov     r9b,0x1
0x1401cd56a: lea     rcx,[rip+0x249f2ff]        # 0x14266c870
0x1401cd571: call    0x1400bc760
0x1401cd576: lea     r8d,[rdi+0x2]
0x1401cd57a: mov     edx,0x6
0x1401cd57f: lea     rcx,[rip+0x249f2ea]        # 0x14266c870
0x1401cd586: call    0x1400bc750
0x1401cd58b: lea     rdx,[rip+0x1452b96]        # 0x141620128 ; literal='Free captives belonging to your civilization'
0x1401cd592: lea     rcx,[rbp+0x2a70]
0x1401cd599: call    0x140069780
0x1401cd59e: nop     
0x1401cd59f: xor     r9d,r9d
0x1401cd5a2: xor     r8d,r8d
0x1401cd5a5: lea     rdx,[rbp+0x2a70]
0x1401cd5ac: lea     rcx,[rip+0x249f2bd]        # 0x14266c870
0x1401cd5b3: call    0x140af3400
0x1401cd5b8: nop     
0x1401cd5b9: lea     rcx,[rbp+0x2a70]
0x1401cd5c0: call    0x140069460
0x1401cd5c5: mov     esi,edi
0x1401cd5c7: cmp     edi,ebx
0x1401cd5c9: jg      0x1401cd72d
0x1401cd5cf: nop     
0x1401cd5d0: mov     r8d,esi
0x1401cd5d3: mov     edx,0x8
0x1401cd5d8: lea     rcx,[rip+0x249f291]        # 0x14266c870
0x1401cd5df: call    0x1400bc750
0x1401cd5e4: mov     rax,QWORD PTR [r12+0x130]
0x1401cd5ec: test    BYTE PTR [rax+0x58],0x10
0x1401cd5f0: je      0x1401cd619
0x1401cd5f2: cmp     esi,edi
0x1401cd5f4: jne     0x1401cd5fe
0x1401cd5f6: mov     edx,DWORD PTR [rip+0x24a0d00]        # 0x14266e2fc
0x1401cd5fc: jmp     0x1401cd635
0x1401cd5fe: lea     rcx,[rip+0x249f26b]        # 0x14266c870
0x1401cd605: cmp     esi,ebx
0x1401cd607: jne     0x1401cd611
0x1401cd609: mov     edx,DWORD PTR [rip+0x24a0d05]        # 0x14266e314
0x1401cd60f: jmp     0x1401cd63c
0x1401cd611: mov     edx,DWORD PTR [rip+0x24a0cf1]        # 0x14266e308
0x1401cd617: jmp     0x1401cd63c
0x1401cd619: cmp     esi,edi
0x1401cd61b: jne     0x1401cd625
0x1401cd61d: mov     edx,DWORD PTR [rip+0x24a0c91]        # 0x14266e2b4
0x1401cd623: jmp     0x1401cd635
0x1401cd625: cmp     esi,ebx
0x1401cd627: mov     edx,DWORD PTR [rip+0x24a0c9f]        # 0x14266e2cc
0x1401cd62d: je      0x1401cd635
0x1401cd62f: mov     edx,DWORD PTR [rip+0x24a0c8b]        # 0x14266e2c0
0x1401cd635: lea     rcx,[rip+0x249f234]        # 0x14266c870
0x1401cd63c: call    0x140af4570
0x1401cd641: mov     r8d,esi
0x1401cd644: mov     edx,0x9
0x1401cd649: lea     rcx,[rip+0x249f220]        # 0x14266c870
0x1401cd650: call    0x1400bc750
0x1401cd655: mov     rax,QWORD PTR [r12+0x130]
0x1401cd65d: test    BYTE PTR [rax+0x58],0x10
0x1401cd661: je      0x1401cd68a
0x1401cd663: cmp     esi,edi
0x1401cd665: jne     0x1401cd66f
0x1401cd667: mov     edx,DWORD PTR [rip+0x24a0c93]        # 0x14266e300
0x1401cd66d: jmp     0x1401cd6a6
0x1401cd66f: lea     rcx,[rip+0x249f1fa]        # 0x14266c870
0x1401cd676: cmp     esi,ebx
0x1401cd678: jne     0x1401cd682
0x1401cd67a: mov     edx,DWORD PTR [rip+0x24a0c98]        # 0x14266e318
0x1401cd680: jmp     0x1401cd6ad
0x1401cd682: mov     edx,DWORD PTR [rip+0x24a0c84]        # 0x14266e30c
0x1401cd688: jmp     0x1401cd6ad
0x1401cd68a: cmp     esi,edi
0x1401cd68c: jne     0x1401cd696
0x1401cd68e: mov     edx,DWORD PTR [rip+0x24a0c24]        # 0x14266e2b8
0x1401cd694: jmp     0x1401cd6a6
0x1401cd696: cmp     esi,ebx
0x1401cd698: mov     edx,DWORD PTR [rip+0x24a0c32]        # 0x14266e2d0
0x1401cd69e: je      0x1401cd6a6
0x1401cd6a0: mov     edx,DWORD PTR [rip+0x24a0c1e]        # 0x14266e2c4
0x1401cd6a6: lea     rcx,[rip+0x249f1c3]        # 0x14266c870
0x1401cd6ad: call    0x140af4570
0x1401cd6b2: mov     r8d,esi
0x1401cd6b5: mov     edx,0xa
0x1401cd6ba: lea     rcx,[rip+0x249f1af]        # 0x14266c870
0x1401cd6c1: call    0x1400bc750
0x1401cd6c6: mov     rax,QWORD PTR [r12+0x130]
0x1401cd6ce: test    BYTE PTR [rax+0x58],0x10
0x1401cd6d2: je      0x1401cd6fb
0x1401cd6d4: cmp     esi,edi
0x1401cd6d6: jne     0x1401cd6e0
0x1401cd6d8: mov     edx,DWORD PTR [rip+0x24a0c26]        # 0x14266e304
0x1401cd6de: jmp     0x1401cd717
0x1401cd6e0: lea     rcx,[rip+0x249f189]        # 0x14266c870
0x1401cd6e7: cmp     esi,ebx
0x1401cd6e9: jne     0x1401cd6f3
0x1401cd6eb: mov     edx,DWORD PTR [rip+0x24a0c2b]        # 0x14266e31c
0x1401cd6f1: jmp     0x1401cd71e
0x1401cd6f3: mov     edx,DWORD PTR [rip+0x24a0c17]        # 0x14266e310
0x1401cd6f9: jmp     0x1401cd71e
0x1401cd6fb: cmp     esi,edi
0x1401cd6fd: jne     0x1401cd707
0x1401cd6ff: mov     edx,DWORD PTR [rip+0x24a0bb7]        # 0x14266e2bc
0x1401cd705: jmp     0x1401cd717
0x1401cd707: cmp     esi,ebx
0x1401cd709: mov     edx,DWORD PTR [rip+0x24a0bc5]        # 0x14266e2d4
0x1401cd70f: je      0x1401cd717
0x1401cd711: mov     edx,DWORD PTR [rip+0x24a0bb1]        # 0x14266e2c8
0x1401cd717: lea     rcx,[rip+0x249f152]        # 0x14266c870
0x1401cd71e: call    0x140af4570
0x1401cd723: inc     esi
0x1401cd725: cmp     esi,ebx
0x1401cd727: jle     0x1401cd5d0
0x1401cd72d: xor     r8d,r8d
0x1401cd730: mov     edx,0x7
0x1401cd735: mov     r9b,0x1
0x1401cd738: lea     rcx,[rip+0x249f131]        # 0x14266c870
0x1401cd73f: call    0x1400bc760
0x1401cd744: lea     r8d,[rdi+0x2]
0x1401cd748: mov     edx,0x9
0x1401cd74d: lea     rcx,[rip+0x249f11c]        # 0x14266c870
0x1401cd754: call    0x1400bc750
0x1401cd759: lea     rdx,[rip+0x14529f8]        # 0x141620158 ; literal='Release other prisoners'
0x1401cd760: lea     rcx,[rbp+0x2a90]
0x1401cd767: call    0x140069780
0x1401cd76c: nop     
0x1401cd76d: xor     r9d,r9d
0x1401cd770: xor     r8d,r8d
0x1401cd773: lea     rdx,[rbp+0x2a90]
0x1401cd77a: lea     rcx,[rip+0x249f0ef]        # 0x14266c870
0x1401cd781: call    0x140af3400
0x1401cd786: nop     
0x1401cd787: lea     rcx,[rbp+0x2a90]
0x1401cd78e: call    0x140069460
0x1401cd793: mov     esi,edi
0x1401cd795: mov     r14d,0xc
0x1401cd79b: cmp     edi,ebx
0x1401cd79d: jg      0x1401cd90d
0x1401cd7a3: mov     eax,0xb
0x1401cd7a8: nop     DWORD PTR [rax+rax*1+0x0]
0x1401cd7b0: mov     r8d,esi
0x1401cd7b3: mov     edx,eax
0x1401cd7b5: lea     rcx,[rip+0x249f0b4]        # 0x14266c870
0x1401cd7bc: call    0x1400bc750
0x1401cd7c1: mov     rax,QWORD PTR [r12+0x130]
0x1401cd7c9: test    BYTE PTR [rax+0x58],0x20
0x1401cd7cd: je      0x1401cd7f6
0x1401cd7cf: cmp     esi,edi
0x1401cd7d1: jne     0x1401cd7db
0x1401cd7d3: mov     edx,DWORD PTR [rip+0x24a0b23]        # 0x14266e2fc
0x1401cd7d9: jmp     0x1401cd812
0x1401cd7db: lea     rcx,[rip+0x249f08e]        # 0x14266c870
0x1401cd7e2: cmp     esi,ebx
0x1401cd7e4: jne     0x1401cd7ee
0x1401cd7e6: mov     edx,DWORD PTR [rip+0x24a0b28]        # 0x14266e314
0x1401cd7ec: jmp     0x1401cd819
0x1401cd7ee: mov     edx,DWORD PTR [rip+0x24a0b14]        # 0x14266e308
0x1401cd7f4: jmp     0x1401cd819
0x1401cd7f6: cmp     esi,edi
0x1401cd7f8: jne     0x1401cd802
0x1401cd7fa: mov     edx,DWORD PTR [rip+0x24a0ab4]        # 0x14266e2b4
0x1401cd800: jmp     0x1401cd812
0x1401cd802: cmp     esi,ebx
0x1401cd804: mov     edx,DWORD PTR [rip+0x24a0ac2]        # 0x14266e2cc
0x1401cd80a: je      0x1401cd812
0x1401cd80c: mov     edx,DWORD PTR [rip+0x24a0aae]        # 0x14266e2c0
0x1401cd812: lea     rcx,[rip+0x249f057]        # 0x14266c870
0x1401cd819: call    0x140af4570
0x1401cd81e: mov     r8d,esi
0x1401cd821: mov     edx,r14d
0x1401cd824: lea     rcx,[rip+0x249f045]        # 0x14266c870
0x1401cd82b: call    0x1400bc750
0x1401cd830: mov     rax,QWORD PTR [r12+0x130]
0x1401cd838: test    BYTE PTR [rax+0x58],0x20
0x1401cd83c: je      0x1401cd865
0x1401cd83e: cmp     esi,edi
0x1401cd840: jne     0x1401cd84a
0x1401cd842: mov     edx,DWORD PTR [rip+0x24a0ab8]        # 0x14266e300
0x1401cd848: jmp     0x1401cd881
0x1401cd84a: lea     rcx,[rip+0x249f01f]        # 0x14266c870
0x1401cd851: cmp     esi,ebx
0x1401cd853: jne     0x1401cd85d
0x1401cd855: mov     edx,DWORD PTR [rip+0x24a0abd]        # 0x14266e318
0x1401cd85b: jmp     0x1401cd888
0x1401cd85d: mov     edx,DWORD PTR [rip+0x24a0aa9]        # 0x14266e30c
0x1401cd863: jmp     0x1401cd888
0x1401cd865: cmp     esi,edi
0x1401cd867: jne     0x1401cd871
0x1401cd869: mov     edx,DWORD PTR [rip+0x24a0a49]        # 0x14266e2b8
0x1401cd86f: jmp     0x1401cd881
0x1401cd871: cmp     esi,ebx
0x1401cd873: mov     edx,DWORD PTR [rip+0x24a0a57]        # 0x14266e2d0
0x1401cd879: je      0x1401cd881
0x1401cd87b: mov     edx,DWORD PTR [rip+0x24a0a43]        # 0x14266e2c4
0x1401cd881: lea     rcx,[rip+0x249efe8]        # 0x14266c870
0x1401cd888: call    0x140af4570
0x1401cd88d: mov     r8d,esi
0x1401cd890: mov     edx,0xd
0x1401cd895: lea     rcx,[rip+0x249efd4]        # 0x14266c870
0x1401cd89c: call    0x1400bc750
0x1401cd8a1: mov     rax,QWORD PTR [r12+0x130]
0x1401cd8a9: test    BYTE PTR [rax+0x58],0x20
0x1401cd8ad: je      0x1401cd8d6
0x1401cd8af: cmp     esi,edi
0x1401cd8b1: jne     0x1401cd8bb
0x1401cd8b3: mov     edx,DWORD PTR [rip+0x24a0a4b]        # 0x14266e304
0x1401cd8b9: jmp     0x1401cd8f2
0x1401cd8bb: lea     rcx,[rip+0x249efae]        # 0x14266c870
0x1401cd8c2: cmp     esi,ebx
0x1401cd8c4: jne     0x1401cd8ce
0x1401cd8c6: mov     edx,DWORD PTR [rip+0x24a0a50]        # 0x14266e31c
0x1401cd8cc: jmp     0x1401cd8f9
0x1401cd8ce: mov     edx,DWORD PTR [rip+0x24a0a3c]        # 0x14266e310
0x1401cd8d4: jmp     0x1401cd8f9
0x1401cd8d6: cmp     esi,edi
0x1401cd8d8: jne     0x1401cd8e2
0x1401cd8da: mov     edx,DWORD PTR [rip+0x24a09dc]        # 0x14266e2bc
0x1401cd8e0: jmp     0x1401cd8f2
0x1401cd8e2: cmp     esi,ebx
0x1401cd8e4: mov     edx,DWORD PTR [rip+0x24a09ea]        # 0x14266e2d4
0x1401cd8ea: je      0x1401cd8f2
0x1401cd8ec: mov     edx,DWORD PTR [rip+0x24a09d6]        # 0x14266e2c8
0x1401cd8f2: lea     rcx,[rip+0x249ef77]        # 0x14266c870
0x1401cd8f9: call    0x140af4570
0x1401cd8fe: inc     esi
0x1401cd900: cmp     esi,ebx
0x1401cd902: mov     eax,0xb
0x1401cd907: jle     0x1401cd7b0
0x1401cd90d: xor     r8d,r8d
0x1401cd910: mov     edx,0x7
0x1401cd915: mov     r9b,0x1
0x1401cd918: lea     rcx,[rip+0x249ef51]        # 0x14266c870
0x1401cd91f: call    0x1400bc760
0x1401cd924: lea     r8d,[rdi+0x2]
0x1401cd928: mov     edx,r14d
0x1401cd92b: lea     rcx,[rip+0x249ef3e]        # 0x14266c870
0x1401cd932: call    0x1400bc750
0x1401cd937: lea     rdx,[rip+0x14524ea]        # 0x14161fe28 ; literal='Take important treasures'
0x1401cd93e: lea     rcx,[rbp+0x2ab0]
0x1401cd945: call    0x140069780
0x1401cd94a: nop     
0x1401cd94b: xor     r9d,r9d
0x1401cd94e: xor     r8d,r8d
0x1401cd951: lea     rdx,[rbp+0x2ab0]
0x1401cd958: lea     rcx,[rip+0x249ef11]        # 0x14266c870
0x1401cd95f: call    0x140af3400
0x1401cd964: nop     
0x1401cd965: lea     rcx,[rbp+0x2ab0]
0x1401cd96c: call    0x140069460
0x1401cd971: mov     esi,edi
0x1401cd973: cmp     edi,ebx
0x1401cd975: jg      0x1401cdadd
0x1401cd97b: nop     DWORD PTR [rax+rax*1+0x0]
0x1401cd980: mov     r8d,esi
0x1401cd983: mov     edx,0xe
0x1401cd988: lea     rcx,[rip+0x249eee1]        # 0x14266c870
0x1401cd98f: call    0x1400bc750
0x1401cd994: mov     rax,QWORD PTR [r12+0x130]
0x1401cd99c: test    BYTE PTR [rax+0x58],0x40
0x1401cd9a0: je      0x1401cd9c9
0x1401cd9a2: cmp     esi,edi
0x1401cd9a4: jne     0x1401cd9ae
0x1401cd9a6: mov     edx,DWORD PTR [rip+0x24a0950]        # 0x14266e2fc
0x1401cd9ac: jmp     0x1401cd9e5
0x1401cd9ae: lea     rcx,[rip+0x249eebb]        # 0x14266c870
0x1401cd9b5: cmp     esi,ebx
0x1401cd9b7: jne     0x1401cd9c1
0x1401cd9b9: mov     edx,DWORD PTR [rip+0x24a0955]        # 0x14266e314
0x1401cd9bf: jmp     0x1401cd9ec
0x1401cd9c1: mov     edx,DWORD PTR [rip+0x24a0941]        # 0x14266e308
0x1401cd9c7: jmp     0x1401cd9ec
0x1401cd9c9: cmp     esi,edi
0x1401cd9cb: jne     0x1401cd9d5
0x1401cd9cd: mov     edx,DWORD PTR [rip+0x24a08e1]        # 0x14266e2b4
0x1401cd9d3: jmp     0x1401cd9e5
0x1401cd9d5: cmp     esi,ebx
0x1401cd9d7: mov     edx,DWORD PTR [rip+0x24a08ef]        # 0x14266e2cc
0x1401cd9dd: je      0x1401cd9e5
0x1401cd9df: mov     edx,DWORD PTR [rip+0x24a08db]        # 0x14266e2c0
0x1401cd9e5: lea     rcx,[rip+0x249ee84]        # 0x14266c870
0x1401cd9ec: call    0x140af4570
0x1401cd9f1: mov     r8d,esi
0x1401cd9f4: mov     edx,0xf
0x1401cd9f9: lea     rcx,[rip+0x249ee70]        # 0x14266c870
0x1401cda00: call    0x1400bc750
0x1401cda05: mov     rax,QWORD PTR [r12+0x130]
0x1401cda0d: test    BYTE PTR [rax+0x58],0x40
0x1401cda11: je      0x1401cda3a
0x1401cda13: cmp     esi,edi
0x1401cda15: jne     0x1401cda1f
0x1401cda17: mov     edx,DWORD PTR [rip+0x24a08e3]        # 0x14266e300
0x1401cda1d: jmp     0x1401cda56
0x1401cda1f: lea     rcx,[rip+0x249ee4a]        # 0x14266c870
0x1401cda26: cmp     esi,ebx
0x1401cda28: jne     0x1401cda32
0x1401cda2a: mov     edx,DWORD PTR [rip+0x24a08e8]        # 0x14266e318
0x1401cda30: jmp     0x1401cda5d
0x1401cda32: mov     edx,DWORD PTR [rip+0x24a08d4]        # 0x14266e30c
0x1401cda38: jmp     0x1401cda5d
0x1401cda3a: cmp     esi,edi
0x1401cda3c: jne     0x1401cda46
0x1401cda3e: mov     edx,DWORD PTR [rip+0x24a0874]        # 0x14266e2b8
0x1401cda44: jmp     0x1401cda56
0x1401cda46: cmp     esi,ebx
0x1401cda48: mov     edx,DWORD PTR [rip+0x24a0882]        # 0x14266e2d0
0x1401cda4e: je      0x1401cda56
0x1401cda50: mov     edx,DWORD PTR [rip+0x24a086e]        # 0x14266e2c4
0x1401cda56: lea     rcx,[rip+0x249ee13]        # 0x14266c870
0x1401cda5d: call    0x140af4570
0x1401cda62: mov     r8d,esi
0x1401cda65: mov     edx,0x10
0x1401cda6a: lea     rcx,[rip+0x249edff]        # 0x14266c870
0x1401cda71: call    0x1400bc750
0x1401cda76: mov     rax,QWORD PTR [r12+0x130]
0x1401cda7e: test    BYTE PTR [rax+0x58],0x40
0x1401cda82: je      0x1401cdaab
0x1401cda84: cmp     esi,edi
0x1401cda86: jne     0x1401cda90
0x1401cda88: mov     edx,DWORD PTR [rip+0x24a0876]        # 0x14266e304
0x1401cda8e: jmp     0x1401cdac7
0x1401cda90: lea     rcx,[rip+0x249edd9]        # 0x14266c870
0x1401cda97: cmp     esi,ebx
0x1401cda99: jne     0x1401cdaa3
0x1401cda9b: mov     edx,DWORD PTR [rip+0x24a087b]        # 0x14266e31c
0x1401cdaa1: jmp     0x1401cdace
0x1401cdaa3: mov     edx,DWORD PTR [rip+0x24a0867]        # 0x14266e310
0x1401cdaa9: jmp     0x1401cdace
0x1401cdaab: cmp     esi,edi
0x1401cdaad: jne     0x1401cdab7
0x1401cdaaf: mov     edx,DWORD PTR [rip+0x24a0807]        # 0x14266e2bc
0x1401cdab5: jmp     0x1401cdac7
0x1401cdab7: cmp     esi,ebx
0x1401cdab9: mov     edx,DWORD PTR [rip+0x24a0815]        # 0x14266e2d4
0x1401cdabf: je      0x1401cdac7
0x1401cdac1: mov     edx,DWORD PTR [rip+0x24a0801]        # 0x14266e2c8
0x1401cdac7: lea     rcx,[rip+0x249eda2]        # 0x14266c870
0x1401cdace: call    0x140af4570
0x1401cdad3: inc     esi
0x1401cdad5: cmp     esi,ebx
0x1401cdad7: jle     0x1401cd980
0x1401cdadd: xor     r8d,r8d
0x1401cdae0: mov     edx,0x7
0x1401cdae5: mov     r9b,0x1
0x1401cdae8: lea     rcx,[rip+0x249ed81]        # 0x14266c870
0x1401cdaef: call    0x1400bc760
0x1401cdaf4: lea     r8d,[rdi+0x2]
0x1401cdaf8: mov     edx,0xf
0x1401cdafd: lea     rcx,[rip+0x249ed6c]        # 0x14266c870
0x1401cdb04: call    0x1400bc750
0x1401cdb09: lea     rdx,[rip+0x1452338]        # 0x14161fe48 ; literal='Loot other items'
0x1401cdb10: lea     rcx,[rbp+0x2ad0]
0x1401cdb17: call    0x140069780
0x1401cdb1c: nop     
0x1401cdb1d: xor     r9d,r9d
0x1401cdb20: xor     r8d,r8d
0x1401cdb23: lea     rdx,[rbp+0x2ad0]
0x1401cdb2a: lea     rcx,[rip+0x249ed3f]        # 0x14266c870
0x1401cdb31: call    0x140af3400
0x1401cdb36: nop     
0x1401cdb37: lea     rcx,[rbp+0x2ad0]
0x1401cdb3e: call    0x140069460
0x1401cdb43: mov     esi,edi
0x1401cdb45: cmp     edi,ebx
0x1401cdb47: jg      0x1401cdcad
0x1401cdb4d: nop     DWORD PTR [rax]
0x1401cdb50: mov     r8d,esi
0x1401cdb53: mov     edx,0x11
0x1401cdb58: lea     rcx,[rip+0x249ed11]        # 0x14266c870
0x1401cdb5f: call    0x1400bc750
0x1401cdb64: mov     rax,QWORD PTR [r12+0x130]
0x1401cdb6c: test    BYTE PTR [rax+0x58],0x80
0x1401cdb70: je      0x1401cdb99
0x1401cdb72: cmp     esi,edi
0x1401cdb74: jne     0x1401cdb7e
0x1401cdb76: mov     edx,DWORD PTR [rip+0x24a0780]        # 0x14266e2fc
0x1401cdb7c: jmp     0x1401cdbb5
0x1401cdb7e: lea     rcx,[rip+0x249eceb]        # 0x14266c870
0x1401cdb85: cmp     esi,ebx
0x1401cdb87: jne     0x1401cdb91
0x1401cdb89: mov     edx,DWORD PTR [rip+0x24a0785]        # 0x14266e314
0x1401cdb8f: jmp     0x1401cdbbc
0x1401cdb91: mov     edx,DWORD PTR [rip+0x24a0771]        # 0x14266e308
0x1401cdb97: jmp     0x1401cdbbc
0x1401cdb99: cmp     esi,edi
0x1401cdb9b: jne     0x1401cdba5
0x1401cdb9d: mov     edx,DWORD PTR [rip+0x24a0711]        # 0x14266e2b4
0x1401cdba3: jmp     0x1401cdbb5
0x1401cdba5: cmp     esi,ebx
0x1401cdba7: mov     edx,DWORD PTR [rip+0x24a071f]        # 0x14266e2cc
0x1401cdbad: je      0x1401cdbb5
0x1401cdbaf: mov     edx,DWORD PTR [rip+0x24a070b]        # 0x14266e2c0
0x1401cdbb5: lea     rcx,[rip+0x249ecb4]        # 0x14266c870
0x1401cdbbc: call    0x140af4570
0x1401cdbc1: mov     r8d,esi
0x1401cdbc4: mov     edx,0x12
0x1401cdbc9: lea     rcx,[rip+0x249eca0]        # 0x14266c870
0x1401cdbd0: call    0x1400bc750
0x1401cdbd5: mov     rax,QWORD PTR [r12+0x130]
0x1401cdbdd: test    BYTE PTR [rax+0x58],0x80
0x1401cdbe1: je      0x1401cdc0a
0x1401cdbe3: cmp     esi,edi
0x1401cdbe5: jne     0x1401cdbef
0x1401cdbe7: mov     edx,DWORD PTR [rip+0x24a0713]        # 0x14266e300
0x1401cdbed: jmp     0x1401cdc26
0x1401cdbef: lea     rcx,[rip+0x249ec7a]        # 0x14266c870
0x1401cdbf6: cmp     esi,ebx
0x1401cdbf8: jne     0x1401cdc02
0x1401cdbfa: mov     edx,DWORD PTR [rip+0x24a0718]        # 0x14266e318
0x1401cdc00: jmp     0x1401cdc2d
0x1401cdc02: mov     edx,DWORD PTR [rip+0x24a0704]        # 0x14266e30c
0x1401cdc08: jmp     0x1401cdc2d
0x1401cdc0a: cmp     esi,edi
0x1401cdc0c: jne     0x1401cdc16
0x1401cdc0e: mov     edx,DWORD PTR [rip+0x24a06a4]        # 0x14266e2b8
0x1401cdc14: jmp     0x1401cdc26
0x1401cdc16: cmp     esi,ebx
0x1401cdc18: mov     edx,DWORD PTR [rip+0x24a06b2]        # 0x14266e2d0
0x1401cdc1e: je      0x1401cdc26
0x1401cdc20: mov     edx,DWORD PTR [rip+0x24a069e]        # 0x14266e2c4
0x1401cdc26: lea     rcx,[rip+0x249ec43]        # 0x14266c870
0x1401cdc2d: call    0x140af4570
0x1401cdc32: mov     r8d,esi
0x1401cdc35: mov     edx,0x13
0x1401cdc3a: lea     rcx,[rip+0x249ec2f]        # 0x14266c870
0x1401cdc41: call    0x1400bc750
0x1401cdc46: mov     rax,QWORD PTR [r12+0x130]
0x1401cdc4e: test    BYTE PTR [rax+0x58],0x80
0x1401cdc52: je      0x1401cdc7b
0x1401cdc54: cmp     esi,edi
0x1401cdc56: jne     0x1401cdc60
0x1401cdc58: mov     edx,DWORD PTR [rip+0x24a06a6]        # 0x14266e304
0x1401cdc5e: jmp     0x1401cdc97
0x1401cdc60: lea     rcx,[rip+0x249ec09]        # 0x14266c870
0x1401cdc67: cmp     esi,ebx
0x1401cdc69: jne     0x1401cdc73
0x1401cdc6b: mov     edx,DWORD PTR [rip+0x24a06ab]        # 0x14266e31c
0x1401cdc71: jmp     0x1401cdc9e
0x1401cdc73: mov     edx,DWORD PTR [rip+0x24a0697]        # 0x14266e310
0x1401cdc79: jmp     0x1401cdc9e
0x1401cdc7b: cmp     esi,edi
0x1401cdc7d: jne     0x1401cdc87
0x1401cdc7f: mov     edx,DWORD PTR [rip+0x24a0637]        # 0x14266e2bc
0x1401cdc85: jmp     0x1401cdc97
0x1401cdc87: cmp     esi,ebx
0x1401cdc89: mov     edx,DWORD PTR [rip+0x24a0645]        # 0x14266e2d4
0x1401cdc8f: je      0x1401cdc97
0x1401cdc91: mov     edx,DWORD PTR [rip+0x24a0631]        # 0x14266e2c8
0x1401cdc97: lea     rcx,[rip+0x249ebd2]        # 0x14266c870
0x1401cdc9e: call    0x140af4570
0x1401cdca3: inc     esi
0x1401cdca5: cmp     esi,ebx
0x1401cdca7: jle     0x1401cdb50
0x1401cdcad: xor     r8d,r8d
0x1401cdcb0: mov     edx,0x7
0x1401cdcb5: mov     r9b,0x1
0x1401cdcb8: lea     rcx,[rip+0x249ebb1]        # 0x14266c870
0x1401cdcbf: call    0x1400bc760
0x1401cdcc4: lea     r8d,[rdi+0x2]
0x1401cdcc8: mov     edx,0x12
0x1401cdccd: lea     rcx,[rip+0x249eb9c]        # 0x14266c870
0x1401cdcd4: call    0x1400bc750
0x1401cdcd9: lea     rdx,[rip+0x1452180]        # 0x14161fe60 ; literal='Steal livestock'
0x1401cdce0: lea     rcx,[rbp+0x2af0]
0x1401cdce7: call    0x140069780
0x1401cdcec: nop     
0x1401cdced: xor     r9d,r9d
0x1401cdcf0: xor     r8d,r8d
0x1401cdcf3: lea     rdx,[rbp+0x2af0]
0x1401cdcfa: lea     rcx,[rip+0x249eb6f]        # 0x14266c870
0x1401cdd01: call    0x140af3400
0x1401cdd06: nop     
0x1401cdd07: lea     rcx,[rbp+0x2af0]
0x1401cdd0e: call    0x140069460
0x1401cdd13: jmp     0x1401ccbe2
0x1401cdd18: cmp     edi,ebx
0x1401cdd1a: jg      0x1401cde8c
0x1401cdd20: mov     eax,0x5
0x1401cdd25: data16  data16 nop WORD PTR [rax+rax*1+0x0]
0x1401cdd30: mov     r8d,esi
0x1401cdd33: mov     edx,eax
0x1401cdd35: lea     rcx,[rip+0x249eb34]        # 0x14266c870
0x1401cdd3c: call    0x1400bc750
0x1401cdd41: mov     rax,QWORD PTR [r12+0x130]
0x1401cdd49: cmp     DWORD PTR [rax],0x4
0x1401cdd4c: jne     0x1401cdd75
0x1401cdd4e: cmp     esi,edi
0x1401cdd50: jne     0x1401cdd5a
0x1401cdd52: mov     edx,DWORD PTR [rip+0x24a05a4]        # 0x14266e2fc
0x1401cdd58: jmp     0x1401cdd91
0x1401cdd5a: lea     rcx,[rip+0x249eb0f]        # 0x14266c870
0x1401cdd61: cmp     esi,ebx
0x1401cdd63: jne     0x1401cdd6d
0x1401cdd65: mov     edx,DWORD PTR [rip+0x24a05a9]        # 0x14266e314
0x1401cdd6b: jmp     0x1401cdd98
0x1401cdd6d: mov     edx,DWORD PTR [rip+0x24a0595]        # 0x14266e308
0x1401cdd73: jmp     0x1401cdd98
0x1401cdd75: cmp     esi,edi
0x1401cdd77: jne     0x1401cdd81
0x1401cdd79: mov     edx,DWORD PTR [rip+0x24a0535]        # 0x14266e2b4
0x1401cdd7f: jmp     0x1401cdd91
0x1401cdd81: cmp     esi,ebx
0x1401cdd83: mov     edx,DWORD PTR [rip+0x24a0543]        # 0x14266e2cc
0x1401cdd89: je      0x1401cdd91
0x1401cdd8b: mov     edx,DWORD PTR [rip+0x24a052f]        # 0x14266e2c0
0x1401cdd91: lea     rcx,[rip+0x249ead8]        # 0x14266c870
0x1401cdd98: call    0x140af4570
0x1401cdd9d: mov     r8d,esi
0x1401cdda0: mov     edx,0x6
0x1401cdda5: lea     rcx,[rip+0x249eac4]        # 0x14266c870
0x1401cddac: call    0x1400bc750
0x1401cddb1: mov     rax,QWORD PTR [r12+0x130]
0x1401cddb9: cmp     DWORD PTR [rax],0x4
0x1401cddbc: jne     0x1401cdde5
0x1401cddbe: cmp     esi,edi
0x1401cddc0: jne     0x1401cddca
0x1401cddc2: mov     edx,DWORD PTR [rip+0x24a0538]        # 0x14266e300
0x1401cddc8: jmp     0x1401cde01
0x1401cddca: lea     rcx,[rip+0x249ea9f]        # 0x14266c870
0x1401cddd1: cmp     esi,ebx
0x1401cddd3: jne     0x1401cdddd
0x1401cddd5: mov     edx,DWORD PTR [rip+0x24a053d]        # 0x14266e318
0x1401cdddb: jmp     0x1401cde08
0x1401cdddd: mov     edx,DWORD PTR [rip+0x24a0529]        # 0x14266e30c
0x1401cdde3: jmp     0x1401cde08
0x1401cdde5: cmp     esi,edi
0x1401cdde7: jne     0x1401cddf1
0x1401cdde9: mov     edx,DWORD PTR [rip+0x24a04c9]        # 0x14266e2b8
0x1401cddef: jmp     0x1401cde01
0x1401cddf1: cmp     esi,ebx
0x1401cddf3: mov     edx,DWORD PTR [rip+0x24a04d7]        # 0x14266e2d0
0x1401cddf9: je      0x1401cde01
0x1401cddfb: mov     edx,DWORD PTR [rip+0x24a04c3]        # 0x14266e2c4
0x1401cde01: lea     rcx,[rip+0x249ea68]        # 0x14266c870
0x1401cde08: call    0x140af4570
0x1401cde0d: mov     r8d,esi
0x1401cde10: mov     edx,0x7
0x1401cde15: lea     rcx,[rip+0x249ea54]        # 0x14266c870
0x1401cde1c: call    0x1400bc750
0x1401cde21: mov     rax,QWORD PTR [r12+0x130]
0x1401cde29: cmp     DWORD PTR [rax],0x4
0x1401cde2c: jne     0x1401cde55
0x1401cde2e: cmp     esi,edi
0x1401cde30: jne     0x1401cde3a
0x1401cde32: mov     edx,DWORD PTR [rip+0x24a04cc]        # 0x14266e304
0x1401cde38: jmp     0x1401cde71
0x1401cde3a: lea     rcx,[rip+0x249ea2f]        # 0x14266c870
0x1401cde41: cmp     esi,ebx
0x1401cde43: jne     0x1401cde4d
0x1401cde45: mov     edx,DWORD PTR [rip+0x24a04d1]        # 0x14266e31c
0x1401cde4b: jmp     0x1401cde78
0x1401cde4d: mov     edx,DWORD PTR [rip+0x24a04bd]        # 0x14266e310
0x1401cde53: jmp     0x1401cde78
0x1401cde55: cmp     esi,edi
0x1401cde57: jne     0x1401cde61
0x1401cde59: mov     edx,DWORD PTR [rip+0x24a045d]        # 0x14266e2bc
0x1401cde5f: jmp     0x1401cde71
0x1401cde61: cmp     esi,ebx
0x1401cde63: mov     edx,DWORD PTR [rip+0x24a046b]        # 0x14266e2d4
0x1401cde69: je      0x1401cde71
0x1401cde6b: mov     edx,DWORD PTR [rip+0x24a0457]        # 0x14266e2c8
0x1401cde71: lea     rcx,[rip+0x249e9f8]        # 0x14266c870
0x1401cde78: call    0x140af4570
0x1401cde7d: inc     esi
0x1401cde7f: cmp     esi,ebx
0x1401cde81: mov     eax,0x5
0x1401cde86: jle     0x1401cdd30
0x1401cde8c: xor     r8d,r8d
0x1401cde8f: mov     edx,0x7
0x1401cde94: mov     r9b,0x1
0x1401cde97: lea     rcx,[rip+0x249e9d2]        # 0x14266c870
0x1401cde9e: call    0x1400bc760
0x1401cdea3: lea     r8d,[rdi+0x2]
0x1401cdea7: mov     edx,0x6
0x1401cdeac: lea     rcx,[rip+0x249e9bd]        # 0x14266c870
0x1401cdeb3: call    0x1400bc750
0x1401cdeb8: lea     rdx,[rip+0x1451fb1]        # 0x14161fe70 ; literal='Raid (squads will try to avoid detection)'
0x1401cdebf: lea     rcx,[rbp+0x2b10]
0x1401cdec6: call    0x140069780
0x1401cdecb: nop     
0x1401cdecc: xor     r9d,r9d
0x1401cdecf: xor     r8d,r8d
0x1401cded2: lea     rdx,[rbp+0x2b10]
0x1401cded9: lea     rcx,[rip+0x249e990]        # 0x14266c870
0x1401cdee0: call    0x140af3400
0x1401cdee5: nop     
0x1401cdee6: lea     rcx,[rbp+0x2b10]
0x1401cdeed: call    0x140069460
0x1401cdef2: mov     esi,edi
0x1401cdef4: cmp     edi,ebx
0x1401cdef6: jg      0x1401ce05a
0x1401cdefc: nop     DWORD PTR [rax+0x0]
0x1401cdf00: mov     r8d,esi
0x1401cdf03: mov     edx,0x8
0x1401cdf08: lea     rcx,[rip+0x249e961]        # 0x14266c870
0x1401cdf0f: call    0x1400bc750
0x1401cdf14: mov     rax,QWORD PTR [r12+0x130]
0x1401cdf1c: cmp     DWORD PTR [rax],0x6
0x1401cdf1f: jne     0x1401cdf48
0x1401cdf21: cmp     esi,edi
0x1401cdf23: jne     0x1401cdf2d
0x1401cdf25: mov     edx,DWORD PTR [rip+0x24a03d1]        # 0x14266e2fc
0x1401cdf2b: jmp     0x1401cdf64
0x1401cdf2d: lea     rcx,[rip+0x249e93c]        # 0x14266c870
0x1401cdf34: cmp     esi,ebx
0x1401cdf36: jne     0x1401cdf40
0x1401cdf38: mov     edx,DWORD PTR [rip+0x24a03d6]        # 0x14266e314
0x1401cdf3e: jmp     0x1401cdf6b
0x1401cdf40: mov     edx,DWORD PTR [rip+0x24a03c2]        # 0x14266e308
0x1401cdf46: jmp     0x1401cdf6b
0x1401cdf48: cmp     esi,edi
0x1401cdf4a: jne     0x1401cdf54
0x1401cdf4c: mov     edx,DWORD PTR [rip+0x24a0362]        # 0x14266e2b4
0x1401cdf52: jmp     0x1401cdf64
0x1401cdf54: cmp     esi,ebx
0x1401cdf56: mov     edx,DWORD PTR [rip+0x24a0370]        # 0x14266e2cc
0x1401cdf5c: je      0x1401cdf64
0x1401cdf5e: mov     edx,DWORD PTR [rip+0x24a035c]        # 0x14266e2c0
0x1401cdf64: lea     rcx,[rip+0x249e905]        # 0x14266c870
0x1401cdf6b: call    0x140af4570
0x1401cdf70: mov     r8d,esi
0x1401cdf73: mov     edx,0x9
0x1401cdf78: lea     rcx,[rip+0x249e8f1]        # 0x14266c870
0x1401cdf7f: call    0x1400bc750
0x1401cdf84: mov     rax,QWORD PTR [r12+0x130]
0x1401cdf8c: cmp     DWORD PTR [rax],0x6
0x1401cdf8f: jne     0x1401cdfb8
0x1401cdf91: cmp     esi,edi
0x1401cdf93: jne     0x1401cdf9d
0x1401cdf95: mov     edx,DWORD PTR [rip+0x24a0365]        # 0x14266e300
0x1401cdf9b: jmp     0x1401cdfd4
0x1401cdf9d: lea     rcx,[rip+0x249e8cc]        # 0x14266c870
0x1401cdfa4: cmp     esi,ebx
0x1401cdfa6: jne     0x1401cdfb0
0x1401cdfa8: mov     edx,DWORD PTR [rip+0x24a036a]        # 0x14266e318
0x1401cdfae: jmp     0x1401cdfdb
0x1401cdfb0: mov     edx,DWORD PTR [rip+0x24a0356]        # 0x14266e30c
0x1401cdfb6: jmp     0x1401cdfdb
0x1401cdfb8: cmp     esi,edi
0x1401cdfba: jne     0x1401cdfc4
0x1401cdfbc: mov     edx,DWORD PTR [rip+0x24a02f6]        # 0x14266e2b8
0x1401cdfc2: jmp     0x1401cdfd4
0x1401cdfc4: cmp     esi,ebx
0x1401cdfc6: mov     edx,DWORD PTR [rip+0x24a0304]        # 0x14266e2d0
0x1401cdfcc: je      0x1401cdfd4
0x1401cdfce: mov     edx,DWORD PTR [rip+0x24a02f0]        # 0x14266e2c4
0x1401cdfd4: lea     rcx,[rip+0x249e895]        # 0x14266c870
0x1401cdfdb: call    0x140af4570
0x1401cdfe0: mov     r8d,esi
0x1401cdfe3: mov     edx,0xa
0x1401cdfe8: lea     rcx,[rip+0x249e881]        # 0x14266c870
0x1401cdfef: call    0x1400bc750
0x1401cdff4: mov     rax,QWORD PTR [r12+0x130]
0x1401cdffc: cmp     DWORD PTR [rax],0x6
0x1401cdfff: jne     0x1401ce028
0x1401ce001: cmp     esi,edi
0x1401ce003: jne     0x1401ce00d
0x1401ce005: mov     edx,DWORD PTR [rip+0x24a02f9]        # 0x14266e304
0x1401ce00b: jmp     0x1401ce044
0x1401ce00d: lea     rcx,[rip+0x249e85c]        # 0x14266c870
0x1401ce014: cmp     esi,ebx
0x1401ce016: jne     0x1401ce020
0x1401ce018: mov     edx,DWORD PTR [rip+0x24a02fe]        # 0x14266e31c
0x1401ce01e: jmp     0x1401ce04b
0x1401ce020: mov     edx,DWORD PTR [rip+0x24a02ea]        # 0x14266e310
0x1401ce026: jmp     0x1401ce04b
0x1401ce028: cmp     esi,edi
0x1401ce02a: jne     0x1401ce034
0x1401ce02c: mov     edx,DWORD PTR [rip+0x24a028a]        # 0x14266e2bc
0x1401ce032: jmp     0x1401ce044
0x1401ce034: cmp     esi,ebx
0x1401ce036: mov     edx,DWORD PTR [rip+0x24a0298]        # 0x14266e2d4
0x1401ce03c: je      0x1401ce044
0x1401ce03e: mov     edx,DWORD PTR [rip+0x24a0284]        # 0x14266e2c8
0x1401ce044: lea     rcx,[rip+0x249e825]        # 0x14266c870
0x1401ce04b: call    0x140af4570
0x1401ce050: inc     esi
0x1401ce052: cmp     esi,ebx
0x1401ce054: jle     0x1401cdf00
0x1401ce05a: xor     r8d,r8d
0x1401ce05d: mov     edx,0x7
0x1401ce062: mov     r9b,0x1
0x1401ce065: lea     rcx,[rip+0x249e804]        # 0x14266c870
0x1401ce06c: call    0x1400bc760
0x1401ce071: lea     r8d,[rdi+0x2]
0x1401ce075: mov     edx,0x9
0x1401ce07a: lea     rcx,[rip+0x249e7ef]        # 0x14266c870
0x1401ce081: call    0x1400bc750
0x1401ce086: lea     rdx,[rip+0x1451e13]        # 0x14161fea0 ; literal='Pillage (openly attack)'
0x1401ce08d: lea     rcx,[rbp+0x2b30]
0x1401ce094: call    0x140069780
0x1401ce099: nop     
0x1401ce09a: xor     r9d,r9d
0x1401ce09d: xor     r8d,r8d
0x1401ce0a0: lea     rdx,[rbp+0x2b30]
0x1401ce0a7: lea     rcx,[rip+0x249e7c2]        # 0x14266c870
0x1401ce0ae: call    0x140af3400
0x1401ce0b3: nop     
0x1401ce0b4: lea     rcx,[rbp+0x2b30]
0x1401ce0bb: call    0x140069460
0x1401ce0c0: mov     esi,edi
0x1401ce0c2: mov     r14d,0xc
0x1401ce0c8: cmp     edi,ebx
0x1401ce0ca: jg      0x1401ce23a
0x1401ce0d0: mov     eax,0xb
0x1401ce0d5: data16  data16 nop WORD PTR [rax+rax*1+0x0]
0x1401ce0e0: mov     r8d,esi
0x1401ce0e3: mov     edx,eax
0x1401ce0e5: lea     rcx,[rip+0x249e784]        # 0x14266c870
0x1401ce0ec: call    0x1400bc750
0x1401ce0f1: mov     rax,QWORD PTR [r12+0x130]
0x1401ce0f9: cmp     DWORD PTR [rax],0x0
0x1401ce0fc: jne     0x1401ce125
0x1401ce0fe: cmp     esi,edi
0x1401ce100: jne     0x1401ce10a
0x1401ce102: mov     edx,DWORD PTR [rip+0x24a01f4]        # 0x14266e2fc
0x1401ce108: jmp     0x1401ce141
0x1401ce10a: lea     rcx,[rip+0x249e75f]        # 0x14266c870
0x1401ce111: cmp     esi,ebx
0x1401ce113: jne     0x1401ce11d
0x1401ce115: mov     edx,DWORD PTR [rip+0x24a01f9]        # 0x14266e314
0x1401ce11b: jmp     0x1401ce148
0x1401ce11d: mov     edx,DWORD PTR [rip+0x24a01e5]        # 0x14266e308
0x1401ce123: jmp     0x1401ce148
0x1401ce125: cmp     esi,edi
0x1401ce127: jne     0x1401ce131
0x1401ce129: mov     edx,DWORD PTR [rip+0x24a0185]        # 0x14266e2b4
0x1401ce12f: jmp     0x1401ce141
0x1401ce131: cmp     esi,ebx
0x1401ce133: mov     edx,DWORD PTR [rip+0x24a0193]        # 0x14266e2cc
0x1401ce139: je      0x1401ce141
0x1401ce13b: mov     edx,DWORD PTR [rip+0x24a017f]        # 0x14266e2c0
0x1401ce141: lea     rcx,[rip+0x249e728]        # 0x14266c870
0x1401ce148: call    0x140af4570
0x1401ce14d: mov     r8d,esi
0x1401ce150: mov     edx,r14d
0x1401ce153: lea     rcx,[rip+0x249e716]        # 0x14266c870
0x1401ce15a: call    0x1400bc750
0x1401ce15f: mov     rax,QWORD PTR [r12+0x130]
0x1401ce167: cmp     DWORD PTR [rax],0x0
0x1401ce16a: jne     0x1401ce193
0x1401ce16c: cmp     esi,edi
0x1401ce16e: jne     0x1401ce178
0x1401ce170: mov     edx,DWORD PTR [rip+0x24a018a]        # 0x14266e300
0x1401ce176: jmp     0x1401ce1af
0x1401ce178: lea     rcx,[rip+0x249e6f1]        # 0x14266c870
0x1401ce17f: cmp     esi,ebx
0x1401ce181: jne     0x1401ce18b
0x1401ce183: mov     edx,DWORD PTR [rip+0x24a018f]        # 0x14266e318
0x1401ce189: jmp     0x1401ce1b6
0x1401ce18b: mov     edx,DWORD PTR [rip+0x24a017b]        # 0x14266e30c
0x1401ce191: jmp     0x1401ce1b6
0x1401ce193: cmp     esi,edi
0x1401ce195: jne     0x1401ce19f
0x1401ce197: mov     edx,DWORD PTR [rip+0x24a011b]        # 0x14266e2b8
0x1401ce19d: jmp     0x1401ce1af
0x1401ce19f: cmp     esi,ebx
0x1401ce1a1: mov     edx,DWORD PTR [rip+0x24a0129]        # 0x14266e2d0
0x1401ce1a7: je      0x1401ce1af
0x1401ce1a9: mov     edx,DWORD PTR [rip+0x24a0115]        # 0x14266e2c4
0x1401ce1af: lea     rcx,[rip+0x249e6ba]        # 0x14266c870
0x1401ce1b6: call    0x140af4570
0x1401ce1bb: mov     r8d,esi
0x1401ce1be: mov     edx,0xd
0x1401ce1c3: lea     rcx,[rip+0x249e6a6]        # 0x14266c870
0x1401ce1ca: call    0x1400bc750
0x1401ce1cf: mov     rax,QWORD PTR [r12+0x130]
0x1401ce1d7: cmp     DWORD PTR [rax],0x0
0x1401ce1da: jne     0x1401ce203
0x1401ce1dc: cmp     esi,edi
0x1401ce1de: jne     0x1401ce1e8
0x1401ce1e0: mov     edx,DWORD PTR [rip+0x24a011e]        # 0x14266e304
0x1401ce1e6: jmp     0x1401ce21f
0x1401ce1e8: lea     rcx,[rip+0x249e681]        # 0x14266c870
0x1401ce1ef: cmp     esi,ebx
0x1401ce1f1: jne     0x1401ce1fb
0x1401ce1f3: mov     edx,DWORD PTR [rip+0x24a0123]        # 0x14266e31c
0x1401ce1f9: jmp     0x1401ce226
0x1401ce1fb: mov     edx,DWORD PTR [rip+0x24a010f]        # 0x14266e310
0x1401ce201: jmp     0x1401ce226
0x1401ce203: cmp     esi,edi
0x1401ce205: jne     0x1401ce20f
0x1401ce207: mov     edx,DWORD PTR [rip+0x24a00af]        # 0x14266e2bc
0x1401ce20d: jmp     0x1401ce21f
0x1401ce20f: cmp     esi,ebx
0x1401ce211: mov     edx,DWORD PTR [rip+0x24a00bd]        # 0x14266e2d4
0x1401ce217: je      0x1401ce21f
0x1401ce219: mov     edx,DWORD PTR [rip+0x24a00a9]        # 0x14266e2c8
0x1401ce21f: lea     rcx,[rip+0x249e64a]        # 0x14266c870
0x1401ce226: call    0x140af4570
0x1401ce22b: inc     esi
0x1401ce22d: cmp     esi,ebx
0x1401ce22f: mov     eax,0xb
0x1401ce234: jle     0x1401ce0e0
0x1401ce23a: xor     r8d,r8d
0x1401ce23d: mov     edx,0x7
0x1401ce242: mov     r9b,0x1
0x1401ce245: lea     rcx,[rip+0x249e624]        # 0x14266c870
0x1401ce24c: call    0x1400bc760
0x1401ce251: lea     r8d,[rdi+0x2]
0x1401ce255: mov     edx,r14d
0x1401ce258: lea     rcx,[rip+0x249e611]        # 0x14266c870
0x1401ce25f: call    0x1400bc750
0x1401ce264: lea     rdx,[rip+0x1451c4d]        # 0x14161feb8 ; literal='Raze (openly attack and destroy site)'
0x1401ce26b: lea     rcx,[rbp+0x2b50]
0x1401ce272: call    0x140069780
0x1401ce277: nop     
0x1401ce278: xor     r9d,r9d
0x1401ce27b: xor     r8d,r8d
0x1401ce27e: lea     rdx,[rbp+0x2b50]
0x1401ce285: lea     rcx,[rip+0x249e5e4]        # 0x14266c870
0x1401ce28c: call    0x140af3400
0x1401ce291: nop     
0x1401ce292: lea     rcx,[rbp+0x2b50]
0x1401ce299: call    0x140069460
0x1401ce29e: mov     esi,edi
0x1401ce2a0: cmp     edi,ebx
0x1401ce2a2: jg      0x1401ce40d
0x1401ce2a8: nop     DWORD PTR [rax+rax*1+0x0]
0x1401ce2b0: mov     r8d,esi
0x1401ce2b3: mov     edx,0xe
0x1401ce2b8: lea     rcx,[rip+0x249e5b1]        # 0x14266c870
0x1401ce2bf: call    0x1400bc750
0x1401ce2c4: mov     rax,QWORD PTR [r12+0x130]
0x1401ce2cc: test    BYTE PTR [rax+0x58],0x2
0x1401ce2d0: je      0x1401ce2f9
0x1401ce2d2: cmp     esi,edi
0x1401ce2d4: jne     0x1401ce2de
0x1401ce2d6: mov     edx,DWORD PTR [rip+0x24a0020]        # 0x14266e2fc
0x1401ce2dc: jmp     0x1401ce315
0x1401ce2de: lea     rcx,[rip+0x249e58b]        # 0x14266c870
0x1401ce2e5: cmp     esi,ebx
0x1401ce2e7: jne     0x1401ce2f1
0x1401ce2e9: mov     edx,DWORD PTR [rip+0x24a0025]        # 0x14266e314
0x1401ce2ef: jmp     0x1401ce31c
0x1401ce2f1: mov     edx,DWORD PTR [rip+0x24a0011]        # 0x14266e308
0x1401ce2f7: jmp     0x1401ce31c
0x1401ce2f9: cmp     esi,edi
0x1401ce2fb: jne     0x1401ce305
0x1401ce2fd: mov     edx,DWORD PTR [rip+0x249ffb1]        # 0x14266e2b4
0x1401ce303: jmp     0x1401ce315
0x1401ce305: cmp     esi,ebx
0x1401ce307: mov     edx,DWORD PTR [rip+0x249ffbf]        # 0x14266e2cc
0x1401ce30d: je      0x1401ce315
0x1401ce30f: mov     edx,DWORD PTR [rip+0x249ffab]        # 0x14266e2c0
0x1401ce315: lea     rcx,[rip+0x249e554]        # 0x14266c870
0x1401ce31c: call    0x140af4570
0x1401ce321: mov     r8d,esi
0x1401ce324: mov     edx,0xf
0x1401ce329: lea     rcx,[rip+0x249e540]        # 0x14266c870
0x1401ce330: call    0x1400bc750
0x1401ce335: mov     rax,QWORD PTR [r12+0x130]
0x1401ce33d: test    BYTE PTR [rax+0x58],0x2
0x1401ce341: je      0x1401ce36a
0x1401ce343: cmp     esi,edi
0x1401ce345: jne     0x1401ce34f
0x1401ce347: mov     edx,DWORD PTR [rip+0x249ffb3]        # 0x14266e300
0x1401ce34d: jmp     0x1401ce386
0x1401ce34f: lea     rcx,[rip+0x249e51a]        # 0x14266c870
0x1401ce356: cmp     esi,ebx
0x1401ce358: jne     0x1401ce362
0x1401ce35a: mov     edx,DWORD PTR [rip+0x249ffb8]        # 0x14266e318
0x1401ce360: jmp     0x1401ce38d
0x1401ce362: mov     edx,DWORD PTR [rip+0x249ffa4]        # 0x14266e30c
0x1401ce368: jmp     0x1401ce38d
0x1401ce36a: cmp     esi,edi
0x1401ce36c: jne     0x1401ce376
0x1401ce36e: mov     edx,DWORD PTR [rip+0x249ff44]        # 0x14266e2b8
0x1401ce374: jmp     0x1401ce386
0x1401ce376: cmp     esi,ebx
0x1401ce378: mov     edx,DWORD PTR [rip+0x249ff52]        # 0x14266e2d0
0x1401ce37e: je      0x1401ce386
0x1401ce380: mov     edx,DWORD PTR [rip+0x249ff3e]        # 0x14266e2c4
0x1401ce386: lea     rcx,[rip+0x249e4e3]        # 0x14266c870
0x1401ce38d: call    0x140af4570
0x1401ce392: mov     r8d,esi
0x1401ce395: mov     edx,0x10
0x1401ce39a: lea     rcx,[rip+0x249e4cf]        # 0x14266c870
0x1401ce3a1: call    0x1400bc750
0x1401ce3a6: mov     rax,QWORD PTR [r12+0x130]
0x1401ce3ae: test    BYTE PTR [rax+0x58],0x2
0x1401ce3b2: je      0x1401ce3db
0x1401ce3b4: cmp     esi,edi
0x1401ce3b6: jne     0x1401ce3c0
0x1401ce3b8: mov     edx,DWORD PTR [rip+0x249ff46]        # 0x14266e304
0x1401ce3be: jmp     0x1401ce3f7
0x1401ce3c0: lea     rcx,[rip+0x249e4a9]        # 0x14266c870
0x1401ce3c7: cmp     esi,ebx
0x1401ce3c9: jne     0x1401ce3d3
0x1401ce3cb: mov     edx,DWORD PTR [rip+0x249ff4b]        # 0x14266e31c
0x1401ce3d1: jmp     0x1401ce3fe
0x1401ce3d3: mov     edx,DWORD PTR [rip+0x249ff37]        # 0x14266e310
0x1401ce3d9: jmp     0x1401ce3fe
0x1401ce3db: cmp     esi,edi
0x1401ce3dd: jne     0x1401ce3e7
0x1401ce3df: mov     edx,DWORD PTR [rip+0x249fed7]        # 0x14266e2bc
0x1401ce3e5: jmp     0x1401ce3f7
0x1401ce3e7: cmp     esi,ebx
0x1401ce3e9: mov     edx,DWORD PTR [rip+0x249fee5]        # 0x14266e2d4
0x1401ce3ef: je      0x1401ce3f7
0x1401ce3f1: mov     edx,DWORD PTR [rip+0x249fed1]        # 0x14266e2c8
0x1401ce3f7: lea     rcx,[rip+0x249e472]        # 0x14266c870
0x1401ce3fe: call    0x140af4570
0x1401ce403: inc     esi
0x1401ce405: cmp     esi,ebx
0x1401ce407: jle     0x1401ce2b0
0x1401ce40d: xor     r8d,r8d
0x1401ce410: mov     edx,0x7
0x1401ce415: mov     r9b,0x1
0x1401ce418: lea     rcx,[rip+0x249e451]        # 0x14266c870
0x1401ce41f: call    0x1400bc760
0x1401ce424: lea     r8d,[rdi+0x2]
0x1401ce428: mov     edx,0xf
0x1401ce42d: lea     rcx,[rip+0x249e43c]        # 0x14266c870
0x1401ce434: call    0x1400bc750
0x1401ce439: lea     rdx,[rip+0x1451aa0]        # 0x14161fee0 ; literal='Demand one-time tribute'
0x1401ce440: lea     rcx,[rbp+0x2b70]
0x1401ce447: call    0x140069780
0x1401ce44c: nop     
0x1401ce44d: xor     r9d,r9d
0x1401ce450: xor     r8d,r8d
0x1401ce453: lea     rdx,[rbp+0x2b70]
0x1401ce45a: lea     rcx,[rip+0x249e40f]        # 0x14266c870
0x1401ce461: call    0x140af3400
0x1401ce466: nop     
0x1401ce467: lea     rcx,[rbp+0x2b70]
0x1401ce46e: call    0x140069460
0x1401ce473: mov     esi,edi
0x1401ce475: cmp     edi,ebx
0x1401ce477: jg      0x1401ce5dd
0x1401ce47d: nop     DWORD PTR [rax]
0x1401ce480: mov     r8d,esi
0x1401ce483: mov     edx,0x11
0x1401ce488: lea     rcx,[rip+0x249e3e1]        # 0x14266c870
0x1401ce48f: call    0x1400bc750
0x1401ce494: mov     rax,QWORD PTR [r12+0x130]
0x1401ce49c: test    BYTE PTR [rax+0x58],0x4
0x1401ce4a0: je      0x1401ce4c9
0x1401ce4a2: cmp     esi,edi
0x1401ce4a4: jne     0x1401ce4ae
0x1401ce4a6: mov     edx,DWORD PTR [rip+0x249fe50]        # 0x14266e2fc
0x1401ce4ac: jmp     0x1401ce4e5
0x1401ce4ae: lea     rcx,[rip+0x249e3bb]        # 0x14266c870
0x1401ce4b5: cmp     esi,ebx
0x1401ce4b7: jne     0x1401ce4c1
0x1401ce4b9: mov     edx,DWORD PTR [rip+0x249fe55]        # 0x14266e314
0x1401ce4bf: jmp     0x1401ce4ec
0x1401ce4c1: mov     edx,DWORD PTR [rip+0x249fe41]        # 0x14266e308
0x1401ce4c7: jmp     0x1401ce4ec
0x1401ce4c9: cmp     esi,edi
0x1401ce4cb: jne     0x1401ce4d5
0x1401ce4cd: mov     edx,DWORD PTR [rip+0x249fde1]        # 0x14266e2b4
0x1401ce4d3: jmp     0x1401ce4e5
0x1401ce4d5: cmp     esi,ebx
0x1401ce4d7: mov     edx,DWORD PTR [rip+0x249fdef]        # 0x14266e2cc
0x1401ce4dd: je      0x1401ce4e5
0x1401ce4df: mov     edx,DWORD PTR [rip+0x249fddb]        # 0x14266e2c0
0x1401ce4e5: lea     rcx,[rip+0x249e384]        # 0x14266c870
0x1401ce4ec: call    0x140af4570
0x1401ce4f1: mov     r8d,esi
0x1401ce4f4: mov     edx,0x12
0x1401ce4f9: lea     rcx,[rip+0x249e370]        # 0x14266c870
0x1401ce500: call    0x1400bc750
0x1401ce505: mov     rax,QWORD PTR [r12+0x130]
0x1401ce50d: test    BYTE PTR [rax+0x58],0x4
0x1401ce511: je      0x1401ce53a
0x1401ce513: cmp     esi,edi
0x1401ce515: jne     0x1401ce51f
0x1401ce517: mov     edx,DWORD PTR [rip+0x249fde3]        # 0x14266e300
0x1401ce51d: jmp     0x1401ce556
0x1401ce51f: lea     rcx,[rip+0x249e34a]        # 0x14266c870
0x1401ce526: cmp     esi,ebx
0x1401ce528: jne     0x1401ce532
0x1401ce52a: mov     edx,DWORD PTR [rip+0x249fde8]        # 0x14266e318
0x1401ce530: jmp     0x1401ce55d
0x1401ce532: mov     edx,DWORD PTR [rip+0x249fdd4]        # 0x14266e30c
0x1401ce538: jmp     0x1401ce55d
0x1401ce53a: cmp     esi,edi
0x1401ce53c: jne     0x1401ce546
0x1401ce53e: mov     edx,DWORD PTR [rip+0x249fd74]        # 0x14266e2b8
0x1401ce544: jmp     0x1401ce556
0x1401ce546: cmp     esi,ebx
0x1401ce548: mov     edx,DWORD PTR [rip+0x249fd82]        # 0x14266e2d0
0x1401ce54e: je      0x1401ce556
0x1401ce550: mov     edx,DWORD PTR [rip+0x249fd6e]        # 0x14266e2c4
0x1401ce556: lea     rcx,[rip+0x249e313]        # 0x14266c870
0x1401ce55d: call    0x140af4570
0x1401ce562: mov     r8d,esi
0x1401ce565: mov     edx,0x13
0x1401ce56a: lea     rcx,[rip+0x249e2ff]        # 0x14266c870
0x1401ce571: call    0x1400bc750
0x1401ce576: mov     rax,QWORD PTR [r12+0x130]
0x1401ce57e: test    BYTE PTR [rax+0x58],0x4
0x1401ce582: je      0x1401ce5ab
0x1401ce584: cmp     esi,edi
0x1401ce586: jne     0x1401ce590
0x1401ce588: mov     edx,DWORD PTR [rip+0x249fd76]        # 0x14266e304
0x1401ce58e: jmp     0x1401ce5c7
0x1401ce590: lea     rcx,[rip+0x249e2d9]        # 0x14266c870
0x1401ce597: cmp     esi,ebx
0x1401ce599: jne     0x1401ce5a3
0x1401ce59b: mov     edx,DWORD PTR [rip+0x249fd7b]        # 0x14266e31c
0x1401ce5a1: jmp     0x1401ce5ce
0x1401ce5a3: mov     edx,DWORD PTR [rip+0x249fd67]        # 0x14266e310
0x1401ce5a9: jmp     0x1401ce5ce
0x1401ce5ab: cmp     esi,edi
0x1401ce5ad: jne     0x1401ce5b7
0x1401ce5af: mov     edx,DWORD PTR [rip+0x249fd07]        # 0x14266e2bc
0x1401ce5b5: jmp     0x1401ce5c7
0x1401ce5b7: cmp     esi,ebx
0x1401ce5b9: mov     edx,DWORD PTR [rip+0x249fd15]        # 0x14266e2d4
0x1401ce5bf: je      0x1401ce5c7
0x1401ce5c1: mov     edx,DWORD PTR [rip+0x249fd01]        # 0x14266e2c8
0x1401ce5c7: lea     rcx,[rip+0x249e2a2]        # 0x14266c870
0x1401ce5ce: call    0x140af4570
0x1401ce5d3: inc     esi
0x1401ce5d5: cmp     esi,ebx
0x1401ce5d7: jle     0x1401ce480
0x1401ce5dd: xor     r8d,r8d
0x1401ce5e0: mov     edx,0x7
0x1401ce5e5: mov     r9b,0x1
0x1401ce5e8: lea     rcx,[rip+0x249e281]        # 0x14266c870
0x1401ce5ef: call    0x1400bc760
0x1401ce5f4: lea     r8d,[rdi+0x2]
0x1401ce5f8: mov     edx,0x12
0x1401ce5fd: lea     rcx,[rip+0x249e26c]        # 0x14266c870
0x1401ce604: call    0x1400bc750
0x1401ce609: lea     rdx,[rip+0x14518e8]        # 0x14161fef8 ; literal='Demand ongoing tribute'
0x1401ce610: lea     rcx,[rbp+0x2b90]
0x1401ce617: call    0x140069780
0x1401ce61c: nop     
0x1401ce61d: xor     r9d,r9d
0x1401ce620: xor     r8d,r8d
0x1401ce623: lea     rdx,[rbp+0x2b90]
0x1401ce62a: lea     rcx,[rip+0x249e23f]        # 0x14266c870
0x1401ce631: call    0x140af3400
0x1401ce636: nop     
0x1401ce637: lea     rcx,[rbp+0x2b90]
0x1401ce63e: call    0x140069460
0x1401ce643: mov     esi,edi
0x1401ce645: cmp     edi,ebx
0x1401ce647: jg      0x1401ce7d3
0x1401ce64d: mov     r12d,0x14
0x1401ce653: mov     r14,QWORD PTR [rbp-0x78]
0x1401ce657: nop     WORD PTR [rax+rax*1+0x0]
0x1401ce660: mov     r8d,esi
0x1401ce663: mov     edx,r12d
0x1401ce666: lea     rcx,[rip+0x249e203]        # 0x14266c870
0x1401ce66d: call    0x1400bc750
0x1401ce672: mov     rax,QWORD PTR [r14+0x130]
0x1401ce679: cmp     DWORD PTR [rax],0x2
0x1401ce67c: jne     0x1401ce6ae
0x1401ce67e: test    DWORD PTR [rax+0x58],0x200
0x1401ce685: jne     0x1401ce6ae
0x1401ce687: cmp     esi,edi
0x1401ce689: jne     0x1401ce693
0x1401ce68b: mov     edx,DWORD PTR [rip+0x249fc6b]        # 0x14266e2fc
0x1401ce691: jmp     0x1401ce6ca
0x1401ce693: lea     rcx,[rip+0x249e1d6]        # 0x14266c870
0x1401ce69a: cmp     esi,ebx
0x1401ce69c: jne     0x1401ce6a6
0x1401ce69e: mov     edx,DWORD PTR [rip+0x249fc70]        # 0x14266e314
0x1401ce6a4: jmp     0x1401ce6d1
0x1401ce6a6: mov     edx,DWORD PTR [rip+0x249fc5c]        # 0x14266e308
0x1401ce6ac: jmp     0x1401ce6d1
0x1401ce6ae: cmp     esi,edi
0x1401ce6b0: jne     0x1401ce6ba
0x1401ce6b2: mov     edx,DWORD PTR [rip+0x249fbfc]        # 0x14266e2b4
0x1401ce6b8: jmp     0x1401ce6ca
0x1401ce6ba: cmp     esi,ebx
0x1401ce6bc: mov     edx,DWORD PTR [rip+0x249fc0a]        # 0x14266e2cc
0x1401ce6c2: je      0x1401ce6ca
0x1401ce6c4: mov     edx,DWORD PTR [rip+0x249fbf6]        # 0x14266e2c0
0x1401ce6ca: lea     rcx,[rip+0x249e19f]        # 0x14266c870
0x1401ce6d1: call    0x140af4570
0x1401ce6d6: mov     r8d,esi
0x1401ce6d9: mov     edx,0x15
0x1401ce6de: lea     rcx,[rip+0x249e18b]        # 0x14266c870
0x1401ce6e5: call    0x1400bc750
0x1401ce6ea: mov     rax,QWORD PTR [r14+0x130]
0x1401ce6f1: cmp     DWORD PTR [rax],0x2
0x1401ce6f4: jne     0x1401ce726
0x1401ce6f6: test    DWORD PTR [rax+0x58],0x200
0x1401ce6fd: jne     0x1401ce726
0x1401ce6ff: cmp     esi,edi
0x1401ce701: jne     0x1401ce70b
0x1401ce703: mov     edx,DWORD PTR [rip+0x249fbf7]        # 0x14266e300
0x1401ce709: jmp     0x1401ce742
0x1401ce70b: lea     rcx,[rip+0x249e15e]        # 0x14266c870
0x1401ce712: cmp     esi,ebx
0x1401ce714: jne     0x1401ce71e
0x1401ce716: mov     edx,DWORD PTR [rip+0x249fbfc]        # 0x14266e318
0x1401ce71c: jmp     0x1401ce749
0x1401ce71e: mov     edx,DWORD PTR [rip+0x249fbe8]        # 0x14266e30c
0x1401ce724: jmp     0x1401ce749
0x1401ce726: cmp     esi,edi
0x1401ce728: jne     0x1401ce732
0x1401ce72a: mov     edx,DWORD PTR [rip+0x249fb88]        # 0x14266e2b8
0x1401ce730: jmp     0x1401ce742
0x1401ce732: cmp     esi,ebx
0x1401ce734: mov     edx,DWORD PTR [rip+0x249fb96]        # 0x14266e2d0
0x1401ce73a: je      0x1401ce742
0x1401ce73c: mov     edx,DWORD PTR [rip+0x249fb82]        # 0x14266e2c4
0x1401ce742: lea     rcx,[rip+0x249e127]        # 0x14266c870
0x1401ce749: call    0x140af4570
0x1401ce74e: mov     r8d,esi
0x1401ce751: mov     edx,0x16
0x1401ce756: lea     rcx,[rip+0x249e113]        # 0x14266c870
0x1401ce75d: call    0x1400bc750
0x1401ce762: mov     rax,QWORD PTR [r14+0x130]
0x1401ce769: cmp     DWORD PTR [rax],0x2
0x1401ce76c: jne     0x1401ce79e
0x1401ce76e: test    DWORD PTR [rax+0x58],0x200
0x1401ce775: jne     0x1401ce79e
0x1401ce777: cmp     esi,edi
0x1401ce779: jne     0x1401ce783
0x1401ce77b: mov     edx,DWORD PTR [rip+0x249fb83]        # 0x14266e304
0x1401ce781: jmp     0x1401ce7ba
0x1401ce783: lea     rcx,[rip+0x249e0e6]        # 0x14266c870
0x1401ce78a: cmp     esi,ebx
0x1401ce78c: jne     0x1401ce796
0x1401ce78e: mov     edx,DWORD PTR [rip+0x249fb88]        # 0x14266e31c
0x1401ce794: jmp     0x1401ce7c1
0x1401ce796: mov     edx,DWORD PTR [rip+0x249fb74]        # 0x14266e310
0x1401ce79c: jmp     0x1401ce7c1
0x1401ce79e: cmp     esi,edi
0x1401ce7a0: jne     0x1401ce7aa
0x1401ce7a2: mov     edx,DWORD PTR [rip+0x249fb14]        # 0x14266e2bc
0x1401ce7a8: jmp     0x1401ce7ba
0x1401ce7aa: cmp     esi,ebx
0x1401ce7ac: mov     edx,DWORD PTR [rip+0x249fb22]        # 0x14266e2d4
0x1401ce7b2: je      0x1401ce7ba
0x1401ce7b4: mov     edx,DWORD PTR [rip+0x249fb0e]        # 0x14266e2c8
0x1401ce7ba: lea     rcx,[rip+0x249e0af]        # 0x14266c870
0x1401ce7c1: call    0x140af4570
0x1401ce7c6: inc     esi
0x1401ce7c8: cmp     esi,ebx
0x1401ce7ca: jle     0x1401ce660
0x1401ce7d0: mov     r12,r14
0x1401ce7d3: xor     r8d,r8d
0x1401ce7d6: mov     edx,0x7
0x1401ce7db: mov     r9b,0x1
0x1401ce7de: lea     rcx,[rip+0x249e08b]        # 0x14266c870
0x1401ce7e5: call    0x1400bc760
0x1401ce7ea: lea     r8d,[rdi+0x2]
0x1401ce7ee: mov     edx,0x15
0x1401ce7f3: lea     rcx,[rip+0x249e076]        # 0x14266c870
0x1401ce7fa: call    0x1400bc750
0x1401ce7ff: lea     rdx,[rip+0x145170a]        # 0x14161ff10 ; literal='Conquer and occupy'
0x1401ce806: lea     rcx,[rbp+0x2bb0]
0x1401ce80d: call    0x140069780
0x1401ce812: nop     
0x1401ce813: xor     r9d,r9d
0x1401ce816: xor     r8d,r8d
0x1401ce819: lea     rdx,[rbp+0x2bb0]
0x1401ce820: lea     rcx,[rip+0x249e049]        # 0x14266c870
0x1401ce827: call    0x140af3400
0x1401ce82c: nop     
0x1401ce82d: lea     rcx,[rbp+0x2bb0]
0x1401ce834: call    0x140069460
0x1401ce839: mov     esi,edi
0x1401ce83b: cmp     edi,ebx
0x1401ce83d: jg      0x1401ce9c5
0x1401ce843: nop     DWORD PTR [rax+0x0]
0x1401ce847: nop     WORD PTR [rax+rax*1+0x0]
0x1401ce850: mov     r8d,esi
0x1401ce853: mov     edx,0x17
0x1401ce858: lea     rcx,[rip+0x249e011]        # 0x14266c870
0x1401ce85f: call    0x1400bc750
0x1401ce864: mov     rax,QWORD PTR [r12+0x130]
0x1401ce86c: cmp     DWORD PTR [rax],0x2
0x1401ce86f: jne     0x1401ce8a1
0x1401ce871: test    DWORD PTR [rax+0x58],0x200
0x1401ce878: je      0x1401ce8a1
0x1401ce87a: cmp     esi,edi
0x1401ce87c: jne     0x1401ce886
0x1401ce87e: mov     edx,DWORD PTR [rip+0x249fa78]        # 0x14266e2fc
0x1401ce884: jmp     0x1401ce8bd
0x1401ce886: lea     rcx,[rip+0x249dfe3]        # 0x14266c870
0x1401ce88d: cmp     esi,ebx
0x1401ce88f: jne     0x1401ce899
0x1401ce891: mov     edx,DWORD PTR [rip+0x249fa7d]        # 0x14266e314
0x1401ce897: jmp     0x1401ce8c4
0x1401ce899: mov     edx,DWORD PTR [rip+0x249fa69]        # 0x14266e308
0x1401ce89f: jmp     0x1401ce8c4
0x1401ce8a1: cmp     esi,edi
0x1401ce8a3: jne     0x1401ce8ad
0x1401ce8a5: mov     edx,DWORD PTR [rip+0x249fa09]        # 0x14266e2b4
0x1401ce8ab: jmp     0x1401ce8bd
0x1401ce8ad: cmp     esi,ebx
0x1401ce8af: mov     edx,DWORD PTR [rip+0x249fa17]        # 0x14266e2cc
0x1401ce8b5: je      0x1401ce8bd
0x1401ce8b7: mov     edx,DWORD PTR [rip+0x249fa03]        # 0x14266e2c0
0x1401ce8bd: lea     rcx,[rip+0x249dfac]        # 0x14266c870
0x1401ce8c4: call    0x140af4570
0x1401ce8c9: mov     r8d,esi
0x1401ce8cc: mov     edx,0x18
0x1401ce8d1: lea     rcx,[rip+0x249df98]        # 0x14266c870
0x1401ce8d8: call    0x1400bc750
0x1401ce8dd: mov     rax,QWORD PTR [r12+0x130]
0x1401ce8e5: cmp     DWORD PTR [rax],0x2
0x1401ce8e8: jne     0x1401ce91a
0x1401ce8ea: test    DWORD PTR [rax+0x58],0x200
0x1401ce8f1: je      0x1401ce91a
0x1401ce8f3: cmp     esi,edi
0x1401ce8f5: jne     0x1401ce8ff
0x1401ce8f7: mov     edx,DWORD PTR [rip+0x249fa03]        # 0x14266e300
0x1401ce8fd: jmp     0x1401ce936
0x1401ce8ff: lea     rcx,[rip+0x249df6a]        # 0x14266c870
0x1401ce906: cmp     esi,ebx
0x1401ce908: jne     0x1401ce912
0x1401ce90a: mov     edx,DWORD PTR [rip+0x249fa08]        # 0x14266e318
0x1401ce910: jmp     0x1401ce93d
0x1401ce912: mov     edx,DWORD PTR [rip+0x249f9f4]        # 0x14266e30c
0x1401ce918: jmp     0x1401ce93d
0x1401ce91a: cmp     esi,edi
0x1401ce91c: jne     0x1401ce926
0x1401ce91e: mov     edx,DWORD PTR [rip+0x249f994]        # 0x14266e2b8
0x1401ce924: jmp     0x1401ce936
0x1401ce926: cmp     esi,ebx
0x1401ce928: mov     edx,DWORD PTR [rip+0x249f9a2]        # 0x14266e2d0
0x1401ce92e: je      0x1401ce936
0x1401ce930: mov     edx,DWORD PTR [rip+0x249f98e]        # 0x14266e2c4
0x1401ce936: lea     rcx,[rip+0x249df33]        # 0x14266c870
0x1401ce93d: call    0x140af4570
0x1401ce942: mov     r8d,esi
0x1401ce945: mov     edx,0x19
0x1401ce94a: lea     rcx,[rip+0x249df1f]        # 0x14266c870
0x1401ce951: call    0x1400bc750
0x1401ce956: mov     rax,QWORD PTR [r12+0x130]
0x1401ce95e: cmp     DWORD PTR [rax],0x2
0x1401ce961: jne     0x1401ce993
0x1401ce963: test    DWORD PTR [rax+0x58],0x200
0x1401ce96a: je      0x1401ce993
0x1401ce96c: cmp     esi,edi
0x1401ce96e: jne     0x1401ce978
0x1401ce970: mov     edx,DWORD PTR [rip+0x249f98e]        # 0x14266e304
0x1401ce976: jmp     0x1401ce9af
0x1401ce978: lea     rcx,[rip+0x249def1]        # 0x14266c870
0x1401ce97f: cmp     esi,ebx
0x1401ce981: jne     0x1401ce98b
0x1401ce983: mov     edx,DWORD PTR [rip+0x249f993]        # 0x14266e31c
0x1401ce989: jmp     0x1401ce9b6
0x1401ce98b: mov     edx,DWORD PTR [rip+0x249f97f]        # 0x14266e310
0x1401ce991: jmp     0x1401ce9b6
0x1401ce993: cmp     esi,edi
0x1401ce995: jne     0x1401ce99f
0x1401ce997: mov     edx,DWORD PTR [rip+0x249f91f]        # 0x14266e2bc
0x1401ce99d: jmp     0x1401ce9af
0x1401ce99f: cmp     esi,ebx
0x1401ce9a1: mov     edx,DWORD PTR [rip+0x249f92d]        # 0x14266e2d4
0x1401ce9a7: je      0x1401ce9af
0x1401ce9a9: mov     edx,DWORD PTR [rip+0x249f919]        # 0x14266e2c8
0x1401ce9af: lea     rcx,[rip+0x249deba]        # 0x14266c870
0x1401ce9b6: call    0x140af4570
0x1401ce9bb: inc     esi
0x1401ce9bd: cmp     esi,ebx
0x1401ce9bf: jle     0x1401ce850
0x1401ce9c5: xor     r8d,r8d
0x1401ce9c8: mov     edx,0x7
0x1401ce9cd: mov     r9b,0x1
0x1401ce9d0: lea     rcx,[rip+0x249de99]        # 0x14266c870
0x1401ce9d7: call    0x1400bc760
0x1401ce9dc: lea     r8d,[rdi+0x2]
0x1401ce9e0: mov     edx,0x18
0x1401ce9e5: lea     rcx,[rip+0x249de84]        # 0x14266c870
0x1401ce9ec: call    0x1400bc750
0x1401ce9f1: lea     rdx,[rip+0x1451530]        # 0x14161ff28 ; literal='Demand surrender and occupy'
0x1401ce9f8: lea     rcx,[rbp+0x2bd0]
0x1401ce9ff: call    0x140069780
0x1401cea04: nop     
0x1401cea05: xor     r9d,r9d
0x1401cea08: xor     r8d,r8d
0x1401cea0b: lea     rdx,[rbp+0x2bd0]
0x1401cea12: lea     rcx,[rip+0x249de57]        # 0x14266c870
0x1401cea19: call    0x140af3400
0x1401cea1e: nop     
0x1401cea1f: lea     rcx,[rbp+0x2bd0]
0x1401cea26: call    0x140069460
0x1401cea2b: mov     rax,QWORD PTR [r12+0x130]
0x1401cea33: mov     ecx,DWORD PTR [rax]
0x1401cea35: cmp     ecx,0x1
0x1401cea38: je      0x1401cf368
0x1401cea3e: cmp     ecx,0x2
0x1401cea41: je      0x1401cf368
0x1401cea47: cmp     ecx,0x3
0x1401cea4a: je      0x1401ccbe2
0x1401cea50: mov     esi,edi
0x1401cea52: cmp     edi,ebx
0x1401cea54: jg      0x1401cebbd
0x1401cea5a: nop     WORD PTR [rax+rax*1+0x0]
0x1401cea60: mov     r8d,esi
0x1401cea63: mov     edx,0x1b
0x1401cea68: lea     rcx,[rip+0x249de01]        # 0x14266c870
0x1401cea6f: call    0x1400bc750
0x1401cea74: mov     rax,QWORD PTR [r12+0x130]
0x1401cea7c: test    BYTE PTR [rax+0x58],0x8
0x1401cea80: je      0x1401ceaa9
0x1401cea82: cmp     esi,edi
0x1401cea84: jne     0x1401cea8e
0x1401cea86: mov     edx,DWORD PTR [rip+0x249f870]        # 0x14266e2fc
0x1401cea8c: jmp     0x1401ceac5
0x1401cea8e: lea     rcx,[rip+0x249dddb]        # 0x14266c870
0x1401cea95: cmp     esi,ebx
0x1401cea97: jne     0x1401ceaa1
0x1401cea99: mov     edx,DWORD PTR [rip+0x249f875]        # 0x14266e314
0x1401cea9f: jmp     0x1401ceacc
0x1401ceaa1: mov     edx,DWORD PTR [rip+0x249f861]        # 0x14266e308
0x1401ceaa7: jmp     0x1401ceacc
0x1401ceaa9: cmp     esi,edi
0x1401ceaab: jne     0x1401ceab5
0x1401ceaad: mov     edx,DWORD PTR [rip+0x249f801]        # 0x14266e2b4
0x1401ceab3: jmp     0x1401ceac5
0x1401ceab5: cmp     esi,ebx
0x1401ceab7: mov     edx,DWORD PTR [rip+0x249f80f]        # 0x14266e2cc
0x1401ceabd: je      0x1401ceac5
0x1401ceabf: mov     edx,DWORD PTR [rip+0x249f7fb]        # 0x14266e2c0
0x1401ceac5: lea     rcx,[rip+0x249dda4]        # 0x14266c870
0x1401ceacc: call    0x140af4570
0x1401cead1: mov     r8d,esi
0x1401cead4: mov     edx,0x1c
0x1401cead9: lea     rcx,[rip+0x249dd90]        # 0x14266c870
0x1401ceae0: call    0x1400bc750
0x1401ceae5: mov     rax,QWORD PTR [r12+0x130]
0x1401ceaed: test    BYTE PTR [rax+0x58],0x8
0x1401ceaf1: je      0x1401ceb1a
0x1401ceaf3: cmp     esi,edi
0x1401ceaf5: jne     0x1401ceaff
0x1401ceaf7: mov     edx,DWORD PTR [rip+0x249f803]        # 0x14266e300
0x1401ceafd: jmp     0x1401ceb36
0x1401ceaff: lea     rcx,[rip+0x249dd6a]        # 0x14266c870
0x1401ceb06: cmp     esi,ebx
0x1401ceb08: jne     0x1401ceb12
0x1401ceb0a: mov     edx,DWORD PTR [rip+0x249f808]        # 0x14266e318
0x1401ceb10: jmp     0x1401ceb3d
0x1401ceb12: mov     edx,DWORD PTR [rip+0x249f7f4]        # 0x14266e30c
0x1401ceb18: jmp     0x1401ceb3d
0x1401ceb1a: cmp     esi,edi
0x1401ceb1c: jne     0x1401ceb26
0x1401ceb1e: mov     edx,DWORD PTR [rip+0x249f794]        # 0x14266e2b8
0x1401ceb24: jmp     0x1401ceb36
0x1401ceb26: cmp     esi,ebx
0x1401ceb28: mov     edx,DWORD PTR [rip+0x249f7a2]        # 0x14266e2d0
0x1401ceb2e: je      0x1401ceb36
0x1401ceb30: mov     edx,DWORD PTR [rip+0x249f78e]        # 0x14266e2c4
0x1401ceb36: lea     rcx,[rip+0x249dd33]        # 0x14266c870
0x1401ceb3d: call    0x140af4570
0x1401ceb42: mov     r8d,esi
0x1401ceb45: mov     edx,0x1d
0x1401ceb4a: lea     rcx,[rip+0x249dd1f]        # 0x14266c870
0x1401ceb51: call    0x1400bc750
0x1401ceb56: mov     rax,QWORD PTR [r12+0x130]
0x1401ceb5e: test    BYTE PTR [rax+0x58],0x8
0x1401ceb62: je      0x1401ceb8b
0x1401ceb64: cmp     esi,edi
0x1401ceb66: jne     0x1401ceb70
0x1401ceb68: mov     edx,DWORD PTR [rip+0x249f796]        # 0x14266e304
0x1401ceb6e: jmp     0x1401ceba7
0x1401ceb70: lea     rcx,[rip+0x249dcf9]        # 0x14266c870
0x1401ceb77: cmp     esi,ebx
0x1401ceb79: jne     0x1401ceb83
0x1401ceb7b: mov     edx,DWORD PTR [rip+0x249f79b]        # 0x14266e31c
0x1401ceb81: jmp     0x1401cebae
0x1401ceb83: mov     edx,DWORD PTR [rip+0x249f787]        # 0x14266e310
0x1401ceb89: jmp     0x1401cebae
0x1401ceb8b: cmp     esi,edi
0x1401ceb8d: jne     0x1401ceb97
0x1401ceb8f: mov     edx,DWORD PTR [rip+0x249f727]        # 0x14266e2bc
0x1401ceb95: jmp     0x1401ceba7
0x1401ceb97: cmp     esi,ebx
0x1401ceb99: mov     edx,DWORD PTR [rip+0x249f735]        # 0x14266e2d4
0x1401ceb9f: je      0x1401ceba7
0x1401ceba1: mov     edx,DWORD PTR [rip+0x249f721]        # 0x14266e2c8
0x1401ceba7: lea     rcx,[rip+0x249dcc2]        # 0x14266c870
0x1401cebae: call    0x140af4570
0x1401cebb3: inc     esi
0x1401cebb5: cmp     esi,ebx
0x1401cebb7: jle     0x1401cea60
0x1401cebbd: xor     r8d,r8d
0x1401cebc0: mov     edx,0x7
0x1401cebc5: mov     r9b,0x1
0x1401cebc8: lea     rcx,[rip+0x249dca1]        # 0x14266c870
0x1401cebcf: call    0x1400bc760
0x1401cebd4: lea     r8d,[rdi+0x2]
0x1401cebd8: mov     edx,0x1c
0x1401cebdd: lea     rcx,[rip+0x249dc8c]        # 0x14266c870
0x1401cebe4: call    0x1400bc750
0x1401cebe9: lea     rdx,[rip+0x1451538]        # 0x141620128 ; literal='Free captives belonging to your civilization'
0x1401cebf0: lea     rcx,[rbp+0x2bf0]
0x1401cebf7: call    0x140069780
0x1401cebfc: nop     
0x1401cebfd: xor     r9d,r9d
0x1401cec00: xor     r8d,r8d
0x1401cec03: lea     rdx,[rbp+0x2bf0]
0x1401cec0a: lea     rcx,[rip+0x249dc5f]        # 0x14266c870
0x1401cec11: call    0x140af3400
0x1401cec16: nop     
0x1401cec17: lea     rcx,[rbp+0x2bf0]
0x1401cec1e: call    0x140069460
0x1401cec23: mov     esi,edi
0x1401cec25: cmp     edi,ebx
0x1401cec27: jg      0x1401ced91
0x1401cec2d: mov     eax,0x1e
0x1401cec32: mov     r8d,esi
0x1401cec35: mov     edx,eax
0x1401cec37: lea     rcx,[rip+0x249dc32]        # 0x14266c870
0x1401cec3e: call    0x1400bc750
0x1401cec43: mov     rax,QWORD PTR [r12+0x130]
0x1401cec4b: test    BYTE PTR [rax+0x58],0x10
0x1401cec4f: je      0x1401cec78
0x1401cec51: cmp     esi,edi
0x1401cec53: jne     0x1401cec5d
0x1401cec55: mov     edx,DWORD PTR [rip+0x249f6a1]        # 0x14266e2fc
0x1401cec5b: jmp     0x1401cec94
0x1401cec5d: lea     rcx,[rip+0x249dc0c]        # 0x14266c870
0x1401cec64: cmp     esi,ebx
0x1401cec66: jne     0x1401cec70
0x1401cec68: mov     edx,DWORD PTR [rip+0x249f6a6]        # 0x14266e314
0x1401cec6e: jmp     0x1401cec9b
0x1401cec70: mov     edx,DWORD PTR [rip+0x249f692]        # 0x14266e308
0x1401cec76: jmp     0x1401cec9b
0x1401cec78: cmp     esi,edi
0x1401cec7a: jne     0x1401cec84
0x1401cec7c: mov     edx,DWORD PTR [rip+0x249f632]        # 0x14266e2b4
0x1401cec82: jmp     0x1401cec94
0x1401cec84: cmp     esi,ebx
0x1401cec86: mov     edx,DWORD PTR [rip+0x249f640]        # 0x14266e2cc
0x1401cec8c: je      0x1401cec94
0x1401cec8e: mov     edx,DWORD PTR [rip+0x249f62c]        # 0x14266e2c0
0x1401cec94: lea     rcx,[rip+0x249dbd5]        # 0x14266c870
0x1401cec9b: call    0x140af4570
0x1401ceca0: mov     r8d,esi
0x1401ceca3: mov     edx,0x1f
0x1401ceca8: lea     rcx,[rip+0x249dbc1]        # 0x14266c870
0x1401cecaf: call    0x1400bc750
0x1401cecb4: mov     rax,QWORD PTR [r12+0x130]
0x1401cecbc: test    BYTE PTR [rax+0x58],0x10
0x1401cecc0: je      0x1401cece9
0x1401cecc2: cmp     esi,edi
0x1401cecc4: jne     0x1401cecce
0x1401cecc6: mov     edx,DWORD PTR [rip+0x249f634]        # 0x14266e300
0x1401ceccc: jmp     0x1401ced05
0x1401cecce: lea     rcx,[rip+0x249db9b]        # 0x14266c870
0x1401cecd5: cmp     esi,ebx
0x1401cecd7: jne     0x1401cece1
0x1401cecd9: mov     edx,DWORD PTR [rip+0x249f639]        # 0x14266e318
0x1401cecdf: jmp     0x1401ced0c
0x1401cece1: mov     edx,DWORD PTR [rip+0x249f625]        # 0x14266e30c
0x1401cece7: jmp     0x1401ced0c
0x1401cece9: cmp     esi,edi
0x1401ceceb: jne     0x1401cecf5
0x1401ceced: mov     edx,DWORD PTR [rip+0x249f5c5]        # 0x14266e2b8
0x1401cecf3: jmp     0x1401ced05
0x1401cecf5: cmp     esi,ebx
0x1401cecf7: mov     edx,DWORD PTR [rip+0x249f5d3]        # 0x14266e2d0
0x1401cecfd: je      0x1401ced05
0x1401cecff: mov     edx,DWORD PTR [rip+0x249f5bf]        # 0x14266e2c4
0x1401ced05: lea     rcx,[rip+0x249db64]        # 0x14266c870
0x1401ced0c: call    0x140af4570
0x1401ced11: mov     r8d,esi
0x1401ced14: mov     edx,0x20
0x1401ced19: lea     rcx,[rip+0x249db50]        # 0x14266c870
0x1401ced20: call    0x1400bc750
0x1401ced25: mov     rax,QWORD PTR [r12+0x130]
0x1401ced2d: test    BYTE PTR [rax+0x58],0x10
0x1401ced31: je      0x1401ced5a
0x1401ced33: cmp     esi,edi
0x1401ced35: jne     0x1401ced3f
0x1401ced37: mov     edx,DWORD PTR [rip+0x249f5c7]        # 0x14266e304
0x1401ced3d: jmp     0x1401ced76
0x1401ced3f: lea     rcx,[rip+0x249db2a]        # 0x14266c870
0x1401ced46: cmp     esi,ebx
0x1401ced48: jne     0x1401ced52
0x1401ced4a: mov     edx,DWORD PTR [rip+0x249f5cc]        # 0x14266e31c
0x1401ced50: jmp     0x1401ced7d
0x1401ced52: mov     edx,DWORD PTR [rip+0x249f5b8]        # 0x14266e310
0x1401ced58: jmp     0x1401ced7d
0x1401ced5a: cmp     esi,edi
0x1401ced5c: jne     0x1401ced66
0x1401ced5e: mov     edx,DWORD PTR [rip+0x249f558]        # 0x14266e2bc
0x1401ced64: jmp     0x1401ced76
0x1401ced66: cmp     esi,ebx
0x1401ced68: mov     edx,DWORD PTR [rip+0x249f566]        # 0x14266e2d4
0x1401ced6e: je      0x1401ced76
0x1401ced70: mov     edx,DWORD PTR [rip+0x249f552]        # 0x14266e2c8
0x1401ced76: lea     rcx,[rip+0x249daf3]        # 0x14266c870
0x1401ced7d: call    0x140af4570
0x1401ced82: inc     esi
0x1401ced84: cmp     esi,ebx
0x1401ced86: mov     eax,0x1e
0x1401ced8b: jle     0x1401cec32
0x1401ced91: xor     r8d,r8d
0x1401ced94: mov     edx,0x7
0x1401ced99: mov     r9b,0x1
0x1401ced9c: lea     rcx,[rip+0x249dacd]        # 0x14266c870
0x1401ceda3: call    0x1400bc760
0x1401ceda8: lea     r8d,[rdi+0x2]
0x1401cedac: mov     edx,0x1f
0x1401cedb1: lea     rcx,[rip+0x249dab8]        # 0x14266c870
0x1401cedb8: call    0x1400bc750
0x1401cedbd: lea     rdx,[rip+0x1451394]        # 0x141620158 ; literal='Release other prisoners'
0x1401cedc4: lea     rcx,[rbp+0x2c10]
0x1401cedcb: call    0x140069780
0x1401cedd0: nop     
0x1401cedd1: xor     r9d,r9d
0x1401cedd4: xor     r8d,r8d
0x1401cedd7: lea     rdx,[rbp+0x2c10]
0x1401cedde: lea     rcx,[rip+0x249da8b]        # 0x14266c870
0x1401cede5: call    0x140af3400
0x1401cedea: nop     
0x1401cedeb: lea     rcx,[rbp+0x2c10]
0x1401cedf2: call    0x140069460
0x1401cedf7: mov     esi,edi
0x1401cedf9: cmp     edi,ebx
0x1401cedfb: jg      0x1401cef5e
0x1401cee01: mov     r8d,esi
0x1401cee04: mov     edx,0x21
0x1401cee09: lea     rcx,[rip+0x249da60]        # 0x14266c870
0x1401cee10: call    0x1400bc750
0x1401cee15: mov     rax,QWORD PTR [r12+0x130]
0x1401cee1d: test    BYTE PTR [rax+0x58],0x20
0x1401cee21: je      0x1401cee4a
0x1401cee23: cmp     esi,edi
0x1401cee25: jne     0x1401cee2f
0x1401cee27: mov     edx,DWORD PTR [rip+0x249f4cf]        # 0x14266e2fc
0x1401cee2d: jmp     0x1401cee66
0x1401cee2f: lea     rcx,[rip+0x249da3a]        # 0x14266c870
0x1401cee36: cmp     esi,ebx
0x1401cee38: jne     0x1401cee42
0x1401cee3a: mov     edx,DWORD PTR [rip+0x249f4d4]        # 0x14266e314
0x1401cee40: jmp     0x1401cee6d
0x1401cee42: mov     edx,DWORD PTR [rip+0x249f4c0]        # 0x14266e308
0x1401cee48: jmp     0x1401cee6d
0x1401cee4a: cmp     esi,edi
0x1401cee4c: jne     0x1401cee56
0x1401cee4e: mov     edx,DWORD PTR [rip+0x249f460]        # 0x14266e2b4
0x1401cee54: jmp     0x1401cee66
0x1401cee56: cmp     esi,ebx
0x1401cee58: mov     edx,DWORD PTR [rip+0x249f46e]        # 0x14266e2cc
0x1401cee5e: je      0x1401cee66
0x1401cee60: mov     edx,DWORD PTR [rip+0x249f45a]        # 0x14266e2c0
0x1401cee66: lea     rcx,[rip+0x249da03]        # 0x14266c870
0x1401cee6d: call    0x140af4570
0x1401cee72: mov     r8d,esi
0x1401cee75: mov     edx,0x22
0x1401cee7a: lea     rcx,[rip+0x249d9ef]        # 0x14266c870
0x1401cee81: call    0x1400bc750
0x1401cee86: mov     rax,QWORD PTR [r12+0x130]
0x1401cee8e: test    BYTE PTR [rax+0x58],0x20
0x1401cee92: je      0x1401ceebb
0x1401cee94: cmp     esi,edi
0x1401cee96: jne     0x1401ceea0
0x1401cee98: mov     edx,DWORD PTR [rip+0x249f462]        # 0x14266e300
0x1401cee9e: jmp     0x1401ceed7
0x1401ceea0: lea     rcx,[rip+0x249d9c9]        # 0x14266c870
0x1401ceea7: cmp     esi,ebx
0x1401ceea9: jne     0x1401ceeb3
0x1401ceeab: mov     edx,DWORD PTR [rip+0x249f467]        # 0x14266e318
0x1401ceeb1: jmp     0x1401ceede
0x1401ceeb3: mov     edx,DWORD PTR [rip+0x249f453]        # 0x14266e30c
0x1401ceeb9: jmp     0x1401ceede
0x1401ceebb: cmp     esi,edi
0x1401ceebd: jne     0x1401ceec7
0x1401ceebf: mov     edx,DWORD PTR [rip+0x249f3f3]        # 0x14266e2b8
0x1401ceec5: jmp     0x1401ceed7
0x1401ceec7: cmp     esi,ebx
0x1401ceec9: mov     edx,DWORD PTR [rip+0x249f401]        # 0x14266e2d0
0x1401ceecf: je      0x1401ceed7
0x1401ceed1: mov     edx,DWORD PTR [rip+0x249f3ed]        # 0x14266e2c4
0x1401ceed7: lea     rcx,[rip+0x249d992]        # 0x14266c870
0x1401ceede: call    0x140af4570
0x1401ceee3: mov     r8d,esi
0x1401ceee6: mov     edx,0x23
0x1401ceeeb: lea     rcx,[rip+0x249d97e]        # 0x14266c870
0x1401ceef2: call    0x1400bc750
0x1401ceef7: mov     rax,QWORD PTR [r12+0x130]
0x1401ceeff: test    BYTE PTR [rax+0x58],0x20
0x1401cef03: je      0x1401cef2c
0x1401cef05: cmp     esi,edi
0x1401cef07: jne     0x1401cef11
0x1401cef09: mov     edx,DWORD PTR [rip+0x249f3f5]        # 0x14266e304
0x1401cef0f: jmp     0x1401cef48
0x1401cef11: lea     rcx,[rip+0x249d958]        # 0x14266c870
0x1401cef18: cmp     esi,ebx
0x1401cef1a: jne     0x1401cef24
0x1401cef1c: mov     edx,DWORD PTR [rip+0x249f3fa]        # 0x14266e31c
0x1401cef22: jmp     0x1401cef4f
0x1401cef24: mov     edx,DWORD PTR [rip+0x249f3e6]        # 0x14266e310
0x1401cef2a: jmp     0x1401cef4f
0x1401cef2c: cmp     esi,edi
0x1401cef2e: jne     0x1401cef38
0x1401cef30: mov     edx,DWORD PTR [rip+0x249f386]        # 0x14266e2bc
0x1401cef36: jmp     0x1401cef48
0x1401cef38: cmp     esi,ebx
0x1401cef3a: mov     edx,DWORD PTR [rip+0x249f394]        # 0x14266e2d4
0x1401cef40: je      0x1401cef48
0x1401cef42: mov     edx,DWORD PTR [rip+0x249f380]        # 0x14266e2c8
0x1401cef48: lea     rcx,[rip+0x249d921]        # 0x14266c870
0x1401cef4f: call    0x140af4570
0x1401cef54: inc     esi
0x1401cef56: cmp     esi,ebx
0x1401cef58: jle     0x1401cee01
0x1401cef5e: xor     r8d,r8d
0x1401cef61: mov     edx,0x7
0x1401cef66: mov     r9b,0x1
0x1401cef69: lea     rcx,[rip+0x249d900]        # 0x14266c870
0x1401cef70: call    0x1400bc760
0x1401cef75: lea     r8d,[rdi+0x2]
0x1401cef79: mov     edx,0x22
0x1401cef7e: lea     rcx,[rip+0x249d8eb]        # 0x14266c870
0x1401cef85: call    0x1400bc750
0x1401cef8a: lea     rdx,[rip+0x1450e97]        # 0x14161fe28 ; literal='Take important treasures'
0x1401cef91: lea     rcx,[rbp+0x2c30]
0x1401cef98: call    0x140069780
0x1401cef9d: nop     
0x1401cef9e: xor     r9d,r9d
0x1401cefa1: xor     r8d,r8d
0x1401cefa4: lea     rdx,[rbp+0x2c30]
0x1401cefab: lea     rcx,[rip+0x249d8be]        # 0x14266c870
0x1401cefb2: call    0x140af3400
0x1401cefb7: nop     
0x1401cefb8: lea     rcx,[rbp+0x2c30]
0x1401cefbf: call    0x140069460
0x1401cefc4: mov     esi,edi
0x1401cefc6: cmp     edi,ebx
0x1401cefc8: jg      0x1401cf12d
0x1401cefce: xchg    ax,ax
0x1401cefd0: mov     r8d,esi
0x1401cefd3: mov     edx,0x24
0x1401cefd8: lea     rcx,[rip+0x249d891]        # 0x14266c870
0x1401cefdf: call    0x1400bc750
0x1401cefe4: mov     rax,QWORD PTR [r12+0x130]
0x1401cefec: test    BYTE PTR [rax+0x58],0x40
0x1401ceff0: je      0x1401cf019
0x1401ceff2: cmp     esi,edi
0x1401ceff4: jne     0x1401ceffe
0x1401ceff6: mov     edx,DWORD PTR [rip+0x249f300]        # 0x14266e2fc
0x1401ceffc: jmp     0x1401cf035
0x1401ceffe: lea     rcx,[rip+0x249d86b]        # 0x14266c870
0x1401cf005: cmp     esi,ebx
0x1401cf007: jne     0x1401cf011
0x1401cf009: mov     edx,DWORD PTR [rip+0x249f305]        # 0x14266e314
0x1401cf00f: jmp     0x1401cf03c
0x1401cf011: mov     edx,DWORD PTR [rip+0x249f2f1]        # 0x14266e308
0x1401cf017: jmp     0x1401cf03c
0x1401cf019: cmp     esi,edi
0x1401cf01b: jne     0x1401cf025
0x1401cf01d: mov     edx,DWORD PTR [rip+0x249f291]        # 0x14266e2b4
0x1401cf023: jmp     0x1401cf035
0x1401cf025: cmp     esi,ebx
0x1401cf027: mov     edx,DWORD PTR [rip+0x249f29f]        # 0x14266e2cc
0x1401cf02d: je      0x1401cf035
0x1401cf02f: mov     edx,DWORD PTR [rip+0x249f28b]        # 0x14266e2c0
0x1401cf035: lea     rcx,[rip+0x249d834]        # 0x14266c870
0x1401cf03c: call    0x140af4570
0x1401cf041: mov     r8d,esi
0x1401cf044: mov     edx,0x25
0x1401cf049: lea     rcx,[rip+0x249d820]        # 0x14266c870
0x1401cf050: call    0x1400bc750
0x1401cf055: mov     rax,QWORD PTR [r12+0x130]
0x1401cf05d: test    BYTE PTR [rax+0x58],0x40
0x1401cf061: je      0x1401cf08a
0x1401cf063: cmp     esi,edi
0x1401cf065: jne     0x1401cf06f
0x1401cf067: mov     edx,DWORD PTR [rip+0x249f293]        # 0x14266e300
0x1401cf06d: jmp     0x1401cf0a6
0x1401cf06f: lea     rcx,[rip+0x249d7fa]        # 0x14266c870
0x1401cf076: cmp     esi,ebx
0x1401cf078: jne     0x1401cf082
0x1401cf07a: mov     edx,DWORD PTR [rip+0x249f298]        # 0x14266e318
0x1401cf080: jmp     0x1401cf0ad
0x1401cf082: mov     edx,DWORD PTR [rip+0x249f284]        # 0x14266e30c
0x1401cf088: jmp     0x1401cf0ad
0x1401cf08a: cmp     esi,edi
0x1401cf08c: jne     0x1401cf096
0x1401cf08e: mov     edx,DWORD PTR [rip+0x249f224]        # 0x14266e2b8
0x1401cf094: jmp     0x1401cf0a6
0x1401cf096: cmp     esi,ebx
0x1401cf098: mov     edx,DWORD PTR [rip+0x249f232]        # 0x14266e2d0
0x1401cf09e: je      0x1401cf0a6
0x1401cf0a0: mov     edx,DWORD PTR [rip+0x249f21e]        # 0x14266e2c4
0x1401cf0a6: lea     rcx,[rip+0x249d7c3]        # 0x14266c870
0x1401cf0ad: call    0x140af4570
0x1401cf0b2: mov     r8d,esi
0x1401cf0b5: mov     edx,0x26
0x1401cf0ba: lea     rcx,[rip+0x249d7af]        # 0x14266c870
0x1401cf0c1: call    0x1400bc750
0x1401cf0c6: mov     rax,QWORD PTR [r12+0x130]
0x1401cf0ce: test    BYTE PTR [rax+0x58],0x40
0x1401cf0d2: je      0x1401cf0fb
0x1401cf0d4: cmp     esi,edi
0x1401cf0d6: jne     0x1401cf0e0
0x1401cf0d8: mov     edx,DWORD PTR [rip+0x249f226]        # 0x14266e304
0x1401cf0de: jmp     0x1401cf117
0x1401cf0e0: lea     rcx,[rip+0x249d789]        # 0x14266c870
0x1401cf0e7: cmp     esi,ebx
0x1401cf0e9: jne     0x1401cf0f3
0x1401cf0eb: mov     edx,DWORD PTR [rip+0x249f22b]        # 0x14266e31c
0x1401cf0f1: jmp     0x1401cf11e
0x1401cf0f3: mov     edx,DWORD PTR [rip+0x249f217]        # 0x14266e310
0x1401cf0f9: jmp     0x1401cf11e
0x1401cf0fb: cmp     esi,edi
0x1401cf0fd: jne     0x1401cf107
0x1401cf0ff: mov     edx,DWORD PTR [rip+0x249f1b7]        # 0x14266e2bc
0x1401cf105: jmp     0x1401cf117
0x1401cf107: cmp     esi,ebx
0x1401cf109: mov     edx,DWORD PTR [rip+0x249f1c5]        # 0x14266e2d4
0x1401cf10f: je      0x1401cf117
0x1401cf111: mov     edx,DWORD PTR [rip+0x249f1b1]        # 0x14266e2c8
0x1401cf117: lea     rcx,[rip+0x249d752]        # 0x14266c870
0x1401cf11e: call    0x140af4570
0x1401cf123: inc     esi
0x1401cf125: cmp     esi,ebx
0x1401cf127: jle     0x1401cefd0
0x1401cf12d: xor     r8d,r8d
0x1401cf130: mov     edx,0x7
0x1401cf135: mov     r9b,0x1
0x1401cf138: lea     rcx,[rip+0x249d731]        # 0x14266c870
0x1401cf13f: call    0x1400bc760
0x1401cf144: lea     r8d,[rdi+0x2]
0x1401cf148: mov     edx,0x25
0x1401cf14d: lea     rcx,[rip+0x249d71c]        # 0x14266c870
0x1401cf154: call    0x1400bc750
0x1401cf159: lea     rdx,[rip+0x1450ce8]        # 0x14161fe48 ; literal='Loot other items'
0x1401cf160: lea     rcx,[rbp+0x2c50]
0x1401cf167: call    0x140069780
0x1401cf16c: nop     
0x1401cf16d: xor     r9d,r9d
0x1401cf170: xor     r8d,r8d
0x1401cf173: lea     rdx,[rbp+0x2c50]
0x1401cf17a: lea     rcx,[rip+0x249d6ef]        # 0x14266c870
0x1401cf181: call    0x140af3400
0x1401cf186: nop     
0x1401cf187: lea     rcx,[rbp+0x2c50]
0x1401cf18e: call    0x140069460
0x1401cf193: mov     esi,edi
0x1401cf195: cmp     edi,ebx
0x1401cf197: jg      0x1401cf2fd
0x1401cf19d: nop     DWORD PTR [rax]
0x1401cf1a0: mov     r8d,esi
0x1401cf1a3: mov     edx,0x27
0x1401cf1a8: lea     rcx,[rip+0x249d6c1]        # 0x14266c870
0x1401cf1af: call    0x1400bc750
0x1401cf1b4: mov     rax,QWORD PTR [r12+0x130]
0x1401cf1bc: test    BYTE PTR [rax+0x58],0x80
0x1401cf1c0: je      0x1401cf1e9
0x1401cf1c2: cmp     esi,edi
0x1401cf1c4: jne     0x1401cf1ce
0x1401cf1c6: mov     edx,DWORD PTR [rip+0x249f130]        # 0x14266e2fc
0x1401cf1cc: jmp     0x1401cf205
0x1401cf1ce: lea     rcx,[rip+0x249d69b]        # 0x14266c870
0x1401cf1d5: cmp     esi,ebx
0x1401cf1d7: jne     0x1401cf1e1
0x1401cf1d9: mov     edx,DWORD PTR [rip+0x249f135]        # 0x14266e314
0x1401cf1df: jmp     0x1401cf20c
0x1401cf1e1: mov     edx,DWORD PTR [rip+0x249f121]        # 0x14266e308
0x1401cf1e7: jmp     0x1401cf20c
0x1401cf1e9: cmp     esi,edi
0x1401cf1eb: jne     0x1401cf1f5
0x1401cf1ed: mov     edx,DWORD PTR [rip+0x249f0c1]        # 0x14266e2b4
0x1401cf1f3: jmp     0x1401cf205
0x1401cf1f5: cmp     esi,ebx
0x1401cf1f7: mov     edx,DWORD PTR [rip+0x249f0cf]        # 0x14266e2cc
0x1401cf1fd: je      0x1401cf205
0x1401cf1ff: mov     edx,DWORD PTR [rip+0x249f0bb]        # 0x14266e2c0
0x1401cf205: lea     rcx,[rip+0x249d664]        # 0x14266c870
0x1401cf20c: call    0x140af4570
0x1401cf211: mov     r8d,esi
0x1401cf214: mov     edx,0x28
0x1401cf219: lea     rcx,[rip+0x249d650]        # 0x14266c870
0x1401cf220: call    0x1400bc750
0x1401cf225: mov     rax,QWORD PTR [r12+0x130]
0x1401cf22d: test    BYTE PTR [rax+0x58],0x80
0x1401cf231: je      0x1401cf25a
0x1401cf233: cmp     esi,edi
0x1401cf235: jne     0x1401cf23f
0x1401cf237: mov     edx,DWORD PTR [rip+0x249f0c3]        # 0x14266e300
0x1401cf23d: jmp     0x1401cf276
0x1401cf23f: lea     rcx,[rip+0x249d62a]        # 0x14266c870
0x1401cf246: cmp     esi,ebx
0x1401cf248: jne     0x1401cf252
0x1401cf24a: mov     edx,DWORD PTR [rip+0x249f0c8]        # 0x14266e318
0x1401cf250: jmp     0x1401cf27d
0x1401cf252: mov     edx,DWORD PTR [rip+0x249f0b4]        # 0x14266e30c
0x1401cf258: jmp     0x1401cf27d
0x1401cf25a: cmp     esi,edi
0x1401cf25c: jne     0x1401cf266
0x1401cf25e: mov     edx,DWORD PTR [rip+0x249f054]        # 0x14266e2b8
0x1401cf264: jmp     0x1401cf276
0x1401cf266: cmp     esi,ebx
0x1401cf268: mov     edx,DWORD PTR [rip+0x249f062]        # 0x14266e2d0
0x1401cf26e: je      0x1401cf276
0x1401cf270: mov     edx,DWORD PTR [rip+0x249f04e]        # 0x14266e2c4
0x1401cf276: lea     rcx,[rip+0x249d5f3]        # 0x14266c870
0x1401cf27d: call    0x140af4570
0x1401cf282: mov     r8d,esi
0x1401cf285: mov     edx,0x29
0x1401cf28a: lea     rcx,[rip+0x249d5df]        # 0x14266c870
0x1401cf291: call    0x1400bc750
0x1401cf296: mov     rax,QWORD PTR [r12+0x130]
0x1401cf29e: test    BYTE PTR [rax+0x58],0x80
0x1401cf2a2: je      0x1401cf2cb
0x1401cf2a4: cmp     esi,edi
0x1401cf2a6: jne     0x1401cf2b0
0x1401cf2a8: mov     edx,DWORD PTR [rip+0x249f056]        # 0x14266e304
0x1401cf2ae: jmp     0x1401cf2e7
0x1401cf2b0: lea     rcx,[rip+0x249d5b9]        # 0x14266c870
0x1401cf2b7: cmp     esi,ebx
0x1401cf2b9: jne     0x1401cf2c3
0x1401cf2bb: mov     edx,DWORD PTR [rip+0x249f05b]        # 0x14266e31c
0x1401cf2c1: jmp     0x1401cf2ee
0x1401cf2c3: mov     edx,DWORD PTR [rip+0x249f047]        # 0x14266e310
0x1401cf2c9: jmp     0x1401cf2ee
0x1401cf2cb: cmp     esi,edi
0x1401cf2cd: jne     0x1401cf2d7
0x1401cf2cf: mov     edx,DWORD PTR [rip+0x249efe7]        # 0x14266e2bc
0x1401cf2d5: jmp     0x1401cf2e7
0x1401cf2d7: cmp     esi,ebx
0x1401cf2d9: mov     edx,DWORD PTR [rip+0x249eff5]        # 0x14266e2d4
0x1401cf2df: je      0x1401cf2e7
0x1401cf2e1: mov     edx,DWORD PTR [rip+0x249efe1]        # 0x14266e2c8
0x1401cf2e7: lea     rcx,[rip+0x249d582]        # 0x14266c870
0x1401cf2ee: call    0x140af4570
0x1401cf2f3: inc     esi
0x1401cf2f5: cmp     esi,ebx
0x1401cf2f7: jle     0x1401cf1a0
0x1401cf2fd: xor     r8d,r8d
0x1401cf300: mov     edx,0x7
0x1401cf305: mov     r9b,0x1
0x1401cf308: lea     rcx,[rip+0x249d561]        # 0x14266c870
0x1401cf30f: call    0x1400bc760
0x1401cf314: lea     r8d,[rdi+0x2]
0x1401cf318: mov     edx,0x28
0x1401cf31d: lea     rcx,[rip+0x249d54c]        # 0x14266c870
0x1401cf324: call    0x1400bc750
0x1401cf329: lea     rdx,[rip+0x1450b30]        # 0x14161fe60 ; literal='Steal livestock'
0x1401cf330: lea     rcx,[rbp+0x2c70]
0x1401cf337: call    0x140069780
0x1401cf33c: nop     
0x1401cf33d: xor     r9d,r9d
0x1401cf340: xor     r8d,r8d
0x1401cf343: lea     rdx,[rbp+0x2c70]
0x1401cf34a: lea     rcx,[rip+0x249d51f]        # 0x14266c870
0x1401cf351: call    0x140af3400
0x1401cf356: nop     
0x1401cf357: lea     rcx,[rbp+0x2c70]
0x1401cf35e: call    0x140069460
0x1401cf363: jmp     0x1401ccbe2
0x1401cf368: xor     r8d,r8d
0x1401cf36b: mov     edx,0x6
0x1401cf370: mov     r9b,0x1
0x1401cf373: lea     rcx,[rip+0x249d4f6]        # 0x14266c870
0x1401cf37a: call    0x1400bc760
0x1401cf37f: lea     r8d,[r13-0x37]
0x1401cf383: mov     edx,0x1b
0x1401cf388: lea     rcx,[rip+0x249d4e1]        # 0x14266c870
0x1401cf38f: call    0x1400bc750
0x1401cf394: lea     rdx,[rip+0x1450bad]        # 0x14161ff48 ; literal='WARNING:  If successful, your soldiers will join the'
0x1401cf39b: lea     rcx,[rbp+0x2c90]
0x1401cf3a2: call    0x140069780
0x1401cf3a7: nop     
0x1401cf3a8: xor     r9d,r9d
0x1401cf3ab: xor     r8d,r8d
0x1401cf3ae: lea     rdx,[rbp+0x2c90]
0x1401cf3b5: lea     rcx,[rip+0x249d4b4]        # 0x14266c870
0x1401cf3bc: call    0x140af3400
0x1401cf3c1: nop     
0x1401cf3c2: lea     rcx,[rbp+0x2c90]
0x1401cf3c9: call    0x140069460
0x1401cf3ce: lea     r8d,[r13-0x37]
0x1401cf3d2: mov     edx,0x1c
0x1401cf3d7: lea     rcx,[rip+0x249d492]        # 0x14266c870
0x1401cf3de: call    0x1400bc750
0x1401cf3e3: lea     rdx,[rip+0x1450b96]        # 0x14161ff80 ; literal='occupation and not return.  Your new holdings will'
0x1401cf3ea: lea     rcx,[rbp+0x2cb0]
0x1401cf3f1: call    0x140069780
0x1401cf3f6: nop     
0x1401cf3f7: xor     r9d,r9d
0x1401cf3fa: xor     r8d,r8d
0x1401cf3fd: lea     rdx,[rbp+0x2cb0]
0x1401cf404: lea     rcx,[rip+0x249d465]        # 0x14266c870
0x1401cf40b: call    0x140af3400
0x1401cf410: nop     
0x1401cf411: lea     rcx,[rbp+0x2cb0]
0x1401cf418: call    0x140069460
0x1401cf41d: lea     r8d,[r13-0x37]
0x1401cf421: mov     edx,0x1d
0x1401cf426: lea     rcx,[rip+0x249d443]        # 0x14266c870
0x1401cf42d: call    0x1400bc750
0x1401cf432: lea     rdx,[rip+0x1450b7f]        # 0x14161ffb8 ; literal='be manageable from this screen.'
0x1401cf439: lea     rcx,[rbp+0x2cd0]
0x1401cf440: call    0x140069780
0x1401cf445: nop     
0x1401cf446: xor     r9d,r9d
0x1401cf449: xor     r8d,r8d
0x1401cf44c: lea     rdx,[rbp+0x2cd0]
0x1401cf453: lea     rcx,[rip+0x249d416]        # 0x14266c870
0x1401cf45a: call    0x140af3400
0x1401cf45f: nop     
0x1401cf460: lea     rcx,[rbp+0x2cd0]
0x1401cf467: call    0x140069460
0x1401cf46c: jmp     0x1401ccbe2
0x1401cf471: lea     rcx,[rip+0x249d3f8]        # 0x14266c870
0x1401cf478: cmp     ebx,r15d
0x1401cf47b: jne     0x1401cf485
0x1401cf47d: mov     edx,DWORD PTR [rip+0x249ed29]        # 0x14266e1ac
0x1401cf483: jmp     0x1401cf4e0
0x1401cf485: mov     edx,DWORD PTR [rip+0x249ed15]        # 0x14266e1a0
0x1401cf48b: jmp     0x1401cf4e0
0x1401cf48d: cmp     rdi,r12
0x1401cf490: jne     0x1401cf4bb
0x1401cf492: cmp     ebx,r13d
0x1401cf495: jne     0x1401cf49f
0x1401cf497: mov     edx,DWORD PTR [rip+0x249ecff]        # 0x14266e19c
0x1401cf49d: jmp     0x1401cf4d9
0x1401cf49f: lea     rcx,[rip+0x249d3ca]        # 0x14266c870
0x1401cf4a6: cmp     ebx,r15d
0x1401cf4a9: jne     0x1401cf4b3
0x1401cf4ab: mov     edx,DWORD PTR [rip+0x249ed03]        # 0x14266e1b4
0x1401cf4b1: jmp     0x1401cf4e0
0x1401cf4b3: mov     edx,DWORD PTR [rip+0x249ecef]        # 0x14266e1a8
0x1401cf4b9: jmp     0x1401cf4e0
0x1401cf4bb: cmp     ebx,r13d
0x1401cf4be: jne     0x1401cf4c8
0x1401cf4c0: mov     edx,DWORD PTR [rip+0x249ecd2]        # 0x14266e198
0x1401cf4c6: jmp     0x1401cf4d9
0x1401cf4c8: cmp     ebx,r15d
0x1401cf4cb: mov     edx,DWORD PTR [rip+0x249ecdf]        # 0x14266e1b0
0x1401cf4d1: je      0x1401cf4d9
0x1401cf4d3: mov     edx,DWORD PTR [rip+0x249eccb]        # 0x14266e1a4
0x1401cf4d9: lea     rcx,[rip+0x249d390]        # 0x14266c870
0x1401cf4e0: call    0x140af4570
0x1401cf4e5: inc     ebx
0x1401cf4e7: cmp     ebx,r15d
0x1401cf4ea: jle     0x1401ccc10
0x1401cf4f0: inc     esi
0x1401cf4f2: inc     rdi
0x1401cf4f5: cmp     esi,r12d
0x1401cf4f8: jle     0x1401ccc03
0x1401cf4fe: mov     r12,QWORD PTR [rbp-0x78]
0x1401cf502: mov     BYTE PTR [rbp-0x40],0x0
0x1401cf506: mov     BYTE PTR [rbp-0x50],0x0
0x1401cf50a: mov     rbx,QWORD PTR [rsp+0x78]
0x1401cf50f: cmp     BYTE PTR [rbp-0x80],0x0
0x1401cf513: je      0x1401d0019
0x1401cf519: add     rbx,0x380
0x1401cf520: mov     rcx,rbx
0x1401cf523: call    0x140070480
0x1401cf528: test    rax,rax
0x1401cf52b: je      0x1401cffb3
0x1401cf531: lea     rdx,[rbp+0xa8]
0x1401cf538: mov     rcx,rbx
0x1401cf53b: call    0x140070870
0x1401cf540: lea     rdx,[rbp+0x170]
0x1401cf547: mov     rcx,rbx
0x1401cf54a: call    0x140070860
0x1401cf54f: lea     rdx,[rbp+0x170]
0x1401cf556: lea     rcx,[rbp+0xa8]
0x1401cf55d: call    0x1400bafa0
0x1401cf562: test    al,al
0x1401cf564: jne     0x1401cf5d5
0x1401cf566: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401cf570: lea     rcx,[rbp+0xa8]
0x1401cf577: call    0x140070440
0x1401cf57c: mov     rcx,QWORD PTR [rax]
0x1401cf57f: mov     eax,DWORD PTR [r12]
0x1401cf583: cmp     DWORD PTR [rcx+0x58],eax
0x1401cf586: jne     0x1401cf5b2
0x1401cf588: mov     BYTE PTR [rbp-0x40],0x1
0x1401cf58c: mov     rcx,r12
0x1401cf58f: call    0x140076740
0x1401cf594: cmp     eax,0x19
0x1401cf597: jne     0x1401cf5b2
0x1401cf599: mov     rcx,QWORD PTR [r12+0x130]
0x1401cf5a1: call    0x140070a80
0x1401cf5a6: test    rax,rax
0x1401cf5a9: jne     0x1401cf5b2
0x1401cf5ab: mov     BYTE PTR [rbp-0x40],al
0x1401cf5ae: mov     BYTE PTR [rbp-0x50],0x1
0x1401cf5b2: lea     rcx,[rbp+0xa8]
0x1401cf5b9: call    0x140070430
0x1401cf5be: lea     rdx,[rbp+0x170]
0x1401cf5c5: lea     rcx,[rbp+0xa8]
0x1401cf5cc: call    0x1400bafa0
0x1401cf5d1: test    al,al
0x1401cf5d3: je      0x1401cf570
0x1401cf5d5: add     r13d,0x2
0x1401cf5d9: mov     DWORD PTR [rbp-0x28],r13d
0x1401cf5dd: lea     ebx,[r15-0x2]
0x1401cf5e1: mov     DWORD PTR [rbp-0x6c],ebx
0x1401cf5e4: lea     ecx,[r14-0x7]
0x1401cf5e8: mov     eax,0x55555556
0x1401cf5ed: imul    ecx
0x1401cf5ef: mov     edi,edx
0x1401cf5f1: shr     edi,0x1f
0x1401cf5f4: add     edi,edx
0x1401cf5f6: mov     DWORD PTR [rsp+0x74],edi
0x1401cf5fa: mov     r14,QWORD PTR [rsp+0x78]
0x1401cf5ff: lea     rcx,[r14+0x380]
0x1401cf606: call    0x140070480
0x1401cf60b: mov     r12,rax
0x1401cf60e: mov     QWORD PTR [rbp+0x18],rax
0x1401cf612: cmp     eax,edi
0x1401cf614: jle     0x1401cf61d
0x1401cf616: lea     ebx,[r15-0x4]
0x1401cf61a: mov     DWORD PTR [rbp-0x6c],ebx
0x1401cf61d: lea     eax,[rbx-0x3]
0x1401cf620: mov     DWORD PTR [rbp-0x60],eax
0x1401cf623: mov     r15d,0x1
0x1401cf629: mov     DWORD PTR [rsp+0x70],r15d
0x1401cf62e: mov     ecx,DWORD PTR [r14+0x3d0]
0x1401cf635: mov     edx,r12d
0x1401cf638: sub     edx,edi
0x1401cf63a: cmp     ecx,edx
0x1401cf63c: cmovle  edx,ecx
0x1401cf63f: xor     esi,esi
0x1401cf641: test    edx,edx
0x1401cf643: cmovns  esi,edx
0x1401cf646: mov     DWORD PTR [rbp-0x58],esi
0x1401cf649: lea     eax,[rdi+rsi*1]
0x1401cf64c: mov     DWORD PTR [rbp-0x20],eax
0x1401cf64f: cmp     esi,eax
0x1401cf651: jge     0x1401cff4f
0x1401cf657: add     r14,0x380
0x1401cf65e: mov     QWORD PTR [rbp-0x30],r14
0x1401cf662: cmp     esi,r12d
0x1401cf665: jge     0x1401cff46
0x1401cf66b: xor     r8d,r8d
0x1401cf66e: mov     edx,0x7
0x1401cf673: mov     r9b,0x1
0x1401cf676: lea     rcx,[rip+0x249d1f3]        # 0x14266c870
0x1401cf67d: call    0x1400bc760
0x1401cf682: mov     esi,r13d
0x1401cf685: cmp     r13d,ebx
0x1401cf688: jg      0x1401cf72a
0x1401cf68e: lea     r12d,[r15+0x3]
0x1401cf692: movsxd  r14,r13d
0x1401cf695: mov     edi,r15d
0x1401cf698: cmp     r15d,r12d
0x1401cf69b: jge     0x1401cf719
0x1401cf69d: movsxd  r15,ebx
0x1401cf6a0: lea     rbx,[rip+0x249eb89]        # 0x14266e230
0x1401cf6a7: nop     WORD PTR [rax+rax*1+0x0]
0x1401cf6b0: mov     r8d,esi
0x1401cf6b3: mov     edx,edi
0x1401cf6b5: lea     rcx,[rip+0x249d1b4]        # 0x14266c870
0x1401cf6bc: call    0x1400bc750
0x1401cf6c1: cmp     esi,r13d
0x1401cf6c4: jne     0x1401cf6cb
0x1401cf6c6: mov     edx,DWORD PTR [rbx-0x18]
0x1401cf6c9: jmp     0x1401cf6d7
0x1401cf6cb: cmp     r14,r15
0x1401cf6ce: jne     0x1401cf6d4
0x1401cf6d0: mov     edx,DWORD PTR [rbx]
0x1401cf6d2: jmp     0x1401cf6d7
0x1401cf6d4: mov     edx,DWORD PTR [rbx-0xc]
0x1401cf6d7: lea     rcx,[rip+0x249d192]        # 0x14266c870
0x1401cf6de: call    0x140af4570
0x1401cf6e3: xor     edx,edx
0x1401cf6e5: lea     rcx,[rip+0x2220504]        # 0x1423efbf0
0x1401cf6ec: call    0x1400735c0
0x1401cf6f1: test    al,al
0x1401cf6f3: je      0x1401cf706
0x1401cf6f5: mov     r8b,0x1
0x1401cf6f8: xor     edx,edx
0x1401cf6fa: lea     rcx,[rip+0x249d16f]        # 0x14266c870
0x1401cf701: call    0x1400bc7c0
0x1401cf706: inc     edi
0x1401cf708: add     rbx,0x4
0x1401cf70c: cmp     edi,r12d
0x1401cf70f: jl      0x1401cf6b0
0x1401cf711: mov     r15d,DWORD PTR [rsp+0x70]
0x1401cf716: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401cf719: inc     esi
0x1401cf71b: inc     r14
0x1401cf71e: cmp     esi,ebx
0x1401cf720: jle     0x1401cf695
0x1401cf726: mov     r14,QWORD PTR [rbp-0x30]
0x1401cf72a: mov     r12,QWORD PTR [rsp+0x78]
0x1401cf72f: lea     rcx,[r12+0x3b0]
0x1401cf737: movsxd  rsi,DWORD PTR [rbp-0x58]
0x1401cf73b: mov     rbx,rsi
0x1401cf73e: mov     rdx,rsi
0x1401cf741: call    0x140070990
0x1401cf746: xor     r8d,r8d
0x1401cf749: mov     r9b,0x1
0x1401cf74c: lea     rcx,[rip+0x249d11d]        # 0x14266c870
0x1401cf753: test    BYTE PTR [rax],r9b
0x1401cf756: mov     edx,0x3
0x1401cf75b: je      0x1401cf762
0x1401cf75d: mov     edx,0x4
0x1401cf762: call    0x1400bc760
0x1401cf767: mov     r8d,r13d
0x1401cf76a: lea     edx,[r15+0x1]
0x1401cf76e: lea     rcx,[rip+0x249d0fb]        # 0x14266c870
0x1401cf775: call    0x1400bc750
0x1401cf77a: lea     rcx,[rbp+0xfb0]
0x1401cf781: call    0x140070cc0
0x1401cf786: nop     
0x1401cf787: mov     rdx,rbx
0x1401cf78a: mov     rcx,r14
0x1401cf78d: call    0x140070850
0x1401cf792: mov     rcx,QWORD PTR [rax]
0x1401cf795: cmp     DWORD PTR [rcx+0x4],0xffffffff
0x1401cf799: je      0x1401cf7d5
0x1401cf79b: mov     rdx,rbx
0x1401cf79e: mov     rcx,r14
0x1401cf7a1: call    0x140070850
0x1401cf7a6: mov     rdx,QWORD PTR [rax]
0x1401cf7a9: mov     edx,DWORD PTR [rdx+0x4]
0x1401cf7ac: lea     rcx,[rip+0x234c985]        # 0x14251c138
0x1401cf7b3: call    0x1400693f0
0x1401cf7b8: test    rax,rax
0x1401cf7bb: je      0x1401cf7e8
0x1401cf7bd: lea     rcx,[rax+0x38]
0x1401cf7c1: xor     r9d,r9d
0x1401cf7c4: mov     r8b,0x1
0x1401cf7c7: lea     rdx,[rbp+0xfb0]
0x1401cf7ce: call    0x140aae180
0x1401cf7d3: jmp     0x1401cf7e8
0x1401cf7d5: lea     rdx,[rip+0x14503fc]        # 0x14161fbd8 ; literal='Messenger (unfilled)'
0x1401cf7dc: lea     rcx,[rbp+0xfb0]
0x1401cf7e3: call    0x140070bb0
0x1401cf7e8: lea     rcx,[rbp+0xfb0]
0x1401cf7ef: call    0x140070960
0x1401cf7f4: cmp     rax,0x19
0x1401cf7f8: jb      0x1401cf84a
0x1401cf7fa: xor     r8d,r8d
0x1401cf7fd: mov     edx,0x18
0x1401cf802: lea     rcx,[rbp+0xfb0]
0x1401cf809: call    0x1400e2860
0x1401cf80e: mov     edx,0x15
0x1401cf813: lea     rcx,[rbp+0xfb0]
0x1401cf81a: call    0x1400fcbe0
0x1401cf81f: mov     BYTE PTR [rax],0x2e
0x1401cf822: mov     edx,0x16
0x1401cf827: lea     rcx,[rbp+0xfb0]
0x1401cf82e: call    0x1400fcbe0
0x1401cf833: mov     BYTE PTR [rax],0x2e
0x1401cf836: mov     edx,0x17
0x1401cf83b: lea     rcx,[rbp+0xfb0]
0x1401cf842: call    0x1400fcbe0
0x1401cf847: mov     BYTE PTR [rax],0x2e
0x1401cf84a: xor     r9d,r9d
0x1401cf84d: xor     r8d,r8d
0x1401cf850: lea     rdx,[rbp+0xfb0]
0x1401cf857: lea     rcx,[rip+0x249d012]        # 0x14266c870
0x1401cf85e: call    0x140af3400
0x1401cf863: lea     r8d,[r13+0x19]
0x1401cf867: lea     edx,[r15+0x1]
0x1401cf86b: lea     rcx,[rip+0x249cffe]        # 0x14266c870
0x1401cf872: call    0x1400bc750
0x1401cf877: mov     rdx,rsi
0x1401cf87a: mov     rcx,r14
0x1401cf87d: call    0x140070850
0x1401cf882: mov     rcx,QWORD PTR [rax]
0x1401cf885: cmp     DWORD PTR [rcx+0x58],0xffffffff
0x1401cf889: je      0x1401cfdfc
0x1401cf88f: mov     rdx,rsi
0x1401cf892: mov     rcx,r14
0x1401cf895: call    0x140070850
0x1401cf89a: mov     rcx,QWORD PTR [rax]
0x1401cf89d: mov     rbx,QWORD PTR [rbp-0x78]
0x1401cf8a1: mov     eax,DWORD PTR [rbx]
0x1401cf8a3: xor     r8d,r8d
0x1401cf8a6: cmp     DWORD PTR [rcx+0x58],eax
0x1401cf8a9: lea     rcx,[rip+0x249cfc0]        # 0x14266c870
0x1401cf8b0: jne     0x1401cf8fe
0x1401cf8b2: mov     edx,0x2
0x1401cf8b7: mov     r9b,0x1
0x1401cf8ba: call    0x1400bc760
0x1401cf8bf: lea     rdx,[rip+0x1450712]        # 0x14161ffd8 ; literal='On this mission'
0x1401cf8c6: lea     rcx,[rbp+0x2cf0]
0x1401cf8cd: call    0x140069780
0x1401cf8d2: nop     
0x1401cf8d3: xor     r9d,r9d
0x1401cf8d6: xor     r8d,r8d
0x1401cf8d9: lea     rdx,[rbp+0x2cf0]
0x1401cf8e0: lea     rcx,[rip+0x249cf89]        # 0x14266c870
0x1401cf8e7: call    0x140af3400
0x1401cf8ec: nop     
0x1401cf8ed: lea     rcx,[rbp+0x2cf0]
0x1401cf8f4: call    0x140069460
0x1401cf8f9: jmp     0x1401cfe51
0x1401cf8fe: mov     edx,0x3
0x1401cf903: xor     r9d,r9d
0x1401cf906: call    0x1400bc760
0x1401cf90b: mov     rdx,rsi
0x1401cf90e: mov     rcx,r14
0x1401cf911: call    0x140070850
0x1401cf916: mov     rdx,QWORD PTR [rax]
0x1401cf919: mov     edx,DWORD PTR [rdx+0x58]
0x1401cf91c: lea     rcx,[rip+0x233a965]        # 0x14250a288
0x1401cf923: call    0x140073ba0
0x1401cf928: mov     rbx,rax
0x1401cf92b: test    rax,rax
0x1401cf92e: je      0x1401cfdae
0x1401cf934: mov     rcx,rax
0x1401cf937: call    0x140076740
0x1401cf93c: sub     eax,0x2
0x1401cf93f: je      0x1401cfc94
0x1401cf945: sub     eax,0xf
0x1401cf948: je      0x1401cfbd8
0x1401cf94e: sub     eax,0x1
0x1401cf951: je      0x1401cfaf4
0x1401cf957: sub     eax,0x1
0x1401cf95a: je      0x1401cfa3e
0x1401cf960: cmp     eax,0x6
0x1401cf963: jne     0x1401cfe4d
0x1401cf969: lea     rcx,[rbp+0xf70]
0x1401cf970: call    0x140070cc0
0x1401cf975: nop     
0x1401cf976: lea     rdx,[rbp+0xf70]
0x1401cf97d: mov     rcx,QWORD PTR [rbx+0x130]
0x1401cf984: call    0x1401bdc00
0x1401cf989: lea     rdx,[rip+0x144e734]        # 0x14161e0c4 ; literal=' at '
0x1401cf990: lea     rcx,[rbp+0xf70]
0x1401cf997: call    0x140070b90
0x1401cf99c: xor     r9d,r9d
0x1401cf99f: mov     r8d,DWORD PTR [rbx+0x8]
0x1401cf9a3: lea     rdx,[rbp+0xf70]
0x1401cf9aa: lea     rcx,[rip+0x234c787]        # 0x14251c138
0x1401cf9b1: call    0x140bab5f0
0x1401cf9b6: lea     rcx,[rbp+0xf70]
0x1401cf9bd: call    0x140070960
0x1401cf9c2: cmp     rax,0x1e
0x1401cf9c6: jb      0x1401cfa18
0x1401cf9c8: xor     r8d,r8d
0x1401cf9cb: mov     edx,0x1d
0x1401cf9d0: lea     rcx,[rbp+0xf70]
0x1401cf9d7: call    0x1400e2860
0x1401cf9dc: mov     edx,0x1a
0x1401cf9e1: lea     rcx,[rbp+0xf70]
0x1401cf9e8: call    0x1400fcbe0
0x1401cf9ed: mov     BYTE PTR [rax],0x2e
0x1401cf9f0: mov     edx,0x1b
0x1401cf9f5: lea     rcx,[rbp+0xf70]
0x1401cf9fc: call    0x1400fcbe0
0x1401cfa01: mov     BYTE PTR [rax],0x2e
0x1401cfa04: mov     edx,0x1c
0x1401cfa09: lea     rcx,[rbp+0xf70]
0x1401cfa10: call    0x1400fcbe0
0x1401cfa15: mov     BYTE PTR [rax],0x2e
0x1401cfa18: xor     r9d,r9d
0x1401cfa1b: xor     r8d,r8d
0x1401cfa1e: lea     rdx,[rbp+0xf70]
0x1401cfa25: lea     rcx,[rip+0x249ce44]        # 0x14266c870
0x1401cfa2c: call    0x140af3400
0x1401cfa31: nop     
0x1401cfa32: lea     rcx,[rbp+0xf70]
0x1401cfa39: jmp     0x1401cfe48
0x1401cfa3e: lea     rdx,[rip+0x1450333]        # 0x14161fd78 ; literal='Request workers from '
0x1401cfa45: lea     rcx,[rbp+0x1110]
0x1401cfa4c: call    0x140069780
0x1401cfa51: nop     
0x1401cfa52: xor     r9d,r9d
0x1401cfa55: mov     r8d,DWORD PTR [rbx+0x8]
0x1401cfa59: lea     rdx,[rbp+0x1110]
0x1401cfa60: lea     rcx,[rip+0x234c6d1]        # 0x14251c138
0x1401cfa67: call    0x140bab5f0
0x1401cfa6c: lea     rcx,[rbp+0x1110]
0x1401cfa73: call    0x140070960
0x1401cfa78: cmp     rax,0x1e
0x1401cfa7c: jb      0x1401cface
0x1401cfa7e: xor     r8d,r8d
0x1401cfa81: mov     edx,0x1d
0x1401cfa86: lea     rcx,[rbp+0x1110]
0x1401cfa8d: call    0x1400e2860
0x1401cfa92: mov     edx,0x1a
0x1401cfa97: lea     rcx,[rbp+0x1110]
0x1401cfa9e: call    0x1400fcbe0
0x1401cfaa3: mov     BYTE PTR [rax],0x2e
0x1401cfaa6: mov     edx,0x1b
0x1401cfaab: lea     rcx,[rbp+0x1110]
0x1401cfab2: call    0x1400fcbe0
0x1401cfab7: mov     BYTE PTR [rax],0x2e
0x1401cfaba: mov     edx,0x1c
0x1401cfabf: lea     rcx,[rbp+0x1110]
0x1401cfac6: call    0x1400fcbe0
0x1401cfacb: mov     BYTE PTR [rax],0x2e
0x1401cface: xor     r9d,r9d
0x1401cfad1: xor     r8d,r8d
0x1401cfad4: lea     rdx,[rbp+0x1110]
0x1401cfadb: lea     rcx,[rip+0x249cd8e]        # 0x14266c870
0x1401cfae2: call    0x140af3400
0x1401cfae7: nop     
0x1401cfae8: lea     rcx,[rbp+0x1110]
0x1401cfaef: jmp     0x1401cfe48
0x1401cfaf4: lea     rdx,[rip+0x1439aa5]        # 0x1416095a0 ; literal='Rescue '
0x1401cfafb: lea     rcx,[rbp+0x1130]
0x1401cfb02: call    0x140069780
0x1401cfb07: nop     
0x1401cfb08: lea     rcx,[rbp+0x5a0]
0x1401cfb0f: call    0x1400736b0
0x1401cfb14: mov     r8,QWORD PTR [rbx+0x130]
0x1401cfb1b: mov     edi,0x1
0x1401cfb20: mov     WORD PTR [rsp+0x28],di
0x1401cfb25: mov     WORD PTR [rsp+0x20],di
0x1401cfb2a: lea     r9,[rbp+0x5a0]
0x1401cfb31: mov     r8d,DWORD PTR [r8]
0x1401cfb34: lea     rdx,[rbp+0x1130]
0x1401cfb3b: lea     rcx,[rip+0x234c5f6]        # 0x14251c138
0x1401cfb42: call    0x140baabd0
0x1401cfb47: lea     rcx,[rbp+0x1130]
0x1401cfb4e: call    0x140070960
0x1401cfb53: cmp     rax,0x1e
0x1401cfb57: jb      0x1401cfba9
0x1401cfb59: xor     r8d,r8d
0x1401cfb5c: mov     edx,0x1d
0x1401cfb61: lea     rcx,[rbp+0x1130]
0x1401cfb68: call    0x1400e2860
0x1401cfb6d: mov     edx,0x1a
0x1401cfb72: lea     rcx,[rbp+0x1130]
0x1401cfb79: call    0x1400fcbe0
0x1401cfb7e: mov     BYTE PTR [rax],0x2e
0x1401cfb81: mov     edx,0x1b
0x1401cfb86: lea     rcx,[rbp+0x1130]
0x1401cfb8d: call    0x1400fcbe0
0x1401cfb92: mov     BYTE PTR [rax],0x2e
0x1401cfb95: mov     edx,0x1c
0x1401cfb9a: lea     rcx,[rbp+0x1130]
0x1401cfba1: call    0x1400fcbe0
0x1401cfba6: mov     BYTE PTR [rax],0x2e
0x1401cfba9: xor     r9d,r9d
0x1401cfbac: xor     r8d,r8d
0x1401cfbaf: lea     rdx,[rbp+0x1130]
0x1401cfbb6: lea     rcx,[rip+0x249ccb3]        # 0x14266c870
0x1401cfbbd: call    0x140af3400
0x1401cfbc2: nop     
0x1401cfbc3: lea     rcx,[rbp+0x1130]
0x1401cfbca: call    0x140069460
0x1401cfbcf: mov     rbx,QWORD PTR [rbp-0x78]
0x1401cfbd3: jmp     0x1401cfe56
0x1401cfbd8: lea     rdx,[rip+0x1450211]        # 0x14161fdf0 ; literal='Recover '
0x1401cfbdf: lea     rcx,[rbp+0x1150]
0x1401cfbe6: call    0x140069780
0x1401cfbeb: nop     
0x1401cfbec: mov     r8,QWORD PTR [rbx+0x130]
0x1401cfbf3: xor     r9d,r9d
0x1401cfbf6: mov     r8d,DWORD PTR [r8]
0x1401cfbf9: lea     rdx,[rbp+0x1150]
0x1401cfc00: lea     rcx,[rip+0x234c531]        # 0x14251c138
0x1401cfc07: call    0x140bac0c0
0x1401cfc0c: lea     rcx,[rbp+0x1150]
0x1401cfc13: call    0x140070960
0x1401cfc18: cmp     rax,0x1e
0x1401cfc1c: jb      0x1401cfc6e
0x1401cfc1e: xor     r8d,r8d
0x1401cfc21: mov     edx,0x1d
0x1401cfc26: lea     rcx,[rbp+0x1150]
0x1401cfc2d: call    0x1400e2860
0x1401cfc32: mov     edx,0x1a
0x1401cfc37: lea     rcx,[rbp+0x1150]
0x1401cfc3e: call    0x1400fcbe0
0x1401cfc43: mov     BYTE PTR [rax],0x2e
0x1401cfc46: mov     edx,0x1b
0x1401cfc4b: lea     rcx,[rbp+0x1150]
0x1401cfc52: call    0x1400fcbe0
0x1401cfc57: mov     BYTE PTR [rax],0x2e
0x1401cfc5a: mov     edx,0x1c
0x1401cfc5f: lea     rcx,[rbp+0x1150]
0x1401cfc66: call    0x1400fcbe0
0x1401cfc6b: mov     BYTE PTR [rax],0x2e
0x1401cfc6e: xor     r9d,r9d
0x1401cfc71: xor     r8d,r8d
0x1401cfc74: lea     rdx,[rbp+0x1150]
0x1401cfc7b: lea     rcx,[rip+0x249cbee]        # 0x14266c870
0x1401cfc82: call    0x140af3400
0x1401cfc87: nop     
0x1401cfc88: lea     rcx,[rbp+0x1150]
0x1401cfc8f: jmp     0x1401cfe48
0x1401cfc94: lea     rcx,[rbp+0xe30]
0x1401cfc9b: call    0x140070cc0
0x1401cfca0: nop     
0x1401cfca1: mov     rax,QWORD PTR [rbx+0x130]
0x1401cfca8: movsxd  rcx,DWORD PTR [rax]
0x1401cfcab: cmp     ecx,0x6
0x1401cfcae: ja      0x1401cfcf9
0x1401cfcb0: lea     rdx,[rip+0xffffffffffe30349]        # 0x140000000
0x1401cfcb7: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d66e8]
0x1401cfcbe: add     rcx,rdx
0x1401cfcc1: jmp     rcx
0x1401cfcc3: lea     rdx,[rip+0x14500c6]        # 0x14161fd90 ; literal='Explore '
0x1401cfcca: jmp     0x1401cfd00
0x1401cfccc: lea     rdx,[rip+0x14500cd]        # 0x14161fda0 ; literal='Pillage '
0x1401cfcd3: jmp     0x1401cfd00
0x1401cfcd5: lea     rdx,[rip+0x14500d4]        # 0x14161fdb0 ; literal='Demand tribute from '
0x1401cfcdc: jmp     0x1401cfd00
0x1401cfcde: lea     rdx,[rip+0x14500e3]        # 0x14161fdc8 ; literal='Raze '
0x1401cfce5: jmp     0x1401cfd00
0x1401cfce7: lea     rdx,[rip+0x14500e2]        # 0x14161fdd0 ; literal='Take over '
0x1401cfcee: jmp     0x1401cfd00
0x1401cfcf0: lea     rdx,[rip+0x14500e5]        # 0x14161fddc ; literal='Seize '
0x1401cfcf7: jmp     0x1401cfd00
0x1401cfcf9: lea     rdx,[rip+0x14500e4]        # 0x14161fde4 ; literal='Raid '
0x1401cfd00: lea     rcx,[rbp+0xe30]
0x1401cfd07: call    0x140070bb0
0x1401cfd0c: xor     r9d,r9d
0x1401cfd0f: mov     r8d,DWORD PTR [rbx+0x8]
0x1401cfd13: lea     rdx,[rbp+0xe30]
0x1401cfd1a: lea     rcx,[rip+0x234c417]        # 0x14251c138
0x1401cfd21: call    0x140bab5f0
0x1401cfd26: lea     rcx,[rbp+0xe30]
0x1401cfd2d: call    0x140070960
0x1401cfd32: cmp     rax,0x1e
0x1401cfd36: jb      0x1401cfd88
0x1401cfd38: xor     r8d,r8d
0x1401cfd3b: mov     edx,0x1d
0x1401cfd40: lea     rcx,[rbp+0xe30]
0x1401cfd47: call    0x1400e2860
0x1401cfd4c: mov     edx,0x1a
0x1401cfd51: lea     rcx,[rbp+0xe30]
0x1401cfd58: call    0x1400fcbe0
0x1401cfd5d: mov     BYTE PTR [rax],0x2e
0x1401cfd60: mov     edx,0x1b
0x1401cfd65: lea     rcx,[rbp+0xe30]
0x1401cfd6c: call    0x1400fcbe0
0x1401cfd71: mov     BYTE PTR [rax],0x2e
0x1401cfd74: mov     edx,0x1c
0x1401cfd79: lea     rcx,[rbp+0xe30]
0x1401cfd80: call    0x1400fcbe0
0x1401cfd85: mov     BYTE PTR [rax],0x2e
0x1401cfd88: xor     r9d,r9d
0x1401cfd8b: xor     r8d,r8d
0x1401cfd8e: lea     rdx,[rbp+0xe30]
0x1401cfd95: lea     rcx,[rip+0x249cad4]        # 0x14266c870
0x1401cfd9c: call    0x140af3400
0x1401cfda1: nop     
0x1401cfda2: lea     rcx,[rbp+0xe30]
0x1401cfda9: jmp     0x1401cfe48
0x1401cfdae: xor     r8d,r8d
0x1401cfdb1: mov     edx,0x7
0x1401cfdb6: xor     r9d,r9d
0x1401cfdb9: lea     rcx,[rip+0x249cab0]        # 0x14266c870
0x1401cfdc0: call    0x1400bc760
0x1401cfdc5: lea     rdx,[rip+0x145021c]        # 0x14161ffe8 ; literal='No specific orders'
0x1401cfdcc: lea     rcx,[rbp+0x2d10]
0x1401cfdd3: call    0x140069780
0x1401cfdd8: nop     
0x1401cfdd9: xor     r9d,r9d
0x1401cfddc: xor     r8d,r8d
0x1401cfddf: lea     rdx,[rbp+0x2d10]
0x1401cfde6: lea     rcx,[rip+0x249ca83]        # 0x14266c870
0x1401cfded: call    0x140af3400
0x1401cfdf2: nop     
0x1401cfdf3: lea     rcx,[rbp+0x2d10]
0x1401cfdfa: jmp     0x1401cfe48
0x1401cfdfc: xor     r8d,r8d
0x1401cfdff: mov     edx,0x7
0x1401cfe04: xor     r9d,r9d
0x1401cfe07: lea     rcx,[rip+0x249ca62]        # 0x14266c870
0x1401cfe0e: call    0x1400bc760
0x1401cfe13: lea     rdx,[rip+0x14501ce]        # 0x14161ffe8 ; literal='No specific orders'
0x1401cfe1a: lea     rcx,[rbp+0x2d30]
0x1401cfe21: call    0x140069780
0x1401cfe26: nop     
0x1401cfe27: xor     r9d,r9d
0x1401cfe2a: xor     r8d,r8d
0x1401cfe2d: lea     rdx,[rbp+0x2d30]
0x1401cfe34: lea     rcx,[rip+0x249ca35]        # 0x14266c870
0x1401cfe3b: call    0x140af3400
0x1401cfe40: nop     
0x1401cfe41: lea     rcx,[rbp+0x2d30]
0x1401cfe48: call    0x140069460
0x1401cfe4d: mov     rbx,QWORD PTR [rbp-0x78]
0x1401cfe51: mov     edi,0x1
0x1401cfe56: lea     rcx,[r12+0x3b0]
0x1401cfe5e: mov     rdx,rsi
0x1401cfe61: call    0x140070990
0x1401cfe66: test    BYTE PTR [rax],0x1
0x1401cfe69: jne     0x1401cff1c
0x1401cfe6f: xor     r15b,r15b
0x1401cfe72: mov     rdx,rsi
0x1401cfe75: mov     rcx,r14
0x1401cfe78: call    0x140070850
0x1401cfe7d: mov     rcx,QWORD PTR [rax]
0x1401cfe80: cmp     DWORD PTR [rcx+0x58],0xffffffff
0x1401cfe84: je      0x1401cfea1
0x1401cfe86: mov     rdx,rsi
0x1401cfe89: mov     rcx,r14
0x1401cfe8c: call    0x140070850
0x1401cfe91: mov     rcx,QWORD PTR [rax]
0x1401cfe94: movzx   r15d,r15b
0x1401cfe98: mov     eax,DWORD PTR [rbx]
0x1401cfe9a: cmp     DWORD PTR [rcx+0x58],eax
0x1401cfe9d: cmove   r15d,edi
0x1401cfea1: mov     r14d,DWORD PTR [rsp+0x70]
0x1401cfea6: lea     r12,[rip+0x24a3eab]        # 0x142673d58
0x1401cfead: mov     r13d,DWORD PTR [rbp-0x60]
0x1401cfeb1: mov     edi,r13d
0x1401cfeb4: mov     rbx,r12
0x1401cfeb7: mov     esi,0x4
0x1401cfebc: nop     DWORD PTR [rax+0x0]
0x1401cfec0: mov     r8d,edi
0x1401cfec3: mov     edx,r14d
0x1401cfec6: lea     rcx,[rip+0x249c9a3]        # 0x14266c870
0x1401cfecd: call    0x1400bc750
0x1401cfed2: xor     r8d,r8d
0x1401cfed5: lea     rcx,[rip+0x249c994]        # 0x14266c870
0x1401cfedc: test    r15b,r15b
0x1401cfedf: je      0x1401cfee6
0x1401cfee1: mov     edx,DWORD PTR [rbx-0x30]
0x1401cfee4: jmp     0x1401cfee8
0x1401cfee6: mov     edx,DWORD PTR [rbx]
0x1401cfee8: call    0x140af4ba0
0x1401cfeed: inc     edi
0x1401cfeef: add     rbx,0xc
0x1401cfef3: sub     rsi,0x1
0x1401cfef7: jne     0x1401cfec0
0x1401cfef9: inc     r14d
0x1401cfefc: add     r12,0x4
0x1401cff00: lea     rax,[rip+0x24a3e5d]        # 0x142673d64
0x1401cff07: cmp     r12,rax
0x1401cff0a: jl      0x1401cfeb1
0x1401cff0c: mov     r13d,DWORD PTR [rbp-0x28]
0x1401cff10: mov     r15d,DWORD PTR [rsp+0x70]
0x1401cff15: mov     esi,DWORD PTR [rbp-0x58]
0x1401cff18: mov     r14,QWORD PTR [rbp-0x30]
0x1401cff1c: add     r15d,0x3
0x1401cff20: mov     DWORD PTR [rsp+0x70],r15d
0x1401cff25: lea     rcx,[rbp+0xfb0]
0x1401cff2c: call    0x140069460
0x1401cff31: inc     esi
0x1401cff33: mov     DWORD PTR [rbp-0x58],esi
0x1401cff36: cmp     esi,DWORD PTR [rbp-0x20]
0x1401cff39: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401cff3c: mov     r12,QWORD PTR [rbp+0x18]
0x1401cff40: jl      0x1401cf662
0x1401cff46: mov     edi,DWORD PTR [rsp+0x74]
0x1401cff4a: mov     r14,QWORD PTR [rsp+0x78]
0x1401cff4f: cmp     r12d,edi
0x1401cff52: jle     0x1401d0c30
0x1401cff58: lea     ebx,[rdi*2-0x1]
0x1401cff5f: add     ebx,edi
0x1401cff61: lea     rcx,[rbp+0x230]
0x1401cff68: call    0x1400bc990
0x1401cff6d: lea     r9d,[r12-0x1]
0x1401cff72: mov     DWORD PTR [rsp+0x30],ebx
0x1401cff76: mov     DWORD PTR [rsp+0x28],0x2
0x1401cff7e: mov     DWORD PTR [rsp+0x20],edi
0x1401cff82: xor     r8d,r8d
0x1401cff85: mov     edx,DWORD PTR [r14+0x3d0]
0x1401cff8c: lea     rcx,[rbp+0x230]
0x1401cff93: call    0x1400bc9b0
0x1401cff98: mov     r9d,DWORD PTR [rbp-0x6c]
0x1401cff9c: inc     r9d
0x1401cff9f: movzx   eax,BYTE PTR [r14+0x3d4]
0x1401cffa7: lea     rcx,[rbp+0x230]
0x1401cffae: jmp     0x1401d0c18
0x1401cffb3: xor     r8d,r8d
0x1401cffb6: mov     edx,0x6
0x1401cffbb: mov     r9b,0x1
0x1401cffbe: lea     rcx,[rip+0x249c8ab]        # 0x14266c870
0x1401cffc5: call    0x1400bc760
0x1401cffca: lea     r8d,[r13+0x2]
0x1401cffce: mov     edx,0x1
0x1401cffd3: lea     rcx,[rip+0x249c896]        # 0x14266c870
0x1401cffda: call    0x1400bc750
0x1401cffdf: lea     rdx,[rip+0x145001a]        # 0x141620000 ; literal='No messengers available'
0x1401cffe6: lea     rcx,[rbp+0x2d70]
0x1401cffed: call    0x140069780
0x1401cfff2: nop     
0x1401cfff3: xor     r9d,r9d
0x1401cfff6: xor     r8d,r8d
0x1401cfff9: lea     rdx,[rbp+0x2d70]
0x1401d0000: lea     rcx,[rip+0x249c869]        # 0x14266c870
0x1401d0007: call    0x140af3400
0x1401d000c: nop     
0x1401d000d: lea     rcx,[rbp+0x2d70]
0x1401d0014: jmp     0x1401d0edf
0x1401d0019: add     rbx,0x350
0x1401d0020: mov     rcx,rbx
0x1401d0023: call    0x140070480
0x1401d0028: test    rax,rax
0x1401d002b: je      0x1401d0e7e
0x1401d0031: lea     rdx,[rbp+0xb0]
0x1401d0038: mov     rcx,rbx
0x1401d003b: call    0x140070870
0x1401d0040: lea     rdx,[rbp+0x178]
0x1401d0047: mov     rcx,rbx
0x1401d004a: call    0x140070860
0x1401d004f: lea     rdx,[rbp+0x178]
0x1401d0056: lea     rcx,[rbp+0xb0]
0x1401d005d: call    0x1400bafa0
0x1401d0062: test    al,al
0x1401d0064: jne     0x1401d00d8
0x1401d0066: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401d0070: lea     rcx,[rbp+0xb0]
0x1401d0077: call    0x140070440
0x1401d007c: mov     rcx,QWORD PTR [rax]
0x1401d007f: mov     eax,DWORD PTR [r12]
0x1401d0083: cmp     DWORD PTR [rcx+0x1d0],eax
0x1401d0089: jne     0x1401d00b5
0x1401d008b: mov     BYTE PTR [rbp-0x40],0x1
0x1401d008f: mov     rcx,r12
0x1401d0092: call    0x140076740
0x1401d0097: cmp     eax,0x19
0x1401d009a: jne     0x1401d00b5
0x1401d009c: mov     rcx,QWORD PTR [r12+0x130]
0x1401d00a4: call    0x140070a80
0x1401d00a9: test    rax,rax
0x1401d00ac: jne     0x1401d00b5
0x1401d00ae: mov     BYTE PTR [rbp-0x40],al
0x1401d00b1: mov     BYTE PTR [rbp-0x50],0x1
0x1401d00b5: lea     rcx,[rbp+0xb0]
0x1401d00bc: call    0x140070430
0x1401d00c1: lea     rdx,[rbp+0x178]
0x1401d00c8: lea     rcx,[rbp+0xb0]
0x1401d00cf: call    0x1400bafa0
0x1401d00d4: test    al,al
0x1401d00d6: je      0x1401d0070
0x1401d00d8: add     r13d,0x2
0x1401d00dc: mov     DWORD PTR [rbp-0x28],r13d
0x1401d00e0: lea     edi,[r15-0x2]
0x1401d00e4: mov     DWORD PTR [rsp+0x70],edi
0x1401d00e8: lea     ecx,[r14-0x7]
0x1401d00ec: mov     eax,0x55555556
0x1401d00f1: imul    ecx
0x1401d00f3: mov     esi,edx
0x1401d00f5: shr     esi,0x1f
0x1401d00f8: add     esi,edx
0x1401d00fa: mov     DWORD PTR [rbp-0x68],esi
0x1401d00fd: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d0102: lea     rcx,[rbx+0x350]
0x1401d0109: call    0x140070480
0x1401d010e: mov     r14,rax
0x1401d0111: mov     QWORD PTR [rbp+0x30],rax
0x1401d0115: cmp     eax,esi
0x1401d0117: jle     0x1401d0121
0x1401d0119: lea     edi,[r15-0x4]
0x1401d011d: mov     DWORD PTR [rsp+0x70],edi
0x1401d0121: lea     eax,[rdi-0x3]
0x1401d0124: mov     DWORD PTR [rbp-0x60],eax
0x1401d0127: mov     r12d,0x1
0x1401d012d: mov     DWORD PTR [rsp+0x74],r12d
0x1401d0132: mov     ecx,DWORD PTR [rbx+0x3c8]
0x1401d0138: mov     edx,r14d
0x1401d013b: sub     edx,esi
0x1401d013d: cmp     ecx,edx
0x1401d013f: cmovle  edx,ecx
0x1401d0142: xor     r15d,r15d
0x1401d0145: test    edx,edx
0x1401d0147: cmovns  r15d,edx
0x1401d014b: mov     DWORD PTR [rbp-0x58],r15d
0x1401d014f: lea     eax,[r15+rsi*1]
0x1401d0153: mov     DWORD PTR [rbp-0x20],eax
0x1401d0156: cmp     r15d,eax
0x1401d0159: jge     0x1401d0bbe
0x1401d015f: lea     rax,[rbx+0x350]
0x1401d0166: mov     QWORD PTR [rbp+0x48],rax
0x1401d016a: jmp     0x1401d0175
0x1401d016c: nop     DWORD PTR [rax+0x0]
0x1401d0170: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d0175: cmp     r15d,r14d
0x1401d0178: jge     0x1401d0bb7
0x1401d017e: movsxd  rdx,r15d
0x1401d0181: mov     rcx,rax
0x1401d0184: call    0x140070850
0x1401d0189: mov     r14,QWORD PTR [rax]
0x1401d018c: mov     QWORD PTR [rbp+0x18],r14
0x1401d0190: xor     r8d,r8d
0x1401d0193: mov     edx,0x7
0x1401d0198: mov     r9b,0x1
0x1401d019b: lea     rcx,[rip+0x249c6ce]        # 0x14266c870
0x1401d01a2: call    0x1400bc760
0x1401d01a7: mov     edi,r13d
0x1401d01aa: mov     eax,DWORD PTR [rsp+0x70]
0x1401d01ae: cmp     r13d,eax
0x1401d01b1: jg      0x1401d02b7
0x1401d01b7: lea     r15d,[r12+0x3]
0x1401d01bc: movsxd  rsi,r13d
0x1401d01bf: nop     
0x1401d01c0: mov     ebx,r12d
0x1401d01c3: cmp     r12d,r15d
0x1401d01c6: jge     0x1401d029d
0x1401d01cc: movsxd  r14,eax
0x1401d01cf: nop     
0x1401d01d0: mov     r8d,edi
0x1401d01d3: mov     edx,ebx
0x1401d01d5: lea     rcx,[rip+0x249c694]        # 0x14266c870
0x1401d01dc: call    0x1400bc750
0x1401d01e1: cmp     ebx,r12d
0x1401d01e4: jne     0x1401d020f
0x1401d01e6: cmp     edi,r13d
0x1401d01e9: jne     0x1401d01f3
0x1401d01eb: mov     edx,DWORD PTR [rip+0x249e0c3]        # 0x14266e2b4
0x1401d01f1: jmp     0x1401d025f
0x1401d01f3: lea     rcx,[rip+0x249c676]        # 0x14266c870
0x1401d01fa: cmp     rsi,r14
0x1401d01fd: jne     0x1401d0207
0x1401d01ff: mov     edx,DWORD PTR [rip+0x249e0c7]        # 0x14266e2cc
0x1401d0205: jmp     0x1401d0266
0x1401d0207: mov     edx,DWORD PTR [rip+0x249e0b3]        # 0x14266e2c0
0x1401d020d: jmp     0x1401d0266
0x1401d020f: lea     eax,[r12+0x2]
0x1401d0214: cmp     ebx,eax
0x1401d0216: jne     0x1401d0241
0x1401d0218: cmp     edi,r13d
0x1401d021b: jne     0x1401d0225
0x1401d021d: mov     edx,DWORD PTR [rip+0x249e099]        # 0x14266e2bc
0x1401d0223: jmp     0x1401d025f
0x1401d0225: lea     rcx,[rip+0x249c644]        # 0x14266c870
0x1401d022c: cmp     rsi,r14
0x1401d022f: jne     0x1401d0239
0x1401d0231: mov     edx,DWORD PTR [rip+0x249e09d]        # 0x14266e2d4
0x1401d0237: jmp     0x1401d0266
0x1401d0239: mov     edx,DWORD PTR [rip+0x249e089]        # 0x14266e2c8
0x1401d023f: jmp     0x1401d0266
0x1401d0241: cmp     edi,r13d
0x1401d0244: jne     0x1401d024e
0x1401d0246: mov     edx,DWORD PTR [rip+0x249e06c]        # 0x14266e2b8
0x1401d024c: jmp     0x1401d025f
0x1401d024e: cmp     rsi,r14
0x1401d0251: mov     edx,DWORD PTR [rip+0x249e079]        # 0x14266e2d0
0x1401d0257: je      0x1401d025f
0x1401d0259: mov     edx,DWORD PTR [rip+0x249e065]        # 0x14266e2c4
0x1401d025f: lea     rcx,[rip+0x249c60a]        # 0x14266c870
0x1401d0266: call    0x140af4570
0x1401d026b: xor     edx,edx
0x1401d026d: lea     rcx,[rip+0x221f97c]        # 0x1423efbf0
0x1401d0274: call    0x1400735c0
0x1401d0279: test    al,al
0x1401d027b: je      0x1401d028e
0x1401d027d: mov     r8b,0x1
0x1401d0280: xor     edx,edx
0x1401d0282: lea     rcx,[rip+0x249c5e7]        # 0x14266c870
0x1401d0289: call    0x1400bc7c0
0x1401d028e: inc     ebx
0x1401d0290: cmp     ebx,r15d
0x1401d0293: jl      0x1401d01d0
0x1401d0299: mov     eax,DWORD PTR [rsp+0x70]
0x1401d029d: inc     edi
0x1401d029f: inc     rsi
0x1401d02a2: cmp     edi,eax
0x1401d02a4: jle     0x1401d01c0
0x1401d02aa: mov     r14,QWORD PTR [rbp+0x18]
0x1401d02ae: mov     r15d,DWORD PTR [rbp-0x58]
0x1401d02b2: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d02b7: cmp     DWORD PTR [r14+0x1d4],0x0
0x1401d02bf: jne     0x1401d02fc
0x1401d02c1: cmp     DWORD PTR [r14+0x1dc],0x0
0x1401d02c9: jl      0x1401d02ea
0x1401d02cb: lea     rcx,[rip+0x249cede]        # 0x14266d1b0
0x1401d02d2: call    0x1400709a0
0x1401d02d7: cmp     DWORD PTR [r14+0x1dc],eax
0x1401d02de: jge     0x1401d02ea
0x1401d02e0: mov     rcx,r14
0x1401d02e3: call    0x1404142c0
0x1401d02e8: jmp     0x1401d02f2
0x1401d02ea: mov     rcx,r14
0x1401d02ed: call    0x1404140a0
0x1401d02f2: cmp     DWORD PTR [r14+0x1d4],0x0
0x1401d02fa: je      0x1401d033f
0x1401d02fc: mov     r8d,r13d
0x1401d02ff: mov     edx,r12d
0x1401d0302: lea     rcx,[rip+0x249c567]        # 0x14266c870
0x1401d0309: call    0x1400bc750
0x1401d030e: mov     BYTE PTR [rsp+0x30],0x0
0x1401d0313: mov     DWORD PTR [rsp+0x28],0x3
0x1401d031b: mov     DWORD PTR [rsp+0x20],0x4
0x1401d0323: mov     r9d,0x2
0x1401d0329: xor     r8d,r8d
0x1401d032c: mov     edx,DWORD PTR [r14+0x1d4]
0x1401d0333: lea     rcx,[rip+0x249c536]        # 0x14266c870
0x1401d033a: call    0x140af4810
0x1401d033f: lea     rcx,[rbx+0x368]
0x1401d0346: movsxd  rdx,r15d
0x1401d0349: call    0x140070990
0x1401d034e: xor     r8d,r8d
0x1401d0351: mov     r9b,0x1
0x1401d0354: lea     rcx,[rip+0x249c515]        # 0x14266c870
0x1401d035b: test    BYTE PTR [rax],r9b
0x1401d035e: mov     edx,0x3
0x1401d0363: je      0x1401d036a
0x1401d0365: mov     edx,0x4
0x1401d036a: call    0x1400bc760
0x1401d036f: lea     edx,[r12+0x1]
0x1401d0374: lea     r8d,[r13+0x6]
0x1401d0378: lea     rcx,[rip+0x249c4f1]        # 0x14266c870
0x1401d037f: call    0x1400bc750
0x1401d0384: lea     rcx,[rbp+0xfd0]
0x1401d038b: call    0x140070cc0
0x1401d0390: nop     
0x1401d0391: lea     rcx,[r14+0x80]
0x1401d0398: call    0x140070b50
0x1401d039d: test    al,al
0x1401d039f: jne     0x1401d03b6
0x1401d03a1: lea     rdx,[r14+0x80]
0x1401d03a8: lea     rcx,[rbp+0xfd0]
0x1401d03af: call    0x140070bd0
0x1401d03b4: jmp     0x1401d03cc
0x1401d03b6: lea     rcx,[r14+0x8]
0x1401d03ba: xor     r9d,r9d
0x1401d03bd: mov     r8b,0x1
0x1401d03c0: lea     rdx,[rbp+0xfd0]
0x1401d03c7: call    0x140aae180
0x1401d03cc: lea     rcx,[rbp+0xfd0]
0x1401d03d3: call    0x140070960
0x1401d03d8: cmp     rax,0x12
0x1401d03dc: jb      0x1401d042e
0x1401d03de: xor     r8d,r8d
0x1401d03e1: mov     edx,0x11
0x1401d03e6: lea     rcx,[rbp+0xfd0]
0x1401d03ed: call    0x1400e2860
0x1401d03f2: mov     edx,0xe
0x1401d03f7: lea     rcx,[rbp+0xfd0]
0x1401d03fe: call    0x1400fcbe0
0x1401d0403: mov     BYTE PTR [rax],0x2e
0x1401d0406: mov     edx,0xf
0x1401d040b: lea     rcx,[rbp+0xfd0]
0x1401d0412: call    0x1400fcbe0
0x1401d0417: mov     BYTE PTR [rax],0x2e
0x1401d041a: mov     edx,0x10
0x1401d041f: lea     rcx,[rbp+0xfd0]
0x1401d0426: call    0x1400fcbe0
0x1401d042b: mov     BYTE PTR [rax],0x2e
0x1401d042e: xor     r9d,r9d
0x1401d0431: xor     r8d,r8d
0x1401d0434: lea     rdx,[rbp+0xfd0]
0x1401d043b: lea     rcx,[rip+0x249c42e]        # 0x14266c870
0x1401d0442: call    0x140af3400
0x1401d0447: lea     r8d,[r13+0x6]
0x1401d044b: lea     edx,[r12+0x2]
0x1401d0450: lea     rcx,[rip+0x249c419]        # 0x14266c870
0x1401d0457: call    0x1400bc750
0x1401d045c: mov     eax,DWORD PTR [r14+0x1d0]
0x1401d0463: xor     r8d,r8d
0x1401d0466: lea     rcx,[rip+0x249c403]        # 0x14266c870
0x1401d046d: cmp     eax,0xffffffff
0x1401d0470: je      0x1401d09c1
0x1401d0476: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d047a: cmp     eax,DWORD PTR [rbx]
0x1401d047c: jne     0x1401d04ca
0x1401d047e: mov     edx,0x2
0x1401d0483: mov     r9b,0x1
0x1401d0486: call    0x1400bc760
0x1401d048b: lea     rdx,[rip+0x144fb46]        # 0x14161ffd8 ; literal='On this mission'
0x1401d0492: lea     rcx,[rbp+0x2d90]
0x1401d0499: call    0x140069780
0x1401d049e: nop     
0x1401d049f: xor     r9d,r9d
0x1401d04a2: xor     r8d,r8d
0x1401d04a5: lea     rdx,[rbp+0x2d90]
0x1401d04ac: lea     rcx,[rip+0x249c3bd]        # 0x14266c870
0x1401d04b3: call    0x140af3400
0x1401d04b8: nop     
0x1401d04b9: lea     rcx,[rbp+0x2d90]
0x1401d04c0: call    0x140069460
0x1401d04c5: jmp     0x1401d0ad8
0x1401d04ca: mov     edx,0x3
0x1401d04cf: xor     r9d,r9d
0x1401d04d2: call    0x1400bc760
0x1401d04d7: mov     edx,DWORD PTR [r14+0x1d0]
0x1401d04de: lea     rcx,[rip+0x2339da3]        # 0x14250a288
0x1401d04e5: call    0x140073ba0
0x1401d04ea: mov     rbx,rax
0x1401d04ed: test    rax,rax
0x1401d04f0: je      0x1401d0970
0x1401d04f6: mov     rcx,rax
0x1401d04f9: call    0x140076740
0x1401d04fe: sub     eax,0x2
0x1401d0501: je      0x1401d0856
0x1401d0507: sub     eax,0xf
0x1401d050a: je      0x1401d079a
0x1401d0510: sub     eax,0x1
0x1401d0513: je      0x1401d06b6
0x1401d0519: sub     eax,0x1
0x1401d051c: je      0x1401d0600
0x1401d0522: cmp     eax,0x6
0x1401d0525: jne     0x1401d0ad4
0x1401d052b: lea     rcx,[rbp+0xf90]
0x1401d0532: call    0x140070cc0
0x1401d0537: nop     
0x1401d0538: lea     rdx,[rbp+0xf90]
0x1401d053f: mov     rcx,QWORD PTR [rbx+0x130]
0x1401d0546: call    0x1401bdc00
0x1401d054b: lea     rdx,[rip+0x144db72]        # 0x14161e0c4 ; literal=' at '
0x1401d0552: lea     rcx,[rbp+0xf90]
0x1401d0559: call    0x140070b90
0x1401d055e: xor     r9d,r9d
0x1401d0561: mov     r8d,DWORD PTR [rbx+0x8]
0x1401d0565: lea     rdx,[rbp+0xf90]
0x1401d056c: lea     rcx,[rip+0x234bbc5]        # 0x14251c138
0x1401d0573: call    0x140bab5f0
0x1401d0578: lea     rcx,[rbp+0xf90]
0x1401d057f: call    0x140070960
0x1401d0584: cmp     rax,0x1e
0x1401d0588: jb      0x1401d05da
0x1401d058a: xor     r8d,r8d
0x1401d058d: mov     edx,0x1d
0x1401d0592: lea     rcx,[rbp+0xf90]
0x1401d0599: call    0x1400e2860
0x1401d059e: mov     edx,0x1a
0x1401d05a3: lea     rcx,[rbp+0xf90]
0x1401d05aa: call    0x1400fcbe0
0x1401d05af: mov     BYTE PTR [rax],0x2e
0x1401d05b2: mov     edx,0x1b
0x1401d05b7: lea     rcx,[rbp+0xf90]
0x1401d05be: call    0x1400fcbe0
0x1401d05c3: mov     BYTE PTR [rax],0x2e
0x1401d05c6: mov     edx,0x1c
0x1401d05cb: lea     rcx,[rbp+0xf90]
0x1401d05d2: call    0x1400fcbe0
0x1401d05d7: mov     BYTE PTR [rax],0x2e
0x1401d05da: xor     r9d,r9d
0x1401d05dd: xor     r8d,r8d
0x1401d05e0: lea     rdx,[rbp+0xf90]
0x1401d05e7: lea     rcx,[rip+0x249c282]        # 0x14266c870
0x1401d05ee: call    0x140af3400
0x1401d05f3: nop     
0x1401d05f4: lea     rcx,[rbp+0xf90]
0x1401d05fb: jmp     0x1401d0acf
0x1401d0600: lea     rdx,[rip+0x144f771]        # 0x14161fd78 ; literal='Request workers from '
0x1401d0607: lea     rcx,[rbp+0x1170]
0x1401d060e: call    0x140069780
0x1401d0613: nop     
0x1401d0614: xor     r9d,r9d
0x1401d0617: mov     r8d,DWORD PTR [rbx+0x8]
0x1401d061b: lea     rdx,[rbp+0x1170]
0x1401d0622: lea     rcx,[rip+0x234bb0f]        # 0x14251c138
0x1401d0629: call    0x140bab5f0
0x1401d062e: lea     rcx,[rbp+0x1170]
0x1401d0635: call    0x140070960
0x1401d063a: cmp     rax,0x1e
0x1401d063e: jb      0x1401d0690
0x1401d0640: xor     r8d,r8d
0x1401d0643: mov     edx,0x1d
0x1401d0648: lea     rcx,[rbp+0x1170]
0x1401d064f: call    0x1400e2860
0x1401d0654: mov     edx,0x1a
0x1401d0659: lea     rcx,[rbp+0x1170]
0x1401d0660: call    0x1400fcbe0
0x1401d0665: mov     BYTE PTR [rax],0x2e
0x1401d0668: mov     edx,0x1b
0x1401d066d: lea     rcx,[rbp+0x1170]
0x1401d0674: call    0x1400fcbe0
0x1401d0679: mov     BYTE PTR [rax],0x2e
0x1401d067c: mov     edx,0x1c
0x1401d0681: lea     rcx,[rbp+0x1170]
0x1401d0688: call    0x1400fcbe0
0x1401d068d: mov     BYTE PTR [rax],0x2e
0x1401d0690: xor     r9d,r9d
0x1401d0693: xor     r8d,r8d
0x1401d0696: lea     rdx,[rbp+0x1170]
0x1401d069d: lea     rcx,[rip+0x249c1cc]        # 0x14266c870
0x1401d06a4: call    0x140af3400
0x1401d06a9: nop     
0x1401d06aa: lea     rcx,[rbp+0x1170]
0x1401d06b1: jmp     0x1401d0acf
0x1401d06b6: lea     rdx,[rip+0x1438ee3]        # 0x1416095a0 ; literal='Rescue '
0x1401d06bd: lea     rcx,[rbp+0x1190]
0x1401d06c4: call    0x140069780
0x1401d06c9: nop     
0x1401d06ca: lea     rcx,[rbp+0x4d0]
0x1401d06d1: call    0x1400736b0
0x1401d06d6: mov     r8,QWORD PTR [rbx+0x130]
0x1401d06dd: mov     edi,0x1
0x1401d06e2: mov     WORD PTR [rsp+0x28],di
0x1401d06e7: mov     WORD PTR [rsp+0x20],di
0x1401d06ec: lea     r9,[rbp+0x4d0]
0x1401d06f3: mov     r8d,DWORD PTR [r8]
0x1401d06f6: lea     rdx,[rbp+0x1190]
0x1401d06fd: lea     rcx,[rip+0x234ba34]        # 0x14251c138
0x1401d0704: call    0x140baabd0
0x1401d0709: lea     rcx,[rbp+0x1190]
0x1401d0710: call    0x140070960
0x1401d0715: cmp     rax,0x1e
0x1401d0719: jb      0x1401d076b
0x1401d071b: xor     r8d,r8d
0x1401d071e: mov     edx,0x1d
0x1401d0723: lea     rcx,[rbp+0x1190]
0x1401d072a: call    0x1400e2860
0x1401d072f: mov     edx,0x1a
0x1401d0734: lea     rcx,[rbp+0x1190]
0x1401d073b: call    0x1400fcbe0
0x1401d0740: mov     BYTE PTR [rax],0x2e
0x1401d0743: mov     edx,0x1b
0x1401d0748: lea     rcx,[rbp+0x1190]
0x1401d074f: call    0x1400fcbe0
0x1401d0754: mov     BYTE PTR [rax],0x2e
0x1401d0757: mov     edx,0x1c
0x1401d075c: lea     rcx,[rbp+0x1190]
0x1401d0763: call    0x1400fcbe0
0x1401d0768: mov     BYTE PTR [rax],0x2e
0x1401d076b: xor     r9d,r9d
0x1401d076e: xor     r8d,r8d
0x1401d0771: lea     rdx,[rbp+0x1190]
0x1401d0778: lea     rcx,[rip+0x249c0f1]        # 0x14266c870
0x1401d077f: call    0x140af3400
0x1401d0784: nop     
0x1401d0785: lea     rcx,[rbp+0x1190]
0x1401d078c: call    0x140069460
0x1401d0791: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d0795: jmp     0x1401d0add
0x1401d079a: lea     rdx,[rip+0x144f64f]        # 0x14161fdf0 ; literal='Recover '
0x1401d07a1: lea     rcx,[rbp+0x11b0]
0x1401d07a8: call    0x140069780
0x1401d07ad: nop     
0x1401d07ae: mov     r8,QWORD PTR [rbx+0x130]
0x1401d07b5: xor     r9d,r9d
0x1401d07b8: mov     r8d,DWORD PTR [r8]
0x1401d07bb: lea     rdx,[rbp+0x11b0]
0x1401d07c2: lea     rcx,[rip+0x234b96f]        # 0x14251c138
0x1401d07c9: call    0x140bac0c0
0x1401d07ce: lea     rcx,[rbp+0x11b0]
0x1401d07d5: call    0x140070960
0x1401d07da: cmp     rax,0x1e
0x1401d07de: jb      0x1401d0830
0x1401d07e0: xor     r8d,r8d
0x1401d07e3: mov     edx,0x1d
0x1401d07e8: lea     rcx,[rbp+0x11b0]
0x1401d07ef: call    0x1400e2860
0x1401d07f4: mov     edx,0x1a
0x1401d07f9: lea     rcx,[rbp+0x11b0]
0x1401d0800: call    0x1400fcbe0
0x1401d0805: mov     BYTE PTR [rax],0x2e
0x1401d0808: mov     edx,0x1b
0x1401d080d: lea     rcx,[rbp+0x11b0]
0x1401d0814: call    0x1400fcbe0
0x1401d0819: mov     BYTE PTR [rax],0x2e
0x1401d081c: mov     edx,0x1c
0x1401d0821: lea     rcx,[rbp+0x11b0]
0x1401d0828: call    0x1400fcbe0
0x1401d082d: mov     BYTE PTR [rax],0x2e
0x1401d0830: xor     r9d,r9d
0x1401d0833: xor     r8d,r8d
0x1401d0836: lea     rdx,[rbp+0x11b0]
0x1401d083d: lea     rcx,[rip+0x249c02c]        # 0x14266c870
0x1401d0844: call    0x140af3400
0x1401d0849: nop     
0x1401d084a: lea     rcx,[rbp+0x11b0]
0x1401d0851: jmp     0x1401d0acf
0x1401d0856: lea     rcx,[rbp+0xe50]
0x1401d085d: call    0x140070cc0
0x1401d0862: nop     
0x1401d0863: mov     rax,QWORD PTR [rbx+0x130]
0x1401d086a: movsxd  rcx,DWORD PTR [rax]
0x1401d086d: cmp     ecx,0x6
0x1401d0870: ja      0x1401d08bb
0x1401d0872: lea     rdx,[rip+0xffffffffffe2f787]        # 0x140000000
0x1401d0879: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d6704]
0x1401d0880: add     rcx,rdx
0x1401d0883: jmp     rcx
0x1401d0885: lea     rdx,[rip+0x144f504]        # 0x14161fd90 ; literal='Explore '
0x1401d088c: jmp     0x1401d08c2
0x1401d088e: lea     rdx,[rip+0x144f50b]        # 0x14161fda0 ; literal='Pillage '
0x1401d0895: jmp     0x1401d08c2
0x1401d0897: lea     rdx,[rip+0x144f512]        # 0x14161fdb0 ; literal='Demand tribute from '
0x1401d089e: jmp     0x1401d08c2
0x1401d08a0: lea     rdx,[rip+0x144f521]        # 0x14161fdc8 ; literal='Raze '
0x1401d08a7: jmp     0x1401d08c2
0x1401d08a9: lea     rdx,[rip+0x144f520]        # 0x14161fdd0 ; literal='Take over '
0x1401d08b0: jmp     0x1401d08c2
0x1401d08b2: lea     rdx,[rip+0x144f523]        # 0x14161fddc ; literal='Seize '
0x1401d08b9: jmp     0x1401d08c2
0x1401d08bb: lea     rdx,[rip+0x144f522]        # 0x14161fde4 ; literal='Raid '
0x1401d08c2: lea     rcx,[rbp+0xe50]
0x1401d08c9: call    0x140070bb0
0x1401d08ce: xor     r9d,r9d
0x1401d08d1: mov     r8d,DWORD PTR [rbx+0x8]
0x1401d08d5: lea     rdx,[rbp+0xe50]
0x1401d08dc: lea     rcx,[rip+0x234b855]        # 0x14251c138
0x1401d08e3: call    0x140bab5f0
0x1401d08e8: lea     rcx,[rbp+0xe50]
0x1401d08ef: call    0x140070960
0x1401d08f4: cmp     rax,0x1e
0x1401d08f8: jb      0x1401d094a
0x1401d08fa: xor     r8d,r8d
0x1401d08fd: mov     edx,0x1d
0x1401d0902: lea     rcx,[rbp+0xe50]
0x1401d0909: call    0x1400e2860
0x1401d090e: mov     edx,0x1a
0x1401d0913: lea     rcx,[rbp+0xe50]
0x1401d091a: call    0x1400fcbe0
0x1401d091f: mov     BYTE PTR [rax],0x2e
0x1401d0922: mov     edx,0x1b
0x1401d0927: lea     rcx,[rbp+0xe50]
0x1401d092e: call    0x1400fcbe0
0x1401d0933: mov     BYTE PTR [rax],0x2e
0x1401d0936: mov     edx,0x1c
0x1401d093b: lea     rcx,[rbp+0xe50]
0x1401d0942: call    0x1400fcbe0
0x1401d0947: mov     BYTE PTR [rax],0x2e
0x1401d094a: xor     r9d,r9d
0x1401d094d: xor     r8d,r8d
0x1401d0950: lea     rdx,[rbp+0xe50]
0x1401d0957: lea     rcx,[rip+0x249bf12]        # 0x14266c870
0x1401d095e: call    0x140af3400
0x1401d0963: nop     
0x1401d0964: lea     rcx,[rbp+0xe50]
0x1401d096b: jmp     0x1401d0acf
0x1401d0970: xor     r8d,r8d
0x1401d0973: mov     edx,0x7
0x1401d0978: xor     r9d,r9d
0x1401d097b: lea     rcx,[rip+0x249beee]        # 0x14266c870
0x1401d0982: call    0x1400bc760
0x1401d0987: lea     rdx,[rip+0x144f65a]        # 0x14161ffe8 ; literal='No specific orders'
0x1401d098e: lea     rcx,[rbp+0x2db0]
0x1401d0995: call    0x140069780
0x1401d099a: nop     
0x1401d099b: xor     r9d,r9d
0x1401d099e: xor     r8d,r8d
0x1401d09a1: lea     rdx,[rbp+0x2db0]
0x1401d09a8: lea     rcx,[rip+0x249bec1]        # 0x14266c870
0x1401d09af: call    0x140af3400
0x1401d09b4: nop     
0x1401d09b5: lea     rcx,[rbp+0x2db0]
0x1401d09bc: jmp     0x1401d0acf
0x1401d09c1: mov     edx,0x7
0x1401d09c6: xor     r9d,r9d
0x1401d09c9: call    0x1400bc760
0x1401d09ce: lea     rcx,[r14+0xb8]
0x1401d09d5: call    0x140070480
0x1401d09da: test    rax,rax
0x1401d09dd: je      0x1401d0a9a
0x1401d09e3: xor     edx,edx
0x1401d09e5: lea     rcx,[r14+0xb8]
0x1401d09ec: call    0x140070850
0x1401d09f1: mov     rbx,QWORD PTR [rax]
0x1401d09f4: lea     rcx,[rbp+0x11d0]
0x1401d09fb: call    0x140070cc0
0x1401d0a00: nop     
0x1401d0a01: mov     rax,QWORD PTR [rbx]
0x1401d0a04: mov     r8,QWORD PTR [rax+0x68]
0x1401d0a08: lea     rdx,[rbp+0x11d0]
0x1401d0a0f: mov     rcx,rbx
0x1401d0a12: call    r8
0x1401d0a15: lea     rcx,[rbp+0x11d0]
0x1401d0a1c: call    0x140070960
0x1401d0a21: cmp     rax,0x1e
0x1401d0a25: jb      0x1401d0a77
0x1401d0a27: xor     r8d,r8d
0x1401d0a2a: mov     edx,0x1d
0x1401d0a2f: lea     rcx,[rbp+0x11d0]
0x1401d0a36: call    0x1400e2860
0x1401d0a3b: mov     edx,0x1a
0x1401d0a40: lea     rcx,[rbp+0x11d0]
0x1401d0a47: call    0x1400fcbe0
0x1401d0a4c: mov     BYTE PTR [rax],0x2e
0x1401d0a4f: mov     edx,0x1b
0x1401d0a54: lea     rcx,[rbp+0x11d0]
0x1401d0a5b: call    0x1400fcbe0
0x1401d0a60: mov     BYTE PTR [rax],0x2e
0x1401d0a63: mov     edx,0x1c
0x1401d0a68: lea     rcx,[rbp+0x11d0]
0x1401d0a6f: call    0x1400fcbe0
0x1401d0a74: mov     BYTE PTR [rax],0x2e
0x1401d0a77: xor     r9d,r9d
0x1401d0a7a: xor     r8d,r8d
0x1401d0a7d: lea     rdx,[rbp+0x11d0]
0x1401d0a84: lea     rcx,[rip+0x249bde5]        # 0x14266c870
0x1401d0a8b: call    0x140af3400
0x1401d0a90: nop     
0x1401d0a91: lea     rcx,[rbp+0x11d0]
0x1401d0a98: jmp     0x1401d0acf
0x1401d0a9a: lea     rdx,[rip+0x144f547]        # 0x14161ffe8 ; literal='No specific orders'
0x1401d0aa1: lea     rcx,[rbp+0x2dd0]
0x1401d0aa8: call    0x140069780
0x1401d0aad: nop     
0x1401d0aae: xor     r9d,r9d
0x1401d0ab1: xor     r8d,r8d
0x1401d0ab4: lea     rdx,[rbp+0x2dd0]
0x1401d0abb: lea     rcx,[rip+0x249bdae]        # 0x14266c870
0x1401d0ac2: call    0x140af3400
0x1401d0ac7: nop     
0x1401d0ac8: lea     rcx,[rbp+0x2dd0]
0x1401d0acf: call    0x140069460
0x1401d0ad4: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d0ad8: mov     edi,0x1
0x1401d0add: mov     rcx,QWORD PTR [rsp+0x78]
0x1401d0ae2: add     rcx,0x368
0x1401d0ae9: movsxd  rdx,r15d
0x1401d0aec: call    0x140070990
0x1401d0af1: test    BYTE PTR [rax],0x1
0x1401d0af4: jne     0x1401d0b89
0x1401d0afa: xor     r15b,r15b
0x1401d0afd: mov     eax,DWORD PTR [r14+0x1d0]
0x1401d0b04: cmp     eax,0xffffffff
0x1401d0b07: je      0x1401d0b13
0x1401d0b09: movzx   r15d,r15b
0x1401d0b0d: cmp     eax,DWORD PTR [rbx]
0x1401d0b0f: cmove   r15d,edi
0x1401d0b13: mov     r14d,r12d
0x1401d0b16: lea     r12,[rip+0x24a323b]        # 0x142673d58
0x1401d0b1d: mov     r13d,DWORD PTR [rbp-0x60]
0x1401d0b21: mov     edi,r13d
0x1401d0b24: mov     rbx,r12
0x1401d0b27: mov     esi,0x4
0x1401d0b2c: nop     DWORD PTR [rax+0x0]
0x1401d0b30: mov     r8d,edi
0x1401d0b33: mov     edx,r14d
0x1401d0b36: lea     rcx,[rip+0x249bd33]        # 0x14266c870
0x1401d0b3d: call    0x1400bc750
0x1401d0b42: xor     r8d,r8d
0x1401d0b45: lea     rcx,[rip+0x249bd24]        # 0x14266c870
0x1401d0b4c: test    r15b,r15b
0x1401d0b4f: je      0x1401d0b56
0x1401d0b51: mov     edx,DWORD PTR [rbx-0x30]
0x1401d0b54: jmp     0x1401d0b58
0x1401d0b56: mov     edx,DWORD PTR [rbx]
0x1401d0b58: call    0x140af4ba0
0x1401d0b5d: inc     edi
0x1401d0b5f: add     rbx,0xc
0x1401d0b63: sub     rsi,0x1
0x1401d0b67: jne     0x1401d0b30
0x1401d0b69: inc     r14d
0x1401d0b6c: add     r12,0x4
0x1401d0b70: lea     rax,[rip+0x24a31ed]        # 0x142673d64
0x1401d0b77: cmp     r12,rax
0x1401d0b7a: jl      0x1401d0b21
0x1401d0b7c: mov     r13d,DWORD PTR [rbp-0x28]
0x1401d0b80: mov     r12d,DWORD PTR [rsp+0x74]
0x1401d0b85: mov     r15d,DWORD PTR [rbp-0x58]
0x1401d0b89: add     r12d,0x3
0x1401d0b8d: mov     DWORD PTR [rsp+0x74],r12d
0x1401d0b92: lea     rcx,[rbp+0xfd0]
0x1401d0b99: call    0x140069460
0x1401d0b9e: inc     r15d
0x1401d0ba1: mov     DWORD PTR [rbp-0x58],r15d
0x1401d0ba5: cmp     r15d,DWORD PTR [rbp-0x20]
0x1401d0ba9: mov     r14,QWORD PTR [rbp+0x30]
0x1401d0bad: mov     rax,QWORD PTR [rbp+0x48]
0x1401d0bb1: jl      0x1401d0170
0x1401d0bb7: mov     edi,DWORD PTR [rsp+0x70]
0x1401d0bbb: mov     esi,DWORD PTR [rbp-0x68]
0x1401d0bbe: cmp     r14d,esi
0x1401d0bc1: jle     0x1401d0c30
0x1401d0bc3: lea     ebx,[rsi*2-0x1]
0x1401d0bca: add     ebx,esi
0x1401d0bcc: lea     rcx,[rbp+0x310]
0x1401d0bd3: call    0x1400bc990
0x1401d0bd8: lea     r9d,[r14-0x1]
0x1401d0bdc: mov     DWORD PTR [rsp+0x30],ebx
0x1401d0be0: mov     DWORD PTR [rsp+0x28],0x2
0x1401d0be8: mov     DWORD PTR [rsp+0x20],esi
0x1401d0bec: xor     r8d,r8d
0x1401d0bef: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d0bf4: mov     edx,DWORD PTR [rbx+0x3c8]
0x1401d0bfa: lea     rcx,[rbp+0x310]
0x1401d0c01: call    0x1400bc9b0
0x1401d0c06: lea     r9d,[rdi+0x1]
0x1401d0c0a: movzx   eax,BYTE PTR [rbx+0x3cc]
0x1401d0c11: lea     rcx,[rbp+0x310]
0x1401d0c18: mov     DWORD PTR [rsp+0x28],0x0
0x1401d0c20: mov     BYTE PTR [rsp+0x20],al
0x1401d0c24: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d0c28: mov     edx,DWORD PTR [rbp-0x38]
0x1401d0c2b: call    0x1414284b0
0x1401d0c30: mov     edx,DWORD PTR [rbp-0x48]
0x1401d0c33: lea     eax,[rdx-0x2]
0x1401d0c36: lea     ecx,[rdx-0x37]
0x1401d0c39: add     eax,ecx
0x1401d0c3b: cdq     
0x1401d0c3c: sub     eax,edx
0x1401d0c3e: sar     eax,1
0x1401d0c40: lea     r13d,[rax-0x9]
0x1401d0c44: mov     DWORD PTR [rbp-0x28],r13d
0x1401d0c48: add     eax,0x8
0x1401d0c4b: mov     DWORD PTR [rbp-0x60],eax
0x1401d0c4e: mov     ebx,DWORD PTR [rbp-0x70]
0x1401d0c51: add     ebx,0xfffffffc
0x1401d0c54: mov     DWORD PTR [rbp-0x58],ebx
0x1401d0c57: cmp     BYTE PTR [rbp-0x40],0x0
0x1401d0c5b: je      0x1401d0d49
0x1401d0c61: mov     r14d,r13d
0x1401d0c64: cmp     r13d,eax
0x1401d0c67: jg      0x1401d0ce5
0x1401d0c69: movsxd  r15,r13d
0x1401d0c6c: movsxd  r12,eax
0x1401d0c6f: mov     rsi,r15
0x1401d0c72: mov     r13d,ebx
0x1401d0c75: mov     edi,r13d
0x1401d0c78: lea     rbx,[rip+0x249d695]        # 0x14266e314
0x1401d0c7f: lea     r13,[rip+0x249d69a]        # 0x14266e320
0x1401d0c86: data16  nop WORD PTR [rax+rax*1+0x0]
0x1401d0c90: mov     r8d,r14d
0x1401d0c93: mov     edx,edi
0x1401d0c95: lea     rcx,[rip+0x249bbd4]        # 0x14266c870
0x1401d0c9c: call    0x1400bc750
0x1401d0ca1: cmp     rsi,r15
0x1401d0ca4: jne     0x1401d0cab
0x1401d0ca6: mov     edx,DWORD PTR [rbx-0x18]
0x1401d0ca9: jmp     0x1401d0cb7
0x1401d0cab: cmp     rsi,r12
0x1401d0cae: jne     0x1401d0cb4
0x1401d0cb0: mov     edx,DWORD PTR [rbx]
0x1401d0cb2: jmp     0x1401d0cb7
0x1401d0cb4: mov     edx,DWORD PTR [rbx-0xc]
0x1401d0cb7: lea     rcx,[rip+0x249bbb2]        # 0x14266c870
0x1401d0cbe: call    0x140af4570
0x1401d0cc3: inc     edi
0x1401d0cc5: add     rbx,0x4
0x1401d0cc9: cmp     rbx,r13
0x1401d0ccc: jl      0x1401d0c90
0x1401d0cce: inc     r14d
0x1401d0cd1: inc     rsi
0x1401d0cd4: cmp     r14d,DWORD PTR [rbp-0x60]
0x1401d0cd8: mov     r13d,DWORD PTR [rbp-0x58]
0x1401d0cdc: jle     0x1401d0c75
0x1401d0cde: mov     r13d,DWORD PTR [rbp-0x28]
0x1401d0ce2: mov     ebx,DWORD PTR [rbp-0x58]
0x1401d0ce5: xor     r8d,r8d
0x1401d0ce8: mov     edx,0x7
0x1401d0ced: mov     r9b,0x1
0x1401d0cf0: lea     rcx,[rip+0x249bb79]        # 0x14266c870
0x1401d0cf7: call    0x1400bc760
0x1401d0cfc: lea     r8d,[r13+0x2]
0x1401d0d00: lea     edx,[rbx+0x1]
0x1401d0d03: lea     rcx,[rip+0x249bb66]        # 0x14266c870
0x1401d0d0a: call    0x1400bc750
0x1401d0d0f: lea     rdx,[rip+0x144f582]        # 0x141620298 ; literal='Done assigning'
0x1401d0d16: lea     rcx,[rbp+0x2e10]
0x1401d0d1d: call    0x140069780
0x1401d0d22: nop     
0x1401d0d23: xor     r9d,r9d
0x1401d0d26: xor     r8d,r8d
0x1401d0d29: lea     rdx,[rbp+0x2e10]
0x1401d0d30: lea     rcx,[rip+0x249bb39]        # 0x14266c870
0x1401d0d37: call    0x140af3400
0x1401d0d3c: nop     
0x1401d0d3d: lea     rcx,[rbp+0x2e10]
0x1401d0d44: jmp     0x1401d0edf
0x1401d0d49: xor     r8d,r8d
0x1401d0d4c: mov     edx,0x7
0x1401d0d51: mov     r9b,0x1
0x1401d0d54: lea     rcx,[rip+0x249bb15]        # 0x14266c870
0x1401d0d5b: call    0x1400bc760
0x1401d0d60: lea     edx,[rbx+0x1]
0x1401d0d63: lea     rcx,[rip+0x249bb06]        # 0x14266c870
0x1401d0d6a: cmp     BYTE PTR [rbp-0x80],0x0
0x1401d0d6e: je      0x1401d0df6
0x1401d0d74: mov     r8d,r13d
0x1401d0d77: call    0x1400bc750
0x1401d0d7c: cmp     BYTE PTR [rbp-0x50],0x0
0x1401d0d80: je      0x1401d0dbc
0x1401d0d82: lea     rdx,[rip+0x144f51f]        # 0x1416202a8 ; literal='Choose a proposal.'
0x1401d0d89: lea     rcx,[rbp+0x2e30]
0x1401d0d90: call    0x140069780
0x1401d0d95: nop     
0x1401d0d96: xor     r9d,r9d
0x1401d0d99: xor     r8d,r8d
0x1401d0d9c: lea     rdx,[rbp+0x2e30]
0x1401d0da3: lea     rcx,[rip+0x249bac6]        # 0x14266c870
0x1401d0daa: call    0x140af3400
0x1401d0daf: nop     
0x1401d0db0: lea     rcx,[rbp+0x2e30]
0x1401d0db7: jmp     0x1401d0edf
0x1401d0dbc: lea     rdx,[rip+0x144f4fd]        # 0x1416202c0 ; literal='Assign messengers.'
0x1401d0dc3: lea     rcx,[rbp+0x2e50]
0x1401d0dca: call    0x140069780
0x1401d0dcf: nop     
0x1401d0dd0: xor     r9d,r9d
0x1401d0dd3: xor     r8d,r8d
0x1401d0dd6: lea     rdx,[rbp+0x2e50]
0x1401d0ddd: lea     rcx,[rip+0x249ba8c]        # 0x14266c870
0x1401d0de4: call    0x140af3400
0x1401d0de9: nop     
0x1401d0dea: lea     rcx,[rbp+0x2e50]
0x1401d0df1: jmp     0x1401d0edf
0x1401d0df6: cmp     BYTE PTR [rbp-0x50],0x0
0x1401d0dfa: je      0x1401d0e3e
0x1401d0dfc: mov     r8d,r13d
0x1401d0dff: call    0x1400bc750
0x1401d0e04: lea     rdx,[rip+0x144f49d]        # 0x1416202a8 ; literal='Choose a proposal.'
0x1401d0e0b: lea     rcx,[rbp+0x2e70]
0x1401d0e12: call    0x140069780
0x1401d0e17: nop     
0x1401d0e18: xor     r9d,r9d
0x1401d0e1b: xor     r8d,r8d
0x1401d0e1e: lea     rdx,[rbp+0x2e70]
0x1401d0e25: lea     rcx,[rip+0x249ba44]        # 0x14266c870
0x1401d0e2c: call    0x140af3400
0x1401d0e31: nop     
0x1401d0e32: lea     rcx,[rbp+0x2e70]
0x1401d0e39: jmp     0x1401d0edf
0x1401d0e3e: lea     r8d,[r13+0x2]
0x1401d0e42: call    0x1400bc750
0x1401d0e47: lea     rdx,[rip+0x144f48a]        # 0x1416202d8 ; literal='Assign squads.'
0x1401d0e4e: lea     rcx,[rbp+0x2e90]
0x1401d0e55: call    0x140069780
0x1401d0e5a: nop     
0x1401d0e5b: xor     r9d,r9d
0x1401d0e5e: xor     r8d,r8d
0x1401d0e61: lea     rdx,[rbp+0x2e90]
0x1401d0e68: lea     rcx,[rip+0x249ba01]        # 0x14266c870
0x1401d0e6f: call    0x140af3400
0x1401d0e74: nop     
0x1401d0e75: lea     rcx,[rbp+0x2e90]
0x1401d0e7c: jmp     0x1401d0edf
0x1401d0e7e: xor     r8d,r8d
0x1401d0e81: mov     edx,0x6
0x1401d0e86: mov     r9b,0x1
0x1401d0e89: lea     rcx,[rip+0x249b9e0]        # 0x14266c870
0x1401d0e90: call    0x1400bc760
0x1401d0e95: lea     r8d,[r13+0x2]
0x1401d0e99: mov     edx,0x1
0x1401d0e9e: lea     rcx,[rip+0x249b9cb]        # 0x14266c870
0x1401d0ea5: call    0x1400bc750
0x1401d0eaa: lea     rdx,[rip+0x144f3cf]        # 0x141620280 ; literal='No squads available'
0x1401d0eb1: lea     rcx,[rbp+0x2eb0]
0x1401d0eb8: call    0x140069780
0x1401d0ebd: nop     
0x1401d0ebe: xor     r9d,r9d
0x1401d0ec1: xor     r8d,r8d
0x1401d0ec4: lea     rdx,[rbp+0x2eb0]
0x1401d0ecb: lea     rcx,[rip+0x249b99e]        # 0x14266c870
0x1401d0ed2: call    0x140af3400
0x1401d0ed7: nop     
0x1401d0ed8: lea     rcx,[rbp+0x2eb0]
0x1401d0edf: call    0x140069460
0x1401d0ee4: nop     
0x1401d0ee5: lea     rcx,[rbp+0xd30]
0x1401d0eec: jmp     0x1401c8dce
0x1401d0ef1: cmp     BYTE PTR [r13+0x8308],0x0
0x1401d0ef9: je      0x1401d1144
0x1401d0eff: mov     ebx,DWORD PTR [rbp-0x18]
0x1401d0f02: mov     DWORD PTR [rbp-0x60],ebx
0x1401d0f05: lea     esi,[rbx-0x39]
0x1401d0f08: mov     r12d,0x14
0x1401d0f0e: mov     eax,DWORD PTR [rip+0x221ecf4]        # 0x1423efc08
0x1401d0f14: cmp     eax,0x2e
0x1401d0f17: jle     0x1401d0f32
0x1401d0f19: lea     r12d,[rax-0x1a]
0x1401d0f1d: cmp     r12d,0x1e
0x1401d0f21: jle     0x1401d0f32
0x1401d0f23: mov     r12d,0x1e
0x1401d0f29: mov     edi,ebx
0x1401d0f2b: xor     eax,eax
0x1401d0f2d: mov     r15d,eax
0x1401d0f30: jmp     0x1401d0f42
0x1401d0f32: mov     edi,ebx
0x1401d0f34: xor     eax,eax
0x1401d0f36: mov     r15d,eax
0x1401d0f39: test    r12d,r12d
0x1401d0f3c: js      0x1401d1011
0x1401d0f42: mov     r14,rax
0x1401d0f45: mov     ebx,esi
0x1401d0f47: cmp     esi,edi
0x1401d0f49: jg      0x1401d0fff
0x1401d0f4f: movsxd  r13,r12d
0x1401d0f52: mov     r8d,ebx
0x1401d0f55: mov     edx,r15d
0x1401d0f58: lea     rcx,[rip+0x249b911]        # 0x14266c870
0x1401d0f5f: call    0x1400bc750
0x1401d0f64: xor     r8d,r8d
0x1401d0f67: xor     edx,edx
0x1401d0f69: lea     rcx,[rip+0x249b900]        # 0x14266c870
0x1401d0f70: call    0x1400bc7c0
0x1401d0f75: test    r14,r14
0x1401d0f78: jne     0x1401d0fa1
0x1401d0f7a: cmp     ebx,esi
0x1401d0f7c: jne     0x1401d0f86
0x1401d0f7e: mov     edx,DWORD PTR [rip+0x249d210]        # 0x14266e194
0x1401d0f84: jmp     0x1401d0fe9
0x1401d0f86: lea     rcx,[rip+0x249b8e3]        # 0x14266c870
0x1401d0f8d: cmp     ebx,edi
0x1401d0f8f: jne     0x1401d0f99
0x1401d0f91: mov     edx,DWORD PTR [rip+0x249d215]        # 0x14266e1ac
0x1401d0f97: jmp     0x1401d0ff0
0x1401d0f99: mov     edx,DWORD PTR [rip+0x249d201]        # 0x14266e1a0
0x1401d0f9f: jmp     0x1401d0ff0
0x1401d0fa1: cmp     r14,r13
0x1401d0fa4: jne     0x1401d0fcd
0x1401d0fa6: cmp     ebx,esi
0x1401d0fa8: jne     0x1401d0fb2
0x1401d0faa: mov     edx,DWORD PTR [rip+0x249d1ec]        # 0x14266e19c
0x1401d0fb0: jmp     0x1401d0fe9
0x1401d0fb2: lea     rcx,[rip+0x249b8b7]        # 0x14266c870
0x1401d0fb9: cmp     ebx,edi
0x1401d0fbb: jne     0x1401d0fc5
0x1401d0fbd: mov     edx,DWORD PTR [rip+0x249d1f1]        # 0x14266e1b4
0x1401d0fc3: jmp     0x1401d0ff0
0x1401d0fc5: mov     edx,DWORD PTR [rip+0x249d1dd]        # 0x14266e1a8
0x1401d0fcb: jmp     0x1401d0ff0
0x1401d0fcd: cmp     ebx,esi
0x1401d0fcf: jne     0x1401d0fd9
0x1401d0fd1: mov     edx,DWORD PTR [rip+0x249d1c1]        # 0x14266e198
0x1401d0fd7: jmp     0x1401d0fe9
0x1401d0fd9: cmp     ebx,edi
0x1401d0fdb: mov     edx,DWORD PTR [rip+0x249d1cf]        # 0x14266e1b0
0x1401d0fe1: je      0x1401d0fe9
0x1401d0fe3: mov     edx,DWORD PTR [rip+0x249d1bb]        # 0x14266e1a4
0x1401d0fe9: lea     rcx,[rip+0x249b880]        # 0x14266c870
0x1401d0ff0: call    0x140af4570
0x1401d0ff5: inc     ebx
0x1401d0ff7: cmp     ebx,edi
0x1401d0ff9: jle     0x1401d0f52
0x1401d0fff: inc     r15d
0x1401d1002: inc     r14
0x1401d1005: cmp     r15d,r12d
0x1401d1008: jle     0x1401d0f45
0x1401d100e: mov     ebx,DWORD PTR [rbp-0x60]
0x1401d1011: lea     r15d,[rsi+0x2]
0x1401d1015: lea     r13d,[rbx-0x2]
0x1401d1019: dec     r12d
0x1401d101c: mov     DWORD PTR [rbp-0x60],r12d
0x1401d1020: mov     r14,QWORD PTR [rsp+0x78]
0x1401d1025: lea     rcx,[r14+0x8310]
0x1401d102c: call    0x140070480
0x1401d1031: mov     rdi,rax
0x1401d1034: cmp     eax,r12d
0x1401d1037: jle     0x1401d103d
0x1401d1039: lea     r13d,[rbx-0x4]
0x1401d103d: test    edi,edi
0x1401d103f: jle     0x1401d55db
0x1401d1045: xor     r8d,r8d
0x1401d1048: mov     edx,0x7
0x1401d104d: xor     r9d,r9d
0x1401d1050: lea     rcx,[rip+0x249b819]        # 0x14266c870
0x1401d1057: call    0x1400bc760
0x1401d105c: mov     eax,DWORD PTR [r14+0x8328]
0x1401d1063: mov     ecx,edi
0x1401d1065: sub     ecx,r12d
0x1401d1068: cmp     eax,ecx
0x1401d106a: cmovle  ecx,eax
0x1401d106d: xor     ebx,ebx
0x1401d106f: test    ecx,ecx
0x1401d1071: cmovns  ebx,ecx
0x1401d1074: lea     esi,[rbx+r12*1]
0x1401d1078: cmp     ebx,esi
0x1401d107a: jge     0x1401d10ca
0x1401d107c: mov     r12d,0x1
0x1401d1082: sub     r12d,ebx
0x1401d1085: cmp     ebx,edi
0x1401d1087: jge     0x1401d10c6
0x1401d1089: lea     edx,[rbx+r12*1]
0x1401d108d: mov     r8d,r15d
0x1401d1090: lea     rcx,[rip+0x249b7d9]        # 0x14266c870
0x1401d1097: call    0x1400bc750
0x1401d109c: movsxd  rdx,ebx
0x1401d109f: lea     rcx,[r14+0x8310]
0x1401d10a6: call    0x140070850
0x1401d10ab: xor     r9d,r9d
0x1401d10ae: xor     r8d,r8d
0x1401d10b1: mov     rdx,QWORD PTR [rax]
0x1401d10b4: lea     rcx,[rip+0x249b7b5]        # 0x14266c870
0x1401d10bb: call    0x140af3400
0x1401d10c0: inc     ebx
0x1401d10c2: cmp     ebx,esi
0x1401d10c4: jl      0x1401d1085
0x1401d10c6: mov     r12d,DWORD PTR [rbp-0x60]
0x1401d10ca: cmp     edi,r12d
0x1401d10cd: jle     0x1401c8dd3
0x1401d10d3: lea     ebx,[r12-0x1]
0x1401d10d8: lea     rcx,[rbp+0x2f0]
0x1401d10df: call    0x1400bc990
0x1401d10e4: lea     r9d,[rdi-0x1]
0x1401d10e8: mov     DWORD PTR [rsp+0x30],ebx
0x1401d10ec: mov     DWORD PTR [rsp+0x28],0x2
0x1401d10f4: mov     DWORD PTR [rsp+0x20],r12d
0x1401d10f9: xor     r8d,r8d
0x1401d10fc: mov     edx,DWORD PTR [r14+0x8328]
0x1401d1103: lea     rcx,[rbp+0x2f0]
0x1401d110a: call    0x1400bc9b0
0x1401d110f: lea     r9d,[r13+0x1]
0x1401d1113: mov     DWORD PTR [rsp+0x28],0x0
0x1401d111b: mov     r13,QWORD PTR [rsp+0x78]
0x1401d1120: movzx   eax,BYTE PTR [r13+0x832c]
0x1401d1128: mov     BYTE PTR [rsp+0x20],al
0x1401d112c: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d1130: mov     edx,DWORD PTR [rbp-0x38]
0x1401d1133: lea     rcx,[rbp+0x2f0]
0x1401d113a: call    0x1414284b0
0x1401d113f: jmp     0x1401c8dd8
0x1401d1144: cmp     BYTE PTR [rip+0x21e190a],0x0        # 0x1423b2a55
0x1401d114b: je      0x1401c8dd8
0x1401d1151: lea     r8,[rbp+0x20]
0x1401d1155: lea     rdx,[rbp+0xe0]
0x1401d115c: lea     rcx,[rip+0x249b70d]        # 0x14266c870
0x1401d1163: call    0x1400bc970
0x1401d1168: lea     r8,[rbp+0xdc]
0x1401d116f: lea     rdx,[rbp+0xd4]
0x1401d1176: lea     rcx,[rip+0x249b6f3]        # 0x14266c870
0x1401d117d: call    0x14014ec70
0x1401d1182: xor     edx,edx
0x1401d1184: lea     rcx,[rip+0x221ea65]        # 0x1423efbf0
0x1401d118b: call    0x1400735c0
0x1401d1190: test    al,al
0x1401d1192: je      0x1401d11d3
0x1401d1194: mov     rax,QWORD PTR [rip+0x249b74d]        # 0x14266c8e8
0x1401d119b: mov     ecx,DWORD PTR [rax+0x4]
0x1401d119e: mov     r8d,DWORD PTR [rax+0x8]
0x1401d11a2: sar     ecx,1
0x1401d11a4: mov     eax,DWORD PTR [rbp+0xd4]
0x1401d11aa: cdq     
0x1401d11ab: and     edx,0xf
0x1401d11ae: lea     r13d,[rdx+rax*1]
0x1401d11b2: sar     r13d,0x4
0x1401d11b6: sub     r13d,ecx
0x1401d11b9: sar     r8d,1
0x1401d11bc: mov     eax,DWORD PTR [rbp+0xdc]
0x1401d11c2: cdq     
0x1401d11c3: and     edx,0xf
0x1401d11c6: lea     r14d,[rdx+rax*1]
0x1401d11ca: sar     r14d,0x4
0x1401d11ce: sub     r14d,r8d
0x1401d11d1: jmp     0x1401d11f4
0x1401d11d3: mov     eax,DWORD PTR [rip+0x221ea2b]        # 0x1423efc04
0x1401d11d9: sar     eax,1
0x1401d11db: mov     r13d,DWORD PTR [rbp+0xe0]
0x1401d11e2: sub     r13d,eax
0x1401d11e5: mov     eax,DWORD PTR [rip+0x221ea1d]        # 0x1423efc08
0x1401d11eb: sar     eax,1
0x1401d11ed: mov     r14d,DWORD PTR [rbp+0x20]
0x1401d11f1: sub     r14d,eax
0x1401d11f4: mov     rcx,QWORD PTR [rsp+0x78]
0x1401d11f9: add     r13d,DWORD PTR [rcx+0x198]
0x1401d1200: add     r14d,DWORD PTR [rcx+0x19c]
0x1401d1207: mov     DWORD PTR [rsp+0x74],r14d
0x1401d120c: mov     DWORD PTR [rbp-0x68],r13d
0x1401d1210: test    r13d,r13d
0x1401d1213: js      0x1401c8dd3
0x1401d1219: mov     rax,QWORD PTR [rip+0x233cdb8]        # 0x14250dfd8
0x1401d1220: cmp     r13d,DWORD PTR [rax+0xa0]
0x1401d1227: jge     0x1401c8dd3
0x1401d122d: test    r14d,r14d
0x1401d1230: js      0x1401c8dd3
0x1401d1236: cmp     r14d,DWORD PTR [rax+0xa4]
0x1401d123d: jge     0x1401c8dd3
0x1401d1243: mov     r8d,r14d
0x1401d1246: mov     edx,r13d
0x1401d1249: call    0x1401db620
0x1401d124e: mov     ebx,DWORD PTR [rbp-0x18]
0x1401d1251: mov     DWORD PTR [rbp-0x6c],ebx
0x1401d1254: lea     eax,[rbx-0x37]
0x1401d1257: mov     DWORD PTR [rbp-0x70],eax
0x1401d125a: lea     esi,[rax-0x2]
0x1401d125d: mov     r12d,0x14
0x1401d1263: mov     eax,DWORD PTR [rip+0x221e99f]        # 0x1423efc08
0x1401d1269: cmp     eax,0x2e
0x1401d126c: jle     0x1401d1287
0x1401d126e: lea     r12d,[rax-0x1a]
0x1401d1272: cmp     r12d,0x1e
0x1401d1276: jle     0x1401d1287
0x1401d1278: mov     r12d,0x1e
0x1401d127e: mov     edi,ebx
0x1401d1280: xor     eax,eax
0x1401d1282: mov     r15d,eax
0x1401d1285: jmp     0x1401d1297
0x1401d1287: mov     edi,ebx
0x1401d1289: xor     eax,eax
0x1401d128b: mov     r15d,eax
0x1401d128e: test    r12d,r12d
0x1401d1291: js      0x1401d1378
0x1401d1297: mov     r14,rax
0x1401d129a: nop     WORD PTR [rax+rax*1+0x0]
0x1401d12a0: mov     ebx,esi
0x1401d12a2: cmp     esi,edi
0x1401d12a4: jg      0x1401d135d
0x1401d12aa: movsxd  r13,r12d
0x1401d12ad: nop     DWORD PTR [rax]
0x1401d12b0: mov     r8d,ebx
0x1401d12b3: mov     edx,r15d
0x1401d12b6: lea     rcx,[rip+0x249b5b3]        # 0x14266c870
0x1401d12bd: call    0x1400bc750
0x1401d12c2: xor     r8d,r8d
0x1401d12c5: xor     edx,edx
0x1401d12c7: lea     rcx,[rip+0x249b5a2]        # 0x14266c870
0x1401d12ce: call    0x1400bc7c0
0x1401d12d3: test    r14,r14
0x1401d12d6: jne     0x1401d12ff
0x1401d12d8: cmp     ebx,esi
0x1401d12da: jne     0x1401d12e4
0x1401d12dc: mov     edx,DWORD PTR [rip+0x249ceb2]        # 0x14266e194
0x1401d12e2: jmp     0x1401d1347
0x1401d12e4: lea     rcx,[rip+0x249b585]        # 0x14266c870
0x1401d12eb: cmp     ebx,edi
0x1401d12ed: jne     0x1401d12f7
0x1401d12ef: mov     edx,DWORD PTR [rip+0x249ceb7]        # 0x14266e1ac
0x1401d12f5: jmp     0x1401d134e
0x1401d12f7: mov     edx,DWORD PTR [rip+0x249cea3]        # 0x14266e1a0
0x1401d12fd: jmp     0x1401d134e
0x1401d12ff: cmp     r14,r13
0x1401d1302: jne     0x1401d132b
0x1401d1304: cmp     ebx,esi
0x1401d1306: jne     0x1401d1310
0x1401d1308: mov     edx,DWORD PTR [rip+0x249ce8e]        # 0x14266e19c
0x1401d130e: jmp     0x1401d1347
0x1401d1310: lea     rcx,[rip+0x249b559]        # 0x14266c870
0x1401d1317: cmp     ebx,edi
0x1401d1319: jne     0x1401d1323
0x1401d131b: mov     edx,DWORD PTR [rip+0x249ce93]        # 0x14266e1b4
0x1401d1321: jmp     0x1401d134e
0x1401d1323: mov     edx,DWORD PTR [rip+0x249ce7f]        # 0x14266e1a8
0x1401d1329: jmp     0x1401d134e
0x1401d132b: cmp     ebx,esi
0x1401d132d: jne     0x1401d1337
0x1401d132f: mov     edx,DWORD PTR [rip+0x249ce63]        # 0x14266e198
0x1401d1335: jmp     0x1401d1347
0x1401d1337: cmp     ebx,edi
0x1401d1339: mov     edx,DWORD PTR [rip+0x249ce71]        # 0x14266e1b0
0x1401d133f: je      0x1401d1347
0x1401d1341: mov     edx,DWORD PTR [rip+0x249ce5d]        # 0x14266e1a4
0x1401d1347: lea     rcx,[rip+0x249b522]        # 0x14266c870
0x1401d134e: call    0x140af4570
0x1401d1353: inc     ebx
0x1401d1355: cmp     ebx,edi
0x1401d1357: jle     0x1401d12b0
0x1401d135d: inc     r15d
0x1401d1360: inc     r14
0x1401d1363: cmp     r15d,r12d
0x1401d1366: jle     0x1401d12a0
0x1401d136c: mov     r14d,DWORD PTR [rsp+0x74]
0x1401d1371: mov     r13d,DWORD PTR [rbp-0x68]
0x1401d1375: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401d1378: xor     r8d,r8d
0x1401d137b: mov     edx,0x7
0x1401d1380: mov     r9b,0x1
0x1401d1383: lea     rcx,[rip+0x249b4e6]        # 0x14266c870
0x1401d138a: call    0x1400bc760
0x1401d138f: mov     edi,0x1
0x1401d1394: mov     DWORD PTR [rbp-0x48],edi
0x1401d1397: lea     rcx,[rbp+0x11f0]
0x1401d139e: call    0x140070cc0
0x1401d13a3: nop     
0x1401d13a4: mov     r15d,DWORD PTR [rbp-0x70]
0x1401d13a8: mov     r8d,r15d
0x1401d13ab: mov     edx,edi
0x1401d13ad: lea     rcx,[rip+0x249b4bc]        # 0x14266c870
0x1401d13b4: call    0x1400bc750
0x1401d13b9: mov     r8d,r14d
0x1401d13bc: mov     edx,r13d
0x1401d13bf: mov     rcx,QWORD PTR [rip+0x233cc12]        # 0x14250dfd8
0x1401d13c6: call    0x1401bea60
0x1401d13cb: test    rax,rax
0x1401d13ce: je      0x1401d1485
0x1401d13d4: xor     r9d,r9d
0x1401d13d7: movzx   r8d,dil
0x1401d13db: lea     rdx,[rbp+0x11f0]
0x1401d13e2: mov     rcx,rax
0x1401d13e5: call    0x140aae180
0x1401d13ea: sub     ebx,esi
0x1401d13ec: lea     rcx,[rbp+0x11f0]
0x1401d13f3: call    0x140070960
0x1401d13f8: lea     ecx,[rbx-0x7]
0x1401d13fb: movsxd  rdx,ecx
0x1401d13fe: cmp     rax,rdx
0x1401d1401: jb      0x1401d146a
0x1401d1403: lea     edi,[rbx-0x8]
0x1401d1406: test    edi,edi
0x1401d1408: js      0x1401d1420
0x1401d140a: movsxd  rdx,ebx
0x1401d140d: sub     rdx,0x8
0x1401d1411: xor     r8d,r8d
0x1401d1414: lea     rcx,[rbp+0x11f0]
0x1401d141b: call    0x1400e2860
0x1401d1420: cmp     edi,0x3
0x1401d1423: jle     0x1401d1465
0x1401d1425: movsxd  rdx,ebx
0x1401d1428: sub     rdx,0xb
0x1401d142c: lea     rcx,[rbp+0x11f0]
0x1401d1433: call    0x1400fcbe0
0x1401d1438: mov     BYTE PTR [rax],0x2e
0x1401d143b: lea     eax,[rbx-0xa]
0x1401d143e: movsxd  rdx,eax
0x1401d1441: lea     rcx,[rbp+0x11f0]
0x1401d1448: call    0x1400fcbe0
0x1401d144d: mov     BYTE PTR [rax],0x2e
0x1401d1450: lea     eax,[rbx-0x9]
0x1401d1453: movsxd  rdx,eax
0x1401d1456: lea     rcx,[rbp+0x11f0]
0x1401d145d: call    0x1400fcbe0
0x1401d1462: mov     BYTE PTR [rax],0x2e
0x1401d1465: mov     edi,0x1
0x1401d146a: xor     r9d,r9d
0x1401d146d: xor     r8d,r8d
0x1401d1470: lea     rdx,[rbp+0x11f0]
0x1401d1477: lea     rcx,[rip+0x249b3f2]        # 0x14266c870
0x1401d147e: call    0x140af3400
0x1401d1483: jmp     0x1401d148a
0x1401d1485: xor     edi,edi
0x1401d1487: mov     DWORD PTR [rbp-0x48],edi
0x1401d148a: lea     rcx,[rbp+0x11f0]
0x1401d1491: call    0x140069460
0x1401d1496: lea     rcx,[rbp+0x1210]
0x1401d149d: call    0x140070cc0
0x1401d14a2: nop     
0x1401d14a3: lea     edx,[rdi+0x1]
0x1401d14a6: mov     r8d,r15d
0x1401d14a9: lea     rcx,[rip+0x249b3c0]        # 0x14266c870
0x1401d14b0: call    0x1400bc750
0x1401d14b5: mov     r8d,r14d
0x1401d14b8: mov     edx,r13d
0x1401d14bb: mov     rcx,QWORD PTR [rip+0x233cb16]        # 0x14250dfd8
0x1401d14c2: call    0x1401be9f0
0x1401d14c7: test    rax,rax
0x1401d14ca: je      0x1401d1580
0x1401d14d0: xor     r9d,r9d
0x1401d14d3: mov     r8b,0x1
0x1401d14d6: lea     rdx,[rbp+0x1210]
0x1401d14dd: mov     rcx,rax
0x1401d14e0: call    0x140aae180
0x1401d14e5: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401d14e8: sub     ebx,esi
0x1401d14ea: lea     rcx,[rbp+0x1210]
0x1401d14f1: call    0x140070960
0x1401d14f6: lea     ecx,[rbx-0x7]
0x1401d14f9: movsxd  rdx,ecx
0x1401d14fc: cmp     rax,rdx
0x1401d14ff: jb      0x1401d1566
0x1401d1501: lea     edi,[rbx-0x8]
0x1401d1504: test    edi,edi
0x1401d1506: js      0x1401d151e
0x1401d1508: movsxd  rdx,ebx
0x1401d150b: sub     rdx,0x8
0x1401d150f: xor     r8d,r8d
0x1401d1512: lea     rcx,[rbp+0x1210]
0x1401d1519: call    0x1400e2860
0x1401d151e: cmp     edi,0x3
0x1401d1521: jle     0x1401d1563
0x1401d1523: movsxd  rdx,ebx
0x1401d1526: sub     rdx,0xb
0x1401d152a: lea     rcx,[rbp+0x1210]
0x1401d1531: call    0x1400fcbe0
0x1401d1536: mov     BYTE PTR [rax],0x2e
0x1401d1539: lea     eax,[rbx-0xa]
0x1401d153c: movsxd  rdx,eax
0x1401d153f: lea     rcx,[rbp+0x1210]
0x1401d1546: call    0x1400fcbe0
0x1401d154b: mov     BYTE PTR [rax],0x2e
0x1401d154e: lea     eax,[rbx-0x9]
0x1401d1551: movsxd  rdx,eax
0x1401d1554: lea     rcx,[rbp+0x1210]
0x1401d155b: call    0x1400fcbe0
0x1401d1560: mov     BYTE PTR [rax],0x2e
0x1401d1563: mov     edi,DWORD PTR [rbp-0x48]
0x1401d1566: xor     r9d,r9d
0x1401d1569: xor     r8d,r8d
0x1401d156c: lea     rdx,[rbp+0x1210]
0x1401d1573: lea     rcx,[rip+0x249b2f6]        # 0x14266c870
0x1401d157a: call    0x140af3400
0x1401d157f: nop     
0x1401d1580: lea     rcx,[rbp+0x1210]
0x1401d1587: call    0x140069460
0x1401d158c: mov     rcx,QWORD PTR [rip+0x21eb0dd]        # 0x1423bc670
0x1401d1593: movsx   eax,WORD PTR [rcx+0x82]
0x1401d159a: cmp     r13d,eax
0x1401d159d: jne     0x1401d15af
0x1401d159f: movsx   eax,WORD PTR [rcx+0x84]
0x1401d15a6: cmp     r14d,eax
0x1401d15a9: je      0x1401d16a3
0x1401d15af: cmp     edi,0x1
0x1401d15b2: jne     0x1401d16a3
0x1401d15b8: lea     rcx,[rbp+0xf30]
0x1401d15bf: call    0x140070cc0
0x1401d15c4: nop     
0x1401d15c5: movzx   r8d,r14w
0x1401d15c9: movzx   edx,r13w
0x1401d15cd: mov     rcx,QWORD PTR [rip+0x233ca04]        # 0x14250dfd8
0x1401d15d4: call    0x1401bead0
0x1401d15d9: mov     ecx,eax
0x1401d15db: cmp     eax,0x12
0x1401d15de: jl      0x1401d1613
0x1401d15e0: mov     eax,0x38e38e39
0x1401d15e5: imul    ecx
0x1401d15e7: mov     ecx,edx
0x1401d15e9: sar     ecx,1
0x1401d15eb: mov     eax,ecx
0x1401d15ed: shr     eax,0x1f
0x1401d15f0: add     ecx,eax
0x1401d15f2: lea     rdx,[rbp+0xf30]
0x1401d15f9: call    0x140547840
0x1401d15fe: lea     rcx,[rbp+0xf30]
0x1401d1605: call    0x140546b30
0x1401d160a: lea     rdx,[rip+0x144dde7]        # 0x14161f3f8 ; literal=" days' travel"
0x1401d1611: jmp     0x1401d165d
0x1401d1613: cmp     ecx,0xb
0x1401d1616: jl      0x1401d1621
0x1401d1618: lea     rdx,[rip+0x144dde9]        # 0x14161f408 ; literal="More than a day's travel"
0x1401d161f: jmp     0x1401d165d
0x1401d1621: cmp     ecx,0x8
0x1401d1624: jl      0x1401d162f
0x1401d1626: lea     rdx,[rip+0x144ddfb]        # 0x14161f428 ; literal="A day's travel"
0x1401d162d: jmp     0x1401d165d
0x1401d162f: cmp     ecx,0x6
0x1401d1632: jl      0x1401d163d
0x1401d1634: lea     rdx,[rip+0x144ddfd]        # 0x14161f438 ; literal="Nearly a day's travel"
0x1401d163b: jmp     0x1401d165d
0x1401d163d: cmp     ecx,0x3
0x1401d1640: jl      0x1401d164b
0x1401d1642: lea     rdx,[rip+0x144de07]        # 0x14161f450 ; literal="A half day's travel"
0x1401d1649: jmp     0x1401d165d
0x1401d164b: test    ecx,ecx
0x1401d164d: lea     rdx,[rip+0x144de14]        # 0x14161f468 ; literal='A short trip'
0x1401d1654: jns     0x1401d165d
0x1401d1656: lea     rdx,[rip+0x144de1b]        # 0x14161f478 ; literal='Inaccessible from your location'
0x1401d165d: lea     rcx,[rbp+0xf30]
0x1401d1664: call    0x140070b90
0x1401d1669: mov     r8d,r15d
0x1401d166c: mov     edx,0x3
0x1401d1671: lea     rcx,[rip+0x249b1f8]        # 0x14266c870
0x1401d1678: call    0x1400bc750
0x1401d167d: xor     r9d,r9d
0x1401d1680: xor     r8d,r8d
0x1401d1683: lea     rdx,[rbp+0xf30]
0x1401d168a: lea     rcx,[rip+0x249b1df]        # 0x14266c870
0x1401d1691: call    0x140af3400
0x1401d1696: nop     
0x1401d1697: lea     rcx,[rbp+0xf30]
0x1401d169e: call    0x140069460
0x1401d16a3: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d16a8: cmp     QWORD PTR [rbx+0x1d8],0x0
0x1401d16b0: je      0x1401d27b7
0x1401d16b6: lea     rdx,[rip+0x143757f]        # 0x141608c3c ; literal='The '
0x1401d16bd: lea     rcx,[rbp+0xe70]
0x1401d16c4: call    0x140069780
0x1401d16c9: nop     
0x1401d16ca: mov     r8d,r15d
0x1401d16cd: mov     edx,0x5
0x1401d16d2: lea     rcx,[rip+0x249b197]        # 0x14266c870
0x1401d16d9: call    0x1400bc750
0x1401d16de: lea     rcx,[rbp+0x1270]
0x1401d16e5: call    0x140070cc0
0x1401d16ea: nop     
0x1401d16eb: lea     rdx,[rbp+0x1270]
0x1401d16f2: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d16f9: call    0x1410e4720
0x1401d16fe: lea     rcx,[rbp+0x1270]
0x1401d1705: call    0x140070b50
0x1401d170a: test    al,al
0x1401d170c: jne     0x1401d172f
0x1401d170e: lea     rdx,[rbp+0x1270]
0x1401d1715: lea     rcx,[rbp+0xe70]
0x1401d171c: call    0x1400bb340
0x1401d1721: mov     dl,0x20
0x1401d1723: lea     rcx,[rbp+0xe70]
0x1401d172a: call    0x1400bb360
0x1401d172f: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d1736: call    0x14109aed0
0x1401d173b: mov     rdi,rax
0x1401d173e: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d1745: call    0x1409ce920
0x1401d174a: mov     r15,rax
0x1401d174d: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d1754: cmp     WORD PTR [rcx+0x80],0xa
0x1401d175c: je      0x1401d17c7
0x1401d175e: test    rdi,rdi
0x1401d1761: je      0x1401d17c7
0x1401d1763: mov     ecx,DWORD PTR [rdi+0x9c]
0x1401d1769: shr     ecx,0xa
0x1401d176c: not     ecx
0x1401d176e: test    cl,0x1
0x1401d1771: je      0x1401d17c7
0x1401d1773: lea     rcx,[rbp+0x1590]
0x1401d177a: call    0x140070cc0
0x1401d177f: nop     
0x1401d1780: mov     r8d,0xffffffff
0x1401d1786: lea     rdx,[rbp+0x1590]
0x1401d178d: movzx   ecx,WORD PTR [rdi+0x98]
0x1401d1794: call    0x140abd210
0x1401d1799: lea     rdx,[rbp+0x1590]
0x1401d17a0: lea     rcx,[rbp+0xe70]
0x1401d17a7: call    0x1400bb340
0x1401d17ac: mov     dl,0x20
0x1401d17ae: lea     rcx,[rbp+0xe70]
0x1401d17b5: call    0x1400bb360
0x1401d17ba: nop     
0x1401d17bb: lea     rcx,[rbp+0x1590]
0x1401d17c2: call    0x140069460
0x1401d17c7: lea     rdx,[rbp+0x1270]
0x1401d17ce: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d17d5: call    0x1410e4760
0x1401d17da: lea     rdx,[rbp+0x1270]
0x1401d17e1: lea     rcx,[rbp+0xe70]
0x1401d17e8: call    0x1400bb340
0x1401d17ed: lea     rdx,[rip+0x1434fbc]        # 0x1416067b0 ; literal=' of '
0x1401d17f4: lea     rcx,[rbp+0xe70]
0x1401d17fb: call    0x140070b90
0x1401d1800: xor     r9d,r9d
0x1401d1803: mov     r8b,0x1
0x1401d1806: lea     rdx,[rbp+0x1270]
0x1401d180d: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d1814: call    0x140aae180
0x1401d1819: lea     rdx,[rbp+0x1270]
0x1401d1820: lea     rcx,[rbp+0xe70]
0x1401d1827: call    0x1400bb340
0x1401d182c: lea     rcx,[rbp+0xe70]
0x1401d1833: call    0x1405468a0
0x1401d1838: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401d183b: sub     ebx,esi
0x1401d183d: lea     rcx,[rbp+0xe70]
0x1401d1844: call    0x140070960
0x1401d1849: lea     ecx,[rbx-0x7]
0x1401d184c: movsxd  rdx,ecx
0x1401d184f: cmp     rax,rdx
0x1401d1852: jb      0x1401d18b9
0x1401d1854: lea     eax,[rbx-0x8]
0x1401d1857: test    eax,eax
0x1401d1859: js      0x1401d1874
0x1401d185b: movsxd  rdx,ebx
0x1401d185e: sub     rdx,0x8
0x1401d1862: xor     r8d,r8d
0x1401d1865: lea     rcx,[rbp+0xe70]
0x1401d186c: call    0x1400e2860
0x1401d1871: lea     eax,[rbx-0x8]
0x1401d1874: cmp     eax,0x3
0x1401d1877: jle     0x1401d18b9
0x1401d1879: movsxd  rdx,ebx
0x1401d187c: sub     rdx,0xb
0x1401d1880: lea     rcx,[rbp+0xe70]
0x1401d1887: call    0x1400fcbe0
0x1401d188c: mov     BYTE PTR [rax],0x2e
0x1401d188f: lea     eax,[rbx-0xa]
0x1401d1892: movsxd  rdx,eax
0x1401d1895: lea     rcx,[rbp+0xe70]
0x1401d189c: call    0x1400fcbe0
0x1401d18a1: mov     BYTE PTR [rax],0x2e
0x1401d18a4: lea     eax,[rbx-0x9]
0x1401d18a7: movsxd  rdx,eax
0x1401d18aa: lea     rcx,[rbp+0xe70]
0x1401d18b1: call    0x1400fcbe0
0x1401d18b6: mov     BYTE PTR [rax],0x2e
0x1401d18b9: xor     r9d,r9d
0x1401d18bc: xor     r8d,r8d
0x1401d18bf: lea     rdx,[rbp+0xe70]
0x1401d18c6: lea     rcx,[rip+0x249afa3]        # 0x14266c870
0x1401d18cd: call    0x140af3400
0x1401d18d2: mov     rax,QWORD PTR [rip+0x21ead97]        # 0x1423bc670
0x1401d18d9: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d18de: mov     r8d,DWORD PTR [rbp-0x70]
0x1401d18e2: mov     edx,0x6
0x1401d18e7: lea     rcx,[rip+0x249af82]        # 0x14266c870
0x1401d18ee: cmp     QWORD PTR [rbx+0x1d8],rax
0x1401d18f5: jne     0x1401d1944
0x1401d18f7: call    0x1400bc750
0x1401d18fc: lea     rdx,[rip+0x144dde5]        # 0x14161f6e8 ; literal='Your location'
0x1401d1903: lea     rcx,[rbp+0x2ef0]
0x1401d190a: call    0x140069780
0x1401d190f: nop     
0x1401d1910: xor     r9d,r9d
0x1401d1913: xor     r8d,r8d
0x1401d1916: lea     rdx,[rbp+0x2ef0]
0x1401d191d: lea     rcx,[rip+0x249af4c]        # 0x14266c870
0x1401d1924: call    0x140af3400
0x1401d1929: nop     
0x1401d192a: lea     rcx,[rbp+0x2ef0]
0x1401d1931: call    0x140069460
0x1401d1936: test    r15,r15
0x1401d1939: je      0x1401d21c6
0x1401d193f: jmp     0x1401d2073
0x1401d1944: call    0x1400bc750
0x1401d1949: test    r15,r15
0x1401d194c: je      0x1401d2189
0x1401d1952: mov     rcx,QWORD PTR [rbx+0x1d8]
0x1401d1959: add     rcx,0x90
0x1401d1960: call    0x1400709a0
0x1401d1965: mov     rbx,rax
0x1401d1968: mov     rax,QWORD PTR [rsp+0x78]
0x1401d196d: mov     rcx,QWORD PTR [rax+0x1d8]
0x1401d1974: add     rcx,0xd8
0x1401d197b: lea     rdx,[rbp+0x60]
0x1401d197f: call    0x140070870
0x1401d1984: mov     rax,QWORD PTR [rsp+0x78]
0x1401d1989: mov     rcx,QWORD PTR [rax+0x1d8]
0x1401d1990: add     rcx,0xd8
0x1401d1997: lea     rdx,[rbp+0x180]
0x1401d199e: call    0x140070860
0x1401d19a3: lea     r8,[rbp+0x180]
0x1401d19aa: lea     rdx,[rbp+0x12]
0x1401d19ae: lea     rcx,[rbp+0x60]
0x1401d19b2: call    0x140070450
0x1401d19b7: xor     edx,edx
0x1401d19b9: movzx   ecx,BYTE PTR [rax]
0x1401d19bc: call    0x140066de0
0x1401d19c1: test    al,al
0x1401d19c3: je      0x1401d1a21
0x1401d19c5: lea     rcx,[rbp+0x60]
0x1401d19c9: call    0x140070440
0x1401d19ce: mov     rcx,QWORD PTR [rax]
0x1401d19d1: cmp     DWORD PTR [rcx],0x0
0x1401d19d4: jle     0x1401d19f6
0x1401d19d6: lea     rcx,[rbp+0x60]
0x1401d19da: call    0x140070440
0x1401d19df: mov     rcx,QWORD PTR [rax]
0x1401d19e2: cmp     DWORD PTR [rcx+0x18],0xffffffff
0x1401d19e6: jne     0x1401d19f6
0x1401d19e8: lea     rcx,[rbp+0x60]
0x1401d19ec: call    0x140070440
0x1401d19f1: mov     rcx,QWORD PTR [rax]
0x1401d19f4: add     ebx,DWORD PTR [rcx]
0x1401d19f6: lea     rcx,[rbp+0x60]
0x1401d19fa: call    0x140070430
0x1401d19ff: lea     r8,[rbp+0x180]
0x1401d1a06: lea     rdx,[rbp+0x12]
0x1401d1a0a: lea     rcx,[rbp+0x60]
0x1401d1a0e: call    0x140070450
0x1401d1a13: xor     edx,edx
0x1401d1a15: movzx   ecx,BYTE PTR [rax]
0x1401d1a18: call    0x140066de0
0x1401d1a1d: test    al,al
0x1401d1a1f: jne     0x1401d19c5
0x1401d1a21: cmp     ebx,0x30d4
0x1401d1a27: jl      0x1401d1a66
0x1401d1a29: lea     rdx,[rip+0x144dcc8]        # 0x14161f6f8 ; literal='Population: >10000'
0x1401d1a30: lea     rcx,[rbp+0x2f10]
0x1401d1a37: call    0x140069780
0x1401d1a3c: nop     
0x1401d1a3d: mov     r9d,0x35
0x1401d1a43: xor     r8d,r8d
0x1401d1a46: lea     rdx,[rbp+0x2f10]
0x1401d1a4d: lea     rcx,[rip+0x249ae1c]        # 0x14266c870
0x1401d1a54: call    0x140af3400
0x1401d1a59: nop     
0x1401d1a5a: lea     rcx,[rbp+0x2f10]
0x1401d1a61: jmp     0x1401d206e
0x1401d1a66: cmp     ebx,0x2134
0x1401d1a6c: jl      0x1401d1aab
0x1401d1a6e: lea     rdx,[rip+0x144dc9b]        # 0x14161f710 ; literal='Population: ~10000'
0x1401d1a75: lea     rcx,[rbp+0x2f30]
0x1401d1a7c: call    0x140069780
0x1401d1a81: nop     
0x1401d1a82: mov     r9d,0x35
0x1401d1a88: xor     r8d,r8d
0x1401d1a8b: lea     rdx,[rbp+0x2f30]
0x1401d1a92: lea     rcx,[rip+0x249add7]        # 0x14266c870
0x1401d1a99: call    0x140af3400
0x1401d1a9e: nop     
0x1401d1a9f: lea     rcx,[rbp+0x2f30]
0x1401d1aa6: jmp     0x1401d206e
0x1401d1aab: cmp     ebx,0x1964
0x1401d1ab1: jl      0x1401d1af0
0x1401d1ab3: lea     rdx,[rip+0x144dc6e]        # 0x14161f728 ; literal='Population: ~7500'
0x1401d1aba: lea     rcx,[rbp+0x2f50]
0x1401d1ac1: call    0x140069780
0x1401d1ac6: nop     
0x1401d1ac7: mov     r9d,0x35
0x1401d1acd: xor     r8d,r8d
0x1401d1ad0: lea     rdx,[rbp+0x2f50]
0x1401d1ad7: lea     rcx,[rip+0x249ad92]        # 0x14266c870
0x1401d1ade: call    0x140af3400
0x1401d1ae3: nop     
0x1401d1ae4: lea     rcx,[rbp+0x2f50]
0x1401d1aeb: jmp     0x1401d206e
0x1401d1af0: cmp     ebx,0x157c
0x1401d1af6: jl      0x1401d1b35
0x1401d1af8: lea     rdx,[rip+0x144dc41]        # 0x14161f740 ; literal='Population: ~6000'
0x1401d1aff: lea     rcx,[rbp+0x2f70]
0x1401d1b06: call    0x140069780
0x1401d1b0b: nop     
0x1401d1b0c: mov     r9d,0x35
0x1401d1b12: xor     r8d,r8d
0x1401d1b15: lea     rdx,[rbp+0x2f70]
0x1401d1b1c: lea     rcx,[rip+0x249ad4d]        # 0x14266c870
0x1401d1b23: call    0x140af3400
0x1401d1b28: nop     
0x1401d1b29: lea     rcx,[rbp+0x2f70]
0x1401d1b30: jmp     0x1401d206e
0x1401d1b35: cmp     ebx,0x1194
0x1401d1b3b: jl      0x1401d1b7a
0x1401d1b3d: lea     rdx,[rip+0x144dc14]        # 0x14161f758 ; literal='Population: ~5000'
0x1401d1b44: lea     rcx,[rbp+0x2f90]
0x1401d1b4b: call    0x140069780
0x1401d1b50: nop     
0x1401d1b51: mov     r9d,0x35
0x1401d1b57: xor     r8d,r8d
0x1401d1b5a: lea     rdx,[rbp+0x2f90]
0x1401d1b61: lea     rcx,[rip+0x249ad08]        # 0x14266c870
0x1401d1b68: call    0x140af3400
0x1401d1b6d: nop     
0x1401d1b6e: lea     rcx,[rbp+0x2f90]
0x1401d1b75: jmp     0x1401d206e
0x1401d1b7a: cmp     ebx,0xdac
0x1401d1b80: jl      0x1401d1bbf
0x1401d1b82: lea     rdx,[rip+0x144dbe7]        # 0x14161f770 ; literal='Population: ~4000'
0x1401d1b89: lea     rcx,[rbp+0x2fb0]
0x1401d1b90: call    0x140069780
0x1401d1b95: nop     
0x1401d1b96: mov     r9d,0x35
0x1401d1b9c: xor     r8d,r8d
0x1401d1b9f: lea     rdx,[rbp+0x2fb0]
0x1401d1ba6: lea     rcx,[rip+0x249acc3]        # 0x14266c870
0x1401d1bad: call    0x140af3400
0x1401d1bb2: nop     
0x1401d1bb3: lea     rcx,[rbp+0x2fb0]
0x1401d1bba: jmp     0x1401d206e
0x1401d1bbf: cmp     ebx,0x9c4
0x1401d1bc5: jl      0x1401d1c04
0x1401d1bc7: lea     rdx,[rip+0x144dbba]        # 0x14161f788 ; literal='Population: ~3000'
0x1401d1bce: lea     rcx,[rbp+0x2fd0]
0x1401d1bd5: call    0x140069780
0x1401d1bda: nop     
0x1401d1bdb: mov     r9d,0x35
0x1401d1be1: xor     r8d,r8d
0x1401d1be4: lea     rdx,[rbp+0x2fd0]
0x1401d1beb: lea     rcx,[rip+0x249ac7e]        # 0x14266c870
0x1401d1bf2: call    0x140af3400
0x1401d1bf7: nop     
0x1401d1bf8: lea     rcx,[rbp+0x2fd0]
0x1401d1bff: jmp     0x1401d206e
0x1401d1c04: cmp     ebx,0x5dc
0x1401d1c0a: jl      0x1401d1c49
0x1401d1c0c: lea     rdx,[rip+0x144db8d]        # 0x14161f7a0 ; literal='Population: ~2000'
0x1401d1c13: lea     rcx,[rbp+0x2ff0]
0x1401d1c1a: call    0x140069780
0x1401d1c1f: nop     
0x1401d1c20: mov     r9d,0x35
0x1401d1c26: xor     r8d,r8d
0x1401d1c29: lea     rdx,[rbp+0x2ff0]
0x1401d1c30: lea     rcx,[rip+0x249ac39]        # 0x14266c870
0x1401d1c37: call    0x140af3400
0x1401d1c3c: nop     
0x1401d1c3d: lea     rcx,[rbp+0x2ff0]
0x1401d1c44: jmp     0x1401d206e
0x1401d1c49: cmp     ebx,0x352
0x1401d1c4f: jl      0x1401d1c8e
0x1401d1c51: lea     rdx,[rip+0x144db60]        # 0x14161f7b8 ; literal='Population: ~1000'
0x1401d1c58: lea     rcx,[rbp+0x3010]
0x1401d1c5f: call    0x140069780
0x1401d1c64: nop     
0x1401d1c65: mov     r9d,0x35
0x1401d1c6b: xor     r8d,r8d
0x1401d1c6e: lea     rdx,[rbp+0x3010]
0x1401d1c75: lea     rcx,[rip+0x249abf4]        # 0x14266c870
0x1401d1c7c: call    0x140af3400
0x1401d1c81: nop     
0x1401d1c82: lea     rcx,[rbp+0x3010]
0x1401d1c89: jmp     0x1401d206e
0x1401d1c8e: cmp     ebx,0x28a
0x1401d1c94: jl      0x1401d1cd3
0x1401d1c96: lea     rdx,[rip+0x144db33]        # 0x14161f7d0 ; literal='Population: ~750'
0x1401d1c9d: lea     rcx,[rbp+0x3030]
0x1401d1ca4: call    0x140069780
0x1401d1ca9: nop     
0x1401d1caa: mov     r9d,0x35
0x1401d1cb0: xor     r8d,r8d
0x1401d1cb3: lea     rdx,[rbp+0x3030]
0x1401d1cba: lea     rcx,[rip+0x249abaf]        # 0x14266c870
0x1401d1cc1: call    0x140af3400
0x1401d1cc6: nop     
0x1401d1cc7: lea     rcx,[rbp+0x3030]
0x1401d1cce: jmp     0x1401d206e
0x1401d1cd3: cmp     ebx,0x226
0x1401d1cd9: jl      0x1401d1d18
0x1401d1cdb: lea     rdx,[rip+0x144db06]        # 0x14161f7e8 ; literal='Population: ~600'
0x1401d1ce2: lea     rcx,[rbp+0x3050]
0x1401d1ce9: call    0x140069780
0x1401d1cee: nop     
0x1401d1cef: mov     r9d,0x35
0x1401d1cf5: xor     r8d,r8d
0x1401d1cf8: lea     rdx,[rbp+0x3050]
0x1401d1cff: lea     rcx,[rip+0x249ab6a]        # 0x14266c870
0x1401d1d06: call    0x140af3400
0x1401d1d0b: nop     
0x1401d1d0c: lea     rcx,[rbp+0x3050]
0x1401d1d13: jmp     0x1401d206e
0x1401d1d18: cmp     ebx,0x1c2
0x1401d1d1e: jl      0x1401d1d5d
0x1401d1d20: lea     rdx,[rip+0x144dad9]        # 0x14161f800 ; literal='Population: ~500'
0x1401d1d27: lea     rcx,[rbp+0x3070]
0x1401d1d2e: call    0x140069780
0x1401d1d33: nop     
0x1401d1d34: mov     r9d,0x35
0x1401d1d3a: xor     r8d,r8d
0x1401d1d3d: lea     rdx,[rbp+0x3070]
0x1401d1d44: lea     rcx,[rip+0x249ab25]        # 0x14266c870
0x1401d1d4b: call    0x140af3400
0x1401d1d50: nop     
0x1401d1d51: lea     rcx,[rbp+0x3070]
0x1401d1d58: jmp     0x1401d206e
0x1401d1d5d: cmp     ebx,0x15e
0x1401d1d63: jl      0x1401d1da2
0x1401d1d65: lea     rdx,[rip+0x144daac]        # 0x14161f818 ; literal='Population: ~400'
0x1401d1d6c: lea     rcx,[rbp+0x3090]
0x1401d1d73: call    0x140069780
0x1401d1d78: nop     
0x1401d1d79: mov     r9d,0x35
0x1401d1d7f: xor     r8d,r8d
0x1401d1d82: lea     rdx,[rbp+0x3090]
0x1401d1d89: lea     rcx,[rip+0x249aae0]        # 0x14266c870
0x1401d1d90: call    0x140af3400
0x1401d1d95: nop     
0x1401d1d96: lea     rcx,[rbp+0x3090]
0x1401d1d9d: jmp     0x1401d206e
0x1401d1da2: cmp     ebx,0xfa
0x1401d1da8: jl      0x1401d1de7
0x1401d1daa: lea     rdx,[rip+0x144da7f]        # 0x14161f830 ; literal='Population: ~300'
0x1401d1db1: lea     rcx,[rbp+0x30b0]
0x1401d1db8: call    0x140069780
0x1401d1dbd: nop     
0x1401d1dbe: mov     r9d,0x35
0x1401d1dc4: xor     r8d,r8d
0x1401d1dc7: lea     rdx,[rbp+0x30b0]
0x1401d1dce: lea     rcx,[rip+0x249aa9b]        # 0x14266c870
0x1401d1dd5: call    0x140af3400
0x1401d1dda: nop     
0x1401d1ddb: lea     rcx,[rbp+0x30b0]
0x1401d1de2: jmp     0x1401d206e
0x1401d1de7: cmp     ebx,0x96
0x1401d1ded: jl      0x1401d1e2c
0x1401d1def: lea     rdx,[rip+0x144da52]        # 0x14161f848 ; literal='Population: ~200'
0x1401d1df6: lea     rcx,[rbp+0x30d0]
0x1401d1dfd: call    0x140069780
0x1401d1e02: nop     
0x1401d1e03: mov     r9d,0x35
0x1401d1e09: xor     r8d,r8d
0x1401d1e0c: lea     rdx,[rbp+0x30d0]
0x1401d1e13: lea     rcx,[rip+0x249aa56]        # 0x14266c870
0x1401d1e1a: call    0x140af3400
0x1401d1e1f: nop     
0x1401d1e20: lea     rcx,[rbp+0x30d0]
0x1401d1e27: jmp     0x1401d206e
0x1401d1e2c: cmp     ebx,0x55
0x1401d1e2f: jl      0x1401d1e6e
0x1401d1e31: lea     rdx,[rip+0x144d798]        # 0x14161f5d0 ; literal='Population: ~100'
0x1401d1e38: lea     rcx,[rbp+0x30f0]
0x1401d1e3f: call    0x140069780
0x1401d1e44: nop     
0x1401d1e45: mov     r9d,0x35
0x1401d1e4b: xor     r8d,r8d
0x1401d1e4e: lea     rdx,[rbp+0x30f0]
0x1401d1e55: lea     rcx,[rip+0x249aa14]        # 0x14266c870
0x1401d1e5c: call    0x140af3400
0x1401d1e61: nop     
0x1401d1e62: lea     rcx,[rbp+0x30f0]
0x1401d1e69: jmp     0x1401d206e
0x1401d1e6e: cmp     ebx,0x41
0x1401d1e71: jl      0x1401d1eb0
0x1401d1e73: lea     rdx,[rip+0x144d76e]        # 0x14161f5e8 ; literal='Population: ~75'
0x1401d1e7a: lea     rcx,[rbp+0x3110]
0x1401d1e81: call    0x140069780
0x1401d1e86: nop     
0x1401d1e87: mov     r9d,0x35
0x1401d1e8d: xor     r8d,r8d
0x1401d1e90: lea     rdx,[rbp+0x3110]
0x1401d1e97: lea     rcx,[rip+0x249a9d2]        # 0x14266c870
0x1401d1e9e: call    0x140af3400
0x1401d1ea3: nop     
0x1401d1ea4: lea     rcx,[rbp+0x3110]
0x1401d1eab: jmp     0x1401d206e
0x1401d1eb0: cmp     ebx,0x37
0x1401d1eb3: jl      0x1401d1ef2
0x1401d1eb5: lea     rdx,[rip+0x144d73c]        # 0x14161f5f8 ; literal='Population: ~60'
0x1401d1ebc: lea     rcx,[rbp+0x3130]
0x1401d1ec3: call    0x140069780
0x1401d1ec8: nop     
0x1401d1ec9: mov     r9d,0x35
0x1401d1ecf: xor     r8d,r8d
0x1401d1ed2: lea     rdx,[rbp+0x3130]
0x1401d1ed9: lea     rcx,[rip+0x249a990]        # 0x14266c870
0x1401d1ee0: call    0x140af3400
0x1401d1ee5: nop     
0x1401d1ee6: lea     rcx,[rbp+0x3130]
0x1401d1eed: jmp     0x1401d206e
0x1401d1ef2: cmp     ebx,0x2d
0x1401d1ef5: jl      0x1401d1f34
0x1401d1ef7: lea     rdx,[rip+0x144d70a]        # 0x14161f608 ; literal='Population: ~50'
0x1401d1efe: lea     rcx,[rbp+0x3890]
0x1401d1f05: call    0x140069780
0x1401d1f0a: nop     
0x1401d1f0b: mov     r9d,0x35
0x1401d1f11: xor     r8d,r8d
0x1401d1f14: lea     rdx,[rbp+0x3890]
0x1401d1f1b: lea     rcx,[rip+0x249a94e]        # 0x14266c870
0x1401d1f22: call    0x140af3400
0x1401d1f27: nop     
0x1401d1f28: lea     rcx,[rbp+0x3890]
0x1401d1f2f: jmp     0x1401d206e
0x1401d1f34: cmp     ebx,0x23
0x1401d1f37: jl      0x1401d1f76
0x1401d1f39: lea     rdx,[rip+0x144d6d8]        # 0x14161f618 ; literal='Population: ~40'
0x1401d1f40: lea     rcx,[rbp+0x3170]
0x1401d1f47: call    0x140069780
0x1401d1f4c: nop     
0x1401d1f4d: mov     r9d,0x35
0x1401d1f53: xor     r8d,r8d
0x1401d1f56: lea     rdx,[rbp+0x3170]
0x1401d1f5d: lea     rcx,[rip+0x249a90c]        # 0x14266c870
0x1401d1f64: call    0x140af3400
0x1401d1f69: nop     
0x1401d1f6a: lea     rcx,[rbp+0x3170]
0x1401d1f71: jmp     0x1401d206e
0x1401d1f76: cmp     ebx,0x19
0x1401d1f79: jl      0x1401d1fb8
0x1401d1f7b: lea     rdx,[rip+0x144d6a6]        # 0x14161f628 ; literal='Population: ~30'
0x1401d1f82: lea     rcx,[rbp+0x3190]
0x1401d1f89: call    0x140069780
0x1401d1f8e: nop     
0x1401d1f8f: mov     r9d,0x35
0x1401d1f95: xor     r8d,r8d
0x1401d1f98: lea     rdx,[rbp+0x3190]
0x1401d1f9f: lea     rcx,[rip+0x249a8ca]        # 0x14266c870
0x1401d1fa6: call    0x140af3400
0x1401d1fab: nop     
0x1401d1fac: lea     rcx,[rbp+0x3190]
0x1401d1fb3: jmp     0x1401d206e
0x1401d1fb8: cmp     ebx,0xf
0x1401d1fbb: jl      0x1401d1ff7
0x1401d1fbd: lea     rdx,[rip+0x144d674]        # 0x14161f638 ; literal='Population: ~20'
0x1401d1fc4: lea     rcx,[rbp+0x31b0]
0x1401d1fcb: call    0x140069780
0x1401d1fd0: nop     
0x1401d1fd1: mov     r9d,0x35
0x1401d1fd7: xor     r8d,r8d
0x1401d1fda: lea     rdx,[rbp+0x31b0]
0x1401d1fe1: lea     rcx,[rip+0x249a888]        # 0x14266c870
0x1401d1fe8: call    0x140af3400
0x1401d1fed: nop     
0x1401d1fee: lea     rcx,[rbp+0x31b0]
0x1401d1ff5: jmp     0x1401d206e
0x1401d1ff7: cmp     ebx,0x7
0x1401d1ffa: jl      0x1401d2036
0x1401d1ffc: lea     rdx,[rip+0x144d645]        # 0x14161f648 ; literal='Population: ~10'
0x1401d2003: lea     rcx,[rbp+0x31d0]
0x1401d200a: call    0x140069780
0x1401d200f: nop     
0x1401d2010: mov     r9d,0x35
0x1401d2016: xor     r8d,r8d
0x1401d2019: lea     rdx,[rbp+0x31d0]
0x1401d2020: lea     rcx,[rip+0x249a849]        # 0x14266c870
0x1401d2027: call    0x140af3400
0x1401d202c: nop     
0x1401d202d: lea     rcx,[rbp+0x31d0]
0x1401d2034: jmp     0x1401d206e
0x1401d2036: lea     rdx,[rip+0x144d61b]        # 0x14161f658 ; literal='Population: <10'
0x1401d203d: lea     rcx,[rbp+0x31f0]
0x1401d2044: call    0x140069780
0x1401d2049: nop     
0x1401d204a: mov     r9d,0x35
0x1401d2050: xor     r8d,r8d
0x1401d2053: lea     rdx,[rbp+0x31f0]
0x1401d205a: lea     rcx,[rip+0x249a80f]        # 0x14266c870
0x1401d2061: call    0x140af3400
0x1401d2066: nop     
0x1401d2067: lea     rcx,[rbp+0x31f0]
0x1401d206e: call    0x140069460
0x1401d2073: lea     rcx,[rbp+0x15b0]
0x1401d207a: call    0x140070cc0
0x1401d207f: nop     
0x1401d2080: lea     rcx,[r15+0x20]
0x1401d2084: xor     r9d,r9d
0x1401d2087: mov     r8b,0x1
0x1401d208a: lea     rdx,[rbp+0x15b0]
0x1401d2091: call    0x140aae180
0x1401d2096: mov     r8d,DWORD PTR [rbp-0x70]
0x1401d209a: mov     edx,0x7
0x1401d209f: lea     rcx,[rip+0x249a7ca]        # 0x14266c870
0x1401d20a6: call    0x1400bc750
0x1401d20ab: lea     rdx,[rip+0x144d5ce]        # 0x14161f680 ; literal='Site government: '
0x1401d20b2: lea     rcx,[rbp+0x1230]
0x1401d20b9: call    0x140069780
0x1401d20be: nop     
0x1401d20bf: lea     rdx,[rbp+0x15b0]
0x1401d20c6: lea     rcx,[rbp+0x1230]
0x1401d20cd: call    0x1400bb340
0x1401d20d2: lea     rcx,[rbp+0x1230]
0x1401d20d9: call    0x140070960
0x1401d20de: mov     edx,DWORD PTR [rbp-0x6c]
0x1401d20e1: mov     ecx,edx
0x1401d20e3: sub     ecx,esi
0x1401d20e5: sub     ecx,0x7
0x1401d20e8: movsxd  rcx,ecx
0x1401d20eb: cmp     rax,rcx
0x1401d20ee: jb      0x1401d2159
0x1401d20f0: mov     ebx,edx
0x1401d20f2: sub     ebx,esi
0x1401d20f4: lea     eax,[rbx-0x8]
0x1401d20f7: test    eax,eax
0x1401d20f9: js      0x1401d2114
0x1401d20fb: movsxd  rdx,ebx
0x1401d20fe: sub     rdx,0x8
0x1401d2102: xor     r8d,r8d
0x1401d2105: lea     rcx,[rbp+0x1230]
0x1401d210c: call    0x1400e2860
0x1401d2111: lea     eax,[rbx-0x8]
0x1401d2114: cmp     eax,0x3
0x1401d2117: jle     0x1401d2159
0x1401d2119: movsxd  rdx,ebx
0x1401d211c: sub     rdx,0xb
0x1401d2120: lea     rcx,[rbp+0x1230]
0x1401d2127: call    0x1400fcbe0
0x1401d212c: mov     BYTE PTR [rax],0x2e
0x1401d212f: lea     eax,[rbx-0xa]
0x1401d2132: movsxd  rdx,eax
0x1401d2135: lea     rcx,[rbp+0x1230]
0x1401d213c: call    0x1400fcbe0
0x1401d2141: mov     BYTE PTR [rax],0x2e
0x1401d2144: lea     eax,[rbx-0x9]
0x1401d2147: movsxd  rdx,eax
0x1401d214a: lea     rcx,[rbp+0x1230]
0x1401d2151: call    0x1400fcbe0
0x1401d2156: mov     BYTE PTR [rax],0x2e
0x1401d2159: xor     r9d,r9d
0x1401d215c: xor     r8d,r8d
0x1401d215f: lea     rdx,[rbp+0x1230]
0x1401d2166: lea     rcx,[rip+0x249a703]        # 0x14266c870
0x1401d216d: call    0x140af3400
0x1401d2172: nop     
0x1401d2173: lea     rcx,[rbp+0x1230]
0x1401d217a: call    0x140069460
0x1401d217f: nop     
0x1401d2180: lea     rcx,[rbp+0x15b0]
0x1401d2187: jmp     0x1401d21c1
0x1401d2189: lea     rdx,[rip+0x144d4d8]        # 0x14161f668 ; literal='No civilized population'
0x1401d2190: lea     rcx,[rbp+0x3210]
0x1401d2197: call    0x140069780
0x1401d219c: nop     
0x1401d219d: mov     r9d,0x35
0x1401d21a3: xor     r8d,r8d
0x1401d21a6: lea     rdx,[rbp+0x3210]
0x1401d21ad: lea     rcx,[rip+0x249a6bc]        # 0x14266c870
0x1401d21b4: call    0x140af3400
0x1401d21b9: nop     
0x1401d21ba: lea     rcx,[rbp+0x3210]
0x1401d21c1: call    0x140069460
0x1401d21c6: test    rdi,rdi
0x1401d21c9: je      0x1401d22ec
0x1401d21cf: cmp     rdi,r15
0x1401d21d2: je      0x1401d22ec
0x1401d21d8: lea     rcx,[rbp+0x15d0]
0x1401d21df: call    0x140070cc0
0x1401d21e4: nop     
0x1401d21e5: lea     rcx,[rdi+0x20]
0x1401d21e9: xor     r9d,r9d
0x1401d21ec: mov     r8b,0x1
0x1401d21ef: lea     rdx,[rbp+0x15d0]
0x1401d21f6: call    0x140aae180
0x1401d21fb: mov     r8d,DWORD PTR [rbp-0x70]
0x1401d21ff: mov     edx,0x8
0x1401d2204: lea     rcx,[rip+0x249a665]        # 0x14266c870
0x1401d220b: call    0x1400bc750
0x1401d2210: lea     rdx,[rip+0x144d481]        # 0x14161f698 ; literal='Civilization: '
0x1401d2217: lea     rcx,[rbp+0x1250]
0x1401d221e: call    0x140069780
0x1401d2223: nop     
0x1401d2224: lea     rdx,[rbp+0x15d0]
0x1401d222b: lea     rcx,[rbp+0x1250]
0x1401d2232: call    0x1400bb340
0x1401d2237: lea     rcx,[rbp+0x1250]
0x1401d223e: call    0x140070960
0x1401d2243: mov     ebx,DWORD PTR [rbp-0x6c]
0x1401d2246: mov     ecx,ebx
0x1401d2248: sub     ecx,esi
0x1401d224a: sub     ecx,0x7
0x1401d224d: movsxd  rcx,ecx
0x1401d2250: cmp     rax,rcx
0x1401d2253: jb      0x1401d22b9
0x1401d2255: sub     ebx,esi
0x1401d2257: lea     esi,[rbx-0x8]
0x1401d225a: test    esi,esi
0x1401d225c: js      0x1401d2274
0x1401d225e: movsxd  rdx,ebx
0x1401d2261: sub     rdx,0x8
0x1401d2265: xor     r8d,r8d
0x1401d2268: lea     rcx,[rbp+0x1250]
0x1401d226f: call    0x1400e2860
0x1401d2274: cmp     esi,0x3
0x1401d2277: jle     0x1401d22b9
0x1401d2279: movsxd  rdx,ebx
0x1401d227c: sub     rdx,0xb
0x1401d2280: lea     rcx,[rbp+0x1250]
0x1401d2287: call    0x1400fcbe0
0x1401d228c: mov     BYTE PTR [rax],0x2e
0x1401d228f: lea     eax,[rbx-0xa]
0x1401d2292: movsxd  rdx,eax
0x1401d2295: lea     rcx,[rbp+0x1250]
0x1401d229c: call    0x1400fcbe0
0x1401d22a1: mov     BYTE PTR [rax],0x2e
0x1401d22a4: lea     eax,[rbx-0x9]
0x1401d22a7: movsxd  rdx,eax
0x1401d22aa: lea     rcx,[rbp+0x1250]
0x1401d22b1: call    0x1400fcbe0
0x1401d22b6: mov     BYTE PTR [rax],0x2e
0x1401d22b9: xor     r9d,r9d
0x1401d22bc: xor     r8d,r8d
0x1401d22bf: lea     rdx,[rbp+0x1250]
0x1401d22c6: lea     rcx,[rip+0x249a5a3]        # 0x14266c870
0x1401d22cd: call    0x140af3400
0x1401d22d2: nop     
0x1401d22d3: lea     rcx,[rbp+0x1250]
0x1401d22da: call    0x140069460
0x1401d22df: nop     
0x1401d22e0: lea     rcx,[rbp+0x15d0]
0x1401d22e7: call    0x140069460
0x1401d22ec: mov     edx,DWORD PTR [rip+0x21e3806]        # 0x1423b5af8
0x1401d22f2: lea     rcx,[rip+0x222197f]        # 0x1423f3c78
0x1401d22f9: call    0x14007f120
0x1401d22fe: mov     rbx,rax
0x1401d2301: mov     edx,DWORD PTR [rip+0x21e37e9]        # 0x1423b5af0
0x1401d2307: lea     rcx,[rip+0x222196a]        # 0x1423f3c78
0x1401d230e: call    0x14007f120
0x1401d2313: test    rax,rax
0x1401d2316: je      0x1401d2727
0x1401d231c: test    rbx,rbx
0x1401d231f: je      0x1401d2727
0x1401d2325: test    rdi,rdi
0x1401d2328: je      0x1401d2727
0x1401d232e: test    r15,r15
0x1401d2331: je      0x1401d2795
0x1401d2337: cmp     rax,rdi
0x1401d233a: je      0x1401d272c
0x1401d2340: lea     rcx,[rax+0x1028]
0x1401d2347: mov     edx,DWORD PTR [rdi+0x4]
0x1401d234a: call    0x140101120
0x1401d234f: mov     rdi,rax
0x1401d2352: lea     rcx,[rbx+0x1028]
0x1401d2359: mov     edx,DWORD PTR [r15+0x4]
0x1401d235d: call    0x140101120
0x1401d2362: mov     rbx,rax
0x1401d2365: mov     r8d,DWORD PTR [rbp-0x70]
0x1401d2369: mov     edx,0x9
0x1401d236e: lea     rcx,[rip+0x249a4fb]        # 0x14266c870
0x1401d2375: call    0x1400bc750
0x1401d237a: test    rbx,rbx
0x1401d237d: je      0x1401d2547
0x1401d2383: movzx   eax,WORD PTR [rbx+0x4]
0x1401d2387: cmp     ax,0x3
0x1401d238b: je      0x1401d23ce
0x1401d238d: cmp     ax,0x4
0x1401d2391: jne     0x1401d2547
0x1401d2397: lea     rdx,[rip+0x144d31a]        # 0x14161f6b8 ; literal='They accept '
0x1401d239e: lea     rcx,[rbp+0x3230]
0x1401d23a5: call    0x140069780
0x1401d23aa: nop     
0x1401d23ab: xor     r9d,r9d
0x1401d23ae: mov     r8b,0x3
0x1401d23b1: lea     rdx,[rbp+0x3230]
0x1401d23b8: lea     rcx,[rip+0x249a4b1]        # 0x14266c870
0x1401d23bf: call    0x140af3400
0x1401d23c4: nop     
0x1401d23c5: lea     rcx,[rbp+0x3230]
0x1401d23cc: jmp     0x1401d2403
0x1401d23ce: lea     rdx,[rip+0x144d2d3]        # 0x14161f6a8 ; literal='They offer '
0x1401d23d5: lea     rcx,[rbp+0x3250]
0x1401d23dc: call    0x140069780
0x1401d23e1: nop     
0x1401d23e2: xor     r9d,r9d
0x1401d23e5: mov     r8b,0x3
0x1401d23e8: lea     rdx,[rbp+0x3250]
0x1401d23ef: lea     rcx,[rip+0x249a47a]        # 0x14266c870
0x1401d23f6: call    0x140af3400
0x1401d23fb: nop     
0x1401d23fc: lea     rcx,[rbp+0x3250]
0x1401d2403: call    0x140069460
0x1401d2408: mov     ecx,DWORD PTR [rbx+0x44]
0x1401d240b: test    ecx,ecx
0x1401d240d: je      0x1401d24ce
0x1401d2413: sub     ecx,0x1
0x1401d2416: je      0x1401d2497
0x1401d2418: sub     ecx,0x1
0x1401d241b: je      0x1401d2460
0x1401d241d: cmp     ecx,0x1
0x1401d2420: jne     0x1401d2508
0x1401d2426: lea     rdx,[rip+0x1446b7b]        # 0x141618fa8 ; literal='Winter'
0x1401d242d: lea     rcx,[rbp+0x3270]
0x1401d2434: call    0x140069780
0x1401d2439: nop     
0x1401d243a: xor     r9d,r9d
0x1401d243d: mov     r8b,0x3
0x1401d2440: lea     rdx,[rbp+0x3270]
0x1401d2447: lea     rcx,[rip+0x249a422]        # 0x14266c870
0x1401d244e: call    0x140af3400
0x1401d2453: nop     
0x1401d2454: lea     rcx,[rbp+0x3270]
0x1401d245b: jmp     0x1401d2503
0x1401d2460: lea     rdx,[rip+0x1446975]        # 0x141618ddc ; literal='Autumn'
0x1401d2467: lea     rcx,[rbp+0x3290]
0x1401d246e: call    0x140069780
0x1401d2473: nop     
0x1401d2474: xor     r9d,r9d
0x1401d2477: mov     r8b,0x3
0x1401d247a: lea     rdx,[rbp+0x3290]
0x1401d2481: lea     rcx,[rip+0x249a3e8]        # 0x14266c870
0x1401d2488: call    0x140af3400
0x1401d248d: nop     
0x1401d248e: lea     rcx,[rbp+0x3290]
0x1401d2495: jmp     0x1401d2503
0x1401d2497: lea     rdx,[rip+0x1446936]        # 0x141618dd4 ; literal='Summer'
0x1401d249e: lea     rcx,[rbp+0x32b0]
0x1401d24a5: call    0x140069780
0x1401d24aa: nop     
0x1401d24ab: xor     r9d,r9d
0x1401d24ae: mov     r8b,0x3
0x1401d24b1: lea     rdx,[rbp+0x32b0]
0x1401d24b8: lea     rcx,[rip+0x249a3b1]        # 0x14266c870
0x1401d24bf: call    0x140af3400
0x1401d24c4: nop     
0x1401d24c5: lea     rcx,[rbp+0x32b0]
0x1401d24cc: jmp     0x1401d2503
0x1401d24ce: lea     rdx,[rip+0x14468f7]        # 0x141618dcc ; literal='Spring'
0x1401d24d5: lea     rcx,[rbp+0x32d0]
0x1401d24dc: call    0x140069780
0x1401d24e1: nop     
0x1401d24e2: xor     r9d,r9d
0x1401d24e5: mov     r8b,0x3
0x1401d24e8: lea     rdx,[rbp+0x32d0]
0x1401d24ef: lea     rcx,[rip+0x249a37a]        # 0x14266c870
0x1401d24f6: call    0x140af3400
0x1401d24fb: nop     
0x1401d24fc: lea     rcx,[rbp+0x32d0]
0x1401d2503: call    0x140069460
0x1401d2508: lea     rdx,[rip+0x144d1b9]        # 0x14161f6c8 ; literal=' tribute'
0x1401d250f: lea     rcx,[rbp+0x32f0]
0x1401d2516: call    0x140069780
0x1401d251b: nop     
0x1401d251c: xor     r9d,r9d
0x1401d251f: xor     r8d,r8d
0x1401d2522: lea     rdx,[rbp+0x32f0]
0x1401d2529: lea     rcx,[rip+0x249a340]        # 0x14266c870
0x1401d2530: call    0x140af3400
0x1401d2535: nop     
0x1401d2536: lea     rcx,[rbp+0x32f0]
0x1401d253d: call    0x140069460
0x1401d2542: jmp     0x1401d272c
0x1401d2547: test    rdi,rdi
0x1401d254a: je      0x1401d26eb
0x1401d2550: movsx   rax,WORD PTR [rdi+0x4]
0x1401d2555: cmp     eax,0x5
0x1401d2558: ja      0x1401d272c
0x1401d255e: lea     rdx,[rip+0xffffffffffe2da9b]        # 0x140000000
0x1401d2565: mov     ecx,DWORD PTR [rdx+rax*4+0x1d6720]
0x1401d256c: add     rcx,rdx
0x1401d256f: jmp     rcx
0x1401d2571: test    BYTE PTR [rdi+0x40],0x4
0x1401d2575: je      0x1401d25b6
0x1401d2577: lea     rdx,[rip+0x144d15a]        # 0x14161f6d8 ; literal='Alliance'
0x1401d257e: lea     rcx,[rbp+0x3310]
0x1401d2585: call    0x140069780
0x1401d258a: nop     
0x1401d258b: xor     r9d,r9d
0x1401d258e: xor     r8d,r8d
0x1401d2591: lea     rdx,[rbp+0x3310]
0x1401d2598: lea     rcx,[rip+0x249a2d1]        # 0x14266c870
0x1401d259f: call    0x140af3400
0x1401d25a4: nop     
0x1401d25a5: lea     rcx,[rbp+0x3310]
0x1401d25ac: call    0x140069460
0x1401d25b1: jmp     0x1401d272c
0x1401d25b6: lea     rdx,[rip+0x14316bf]        # 0x141603c7c ; literal='Peace'
0x1401d25bd: lea     rcx,[rbp+0x3330]
0x1401d25c4: call    0x140069780
0x1401d25c9: nop     
0x1401d25ca: xor     r9d,r9d
0x1401d25cd: xor     r8d,r8d
0x1401d25d0: lea     rdx,[rbp+0x3330]
0x1401d25d7: lea     rcx,[rip+0x249a292]        # 0x14266c870
0x1401d25de: call    0x140af3400
0x1401d25e3: nop     
0x1401d25e4: lea     rcx,[rbp+0x3330]
0x1401d25eb: call    0x140069460
0x1401d25f0: jmp     0x1401d272c
0x1401d25f5: lea     rdx,[rip+0x144d3cc]        # 0x14161f9c8 ; literal='War'
0x1401d25fc: lea     rcx,[rbp+0x3350]
0x1401d2603: call    0x140069780
0x1401d2608: nop     
0x1401d2609: xor     r9d,r9d
0x1401d260c: xor     r8d,r8d
0x1401d260f: lea     rdx,[rbp+0x3350]
0x1401d2616: lea     rcx,[rip+0x249a253]        # 0x14266c870
0x1401d261d: call    0x140af3400
0x1401d2622: nop     
0x1401d2623: lea     rcx,[rbp+0x3350]
0x1401d262a: call    0x140069460
0x1401d262f: jmp     0x1401d272c
0x1401d2634: lea     rdx,[rip+0x144d3a5]        # 0x14161f9e0 ; literal='They offer tribute'
0x1401d263b: lea     rcx,[rbp+0x3370]
0x1401d2642: call    0x140069780
0x1401d2647: nop     
0x1401d2648: xor     r9d,r9d
0x1401d264b: xor     r8d,r8d
0x1401d264e: lea     rdx,[rbp+0x3370]
0x1401d2655: lea     rcx,[rip+0x249a214]        # 0x14266c870
0x1401d265c: call    0x140af3400
0x1401d2661: nop     
0x1401d2662: lea     rcx,[rbp+0x3370]
0x1401d2669: call    0x140069460
0x1401d266e: jmp     0x1401d272c
0x1401d2673: lea     rdx,[rip+0x144d37e]        # 0x14161f9f8 ; literal='They accept tribute'
0x1401d267a: lea     rcx,[rbp+0x3390]
0x1401d2681: call    0x140069780
0x1401d2686: nop     
0x1401d2687: xor     r9d,r9d
0x1401d268a: xor     r8d,r8d
0x1401d268d: lea     rdx,[rbp+0x3390]
0x1401d2694: lea     rcx,[rip+0x249a1d5]        # 0x14266c870
0x1401d269b: call    0x140af3400
0x1401d26a0: nop     
0x1401d26a1: lea     rcx,[rbp+0x3390]
0x1401d26a8: call    0x140069460
0x1401d26ad: jmp     0x1401d272c
0x1401d26af: lea     rdx,[rip+0x144d35a]        # 0x14161fa10 ; literal='Skirmishing'
0x1401d26b6: lea     rcx,[rbp+0x33b0]
0x1401d26bd: call    0x140069780
0x1401d26c2: nop     
0x1401d26c3: xor     r9d,r9d
0x1401d26c6: xor     r8d,r8d
0x1401d26c9: lea     rdx,[rbp+0x33b0]
0x1401d26d0: lea     rcx,[rip+0x249a199]        # 0x14266c870
0x1401d26d7: call    0x140af3400
0x1401d26dc: nop     
0x1401d26dd: lea     rcx,[rbp+0x33b0]
0x1401d26e4: call    0x140069460
0x1401d26e9: jmp     0x1401d272c
0x1401d26eb: lea     rdx,[rip+0x144d2de]        # 0x14161f9d0 ; literal='No contact'
0x1401d26f2: lea     rcx,[rbp+0x33d0]
0x1401d26f9: call    0x140069780
0x1401d26fe: nop     
0x1401d26ff: xor     r9d,r9d
0x1401d2702: xor     r8d,r8d
0x1401d2705: lea     rdx,[rbp+0x33d0]
0x1401d270c: lea     rcx,[rip+0x249a15d]        # 0x14266c870
0x1401d2713: call    0x140af3400
0x1401d2718: nop     
0x1401d2719: lea     rcx,[rbp+0x33d0]
0x1401d2720: call    0x140069460
0x1401d2725: jmp     0x1401d272c
0x1401d2727: test    r15,r15
0x1401d272a: je      0x1401d2795
0x1401d272c: mov     edx,0x8
0x1401d2731: mov     rcx,r15
0x1401d2734: call    0x1409ce8f0
0x1401d2739: mov     r15d,DWORD PTR [rbp-0x70]
0x1401d273d: cmp     eax,DWORD PTR [rip+0x21e33b1]        # 0x1423b5af4
0x1401d2743: jne     0x1401d2799
0x1401d2745: mov     r8d,r15d
0x1401d2748: mov     edx,0xa
0x1401d274d: lea     rcx,[rip+0x249a11c]        # 0x14266c870
0x1401d2754: call    0x1400bc750
0x1401d2759: lea     rdx,[rip+0x144d2c0]        # 0x14161fa20 ; literal='Economically linked to you'
0x1401d2760: lea     rcx,[rbp+0x33f0]
0x1401d2767: call    0x140069780
0x1401d276c: nop     
0x1401d276d: xor     r9d,r9d
0x1401d2770: xor     r8d,r8d
0x1401d2773: lea     rdx,[rbp+0x33f0]
0x1401d277a: lea     rcx,[rip+0x249a0ef]        # 0x14266c870
0x1401d2781: call    0x140af3400
0x1401d2786: nop     
0x1401d2787: lea     rcx,[rbp+0x33f0]
0x1401d278e: call    0x140069460
0x1401d2793: jmp     0x1401d2799
0x1401d2795: mov     r15d,DWORD PTR [rbp-0x70]
0x1401d2799: lea     rcx,[rbp+0x1270]
0x1401d27a0: call    0x140069460
0x1401d27a5: nop     
0x1401d27a6: lea     rcx,[rbp+0xe70]
0x1401d27ad: call    0x140069460
0x1401d27b2: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d27b7: cmp     DWORD PTR [rbx+0x8300],r13d
0x1401d27be: jne     0x1401d27c9
0x1401d27c0: cmp     DWORD PTR [rbx+0x8304],r14d
0x1401d27c7: je      0x1401d27ec
0x1401d27c9: mov     DWORD PTR [rbx+0x8300],r13d
0x1401d27d0: mov     DWORD PTR [rbx+0x8304],r14d
0x1401d27d7: mov     r8d,r14d
0x1401d27da: mov     edx,r13d
0x1401d27dd: mov     r13,QWORD PTR [rsp+0x78]
0x1401d27e2: mov     rcx,r13
0x1401d27e5: call    0x1401dd3b0
0x1401d27ea: jmp     0x1401d27f1
0x1401d27ec: mov     r13,QWORD PTR [rsp+0x78]
0x1401d27f1: xor     r8d,r8d
0x1401d27f4: mov     edx,0x7
0x1401d27f9: xor     r9d,r9d
0x1401d27fc: lea     rcx,[rip+0x249a06d]        # 0x14266c870
0x1401d2803: call    0x1400bc760
0x1401d2808: mov     r14d,0xc
0x1401d280e: lea     rdx,[rbp+0xb8]
0x1401d2815: lea     rcx,[r13+0x8310]
0x1401d281c: call    0x140070870
0x1401d2821: lea     rdx,[rbp+0x188]
0x1401d2828: lea     rcx,[r13+0x8310]
0x1401d282f: call    0x140070860
0x1401d2834: lea     r8,[rbp+0x188]
0x1401d283b: lea     rdx,[rbp+0x0]
0x1401d283f: lea     rcx,[rbp+0xb8]
0x1401d2846: call    0x140070450
0x1401d284b: xor     edx,edx
0x1401d284d: movzx   ecx,BYTE PTR [rax]
0x1401d2850: call    0x140066de0
0x1401d2855: test    al,al
0x1401d2857: je      0x1401c8dd8
0x1401d285d: lea     edi,[r12-0x2]
0x1401d2862: cmp     r14d,edi
0x1401d2865: jne     0x1401d287b
0x1401d2867: lea     rcx,[r13+0x8310]
0x1401d286e: call    0x140070480
0x1401d2873: lea     ecx,[r14-0xa]
0x1401d2877: cmp     ecx,eax
0x1401d2879: jl      0x1401d28e7
0x1401d287b: mov     r8d,r15d
0x1401d287e: mov     edx,r14d
0x1401d2881: lea     rcx,[rip+0x2499fe8]        # 0x14266c870
0x1401d2888: call    0x1400bc750
0x1401d288d: lea     rcx,[rbp+0xb8]
0x1401d2894: call    0x140070440
0x1401d2899: xor     r9d,r9d
0x1401d289c: xor     r8d,r8d
0x1401d289f: mov     rdx,QWORD PTR [rax]
0x1401d28a2: lea     rcx,[rip+0x2499fc7]        # 0x14266c870
0x1401d28a9: call    0x140af3400
0x1401d28ae: lea     rcx,[rbp+0xb8]
0x1401d28b5: call    0x140070430
0x1401d28ba: inc     r14d
0x1401d28bd: lea     r8,[rbp+0x188]
0x1401d28c4: lea     rdx,[rbp+0x0]
0x1401d28c8: lea     rcx,[rbp+0xb8]
0x1401d28cf: call    0x140070450
0x1401d28d4: xor     edx,edx
0x1401d28d6: movzx   ecx,BYTE PTR [rax]
0x1401d28d9: call    0x140066de0
0x1401d28de: test    al,al
0x1401d28e0: jne     0x1401d2862
0x1401d28e2: jmp     0x1401c8dd8
0x1401d28e7: xor     r8d,r8d
0x1401d28ea: mov     edx,0x7
0x1401d28ef: mov     r9b,0x1
0x1401d28f2: lea     rcx,[rip+0x2499f77]        # 0x14266c870
0x1401d28f9: call    0x1400bc760
0x1401d28fe: lea     edx,[r12-0x1]
0x1401d2903: mov     r8d,r15d
0x1401d2906: lea     rcx,[rip+0x2499f63]        # 0x14266c870
0x1401d290d: call    0x1400bc750
0x1401d2912: lea     rdx,[rip+0x144d9cf]        # 0x1416202e8 ; literal='Click to view all news and rumors'
0x1401d2919: lea     rcx,[rbp+0x3410]
0x1401d2920: call    0x140069780
0x1401d2925: nop     
0x1401d2926: xor     r9d,r9d
0x1401d2929: xor     r8d,r8d
0x1401d292c: lea     rdx,[rbp+0x3410]
0x1401d2933: lea     rcx,[rip+0x2499f36]        # 0x14266c870
0x1401d293a: call    0x140af3400
0x1401d293f: nop     
0x1401d2940: lea     rcx,[rbp+0x3410]
0x1401d2947: call    0x140069460
0x1401d294c: jmp     0x1401c8dd8
0x1401d2951: mov     edi,DWORD PTR [rbp-0x18]
0x1401d2954: lea     esi,[rdi-0x3a]
0x1401d2957: mov     eax,DWORD PTR [rip+0x221d2ab]        # 0x1423efc08
0x1401d295d: lea     ecx,[rax-0x1]
0x1401d2960: lea     r13d,[rax-0x1a]
0x1401d2964: cmp     ecx,r13d
0x1401d2967: cmovle  r13d,ecx
0x1401d296b: mov     DWORD PTR [rbp-0x60],r13d
0x1401d296f: xor     eax,eax
0x1401d2971: mov     r15d,eax
0x1401d2974: test    r13d,r13d
0x1401d2977: js      0x1401d2a4c
0x1401d297d: mov     r14d,eax
0x1401d2980: mov     ebx,esi
0x1401d2982: cmp     esi,edi
0x1401d2984: jg      0x1401d2a3d
0x1401d298a: movsxd  r12,r13d
0x1401d298d: nop     DWORD PTR [rax]
0x1401d2990: mov     r8d,ebx
0x1401d2993: mov     edx,r15d
0x1401d2996: lea     rcx,[rip+0x2499ed3]        # 0x14266c870
0x1401d299d: call    0x1400bc750
0x1401d29a2: xor     r8d,r8d
0x1401d29a5: xor     edx,edx
0x1401d29a7: lea     rcx,[rip+0x2499ec2]        # 0x14266c870
0x1401d29ae: call    0x1400bc7c0
0x1401d29b3: test    r14,r14
0x1401d29b6: jne     0x1401d29df
0x1401d29b8: cmp     ebx,esi
0x1401d29ba: jne     0x1401d29c4
0x1401d29bc: mov     edx,DWORD PTR [rip+0x249b7d2]        # 0x14266e194
0x1401d29c2: jmp     0x1401d2a27
0x1401d29c4: lea     rcx,[rip+0x2499ea5]        # 0x14266c870
0x1401d29cb: cmp     ebx,edi
0x1401d29cd: jne     0x1401d29d7
0x1401d29cf: mov     edx,DWORD PTR [rip+0x249b7d7]        # 0x14266e1ac
0x1401d29d5: jmp     0x1401d2a2e
0x1401d29d7: mov     edx,DWORD PTR [rip+0x249b7c3]        # 0x14266e1a0
0x1401d29dd: jmp     0x1401d2a2e
0x1401d29df: cmp     r14,r12
0x1401d29e2: jne     0x1401d2a0b
0x1401d29e4: cmp     ebx,esi
0x1401d29e6: jne     0x1401d29f0
0x1401d29e8: mov     edx,DWORD PTR [rip+0x249b7ae]        # 0x14266e19c
0x1401d29ee: jmp     0x1401d2a27
0x1401d29f0: lea     rcx,[rip+0x2499e79]        # 0x14266c870
0x1401d29f7: cmp     ebx,edi
0x1401d29f9: jne     0x1401d2a03
0x1401d29fb: mov     edx,DWORD PTR [rip+0x249b7b3]        # 0x14266e1b4
0x1401d2a01: jmp     0x1401d2a2e
0x1401d2a03: mov     edx,DWORD PTR [rip+0x249b79f]        # 0x14266e1a8
0x1401d2a09: jmp     0x1401d2a2e
0x1401d2a0b: cmp     ebx,esi
0x1401d2a0d: jne     0x1401d2a17
0x1401d2a0f: mov     edx,DWORD PTR [rip+0x249b783]        # 0x14266e198
0x1401d2a15: jmp     0x1401d2a27
0x1401d2a17: cmp     ebx,edi
0x1401d2a19: mov     edx,DWORD PTR [rip+0x249b791]        # 0x14266e1b0
0x1401d2a1f: je      0x1401d2a27
0x1401d2a21: mov     edx,DWORD PTR [rip+0x249b77d]        # 0x14266e1a4
0x1401d2a27: lea     rcx,[rip+0x2499e42]        # 0x14266c870
0x1401d2a2e: call    0x140af4570
0x1401d2a33: inc     ebx
0x1401d2a35: cmp     ebx,edi
0x1401d2a37: jle     0x1401d2990
0x1401d2a3d: inc     r15d
0x1401d2a40: inc     r14
0x1401d2a43: cmp     r15d,r13d
0x1401d2a46: jle     0x1401d2980
0x1401d2a4c: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d2a51: lea     r12d,[rdi-0x2]
0x1401d2a55: cmp     QWORD PTR [rbx+0x8368],0x0
0x1401d2a5d: je      0x1401d33b7
0x1401d2a63: lea     r15d,[rdi-0x4]
0x1401d2a67: cmp     DWORD PTR [rbx+0x83c0],0x0
0x1401d2a6e: cmovle  r15d,edi
0x1401d2a72: lea     eax,[rsi+0x2]
0x1401d2a75: mov     DWORD PTR [rbp-0x60],eax
0x1401d2a78: add     r13d,0xfffffffb
0x1401d2a7c: mov     DWORD PTR [rsp+0x74],r13d
0x1401d2a81: lea     rcx,[rbx+0x8388]
0x1401d2a88: call    0x140070480
0x1401d2a8d: mov     QWORD PTR [rbp-0x78],rax
0x1401d2a91: mov     ecx,r12d
0x1401d2a94: cmp     eax,r13d
0x1401d2a97: cmovle  ecx,edi
0x1401d2a9a: mov     DWORD PTR [rbp-0x28],ecx
0x1401d2a9d: xor     r8d,r8d
0x1401d2aa0: mov     edx,0x3
0x1401d2aa5: mov     r9b,0x1
0x1401d2aa8: lea     rcx,[rip+0x2499dc1]        # 0x14266c870
0x1401d2aaf: call    0x1400bc760
0x1401d2ab4: lea     r8d,[rsi+0x2]
0x1401d2ab8: mov     edx,0x1
0x1401d2abd: lea     rcx,[rip+0x2499dac]        # 0x14266c870
0x1401d2ac4: call    0x1400bc750
0x1401d2ac9: mov     r13,rbx
0x1401d2acc: mov     rdx,QWORD PTR [rbx+0x8368]
0x1401d2ad3: add     rdx,0x28
0x1401d2ad7: lea     rcx,[rbp+0x13b0]
0x1401d2ade: call    0x140070c00
0x1401d2ae3: nop     
0x1401d2ae4: mov     ebx,r15d
0x1401d2ae7: sub     ebx,esi
0x1401d2ae9: lea     rcx,[rbp+0x13b0]
0x1401d2af0: call    0x140070960
0x1401d2af5: lea     ecx,[rbx-0x2]
0x1401d2af8: movsxd  rdx,ecx
0x1401d2afb: cmp     rax,rdx
0x1401d2afe: jb      0x1401d2b62
0x1401d2b00: lea     edi,[rbx-0x3]
0x1401d2b03: test    edi,edi
0x1401d2b05: js      0x1401d2b1d
0x1401d2b07: movsxd  rdx,ebx
0x1401d2b0a: sub     rdx,0x3
0x1401d2b0e: xor     r8d,r8d
0x1401d2b11: lea     rcx,[rbp+0x13b0]
0x1401d2b18: call    0x1400e2860
0x1401d2b1d: cmp     edi,0x3
0x1401d2b20: jle     0x1401d2b62
0x1401d2b22: movsxd  rdx,ebx
0x1401d2b25: sub     rdx,0x6
0x1401d2b29: lea     rcx,[rbp+0x13b0]
0x1401d2b30: call    0x1400fcbe0
0x1401d2b35: mov     BYTE PTR [rax],0x2e
0x1401d2b38: lea     eax,[rbx-0x5]
0x1401d2b3b: movsxd  rdx,eax
0x1401d2b3e: lea     rcx,[rbp+0x13b0]
0x1401d2b45: call    0x1400fcbe0
0x1401d2b4a: mov     BYTE PTR [rax],0x2e
0x1401d2b4d: lea     eax,[rbx-0x4]
0x1401d2b50: movsxd  rdx,eax
0x1401d2b53: lea     rcx,[rbp+0x13b0]
0x1401d2b5a: call    0x1400fcbe0
0x1401d2b5f: mov     BYTE PTR [rax],0x2e
0x1401d2b62: xor     r9d,r9d
0x1401d2b65: xor     r8d,r8d
0x1401d2b68: lea     rdx,[rbp+0x13b0]
0x1401d2b6f: lea     rcx,[rip+0x2499cfa]        # 0x14266c870
0x1401d2b76: call    0x140af3400
0x1401d2b7b: cmp     DWORD PTR [r13+0x83b8],0x0
0x1401d2b83: jl      0x1401d2d72
0x1401d2b89: mov     eax,0x1b4e81b5
0x1401d2b8e: imul    DWORD PTR [r13+0x83bc]
0x1401d2b95: mov     edi,edx
0x1401d2b97: sar     edi,0x7
0x1401d2b9a: mov     eax,edi
0x1401d2b9c: shr     eax,0x1f
0x1401d2b9f: add     edi,eax
0x1401d2ba1: mov     eax,0x92492493
0x1401d2ba6: imul    edi
0x1401d2ba8: lea     r14d,[rdi+rdx*1]
0x1401d2bac: sar     r14d,0x4
0x1401d2bb0: mov     eax,r14d
0x1401d2bb3: shr     eax,0x1f
0x1401d2bb6: add     r14d,eax
0x1401d2bb9: imul    eax,r14d,0x1c
0x1401d2bbd: sub     edi,eax
0x1401d2bbf: lea     rcx,[rbp+0xdf0]
0x1401d2bc6: call    0x140070cc0
0x1401d2bcb: nop     
0x1401d2bcc: lea     rdx,[rbp+0xdf0]
0x1401d2bd3: lea     ecx,[rdi+0x1]
0x1401d2bd6: call    0x140545610
0x1401d2bdb: cmp     edi,0x20
0x1401d2bde: ja      0x1401d2c19
0x1401d2be0: movsxd  rax,edi
0x1401d2be3: lea     rdx,[rip+0xffffffffffe2d416]        # 0x140000000
0x1401d2bea: movzx   eax,BYTE PTR [rdx+rax*1+0x1d6748]
0x1401d2bf2: mov     ecx,DWORD PTR [rdx+rax*4+0x1d6738]
0x1401d2bf9: add     rcx,rdx
0x1401d2bfc: jmp     rcx
0x1401d2bfe: lea     rdx,[rip+0x1434cef]        # 0x1416078f4 ; literal='st'
0x1401d2c05: jmp     0x1401d2c20
0x1401d2c07: lea     rdx,[rip+0x1434cea]        # 0x1416078f8 ; literal='nd'
0x1401d2c0e: jmp     0x1401d2c20
0x1401d2c10: lea     rdx,[rip+0x1434d45]        # 0x14160795c ; literal='rd'
0x1401d2c17: jmp     0x1401d2c20
0x1401d2c19: lea     rdx,[rip+0x1434d40]        # 0x141607960 ; literal='th'
0x1401d2c20: lea     rcx,[rbp+0xdf0]
0x1401d2c27: call    0x140070b90
0x1401d2c2c: lea     rdx,[rip+0x1430dbd]        # 0x1416039f0 ; literal=' '
0x1401d2c33: lea     rcx,[rbp+0xdf0]
0x1401d2c3a: call    0x140070b90
0x1401d2c3f: lea     rcx,[rbp+0x15f0]
0x1401d2c46: call    0x140070cc0
0x1401d2c4b: nop     
0x1401d2c4c: lea     rdx,[rbp+0x15f0]
0x1401d2c53: mov     ecx,r14d
0x1401d2c56: call    0x14078c980
0x1401d2c5b: lea     rdx,[rbp+0x15f0]
0x1401d2c62: lea     rcx,[rbp+0xdf0]
0x1401d2c69: call    0x1400bb340
0x1401d2c6e: lea     rdx,[rip+0x143171f]        # 0x141604394 ; literal=', '
0x1401d2c75: lea     rcx,[rbp+0xdf0]
0x1401d2c7c: call    0x140070b90
0x1401d2c81: lea     rdx,[rbp+0xdf0]
0x1401d2c88: mov     ecx,DWORD PTR [r13+0x83b8]
0x1401d2c8f: call    0x140545610
0x1401d2c94: xor     r8d,r8d
0x1401d2c97: mov     edx,0x7
0x1401d2c9c: mov     r9b,0x1
0x1401d2c9f: lea     rcx,[rip+0x2499bca]        # 0x14266c870
0x1401d2ca6: call    0x1400bc760
0x1401d2cab: lea     r8d,[rsi+0x2]
0x1401d2caf: mov     edx,0x2
0x1401d2cb4: lea     rcx,[rip+0x2499bb5]        # 0x14266c870
0x1401d2cbb: call    0x1400bc750
0x1401d2cc0: lea     rcx,[rbp+0xdf0]
0x1401d2cc7: call    0x140070960
0x1401d2ccc: mov     ecx,r15d
0x1401d2ccf: sub     ecx,esi
0x1401d2cd1: sub     ecx,0x2
0x1401d2cd4: movsxd  rcx,ecx
0x1401d2cd7: cmp     rax,rcx
0x1401d2cda: jb      0x1401d2d3f
0x1401d2cdc: mov     edi,r15d
0x1401d2cdf: sub     edi,esi
0x1401d2ce1: lea     ebx,[rdi-0x3]
0x1401d2ce4: movsxd  rdx,edi
0x1401d2ce7: sub     rdx,0x3
0x1401d2ceb: xor     r8d,r8d
0x1401d2cee: lea     rcx,[rbp+0xdf0]
0x1401d2cf5: call    0x1400e2860
0x1401d2cfa: cmp     ebx,0x3
0x1401d2cfd: jle     0x1401d2d3f
0x1401d2cff: movsxd  rdx,edi
0x1401d2d02: sub     rdx,0x6
0x1401d2d06: lea     rcx,[rbp+0xdf0]
0x1401d2d0d: call    0x1400fcbe0
0x1401d2d12: mov     BYTE PTR [rax],0x2e
0x1401d2d15: lea     eax,[rdi-0x5]
0x1401d2d18: movsxd  rdx,eax
0x1401d2d1b: lea     rcx,[rbp+0xdf0]
0x1401d2d22: call    0x1400fcbe0
0x1401d2d27: mov     BYTE PTR [rax],0x2e
0x1401d2d2a: lea     eax,[rdi-0x4]
0x1401d2d2d: movsxd  rdx,eax
0x1401d2d30: lea     rcx,[rbp+0xdf0]
0x1401d2d37: call    0x1400fcbe0
0x1401d2d3c: mov     BYTE PTR [rax],0x2e
0x1401d2d3f: xor     r9d,r9d
0x1401d2d42: xor     r8d,r8d
0x1401d2d45: lea     rdx,[rbp+0xdf0]
0x1401d2d4c: lea     rcx,[rip+0x2499b1d]        # 0x14266c870
0x1401d2d53: call    0x140af3400
0x1401d2d58: nop     
0x1401d2d59: lea     rcx,[rbp+0x15f0]
0x1401d2d60: call    0x140069460
0x1401d2d65: nop     
0x1401d2d66: lea     rcx,[rbp+0xdf0]
0x1401d2d6d: call    0x140069460
0x1401d2d72: cmp     DWORD PTR [r13+0x83c0],0x0
0x1401d2d7a: jle     0x1401d2ef0
0x1401d2d80: mov     edi,0x1
0x1401d2d85: lea     rbx,[rip+0x24a4184]        # 0x142676f10
0x1401d2d8c: nop     DWORD PTR [rax+0x0]
0x1401d2d90: mov     r8d,r15d
0x1401d2d93: mov     edx,edi
0x1401d2d95: lea     rcx,[rip+0x2499ad4]        # 0x14266c870
0x1401d2d9c: call    0x1400bc750
0x1401d2da1: lea     rcx,[rip+0x2499ac8]        # 0x14266c870
0x1401d2da8: cmp     BYTE PTR [r13+0x83c4],0x0
0x1401d2db0: je      0x1401d2db7
0x1401d2db2: mov     edx,DWORD PTR [rbx-0x18]
0x1401d2db5: jmp     0x1401d2dba
0x1401d2db7: mov     edx,DWORD PTR [rbx-0x8]
0x1401d2dba: call    0x140af4570
0x1401d2dbf: xor     edx,edx
0x1401d2dc1: lea     rcx,[rip+0x221ce28]        # 0x1423efbf0
0x1401d2dc8: call    0x1400735c0
0x1401d2dcd: test    al,al
0x1401d2dcf: je      0x1401d2de2
0x1401d2dd1: mov     r8b,0x1
0x1401d2dd4: xor     edx,edx
0x1401d2dd6: lea     rcx,[rip+0x2499a93]        # 0x14266c870
0x1401d2ddd: call    0x1400bc7c0
0x1401d2de2: mov     r8d,r12d
0x1401d2de5: mov     edx,edi
0x1401d2de7: lea     rcx,[rip+0x2499a82]        # 0x14266c870
0x1401d2dee: call    0x1400bc750
0x1401d2df3: lea     rcx,[rip+0x2499a76]        # 0x14266c870
0x1401d2dfa: cmp     BYTE PTR [r13+0x83c4],0x0
0x1401d2e02: je      0x1401d2e09
0x1401d2e04: mov     edx,DWORD PTR [rbx+0x18]
0x1401d2e07: jmp     0x1401d2e0c
0x1401d2e09: mov     edx,DWORD PTR [rbx+0x8]
0x1401d2e0c: call    0x140af4570
0x1401d2e11: xor     edx,edx
0x1401d2e13: lea     rcx,[rip+0x221cdd6]        # 0x1423efbf0
0x1401d2e1a: call    0x1400735c0
0x1401d2e1f: test    al,al
0x1401d2e21: je      0x1401d2e34
0x1401d2e23: mov     r8b,0x1
0x1401d2e26: xor     edx,edx
0x1401d2e28: lea     rcx,[rip+0x2499a41]        # 0x14266c870
0x1401d2e2f: call    0x1400bc7c0
0x1401d2e34: lea     r8d,[r15+0x1]
0x1401d2e38: mov     edx,edi
0x1401d2e3a: lea     rcx,[rip+0x2499a2f]        # 0x14266c870
0x1401d2e41: call    0x1400bc750
0x1401d2e46: lea     rcx,[rip+0x2499a23]        # 0x14266c870
0x1401d2e4d: cmp     BYTE PTR [r13+0x83c4],0x0
0x1401d2e55: je      0x1401d2e5c
0x1401d2e57: mov     edx,DWORD PTR [rbx-0x10]
0x1401d2e5a: jmp     0x1401d2e5e
0x1401d2e5c: mov     edx,DWORD PTR [rbx]
0x1401d2e5e: call    0x140af4570
0x1401d2e63: xor     edx,edx
0x1401d2e65: lea     rcx,[rip+0x221cd84]        # 0x1423efbf0
0x1401d2e6c: call    0x1400735c0
0x1401d2e71: test    al,al
0x1401d2e73: je      0x1401d2e86
0x1401d2e75: mov     r8b,0x1
0x1401d2e78: xor     edx,edx
0x1401d2e7a: lea     rcx,[rip+0x24999ef]        # 0x14266c870
0x1401d2e81: call    0x1400bc7c0
0x1401d2e86: lea     r8d,[r12+0x1]
0x1401d2e8b: mov     edx,edi
0x1401d2e8d: lea     rcx,[rip+0x24999dc]        # 0x14266c870
0x1401d2e94: call    0x1400bc750
0x1401d2e99: lea     rcx,[rip+0x24999d0]        # 0x14266c870
0x1401d2ea0: cmp     BYTE PTR [r13+0x83c4],0x0
0x1401d2ea8: je      0x1401d2eaf
0x1401d2eaa: mov     edx,DWORD PTR [rbx+0x20]
0x1401d2ead: jmp     0x1401d2eb2
0x1401d2eaf: mov     edx,DWORD PTR [rbx+0x10]
0x1401d2eb2: call    0x140af4570
0x1401d2eb7: xor     edx,edx
0x1401d2eb9: lea     rcx,[rip+0x221cd30]        # 0x1423efbf0
0x1401d2ec0: call    0x1400735c0
0x1401d2ec5: test    al,al
0x1401d2ec7: je      0x1401d2eda
0x1401d2ec9: mov     r8b,0x1
0x1401d2ecc: xor     edx,edx
0x1401d2ece: lea     rcx,[rip+0x249999b]        # 0x14266c870
0x1401d2ed5: call    0x1400bc7c0
0x1401d2eda: inc     edi
0x1401d2edc: add     rbx,0x4
0x1401d2ee0: lea     rax,[rip+0x24a4031]        # 0x142676f18
0x1401d2ee7: cmp     rbx,rax
0x1401d2eea: jl      0x1401d2d90
0x1401d2ef0: mov     r14,QWORD PTR [rbp-0x78]
0x1401d2ef4: test    r14d,r14d
0x1401d2ef7: jle     0x1401d33a6
0x1401d2efd: mov     eax,DWORD PTR [r13+0x83d0]
0x1401d2f04: mov     ecx,r14d
0x1401d2f07: mov     r15d,DWORD PTR [rsp+0x74]
0x1401d2f0c: sub     ecx,r15d
0x1401d2f0f: cmp     eax,ecx
0x1401d2f11: cmovle  ecx,eax
0x1401d2f14: xor     esi,esi
0x1401d2f16: test    ecx,ecx
0x1401d2f18: cmovns  esi,ecx
0x1401d2f1b: lea     r13d,[rsi+r15*1]
0x1401d2f1f: cmp     esi,r13d
0x1401d2f22: jge     0x1401d300b
0x1401d2f28: mov     rdi,QWORD PTR [rsp+0x78]
0x1401d2f2d: add     rdi,0x8388
0x1401d2f34: mov     ebx,0x5
0x1401d2f39: mov     r12d,ebx
0x1401d2f3c: sub     r12d,esi
0x1401d2f3f: mov     r15d,0x4
0x1401d2f45: cmp     esi,r14d
0x1401d2f48: jge     0x1401d3006
0x1401d2f4e: lea     edx,[r12+rsi*1]
0x1401d2f52: mov     r8d,DWORD PTR [rbp-0x60]
0x1401d2f56: lea     rcx,[rip+0x2499913]        # 0x14266c870
0x1401d2f5d: call    0x1400bc750
0x1401d2f62: mov     rcx,QWORD PTR [rsp+0x78]
0x1401d2f67: mov     eax,DWORD PTR [rcx+0x83c8]
0x1401d2f6d: cmp     eax,0x42
0x1401d2f70: jl      0x1401d3087
0x1401d2f76: cmp     esi,DWORD PTR [rcx+0x83cc]
0x1401d2f7c: jl      0x1401d317c
0x1401d2f82: xor     r8d,r8d
0x1401d2f85: xor     edx,edx
0x1401d2f87: mov     r9b,0x1
0x1401d2f8a: lea     rcx,[rip+0x24998df]        # 0x14266c870
0x1401d2f91: call    0x1400bc760
0x1401d2f96: movsxd  r15,esi
0x1401d2f99: mov     rdx,r15
0x1401d2f9c: mov     rcx,rdi
0x1401d2f9f: call    0x140070850
0x1401d2fa4: mov     rcx,QWORD PTR [rax]
0x1401d2fa7: call    0x140070960
0x1401d2fac: test    eax,eax
0x1401d2fae: jle     0x1401d2ff5
0x1401d2fb0: xor     ebx,ebx
0x1401d2fb2: mov     r14d,eax
0x1401d2fb5: mov     rdx,r15
0x1401d2fb8: mov     rcx,rdi
0x1401d2fbb: call    0x140070850
0x1401d2fc0: mov     rdx,rbx
0x1401d2fc3: mov     rcx,QWORD PTR [rax]
0x1401d2fc6: call    0x1400fcbe0
0x1401d2fcb: mov     r8b,0x1
0x1401d2fce: lea     rcx,[rip+0x249989b]        # 0x14266c870
0x1401d2fd5: cmp     BYTE PTR [rax],0x20
0x1401d2fd8: mov     dl,0x20
0x1401d2fda: je      0x1401d2fde
0x1401d2fdc: mov     dl,0xfa
0x1401d2fde: call    0x1400bc7c0
0x1401d2fe3: inc     rbx
0x1401d2fe6: sub     r14,0x1
0x1401d2fea: jne     0x1401d2fb5
0x1401d2fec: mov     ebx,0x5
0x1401d2ff1: mov     r14,QWORD PTR [rbp-0x78]
0x1401d2ff5: mov     r15d,0x4
0x1401d2ffb: inc     esi
0x1401d2ffd: cmp     esi,r13d
0x1401d3000: jl      0x1401d2f45
0x1401d3006: mov     r15d,DWORD PTR [rsp+0x74]
0x1401d300b: cmp     r14d,r15d
0x1401d300e: jle     0x1401d33a1
0x1401d3014: lea     ebx,[r15+0x3]
0x1401d3018: lea     rcx,[rbp+0x2d0]
0x1401d301f: call    0x1400bc990
0x1401d3024: lea     r9d,[r14-0x1]
0x1401d3028: mov     DWORD PTR [rsp+0x30],ebx
0x1401d302c: mov     DWORD PTR [rsp+0x28],0x6
0x1401d3034: mov     DWORD PTR [rsp+0x20],r15d
0x1401d3039: xor     r8d,r8d
0x1401d303c: mov     r13,QWORD PTR [rsp+0x78]
0x1401d3041: mov     edx,DWORD PTR [r13+0x83d0]
0x1401d3048: lea     rcx,[rbp+0x2d0]
0x1401d304f: call    0x1400bc9b0
0x1401d3054: mov     r9d,DWORD PTR [rbp-0x28]
0x1401d3058: dec     r9d
0x1401d305b: mov     DWORD PTR [rsp+0x28],0x0
0x1401d3063: movzx   eax,BYTE PTR [r13+0x83d4]
0x1401d306b: mov     BYTE PTR [rsp+0x20],al
0x1401d306f: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d3073: mov     edx,DWORD PTR [rbp-0x38]
0x1401d3076: lea     rcx,[rbp+0x2d0]
0x1401d307d: call    0x1414284b0
0x1401d3082: jmp     0x1401d33a6
0x1401d3087: cmp     eax,0x21
0x1401d308a: jl      0x1401d317c
0x1401d3090: cmp     esi,DWORD PTR [rcx+0x83cc]
0x1401d3096: jl      0x1401d317c
0x1401d309c: add     rcx,0x83a0
0x1401d30a3: movsxd  r15,esi
0x1401d30a6: mov     rdx,r15
0x1401d30a9: call    0x140070990
0x1401d30ae: movsxd  rcx,DWORD PTR [rax]
0x1401d30b1: cmp     ecx,0xf
0x1401d30b4: ja      0x1401d3105
0x1401d30b6: lea     rdx,[rip+0xffffffffffe2cf43]        # 0x140000000
0x1401d30bd: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d676c]
0x1401d30c4: add     rcx,rdx
0x1401d30c7: jmp     rcx
0x1401d30c9: xor     edx,edx
0x1401d30cb: jmp     0x1401d310a
0x1401d30cd: mov     edx,0x6
0x1401d30d2: mov     r9b,0x1
0x1401d30d5: jmp     0x1401d310d
0x1401d30d7: xor     edx,edx
0x1401d30d9: mov     r9b,0x1
0x1401d30dc: jmp     0x1401d310d
0x1401d30de: mov     edx,0x1
0x1401d30e3: jmp     0x1401d310a
0x1401d30e5: mov     edx,0x2
0x1401d30ea: jmp     0x1401d310a
0x1401d30ec: mov     edx,0x3
0x1401d30f1: jmp     0x1401d310a
0x1401d30f3: mov     edx,0x4
0x1401d30f8: jmp     0x1401d310a
0x1401d30fa: mov     edx,ebx
0x1401d30fc: jmp     0x1401d310a
0x1401d30fe: mov     edx,0x6
0x1401d3103: jmp     0x1401d310a
0x1401d3105: mov     edx,0x7
0x1401d310a: xor     r9d,r9d
0x1401d310d: xor     r8d,r8d
0x1401d3110: lea     rcx,[rip+0x2499759]        # 0x14266c870
0x1401d3117: call    0x1400bc760
0x1401d311c: mov     rdx,r15
0x1401d311f: mov     rcx,rdi
0x1401d3122: call    0x140070850
0x1401d3127: mov     rcx,QWORD PTR [rax]
0x1401d312a: call    0x140070960
0x1401d312f: test    eax,eax
0x1401d3131: jle     0x1401d2ff5
0x1401d3137: xor     ebx,ebx
0x1401d3139: mov     r14d,eax
0x1401d313c: nop     DWORD PTR [rax+0x0]
0x1401d3140: mov     rdx,r15
0x1401d3143: mov     rcx,rdi
0x1401d3146: call    0x140070850
0x1401d314b: mov     rdx,rbx
0x1401d314e: mov     rcx,QWORD PTR [rax]
0x1401d3151: call    0x1400fcbe0
0x1401d3156: mov     r8b,0x1
0x1401d3159: lea     rcx,[rip+0x2499710]        # 0x14266c870
0x1401d3160: cmp     BYTE PTR [rax],0x20
0x1401d3163: mov     dl,0x20
0x1401d3165: je      0x1401d3169
0x1401d3167: mov     dl,0xf9
0x1401d3169: call    0x1400bc7c0
0x1401d316e: inc     rbx
0x1401d3171: sub     r14,0x1
0x1401d3175: jne     0x1401d3140
0x1401d3177: jmp     0x1401d2fec
0x1401d317c: cmp     eax,0x2
0x1401d317f: jl      0x1401d32b1
0x1401d3185: cmp     esi,DWORD PTR [rcx+0x83cc]
0x1401d318b: jl      0x1401d32b1
0x1401d3191: add     rcx,0x83a0
0x1401d3198: movsxd  r15,esi
0x1401d319b: mov     rdx,r15
0x1401d319e: call    0x140070990
0x1401d31a3: movsxd  rcx,DWORD PTR [rax]
0x1401d31a6: cmp     ecx,0xf
0x1401d31a9: ja      0x1401d323e
0x1401d31af: lea     rdx,[rip+0xffffffffffe2ce4a]        # 0x140000000
0x1401d31b6: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d67ac]
0x1401d31bd: add     rcx,rdx
0x1401d31c0: jmp     rcx
0x1401d31c2: xor     edx,edx
0x1401d31c4: xor     r9d,r9d
0x1401d31c7: jmp     0x1401d3246
0x1401d31c9: mov     edx,0x1
0x1401d31ce: xor     r9d,r9d
0x1401d31d1: jmp     0x1401d3246
0x1401d31d3: mov     edx,0x2
0x1401d31d8: xor     r9d,r9d
0x1401d31db: jmp     0x1401d3246
0x1401d31dd: mov     edx,0x3
0x1401d31e2: xor     r9d,r9d
0x1401d31e5: jmp     0x1401d3246
0x1401d31e7: mov     edx,0x4
0x1401d31ec: xor     r9d,r9d
0x1401d31ef: jmp     0x1401d3246
0x1401d31f1: mov     edx,ebx
0x1401d31f3: xor     r9d,r9d
0x1401d31f6: jmp     0x1401d3246
0x1401d31f8: xor     r9d,r9d
0x1401d31fb: jmp     0x1401d3241
0x1401d31fd: xor     edx,edx
0x1401d31ff: mov     r9b,0x1
0x1401d3202: jmp     0x1401d3246
0x1401d3204: mov     edx,0x1
0x1401d3209: movzx   r9d,dl
0x1401d320d: jmp     0x1401d3246
0x1401d320f: mov     edx,0x2
0x1401d3214: mov     r9b,0x1
0x1401d3217: jmp     0x1401d3246
0x1401d3219: mov     edx,0x3
0x1401d321e: mov     r9b,0x1
0x1401d3221: jmp     0x1401d3246
0x1401d3223: mov     edx,0x4
0x1401d3228: mov     r9b,0x1
0x1401d322b: jmp     0x1401d3246
0x1401d322d: mov     edx,ebx
0x1401d322f: mov     r9b,0x1
0x1401d3232: jmp     0x1401d3246
0x1401d3234: mov     edx,0x6
0x1401d3239: mov     r9b,0x1
0x1401d323c: jmp     0x1401d3246
0x1401d323e: mov     r9b,0x1
0x1401d3241: mov     edx,0x7
0x1401d3246: xor     r8d,r8d
0x1401d3249: lea     rcx,[rip+0x2499620]        # 0x14266c870
0x1401d3250: call    0x1400bc760
0x1401d3255: mov     rdx,r15
0x1401d3258: mov     rcx,rdi
0x1401d325b: call    0x140070850
0x1401d3260: mov     rcx,QWORD PTR [rax]
0x1401d3263: call    0x140070960
0x1401d3268: test    eax,eax
0x1401d326a: jle     0x1401d2ff5
0x1401d3270: xor     ebx,ebx
0x1401d3272: mov     r14d,eax
0x1401d3275: mov     rdx,r15
0x1401d3278: mov     rcx,rdi
0x1401d327b: call    0x140070850
0x1401d3280: mov     rdx,rbx
0x1401d3283: mov     rcx,QWORD PTR [rax]
0x1401d3286: call    0x1400fcbe0
0x1401d328b: mov     r8b,0x1
0x1401d328e: lea     rcx,[rip+0x24995db]        # 0x14266c870
0x1401d3295: cmp     BYTE PTR [rax],0x20
0x1401d3298: mov     dl,0x20
0x1401d329a: je      0x1401d329e
0x1401d329c: mov     dl,0xfe
0x1401d329e: call    0x1400bc7c0
0x1401d32a3: inc     rbx
0x1401d32a6: sub     r14,0x1
0x1401d32aa: jne     0x1401d3275
0x1401d32ac: jmp     0x1401d2fec
0x1401d32b1: add     rcx,0x83a0
0x1401d32b8: movsxd  rbx,esi
0x1401d32bb: mov     rdx,rbx
0x1401d32be: call    0x140070990
0x1401d32c3: movsxd  rcx,DWORD PTR [rax]
0x1401d32c6: cmp     ecx,0xf
0x1401d32c9: ja      0x1401d3360
0x1401d32cf: lea     rdx,[rip+0xffffffffffe2cd2a]        # 0x140000000
0x1401d32d6: mov     ecx,DWORD PTR [rdx+rcx*4+0x1d67ec]
0x1401d32dd: add     rcx,rdx
0x1401d32e0: jmp     rcx
0x1401d32e2: xor     edx,edx
0x1401d32e4: xor     r9d,r9d
0x1401d32e7: jmp     0x1401d3368
0x1401d32e9: mov     edx,0x1
0x1401d32ee: xor     r9d,r9d
0x1401d32f1: jmp     0x1401d3368
0x1401d32f3: mov     edx,0x2
0x1401d32f8: xor     r9d,r9d
0x1401d32fb: jmp     0x1401d3368
0x1401d32fd: mov     edx,0x3
0x1401d3302: xor     r9d,r9d
0x1401d3305: jmp     0x1401d3368
0x1401d3307: mov     edx,r15d
0x1401d330a: xor     r9d,r9d
0x1401d330d: jmp     0x1401d3368
0x1401d330f: mov     edx,0x5
0x1401d3314: xor     r9d,r9d
0x1401d3317: jmp     0x1401d3368
0x1401d3319: xor     r9d,r9d
0x1401d331c: jmp     0x1401d3363
0x1401d331e: xor     edx,edx
0x1401d3320: mov     r9b,0x1
0x1401d3323: jmp     0x1401d3368
0x1401d3325: mov     edx,0x1
0x1401d332a: movzx   r9d,dl
0x1401d332e: jmp     0x1401d3368
0x1401d3330: mov     edx,0x2
0x1401d3335: mov     r9b,0x1
0x1401d3338: jmp     0x1401d3368
0x1401d333a: mov     edx,0x3
0x1401d333f: mov     r9b,0x1
0x1401d3342: jmp     0x1401d3368
0x1401d3344: mov     edx,r15d
0x1401d3347: mov     r9b,0x1
0x1401d334a: jmp     0x1401d3368
0x1401d334c: mov     edx,0x5
0x1401d3351: mov     r9b,0x1
0x1401d3354: jmp     0x1401d3368
0x1401d3356: mov     edx,0x6
0x1401d335b: mov     r9b,0x1
0x1401d335e: jmp     0x1401d3368
0x1401d3360: mov     r9b,0x1
0x1401d3363: mov     edx,0x7
0x1401d3368: xor     r8d,r8d
0x1401d336b: lea     rcx,[rip+0x24994fe]        # 0x14266c870
0x1401d3372: call    0x1400bc760
0x1401d3377: mov     rdx,rbx
0x1401d337a: mov     rcx,rdi
0x1401d337d: call    0x140070850
0x1401d3382: xor     r9d,r9d
0x1401d3385: xor     r8d,r8d
0x1401d3388: mov     rdx,QWORD PTR [rax]
0x1401d338b: lea     rcx,[rip+0x24994de]        # 0x14266c870
0x1401d3392: call    0x140af3400
0x1401d3397: mov     ebx,0x5
0x1401d339c: jmp     0x1401d2ffb
0x1401d33a1: mov     r13,QWORD PTR [rsp+0x78]
0x1401d33a6: lea     rcx,[rbp+0x13b0]
0x1401d33ad: call    0x140069460
0x1401d33b2: jmp     0x1401c8dd8
0x1401d33b7: mov     rcx,QWORD PTR [rbx+0x83d8]
0x1401d33be: lea     r13d,[rsi+0x2]
0x1401d33c2: mov     edx,DWORD PTR [rbp-0x60]
0x1401d33c5: dec     edx
0x1401d33c7: test    rcx,rcx
0x1401d33ca: je      0x1401d389d
0x1401d33d0: lea     ebx,[rdx-0x4]
0x1401d33d3: mov     DWORD PTR [rsp+0x74],ebx
0x1401d33d7: add     rcx,0x30
0x1401d33db: call    0x140070a80
0x1401d33e0: mov     r15,rax
0x1401d33e3: mov     QWORD PTR [rbp+0x18],rax
0x1401d33e7: mov     rax,QWORD PTR [rsp+0x78]
0x1401d33ec: mov     rcx,QWORD PTR [rax+0x83d8]
0x1401d33f3: add     rcx,0xa8
0x1401d33fa: call    0x1400709a0
0x1401d33ff: lea     r14d,[rax+r15*1]
0x1401d3403: mov     DWORD PTR [rbp-0x60],r14d
0x1401d3407: cmp     r14d,ebx
0x1401d340a: cmovle  r12d,edi
0x1401d340e: mov     DWORD PTR [rbp-0x58],r12d
0x1401d3412: xor     r8d,r8d
0x1401d3415: mov     edx,0x3
0x1401d341a: mov     r9b,0x1
0x1401d341d: lea     rcx,[rip+0x249944c]        # 0x14266c870
0x1401d3424: call    0x1400bc760
0x1401d3429: lea     r8d,[rsi+0x2]
0x1401d342d: mov     edx,0x1
0x1401d3432: lea     rcx,[rip+0x2499437]        # 0x14266c870
0x1401d3439: call    0x1400bc750
0x1401d343e: mov     rax,QWORD PTR [rsp+0x78]
0x1401d3443: mov     rdx,QWORD PTR [rax+0x83d8]
0x1401d344a: lea     rcx,[rbp+0x13d0]
0x1401d3451: call    0x140070c00
0x1401d3456: nop     
0x1401d3457: sub     edi,esi
0x1401d3459: lea     rcx,[rbp+0x13d0]
0x1401d3460: call    0x140070960
0x1401d3465: lea     ecx,[rdi-0x2]
0x1401d3468: movsxd  rdx,ecx
0x1401d346b: cmp     rax,rdx
0x1401d346e: jb      0x1401d34d2
0x1401d3470: lea     esi,[rdi-0x3]
0x1401d3473: test    esi,esi
0x1401d3475: js      0x1401d348d
0x1401d3477: movsxd  rdx,edi
0x1401d347a: sub     rdx,0x3
0x1401d347e: xor     r8d,r8d
0x1401d3481: lea     rcx,[rbp+0x13d0]
0x1401d3488: call    0x1400e2860
0x1401d348d: cmp     esi,0x3
0x1401d3490: jle     0x1401d34d2
0x1401d3492: movsxd  rdx,edi
0x1401d3495: sub     rdx,0x6
0x1401d3499: lea     rcx,[rbp+0x13d0]
0x1401d34a0: call    0x1400fcbe0
0x1401d34a5: mov     BYTE PTR [rax],0x2e
0x1401d34a8: lea     eax,[rdi-0x5]
0x1401d34ab: movsxd  rdx,eax
0x1401d34ae: lea     rcx,[rbp+0x13d0]
0x1401d34b5: call    0x1400fcbe0
0x1401d34ba: mov     BYTE PTR [rax],0x2e
0x1401d34bd: lea     eax,[rdi-0x4]
0x1401d34c0: movsxd  rdx,eax
0x1401d34c3: lea     rcx,[rbp+0x13d0]
0x1401d34ca: call    0x1400fcbe0
0x1401d34cf: mov     BYTE PTR [rax],0x2e
0x1401d34d2: xor     r9d,r9d
0x1401d34d5: xor     r8d,r8d
0x1401d34d8: lea     rdx,[rbp+0x13d0]
0x1401d34df: lea     rcx,[rip+0x249938a]        # 0x14266c870
0x1401d34e6: call    0x140af3400
0x1401d34eb: test    r14d,r14d
0x1401d34ee: jle     0x1401d3887
0x1401d34f4: mov     rdi,QWORD PTR [rsp+0x78]
0x1401d34f9: mov     eax,DWORD PTR [rdi+0x83e0]
0x1401d34ff: mov     ecx,r14d
0x1401d3502: sub     ecx,ebx
0x1401d3504: cmp     eax,ecx
0x1401d3506: cmovle  ecx,eax
0x1401d3509: xor     esi,esi
0x1401d350b: mov     r12d,esi
0x1401d350e: test    ecx,ecx
0x1401d3510: cmovns  r12d,ecx
0x1401d3514: lea     eax,[rbx+r12*1]
0x1401d3518: mov     DWORD PTR [rbp-0x28],eax
0x1401d351b: cmp     r12d,eax
0x1401d351e: jge     0x1401d3814
0x1401d3524: mov     eax,r15d
0x1401d3527: sub     eax,r12d
0x1401d352a: add     eax,0x5
0x1401d352d: mov     DWORD PTR [rbp-0x20],eax
0x1401d3530: cmp     r12d,r14d
0x1401d3533: jge     0x1401d3810
0x1401d3539: mov     ebx,r12d
0x1401d353c: sub     ebx,r15d
0x1401d353f: lea     edx,[rax+rbx*1]
0x1401d3542: mov     r8d,r13d
0x1401d3545: lea     rcx,[rip+0x2499324]        # 0x14266c870
0x1401d354c: call    0x1400bc750
0x1401d3551: lea     rcx,[rbp+0xf50]
0x1401d3558: call    0x140070cc0
0x1401d355d: nop     
0x1401d355e: mov     rcx,QWORD PTR [rdi+0x83d8]
0x1401d3565: cmp     r12d,r15d
0x1401d3568: jge     0x1401d36e1
0x1401d356e: add     rcx,0x90
0x1401d3575: movsxd  r15,r12d
0x1401d3578: mov     rdx,r15
0x1401d357b: call    0x140070990
0x1401d3580: lea     rdx,[rbp+0xf50]
0x1401d3587: mov     ecx,DWORD PTR [rax]
0x1401d3589: call    0x140547840
0x1401d358e: lea     rcx,[rbp+0xf50]
0x1401d3595: call    0x140546b30
0x1401d359a: lea     rdx,[rip+0x143044f]        # 0x1416039f0 ; literal=' '
0x1401d35a1: lea     rcx,[rbp+0xf50]
0x1401d35a8: call    0x140070b90
0x1401d35ad: lea     rcx,[rbp+0x1610]
0x1401d35b4: call    0x140070cc0
0x1401d35b9: nop     
0x1401d35ba: mov     rcx,QWORD PTR [rdi+0x83d8]
0x1401d35c1: add     rcx,0x90
0x1401d35c8: mov     rdx,r15
0x1401d35cb: call    0x140070990
0x1401d35d0: mov     r14d,esi
0x1401d35d3: cmp     DWORD PTR [rax],0x1
0x1401d35d6: setle   r14b
0x1401d35da: mov     rcx,QWORD PTR [rdi+0x83d8]
0x1401d35e1: add     rcx,0x78
0x1401d35e5: mov     rdx,r15
0x1401d35e8: call    0x140070990
0x1401d35ed: mov     esi,DWORD PTR [rax]
0x1401d35ef: mov     rcx,QWORD PTR [rdi+0x83d8]
0x1401d35f6: add     rcx,0x60
0x1401d35fa: mov     rdx,r15
0x1401d35fd: call    0x140070a70
0x1401d3602: movzx   edi,WORD PTR [rax]
0x1401d3605: mov     rax,QWORD PTR [rsp+0x78]
0x1401d360a: mov     rcx,QWORD PTR [rax+0x83d8]
0x1401d3611: add     rcx,0x48
0x1401d3615: mov     rdx,r15
0x1401d3618: call    0x140070a70
0x1401d361d: movzx   ebx,WORD PTR [rax]
0x1401d3620: mov     rax,QWORD PTR [rsp+0x78]
0x1401d3625: mov     rcx,QWORD PTR [rax+0x83d8]
0x1401d362c: add     rcx,0x30
0x1401d3630: mov     rdx,r15
0x1401d3633: call    0x140070a70
0x1401d3638: xor     ecx,ecx
0x1401d363a: mov     DWORD PTR [rsp+0x68],ecx
0x1401d363e: mov     DWORD PTR [rsp+0x60],ecx
0x1401d3642: mov     BYTE PTR [rsp+0x58],0x1
0x1401d3647: mov     DWORD PTR [rsp+0x50],0xffffffff
0x1401d364f: mov     DWORD PTR [rsp+0x48],0xffffffff
0x1401d3657: mov     QWORD PTR [rsp+0x40],rcx
0x1401d365c: mov     BYTE PTR [rsp+0x38],cl
0x1401d3660: mov     DWORD PTR [rsp+0x30],ecx
0x1401d3664: mov     DWORD PTR [rsp+0x28],r14d
0x1401d3669: mov     DWORD PTR [rsp+0x20],esi
0x1401d366d: movzx   r9d,di
0x1401d3671: movzx   r8d,bx
0x1401d3675: movzx   edx,WORD PTR [rax]
0x1401d3678: lea     rcx,[rbp+0x1610]
0x1401d367f: call    0x140a9c6b0
0x1401d3684: lea     rdx,[rbp+0x1610]
0x1401d368b: lea     rcx,[rbp+0xf50]
0x1401d3692: call    0x1400bb340
0x1401d3697: xor     r8d,r8d
0x1401d369a: mov     edx,0x6
0x1401d369f: mov     r9b,0x1
0x1401d36a2: lea     rcx,[rip+0x24991c7]        # 0x14266c870
0x1401d36a9: call    0x1400bc760
0x1401d36ae: xor     r9d,r9d
0x1401d36b1: xor     r8d,r8d
0x1401d36b4: lea     rdx,[rbp+0xf50]
0x1401d36bb: lea     rcx,[rip+0x24991ae]        # 0x14266c870
0x1401d36c2: call    0x140af3400
0x1401d36c7: nop     
0x1401d36c8: lea     rcx,[rbp+0x1610]
0x1401d36cf: call    0x140069460
0x1401d36d4: mov     r14d,DWORD PTR [rbp-0x60]
0x1401d36d8: mov     r15,QWORD PTR [rbp+0x18]
0x1401d36dc: jmp     0x1401d37ea
0x1401d36e1: add     rcx,0xd8
0x1401d36e8: movsxd  rsi,ebx
0x1401d36eb: mov     rdx,rsi
0x1401d36ee: call    0x140070990
0x1401d36f3: lea     rdx,[rbp+0xf50]
0x1401d36fa: mov     ecx,DWORD PTR [rax]
0x1401d36fc: call    0x140547840
0x1401d3701: lea     rcx,[rbp+0xf50]
0x1401d3708: call    0x140546b30
0x1401d370d: lea     rdx,[rip+0x14302dc]        # 0x1416039f0 ; literal=' '
0x1401d3714: lea     rcx,[rbp+0xf50]
0x1401d371b: call    0x140070b90
0x1401d3720: lea     rcx,[rbp+0x1630]
0x1401d3727: call    0x140070cc0
0x1401d372c: nop     
0x1401d372d: mov     rcx,QWORD PTR [rdi+0x83d8]
0x1401d3734: add     rcx,0xc0
0x1401d373b: mov     rdx,rsi
0x1401d373e: call    0x140070990
0x1401d3743: movzx   edi,WORD PTR [rax]
0x1401d3746: mov     rax,QWORD PTR [rsp+0x78]
0x1401d374b: mov     rcx,QWORD PTR [rax+0x83d8]
0x1401d3752: add     rcx,0xd8
0x1401d3759: mov     rdx,rsi
0x1401d375c: call    0x140070990
0x1401d3761: cmp     DWORD PTR [rax],0x1
0x1401d3764: setne   bl
0x1401d3767: mov     rax,QWORD PTR [rsp+0x78]
0x1401d376c: mov     rcx,QWORD PTR [rax+0x83d8]
0x1401d3773: add     rcx,0xa8
0x1401d377a: mov     rdx,rsi
0x1401d377d: call    0x140070990
0x1401d3782: movzx   r9d,di
0x1401d3786: movzx   r8d,bl
0x1401d378a: lea     rdx,[rbp+0x1630]
0x1401d3791: movzx   ecx,WORD PTR [rax]
0x1401d3794: call    0x140abd670
0x1401d3799: lea     rdx,[rbp+0x1630]
0x1401d37a0: lea     rcx,[rbp+0xf50]
0x1401d37a7: call    0x1400bb340
0x1401d37ac: xor     r8d,r8d
0x1401d37af: mov     edx,0x2
0x1401d37b4: mov     r9b,0x1
0x1401d37b7: lea     rcx,[rip+0x24990b2]        # 0x14266c870
0x1401d37be: call    0x1400bc760
0x1401d37c3: xor     r9d,r9d
0x1401d37c6: xor     r8d,r8d
0x1401d37c9: lea     rdx,[rbp+0xf50]
0x1401d37d0: lea     rcx,[rip+0x2499099]        # 0x14266c870
0x1401d37d7: call    0x140af3400
0x1401d37dc: nop     
0x1401d37dd: lea     rcx,[rbp+0x1630]
0x1401d37e4: call    0x140069460
0x1401d37e9: nop     
0x1401d37ea: lea     rcx,[rbp+0xf50]
0x1401d37f1: call    0x140069460
0x1401d37f6: inc     r12d
0x1401d37f9: cmp     r12d,DWORD PTR [rbp-0x28]
0x1401d37fd: mov     eax,DWORD PTR [rbp-0x20]
0x1401d3800: mov     rdi,QWORD PTR [rsp+0x78]
0x1401d3805: mov     esi,0x0
0x1401d380a: jl      0x1401d3530
0x1401d3810: mov     ebx,DWORD PTR [rsp+0x74]
0x1401d3814: cmp     r14d,ebx
0x1401d3817: jle     0x1401d3887
0x1401d3819: add     ebx,0x3
0x1401d381c: lea     rcx,[rbp+0x2b0]
0x1401d3823: call    0x1400bc990
0x1401d3828: lea     r9d,[r14-0x1]
0x1401d382c: mov     DWORD PTR [rsp+0x30],ebx
0x1401d3830: mov     DWORD PTR [rsp+0x28],0x6
0x1401d3838: mov     eax,DWORD PTR [rsp+0x74]
0x1401d383c: mov     DWORD PTR [rsp+0x20],eax
0x1401d3840: xor     r8d,r8d
0x1401d3843: mov     r13,QWORD PTR [rsp+0x78]
0x1401d3848: mov     edx,DWORD PTR [r13+0x83e0]
0x1401d384f: lea     rcx,[rbp+0x2b0]
0x1401d3856: call    0x1400bc9b0
0x1401d385b: mov     r9d,DWORD PTR [rbp-0x58]
0x1401d385f: dec     r9d
0x1401d3862: mov     DWORD PTR [rsp+0x28],esi
0x1401d3866: movzx   eax,BYTE PTR [r13+0x83e4]
0x1401d386e: mov     BYTE PTR [rsp+0x20],al
0x1401d3872: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d3876: mov     edx,DWORD PTR [rbp-0x38]
0x1401d3879: lea     rcx,[rbp+0x2b0]
0x1401d3880: call    0x1414284b0
0x1401d3885: jmp     0x1401d388c
0x1401d3887: mov     r13,QWORD PTR [rsp+0x78]
0x1401d388c: lea     rcx,[rbp+0x13d0]
0x1401d3893: call    0x140069460
0x1401d3898: jmp     0x1401c8dd8
0x1401d389d: mov     eax,0x55555556
0x1401d38a2: imul    edx
0x1401d38a4: mov     r15d,edx
0x1401d38a7: shr     r15d,0x1f
0x1401d38ab: add     r15d,edx
0x1401d38ae: mov     DWORD PTR [rbp-0x28],r15d
0x1401d38b2: lea     rcx,[rbx+0x8348]
0x1401d38b9: call    0x1400709a0
0x1401d38be: mov     r14,rax
0x1401d38c1: lea     rcx,[rbx+0x8330]
0x1401d38c8: call    0x1400709a0
0x1401d38cd: add     r14d,eax
0x1401d38d0: mov     QWORD PTR [rbp+0x18],r14
0x1401d38d4: cmp     r14d,r15d
0x1401d38d7: cmovle  r12d,edi
0x1401d38db: sub     r12d,0x2
0x1401d38df: mov     DWORD PTR [rbp-0x58],r12d
0x1401d38e3: test    r14d,r14d
0x1401d38e6: jle     0x1401d3c51
0x1401d38ec: mov     DWORD PTR [rbp-0x48],0x1
0x1401d38f3: mov     eax,DWORD PTR [rbx+0x8360]
0x1401d38f9: mov     ecx,r14d
0x1401d38fc: sub     ecx,r15d
0x1401d38ff: cmp     eax,ecx
0x1401d3901: cmovle  ecx,eax
0x1401d3904: xor     edx,edx
0x1401d3906: mov     edi,edx
0x1401d3908: test    ecx,ecx
0x1401d390a: cmovns  edi,ecx
0x1401d390d: mov     DWORD PTR [rsp+0x74],edi
0x1401d3911: lea     eax,[r15+rdi*1]
0x1401d3915: mov     DWORD PTR [rbp-0x60],eax
0x1401d3918: cmp     edi,eax
0x1401d391a: jge     0x1401d3bd0
0x1401d3920: lea     r15,[rbx+0x8348]
0x1401d3927: mov     QWORD PTR [rbp+0x30],r15
0x1401d392b: lea     rsi,[rbx+0x8330]
0x1401d3932: mov     QWORD PTR [rbp+0x48],rsi
0x1401d3936: cmp     edi,r14d
0x1401d3939: jge     0x1401d3bcc
0x1401d393f: mov     QWORD PTR [rbp-0x30],rdx
0x1401d3943: mov     QWORD PTR [rbp-0x78],rdx
0x1401d3947: mov     rcx,rsi
0x1401d394a: call    0x1400709a0
0x1401d394f: mov     rcx,rsi
0x1401d3952: cmp     edi,eax
0x1401d3954: jge     0x1401d3976
0x1401d3956: movsxd  rdx,edi
0x1401d3959: call    0x140070990
0x1401d395e: movsxd  rdx,DWORD PTR [rax]
0x1401d3961: lea     rcx,[rip+0x2332420]        # 0x142505d88
0x1401d3968: call    0x140070850
0x1401d396d: mov     rax,QWORD PTR [rax]
0x1401d3970: mov     QWORD PTR [rbp-0x30],rax
0x1401d3974: jmp     0x1401d39bc
0x1401d3976: call    0x1400709a0
0x1401d397b: mov     ecx,edi
0x1401d397d: sub     ecx,eax
0x1401d397f: movsxd  rbx,ecx
0x1401d3982: mov     rcx,r15
0x1401d3985: call    0x1400709a0
0x1401d398a: cmp     rbx,rax
0x1401d398d: jae     0x1401d39bc
0x1401d398f: mov     rcx,rsi
0x1401d3992: call    0x1400709a0
0x1401d3997: mov     ecx,edi
0x1401d3999: sub     ecx,eax
0x1401d399b: movsxd  rdx,ecx
0x1401d399e: mov     rcx,r15
0x1401d39a1: call    0x140070990
0x1401d39a6: movsxd  rdx,DWORD PTR [rax]
0x1401d39a9: lea     rcx,[rip+0x23323f0]        # 0x142505da0
0x1401d39b0: call    0x140070850
0x1401d39b5: mov     rcx,QWORD PTR [rax]
0x1401d39b8: mov     QWORD PTR [rbp-0x78],rcx
0x1401d39bc: xor     r8d,r8d
0x1401d39bf: mov     edx,0x7
0x1401d39c4: mov     r9b,0x1
0x1401d39c7: lea     rcx,[rip+0x2498ea2]        # 0x14266c870
0x1401d39ce: call    0x1400bc760
0x1401d39d3: mov     esi,r13d
0x1401d39d6: cmp     r13d,r12d
0x1401d39d9: jg      0x1401d3a83
0x1401d39df: mov     eax,DWORD PTR [rbp-0x48]
0x1401d39e2: lea     r15d,[rax+0x3]
0x1401d39e6: movsxd  r14,r13d
0x1401d39e9: nop     DWORD PTR [rax+0x0]
0x1401d39f0: mov     edi,eax
0x1401d39f2: cmp     eax,r15d
0x1401d39f5: jge     0x1401d3a69
0x1401d39f7: movsxd  r12,r12d
0x1401d39fa: lea     rbx,[rip+0x249a82f]        # 0x14266e230
0x1401d3a01: mov     r8d,esi
0x1401d3a04: mov     edx,edi
0x1401d3a06: lea     rcx,[rip+0x2498e63]        # 0x14266c870
0x1401d3a0d: call    0x1400bc750
0x1401d3a12: cmp     esi,r13d
0x1401d3a15: jne     0x1401d3a1c
0x1401d3a17: mov     edx,DWORD PTR [rbx-0x18]
0x1401d3a1a: jmp     0x1401d3a28
0x1401d3a1c: cmp     r14,r12
0x1401d3a1f: jne     0x1401d3a25
0x1401d3a21: mov     edx,DWORD PTR [rbx]
0x1401d3a23: jmp     0x1401d3a28
0x1401d3a25: mov     edx,DWORD PTR [rbx-0xc]
0x1401d3a28: lea     rcx,[rip+0x2498e41]        # 0x14266c870
0x1401d3a2f: call    0x140af4570
0x1401d3a34: xor     edx,edx
0x1401d3a36: lea     rcx,[rip+0x221c1b3]        # 0x1423efbf0
0x1401d3a3d: call    0x1400735c0
0x1401d3a42: test    al,al
0x1401d3a44: je      0x1401d3a57
0x1401d3a46: mov     r8b,0x1
0x1401d3a49: xor     edx,edx
0x1401d3a4b: lea     rcx,[rip+0x2498e1e]        # 0x14266c870
0x1401d3a52: call    0x1400bc7c0
0x1401d3a57: inc     edi
0x1401d3a59: add     rbx,0x4
0x1401d3a5d: cmp     edi,r15d
0x1401d3a60: jl      0x1401d3a01
0x1401d3a62: mov     r12d,DWORD PTR [rbp-0x58]
0x1401d3a66: mov     eax,DWORD PTR [rbp-0x48]
0x1401d3a69: inc     esi
0x1401d3a6b: inc     r14
0x1401d3a6e: cmp     esi,r12d
0x1401d3a71: jle     0x1401d39f0
0x1401d3a77: mov     edi,DWORD PTR [rsp+0x74]
0x1401d3a7b: mov     r14,QWORD PTR [rbp+0x18]
0x1401d3a7f: mov     r15,QWORD PTR [rbp+0x30]
0x1401d3a83: mov     esi,DWORD PTR [rbp-0x48]
0x1401d3a86: lea     edx,[rsi+0x1]
0x1401d3a89: mov     r8d,r13d
0x1401d3a8c: lea     rcx,[rip+0x2498ddd]        # 0x14266c870
0x1401d3a93: call    0x1400bc750
0x1401d3a98: lea     rcx,[rbp+0x13f0]
0x1401d3a9f: call    0x140070cc0
0x1401d3aa4: nop     
0x1401d3aa5: mov     rbx,QWORD PTR [rbp-0x30]
0x1401d3aa9: test    rbx,rbx
0x1401d3aac: je      0x1401d3adf
0x1401d3aae: xor     r8d,r8d
0x1401d3ab1: mov     edx,0x6
0x1401d3ab6: lea     rcx,[rip+0x2498db3]        # 0x14266c870
0x1401d3abd: test    BYTE PTR [rbx+0x48],0x1
0x1401d3ac1: je      0x1401d3ad1
0x1401d3ac3: xor     r9d,r9d
0x1401d3ac6: call    0x1400bc760
0x1401d3acb: lea     rdx,[rbx+0x28]
0x1401d3acf: jmp     0x1401d3b0d
0x1401d3ad1: mov     r9b,0x1
0x1401d3ad4: call    0x1400bc760
0x1401d3ad9: lea     rdx,[rbx+0x28]
0x1401d3add: jmp     0x1401d3b0d
0x1401d3adf: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d3ae3: test    rbx,rbx
0x1401d3ae6: je      0x1401d3b27
0x1401d3ae8: xor     r8d,r8d
0x1401d3aeb: mov     edx,0x6
0x1401d3af0: lea     rcx,[rip+0x2498d79]        # 0x14266c870
0x1401d3af7: test    BYTE PTR [rbx+0x20],0x1
0x1401d3afb: je      0x1401d3b02
0x1401d3afd: xor     r9d,r9d
0x1401d3b00: jmp     0x1401d3b05
0x1401d3b02: mov     r9b,0x1
0x1401d3b05: call    0x1400bc760
0x1401d3b0a: mov     rdx,rbx
0x1401d3b0d: mov     r9d,DWORD PTR [rip+0x221c0f0]        # 0x1423efc04
0x1401d3b14: add     r9d,0xfffffffd
0x1401d3b18: xor     r8d,r8d
0x1401d3b1b: lea     rcx,[rip+0x2498d4e]        # 0x14266c870
0x1401d3b22: call    0x140af3400
0x1401d3b27: lea     rcx,[rbp+0x13f0]
0x1401d3b2e: call    0x140070960
0x1401d3b33: cmp     rax,0x34
0x1401d3b37: jb      0x1401d3b89
0x1401d3b39: xor     r8d,r8d
0x1401d3b3c: mov     edx,0x33
0x1401d3b41: lea     rcx,[rbp+0x13f0]
0x1401d3b48: call    0x1400e2860
0x1401d3b4d: mov     edx,0x30
0x1401d3b52: lea     rcx,[rbp+0x13f0]
0x1401d3b59: call    0x1400fcbe0
0x1401d3b5e: mov     BYTE PTR [rax],0x2e
0x1401d3b61: mov     edx,0x31
0x1401d3b66: lea     rcx,[rbp+0x13f0]
0x1401d3b6d: call    0x1400fcbe0
0x1401d3b72: mov     BYTE PTR [rax],0x2e
0x1401d3b75: mov     edx,0x32
0x1401d3b7a: lea     rcx,[rbp+0x13f0]
0x1401d3b81: call    0x1400fcbe0
0x1401d3b86: mov     BYTE PTR [rax],0x2e
0x1401d3b89: xor     r9d,r9d
0x1401d3b8c: xor     r8d,r8d
0x1401d3b8f: lea     rdx,[rbp+0x13f0]
0x1401d3b96: lea     rcx,[rip+0x2498cd3]        # 0x14266c870
0x1401d3b9d: call    0x140af3400
0x1401d3ba2: add     esi,0x3
0x1401d3ba5: mov     DWORD PTR [rbp-0x48],esi
0x1401d3ba8: lea     rcx,[rbp+0x13f0]
0x1401d3baf: call    0x140069460
0x1401d3bb4: inc     edi
0x1401d3bb6: mov     DWORD PTR [rsp+0x74],edi
0x1401d3bba: cmp     edi,DWORD PTR [rbp-0x60]
0x1401d3bbd: mov     rsi,QWORD PTR [rbp+0x48]
0x1401d3bc1: mov     edx,0x0
0x1401d3bc6: jl      0x1401d3936
0x1401d3bcc: mov     r15d,DWORD PTR [rbp-0x28]
0x1401d3bd0: cmp     r14d,r15d
0x1401d3bd3: jle     0x1401c8dd3
0x1401d3bd9: lea     ebx,[r15*2-0x1]
0x1401d3be1: add     ebx,r15d
0x1401d3be4: lea     rcx,[rbp+0x290]
0x1401d3beb: call    0x1400bc990
0x1401d3bf0: lea     r9d,[r14-0x1]
0x1401d3bf4: mov     DWORD PTR [rsp+0x30],ebx
0x1401d3bf8: mov     DWORD PTR [rsp+0x28],0x2
0x1401d3c00: mov     DWORD PTR [rsp+0x20],r15d
0x1401d3c05: xor     r8d,r8d
0x1401d3c08: mov     r13,QWORD PTR [rsp+0x78]
0x1401d3c0d: mov     edx,DWORD PTR [r13+0x8360]
0x1401d3c14: lea     rcx,[rbp+0x290]
0x1401d3c1b: call    0x1400bc9b0
0x1401d3c20: lea     r9d,[r12+0x1]
0x1401d3c25: mov     DWORD PTR [rsp+0x28],0x0
0x1401d3c2d: movzx   eax,BYTE PTR [r13+0x8364]
0x1401d3c35: mov     BYTE PTR [rsp+0x20],al
0x1401d3c39: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d3c3d: mov     edx,DWORD PTR [rbp-0x38]
0x1401d3c40: lea     rcx,[rbp+0x290]
0x1401d3c47: call    0x1414284b0
0x1401d3c4c: jmp     0x1401c8dd8
0x1401d3c51: xor     r8d,r8d
0x1401d3c54: mov     edx,0x6
0x1401d3c59: mov     r9b,0x1
0x1401d3c5c: lea     rcx,[rip+0x2498c0d]        # 0x14266c870
0x1401d3c63: call    0x1400bc760
0x1401d3c68: lea     r8d,[rsi+0x2]
0x1401d3c6c: mov     edx,0x1
0x1401d3c71: lea     rcx,[rip+0x2498bf8]        # 0x14266c870
0x1401d3c78: call    0x1400bc750
0x1401d3c7d: lea     rdx,[rip+0x144c68c]        # 0x141620310 ; literal='No reports available'
0x1401d3c84: lea     rcx,[rbp+0x3490]
0x1401d3c8b: call    0x140069780
0x1401d3c90: nop     
0x1401d3c91: xor     r9d,r9d
0x1401d3c94: xor     r8d,r8d
0x1401d3c97: lea     rdx,[rbp+0x3490]
0x1401d3c9e: lea     rcx,[rip+0x2498bcb]        # 0x14266c870
0x1401d3ca5: call    0x140af3400
0x1401d3caa: nop     
0x1401d3cab: lea     rcx,[rbp+0x3490]
0x1401d3cb2: jmp     0x1401c8dce
0x1401d3cb7: mov     ebx,DWORD PTR [rbp-0x18]
0x1401d3cba: mov     DWORD PTR [rbp-0x60],ebx
0x1401d3cbd: lea     r15d,[rbx-0x39]
0x1401d3cc1: mov     DWORD PTR [rbp-0x10],r15d
0x1401d3cc5: mov     r12d,0x14
0x1401d3ccb: mov     eax,DWORD PTR [rip+0x221bf37]        # 0x1423efc08
0x1401d3cd1: cmp     eax,0x2e
0x1401d3cd4: jle     0x1401d3ced
0x1401d3cd6: lea     r12d,[rax-0x1a]
0x1401d3cda: cmp     r12d,0x1e
0x1401d3cde: jle     0x1401d3ced
0x1401d3ce0: mov     r12d,0x1e
0x1401d3ce6: mov     edi,ebx
0x1401d3ce8: mov     r14d,esi
0x1401d3ceb: jmp     0x1401d3d00
0x1401d3ced: mov     edi,ebx
0x1401d3cef: mov     r14d,esi
0x1401d3cf2: test    r12d,r12d
0x1401d3cf5: js      0x1401d3dd2
0x1401d3cfb: nop     DWORD PTR [rax+rax*1+0x0]
0x1401d3d00: mov     ebx,r15d
0x1401d3d03: cmp     r15d,edi
0x1401d3d06: jg      0x1401d3dc0
0x1401d3d0c: movsxd  r13,r12d
0x1401d3d0f: nop     
0x1401d3d10: mov     r8d,ebx
0x1401d3d13: mov     edx,r14d
0x1401d3d16: lea     rcx,[rip+0x2498b53]        # 0x14266c870
0x1401d3d1d: call    0x1400bc750
0x1401d3d22: xor     r8d,r8d
0x1401d3d25: xor     edx,edx
0x1401d3d27: lea     rcx,[rip+0x2498b42]        # 0x14266c870
0x1401d3d2e: call    0x1400bc7c0
0x1401d3d33: test    rsi,rsi
0x1401d3d36: jne     0x1401d3d60
0x1401d3d38: cmp     ebx,r15d
0x1401d3d3b: jne     0x1401d3d45
0x1401d3d3d: mov     edx,DWORD PTR [rip+0x249a451]        # 0x14266e194
0x1401d3d43: jmp     0x1401d3daa
0x1401d3d45: lea     rcx,[rip+0x2498b24]        # 0x14266c870
0x1401d3d4c: cmp     ebx,edi
0x1401d3d4e: jne     0x1401d3d58
0x1401d3d50: mov     edx,DWORD PTR [rip+0x249a456]        # 0x14266e1ac
0x1401d3d56: jmp     0x1401d3db1
0x1401d3d58: mov     edx,DWORD PTR [rip+0x249a442]        # 0x14266e1a0
0x1401d3d5e: jmp     0x1401d3db1
0x1401d3d60: cmp     rsi,r13
0x1401d3d63: jne     0x1401d3d8d
0x1401d3d65: cmp     ebx,r15d
0x1401d3d68: jne     0x1401d3d72
0x1401d3d6a: mov     edx,DWORD PTR [rip+0x249a42c]        # 0x14266e19c
0x1401d3d70: jmp     0x1401d3daa
0x1401d3d72: lea     rcx,[rip+0x2498af7]        # 0x14266c870
0x1401d3d79: cmp     ebx,edi
0x1401d3d7b: jne     0x1401d3d85
0x1401d3d7d: mov     edx,DWORD PTR [rip+0x249a431]        # 0x14266e1b4
0x1401d3d83: jmp     0x1401d3db1
0x1401d3d85: mov     edx,DWORD PTR [rip+0x249a41d]        # 0x14266e1a8
0x1401d3d8b: jmp     0x1401d3db1
0x1401d3d8d: cmp     ebx,r15d
0x1401d3d90: jne     0x1401d3d9a
0x1401d3d92: mov     edx,DWORD PTR [rip+0x249a400]        # 0x14266e198
0x1401d3d98: jmp     0x1401d3daa
0x1401d3d9a: cmp     ebx,edi
0x1401d3d9c: mov     edx,DWORD PTR [rip+0x249a40e]        # 0x14266e1b0
0x1401d3da2: je      0x1401d3daa
0x1401d3da4: mov     edx,DWORD PTR [rip+0x249a3fa]        # 0x14266e1a4
0x1401d3daa: lea     rcx,[rip+0x2498abf]        # 0x14266c870
0x1401d3db1: call    0x140af4570
0x1401d3db6: inc     ebx
0x1401d3db8: cmp     ebx,edi
0x1401d3dba: jle     0x1401d3d10
0x1401d3dc0: inc     r14d
0x1401d3dc3: inc     rsi
0x1401d3dc6: cmp     r14d,r12d
0x1401d3dc9: jle     0x1401d3d00
0x1401d3dcf: mov     ebx,DWORD PTR [rbp-0x60]
0x1401d3dd2: lea     r14d,[r15+0x2]
0x1401d3dd6: lea     r13d,[rbx-0x2]
0x1401d3dda: mov     DWORD PTR [rsp+0x74],r13d
0x1401d3ddf: lea     ecx,[r12-0x1]
0x1401d3de4: mov     eax,0x55555556
0x1401d3de9: imul    ecx
0x1401d3deb: mov     edi,edx
0x1401d3ded: shr     edi,0x1f
0x1401d3df0: add     edi,edx
0x1401d3df2: mov     DWORD PTR [rbp-0x58],edi
0x1401d3df5: mov     r12,QWORD PTR [rsp+0x78]
0x1401d3dfa: lea     rcx,[r12+0x83e8]
0x1401d3e02: call    0x140070480
0x1401d3e07: mov     rsi,rax
0x1401d3e0a: mov     QWORD PTR [rbp-0x30],rax
0x1401d3e0e: cmp     eax,edi
0x1401d3e10: jle     0x1401d3e1b
0x1401d3e12: lea     r13d,[rbx-0x4]
0x1401d3e16: mov     DWORD PTR [rsp+0x74],r13d
0x1401d3e1b: mov     QWORD PTR [rbp-0x20],0x0
0x1401d3e23: mov     ecx,DWORD PTR [r12+0x8400]
0x1401d3e2b: mov     edx,eax
0x1401d3e2d: sub     edx,edi
0x1401d3e2f: cmp     ecx,edx
0x1401d3e31: cmovle  edx,ecx
0x1401d3e34: xor     r12d,r12d
0x1401d3e37: test    edx,edx
0x1401d3e39: cmovns  r12d,edx
0x1401d3e3d: mov     DWORD PTR [rbp-0x68],r12d
0x1401d3e41: lea     eax,[rdi+r12*1]
0x1401d3e45: mov     DWORD PTR [rbp-0x28],eax
0x1401d3e48: cmp     r12d,eax
0x1401d3e4b: mov     eax,DWORD PTR [rbp+0x20]
0x1401d3e4e: mov     DWORD PTR [rsp+0x70],eax
0x1401d3e52: jge     0x1401d4472
0x1401d3e58: mov     rdi,QWORD PTR [rsp+0x78]
0x1401d3e5d: lea     rcx,[rdi+0x83e8]
0x1401d3e64: mov     QWORD PTR [rbp+0x30],rcx
0x1401d3e68: mov     ebx,0x4
0x1401d3e6d: mov     QWORD PTR [rbp-0x78],rbx
0x1401d3e71: cmp     r12d,esi
0x1401d3e74: jge     0x1401d446b
0x1401d3e7a: movsxd  rdx,r12d
0x1401d3e7d: call    0x140070850
0x1401d3e82: mov     r15,QWORD PTR [rax]
0x1401d3e85: mov     QWORD PTR [rbp+0x18],r15
0x1401d3e89: cmp     BYTE PTR [rip+0x21debc5],0x0        # 0x1423b2a55
0x1401d3e90: je      0x1401d3ee7
0x1401d3e92: mov     eax,DWORD PTR [rbp-0x38]
0x1401d3e95: cmp     eax,r14d
0x1401d3e98: jl      0x1401d3ee7
0x1401d3e9a: cmp     eax,r13d
0x1401d3e9d: jg      0x1401d3ee7
0x1401d3e9f: lea     eax,[rbx-0x3]
0x1401d3ea2: mov     ecx,DWORD PTR [rbp-0x3c]
0x1401d3ea5: cmp     ecx,eax
0x1401d3ea7: jl      0x1401d3ee7
0x1401d3ea9: lea     eax,[rbx-0x1]
0x1401d3eac: cmp     ecx,eax
0x1401d3eae: jg      0x1401d3ee7
0x1401d3eb0: cmp     QWORD PTR [rdi+0x8408],r15
0x1401d3eb7: je      0x1401d3edc
0x1401d3eb9: mov     QWORD PTR [rdi+0x8408],r15
0x1401d3ec0: mov     rdx,r15
0x1401d3ec3: mov     rcx,rdi
0x1401d3ec6: call    0x1401dcc50
0x1401d3ecb: mov     edx,0x2
0x1401d3ed0: lea     rcx,[rip+0x2498999]        # 0x14266c870
0x1401d3ed7: call    0x140b016a0
0x1401d3edc: mov     QWORD PTR [rbp-0x20],r15
0x1401d3ee0: lea     eax,[rbx-0x4]
0x1401d3ee3: mov     DWORD PTR [rsp+0x70],eax
0x1401d3ee7: xor     r8d,r8d
0x1401d3eea: mov     edx,0x7
0x1401d3eef: mov     r9b,0x1
0x1401d3ef2: lea     rcx,[rip+0x2498977]        # 0x14266c870
0x1401d3ef9: call    0x1400bc760
0x1401d3efe: mov     esi,r14d
0x1401d3f01: cmp     r14d,r13d
0x1401d3f04: jg      0x1401d3fb3
0x1401d3f0a: movsxd  r15,r14d
0x1401d3f0d: lea     eax,[rbx-0x3]
0x1401d3f10: mov     DWORD PTR [rbp-0x60],eax
0x1401d3f13: mov     edi,eax
0x1401d3f15: cmp     eax,ebx
0x1401d3f17: jge     0x1401d3f9d
0x1401d3f1d: movsxd  r12,r13d
0x1401d3f20: lea     rbx,[rip+0x249a309]        # 0x14266e230
0x1401d3f27: mov     r13,QWORD PTR [rbp-0x78]
0x1401d3f2b: nop     DWORD PTR [rax+rax*1+0x0]
0x1401d3f30: mov     r8d,esi
0x1401d3f33: mov     edx,edi
0x1401d3f35: lea     rcx,[rip+0x2498934]        # 0x14266c870
0x1401d3f3c: call    0x1400bc750
0x1401d3f41: cmp     esi,r14d
0x1401d3f44: jne     0x1401d3f4b
0x1401d3f46: mov     edx,DWORD PTR [rbx-0x18]
0x1401d3f49: jmp     0x1401d3f57
0x1401d3f4b: cmp     r15,r12
0x1401d3f4e: jne     0x1401d3f54
0x1401d3f50: mov     edx,DWORD PTR [rbx]
0x1401d3f52: jmp     0x1401d3f57
0x1401d3f54: mov     edx,DWORD PTR [rbx-0xc]
0x1401d3f57: lea     rcx,[rip+0x2498912]        # 0x14266c870
0x1401d3f5e: call    0x140af4570
0x1401d3f63: xor     edx,edx
0x1401d3f65: lea     rcx,[rip+0x221bc84]        # 0x1423efbf0
0x1401d3f6c: call    0x1400735c0
0x1401d3f71: test    al,al
0x1401d3f73: je      0x1401d3f86
0x1401d3f75: mov     r8b,0x1
0x1401d3f78: xor     edx,edx
0x1401d3f7a: lea     rcx,[rip+0x24988ef]        # 0x14266c870
0x1401d3f81: call    0x1400bc7c0
0x1401d3f86: inc     edi
0x1401d3f88: add     rbx,0x4
0x1401d3f8c: cmp     edi,r13d
0x1401d3f8f: jl      0x1401d3f30
0x1401d3f91: mov     r13d,DWORD PTR [rsp+0x74]
0x1401d3f96: mov     eax,DWORD PTR [rbp-0x60]
0x1401d3f99: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d3f9d: inc     esi
0x1401d3f9f: inc     r15
0x1401d3fa2: cmp     esi,r13d
0x1401d3fa5: jle     0x1401d3f13
0x1401d3fab: mov     r15,QWORD PTR [rbp+0x18]
0x1401d3faf: mov     r12d,DWORD PTR [rbp-0x68]
0x1401d3fb3: xor     r8d,r8d
0x1401d3fb6: mov     edx,0x3
0x1401d3fbb: mov     r9b,0x1
0x1401d3fbe: lea     rcx,[rip+0x24988ab]        # 0x14266c870
0x1401d3fc5: call    0x1400bc760
0x1401d3fca: lea     edx,[rbx-0x2]
0x1401d3fcd: mov     r8d,r14d
0x1401d3fd0: lea     rcx,[rip+0x2498899]        # 0x14266c870
0x1401d3fd7: call    0x1400bc750
0x1401d3fdc: lea     rcx,[rbp+0x12f0]
0x1401d3fe3: call    0x140070cc0
0x1401d3fe8: nop     
0x1401d3fe9: lea     rcx,[rbp+0x400]
0x1401d3ff0: call    0x1400736b0
0x1401d3ff5: mov     WORD PTR [rsp+0x28],0x2
0x1401d3ffc: mov     WORD PTR [rsp+0x20],0x1
0x1401d4003: lea     r9,[rbp+0x400]
0x1401d400a: mov     r8d,DWORD PTR [r15+0xe0]
0x1401d4011: lea     rdx,[rbp+0x12f0]
0x1401d4018: lea     rcx,[rip+0x2348119]        # 0x14251c138
0x1401d401f: call    0x140baabd0
0x1401d4024: mov     ebx,r13d
0x1401d4027: sub     ebx,r14d
0x1401d402a: lea     rcx,[rbp+0x12f0]
0x1401d4031: call    0x140070960
0x1401d4036: lea     ecx,[rbx-0x2]
0x1401d4039: movsxd  rdx,ecx
0x1401d403c: cmp     rax,rdx
0x1401d403f: jb      0x1401d40a3
0x1401d4041: lea     edi,[rbx-0x3]
0x1401d4044: test    edi,edi
0x1401d4046: js      0x1401d405e
0x1401d4048: movsxd  rdx,ebx
0x1401d404b: sub     rdx,0x3
0x1401d404f: xor     r8d,r8d
0x1401d4052: lea     rcx,[rbp+0x12f0]
0x1401d4059: call    0x1400e2860
0x1401d405e: cmp     edi,0x3
0x1401d4061: jle     0x1401d40a3
0x1401d4063: movsxd  rdx,ebx
0x1401d4066: sub     rdx,0x6
0x1401d406a: lea     rcx,[rbp+0x12f0]
0x1401d4071: call    0x1400fcbe0
0x1401d4076: mov     BYTE PTR [rax],0x2e
0x1401d4079: lea     eax,[rbx-0x5]
0x1401d407c: movsxd  rdx,eax
0x1401d407f: lea     rcx,[rbp+0x12f0]
0x1401d4086: call    0x1400fcbe0
0x1401d408b: mov     BYTE PTR [rax],0x2e
0x1401d408e: lea     eax,[rbx-0x4]
0x1401d4091: movsxd  rdx,eax
0x1401d4094: lea     rcx,[rbp+0x12f0]
0x1401d409b: call    0x1400fcbe0
0x1401d40a0: mov     BYTE PTR [rax],0x2e
0x1401d40a3: xor     r9d,r9d
0x1401d40a6: xor     r8d,r8d
0x1401d40a9: lea     rdx,[rbp+0x12f0]
0x1401d40b0: lea     rcx,[rip+0x24987b9]        # 0x14266c870
0x1401d40b7: call    0x140af3400
0x1401d40bc: mov     rax,QWORD PTR [r15+0x130]
0x1401d40c3: test    rax,rax
0x1401d40c6: je      0x1401d4436
0x1401d40cc: cmp     QWORD PTR [rax+0x28],0x0
0x1401d40d1: je      0x1401d4436
0x1401d40d7: lea     r8d,[r14+0x1]
0x1401d40db: mov     rdx,QWORD PTR [rbp-0x78]
0x1401d40df: dec     edx
0x1401d40e1: lea     rcx,[rip+0x2498788]        # 0x14266c870
0x1401d40e8: call    0x1400bc750
0x1401d40ed: mov     rcx,QWORD PTR [r15+0x130]
0x1401d40f4: mov     rax,QWORD PTR [rcx+0x28]
0x1401d40f8: cmp     DWORD PTR [rax+0x4],0xffffffff
0x1401d40fc: je      0x1401d41e6
0x1401d4102: lea     rdx,[rip+0x144c21f]        # 0x141620328 ; literal='Last in '
0x1401d4109: lea     rcx,[rbp+0x1290]
0x1401d4110: call    0x140069780
0x1401d4115: nop     
0x1401d4116: mov     rax,QWORD PTR [r15+0x130]
0x1401d411d: mov     r8,QWORD PTR [rax+0x28]
0x1401d4121: xor     r9d,r9d
0x1401d4124: mov     r8d,DWORD PTR [r8+0x4]
0x1401d4128: lea     rdx,[rbp+0x1290]
0x1401d412f: lea     rcx,[rip+0x2348002]        # 0x14251c138
0x1401d4136: call    0x140bab5f0
0x1401d413b: lea     rcx,[rbp+0x1290]
0x1401d4142: call    0x140070960
0x1401d4147: mov     ecx,r13d
0x1401d414a: sub     ecx,r14d
0x1401d414d: sub     ecx,0x3
0x1401d4150: movsxd  rcx,ecx
0x1401d4153: cmp     rax,rcx
0x1401d4156: jb      0x1401d41c0
0x1401d4158: mov     ebx,r13d
0x1401d415b: sub     ebx,r14d
0x1401d415e: lea     edi,[rbx-0x4]
0x1401d4161: test    edi,edi
0x1401d4163: js      0x1401d417b
0x1401d4165: movsxd  rdx,ebx
0x1401d4168: sub     rdx,0x4
0x1401d416c: xor     r8d,r8d
0x1401d416f: lea     rcx,[rbp+0x1290]
0x1401d4176: call    0x1400e2860
0x1401d417b: cmp     edi,0x3
0x1401d417e: jle     0x1401d41c0
0x1401d4180: movsxd  rdx,ebx
0x1401d4183: sub     rdx,0x7
0x1401d4187: lea     rcx,[rbp+0x1290]
0x1401d418e: call    0x1400fcbe0
0x1401d4193: mov     BYTE PTR [rax],0x2e
0x1401d4196: lea     eax,[rbx-0x6]
0x1401d4199: movsxd  rdx,eax
0x1401d419c: lea     rcx,[rbp+0x1290]
0x1401d41a3: call    0x1400fcbe0
0x1401d41a8: mov     BYTE PTR [rax],0x2e
0x1401d41ab: lea     eax,[rbx-0x5]
0x1401d41ae: movsxd  rdx,eax
0x1401d41b1: lea     rcx,[rbp+0x1290]
0x1401d41b8: call    0x1400fcbe0
0x1401d41bd: mov     BYTE PTR [rax],0x2e
0x1401d41c0: xor     r9d,r9d
0x1401d41c3: xor     r8d,r8d
0x1401d41c6: lea     rdx,[rbp+0x1290]
0x1401d41cd: lea     rcx,[rip+0x249869c]        # 0x14266c870
0x1401d41d4: call    0x140af3400
0x1401d41d9: nop     
0x1401d41da: lea     rcx,[rbp+0x1290]
0x1401d41e1: jmp     0x1401d4431
0x1401d41e6: cmp     DWORD PTR [rax+0x8],0xffffffff
0x1401d41ea: je      0x1401d42d4
0x1401d41f0: lea     rdx,[rip+0x144c131]        # 0x141620328 ; literal='Last in '
0x1401d41f7: lea     rcx,[rbp+0x12b0]
0x1401d41fe: call    0x140069780
0x1401d4203: nop     
0x1401d4204: mov     rax,QWORD PTR [r15+0x130]
0x1401d420b: mov     r8,QWORD PTR [rax+0x28]
0x1401d420f: xor     r9d,r9d
0x1401d4212: mov     r8d,DWORD PTR [r8+0x8]
0x1401d4216: lea     rdx,[rbp+0x12b0]
0x1401d421d: lea     rcx,[rip+0x2347f14]        # 0x14251c138
0x1401d4224: call    0x140bac700
0x1401d4229: lea     rcx,[rbp+0x12b0]
0x1401d4230: call    0x140070960
0x1401d4235: mov     ecx,r13d
0x1401d4238: sub     ecx,r14d
0x1401d423b: sub     ecx,0x3
0x1401d423e: movsxd  rcx,ecx
0x1401d4241: cmp     rax,rcx
0x1401d4244: jb      0x1401d42ae
0x1401d4246: mov     ebx,r13d
0x1401d4249: sub     ebx,r14d
0x1401d424c: lea     edi,[rbx-0x4]
0x1401d424f: test    edi,edi
0x1401d4251: js      0x1401d4269
0x1401d4253: movsxd  rdx,ebx
0x1401d4256: sub     rdx,0x4
0x1401d425a: xor     r8d,r8d
0x1401d425d: lea     rcx,[rbp+0x12b0]
0x1401d4264: call    0x1400e2860
0x1401d4269: cmp     edi,0x3
0x1401d426c: jle     0x1401d42ae
0x1401d426e: movsxd  rdx,ebx
0x1401d4271: sub     rdx,0x7
0x1401d4275: lea     rcx,[rbp+0x12b0]
0x1401d427c: call    0x1400fcbe0
0x1401d4281: mov     BYTE PTR [rax],0x2e
0x1401d4284: lea     eax,[rbx-0x6]
0x1401d4287: movsxd  rdx,eax
0x1401d428a: lea     rcx,[rbp+0x12b0]
0x1401d4291: call    0x1400fcbe0
0x1401d4296: mov     BYTE PTR [rax],0x2e
0x1401d4299: lea     eax,[rbx-0x5]
0x1401d429c: movsxd  rdx,eax
0x1401d429f: lea     rcx,[rbp+0x12b0]
0x1401d42a6: call    0x1400fcbe0
0x1401d42ab: mov     BYTE PTR [rax],0x2e
0x1401d42ae: xor     r9d,r9d
0x1401d42b1: xor     r8d,r8d
0x1401d42b4: lea     rdx,[rbp+0x12b0]
0x1401d42bb: lea     rcx,[rip+0x24985ae]        # 0x14266c870
0x1401d42c2: call    0x140af3400
0x1401d42c7: nop     
0x1401d42c8: lea     rcx,[rbp+0x12b0]
0x1401d42cf: jmp     0x1401d4431
0x1401d42d4: cmp     DWORD PTR [rax+0xc],0xffffffff
0x1401d42d8: je      0x1401d43bf
0x1401d42de: lea     rdx,[rip+0x144c043]        # 0x141620328 ; literal='Last in '
0x1401d42e5: lea     rcx,[rbp+0x12d0]
0x1401d42ec: call    0x140069780
0x1401d42f1: nop     
0x1401d42f2: mov     rax,QWORD PTR [r15+0x130]
0x1401d42f9: mov     r8,QWORD PTR [rax+0x28]
0x1401d42fd: xor     r9d,r9d
0x1401d4300: mov     r8d,DWORD PTR [r8+0xc]
0x1401d4304: lea     rdx,[rbp+0x12d0]
0x1401d430b: lea     rcx,[rip+0x2347e26]        # 0x14251c138
0x1401d4312: call    0x140bac600
0x1401d4317: lea     rcx,[rbp+0x12d0]
0x1401d431e: call    0x140070960
0x1401d4323: mov     ecx,r13d
0x1401d4326: sub     ecx,r14d
0x1401d4329: sub     ecx,0x3
0x1401d432c: movsxd  rcx,ecx
0x1401d432f: cmp     rax,rcx
0x1401d4332: jb      0x1401d439c
0x1401d4334: mov     ebx,r13d
0x1401d4337: sub     ebx,r14d
0x1401d433a: lea     edi,[rbx-0x4]
0x1401d433d: test    edi,edi
0x1401d433f: js      0x1401d4357
0x1401d4341: movsxd  rdx,ebx
0x1401d4344: sub     rdx,0x4
0x1401d4348: xor     r8d,r8d
0x1401d434b: lea     rcx,[rbp+0x12d0]
0x1401d4352: call    0x1400e2860
0x1401d4357: cmp     edi,0x3
0x1401d435a: jle     0x1401d439c
0x1401d435c: movsxd  rdx,ebx
0x1401d435f: sub     rdx,0x7
0x1401d4363: lea     rcx,[rbp+0x12d0]
0x1401d436a: call    0x1400fcbe0
0x1401d436f: mov     BYTE PTR [rax],0x2e
0x1401d4372: lea     eax,[rbx-0x6]
0x1401d4375: movsxd  rdx,eax
0x1401d4378: lea     rcx,[rbp+0x12d0]
0x1401d437f: call    0x1400fcbe0
0x1401d4384: mov     BYTE PTR [rax],0x2e
0x1401d4387: lea     eax,[rbx-0x5]
0x1401d438a: movsxd  rdx,eax
0x1401d438d: lea     rcx,[rbp+0x12d0]
0x1401d4394: call    0x1400fcbe0
0x1401d4399: mov     BYTE PTR [rax],0x2e
0x1401d439c: xor     r9d,r9d
0x1401d439f: xor     r8d,r8d
0x1401d43a2: lea     rdx,[rbp+0x12d0]
0x1401d43a9: lea     rcx,[rip+0x24984c0]        # 0x14266c870
0x1401d43b0: call    0x140af3400
0x1401d43b5: nop     
0x1401d43b6: lea     rcx,[rbp+0x12d0]
0x1401d43bd: jmp     0x1401d4431
0x1401d43bf: cmp     DWORD PTR [rax+0x10],0xffffffff
0x1401d43c3: je      0x1401d43fc
0x1401d43c5: lea     rdx,[rip+0x144bf6c]        # 0x141620338 ; literal='Last known to be traveling'
0x1401d43cc: lea     rcx,[rbp+0x34b0]
0x1401d43d3: call    0x140069780
0x1401d43d8: nop     
0x1401d43d9: xor     r9d,r9d
0x1401d43dc: xor     r8d,r8d
0x1401d43df: lea     rdx,[rbp+0x34b0]
0x1401d43e6: lea     rcx,[rip+0x2498483]        # 0x14266c870
0x1401d43ed: call    0x140af3400
0x1401d43f2: nop     
0x1401d43f3: lea     rcx,[rbp+0x34b0]
0x1401d43fa: jmp     0x1401d4431
0x1401d43fc: lea     rdx,[rip+0x144bf55]        # 0x141620358 ; literal='Location unknown'
0x1401d4403: lea     rcx,[rbp+0x34d0]
0x1401d440a: call    0x140069780
0x1401d440f: nop     
0x1401d4410: xor     r9d,r9d
0x1401d4413: xor     r8d,r8d
0x1401d4416: lea     rdx,[rbp+0x34d0]
0x1401d441d: lea     rcx,[rip+0x249844c]        # 0x14266c870
0x1401d4424: call    0x140af3400
0x1401d4429: nop     
0x1401d442a: lea     rcx,[rbp+0x34d0]
0x1401d4431: call    0x140069460
0x1401d4436: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d443a: add     ebx,0x3
0x1401d443d: mov     QWORD PTR [rbp-0x78],rbx
0x1401d4441: lea     rcx,[rbp+0x12f0]
0x1401d4448: call    0x140069460
0x1401d444d: inc     r12d
0x1401d4450: mov     DWORD PTR [rbp-0x68],r12d
0x1401d4454: cmp     r12d,DWORD PTR [rbp-0x28]
0x1401d4458: mov     rsi,QWORD PTR [rbp-0x30]
0x1401d445c: mov     rcx,QWORD PTR [rbp+0x30]
0x1401d4460: mov     rdi,QWORD PTR [rsp+0x78]
0x1401d4465: jl      0x1401d3e71
0x1401d446b: mov     edi,DWORD PTR [rbp-0x58]
0x1401d446e: mov     r15d,DWORD PTR [rbp-0x10]
0x1401d4472: cmp     esi,edi
0x1401d4474: jle     0x1401d44ec
0x1401d4476: lea     ebx,[rdi*2-0x1]
0x1401d447d: add     ebx,edi
0x1401d447f: lea     rcx,[rbp+0x270]
0x1401d4486: call    0x1400bc990
0x1401d448b: lea     r9d,[rsi-0x1]
0x1401d448f: mov     DWORD PTR [rsp+0x30],ebx
0x1401d4493: mov     ebx,0x2
0x1401d4498: mov     DWORD PTR [rsp+0x28],ebx
0x1401d449c: mov     DWORD PTR [rsp+0x20],edi
0x1401d44a0: xor     r8d,r8d
0x1401d44a3: mov     rax,QWORD PTR [rsp+0x78]
0x1401d44a8: mov     edx,DWORD PTR [rax+0x8400]
0x1401d44ae: lea     rcx,[rbp+0x270]
0x1401d44b5: call    0x1400bc9b0
0x1401d44ba: lea     r9d,[r13+0x1]
0x1401d44be: mov     DWORD PTR [rsp+0x28],0x0
0x1401d44c6: mov     r13,QWORD PTR [rsp+0x78]
0x1401d44cb: movzx   eax,BYTE PTR [r13+0x8404]
0x1401d44d3: mov     BYTE PTR [rsp+0x20],al
0x1401d44d7: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d44db: mov     edx,DWORD PTR [rbp-0x38]
0x1401d44de: lea     rcx,[rbp+0x270]
0x1401d44e5: call    0x1414284b0
0x1401d44ea: jmp     0x1401d44f6
0x1401d44ec: mov     r13,QWORD PTR [rsp+0x78]
0x1401d44f1: mov     ebx,0x2
0x1401d44f6: cmp     QWORD PTR [rbp-0x20],0x0
0x1401d44fb: jne     0x1401d4529
0x1401d44fd: cmp     QWORD PTR [r13+0x8408],0x0
0x1401d4505: je      0x1401c8dd8
0x1401d450b: mov     QWORD PTR [r13+0x8408],0x0
0x1401d4516: mov     edx,ebx
0x1401d4518: lea     rcx,[rip+0x2498351]        # 0x14266c870
0x1401d451f: call    0x140b016a0
0x1401d4524: jmp     0x1401c8dd8
0x1401d4529: lea     esi,[r15-0x37]
0x1401d452d: lea     edi,[r15-0x2]
0x1401d4531: movsxd  rax,DWORD PTR [rsp+0x70]
0x1401d4536: lea     r12d,[rax+0x2]
0x1401d453a: mov     DWORD PTR [rbp-0x60],r12d
0x1401d453e: mov     r15d,eax
0x1401d4541: cmp     eax,r12d
0x1401d4544: jg      0x1401d4629
0x1401d454a: mov     r14,rax
0x1401d454d: nop     DWORD PTR [rax]
0x1401d4550: mov     ebx,esi
0x1401d4552: cmp     esi,edi
0x1401d4554: jg      0x1401d4615
0x1401d455a: movsxd  r13,eax
0x1401d455d: movsxd  r12,r12d
0x1401d4560: mov     r8d,ebx
0x1401d4563: mov     edx,r15d
0x1401d4566: lea     rcx,[rip+0x2498303]        # 0x14266c870
0x1401d456d: call    0x1400bc750
0x1401d4572: xor     r8d,r8d
0x1401d4575: xor     edx,edx
0x1401d4577: lea     rcx,[rip+0x24982f2]        # 0x14266c870
0x1401d457e: call    0x1400bc7c0
0x1401d4583: cmp     r14,r13
0x1401d4586: jne     0x1401d45af
0x1401d4588: cmp     ebx,esi
0x1401d458a: jne     0x1401d4594
0x1401d458c: mov     edx,DWORD PTR [rip+0x2499c02]        # 0x14266e194
0x1401d4592: jmp     0x1401d45f7
0x1401d4594: lea     rcx,[rip+0x24982d5]        # 0x14266c870
0x1401d459b: cmp     ebx,edi
0x1401d459d: jne     0x1401d45a7
0x1401d459f: mov     edx,DWORD PTR [rip+0x2499c07]        # 0x14266e1ac
0x1401d45a5: jmp     0x1401d45fe
0x1401d45a7: mov     edx,DWORD PTR [rip+0x2499bf3]        # 0x14266e1a0
0x1401d45ad: jmp     0x1401d45fe
0x1401d45af: cmp     r14,r12
0x1401d45b2: jne     0x1401d45db
0x1401d45b4: cmp     ebx,esi
0x1401d45b6: jne     0x1401d45c0
0x1401d45b8: mov     edx,DWORD PTR [rip+0x2499bde]        # 0x14266e19c
0x1401d45be: jmp     0x1401d45f7
0x1401d45c0: lea     rcx,[rip+0x24982a9]        # 0x14266c870
0x1401d45c7: cmp     ebx,edi
0x1401d45c9: jne     0x1401d45d3
0x1401d45cb: mov     edx,DWORD PTR [rip+0x2499be3]        # 0x14266e1b4
0x1401d45d1: jmp     0x1401d45fe
0x1401d45d3: mov     edx,DWORD PTR [rip+0x2499bcf]        # 0x14266e1a8
0x1401d45d9: jmp     0x1401d45fe
0x1401d45db: cmp     ebx,esi
0x1401d45dd: jne     0x1401d45e7
0x1401d45df: mov     edx,DWORD PTR [rip+0x2499bb3]        # 0x14266e198
0x1401d45e5: jmp     0x1401d45f7
0x1401d45e7: cmp     ebx,edi
0x1401d45e9: mov     edx,DWORD PTR [rip+0x2499bc1]        # 0x14266e1b0
0x1401d45ef: je      0x1401d45f7
0x1401d45f1: mov     edx,DWORD PTR [rip+0x2499bad]        # 0x14266e1a4
0x1401d45f7: lea     rcx,[rip+0x2498272]        # 0x14266c870
0x1401d45fe: call    0x140af4570
0x1401d4603: inc     ebx
0x1401d4605: cmp     ebx,edi
0x1401d4607: jle     0x1401d4560
0x1401d460d: mov     r12d,DWORD PTR [rbp-0x60]
0x1401d4611: mov     eax,DWORD PTR [rsp+0x70]
0x1401d4615: inc     r15d
0x1401d4618: inc     r14
0x1401d461b: cmp     r15d,r12d
0x1401d461e: jle     0x1401d4550
0x1401d4624: mov     r13,QWORD PTR [rsp+0x78]
0x1401d4629: add     esi,0x2
0x1401d462c: cmp     QWORD PTR [r13+0x1c0],0x0
0x1401d4634: jne     0x1401d46a7
0x1401d4636: cmp     QWORD PTR [r13+0x1b8],0x0
0x1401d463e: jne     0x1401d46a7
0x1401d4640: xor     r8d,r8d
0x1401d4643: xor     edx,edx
0x1401d4645: mov     r9b,0x1
0x1401d4648: lea     rcx,[rip+0x2498221]        # 0x14266c870
0x1401d464f: call    0x1400bc760
0x1401d4654: lea     edx,[r12-0x1]
0x1401d4659: mov     r8d,esi
0x1401d465c: lea     rcx,[rip+0x249820d]        # 0x14266c870
0x1401d4663: call    0x1400bc750
0x1401d4668: lea     rdx,[rip+0x144b499]        # 0x14161fb08 ; literal='Cannot order mission without leader'
0x1401d466f: lea     rcx,[rbp+0x3510]
0x1401d4676: call    0x140069780
0x1401d467b: nop     
0x1401d467c: xor     r9d,r9d
0x1401d467f: xor     r8d,r8d
0x1401d4682: lea     rdx,[rbp+0x3510]
0x1401d4689: lea     rcx,[rip+0x24981e0]        # 0x14266c870
0x1401d4690: call    0x140af3400
0x1401d4695: nop     
0x1401d4696: lea     rcx,[rbp+0x3510]
0x1401d469d: call    0x140069460
0x1401d46a2: jmp     0x1401c8dd8
0x1401d46a7: movzx   r8d,WORD PTR [r13+0x19c]
0x1401d46af: movzx   edx,WORD PTR [r13+0x198]
0x1401d46b7: mov     rcx,QWORD PTR [rip+0x233991a]        # 0x14250dfd8
0x1401d46be: call    0x1401bead0
0x1401d46c3: xor     r8d,r8d
0x1401d46c6: mov     r9b,0x1
0x1401d46c9: lea     rcx,[rip+0x24981a0]        # 0x14266c870
0x1401d46d0: test    eax,eax
0x1401d46d2: js      0x1401d4731
0x1401d46d4: mov     edx,0x7
0x1401d46d9: call    0x1400bc760
0x1401d46de: mov     r8d,esi
0x1401d46e1: lea     edx,[r12-0x1]
0x1401d46e6: lea     rcx,[rip+0x2498183]        # 0x14266c870
0x1401d46ed: call    0x1400bc750
0x1401d46f2: lea     rdx,[rip+0x144bc77]        # 0x141620370 ; literal='Click to rescue (creates new mission)'
0x1401d46f9: lea     rcx,[rbp+0x3530]
0x1401d4700: call    0x140069780
0x1401d4705: nop     
0x1401d4706: xor     r9d,r9d
0x1401d4709: xor     r8d,r8d
0x1401d470c: lea     rdx,[rbp+0x3530]
0x1401d4713: lea     rcx,[rip+0x2498156]        # 0x14266c870
0x1401d471a: call    0x140af3400
0x1401d471f: nop     
0x1401d4720: lea     rcx,[rbp+0x3530]
0x1401d4727: call    0x140069460
0x1401d472c: jmp     0x1401c8dd8
0x1401d4731: xor     edx,edx
0x1401d4733: call    0x1400bc760
0x1401d4738: mov     r8d,esi
0x1401d473b: lea     edx,[r12-0x1]
0x1401d4740: lea     rcx,[rip+0x2498129]        # 0x14266c870
0x1401d4747: call    0x1400bc750
0x1401d474c: lea     rdx,[rip+0x144b395]        # 0x14161fae8 ; literal='Inaccessible mission location'
0x1401d4753: lea     rcx,[rbp+0x3550]
0x1401d475a: call    0x140069780
0x1401d475f: nop     
0x1401d4760: xor     r9d,r9d
0x1401d4763: xor     r8d,r8d
0x1401d4766: lea     rdx,[rbp+0x3550]
0x1401d476d: lea     rcx,[rip+0x24980fc]        # 0x14266c870
0x1401d4774: call    0x140af3400
0x1401d4779: nop     
0x1401d477a: lea     rcx,[rbp+0x3550]
0x1401d4781: call    0x140069460
0x1401d4786: jmp     0x1401c8dd8
0x1401d478b: mov     ebx,DWORD PTR [rbp-0x18]
0x1401d478e: mov     DWORD PTR [rbp-0x60],ebx
0x1401d4791: lea     r13d,[rbx-0x39]
0x1401d4795: mov     DWORD PTR [rbp-0x20],r13d
0x1401d4799: mov     r12d,0x14
0x1401d479f: mov     eax,DWORD PTR [rip+0x221b463]        # 0x1423efc08
0x1401d47a5: cmp     eax,0x2e
0x1401d47a8: jle     0x1401d47c1
0x1401d47aa: lea     r12d,[rax-0x1a]
0x1401d47ae: cmp     r12d,0x1e
0x1401d47b2: jle     0x1401d47c1
0x1401d47b4: mov     r12d,0x1e
0x1401d47ba: mov     edi,ebx
0x1401d47bc: mov     r14d,esi
0x1401d47bf: jmp     0x1401d47d0
0x1401d47c1: mov     edi,ebx
0x1401d47c3: mov     r14d,esi
0x1401d47c6: test    r12d,r12d
0x1401d47c9: js      0x1401d48a2
0x1401d47cf: nop     
0x1401d47d0: mov     ebx,r13d
0x1401d47d3: cmp     r13d,edi
0x1401d47d6: jg      0x1401d4890
0x1401d47dc: movsxd  r15,r12d
0x1401d47df: nop     
0x1401d47e0: mov     r8d,ebx
0x1401d47e3: mov     edx,r14d
0x1401d47e6: lea     rcx,[rip+0x2498083]        # 0x14266c870
0x1401d47ed: call    0x1400bc750
0x1401d47f2: xor     r8d,r8d
0x1401d47f5: xor     edx,edx
0x1401d47f7: lea     rcx,[rip+0x2498072]        # 0x14266c870
0x1401d47fe: call    0x1400bc7c0
0x1401d4803: test    rsi,rsi
0x1401d4806: jne     0x1401d4830
0x1401d4808: cmp     ebx,r13d
0x1401d480b: jne     0x1401d4815
0x1401d480d: mov     edx,DWORD PTR [rip+0x2499981]        # 0x14266e194
0x1401d4813: jmp     0x1401d487a
0x1401d4815: lea     rcx,[rip+0x2498054]        # 0x14266c870
0x1401d481c: cmp     ebx,edi
0x1401d481e: jne     0x1401d4828
0x1401d4820: mov     edx,DWORD PTR [rip+0x2499986]        # 0x14266e1ac
0x1401d4826: jmp     0x1401d4881
0x1401d4828: mov     edx,DWORD PTR [rip+0x2499972]        # 0x14266e1a0
0x1401d482e: jmp     0x1401d4881
0x1401d4830: cmp     rsi,r15
0x1401d4833: jne     0x1401d485d
0x1401d4835: cmp     ebx,r13d
0x1401d4838: jne     0x1401d4842
0x1401d483a: mov     edx,DWORD PTR [rip+0x249995c]        # 0x14266e19c
0x1401d4840: jmp     0x1401d487a
0x1401d4842: lea     rcx,[rip+0x2498027]        # 0x14266c870
0x1401d4849: cmp     ebx,edi
0x1401d484b: jne     0x1401d4855
0x1401d484d: mov     edx,DWORD PTR [rip+0x2499961]        # 0x14266e1b4
0x1401d4853: jmp     0x1401d4881
0x1401d4855: mov     edx,DWORD PTR [rip+0x249994d]        # 0x14266e1a8
0x1401d485b: jmp     0x1401d4881
0x1401d485d: cmp     ebx,r13d
0x1401d4860: jne     0x1401d486a
0x1401d4862: mov     edx,DWORD PTR [rip+0x2499930]        # 0x14266e198
0x1401d4868: jmp     0x1401d487a
0x1401d486a: cmp     ebx,edi
0x1401d486c: mov     edx,DWORD PTR [rip+0x249993e]        # 0x14266e1b0
0x1401d4872: je      0x1401d487a
0x1401d4874: mov     edx,DWORD PTR [rip+0x249992a]        # 0x14266e1a4
0x1401d487a: lea     rcx,[rip+0x2497fef]        # 0x14266c870
0x1401d4881: call    0x140af4570
0x1401d4886: inc     ebx
0x1401d4888: cmp     ebx,edi
0x1401d488a: jle     0x1401d47e0
0x1401d4890: inc     r14d
0x1401d4893: inc     rsi
0x1401d4896: cmp     r14d,r12d
0x1401d4899: jle     0x1401d47d0
0x1401d489f: mov     ebx,DWORD PTR [rbp-0x60]
0x1401d48a2: lea     r14d,[r13+0x2]
0x1401d48a6: lea     r13d,[rbx-0x2]
0x1401d48aa: mov     DWORD PTR [rsp+0x74],r13d
0x1401d48af: lea     ecx,[r12-0x1]
0x1401d48b4: mov     eax,0x55555556
0x1401d48b9: imul    ecx
0x1401d48bb: mov     edi,edx
0x1401d48bd: shr     edi,0x1f
0x1401d48c0: add     edi,edx
0x1401d48c2: mov     DWORD PTR [rbp-0x10],edi
0x1401d48c5: mov     r12,QWORD PTR [rsp+0x78]
0x1401d48ca: lea     rcx,[r12+0x8410]
0x1401d48d2: call    0x140070480
0x1401d48d7: mov     rsi,rax
0x1401d48da: mov     QWORD PTR [rbp-0x58],rax
0x1401d48de: cmp     eax,edi
0x1401d48e0: jle     0x1401d48eb
0x1401d48e2: lea     r13d,[rbx-0x4]
0x1401d48e6: mov     DWORD PTR [rsp+0x74],r13d
0x1401d48eb: xor     r15d,r15d
0x1401d48ee: mov     QWORD PTR [rbp-0x30],r15
0x1401d48f2: mov     ecx,DWORD PTR [r12+0x8440]
0x1401d48fa: mov     edx,eax
0x1401d48fc: sub     edx,edi
0x1401d48fe: cmp     ecx,edx
0x1401d4900: cmovle  edx,ecx
0x1401d4903: xor     eax,eax
0x1401d4905: test    edx,edx
0x1401d4907: cmovns  eax,edx
0x1401d490a: mov     DWORD PTR [rbp-0x68],eax
0x1401d490d: lea     ecx,[rax+rdi*1]
0x1401d4910: mov     DWORD PTR [rbp-0x28],ecx
0x1401d4913: cmp     eax,ecx
0x1401d4915: mov     ecx,DWORD PTR [rbp+0x20]
0x1401d4918: mov     DWORD PTR [rsp+0x70],ecx
0x1401d491c: jge     0x1401d5025
0x1401d4922: mov     r15,r12
0x1401d4925: lea     r8,[r12+0x8410]
0x1401d492d: mov     QWORD PTR [rbp+0x48],r8
0x1401d4931: mov     ebx,0x4
0x1401d4936: mov     QWORD PTR [rbp-0x78],rbx
0x1401d493a: nop     WORD PTR [rax+rax*1+0x0]
0x1401d4940: cmp     eax,esi
0x1401d4942: jge     0x1401d5019
0x1401d4948: movsxd  rdi,eax
0x1401d494b: mov     rdx,rdi
0x1401d494e: mov     rcx,r8
0x1401d4951: call    0x140070850
0x1401d4956: mov     r12,QWORD PTR [rax]
0x1401d4959: mov     QWORD PTR [rbp+0x30],r12
0x1401d495d: mov     rdx,rdi
0x1401d4960: lea     rcx,[r15+0x8428]
0x1401d4967: call    0x140070850
0x1401d496c: cmp     QWORD PTR [rax],0x0
0x1401d4970: jne     0x1401d49c2
0x1401d4972: mov     ecx,0x30
0x1401d4977: call    0x1415530e0
0x1401d497c: mov     QWORD PTR [rbp-0x48],rax
0x1401d4980: mov     rcx,rax
0x1401d4983: call    0x140074780
0x1401d4988: mov     rbx,rax
0x1401d498b: mov     QWORD PTR [rax],r12
0x1401d498e: mov     rcx,rax
0x1401d4991: call    0x1409f8390
0x1401d4996: mov     rdx,QWORD PTR [rip+0x21e7ccb]        # 0x1423bc668
0x1401d499d: add     rdx,0x1250
0x1401d49a4: mov     rcx,rbx
0x1401d49a7: call    0x1409f83e0
0x1401d49ac: mov     rdx,rdi
0x1401d49af: lea     rcx,[r15+0x8428]
0x1401d49b6: call    0x140070850
0x1401d49bb: mov     QWORD PTR [rax],rbx
0x1401d49be: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d49c2: mov     rdx,rdi
0x1401d49c5: lea     rcx,[r15+0x8428]
0x1401d49cc: call    0x140070850
0x1401d49d1: mov     r15,QWORD PTR [rax]
0x1401d49d4: mov     QWORD PTR [rbp+0x18],r15
0x1401d49d8: cmp     BYTE PTR [rip+0x21de076],0x0        # 0x1423b2a55
0x1401d49df: je      0x1401d4a3e
0x1401d49e1: mov     eax,DWORD PTR [rbp-0x38]
0x1401d49e4: cmp     eax,r14d
0x1401d49e7: jl      0x1401d4a3e
0x1401d49e9: cmp     eax,r13d
0x1401d49ec: jg      0x1401d4a3e
0x1401d49ee: lea     eax,[rbx-0x3]
0x1401d49f1: mov     ecx,DWORD PTR [rbp-0x3c]
0x1401d49f4: cmp     ecx,eax
0x1401d49f6: jl      0x1401d4a3e
0x1401d49f8: lea     eax,[rbx-0x1]
0x1401d49fb: cmp     ecx,eax
0x1401d49fd: jg      0x1401d4a3e
0x1401d49ff: mov     rax,QWORD PTR [rsp+0x78]
0x1401d4a04: cmp     QWORD PTR [rax+0x8448],r12
0x1401d4a0b: je      0x1401d4a33
0x1401d4a0d: mov     QWORD PTR [rax+0x8448],r12
0x1401d4a14: mov     r8,r15
0x1401d4a17: mov     rdx,r12
0x1401d4a1a: mov     rcx,rax
0x1401d4a1d: call    0x1401dcd60
0x1401d4a22: mov     edx,0x2
0x1401d4a27: lea     rcx,[rip+0x2497e42]        # 0x14266c870
0x1401d4a2e: call    0x140b016a0
0x1401d4a33: mov     QWORD PTR [rbp-0x30],r12
0x1401d4a37: lea     ecx,[rbx-0x4]
0x1401d4a3a: mov     DWORD PTR [rsp+0x70],ecx
0x1401d4a3e: xor     r8d,r8d
0x1401d4a41: mov     edx,0x7
0x1401d4a46: mov     r9b,0x1
0x1401d4a49: lea     rcx,[rip+0x2497e20]        # 0x14266c870
0x1401d4a50: call    0x1400bc760
0x1401d4a55: mov     esi,r14d
0x1401d4a58: cmp     r14d,r13d
0x1401d4a5b: jg      0x1401d4b07
0x1401d4a61: movsxd  r15,r14d
0x1401d4a64: lea     eax,[rbx-0x3]
0x1401d4a67: mov     DWORD PTR [rbp-0x60],eax
0x1401d4a6a: nop     WORD PTR [rax+rax*1+0x0]
0x1401d4a70: mov     edi,eax
0x1401d4a72: cmp     eax,ebx
0x1401d4a74: jge     0x1401d4af1
0x1401d4a76: movsxd  r12,r13d
0x1401d4a79: lea     rbx,[rip+0x24997b0]        # 0x14266e230
0x1401d4a80: mov     r13,QWORD PTR [rbp-0x78]
0x1401d4a84: mov     r8d,esi
0x1401d4a87: mov     edx,edi
0x1401d4a89: lea     rcx,[rip+0x2497de0]        # 0x14266c870
0x1401d4a90: call    0x1400bc750
0x1401d4a95: cmp     esi,r14d
0x1401d4a98: jne     0x1401d4a9f
0x1401d4a9a: mov     edx,DWORD PTR [rbx-0x18]
0x1401d4a9d: jmp     0x1401d4aab
0x1401d4a9f: cmp     r15,r12
0x1401d4aa2: jne     0x1401d4aa8
0x1401d4aa4: mov     edx,DWORD PTR [rbx]
0x1401d4aa6: jmp     0x1401d4aab
0x1401d4aa8: mov     edx,DWORD PTR [rbx-0xc]
0x1401d4aab: lea     rcx,[rip+0x2497dbe]        # 0x14266c870
0x1401d4ab2: call    0x140af4570
0x1401d4ab7: xor     edx,edx
0x1401d4ab9: lea     rcx,[rip+0x221b130]        # 0x1423efbf0
0x1401d4ac0: call    0x1400735c0
0x1401d4ac5: test    al,al
0x1401d4ac7: je      0x1401d4ada
0x1401d4ac9: mov     r8b,0x1
0x1401d4acc: xor     edx,edx
0x1401d4ace: lea     rcx,[rip+0x2497d9b]        # 0x14266c870
0x1401d4ad5: call    0x1400bc7c0
0x1401d4ada: inc     edi
0x1401d4adc: add     rbx,0x4
0x1401d4ae0: cmp     edi,r13d
0x1401d4ae3: jl      0x1401d4a84
0x1401d4ae5: mov     r13d,DWORD PTR [rsp+0x74]
0x1401d4aea: mov     eax,DWORD PTR [rbp-0x60]
0x1401d4aed: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d4af1: inc     esi
0x1401d4af3: inc     r15
0x1401d4af6: cmp     esi,r13d
0x1401d4af9: jle     0x1401d4a70
0x1401d4aff: mov     r15,QWORD PTR [rbp+0x18]
0x1401d4b03: mov     r12,QWORD PTR [rbp+0x30]
0x1401d4b07: xor     r8d,r8d
0x1401d4b0a: mov     edx,0x3
0x1401d4b0f: mov     r9b,0x1
0x1401d4b12: lea     rcx,[rip+0x2497d57]        # 0x14266c870
0x1401d4b19: call    0x1400bc760
0x1401d4b1e: lea     edx,[rbx-0x2]
0x1401d4b21: mov     r8d,r14d
0x1401d4b24: lea     rcx,[rip+0x2497d45]        # 0x14266c870
0x1401d4b2b: call    0x1400bc750
0x1401d4b30: lea     rcx,[rbp+0x1390]
0x1401d4b37: call    0x140070cc0
0x1401d4b3c: nop     
0x1401d4b3d: xor     r9d,r9d
0x1401d4b40: mov     r8d,DWORD PTR [r12]
0x1401d4b44: lea     rdx,[rbp+0x1390]
0x1401d4b4b: lea     rcx,[rip+0x23475e6]        # 0x14251c138
0x1401d4b52: call    0x140bac0c0
0x1401d4b57: mov     ebx,r13d
0x1401d4b5a: sub     ebx,r14d
0x1401d4b5d: lea     rcx,[rbp+0x1390]
0x1401d4b64: call    0x140070960
0x1401d4b69: lea     ecx,[rbx-0x2]
0x1401d4b6c: movsxd  rdx,ecx
0x1401d4b6f: cmp     rax,rdx
0x1401d4b72: jb      0x1401d4bd6
0x1401d4b74: lea     edi,[rbx-0x3]
0x1401d4b77: test    edi,edi
0x1401d4b79: js      0x1401d4b91
0x1401d4b7b: movsxd  rdx,ebx
0x1401d4b7e: sub     rdx,0x3
0x1401d4b82: xor     r8d,r8d
0x1401d4b85: lea     rcx,[rbp+0x1390]
0x1401d4b8c: call    0x1400e2860
0x1401d4b91: cmp     edi,0x3
0x1401d4b94: jle     0x1401d4bd6
0x1401d4b96: movsxd  rdx,ebx
0x1401d4b99: sub     rdx,0x6
0x1401d4b9d: lea     rcx,[rbp+0x1390]
0x1401d4ba4: call    0x1400fcbe0
0x1401d4ba9: mov     BYTE PTR [rax],0x2e
0x1401d4bac: lea     eax,[rbx-0x5]
0x1401d4baf: movsxd  rdx,eax
0x1401d4bb2: lea     rcx,[rbp+0x1390]
0x1401d4bb9: call    0x1400fcbe0
0x1401d4bbe: mov     BYTE PTR [rax],0x2e
0x1401d4bc1: lea     eax,[rbx-0x4]
0x1401d4bc4: movsxd  rdx,eax
0x1401d4bc7: lea     rcx,[rbp+0x1390]
0x1401d4bce: call    0x1400fcbe0
0x1401d4bd3: mov     BYTE PTR [rax],0x2e
0x1401d4bd6: xor     r9d,r9d
0x1401d4bd9: xor     r8d,r8d
0x1401d4bdc: lea     rdx,[rbp+0x1390]
0x1401d4be3: lea     rcx,[rip+0x2497c86]        # 0x14266c870
0x1401d4bea: call    0x140af3400
0x1401d4bef: lea     r8d,[r14+0x1]
0x1401d4bf3: mov     rdx,QWORD PTR [rbp-0x78]
0x1401d4bf7: dec     edx
0x1401d4bf9: lea     rcx,[rip+0x2497c70]        # 0x14266c870
0x1401d4c00: call    0x1400bc750
0x1401d4c05: cmp     DWORD PTR [r15+0x10],0xffffffff
0x1401d4c0a: je      0x1401d4d01
0x1401d4c10: lea     rdx,[rip+0x144b781]        # 0x141620398 ; literal='Last held by '
0x1401d4c17: lea     rcx,[rbp+0x1310]
0x1401d4c1e: call    0x140069780
0x1401d4c23: nop     
0x1401d4c24: lea     rcx,[rbp+0x8e0]
0x1401d4c2b: call    0x1400736b0
0x1401d4c30: xor     eax,eax
0x1401d4c32: mov     WORD PTR [rsp+0x28],ax
0x1401d4c37: mov     WORD PTR [rsp+0x20],0x1
0x1401d4c3e: lea     r9,[rbp+0x8e0]
0x1401d4c45: mov     r8d,DWORD PTR [r15+0x10]
0x1401d4c49: lea     rdx,[rbp+0x1310]
0x1401d4c50: lea     rcx,[rip+0x23474e1]        # 0x14251c138
0x1401d4c57: call    0x140baabd0
0x1401d4c5c: lea     rcx,[rbp+0x1310]
0x1401d4c63: call    0x140070960
0x1401d4c68: lea     ecx,[rbx-0x3]
0x1401d4c6b: movsxd  rdx,ecx
0x1401d4c6e: cmp     rax,rdx
0x1401d4c71: jb      0x1401d4cdb
0x1401d4c73: mov     ebx,r13d
0x1401d4c76: sub     ebx,r14d
0x1401d4c79: lea     edi,[rbx-0x4]
0x1401d4c7c: test    edi,edi
0x1401d4c7e: js      0x1401d4c96
0x1401d4c80: movsxd  rdx,ebx
0x1401d4c83: sub     rdx,0x4
0x1401d4c87: xor     r8d,r8d
0x1401d4c8a: lea     rcx,[rbp+0x1310]
0x1401d4c91: call    0x1400e2860
0x1401d4c96: cmp     edi,0x3
0x1401d4c99: jle     0x1401d4cdb
0x1401d4c9b: movsxd  rdx,ebx
0x1401d4c9e: sub     rdx,0x7
0x1401d4ca2: lea     rcx,[rbp+0x1310]
0x1401d4ca9: call    0x1400fcbe0
0x1401d4cae: mov     BYTE PTR [rax],0x2e
0x1401d4cb1: lea     eax,[rbx-0x6]
0x1401d4cb4: movsxd  rdx,eax
0x1401d4cb7: lea     rcx,[rbp+0x1310]
0x1401d4cbe: call    0x1400fcbe0
0x1401d4cc3: mov     BYTE PTR [rax],0x2e
0x1401d4cc6: lea     eax,[rbx-0x5]
0x1401d4cc9: movsxd  rdx,eax
0x1401d4ccc: lea     rcx,[rbp+0x1310]
0x1401d4cd3: call    0x1400fcbe0
0x1401d4cd8: mov     BYTE PTR [rax],0x2e
0x1401d4cdb: xor     r9d,r9d
0x1401d4cde: xor     r8d,r8d
0x1401d4ce1: lea     rdx,[rbp+0x1310]
0x1401d4ce8: lea     rcx,[rip+0x2497b81]        # 0x14266c870
0x1401d4cef: call    0x140af3400
0x1401d4cf4: nop     
0x1401d4cf5: lea     rcx,[rbp+0x1310]
0x1401d4cfc: jmp     0x1401d4fdf
0x1401d4d01: cmp     DWORD PTR [r15+0x8],0xffffffff
0x1401d4d06: je      0x1401d4de5
0x1401d4d0c: lea     rdx,[rip+0x144b615]        # 0x141620328 ; literal='Last in '
0x1401d4d13: lea     rcx,[rbp+0x1330]
0x1401d4d1a: call    0x140069780
0x1401d4d1f: nop     
0x1401d4d20: xor     r9d,r9d
0x1401d4d23: mov     r8d,DWORD PTR [r15+0x8]
0x1401d4d27: lea     rdx,[rbp+0x1330]
0x1401d4d2e: lea     rcx,[rip+0x2347403]        # 0x14251c138
0x1401d4d35: call    0x140bab5f0
0x1401d4d3a: lea     rcx,[rbp+0x1330]
0x1401d4d41: call    0x140070960
0x1401d4d46: mov     ecx,r13d
0x1401d4d49: sub     ecx,r14d
0x1401d4d4c: sub     ecx,0x3
0x1401d4d4f: movsxd  rcx,ecx
0x1401d4d52: cmp     rax,rcx
0x1401d4d55: jb      0x1401d4dbf
0x1401d4d57: mov     ebx,r13d
0x1401d4d5a: sub     ebx,r14d
0x1401d4d5d: lea     edi,[rbx-0x4]
0x1401d4d60: test    edi,edi
0x1401d4d62: js      0x1401d4d7a
0x1401d4d64: movsxd  rdx,ebx
0x1401d4d67: sub     rdx,0x4
0x1401d4d6b: xor     r8d,r8d
0x1401d4d6e: lea     rcx,[rbp+0x1330]
0x1401d4d75: call    0x1400e2860
0x1401d4d7a: cmp     edi,0x3
0x1401d4d7d: jle     0x1401d4dbf
0x1401d4d7f: movsxd  rdx,ebx
0x1401d4d82: sub     rdx,0x7
0x1401d4d86: lea     rcx,[rbp+0x1330]
0x1401d4d8d: call    0x1400fcbe0
0x1401d4d92: mov     BYTE PTR [rax],0x2e
0x1401d4d95: lea     eax,[rbx-0x6]
0x1401d4d98: movsxd  rdx,eax
0x1401d4d9b: lea     rcx,[rbp+0x1330]
0x1401d4da2: call    0x1400fcbe0
0x1401d4da7: mov     BYTE PTR [rax],0x2e
0x1401d4daa: lea     eax,[rbx-0x5]
0x1401d4dad: movsxd  rdx,eax
0x1401d4db0: lea     rcx,[rbp+0x1330]
0x1401d4db7: call    0x1400fcbe0
0x1401d4dbc: mov     BYTE PTR [rax],0x2e
0x1401d4dbf: xor     r9d,r9d
0x1401d4dc2: xor     r8d,r8d
0x1401d4dc5: lea     rdx,[rbp+0x1330]
0x1401d4dcc: lea     rcx,[rip+0x2497a9d]        # 0x14266c870
0x1401d4dd3: call    0x140af3400
0x1401d4dd8: nop     
0x1401d4dd9: lea     rcx,[rbp+0x1330]
0x1401d4de0: jmp     0x1401d4fdf
0x1401d4de5: cmp     DWORD PTR [r15+0x14],0xffffffff
0x1401d4dea: je      0x1401d4ec9
0x1401d4df0: lea     rdx,[rip+0x144b531]        # 0x141620328 ; literal='Last in '
0x1401d4df7: lea     rcx,[rbp+0x1350]
0x1401d4dfe: call    0x140069780
0x1401d4e03: nop     
0x1401d4e04: xor     r9d,r9d
0x1401d4e07: mov     r8d,DWORD PTR [r15+0x14]
0x1401d4e0b: lea     rdx,[rbp+0x1350]
0x1401d4e12: lea     rcx,[rip+0x234731f]        # 0x14251c138
0x1401d4e19: call    0x140bac700
0x1401d4e1e: lea     rcx,[rbp+0x1350]
0x1401d4e25: call    0x140070960
0x1401d4e2a: mov     ecx,r13d
0x1401d4e2d: sub     ecx,r14d
0x1401d4e30: sub     ecx,0x3
0x1401d4e33: movsxd  rcx,ecx
0x1401d4e36: cmp     rax,rcx
0x1401d4e39: jb      0x1401d4ea3
0x1401d4e3b: mov     ebx,r13d
0x1401d4e3e: sub     ebx,r14d
0x1401d4e41: lea     edi,[rbx-0x4]
0x1401d4e44: test    edi,edi
0x1401d4e46: js      0x1401d4e5e
0x1401d4e48: movsxd  rdx,ebx
0x1401d4e4b: sub     rdx,0x4
0x1401d4e4f: xor     r8d,r8d
0x1401d4e52: lea     rcx,[rbp+0x1350]
0x1401d4e59: call    0x1400e2860
0x1401d4e5e: cmp     edi,0x3
0x1401d4e61: jle     0x1401d4ea3
0x1401d4e63: movsxd  rdx,ebx
0x1401d4e66: sub     rdx,0x7
0x1401d4e6a: lea     rcx,[rbp+0x1350]
0x1401d4e71: call    0x1400fcbe0
0x1401d4e76: mov     BYTE PTR [rax],0x2e
0x1401d4e79: lea     eax,[rbx-0x6]
0x1401d4e7c: movsxd  rdx,eax
0x1401d4e7f: lea     rcx,[rbp+0x1350]
0x1401d4e86: call    0x1400fcbe0
0x1401d4e8b: mov     BYTE PTR [rax],0x2e
0x1401d4e8e: lea     eax,[rbx-0x5]
0x1401d4e91: movsxd  rdx,eax
0x1401d4e94: lea     rcx,[rbp+0x1350]
0x1401d4e9b: call    0x1400fcbe0
0x1401d4ea0: mov     BYTE PTR [rax],0x2e
0x1401d4ea3: xor     r9d,r9d
0x1401d4ea6: xor     r8d,r8d
0x1401d4ea9: lea     rdx,[rbp+0x1350]
0x1401d4eb0: lea     rcx,[rip+0x24979b9]        # 0x14266c870
0x1401d4eb7: call    0x140af3400
0x1401d4ebc: nop     
0x1401d4ebd: lea     rcx,[rbp+0x1350]
0x1401d4ec4: jmp     0x1401d4fdf
0x1401d4ec9: cmp     DWORD PTR [r15+0x18],0xffffffff
0x1401d4ece: je      0x1401d4faa
0x1401d4ed4: lea     rdx,[rip+0x144b44d]        # 0x141620328 ; literal='Last in '
0x1401d4edb: lea     rcx,[rbp+0x1370]
0x1401d4ee2: call    0x140069780
0x1401d4ee7: nop     
0x1401d4ee8: xor     r9d,r9d
0x1401d4eeb: mov     r8d,DWORD PTR [r15+0x18]
0x1401d4eef: lea     rdx,[rbp+0x1370]
0x1401d4ef6: lea     rcx,[rip+0x234723b]        # 0x14251c138
0x1401d4efd: call    0x140bac600
0x1401d4f02: lea     rcx,[rbp+0x1370]
0x1401d4f09: call    0x140070960
0x1401d4f0e: mov     ecx,r13d
0x1401d4f11: sub     ecx,r14d
0x1401d4f14: sub     ecx,0x3
0x1401d4f17: movsxd  rcx,ecx
0x1401d4f1a: cmp     rax,rcx
0x1401d4f1d: jb      0x1401d4f87
0x1401d4f1f: mov     ebx,r13d
0x1401d4f22: sub     ebx,r14d
0x1401d4f25: lea     edi,[rbx-0x4]
0x1401d4f28: test    edi,edi
0x1401d4f2a: js      0x1401d4f42
0x1401d4f2c: movsxd  rdx,ebx
0x1401d4f2f: sub     rdx,0x4
0x1401d4f33: xor     r8d,r8d
0x1401d4f36: lea     rcx,[rbp+0x1370]
0x1401d4f3d: call    0x1400e2860
0x1401d4f42: cmp     edi,0x3
0x1401d4f45: jle     0x1401d4f87
0x1401d4f47: movsxd  rdx,ebx
0x1401d4f4a: sub     rdx,0x7
0x1401d4f4e: lea     rcx,[rbp+0x1370]
0x1401d4f55: call    0x1400fcbe0
0x1401d4f5a: mov     BYTE PTR [rax],0x2e
0x1401d4f5d: lea     eax,[rbx-0x6]
0x1401d4f60: movsxd  rdx,eax
0x1401d4f63: lea     rcx,[rbp+0x1370]
0x1401d4f6a: call    0x1400fcbe0
0x1401d4f6f: mov     BYTE PTR [rax],0x2e
0x1401d4f72: lea     eax,[rbx-0x5]
0x1401d4f75: movsxd  rdx,eax
0x1401d4f78: lea     rcx,[rbp+0x1370]
0x1401d4f7f: call    0x1400fcbe0
0x1401d4f84: mov     BYTE PTR [rax],0x2e
0x1401d4f87: xor     r9d,r9d
0x1401d4f8a: xor     r8d,r8d
0x1401d4f8d: lea     rdx,[rbp+0x1370]
0x1401d4f94: lea     rcx,[rip+0x24978d5]        # 0x14266c870
0x1401d4f9b: call    0x140af3400
0x1401d4fa0: nop     
0x1401d4fa1: lea     rcx,[rbp+0x1370]
0x1401d4fa8: jmp     0x1401d4fdf
0x1401d4faa: lea     rdx,[rip+0x144b3a7]        # 0x141620358 ; literal='Location unknown'
0x1401d4fb1: lea     rcx,[rbp+0x3570]
0x1401d4fb8: call    0x140069780
0x1401d4fbd: nop     
0x1401d4fbe: xor     r9d,r9d
0x1401d4fc1: xor     r8d,r8d
0x1401d4fc4: lea     rdx,[rbp+0x3570]
0x1401d4fcb: lea     rcx,[rip+0x249789e]        # 0x14266c870
0x1401d4fd2: call    0x140af3400
0x1401d4fd7: nop     
0x1401d4fd8: lea     rcx,[rbp+0x3570]
0x1401d4fdf: call    0x140069460
0x1401d4fe4: mov     rbx,QWORD PTR [rbp-0x78]
0x1401d4fe8: add     ebx,0x3
0x1401d4feb: mov     QWORD PTR [rbp-0x78],rbx
0x1401d4fef: lea     rcx,[rbp+0x1390]
0x1401d4ff6: call    0x140069460
0x1401d4ffb: mov     eax,DWORD PTR [rbp-0x68]
0x1401d4ffe: inc     eax
0x1401d5000: mov     DWORD PTR [rbp-0x68],eax
0x1401d5003: cmp     eax,DWORD PTR [rbp-0x28]
0x1401d5006: mov     rsi,QWORD PTR [rbp-0x58]
0x1401d500a: mov     r8,QWORD PTR [rbp+0x48]
0x1401d500e: mov     r15,QWORD PTR [rsp+0x78]
0x1401d5013: jl      0x1401d4940
0x1401d5019: mov     r12,QWORD PTR [rsp+0x78]
0x1401d501e: mov     r15,QWORD PTR [rbp-0x30]
0x1401d5022: mov     edi,DWORD PTR [rbp-0x10]
0x1401d5025: cmp     esi,edi
0x1401d5027: jle     0x1401d509c
0x1401d5029: lea     ebx,[rdi*2-0x1]
0x1401d5030: add     ebx,edi
0x1401d5032: lea     rcx,[rbp+0x250]
0x1401d5039: call    0x1400bc990
0x1401d503e: lea     r9d,[rsi-0x1]
0x1401d5042: mov     DWORD PTR [rsp+0x30],ebx
0x1401d5046: mov     ebx,0x2
0x1401d504b: mov     DWORD PTR [rsp+0x28],ebx
0x1401d504f: mov     DWORD PTR [rsp+0x20],edi
0x1401d5053: xor     r8d,r8d
0x1401d5056: mov     edx,DWORD PTR [r12+0x8440]
0x1401d505e: lea     rcx,[rbp+0x250]
0x1401d5065: call    0x1400bc9b0
0x1401d506a: lea     r9d,[r13+0x1]
0x1401d506e: mov     DWORD PTR [rsp+0x28],0x0
0x1401d5076: mov     r13,QWORD PTR [rsp+0x78]
0x1401d507b: movzx   eax,BYTE PTR [r13+0x8444]
0x1401d5083: mov     BYTE PTR [rsp+0x20],al
0x1401d5087: mov     r8d,DWORD PTR [rbp-0x3c]
0x1401d508b: mov     edx,DWORD PTR [rbp-0x38]
0x1401d508e: lea     rcx,[rbp+0x250]
0x1401d5095: call    0x1414284b0
0x1401d509a: jmp     0x1401d50a6
0x1401d509c: mov     r13,QWORD PTR [rsp+0x78]
0x1401d50a1: mov     ebx,0x2
0x1401d50a6: test    r15,r15
0x1401d50a9: jne     0x1401d50d2
0x1401d50ab: cmp     QWORD PTR [r13+0x8448],r15
0x1401d50b2: je      0x1401c8dd8
0x1401d50b8: mov     QWORD PTR [r13+0x8448],r15
0x1401d50bf: mov     edx,ebx
0x1401d50c1: lea     rcx,[rip+0x24977a8]        # 0x14266c870
0x1401d50c8: call    0x140b016a0
0x1401d50cd: jmp     0x1401c8dd8
0x1401d50d2: mov     edi,DWORD PTR [rbp-0x20]
0x1401d50d5: lea     esi,[rdi-0x37]
0x1401d50d8: add     edi,0xfffffffe
0x1401d50db: movsxd  r13,DWORD PTR [rsp+0x70]
0x1401d50e0: lea     r12d,[r13+0xd]
0x1401d50e4: mov     DWORD PTR [rbp-0x60],r12d
0x1401d50e8: mov     r15d,r13d
0x1401d50eb: cmp     r13d,r12d
0x1401d50ee: jg      0x1401d51d5
0x1401d50f4: mov     r14,r13
0x1401d50f7: nop     WORD PTR [rax+rax*1+0x0]
0x1401d5100: mov     ebx,esi
0x1401d5102: cmp     esi,edi
0x1401d5104: jg      0x1401d51c6
0x1401d510a: movsxd  r13,r13d
0x1401d510d: movsxd  r12,r12d
0x1401d5110: mov     r8d,ebx
0x1401d5113: mov     edx,r15d
0x1401d5116: lea     rcx,[rip+0x2497753]        # 0x14266c870
0x1401d511d: call    0x1400bc750
0x1401d5122: xor     r8d,r8d
0x1401d5125: xor     edx,edx
0x1401d5127: lea     rcx,[rip+0x2497742]        # 0x14266c870
0x1401d512e: call    0x1400bc7c0
0x1401d5133: cmp     r14,r13
0x1401d5136: jne     0x1401d515f
0x1401d5138: cmp     ebx,esi
0x1401d513a: jne     0x1401d5144
0x1401d513c: mov     edx,DWORD PTR [rip+0x2499052]        # 0x14266e194
0x1401d5142: jmp     0x1401d51a7
0x1401d5144: lea     rcx,[rip+0x2497725]        # 0x14266c870
0x1401d514b: cmp     ebx,edi
0x1401d514d: jne     0x1401d5157
0x1401d514f: mov     edx,DWORD PTR [rip+0x2499057]        # 0x14266e1ac
0x1401d5155: jmp     0x1401d51ae
0x1401d5157: mov     edx,DWORD PTR [rip+0x2499043]        # 0x14266e1a0
0x1401d515d: jmp     0x1401d51ae
0x1401d515f: cmp     r14,r12
0x1401d5162: jne     0x1401d518b
0x1401d5164: cmp     ebx,esi
0x1401d5166: jne     0x1401d5170
0x1401d5168: mov     edx,DWORD PTR [rip+0x249902e]        # 0x14266e19c
0x1401d516e: jmp     0x1401d51a7
0x1401d5170: lea     rcx,[rip+0x24976f9]        # 0x14266c870
0x1401d5177: cmp     ebx,edi
0x1401d5179: jne     0x1401d5183
0x1401d517b: mov     edx,DWORD PTR [rip+0x2499033]        # 0x14266e1b4
0x1401d5181: jmp     0x1401d51ae
0x1401d5183: mov     edx,DWORD PTR [rip+0x249901f]        # 0x14266e1a8
0x1401d5189: jmp     0x1401d51ae
0x1401d518b: cmp     ebx,esi
0x1401d518d: jne     0x1401d5197
0x1401d518f: mov     edx,DWORD PTR [rip+0x2499003]        # 0x14266e198
0x1401d5195: jmp     0x1401d51a7
0x1401d5197: cmp     ebx,edi
0x1401d5199: mov     edx,DWORD PTR [rip+0x2499011]        # 0x14266e1b0
0x1401d519f: je      0x1401d51a7
0x1401d51a1: mov     edx,DWORD PTR [rip+0x2498ffd]        # 0x14266e1a4
0x1401d51a7: lea     rcx,[rip+0x24976c2]        # 0x14266c870
0x1401d51ae: call    0x140af4570
0x1401d51b3: inc     ebx
0x1401d51b5: cmp     ebx,edi
0x1401d51b7: jle     0x1401d5110
0x1401d51bd: mov     r12d,DWORD PTR [rbp-0x60]
0x1401d51c1: mov     r13d,DWORD PTR [rsp+0x70]
0x1401d51c6: inc     r15d
0x1401d51c9: inc     r14
0x1401d51cc: cmp     r15d,r12d
0x1401d51cf: jle     0x1401d5100
0x1401d51d5: add     esi,0x2
0x1401d51d8: lea     edi,[r13+0x1]
0x1401d51dc: xor     r8d,r8d
0x1401d51df: mov     edx,0x7
0x1401d51e4: mov     r9b,0x1
0x1401d51e7: lea     rcx,[rip+0x2497682]        # 0x14266c870
0x1401d51ee: call    0x1400bc760
0x1401d51f3: mov     rbx,QWORD PTR [rsp+0x78]
0x1401d51f8: lea     rdx,[rbp+0xc0]
0x1401d51ff: lea     rcx,[rbx+0x8450]
0x1401d5206: call    0x140070870
0x1401d520b: lea     rdx,[rbp+0x190]
0x1401d5212: lea     rcx,[rbx+0x8450]
0x1401d5219: call    0x140070860
0x1401d521e: lea     r8,[rbp+0x190]
0x1401d5225: lea     rdx,[rbp+0x1]
0x1401d5229: lea     rcx,[rbp+0xc0]
0x1401d5230: call    0x140070450
0x1401d5235: xor     edx,edx
0x1401d5237: movzx   ecx,BYTE PTR [rax]
0x1401d523a: call    0x140066de0
0x1401d523f: test    al,al
0x1401d5241: je      0x1401d52b9
0x1401d5243: lea     ebx,[r13+0x8]
0x1401d5247: nop     WORD PTR [rax+rax*1+0x0]
0x1401d5250: mov     r8d,esi
0x1401d5253: mov     edx,edi
0x1401d5255: lea     rcx,[rip+0x2497614]        # 0x14266c870
0x1401d525c: call    0x1400bc750
0x1401d5261: lea     rcx,[rbp+0xc0]
0x1401d5268: call    0x140070440
0x1401d526d: xor     r9d,r9d
0x1401d5270: xor     r8d,r8d
0x1401d5273: mov     rdx,QWORD PTR [rax]
0x1401d5276: lea     rcx,[rip+0x24975f3]        # 0x14266c870
0x1401d527d: call    0x140af3400
0x1401d5282: cmp     edi,ebx
0x1401d5284: jge     0x1401d52b9
0x1401d5286: lea     rcx,[rbp+0xc0]
0x1401d528d: call    0x140070430
0x1401d5292: inc     edi
0x1401d5294: lea     r8,[rbp+0x190]
0x1401d529b: lea     rdx,[rbp+0x1]
0x1401d529f: lea     rcx,[rbp+0xc0]
0x1401d52a6: call    0x140070450
0x1401d52ab: xor     edx,edx
0x1401d52ad: movzx   ecx,BYTE PTR [rax]
0x1401d52b0: call    0x140066de0
0x1401d52b5: test    al,al
0x1401d52b7: jne     0x1401d5250
0x1401d52b9: add     edi,0x2
0x1401d52bc: mov     r13,QWORD PTR [rsp+0x78]
0x1401d52c1: cmp     QWORD PTR [r13+0x8468],0x0
0x1401d52c9: je      0x1401d532d
0x1401d52cb: xor     r8d,r8d
0x1401d52ce: mov     edx,0x6
0x1401d52d3: mov     r9b,0x1
0x1401d52d6: lea     rcx,[rip+0x2497593]        # 0x14266c870
0x1401d52dd: call    0x1400bc760
0x1401d52e2: mov     r8d,esi
0x1401d52e5: mov     edx,edi
0x1401d52e7: lea     rcx,[rip+0x2497582]        # 0x14266c870
0x1401d52ee: call    0x1400bc750
0x1401d52f3: lea     rdx,[rip+0x144b0ae]        # 0x1416203a8 ; literal='Claimed by your local government'
0x1401d52fa: lea     rcx,[rbp+0x35b0]
0x1401d5301: call    0x140069780
0x1401d5306: nop     
0x1401d5307: xor     r9d,r9d
0x1401d530a: xor     r8d,r8d
0x1401d530d: lea     rdx,[rbp+0x35b0]
0x1401d5314: lea     rcx,[rip+0x2497555]        # 0x14266c870
0x1401d531b: call    0x140af3400
0x1401d5320: nop     
0x1401d5321: lea     rcx,[rbp+0x35b0]
0x1401d5328: jmp     0x1401d5477
0x1401d532d: cmp     QWORD PTR [r13+0x8470],0x0
0x1401d5335: je      0x1401d5410
0x1401d533b: xor     r8d,r8d
0x1401d533e: mov     edx,0x6
0x1401d5343: mov     r9b,0x1
0x1401d5346: lea     rcx,[rip+0x2497523]        # 0x14266c870
0x1401d534d: call    0x1400bc760
0x1401d5352: mov     r8d,esi
0x1401d5355: mov     edx,edi
0x1401d5357: lea     rcx,[rip+0x2497512]        # 0x14266c870
0x1401d535e: call    0x1400bc750
0x1401d5363: lea     rdx,[rip+0x144b066]        # 0x1416203d0 ; literal='Claimed by local '
0x1401d536a: lea     rcx,[rbp+0x35d0]
0x1401d5371: call    0x140069780
0x1401d5376: nop     
0x1401d5377: xor     r9d,r9d
0x1401d537a: mov     r8b,0x3
0x1401d537d: lea     rdx,[rbp+0x35d0]
0x1401d5384: lea     rcx,[rip+0x24974e5]        # 0x14266c870
0x1401d538b: call    0x140af3400
0x1401d5390: nop     
0x1401d5391: lea     rcx,[rbp+0x35d0]
0x1401d5398: call    0x140069460
0x1401d539d: lea     rcx,[rbp+0x330]
0x1401d53a4: call    0x1400736b0
0x1401d53a9: lea     rcx,[rbp+0x1650]
0x1401d53b0: call    0x140070cc0
0x1401d53b5: nop     
0x1401d53b6: mov     r8,QWORD PTR [r13+0x8470]
0x1401d53bd: mov     eax,0x1
0x1401d53c2: mov     WORD PTR [rsp+0x28],ax
0x1401d53c7: mov     WORD PTR [rsp+0x20],ax
0x1401d53cc: lea     r9,[rbp+0x330]
0x1401d53d3: mov     r8d,DWORD PTR [r8+0xe0]
0x1401d53da: lea     rdx,[rbp+0x1650]
0x1401d53e1: lea     rcx,[rip+0x2346d50]        # 0x14251c138
0x1401d53e8: call    0x140baabd0
0x1401d53ed: xor     r9d,r9d
0x1401d53f0: xor     r8d,r8d
0x1401d53f3: lea     rdx,[rbp+0x1650]
0x1401d53fa: lea     rcx,[rip+0x249746f]        # 0x14266c870
0x1401d5401: call    0x140af3400
0x1401d5406: nop     
0x1401d5407: lea     rcx,[rbp+0x1650]
0x1401d540e: jmp     0x1401d5477
0x1401d5410: cmp     QWORD PTR [r13+0x8478],0x0
0x1401d5418: je      0x1401d547c
0x1401d541a: xor     r8d,r8d
0x1401d541d: mov     edx,0x6
0x1401d5422: mov     r9b,0x1
0x1401d5425: lea     rcx,[rip+0x2497444]        # 0x14266c870
0x1401d542c: call    0x1400bc760
0x1401d5431: mov     r8d,esi
0x1401d5434: mov     edx,edi
0x1401d5436: lea     rcx,[rip+0x2497433]        # 0x14266c870
0x1401d543d: call    0x1400bc750
0x1401d5442: lea     rdx,[rip+0x144af9f]        # 0x1416203e8 ; literal='Claimed by local family'
0x1401d5449: lea     rcx,[rbp+0x35f0]
0x1401d5450: call    0x140069780
0x1401d5455: nop     
0x1401d5456: xor     r9d,r9d
0x1401d5459: xor     r8d,r8d
0x1401d545c: lea     rdx,[rbp+0x35f0]
0x1401d5463: lea     rcx,[rip+0x2497406]        # 0x14266c870
0x1401d546a: call    0x140af3400
0x1401d546f: nop     
0x1401d5470: lea     rcx,[rbp+0x35f0]
0x1401d5477: call    0x140069460
0x1401d547c: cmp     QWORD PTR [r13+0x1c0],0x0
0x1401d5484: jne     0x1401d54f7
0x1401d5486: cmp     QWORD PTR [r13+0x1b8],0x0
0x1401d548e: jne     0x1401d54f7
0x1401d5490: xor     r8d,r8d
0x1401d5493: xor     edx,edx
0x1401d5495: mov     r9b,0x1
0x1401d5498: lea     rcx,[rip+0x24973d1]        # 0x14266c870
0x1401d549f: call    0x1400bc760
0x1401d54a4: lea     edx,[r12-0x1]
0x1401d54a9: mov     r8d,esi
0x1401d54ac: lea     rcx,[rip+0x24973bd]        # 0x14266c870
0x1401d54b3: call    0x1400bc750
0x1401d54b8: lea     rdx,[rip+0x144a649]        # 0x14161fb08 ; literal='Cannot order mission without leader'
0x1401d54bf: lea     rcx,[rbp+0x3610]
0x1401d54c6: call    0x140069780
0x1401d54cb: nop     
0x1401d54cc: xor     r9d,r9d
0x1401d54cf: xor     r8d,r8d
0x1401d54d2: lea     rdx,[rbp+0x3610]
0x1401d54d9: lea     rcx,[rip+0x2497390]        # 0x14266c870
0x1401d54e0: call    0x140af3400
0x1401d54e5: nop     
0x1401d54e6: lea     rcx,[rbp+0x3610]
0x1401d54ed: call    0x140069460
0x1401d54f2: jmp     0x1401c8dd8
0x1401d54f7: movzx   r8d,WORD PTR [r13+0x19c]
0x1401d54ff: movzx   edx,WORD PTR [r13+0x198]
0x1401d5507: mov     rcx,QWORD PTR [rip+0x2338aca]        # 0x14250dfd8
0x1401d550e: call    0x1401bead0
0x1401d5513: xor     r8d,r8d
0x1401d5516: mov     r9b,0x1
0x1401d5519: lea     rcx,[rip+0x2497350]        # 0x14266c870
0x1401d5520: test    eax,eax
0x1401d5522: js      0x1401d5581
0x1401d5524: mov     edx,0x7
0x1401d5529: call    0x1400bc760
0x1401d552e: mov     r8d,esi
0x1401d5531: lea     edx,[r12-0x1]
0x1401d5536: lea     rcx,[rip+0x2497333]        # 0x14266c870
0x1401d553d: call    0x1400bc750
0x1401d5542: lea     rdx,[rip+0x144aeb7]        # 0x141620400 ; literal='Click to recover (creates new mission)'
0x1401d5549: lea     rcx,[rbp+0x3630]
0x1401d5550: call    0x140069780
0x1401d5555: nop     
0x1401d5556: xor     r9d,r9d
0x1401d5559: xor     r8d,r8d
0x1401d555c: lea     rdx,[rbp+0x3630]
0x1401d5563: lea     rcx,[rip+0x2497306]        # 0x14266c870
0x1401d556a: call    0x140af3400
0x1401d556f: nop     
0x1401d5570: lea     rcx,[rbp+0x3630]
0x1401d5577: call    0x140069460
0x1401d557c: jmp     0x1401c8dd8
0x1401d5581: xor     edx,edx
0x1401d5583: call    0x1400bc760
0x1401d5588: mov     r8d,esi
0x1401d558b: lea     edx,[r12-0x1]
0x1401d5590: lea     rcx,[rip+0x24972d9]        # 0x14266c870
0x1401d5597: call    0x1400bc750
0x1401d559c: lea     rdx,[rip+0x144a545]        # 0x14161fae8 ; literal='Inaccessible mission location'
0x1401d55a3: lea     rcx,[rbp+0x3650]
0x1401d55aa: call    0x140069780
0x1401d55af: nop     
0x1401d55b0: xor     r9d,r9d
0x1401d55b3: xor     r8d,r8d
0x1401d55b6: lea     rdx,[rbp+0x3650]
0x1401d55bd: lea     rcx,[rip+0x24972ac]        # 0x14266c870
0x1401d55c4: call    0x140af3400
0x1401d55c9: nop     
0x1401d55ca: lea     rcx,[rbp+0x3650]
0x1401d55d1: call    0x140069460
0x1401d55d6: jmp     0x1401c8dd8
0x1401d55db: mov     r13,r14
0x1401d55de: jmp     0x1401c8dd8
0x1401d55e3: cmp     r15,rsi
0x1401d55e6: jne     0x1401d55ec
0x1401d55e8: mov     edx,DWORD PTR [rbx]
0x1401d55ea: jmp     0x1401d55ef
0x1401d55ec: mov     edx,DWORD PTR [rbx-0xc]
0x1401d55ef: lea     rcx,[rip+0x249727a]        # 0x14266c870
0x1401d55f6: call    0x140af4570
0x1401d55fb: inc     r14d
0x1401d55fe: add     rbx,0x4
0x1401d5602: cmp     rbx,rdi
0x1401d5605: jl      0x1401c8e70
0x1401d560b: inc     r12d
0x1401d560e: inc     r15
0x1401d5611: mov     edi,esi
0x1401d5613: cmp     r12d,esi
0x1401d5616: mov     ecx,DWORD PTR [rsp+0x74]
0x1401d561a: jle     0x1401c8e56
0x1401d5620: lea     esi,[rsi-0x12]
0x1401d5623: mov     r13d,DWORD PTR [rbp-0x60]
0x1401d5627: xor     r8d,r8d
0x1401d562a: mov     edx,0x7
0x1401d562f: mov     r9b,0x1
0x1401d5632: lea     rcx,[rip+0x2497237]        # 0x14266c870
0x1401d5639: call    0x1400bc760
0x1401d563e: lea     r8d,[rsi+0x2]
0x1401d5642: mov     edx,DWORD PTR [rsp+0x74]
0x1401d5646: inc     edx
0x1401d5648: lea     rcx,[rip+0x2497221]        # 0x14266c870
0x1401d564f: call    0x1400bc750
0x1401d5654: lea     rdx,[rip+0x144ab15]        # 0x141620170 ; literal='Center on fort'
0x1401d565b: lea     rcx,[rbp+0x3670]
0x1401d5662: call    0x140069780
0x1401d5667: nop     
0x1401d5668: xor     r9d,r9d
0x1401d566b: xor     r8d,r8d
0x1401d566e: lea     rdx,[rbp+0x3670]
0x1401d5675: lea     rcx,[rip+0x24971f4]        # 0x14266c870
0x1401d567c: call    0x140af3400
0x1401d5681: nop     
0x1401d5682: lea     rcx,[rbp+0x3670]
0x1401d5689: call    0x140069460
0x1401d568e: mov     ebx,esi
0x1401d5690: cmp     esi,edi
0x1401d5692: jg      0x1401d58bf
0x1401d5698: mov     r12,QWORD PTR [rsp+0x78]
0x1401d569d: nop     DWORD PTR [rax]
0x1401d56a0: mov     r8d,ebx
0x1401d56a3: mov     edx,r13d
0x1401d56a6: lea     rcx,[rip+0x24971c3]        # 0x14266c870
0x1401d56ad: call    0x1400bc750
0x1401d56b2: mov     eax,DWORD PTR [r12+0x1b4]
0x1401d56ba: cmp     eax,0x2
0x1401d56bd: je      0x1401d5729
0x1401d56bf: cmp     eax,0x3
0x1401d56c2: je      0x1401d5729
0x1401d56c4: cmp     eax,0x8
0x1401d56c7: je      0x1401d5729
0x1401d56c9: lea     rcx,[r12+0x2b8]
0x1401d56d1: call    0x140070480
0x1401d56d6: test    rax,rax
0x1401d56d9: je      0x1401d5702
0x1401d56db: cmp     ebx,esi
0x1401d56dd: jne     0x1401d56e7
0x1401d56df: mov     edx,DWORD PTR [rip+0x2498c17]        # 0x14266e2fc
0x1401d56e5: jmp     0x1401d5745
0x1401d56e7: lea     rcx,[rip+0x2497182]        # 0x14266c870
0x1401d56ee: cmp     ebx,edi
0x1401d56f0: jne     0x1401d56fa
0x1401d56f2: mov     edx,DWORD PTR [rip+0x2498c1c]        # 0x14266e314
0x1401d56f8: jmp     0x1401d574c
0x1401d56fa: mov     edx,DWORD PTR [rip+0x2498c08]        # 0x14266e308
0x1401d5700: jmp     0x1401d574c
0x1401d5702: cmp     ebx,esi
0x1401d5704: jne     0x1401d570e
0x1401d5706: mov     edx,DWORD PTR [rip+0x2498c38]        # 0x14266e344
0x1401d570c: jmp     0x1401d5745
0x1401d570e: lea     rcx,[rip+0x249715b]        # 0x14266c870
0x1401d5715: cmp     ebx,edi
0x1401d5717: jne     0x1401d5721
0x1401d5719: mov     edx,DWORD PTR [rip+0x2498c3d]        # 0x14266e35c
0x1401d571f: jmp     0x1401d574c
0x1401d5721: mov     edx,DWORD PTR [rip+0x2498c29]        # 0x14266e350
0x1401d5727: jmp     0x1401d574c
0x1401d5729: cmp     ebx,esi
0x1401d572b: jne     0x1401d5735
0x1401d572d: mov     edx,DWORD PTR [rip+0x2498bed]        # 0x14266e320
0x1401d5733: jmp     0x1401d5745
0x1401d5735: cmp     ebx,edi
0x1401d5737: mov     edx,DWORD PTR [rip+0x2498bfb]        # 0x14266e338
0x1401d573d: je      0x1401d5745
0x1401d573f: mov     edx,DWORD PTR [rip+0x2498be7]        # 0x14266e32c
0x1401d5745: lea     rcx,[rip+0x2497124]        # 0x14266c870
0x1401d574c: call    0x140af4570
0x1401d5751: mov     r8d,ebx
0x1401d5754: lea     edx,[r13+0x1]
0x1401d5758: lea     rcx,[rip+0x2497111]        # 0x14266c870
0x1401d575f: call    0x1400bc750
0x1401d5764: mov     eax,DWORD PTR [r12+0x1b4]
0x1401d576c: cmp     eax,0x2
0x1401d576f: je      0x1401d57db
0x1401d5771: cmp     eax,0x3
0x1401d5774: je      0x1401d57db
0x1401d5776: cmp     eax,0x8
0x1401d5779: je      0x1401d57db
0x1401d577b: lea     rcx,[r12+0x2b8]
0x1401d5783: call    0x140070480
0x1401d5788: test    rax,rax
0x1401d578b: je      0x1401d57b4
0x1401d578d: cmp     ebx,esi
0x1401d578f: jne     0x1401d5799
0x1401d5791: mov     edx,DWORD PTR [rip+0x2498b69]        # 0x14266e300
0x1401d5797: jmp     0x1401d57f7
0x1401d5799: lea     rcx,[rip+0x24970d0]        # 0x14266c870
0x1401d57a0: cmp     ebx,edi
0x1401d57a2: jne     0x1401d57ac
0x1401d57a4: mov     edx,DWORD PTR [rip+0x2498b6e]        # 0x14266e318
0x1401d57aa: jmp     0x1401d57fe
0x1401d57ac: mov     edx,DWORD PTR [rip+0x2498b5a]        # 0x14266e30c
0x1401d57b2: jmp     0x1401d57fe
0x1401d57b4: cmp     ebx,esi
0x1401d57b6: jne     0x1401d57c0
0x1401d57b8: mov     edx,DWORD PTR [rip+0x2498b8a]        # 0x14266e348
0x1401d57be: jmp     0x1401d57f7
0x1401d57c0: lea     rcx,[rip+0x24970a9]        # 0x14266c870
0x1401d57c7: cmp     ebx,edi
0x1401d57c9: jne     0x1401d57d3
0x1401d57cb: mov     edx,DWORD PTR [rip+0x2498b8f]        # 0x14266e360
0x1401d57d1: jmp     0x1401d57fe
0x1401d57d3: mov     edx,DWORD PTR [rip+0x2498b7b]        # 0x14266e354
0x1401d57d9: jmp     0x1401d57fe
0x1401d57db: cmp     ebx,esi
0x1401d57dd: jne     0x1401d57e7
0x1401d57df: mov     edx,DWORD PTR [rip+0x2498b3f]        # 0x14266e324
0x1401d57e5: jmp     0x1401d57f7
0x1401d57e7: cmp     ebx,edi
0x1401d57e9: mov     edx,DWORD PTR [rip+0x2498b4d]        # 0x14266e33c
0x1401d57ef: je      0x1401d57f7
0x1401d57f1: mov     edx,DWORD PTR [rip+0x2498b39]        # 0x14266e330
0x1401d57f7: lea     rcx,[rip+0x2497072]        # 0x14266c870
0x1401d57fe: call    0x140af4570
0x1401d5803: mov     r8d,ebx
0x1401d5806: lea     edx,[r13+0x2]
0x1401d580a: lea     rcx,[rip+0x249705f]        # 0x14266c870
0x1401d5811: call    0x1400bc750
0x1401d5816: mov     eax,DWORD PTR [r12+0x1b4]
0x1401d581e: cmp     eax,0x2
0x1401d5821: je      0x1401d588d
0x1401d5823: cmp     eax,0x3
0x1401d5826: je      0x1401d588d
0x1401d5828: cmp     eax,0x8
0x1401d582b: je      0x1401d588d
0x1401d582d: lea     rcx,[r12+0x2b8]
0x1401d5835: call    0x140070480
0x1401d583a: test    rax,rax
0x1401d583d: je      0x1401d5866
0x1401d583f: cmp     ebx,esi
0x1401d5841: jne     0x1401d584b
0x1401d5843: mov     edx,DWORD PTR [rip+0x2498abb]        # 0x14266e304
0x1401d5849: jmp     0x1401d58a9
0x1401d584b: lea     rcx,[rip+0x249701e]        # 0x14266c870
0x1401d5852: cmp     ebx,edi
0x1401d5854: jne     0x1401d585e
0x1401d5856: mov     edx,DWORD PTR [rip+0x2498ac0]        # 0x14266e31c
0x1401d585c: jmp     0x1401d58b0
0x1401d585e: mov     edx,DWORD PTR [rip+0x2498aac]        # 0x14266e310
0x1401d5864: jmp     0x1401d58b0
0x1401d5866: cmp     ebx,esi
0x1401d5868: jne     0x1401d5872
0x1401d586a: mov     edx,DWORD PTR [rip+0x2498adc]        # 0x14266e34c
0x1401d5870: jmp     0x1401d58a9
0x1401d5872: lea     rcx,[rip+0x2496ff7]        # 0x14266c870
0x1401d5879: cmp     ebx,edi
0x1401d587b: jne     0x1401d5885
0x1401d587d: mov     edx,DWORD PTR [rip+0x2498ae1]        # 0x14266e364
0x1401d5883: jmp     0x1401d58b0
0x1401d5885: mov     edx,DWORD PTR [rip+0x2498acd]        # 0x14266e358
0x1401d588b: jmp     0x1401d58b0
0x1401d588d: cmp     ebx,esi
0x1401d588f: jne     0x1401d5899
0x1401d5891: mov     edx,DWORD PTR [rip+0x2498a91]        # 0x14266e328
0x1401d5897: jmp     0x1401d58a9
0x1401d5899: cmp     ebx,edi
0x1401d589b: mov     edx,DWORD PTR [rip+0x2498a9f]        # 0x14266e340
0x1401d58a1: je      0x1401d58a9
0x1401d58a3: mov     edx,DWORD PTR [rip+0x2498a8b]        # 0x14266e334
0x1401d58a9: lea     rcx,[rip+0x2496fc0]        # 0x14266c870
0x1401d58b0: call    0x140af4570
0x1401d58b5: inc     ebx
0x1401d58b7: cmp     ebx,edi
0x1401d58b9: jle     0x1401d56a0
0x1401d58bf: xor     r8d,r8d
0x1401d58c2: mov     edx,0x7
0x1401d58c7: mov     r9b,0x1
0x1401d58ca: lea     rcx,[rip+0x2496f9f]        # 0x14266c870
0x1401d58d1: call    0x1400bc760
0x1401d58d6: lea     r8d,[rsi+0x5]
0x1401d58da: lea     edx,[r13+0x1]
0x1401d58de: lea     rcx,[rip+0x2496f8b]        # 0x14266c870
0x1401d58e5: call    0x1400bc750
0x1401d58ea: lea     rdx,[rip+0x144a88f]        # 0x141620180 ; literal='Missions'
0x1401d58f1: lea     rcx,[rbp+0x3690]
0x1401d58f8: call    0x140069780
0x1401d58fd: nop     
0x1401d58fe: xor     r9d,r9d
0x1401d5901: xor     r8d,r8d
0x1401d5904: lea     rdx,[rbp+0x3690]
0x1401d590b: lea     rcx,[rip+0x2496f5e]        # 0x14266c870
0x1401d5912: call    0x140af3400
0x1401d5917: nop     
0x1401d5918: lea     rcx,[rbp+0x3690]
0x1401d591f: call    0x140069460
0x1401d5924: mov     ebx,esi
0x1401d5926: mov     r13,QWORD PTR [rsp+0x78]
0x1401d592b: cmp     esi,edi
0x1401d592d: jg      0x1401d5a8d
0x1401d5933: mov     eax,DWORD PTR [rbp-0x58]
0x1401d5936: lea     r14d,[rax+0x1]
0x1401d593a: lea     r15d,[rax+0x2]
0x1401d593e: xchg    ax,ax
0x1401d5940: mov     r8d,ebx
0x1401d5943: mov     edx,eax
0x1401d5945: lea     rcx,[rip+0x2496f24]        # 0x14266c870
0x1401d594c: call    0x1400bc750
0x1401d5951: cmp     DWORD PTR [r13+0x1b4],0x4
0x1401d5959: jne     0x1401d5982
0x1401d595b: cmp     ebx,esi
0x1401d595d: jne     0x1401d5967
0x1401d595f: mov     edx,DWORD PTR [rip+0x24989bb]        # 0x14266e320
0x1401d5965: jmp     0x1401d599e
0x1401d5967: lea     rcx,[rip+0x2496f02]        # 0x14266c870
0x1401d596e: cmp     ebx,edi
0x1401d5970: jne     0x1401d597a
0x1401d5972: mov     edx,DWORD PTR [rip+0x24989c0]        # 0x14266e338
0x1401d5978: jmp     0x1401d59a5
0x1401d597a: mov     edx,DWORD PTR [rip+0x24989ac]        # 0x14266e32c
0x1401d5980: jmp     0x1401d59a5
0x1401d5982: cmp     ebx,esi
0x1401d5984: jne     0x1401d598e
0x1401d5986: mov     edx,DWORD PTR [rip+0x2498970]        # 0x14266e2fc
0x1401d598c: jmp     0x1401d599e
0x1401d598e: cmp     ebx,edi
0x1401d5990: mov     edx,DWORD PTR [rip+0x249897e]        # 0x14266e314
0x1401d5996: je      0x1401d599e
0x1401d5998: mov     edx,DWORD PTR [rip+0x249896a]        # 0x14266e308
0x1401d599e: lea     rcx,[rip+0x2496ecb]        # 0x14266c870
0x1401d59a5: call    0x140af4570
0x1401d59aa: mov     r8d,ebx
0x1401d59ad: mov     edx,r14d
0x1401d59b0: lea     rcx,[rip+0x2496eb9]        # 0x14266c870
0x1401d59b7: call    0x1400bc750
0x1401d59bc: cmp     DWORD PTR [r13+0x1b4],0x4
0x1401d59c4: jne     0x1401d59ed
0x1401d59c6: cmp     ebx,esi
0x1401d59c8: jne     0x1401d59d2
0x1401d59ca: mov     edx,DWORD PTR [rip+0x2498954]        # 0x14266e324
0x1401d59d0: jmp     0x1401d5a09
0x1401d59d2: lea     rcx,[rip+0x2496e97]        # 0x14266c870
0x1401d59d9: cmp     ebx,edi
0x1401d59db: jne     0x1401d59e5
0x1401d59dd: mov     edx,DWORD PTR [rip+0x2498959]        # 0x14266e33c
0x1401d59e3: jmp     0x1401d5a10
0x1401d59e5: mov     edx,DWORD PTR [rip+0x2498945]        # 0x14266e330
0x1401d59eb: jmp     0x1401d5a10
0x1401d59ed: cmp     ebx,esi
0x1401d59ef: jne     0x1401d59f9
0x1401d59f1: mov     edx,DWORD PTR [rip+0x2498909]        # 0x14266e300
0x1401d59f7: jmp     0x1401d5a09
0x1401d59f9: cmp     ebx,edi
0x1401d59fb: mov     edx,DWORD PTR [rip+0x2498917]        # 0x14266e318
0x1401d5a01: je      0x1401d5a09
0x1401d5a03: mov     edx,DWORD PTR [rip+0x2498903]        # 0x14266e30c
0x1401d5a09: lea     rcx,[rip+0x2496e60]        # 0x14266c870
0x1401d5a10: call    0x140af4570
0x1401d5a15: mov     r8d,ebx
0x1401d5a18: mov     edx,r15d
0x1401d5a1b: lea     rcx,[rip+0x2496e4e]        # 0x14266c870
0x1401d5a22: call    0x1400bc750
0x1401d5a27: cmp     DWORD PTR [r13+0x1b4],0x4
0x1401d5a2f: jne     0x1401d5a58
0x1401d5a31: cmp     ebx,esi
0x1401d5a33: jne     0x1401d5a3d
0x1401d5a35: mov     edx,DWORD PTR [rip+0x24988ed]        # 0x14266e328
0x1401d5a3b: jmp     0x1401d5a74
0x1401d5a3d: lea     rcx,[rip+0x2496e2c]        # 0x14266c870
0x1401d5a44: cmp     ebx,edi
0x1401d5a46: jne     0x1401d5a50
0x1401d5a48: mov     edx,DWORD PTR [rip+0x24988f2]        # 0x14266e340
0x1401d5a4e: jmp     0x1401d5a7b
0x1401d5a50: mov     edx,DWORD PTR [rip+0x24988de]        # 0x14266e334
0x1401d5a56: jmp     0x1401d5a7b
0x1401d5a58: cmp     ebx,esi
0x1401d5a5a: jne     0x1401d5a64
0x1401d5a5c: mov     edx,DWORD PTR [rip+0x24988a2]        # 0x14266e304
0x1401d5a62: jmp     0x1401d5a74
0x1401d5a64: cmp     ebx,edi
0x1401d5a66: mov     edx,DWORD PTR [rip+0x24988b0]        # 0x14266e31c
0x1401d5a6c: je      0x1401d5a74
0x1401d5a6e: mov     edx,DWORD PTR [rip+0x249889c]        # 0x14266e310
0x1401d5a74: lea     rcx,[rip+0x2496df5]        # 0x14266c870
0x1401d5a7b: call    0x140af4570
0x1401d5a80: inc     ebx
0x1401d5a82: cmp     ebx,edi
0x1401d5a84: mov     eax,DWORD PTR [rbp-0x58]
0x1401d5a87: jle     0x1401d5940
0x1401d5a8d: xor     r8d,r8d
0x1401d5a90: mov     edx,0x7
0x1401d5a95: mov     r9b,0x1
0x1401d5a98: lea     rcx,[rip+0x2496dd1]        # 0x14266c870
0x1401d5a9f: call    0x1400bc760
0x1401d5aa4: lea     r8d,[rsi+0x2]
0x1401d5aa8: mov     edx,DWORD PTR [rbp-0x58]
0x1401d5aab: inc     edx
0x1401d5aad: lea     rcx,[rip+0x2496dbc]        # 0x14266c870
0x1401d5ab4: call    0x1400bc750
0x1401d5ab9: lea     rdx,[rip+0x144a6d0]        # 0x141620190 ; literal='News and rumors'
0x1401d5ac0: lea     rcx,[rbp+0x36b0]
0x1401d5ac7: call    0x140069780
0x1401d5acc: nop     
0x1401d5acd: xor     r9d,r9d
0x1401d5ad0: xor     r8d,r8d
0x1401d5ad3: lea     rdx,[rbp+0x36b0]
0x1401d5ada: lea     rcx,[rip+0x2496d8f]        # 0x14266c870
0x1401d5ae1: call    0x140af3400
0x1401d5ae6: nop     
0x1401d5ae7: lea     rcx,[rbp+0x36b0]
0x1401d5aee: call    0x140069460
0x1401d5af3: mov     ebx,esi
0x1401d5af5: cmp     esi,edi
0x1401d5af7: jg      0x1401d5c5e
0x1401d5afd: mov     eax,DWORD PTR [rsp+0x70]
0x1401d5b01: lea     r14d,[rax+0x1]
0x1401d5b05: lea     r15d,[rax+0x2]
0x1401d5b09: nop     DWORD PTR [rax+0x0]
0x1401d5b10: mov     r8d,ebx
0x1401d5b13: mov     edx,eax
0x1401d5b15: lea     rcx,[rip+0x2496d54]        # 0x14266c870
0x1401d5b1c: call    0x1400bc750
0x1401d5b21: cmp     DWORD PTR [r13+0x1b4],0x1
0x1401d5b29: jne     0x1401d5b52
0x1401d5b2b: cmp     ebx,esi
0x1401d5b2d: jne     0x1401d5b37
0x1401d5b2f: mov     edx,DWORD PTR [rip+0x24987eb]        # 0x14266e320
0x1401d5b35: jmp     0x1401d5b6e
0x1401d5b37: lea     rcx,[rip+0x2496d32]        # 0x14266c870
0x1401d5b3e: cmp     ebx,edi
0x1401d5b40: jne     0x1401d5b4a
0x1401d5b42: mov     edx,DWORD PTR [rip+0x24987f0]        # 0x14266e338
0x1401d5b48: jmp     0x1401d5b75
0x1401d5b4a: mov     edx,DWORD PTR [rip+0x24987dc]        # 0x14266e32c
0x1401d5b50: jmp     0x1401d5b75
0x1401d5b52: cmp     ebx,esi
0x1401d5b54: jne     0x1401d5b5e
0x1401d5b56: mov     edx,DWORD PTR [rip+0x24987a0]        # 0x14266e2fc
0x1401d5b5c: jmp     0x1401d5b6e
0x1401d5b5e: cmp     ebx,edi
0x1401d5b60: mov     edx,DWORD PTR [rip+0x24987ae]        # 0x14266e314
0x1401d5b66: je      0x1401d5b6e
0x1401d5b68: mov     edx,DWORD PTR [rip+0x249879a]        # 0x14266e308
0x1401d5b6e: lea     rcx,[rip+0x2496cfb]        # 0x14266c870
0x1401d5b75: call    0x140af4570
0x1401d5b7a: mov     r8d,ebx
0x1401d5b7d: mov     edx,r14d
0x1401d5b80: lea     rcx,[rip+0x2496ce9]        # 0x14266c870
0x1401d5b87: call    0x1400bc750
0x1401d5b8c: cmp     DWORD PTR [r13+0x1b4],0x1
0x1401d5b94: jne     0x1401d5bbd
0x1401d5b96: cmp     ebx,esi
0x1401d5b98: jne     0x1401d5ba2
0x1401d5b9a: mov     edx,DWORD PTR [rip+0x2498784]        # 0x14266e324
0x1401d5ba0: jmp     0x1401d5bd9
0x1401d5ba2: lea     rcx,[rip+0x2496cc7]        # 0x14266c870
0x1401d5ba9: cmp     ebx,edi
0x1401d5bab: jne     0x1401d5bb5
0x1401d5bad: mov     edx,DWORD PTR [rip+0x2498789]        # 0x14266e33c
0x1401d5bb3: jmp     0x1401d5be0
0x1401d5bb5: mov     edx,DWORD PTR [rip+0x2498775]        # 0x14266e330
0x1401d5bbb: jmp     0x1401d5be0
0x1401d5bbd: cmp     ebx,esi
0x1401d5bbf: jne     0x1401d5bc9
0x1401d5bc1: mov     edx,DWORD PTR [rip+0x2498739]        # 0x14266e300
0x1401d5bc7: jmp     0x1401d5bd9
0x1401d5bc9: cmp     ebx,edi
0x1401d5bcb: mov     edx,DWORD PTR [rip+0x2498747]        # 0x14266e318
0x1401d5bd1: je      0x1401d5bd9
0x1401d5bd3: mov     edx,DWORD PTR [rip+0x2498733]        # 0x14266e30c
0x1401d5bd9: lea     rcx,[rip+0x2496c90]        # 0x14266c870
0x1401d5be0: call    0x140af4570
0x1401d5be5: mov     r8d,ebx
0x1401d5be8: mov     edx,r15d
0x1401d5beb: lea     rcx,[rip+0x2496c7e]        # 0x14266c870
0x1401d5bf2: call    0x1400bc750
0x1401d5bf7: cmp     DWORD PTR [r13+0x1b4],0x1
0x1401d5bff: jne     0x1401d5c28
0x1401d5c01: cmp     ebx,esi
0x1401d5c03: jne     0x1401d5c0d
0x1401d5c05: mov     edx,DWORD PTR [rip+0x249871d]        # 0x14266e328
0x1401d5c0b: jmp     0x1401d5c44
0x1401d5c0d: lea     rcx,[rip+0x2496c5c]        # 0x14266c870
0x1401d5c14: cmp     ebx,edi
0x1401d5c16: jne     0x1401d5c20
0x1401d5c18: mov     edx,DWORD PTR [rip+0x2498722]        # 0x14266e340
0x1401d5c1e: jmp     0x1401d5c4b
0x1401d5c20: mov     edx,DWORD PTR [rip+0x249870e]        # 0x14266e334
0x1401d5c26: jmp     0x1401d5c4b
0x1401d5c28: cmp     ebx,esi
0x1401d5c2a: jne     0x1401d5c34
0x1401d5c2c: mov     edx,DWORD PTR [rip+0x24986d2]        # 0x14266e304
0x1401d5c32: jmp     0x1401d5c44
0x1401d5c34: cmp     ebx,edi
0x1401d5c36: mov     edx,DWORD PTR [rip+0x24986e0]        # 0x14266e31c
0x1401d5c3c: je      0x1401d5c44
0x1401d5c3e: mov     edx,DWORD PTR [rip+0x24986cc]        # 0x14266e310
0x1401d5c44: lea     rcx,[rip+0x2496c25]        # 0x14266c870
0x1401d5c4b: call    0x140af4570
0x1401d5c50: inc     ebx
0x1401d5c52: cmp     ebx,edi
0x1401d5c54: mov     eax,DWORD PTR [rsp+0x70]
0x1401d5c58: jle     0x1401d5b10
0x1401d5c5e: xor     r8d,r8d
0x1401d5c61: mov     edx,0x7
0x1401d5c66: mov     r9b,0x1
0x1401d5c69: lea     rcx,[rip+0x2496c00]        # 0x14266c870
0x1401d5c70: call    0x1400bc760
0x1401d5c75: lea     r8d,[rsi+0x3]
0x1401d5c79: mov     edx,DWORD PTR [rsp+0x70]
0x1401d5c7d: inc     edx
0x1401d5c7f: lea     rcx,[rip+0x2496bea]        # 0x14266c870
0x1401d5c86: call    0x1400bc750
0x1401d5c8b: lea     rdx,[rip+0x144a50e]        # 0x1416201a0 ; literal='Civilizations'
0x1401d5c92: lea     rcx,[rbp+0x36d0]
0x1401d5c99: call    0x140069780
0x1401d5c9e: nop     
0x1401d5c9f: xor     r9d,r9d
0x1401d5ca2: xor     r8d,r8d
0x1401d5ca5: lea     rdx,[rbp+0x36d0]
0x1401d5cac: lea     rcx,[rip+0x2496bbd]        # 0x14266c870
0x1401d5cb3: call    0x140af3400
0x1401d5cb8: nop     
0x1401d5cb9: lea     rcx,[rbp+0x36d0]
0x1401d5cc0: call    0x140069460
0x1401d5cc5: mov     ebx,esi
0x1401d5cc7: cmp     esi,edi
0x1401d5cc9: jg      0x1401d5ed5
0x1401d5ccf: mov     eax,DWORD PTR [rbp-0x48]
0x1401d5cd2: lea     r14d,[rax+0x1]
0x1401d5cd6: lea     r15d,[rax+0x2]
0x1401d5cda: nop     WORD PTR [rax+rax*1+0x0]
0x1401d5ce0: mov     r8d,ebx
0x1401d5ce3: mov     edx,eax
0x1401d5ce5: lea     rcx,[rip+0x2496b84]        # 0x14266c870
0x1401d5cec: call    0x1400bc750
0x1401d5cf1: cmp     DWORD PTR [r13+0x1b4],0x6
0x1401d5cf9: jne     0x1401d5d22
0x1401d5cfb: cmp     ebx,esi
0x1401d5cfd: jne     0x1401d5d07
0x1401d5cff: mov     edx,DWORD PTR [rip+0x249861b]        # 0x14266e320
0x1401d5d05: jmp     0x1401d5d76
0x1401d5d07: lea     rcx,[rip+0x2496b62]        # 0x14266c870
0x1401d5d0e: cmp     ebx,edi
0x1401d5d10: jne     0x1401d5d1a
0x1401d5d12: mov     edx,DWORD PTR [rip+0x2498620]        # 0x14266e338
0x1401d5d18: jmp     0x1401d5d7d
0x1401d5d1a: mov     edx,DWORD PTR [rip+0x249860c]        # 0x14266e32c
0x1401d5d20: jmp     0x1401d5d7d
0x1401d5d22: lea     rcx,[r13+0x83e8]
0x1401d5d29: call    0x140070480
0x1401d5d2e: test    rax,rax
0x1401d5d31: je      0x1401d5d5a
0x1401d5d33: cmp     ebx,esi
0x1401d5d35: jne     0x1401d5d3f
0x1401d5d37: mov     edx,DWORD PTR [rip+0x24985bf]        # 0x14266e2fc
0x1401d5d3d: jmp     0x1401d5d76
0x1401d5d3f: lea     rcx,[rip+0x2496b2a]        # 0x14266c870
0x1401d5d46: cmp     ebx,edi
0x1401d5d48: jne     0x1401d5d52
0x1401d5d4a: mov     edx,DWORD PTR [rip+0x24985c4]        # 0x14266e314
0x1401d5d50: jmp     0x1401d5d7d
0x1401d5d52: mov     edx,DWORD PTR [rip+0x24985b0]        # 0x14266e308
0x1401d5d58: jmp     0x1401d5d7d
0x1401d5d5a: cmp     ebx,esi
0x1401d5d5c: jne     0x1401d5d66
0x1401d5d5e: mov     edx,DWORD PTR [rip+0x24985e0]        # 0x14266e344
0x1401d5d64: jmp     0x1401d5d76
0x1401d5d66: cmp     ebx,edi
0x1401d5d68: mov     edx,DWORD PTR [rip+0x24985ee]        # 0x14266e35c
0x1401d5d6e: je      0x1401d5d76
0x1401d5d70: mov     edx,DWORD PTR [rip+0x24985da]        # 0x14266e350
0x1401d5d76: lea     rcx,[rip+0x2496af3]        # 0x14266c870
0x1401d5d7d: call    0x140af4570
0x1401d5d82: mov     r8d,ebx
0x1401d5d85: mov     edx,r14d
0x1401d5d88: lea     rcx,[rip+0x2496ae1]        # 0x14266c870
0x1401d5d8f: call    0x1400bc750
0x1401d5d94: cmp     DWORD PTR [r13+0x1b4],0x6
0x1401d5d9c: jne     0x1401d5dc5
0x1401d5d9e: cmp     ebx,esi
0x1401d5da0: jne     0x1401d5daa
0x1401d5da2: mov     edx,DWORD PTR [rip+0x249857c]        # 0x14266e324
0x1401d5da8: jmp     0x1401d5e19
0x1401d5daa: lea     rcx,[rip+0x2496abf]        # 0x14266c870
0x1401d5db1: cmp     ebx,edi
0x1401d5db3: jne     0x1401d5dbd
0x1401d5db5: mov     edx,DWORD PTR [rip+0x2498581]        # 0x14266e33c
0x1401d5dbb: jmp     0x1401d5e20
0x1401d5dbd: mov     edx,DWORD PTR [rip+0x249856d]        # 0x14266e330
0x1401d5dc3: jmp     0x1401d5e20
0x1401d5dc5: lea     rcx,[r13+0x83e8]
0x1401d5dcc: call    0x140070480
0x1401d5dd1: test    rax,rax
0x1401d5dd4: je      0x1401d5dfd
0x1401d5dd6: cmp     ebx,esi
0x1401d5dd8: jne     0x1401d5de2
0x1401d5dda: mov     edx,DWORD PTR [rip+0x2498520]        # 0x14266e300
0x1401d5de0: jmp     0x1401d5e19
0x1401d5de2: lea     rcx,[rip+0x2496a87]        # 0x14266c870
0x1401d5de9: cmp     ebx,edi
0x1401d5deb: jne     0x1401d5df5
0x1401d5ded: mov     edx,DWORD PTR [rip+0x2498525]        # 0x14266e318
0x1401d5df3: jmp     0x1401d5e20
0x1401d5df5: mov     edx,DWORD PTR [rip+0x2498511]        # 0x14266e30c
0x1401d5dfb: jmp     0x1401d5e20
0x1401d5dfd: cmp     ebx,esi
0x1401d5dff: jne     0x1401d5e09
0x1401d5e01: mov     edx,DWORD PTR [rip+0x2498541]        # 0x14266e348
0x1401d5e07: jmp     0x1401d5e19
0x1401d5e09: cmp     ebx,edi
0x1401d5e0b: mov     edx,DWORD PTR [rip+0x249854f]        # 0x14266e360
0x1401d5e11: je      0x1401d5e19
0x1401d5e13: mov     edx,DWORD PTR [rip+0x249853b]        # 0x14266e354
0x1401d5e19: lea     rcx,[rip+0x2496a50]        # 0x14266c870
0x1401d5e20: call    0x140af4570
0x1401d5e25: mov     r8d,ebx
0x1401d5e28: mov     edx,r15d
0x1401d5e2b: lea     rcx,[rip+0x2496a3e]        # 0x14266c870
0x1401d5e32: call    0x1400bc750
0x1401d5e37: cmp     DWORD PTR [r13+0x1b4],0x6
0x1401d5e3f: jne     0x1401d5e68
0x1401d5e41: cmp     ebx,esi
0x1401d5e43: jne     0x1401d5e4d
0x1401d5e45: mov     edx,DWORD PTR [rip+0x24984dd]        # 0x14266e328
0x1401d5e4b: jmp     0x1401d5ebc
0x1401d5e4d: lea     rcx,[rip+0x2496a1c]        # 0x14266c870
0x1401d5e54: cmp     ebx,edi
0x1401d5e56: jne     0x1401d5e60
0x1401d5e58: mov     edx,DWORD PTR [rip+0x24984e2]        # 0x14266e340
0x1401d5e5e: jmp     0x1401d5ec3
0x1401d5e60: mov     edx,DWORD PTR [rip+0x24984ce]        # 0x14266e334
0x1401d5e66: jmp     0x1401d5ec3
0x1401d5e68: lea     rcx,[r13+0x83e8]
0x1401d5e6f: call    0x140070480
0x1401d5e74: test    rax,rax
0x1401d5e77: je      0x1401d5ea0
0x1401d5e79: cmp     ebx,esi
0x1401d5e7b: jne     0x1401d5e85
0x1401d5e7d: mov     edx,DWORD PTR [rip+0x2498481]        # 0x14266e304
0x1401d5e83: jmp     0x1401d5ebc
0x1401d5e85: lea     rcx,[rip+0x24969e4]        # 0x14266c870
0x1401d5e8c: cmp     ebx,edi
0x1401d5e8e: jne     0x1401d5e98
0x1401d5e90: mov     edx,DWORD PTR [rip+0x2498486]        # 0x14266e31c
0x1401d5e96: jmp     0x1401d5ec3
0x1401d5e98: mov     edx,DWORD PTR [rip+0x2498472]        # 0x14266e310
0x1401d5e9e: jmp     0x1401d5ec3
0x1401d5ea0: cmp     ebx,esi
0x1401d5ea2: jne     0x1401d5eac
0x1401d5ea4: mov     edx,DWORD PTR [rip+0x24984a2]        # 0x14266e34c
0x1401d5eaa: jmp     0x1401d5ebc
0x1401d5eac: cmp     ebx,edi
0x1401d5eae: mov     edx,DWORD PTR [rip+0x24984b0]        # 0x14266e364
0x1401d5eb4: je      0x1401d5ebc
0x1401d5eb6: mov     edx,DWORD PTR [rip+0x249849c]        # 0x14266e358
0x1401d5ebc: lea     rcx,[rip+0x24969ad]        # 0x14266c870
0x1401d5ec3: call    0x140af4570
0x1401d5ec8: inc     ebx
0x1401d5eca: cmp     ebx,edi
0x1401d5ecc: mov     eax,DWORD PTR [rbp-0x48]
0x1401d5ecf: jle     0x1401d5ce0
0x1401d5ed5: xor     r8d,r8d
0x1401d5ed8: mov     edx,0x7
0x1401d5edd: mov     r9b,0x1
0x1401d5ee0: lea     rcx,[rip+0x2496989]        # 0x14266c870
0x1401d5ee7: call    0x1400bc760
0x1401d5eec: lea     r8d,[rsi+0x1]
0x1401d5ef0: mov     edx,DWORD PTR [rbp-0x48]
0x1401d5ef3: inc     edx
0x1401d5ef5: lea     rcx,[rip+0x2496974]        # 0x14266c870
0x1401d5efc: call    0x1400bc750
0x1401d5f01: lea     rdx,[rip+0x144a2a8]        # 0x1416201b0 ; literal='Missing citizens'
0x1401d5f08: lea     rcx,[rbp+0x36f0]
0x1401d5f0f: call    0x140069780
0x1401d5f14: nop     
0x1401d5f15: xor     r9d,r9d
0x1401d5f18: xor     r8d,r8d
0x1401d5f1b: lea     rdx,[rbp+0x36f0]
0x1401d5f22: lea     rcx,[rip+0x2496947]        # 0x14266c870
0x1401d5f29: call    0x140af3400
0x1401d5f2e: nop     
0x1401d5f2f: lea     rcx,[rbp+0x36f0]
0x1401d5f36: call    0x140069460
0x1401d5f3b: mov     ebx,esi
0x1401d5f3d: cmp     esi,edi
0x1401d5f3f: jg      0x1401d6145
0x1401d5f45: mov     eax,DWORD PTR [rbp-0x6c]
0x1401d5f48: lea     r14d,[rax+0x1]
0x1401d5f4c: lea     r15d,[rax+0x2]
0x1401d5f50: mov     r8d,ebx
0x1401d5f53: mov     edx,eax
0x1401d5f55: lea     rcx,[rip+0x2496914]        # 0x14266c870
0x1401d5f5c: call    0x1400bc750
0x1401d5f61: cmp     DWORD PTR [r13+0x1b4],0x7
0x1401d5f69: jne     0x1401d5f92
0x1401d5f6b: cmp     ebx,esi
0x1401d5f6d: jne     0x1401d5f77
0x1401d5f6f: mov     edx,DWORD PTR [rip+0x24983ab]        # 0x14266e320
0x1401d5f75: jmp     0x1401d5fe6
0x1401d5f77: lea     rcx,[rip+0x24968f2]        # 0x14266c870
0x1401d5f7e: cmp     ebx,edi
0x1401d5f80: jne     0x1401d5f8a
0x1401d5f82: mov     edx,DWORD PTR [rip+0x24983b0]        # 0x14266e338
0x1401d5f88: jmp     0x1401d5fed
0x1401d5f8a: mov     edx,DWORD PTR [rip+0x249839c]        # 0x14266e32c
0x1401d5f90: jmp     0x1401d5fed
0x1401d5f92: lea     rcx,[r13+0x8410]
0x1401d5f99: call    0x140070480
0x1401d5f9e: test    rax,rax
0x1401d5fa1: je      0x1401d5fca
0x1401d5fa3: cmp     ebx,esi
0x1401d5fa5: jne     0x1401d5faf
0x1401d5fa7: mov     edx,DWORD PTR [rip+0x249834f]        # 0x14266e2fc
0x1401d5fad: jmp     0x1401d5fe6
0x1401d5faf: lea     rcx,[rip+0x24968ba]        # 0x14266c870
0x1401d5fb6: cmp     ebx,edi
0x1401d5fb8: jne     0x1401d5fc2
0x1401d5fba: mov     edx,DWORD PTR [rip+0x2498354]        # 0x14266e314
0x1401d5fc0: jmp     0x1401d5fed
0x1401d5fc2: mov     edx,DWORD PTR [rip+0x2498340]        # 0x14266e308
0x1401d5fc8: jmp     0x1401d5fed
0x1401d5fca: cmp     ebx,esi
0x1401d5fcc: jne     0x1401d5fd6
0x1401d5fce: mov     edx,DWORD PTR [rip+0x2498370]        # 0x14266e344
0x1401d5fd4: jmp     0x1401d5fe6
0x1401d5fd6: cmp     ebx,edi
0x1401d5fd8: mov     edx,DWORD PTR [rip+0x249837e]        # 0x14266e35c
0x1401d5fde: je      0x1401d5fe6
0x1401d5fe0: mov     edx,DWORD PTR [rip+0x249836a]        # 0x14266e350
0x1401d5fe6: lea     rcx,[rip+0x2496883]        # 0x14266c870
0x1401d5fed: call    0x140af4570
0x1401d5ff2: mov     r8d,ebx
0x1401d5ff5: mov     edx,r14d
0x1401d5ff8: lea     rcx,[rip+0x2496871]        # 0x14266c870
0x1401d5fff: call    0x1400bc750
0x1401d6004: cmp     DWORD PTR [r13+0x1b4],0x7
0x1401d600c: jne     0x1401d6035
0x1401d600e: cmp     ebx,esi
0x1401d6010: jne     0x1401d601a
0x1401d6012: mov     edx,DWORD PTR [rip+0x249830c]        # 0x14266e324
0x1401d6018: jmp     0x1401d6089
0x1401d601a: lea     rcx,[rip+0x249684f]        # 0x14266c870
0x1401d6021: cmp     ebx,edi
0x1401d6023: jne     0x1401d602d
0x1401d6025: mov     edx,DWORD PTR [rip+0x2498311]        # 0x14266e33c
0x1401d602b: jmp     0x1401d6090
0x1401d602d: mov     edx,DWORD PTR [rip+0x24982fd]        # 0x14266e330
0x1401d6033: jmp     0x1401d6090
0x1401d6035: lea     rcx,[r13+0x8410]
0x1401d603c: call    0x140070480
0x1401d6041: test    rax,rax
0x1401d6044: je      0x1401d606d
0x1401d6046: cmp     ebx,esi
0x1401d6048: jne     0x1401d6052
0x1401d604a: mov     edx,DWORD PTR [rip+0x24982b0]        # 0x14266e300
0x1401d6050: jmp     0x1401d6089
0x1401d6052: lea     rcx,[rip+0x2496817]        # 0x14266c870
0x1401d6059: cmp     ebx,edi
0x1401d605b: jne     0x1401d6065
0x1401d605d: mov     edx,DWORD PTR [rip+0x24982b5]        # 0x14266e318
0x1401d6063: jmp     0x1401d6090
0x1401d6065: mov     edx,DWORD PTR [rip+0x24982a1]        # 0x14266e30c
0x1401d606b: jmp     0x1401d6090
0x1401d606d: cmp     ebx,esi
0x1401d606f: jne     0x1401d6079
0x1401d6071: mov     edx,DWORD PTR [rip+0x24982d1]        # 0x14266e348
0x1401d6077: jmp     0x1401d6089
0x1401d6079: cmp     ebx,edi
0x1401d607b: mov     edx,DWORD PTR [rip+0x24982df]        # 0x14266e360
0x1401d6081: je      0x1401d6089
0x1401d6083: mov     edx,DWORD PTR [rip+0x24982cb]        # 0x14266e354
0x1401d6089: lea     rcx,[rip+0x24967e0]        # 0x14266c870
0x1401d6090: call    0x140af4570
0x1401d6095: mov     r8d,ebx
0x1401d6098: mov     edx,r15d
0x1401d609b: lea     rcx,[rip+0x24967ce]        # 0x14266c870
0x1401d60a2: call    0x1400bc750
0x1401d60a7: cmp     DWORD PTR [r13+0x1b4],0x7
0x1401d60af: jne     0x1401d60d8
0x1401d60b1: cmp     ebx,esi
0x1401d60b3: jne     0x1401d60bd
0x1401d60b5: mov     edx,DWORD PTR [rip+0x249826d]        # 0x14266e328
0x1401d60bb: jmp     0x1401d612c
0x1401d60bd: lea     rcx,[rip+0x24967ac]        # 0x14266c870
0x1401d60c4: cmp     ebx,edi
0x1401d60c6: jne     0x1401d60d0
0x1401d60c8: mov     edx,DWORD PTR [rip+0x2498272]        # 0x14266e340
0x1401d60ce: jmp     0x1401d6133
0x1401d60d0: mov     edx,DWORD PTR [rip+0x249825e]        # 0x14266e334
0x1401d60d6: jmp     0x1401d6133
0x1401d60d8: lea     rcx,[r13+0x8410]
0x1401d60df: call    0x140070480
0x1401d60e4: test    rax,rax
0x1401d60e7: je      0x1401d6110
0x1401d60e9: cmp     ebx,esi
0x1401d60eb: jne     0x1401d60f5
0x1401d60ed: mov     edx,DWORD PTR [rip+0x2498211]        # 0x14266e304
0x1401d60f3: jmp     0x1401d612c
0x1401d60f5: lea     rcx,[rip+0x2496774]        # 0x14266c870
0x1401d60fc: cmp     ebx,edi
0x1401d60fe: jne     0x1401d6108
0x1401d6100: mov     edx,DWORD PTR [rip+0x2498216]        # 0x14266e31c
0x1401d6106: jmp     0x1401d6133
0x1401d6108: mov     edx,DWORD PTR [rip+0x2498202]        # 0x14266e310
0x1401d610e: jmp     0x1401d6133
0x1401d6110: cmp     ebx,esi
0x1401d6112: jne     0x1401d611c
0x1401d6114: mov     edx,DWORD PTR [rip+0x2498232]        # 0x14266e34c
0x1401d611a: jmp     0x1401d612c
0x1401d611c: cmp     ebx,edi
0x1401d611e: mov     edx,DWORD PTR [rip+0x2498240]        # 0x14266e364
0x1401d6124: je      0x1401d612c
0x1401d6126: mov     edx,DWORD PTR [rip+0x249822c]        # 0x14266e358
0x1401d612c: lea     rcx,[rip+0x249673d]        # 0x14266c870
0x1401d6133: call    0x140af4570
0x1401d6138: inc     ebx
0x1401d613a: cmp     ebx,edi
0x1401d613c: mov     eax,DWORD PTR [rbp-0x6c]
0x1401d613f: jle     0x1401d5f50
0x1401d6145: xor     r8d,r8d
0x1401d6148: mov     edx,0x7
0x1401d614d: mov     r9b,0x1
0x1401d6150: lea     rcx,[rip+0x2496719]        # 0x14266c870
0x1401d6157: call    0x1400bc760
0x1401d615c: lea     r8d,[rsi+0x5]
0x1401d6160: mov     edx,DWORD PTR [rbp-0x6c]
0x1401d6163: inc     edx
0x1401d6165: lea     rcx,[rip+0x2496704]        # 0x14266c870
0x1401d616c: call    0x1400bc750
0x1401d6171: lea     rdx,[rip+0x1431328]        # 0x1416074a0 ; literal='Artifacts'
0x1401d6178: lea     rcx,[rbp+0x3710]
0x1401d617f: call    0x140069780
0x1401d6184: nop     
0x1401d6185: xor     r9d,r9d
0x1401d6188: xor     r8d,r8d
0x1401d618b: lea     rdx,[rbp+0x3710]
0x1401d6192: lea     rcx,[rip+0x24966d7]        # 0x14266c870
0x1401d6199: call    0x140af3400
0x1401d619e: nop     
0x1401d619f: lea     rcx,[rbp+0x3710]
0x1401d61a6: call    0x140069460
0x1401d61ab: mov     r14d,esi
0x1401d61ae: cmp     esi,edi
0x1401d61b0: jg      0x1401d6400
0x1401d61b6: mov     eax,DWORD PTR [rbp-0x70]
0x1401d61b9: lea     r15d,[rax+0x1]
0x1401d61bd: lea     r12d,[rax+0x2]
0x1401d61c1: mov     r8d,r14d
0x1401d61c4: mov     edx,eax
0x1401d61c6: lea     rcx,[rip+0x24966a3]        # 0x14266c870
0x1401d61cd: call    0x1400bc750
0x1401d61d2: cmp     DWORD PTR [r13+0x1b4],0x5
0x1401d61da: jne     0x1401d6208
0x1401d61dc: cmp     r14d,esi
0x1401d61df: jne     0x1401d61ec
0x1401d61e1: mov     edx,DWORD PTR [rip+0x2498139]        # 0x14266e320
0x1401d61e7: jmp     0x1401d626f
0x1401d61ec: lea     rcx,[rip+0x249667d]        # 0x14266c870
0x1401d61f3: cmp     r14d,edi
0x1401d61f6: jne     0x1401d6200
0x1401d61f8: mov     edx,DWORD PTR [rip+0x249813a]        # 0x14266e338
0x1401d61fe: jmp     0x1401d6276
0x1401d6200: mov     edx,DWORD PTR [rip+0x2498126]        # 0x14266e32c
0x1401d6206: jmp     0x1401d6276
0x1401d6208: lea     rcx,[r13+0x8348]
0x1401d620f: call    0x1400709a0
0x1401d6214: mov     rbx,rax
0x1401d6217: lea     rcx,[r13+0x8330]
0x1401d621e: call    0x1400709a0
0x1401d6223: add     rbx,rax
0x1401d6226: je      0x1401d6251
0x1401d6228: cmp     r14d,esi
0x1401d622b: jne     0x1401d6235
0x1401d622d: mov     edx,DWORD PTR [rip+0x24980c9]        # 0x14266e2fc
0x1401d6233: jmp     0x1401d626f
0x1401d6235: lea     rcx,[rip+0x2496634]        # 0x14266c870
0x1401d623c: cmp     r14d,edi
0x1401d623f: jne     0x1401d6249
0x1401d6241: mov     edx,DWORD PTR [rip+0x24980cd]        # 0x14266e314
0x1401d6247: jmp     0x1401d6276
0x1401d6249: mov     edx,DWORD PTR [rip+0x24980b9]        # 0x14266e308
0x1401d624f: jmp     0x1401d6276
0x1401d6251: cmp     r14d,esi
0x1401d6254: jne     0x1401d625e
0x1401d6256: mov     edx,DWORD PTR [rip+0x24980e8]        # 0x14266e344
0x1401d625c: jmp     0x1401d626f
0x1401d625e: cmp     r14d,edi
0x1401d6261: mov     edx,DWORD PTR [rip+0x24980f5]        # 0x14266e35c
0x1401d6267: je      0x1401d626f
0x1401d6269: mov     edx,DWORD PTR [rip+0x24980e1]        # 0x14266e350
0x1401d626f: lea     rcx,[rip+0x24965fa]        # 0x14266c870
0x1401d6276: call    0x140af4570
0x1401d627b: mov     r8d,r14d
0x1401d627e: mov     edx,r15d
0x1401d6281: lea     rcx,[rip+0x24965e8]        # 0x14266c870
0x1401d6288: call    0x1400bc750
0x1401d628d: cmp     DWORD PTR [r13+0x1b4],0x5
0x1401d6295: jne     0x1401d62c3
0x1401d6297: cmp     r14d,esi
0x1401d629a: jne     0x1401d62a7
0x1401d629c: mov     edx,DWORD PTR [rip+0x2498082]        # 0x14266e324
0x1401d62a2: jmp     0x1401d632a
0x1401d62a7: lea     rcx,[rip+0x24965c2]        # 0x14266c870
0x1401d62ae: cmp     r14d,edi
0x1401d62b1: jne     0x1401d62bb
0x1401d62b3: mov     edx,DWORD PTR [rip+0x2498083]        # 0x14266e33c
0x1401d62b9: jmp     0x1401d6331
0x1401d62bb: mov     edx,DWORD PTR [rip+0x249806f]        # 0x14266e330
0x1401d62c1: jmp     0x1401d6331
0x1401d62c3: lea     rcx,[r13+0x8348]
0x1401d62ca: call    0x1400709a0
0x1401d62cf: mov     rbx,rax
0x1401d62d2: lea     rcx,[r13+0x8330]
0x1401d62d9: call    0x1400709a0
0x1401d62de: add     rbx,rax
0x1401d62e1: je      0x1401d630c
0x1401d62e3: cmp     r14d,esi
0x1401d62e6: jne     0x1401d62f0
0x1401d62e8: mov     edx,DWORD PTR [rip+0x2498012]        # 0x14266e300
0x1401d62ee: jmp     0x1401d632a
0x1401d62f0: lea     rcx,[rip+0x2496579]        # 0x14266c870
0x1401d62f7: cmp     r14d,edi
0x1401d62fa: jne     0x1401d6304
0x1401d62fc: mov     edx,DWORD PTR [rip+0x2498016]        # 0x14266e318
0x1401d6302: jmp     0x1401d6331
0x1401d6304: mov     edx,DWORD PTR [rip+0x2498002]        # 0x14266e30c
0x1401d630a: jmp     0x1401d6331
0x1401d630c: cmp     r14d,esi
0x1401d630f: jne     0x1401d6319
0x1401d6311: mov     edx,DWORD PTR [rip+0x2498031]        # 0x14266e348
0x1401d6317: jmp     0x1401d632a
0x1401d6319: cmp     r14d,edi
0x1401d631c: mov     edx,DWORD PTR [rip+0x249803e]        # 0x14266e360
0x1401d6322: je      0x1401d632a
0x1401d6324: mov     edx,DWORD PTR [rip+0x249802a]        # 0x14266e354
0x1401d632a: lea     rcx,[rip+0x249653f]        # 0x14266c870
0x1401d6331: call    0x140af4570
0x1401d6336: mov     r8d,r14d
0x1401d6339: mov     edx,r12d
0x1401d633c: lea     rcx,[rip+0x249652d]        # 0x14266c870
0x1401d6343: call    0x1400bc750
0x1401d6348: cmp     DWORD PTR [r13+0x1b4],0x5
0x1401d6350: jne     0x1401d637e
0x1401d6352: cmp     r14d,esi
0x1401d6355: jne     0x1401d6362
0x1401d6357: mov     edx,DWORD PTR [rip+0x2497fcb]        # 0x14266e328
0x1401d635d: jmp     0x1401d63e5
0x1401d6362: lea     rcx,[rip+0x2496507]        # 0x14266c870
0x1401d6369: cmp     r14d,edi
0x1401d636c: jne     0x1401d6376
0x1401d636e: mov     edx,DWORD PTR [rip+0x2497fcc]        # 0x14266e340
0x1401d6374: jmp     0x1401d63ec
0x1401d6376: mov     edx,DWORD PTR [rip+0x2497fb8]        # 0x14266e334
0x1401d637c: jmp     0x1401d63ec
0x1401d637e: lea     rcx,[r13+0x8348]
0x1401d6385: call    0x1400709a0
0x1401d638a: mov     rbx,rax
0x1401d638d: lea     rcx,[r13+0x8330]
0x1401d6394: call    0x1400709a0
0x1401d6399: add     rbx,rax
0x1401d639c: je      0x1401d63c7
0x1401d639e: cmp     r14d,esi
0x1401d63a1: jne     0x1401d63ab
0x1401d63a3: mov     edx,DWORD PTR [rip+0x2497f5b]        # 0x14266e304
0x1401d63a9: jmp     0x1401d63e5
0x1401d63ab: lea     rcx,[rip+0x24964be]        # 0x14266c870
0x1401d63b2: cmp     r14d,edi
0x1401d63b5: jne     0x1401d63bf
0x1401d63b7: mov     edx,DWORD PTR [rip+0x2497f5f]        # 0x14266e31c
0x1401d63bd: jmp     0x1401d63ec
0x1401d63bf: mov     edx,DWORD PTR [rip+0x2497f4b]        # 0x14266e310
0x1401d63c5: jmp     0x1401d63ec
0x1401d63c7: cmp     r14d,esi
0x1401d63ca: jne     0x1401d63d4
0x1401d63cc: mov     edx,DWORD PTR [rip+0x2497f7a]        # 0x14266e34c
0x1401d63d2: jmp     0x1401d63e5
0x1401d63d4: cmp     r14d,edi
0x1401d63d7: mov     edx,DWORD PTR [rip+0x2497f87]        # 0x14266e364
0x1401d63dd: je      0x1401d63e5
0x1401d63df: mov     edx,DWORD PTR [rip+0x2497f73]        # 0x14266e358
0x1401d63e5: lea     rcx,[rip+0x2496484]        # 0x14266c870
0x1401d63ec: call    0x140af4570
0x1401d63f1: inc     r14d
0x1401d63f4: cmp     r14d,edi
0x1401d63f7: mov     eax,DWORD PTR [rbp-0x70]
0x1401d63fa: jle     0x1401d61c1
0x1401d6400: xor     r8d,r8d
0x1401d6403: mov     edx,0x7
0x1401d6408: mov     r9b,0x1
0x1401d640b: lea     rcx,[rip+0x249645e]        # 0x14266c870
0x1401d6412: call    0x1400bc760
0x1401d6417: lea     r8d,[rsi+0x6]
0x1401d641b: mov     edx,DWORD PTR [rbp-0x70]
0x1401d641e: inc     edx
0x1401d6420: lea     rcx,[rip+0x2496449]        # 0x14266c870
0x1401d6427: call    0x1400bc750
0x1401d642c: lea     rdx,[rip+0x1449d95]        # 0x1416201c8 ; literal='Reports'
0x1401d6433: lea     rcx,[rbp+0x3730]
0x1401d643a: call    0x140069780
0x1401d643f: nop     
0x1401d6440: xor     r9d,r9d
0x1401d6443: xor     r8d,r8d
0x1401d6446: lea     rdx,[rbp+0x3730]
0x1401d644d: lea     rcx,[rip+0x249641c]        # 0x14266c870
0x1401d6454: call    0x140af3400
0x1401d6459: nop     
0x1401d645a: lea     rcx,[rbp+0x3730]
0x1401d6461: call    0x140069460
0x1401d6466: lea     eax,[rdi-0x7]
0x1401d6469: mov     r15d,eax
0x1401d646c: cmp     eax,edi
0x1401d646e: jg      0x1401d64db
0x1401d6470: movsxd  r12,eax
0x1401d6473: movsxd  r13,edi
0x1401d6476: mov     r14,r12
0x1401d6479: nop     DWORD PTR [rax+0x0]
0x1401d6480: mov     esi,DWORD PTR [rbp-0x10]
0x1401d6483: lea     rbx,[rip+0x2497e8a]        # 0x14266e314
0x1401d648a: lea     rdi,[rip+0x2497e8f]        # 0x14266e320
0x1401d6491: mov     r8d,r15d
0x1401d6494: mov     edx,esi
0x1401d6496: lea     rcx,[rip+0x24963d3]        # 0x14266c870
0x1401d649d: call    0x1400bc750
0x1401d64a2: cmp     r14,r12
0x1401d64a5: jne     0x1401d64ac
0x1401d64a7: mov     edx,DWORD PTR [rbx-0x18]
0x1401d64aa: jmp     0x1401d64b8
0x1401d64ac: cmp     r14,r13
0x1401d64af: jne     0x1401d64b5
0x1401d64b1: mov     edx,DWORD PTR [rbx]
0x1401d64b3: jmp     0x1401d64b8
0x1401d64b5: mov     edx,DWORD PTR [rbx-0xc]
0x1401d64b8: lea     rcx,[rip+0x24963b1]        # 0x14266c870
0x1401d64bf: call    0x140af4570
0x1401d64c4: inc     esi
0x1401d64c6: add     rbx,0x4
0x1401d64ca: cmp     rbx,rdi
0x1401d64cd: jl      0x1401d6491
0x1401d64cf: inc     r15d
0x1401d64d2: inc     r14
0x1401d64d5: cmp     r15d,DWORD PTR [rbp-0x68]
0x1401d64d9: jle     0x1401d6480
0x1401d64db: xor     r8d,r8d
0x1401d64de: mov     edx,0x7
0x1401d64e3: mov     r9b,0x1
0x1401d64e6: lea     rcx,[rip+0x2496383]        # 0x14266c870
0x1401d64ed: call    0x1400bc760
0x1401d64f2: mov     r8d,DWORD PTR [rbp-0x28]
0x1401d64f6: add     r8d,0x2
0x1401d64fa: mov     edx,DWORD PTR [rbp-0x10]
0x1401d64fd: inc     edx
0x1401d64ff: lea     rcx,[rip+0x249636a]        # 0x14266c870
0x1401d6506: call    0x1400bc750
0x1401d650b: lea     rdx,[rip+0x1449cbe]        # 0x1416201d0 ; literal='Done'
0x1401d6512: lea     rcx,[rbp+0x3750]
0x1401d6519: call    0x140069780
0x1401d651e: nop     
0x1401d651f: xor     r9d,r9d
0x1401d6522: xor     r8d,r8d
0x1401d6525: lea     rdx,[rbp+0x3750]
0x1401d652c: lea     rcx,[rip+0x249633d]        # 0x14266c870
0x1401d6533: call    0x140af3400
0x1401d6538: nop     
0x1401d6539: lea     rcx,[rbp+0x3750]
0x1401d6540: call    0x140069460
0x1401d6545: cmp     BYTE PTR [rip+0x16f30bc],0x0        # 0x1418c9608
0x1401d654c: je      0x1401d655a
0x1401d654e: lea     rcx,[rip+0x16f30b3]        # 0x1418c9608
0x1401d6555: call    0x1401eb6d0
0x1401d655a: mov     rcx,QWORD PTR [rbp+0x38b0]
0x1401d6561: xor     rcx,rsp
0x1401d6564: call    0x1415530b0
0x1401d6569: lea     r11,[rsp+0x39c0]
0x1401d6571: mov     rbx,QWORD PTR [r11+0x38]
0x1401d6575: mov     rsi,QWORD PTR [r11+0x40]
0x1401d6579: mov     rdi,QWORD PTR [r11+0x48]
0x1401d657d: mov     rsp,r11
0x1401d6580: pop     r15
0x1401d6582: pop     r14
0x1401d6584: pop     r13
0x1401d6586: pop     r12
0x1401d6588: pop     rbp
0x1401d6589: ret     
0x1401d658a: xchg    ax,ax
0x1401d658c: udb     
0x1401d658d: rex     .W sbb al,0x0
0x1401d6590: rex     .X
0x1401d6591: addr32  sbb al,0x0
0x1401d6594: dec     DWORD PTR [rsi-0x467cffe4]
0x1401d659a: sbb     al,0x0
0x1401d659c: int1    
0x1401d659e: sbb     eax,0x1d295100
0x1401d65a3: add     BYTE PTR [rdi-0x74ffe2c4],dh
0x1401d65a9: rex     .RXB sbb eax,0x1ca2e900
0x1401d65af: add     bh,dh
0x1401d65b1: pop     rsp
0x1401d65b2: sbb     al,0x0
0x1401d65b4: jl      0x1401d6613
0x1401d65b6: sbb     al,0x0
0x1401d65b8: jb      0x1401d6618
0x1401d65ba: sbb     al,0x0
0x1401d65bc: mov     ebx,0xfa001c5d
0x1401d65c1: pop     rbp
0x1401d65c2: sbb     al,0x0
0x1401d65c4: ss      pop rsi
0x1401d65c6: sbb     al,0x0
0x1401d65c8: push    rsi
0x1401d65c9: xchg    ebx,eax
0x1401d65ca: sbb     al,0x0
0x1401d65cc: pop     rdi
0x1401d65cd: xchg    ebx,eax
0x1401d65ce: sbb     al,0x0
0x1401d65d0: push    0x4d001c93
0x1401d65d5: xchg    ebx,eax
0x1401d65d6: sbb     al,0x0
0x1401d65d8: jno     0x1401d656d
0x1401d65da: sbb     al,0x0
0x1401d65dc: cmp     edx,DWORD PTR [rbx-0x6cbbffe4]
0x1401d65e2: sbb     al,0x0
0x1401d65e4: xor     DWORD PTR [rax-0x4f54ffe4],esi
0x1401d65ea: sbb     al,0x0
0x1401d65ec: lea     esi,[rcx-0x4f1affe4]
0x1401d65f2: sbb     al,0x0
0x1401d65f5: mov     cl,0x1c
0x1401d65f7: add     BYTE PTR [rsi-0x4f],dl
0x1401d65fa: sbb     al,0x0
0x1401d65fc: jg      0x1401d65b3
0x1401d65fe: sbb     al,0x0
0x1401d6600: mov     ecx,0xf3001cb5
0x1401d6605: mov     ch,0x1c
0x1401d6607: add     BYTE PTR [rip+0x67001cb6],ch        # 0x1a71d82c3
0x1401d660d: mov     dh,0x1c
0x1401d660f: add     bl,bl
0x1401d6611: mov     dh,0x1c
0x1401d6613: add     BYTE PTR [rip+0xffffffffe2001cb7],dl        # 0x1221d82d0
0x1401d6619: mov     eax,0xb953001c
0x1401d661e: sbb     al,0x0
0x1401d6620: ret     
0x1401d6621: mov     bh,0x1c
0x1401d6623: add     ch,bh
0x1401d6625: mov     bh,0x1c
0x1401d6627: add     BYTE PTR [rdi],dh
0x1401d6629: mov     eax,0xb871001c
0x1401d662e: sbb     al,0x0
0x1401d6630: stos    DWORD PTR [rdi],eax
0x1401d6631: mov     eax,0xb919001c
0x1401d6636: sbb     al,0x0
0x1401d6638: rex     .WRXB mov r15b,0x1c
0x1401d663b: add     BYTE PTR [rcx-0x5effe349],cl
0x1401d6641: mov     dh,0x1c
0x1401d6643: add     BYTE PTR [rsi],dh
0x1401d6645: mov     esp,0xbc3f001c
0x1401d664a: sbb     al,0x0
0x1401d664c: movabs  rsp,0xbc51001cbc2d001c
0x1401d6656: sbb     al,0x0
0x1401d6658: sbb     edi,DWORD PTR [rsp+rbx*1+0x1cbc2400]
0x1401d665f: add     BYTE PTR [rdx-0x3a],cl
0x1401d6662: sbb     al,0x0
0x1401d6664: movabs  al,ds:0xa0001cc7a0001cc7
0x1401d666e: sbb     al,0x0
0x1401d6670: movabs  al,ds:0xa0001cc7a0001cc7
0x1401d667a: sbb     al,0x0
0x1401d667c: movabs  al,ds:0x84001cc7a0001cc7
0x1401d6686: sbb     al,0x0
0x1401d6688: movabs  al,ds:0xbe001cc7a0001cc7
0x1401d6692: sbb     al,0x0
0x1401d6694: clc     
0x1401d6696: sbb     al,0x0
0x1401d669a: sbb     al,0x0
0x1401d669c: data16  (bad)
0x1401d669e: sbb     al,0x0
0x1401d66a0: out     dx,eax
0x1401d66a2: sbb     al,0x0
0x1401d66a4: sub     eax,ecx
0x1401d66a6: sbb     al,0x0
0x1401d66a8: movsxd  ecx,eax
0x1401d66aa: sbb     al,0x0
0x1401d66ac: popf    
0x1401d66ad: enter   0x1c,0xd7
0x1401d66b1: enter   0x1c,0x4b
0x1401d66b5: leave   
0x1401d66b6: sbb     al,0x0
0x1401d66b8: test    ecx,ecx
0x1401d66ba: sbb     al,0x0
0x1401d66bc: push    rdx
0x1401d66bd: retf    
0x1401d66be: sbb     al,0x0
0x1401d66c0: ret     
0x1401d66c1: retf    
0x1401d66c2: sbb     al,0x0
0x1401d66c4: xor     ecx,edx
0x1401d66c6: sbb     al,0x0
0x1401d66c8: ins     DWORD PTR [rdi],dx
0x1401d66c9: retf    0x1c
0x1401d66cc: cmps    DWORD PTR [rsi],DWORD PTR [rdi]
0x1401d66cd: retf    0x1c
0x1401d66d0: loope   0x1401d669c
0x1401d66d2: sbb     al,0x0
0x1401d66d4: sbb     ecx,ebx
0x1401d66d6: sbb     al,0x0
0x1401d66d8: mov     ebx,ecx
0x1401d66da: sbb     al,0x0
0x1401d66dc: mov     edi,0xf9001cc9
0x1401d66e1: leave   
0x1401d66e2: sbb     al,0x0
0x1401d66e4: adc     ecx,ecx
0x1401d66e6: sbb     al,0x0
0x1401d66e8: fdivp   st(4),st
0x1401d66ea: sbb     al,0x0
0x1401d66ec: out     0xfc,eax
0x1401d66ee: sbb     al,0x0
0x1401d66f0: lock    cld
0x1401d66f2: sbb     al,0x0
0x1401d66f4: fc      1c 00          	{rex2 0xfc} cldemote BYTE PTR [r16]
0x1401d66f8: stc     
0x1401d66f9: cld     
0x1401d66fa: sbb     al,0x0
0x1401d66fc: ret     
0x1401d66fd: cld     
0x1401d66fe: sbb     al,0x0
0x1401d6700: int3    
0x1401d6701: cld     
0x1401d6702: sbb     al,0x0
0x1401d6704: movabs  al,ds:0xb2001d08a9001d08
0x1401d670d: or      BYTE PTR [rip+0x1d089700],bl        # 0x15d25fe13
0x1401d6713: add     BYTE PTR [rbx-0x7affe2f8],bh
0x1401d6719: or      BYTE PTR [rip+0x1d088e00],bl        # 0x15d25f51f
0x1401d671f: add     BYTE PTR [rcx+0x25],dh
0x1401d6722: sbb     eax,0x1d25f500
0x1401d6727: add     bl,ch
0x1401d6729: es      sbb eax,0x1d263400
0x1401d672f: add     BYTE PTR [rbx+0x26],dh
0x1401d6732: sbb     eax,0x1d26af00
0x1401d6737: add     dh,bh
0x1401d6739: sub     ebx,DWORD PTR [rip+0x1d2c0700]        # 0x15d496e3f
0x1401d673f: add     BYTE PTR [rax],dl
0x1401d6741: sub     al,0x1d
0x1401d6743: add     BYTE PTR [rcx],bl
0x1401d6745: sub     al,0x1d
0x1401d6747: add     BYTE PTR [rax],al
0x1401d6749: add     DWORD PTR [rdx],eax
0x1401d674b: add     eax,DWORD PTR [rbx]
0x1401d674d: add     eax,DWORD PTR [rbx]
0x1401d674f: add     eax,DWORD PTR [rbx]
0x1401d6751: add     eax,DWORD PTR [rbx]
0x1401d6753: add     eax,DWORD PTR [rbx]
0x1401d6755: add     eax,DWORD PTR [rbx]
0x1401d6757: add     eax,DWORD PTR [rbx]
0x1401d6759: add     eax,DWORD PTR [rbx]
0x1401d675b: add     eax,DWORD PTR [rax]
0x1401d675d: add     DWORD PTR [rdx],eax
0x1401d675f: add     eax,DWORD PTR [rbx]
0x1401d6761: add     eax,DWORD PTR [rbx]
0x1401d6763: add     eax,DWORD PTR [rbx]
0x1401d6765: add     eax,DWORD PTR [rax]
0x1401d6767: add     DWORD PTR [rdx],eax
0x1401d6769: nop     DWORD PTR [rax]
0x1401d676c: leave   
0x1401d676d: xor     BYTE PTR [rip+0x1d30de00],bl        # 0x15d4e4573
0x1401d6773: add     ch,ah
0x1401d6775: xor     BYTE PTR [rip+0x1d30ec00],bl        # 0x15d4e537b
0x1401d677b: add     bl,dh
0x1401d677d: xor     BYTE PTR [rip+0x1d30fa00],bl        # 0x15d4e6183
0x1401d6783: add     ch,cl
0x1401d6785: xor     BYTE PTR [rip+0x1d310500],bl        # 0x15d4e6c8b
0x1401d678b: add     bh,dl
0x1401d678d: xor     BYTE PTR [rip+0x1d30de00],bl        # 0x15d4e4593
0x1401d6793: add     ch,ah
0x1401d6795: xor     BYTE PTR [rip+0x1d30ec00],bl        # 0x15d4e539b
0x1401d679b: add     bl,dh
0x1401d679d: xor     BYTE PTR [rip+0x1d30fa00],bl        # 0x15d4e61a3
0x1401d67a3: add     dh,bh
0x1401d67a5: xor     BYTE PTR [rip+0x1d310500],bl        # 0x15d4e6cab
0x1401d67ab: add     dl,al
0x1401d67ad: xor     DWORD PTR [rip+0x1d31c900],ebx        # 0x15d4f30b3
0x1401d67b3: add     bl,dl
0x1401d67b5: xor     DWORD PTR [rip+0x1d31dd00],ebx        # 0x15d4f44bb
0x1401d67bb: add     bh,ah
0x1401d67bd: xor     DWORD PTR [rip+0x1d31f100],ebx        # 0x15d4f58c3
0x1401d67c3: add     BYTE PTR [rdx+rsi*1],dh
0x1401d67c6: sbb     eax,0x1d31f800
0x1401d67cb: add     ch,bh
0x1401d67cd: xor     DWORD PTR [rip+0x1d320400],ebx        # 0x15d4f6bd3
0x1401d67d3: add     BYTE PTR [rdi],cl
0x1401d67d5: xor     bl,BYTE PTR [rip+0x1d321900]        # 0x15d4f80db
0x1401d67db: add     BYTE PTR [rbx],ah
0x1401d67dd: xor     bl,BYTE PTR [rip+0x1d322d00]        # 0x15d4f94e3
0x1401d67e3: add     BYTE PTR [rdx+rsi*1],dh
0x1401d67e6: sbb     eax,0x1d323e00
0x1401d67eb: add     dl,ah
0x1401d67ed: xor     bl,BYTE PTR [rip+0x1d32e900]        # 0x15d5050f3
0x1401d67f3: add     bl,dh
0x1401d67f5: xor     bl,BYTE PTR [rip+0x1d32fd00]        # 0x15d5064fb
0x1401d67fb: add     BYTE PTR [rdi],al
0x1401d67fd: xor     ebx,DWORD PTR [rip+0x1d330f00]        # 0x15d507703
0x1401d6803: add     BYTE PTR [rsi+0x33],dl
0x1401d6806: sbb     eax,0x1d331900
0x1401d680b: add     BYTE PTR [rsi],bl
0x1401d680d: xor     ebx,DWORD PTR [rip+0x1d332500]        # 0x15d508d13
0x1401d6813: add     BYTE PTR [rax],dh
0x1401d6815: xor     ebx,DWORD PTR [rip+0x1d333a00]        # 0x15d50a21b
0x1401d681b: add     BYTE PTR [rbx+rsi*1+0x1d],al
0x1401d681f: add     BYTE PTR [rbx+rsi*1+0x1d],cl
0x1401d6823: add     BYTE PTR [rsi+0x33],dl
0x1401d6826: sbb     eax,0x1d336000
