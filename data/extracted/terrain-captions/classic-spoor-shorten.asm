; classic; PE:6a70b91c:0270a000; spoor-shorten; RVA 0x52b330..0x52b8f4
0x0052b330: mov    QWORD PTR [rsp+0x8],rbx
0x0052b335: mov    QWORD PTR [rsp+0x10],rbp
0x0052b33a: mov    QWORD PTR [rsp+0x18],rsi
0x0052b33f: mov    QWORD PTR [rsp+0x20],rdi
0x0052b344: push   r14
0x0052b346: sub    rsp,0x20
0x0052b34a: cmp    QWORD PTR [rcx+0x10],0x2
0x0052b34f: mov    rbx,rcx
0x0052b352: movsxd r14,edx
0x0052b355: jb     0x14052b75a
0x0052b35b: mov    rax,QWORD PTR [rcx+0x18]
0x0052b35f: cmp    rax,0xf
0x0052b363: jbe    0x14052b368
0x0052b365: mov    rcx,QWORD PTR [rcx]
0x0052b368: xor    ebp,ebp
0x0052b36a: cmp    BYTE PTR [rcx],0x41
0x0052b36d: je     0x14052b384
0x0052b36f: mov    rcx,rbx
0x0052b372: cmp    rax,0xf
0x0052b376: jbe    0x14052b37b
0x0052b378: mov    rcx,QWORD PTR [rbx]
0x0052b37b: cmp    BYTE PTR [rcx],0x61
0x0052b37e: jne    0x14052b435
0x0052b384: mov    rcx,rbx
0x0052b387: cmp    rax,0xf
0x0052b38b: jbe    0x14052b390
0x0052b38d: mov    rcx,QWORD PTR [rbx]
0x0052b390: cmp    BYTE PTR [rcx+0x1],0x20
0x0052b394: jne    0x14052b435
0x0052b39a: cmp    QWORD PTR [rbx+0x18],0xf
0x0052b39f: mov    rdi,QWORD PTR [rbx+0x10]
0x0052b3a3: jbe    0x14052b3bd
0x0052b3a5: lea    rax,[rdi-0x1]
0x0052b3a9: mov    edx,0x1
0x0052b3ae: cmp    rax,rdx
0x0052b3b1: mov    r9d,edx
0x0052b3b4: cmovb  rdx,rax
0x0052b3b8: mov    rax,QWORD PTR [rbx]
0x0052b3bb: jmp    0x14052b3d6
0x0052b3bd: mov    r9d,0x1
0x0052b3c3: mov    rax,rdi
0x0052b3c6: sub    rax,r9
0x0052b3c9: mov    edx,r9d
0x0052b3cc: cmp    rax,rdx
0x0052b3cf: cmovb  rdx,rax
0x0052b3d3: mov    rax,rbx
0x0052b3d6: sub    rdi,rdx
0x0052b3d9: lea    rcx,[rax+r9*1]
0x0052b3dd: mov    r8,rdi
0x0052b3e0: add    rdx,rcx
0x0052b3e3: sub    r8,r9
0x0052b3e6: inc    r8
0x0052b3e9: call   0x141535d8a
0x0052b3ee: mov    QWORD PTR [rbx+0x10],rdi
0x0052b3f2: mov    rdx,rbp
0x0052b3f5: cmp    QWORD PTR [rbx+0x18],0xf
0x0052b3fa: mov    eax,0x1
0x0052b3ff: jbe    0x14052b406
0x0052b401: mov    rcx,QWORD PTR [rbx]
0x0052b404: jmp    0x14052b409
0x0052b406: mov    rcx,rbx
0x0052b409: cmp    rdi,rax
0x0052b40c: cmovb  rax,rdi
0x0052b410: add    rcx,rdx
0x0052b413: sub    rdi,rax
0x0052b416: mov    r8,rdi
0x0052b419: sub    r8,rdx
0x0052b41c: inc    r8
0x0052b41f: lea    rdx,[rcx+rax*1]
0x0052b423: call   0x141535d8a
0x0052b428: mov    QWORD PTR [rbx+0x10],rdi
0x0052b42c: cmp    rdi,r14
0x0052b42f: jbe    0x14052b8d9
0x0052b435: cmp    QWORD PTR [rbx+0x10],0x3
0x0052b43a: jb     0x14052b75a
0x0052b440: mov    rax,QWORD PTR [rbx+0x18]
0x0052b444: mov    rcx,rbx
0x0052b447: cmp    rax,0xf
0x0052b44b: jbe    0x14052b450
0x0052b44d: mov    rcx,QWORD PTR [rbx]
0x0052b450: cmp    BYTE PTR [rcx],0x41
0x0052b453: mov    esi,0x2
0x0052b458: je     0x14052b46f
0x0052b45a: mov    rcx,rbx
0x0052b45d: cmp    rax,0xf
0x0052b461: jbe    0x14052b466
0x0052b463: mov    rcx,QWORD PTR [rbx]
0x0052b466: cmp    BYTE PTR [rcx],0x61
0x0052b469: jne    0x14052b593
0x0052b46f: mov    rcx,rbx
0x0052b472: cmp    rax,0xf
0x0052b476: jbe    0x14052b47b
0x0052b478: mov    rcx,QWORD PTR [rbx]
0x0052b47b: cmp    BYTE PTR [rcx+0x1],0x4e
0x0052b47f: je     0x14052b498
0x0052b481: cmp    QWORD PTR [rbx+0x18],0xf
0x0052b486: mov    rax,rbx
0x0052b489: jbe    0x14052b48e
0x0052b48b: mov    rax,QWORD PTR [rbx]
0x0052b48e: cmp    BYTE PTR [rax+0x1],0x6e
0x0052b492: jne    0x14052b593
0x0052b498: mov    rcx,QWORD PTR [rbx+0x18]
0x0052b49c: mov    rax,rbx
0x0052b49f: cmp    rcx,0xf
0x0052b4a3: jbe    0x14052b4a8
0x0052b4a5: mov    rax,QWORD PTR [rbx]
0x0052b4a8: cmp    BYTE PTR [rax+0x2],0x20
0x0052b4ac: jne    0x14052b593
0x0052b4b2: mov    rdi,QWORD PTR [rbx+0x10]
0x0052b4b6: mov    r9,rsi
0x0052b4b9: mov    rax,rdi
0x0052b4bc: mov    edx,0x1
0x0052b4c1: sub    rax,rsi
0x0052b4c4: cmp    rcx,0xf
0x0052b4c8: jbe    0x14052b4d6
0x0052b4ca: cmp    rax,rdx
0x0052b4cd: cmovb  rdx,rax
0x0052b4d1: mov    rax,QWORD PTR [rbx]
0x0052b4d4: jmp    0x14052b4e0
0x0052b4d6: cmp    rax,rdx
0x0052b4d9: cmovb  rdx,rax
0x0052b4dd: mov    rax,rbx
0x0052b4e0: sub    rdi,rdx
0x0052b4e3: lea    rcx,[rax+r9*1]
0x0052b4e7: mov    r8,rdi
0x0052b4ea: add    rdx,rcx
0x0052b4ed: sub    r8,r9
0x0052b4f0: inc    r8
0x0052b4f3: call   0x141535d8a
0x0052b4f8: mov    QWORD PTR [rbx+0x10],rdi
0x0052b4fc: cmp    QWORD PTR [rbx+0x18],0xf
0x0052b501: jbe    0x14052b51b
0x0052b503: lea    rax,[rdi-0x1]
0x0052b507: mov    edx,0x1
0x0052b50c: cmp    rax,rdx
0x0052b50f: mov    r9d,edx
0x0052b512: cmovb  rdx,rax
0x0052b516: mov    rax,QWORD PTR [rbx]
0x0052b519: jmp    0x14052b534
0x0052b51b: mov    r9d,0x1
0x0052b521: mov    rax,rdi
0x0052b524: sub    rax,r9
0x0052b527: mov    edx,r9d
0x0052b52a: cmp    rax,rdx
0x0052b52d: cmovb  rdx,rax
0x0052b531: mov    rax,rbx
0x0052b534: sub    rdi,rdx
0x0052b537: lea    rcx,[rax+r9*1]
0x0052b53b: mov    r8,rdi
0x0052b53e: add    rdx,rcx
0x0052b541: sub    r8,r9
0x0052b544: inc    r8
0x0052b547: call   0x141535d8a
0x0052b54c: mov    QWORD PTR [rbx+0x10],rdi
0x0052b550: mov    rdx,rbp
0x0052b553: cmp    QWORD PTR [rbx+0x18],0xf
0x0052b558: mov    eax,0x1
0x0052b55d: jbe    0x14052b564
0x0052b55f: mov    rcx,QWORD PTR [rbx]
0x0052b562: jmp    0x14052b567
0x0052b564: mov    rcx,rbx
0x0052b567: cmp    rdi,rax
0x0052b56a: cmovb  rax,rdi
0x0052b56e: add    rcx,rdx
0x0052b571: sub    rdi,rax
0x0052b574: mov    r8,rdi
0x0052b577: sub    r8,rdx
0x0052b57a: inc    r8
0x0052b57d: lea    rdx,[rcx+rax*1]
0x0052b581: call   0x141535d8a
0x0052b586: mov    QWORD PTR [rbx+0x10],rdi
0x0052b58a: cmp    rdi,r14
0x0052b58d: jbe    0x14052b8d9
0x0052b593: cmp    QWORD PTR [rbx+0x10],0x4
0x0052b598: jb     0x14052b75a
0x0052b59e: mov    rax,QWORD PTR [rbx+0x18]
0x0052b5a2: mov    rcx,rbx
0x0052b5a5: cmp    rax,0xf
0x0052b5a9: jbe    0x14052b5ae
0x0052b5ab: mov    rcx,QWORD PTR [rbx]
0x0052b5ae: cmp    BYTE PTR [rcx],0x54
0x0052b5b1: je     0x14052b5c8
0x0052b5b3: mov    rcx,rbx
0x0052b5b6: cmp    rax,0xf
0x0052b5ba: jbe    0x14052b5bf
0x0052b5bc: mov    rcx,QWORD PTR [rbx]
0x0052b5bf: cmp    BYTE PTR [rcx],0x74
0x0052b5c2: jne    0x14052b75a
0x0052b5c8: mov    rcx,rbx
0x0052b5cb: cmp    rax,0xf
0x0052b5cf: jbe    0x14052b5d4
0x0052b5d1: mov    rcx,QWORD PTR [rbx]
0x0052b5d4: cmp    BYTE PTR [rcx+0x1],0x48
0x0052b5d8: je     0x14052b5f1
0x0052b5da: cmp    QWORD PTR [rbx+0x18],0xf
0x0052b5df: mov    rax,rbx
0x0052b5e2: jbe    0x14052b5e7
0x0052b5e4: mov    rax,QWORD PTR [rbx]
0x0052b5e7: cmp    BYTE PTR [rax+0x1],0x68
0x0052b5eb: jne    0x14052b75a
0x0052b5f1: mov    rax,QWORD PTR [rbx+0x18]
0x0052b5f5: mov    rcx,rbx
0x0052b5f8: cmp    rax,0xf
0x0052b5fc: jbe    0x14052b601
0x0052b5fe: mov    rcx,QWORD PTR [rbx]
0x0052b601: cmp    BYTE PTR [rcx+0x2],0x45
0x0052b605: je     0x14052b61d
0x0052b607: mov    rcx,rbx
0x0052b60a: cmp    rax,0xf
0x0052b60e: jbe    0x14052b613
0x0052b610: mov    rcx,QWORD PTR [rbx]
0x0052b613: cmp    BYTE PTR [rcx+0x2],0x65
0x0052b617: jne    0x14052b75a
0x0052b61d: mov    rcx,rbx
0x0052b620: cmp    rax,0xf
0x0052b624: jbe    0x14052b629
0x0052b626: mov    rcx,QWORD PTR [rbx]
0x0052b629: cmp    BYTE PTR [rcx+0x3],0x20
0x0052b62d: jne    0x14052b75a
0x0052b633: mov    rdi,QWORD PTR [rbx+0x10]
0x0052b637: mov    edx,0x3
0x0052b63c: mov    rax,rdi
0x0052b63f: mov    r9d,0x1
0x0052b645: sub    rax,rdx
0x0052b648: cmp    QWORD PTR [rbx+0x18],0xf
0x0052b64d: jbe    0x14052b65b
0x0052b64f: cmp    rax,r9
0x0052b652: cmovb  r9,rax
0x0052b656: mov    rax,QWORD PTR [rbx]
0x0052b659: jmp    0x14052b665
0x0052b65b: cmp    rax,r9
0x0052b65e: cmovb  r9,rax
0x0052b662: mov    rax,rbx
0x0052b665: sub    rdi,r9
0x0052b668: lea    rcx,[rax+rdx*1]
0x0052b66c: mov    r8,rdi
0x0052b66f: sub    r8,rdx
0x0052b672: lea    rdx,[rcx+r9*1]
0x0052b676: inc    r8
0x0052b679: call   0x141535d8a
0x0052b67e: mov    rax,rdi
0x0052b681: mov    QWORD PTR [rbx+0x10],rdi
0x0052b685: sub    rax,rsi
0x0052b688: mov    edx,0x1
0x0052b68d: cmp    QWORD PTR [rbx+0x18],0xf
0x0052b692: jbe    0x14052b6a0
0x0052b694: cmp    rax,rdx
0x0052b697: cmovb  rdx,rax
0x0052b69b: mov    rax,QWORD PTR [rbx]
0x0052b69e: jmp    0x14052b6aa
0x0052b6a0: cmp    rax,rdx
0x0052b6a3: cmovb  rdx,rax
0x0052b6a7: mov    rax,rbx
0x0052b6aa: sub    rdi,rdx
0x0052b6ad: lea    rcx,[rax+rsi*1]
0x0052b6b1: mov    r8,rdi
0x0052b6b4: add    rdx,rcx
0x0052b6b7: sub    r8,rsi
0x0052b6ba: inc    r8
0x0052b6bd: call   0x141535d8a
0x0052b6c2: mov    QWORD PTR [rbx+0x10],rdi
0x0052b6c6: cmp    QWORD PTR [rbx+0x18],0xf
0x0052b6cb: jbe    0x14052b6e5
0x0052b6cd: lea    rax,[rdi-0x1]
0x0052b6d1: mov    edx,0x1
0x0052b6d6: cmp    rax,rdx
0x0052b6d9: mov    r9d,edx
0x0052b6dc: cmovb  rdx,rax
0x0052b6e0: mov    rax,QWORD PTR [rbx]
0x0052b6e3: jmp    0x14052b6fe
0x0052b6e5: mov    r9d,0x1
0x0052b6eb: mov    rax,rdi
0x0052b6ee: sub    rax,r9
0x0052b6f1: mov    edx,r9d
0x0052b6f4: cmp    rax,rdx
0x0052b6f7: cmovb  rdx,rax
0x0052b6fb: mov    rax,rbx
0x0052b6fe: sub    rdi,rdx
0x0052b701: lea    rcx,[rax+r9*1]
0x0052b705: mov    r8,rdi
0x0052b708: add    rdx,rcx
0x0052b70b: sub    r8,r9
0x0052b70e: inc    r8
0x0052b711: call   0x141535d8a
0x0052b716: mov    QWORD PTR [rbx+0x10],rdi
0x0052b71a: mov    eax,0x1
0x0052b71f: cmp    QWORD PTR [rbx+0x18],0xf
0x0052b724: jbe    0x14052b72b
0x0052b726: mov    rcx,QWORD PTR [rbx]
0x0052b729: jmp    0x14052b72e
0x0052b72b: mov    rcx,rbx
0x0052b72e: cmp    rdi,rax
0x0052b731: cmovb  rax,rdi
0x0052b735: add    rcx,rbp
0x0052b738: sub    rdi,rax
0x0052b73b: mov    r8,rdi
0x0052b73e: sub    r8,rbp
0x0052b741: inc    r8
0x0052b744: lea    rdx,[rcx+rax*1]
0x0052b748: call   0x141535d8a
0x0052b74d: mov    QWORD PTR [rbx+0x10],rdi
0x0052b751: cmp    rdi,r14
0x0052b754: jbe    0x14052b8d9
0x0052b75a: mov    esi,DWORD PTR [rbx+0x10]
0x0052b75d: dec    esi
0x0052b75f: cmp    esi,0x1
0x0052b762: jl     0x14052b8c0
0x0052b768: movsxd rdi,esi
0x0052b76b: nop    DWORD PTR [rax+rax*1+0x0]
0x0052b770: mov    rax,QWORD PTR [rbx+0x18]
0x0052b774: mov    rcx,rbx
0x0052b777: cmp    rax,0xf
0x0052b77b: jbe    0x14052b780
0x0052b77d: mov    rcx,QWORD PTR [rbx]
0x0052b780: cmp    BYTE PTR [rdi+rcx*1-0x1],0x20
0x0052b785: je     0x14052b8b2
0x0052b78b: mov    rcx,rbx
0x0052b78e: cmp    rax,0xf
0x0052b792: jbe    0x14052b797
0x0052b794: mov    rcx,QWORD PTR [rbx]
0x0052b797: cmp    BYTE PTR [rdi+rcx*1],0x61
0x0052b79b: je     0x14052b857
0x0052b7a1: mov    rcx,rbx
0x0052b7a4: cmp    rax,0xf
0x0052b7a8: jbe    0x14052b7ad
0x0052b7aa: mov    rcx,QWORD PTR [rbx]
0x0052b7ad: cmp    BYTE PTR [rdi+rcx*1],0x65
0x0052b7b1: je     0x14052b857
0x0052b7b7: mov    rax,QWORD PTR [rbx+0x18]
0x0052b7bb: mov    rcx,rbx
0x0052b7be: cmp    rax,0xf
0x0052b7c2: jbe    0x14052b7c7
0x0052b7c4: mov    rcx,QWORD PTR [rbx]
0x0052b7c7: cmp    BYTE PTR [rdi+rcx*1],0x69
0x0052b7cb: je     0x14052b857
0x0052b7d1: mov    rcx,rbx
0x0052b7d4: cmp    rax,0xf
0x0052b7d8: jbe    0x14052b7dd
0x0052b7da: mov    rcx,QWORD PTR [rbx]
0x0052b7dd: cmp    BYTE PTR [rdi+rcx*1],0x6f
0x0052b7e1: je     0x14052b857
0x0052b7e3: mov    rcx,rbx
0x0052b7e6: cmp    rax,0xf
0x0052b7ea: jbe    0x14052b7ef
0x0052b7ec: mov    rcx,QWORD PTR [rbx]
0x0052b7ef: cmp    BYTE PTR [rdi+rcx*1],0x75
0x0052b7f3: je     0x14052b857
0x0052b7f5: mov    rax,QWORD PTR [rbx+0x18]
0x0052b7f9: mov    rcx,rbx
0x0052b7fc: cmp    rax,0xf
0x0052b800: jbe    0x14052b805
0x0052b802: mov    rcx,QWORD PTR [rbx]
0x0052b805: cmp    BYTE PTR [rdi+rcx*1],0x41
0x0052b809: je     0x14052b857
0x0052b80b: mov    rcx,rbx
0x0052b80e: cmp    rax,0xf
0x0052b812: jbe    0x14052b817
0x0052b814: mov    rcx,QWORD PTR [rbx]
0x0052b817: cmp    BYTE PTR [rdi+rcx*1],0x45
0x0052b81b: je     0x14052b857
0x0052b81d: mov    rcx,rbx
0x0052b820: cmp    rax,0xf
0x0052b824: jbe    0x14052b829
0x0052b826: mov    rcx,QWORD PTR [rbx]
0x0052b829: cmp    BYTE PTR [rdi+rcx*1],0x49
0x0052b82d: je     0x14052b857
0x0052b82f: mov    rcx,QWORD PTR [rbx+0x18]
0x0052b833: mov    rax,rbx
0x0052b836: cmp    rcx,0xf
0x0052b83a: jbe    0x14052b83f
0x0052b83c: mov    rax,QWORD PTR [rbx]
0x0052b83f: cmp    BYTE PTR [rdi+rax*1],0x4f
0x0052b843: je     0x14052b857
0x0052b845: mov    rax,rbx
0x0052b848: cmp    rcx,0xf
0x0052b84c: jbe    0x14052b851
0x0052b84e: mov    rax,QWORD PTR [rbx]
0x0052b851: cmp    BYTE PTR [rdi+rax*1],0x55
0x0052b855: jne    0x14052b8b2
0x0052b857: mov    rbp,QWORD PTR [rbx+0x10]
0x0052b85b: mov    r9d,0x1
0x0052b861: mov    rcx,QWORD PTR [rbx+0x18]
0x0052b865: mov    rax,rbp
0x0052b868: movsxd rdx,esi
0x0052b86b: sub    rax,rdx
0x0052b86e: cmp    rcx,0xf
0x0052b872: jbe    0x14052b87d
0x0052b874: cmp    rax,r9
0x0052b877: cmovb  r9,rax
0x0052b87b: jmp    0x14052b88d
0x0052b87d: cmp    rax,r9
0x0052b880: cmovb  r9,rax
0x0052b884: mov    rax,rbx
0x0052b887: cmp    rcx,0xf
0x0052b88b: jbe    0x14052b890
0x0052b88d: mov    rax,QWORD PTR [rbx]
0x0052b890: sub    rbp,r9
0x0052b893: lea    rcx,[rax+rdx*1]
0x0052b897: mov    r8,rbp
0x0052b89a: sub    r8,rdx
0x0052b89d: lea    rdx,[rcx+r9*1]
0x0052b8a1: inc    r8
0x0052b8a4: call   0x141535d8a
0x0052b8a9: mov    QWORD PTR [rbx+0x10],rbp
0x0052b8ad: cmp    rbp,r14
0x0052b8b0: jbe    0x14052b8d9
0x0052b8b2: dec    esi
0x0052b8b4: dec    rdi
0x0052b8b7: cmp    esi,0x1
0x0052b8ba: jge    0x14052b770
0x0052b8c0: cmp    QWORD PTR [rbx+0x10],r14
0x0052b8c4: jbe    0x14052b8d9
0x0052b8c6: mov    QWORD PTR [rbx+0x10],r14
0x0052b8ca: cmp    QWORD PTR [rbx+0x18],0xf
0x0052b8cf: jbe    0x14052b8d4
0x0052b8d1: mov    rbx,QWORD PTR [rbx]
0x0052b8d4: mov    BYTE PTR [rbx+r14*1],0x0
0x0052b8d9: mov    rbx,QWORD PTR [rsp+0x30]
0x0052b8de: mov    rbp,QWORD PTR [rsp+0x38]
0x0052b8e3: mov    rsi,QWORD PTR [rsp+0x40]
0x0052b8e8: mov    rdi,QWORD PTR [rsp+0x48]
0x0052b8ed: add    rsp,0x20
0x0052b8f1: pop    r14
0x0052b8f3: ret
