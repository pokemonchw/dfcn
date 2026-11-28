; reference PE:6aea05a1:02734000; chapter-ordinal; RVA 0x548050..0x548570; code ends 0x548520
0x00548050: mov    QWORD PTR [rsp+0x8],rbx
0x00548055: push   rdi
0x00548056: sub    rsp,0x20
0x0054805a: mov    QWORD PTR [rdx+0x10],0x0
0x00548062: mov    rbx,rdx
0x00548065: cmp    QWORD PTR [rdx+0x18],0xf
0x0054806a: mov    edi,ecx
0x0054806c: mov    rax,rdx
0x0054806f: jbe    0x140548074
0x00548071: mov    rax,QWORD PTR [rdx]
0x00548074: mov    BYTE PTR [rax],0x0
0x00548077: test   r8b,r8b
0x0054807a: je     0x14054816a
0x00548080: test   edi,edi
0x00548082: jns    0x14054809b
0x00548084: neg    edi
0x00548086: lea    rdx,[rip+0x112169f]        # 0x14166972c ; literal="-"
0x0054808d: mov    r8d,0x1
0x00548093: mov    rcx,rbx
0x00548096: call   0x140070f00
0x0054809b: mov    rdx,rbx
0x0054809e: mov    ecx,edi
0x005480a0: call   0x140545610
0x005480a5: mov    eax,0x66666667
0x005480aa: mov    ecx,edi
0x005480ac: imul   edi
0x005480ae: sar    edx,0x2
0x005480b1: mov    eax,edx
0x005480b3: shr    eax,0x1f
0x005480b6: add    edx,eax
0x005480b8: lea    eax,[rdx+rdx*4]
0x005480bb: add    eax,eax
0x005480bd: sub    ecx,eax
0x005480bf: sub    ecx,0x1
0x005480c2: je     0x14054813a
0x005480c4: sub    ecx,0x1
0x005480c7: je     0x14054810a
0x005480c9: cmp    ecx,0x1
0x005480cc: je     0x1405480da
0x005480ce: lea    rdx,[rip+0x10bf88b]        # 0x141607960 ; literal="th"
0x005480d5: jmp    0x140548506
0x005480da: mov    eax,0x51eb851f
0x005480df: imul   edi
0x005480e1: sar    edx,0x5
0x005480e4: mov    eax,edx
0x005480e6: shr    eax,0x1f
0x005480e9: add    edx,eax
0x005480eb: imul   eax,edx,0x64
0x005480ee: lea    rdx,[rip+0x10bf86b]        # 0x141607960 ; literal="th"
0x005480f5: sub    edi,eax
0x005480f7: lea    rax,[rip+0x10bf85e]        # 0x14160795c ; literal="rd"
0x005480fe: cmp    edi,0xd
0x00548101: cmovne rdx,rax
0x00548105: jmp    0x140548506
0x0054810a: mov    eax,0x51eb851f
0x0054810f: imul   edi
0x00548111: sar    edx,0x5
0x00548114: mov    eax,edx
0x00548116: shr    eax,0x1f
0x00548119: add    edx,eax
0x0054811b: imul   eax,edx,0x64
0x0054811e: lea    rdx,[rip+0x10bf83b]        # 0x141607960 ; literal="th"
0x00548125: sub    edi,eax
0x00548127: lea    rax,[rip+0x10bf7ca]        # 0x1416078f8 ; literal="nd"
0x0054812e: cmp    edi,0xc
0x00548131: cmovne rdx,rax
0x00548135: jmp    0x140548506
0x0054813a: mov    eax,0x51eb851f
0x0054813f: imul   edi
0x00548141: sar    edx,0x5
0x00548144: mov    eax,edx
0x00548146: shr    eax,0x1f
0x00548149: add    edx,eax
0x0054814b: imul   eax,edx,0x64
0x0054814e: lea    rdx,[rip+0x10bf80b]        # 0x141607960 ; literal="th"
0x00548155: sub    edi,eax
0x00548157: lea    rax,[rip+0x10bf796]        # 0x1416078f4 ; literal="st"
0x0054815e: cmp    edi,0xb
0x00548161: cmovne rdx,rax
0x00548165: jmp    0x140548506
0x0054816a: test   edi,edi
0x0054816c: jns    0x140548185
0x0054816e: neg    edi
0x00548170: lea    rdx,[rip+0x112a071]        # 0x1416721e8 ; literal="Negative "
0x00548177: mov    r8d,0x9
0x0054817d: mov    rcx,rbx
0x00548180: call   0x140070f00
0x00548185: cmp    edi,0x13
0x00548188: ja     0x140548410
0x0054818e: lea    rdx,[rip+0xffffffffffab7e6b]        # 0x140000000
0x00548195: movsxd rax,edi
0x00548198: mov    ecx,DWORD PTR [rdx+rax*4+0x548520]
0x0054819f: add    rcx,rdx
0x005481a2: jmp    rcx
0x005481a4: mov    r8d,0x6
0x005481aa: lea    rdx,[rip+0x112a043]        # 0x1416721f4 ; literal="Zeroth"
0x005481b1: mov    rcx,rbx
0x005481b4: mov    rbx,QWORD PTR [rsp+0x30]
0x005481b9: add    rsp,0x20
0x005481bd: pop    rdi
0x005481be: jmp    0x140070f00
0x005481c3: mov    r8d,0x5
0x005481c9: lea    rdx,[rip+0x112a008]        # 0x1416721d8 ; literal="First"
0x005481d0: mov    rcx,rbx
0x005481d3: mov    rbx,QWORD PTR [rsp+0x30]
0x005481d8: add    rsp,0x20
0x005481dc: pop    rdi
0x005481dd: jmp    0x140070f00
0x005481e2: mov    r8d,0x6
0x005481e8: lea    rdx,[rip+0x1129ff1]        # 0x1416721e0 ; literal="Second"
0x005481ef: mov    rcx,rbx
0x005481f2: mov    rbx,QWORD PTR [rsp+0x30]
0x005481f7: add    rsp,0x20
0x005481fb: pop    rdi
0x005481fc: jmp    0x140070f00
0x00548201: mov    r8d,0x5
0x00548207: lea    rdx,[rip+0x1129fba]        # 0x1416721c8 ; literal="Third"
0x0054820e: mov    rcx,rbx
0x00548211: mov    rbx,QWORD PTR [rsp+0x30]
0x00548216: add    rsp,0x20
0x0054821a: pop    rdi
0x0054821b: jmp    0x140070f00
0x00548220: mov    r8d,0x6
0x00548226: lea    rdx,[rip+0x1129fa3]        # 0x1416721d0 ; literal="Fourth"
0x0054822d: mov    rcx,rbx
0x00548230: mov    rbx,QWORD PTR [rsp+0x30]
0x00548235: add    rsp,0x20
0x00548239: pop    rdi
0x0054823a: jmp    0x140070f00
0x0054823f: mov    r8d,0x5
0x00548245: lea    rdx,[rip+0x1129f6c]        # 0x1416721b8 ; literal="Fifth"
0x0054824c: mov    rcx,rbx
0x0054824f: mov    rbx,QWORD PTR [rsp+0x30]
0x00548254: add    rsp,0x20
0x00548258: pop    rdi
0x00548259: jmp    0x140070f00
0x0054825e: mov    r8d,0x5
0x00548264: lea    rdx,[rip+0x1129f55]        # 0x1416721c0 ; literal="Sixth"
0x0054826b: mov    rcx,rbx
0x0054826e: mov    rbx,QWORD PTR [rsp+0x30]
0x00548273: add    rsp,0x20
0x00548277: pop    rdi
0x00548278: jmp    0x140070f00
0x0054827d: mov    r8d,0x7
0x00548283: lea    rdx,[rip+0x1129fbe]        # 0x141672248 ; literal="Seventh"
0x0054828a: mov    rcx,rbx
0x0054828d: mov    rbx,QWORD PTR [rsp+0x30]
0x00548292: add    rsp,0x20
0x00548296: pop    rdi
0x00548297: jmp    0x140070f00
0x0054829c: mov    r8d,0x6
0x005482a2: lea    rdx,[rip+0x1129fa7]        # 0x141672250 ; literal="Eighth"
0x005482a9: mov    rcx,rbx
0x005482ac: mov    rbx,QWORD PTR [rsp+0x30]
0x005482b1: add    rsp,0x20
0x005482b5: pop    rdi
0x005482b6: jmp    0x140070f00
0x005482bb: mov    r8d,0x5
0x005482c1: lea    rdx,[rip+0x1129f70]        # 0x141672238 ; literal="Ninth"
0x005482c8: mov    rcx,rbx
0x005482cb: mov    rbx,QWORD PTR [rsp+0x30]
0x005482d0: add    rsp,0x20
0x005482d4: pop    rdi
0x005482d5: jmp    0x140070f00
0x005482da: mov    r8d,0x5
0x005482e0: lea    rdx,[rip+0x1129f59]        # 0x141672240 ; literal="Tenth"
0x005482e7: mov    rcx,rbx
0x005482ea: mov    rbx,QWORD PTR [rsp+0x30]
0x005482ef: add    rsp,0x20
0x005482f3: pop    rdi
0x005482f4: jmp    0x140070f00
0x005482f9: mov    r8d,0x8
0x005482ff: lea    rdx,[rip+0x1129f1a]        # 0x141672220 ; literal="Eleventh"
0x00548306: mov    rcx,rbx
0x00548309: mov    rbx,QWORD PTR [rsp+0x30]
0x0054830e: add    rsp,0x20
0x00548312: pop    rdi
0x00548313: jmp    0x140070f00
0x00548318: mov    r8d,0x7
0x0054831e: lea    rdx,[rip+0x1129f0b]        # 0x141672230 ; literal="Twelfth"
0x00548325: mov    rcx,rbx
0x00548328: mov    rbx,QWORD PTR [rsp+0x30]
0x0054832d: add    rsp,0x20
0x00548331: pop    rdi
0x00548332: jmp    0x140070f00
0x00548337: mov    r8d,0xa
0x0054833d: lea    rdx,[rip+0x1129ebc]        # 0x141672200 ; literal="Thirteenth"
0x00548344: mov    rcx,rbx
0x00548347: mov    rbx,QWORD PTR [rsp+0x30]
0x0054834c: add    rsp,0x20
0x00548350: pop    rdi
0x00548351: jmp    0x140070f00
0x00548356: mov    r8d,0xa
0x0054835c: lea    rdx,[rip+0x1129ead]        # 0x141672210 ; literal="Fourteenth"
0x00548363: mov    rcx,rbx
0x00548366: mov    rbx,QWORD PTR [rsp+0x30]
0x0054836b: add    rsp,0x20
0x0054836f: pop    rdi
0x00548370: jmp    0x140070f00
0x00548375: mov    r8d,0x9
0x0054837b: lea    rdx,[rip+0x1129d5e]        # 0x1416720e0 ; literal="Fifteenth"
0x00548382: mov    rcx,rbx
0x00548385: mov    rbx,QWORD PTR [rsp+0x30]
0x0054838a: add    rsp,0x20
0x0054838e: pop    rdi
0x0054838f: jmp    0x140070f00
0x00548394: mov    r8d,0x9
0x0054839a: lea    rdx,[rip+0x1129d4f]        # 0x1416720f0 ; literal="Sixteenth"
0x005483a1: mov    rcx,rbx
0x005483a4: mov    rbx,QWORD PTR [rsp+0x30]
0x005483a9: add    rsp,0x20
0x005483ad: pop    rdi
0x005483ae: jmp    0x140070f00
0x005483b3: mov    r8d,0xb
0x005483b9: lea    rdx,[rip+0x1129d00]        # 0x1416720c0 ; literal="Seventeenth"
0x005483c0: mov    rcx,rbx
0x005483c3: mov    rbx,QWORD PTR [rsp+0x30]
0x005483c8: add    rsp,0x20
0x005483cc: pop    rdi
0x005483cd: jmp    0x140070f00
0x005483d2: mov    r8d,0xa
0x005483d8: lea    rdx,[rip+0x1129cf1]        # 0x1416720d0 ; literal="Eighteenth"
0x005483df: mov    rcx,rbx
0x005483e2: mov    rbx,QWORD PTR [rsp+0x30]
0x005483e7: add    rsp,0x20
0x005483eb: pop    rdi
0x005483ec: jmp    0x140070f00
0x005483f1: mov    r8d,0xa
0x005483f7: lea    rdx,[rip+0x1129cb2]        # 0x1416720b0 ; literal="Nineteenth"
0x005483fe: mov    rcx,rbx
0x00548401: mov    rbx,QWORD PTR [rsp+0x30]
0x00548406: add    rsp,0x20
0x0054840a: pop    rdi
0x0054840b: jmp    0x140070f00
0x00548410: mov    rdx,rbx
0x00548413: mov    ecx,edi
0x00548415: call   0x140545610
0x0054841a: mov    eax,0x66666667
0x0054841f: mov    ecx,edi
0x00548421: imul   edi
0x00548423: sar    edx,0x2
0x00548426: mov    eax,edx
0x00548428: shr    eax,0x1f
0x0054842b: add    edx,eax
0x0054842d: lea    eax,[rdx+rdx*4]
0x00548430: add    eax,eax
0x00548432: sub    ecx,eax
0x00548434: sub    ecx,0x1
0x00548437: je     0x1405484dd
0x0054843d: mov    r8d,0x2
0x00548443: sub    ecx,0x1
0x00548446: je     0x1405484a0
0x00548448: cmp    ecx,0x1
0x0054844b: mov    rcx,rbx
0x0054844e: je     0x140548466
0x00548450: lea    rdx,[rip+0x10bf509]        # 0x141607960 ; literal="th"
0x00548457: mov    rbx,QWORD PTR [rsp+0x30]
0x0054845c: add    rsp,0x20
0x00548460: pop    rdi
0x00548461: jmp    0x140071040
0x00548466: mov    eax,0x51eb851f
0x0054846b: imul   edi
0x0054846d: sar    edx,0x5
0x00548470: mov    eax,edx
0x00548472: shr    eax,0x1f
0x00548475: add    edx,eax
0x00548477: imul   eax,edx,0x64
0x0054847a: lea    rdx,[rip+0x10bf4df]        # 0x141607960 ; literal="th"
0x00548481: sub    edi,eax
0x00548483: lea    rax,[rip+0x10bf4d2]        # 0x14160795c ; literal="rd"
0x0054848a: cmp    edi,0xd
0x0054848d: cmovne rdx,rax
0x00548491: mov    rbx,QWORD PTR [rsp+0x30]
0x00548496: add    rsp,0x20
0x0054849a: pop    rdi
0x0054849b: jmp    0x140071040
0x005484a0: mov    eax,0x51eb851f
0x005484a5: mov    rcx,rbx
0x005484a8: imul   edi
0x005484aa: sar    edx,0x5
0x005484ad: mov    eax,edx
0x005484af: shr    eax,0x1f
0x005484b2: add    edx,eax
0x005484b4: imul   eax,edx,0x64
0x005484b7: lea    rdx,[rip+0x10bf4a2]        # 0x141607960 ; literal="th"
0x005484be: sub    edi,eax
0x005484c0: lea    rax,[rip+0x10bf431]        # 0x1416078f8 ; literal="nd"
0x005484c7: cmp    edi,0xc
0x005484ca: cmovne rdx,rax
0x005484ce: mov    rbx,QWORD PTR [rsp+0x30]
0x005484d3: add    rsp,0x20
0x005484d7: pop    rdi
0x005484d8: jmp    0x140071040
0x005484dd: mov    eax,0x51eb851f
0x005484e2: imul   edi
0x005484e4: sar    edx,0x5
0x005484e7: mov    eax,edx
0x005484e9: shr    eax,0x1f
0x005484ec: add    edx,eax
0x005484ee: imul   eax,edx,0x64
0x005484f1: lea    rdx,[rip+0x10bf468]        # 0x141607960 ; literal="th"
0x005484f8: sub    edi,eax
0x005484fa: cmp    edi,0xb
0x005484fd: je     0x140548506
0x005484ff: lea    rdx,[rip+0x10bf3ee]        # 0x1416078f4 ; literal="st"
0x00548506: mov    r8d,0x2
0x0054850c: mov    rcx,rbx
0x0054850f: mov    rbx,QWORD PTR [rsp+0x30]
0x00548514: add    rsp,0x20
0x00548518: pop    rdi
0x00548519: jmp    0x140071040
0x0054851e: xchg   ax,ax
