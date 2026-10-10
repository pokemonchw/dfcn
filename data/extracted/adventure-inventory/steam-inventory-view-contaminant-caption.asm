# steam PE:6a70a6d9:02711000; inventory-view-contaminant-caption; RVA 0x8392a0..0x839671
0x008392a0: mov    QWORD PTR [rsp+0x18],rbx
0x008392a5: mov    QWORD PTR [rsp+0x20],rsi
0x008392aa: push   rbp
0x008392ab: push   rdi
0x008392ac: push   r12
0x008392ae: push   r14
0x008392b0: push   r15
0x008392b2: mov    rbp,rsp
0x008392b5: sub    rsp,0x50
0x008392b9: mov    rax,QWORD PTR [rip+0x1062d80]        # 0x14189c040
0x008392c0: xor    rax,rsp
0x008392c3: mov    QWORD PTR [rbp-0x10],rax
0x008392c7: mov    r12,rdx
0x008392ca: mov    rbx,rcx
0x008392cd: cmp    QWORD PTR [rcx+0x10],0x0
0x008392d2: je     0x140839646
0x008392d8: mov    rcx,QWORD PTR [rcx+0x18]
0x008392dc: test   rcx,rcx
0x008392df: je     0x140839646
0x008392e5: xorps  xmm0,xmm0
0x008392e8: movups XMMWORD PTR [rbp-0x30],xmm0
0x008392ec: xor    esi,esi
0x008392ee: mov    QWORD PTR [rbp-0x20],rsi
0x008392f2: mov    QWORD PTR [rbp-0x18],0xf
0x008392fa: mov    BYTE PTR [rbp-0x30],sil
0x008392fe: call   0x140657f90
0x00839303: mov    rdi,QWORD PTR [rbx+0x10]
0x00839307: mov    rax,QWORD PTR [rbx+0x18]
0x0083930b: movsx  rcx,WORD PTR [rax+0x18]
0x00839310: test   cx,cx
0x00839313: js     0x1408394ea
0x00839319: mov    rax,QWORD PTR [rdi+0x5f8]
0x00839320: mov    rdx,QWORD PTR [rax]
0x00839323: mov    rbx,rcx
0x00839326: mov    rcx,QWORD PTR [rax+0x8]
0x0083932a: sub    rcx,rdx
0x0083932d: sar    rcx,0x3
0x00839331: cmp    rbx,rcx
0x00839334: jae    0x1408394ea
0x0083933a: mov    rax,QWORD PTR [rdx+rbx*8]
0x0083933e: mov    rcx,QWORD PTR [rax+0x98]
0x00839345: sub    rcx,QWORD PTR [rax+0x90]
0x0083934c: sar    rcx,0x3
0x00839350: mov    QWORD PTR [rbp-0x20],rsi
0x00839354: lea    rax,[rbp-0x30]
0x00839358: test   rcx,rcx
0x0083935b: je     0x1408393b0
0x0083935d: cmp    QWORD PTR [rbp-0x18],0xf
0x00839362: cmova  rax,QWORD PTR [rbp-0x30]
0x00839367: mov    BYTE PTR [rax],sil
0x0083936a: mov    rax,QWORD PTR [rdi+0x5f8]
0x00839371: mov    rcx,QWORD PTR [rax]
0x00839374: mov    rax,QWORD PTR [rcx+rbx*8]
0x00839378: cmp    DWORD PTR [rax+0x84],0x1
0x0083937f: jg     0x14083938a
0x00839381: mov    rax,QWORD PTR [rax+0x90]
0x00839388: jmp    0x140839391
0x0083938a: mov    rax,QWORD PTR [rax+0xa8]
0x00839391: mov    rdx,QWORD PTR [rax]
0x00839394: cmp    QWORD PTR [rdx+0x18],0xf
0x00839399: mov    r8,QWORD PTR [rdx+0x10]
0x0083939d: jbe    0x1408393a2
0x0083939f: mov    rdx,QWORD PTR [rdx]
0x008393a2: lea    rcx,[rbp-0x30]
0x008393a6: call   0x14006fa10
0x008393ab: jmp    0x1408395c3
0x008393b0: cmp    QWORD PTR [rbp-0x18],0xf
0x008393b5: cmova  rax,QWORD PTR [rbp-0x30]
0x008393ba: mov    BYTE PTR [rax],0x0
0x008393bd: mov    r8d,0x9
0x008393c3: lea    rdx,[rip+0xe47c86]        # 0x141681050 ; literal="body part"
0x008393ca: lea    rcx,[rbp-0x30]
0x008393ce: call   0x14006fa10
0x008393d3: mov    rax,QWORD PTR [rdi+0x5f8]
0x008393da: mov    rcx,QWORD PTR [rax]
0x008393dd: mov    rax,QWORD PTR [rcx+rbx*8]
0x008393e1: cmp    DWORD PTR [rax+0x84],0x1
0x008393e8: jle    0x1408395c3
0x008393ee: mov    rdi,QWORD PTR [rbp-0x20]
0x008393f2: mov    rsi,QWORD PTR [rbp-0x18]
0x008393f6: cmp    rdi,rsi
0x008393f9: jae    0x14083941b
0x008393fb: lea    rax,[rdi+0x1]
0x008393ff: mov    QWORD PTR [rbp-0x20],rax
0x00839403: lea    rax,[rbp-0x30]
0x00839407: cmp    rsi,0xf
0x0083940b: cmova  rax,QWORD PTR [rbp-0x30]
0x00839410: mov    WORD PTR [rax+rdi*1],0x73
0x00839416: jmp    0x1408395c3
0x0083941b: movabs rbx,0x7fffffffffffffff
0x00839425: mov    rax,rbx
0x00839428: sub    rax,rdi
0x0083942b: cmp    rax,0x1
0x0083942f: jb     0x14083966b
0x00839435: lea    r15,[rdi+0x1]
0x00839439: mov    rcx,r15
0x0083943c: or     rcx,0xf
0x00839440: cmp    rcx,rbx
0x00839443: ja     0x140839464
0x00839445: mov    rdx,rsi
0x00839448: shr    rdx,1
0x0083944b: mov    rax,rbx
0x0083944e: sub    rax,rdx
0x00839451: cmp    rsi,rax
0x00839454: ja     0x140839464
0x00839456: lea    rax,[rsi+rdx*1]
0x0083945a: mov    rbx,rcx
0x0083945d: cmp    rcx,rax
0x00839460: cmovb  rbx,rax
0x00839464: lea    rcx,[rbx+0x1]
0x00839468: call   0x1400707d0
0x0083946d: mov    r14,rax
0x00839470: mov    QWORD PTR [rbp-0x20],r15
0x00839474: mov    QWORD PTR [rbp-0x18],rbx
0x00839478: mov    r8,rdi
0x0083947b: mov    rcx,rax
0x0083947e: cmp    rsi,0xf
0x00839482: jbe    0x1408394d1
0x00839484: mov    rbx,QWORD PTR [rbp-0x30]
0x00839488: mov    rdx,rbx
0x0083948b: call   0x14153aa78
0x00839490: mov    WORD PTR [r14+rdi*1],0x73
0x00839497: lea    rdx,[rsi+0x1]
0x0083949b: cmp    rdx,0x1000
0x008394a2: jb     0x1408394c0
0x008394a4: add    rdx,0x27
0x008394a8: mov    rcx,QWORD PTR [rbx-0x8]
0x008394ac: sub    rbx,rcx
0x008394af: lea    rax,[rbx-0x8]
0x008394b3: cmp    rax,0x1f
0x008394b7: ja     0x1408395b3
0x008394bd: mov    rbx,rcx
0x008394c0: mov    rcx,rbx
0x008394c3: call   0x141539680
0x008394c8: mov    QWORD PTR [rbp-0x30],r14
0x008394cc: jmp    0x1408395c3
0x008394d1: lea    rdx,[rbp-0x30]
0x008394d5: call   0x14153aa78
0x008394da: mov    WORD PTR [r14+rdi*1],0x73
0x008394e1: mov    QWORD PTR [rbp-0x30],r14
0x008394e5: jmp    0x1408395c3
0x008394ea: mov    rdi,QWORD PTR [rbp-0x18]
0x008394ee: cmp    rdi,0x9
0x008394f2: jb     0x140839527
0x008394f4: lea    rbx,[rbp-0x30]
0x008394f8: cmp    rdi,0xf
0x008394fc: cmova  rbx,QWORD PTR [rbp-0x30]
0x00839501: mov    QWORD PTR [rbp-0x20],0x9
0x00839509: mov    r8d,0x9
0x0083950f: lea    rdx,[rip+0xe47b3a]        # 0x141681050 ; literal="body part"
0x00839516: mov    rcx,rbx
0x00839519: call   0x14153ae1a
0x0083951e: mov    BYTE PTR [rbx+0x9],0x0
0x00839522: jmp    0x1408395c3
0x00839527: mov    rcx,rdi
0x0083952a: shr    rcx,1
0x0083952d: movabs rbx,0x7fffffffffffffff
0x00839537: mov    rax,rbx
0x0083953a: sub    rax,rcx
0x0083953d: cmp    rdi,rax
0x00839540: ja     0x140839552
0x00839542: lea    rax,[rcx+rdi*1]
0x00839546: mov    ebx,0xf
0x0083954b: cmp    rax,rbx
0x0083954e: cmova  rbx,rax
0x00839552: lea    rcx,[rbx+0x1]
0x00839556: call   0x1400707d0
0x0083955b: mov    rsi,rax
0x0083955e: mov    QWORD PTR [rbp-0x20],0x9
0x00839566: mov    QWORD PTR [rbp-0x18],rbx
0x0083956a: movsd  xmm0,QWORD PTR [rip+0xe47ade]        # 0x141681050 ; literal="body part"
0x00839572: movsd  QWORD PTR [rax],xmm0
0x00839576: movzx  ecx,BYTE PTR [rip+0xe47adb]        # 0x141681058 ; literal="t"
0x0083957d: mov    BYTE PTR [rax+0x8],cl
0x00839580: mov    BYTE PTR [rax+0x9],0x0
0x00839584: cmp    rdi,0xf
0x00839588: jbe    0x1408395bf
0x0083958a: lea    rdx,[rdi+0x1]
0x0083958e: mov    rcx,QWORD PTR [rbp-0x30]
0x00839592: mov    rax,rcx
0x00839595: cmp    rdx,0x1000
0x0083959c: jb     0x1408395ba
0x0083959e: add    rdx,0x27
0x008395a2: mov    rcx,QWORD PTR [rcx-0x8]
0x008395a6: sub    rax,rcx
0x008395a9: add    rax,0xfffffffffffffff8
0x008395ad: cmp    rax,0x1f
0x008395b1: jbe    0x1408395ba
0x008395b3: call   QWORD PTR [rip+0xdac56f]        # 0x1415e5b28
0x008395b9: int3
0x008395ba: call   0x141539680
0x008395bf: mov    QWORD PTR [rbp-0x30],rsi
0x008395c3: mov    r8d,0x2
0x008395c9: lea    rdx,[rip+0xddbf70]        # 0x141615540 ; literal=" ("
0x008395d0: mov    rcx,r12
0x008395d3: call   0x14006fa10
0x008395d8: lea    rdx,[rbp-0x30]
0x008395dc: cmp    QWORD PTR [rbp-0x18],0xf
0x008395e1: cmova  rdx,QWORD PTR [rbp-0x30]
0x008395e6: mov    r8,QWORD PTR [rbp-0x20]
0x008395ea: mov    rcx,r12
0x008395ed: call   0x14006fa10
0x008395f2: mov    r8d,0x1
0x008395f8: lea    rdx,[rip+0xddbf81]        # 0x141615580 ; literal=")"
0x008395ff: mov    rcx,r12
0x00839602: call   0x14006fa10
0x00839607: nop
0x00839608: mov    rdx,QWORD PTR [rbp-0x18]
0x0083960c: cmp    rdx,0xf
0x00839610: jbe    0x140839646
0x00839612: inc    rdx
0x00839615: mov    rcx,QWORD PTR [rbp-0x30]
0x00839619: mov    rax,rcx
0x0083961c: cmp    rdx,0x1000
0x00839623: jb     0x140839641
0x00839625: add    rdx,0x27
0x00839629: mov    rcx,QWORD PTR [rcx-0x8]
0x0083962d: sub    rax,rcx
0x00839630: add    rax,0xfffffffffffffff8
0x00839634: cmp    rax,0x1f
0x00839638: jbe    0x140839641
0x0083963a: call   QWORD PTR [rip+0xdac4e8]        # 0x1415e5b28
0x00839640: int3
0x00839641: call   0x141539680
0x00839646: mov    rcx,QWORD PTR [rbp-0x10]
0x0083964a: xor    rcx,rsp
0x0083964d: call   0x141539660
0x00839652: lea    r11,[rsp+0x50]
0x00839657: mov    rbx,QWORD PTR [r11+0x40]
0x0083965b: mov    rsi,QWORD PTR [r11+0x48]
0x0083965f: mov    rsp,r11
0x00839662: pop    r15
0x00839664: pop    r14
0x00839666: pop    r12
0x00839668: pop    rdi
0x00839669: pop    rbp
0x0083966a: ret
0x0083966b: call   0x140065890
0x00839670: nop
