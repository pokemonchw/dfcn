; reference PE:6aea05a1:02734000; new-game-load-renderer; complete PE unwind owner RVA 0x7da3b0..0x7dbde4
0x7da3b0: mov    QWORD PTR [rsp+0x8],rbx
0x7da3b5: mov    QWORD PTR [rsp+0x10],rsi
0x7da3ba: mov    QWORD PTR [rsp+0x18],rdi
0x7da3bf: push   rbp
0x7da3c0: push   r12
0x7da3c2: push   r13
0x7da3c4: push   r14
0x7da3c6: push   r15
0x7da3c8: mov    rbp,rsp
0x7da3cb: sub    rsp,0x60
0x7da3cf: mov    rax,QWORD PTR [rip+0x10e3c6a]        # 0x1418be040
0x7da3d6: xor    rax,rsp
0x7da3d9: mov    QWORD PTR [rbp-0x10],rax
0x7da3dd: mov    r13,rcx
0x7da3e0: cmp    DWORD PTR [rip+0x1c15811],0x0        # 0x1423efbf8
0x7da3e7: jle    0x1407da403
0x7da3e9: mov    rax,QWORD PTR [rip+0x1c15800]        # 0x1423efbf0
0x7da3f0: test   BYTE PTR [rax],0x1
0x7da3f3: je     0x1407da403
0x7da3f5: mov    eax,DWORD PTR [rip+0x1e926e5]        # 0x14266cae0
0x7da3fb: mov    DWORD PTR [rip+0x1e926db],eax        # 0x14266cadc
0x7da401: jmp    0x1407da40d
0x7da403: mov    DWORD PTR [rip+0x1e926cf],0xffffffff        # 0x14266cadc
0x7da40d: mov    BYTE PTR [rip+0x1e926c4],0x0        # 0x14266cad8
0x7da414: lea    rdx,[rbp-0x40]
0x7da418: lea    rcx,[rbp-0x3c]
0x7da41c: call   0x140c4b030
0x7da421: xor    r8d,r8d
0x7da424: mov    dl,0xff
0x7da426: xor    ecx,ecx
0x7da428: call   0x1408d8160
0x7da42d: mov    r14d,DWORD PTR [rip+0x1c157d4]        # 0x1423efc08
0x7da434: dec    r14d
0x7da437: xor    r12d,r12d
0x7da43a: mov    ebx,DWORD PTR [rbp-0x40]
0x7da43d: mov    esi,DWORD PTR [rbp-0x3c]
0x7da440: cmp    DWORD PTR [rip+0x1e92695],0xffffffff        # 0x14266cadc
0x7da447: jne    0x1407da519
0x7da44d: mov    DWORD PTR [rip+0x1e924a5],0x1000006        # 0x14266c8fc
0x7da457: mov    edi,r12d
0x7da45a: test   r14d,r14d
0x7da45d: js     0x1407da519
0x7da463: mov    r11d,esi
0x7da466: cmp    esi,ebx
0x7da468: jg     0x1407da50e
0x7da46e: xchg   ax,ax
0x7da470: mov    DWORD PTR [rip+0x1e9247d],r11d        # 0x14266c8f4
0x7da477: mov    DWORD PTR [rip+0x1e9247b],edi        # 0x14266c8f8
0x7da47d: test   edi,edi
0x7da47f: jne    0x1407da4aa
0x7da481: cmp    r11d,esi
0x7da484: jne    0x1407da48e
0x7da486: mov    edx,DWORD PTR [rip+0x1c18ca0]        # 0x1423f312c
0x7da48c: jmp    0x1407da4f6
0x7da48e: lea    rcx,[rip+0x1e923db]        # 0x14266c870
0x7da495: cmp    r11d,ebx
0x7da498: jne    0x1407da4a2
0x7da49a: mov    edx,DWORD PTR [rip+0x1c18c94]        # 0x1423f3134
0x7da4a0: jmp    0x1407da4fd
0x7da4a2: mov    edx,DWORD PTR [rip+0x1c18c88]        # 0x1423f3130
0x7da4a8: jmp    0x1407da4fd
0x7da4aa: cmp    edi,r14d
0x7da4ad: jne    0x1407da4d8
0x7da4af: cmp    r11d,esi
0x7da4b2: jne    0x1407da4bc
0x7da4b4: mov    edx,DWORD PTR [rip+0x1c18c8a]        # 0x1423f3144
0x7da4ba: jmp    0x1407da4f6
0x7da4bc: lea    rcx,[rip+0x1e923ad]        # 0x14266c870
0x7da4c3: cmp    r11d,ebx
0x7da4c6: jne    0x1407da4d0
0x7da4c8: mov    edx,DWORD PTR [rip+0x1c18c7e]        # 0x1423f314c
0x7da4ce: jmp    0x1407da4fd
0x7da4d0: mov    edx,DWORD PTR [rip+0x1c18c72]        # 0x1423f3148
0x7da4d6: jmp    0x1407da4fd
0x7da4d8: cmp    r11d,esi
0x7da4db: jne    0x1407da4e5
0x7da4dd: mov    edx,DWORD PTR [rip+0x1c18c55]        # 0x1423f3138
0x7da4e3: jmp    0x1407da4f6
0x7da4e5: cmp    r11d,ebx
0x7da4e8: mov    edx,DWORD PTR [rip+0x1c18c52]        # 0x1423f3140
0x7da4ee: je     0x1407da4f6
0x7da4f0: mov    edx,DWORD PTR [rip+0x1c18c46]        # 0x1423f313c
0x7da4f6: lea    rcx,[rip+0x1e92373]        # 0x14266c870
0x7da4fd: call   0x140af4570
0x7da502: inc    r11d
0x7da505: cmp    r11d,ebx
0x7da508: jle    0x1407da470
0x7da50e: inc    edi
0x7da510: cmp    edi,r14d
0x7da513: jle    0x1407da463
0x7da519: mov    DWORD PTR [rip+0x1e923d9],0x1010007        # 0x14266c8fc
0x7da523: mov    r9d,DWORD PTR [rip+0x1e869ae]        # 0x142660ed8
0x7da52a: add    r9d,DWORD PTR [rip+0x1e869a3]        # 0x142660ed4
0x7da531: add    r9d,DWORD PTR [r13+0x2e0]
0x7da538: mov    rcx,QWORD PTR [rip+0x1e869a9]        # 0x142660ee8
0x7da53f: sub    rcx,QWORD PTR [rip+0x1e8699a]        # 0x142660ee0
0x7da546: sar    rcx,0x3
0x7da54a: lea    r8d,[rcx*2+0x24]
0x7da552: lea    r15d,[rsi+0x5]
0x7da556: lea    edi,[rbx-0x6]
0x7da559: mov    eax,edi
0x7da55b: sub    eax,r15d
0x7da55e: test   r9d,r9d
0x7da561: cmovns r12d,r9d
0x7da565: imul   eax,r12d
0x7da569: cdq
0x7da56a: idiv   r8d
0x7da56d: add    eax,r15d
0x7da570: mov    ecx,r15d
0x7da573: cmp    eax,r15d
0x7da576: cmovge ecx,eax
0x7da579: lea    r12d,[rdi-0x1]
0x7da57d: cmp    ecx,r12d
0x7da580: cmovle r12d,ecx
0x7da584: mov    eax,0x66666667
0x7da589: imul   r14d
0x7da58c: sar    edx,1
0x7da58e: mov    r14d,edx
0x7da591: shr    r14d,0x1f
0x7da595: add    r14d,0x6
0x7da599: add    r14d,edx
0x7da59c: mov    r11d,r15d
0x7da59f: cmp    r15d,edi
0x7da5a2: jg     0x1407da624
0x7da5a8: nop    DWORD PTR [rax+rax*1+0x0]
0x7da5b0: mov    DWORD PTR [rip+0x1e9233d],r11d        # 0x14266c8f4
0x7da5b7: mov    DWORD PTR [rip+0x1e9233a],r14d        # 0x14266c8f8
0x7da5be: cmp    r11d,r12d
0x7da5c1: jg     0x1407da5ef
0x7da5c3: cmp    r11d,r15d
0x7da5c6: jne    0x1407da5d0
0x7da5c8: mov    edx,DWORD PTR [rip+0x1c1874a]        # 0x1423f2d18
0x7da5ce: jmp    0x1407da60d
0x7da5d0: xor    r8d,r8d
0x7da5d3: lea    rcx,[rip+0x1e92296]        # 0x14266c870
0x7da5da: cmp    r11d,edi
0x7da5dd: jne    0x1407da5e7
0x7da5df: mov    edx,DWORD PTR [rip+0x1c1873b]        # 0x1423f2d20
0x7da5e5: jmp    0x1407da617
0x7da5e7: mov    edx,DWORD PTR [rip+0x1c1872f]        # 0x1423f2d1c
0x7da5ed: jmp    0x1407da617
0x7da5ef: cmp    r11d,r15d
0x7da5f2: jne    0x1407da5fc
0x7da5f4: mov    edx,DWORD PTR [rip+0x1c1872a]        # 0x1423f2d24
0x7da5fa: jmp    0x1407da60d
0x7da5fc: cmp    r11d,edi
0x7da5ff: mov    edx,DWORD PTR [rip+0x1c18727]        # 0x1423f2d2c
0x7da605: je     0x1407da60d
0x7da607: mov    edx,DWORD PTR [rip+0x1c1871b]        # 0x1423f2d28
0x7da60d: xor    r8d,r8d
0x7da610: lea    rcx,[rip+0x1e92259]        # 0x14266c870
0x7da617: call   0x140af4ba0
0x7da61c: inc    r11d
0x7da61f: cmp    r11d,edi
0x7da622: jle    0x1407da5b0
0x7da624: mov    DWORD PTR [rip+0x1e922ce],0x1010007        # 0x14266c8fc
0x7da62e: mov    DWORD PTR [rip+0x1e922bf],r15d        # 0x14266c8f4
0x7da635: lea    eax,[r14-0x5]
0x7da639: mov    DWORD PTR [rip+0x1e922b9],eax        # 0x14266c8f8
0x7da63f: xorps  xmm0,xmm0
0x7da642: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da646: mov    ecx,0x20
0x7da64b: call   0x140071e00
0x7da650: mov    rdx,rax
0x7da653: mov    QWORD PTR [rbp-0x38],rax
0x7da657: movdqa xmm0,XMMWORD PTR [rip+0xfd1561]        # 0x1417abbc0
0x7da65f: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da664: movups xmm0,XMMWORD PTR [rip+0xef2b9d]        # 0x1416cd208 ; vector='Loading world to'
0x7da66b: movups XMMWORD PTR [rax],xmm0
0x7da66e: movsd  xmm0,QWORD PTR [rip+0xef2ba2]        # 0x1416cd218 ; cstring=' start new game'
0x7da676: movsd  QWORD PTR [rax+0x10],xmm0
0x7da67b: mov    ecx,DWORD PTR [rip+0xef2b9f]        # 0x1416cd220 ; cstring='ew game'
0x7da681: mov    DWORD PTR [rax+0x18],ecx
0x7da684: movzx  eax,WORD PTR [rip+0xef2b99]        # 0x1416cd224 ; cstring='ame'
0x7da68b: mov    WORD PTR [rdx+0x1c],ax
0x7da68f: movzx  eax,BYTE PTR [rip+0xef2b90]        # 0x1416cd226 ; cstring='e'
0x7da696: mov    BYTE PTR [rdx+0x1e],al
0x7da699: mov    BYTE PTR [rdx+0x1f],0x0
0x7da69d: xor    r9d,r9d
0x7da6a0: lea    rdx,[rbp-0x38]
0x7da6a4: lea    rcx,[rip+0x1e921c5]        # 0x14266c870
0x7da6ab: call   0x140af3400
0x7da6b0: nop
0x7da6b1: lea    rcx,[rbp-0x38]
0x7da6b5: call   0x140070e80
0x7da6ba: mov    DWORD PTR [rip+0x1e92238],0x1010007        # 0x14266c8fc
0x7da6c4: mov    DWORD PTR [rip+0x1e92229],r15d        # 0x14266c8f4
0x7da6cb: lea    eax,[r14-0x2]
0x7da6cf: mov    DWORD PTR [rip+0x1e92223],eax        # 0x14266c8f8
0x7da6d5: movsxd rax,DWORD PTR [r13+0x2e0]
0x7da6dc: cmp    eax,0x23
0x7da6df: ja     0x1407da78a
0x7da6e5: lea    rdx,[rip+0xffffffffff825914]        # 0x140000000
0x7da6ec: mov    eax,DWORD PTR [rdx+rax*4+0x7dbc6c]
0x7da6f3: add    rax,rdx
0x7da6f6: jmp    rax
0x7da6f8: xorps  xmm0,xmm0
0x7da6fb: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da6ff: movdqa xmm1,XMMWORD PTR [rip+0xfd13b9]        # 0x1417abac0
0x7da707: movdqu XMMWORD PTR [rbp-0x28],xmm1
0x7da70c: movsd  xmm0,QWORD PTR [rip+0xe4623c]        # 0x141620950 ; cstring='Opening file...'
0x7da714: movsd  QWORD PTR [rbp-0x38],xmm0
0x7da719: mov    eax,DWORD PTR [rip+0xe46239]        # 0x141620958 ; cstring='file...'
0x7da71f: mov    DWORD PTR [rbp-0x30],eax
0x7da722: movzx  eax,WORD PTR [rip+0xe46233]        # 0x14162095c ; cstring='...'
0x7da729: mov    WORD PTR [rbp-0x2c],ax
0x7da72d: movzx  eax,BYTE PTR [rip+0xe4622a]        # 0x14162095e ; cstring='.'
0x7da734: mov    BYTE PTR [rbp-0x2a],al
0x7da737: mov    BYTE PTR [rbp-0x29],0x0
0x7da73b: xor    r9d,r9d
0x7da73e: lea    rdx,[rbp-0x38]
0x7da742: lea    rcx,[rip+0x1e92127]        # 0x14266c870
0x7da749: call   0x140af3400
0x7da74e: nop
0x7da74f: mov    rdx,QWORD PTR [rbp-0x20]
0x7da753: cmp    rdx,0xf
0x7da757: jbe    0x1407da78a
0x7da759: inc    rdx
0x7da75c: mov    rcx,QWORD PTR [rbp-0x38]
0x7da760: mov    rax,rcx
0x7da763: cmp    rdx,0x1000
0x7da76a: jb     0x1407da785
0x7da76c: add    rdx,0x27
0x7da770: mov    rcx,QWORD PTR [rcx-0x8]
0x7da774: sub    rax,rcx
0x7da777: add    rax,0xfffffffffffffff8
0x7da77b: cmp    rax,0x1f
0x7da77f: ja     0x1407dbc63
0x7da785: call   0x1415530d0
0x7da78a: mov    rcx,QWORD PTR [rbp-0x10]
0x7da78e: xor    rcx,rsp
0x7da791: call   0x1415530b0
0x7da796: lea    r11,[rsp+0x60]
0x7da79b: mov    rbx,QWORD PTR [r11+0x30]
0x7da79f: mov    rsi,QWORD PTR [r11+0x38]
0x7da7a3: mov    rdi,QWORD PTR [r11+0x40]
0x7da7a7: mov    rsp,r11
0x7da7aa: pop    r15
0x7da7ac: pop    r14
0x7da7ae: pop    r13
0x7da7b0: pop    r12
0x7da7b2: pop    rbp
0x7da7b3: ret
0x7da7b4: mov    eax,DWORD PTR [rip+0x1e866c6]        # 0x142660e80
0x7da7ba: dec    eax
0x7da7bc: cmp    eax,0x39
0x7da7bf: ja     0x1407db180
0x7da7c5: cdqe
0x7da7c7: mov    ecx,DWORD PTR [rdx+rax*4+0x7dbcfc]
0x7da7ce: add    rcx,rdx
0x7da7d1: jmp    rcx
0x7da7d3: movsxd rax,DWORD PTR [rip+0x1e866fa]        # 0x142660ed4
0x7da7da: test   eax,eax
0x7da7dc: js     0x1407da849
0x7da7de: mov    rcx,QWORD PTR [rip+0x1e86783]        # 0x142660f68
0x7da7e5: sub    rcx,QWORD PTR [rip+0x1e86774]        # 0x142660f60
0x7da7ec: sar    rcx,0x3
0x7da7f0: cmp    rax,rcx
0x7da7f3: jae    0x1407da849
0x7da7f5: lea    rdx,[rip+0xef2ab4]        # 0x1416cd2b0 ; cstring='Loading object files...  '
0x7da7fc: lea    rcx,[rbp-0x38]
0x7da800: call   0x140069780
0x7da805: nop
0x7da806: xor    r9d,r9d
0x7da809: lea    rdx,[rbp-0x38]
0x7da80d: lea    rcx,[rip+0x1e9205c]        # 0x14266c870
0x7da814: call   0x140af3400
0x7da819: nop
0x7da81a: lea    rcx,[rbp-0x38]
0x7da81e: call   0x140070e80
0x7da823: movsxd rax,DWORD PTR [rip+0x1e866aa]        # 0x142660ed4
0x7da82a: xor    r9d,r9d
0x7da82d: mov    rdx,QWORD PTR [rip+0x1e8672c]        # 0x142660f60
0x7da834: mov    rdx,QWORD PTR [rdx+rax*8]
0x7da838: lea    rcx,[rip+0x1e92031]        # 0x14266c870
0x7da83f: call   0x140af3400
0x7da844: jmp    0x1407db180
0x7da849: lea    rdx,[rip+0xef2a60]        # 0x1416cd2b0 ; cstring='Loading object files...  '
0x7da850: lea    rcx,[rbp-0x38]
0x7da854: call   0x140069780
0x7da859: nop
0x7da85a: xor    r9d,r9d
0x7da85d: lea    rdx,[rbp-0x38]
0x7da861: lea    rcx,[rip+0x1e92008]        # 0x14266c870
0x7da868: call   0x140af3400
0x7da86d: nop
0x7da86e: jmp    0x1407db177
0x7da873: lea    rdx,[rip+0xef2a56]        # 0x1416cd2d0 ; cstring='Sorting text...'
0x7da87a: lea    rcx,[rbp-0x38]
0x7da87e: call   0x140069780
0x7da883: nop
0x7da884: xor    r9d,r9d
0x7da887: lea    rdx,[rbp-0x38]
0x7da88b: lea    rcx,[rip+0x1e91fde]        # 0x14266c870
0x7da892: call   0x140af3400
0x7da897: nop
0x7da898: jmp    0x1407db177
0x7da89d: lea    rdx,[rip+0xef29d4]        # 0x1416cd278 ; cstring='Sorting material templates...'
0x7da8a4: lea    rcx,[rbp-0x38]
0x7da8a8: call   0x140069780
0x7da8ad: nop
0x7da8ae: xor    r9d,r9d
0x7da8b1: lea    rdx,[rbp-0x38]
0x7da8b5: lea    rcx,[rip+0x1e91fb4]        # 0x14266c870
0x7da8bc: call   0x140af3400
0x7da8c1: nop
0x7da8c2: jmp    0x1407db177
0x7da8c7: lea    rdx,[rip+0xef29ca]        # 0x1416cd298 ; cstring='Sorting inorganics...'
0x7da8ce: lea    rcx,[rbp-0x38]
0x7da8d2: call   0x140069780
0x7da8d7: nop
0x7da8d8: xor    r9d,r9d
0x7da8db: lea    rdx,[rbp-0x38]
0x7da8df: lea    rcx,[rip+0x1e91f8a]        # 0x14266c870
0x7da8e6: call   0x140af3400
0x7da8eb: nop
0x7da8ec: jmp    0x1407db177
0x7da8f1: lea    rdx,[rip+0xef2a18]        # 0x1416cd310 ; cstring='Sorting plants...'
0x7da8f8: lea    rcx,[rbp-0x38]
0x7da8fc: call   0x140069780
0x7da901: nop
0x7da902: xor    r9d,r9d
0x7da905: lea    rdx,[rbp-0x38]
0x7da909: lea    rcx,[rip+0x1e91f60]        # 0x14266c870
0x7da910: call   0x140af3400
0x7da915: nop
0x7da916: jmp    0x1407db177
0x7da91b: lea    rdx,[rip+0xef2a06]        # 0x1416cd328 ; cstring='Sorting tissue templates...'
0x7da922: lea    rcx,[rbp-0x38]
0x7da926: call   0x140069780
0x7da92b: nop
0x7da92c: xor    r9d,r9d
0x7da92f: lea    rdx,[rbp-0x38]
0x7da933: lea    rcx,[rip+0x1e91f36]        # 0x14266c870
0x7da93a: call   0x140af3400
0x7da93f: nop
0x7da940: jmp    0x1407db177
0x7da945: lea    rdx,[rip+0xef2994]        # 0x1416cd2e0 ; cstring='Sorting items...'
0x7da94c: lea    rcx,[rbp-0x38]
0x7da950: call   0x140069780
0x7da955: nop
0x7da956: xor    r9d,r9d
0x7da959: lea    rdx,[rbp-0x38]
0x7da95d: lea    rcx,[rip+0x1e91f0c]        # 0x14266c870
0x7da964: call   0x140af3400
0x7da969: nop
0x7da96a: jmp    0x1407db177
0x7da96f: lea    rdx,[rip+0xef2982]        # 0x1416cd2f8 ; cstring='Sorting buildings...'
0x7da976: lea    rcx,[rbp-0x38]
0x7da97a: call   0x140069780
0x7da97f: nop
0x7da980: xor    r9d,r9d
0x7da983: lea    rdx,[rbp-0x38]
0x7da987: lea    rcx,[rip+0x1e91ee2]        # 0x14266c870
0x7da98e: call   0x140af3400
0x7da993: nop
0x7da994: jmp    0x1407db177
0x7da999: lea    rdx,[rip+0xef29e0]        # 0x1416cd380 ; cstring='Sorting body detail plans...'
0x7da9a0: lea    rcx,[rbp-0x38]
0x7da9a4: call   0x140069780
0x7da9a9: nop
0x7da9aa: xor    r9d,r9d
0x7da9ad: lea    rdx,[rbp-0x38]
0x7da9b1: lea    rcx,[rip+0x1e91eb8]        # 0x14266c870
0x7da9b8: call   0x140af3400
0x7da9bd: nop
0x7da9be: jmp    0x1407db177
0x7da9c3: lea    rdx,[rip+0xef29d6]        # 0x1416cd3a0 ; cstring='Sorting creature bodies...'
0x7da9ca: lea    rcx,[rbp-0x38]
0x7da9ce: call   0x140069780
0x7da9d3: nop
0x7da9d4: xor    r9d,r9d
0x7da9d7: lea    rdx,[rbp-0x38]
0x7da9db: lea    rcx,[rip+0x1e91e8e]        # 0x14266c870
0x7da9e2: call   0x140af3400
0x7da9e7: nop
0x7da9e8: jmp    0x1407db177
0x7da9ed: lea    rdx,[rip+0xef2954]        # 0x1416cd348 ; cstring='Sorting creature variations...'
0x7da9f4: lea    rcx,[rbp-0x38]
0x7da9f8: call   0x140069780
0x7da9fd: nop
0x7da9fe: xor    r9d,r9d
0x7daa01: lea    rdx,[rbp-0x38]
0x7daa05: lea    rcx,[rip+0x1e91e64]        # 0x14266c870
0x7daa0c: call   0x140af3400
0x7daa11: nop
0x7daa12: jmp    0x1407db177
0x7daa17: lea    rdx,[rip+0xef294a]        # 0x1416cd368 ; cstring='Sorting creatures...'
0x7daa1e: lea    rcx,[rbp-0x38]
0x7daa22: call   0x140069780
0x7daa27: nop
0x7daa28: xor    r9d,r9d
0x7daa2b: lea    rdx,[rbp-0x38]
0x7daa2f: lea    rcx,[rip+0x1e91e3a]        # 0x14266c870
0x7daa36: call   0x140af3400
0x7daa3b: nop
0x7daa3c: jmp    0x1407db177
0x7daa41: lea    rdx,[rip+0xef25f0]        # 0x1416cd038 ; cstring='Sorting entities...'
0x7daa48: lea    rcx,[rbp-0x38]
0x7daa4c: call   0x140069780
0x7daa51: nop
0x7daa52: xor    r9d,r9d
0x7daa55: lea    rdx,[rbp-0x38]
0x7daa59: lea    rcx,[rip+0x1e91e10]        # 0x14266c870
0x7daa60: call   0x140af3400
0x7daa65: nop
0x7daa66: jmp    0x1407db177
0x7daa6b: lea    rdx,[rip+0xef25de]        # 0x1416cd050 ; cstring='Sorting languages...'
0x7daa72: lea    rcx,[rbp-0x38]
0x7daa76: call   0x140069780
0x7daa7b: nop
0x7daa7c: xor    r9d,r9d
0x7daa7f: lea    rdx,[rbp-0x38]
0x7daa83: lea    rcx,[rip+0x1e91de6]        # 0x14266c870
0x7daa8a: call   0x140af3400
0x7daa8f: nop
0x7daa90: jmp    0x1407db177
0x7daa95: lea    rdx,[rip+0xef256c]        # 0x1416cd008 ; cstring='Sorting descriptors...'
0x7daa9c: lea    rcx,[rbp-0x38]
0x7daaa0: call   0x140069780
0x7daaa5: nop
0x7daaa6: xor    r9d,r9d
0x7daaa9: lea    rdx,[rbp-0x38]
0x7daaad: lea    rcx,[rip+0x1e91dbc]        # 0x14266c870
0x7daab4: call   0x140af3400
0x7daab9: nop
0x7daaba: jmp    0x1407db177
0x7daabf: lea    rdx,[rip+0xef255a]        # 0x1416cd020 ; cstring='Sorting reactions...'
0x7daac6: lea    rcx,[rbp-0x38]
0x7daaca: call   0x140069780
0x7daacf: nop
0x7daad0: xor    r9d,r9d
0x7daad3: lea    rdx,[rbp-0x38]
0x7daad7: lea    rcx,[rip+0x1e91d92]        # 0x14266c870
0x7daade: call   0x140af3400
0x7daae3: nop
0x7daae4: jmp    0x1407db177
0x7daae9: lea    rdx,[rip+0xef25a8]        # 0x1416cd098 ; cstring='Sorting interactions...'
0x7daaf0: lea    rcx,[rbp-0x38]
0x7daaf4: call   0x140069780
0x7daaf9: nop
0x7daafa: xor    r9d,r9d
0x7daafd: lea    rdx,[rbp-0x38]
0x7dab01: lea    rcx,[rip+0x1e91d68]        # 0x14266c870
0x7dab08: call   0x140af3400
0x7dab0d: nop
0x7dab0e: jmp    0x1407db177
0x7dab13: lea    rdx,[rip+0xef2596]        # 0x1416cd0b0 ; cstring='Sorting music...'
0x7dab1a: lea    rcx,[rbp-0x38]
0x7dab1e: call   0x140069780
0x7dab23: nop
0x7dab24: xor    r9d,r9d
0x7dab27: lea    rdx,[rbp-0x38]
0x7dab2b: lea    rcx,[rip+0x1e91d3e]        # 0x14266c870
0x7dab32: call   0x140af3400
0x7dab37: nop
0x7dab38: jmp    0x1407db177
0x7dab3d: lea    rdx,[rip+0xef2524]        # 0x1416cd068 ; cstring='Sorting sounds...'
0x7dab44: lea    rcx,[rbp-0x38]
0x7dab48: call   0x140069780
0x7dab4d: nop
0x7dab4e: xor    r9d,r9d
0x7dab51: lea    rdx,[rbp-0x38]
0x7dab55: lea    rcx,[rip+0x1e91d14]        # 0x14266c870
0x7dab5c: call   0x140af3400
0x7dab61: nop
0x7dab62: jmp    0x1407db177
0x7dab67: lea    rdx,[rip+0xef2512]        # 0x1416cd080 ; cstring='Processing languages...'
0x7dab6e: lea    rcx,[rbp-0x38]
0x7dab72: call   0x140069780
0x7dab77: nop
0x7dab78: xor    r9d,r9d
0x7dab7b: lea    rdx,[rbp-0x38]
0x7dab7f: lea    rcx,[rip+0x1e91cea]        # 0x14266c870
0x7dab86: call   0x140af3400
0x7dab8b: nop
0x7dab8c: jmp    0x1407db177
0x7dab91: lea    rdx,[rip+0xef2560]        # 0x1416cd0f8 ; cstring='Processing inorganics...'
0x7dab98: lea    rcx,[rbp-0x38]
0x7dab9c: call   0x140069780
0x7daba1: nop
0x7daba2: xor    r9d,r9d
0x7daba5: lea    rdx,[rbp-0x38]
0x7daba9: lea    rcx,[rip+0x1e91cc0]        # 0x14266c870
0x7dabb0: call   0x140af3400
0x7dabb5: nop
0x7dabb6: jmp    0x1407db177
0x7dabbb: lea    rdx,[rip+0xef2556]        # 0x1416cd118 ; cstring='Processing plants...'
0x7dabc2: lea    rcx,[rbp-0x38]
0x7dabc6: call   0x140069780
0x7dabcb: nop
0x7dabcc: xor    r9d,r9d
0x7dabcf: lea    rdx,[rbp-0x38]
0x7dabd3: lea    rcx,[rip+0x1e91c96]        # 0x14266c870
0x7dabda: call   0x140af3400
0x7dabdf: nop
0x7dabe0: jmp    0x1407db177
0x7dabe5: lea    rdx,[rip+0xef24dc]        # 0x1416cd0c8 ; cstring='Processing items...'
0x7dabec: lea    rcx,[rbp-0x38]
0x7dabf0: call   0x140069780
0x7dabf5: nop
0x7dabf6: xor    r9d,r9d
0x7dabf9: lea    rdx,[rbp-0x38]
0x7dabfd: lea    rcx,[rip+0x1e91c6c]        # 0x14266c870
0x7dac04: call   0x140af3400
0x7dac09: nop
0x7dac0a: jmp    0x1407db177
0x7dac0f: lea    rdx,[rip+0xef24ca]        # 0x1416cd0e0 ; cstring='Processing creatures...'
0x7dac16: lea    rcx,[rbp-0x38]
0x7dac1a: call   0x140069780
0x7dac1f: nop
0x7dac20: xor    r9d,r9d
0x7dac23: lea    rdx,[rbp-0x38]
0x7dac27: lea    rcx,[rip+0x1e91c42]        # 0x14266c870
0x7dac2e: call   0x140af3400
0x7dac33: nop
0x7dac34: jmp    0x1407db177
0x7dac39: lea    rdx,[rip+0xef2528]        # 0x1416cd168 ; cstring='Processing entities...'
0x7dac40: lea    rcx,[rbp-0x38]
0x7dac44: call   0x140069780
0x7dac49: nop
0x7dac4a: xor    r9d,r9d
0x7dac4d: lea    rdx,[rbp-0x38]
0x7dac51: lea    rcx,[rip+0x1e91c18]        # 0x14266c870
0x7dac58: call   0x140af3400
0x7dac5d: nop
0x7dac5e: jmp    0x1407db177
0x7dac63: lea    rdx,[rip+0xef2516]        # 0x1416cd180 ; cstring='Processing reactions...'
0x7dac6a: lea    rcx,[rbp-0x38]
0x7dac6e: call   0x140069780
0x7dac73: nop
0x7dac74: xor    r9d,r9d
0x7dac77: lea    rdx,[rbp-0x38]
0x7dac7b: lea    rcx,[rip+0x1e91bee]        # 0x14266c870
0x7dac82: call   0x140af3400
0x7dac87: nop
0x7dac88: jmp    0x1407db177
0x7dac8d: lea    rdx,[rip+0xef249c]        # 0x1416cd130 ; cstring='Processing interactions...'
0x7dac94: lea    rcx,[rbp-0x38]
0x7dac98: call   0x140069780
0x7dac9d: nop
0x7dac9e: xor    r9d,r9d
0x7daca1: lea    rdx,[rbp-0x38]
0x7daca5: lea    rcx,[rip+0x1e91bc4]        # 0x14266c870
0x7dacac: call   0x140af3400
0x7dacb1: nop
0x7dacb2: jmp    0x1407db177
0x7dacb7: lea    rdx,[rip+0xef2492]        # 0x1416cd150 ; cstring='Processing music...'
0x7dacbe: lea    rcx,[rbp-0x38]
0x7dacc2: call   0x140069780
0x7dacc7: nop
0x7dacc8: xor    r9d,r9d
0x7daccb: lea    rdx,[rbp-0x38]
0x7daccf: lea    rcx,[rip+0x1e91b9a]        # 0x14266c870
0x7dacd6: call   0x140af3400
0x7dacdb: nop
0x7dacdc: jmp    0x1407db177
0x7dace1: lea    rdx,[rip+0xef21a0]        # 0x1416cce88 ; cstring='Processing sounds...'
0x7dace8: lea    rcx,[rbp-0x38]
0x7dacec: call   0x140069780
0x7dacf1: nop
0x7dacf2: xor    r9d,r9d
0x7dacf5: lea    rdx,[rbp-0x38]
0x7dacf9: lea    rcx,[rip+0x1e91b70]        # 0x14266c870
0x7dad00: call   0x140af3400
0x7dad05: nop
0x7dad06: jmp    0x1407db177
0x7dad0b: lea    rdx,[rip+0xe5a0fe]        # 0x141634e10 ; cstring='Finalizing languages...'
0x7dad12: lea    rcx,[rbp-0x38]
0x7dad16: call   0x140069780
0x7dad1b: nop
0x7dad1c: xor    r9d,r9d
0x7dad1f: lea    rdx,[rbp-0x38]
0x7dad23: lea    rcx,[rip+0x1e91b46]        # 0x14266c870
0x7dad2a: call   0x140af3400
0x7dad2f: nop
0x7dad30: jmp    0x1407db177
0x7dad35: lea    rdx,[rip+0xe5a1b4]        # 0x141634ef0 ; cstring='Finalizing descriptors...'
0x7dad3c: lea    rcx,[rbp-0x38]
0x7dad40: call   0x140069780
0x7dad45: nop
0x7dad46: xor    r9d,r9d
0x7dad49: lea    rdx,[rbp-0x38]
0x7dad4d: lea    rcx,[rip+0x1e91b1c]        # 0x14266c870
0x7dad54: call   0x140af3400
0x7dad59: nop
0x7dad5a: jmp    0x1407db177
0x7dad5f: lea    rdx,[rip+0xe5a1aa]        # 0x141634f10 ; cstring='Finalizing material templates...'
0x7dad66: lea    rcx,[rbp-0x38]
0x7dad6a: call   0x140069780
0x7dad6f: nop
0x7dad70: xor    r9d,r9d
0x7dad73: lea    rdx,[rbp-0x38]
0x7dad77: lea    rcx,[rip+0x1e91af2]        # 0x14266c870
0x7dad7e: call   0x140af3400
0x7dad83: nop
0x7dad84: jmp    0x1407db177
0x7dad89: lea    rdx,[rip+0xe5a1a8]        # 0x141634f38 ; cstring='Finalizing inorganics...'
0x7dad90: lea    rcx,[rbp-0x38]
0x7dad94: call   0x140069780
0x7dad99: nop
0x7dad9a: xor    r9d,r9d
0x7dad9d: lea    rdx,[rbp-0x38]
0x7dada1: lea    rcx,[rip+0x1e91ac8]        # 0x14266c870
0x7dada8: call   0x140af3400
0x7dadad: nop
0x7dadae: jmp    0x1407db177
0x7dadb3: lea    rdx,[rip+0xe5a19e]        # 0x141634f58 ; cstring='Finalizing plants...'
0x7dadba: lea    rcx,[rbp-0x38]
0x7dadbe: call   0x140069780
0x7dadc3: nop
0x7dadc4: xor    r9d,r9d
0x7dadc7: lea    rdx,[rbp-0x38]
0x7dadcb: lea    rcx,[rip+0x1e91a9e]        # 0x14266c870
0x7dadd2: call   0x140af3400
0x7dadd7: nop
0x7dadd8: jmp    0x1407db177
0x7daddd: lea    rdx,[rip+0xe5a09c]        # 0x141634e80 ; cstring='Finalizing tissue templates...'
0x7dade4: lea    rcx,[rbp-0x38]
0x7dade8: call   0x140069780
0x7daded: nop
0x7dadee: xor    r9d,r9d
0x7dadf1: lea    rdx,[rbp-0x38]
0x7dadf5: lea    rcx,[rip+0x1e91a74]        # 0x14266c870
0x7dadfc: call   0x140af3400
0x7dae01: nop
0x7dae02: jmp    0x1407db177
0x7dae07: lea    rdx,[rip+0xe5a092]        # 0x141634ea0 ; cstring='Finalizing items...'
0x7dae0e: lea    rcx,[rbp-0x38]
0x7dae12: call   0x140069780
0x7dae17: nop
0x7dae18: xor    r9d,r9d
0x7dae1b: lea    rdx,[rbp-0x38]
0x7dae1f: lea    rcx,[rip+0x1e91a4a]        # 0x14266c870
0x7dae26: call   0x140af3400
0x7dae2b: nop
0x7dae2c: jmp    0x1407db177
0x7dae31: lea    rdx,[rip+0xe5a080]        # 0x141634eb8 ; cstring='Finalizing buildings...'
0x7dae38: lea    rcx,[rbp-0x38]
0x7dae3c: call   0x140069780
0x7dae41: nop
0x7dae42: xor    r9d,r9d
0x7dae45: lea    rdx,[rbp-0x38]
0x7dae49: lea    rcx,[rip+0x1e91a20]        # 0x14266c870
0x7dae50: call   0x140af3400
0x7dae55: nop
0x7dae56: jmp    0x1407db177
0x7dae5b: lea    rdx,[rip+0xe5a06e]        # 0x141634ed0 ; cstring='Finalizing body detail plans...'
0x7dae62: lea    rcx,[rbp-0x38]
0x7dae66: call   0x140069780
0x7dae6b: nop
0x7dae6c: xor    r9d,r9d
0x7dae6f: lea    rdx,[rbp-0x38]
0x7dae73: lea    rcx,[rip+0x1e919f6]        # 0x14266c870
0x7dae7a: call   0x140af3400
0x7dae7f: nop
0x7dae80: jmp    0x1407db177
0x7dae85: lea    rdx,[rip+0xe5a3ac]        # 0x141635238 ; cstring='Finalizing creature variations...'
0x7dae8c: lea    rcx,[rbp-0x38]
0x7dae90: call   0x140069780
0x7dae95: nop
0x7dae96: xor    r9d,r9d
0x7dae99: lea    rdx,[rbp-0x38]
0x7dae9d: lea    rcx,[rip+0x1e919cc]        # 0x14266c870
0x7daea4: call   0x140af3400
0x7daea9: nop
0x7daeaa: jmp    0x1407db177
0x7daeaf: lea    rdx,[rip+0xe5a3aa]        # 0x141635260 ; cstring='Finalizing creatures...'
0x7daeb6: lea    rcx,[rbp-0x38]
0x7daeba: call   0x140069780
0x7daebf: nop
0x7daec0: xor    r9d,r9d
0x7daec3: lea    rdx,[rbp-0x38]
0x7daec7: lea    rcx,[rip+0x1e919a2]        # 0x14266c870
0x7daece: call   0x140af3400
0x7daed3: nop
0x7daed4: jmp    0x1407db177
0x7daed9: lea    rdx,[rip+0xe5a398]        # 0x141635278 ; cstring='Finalizing entities...'
0x7daee0: lea    rcx,[rbp-0x38]
0x7daee4: call   0x140069780
0x7daee9: nop
0x7daeea: xor    r9d,r9d
0x7daeed: lea    rdx,[rbp-0x38]
0x7daef1: lea    rcx,[rip+0x1e91978]        # 0x14266c870
0x7daef8: call   0x140af3400
0x7daefd: nop
0x7daefe: jmp    0x1407db177
0x7daf03: lea    rdx,[rip+0xe5a386]        # 0x141635290 ; cstring='Finalizing reactions...'
0x7daf0a: lea    rcx,[rbp-0x38]
0x7daf0e: call   0x140069780
0x7daf13: nop
0x7daf14: xor    r9d,r9d
0x7daf17: lea    rdx,[rbp-0x38]
0x7daf1b: lea    rcx,[rip+0x1e9194e]        # 0x14266c870
0x7daf22: call   0x140af3400
0x7daf27: nop
0x7daf28: jmp    0x1407db177
0x7daf2d: lea    rdx,[rip+0xe5a28c]        # 0x1416351c0 ; cstring='Finalizing interactions...'
0x7daf34: lea    rcx,[rbp-0x38]
0x7daf38: call   0x140069780
0x7daf3d: nop
0x7daf3e: xor    r9d,r9d
0x7daf41: lea    rdx,[rbp-0x38]
0x7daf45: lea    rcx,[rip+0x1e91924]        # 0x14266c870
0x7daf4c: call   0x140af3400
0x7daf51: nop
0x7daf52: jmp    0x1407db177
0x7daf57: lea    rdx,[rip+0xe5a282]        # 0x1416351e0 ; cstring='Preparing material data...'
0x7daf5e: lea    rcx,[rbp-0x38]
0x7daf62: call   0x140069780
0x7daf67: nop
0x7daf68: xor    r9d,r9d
0x7daf6b: lea    rdx,[rbp-0x38]
0x7daf6f: lea    rcx,[rip+0x1e918fa]        # 0x14266c870
0x7daf76: call   0x140af3400
0x7daf7b: nop
0x7daf7c: jmp    0x1407db177
0x7daf81: lea    rdx,[rip+0xef1f18]        # 0x1416ccea0 ; cstring='Generating inorganics...'
0x7daf88: lea    rcx,[rbp-0x38]
0x7daf8c: call   0x140069780
0x7daf91: nop
0x7daf92: xor    r9d,r9d
0x7daf95: lea    rdx,[rbp-0x38]
0x7daf99: lea    rcx,[rip+0x1e918d0]        # 0x14266c870
0x7dafa0: call   0x140af3400
0x7dafa5: nop
0x7dafa6: jmp    0x1407db177
0x7dafab: lea    rdx,[rip+0xef1ea6]        # 0x1416cce58 ; cstring='Generating plants...'
0x7dafb2: lea    rcx,[rbp-0x38]
0x7dafb6: call   0x140069780
0x7dafbb: nop
0x7dafbc: xor    r9d,r9d
0x7dafbf: lea    rdx,[rbp-0x38]
0x7dafc3: lea    rcx,[rip+0x1e918a6]        # 0x14266c870
0x7dafca: call   0x140af3400
0x7dafcf: nop
0x7dafd0: jmp    0x1407db177
0x7dafd5: lea    rdx,[rip+0xef1e94]        # 0x1416cce70 ; cstring='Generating items...'
0x7dafdc: lea    rcx,[rbp-0x38]
0x7dafe0: call   0x140069780
0x7dafe5: nop
0x7dafe6: xor    r9d,r9d
0x7dafe9: lea    rdx,[rbp-0x38]
0x7dafed: lea    rcx,[rip+0x1e9187c]        # 0x14266c870
0x7daff4: call   0x140af3400
0x7daff9: nop
0x7daffa: jmp    0x1407db177
0x7dafff: lea    rdx,[rip+0xef1ef2]        # 0x1416ccef8 ; cstring='Generating creatures...'
0x7db006: lea    rcx,[rbp-0x38]
0x7db00a: call   0x140069780
0x7db00f: nop
0x7db010: xor    r9d,r9d
0x7db013: lea    rdx,[rbp-0x38]
0x7db017: lea    rcx,[rip+0x1e91852]        # 0x14266c870
0x7db01e: call   0x140af3400
0x7db023: nop
0x7db024: jmp    0x1407db177
0x7db029: lea    rdx,[rip+0xef1ee0]        # 0x1416ccf10 ; cstring='Generating entities...'
0x7db030: lea    rcx,[rbp-0x38]
0x7db034: call   0x140069780
0x7db039: nop
0x7db03a: xor    r9d,r9d
0x7db03d: lea    rdx,[rbp-0x38]
0x7db041: lea    rcx,[rip+0x1e91828]        # 0x14266c870
0x7db048: call   0x140af3400
0x7db04d: nop
0x7db04e: jmp    0x1407db177
0x7db053: lea    rdx,[rip+0xef1e66]        # 0x1416ccec0 ; cstring='Generating reactions...'
0x7db05a: lea    rcx,[rbp-0x38]
0x7db05e: call   0x140069780
0x7db063: nop
0x7db064: xor    r9d,r9d
0x7db067: lea    rdx,[rbp-0x38]
0x7db06b: lea    rcx,[rip+0x1e917fe]        # 0x14266c870
0x7db072: call   0x140af3400
0x7db077: nop
0x7db078: jmp    0x1407db177
0x7db07d: lea    rdx,[rip+0xef1e54]        # 0x1416cced8 ; cstring='Generating interactions...'
0x7db084: lea    rcx,[rbp-0x38]
0x7db088: call   0x140069780
0x7db08d: nop
0x7db08e: xor    r9d,r9d
0x7db091: lea    rdx,[rbp-0x38]
0x7db095: lea    rcx,[rip+0x1e917d4]        # 0x14266c870
0x7db09c: call   0x140af3400
0x7db0a1: nop
0x7db0a2: jmp    0x1407db177
0x7db0a7: lea    rdx,[rip+0xef1eaa]        # 0x1416ccf58 ; cstring='Finalizing generated objects...'
0x7db0ae: lea    rcx,[rbp-0x38]
0x7db0b2: call   0x140069780
0x7db0b7: nop
0x7db0b8: xor    r9d,r9d
0x7db0bb: lea    rdx,[rbp-0x38]
0x7db0bf: lea    rcx,[rip+0x1e917aa]        # 0x14266c870
0x7db0c6: call   0x140af3400
0x7db0cb: nop
0x7db0cc: jmp    0x1407db177
0x7db0d1: mov    ecx,DWORD PTR [rip+0x1e85e01]        # 0x142660ed8
0x7db0d7: test   ecx,ecx
0x7db0d9: js     0x1407db12b
0x7db0db: mov    rax,QWORD PTR [rip+0x1e85e86]        # 0x142660f68
0x7db0e2: sub    rax,QWORD PTR [rip+0x1e85e77]        # 0x142660f60
0x7db0e9: sar    rax,0x3
0x7db0ed: cmp    ecx,eax
0x7db0ef: jge    0x1407db12b
0x7db0f1: lea    rdx,[rip+0xef1e80]        # 0x1416ccf78 ; cstring='Preparing graphics...  '
0x7db0f8: lea    rcx,[rbp-0x38]
0x7db0fc: call   0x140069780
0x7db101: nop
0x7db102: xor    r9d,r9d
0x7db105: lea    rdx,[rbp-0x38]
0x7db109: lea    rcx,[rip+0x1e91760]        # 0x14266c870
0x7db110: call   0x140af3400
0x7db115: nop
0x7db116: lea    rcx,[rbp-0x38]
0x7db11a: call   0x140070e80
0x7db11f: movsxd rax,DWORD PTR [rip+0x1e85db2]        # 0x142660ed8
0x7db126: jmp    0x1407da82a
0x7db12b: lea    rdx,[rip+0xef1e46]        # 0x1416ccf78 ; cstring='Preparing graphics...  '
0x7db132: lea    rcx,[rbp-0x38]
0x7db136: call   0x140069780
0x7db13b: nop
0x7db13c: xor    r9d,r9d
0x7db13f: lea    rdx,[rbp-0x38]
0x7db143: lea    rcx,[rip+0x1e91726]        # 0x14266c870
0x7db14a: call   0x140af3400
0x7db14f: nop
0x7db150: jmp    0x1407db177
0x7db152: lea    rdx,[rip+0xe45947]        # 0x141620aa0 ; cstring='Finishing...'
0x7db159: lea    rcx,[rbp-0x38]
0x7db15d: call   0x140069780
0x7db162: nop
0x7db163: xor    r9d,r9d
0x7db166: lea    rdx,[rbp-0x38]
0x7db16a: lea    rcx,[rip+0x1e916ff]        # 0x14266c870
0x7db171: call   0x140af3400
0x7db176: nop
0x7db177: lea    rcx,[rbp-0x38]
0x7db17b: call   0x140070e80
0x7db180: cmp    BYTE PTR [rip+0x1e85d05],0x0        # 0x142660e8c
0x7db187: jne    0x1407db196
0x7db189: cmp    BYTE PTR [rip+0x1e85cfd],0x0        # 0x142660e8d
0x7db190: je     0x1407da78a
0x7db196: mov    r9d,r14d
0x7db199: mov    r8d,ebx
0x7db19c: mov    edx,esi
0x7db19e: lea    rcx,[rip+0x1e85cdb]        # 0x142660e80
0x7db1a5: call   0x1407e0450
0x7db1aa: jmp    0x1407da78a
0x7db1af: xorps  xmm0,xmm0
0x7db1b2: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db1b6: mov    ecx,0x20
0x7db1bb: call   0x140071e00
0x7db1c0: mov    QWORD PTR [rbp-0x38],rax
0x7db1c4: movdqa xmm0,XMMWORD PTR [rip+0xfd0934]        # 0x1417abb00
0x7db1cc: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db1d1: movups xmm0,XMMWORD PTR [rip+0xe457a8]        # 0x141620980 ; vector='Allocating space'
0x7db1d8: movups XMMWORD PTR [rax],xmm0
0x7db1db: movzx  ecx,WORD PTR [rip+0xe457ae]        # 0x141620990 ; cstring='...'
0x7db1e2: mov    WORD PTR [rax+0x10],cx
0x7db1e6: movzx  ecx,BYTE PTR [rip+0xe457a5]        # 0x141620992 ; cstring='.'
0x7db1ed: mov    BYTE PTR [rax+0x12],cl
0x7db1f0: mov    BYTE PTR [rax+0x13],0x0
0x7db1f4: xor    r9d,r9d
0x7db1f7: lea    rdx,[rbp-0x38]
0x7db1fb: lea    rcx,[rip+0x1e9166e]        # 0x14266c870
0x7db202: call   0x140af3400
0x7db207: nop
0x7db208: jmp    0x1407da74f
0x7db20d: xorps  xmm0,xmm0
0x7db210: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db214: mov    ecx,0x20
0x7db219: call   0x140071e00
0x7db21e: mov    QWORD PTR [rbp-0x38],rax
0x7db222: movdqa xmm0,XMMWORD PTR [rip+0xfd08a6]        # 0x1417abad0
0x7db22a: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db22f: movups xmm0,XMMWORD PTR [rip+0xef1cf2]        # 0x1416ccf28 ; vector='Loading items...'
0x7db236: movups XMMWORD PTR [rax],xmm0
0x7db239: mov    BYTE PTR [rax+0x10],0x0
0x7db23d: xor    r9d,r9d
0x7db240: lea    rdx,[rbp-0x38]
0x7db244: lea    rcx,[rip+0x1e91625]        # 0x14266c870
0x7db24b: call   0x140af3400
0x7db250: nop
0x7db251: jmp    0x1407da74f
0x7db256: xorps  xmm0,xmm0
0x7db259: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db25d: mov    ecx,0x20
0x7db262: call   0x140071e00
0x7db267: mov    QWORD PTR [rbp-0x38],rax
0x7db26b: movdqa xmm0,XMMWORD PTR [rip+0xfd089d]        # 0x1417abb10
0x7db273: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db278: movups xmm0,XMMWORD PTR [rip+0xef1cc1]        # 0x1416ccf40 ; vector='Loading building'
0x7db27f: movups XMMWORD PTR [rax],xmm0
0x7db282: mov    ecx,DWORD PTR [rip+0xef1cc8]        # 0x1416ccf50 ; cstring='s...'
0x7db288: mov    DWORD PTR [rax+0x10],ecx
0x7db28b: mov    BYTE PTR [rax+0x14],0x0
0x7db28f: xor    r9d,r9d
0x7db292: lea    rdx,[rbp-0x38]
0x7db296: lea    rcx,[rip+0x1e915d3]        # 0x14266c870
0x7db29d: call   0x140af3400
0x7db2a2: nop
0x7db2a3: jmp    0x1407da74f
0x7db2a8: xorps  xmm0,xmm0
0x7db2ab: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db2af: mov    ecx,0x20
0x7db2b4: call   0x140071e00
0x7db2b9: mov    QWORD PTR [rbp-0x38],rax
0x7db2bd: movdqa xmm0,XMMWORD PTR [rip+0xfd083b]        # 0x1417abb00
0x7db2c5: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db2ca: movups xmm0,XMMWORD PTR [rip+0xef1cff]        # 0x1416ccfd0 ; vector='Loading entities'
0x7db2d1: movups XMMWORD PTR [rax],xmm0
0x7db2d4: movzx  ecx,WORD PTR [rip+0xef1d05]        # 0x1416ccfe0 ; cstring='...'
0x7db2db: mov    WORD PTR [rax+0x10],cx
0x7db2df: movzx  ecx,BYTE PTR [rip+0xef1cfc]        # 0x1416ccfe2 ; cstring='.'
0x7db2e6: mov    BYTE PTR [rax+0x12],cl
0x7db2e9: mov    BYTE PTR [rax+0x13],0x0
0x7db2ed: xor    r9d,r9d
0x7db2f0: lea    rdx,[rbp-0x38]
0x7db2f4: lea    rcx,[rip+0x1e91575]        # 0x14266c870
0x7db2fb: call   0x140af3400
0x7db300: nop
0x7db301: jmp    0x1407da74f
0x7db306: xorps  xmm0,xmm0
0x7db309: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db30d: mov    ecx,0x20
0x7db312: call   0x140071e00
0x7db317: mov    rdx,rax
0x7db31a: mov    QWORD PTR [rbp-0x38],rax
0x7db31e: movdqa xmm0,XMMWORD PTR [rip+0xfd085a]        # 0x1417abb80
0x7db326: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db32b: movups xmm0,XMMWORD PTR [rip+0xef1cb6]        # 0x1416ccfe8 ; vector='Loading coin inf'
0x7db332: movups XMMWORD PTR [rax],xmm0
0x7db335: movsd  xmm0,QWORD PTR [rip+0xef1cbb]        # 0x1416ccff8 ; cstring='ormation...'
0x7db33d: movsd  QWORD PTR [rax+0x10],xmm0
0x7db342: movzx  ecx,WORD PTR [rip+0xef1cb7]        # 0x1416cd000 ; cstring='...'
0x7db349: mov    WORD PTR [rax+0x18],cx
0x7db34d: movzx  eax,BYTE PTR [rip+0xef1cae]        # 0x1416cd002 ; cstring='.'
0x7db354: mov    BYTE PTR [rdx+0x1a],al
0x7db357: mov    BYTE PTR [rdx+0x1b],0x0
0x7db35b: xor    r9d,r9d
0x7db35e: lea    rdx,[rbp-0x38]
0x7db362: lea    rcx,[rip+0x1e91507]        # 0x14266c870
0x7db369: call   0x140af3400
0x7db36e: nop
0x7db36f: jmp    0x1407da74f
0x7db374: xorps  xmm0,xmm0
0x7db377: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db37b: mov    ecx,0x20
0x7db380: call   0x140071e00
0x7db385: mov    QWORD PTR [rbp-0x38],rax
0x7db389: movdqa xmm0,XMMWORD PTR [rip+0xfd076f]        # 0x1417abb00
0x7db391: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db396: movups xmm0,XMMWORD PTR [rip+0xef1bf3]        # 0x1416ccf90 ; vector='Loading map data'
0x7db39d: movups XMMWORD PTR [rax],xmm0
0x7db3a0: movzx  ecx,WORD PTR [rip+0xef1bf9]        # 0x1416ccfa0 ; cstring='...'
0x7db3a7: mov    WORD PTR [rax+0x10],cx
0x7db3ab: movzx  ecx,BYTE PTR [rip+0xef1bf0]        # 0x1416ccfa2 ; cstring='.'
0x7db3b2: mov    BYTE PTR [rax+0x12],cl
0x7db3b5: mov    BYTE PTR [rax+0x13],0x0
0x7db3b9: xor    r9d,r9d
0x7db3bc: lea    rdx,[rbp-0x38]
0x7db3c0: lea    rcx,[rip+0x1e914a9]        # 0x14266c870
0x7db3c7: call   0x140af3400
0x7db3cc: nop
0x7db3cd: jmp    0x1407da74f
0x7db3d2: xorps  xmm0,xmm0
0x7db3d5: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db3d9: mov    ecx,0x30
0x7db3de: call   0x140071e00
0x7db3e3: mov    QWORD PTR [rbp-0x38],rax
0x7db3e7: movdqa xmm0,XMMWORD PTR [rip+0xfd07e1]        # 0x1417abbd0
0x7db3ef: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db3f4: movups xmm0,XMMWORD PTR [rip+0xef1bad]        # 0x1416ccfa8 ; vector='Loading civilize'
0x7db3fb: movups XMMWORD PTR [rax],xmm0
0x7db3fe: movups xmm1,XMMWORD PTR [rip+0xef1bb3]        # 0x1416ccfb8 ; vector='d populations...'
0x7db405: movups XMMWORD PTR [rax+0x10],xmm1
0x7db409: mov    BYTE PTR [rax+0x20],0x0
0x7db40d: xor    r9d,r9d
0x7db410: lea    rdx,[rbp-0x38]
0x7db414: lea    rcx,[rip+0x1e91455]        # 0x14266c870
0x7db41b: call   0x140af3400
0x7db420: nop
0x7db421: jmp    0x1407da74f
0x7db426: xorps  xmm0,xmm0
0x7db429: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db42d: mov    ecx,0x20
0x7db432: call   0x140071e00
0x7db437: mov    QWORD PTR [rbp-0x38],rax
0x7db43b: movdqa xmm0,XMMWORD PTR [rip+0xfd06ad]        # 0x1417abaf0
0x7db443: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db448: movups xmm0,XMMWORD PTR [rip+0xef2671]        # 0x1416cdac0 ; vector='Loading history.'
0x7db44f: movups XMMWORD PTR [rax],xmm0
0x7db452: movzx  ecx,WORD PTR [rip+0xef2677]        # 0x1416cdad0 ; cstring='..'
0x7db459: mov    WORD PTR [rax+0x10],cx
0x7db45d: mov    BYTE PTR [rax+0x12],0x0
0x7db461: xor    r9d,r9d
0x7db464: lea    rdx,[rbp-0x38]
0x7db468: lea    rcx,[rip+0x1e91401]        # 0x14266c870
0x7db46f: call   0x140af3400
0x7db474: nop
0x7db475: jmp    0x1407da74f
0x7db47a: xorps  xmm0,xmm0
0x7db47d: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db481: mov    ecx,0x20
0x7db486: call   0x140071e00
0x7db48b: mov    QWORD PTR [rbp-0x38],rax
0x7db48f: movdqa xmm0,XMMWORD PTR [rip+0xfd0689]        # 0x1417abb20
0x7db497: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db49c: movups xmm0,XMMWORD PTR [rip+0xef2635]        # 0x1416cdad8 ; vector='Loading paramete'
0x7db4a3: movups XMMWORD PTR [rax],xmm0
0x7db4a6: mov    ecx,DWORD PTR [rip+0xef263c]        # 0x1416cdae8 ; cstring='rs...'
0x7db4ac: mov    DWORD PTR [rax+0x10],ecx
0x7db4af: movzx  ecx,BYTE PTR [rip+0xef2636]        # 0x1416cdaec ; cstring='.'
0x7db4b6: mov    BYTE PTR [rax+0x14],cl
0x7db4b9: mov    BYTE PTR [rax+0x15],0x0
0x7db4bd: xor    r9d,r9d
0x7db4c0: lea    rdx,[rbp-0x38]
0x7db4c4: lea    rcx,[rip+0x1e913a5]        # 0x14266c870
0x7db4cb: call   0x140af3400
0x7db4d0: nop
0x7db4d1: jmp    0x1407da74f
0x7db4d6: xorps  xmm0,xmm0
0x7db4d9: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db4dd: mov    ecx,0x20
0x7db4e2: call   0x140071e00
0x7db4e7: mov    QWORD PTR [rbp-0x38],rax
0x7db4eb: movdqa xmm0,XMMWORD PTR [rip+0xfd061d]        # 0x1417abb10
0x7db4f3: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db4f8: movups xmm0,XMMWORD PTR [rip+0xef2581]        # 0x1416cda80 ; vector='Loading artifact'
0x7db4ff: movups XMMWORD PTR [rax],xmm0
0x7db502: mov    ecx,DWORD PTR [rip+0xef2588]        # 0x1416cda90 ; cstring='s...'
0x7db508: mov    DWORD PTR [rax+0x10],ecx
0x7db50b: mov    BYTE PTR [rax+0x14],0x0
0x7db50f: xor    r9d,r9d
0x7db512: lea    rdx,[rbp-0x38]
0x7db516: lea    rcx,[rip+0x1e91353]        # 0x14266c870
0x7db51d: call   0x140af3400
0x7db522: nop
0x7db523: jmp    0x1407da74f
0x7db528: xorps  xmm0,xmm0
0x7db52b: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db52f: mov    ecx,0x30
0x7db534: call   0x140071e00
0x7db539: mov    QWORD PTR [rbp-0x38],rax
0x7db53d: movdqa xmm0,XMMWORD PTR [rip+0xfd06cb]        # 0x1417abc10
0x7db545: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db54a: movups xmm0,XMMWORD PTR [rip+0xef2547]        # 0x1416cda98 ; vector='Loading active h'
0x7db551: movups XMMWORD PTR [rax],xmm0
0x7db554: movups xmm1,XMMWORD PTR [rip+0xef254d]        # 0x1416cdaa8 ; vector='istorical figure'
0x7db55b: movups XMMWORD PTR [rax+0x10],xmm1
0x7db55f: mov    ecx,DWORD PTR [rip+0xef2553]        # 0x1416cdab8 ; cstring='s...'
0x7db565: mov    DWORD PTR [rax+0x20],ecx
0x7db568: mov    BYTE PTR [rax+0x24],0x0
0x7db56c: xor    r9d,r9d
0x7db56f: lea    rdx,[rbp-0x38]
0x7db573: lea    rcx,[rip+0x1e912f6]        # 0x14266c870
0x7db57a: call   0x140af3400
0x7db57f: nop
0x7db580: jmp    0x1407da74f
0x7db585: xorps  xmm0,xmm0
0x7db588: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db58c: mov    ecx,0x20
0x7db591: call   0x140071e00
0x7db596: mov    QWORD PTR [rbp-0x38],rax
0x7db59a: movdqa xmm0,XMMWORD PTR [rip+0xfd053e]        # 0x1417abae0
0x7db5a2: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db5a7: movups xmm0,XMMWORD PTR [rip+0xef2572]        # 0x1416cdb20 ; vector='Loading squads..'
0x7db5ae: movups XMMWORD PTR [rax],xmm0
0x7db5b1: movzx  ecx,BYTE PTR [rip+0xef2578]        # 0x1416cdb30 ; cstring='.'
0x7db5b8: mov    BYTE PTR [rax+0x10],cl
0x7db5bb: mov    BYTE PTR [rax+0x11],0x0
0x7db5bf: xor    r9d,r9d
0x7db5c2: lea    rdx,[rbp-0x38]
0x7db5c6: lea    rcx,[rip+0x1e912a3]        # 0x14266c870
0x7db5cd: call   0x140af3400
0x7db5d2: nop
0x7db5d3: jmp    0x1407da74f
0x7db5d8: xorps  xmm0,xmm0
0x7db5db: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db5df: mov    ecx,0x20
0x7db5e4: call   0x140071e00
0x7db5e9: mov    QWORD PTR [rbp-0x38],rax
0x7db5ed: movdqa xmm0,XMMWORD PTR [rip+0xfd052b]        # 0x1417abb20
0x7db5f5: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db5fa: movups xmm0,XMMWORD PTR [rip+0xef2537]        # 0x1416cdb38 ; vector='Loading formatio'
0x7db601: movups XMMWORD PTR [rax],xmm0
0x7db604: mov    ecx,DWORD PTR [rip+0xef253e]        # 0x1416cdb48 ; cstring='ns...'
0x7db60a: mov    DWORD PTR [rax+0x10],ecx
0x7db60d: movzx  ecx,BYTE PTR [rip+0xef2538]        # 0x1416cdb4c ; cstring='.'
0x7db614: mov    BYTE PTR [rax+0x14],cl
0x7db617: mov    BYTE PTR [rax+0x15],0x0
0x7db61b: xor    r9d,r9d
0x7db61e: lea    rdx,[rbp-0x38]
0x7db622: lea    rcx,[rip+0x1e91247]        # 0x14266c870
0x7db629: call   0x140af3400
0x7db62e: nop
0x7db62f: jmp    0x1407da74f
0x7db634: xorps  xmm0,xmm0
0x7db637: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db63b: mov    ecx,0x20
0x7db640: call   0x140071e00
0x7db645: mov    QWORD PTR [rbp-0x38],rax
0x7db649: movdqa xmm0,XMMWORD PTR [rip+0xfd04cf]        # 0x1417abb20
0x7db651: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db656: movups xmm0,XMMWORD PTR [rip+0xef2493]        # 0x1416cdaf0 ; vector='Loading activiti'
0x7db65d: movups XMMWORD PTR [rax],xmm0
0x7db660: mov    ecx,DWORD PTR [rip+0xef249a]        # 0x1416cdb00 ; cstring='es...'
0x7db666: mov    DWORD PTR [rax+0x10],ecx
0x7db669: movzx  ecx,BYTE PTR [rip+0xef2494]        # 0x1416cdb04 ; cstring='.'
0x7db670: mov    BYTE PTR [rax+0x14],cl
0x7db673: mov    BYTE PTR [rax+0x15],0x0
0x7db677: xor    r9d,r9d
0x7db67a: lea    rdx,[rbp-0x38]
0x7db67e: lea    rcx,[rip+0x1e911eb]        # 0x14266c870
0x7db685: call   0x140af3400
0x7db68a: nop
0x7db68b: jmp    0x1407da74f
0x7db690: xorps  xmm0,xmm0
0x7db693: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db697: mov    ecx,0x20
0x7db69c: call   0x140071e00
0x7db6a1: mov    rdx,rax
0x7db6a4: mov    QWORD PTR [rbp-0x38],rax
0x7db6a8: movdqa xmm0,XMMWORD PTR [rip+0xfd0490]        # 0x1417abb40
0x7db6b0: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db6b5: movups xmm0,XMMWORD PTR [rip+0xef244c]        # 0x1416cdb08 ; vector='Loading interact'
0x7db6bc: movups XMMWORD PTR [rax],xmm0
0x7db6bf: mov    ecx,DWORD PTR [rip+0xef2453]        # 0x1416cdb18 ; cstring='ions...'
0x7db6c5: mov    DWORD PTR [rax+0x10],ecx
0x7db6c8: movzx  ecx,WORD PTR [rip+0xef244d]        # 0x1416cdb1c ; cstring='...'
0x7db6cf: mov    WORD PTR [rax+0x14],cx
0x7db6d3: movzx  eax,BYTE PTR [rip+0xef2444]        # 0x1416cdb1e ; cstring='.'
0x7db6da: mov    BYTE PTR [rdx+0x16],al
0x7db6dd: mov    BYTE PTR [rdx+0x17],0x0
0x7db6e1: xor    r9d,r9d
0x7db6e4: lea    rdx,[rbp-0x38]
0x7db6e8: lea    rcx,[rip+0x1e91181]        # 0x14266c870
0x7db6ef: call   0x140af3400
0x7db6f4: nop
0x7db6f5: jmp    0x1407da74f
0x7db6fa: xorps  xmm0,xmm0
0x7db6fd: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db701: mov    ecx,0x20
0x7db706: call   0x140071e00
0x7db70b: mov    QWORD PTR [rbp-0x38],rax
0x7db70f: movdqa xmm0,XMMWORD PTR [rip+0xfd0459]        # 0x1417abb70
0x7db717: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db71c: movups xmm0,XMMWORD PTR [rip+0xef245d]        # 0x1416cdb80 ; vector='Loading written '
0x7db723: movups XMMWORD PTR [rax],xmm0
0x7db726: movsd  xmm0,QWORD PTR [rip+0xef2462]        # 0x1416cdb90 ; cstring='content...'
0x7db72e: movsd  QWORD PTR [rax+0x10],xmm0
0x7db733: movzx  ecx,WORD PTR [rip+0xef245e]        # 0x1416cdb98 ; cstring='..'
0x7db73a: mov    WORD PTR [rax+0x18],cx
0x7db73e: mov    BYTE PTR [rax+0x1a],0x0
0x7db742: xor    r9d,r9d
0x7db745: lea    rdx,[rbp-0x38]
0x7db749: lea    rcx,[rip+0x1e91120]        # 0x14266c870
0x7db750: call   0x140af3400
0x7db755: nop
0x7db756: jmp    0x1407da74f
0x7db75b: xorps  xmm0,xmm0
0x7db75e: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db762: mov    ecx,0x20
0x7db767: call   0x140071e00
0x7db76c: mov    QWORD PTR [rbp-0x38],rax
0x7db770: movdqa xmm0,XMMWORD PTR [rip+0xfd03a8]        # 0x1417abb20
0x7db778: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db77d: movups xmm0,XMMWORD PTR [rip+0xef241c]        # 0x1416cdba0 ; vector='Loading identiti'
0x7db784: movups XMMWORD PTR [rax],xmm0
0x7db787: mov    ecx,DWORD PTR [rip+0xef2423]        # 0x1416cdbb0 ; cstring='es...'
0x7db78d: mov    DWORD PTR [rax+0x10],ecx
0x7db790: movzx  ecx,BYTE PTR [rip+0xef241d]        # 0x1416cdbb4 ; cstring='.'
0x7db797: mov    BYTE PTR [rax+0x14],cl
0x7db79a: mov    BYTE PTR [rax+0x15],0x0
0x7db79e: xor    r9d,r9d
0x7db7a1: lea    rdx,[rbp-0x38]
0x7db7a5: lea    rcx,[rip+0x1e910c4]        # 0x14266c870
0x7db7ac: call   0x140af3400
0x7db7b1: nop
0x7db7b2: jmp    0x1407da74f
0x7db7b7: xorps  xmm0,xmm0
0x7db7ba: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db7be: mov    ecx,0x20
0x7db7c3: call   0x140071e00
0x7db7c8: mov    QWORD PTR [rbp-0x38],rax
0x7db7cc: movdqa xmm0,XMMWORD PTR [rip+0xfd033c]        # 0x1417abb10
0x7db7d4: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db7d9: movups xmm0,XMMWORD PTR [rip+0xef2370]        # 0x1416cdb50 ; vector='Loading incident'
0x7db7e0: movups XMMWORD PTR [rax],xmm0
0x7db7e3: mov    ecx,DWORD PTR [rip+0xef2377]        # 0x1416cdb60 ; cstring='s...'
0x7db7e9: mov    DWORD PTR [rax+0x10],ecx
0x7db7ec: mov    BYTE PTR [rax+0x14],0x0
0x7db7f0: xor    r9d,r9d
0x7db7f3: lea    rdx,[rbp-0x38]
0x7db7f7: lea    rcx,[rip+0x1e91072]        # 0x14266c870
0x7db7fe: call   0x140af3400
0x7db803: nop
0x7db804: jmp    0x1407da74f
0x7db809: xorps  xmm0,xmm0
0x7db80c: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db810: mov    ecx,0x20
0x7db815: call   0x140071e00
0x7db81a: mov    QWORD PTR [rbp-0x38],rax
0x7db81e: movdqa xmm0,XMMWORD PTR [rip+0xfd02ba]        # 0x1417abae0
0x7db826: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db82b: movups xmm0,XMMWORD PTR [rip+0xef2336]        # 0x1416cdb68 ; vector='Loading crimes..'
0x7db832: movups XMMWORD PTR [rax],xmm0
0x7db835: movzx  ecx,BYTE PTR [rip+0xef233c]        # 0x1416cdb78 ; cstring='.'
0x7db83c: mov    BYTE PTR [rax+0x10],cl
0x7db83f: mov    BYTE PTR [rax+0x11],0x0
0x7db843: xor    r9d,r9d
0x7db846: lea    rdx,[rbp-0x38]
0x7db84a: lea    rcx,[rip+0x1e9101f]        # 0x14266c870
0x7db851: call   0x140af3400
0x7db856: nop
0x7db857: lea    rcx,[rbp-0x38]
0x7db85b: call   0x140070e80
0x7db860: jmp    0x1407da78a
0x7db865: lea    rdx,[rip+0xef238c]        # 0x1416cdbf8 ; cstring='Loading vehicles...'
0x7db86c: lea    rcx,[rbp-0x38]
0x7db870: call   0x140069780
0x7db875: nop
0x7db876: xor    r9d,r9d
0x7db879: lea    rdx,[rbp-0x38]
0x7db87d: lea    rcx,[rip+0x1e90fec]        # 0x14266c870
0x7db884: call   0x140af3400
0x7db889: nop
0x7db88a: lea    rcx,[rbp-0x38]
0x7db88e: call   0x140070e80
0x7db893: jmp    0x1407da78a
0x7db898: xorps  xmm0,xmm0
0x7db89b: movups XMMWORD PTR [rbp-0x38],xmm0
0x7db89f: mov    ecx,0x20
0x7db8a4: call   0x140071e00
0x7db8a9: mov    QWORD PTR [rbp-0x38],rax
0x7db8ad: movdqa xmm0,XMMWORD PTR [rip+0xfd022b]        # 0x1417abae0
0x7db8b5: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7db8ba: movups xmm0,XMMWORD PTR [rip+0xef234f]        # 0x1416cdc10 ; vector='Loading armies..'
0x7db8c1: movups XMMWORD PTR [rax],xmm0
0x7db8c4: movzx  ecx,BYTE PTR [rip+0xef2355]        # 0x1416cdc20 ; cstring='.'
0x7db8cb: mov    BYTE PTR [rax+0x10],cl
0x7db8ce: mov    BYTE PTR [rax+0x11],0x0
0x7db8d2: xor    r9d,r9d
0x7db8d5: lea    rdx,[rbp-0x38]
0x7db8d9: lea    rcx,[rip+0x1e90f90]        # 0x14266c870
0x7db8e0: call   0x140af3400
0x7db8e5: nop
0x7db8e6: lea    rcx,[rbp-0x38]
0x7db8ea: call   0x140070e80
0x7db8ef: jmp    0x1407da78a
0x7db8f4: lea    rdx,[rip+0xef22bd]        # 0x1416cdbb8 ; cstring='Loading army controllers...'
0x7db8fb: lea    rcx,[rbp-0x38]
0x7db8ff: call   0x140069780
0x7db904: nop
0x7db905: xor    r9d,r9d
0x7db908: lea    rdx,[rbp-0x38]
0x7db90c: lea    rcx,[rip+0x1e90f5d]        # 0x14266c870
0x7db913: call   0x140af3400
0x7db918: nop
0x7db919: lea    rcx,[rbp-0x38]
0x7db91d: call   0x140070e80
0x7db922: jmp    0x1407da78a
0x7db927: lea    rdx,[rip+0xef22aa]        # 0x1416cdbd8 ; cstring='Loading tracking information...'
0x7db92e: lea    rcx,[rbp-0x38]
0x7db932: call   0x140069780
0x7db937: nop
0x7db938: xor    r9d,r9d
0x7db93b: lea    rdx,[rbp-0x38]
0x7db93f: lea    rcx,[rip+0x1e90f2a]        # 0x14266c870
0x7db946: call   0x140af3400
0x7db94b: nop
0x7db94c: lea    rcx,[rbp-0x38]
0x7db950: call   0x140070e80
0x7db955: jmp    0x1407da78a
0x7db95a: lea    rdx,[rip+0xef1fa7]        # 0x1416cd908 ; cstring='Loading cultural identities...'
0x7db961: lea    rcx,[rbp-0x38]
0x7db965: call   0x140069780
0x7db96a: nop
0x7db96b: xor    r9d,r9d
0x7db96e: lea    rdx,[rbp-0x38]
0x7db972: lea    rcx,[rip+0x1e90ef7]        # 0x14266c870
0x7db979: call   0x140af3400
0x7db97e: nop
0x7db97f: lea    rcx,[rbp-0x38]
0x7db983: call   0x140070e80
0x7db988: jmp    0x1407da78a
0x7db98d: lea    rdx,[rip+0xef1f94]        # 0x1416cd928 ; cstring='Loading agreements...'
0x7db994: lea    rcx,[rbp-0x38]
0x7db998: call   0x140069780
0x7db99d: nop
0x7db99e: xor    r9d,r9d
0x7db9a1: lea    rdx,[rbp-0x38]
0x7db9a5: lea    rcx,[rip+0x1e90ec4]        # 0x14266c870
0x7db9ac: call   0x140af3400
0x7db9b1: nop
0x7db9b2: lea    rcx,[rbp-0x38]
0x7db9b6: call   0x140070e80
0x7db9bb: jmp    0x1407da78a
0x7db9c0: lea    rdx,[rip+0xef1f11]        # 0x1416cd8d8 ; cstring='Loading art forms...'
0x7db9c7: lea    rcx,[rbp-0x38]
0x7db9cb: call   0x140069780
0x7db9d0: nop
0x7db9d1: xor    r9d,r9d
0x7db9d4: lea    rdx,[rbp-0x38]
0x7db9d8: lea    rcx,[rip+0x1e90e91]        # 0x14266c870
0x7db9df: call   0x140af3400
0x7db9e4: nop
0x7db9e5: lea    rcx,[rbp-0x38]
0x7db9e9: call   0x140070e80
0x7db9ee: jmp    0x1407da78a
0x7db9f3: lea    rdx,[rip+0xef1ef6]        # 0x1416cd8f0 ; cstring='Loading occupations...'
0x7db9fa: lea    rcx,[rbp-0x38]
0x7db9fe: call   0x140069780
0x7dba03: nop
0x7dba04: xor    r9d,r9d
0x7dba07: lea    rdx,[rbp-0x38]
0x7dba0b: lea    rcx,[rip+0x1e90e5e]        # 0x14266c870
0x7dba12: call   0x140af3400
0x7dba17: nop
0x7dba18: lea    rcx,[rbp-0x38]
0x7dba1c: call   0x140070e80
0x7dba21: jmp    0x1407da78a
0x7dba26: lea    rdx,[rip+0xef1f5b]        # 0x1416cd988 ; cstring='Loading belief systems...'
0x7dba2d: lea    rcx,[rbp-0x38]
0x7dba31: call   0x140069780
0x7dba36: nop
0x7dba37: xor    r9d,r9d
0x7dba3a: lea    rdx,[rbp-0x38]
0x7dba3e: lea    rcx,[rip+0x1e90e2b]        # 0x14266c870
0x7dba45: call   0x140af3400
0x7dba4a: nop
0x7dba4b: lea    rcx,[rbp-0x38]
0x7dba4f: call   0x140070e80
0x7dba54: jmp    0x1407da78a
0x7dba59: lea    rdx,[rip+0xef1f48]        # 0x1416cd9a8 ; cstring='Loading image sets...'
0x7dba60: lea    rcx,[rbp-0x38]
0x7dba64: call   0x140069780
0x7dba69: nop
0x7dba6a: xor    r9d,r9d
0x7dba6d: lea    rdx,[rbp-0x38]
0x7dba71: lea    rcx,[rip+0x1e90df8]        # 0x14266c870
0x7dba78: call   0x140af3400
0x7dba7d: nop
0x7dba7e: lea    rcx,[rbp-0x38]
0x7dba82: call   0x140070e80
0x7dba87: jmp    0x1407da78a
0x7dba8c: lea    rdx,[rip+0xef1ead]        # 0x1416cd940 ; cstring='Loading divination sets...'
0x7dba93: lea    rcx,[rbp-0x38]
0x7dba97: call   0x140069780
0x7dba9c: nop
0x7dba9d: xor    r9d,r9d
0x7dbaa0: lea    rdx,[rbp-0x38]
0x7dbaa4: lea    rcx,[rip+0x1e90dc5]        # 0x14266c870
0x7dbaab: call   0x140af3400
0x7dbab0: nop
0x7dbab1: lea    rcx,[rbp-0x38]
0x7dbab5: call   0x140070e80
0x7dbaba: jmp    0x1407da78a
0x7dbabf: xorps  xmm0,xmm0
0x7dbac2: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dbac6: movdqa xmm1,XMMWORD PTR [rip+0xfcfff2]        # 0x1417abac0
0x7dbace: movdqu XMMWORD PTR [rbp-0x28],xmm1
0x7dbad3: movsd  xmm0,QWORD PTR [rip+0xe44fb5]        # 0x141620a90 ; cstring='Closing file...'
0x7dbadb: movsd  QWORD PTR [rbp-0x38],xmm0
0x7dbae0: mov    eax,DWORD PTR [rip+0xe44fb2]        # 0x141620a98 ; cstring='file...'
0x7dbae6: mov    DWORD PTR [rbp-0x30],eax
0x7dbae9: movzx  eax,WORD PTR [rip+0xe44fac]        # 0x141620a9c ; cstring='...'
0x7dbaf0: mov    WORD PTR [rbp-0x2c],ax
0x7dbaf4: movzx  eax,BYTE PTR [rip+0xe44fa3]        # 0x141620a9e ; cstring='.'
0x7dbafb: mov    BYTE PTR [rbp-0x2a],al
0x7dbafe: mov    BYTE PTR [rbp-0x29],0x0
0x7dbb02: xor    r9d,r9d
0x7dbb05: lea    rdx,[rbp-0x38]
0x7dbb09: lea    rcx,[rip+0x1e90d60]        # 0x14266c870
0x7dbb10: call   0x140af3400
0x7dbb15: nop
0x7dbb16: jmp    0x1407da74f
0x7dbb1b: xorps  xmm0,xmm0
0x7dbb1e: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dbb22: mov    ecx,0x30
0x7dbb27: call   0x140071e00
0x7dbb2c: mov    rdx,rax
0x7dbb2f: mov    QWORD PTR [rbp-0x38],rax
0x7dbb33: movdqa xmm0,XMMWORD PTR [rip+0xfd00c5]        # 0x1417abc00
0x7dbb3b: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dbb40: movups xmm0,XMMWORD PTR [rip+0xef1e19]        # 0x1416cd960 ; vector='Rebuilding tempo'
0x7dbb47: movups XMMWORD PTR [rax],xmm0
0x7dbb4a: movups xmm1,XMMWORD PTR [rip+0xef1e1f]        # 0x1416cd970 ; vector='rary information'
0x7dbb51: movups XMMWORD PTR [rax+0x10],xmm1
0x7dbb55: movzx  ecx,WORD PTR [rip+0xef1e24]        # 0x1416cd980 ; cstring='...'
0x7dbb5c: mov    WORD PTR [rax+0x20],cx
0x7dbb60: movzx  eax,BYTE PTR [rip+0xef1e1b]        # 0x1416cd982 ; cstring='.'
0x7dbb67: mov    BYTE PTR [rdx+0x22],al
0x7dbb6a: mov    BYTE PTR [rdx+0x23],0x0
0x7dbb6e: xor    r9d,r9d
0x7dbb71: lea    rdx,[rbp-0x38]
0x7dbb75: lea    rcx,[rip+0x1e90cf4]        # 0x14266c870
0x7dbb7c: call   0x140af3400
0x7dbb81: nop
0x7dbb82: jmp    0x1407da74f
0x7dbb87: xorps  xmm0,xmm0
0x7dbb8a: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dbb8e: mov    ecx,0x20
0x7dbb93: call   0x140071e00
0x7dbb98: mov    QWORD PTR [rbp-0x38],rax
0x7dbb9c: movdqa xmm0,XMMWORD PTR [rip+0xfcff3c]        # 0x1417abae0
0x7dbba4: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dbba9: movups xmm0,XMMWORD PTR [rip+0xef1e58]        # 0x1416cda08 ; vector='Preparing game..'
0x7dbbb0: movups XMMWORD PTR [rax],xmm0
0x7dbbb3: movzx  ecx,BYTE PTR [rip+0xef1e5e]        # 0x1416cda18 ; cstring='.'
0x7dbbba: mov    BYTE PTR [rax+0x10],cl
0x7dbbbd: mov    BYTE PTR [rax+0x11],0x0
0x7dbbc1: xor    r9d,r9d
0x7dbbc4: lea    rdx,[rbp-0x38]
0x7dbbc8: lea    rcx,[rip+0x1e90ca1]        # 0x14266c870
0x7dbbcf: call   0x140af3400
0x7dbbd4: nop
0x7dbbd5: jmp    0x1407da74f
0x7dbbda: xorps  xmm0,xmm0
0x7dbbdd: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dbbe1: movdqa xmm1,XMMWORD PTR [rip+0xfcfe57]        # 0x1417aba40
0x7dbbe9: movdqu XMMWORD PTR [rbp-0x28],xmm1
0x7dbbee: mov    rax,QWORD PTR [rip+0xef1e2b]        # 0x1416cda20 ; cstring='Failed!'
0x7dbbf5: mov    DWORD PTR [rbp-0x38],eax
0x7dbbf8: movzx  eax,WORD PTR [rip+0xef1e25]        # 0x1416cda24 ; cstring='ed!'
0x7dbbff: mov    WORD PTR [rbp-0x34],ax
0x7dbc03: movzx  eax,BYTE PTR [rip+0xef1e1c]        # 0x1416cda26 ; cstring='!'
0x7dbc0a: mov    BYTE PTR [rbp-0x32],al
0x7dbc0d: mov    BYTE PTR [rbp-0x31],0x0
0x7dbc11: xor    r9d,r9d
0x7dbc14: lea    rdx,[rbp-0x38]
0x7dbc18: lea    rcx,[rip+0x1e90c51]        # 0x14266c870
0x7dbc1f: call   0x140af3400
0x7dbc24: nop
0x7dbc25: mov    rdx,QWORD PTR [rbp-0x20]
0x7dbc29: cmp    rdx,0xf
0x7dbc2d: jbe    0x1407da78a
0x7dbc33: inc    rdx
0x7dbc36: mov    rcx,QWORD PTR [rbp-0x38]
0x7dbc3a: mov    rax,rcx
0x7dbc3d: cmp    rdx,0x1000
0x7dbc44: jb     0x1407da785
0x7dbc4a: add    rdx,0x27
0x7dbc4e: mov    rcx,QWORD PTR [rcx-0x8]
0x7dbc52: sub    rax,rcx
0x7dbc55: add    rax,0xfffffffffffffff8
0x7dbc59: cmp    rax,0x1f
0x7dbc5d: jbe    0x1407da785
0x7dbc63: call   QWORD PTR [rip+0xe24ed7]        # 0x141600b40
0x7dbc69: int3
0x7dbc6a: xchg   ax,ax
