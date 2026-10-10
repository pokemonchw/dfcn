# steam PE:6a70a6d9:02711000; inventory-contained-options-builder; RVA 0x861ec0..0x8625dc
0x00861ec0: mov    QWORD PTR [rsp+0x8],rbx
0x00861ec5: mov    DWORD PTR [rsp+0x20],r9d
0x00861eca: mov    DWORD PTR [rsp+0x18],r8d
0x00861ecf: mov    QWORD PTR [rsp+0x10],rdx
0x00861ed4: push   rbp
0x00861ed5: push   rsi
0x00861ed6: push   rdi
0x00861ed7: push   r12
0x00861ed9: push   r13
0x00861edb: push   r14
0x00861edd: push   r15
0x00861edf: lea    rbp,[rsp-0x7]
0x00861ee4: sub    rsp,0xa0
0x00861eeb: mov    ebx,r9d
0x00861eee: mov    rdi,rdx
0x00861ef1: mov    rsi,rcx
0x00861ef4: test   BYTE PTR [rdx+0x10],0x40
0x00861ef8: je     0x1408625b9
0x00861efe: xor    r13d,r13d
0x00861f01: mov    r15d,r13d
0x00861f04: mov    DWORD PTR [rbp-0x3d],r13d
0x00861f08: mov    rdx,QWORD PTR [rdx+0x38]
0x00861f0c: mov    rax,QWORD PTR [rdi+0x40]
0x00861f10: sub    rax,rdx
0x00861f13: sar    rax,0x3
0x00861f17: test   rax,rax
0x00861f1a: je     0x1408625b9
0x00861f20: mov    r14d,r13d
0x00861f23: mov    QWORD PTR [rbp-0x1],r13
0x00861f27: nop    WORD PTR [rax+rax*1+0x0]
0x00861f30: mov    rcx,QWORD PTR [rdx+r14*1]
0x00861f34: mov    rax,QWORD PTR [rcx]
0x00861f37: call   QWORD PTR [rax+0x10]
0x00861f3a: cmp    eax,0xa
0x00861f3d: jne    0x14086258f
0x00861f43: mov    rax,QWORD PTR [rdi+0x38]
0x00861f47: mov    rcx,QWORD PTR [r14+rax*1]
0x00861f4b: mov    rax,QWORD PTR [rcx]
0x00861f4e: call   QWORD PTR [rax+0x18]
0x00861f51: mov    r12,rax
0x00861f54: test   rax,rax
0x00861f57: je     0x14086258f
0x00861f5d: cmp    ebx,0x3
0x00861f60: jne    0x140862031
0x00861f66: mov    r13,QWORD PTR [rip+0x1b831a3]        # 0x1423e5110
0x00861f6d: movzx  edx,WORD PTR [r13+0xa4]
0x00861f75: mov    rcx,rax
0x00861f78: call   0x141360e50
0x00861f7d: test   eax,eax
0x00861f7f: jne    0x140862548
0x00861f85: mov    rax,QWORD PTR [r12]
0x00861f89: mov    rcx,r12
0x00861f8c: call   QWORD PTR [rax+0x1d8]
0x00861f92: movzx  r15d,ax
0x00861f96: mov    rdx,QWORD PTR [r12]
0x00861f9a: mov    rcx,r12
0x00861f9d: call   QWORD PTR [rdx+0x5a0]
0x00861fa3: movzx  r14d,al
0x00861fa7: mov    rdx,QWORD PTR [r12]
0x00861fab: mov    rcx,r12
0x00861fae: call   QWORD PTR [rdx+0x198]
0x00861fb4: mov    edi,eax
0x00861fb6: mov    rdx,QWORD PTR [r12]
0x00861fba: mov    rcx,r12
0x00861fbd: call   QWORD PTR [rdx+0x8]
0x00861fc0: movzx  ebx,ax
0x00861fc3: mov    rdx,QWORD PTR [r12]
0x00861fc7: mov    rcx,r12
0x00861fca: call   QWORD PTR [rdx]
0x00861fcc: mov    BYTE PTR [rsp+0x48],0x0
0x00861fd1: lea    rcx,[rbp-0x39]
0x00861fd5: mov    QWORD PTR [rsp+0x40],rcx
0x00861fda: lea    rcx,[rbp-0x35]
0x00861fde: mov    QWORD PTR [rsp+0x38],rcx
0x00861fe3: lea    rcx,[rbp-0x41]
0x00861fe7: mov    QWORD PTR [rsp+0x30],rcx
0x00861fec: mov    BYTE PTR [rsp+0x28],r15b
0x00861ff1: mov    BYTE PTR [rsp+0x20],r14b
0x00861ff6: mov    r9d,edi
0x00861ff9: movzx  r8d,bx
0x00861ffd: movzx  edx,ax
0x00862000: mov    rcx,r13
0x00862003: call   0x141394e20
0x00862008: mov    ebx,DWORD PTR [rbp+0x5f]
0x0086200b: xor    r13d,r13d
0x0086200e: test   al,al
0x00862010: je     0x14086254b
0x00862016: movzx  ecx,WORD PTR [rbp-0x41]
0x0086201a: lea    eax,[rcx-0x2]
0x0086201d: cmp    ax,0x3
0x00862021: jbe    0x140862150
0x00862027: cmp    cx,0xa
0x0086202b: jne    0x14086254b
0x00862031: cmp    ebx,0x8
0x00862034: ja     0x14086254b
0x0086203a: movsxd rax,ebx
0x0086203d: lea    rdx,[rip+0xffffffffff79dfbc]        # 0x140000000
0x00862044: mov    ecx,DWORD PTR [rdx+rax*4+0x8625dc]
0x0086204b: add    rcx,rdx
0x0086204e: jmp    rcx
0x00862050: mov    ecx,0x28
0x00862055: call   0x141539690
0x0086205a: mov    QWORD PTR [rbp-0x49],rax
0x0086205e: mov    DWORD PTR [rax+0xc],0xffffffff
0x00862065: lea    rcx,[rip+0xe57c8c]        # 0x1416b9cf8
0x0086206c: mov    QWORD PTR [rax],rcx
0x0086206f: mov    DWORD PTR [rax+0x20],r13d
0x00862073: mov    QWORD PTR [rax+0x10],r12
0x00862077: mov    QWORD PTR [rax+0x18],r13
0x0086207b: mov    r14d,DWORD PTR [rbp+0x57]
0x0086207f: mov    DWORD PTR [rax+0x8],r14d
0x00862083: lea    rcx,[rsi+0x30]
0x00862087: mov    QWORD PTR [rbp-0x49],rax
0x0086208b: mov    rdx,QWORD PTR [rsi+0x38]
0x0086208f: cmp    rdx,QWORD PTR [rsi+0x40]
0x00862093: je     0x1408620a2
0x00862095: mov    QWORD PTR [rdx],rax
0x00862098: add    QWORD PTR [rsi+0x38],0x8
0x0086209d: jmp    0x14086254b
0x008620a2: lea    r8,[rbp-0x49]
0x008620a6: call   0x1400bad30
0x008620ab: jmp    0x14086254b
0x008620b0: mov    ecx,0x20
0x008620b5: call   0x141539690
0x008620ba: mov    QWORD PTR [rbp-0x49],rax
0x008620be: mov    DWORD PTR [rax+0xc],0xffffffff
0x008620c5: lea    rcx,[rip+0xe5532c]        # 0x1416b73f8
0x008620cc: mov    QWORD PTR [rax],rcx
0x008620cf: mov    QWORD PTR [rax+0x10],r12
0x008620d3: mov    QWORD PTR [rax+0x18],r13
0x008620d7: mov    r14d,DWORD PTR [rbp+0x57]
0x008620db: mov    DWORD PTR [rax+0x8],r14d
0x008620df: lea    rcx,[rsi+0x48]
0x008620e3: mov    QWORD PTR [rbp-0x49],rax
0x008620e7: mov    rdx,QWORD PTR [rsi+0x50]
0x008620eb: cmp    rdx,QWORD PTR [rsi+0x58]
0x008620ef: je     0x1408620a2
0x008620f1: mov    QWORD PTR [rdx],rax
0x008620f4: add    QWORD PTR [rsi+0x50],0x8
0x008620f9: jmp    0x14086254b
0x008620fe: mov    ecx,0x20
0x00862103: call   0x141539690
0x00862108: mov    QWORD PTR [rbp-0x49],rax
0x0086210c: mov    DWORD PTR [rax+0xc],0xffffffff
0x00862113: lea    rcx,[rip+0xe5b856]        # 0x1416bd970
0x0086211a: mov    QWORD PTR [rax],rcx
0x0086211d: mov    QWORD PTR [rax+0x10],r12
0x00862121: mov    QWORD PTR [rax+0x18],r13
0x00862125: mov    r14d,DWORD PTR [rbp+0x57]
0x00862129: mov    DWORD PTR [rax+0x8],r14d
0x0086212d: lea    rcx,[rsi+0x60]
0x00862131: mov    QWORD PTR [rbp-0x49],rax
0x00862135: mov    rdx,QWORD PTR [rsi+0x68]
0x00862139: cmp    rdx,QWORD PTR [rsi+0x70]
0x0086213d: je     0x1408620a2
0x00862143: mov    QWORD PTR [rdx],rax
0x00862146: add    QWORD PTR [rsi+0x68],0x8
0x0086214b: jmp    0x14086254b
0x00862150: mov    ecx,0x20
0x00862155: call   0x141539690
0x0086215a: mov    QWORD PTR [rbp-0x49],rax
0x0086215e: mov    DWORD PTR [rax+0xc],0xffffffff
0x00862165: lea    rcx,[rip+0xe55d84]        # 0x1416b7ef0
0x0086216c: mov    QWORD PTR [rax],rcx
0x0086216f: mov    QWORD PTR [rax+0x10],r12
0x00862173: mov    QWORD PTR [rax+0x18],r13
0x00862177: mov    r14d,DWORD PTR [rbp+0x57]
0x0086217b: mov    DWORD PTR [rax+0x8],r14d
0x0086217f: lea    rcx,[rsi+0x78]
0x00862183: mov    QWORD PTR [rbp-0x49],rax
0x00862187: mov    rdx,QWORD PTR [rsi+0x80]
0x0086218e: cmp    rdx,QWORD PTR [rsi+0x88]
0x00862195: je     0x1408620a2
0x0086219b: mov    QWORD PTR [rdx],rax
0x0086219e: add    QWORD PTR [rsi+0x80],0x8
0x008621a6: jmp    0x14086254b
0x008621ab: mov    ecx,0x20
0x008621b0: call   0x141539690
0x008621b5: mov    QWORD PTR [rbp-0x49],rax
0x008621b9: mov    DWORD PTR [rax+0xc],0xffffffff
0x008621c0: lea    rcx,[rip+0xe56a71]        # 0x1416b8c38
0x008621c7: mov    QWORD PTR [rax],rcx
0x008621ca: mov    QWORD PTR [rax+0x10],r12
0x008621ce: mov    QWORD PTR [rax+0x18],r13
0x008621d2: mov    r14d,DWORD PTR [rbp+0x57]
0x008621d6: mov    DWORD PTR [rax+0x8],r14d
0x008621da: lea    rcx,[rsi+0x90]
0x008621e1: mov    QWORD PTR [rbp-0x49],rax
0x008621e5: mov    rdx,QWORD PTR [rsi+0x98]
0x008621ec: cmp    rdx,QWORD PTR [rsi+0xa0]
0x008621f3: je     0x1408620a2
0x008621f9: mov    QWORD PTR [rdx],rax
0x008621fc: add    QWORD PTR [rsi+0x98],0x8
0x00862204: jmp    0x14086254b
0x00862209: xorps  xmm0,xmm0
0x0086220c: movdqu XMMWORD PTR [rbp-0x19],xmm0
0x00862211: mov    QWORD PTR [rbp-0x9],r13
0x00862215: mov    r8,r12
0x00862218: lea    rdx,[rbp-0x19]
0x0086221c: mov    rcx,rsi
0x0086221f: call   0x140899370
0x00862224: mov    rax,QWORD PTR [rbp-0x11]
0x00862228: mov    rcx,QWORD PTR [rbp-0x19]
0x0086222c: sub    rax,rcx
0x0086222f: sar    rax,0x3
0x00862233: test   rax,rax
0x00862236: je     0x1408622d6
0x0086223c: mov    ecx,0x38
0x00862241: call   0x141539690
0x00862246: mov    rbx,rax
0x00862249: mov    QWORD PTR [rbp-0x49],rax
0x0086224d: mov    DWORD PTR [rax+0x8],r13d
0x00862251: mov    DWORD PTR [rax+0xc],0xffffffff
0x00862258: lea    rax,[rip+0xe58311]        # 0x1416ba570
0x0086225f: mov    QWORD PTR [rbx],rax
0x00862262: lea    rcx,[rbx+0x20]
0x00862266: mov    QWORD PTR [rcx],r13
0x00862269: mov    QWORD PTR [rcx+0x8],r13
0x0086226d: mov    QWORD PTR [rcx+0x10],r13
0x00862271: mov    QWORD PTR [rbx+0x10],r12
0x00862275: mov    QWORD PTR [rbx+0x18],r13
0x00862279: mov    r14d,DWORD PTR [rbp+0x57]
0x0086227d: mov    DWORD PTR [rbx+0x8],r14d
0x00862281: lea    rax,[rbp-0x19]
0x00862285: cmp    rcx,rax
0x00862288: je     0x14086229e
0x0086228a: mov    r8,QWORD PTR [rbp-0x11]
0x0086228e: mov    rdx,QWORD PTR [rbp-0x19]
0x00862292: sub    r8,rdx
0x00862295: sar    r8,0x3
0x00862299: call   0x1400e16b0
0x0086229e: lea    rcx,[rsi+0xa8]
0x008622a5: mov    QWORD PTR [rbp-0x49],rbx
0x008622a9: mov    rdx,QWORD PTR [rsi+0xb0]
0x008622b0: cmp    rdx,QWORD PTR [rsi+0xb8]
0x008622b7: je     0x1408622c6
0x008622b9: mov    QWORD PTR [rdx],rbx
0x008622bc: add    QWORD PTR [rsi+0xb0],0x8
0x008622c4: jmp    0x1408622cf
0x008622c6: lea    r8,[rbp-0x49]
0x008622ca: call   0x1400bad30
0x008622cf: mov    ebx,DWORD PTR [rbp+0x5f]
0x008622d2: mov    rcx,QWORD PTR [rbp-0x19]
0x008622d6: test   rcx,rcx
0x008622d9: je     0x14086254b
0x008622df: mov    rdx,QWORD PTR [rbp-0x9]
0x008622e3: sub    rdx,rcx
0x008622e6: and    rdx,0xfffffffffffffff8
0x008622ea: mov    rax,rcx
0x008622ed: cmp    rdx,0x1000
0x008622f4: jb     0x14086230f
0x008622f6: add    rdx,0x27
0x008622fa: mov    rcx,QWORD PTR [rcx-0x8]
0x008622fe: sub    rax,rcx
0x00862301: add    rax,0xfffffffffffffff8
0x00862305: cmp    rax,0x1f
0x00862309: ja     0x1408625d4
0x0086230f: call   0x141539680
0x00862314: jmp    0x14086254b
0x00862319: mov    ecx,0x20
0x0086231e: call   0x141539690
0x00862323: mov    QWORD PTR [rbp-0x49],rax
0x00862327: mov    DWORD PTR [rax+0xc],0xffffffff
0x0086232e: lea    rcx,[rip+0xe5abd3]        # 0x1416bcf08
0x00862335: mov    QWORD PTR [rax],rcx
0x00862338: mov    QWORD PTR [rax+0x10],r12
0x0086233c: mov    QWORD PTR [rax+0x18],r13
0x00862340: mov    r14d,DWORD PTR [rbp+0x57]
0x00862344: mov    DWORD PTR [rax+0x8],r14d
0x00862348: lea    rcx,[rsi+0xc0]
0x0086234f: mov    QWORD PTR [rbp-0x49],rax
0x00862353: mov    rdx,QWORD PTR [rsi+0xc8]
0x0086235a: cmp    rdx,QWORD PTR [rsi+0xd0]
0x00862361: je     0x1408620a2
0x00862367: mov    QWORD PTR [rdx],rax
0x0086236a: add    QWORD PTR [rsi+0xc8],0x8
0x00862372: jmp    0x14086254b
0x00862377: xorps  xmm0,xmm0
0x0086237a: movdqu XMMWORD PTR [rbp-0x31],xmm0
0x0086237f: mov    QWORD PTR [rbp-0x21],r13
0x00862383: movzx  eax,WORD PTR [rbp+0x7f]
0x00862387: mov    WORD PTR [rsp+0x40],ax
0x0086238c: movzx  eax,WORD PTR [rbp+0x77]
0x00862390: mov    WORD PTR [rsp+0x38],ax
0x00862395: movzx  eax,WORD PTR [rbp+0x6f]
0x00862399: mov    WORD PTR [rsp+0x30],ax
0x0086239e: movzx  r15d,BYTE PTR [rbp+0x67]
0x008623a3: mov    BYTE PTR [rsp+0x28],r15b
0x008623a8: mov    r14d,DWORD PTR [rbp+0x57]
0x008623ac: mov    DWORD PTR [rsp+0x20],r14d
0x008623b1: xor    r9d,r9d
0x008623b4: mov    r8,r12
0x008623b7: lea    rdx,[rbp-0x31]
0x008623bb: mov    rcx,rsi
0x008623be: call   0x140897820
0x008623c3: mov    rdi,QWORD PTR [rbp-0x29]
0x008623c7: mov    rax,rdi
0x008623ca: mov    rbx,QWORD PTR [rbp-0x31]
0x008623ce: sub    rax,rbx
0x008623d1: sar    rax,0x3
0x008623d5: test   rax,rax
0x008623d8: je     0x1408624df
0x008623de: test   r15b,r15b
0x008623e1: je     0x14086244f
0x008623e3: mov    rdx,QWORD PTR [rip+0x1045f96]        # 0x1418a8380
0x008623ea: nop    WORD PTR [rax+rax*1+0x0]
0x008623f0: cmp    rbx,rdi
0x008623f3: jae    0x140862438
0x008623f5: cmp    rdx,QWORD PTR [rip+0x1045f8c]        # 0x1418a8388
0x008623fc: je     0x14086241c
0x008623fe: mov    rax,QWORD PTR [rbx]
0x00862401: mov    QWORD PTR [rdx],rax
0x00862404: mov    rdx,QWORD PTR [rip+0x1045f75]        # 0x1418a8380
0x0086240b: add    rdx,0x8
0x0086240f: mov    QWORD PTR [rip+0x1045f6a],rdx        # 0x1418a8380
0x00862416: add    rbx,0x8
0x0086241a: jmp    0x1408623f0
0x0086241c: mov    r8,rbx
0x0086241f: lea    rcx,[rip+0x1045f52]        # 0x1418a8378
0x00862426: call   0x1400bad30
0x0086242b: mov    rdx,QWORD PTR [rip+0x1045f4e]        # 0x1418a8380
0x00862432: add    rbx,0x8
0x00862436: jmp    0x1408623f0
0x00862438: mov    rax,QWORD PTR [rbp-0x31]
0x0086243c: cmp    rax,QWORD PTR [rbp-0x29]
0x00862440: je     0x1408624df
0x00862446: mov    QWORD PTR [rbp-0x29],rax
0x0086244a: jmp    0x1408624df
0x0086244f: mov    ecx,0x38
0x00862454: call   0x141539690
0x00862459: mov    rbx,rax
0x0086245c: mov    QWORD PTR [rbp-0x49],rax
0x00862460: mov    DWORD PTR [rax+0x8],r13d
0x00862464: mov    DWORD PTR [rax+0xc],0xffffffff
0x0086246b: lea    rax,[rip+0xe59f06]        # 0x1416bc378
0x00862472: mov    QWORD PTR [rbx],rax
0x00862475: lea    rcx,[rbx+0x20]
0x00862479: mov    QWORD PTR [rcx],r13
0x0086247c: mov    QWORD PTR [rcx+0x8],r13
0x00862480: mov    QWORD PTR [rcx+0x10],r13
0x00862484: mov    QWORD PTR [rbx+0x10],r12
0x00862488: mov    QWORD PTR [rbx+0x18],r13
0x0086248c: mov    DWORD PTR [rbx+0x8],r14d
0x00862490: lea    rax,[rbp-0x31]
0x00862494: cmp    rcx,rax
0x00862497: je     0x1408624ad
0x00862499: mov    r8,QWORD PTR [rbp-0x29]
0x0086249d: mov    rdx,QWORD PTR [rbp-0x31]
0x008624a1: sub    r8,rdx
0x008624a4: sar    r8,0x3
0x008624a8: call   0x1400e16b0
0x008624ad: lea    rcx,[rsi+0xd8]
0x008624b4: mov    QWORD PTR [rbp-0x49],rbx
0x008624b8: mov    rdx,QWORD PTR [rsi+0xe0]
0x008624bf: cmp    rdx,QWORD PTR [rsi+0xe8]
0x008624c6: je     0x1408624d5
0x008624c8: mov    QWORD PTR [rdx],rbx
0x008624cb: add    QWORD PTR [rsi+0xe0],0x8
0x008624d3: jmp    0x1408624df
0x008624d5: lea    r8,[rbp-0x49]
0x008624d9: call   0x1400bad30
0x008624de: nop
0x008624df: lea    rcx,[rbp-0x31]
0x008624e3: call   0x140066b70
0x008624e8: mov    ebx,DWORD PTR [rbp+0x5f]
0x008624eb: jmp    0x14086254b
0x008624ed: mov    ecx,0x20
0x008624f2: call   0x141539690
0x008624f7: mov    QWORD PTR [rbp-0x49],rax
0x008624fb: mov    DWORD PTR [rax+0xc],0xffffffff
0x00862502: lea    rcx,[rip+0xe57cef]        # 0x1416ba1f8
0x00862509: mov    QWORD PTR [rax],rcx
0x0086250c: mov    QWORD PTR [rax+0x10],r12
0x00862510: mov    QWORD PTR [rax+0x18],r13
0x00862514: mov    r14d,DWORD PTR [rbp+0x57]
0x00862518: mov    DWORD PTR [rax+0x8],r14d
0x0086251c: lea    rcx,[rsi+0xf0]
0x00862523: mov    QWORD PTR [rbp-0x49],rax
0x00862527: mov    rdx,QWORD PTR [rsi+0xf8]
0x0086252e: cmp    rdx,QWORD PTR [rsi+0x100]
0x00862535: je     0x1408620a2
0x0086253b: mov    QWORD PTR [rdx],rax
0x0086253e: add    QWORD PTR [rsi+0xf8],0x8
0x00862546: jmp    0x14086254b
0x00862548: xor    r13d,r13d
0x0086254b: mov    r8d,DWORD PTR [rbp+0x57]
0x0086254f: inc    r8d
0x00862552: movzx  eax,WORD PTR [rbp+0x7f]
0x00862556: mov    WORD PTR [rsp+0x38],ax
0x0086255b: movzx  eax,WORD PTR [rbp+0x77]
0x0086255f: mov    WORD PTR [rsp+0x30],ax
0x00862564: movzx  eax,WORD PTR [rbp+0x6f]
0x00862568: mov    WORD PTR [rsp+0x28],ax
0x0086256d: movzx  eax,BYTE PTR [rbp+0x67]
0x00862571: mov    BYTE PTR [rsp+0x20],al
0x00862575: mov    r9d,ebx
0x00862578: mov    rdx,r12
0x0086257b: mov    rcx,rsi
0x0086257e: call   0x140861ec0
0x00862583: mov    rdi,QWORD PTR [rbp+0x4f]
0x00862587: mov    r14,QWORD PTR [rbp-0x1]
0x0086258b: mov    r15d,DWORD PTR [rbp-0x3d]
0x0086258f: inc    r15d
0x00862592: mov    DWORD PTR [rbp-0x3d],r15d
0x00862596: add    r14,0x8
0x0086259a: mov    QWORD PTR [rbp-0x1],r14
0x0086259e: mov    rdx,QWORD PTR [rdi+0x38]
0x008625a2: mov    rcx,QWORD PTR [rdi+0x40]
0x008625a6: sub    rcx,rdx
0x008625a9: sar    rcx,0x3
0x008625ad: movsxd rax,r15d
0x008625b0: cmp    rax,rcx
0x008625b3: jb     0x140861f30
0x008625b9: mov    rbx,QWORD PTR [rsp+0xe0]
0x008625c1: add    rsp,0xa0
0x008625c8: pop    r15
0x008625ca: pop    r14
0x008625cc: pop    r13
0x008625ce: pop    r12
0x008625d0: pop    rdi
0x008625d1: pop    rsi
0x008625d2: pop    rbp
0x008625d3: ret
0x008625d4: call   QWORD PTR [rip+0xd8354e]        # 0x1415e5b28
0x008625da: int3
0x008625db: nop
