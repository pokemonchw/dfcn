# classic PE:6a70b91c:0270a000; inventory-eat-unit-contaminant-caption; RVA 0x8370d0..0x837515
0x008370d0: mov    QWORD PTR [rsp+0x18],rbx
0x008370d5: mov    QWORD PTR [rsp+0x20],rsi
0x008370da: push   rbp
0x008370db: push   rdi
0x008370dc: push   r12
0x008370de: push   r14
0x008370e0: push   r15
0x008370e2: mov    rbp,rsp
0x008370e5: sub    rsp,0x50
0x008370e9: mov    rax,QWORD PTR [rip+0x105ef50]        # 0x141896040
0x008370f0: xor    rax,rsp
0x008370f3: mov    QWORD PTR [rbp-0x10],rax
0x008370f7: mov    r12,rdx
0x008370fa: mov    rbx,rcx
0x008370fd: cmp    QWORD PTR [rcx+0x10],0x0
0x00837102: je     0x1408374ea
0x00837108: mov    rax,QWORD PTR [rcx+0x18]
0x0083710c: test   rax,rax
0x0083710f: je     0x1408374ea
0x00837115: movsx  ecx,WORD PTR [rax+0x8]
0x00837119: test   ecx,ecx
0x0083711b: je     0x140837135
0x0083711d: sub    ecx,0x1
0x00837120: je     0x14083712e
0x00837122: sub    ecx,0x2
0x00837125: jne    0x140837135
0x00837127: mov    eax,0x46
0x0083712c: jmp    0x14083713a
0x0083712e: mov    eax,0x49
0x00837133: jmp    0x14083713a
0x00837135: mov    eax,0x4b
0x0083713a: mov    ecx,0x6
0x0083713f: mov    r8d,0x4
0x00837145: cmp    ax,0x49
0x00837149: cmove  r8d,ecx
0x0083714d: lea    rcx,[rip+0xe74d88]        # 0x1416abedc ; literal="Drink "
0x00837154: lea    rdx,[rip+0xe74d9d]        # 0x1416abef8 ; literal="Eat "
0x0083715b: cmove  rdx,rcx
0x0083715f: mov    rcx,r12
0x00837162: call   0x14006f860
0x00837167: xorps  xmm0,xmm0
0x0083716a: movups XMMWORD PTR [rbp-0x30],xmm0
0x0083716e: xor    esi,esi
0x00837170: mov    QWORD PTR [rbp-0x20],rsi
0x00837174: mov    QWORD PTR [rbp-0x18],0xf
0x0083717c: mov    BYTE PTR [rbp-0x30],sil
0x00837180: lea    rdx,[rbp-0x30]
0x00837184: mov    rcx,QWORD PTR [rbx+0x18]
0x00837188: call   0x1406559b0
0x0083718d: lea    rdx,[rbp-0x30]
0x00837191: cmp    QWORD PTR [rbp-0x18],0xf
0x00837196: cmova  rdx,QWORD PTR [rbp-0x30]
0x0083719b: mov    r8,QWORD PTR [rbp-0x20]
0x0083719f: mov    rcx,r12
0x008371a2: call   0x14006f9a0
0x008371a7: mov    rdi,QWORD PTR [rbx+0x10]
0x008371ab: mov    rax,QWORD PTR [rbx+0x18]
0x008371af: movsx  rcx,WORD PTR [rax+0x18]
0x008371b4: test   cx,cx
0x008371b7: js     0x14083738e
0x008371bd: mov    rax,QWORD PTR [rdi+0x5f8]
0x008371c4: mov    rdx,QWORD PTR [rax]
0x008371c7: mov    rbx,rcx
0x008371ca: mov    rcx,QWORD PTR [rax+0x8]
0x008371ce: sub    rcx,rdx
0x008371d1: sar    rcx,0x3
0x008371d5: cmp    rbx,rcx
0x008371d8: jae    0x14083738e
0x008371de: mov    rax,QWORD PTR [rdx+rbx*8]
0x008371e2: mov    rcx,QWORD PTR [rax+0x98]
0x008371e9: sub    rcx,QWORD PTR [rax+0x90]
0x008371f0: sar    rcx,0x3
0x008371f4: mov    QWORD PTR [rbp-0x20],rsi
0x008371f8: lea    rax,[rbp-0x30]
0x008371fc: test   rcx,rcx
0x008371ff: je     0x140837254
0x00837201: cmp    QWORD PTR [rbp-0x18],0xf
0x00837206: cmova  rax,QWORD PTR [rbp-0x30]
0x0083720b: mov    BYTE PTR [rax],sil
0x0083720e: mov    rax,QWORD PTR [rdi+0x5f8]
0x00837215: mov    rcx,QWORD PTR [rax]
0x00837218: mov    rax,QWORD PTR [rcx+rbx*8]
0x0083721c: cmp    DWORD PTR [rax+0x84],0x1
0x00837223: jg     0x14083722e
0x00837225: mov    rax,QWORD PTR [rax+0x90]
0x0083722c: jmp    0x140837235
0x0083722e: mov    rax,QWORD PTR [rax+0xa8]
0x00837235: mov    rdx,QWORD PTR [rax]
0x00837238: cmp    QWORD PTR [rdx+0x18],0xf
0x0083723d: mov    r8,QWORD PTR [rdx+0x10]
0x00837241: jbe    0x140837246
0x00837243: mov    rdx,QWORD PTR [rdx]
0x00837246: lea    rcx,[rbp-0x30]
0x0083724a: call   0x14006f9a0
0x0083724f: jmp    0x140837467
0x00837254: cmp    QWORD PTR [rbp-0x18],0xf
0x00837259: cmova  rax,QWORD PTR [rbp-0x30]
0x0083725e: mov    BYTE PTR [rax],0x0
0x00837261: mov    r8d,0x9
0x00837267: lea    rdx,[rip+0xe44b82]        # 0x14167bdf0 ; literal="body part"
0x0083726e: lea    rcx,[rbp-0x30]
0x00837272: call   0x14006f9a0
0x00837277: mov    rax,QWORD PTR [rdi+0x5f8]
0x0083727e: mov    rcx,QWORD PTR [rax]
0x00837281: mov    rax,QWORD PTR [rcx+rbx*8]
0x00837285: cmp    DWORD PTR [rax+0x84],0x1
0x0083728c: jle    0x140837467
0x00837292: mov    rdi,QWORD PTR [rbp-0x20]
0x00837296: mov    rsi,QWORD PTR [rbp-0x18]
0x0083729a: cmp    rdi,rsi
0x0083729d: jae    0x1408372bf
0x0083729f: lea    rax,[rdi+0x1]
0x008372a3: mov    QWORD PTR [rbp-0x20],rax
0x008372a7: lea    rax,[rbp-0x30]
0x008372ab: cmp    rsi,0xf
0x008372af: cmova  rax,QWORD PTR [rbp-0x30]
0x008372b4: mov    WORD PTR [rax+rdi*1],0x73
0x008372ba: jmp    0x140837467
0x008372bf: movabs rbx,0x7fffffffffffffff
0x008372c9: mov    rax,rbx
0x008372cc: sub    rax,rdi
0x008372cf: cmp    rax,0x1
0x008372d3: jb     0x14083750f
0x008372d9: lea    r15,[rdi+0x1]
0x008372dd: mov    rcx,r15
0x008372e0: or     rcx,0xf
0x008372e4: cmp    rcx,rbx
0x008372e7: ja     0x140837308
0x008372e9: mov    rdx,rsi
0x008372ec: shr    rdx,1
0x008372ef: mov    rax,rbx
0x008372f2: sub    rax,rdx
0x008372f5: cmp    rsi,rax
0x008372f8: ja     0x140837308
0x008372fa: lea    rax,[rsi+rdx*1]
0x008372fe: mov    rbx,rcx
0x00837301: cmp    rcx,rax
0x00837304: cmovb  rbx,rax
0x00837308: lea    rcx,[rbx+0x1]
0x0083730c: call   0x140070760
0x00837311: mov    r14,rax
0x00837314: mov    QWORD PTR [rbp-0x20],r15
0x00837318: mov    QWORD PTR [rbp-0x18],rbx
0x0083731c: mov    r8,rdi
0x0083731f: mov    rcx,rax
0x00837322: cmp    rsi,0xf
0x00837326: jbe    0x140837375
0x00837328: mov    rbx,QWORD PTR [rbp-0x30]
0x0083732c: mov    rdx,rbx
0x0083732f: call   0x1415359e8
0x00837334: mov    WORD PTR [r14+rdi*1],0x73
0x0083733b: lea    rdx,[rsi+0x1]
0x0083733f: cmp    rdx,0x1000
0x00837346: jb     0x140837364
0x00837348: add    rdx,0x27
0x0083734c: mov    rcx,QWORD PTR [rbx-0x8]
0x00837350: sub    rbx,rcx
0x00837353: lea    rax,[rbx-0x8]
0x00837357: cmp    rax,0x1f
0x0083735b: ja     0x140837457
0x00837361: mov    rbx,rcx
0x00837364: mov    rcx,rbx
0x00837367: call   0x1415345f0
0x0083736c: mov    QWORD PTR [rbp-0x30],r14
0x00837370: jmp    0x140837467
0x00837375: lea    rdx,[rbp-0x30]
0x00837379: call   0x1415359e8
0x0083737e: mov    WORD PTR [r14+rdi*1],0x73
0x00837385: mov    QWORD PTR [rbp-0x30],r14
0x00837389: jmp    0x140837467
0x0083738e: mov    rdi,QWORD PTR [rbp-0x18]
0x00837392: cmp    rdi,0x9
0x00837396: jb     0x1408373cb
0x00837398: lea    rbx,[rbp-0x30]
0x0083739c: cmp    rdi,0xf
0x008373a0: cmova  rbx,QWORD PTR [rbp-0x30]
0x008373a5: mov    QWORD PTR [rbp-0x20],0x9
0x008373ad: mov    r8d,0x9
0x008373b3: lea    rdx,[rip+0xe44a36]        # 0x14167bdf0 ; literal="body part"
0x008373ba: mov    rcx,rbx
0x008373bd: call   0x141535d8a
0x008373c2: mov    BYTE PTR [rbx+0x9],0x0
0x008373c6: jmp    0x140837467
0x008373cb: mov    rcx,rdi
0x008373ce: shr    rcx,1
0x008373d1: movabs rbx,0x7fffffffffffffff
0x008373db: mov    rax,rbx
0x008373de: sub    rax,rcx
0x008373e1: cmp    rdi,rax
0x008373e4: ja     0x1408373f6
0x008373e6: lea    rax,[rcx+rdi*1]
0x008373ea: mov    ebx,0xf
0x008373ef: cmp    rax,rbx
0x008373f2: cmova  rbx,rax
0x008373f6: lea    rcx,[rbx+0x1]
0x008373fa: call   0x140070760
0x008373ff: mov    rsi,rax
0x00837402: mov    QWORD PTR [rbp-0x20],0x9
0x0083740a: mov    QWORD PTR [rbp-0x18],rbx
0x0083740e: movsd  xmm0,QWORD PTR [rip+0xe449da]        # 0x14167bdf0 ; literal="body part"
0x00837416: movsd  QWORD PTR [rax],xmm0
0x0083741a: movzx  ecx,BYTE PTR [rip+0xe449d7]        # 0x14167bdf8 ; literal="t"
0x00837421: mov    BYTE PTR [rax+0x8],cl
0x00837424: mov    BYTE PTR [rax+0x9],0x0
0x00837428: cmp    rdi,0xf
0x0083742c: jbe    0x140837463
0x0083742e: lea    rdx,[rdi+0x1]
0x00837432: mov    rcx,QWORD PTR [rbp-0x30]
0x00837436: mov    rax,rcx
0x00837439: cmp    rdx,0x1000
0x00837440: jb     0x14083745e
0x00837442: add    rdx,0x27
0x00837446: mov    rcx,QWORD PTR [rcx-0x8]
0x0083744a: sub    rax,rcx
0x0083744d: add    rax,0xfffffffffffffff8
0x00837451: cmp    rax,0x1f
0x00837455: jbe    0x14083745e
0x00837457: call   QWORD PTR [rip+0xda9643]        # 0x1415e0aa0
0x0083745d: int3
0x0083745e: call   0x1415345f0
0x00837463: mov    QWORD PTR [rbp-0x30],rsi
0x00837467: mov    r8d,0x2
0x0083746d: lea    rdx,[rip+0xdd8e24]        # 0x141610298 ; literal=" ("
0x00837474: mov    rcx,r12
0x00837477: call   0x14006f9a0
0x0083747c: lea    rdx,[rbp-0x30]
0x00837480: cmp    QWORD PTR [rbp-0x18],0xf
0x00837485: cmova  rdx,QWORD PTR [rbp-0x30]
0x0083748a: mov    r8,QWORD PTR [rbp-0x20]
0x0083748e: mov    rcx,r12
0x00837491: call   0x14006f9a0
0x00837496: mov    r8d,0x1
0x0083749c: lea    rdx,[rip+0xdd8e35]        # 0x1416102d8 ; literal=")"
0x008374a3: mov    rcx,r12
0x008374a6: call   0x14006f9a0
0x008374ab: nop
0x008374ac: mov    rdx,QWORD PTR [rbp-0x18]
0x008374b0: cmp    rdx,0xf
0x008374b4: jbe    0x1408374ea
0x008374b6: inc    rdx
0x008374b9: mov    rcx,QWORD PTR [rbp-0x30]
0x008374bd: mov    rax,rcx
0x008374c0: cmp    rdx,0x1000
0x008374c7: jb     0x1408374e5
0x008374c9: add    rdx,0x27
0x008374cd: mov    rcx,QWORD PTR [rcx-0x8]
0x008374d1: sub    rax,rcx
0x008374d4: add    rax,0xfffffffffffffff8
0x008374d8: cmp    rax,0x1f
0x008374dc: jbe    0x1408374e5
0x008374de: call   QWORD PTR [rip+0xda95bc]        # 0x1415e0aa0
0x008374e4: int3
0x008374e5: call   0x1415345f0
0x008374ea: mov    rcx,QWORD PTR [rbp-0x10]
0x008374ee: xor    rcx,rsp
0x008374f1: call   0x1415345d0
0x008374f6: lea    r11,[rsp+0x50]
0x008374fb: mov    rbx,QWORD PTR [r11+0x40]
0x008374ff: mov    rsi,QWORD PTR [r11+0x48]
0x00837503: mov    rsp,r11
0x00837506: pop    r15
0x00837508: pop    r14
0x0083750a: pop    r12
0x0083750c: pop    rdi
0x0083750d: pop    rbp
0x0083750e: ret
0x0083750f: call   0x140065820
0x00837514: nop
