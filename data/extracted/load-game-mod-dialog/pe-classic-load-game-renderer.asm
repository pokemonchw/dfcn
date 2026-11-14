; classic PE:6aea11a5:0272d000; load-game-renderer; complete PE unwind owner RVA 0x7d9450..0x7db16c
0x7d9450: mov    QWORD PTR [rsp+0x8],rbx
0x7d9455: mov    QWORD PTR [rsp+0x10],rsi
0x7d945a: mov    QWORD PTR [rsp+0x18],rdi
0x7d945f: push   rbp
0x7d9460: push   r12
0x7d9462: push   r13
0x7d9464: push   r14
0x7d9466: push   r15
0x7d9468: mov    rbp,rsp
0x7d946b: sub    rsp,0x60
0x7d946f: mov    rax,QWORD PTR [rip+0x10debca]        # 0x1418b8040
0x7d9476: xor    rax,rsp
0x7d9479: mov    QWORD PTR [rbp-0x10],rax
0x7d947d: mov    r13,rcx
0x7d9480: mov    rdx,QWORD PTR [rip+0x1c10669]        # 0x1423e9af0
0x7d9487: mov    r8d,DWORD PTR [rip+0x1c1066a]        # 0x1423e9af8
0x7d948e: test   r8d,r8d
0x7d9491: jle    0x1407d94a6
0x7d9493: test   BYTE PTR [rdx],0x1
0x7d9496: je     0x1407d94a6
0x7d9498: mov    eax,DWORD PTR [rip+0x1e8d542]        # 0x1426669e0
0x7d949e: mov    DWORD PTR [rip+0x1e8d538],eax        # 0x1426669dc
0x7d94a4: jmp    0x1407d94b0
0x7d94a6: mov    DWORD PTR [rip+0x1e8d52c],0xffffffff        # 0x1426669dc
0x7d94b0: mov    BYTE PTR [rip+0x1e8d521],0x0        # 0x1426669d8
0x7d94b7: lea    r9,[rip+0xffffffffff826b42]        # 0x140000000
0x7d94be: test   r8d,r8d
0x7d94c1: jle    0x1407d950c
0x7d94c3: test   BYTE PTR [rdx],0x1
0x7d94c6: je     0x1407d950c
0x7d94c8: movsx  rax,WORD PTR [rcx+0x72c]
0x7d94d0: cmp    eax,0xa
0x7d94d3: ja     0x1407d950c
0x7d94d5: mov    ecx,DWORD PTR [r9+rax*4+0x7daf8c]
0x7d94dd: add    rcx,r9
0x7d94e0: jmp    rcx
0x7d94e2: mov    DWORD PTR [rip+0x1e8d4f0],0x6        # 0x1426669dc
0x7d94ec: mov    DWORD PTR [rip+0x1e8d4ea],0x6        # 0x1426669e0
0x7d94f6: jmp    0x1407d950c
0x7d94f8: mov    DWORD PTR [rip+0x1e8d4da],0x5        # 0x1426669dc
0x7d9502: mov    DWORD PTR [rip+0x1e8d4d4],0x5        # 0x1426669e0
0x7d950c: lea    rdx,[rbp-0x40]
0x7d9510: lea    rcx,[rbp-0x3c]
0x7d9514: call   0x140c47e50
0x7d9519: xor    r8d,r8d
0x7d951c: mov    dl,0xff
0x7d951e: xor    ecx,ecx
0x7d9520: call   0x1408d57c0
0x7d9525: mov    r14d,DWORD PTR [rip+0x1c105dc]        # 0x1423e9b08
0x7d952c: dec    r14d
0x7d952f: xor    r12d,r12d
0x7d9532: mov    ebx,DWORD PTR [rbp-0x40]
0x7d9535: mov    esi,DWORD PTR [rbp-0x3c]
0x7d9538: cmp    DWORD PTR [rip+0x1e8d49d],0xffffffff        # 0x1426669dc
0x7d953f: jne    0x1407d9619
0x7d9545: mov    DWORD PTR [rip+0x1e8d2ad],0x1000006        # 0x1426667fc
0x7d954f: mov    edi,r12d
0x7d9552: test   r14d,r14d
0x7d9555: js     0x1407d9619
0x7d955b: nop    DWORD PTR [rax+rax*1+0x0]
0x7d9560: mov    r11d,esi
0x7d9563: cmp    esi,ebx
0x7d9565: jg     0x1407d960e
0x7d956b: nop    DWORD PTR [rax+rax*1+0x0]
0x7d9570: mov    DWORD PTR [rip+0x1e8d27d],r11d        # 0x1426667f4
0x7d9577: mov    DWORD PTR [rip+0x1e8d27b],edi        # 0x1426667f8
0x7d957d: test   edi,edi
0x7d957f: jne    0x1407d95aa
0x7d9581: cmp    r11d,esi
0x7d9584: jne    0x1407d958e
0x7d9586: mov    edx,DWORD PTR [rip+0x1c13aa0]        # 0x1423ed02c
0x7d958c: jmp    0x1407d95f6
0x7d958e: lea    rcx,[rip+0x1e8d1db]        # 0x142666770
0x7d9595: cmp    r11d,ebx
0x7d9598: jne    0x1407d95a2
0x7d959a: mov    edx,DWORD PTR [rip+0x1c13a94]        # 0x1423ed034
0x7d95a0: jmp    0x1407d95fd
0x7d95a2: mov    edx,DWORD PTR [rip+0x1c13a88]        # 0x1423ed030
0x7d95a8: jmp    0x1407d95fd
0x7d95aa: cmp    edi,r14d
0x7d95ad: jne    0x1407d95d8
0x7d95af: cmp    r11d,esi
0x7d95b2: jne    0x1407d95bc
0x7d95b4: mov    edx,DWORD PTR [rip+0x1c13a8a]        # 0x1423ed044
0x7d95ba: jmp    0x1407d95f6
0x7d95bc: lea    rcx,[rip+0x1e8d1ad]        # 0x142666770
0x7d95c3: cmp    r11d,ebx
0x7d95c6: jne    0x1407d95d0
0x7d95c8: mov    edx,DWORD PTR [rip+0x1c13a7e]        # 0x1423ed04c
0x7d95ce: jmp    0x1407d95fd
0x7d95d0: mov    edx,DWORD PTR [rip+0x1c13a72]        # 0x1423ed048
0x7d95d6: jmp    0x1407d95fd
0x7d95d8: cmp    r11d,esi
0x7d95db: jne    0x1407d95e5
0x7d95dd: mov    edx,DWORD PTR [rip+0x1c13a55]        # 0x1423ed038
0x7d95e3: jmp    0x1407d95f6
0x7d95e5: cmp    r11d,ebx
0x7d95e8: mov    edx,DWORD PTR [rip+0x1c13a52]        # 0x1423ed040
0x7d95ee: je     0x1407d95f6
0x7d95f0: mov    edx,DWORD PTR [rip+0x1c13a46]        # 0x1423ed03c
0x7d95f6: lea    rcx,[rip+0x1e8d173]        # 0x142666770
0x7d95fd: call   0x140af1390
0x7d9602: inc    r11d
0x7d9605: cmp    r11d,ebx
0x7d9608: jle    0x1407d9570
0x7d960e: inc    edi
0x7d9610: cmp    edi,r14d
0x7d9613: jle    0x1407d9560
0x7d9619: mov    DWORD PTR [rip+0x1e8d1d9],0x1010007        # 0x1426667fc
0x7d9623: mov    edx,DWORD PTR [r13+0x198]
0x7d962a: add    edx,DWORD PTR [rip+0x1e817a8]        # 0x14265add8
0x7d9630: mov    rcx,QWORD PTR [rip+0x1e817b1]        # 0x14265ade8
0x7d9637: sub    rcx,QWORD PTR [rip+0x1e817a2]        # 0x14265ade0
0x7d963e: sar    rcx,0x3
0x7d9642: lea    r8d,[rcx*2+0x35]
0x7d964a: lea    r15d,[rsi+0x5]
0x7d964e: lea    edi,[rbx-0x6]
0x7d9651: mov    eax,edi
0x7d9653: sub    eax,r15d
0x7d9656: add    edx,DWORD PTR [rip+0x1e81778]        # 0x14265add4
0x7d965c: cmovns r12d,edx
0x7d9660: imul   eax,r12d
0x7d9664: cdq
0x7d9665: idiv   r8d
0x7d9668: add    eax,r15d
0x7d966b: mov    ecx,r15d
0x7d966e: cmp    eax,r15d
0x7d9671: cmovge ecx,eax
0x7d9674: lea    r12d,[rdi-0x1]
0x7d9678: cmp    ecx,r12d
0x7d967b: cmovle r12d,ecx
0x7d967f: mov    eax,0x66666667
0x7d9684: imul   r14d
0x7d9687: sar    edx,1
0x7d9689: mov    r14d,edx
0x7d968c: shr    r14d,0x1f
0x7d9690: add    r14d,0x6
0x7d9694: add    r14d,edx
0x7d9697: mov    r11d,r15d
0x7d969a: cmp    r15d,edi
0x7d969d: jg     0x1407d9714
0x7d969f: nop
0x7d96a0: mov    DWORD PTR [rip+0x1e8d14d],r11d        # 0x1426667f4
0x7d96a7: mov    DWORD PTR [rip+0x1e8d14a],r14d        # 0x1426667f8
0x7d96ae: cmp    r11d,r12d
0x7d96b1: jg     0x1407d96df
0x7d96b3: cmp    r11d,r15d
0x7d96b6: jne    0x1407d96c0
0x7d96b8: mov    edx,DWORD PTR [rip+0x1c1355a]        # 0x1423ecc18
0x7d96be: jmp    0x1407d96fd
0x7d96c0: xor    r8d,r8d
0x7d96c3: lea    rcx,[rip+0x1e8d0a6]        # 0x142666770
0x7d96ca: cmp    r11d,edi
0x7d96cd: jne    0x1407d96d7
0x7d96cf: mov    edx,DWORD PTR [rip+0x1c1354b]        # 0x1423ecc20
0x7d96d5: jmp    0x1407d9707
0x7d96d7: mov    edx,DWORD PTR [rip+0x1c1353f]        # 0x1423ecc1c
0x7d96dd: jmp    0x1407d9707
0x7d96df: cmp    r11d,r15d
0x7d96e2: jne    0x1407d96ec
0x7d96e4: mov    edx,DWORD PTR [rip+0x1c1353a]        # 0x1423ecc24
0x7d96ea: jmp    0x1407d96fd
0x7d96ec: cmp    r11d,edi
0x7d96ef: mov    edx,DWORD PTR [rip+0x1c13537]        # 0x1423ecc2c
0x7d96f5: je     0x1407d96fd
0x7d96f7: mov    edx,DWORD PTR [rip+0x1c1352b]        # 0x1423ecc28
0x7d96fd: xor    r8d,r8d
0x7d9700: lea    rcx,[rip+0x1e8d069]        # 0x142666770
0x7d9707: call   0x140af19c0
0x7d970c: inc    r11d
0x7d970f: cmp    r11d,edi
0x7d9712: jle    0x1407d96a0
0x7d9714: mov    DWORD PTR [rip+0x1e8d0de],0x1010007        # 0x1426667fc
0x7d971e: mov    DWORD PTR [rip+0x1e8d0cf],r15d        # 0x1426667f4
0x7d9725: lea    eax,[r14-0x5]
0x7d9729: mov    DWORD PTR [rip+0x1e8d0c9],eax        # 0x1426667f8
0x7d972f: xorps  xmm0,xmm0
0x7d9732: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d9736: mov    ecx,0x30
0x7d973b: call   0x140071d90
0x7d9740: mov    QWORD PTR [rbp-0x38],rax
0x7d9744: movdqa xmm0,XMMWORD PTR [rip+0xfcce54]        # 0x1417a65a0
0x7d974c: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7d9751: movups xmm0,XMMWORD PTR [rip+0xeef2e8]        # 0x1416c8a40 ; vector='Loading world an'
0x7d9758: movups XMMWORD PTR [rax],xmm0
0x7d975b: movups xmm1,XMMWORD PTR [rip+0xeef2ee]        # 0x1416c8a50 ; vector='d continuing act'
0x7d9762: movups XMMWORD PTR [rax+0x10],xmm1
0x7d9766: movsd  xmm0,QWORD PTR [rip+0xeef2f2]        # 0x1416c8a60 ; cstring='ive game'
0x7d976e: movsd  QWORD PTR [rax+0x20],xmm0
0x7d9773: mov    BYTE PTR [rax+0x28],0x0
0x7d9777: xor    r9d,r9d
0x7d977a: lea    rdx,[rbp-0x38]
0x7d977e: lea    rcx,[rip+0x1e8cfeb]        # 0x142666770
0x7d9785: call   0x140af0220
0x7d978a: nop
0x7d978b: mov    rdx,QWORD PTR [rbp-0x20]
0x7d978f: cmp    rdx,0xf
0x7d9793: jbe    0x1407d97c6
0x7d9795: inc    rdx
0x7d9798: mov    rcx,QWORD PTR [rbp-0x38]
0x7d979c: mov    rax,rcx
0x7d979f: cmp    rdx,0x1000
0x7d97a6: jb     0x1407d97c1
0x7d97a8: add    rdx,0x27
0x7d97ac: mov    rcx,QWORD PTR [rcx-0x8]
0x7d97b0: sub    rax,rcx
0x7d97b3: add    rax,0xfffffffffffffff8
0x7d97b7: cmp    rax,0x1f
0x7d97bb: ja     0x1407dabc3
0x7d97c1: call   0x14154de20
0x7d97c6: mov    DWORD PTR [rip+0x1e8d02c],0x1010007        # 0x1426667fc
0x7d97d0: mov    DWORD PTR [rip+0x1e8d01d],r15d        # 0x1426667f4
0x7d97d7: lea    eax,[r14-0x2]
0x7d97db: mov    DWORD PTR [rip+0x1e8d017],eax        # 0x1426667f8
0x7d97e1: movsxd rax,DWORD PTR [r13+0x198]
0x7d97e8: cmp    eax,0x32
0x7d97eb: ja     0x1407daf61
0x7d97f1: lea    rdx,[rip+0xffffffffff826808]        # 0x140000000
0x7d97f8: mov    ecx,DWORD PTR [rdx+rax*4+0x7dafb8]
0x7d97ff: add    rcx,rdx
0x7d9802: jmp    rcx
0x7d9804: xorps  xmm0,xmm0
0x7d9807: movups XMMWORD PTR [rbp-0x38],xmm0
0x7d980b: movdqa xmm1,XMMWORD PTR [rip+0xfccbfd]        # 0x1417a6410
0x7d9813: movdqu XMMWORD PTR [rbp-0x28],xmm1
0x7d9818: movsd  xmm0,QWORD PTR [rip+0xe420c0]        # 0x14161b8e0 ; cstring='Opening file...'
0x7d9820: movsd  QWORD PTR [rbp-0x38],xmm0
0x7d9825: mov    eax,DWORD PTR [rip+0xe420bd]        # 0x14161b8e8 ; cstring='file...'
0x7d982b: mov    DWORD PTR [rbp-0x30],eax
0x7d982e: movzx  eax,WORD PTR [rip+0xe420b7]        # 0x14161b8ec ; cstring='...'
0x7d9835: mov    WORD PTR [rbp-0x2c],ax
0x7d9839: movzx  eax,BYTE PTR [rip+0xe420ae]        # 0x14161b8ee ; cstring='.'
0x7d9840: mov    BYTE PTR [rbp-0x2a],al
0x7d9843: mov    BYTE PTR [rbp-0x29],0x0
0x7d9847: xor    r9d,r9d
0x7d984a: lea    rdx,[rbp-0x38]
0x7d984e: lea    rcx,[rip+0x1e8cf1b]        # 0x142666770
0x7d9855: call   0x140af0220
0x7d985a: nop
0x7d985b: mov    rdx,QWORD PTR [rbp-0x20]
0x7d985f: cmp    rdx,0xf
0x7d9863: jbe    0x1407daf61
0x7d9869: inc    rdx
0x7d986c: mov    rcx,QWORD PTR [rbp-0x38]
0x7d9870: cmp    rdx,0x1000
0x7d9877: mov    rax,rcx
0x7d987a: jb     0x1407d9895
0x7d987c: add    rdx,0x27
0x7d9880: mov    rcx,QWORD PTR [rcx-0x8]
0x7d9884: sub    rax,rcx
0x7d9887: add    rax,0xfffffffffffffff8
0x7d988b: cmp    rax,0x1f
0x7d988f: ja     0x1407dabc3
0x7d9895: call   0x14154de20
0x7d989a: jmp    0x1407daf61
0x7d989f: mov    eax,DWORD PTR [rip+0x1e814db]        # 0x14265ad80
0x7d98a5: dec    eax
0x7d98a7: cmp    eax,0x39
0x7d98aa: ja     0x1407da26b
0x7d98b0: cdqe
0x7d98b2: mov    ecx,DWORD PTR [rdx+rax*4+0x7db084]
0x7d98b9: add    rcx,rdx
0x7d98bc: jmp    rcx
0x7d98be: movsxd rax,DWORD PTR [rip+0x1e8150f]        # 0x14265add4
0x7d98c5: test   eax,eax
0x7d98c7: js     0x1407d9934
0x7d98c9: mov    rcx,QWORD PTR [rip+0x1e81598]        # 0x14265ae68
0x7d98d0: sub    rcx,QWORD PTR [rip+0x1e81589]        # 0x14265ae60
0x7d98d7: sar    rcx,0x3
0x7d98db: cmp    rax,rcx
0x7d98de: jae    0x1407d9934
0x7d98e0: lea    rdx,[rip+0xeeec59]        # 0x1416c8540 ; cstring='Loading object files...  '
0x7d98e7: lea    rcx,[rbp-0x38]
0x7d98eb: call   0x140069710
0x7d98f0: nop
0x7d98f1: xor    r9d,r9d
0x7d98f4: lea    rdx,[rbp-0x38]
0x7d98f8: lea    rcx,[rip+0x1e8ce71]        # 0x142666770
0x7d98ff: call   0x140af0220
0x7d9904: nop
0x7d9905: lea    rcx,[rbp-0x38]
0x7d9909: call   0x140070e10
0x7d990e: movsxd rax,DWORD PTR [rip+0x1e814bf]        # 0x14265add4
0x7d9915: xor    r9d,r9d
0x7d9918: mov    rdx,QWORD PTR [rip+0x1e81541]        # 0x14265ae60
0x7d991f: mov    rdx,QWORD PTR [rdx+rax*8]
0x7d9923: lea    rcx,[rip+0x1e8ce46]        # 0x142666770
0x7d992a: call   0x140af0220
0x7d992f: jmp    0x1407da26b
0x7d9934: lea    rdx,[rip+0xeeec05]        # 0x1416c8540 ; cstring='Loading object files...  '
0x7d993b: lea    rcx,[rbp-0x38]
0x7d993f: call   0x140069710
0x7d9944: nop
0x7d9945: xor    r9d,r9d
0x7d9948: lea    rdx,[rbp-0x38]
0x7d994c: lea    rcx,[rip+0x1e8ce1d]        # 0x142666770
0x7d9953: call   0x140af0220
0x7d9958: nop
0x7d9959: jmp    0x1407da262
0x7d995e: lea    rdx,[rip+0xeeebfb]        # 0x1416c8560 ; cstring='Sorting text...'
0x7d9965: lea    rcx,[rbp-0x38]
0x7d9969: call   0x140069710
0x7d996e: nop
0x7d996f: xor    r9d,r9d
0x7d9972: lea    rdx,[rbp-0x38]
0x7d9976: lea    rcx,[rip+0x1e8cdf3]        # 0x142666770
0x7d997d: call   0x140af0220
0x7d9982: nop
0x7d9983: jmp    0x1407da262
0x7d9988: lea    rdx,[rip+0xeeeb79]        # 0x1416c8508 ; cstring='Sorting material templates...'
0x7d998f: lea    rcx,[rbp-0x38]
0x7d9993: call   0x140069710
0x7d9998: nop
0x7d9999: xor    r9d,r9d
0x7d999c: lea    rdx,[rbp-0x38]
0x7d99a0: lea    rcx,[rip+0x1e8cdc9]        # 0x142666770
0x7d99a7: call   0x140af0220
0x7d99ac: nop
0x7d99ad: jmp    0x1407da262
0x7d99b2: lea    rdx,[rip+0xeeeb6f]        # 0x1416c8528 ; cstring='Sorting inorganics...'
0x7d99b9: lea    rcx,[rbp-0x38]
0x7d99bd: call   0x140069710
0x7d99c2: nop
0x7d99c3: xor    r9d,r9d
0x7d99c6: lea    rdx,[rbp-0x38]
0x7d99ca: lea    rcx,[rip+0x1e8cd9f]        # 0x142666770
0x7d99d1: call   0x140af0220
0x7d99d6: nop
0x7d99d7: jmp    0x1407da262
0x7d99dc: lea    rdx,[rip+0xeeebbd]        # 0x1416c85a0 ; cstring='Sorting plants...'
0x7d99e3: lea    rcx,[rbp-0x38]
0x7d99e7: call   0x140069710
0x7d99ec: nop
0x7d99ed: xor    r9d,r9d
0x7d99f0: lea    rdx,[rbp-0x38]
0x7d99f4: lea    rcx,[rip+0x1e8cd75]        # 0x142666770
0x7d99fb: call   0x140af0220
0x7d9a00: nop
0x7d9a01: jmp    0x1407da262
0x7d9a06: lea    rdx,[rip+0xeeebab]        # 0x1416c85b8 ; cstring='Sorting tissue templates...'
0x7d9a0d: lea    rcx,[rbp-0x38]
0x7d9a11: call   0x140069710
0x7d9a16: nop
0x7d9a17: xor    r9d,r9d
0x7d9a1a: lea    rdx,[rbp-0x38]
0x7d9a1e: lea    rcx,[rip+0x1e8cd4b]        # 0x142666770
0x7d9a25: call   0x140af0220
0x7d9a2a: nop
0x7d9a2b: jmp    0x1407da262
0x7d9a30: lea    rdx,[rip+0xeeeb39]        # 0x1416c8570 ; cstring='Sorting items...'
0x7d9a37: lea    rcx,[rbp-0x38]
0x7d9a3b: call   0x140069710
0x7d9a40: nop
0x7d9a41: xor    r9d,r9d
0x7d9a44: lea    rdx,[rbp-0x38]
0x7d9a48: lea    rcx,[rip+0x1e8cd21]        # 0x142666770
0x7d9a4f: call   0x140af0220
0x7d9a54: nop
0x7d9a55: jmp    0x1407da262
0x7d9a5a: lea    rdx,[rip+0xeeeb27]        # 0x1416c8588 ; cstring='Sorting buildings...'
0x7d9a61: lea    rcx,[rbp-0x38]
0x7d9a65: call   0x140069710
0x7d9a6a: nop
0x7d9a6b: xor    r9d,r9d
0x7d9a6e: lea    rdx,[rbp-0x38]
0x7d9a72: lea    rcx,[rip+0x1e8ccf7]        # 0x142666770
0x7d9a79: call   0x140af0220
0x7d9a7e: nop
0x7d9a7f: jmp    0x1407da262
0x7d9a84: lea    rdx,[rip+0xeee76d]        # 0x1416c81f8 ; cstring='Sorting body detail plans...'
0x7d9a8b: lea    rcx,[rbp-0x38]
0x7d9a8f: call   0x140069710
0x7d9a94: nop
0x7d9a95: xor    r9d,r9d
0x7d9a98: lea    rdx,[rbp-0x38]
0x7d9a9c: lea    rcx,[rip+0x1e8cccd]        # 0x142666770
0x7d9aa3: call   0x140af0220
0x7d9aa8: nop
0x7d9aa9: jmp    0x1407da262
0x7d9aae: lea    rdx,[rip+0xeee763]        # 0x1416c8218 ; cstring='Sorting creature bodies...'
0x7d9ab5: lea    rcx,[rbp-0x38]
0x7d9ab9: call   0x140069710
0x7d9abe: nop
0x7d9abf: xor    r9d,r9d
0x7d9ac2: lea    rdx,[rbp-0x38]
0x7d9ac6: lea    rcx,[rip+0x1e8cca3]        # 0x142666770
0x7d9acd: call   0x140af0220
0x7d9ad2: nop
0x7d9ad3: jmp    0x1407da262
0x7d9ad8: lea    rdx,[rip+0xeee6e1]        # 0x1416c81c0 ; cstring='Sorting creature variations...'
0x7d9adf: lea    rcx,[rbp-0x38]
0x7d9ae3: call   0x140069710
0x7d9ae8: nop
0x7d9ae9: xor    r9d,r9d
0x7d9aec: lea    rdx,[rbp-0x38]
0x7d9af0: lea    rcx,[rip+0x1e8cc79]        # 0x142666770
0x7d9af7: call   0x140af0220
0x7d9afc: nop
0x7d9afd: jmp    0x1407da262
0x7d9b02: lea    rdx,[rip+0xeee6d7]        # 0x1416c81e0 ; cstring='Sorting creatures...'
0x7d9b09: lea    rcx,[rbp-0x38]
0x7d9b0d: call   0x140069710
0x7d9b12: nop
0x7d9b13: xor    r9d,r9d
0x7d9b16: lea    rdx,[rbp-0x38]
0x7d9b1a: lea    rcx,[rip+0x1e8cc4f]        # 0x142666770
0x7d9b21: call   0x140af0220
0x7d9b26: nop
0x7d9b27: jmp    0x1407da262
0x7d9b2c: lea    rdx,[rip+0xeee735]        # 0x1416c8268 ; cstring='Sorting entities...'
0x7d9b33: lea    rcx,[rbp-0x38]
0x7d9b37: call   0x140069710
0x7d9b3c: nop
0x7d9b3d: xor    r9d,r9d
0x7d9b40: lea    rdx,[rbp-0x38]
0x7d9b44: lea    rcx,[rip+0x1e8cc25]        # 0x142666770
0x7d9b4b: call   0x140af0220
0x7d9b50: nop
0x7d9b51: jmp    0x1407da262
0x7d9b56: lea    rdx,[rip+0xeee723]        # 0x1416c8280 ; cstring='Sorting languages...'
0x7d9b5d: lea    rcx,[rbp-0x38]
0x7d9b61: call   0x140069710
0x7d9b66: nop
0x7d9b67: xor    r9d,r9d
0x7d9b6a: lea    rdx,[rbp-0x38]
0x7d9b6e: lea    rcx,[rip+0x1e8cbfb]        # 0x142666770
0x7d9b75: call   0x140af0220
0x7d9b7a: nop
0x7d9b7b: jmp    0x1407da262
0x7d9b80: lea    rdx,[rip+0xeee6b1]        # 0x1416c8238 ; cstring='Sorting descriptors...'
0x7d9b87: lea    rcx,[rbp-0x38]
0x7d9b8b: call   0x140069710
0x7d9b90: nop
0x7d9b91: xor    r9d,r9d
0x7d9b94: lea    rdx,[rbp-0x38]
0x7d9b98: lea    rcx,[rip+0x1e8cbd1]        # 0x142666770
0x7d9b9f: call   0x140af0220
0x7d9ba4: nop
0x7d9ba5: jmp    0x1407da262
0x7d9baa: lea    rdx,[rip+0xeee69f]        # 0x1416c8250 ; cstring='Sorting reactions...'
0x7d9bb1: lea    rcx,[rbp-0x38]
0x7d9bb5: call   0x140069710
0x7d9bba: nop
0x7d9bbb: xor    r9d,r9d
0x7d9bbe: lea    rdx,[rbp-0x38]
0x7d9bc2: lea    rcx,[rip+0x1e8cba7]        # 0x142666770
0x7d9bc9: call   0x140af0220
0x7d9bce: nop
0x7d9bcf: jmp    0x1407da262
0x7d9bd4: lea    rdx,[rip+0xeee6ed]        # 0x1416c82c8 ; cstring='Sorting interactions...'
0x7d9bdb: lea    rcx,[rbp-0x38]
0x7d9bdf: call   0x140069710
0x7d9be4: nop
0x7d9be5: xor    r9d,r9d
0x7d9be8: lea    rdx,[rbp-0x38]
0x7d9bec: lea    rcx,[rip+0x1e8cb7d]        # 0x142666770
0x7d9bf3: call   0x140af0220
0x7d9bf8: nop
0x7d9bf9: jmp    0x1407da262
0x7d9bfe: lea    rdx,[rip+0xeee6db]        # 0x1416c82e0 ; cstring='Sorting music...'
0x7d9c05: lea    rcx,[rbp-0x38]
0x7d9c09: call   0x140069710
0x7d9c0e: nop
0x7d9c0f: xor    r9d,r9d
0x7d9c12: lea    rdx,[rbp-0x38]
0x7d9c16: lea    rcx,[rip+0x1e8cb53]        # 0x142666770
0x7d9c1d: call   0x140af0220
0x7d9c22: nop
0x7d9c23: jmp    0x1407da262
0x7d9c28: lea    rdx,[rip+0xeee669]        # 0x1416c8298 ; cstring='Sorting sounds...'
0x7d9c2f: lea    rcx,[rbp-0x38]
0x7d9c33: call   0x140069710
0x7d9c38: nop
0x7d9c39: xor    r9d,r9d
0x7d9c3c: lea    rdx,[rbp-0x38]
0x7d9c40: lea    rcx,[rip+0x1e8cb29]        # 0x142666770
0x7d9c47: call   0x140af0220
0x7d9c4c: nop
0x7d9c4d: jmp    0x1407da262
0x7d9c52: lea    rdx,[rip+0xeee657]        # 0x1416c82b0 ; cstring='Processing languages...'
0x7d9c59: lea    rcx,[rbp-0x38]
0x7d9c5d: call   0x140069710
0x7d9c62: nop
0x7d9c63: xor    r9d,r9d
0x7d9c66: lea    rdx,[rbp-0x38]
0x7d9c6a: lea    rcx,[rip+0x1e8caff]        # 0x142666770
0x7d9c71: call   0x140af0220
0x7d9c76: nop
0x7d9c77: jmp    0x1407da262
0x7d9c7c: lea    rdx,[rip+0xeee6a5]        # 0x1416c8328 ; cstring='Processing inorganics...'
0x7d9c83: lea    rcx,[rbp-0x38]
0x7d9c87: call   0x140069710
0x7d9c8c: nop
0x7d9c8d: xor    r9d,r9d
0x7d9c90: lea    rdx,[rbp-0x38]
0x7d9c94: lea    rcx,[rip+0x1e8cad5]        # 0x142666770
0x7d9c9b: call   0x140af0220
0x7d9ca0: nop
0x7d9ca1: jmp    0x1407da262
0x7d9ca6: lea    rdx,[rip+0xeee69b]        # 0x1416c8348 ; cstring='Processing plants...'
0x7d9cad: lea    rcx,[rbp-0x38]
0x7d9cb1: call   0x140069710
0x7d9cb6: nop
0x7d9cb7: xor    r9d,r9d
0x7d9cba: lea    rdx,[rbp-0x38]
0x7d9cbe: lea    rcx,[rip+0x1e8caab]        # 0x142666770
0x7d9cc5: call   0x140af0220
0x7d9cca: nop
0x7d9ccb: jmp    0x1407da262
0x7d9cd0: lea    rdx,[rip+0xeee621]        # 0x1416c82f8 ; cstring='Processing items...'
0x7d9cd7: lea    rcx,[rbp-0x38]
0x7d9cdb: call   0x140069710
0x7d9ce0: nop
0x7d9ce1: xor    r9d,r9d
0x7d9ce4: lea    rdx,[rbp-0x38]
0x7d9ce8: lea    rcx,[rip+0x1e8ca81]        # 0x142666770
0x7d9cef: call   0x140af0220
0x7d9cf4: nop
0x7d9cf5: jmp    0x1407da262
0x7d9cfa: lea    rdx,[rip+0xeee60f]        # 0x1416c8310 ; cstring='Processing creatures...'
0x7d9d01: lea    rcx,[rbp-0x38]
0x7d9d05: call   0x140069710
0x7d9d0a: nop
0x7d9d0b: xor    r9d,r9d
0x7d9d0e: lea    rdx,[rbp-0x38]
0x7d9d12: lea    rcx,[rip+0x1e8ca57]        # 0x142666770
0x7d9d19: call   0x140af0220
0x7d9d1e: nop
0x7d9d1f: jmp    0x1407da262
0x7d9d24: lea    rdx,[rip+0xeee32d]        # 0x1416c8058 ; cstring='Processing entities...'
0x7d9d2b: lea    rcx,[rbp-0x38]
0x7d9d2f: call   0x140069710
0x7d9d34: nop
0x7d9d35: xor    r9d,r9d
0x7d9d38: lea    rdx,[rbp-0x38]
0x7d9d3c: lea    rcx,[rip+0x1e8ca2d]        # 0x142666770
0x7d9d43: call   0x140af0220
0x7d9d48: nop
0x7d9d49: jmp    0x1407da262
0x7d9d4e: lea    rdx,[rip+0xeee31b]        # 0x1416c8070 ; cstring='Processing reactions...'
0x7d9d55: lea    rcx,[rbp-0x38]
0x7d9d59: call   0x140069710
0x7d9d5e: nop
0x7d9d5f: xor    r9d,r9d
0x7d9d62: lea    rdx,[rbp-0x38]
0x7d9d66: lea    rcx,[rip+0x1e8ca03]        # 0x142666770
0x7d9d6d: call   0x140af0220
0x7d9d72: nop
0x7d9d73: jmp    0x1407da262
0x7d9d78: lea    rdx,[rip+0xeee2a1]        # 0x1416c8020 ; cstring='Processing interactions...'
0x7d9d7f: lea    rcx,[rbp-0x38]
0x7d9d83: call   0x140069710
0x7d9d88: nop
0x7d9d89: xor    r9d,r9d
0x7d9d8c: lea    rdx,[rbp-0x38]
0x7d9d90: lea    rcx,[rip+0x1e8c9d9]        # 0x142666770
0x7d9d97: call   0x140af0220
0x7d9d9c: nop
0x7d9d9d: jmp    0x1407da262
0x7d9da2: lea    rdx,[rip+0xeee297]        # 0x1416c8040 ; cstring='Processing music...'
0x7d9da9: lea    rcx,[rbp-0x38]
0x7d9dad: call   0x140069710
0x7d9db2: nop
0x7d9db3: xor    r9d,r9d
0x7d9db6: lea    rdx,[rbp-0x38]
0x7d9dba: lea    rcx,[rip+0x1e8c9af]        # 0x142666770
0x7d9dc1: call   0x140af0220
0x7d9dc6: nop
0x7d9dc7: jmp    0x1407da262
0x7d9dcc: lea    rdx,[rip+0xeee2e5]        # 0x1416c80b8 ; cstring='Processing sounds...'
0x7d9dd3: lea    rcx,[rbp-0x38]
0x7d9dd7: call   0x140069710
0x7d9ddc: nop
0x7d9ddd: xor    r9d,r9d
0x7d9de0: lea    rdx,[rbp-0x38]
0x7d9de4: lea    rcx,[rip+0x1e8c985]        # 0x142666770
0x7d9deb: call   0x140af0220
0x7d9df0: nop
0x7d9df1: jmp    0x1407da262
0x7d9df6: lea    rdx,[rip+0xe561f3]        # 0x14162fff0 ; cstring='Finalizing languages...'
0x7d9dfd: lea    rcx,[rbp-0x38]
0x7d9e01: call   0x140069710
0x7d9e06: nop
0x7d9e07: xor    r9d,r9d
0x7d9e0a: lea    rdx,[rbp-0x38]
0x7d9e0e: lea    rcx,[rip+0x1e8c95b]        # 0x142666770
0x7d9e15: call   0x140af0220
0x7d9e1a: nop
0x7d9e1b: jmp    0x1407da262
0x7d9e20: lea    rdx,[rip+0xe561e1]        # 0x141630008 ; cstring='Finalizing descriptors...'
0x7d9e27: lea    rcx,[rbp-0x38]
0x7d9e2b: call   0x140069710
0x7d9e30: nop
0x7d9e31: xor    r9d,r9d
0x7d9e34: lea    rdx,[rbp-0x38]
0x7d9e38: lea    rcx,[rip+0x1e8c931]        # 0x142666770
0x7d9e3f: call   0x140af0220
0x7d9e44: nop
0x7d9e45: jmp    0x1407da262
0x7d9e4a: lea    rdx,[rip+0xe561d7]        # 0x141630028 ; cstring='Finalizing material templates...'
0x7d9e51: lea    rcx,[rbp-0x38]
0x7d9e55: call   0x140069710
0x7d9e5a: nop
0x7d9e5b: xor    r9d,r9d
0x7d9e5e: lea    rdx,[rbp-0x38]
0x7d9e62: lea    rcx,[rip+0x1e8c907]        # 0x142666770
0x7d9e69: call   0x140af0220
0x7d9e6e: nop
0x7d9e6f: jmp    0x1407da262
0x7d9e74: lea    rdx,[rip+0xe561d5]        # 0x141630050 ; cstring='Finalizing inorganics...'
0x7d9e7b: lea    rcx,[rbp-0x38]
0x7d9e7f: call   0x140069710
0x7d9e84: nop
0x7d9e85: xor    r9d,r9d
0x7d9e88: lea    rdx,[rbp-0x38]
0x7d9e8c: lea    rcx,[rip+0x1e8c8dd]        # 0x142666770
0x7d9e93: call   0x140af0220
0x7d9e98: nop
0x7d9e99: jmp    0x1407da262
0x7d9e9e: lea    rdx,[rip+0xe560e3]        # 0x14162ff88 ; cstring='Finalizing plants...'
0x7d9ea5: lea    rcx,[rbp-0x38]
0x7d9ea9: call   0x140069710
0x7d9eae: nop
0x7d9eaf: xor    r9d,r9d
0x7d9eb2: lea    rdx,[rbp-0x38]
0x7d9eb6: lea    rcx,[rip+0x1e8c8b3]        # 0x142666770
0x7d9ebd: call   0x140af0220
0x7d9ec2: nop
0x7d9ec3: jmp    0x1407da262
0x7d9ec8: lea    rdx,[rip+0xe560d1]        # 0x14162ffa0 ; cstring='Finalizing tissue templates...'
0x7d9ecf: lea    rcx,[rbp-0x38]
0x7d9ed3: call   0x140069710
0x7d9ed8: nop
0x7d9ed9: xor    r9d,r9d
0x7d9edc: lea    rdx,[rbp-0x38]
0x7d9ee0: lea    rcx,[rip+0x1e8c889]        # 0x142666770
0x7d9ee7: call   0x140af0220
0x7d9eec: nop
0x7d9eed: jmp    0x1407da262
0x7d9ef2: lea    rdx,[rip+0xe560c7]        # 0x14162ffc0 ; cstring='Finalizing items...'
0x7d9ef9: lea    rcx,[rbp-0x38]
0x7d9efd: call   0x140069710
0x7d9f02: nop
0x7d9f03: xor    r9d,r9d
0x7d9f06: lea    rdx,[rbp-0x38]
0x7d9f0a: lea    rcx,[rip+0x1e8c85f]        # 0x142666770
0x7d9f11: call   0x140af0220
0x7d9f16: nop
0x7d9f17: jmp    0x1407da262
0x7d9f1c: lea    rdx,[rip+0xe560b5]        # 0x14162ffd8 ; cstring='Finalizing buildings...'
0x7d9f23: lea    rcx,[rbp-0x38]
0x7d9f27: call   0x140069710
0x7d9f2c: nop
0x7d9f2d: xor    r9d,r9d
0x7d9f30: lea    rdx,[rbp-0x38]
0x7d9f34: lea    rcx,[rip+0x1e8c835]        # 0x142666770
0x7d9f3b: call   0x140af0220
0x7d9f40: nop
0x7d9f41: jmp    0x1407da262
0x7d9f46: lea    rdx,[rip+0xe5619b]        # 0x1416300e8 ; cstring='Finalizing body detail plans...'
0x7d9f4d: lea    rcx,[rbp-0x38]
0x7d9f51: call   0x140069710
0x7d9f56: nop
0x7d9f57: xor    r9d,r9d
0x7d9f5a: lea    rdx,[rbp-0x38]
0x7d9f5e: lea    rcx,[rip+0x1e8c80b]        # 0x142666770
0x7d9f65: call   0x140af0220
0x7d9f6a: nop
0x7d9f6b: jmp    0x1407da262
0x7d9f70: lea    rdx,[rip+0xe56191]        # 0x141630108 ; cstring='Finalizing creature variations...'
0x7d9f77: lea    rcx,[rbp-0x38]
0x7d9f7b: call   0x140069710
0x7d9f80: nop
0x7d9f81: xor    r9d,r9d
0x7d9f84: lea    rdx,[rbp-0x38]
0x7d9f88: lea    rcx,[rip+0x1e8c7e1]        # 0x142666770
0x7d9f8f: call   0x140af0220
0x7d9f94: nop
0x7d9f95: jmp    0x1407da262
0x7d9f9a: lea    rdx,[rip+0xe5618f]        # 0x141630130 ; cstring='Finalizing creatures...'
0x7d9fa1: lea    rcx,[rbp-0x38]
0x7d9fa5: call   0x140069710
0x7d9faa: nop
0x7d9fab: xor    r9d,r9d
0x7d9fae: lea    rdx,[rbp-0x38]
0x7d9fb2: lea    rcx,[rip+0x1e8c7b7]        # 0x142666770
0x7d9fb9: call   0x140af0220
0x7d9fbe: nop
0x7d9fbf: jmp    0x1407da262
0x7d9fc4: lea    rdx,[rip+0xe5617d]        # 0x141630148 ; cstring='Finalizing entities...'
0x7d9fcb: lea    rcx,[rbp-0x38]
0x7d9fcf: call   0x140069710
0x7d9fd4: nop
0x7d9fd5: xor    r9d,r9d
0x7d9fd8: lea    rdx,[rbp-0x38]
0x7d9fdc: lea    rcx,[rip+0x1e8c78d]        # 0x142666770
0x7d9fe3: call   0x140af0220
0x7d9fe8: nop
0x7d9fe9: jmp    0x1407da262
0x7d9fee: lea    rdx,[rip+0xe5607b]        # 0x141630070 ; cstring='Finalizing reactions...'
0x7d9ff5: lea    rcx,[rbp-0x38]
0x7d9ff9: call   0x140069710
0x7d9ffe: nop
0x7d9fff: xor    r9d,r9d
0x7da002: lea    rdx,[rbp-0x38]
0x7da006: lea    rcx,[rip+0x1e8c763]        # 0x142666770
0x7da00d: call   0x140af0220
0x7da012: nop
0x7da013: jmp    0x1407da262
0x7da018: lea    rdx,[rip+0xe56069]        # 0x141630088 ; cstring='Finalizing interactions...'
0x7da01f: lea    rcx,[rbp-0x38]
0x7da023: call   0x140069710
0x7da028: nop
0x7da029: xor    r9d,r9d
0x7da02c: lea    rdx,[rbp-0x38]
0x7da030: lea    rcx,[rip+0x1e8c739]        # 0x142666770
0x7da037: call   0x140af0220
0x7da03c: nop
0x7da03d: jmp    0x1407da262
0x7da042: lea    rdx,[rip+0xe5605f]        # 0x1416300a8 ; cstring='Preparing material data...'
0x7da049: lea    rcx,[rbp-0x38]
0x7da04d: call   0x140069710
0x7da052: nop
0x7da053: xor    r9d,r9d
0x7da056: lea    rdx,[rbp-0x38]
0x7da05a: lea    rcx,[rip+0x1e8c70f]        # 0x142666770
0x7da061: call   0x140af0220
0x7da066: nop
0x7da067: jmp    0x1407da262
0x7da06c: lea    rdx,[rip+0xeee05d]        # 0x1416c80d0 ; cstring='Generating inorganics...'
0x7da073: lea    rcx,[rbp-0x38]
0x7da077: call   0x140069710
0x7da07c: nop
0x7da07d: xor    r9d,r9d
0x7da080: lea    rdx,[rbp-0x38]
0x7da084: lea    rcx,[rip+0x1e8c6e5]        # 0x142666770
0x7da08b: call   0x140af0220
0x7da090: nop
0x7da091: jmp    0x1407da262
0x7da096: lea    rdx,[rip+0xeedfeb]        # 0x1416c8088 ; cstring='Generating plants...'
0x7da09d: lea    rcx,[rbp-0x38]
0x7da0a1: call   0x140069710
0x7da0a6: nop
0x7da0a7: xor    r9d,r9d
0x7da0aa: lea    rdx,[rbp-0x38]
0x7da0ae: lea    rcx,[rip+0x1e8c6bb]        # 0x142666770
0x7da0b5: call   0x140af0220
0x7da0ba: nop
0x7da0bb: jmp    0x1407da262
0x7da0c0: lea    rdx,[rip+0xeedfd9]        # 0x1416c80a0 ; cstring='Generating items...'
0x7da0c7: lea    rcx,[rbp-0x38]
0x7da0cb: call   0x140069710
0x7da0d0: nop
0x7da0d1: xor    r9d,r9d
0x7da0d4: lea    rdx,[rbp-0x38]
0x7da0d8: lea    rcx,[rip+0x1e8c691]        # 0x142666770
0x7da0df: call   0x140af0220
0x7da0e4: nop
0x7da0e5: jmp    0x1407da262
0x7da0ea: lea    rdx,[rip+0xeee037]        # 0x1416c8128 ; cstring='Generating creatures...'
0x7da0f1: lea    rcx,[rbp-0x38]
0x7da0f5: call   0x140069710
0x7da0fa: nop
0x7da0fb: xor    r9d,r9d
0x7da0fe: lea    rdx,[rbp-0x38]
0x7da102: lea    rcx,[rip+0x1e8c667]        # 0x142666770
0x7da109: call   0x140af0220
0x7da10e: nop
0x7da10f: jmp    0x1407da262
0x7da114: lea    rdx,[rip+0xeee025]        # 0x1416c8140 ; cstring='Generating entities...'
0x7da11b: lea    rcx,[rbp-0x38]
0x7da11f: call   0x140069710
0x7da124: nop
0x7da125: xor    r9d,r9d
0x7da128: lea    rdx,[rbp-0x38]
0x7da12c: lea    rcx,[rip+0x1e8c63d]        # 0x142666770
0x7da133: call   0x140af0220
0x7da138: nop
0x7da139: jmp    0x1407da262
0x7da13e: lea    rdx,[rip+0xeedfab]        # 0x1416c80f0 ; cstring='Generating reactions...'
0x7da145: lea    rcx,[rbp-0x38]
0x7da149: call   0x140069710
0x7da14e: nop
0x7da14f: xor    r9d,r9d
0x7da152: lea    rdx,[rbp-0x38]
0x7da156: lea    rcx,[rip+0x1e8c613]        # 0x142666770
0x7da15d: call   0x140af0220
0x7da162: nop
0x7da163: jmp    0x1407da262
0x7da168: lea    rdx,[rip+0xeedf99]        # 0x1416c8108 ; cstring='Generating interactions...'
0x7da16f: lea    rcx,[rbp-0x38]
0x7da173: call   0x140069710
0x7da178: nop
0x7da179: xor    r9d,r9d
0x7da17c: lea    rdx,[rbp-0x38]
0x7da180: lea    rcx,[rip+0x1e8c5e9]        # 0x142666770
0x7da187: call   0x140af0220
0x7da18c: nop
0x7da18d: jmp    0x1407da262
0x7da192: lea    rdx,[rip+0xeedfef]        # 0x1416c8188 ; cstring='Finalizing generated objects...'
0x7da199: lea    rcx,[rbp-0x38]
0x7da19d: call   0x140069710
0x7da1a2: nop
0x7da1a3: xor    r9d,r9d
0x7da1a6: lea    rdx,[rbp-0x38]
0x7da1aa: lea    rcx,[rip+0x1e8c5bf]        # 0x142666770
0x7da1b1: call   0x140af0220
0x7da1b6: nop
0x7da1b7: jmp    0x1407da262
0x7da1bc: mov    ecx,DWORD PTR [rip+0x1e80c16]        # 0x14265add8
0x7da1c2: test   ecx,ecx
0x7da1c4: js     0x1407da216
0x7da1c6: mov    rax,QWORD PTR [rip+0x1e80c9b]        # 0x14265ae68
0x7da1cd: sub    rax,QWORD PTR [rip+0x1e80c8c]        # 0x14265ae60
0x7da1d4: sar    rax,0x3
0x7da1d8: cmp    ecx,eax
0x7da1da: jge    0x1407da216
0x7da1dc: lea    rdx,[rip+0xeedfc5]        # 0x1416c81a8 ; cstring='Preparing graphics...  '
0x7da1e3: lea    rcx,[rbp-0x38]
0x7da1e7: call   0x140069710
0x7da1ec: nop
0x7da1ed: xor    r9d,r9d
0x7da1f0: lea    rdx,[rbp-0x38]
0x7da1f4: lea    rcx,[rip+0x1e8c575]        # 0x142666770
0x7da1fb: call   0x140af0220
0x7da200: nop
0x7da201: lea    rcx,[rbp-0x38]
0x7da205: call   0x140070e10
0x7da20a: movsxd rax,DWORD PTR [rip+0x1e80bc7]        # 0x14265add8
0x7da211: jmp    0x1407d9915
0x7da216: lea    rdx,[rip+0xeedf8b]        # 0x1416c81a8 ; cstring='Preparing graphics...  '
0x7da21d: lea    rcx,[rbp-0x38]
0x7da221: call   0x140069710
0x7da226: nop
0x7da227: xor    r9d,r9d
0x7da22a: lea    rdx,[rbp-0x38]
0x7da22e: lea    rcx,[rip+0x1e8c53b]        # 0x142666770
0x7da235: call   0x140af0220
0x7da23a: nop
0x7da23b: jmp    0x1407da262
0x7da23d: lea    rdx,[rip+0xe417dc]        # 0x14161ba20 ; cstring='Finishing...'
0x7da244: lea    rcx,[rbp-0x38]
0x7da248: call   0x140069710
0x7da24d: nop
0x7da24e: xor    r9d,r9d
0x7da251: lea    rdx,[rbp-0x38]
0x7da255: lea    rcx,[rip+0x1e8c514]        # 0x142666770
0x7da25c: call   0x140af0220
0x7da261: nop
0x7da262: lea    rcx,[rbp-0x38]
0x7da266: call   0x140070e10
0x7da26b: cmp    BYTE PTR [rip+0x1e80b1a],0x0        # 0x14265ad8c
0x7da272: jne    0x1407da281
0x7da274: cmp    BYTE PTR [rip+0x1e80b12],0x0        # 0x14265ad8d
0x7da27b: je     0x1407daf61
0x7da281: mov    r9d,r14d
0x7da284: mov    r8d,ebx
0x7da287: mov    edx,esi
0x7da289: lea    rcx,[rip+0x1e80af0]        # 0x14265ad80
0x7da290: call   0x1407ddab0
0x7da295: jmp    0x1407daf61
0x7da29a: lea    rdx,[rip+0xe4166f]        # 0x14161b910 ; cstring='Allocating space...'
0x7da2a1: lea    rcx,[rbp-0x38]
0x7da2a5: call   0x140069710
0x7da2aa: nop
0x7da2ab: xor    r9d,r9d
0x7da2ae: lea    rdx,[rbp-0x38]
0x7da2b2: lea    rcx,[rip+0x1e8c4b7]        # 0x142666770
0x7da2b9: call   0x140af0220
0x7da2be: nop
0x7da2bf: jmp    0x1407daf58
0x7da2c4: lea    rdx,[rip+0xeede8d]        # 0x1416c8158 ; cstring='Loading items...'
0x7da2cb: lea    rcx,[rbp-0x38]
0x7da2cf: call   0x140069710
0x7da2d4: nop
0x7da2d5: xor    r9d,r9d
0x7da2d8: lea    rdx,[rbp-0x38]
0x7da2dc: lea    rcx,[rip+0x1e8c48d]        # 0x142666770
0x7da2e3: call   0x140af0220
0x7da2e8: nop
0x7da2e9: jmp    0x1407daf58
0x7da2ee: lea    rdx,[rip+0xeee77b]        # 0x1416c8a70 ; cstring='Loading units...'
0x7da2f5: lea    rcx,[rbp-0x38]
0x7da2f9: call   0x140069710
0x7da2fe: nop
0x7da2ff: xor    r9d,r9d
0x7da302: lea    rdx,[rbp-0x38]
0x7da306: lea    rcx,[rip+0x1e8c463]        # 0x142666770
0x7da30d: call   0x140af0220
0x7da312: nop
0x7da313: jmp    0x1407daf58
0x7da318: lea    rdx,[rip+0xeee451]        # 0x1416c8770 ; cstring='Loading jobs...'
0x7da31f: lea    rcx,[rbp-0x38]
0x7da323: call   0x140069710
0x7da328: nop
0x7da329: xor    r9d,r9d
0x7da32c: lea    rdx,[rbp-0x38]
0x7da330: lea    rcx,[rip+0x1e8c439]        # 0x142666770
0x7da337: call   0x140af0220
0x7da33c: nop
0x7da33d: jmp    0x1407daf58
0x7da342: xorps  xmm0,xmm0
0x7da345: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da349: mov    ecx,0x20
0x7da34e: call   0x140071d90
0x7da353: mov    QWORD PTR [rbp-0x38],rax
0x7da357: movdqa xmm0,XMMWORD PTR [rip+0xfcc101]        # 0x1417a6460
0x7da35f: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da364: movups xmm0,XMMWORD PTR [rip+0xeee415]        # 0x1416c8780 ; vector='Loading schedule'
0x7da36b: movups XMMWORD PTR [rax],xmm0
0x7da36e: mov    ecx,DWORD PTR [rip+0xeee41c]        # 0x1416c8790 ; cstring='s...'
0x7da374: mov    DWORD PTR [rax+0x10],ecx
0x7da377: mov    BYTE PTR [rax+0x14],0x0
0x7da37b: xor    r9d,r9d
0x7da37e: lea    rdx,[rbp-0x38]
0x7da382: lea    rcx,[rip+0x1e8c3e7]        # 0x142666770
0x7da389: call   0x140af0220
0x7da38e: nop
0x7da38f: jmp    0x1407d985b
0x7da394: xorps  xmm0,xmm0
0x7da397: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da39b: mov    ecx,0x20
0x7da3a0: call   0x140071d90
0x7da3a5: mov    QWORD PTR [rbp-0x38],rax
0x7da3a9: movdqa xmm0,XMMWORD PTR [rip+0xfcc0cf]        # 0x1417a6480
0x7da3b1: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da3b6: movups xmm0,XMMWORD PTR [rip+0xeee383]        # 0x1416c8740 ; vector='Loading projecti'
0x7da3bd: movups XMMWORD PTR [rax],xmm0
0x7da3c0: mov    ecx,DWORD PTR [rip+0xeee38a]        # 0x1416c8750 ; cstring='les...'
0x7da3c6: mov    DWORD PTR [rax+0x10],ecx
0x7da3c9: movzx  ecx,WORD PTR [rip+0xeee384]        # 0x1416c8754 ; cstring='..'
0x7da3d0: mov    WORD PTR [rax+0x14],cx
0x7da3d4: mov    BYTE PTR [rax+0x16],0x0
0x7da3d8: xor    r9d,r9d
0x7da3db: lea    rdx,[rbp-0x38]
0x7da3df: lea    rcx,[rip+0x1e8c38a]        # 0x142666770
0x7da3e6: call   0x140af0220
0x7da3eb: nop
0x7da3ec: jmp    0x1407d985b
0x7da3f1: xorps  xmm0,xmm0
0x7da3f4: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da3f8: mov    ecx,0x20
0x7da3fd: call   0x140071d90
0x7da402: mov    QWORD PTR [rbp-0x38],rax
0x7da406: movdqa xmm0,XMMWORD PTR [rip+0xfcc052]        # 0x1417a6460
0x7da40e: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da413: movups xmm0,XMMWORD PTR [rip+0xeedd56]        # 0x1416c8170 ; vector='Loading building'
0x7da41a: movups XMMWORD PTR [rax],xmm0
0x7da41d: mov    ecx,DWORD PTR [rip+0xeedd5d]        # 0x1416c8180 ; cstring='s...'
0x7da423: mov    DWORD PTR [rax+0x10],ecx
0x7da426: mov    BYTE PTR [rax+0x14],0x0
0x7da42a: xor    r9d,r9d
0x7da42d: lea    rdx,[rbp-0x38]
0x7da431: lea    rcx,[rip+0x1e8c338]        # 0x142666770
0x7da438: call   0x140af0220
0x7da43d: nop
0x7da43e: jmp    0x1407d985b
0x7da443: xorps  xmm0,xmm0
0x7da446: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da44a: mov    ecx,0x20
0x7da44f: call   0x140071d90
0x7da454: mov    QWORD PTR [rbp-0x38],rax
0x7da458: movdqa xmm0,XMMWORD PTR [rip+0xfcbff0]        # 0x1417a6450
0x7da460: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da465: movups xmm0,XMMWORD PTR [rip+0xeee2ec]        # 0x1416c8758 ; vector='Loading machines'
0x7da46c: movups XMMWORD PTR [rax],xmm0
0x7da46f: movzx  ecx,WORD PTR [rip+0xeee2f2]        # 0x1416c8768 ; cstring='...'
0x7da476: mov    WORD PTR [rax+0x10],cx
0x7da47a: movzx  ecx,BYTE PTR [rip+0xeee2e9]        # 0x1416c876a ; cstring='.'
0x7da481: mov    BYTE PTR [rax+0x12],cl
0x7da484: mov    BYTE PTR [rax+0x13],0x0
0x7da488: xor    r9d,r9d
0x7da48b: lea    rdx,[rbp-0x38]
0x7da48f: lea    rcx,[rip+0x1e8c2da]        # 0x142666770
0x7da496: call   0x140af0220
0x7da49b: nop
0x7da49c: jmp    0x1407d985b
0x7da4a1: xorps  xmm0,xmm0
0x7da4a4: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da4a8: mov    ecx,0x20
0x7da4ad: call   0x140071d90
0x7da4b2: mov    QWORD PTR [rbp-0x38],rax
0x7da4b6: movdqa xmm0,XMMWORD PTR [rip+0xfcbfc2]        # 0x1417a6480
0x7da4be: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da4c3: movups xmm0,XMMWORD PTR [rip+0xeee30e]        # 0x1416c87d8 ; vector='Loading flow gui'
0x7da4ca: movups XMMWORD PTR [rax],xmm0
0x7da4cd: mov    ecx,DWORD PTR [rip+0xeee315]        # 0x1416c87e8 ; cstring='des...'
0x7da4d3: mov    DWORD PTR [rax+0x10],ecx
0x7da4d6: movzx  ecx,WORD PTR [rip+0xeee30f]        # 0x1416c87ec ; cstring='..'
0x7da4dd: mov    WORD PTR [rax+0x14],cx
0x7da4e1: mov    BYTE PTR [rax+0x16],0x0
0x7da4e5: xor    r9d,r9d
0x7da4e8: lea    rdx,[rbp-0x38]
0x7da4ec: lea    rcx,[rip+0x1e8c27d]        # 0x142666770
0x7da4f3: call   0x140af0220
0x7da4f8: nop
0x7da4f9: jmp    0x1407d985b
0x7da4fe: xorps  xmm0,xmm0
0x7da501: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da505: mov    ecx,0x20
0x7da50a: call   0x140071d90
0x7da50f: mov    QWORD PTR [rbp-0x38],rax
0x7da513: movdqa xmm0,XMMWORD PTR [rip+0xfcbf25]        # 0x1417a6440
0x7da51b: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da520: movups xmm0,XMMWORD PTR [rip+0xeee2c9]        # 0x1416c87f0 ; vector='Loading effects.'
0x7da527: movups XMMWORD PTR [rax],xmm0
0x7da52a: movzx  ecx,WORD PTR [rip+0xeee2cf]        # 0x1416c8800 ; cstring='..'
0x7da531: mov    WORD PTR [rax+0x10],cx
0x7da535: mov    BYTE PTR [rax+0x12],0x0
0x7da539: xor    r9d,r9d
0x7da53c: lea    rdx,[rbp-0x38]
0x7da540: lea    rcx,[rip+0x1e8c229]        # 0x142666770
0x7da547: call   0x140af0220
0x7da54c: nop
0x7da54d: jmp    0x1407d985b
0x7da552: xorps  xmm0,xmm0
0x7da555: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da559: mov    ecx,0x20
0x7da55e: call   0x140071d90
0x7da563: mov    QWORD PTR [rbp-0x38],rax
0x7da567: movdqa xmm0,XMMWORD PTR [rip+0xfcbee1]        # 0x1417a6450
0x7da56f: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da574: movups xmm0,XMMWORD PTR [rip+0xeed935]        # 0x1416c7eb0 ; vector='Loading entities'
0x7da57b: movups XMMWORD PTR [rax],xmm0
0x7da57e: movzx  ecx,WORD PTR [rip+0xeed93b]        # 0x1416c7ec0 ; cstring='...'
0x7da585: mov    WORD PTR [rax+0x10],cx
0x7da589: movzx  ecx,BYTE PTR [rip+0xeed932]        # 0x1416c7ec2 ; cstring='.'
0x7da590: mov    BYTE PTR [rax+0x12],cl
0x7da593: mov    BYTE PTR [rax+0x13],0x0
0x7da597: xor    r9d,r9d
0x7da59a: lea    rdx,[rbp-0x38]
0x7da59e: lea    rcx,[rip+0x1e8c1cb]        # 0x142666770
0x7da5a5: call   0x140af0220
0x7da5aa: nop
0x7da5ab: jmp    0x1407d985b
0x7da5b0: xorps  xmm0,xmm0
0x7da5b3: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da5b7: mov    ecx,0x30
0x7da5bc: call   0x140071d90
0x7da5c1: mov    rdx,rax
0x7da5c4: mov    QWORD PTR [rbp-0x38],rax
0x7da5c8: movdqa xmm0,XMMWORD PTR [rip+0xfcbf80]        # 0x1417a6550
0x7da5d0: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da5d5: movups xmm0,XMMWORD PTR [rip+0xeee1bc]        # 0x1416c8798 ; vector='Loading local an'
0x7da5dc: movups XMMWORD PTR [rax],xmm0
0x7da5df: movups xmm1,XMMWORD PTR [rip+0xeee1c2]        # 0x1416c87a8 ; vector='imal populations'
0x7da5e6: movups XMMWORD PTR [rax+0x10],xmm1
0x7da5ea: movzx  ecx,WORD PTR [rip+0xeee1c7]        # 0x1416c87b8 ; cstring='...'
0x7da5f1: mov    WORD PTR [rax+0x20],cx
0x7da5f5: movzx  eax,BYTE PTR [rip+0xeee1be]        # 0x1416c87ba ; cstring='.'
0x7da5fc: mov    BYTE PTR [rdx+0x22],al
0x7da5ff: mov    BYTE PTR [rdx+0x23],0x0
0x7da603: xor    r9d,r9d
0x7da606: lea    rdx,[rbp-0x38]
0x7da60a: lea    rcx,[rip+0x1e8c15f]        # 0x142666770
0x7da611: call   0x140af0220
0x7da616: nop
0x7da617: jmp    0x1407d985b
0x7da61c: xorps  xmm0,xmm0
0x7da61f: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da623: mov    ecx,0x20
0x7da628: call   0x140071d90
0x7da62d: mov    QWORD PTR [rbp-0x38],rax
0x7da631: movdqa xmm0,XMMWORD PTR [rip+0xfcbdf7]        # 0x1417a6430
0x7da639: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da63e: movups xmm0,XMMWORD PTR [rip+0xeee17b]        # 0x1416c87c0 ; vector='Loading events..'
0x7da645: movups XMMWORD PTR [rax],xmm0
0x7da648: movzx  ecx,BYTE PTR [rip+0xeee181]        # 0x1416c87d0 ; cstring='.'
0x7da64f: mov    BYTE PTR [rax+0x10],cl
0x7da652: mov    BYTE PTR [rax+0x11],0x0
0x7da656: xor    r9d,r9d
0x7da659: lea    rdx,[rbp-0x38]
0x7da65d: lea    rcx,[rip+0x1e8c10c]        # 0x142666770
0x7da664: call   0x140af0220
0x7da669: nop
0x7da66a: jmp    0x1407d985b
0x7da66f: xorps  xmm0,xmm0
0x7da672: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da676: mov    ecx,0x20
0x7da67b: call   0x140071d90
0x7da680: mov    QWORD PTR [rbp-0x38],rax
0x7da684: movdqa xmm0,XMMWORD PTR [rip+0xfcbdc4]        # 0x1417a6450
0x7da68c: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da691: movups xmm0,XMMWORD PTR [rip+0xeee1a8]        # 0x1416c8840 ; vector='Loading mandates'
0x7da698: movups XMMWORD PTR [rax],xmm0
0x7da69b: movzx  ecx,WORD PTR [rip+0xeee1ae]        # 0x1416c8850 ; cstring='...'
0x7da6a2: mov    WORD PTR [rax+0x10],cx
0x7da6a6: movzx  ecx,BYTE PTR [rip+0xeee1a5]        # 0x1416c8852 ; cstring='.'
0x7da6ad: mov    BYTE PTR [rax+0x12],cl
0x7da6b0: mov    BYTE PTR [rax+0x13],0x0
0x7da6b4: xor    r9d,r9d
0x7da6b7: lea    rdx,[rbp-0x38]
0x7da6bb: lea    rcx,[rip+0x1e8c0ae]        # 0x142666770
0x7da6c2: call   0x140af0220
0x7da6c7: nop
0x7da6c8: jmp    0x1407d985b
0x7da6cd: xorps  xmm0,xmm0
0x7da6d0: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da6d4: mov    ecx,0x20
0x7da6d9: call   0x140071d90
0x7da6de: mov    QWORD PTR [rbp-0x38],rax
0x7da6e2: movdqa xmm0,XMMWORD PTR [rip+0xfcbd96]        # 0x1417a6480
0x7da6ea: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da6ef: movups xmm0,XMMWORD PTR [rip+0xeee162]        # 0x1416c8858 ; vector='Loading work quo'
0x7da6f6: movups XMMWORD PTR [rax],xmm0
0x7da6f9: mov    ecx,DWORD PTR [rip+0xeee169]        # 0x1416c8868 ; cstring='tas...'
0x7da6ff: mov    DWORD PTR [rax+0x10],ecx
0x7da702: movzx  ecx,WORD PTR [rip+0xeee163]        # 0x1416c886c ; cstring='..'
0x7da709: mov    WORD PTR [rax+0x14],cx
0x7da70d: mov    BYTE PTR [rax+0x16],0x0
0x7da711: xor    r9d,r9d
0x7da714: lea    rdx,[rbp-0x38]
0x7da718: lea    rcx,[rip+0x1e8c051]        # 0x142666770
0x7da71f: call   0x140af0220
0x7da724: nop
0x7da725: jmp    0x1407d985b
0x7da72a: xorps  xmm0,xmm0
0x7da72d: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da731: mov    ecx,0x20
0x7da736: call   0x140071d90
0x7da73b: mov    rdx,rax
0x7da73e: mov    QWORD PTR [rbp-0x38],rax
0x7da742: movdqa xmm0,XMMWORD PTR [rip+0xfcbd46]        # 0x1417a6490
0x7da74a: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da74f: movups xmm0,XMMWORD PTR [rip+0xeee0b2]        # 0x1416c8808 ; vector='Loading world ev'
0x7da756: movups XMMWORD PTR [rax],xmm0
0x7da759: mov    ecx,DWORD PTR [rip+0xeee0b9]        # 0x1416c8818 ; cstring='ents...'
0x7da75f: mov    DWORD PTR [rax+0x10],ecx
0x7da762: movzx  ecx,WORD PTR [rip+0xeee0b3]        # 0x1416c881c ; cstring='...'
0x7da769: mov    WORD PTR [rax+0x14],cx
0x7da76d: movzx  eax,BYTE PTR [rip+0xeee0aa]        # 0x1416c881e ; cstring='.'
0x7da774: mov    BYTE PTR [rdx+0x16],al
0x7da777: mov    BYTE PTR [rdx+0x17],0x0
0x7da77b: xor    r9d,r9d
0x7da77e: lea    rdx,[rbp-0x38]
0x7da782: lea    rcx,[rip+0x1e8bfe7]        # 0x142666770
0x7da789: call   0x140af0220
0x7da78e: nop
0x7da78f: jmp    0x1407d985b
0x7da794: xorps  xmm0,xmm0
0x7da797: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da79b: mov    ecx,0x20
0x7da7a0: call   0x140071d90
0x7da7a5: mov    rdx,rax
0x7da7a8: mov    QWORD PTR [rbp-0x38],rax
0x7da7ac: movdqa xmm0,XMMWORD PTR [rip+0xfcbd1c]        # 0x1417a64d0
0x7da7b4: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da7b9: movups xmm0,XMMWORD PTR [rip+0xeed708]        # 0x1416c7ec8 ; vector='Loading coin inf'
0x7da7c0: movups XMMWORD PTR [rax],xmm0
0x7da7c3: movsd  xmm0,QWORD PTR [rip+0xeed70d]        # 0x1416c7ed8 ; cstring='ormation...'
0x7da7cb: movsd  QWORD PTR [rax+0x10],xmm0
0x7da7d0: movzx  ecx,WORD PTR [rip+0xeed709]        # 0x1416c7ee0 ; cstring='...'
0x7da7d7: mov    WORD PTR [rax+0x18],cx
0x7da7db: movzx  eax,BYTE PTR [rip+0xeed700]        # 0x1416c7ee2 ; cstring='.'
0x7da7e2: mov    BYTE PTR [rdx+0x1a],al
0x7da7e5: mov    BYTE PTR [rdx+0x1b],0x0
0x7da7e9: xor    r9d,r9d
0x7da7ec: lea    rdx,[rbp-0x38]
0x7da7f0: lea    rcx,[rip+0x1e8bf79]        # 0x142666770
0x7da7f7: call   0x140af0220
0x7da7fc: nop
0x7da7fd: jmp    0x1407d985b
0x7da802: xorps  xmm0,xmm0
0x7da805: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da809: mov    ecx,0x20
0x7da80e: call   0x140071d90
0x7da813: mov    QWORD PTR [rbp-0x38],rax
0x7da817: movdqa xmm0,XMMWORD PTR [rip+0xfcbc11]        # 0x1417a6430
0x7da81f: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da824: movups xmm0,XMMWORD PTR [rip+0xeed75d]        # 0x1416c7f88 ; vector='Loading squads..'
0x7da82b: movups XMMWORD PTR [rax],xmm0
0x7da82e: movzx  ecx,BYTE PTR [rip+0xeed763]        # 0x1416c7f98 ; cstring='.'
0x7da835: mov    BYTE PTR [rax+0x10],cl
0x7da838: mov    BYTE PTR [rax+0x11],0x0
0x7da83c: xor    r9d,r9d
0x7da83f: lea    rdx,[rbp-0x38]
0x7da843: lea    rcx,[rip+0x1e8bf26]        # 0x142666770
0x7da84a: call   0x140af0220
0x7da84f: nop
0x7da850: jmp    0x1407d985b
0x7da855: xorps  xmm0,xmm0
0x7da858: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da85c: mov    ecx,0x20
0x7da861: call   0x140071d90
0x7da866: mov    QWORD PTR [rbp-0x38],rax
0x7da86a: movdqa xmm0,XMMWORD PTR [rip+0xfcbbfe]        # 0x1417a6470
0x7da872: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da877: movups xmm0,XMMWORD PTR [rip+0xeed722]        # 0x1416c7fa0 ; vector='Loading formatio'
0x7da87e: movups XMMWORD PTR [rax],xmm0
0x7da881: mov    ecx,DWORD PTR [rip+0xeed729]        # 0x1416c7fb0 ; cstring='ns...'
0x7da887: mov    DWORD PTR [rax+0x10],ecx
0x7da88a: movzx  ecx,BYTE PTR [rip+0xeed723]        # 0x1416c7fb4 ; cstring='.'
0x7da891: mov    BYTE PTR [rax+0x14],cl
0x7da894: mov    BYTE PTR [rax+0x15],0x0
0x7da898: xor    r9d,r9d
0x7da89b: lea    rdx,[rbp-0x38]
0x7da89f: lea    rcx,[rip+0x1e8beca]        # 0x142666770
0x7da8a6: call   0x140af0220
0x7da8ab: nop
0x7da8ac: jmp    0x1407d985b
0x7da8b1: xorps  xmm0,xmm0
0x7da8b4: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da8b8: mov    ecx,0x20
0x7da8bd: call   0x140071d90
0x7da8c2: mov    QWORD PTR [rbp-0x38],rax
0x7da8c6: movdqa xmm0,XMMWORD PTR [rip+0xfcbba2]        # 0x1417a6470
0x7da8ce: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da8d3: movups xmm0,XMMWORD PTR [rip+0xeed67e]        # 0x1416c7f58 ; vector='Loading activiti'
0x7da8da: movups XMMWORD PTR [rax],xmm0
0x7da8dd: mov    ecx,DWORD PTR [rip+0xeed685]        # 0x1416c7f68 ; cstring='es...'
0x7da8e3: mov    DWORD PTR [rax+0x10],ecx
0x7da8e6: movzx  ecx,BYTE PTR [rip+0xeed67f]        # 0x1416c7f6c ; cstring='.'
0x7da8ed: mov    BYTE PTR [rax+0x14],cl
0x7da8f0: mov    BYTE PTR [rax+0x15],0x0
0x7da8f4: xor    r9d,r9d
0x7da8f7: lea    rdx,[rbp-0x38]
0x7da8fb: lea    rcx,[rip+0x1e8be6e]        # 0x142666770
0x7da902: call   0x140af0220
0x7da907: nop
0x7da908: jmp    0x1407d985b
0x7da90d: xorps  xmm0,xmm0
0x7da910: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da914: mov    ecx,0x20
0x7da919: call   0x140071d90
0x7da91e: mov    rdx,rax
0x7da921: mov    QWORD PTR [rbp-0x38],rax
0x7da925: movdqa xmm0,XMMWORD PTR [rip+0xfcbb63]        # 0x1417a6490
0x7da92d: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da932: movups xmm0,XMMWORD PTR [rip+0xeed637]        # 0x1416c7f70 ; vector='Loading interact'
0x7da939: movups XMMWORD PTR [rax],xmm0
0x7da93c: mov    ecx,DWORD PTR [rip+0xeed63e]        # 0x1416c7f80 ; cstring='ions...'
0x7da942: mov    DWORD PTR [rax+0x10],ecx
0x7da945: movzx  ecx,WORD PTR [rip+0xeed638]        # 0x1416c7f84 ; cstring='...'
0x7da94c: mov    WORD PTR [rax+0x14],cx
0x7da950: movzx  eax,BYTE PTR [rip+0xeed62f]        # 0x1416c7f86 ; cstring='.'
0x7da957: mov    BYTE PTR [rdx+0x16],al
0x7da95a: mov    BYTE PTR [rdx+0x17],0x0
0x7da95e: xor    r9d,r9d
0x7da961: lea    rdx,[rbp-0x38]
0x7da965: lea    rcx,[rip+0x1e8be04]        # 0x142666770
0x7da96c: call   0x140af0220
0x7da971: nop
0x7da972: jmp    0x1407d985b
0x7da977: xorps  xmm0,xmm0
0x7da97a: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da97e: mov    ecx,0x20
0x7da983: call   0x140071d90
0x7da988: mov    QWORD PTR [rbp-0x38],rax
0x7da98c: movdqa xmm0,XMMWORD PTR [rip+0xfcbb2c]        # 0x1417a64c0
0x7da994: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da999: movups xmm0,XMMWORD PTR [rip+0xeed648]        # 0x1416c7fe8 ; vector='Loading written '
0x7da9a0: movups XMMWORD PTR [rax],xmm0
0x7da9a3: movsd  xmm0,QWORD PTR [rip+0xeed64d]        # 0x1416c7ff8 ; cstring='content...'
0x7da9ab: movsd  QWORD PTR [rax+0x10],xmm0
0x7da9b0: movzx  ecx,WORD PTR [rip+0xeed649]        # 0x1416c8000 ; cstring='..'
0x7da9b7: mov    WORD PTR [rax+0x18],cx
0x7da9bb: mov    BYTE PTR [rax+0x1a],0x0
0x7da9bf: xor    r9d,r9d
0x7da9c2: lea    rdx,[rbp-0x38]
0x7da9c6: lea    rcx,[rip+0x1e8bda3]        # 0x142666770
0x7da9cd: call   0x140af0220
0x7da9d2: nop
0x7da9d3: jmp    0x1407d985b
0x7da9d8: xorps  xmm0,xmm0
0x7da9db: movups XMMWORD PTR [rbp-0x38],xmm0
0x7da9df: mov    ecx,0x20
0x7da9e4: call   0x140071d90
0x7da9e9: mov    QWORD PTR [rbp-0x38],rax
0x7da9ed: movdqa xmm0,XMMWORD PTR [rip+0xfcba7b]        # 0x1417a6470
0x7da9f5: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7da9fa: movups xmm0,XMMWORD PTR [rip+0xeed607]        # 0x1416c8008 ; vector='Loading identiti'
0x7daa01: movups XMMWORD PTR [rax],xmm0
0x7daa04: mov    ecx,DWORD PTR [rip+0xeed60e]        # 0x1416c8018 ; cstring='es...'
0x7daa0a: mov    DWORD PTR [rax+0x10],ecx
0x7daa0d: movzx  ecx,BYTE PTR [rip+0xeed608]        # 0x1416c801c ; cstring='.'
0x7daa14: mov    BYTE PTR [rax+0x14],cl
0x7daa17: mov    BYTE PTR [rax+0x15],0x0
0x7daa1b: xor    r9d,r9d
0x7daa1e: lea    rdx,[rbp-0x38]
0x7daa22: lea    rcx,[rip+0x1e8bd47]        # 0x142666770
0x7daa29: call   0x140af0220
0x7daa2e: nop
0x7daa2f: jmp    0x1407d985b
0x7daa34: xorps  xmm0,xmm0
0x7daa37: movups XMMWORD PTR [rbp-0x38],xmm0
0x7daa3b: mov    ecx,0x20
0x7daa40: call   0x140071d90
0x7daa45: mov    QWORD PTR [rbp-0x38],rax
0x7daa49: movdqa xmm0,XMMWORD PTR [rip+0xfcba0f]        # 0x1417a6460
0x7daa51: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7daa56: movups xmm0,XMMWORD PTR [rip+0xeed55b]        # 0x1416c7fb8 ; vector='Loading incident'
0x7daa5d: movups XMMWORD PTR [rax],xmm0
0x7daa60: mov    ecx,DWORD PTR [rip+0xeed562]        # 0x1416c7fc8 ; cstring='s...'
0x7daa66: mov    DWORD PTR [rax+0x10],ecx
0x7daa69: mov    BYTE PTR [rax+0x14],0x0
0x7daa6d: xor    r9d,r9d
0x7daa70: lea    rdx,[rbp-0x38]
0x7daa74: lea    rcx,[rip+0x1e8bcf5]        # 0x142666770
0x7daa7b: call   0x140af0220
0x7daa80: nop
0x7daa81: jmp    0x1407d985b
0x7daa86: xorps  xmm0,xmm0
0x7daa89: movups XMMWORD PTR [rbp-0x38],xmm0
0x7daa8d: mov    ecx,0x20
0x7daa92: call   0x140071d90
0x7daa97: mov    QWORD PTR [rbp-0x38],rax
0x7daa9b: movdqa xmm0,XMMWORD PTR [rip+0xfcb98d]        # 0x1417a6430
0x7daaa3: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7daaa8: movups xmm0,XMMWORD PTR [rip+0xeed521]        # 0x1416c7fd0 ; vector='Loading crimes..'
0x7daaaf: movups XMMWORD PTR [rax],xmm0
0x7daab2: movzx  ecx,BYTE PTR [rip+0xeed527]        # 0x1416c7fe0 ; cstring='.'
0x7daab9: mov    BYTE PTR [rax+0x10],cl
0x7daabc: mov    BYTE PTR [rax+0x11],0x0
0x7daac0: xor    r9d,r9d
0x7daac3: lea    rdx,[rbp-0x38]
0x7daac7: lea    rcx,[rip+0x1e8bca2]        # 0x142666770
0x7daace: call   0x140af0220
0x7daad3: nop
0x7daad4: jmp    0x1407d985b
0x7daad9: xorps  xmm0,xmm0
0x7daadc: movups XMMWORD PTR [rbp-0x38],xmm0
0x7daae0: mov    ecx,0x20
0x7daae5: call   0x140071d90
0x7daaea: mov    QWORD PTR [rbp-0x38],rax
0x7daaee: movdqa xmm0,XMMWORD PTR [rip+0xfcb95a]        # 0x1417a6450
0x7daaf6: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7daafb: movups xmm0,XMMWORD PTR [rip+0xeede26]        # 0x1416c8928 ; vector='Loading vehicles'
0x7dab02: movups XMMWORD PTR [rax],xmm0
0x7dab05: movzx  ecx,WORD PTR [rip+0xeede2c]        # 0x1416c8938 ; cstring='...'
0x7dab0c: mov    WORD PTR [rax+0x10],cx
0x7dab10: movzx  ecx,BYTE PTR [rip+0xeede23]        # 0x1416c893a ; cstring='.'
0x7dab17: mov    BYTE PTR [rax+0x12],cl
0x7dab1a: mov    BYTE PTR [rax+0x13],0x0
0x7dab1e: xor    r9d,r9d
0x7dab21: lea    rdx,[rbp-0x38]
0x7dab25: lea    rcx,[rip+0x1e8bc44]        # 0x142666770
0x7dab2c: call   0x140af0220
0x7dab31: nop
0x7dab32: jmp    0x1407d985b
0x7dab37: xorps  xmm0,xmm0
0x7dab3a: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dab3e: mov    ecx,0x20
0x7dab43: call   0x140071d90
0x7dab48: mov    QWORD PTR [rbp-0x38],rax
0x7dab4c: movdqa xmm0,XMMWORD PTR [rip+0xfcb8dc]        # 0x1417a6430
0x7dab54: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dab59: movups xmm0,XMMWORD PTR [rip+0xeedde0]        # 0x1416c8940 ; vector='Loading armies..'
0x7dab60: movups XMMWORD PTR [rax],xmm0
0x7dab63: movzx  ecx,BYTE PTR [rip+0xeedde6]        # 0x1416c8950 ; cstring='.'
0x7dab6a: mov    BYTE PTR [rax+0x10],cl
0x7dab6d: mov    BYTE PTR [rax+0x11],0x0
0x7dab71: xor    r9d,r9d
0x7dab74: lea    rdx,[rbp-0x38]
0x7dab78: lea    rcx,[rip+0x1e8bbf1]        # 0x142666770
0x7dab7f: call   0x140af0220
0x7dab84: nop
0x7dab85: mov    rdx,QWORD PTR [rbp-0x20]
0x7dab89: cmp    rdx,0xf
0x7dab8d: jbe    0x1407daf61
0x7dab93: inc    rdx
0x7dab96: mov    rcx,QWORD PTR [rbp-0x38]
0x7dab9a: mov    rax,rcx
0x7dab9d: cmp    rdx,0x1000
0x7daba4: jb     0x1407d9895
0x7dabaa: add    rdx,0x27
0x7dabae: mov    rcx,QWORD PTR [rcx-0x8]
0x7dabb2: sub    rax,rcx
0x7dabb5: add    rax,0xfffffffffffffff8
0x7dabb9: cmp    rax,0x1f
0x7dabbd: jbe    0x1407d9895
0x7dabc3: call   QWORD PTR [rip+0xe20eff]        # 0x1415fbac8
0x7dabc9: int3
0x7dabca: lea    rdx,[rip+0xeedd17]        # 0x1416c88e8 ; cstring='Loading army controllers...'
0x7dabd1: lea    rcx,[rbp-0x38]
0x7dabd5: call   0x140069710
0x7dabda: nop
0x7dabdb: xor    r9d,r9d
0x7dabde: lea    rdx,[rbp-0x38]
0x7dabe2: lea    rcx,[rip+0x1e8bb87]        # 0x142666770
0x7dabe9: call   0x140af0220
0x7dabee: nop
0x7dabef: jmp    0x1407daf58
0x7dabf4: lea    rdx,[rip+0xeedd0d]        # 0x1416c8908 ; cstring='Loading tracking information...'
0x7dabfb: lea    rcx,[rbp-0x38]
0x7dabff: call   0x140069710
0x7dac04: nop
0x7dac05: xor    r9d,r9d
0x7dac08: lea    rdx,[rbp-0x38]
0x7dac0c: lea    rcx,[rip+0x1e8bb5d]        # 0x142666770
0x7dac13: call   0x140af0220
0x7dac18: nop
0x7dac19: jmp    0x1407daf58
0x7dac1e: lea    rdx,[rip+0xeedd63]        # 0x1416c8988 ; cstring='Loading cultural identities...'
0x7dac25: lea    rcx,[rbp-0x38]
0x7dac29: call   0x140069710
0x7dac2e: nop
0x7dac2f: xor    r9d,r9d
0x7dac32: lea    rdx,[rbp-0x38]
0x7dac36: lea    rcx,[rip+0x1e8bb33]        # 0x142666770
0x7dac3d: call   0x140af0220
0x7dac42: nop
0x7dac43: jmp    0x1407daf58
0x7dac48: lea    rdx,[rip+0xeedd59]        # 0x1416c89a8 ; cstring='Loading agreements...'
0x7dac4f: lea    rcx,[rbp-0x38]
0x7dac53: call   0x140069710
0x7dac58: nop
0x7dac59: xor    r9d,r9d
0x7dac5c: lea    rdx,[rbp-0x38]
0x7dac60: lea    rcx,[rip+0x1e8bb09]        # 0x142666770
0x7dac67: call   0x140af0220
0x7dac6c: nop
0x7dac6d: jmp    0x1407daf58
0x7dac72: lea    rdx,[rip+0xeedcdf]        # 0x1416c8958 ; cstring='Loading art forms...'
0x7dac79: lea    rcx,[rbp-0x38]
0x7dac7d: call   0x140069710
0x7dac82: nop
0x7dac83: xor    r9d,r9d
0x7dac86: lea    rdx,[rbp-0x38]
0x7dac8a: lea    rcx,[rip+0x1e8badf]        # 0x142666770
0x7dac91: call   0x140af0220
0x7dac96: nop
0x7dac97: jmp    0x1407daf58
0x7dac9c: lea    rdx,[rip+0xeedccd]        # 0x1416c8970 ; cstring='Loading occupations...'
0x7daca3: lea    rcx,[rbp-0x38]
0x7daca7: call   0x140069710
0x7dacac: nop
0x7dacad: xor    r9d,r9d
0x7dacb0: lea    rdx,[rbp-0x38]
0x7dacb4: lea    rcx,[rip+0x1e8bab5]        # 0x142666770
0x7dacbb: call   0x140af0220
0x7dacc0: nop
0x7dacc1: jmp    0x1407daf58
0x7dacc6: lea    rdx,[rip+0xeedd3b]        # 0x1416c8a08 ; cstring='Loading belief systems...'
0x7daccd: lea    rcx,[rbp-0x38]
0x7dacd1: call   0x140069710
0x7dacd6: nop
0x7dacd7: xor    r9d,r9d
0x7dacda: lea    rdx,[rbp-0x38]
0x7dacde: lea    rcx,[rip+0x1e8ba8b]        # 0x142666770
0x7dace5: call   0x140af0220
0x7dacea: nop
0x7daceb: jmp    0x1407daf58
0x7dacf0: lea    rdx,[rip+0xeedd31]        # 0x1416c8a28 ; cstring='Loading image sets...'
0x7dacf7: lea    rcx,[rbp-0x38]
0x7dacfb: call   0x140069710
0x7dad00: nop
0x7dad01: xor    r9d,r9d
0x7dad04: lea    rdx,[rbp-0x38]
0x7dad08: lea    rcx,[rip+0x1e8ba61]        # 0x142666770
0x7dad0f: call   0x140af0220
0x7dad14: nop
0x7dad15: jmp    0x1407daf58
0x7dad1a: lea    rdx,[rip+0xeedc9f]        # 0x1416c89c0 ; cstring='Loading divination sets...'
0x7dad21: lea    rcx,[rbp-0x38]
0x7dad25: call   0x140069710
0x7dad2a: nop
0x7dad2b: xor    r9d,r9d
0x7dad2e: lea    rdx,[rbp-0x38]
0x7dad32: lea    rcx,[rip+0x1e8ba37]        # 0x142666770
0x7dad39: call   0x140af0220
0x7dad3e: nop
0x7dad3f: jmp    0x1407daf58
0x7dad44: lea    rdx,[rip+0xeedad5]        # 0x1416c8820 ; cstring='Loading announcements...'
0x7dad4b: lea    rcx,[rbp-0x38]
0x7dad4f: call   0x140069710
0x7dad54: nop
0x7dad55: xor    r9d,r9d
0x7dad58: lea    rdx,[rbp-0x38]
0x7dad5c: lea    rcx,[rip+0x1e8ba0d]        # 0x142666770
0x7dad63: call   0x140af0220
0x7dad68: nop
0x7dad69: jmp    0x1407daf58
0x7dad6e: lea    rdx,[rip+0xeedb33]        # 0x1416c88a8 ; cstring='Loading fortress information...'
0x7dad75: lea    rcx,[rbp-0x38]
0x7dad79: call   0x140069710
0x7dad7e: nop
0x7dad7f: xor    r9d,r9d
0x7dad82: lea    rdx,[rbp-0x38]
0x7dad86: lea    rcx,[rip+0x1e8b9e3]        # 0x142666770
0x7dad8d: call   0x140af0220
0x7dad92: nop
0x7dad93: jmp    0x1407daf58
0x7dad98: lea    rdx,[rip+0xeedb29]        # 0x1416c88c8 ; cstring='Loading world information...'
0x7dad9f: lea    rcx,[rbp-0x38]
0x7dada3: call   0x140069710
0x7dada8: nop
0x7dada9: xor    r9d,r9d
0x7dadac: lea    rdx,[rbp-0x38]
0x7dadb0: lea    rcx,[rip+0x1e8b9b9]        # 0x142666770
0x7dadb7: call   0x140af0220
0x7dadbc: nop
0x7dadbd: jmp    0x1407daf58
0x7dadc2: lea    rdx,[rip+0xeed11f]        # 0x1416c7ee8 ; cstring='Loading artifacts...'
0x7dadc9: lea    rcx,[rbp-0x38]
0x7dadcd: call   0x140069710
0x7dadd2: nop
0x7dadd3: xor    r9d,r9d
0x7dadd6: lea    rdx,[rbp-0x38]
0x7dadda: lea    rcx,[rip+0x1e8b98f]        # 0x142666770
0x7dade1: call   0x140af0220
0x7dade6: nop
0x7dade7: jmp    0x1407daf58
0x7dadec: lea    rdx,[rip+0xeed10d]        # 0x1416c7f00 ; cstring='Loading active historical figures...'
0x7dadf3: lea    rcx,[rbp-0x38]
0x7dadf7: call   0x140069710
0x7dadfc: nop
0x7dadfd: xor    r9d,r9d
0x7dae00: lea    rdx,[rbp-0x38]
0x7dae04: lea    rcx,[rip+0x1e8b965]        # 0x142666770
0x7dae0b: call   0x140af0220
0x7dae10: nop
0x7dae11: jmp    0x1407daf58
0x7dae16: lea    rdx,[rip+0xeeda53]        # 0x1416c8870 ; cstring='Loading adventure...'
0x7dae1d: lea    rcx,[rbp-0x38]
0x7dae21: call   0x140069710
0x7dae26: nop
0x7dae27: xor    r9d,r9d
0x7dae2a: lea    rdx,[rbp-0x38]
0x7dae2e: lea    rcx,[rip+0x1e8b93b]        # 0x142666770
0x7dae35: call   0x140af0220
0x7dae3a: nop
0x7dae3b: jmp    0x1407daf58
0x7dae40: lea    rdx,[rip+0xeeda41]        # 0x1416c8888 ; cstring='Loading general information...'
0x7dae47: lea    rcx,[rbp-0x38]
0x7dae4b: call   0x140069710
0x7dae50: nop
0x7dae51: xor    r9d,r9d
0x7dae54: lea    rdx,[rbp-0x38]
0x7dae58: lea    rcx,[rip+0x1e8b911]        # 0x142666770
0x7dae5f: call   0x140af0220
0x7dae64: nop
0x7dae65: jmp    0x1407daf58
0x7dae6a: lea    rdx,[rip+0xe40b9f]        # 0x14161ba10 ; cstring='Closing file...'
0x7dae71: lea    rcx,[rbp-0x38]
0x7dae75: call   0x140069710
0x7dae7a: nop
0x7dae7b: xor    r9d,r9d
0x7dae7e: lea    rdx,[rbp-0x38]
0x7dae82: lea    rcx,[rip+0x1e8b8e7]        # 0x142666770
0x7dae89: call   0x140af0220
0x7dae8e: nop
0x7dae8f: jmp    0x1407daf58
0x7dae94: lea    rdx,[rip+0xeedb45]        # 0x1416c89e0 ; cstring='Rebuilding temporary information...'
0x7dae9b: lea    rcx,[rbp-0x38]
0x7dae9f: call   0x140069710
0x7daea4: nop
0x7daea5: xor    r9d,r9d
0x7daea8: lea    rdx,[rbp-0x38]
0x7daeac: lea    rcx,[rip+0x1e8b8bd]        # 0x142666770
0x7daeb3: call   0x140af0220
0x7daeb8: nop
0x7daeb9: jmp    0x1407daf58
0x7daebe: lea    rdx,[rip+0xeed753]        # 0x1416c8618 ; cstring='Rebuilding more temporary information...'
0x7daec5: lea    rcx,[rbp-0x38]
0x7daec9: call   0x140069710
0x7daece: nop
0x7daecf: xor    r9d,r9d
0x7daed2: lea    rdx,[rbp-0x38]
0x7daed6: lea    rcx,[rip+0x1e8b893]        # 0x142666770
0x7daedd: call   0x140af0220
0x7daee2: nop
0x7daee3: jmp    0x1407daf58
0x7daee5: lea    rdx,[rip+0xeed75c]        # 0x1416c8648 ; cstring='Preparing game screen...'
0x7daeec: lea    rcx,[rbp-0x38]
0x7daef0: call   0x140069710
0x7daef5: nop
0x7daef6: xor    r9d,r9d
0x7daef9: lea    rdx,[rbp-0x38]
0x7daefd: lea    rcx,[rip+0x1e8b86c]        # 0x142666770
0x7daf04: call   0x140af0220
0x7daf09: nop
0x7daf0a: jmp    0x1407daf58
0x7daf0c: lea    rdx,[rip+0xeed6c5]        # 0x1416c85d8 ; cstring='Handling compatibility issues...'
0x7daf13: lea    rcx,[rbp-0x38]
0x7daf17: call   0x140069710
0x7daf1c: nop
0x7daf1d: xor    r9d,r9d
0x7daf20: lea    rdx,[rbp-0x38]
0x7daf24: lea    rcx,[rip+0x1e8b845]        # 0x142666770
0x7daf2b: call   0x140af0220
0x7daf30: nop
0x7daf31: jmp    0x1407daf58
0x7daf33: lea    rdx,[rip+0xe40ae6]        # 0x14161ba20 ; cstring='Finishing...'
0x7daf3a: lea    rcx,[rbp-0x38]
0x7daf3e: call   0x140069710
0x7daf43: nop
0x7daf44: xor    r9d,r9d
0x7daf47: lea    rdx,[rbp-0x38]
0x7daf4b: lea    rcx,[rip+0x1e8b81e]        # 0x142666770
0x7daf52: call   0x140af0220
0x7daf57: nop
0x7daf58: lea    rcx,[rbp-0x38]
0x7daf5c: call   0x140070e10
0x7daf61: mov    rcx,QWORD PTR [rbp-0x10]
0x7daf65: xor    rcx,rsp
0x7daf68: call   0x14154de00
0x7daf6d: lea    r11,[rsp+0x60]
0x7daf72: mov    rbx,QWORD PTR [r11+0x30]
0x7daf76: mov    rsi,QWORD PTR [r11+0x38]
0x7daf7a: mov    rdi,QWORD PTR [r11+0x40]
0x7daf7e: mov    rsp,r11
0x7daf81: pop    r15
0x7daf83: pop    r14
0x7daf85: pop    r13
0x7daf87: pop    r12
0x7daf89: pop    rbp
0x7daf8a: ret
0x7daf8b: nop
