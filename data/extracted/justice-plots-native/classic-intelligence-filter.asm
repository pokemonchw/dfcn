# classic; PE:6a70b91c:0270a000; intelligence-filter; RVA 0x476ef0..0x4775db; PE disassembly
0x00476ef0: mov    QWORD PTR [rsp+0x10],rbx
0x00476ef5: mov    QWORD PTR [rsp+0x18],rsi
0x00476efa: mov    QWORD PTR [rsp+0x20],rdi
0x00476eff: push   rbp
0x00476f00: push   r12
0x00476f02: push   r13
0x00476f04: push   r14
0x00476f06: push   r15
0x00476f08: lea    rbp,[rsp-0x37]
0x00476f0d: sub    rsp,0xf0
0x00476f14: mov    rax,QWORD PTR [rip+0x141f125]        # 0x141896040
0x00476f1b: xor    rax,rsp
0x00476f1e: mov    QWORD PTR [rbp+0x27],rax
0x00476f22: mov    r15,rcx
0x00476f25: mov    QWORD PTR [rsp+0x38],rcx
0x00476f2a: lea    rdi,[rcx+0x298]
0x00476f31: xorps  xmm0,xmm0
0x00476f34: movups XMMWORD PTR [rbp-0x79],xmm0
0x00476f38: xor    r12d,r12d
0x00476f3b: mov    QWORD PTR [rbp-0x69],r12
0x00476f3f: mov    QWORD PTR [rbp-0x61],r12
0x00476f43: mov    rsi,QWORD PTR [rdi+0x10]
0x00476f47: cmp    QWORD PTR [rdi+0x18],0xf
0x00476f4c: jbe    0x140476f51
0x00476f4e: mov    rdi,QWORD PTR [rdi]
0x00476f51: movabs rbx,0x7fffffffffffffff
0x00476f5b: cmp    rsi,rbx
0x00476f5e: ja     0x1404775d5
0x00476f64: cmp    rsi,0xf
0x00476f68: ja     0x140476f7f
0x00476f6a: mov    QWORD PTR [rbp-0x69],rsi
0x00476f6e: mov    QWORD PTR [rbp-0x61],0xf
0x00476f76: movups xmm0,XMMWORD PTR [rdi]
0x00476f79: movups XMMWORD PTR [rbp-0x79],xmm0
0x00476f7d: jmp    0x140476fbf
0x00476f7f: mov    rax,rsi
0x00476f82: or     rax,0xf
0x00476f86: cmp    rax,rbx
0x00476f89: ja     0x140476f9a
0x00476f8b: mov    rbx,rax
0x00476f8e: mov    ecx,0x16
0x00476f93: cmp    rax,rcx
0x00476f96: cmovb  rbx,rcx
0x00476f9a: lea    rcx,[rbx+0x1]
0x00476f9e: call   0x140070760
0x00476fa3: mov    QWORD PTR [rbp-0x79],rax
0x00476fa7: mov    QWORD PTR [rbp-0x69],rsi
0x00476fab: mov    QWORD PTR [rbp-0x61],rbx
0x00476faf: lea    r8,[rsi+0x1]
0x00476fb3: mov    rdx,rdi
0x00476fb6: mov    rcx,rax
0x00476fb9: call   0x1415359e8
0x00476fbe: nop
0x00476fbf: lea    rcx,[rbp-0x79]
0x00476fc3: call   0x14052a900
0x00476fc8: mov    eax,DWORD PTR [r15+0x290]
0x00476fcf: sub    eax,0x1
0x00476fd2: je     0x140477405
0x00476fd8: sub    eax,0x1
0x00476fdb: je     0x140477242
0x00476fe1: cmp    eax,0x1
0x00476fe4: jne    0x14047759f
0x00476fea: lea    r8,[r15+0x300]
0x00476ff1: lea    rbx,[r15+0x348]
0x00476ff8: mov    QWORD PTR [rsp+0x20],rbx
0x00476ffd: cmp    rbx,r8
0x00477000: je     0x140477018
0x00477002: mov    rdx,QWORD PTR [r8]
0x00477005: mov    r8,QWORD PTR [r8+0x8]
0x00477009: sub    r8,rdx
0x0047700c: sar    r8,0x3
0x00477010: mov    rcx,rbx
0x00477013: call   0x1400e1640
0x00477018: mov    rdi,QWORD PTR [rbp-0x69]
0x0047701c: test   rdi,rdi
0x0047701f: je     0x1404771ee
0x00477025: mov    r13,QWORD PTR [rbx+0x8]
0x00477029: sub    r13,QWORD PTR [rbx]
0x0047702c: sar    r13,0x3
0x00477030: sub    r13d,0x1
0x00477034: js     0x1404771ee
0x0047703a: movsxd rax,r13d
0x0047703d: lea    rsi,[rax*8+0x0]
0x00477045: mov    QWORD PTR [rsp+0x30],rsi
0x0047704a: mov    QWORD PTR [rsp+0x28],rsi
0x0047704f: nop
0x00477050: mov    rdx,QWORD PTR [rbx]
0x00477053: mov    rdx,QWORD PTR [rsi+rdx*1]
0x00477057: lea    rcx,[rbp-0x39]
0x0047705b: call   0x14006f560
0x00477060: nop
0x00477061: lea    rcx,[rbp-0x39]
0x00477065: call   0x14052a900
0x0047706a: mov    rcx,QWORD PTR [rbx]
0x0047706d: mov    rdx,QWORD PTR [rsi+rcx*1]
0x00477071: add    rdx,0x70
0x00477075: lea    rcx,[rbp-0x59]
0x00477079: call   0x14006f560
0x0047707e: lea    rcx,[rbp-0x59]
0x00477082: call   0x14052a900
0x00477087: lea    rsi,[rbp-0x79]
0x0047708b: cmp    QWORD PTR [rbp-0x61],0xf
0x00477090: cmova  rsi,QWORD PTR [rbp-0x79]
0x00477095: lea    r12,[rbp-0x39]
0x00477099: cmp    QWORD PTR [rbp-0x21],0xf
0x0047709e: cmova  r12,QWORD PTR [rbp-0x39]
0x004770a3: mov    rax,QWORD PTR [rbp-0x29]
0x004770a7: cmp    rdi,rax
0x004770aa: ja     0x140477109
0x004770ac: sub    rax,rdi
0x004770af: lea    r14,[rax+r12*1]
0x004770b3: movsx  r15d,BYTE PTR [rsi]
0x004770b7: lea    r8,[r14+0x1]
0x004770bb: sub    r8,r12
0x004770be: mov    edx,r15d
0x004770c1: mov    rcx,r12
0x004770c4: call   0x1415359e2
0x004770c9: mov    rbx,rax
0x004770cc: test   rax,rax
0x004770cf: je     0x140477104
0x004770d1: mov    r8,rdi
0x004770d4: mov    rdx,rsi
0x004770d7: mov    rcx,rbx
0x004770da: call   0x141535d84
0x004770df: test   eax,eax
0x004770e1: je     0x140477218
0x004770e7: inc    rbx
0x004770ea: lea    r8,[r14+0x1]
0x004770ee: sub    r8,rbx
0x004770f1: mov    edx,r15d
0x004770f4: mov    rcx,rbx
0x004770f7: call   0x1415359e2
0x004770fc: mov    rbx,rax
0x004770ff: test   rax,rax
0x00477102: jne    0x1404770d1
0x00477104: mov    rbx,QWORD PTR [rsp+0x20]
0x00477109: lea    rsi,[rbp-0x79]
0x0047710d: cmp    QWORD PTR [rbp-0x61],0xf
0x00477112: cmova  rsi,QWORD PTR [rbp-0x79]
0x00477117: lea    r14,[rbp-0x59]
0x0047711b: cmp    QWORD PTR [rbp-0x41],0xf
0x00477120: cmova  r14,QWORD PTR [rbp-0x59]
0x00477125: mov    rax,QWORD PTR [rbp-0x49]
0x00477129: cmp    rdi,rax
0x0047712c: ja     0x140477198
0x0047712e: sub    rax,rdi
0x00477131: lea    r15,[rax+r14*1]
0x00477135: movsx  r12d,BYTE PTR [rsi]
0x00477139: lea    r8,[r15+0x1]
0x0047713d: sub    r8,r14
0x00477140: mov    edx,r12d
0x00477143: mov    rcx,r14
0x00477146: call   0x1415359e2
0x0047714b: mov    rbx,rax
0x0047714e: test   rax,rax
0x00477151: je     0x140477193
0x00477153: nop    DWORD PTR [rax+0x0]
0x00477157: nop    WORD PTR [rax+rax*1+0x0]
0x00477160: mov    r8,rdi
0x00477163: mov    rdx,rsi
0x00477166: mov    rcx,rbx
0x00477169: call   0x141535d84
0x0047716e: test   eax,eax
0x00477170: je     0x14047722b
0x00477176: inc    rbx
0x00477179: lea    r8,[r15+0x1]
0x0047717d: sub    r8,rbx
0x00477180: mov    edx,r12d
0x00477183: mov    rcx,rbx
0x00477186: call   0x1415359e2
0x0047718b: mov    rbx,rax
0x0047718e: test   rax,rax
0x00477191: jne    0x140477160
0x00477193: mov    rbx,QWORD PTR [rsp+0x20]
0x00477198: mov    rcx,QWORD PTR [rsp+0x28]
0x0047719d: add    rcx,QWORD PTR [rbx]
0x004771a0: mov    r8,QWORD PTR [rbx+0x8]
0x004771a4: lea    rdx,[rcx+0x8]
0x004771a8: sub    r8,rdx
0x004771ab: call   0x141535d8a
0x004771b0: add    QWORD PTR [rbx+0x8],0xfffffffffffffff8
0x004771b5: lea    rcx,[rbp-0x59]
0x004771b9: call   0x14006f7e0
0x004771be: nop
0x004771bf: lea    rcx,[rbp-0x39]
0x004771c3: call   0x14006f7e0
0x004771c8: sub    QWORD PTR [rsp+0x28],0x8
0x004771ce: mov    rsi,QWORD PTR [rsp+0x30]
0x004771d3: sub    rsi,0x8
0x004771d7: mov    QWORD PTR [rsp+0x30],rsi
0x004771dc: sub    r13d,0x1
0x004771e0: jns    0x140477050
0x004771e6: mov    r15,QWORD PTR [rsp+0x38]
0x004771eb: xor    r12d,r12d
0x004771ee: mov    DWORD PTR [r15+0x294],r12d
0x004771f5: mov    rax,QWORD PTR [rbx+0x8]
0x004771f9: sub    rax,QWORD PTR [rbx]
0x004771fc: test   rax,0xfffffffffffffff8
0x00477202: jne    0x14047759f
0x00477208: mov    DWORD PTR [r15+0x294],0xffffffff
0x00477213: jmp    0x14047759f
0x00477218: sub    rbx,r12
0x0047721b: cmp    rbx,0xffffffffffffffff
0x0047721f: mov    rbx,QWORD PTR [rsp+0x20]
0x00477224: jne    0x1404771b5
0x00477226: jmp    0x140477109
0x0047722b: sub    rbx,r14
0x0047722e: cmp    rbx,0xffffffffffffffff
0x00477232: mov    rbx,QWORD PTR [rsp+0x20]
0x00477237: jne    0x1404771b5
0x0047723d: jmp    0x140477198
0x00477242: lea    r8,[r15+0x2e8]
0x00477249: lea    r13,[r15+0x330]
0x00477250: cmp    r13,r8
0x00477253: je     0x14047726b
0x00477255: mov    rdx,QWORD PTR [r8]
0x00477258: mov    r8,QWORD PTR [r8+0x8]
0x0047725c: sub    r8,rdx
0x0047725f: sar    r8,0x3
0x00477263: mov    rcx,r13
0x00477266: call   0x1400e1640
0x0047726b: mov    r14,QWORD PTR [rbp-0x69]
0x0047726f: test   r14,r14
0x00477272: je     0x1404773a8
0x00477278: mov    rsi,QWORD PTR [r13+0x8]
0x0047727c: sub    rsi,QWORD PTR [r13+0x0]
0x00477280: sar    rsi,0x3
0x00477284: sub    esi,0x1
0x00477287: js     0x1404773a8
0x0047728d: movsxd rax,esi
0x00477290: lea    rcx,[rax*8+0x0]
0x00477298: mov    QWORD PTR [rsp+0x30],rcx
0x0047729d: mov    QWORD PTR [rsp+0x28],rcx
0x004772a2: nop    DWORD PTR [rax+0x0]
0x004772a6: data16 nop WORD PTR [rax+rax*1+0x0]
0x004772b0: mov    rax,QWORD PTR [r13+0x0]
0x004772b4: mov    rdx,QWORD PTR [rax+rcx*1]
0x004772b8: add    rdx,0x18
0x004772bc: lea    rcx,[rbp-0x19]
0x004772c0: call   0x14006f560
0x004772c5: lea    rcx,[rbp-0x19]
0x004772c9: call   0x14052a900
0x004772ce: lea    rdi,[rbp-0x79]
0x004772d2: cmp    QWORD PTR [rbp-0x61],0xf
0x004772d7: cmova  rdi,QWORD PTR [rbp-0x79]
0x004772dc: lea    rax,[rbp-0x19]
0x004772e0: cmp    QWORD PTR [rbp-0x1],0xf
0x004772e5: cmova  rax,QWORD PTR [rbp-0x19]
0x004772ea: mov    QWORD PTR [rsp+0x20],rax
0x004772ef: mov    rcx,QWORD PTR [rbp-0x9]
0x004772f3: cmp    r14,rcx
0x004772f6: ja     0x14047735c
0x004772f8: sub    rcx,r14
0x004772fb: lea    r15,[rcx+rax*1]
0x004772ff: movsx  r12d,BYTE PTR [rdi]
0x00477303: lea    r8,[r15+0x1]
0x00477307: sub    r8,rax
0x0047730a: mov    edx,r12d
0x0047730d: mov    rcx,rax
0x00477310: call   0x1415359e2
0x00477315: mov    rbx,rax
0x00477318: test   rax,rax
0x0047731b: je     0x14047735c
0x0047731d: nop    DWORD PTR [rax]
0x00477320: mov    r8,r14
0x00477323: mov    rdx,rdi
0x00477326: mov    rcx,rbx
0x00477329: call   0x141535d84
0x0047732e: test   eax,eax
0x00477330: je     0x140477351
0x00477332: inc    rbx
0x00477335: lea    r8,[r15+0x1]
0x00477339: sub    r8,rbx
0x0047733c: mov    edx,r12d
0x0047733f: mov    rcx,rbx
0x00477342: call   0x1415359e2
0x00477347: mov    rbx,rax
0x0047734a: test   rax,rax
0x0047734d: jne    0x140477320
0x0047734f: jmp    0x14047735c
0x00477351: sub    rbx,QWORD PTR [rsp+0x20]
0x00477356: cmp    rbx,0xffffffffffffffff
0x0047735a: jne    0x14047737a
0x0047735c: mov    rcx,QWORD PTR [rsp+0x28]
0x00477361: add    rcx,QWORD PTR [r13+0x0]
0x00477365: mov    r8,QWORD PTR [r13+0x8]
0x00477369: lea    rdx,[rcx+0x8]
0x0047736d: sub    r8,rdx
0x00477370: call   0x141535d8a
0x00477375: add    QWORD PTR [r13+0x8],0xfffffffffffffff8
0x0047737a: lea    rcx,[rbp-0x19]
0x0047737e: call   0x14006f7e0
0x00477383: sub    QWORD PTR [rsp+0x28],0x8
0x00477389: mov    rcx,QWORD PTR [rsp+0x30]
0x0047738e: sub    rcx,0x8
0x00477392: mov    QWORD PTR [rsp+0x30],rcx
0x00477397: sub    esi,0x1
0x0047739a: jns    0x1404772b0
0x004773a0: mov    r15,QWORD PTR [rsp+0x38]
0x004773a5: xor    r12d,r12d
0x004773a8: mov    DWORD PTR [r15+0x294],r12d
0x004773af: mov    rbx,QWORD PTR [r15+0x330]
0x004773b6: mov    rax,QWORD PTR [r15+0x338]
0x004773bd: sub    rax,rbx
0x004773c0: sar    rax,0x3
0x004773c4: test   rax,rax
0x004773c7: je     0x140477208
0x004773cd: mov    rbx,QWORD PTR [rbx]
0x004773d0: mov    rcx,rbx
0x004773d3: call   0x1400d15e0
0x004773d8: mov    QWORD PTR [r15+0x2c0],r12
0x004773df: mov    rcx,QWORD PTR [rbx]
0x004773e2: mov    rax,QWORD PTR [rbx+0x8]
0x004773e6: sub    rax,rcx
0x004773e9: sar    rax,0x3
0x004773ed: test   rax,rax
0x004773f0: je     0x14047759f
0x004773f6: mov    rax,QWORD PTR [rcx]
0x004773f9: mov    QWORD PTR [r15+0x2c0],rax
0x00477400: jmp    0x14047759f
0x00477405: lea    r8,[r15+0x2d0]
0x0047740c: lea    rdi,[r15+0x318]
0x00477413: mov    QWORD PTR [rsp+0x30],rdi
0x00477418: cmp    rdi,r8
0x0047741b: je     0x140477433
0x0047741d: mov    rdx,QWORD PTR [r8]
0x00477420: mov    r8,QWORD PTR [r8+0x8]
0x00477424: sub    r8,rdx
0x00477427: sar    r8,0x3
0x0047742b: mov    rcx,rdi
0x0047742e: call   0x1400e1640
0x00477433: mov    r14,QWORD PTR [rbp-0x69]
0x00477437: test   r14,r14
0x0047743a: je     0x140477571
0x00477440: mov    rsi,QWORD PTR [rdi+0x8]
0x00477444: sub    rsi,QWORD PTR [rdi]
0x00477447: sar    rsi,0x3
0x0047744b: sub    esi,0x1
0x0047744e: js     0x140477571
0x00477454: movsxd rax,esi
0x00477457: lea    rcx,[rax*8+0x0]
0x0047745f: mov    QWORD PTR [rsp+0x20],rcx
0x00477464: mov    QWORD PTR [rsp+0x28],rcx
0x00477469: nop    DWORD PTR [rax+0x0]
0x00477470: mov    rax,QWORD PTR [rdi]
0x00477473: mov    rdx,QWORD PTR [rcx+rax*1]
0x00477477: add    rdx,0x18
0x0047747b: lea    rcx,[rbp+0x7]
0x0047747f: call   0x14006f560
0x00477484: lea    rcx,[rbp+0x7]
0x00477488: call   0x14052a900
0x0047748d: lea    rdi,[rbp-0x79]
0x00477491: cmp    QWORD PTR [rbp-0x61],0xf
0x00477496: cmova  rdi,QWORD PTR [rbp-0x79]
0x0047749b: lea    r13,[rbp+0x7]
0x0047749f: cmp    QWORD PTR [rbp+0x1f],0xf
0x004774a4: cmova  r13,QWORD PTR [rbp+0x7]
0x004774a9: mov    rax,QWORD PTR [rbp+0x17]
0x004774ad: cmp    r14,rax
0x004774b0: ja     0x14047751a
0x004774b2: sub    rax,r14
0x004774b5: lea    r15,[rax+r13*1]
0x004774b9: movsx  r12d,BYTE PTR [rdi]
0x004774bd: lea    r8,[r15+0x1]
0x004774c1: sub    r8,r13
0x004774c4: mov    edx,r12d
0x004774c7: mov    rcx,r13
0x004774ca: call   0x1415359e2
0x004774cf: mov    rbx,rax
0x004774d2: test   rax,rax
0x004774d5: je     0x14047751a
0x004774d7: nop    WORD PTR [rax+rax*1+0x0]
0x004774e0: mov    r8,r14
0x004774e3: mov    rdx,rdi
0x004774e6: mov    rcx,rbx
0x004774e9: call   0x141535d84
0x004774ee: test   eax,eax
0x004774f0: je     0x140477511
0x004774f2: inc    rbx
0x004774f5: lea    r8,[r15+0x1]
0x004774f9: sub    r8,rbx
0x004774fc: mov    edx,r12d
0x004774ff: mov    rcx,rbx
0x00477502: call   0x1415359e2
0x00477507: mov    rbx,rax
0x0047750a: test   rax,rax
0x0047750d: jne    0x1404774e0
0x0047750f: jmp    0x14047751a
0x00477511: sub    rbx,r13
0x00477514: cmp    rbx,0xffffffffffffffff
0x00477518: jne    0x14047753e
0x0047751a: mov    rdi,QWORD PTR [rsp+0x30]
0x0047751f: mov    rcx,QWORD PTR [rsp+0x28]
0x00477524: add    rcx,QWORD PTR [rdi]
0x00477527: mov    r8,QWORD PTR [rdi+0x8]
0x0047752b: lea    rdx,[rcx+0x8]
0x0047752f: sub    r8,rdx
0x00477532: call   0x141535d8a
0x00477537: add    QWORD PTR [rdi+0x8],0xfffffffffffffff8
0x0047753c: jmp    0x140477543
0x0047753e: mov    rdi,QWORD PTR [rsp+0x30]
0x00477543: lea    rcx,[rbp+0x7]
0x00477547: call   0x14006f7e0
0x0047754c: sub    QWORD PTR [rsp+0x28],0x8
0x00477552: mov    rcx,QWORD PTR [rsp+0x20]
0x00477557: sub    rcx,0x8
0x0047755b: mov    QWORD PTR [rsp+0x20],rcx
0x00477560: sub    esi,0x1
0x00477563: jns    0x140477470
0x00477569: mov    r15,QWORD PTR [rsp+0x38]
0x0047756e: xor    r12d,r12d
0x00477571: mov    DWORD PTR [r15+0x294],r12d
0x00477578: mov    rcx,QWORD PTR [r15+0x318]
0x0047757f: mov    rax,QWORD PTR [r15+0x320]
0x00477586: sub    rax,rcx
0x00477589: sar    rax,0x3
0x0047758d: test   rax,rax
0x00477590: je     0x140477208
0x00477596: mov    rcx,QWORD PTR [rcx]
0x00477599: call   0x1400d17d0
0x0047759e: nop
0x0047759f: lea    rcx,[rbp-0x79]
0x004775a3: call   0x14006f7e0
0x004775a8: mov    rcx,QWORD PTR [rbp+0x27]
0x004775ac: xor    rcx,rsp
0x004775af: call   0x1415345d0
0x004775b4: lea    r11,[rsp+0xf0]
0x004775bc: mov    rbx,QWORD PTR [r11+0x38]
0x004775c0: mov    rsi,QWORD PTR [r11+0x40]
0x004775c4: mov    rdi,QWORD PTR [r11+0x48]
0x004775c8: mov    rsp,r11
0x004775cb: pop    r15
0x004775cd: pop    r14
0x004775cf: pop    r13
0x004775d1: pop    r12
0x004775d3: pop    rbp
0x004775d4: ret
0x004775d5: call   0x140065820
0x004775da: int3
