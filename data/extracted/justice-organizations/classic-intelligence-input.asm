# classic PE:6a70b91c:0270a000; intelligence-input; RVA 0x472d60..0x47458d
0x00472d60: mov    QWORD PTR [rsp+0x18],rbx
0x00472d65: push   rbp
0x00472d66: push   rsi
0x00472d67: push   rdi
0x00472d68: push   r12
0x00472d6a: push   r13
0x00472d6c: push   r14
0x00472d6e: push   r15
0x00472d70: lea    rbp,[rsp-0x17]
0x00472d75: sub    rsp,0xd0
0x00472d7c: mov    rax,QWORD PTR [rip+0x14232bd]        # 0x141896040
0x00472d83: xor    rax,rsp
0x00472d86: mov    QWORD PTR [rbp+0x7],rax
0x00472d8a: movsxd r14,r9d
0x00472d8d: mov    DWORD PTR [rbp-0x49],r14d
0x00472d91: mov    r12d,r8d
0x00472d94: mov    r8,rdx
0x00472d97: mov    QWORD PTR [rbp-0x41],rdx
0x00472d9b: mov    rsi,rcx
0x00472d9e: xor    r15d,r15d
0x00472da1: mov    r13d,DWORD PTR [rbp+0x77]
0x00472da5: add    r13d,0x4
0x00472da9: mov    DWORD PTR [rbp-0x4d],r13d
0x00472dad: mov    ecx,DWORD PTR [rbp+0x7f]
0x00472db0: add    ecx,0xffffffe4
0x00472db3: mov    DWORD PTR [rbp-0x6d],ecx
0x00472db6: mov    eax,DWORD PTR [rip+0x1f548bc]        # 0x1423c7678
0x00472dbc: add    eax,0xfffffffc
0x00472dbf: mov    DWORD PTR [rbp-0x65],eax
0x00472dc2: dec    ecx
0x00472dc4: lea    eax,[r13+0x79]
0x00472dc8: mov    edx,0xa
0x00472dcd: mov    r9d,0x8
0x00472dd3: cmp    eax,ecx
0x00472dd5: cmovle edx,r9d
0x00472dd9: mov    DWORD PTR [rbp-0x79],edx
0x00472ddc: lea    eax,[r13+0x5d]
0x00472de0: cmp    eax,ecx
0x00472de2: jle    0x140472dea
0x00472de4: add    edx,0x2
0x00472de7: mov    DWORD PTR [rbp-0x79],edx
0x00472dea: mov    rdx,r8
0x00472ded: mov    rcx,rsi
0x00472df0: call   0x14140faa0
0x00472df5: xorps  xmm0,xmm0
0x00472df8: movups XMMWORD PTR [rbp-0x19],xmm0
0x00472dfc: mov    QWORD PTR [rbp-0x9],0x4
0x00472e04: mov    QWORD PTR [rbp-0x1],0xf
0x00472e0c: mov    eax,DWORD PTR [rip+0x117f322]        # 0x1415f2134 ; literal="Tabs"
0x00472e12: mov    DWORD PTR [rbp-0x19],eax
0x00472e15: mov    BYTE PTR [rbp-0x15],r15b
0x00472e19: lea    r8,[rbp-0x19]
0x00472e1d: lea    rdx,[rsp+0x20]
0x00472e22: mov    rcx,rsi
0x00472e25: call   0x1400eff90
0x00472e2a: nop
0x00472e2b: mov    rdx,QWORD PTR [rax]
0x00472e2e: mov    rcx,QWORD PTR [rdx+0x180]
0x00472e35: mov    rax,QWORD PTR [rdx+0x188]
0x00472e3c: sub    rax,rcx
0x00472e3f: test   rax,0xffffffffffffffe0
0x00472e45: jne    0x140472e64
0x00472e47: xorps  xmm0,xmm0
0x00472e4a: movups XMMWORD PTR [rbp-0x39],xmm0
0x00472e4e: mov    r8,r15
0x00472e51: mov    QWORD PTR [rbp-0x29],r15
0x00472e55: mov    ebx,0xf
0x00472e5a: mov    QWORD PTR [rbp-0x21],rbx
0x00472e5e: mov    BYTE PTR [rbp-0x39],r8b
0x00472e62: jmp    0x140472e83
0x00472e64: mov    rdx,QWORD PTR [rdx+0x178]
0x00472e6b: shl    rdx,0x5
0x00472e6f: add    rdx,rcx
0x00472e72: lea    rcx,[rbp-0x39]
0x00472e76: call   0x14006f560
0x00472e7b: mov    rbx,QWORD PTR [rbp-0x21]
0x00472e7f: mov    r8,QWORD PTR [rbp-0x29]
0x00472e83: lea    rcx,[rbp-0x39]
0x00472e87: mov    rdi,QWORD PTR [rbp-0x39]
0x00472e8b: cmp    rbx,0xf
0x00472e8f: cmova  rcx,rdi
0x00472e93: cmp    r8,0xc
0x00472e97: jne    0x140472ead
0x00472e99: lea    rdx,[rip+0x11c6e50]        # 0x141639cf0 ; literal="Intelligence"
0x00472ea0: call   0x141535d84
0x00472ea5: test   eax,eax
0x00472ea7: mov    BYTE PTR [rbp-0x69],0x1
0x00472eab: je     0x140472eb1
0x00472ead: mov    BYTE PTR [rbp-0x69],0x0
0x00472eb1: cmp    rbx,0xf
0x00472eb5: jbe    0x140472eec
0x00472eb7: lea    rdx,[rbx+0x1]
0x00472ebb: mov    rax,rdi
0x00472ebe: cmp    rdx,0x1000
0x00472ec5: jb     0x140472ee3
0x00472ec7: add    rdx,0x27
0x00472ecb: mov    rdi,QWORD PTR [rdi-0x8]
0x00472ecf: sub    rax,rdi
0x00472ed2: add    rax,0xfffffffffffffff8
0x00472ed6: cmp    rax,0x1f
0x00472eda: jbe    0x140472ee3
0x00472edc: call   QWORD PTR [rip+0x116dbbe]        # 0x1415e0aa0
0x00472ee2: int3
0x00472ee3: mov    rcx,rdi
0x00472ee6: call   0x1415345f0
0x00472eeb: nop
0x00472eec: mov    rbx,QWORD PTR [rsp+0x28]
0x00472ef1: test   rbx,rbx
0x00472ef4: je     0x140472f26
0x00472ef6: mov    eax,0xffffffff
0x00472efb: lock xadd DWORD PTR [rbx+0x8],eax
0x00472f00: cmp    eax,0x1
0x00472f03: jne    0x140472f26
0x00472f05: mov    rax,QWORD PTR [rbx]
0x00472f08: mov    rcx,rbx
0x00472f0b: call   QWORD PTR [rax]
0x00472f0d: mov    eax,0xffffffff
0x00472f12: lock xadd DWORD PTR [rbx+0xc],eax
0x00472f17: cmp    eax,0x1
0x00472f1a: jne    0x140472f26
0x00472f1c: mov    rax,QWORD PTR [rbx]
0x00472f1f: mov    rcx,rbx
0x00472f22: call   QWORD PTR [rax+0x8]
0x00472f25: nop
0x00472f26: mov    rdx,QWORD PTR [rbp-0x1]
0x00472f2a: cmp    rdx,0xf
0x00472f2e: jbe    0x140472f64
0x00472f30: inc    rdx
0x00472f33: mov    rcx,QWORD PTR [rbp-0x19]
0x00472f37: mov    rax,rcx
0x00472f3a: cmp    rdx,0x1000
0x00472f41: jb     0x140472f5f
0x00472f43: add    rdx,0x27
0x00472f47: mov    rcx,QWORD PTR [rcx-0x8]
0x00472f4b: sub    rax,rcx
0x00472f4e: add    rax,0xfffffffffffffff8
0x00472f52: cmp    rax,0x1f
0x00472f56: jbe    0x140472f5f
0x00472f58: call   QWORD PTR [rip+0x116db42]        # 0x1415e0aa0
0x00472f5e: int3
0x00472f5f: call   0x1415345f0
0x00472f64: cmp    BYTE PTR [rbp-0x69],0x0
0x00472f68: je     0x140474564
0x00472f6e: mov    rbx,QWORD PTR [rip+0x206a8bb]        # 0x1424dd830
0x00472f75: sub    rbx,QWORD PTR [rip+0x206a8ac]        # 0x1424dd828
0x00472f7c: sar    rbx,0x3
0x00472f80: test   rbx,rbx
0x00472f83: jne    0x140472fcb
0x00472f85: mov    rax,QWORD PTR [rsi+0x250]
0x00472f8c: sub    rax,QWORD PTR [rsi+0x248]
0x00472f93: test   rax,0xfffffffffffffff8
0x00472f99: jne    0x140472fcb
0x00472f9b: mov    rax,QWORD PTR [rsi+0x268]
0x00472fa2: sub    rax,QWORD PTR [rsi+0x260]
0x00472fa9: test   rax,0xfffffffffffffff8
0x00472faf: jne    0x140472fcb
0x00472fb1: mov    rax,QWORD PTR [rsi+0x280]
0x00472fb8: sub    rax,QWORD PTR [rsi+0x278]
0x00472fbf: test   rax,0xfffffffffffffff8
0x00472fc5: je     0x140474564
0x00472fcb: mov    edi,DWORD PTR [rbp-0x79]
0x00472fce: inc    edi
0x00472fd0: mov    r10d,r15d
0x00472fd3: mov    r11d,DWORD PTR [rsi+0x290]
0x00472fda: mov    eax,edi
0x00472fdc: mov    QWORD PTR [rbp-0x59],rax
0x00472fe0: movzx  r9d,BYTE PTR [rip+0x1f174dd]        # 0x14238a4c5
0x00472fe8: mov    edx,DWORD PTR [rbp-0x59]
0x00472feb: mov    r8d,DWORD PTR [rbp-0x59]
0x00472fef: nop
0x00472ff0: cmp    r10d,r11d
0x00472ff3: je     0x1404730d7
0x00472ff9: mov    ecx,r10d
0x00472ffc: test   r10d,r10d
0x00472fff: je     0x140473096
0x00473005: sub    ecx,0x1
0x00473008: je     0x14047306c
0x0047300a: sub    ecx,0x1
0x0047300d: je     0x140473042
0x0047300f: cmp    ecx,0x1
0x00473012: jne    0x1404730ad
0x00473018: mov    rax,QWORD PTR [rsi+0x280]
0x0047301f: sub    rax,QWORD PTR [rsi+0x278]
0x00473026: test   rax,0xfffffffffffffff8
0x0047302c: jne    0x140473038
0x0047302e: mov    edx,0xffffffff
0x00473033: mov    r8d,edx
0x00473036: jmp    0x1404730ad
0x00473038: lea    edx,[r13+0x2f]
0x0047303c: lea    r8d,[r13+0x37]
0x00473040: jmp    0x1404730ad
0x00473042: mov    rax,QWORD PTR [rsi+0x268]
0x00473049: sub    rax,QWORD PTR [rsi+0x260]
0x00473050: test   rax,0xfffffffffffffff8
0x00473056: jne    0x140473062
0x00473058: mov    edx,0xffffffff
0x0047305d: mov    r8d,edx
0x00473060: jmp    0x1404730ad
0x00473062: lea    edx,[r13+0x1d]
0x00473066: lea    r8d,[r13+0x2e]
0x0047306a: jmp    0x1404730ad
0x0047306c: mov    rax,QWORD PTR [rsi+0x250]
0x00473073: sub    rax,QWORD PTR [rsi+0x248]
0x0047307a: test   rax,0xfffffffffffffff8
0x00473080: jne    0x14047308c
0x00473082: mov    edx,0xffffffff
0x00473087: mov    r8d,edx
0x0047308a: jmp    0x1404730ad
0x0047308c: lea    edx,[r13+0x13]
0x00473090: lea    r8d,[r13+0x1c]
0x00473094: jmp    0x1404730ad
0x00473096: test   rbx,rbx
0x00473099: jne    0x1404730a5
0x0047309b: mov    edx,0xffffffff
0x004730a0: mov    r8d,edx
0x004730a3: jmp    0x1404730ad
0x004730a5: lea    edx,[r13+0x1]
0x004730a9: lea    r8d,[r13+0x12]
0x004730ad: lea    eax,[rdi+0x1]
0x004730b0: test   r9b,r9b
0x004730b3: je     0x1404730d7
0x004730b5: cmp    BYTE PTR [rip+0x1f17400],0x0        # 0x14238a4bc
0x004730bc: je     0x1404730d7
0x004730be: cmp    r12d,edx
0x004730c1: jl     0x1404730d7
0x004730c3: cmp    r12d,r8d
0x004730c6: jg     0x1404730d7
0x004730c8: cmp    r14,QWORD PTR [rbp-0x59]
0x004730cc: jl     0x1404730d7
0x004730ce: cmp    r14d,eax
0x004730d1: jle    0x140473259
0x004730d7: inc    r10d
0x004730da: cmp    r10d,0x4
0x004730de: jl     0x140472ff0
0x004730e4: test   r11d,r11d
0x004730e7: je     0x140473d66
0x004730ed: sub    r11d,0x1
0x004730f1: je     0x140473a10
0x004730f7: sub    r11d,0x1
0x004730fb: je     0x140473482
0x00473101: cmp    r11d,0x1
0x00473105: jne    0x140474564
0x0047310b: lea    r10d,[r13+0x2]
0x0047310f: mov    DWORD PTR [rbp-0x71],r10d
0x00473113: mov    r8d,DWORD PTR [rbp-0x6d]
0x00473117: lea    eax,[r8-0x2]
0x0047311b: mov    DWORD PTR [rbp-0x75],eax
0x0047311e: mov    edi,DWORD PTR [rbp-0x79]
0x00473121: add    edi,0x4
0x00473124: mov    ebx,DWORD PTR [rbp-0x65]
0x00473127: mov    ecx,ebx
0x00473129: sub    ecx,edi
0x0047312b: dec    ecx
0x0047312d: mov    DWORD PTR [rbp-0x49],ecx
0x00473130: mov    rax,QWORD PTR [rsi+0x350]
0x00473137: sub    rax,QWORD PTR [rsi+0x348]
0x0047313e: sar    rax,0x3
0x00473142: lea    edx,[rax+rax*4]
0x00473145: mov    DWORD PTR [rbp-0x61],edx
0x00473148: cmp    edx,ecx
0x0047314a: jle    0x140473153
0x0047314c: lea    eax,[r8-0x4]
0x00473150: mov    DWORD PTR [rbp-0x75],eax
0x00473153: test   r9b,r9b
0x00473156: je     0x1404731e7
0x0047315c: cmp    edx,ecx
0x0047315e: jle    0x1404731e7
0x00473164: cmp    r12d,r13d
0x00473167: jl     0x1404731e7
0x00473169: cmp    r12d,r8d
0x0047316c: jg     0x1404731e7
0x0047316e: cmp    r14d,edi
0x00473171: jl     0x1404731e7
0x00473173: cmp    r14d,ebx
0x00473176: jg     0x1404731e7
0x00473178: mov    QWORD PTR [rsp+0x38],r15
0x0047317d: mov    eax,DWORD PTR [rsi+0x2c8]
0x00473183: mov    DWORD PTR [rsp+0x20],eax
0x00473187: mov    DWORD PTR [rsp+0x24],r15d
0x0047318c: lea    eax,[rdx-0x1]
0x0047318f: mov    DWORD PTR [rsp+0x28],eax
0x00473193: lea    eax,[rdi+0x1]
0x00473196: mov    DWORD PTR [rsp+0x30],eax
0x0047319a: lea    eax,[rdi-0x2]
0x0047319d: add    eax,ecx
0x0047319f: mov    DWORD PTR [rsp+0x34],eax
0x004731a3: mov    DWORD PTR [rsp+0x2c],ecx
0x004731a7: lea    rcx,[rsp+0x20]
0x004731ac: call   0x1400bb340
0x004731b1: lea    r9,[rsi+0x2cc]
0x004731b8: lea    r8,[rsi+0x2c8]
0x004731bf: mov    rdx,QWORD PTR [rbp-0x41]
0x004731c3: lea    rcx,[rsp+0x20]
0x004731c8: call   0x14140a220
0x004731cd: test   al,al
0x004731cf: jne    0x140474564
0x004731d5: movzx  r9d,BYTE PTR [rip+0x1f172e8]        # 0x14238a4c5
0x004731dd: mov    ecx,DWORD PTR [rbp-0x49]
0x004731e0: mov    edx,DWORD PTR [rbp-0x61]
0x004731e3: mov    r10d,DWORD PTR [rbp-0x71]
0x004731e7: cmp    BYTE PTR [rsi+0x2cc],0x0
0x004731ee: je     0x1404732fe
0x004731f4: test   r9b,r9b
0x004731f7: je     0x140473b9e
0x004731fd: cmp    BYTE PTR [rip+0x1f172ba],0x0        # 0x14238a4be
0x00473204: je     0x140473b9e
0x0047320a: mov    QWORD PTR [rsp+0x38],r15
0x0047320f: mov    eax,DWORD PTR [rsi+0x2c8]
0x00473215: mov    DWORD PTR [rsp+0x20],eax
0x00473219: mov    DWORD PTR [rsp+0x24],r15d
0x0047321e: lea    eax,[rdx-0x1]
0x00473221: mov    DWORD PTR [rsp+0x28],eax
0x00473225: lea    eax,[rdi+0x1]
0x00473228: mov    DWORD PTR [rsp+0x30],eax
0x0047322c: lea    eax,[rdi-0x2]
0x0047322f: add    eax,ecx
0x00473231: mov    DWORD PTR [rsp+0x34],eax
0x00473235: mov    DWORD PTR [rsp+0x2c],ecx
0x00473239: lea    rcx,[rsp+0x20]
0x0047323e: call   0x1400bb340
0x00473243: mov    eax,DWORD PTR [rsp+0x30]
0x00473247: cmp    r14d,eax
0x0047324a: jg     0x140473276
0x0047324c: mov    eax,DWORD PTR [rsp+0x24]
0x00473250: mov    DWORD PTR [rsp+0x20],eax
0x00473254: jmp    0x1404732e5
0x00473259: mov    BYTE PTR [rip+0x1f1725c],0x0        # 0x14238a4bc
0x00473260: mov    DWORD PTR [rsi+0x290],r10d
0x00473267: mov    rcx,rsi
0x0047326a: call   0x140476e90
0x0047326f: mov    al,0x1
0x00473271: jmp    0x140474566
0x00473276: mov    r10d,DWORD PTR [rsp+0x34]
0x0047327b: cmp    r14d,r10d
0x0047327e: jl     0x140473298
0x00473280: mov    eax,DWORD PTR [rsp+0x28]
0x00473284: sub    eax,DWORD PTR [rsp+0x2c]
0x00473288: inc    eax
0x0047328a: mov    DWORD PTR [rsp+0x20],eax
0x0047328e: mov    ecx,DWORD PTR [rsp+0x24]
0x00473292: cmp    eax,ecx
0x00473294: jge    0x1404732e5
0x00473296: jmp    0x1404732e1
0x00473298: cmp    r10d,eax
0x0047329b: jle    0x1404732e5
0x0047329d: mov    r8d,DWORD PTR [rsp+0x28]
0x004732a2: sub    r8d,DWORD PTR [rsp+0x2c]
0x004732a7: mov    ecx,r8d
0x004732aa: mov    r9d,DWORD PTR [rsp+0x24]
0x004732af: sub    ecx,r9d
0x004732b2: add    ecx,0x1
0x004732b5: cmovns r15d,ecx
0x004732b9: sub    r14d,eax
0x004732bc: imul   r15d,r14d
0x004732c0: sub    r10d,eax
0x004732c3: inc    r10d
0x004732c6: mov    eax,r15d
0x004732c9: cdq
0x004732ca: idiv   r10d
0x004732cd: lea    ecx,[rax+r9*1]
0x004732d1: lea    eax,[r8+0x1]
0x004732d5: cmp    ecx,eax
0x004732d7: cmovg  ecx,eax
0x004732da: cmp    ecx,r9d
0x004732dd: cmovl  ecx,r9d
0x004732e1: mov    DWORD PTR [rsp+0x20],ecx
0x004732e5: lea    rcx,[rsp+0x20]
0x004732ea: call   0x1400bb340
0x004732ef: mov    eax,DWORD PTR [rsp+0x20]
0x004732f3: mov    DWORD PTR [rsi+0x2c8],eax
0x004732f9: jmp    0x140474564
0x004732fe: test   r9b,r9b
0x00473301: je     0x140474564
0x00473307: cmp    BYTE PTR [rip+0x1f171ae],0x0        # 0x14238a4bc
0x0047330e: je     0x140474564
0x00473314: mov    r8d,DWORD PTR [rbp-0x75]
0x00473318: cmp    edx,ecx
0x0047331a: jle    0x140473415
0x00473320: lea    eax,[r8+0x1]
0x00473324: cmp    r12d,eax
0x00473327: jl     0x140473415
0x0047332d: inc    eax
0x0047332f: cmp    r12d,eax
0x00473332: jg     0x140473415
0x00473338: cmp    r14d,edi
0x0047333b: jl     0x140473415
0x00473341: lea    r9d,[rcx+rdi*1]
0x00473345: lea    eax,[r9-0x1]
0x00473349: cmp    r14d,eax
0x0047334c: jg     0x140473415
0x00473352: mov    BYTE PTR [rip+0x1f17163],0x0        # 0x14238a4bc
0x00473359: mov    QWORD PTR [rsp+0x38],r15
0x0047335e: mov    eax,DWORD PTR [rsi+0x2c8]
0x00473364: mov    DWORD PTR [rsp+0x20],eax
0x00473368: mov    DWORD PTR [rsp+0x24],r15d
0x0047336d: lea    eax,[rdx-0x1]
0x00473370: mov    DWORD PTR [rsp+0x28],eax
0x00473374: lea    eax,[rdi+0x1]
0x00473377: mov    DWORD PTR [rsp+0x30],eax
0x0047337b: lea    eax,[r9-0x2]
0x0047337f: mov    DWORD PTR [rsp+0x34],eax
0x00473383: mov    DWORD PTR [rsp+0x2c],ecx
0x00473387: lea    rcx,[rsp+0x20]
0x0047338c: call   0x1400bb340
0x00473391: mov    BYTE PTR [rsi+0x2cc],0x0
0x00473398: mov    eax,DWORD PTR [rsp+0x30]
0x0047339c: dec    eax
0x0047339e: cmp    r14d,eax
0x004733a1: jne    0x1404733bf
0x004733a3: mov    ecx,DWORD PTR [rsp+0x20]
0x004733a7: dec    ecx
0x004733a9: cmp    ecx,DWORD PTR [rsp+0x24]
0x004733ad: cmovl  ecx,DWORD PTR [rsp+0x24]
0x004733b2: mov    DWORD PTR [rsi+0x2c8],ecx
0x004733b8: mov    al,0x1
0x004733ba: jmp    0x140474566
0x004733bf: mov    eax,DWORD PTR [rsp+0x34]
0x004733c3: inc    eax
0x004733c5: cmp    r14d,eax
0x004733c8: jne    0x1404733ec
0x004733ca: mov    ecx,DWORD PTR [rsp+0x20]
0x004733ce: inc    ecx
0x004733d0: mov    eax,DWORD PTR [rsp+0x28]
0x004733d4: sub    eax,DWORD PTR [rsp+0x2c]
0x004733d8: inc    eax
0x004733da: cmp    ecx,eax
0x004733dc: cmovg  ecx,eax
0x004733df: mov    DWORD PTR [rsi+0x2c8],ecx
0x004733e5: mov    al,0x1
0x004733e7: jmp    0x140474566
0x004733ec: cmp    r14d,DWORD PTR [rsp+0x38]
0x004733f1: jge    0x140473c6a
0x004733f7: mov    ecx,DWORD PTR [rsp+0x20]
0x004733fb: sub    ecx,DWORD PTR [rsp+0x2c]
0x004733ff: cmp    ecx,DWORD PTR [rsp+0x24]
0x00473403: cmovl  ecx,DWORD PTR [rsp+0x24]
0x00473408: mov    DWORD PTR [rsi+0x2c8],ecx
0x0047340e: mov    al,0x1
0x00473410: jmp    0x140474566
0x00473415: mov    eax,DWORD PTR [rsi+0x2c8]
0x0047341b: sub    edx,ecx
0x0047341d: cmp    eax,edx
0x0047341f: cmovle edx,eax
0x00473422: mov    eax,r15d
0x00473425: test   edx,edx
0x00473427: cmovns eax,edx
0x0047342a: sub    edi,eax
0x0047342c: mov    rcx,QWORD PTR [rsi+0x350]
0x00473433: sub    rcx,QWORD PTR [rsi+0x348]
0x0047343a: sar    rcx,0x3
0x0047343e: test   ecx,ecx
0x00473440: jle    0x140474564
0x00473446: cmp    r12d,r10d
0x00473449: jl     0x14047345d
0x0047344b: cmp    r12d,r8d
0x0047344e: jg     0x14047345d
0x00473450: cmp    r14d,edi
0x00473453: jl     0x14047345d
0x00473455: lea    eax,[rdi+0x4]
0x00473458: cmp    r14d,eax
0x0047345b: jle    0x14047346d
0x0047345d: add    edi,0x5
0x00473460: inc    r15d
0x00473463: cmp    r15d,ecx
0x00473466: jl     0x140473446
0x00473468: jmp    0x140474564
0x0047346d: mov    BYTE PTR [rip+0x1f17048],0x0        # 0x14238a4bc
0x00473474: mov    DWORD PTR [rsi+0x294],r15d
0x0047347b: mov    al,0x1
0x0047347d: jmp    0x140474566
0x00473482: lea    eax,[r13+0x2]
0x00473486: mov    DWORD PTR [rbp-0x71],eax
0x00473489: mov    r8d,DWORD PTR [rbp-0x6d]
0x0047348d: lea    r11d,[r8-0x2]
0x00473491: mov    DWORD PTR [rbp-0x51],r11d
0x00473495: mov    edi,DWORD PTR [rbp-0x79]
0x00473498: add    edi,0x4
0x0047349b: mov    r10d,DWORD PTR [rbp-0x65]
0x0047349f: lea    eax,[r10-0x2]
0x004734a3: mov    DWORD PTR [rbp-0x79],eax
0x004734a6: mov    rbx,QWORD PTR [rsi+0x330]
0x004734ad: mov    rax,QWORD PTR [rsi+0x338]
0x004734b4: sub    rax,rbx
0x004734b7: sar    rax,0x3
0x004734bb: lea    ecx,[rax+rax*4]
0x004734be: mov    DWORD PTR [rbp-0x75],ecx
0x004734c1: movsxd rdx,DWORD PTR [rsi+0x294]
0x004734c8: test   edx,edx
0x004734ca: js     0x140473527
0x004734cc: mov    rax,QWORD PTR [rsi+0x320]
0x004734d3: sub    rax,QWORD PTR [rsi+0x318]
0x004734da: sar    rax,0x3
0x004734de: cmp    edx,eax
0x004734e0: jge    0x140473527
0x004734e2: mov    rbx,QWORD PTR [rbx+rdx*8]
0x004734e6: mov    rcx,rbx
0x004734e9: call   0x1400d15e0
0x004734ee: mov    rax,QWORD PTR [rbx+0x8]
0x004734f2: sub    rax,QWORD PTR [rbx]
0x004734f5: sar    rax,0x3
0x004734f9: mov    edx,DWORD PTR [rbp-0x79]
0x004734fc: mov    ecx,DWORD PTR [rbp-0x75]
0x004734ff: movzx  r9d,BYTE PTR [rip+0x1f16fbe]        # 0x14238a4c5
0x00473507: mov    r8d,DWORD PTR [rbp-0x6d]
0x0047350b: mov    r10d,DWORD PTR [rbp-0x65]
0x0047350f: mov    r11d,DWORD PTR [rbp-0x51]
0x00473513: cmp    rax,0x1
0x00473517: jb     0x14047352a
0x00473519: mov    eax,edx
0x0047351b: sub    eax,edi
0x0047351d: add    ecx,0xfffffff5
0x00473520: add    ecx,eax
0x00473522: mov    DWORD PTR [rbp-0x75],ecx
0x00473525: jmp    0x14047352a
0x00473527: mov    edx,DWORD PTR [rbp-0x79]
0x0047352a: mov    eax,edx
0x0047352c: sub    eax,edi
0x0047352e: mov    DWORD PTR [rbp-0x4d],eax
0x00473531: lea    edx,[rax+0x1]
0x00473534: mov    DWORD PTR [rbp-0x61],edx
0x00473537: cmp    ecx,edx
0x00473539: jle    0x140473543
0x0047353b: sub    r11d,0x2
0x0047353f: mov    DWORD PTR [rbp-0x51],r11d
0x00473543: test   r9b,r9b
0x00473546: je     0x1404735cf
0x0047354c: cmp    ecx,edx
0x0047354e: jle    0x1404735cf
0x00473550: cmp    r12d,r13d
0x00473553: jl     0x1404735cf
0x00473555: cmp    r12d,r8d
0x00473558: jg     0x1404735cf
0x0047355a: cmp    r14d,edi
0x0047355d: jl     0x1404735cf
0x0047355f: cmp    r14d,r10d
0x00473562: jg     0x1404735cf
0x00473564: mov    QWORD PTR [rsp+0x38],r15
0x00473569: mov    eax,DWORD PTR [rsi+0x2c8]
0x0047356f: mov    DWORD PTR [rsp+0x20],eax
0x00473573: mov    DWORD PTR [rsp+0x24],r15d
0x00473578: lea    eax,[rcx-0x1]
0x0047357b: mov    DWORD PTR [rsp+0x28],eax
0x0047357f: lea    eax,[rdi+0x1]
0x00473582: mov    DWORD PTR [rsp+0x30],eax
0x00473586: lea    eax,[rdi-0x2]
0x00473589: add    eax,edx
0x0047358b: mov    DWORD PTR [rsp+0x34],eax
0x0047358f: mov    DWORD PTR [rsp+0x2c],edx
0x00473593: lea    rcx,[rsp+0x20]
0x00473598: call   0x1400bb340
0x0047359d: lea    r9,[rsi+0x2cc]
0x004735a4: lea    r8,[rsi+0x2c8]
0x004735ab: mov    rdx,QWORD PTR [rbp-0x41]
0x004735af: lea    rcx,[rsp+0x20]
0x004735b4: call   0x14140a220
0x004735b9: test   al,al
0x004735bb: jne    0x140474564
0x004735c1: movzx  r9d,BYTE PTR [rip+0x1f16efc]        # 0x14238a4c5
0x004735c9: mov    ecx,DWORD PTR [rbp-0x75]
0x004735cc: mov    edx,DWORD PTR [rbp-0x61]
0x004735cf: cmp    BYTE PTR [rsi+0x2cc],0x0
0x004735d6: je     0x1404736c1
0x004735dc: test   r9b,r9b
0x004735df: je     0x140473b9e
0x004735e5: cmp    BYTE PTR [rip+0x1f16ed2],0x0        # 0x14238a4be
0x004735ec: je     0x140473b9e
0x004735f2: mov    QWORD PTR [rsp+0x38],r15
0x004735f7: mov    eax,DWORD PTR [rsi+0x2c8]
0x004735fd: mov    DWORD PTR [rsp+0x20],eax
0x00473601: mov    DWORD PTR [rsp+0x24],r15d
0x00473606: lea    eax,[rcx-0x1]
0x00473609: mov    DWORD PTR [rsp+0x28],eax
0x0047360d: lea    eax,[rdi+0x1]
0x00473610: mov    DWORD PTR [rsp+0x30],eax
0x00473614: lea    eax,[rdi-0x2]
0x00473617: add    eax,edx
0x00473619: mov    DWORD PTR [rsp+0x34],eax
0x0047361d: mov    DWORD PTR [rsp+0x2c],edx
0x00473621: lea    rcx,[rsp+0x20]
0x00473626: call   0x1400bb340
0x0047362b: mov    edx,DWORD PTR [rsp+0x30]
0x0047362f: cmp    r14d,edx
0x00473632: jg     0x14047363e
0x00473634: mov    eax,DWORD PTR [rsp+0x24]
0x00473638: mov    DWORD PTR [rsp+0x20],eax
0x0047363c: jmp    0x1404736a8
0x0047363e: mov    ecx,DWORD PTR [rsp+0x34]
0x00473642: cmp    r14d,ecx
0x00473645: jl     0x14047365f
0x00473647: mov    eax,DWORD PTR [rsp+0x28]
0x0047364b: sub    eax,DWORD PTR [rsp+0x2c]
0x0047364f: inc    eax
0x00473651: mov    DWORD PTR [rsp+0x20],eax
0x00473655: mov    ecx,DWORD PTR [rsp+0x24]
0x00473659: cmp    eax,ecx
0x0047365b: jge    0x1404736a8
0x0047365d: jmp    0x1404736a4
0x0047365f: cmp    ecx,edx
0x00473661: jle    0x1404736a8
0x00473663: mov    r8d,DWORD PTR [rsp+0x28]
0x00473668: sub    r8d,DWORD PTR [rsp+0x2c]
0x0047366d: mov    eax,r8d
0x00473670: mov    r9d,DWORD PTR [rsp+0x24]
0x00473675: sub    eax,r9d
0x00473678: add    eax,0x1
0x0047367b: cmovns r15d,eax
0x0047367f: sub    r14d,edx
0x00473682: imul   r15d,r14d
0x00473686: sub    ecx,edx
0x00473688: inc    ecx
0x0047368a: mov    eax,r15d
0x0047368d: cdq
0x0047368e: idiv   ecx
0x00473690: lea    ecx,[rax+r9*1]
0x00473694: lea    eax,[r8+0x1]
0x00473698: cmp    ecx,eax
0x0047369a: cmovg  ecx,eax
0x0047369d: cmp    ecx,r9d
0x004736a0: cmovl  ecx,r9d
0x004736a4: mov    DWORD PTR [rsp+0x20],ecx
0x004736a8: lea    rcx,[rsp+0x20]
0x004736ad: call   0x1400bb340
0x004736b2: mov    eax,DWORD PTR [rsp+0x20]
0x004736b6: mov    DWORD PTR [rsi+0x2c8],eax
0x004736bc: jmp    0x140474564
0x004736c1: test   r9b,r9b
0x004736c4: je     0x140474564
0x004736ca: cmp    BYTE PTR [rip+0x1f16deb],0x0        # 0x14238a4bc
0x004736d1: je     0x140474564
0x004736d7: cmp    ecx,edx
0x004736d9: jle    0x140473727
0x004736db: mov    eax,DWORD PTR [rbp-0x51]
0x004736de: inc    eax
0x004736e0: cmp    r12d,eax
0x004736e3: jl     0x140473727
0x004736e5: inc    eax
0x004736e7: cmp    r12d,eax
0x004736ea: jg     0x140473727
0x004736ec: cmp    r14d,edi
0x004736ef: jl     0x140473727
0x004736f1: lea    r8d,[rdx-0x2]
0x004736f5: cmp    r14d,DWORD PTR [rbp-0x79]
0x004736f9: jg     0x140473727
0x004736fb: mov    BYTE PTR [rip+0x1f16dba],0x0        # 0x14238a4bc
0x00473702: mov    eax,DWORD PTR [rsi+0x2c8]
0x00473708: mov    DWORD PTR [rsp+0x20],eax
0x0047370c: lea    eax,[rcx-0x1]
0x0047370f: mov    DWORD PTR [rsp+0x28],eax
0x00473713: lea    eax,[rdi+0x1]
0x00473716: mov    DWORD PTR [rsp+0x30],eax
0x0047371a: lea    eax,[r8+rdi*1]
0x0047371e: mov    DWORD PTR [rsp+0x2c],edx
0x00473722: jmp    0x140473c22
0x00473727: mov    eax,DWORD PTR [rsi+0x2c8]
0x0047372d: sub    ecx,edx
0x0047372f: cmp    eax,ecx
0x00473731: cmovle ecx,eax
0x00473734: mov    eax,r15d
0x00473737: test   ecx,ecx
0x00473739: cmovns eax,ecx
0x0047373c: sub    edi,eax
0x0047373e: mov    rax,QWORD PTR [rsi+0x338]
0x00473745: sub    rax,QWORD PTR [rsi+0x330]
0x0047374c: sar    rax,0x3
0x00473750: mov    DWORD PTR [rbp-0x79],r15d
0x00473754: test   eax,eax
0x00473756: jle    0x140474564
0x0047375c: mov    r13,r15
0x0047375f: mov    QWORD PTR [rbp-0x41],r15
0x00473763: cdqe
0x00473765: mov    QWORD PTR [rsp+0x20],rax
0x0047376a: nop    WORD PTR [rax+rax*1+0x0]
0x00473770: mov    rax,QWORD PTR [rsi+0x330]
0x00473777: mov    rbx,QWORD PTR [rax+r13*8]
0x0047377b: mov    rcx,rbx
0x0047377e: call   0x1400d15e0
0x00473783: mov    ecx,DWORD PTR [rbp-0x79]
0x00473786: cmp    ecx,DWORD PTR [rsi+0x294]
0x0047378c: jne    0x14047398b
0x00473792: mov    r11d,DWORD PTR [rbp-0x4d]
0x00473796: add    r11d,0xfffffff8
0x0047379a: mov    DWORD PTR [rbp-0x61],r11d
0x0047379e: mov    r9d,DWORD PTR [rbp-0x71]
0x004737a2: lea    eax,[r9+0x2]
0x004737a6: cmp    r12d,eax
0x004737a9: jl     0x140473983
0x004737af: mov    edx,DWORD PTR [rbp-0x51]
0x004737b2: lea    eax,[rdx-0x2]
0x004737b5: cmp    r12d,eax
0x004737b8: jg     0x140473983
0x004737be: lea    eax,[rdi+0x1]
0x004737c1: cmp    r14d,eax
0x004737c4: jl     0x140473983
0x004737ca: lea    eax,[r11+rdi*1]
0x004737ce: cmp    r14d,eax
0x004737d1: jg     0x140473983
0x004737d7: sub    edx,r9d
0x004737da: sub    edx,0x3
0x004737dd: mov    DWORD PTR [rbp-0x65],edx
0x004737e0: mov    r13d,r15d
0x004737e3: mov    r11d,r15d
0x004737e6: mov    r14d,r15d
0x004737e9: mov    r10d,r15d
0x004737ec: mov    DWORD PTR [rbp-0x75],r15d
0x004737f0: mov    rcx,QWORD PTR [rbx]
0x004737f3: mov    rax,rcx
0x004737f6: mov    r8,QWORD PTR [rbx+0x8]
0x004737fa: nop    WORD PTR [rax+rax*1+0x0]
0x00473800: cmp    rax,r8
0x00473803: jae    0x140473848
0x00473805: mov    rdx,QWORD PTR [rax]
0x00473808: mov    r9d,DWORD PTR [rdx+0x18]
0x0047380c: mov    edx,DWORD PTR [rdx+0x14]
0x0047380f: lea    r10d,[rdx+rdx*2]
0x00473813: add    r10d,r10d
0x00473816: cmp    r13d,r9d
0x00473819: cmovg  r13d,r9d
0x0047381d: cmp    r14d,r10d
0x00473820: cmovg  r14d,r10d
0x00473824: lea    edx,[r9+0x4]
0x00473828: cmp    r11d,edx
0x0047382b: cmovl  r11d,edx
0x0047382f: lea    edx,[r10+0x4]
0x00473833: mov    r10d,DWORD PTR [rbp-0x75]
0x00473837: cmp    r10d,edx
0x0047383a: cmovl  r10d,edx
0x0047383e: mov    DWORD PTR [rbp-0x75],r10d
0x00473842: add    rax,0x8
0x00473846: jmp    0x140473800
0x00473848: mov    DWORD PTR [rbp-0x6d],r14d
0x0047384c: mov    eax,DWORD PTR [rbp-0x65]
0x0047384f: cdq
0x00473850: sub    eax,edx
0x00473852: sar    eax,1
0x00473854: mov    ebx,eax
0x00473856: mov    r9d,DWORD PTR [rbp-0x71]
0x0047385a: dec    r9d
0x0047385d: add    r9d,eax
0x00473860: mov    DWORD PTR [rbp-0x75],r9d
0x00473864: cmp    QWORD PTR [rsi+0x2c0],0x0
0x0047386c: mov    r14d,DWORD PTR [rbp-0x49]
0x00473870: je     0x140473930
0x00473876: mov    r9d,r11d
0x00473879: sub    r9d,r13d
0x0047387c: inc    r9d
0x0047387f: mov    edx,DWORD PTR [rbp-0x65]
0x00473882: add    edx,0xfffffffe
0x00473885: cmp    r9d,edx
0x00473888: jl     0x1404738dd
0x0047388a: mov    r9,QWORD PTR [rsi+0x2c0]
0x00473891: mov    r9d,DWORD PTR [r9+0x18]
0x00473895: mov    edx,r9d
0x00473898: neg    edx
0x0047389a: lea    eax,[r9-0x2]
0x0047389e: add    eax,ebx
0x004738a0: cmp    eax,r11d
0x004738a3: jle    0x1404738ba
0x004738a5: mov    edx,ebx
0x004738a7: sub    edx,r11d
0x004738aa: sub    edx,0x2
0x004738ad: mov    r9d,DWORD PTR [rbp-0x75]
0x004738b1: add    r9d,edx
0x004738b4: mov    DWORD PTR [rbp-0x75],r9d
0x004738b8: jmp    0x1404738e1
0x004738ba: sub    r9d,ebx
0x004738bd: add    r9d,0x2
0x004738c1: cmp    r9d,r13d
0x004738c4: jge    0x1404738d0
0x004738c6: mov    edx,0x2
0x004738cb: sub    edx,r13d
0x004738ce: sub    edx,ebx
0x004738d0: mov    r9d,DWORD PTR [rbp-0x75]
0x004738d4: add    r9d,edx
0x004738d7: mov    DWORD PTR [rbp-0x75],r9d
0x004738db: jmp    0x1404738e1
0x004738dd: mov    r9d,DWORD PTR [rbp-0x75]
0x004738e1: mov    edx,r10d
0x004738e4: sub    edx,DWORD PTR [rbp-0x6d]
0x004738e7: inc    edx
0x004738e9: mov    r11d,DWORD PTR [rbp-0x61]
0x004738ed: lea    eax,[r11-0x2]
0x004738f1: cmp    edx,eax
0x004738f3: jl     0x140473934
0x004738f5: mov    rax,QWORD PTR [rsi+0x2c0]
0x004738fc: mov    edx,DWORD PTR [rax+0x14]
0x004738ff: lea    eax,[rdx+rdx*2]
0x00473902: add    eax,eax
0x00473904: mov    r9d,0x6
0x0047390a: sub    r9d,eax
0x0047390d: lea    edx,[rdx+rdx*2]
0x00473910: lea    edx,[rdx-0x4]
0x00473913: lea    edx,[r11+rdx*2]
0x00473917: cmp    edx,r10d
0x0047391a: jle    0x140473926
0x0047391c: mov    r9d,r11d
0x0047391f: sub    r9d,r10d
0x00473922: sub    r9d,0x2
0x00473926: lea    r10d,[r9+rdi*1]
0x0047392a: mov    r9d,DWORD PTR [rbp-0x75]
0x0047392e: jmp    0x140473937
0x00473930: mov    r11d,DWORD PTR [rbp-0x61]
0x00473934: mov    r10d,edi
0x00473937: cmp    rcx,r8
0x0047393a: jae    0x14047397c
0x0047393c: mov    rdx,QWORD PTR [rcx]
0x0047393f: cmp    rdx,QWORD PTR [rsi+0x2c0]
0x00473946: je     0x140473976
0x00473948: mov    eax,DWORD PTR [rdx+0x18]
0x0047394b: add    eax,r9d
0x0047394e: cmp    r12d,eax
0x00473951: jl     0x140473976
0x00473953: add    eax,0x4
0x00473956: cmp    r12d,eax
0x00473959: jg     0x140473976
0x0047395b: mov    eax,DWORD PTR [rdx+0x14]
0x0047395e: lea    edx,[rax+rax*2]
0x00473961: lea    eax,[r10+rdx*2]
0x00473965: cmp    r14d,eax
0x00473968: jl     0x140473976
0x0047396a: add    eax,0x4
0x0047396d: cmp    r14d,eax
0x00473970: jle    0x1404739f8
0x00473976: add    rcx,0x8
0x0047397a: jmp    0x140473937
0x0047397c: mov    ecx,DWORD PTR [rbp-0x79]
0x0047397f: mov    r13,QWORD PTR [rbp-0x41]
0x00473983: add    edi,0x2
0x00473986: add    edi,r11d
0x00473989: jmp    0x1404739dc
0x0047398b: cmp    r12d,DWORD PTR [rbp-0x71]
0x0047398f: jl     0x1404739d9
0x00473991: cmp    r12d,DWORD PTR [rbp-0x51]
0x00473995: jg     0x1404739d9
0x00473997: cmp    r14d,edi
0x0047399a: jl     0x1404739d9
0x0047399c: lea    eax,[rdi+0x4]
0x0047399f: cmp    r14d,eax
0x004739a2: jg     0x1404739d9
0x004739a4: mov    DWORD PTR [rsi+0x294],ecx
0x004739aa: mov    rcx,rbx
0x004739ad: call   0x1400d15e0
0x004739b2: mov    QWORD PTR [rsi+0x2c0],r15
0x004739b9: mov    rcx,QWORD PTR [rbx]
0x004739bc: mov    rax,QWORD PTR [rbx+0x8]
0x004739c0: sub    rax,rcx
0x004739c3: sar    rax,0x3
0x004739c7: test   rax,rax
0x004739ca: je     0x1404739d6
0x004739cc: mov    rax,QWORD PTR [rcx]
0x004739cf: mov    QWORD PTR [rsi+0x2c0],rax
0x004739d6: mov    ecx,DWORD PTR [rbp-0x79]
0x004739d9: add    edi,0x5
0x004739dc: inc    ecx
0x004739de: mov    DWORD PTR [rbp-0x79],ecx
0x004739e1: inc    r13
0x004739e4: mov    QWORD PTR [rbp-0x41],r13
0x004739e8: cmp    r13,QWORD PTR [rsp+0x20]
0x004739ed: jl     0x140473770
0x004739f3: jmp    0x140474564
0x004739f8: mov    BYTE PTR [rip+0x1f16abd],0x0        # 0x14238a4bc
0x004739ff: mov    rax,QWORD PTR [rcx]
0x00473a02: mov    QWORD PTR [rsi+0x2c0],rax
0x00473a09: mov    al,0x1
0x00473a0b: jmp    0x140474566
0x00473a10: mov    rbx,QWORD PTR [rsi+0x318]
0x00473a17: mov    rax,QWORD PTR [rsi+0x320]
0x00473a1e: sub    rax,rbx
0x00473a21: sar    rax,0x3
0x00473a25: lea    edx,[rax+rax*4]
0x00473a28: mov    DWORD PTR [rbp-0x71],edx
0x00473a2b: movsxd rcx,DWORD PTR [rsi+0x294]
0x00473a32: mov    edi,0x3
0x00473a37: test   ecx,ecx
0x00473a39: js     0x140473a71
0x00473a3b: cmp    ecx,eax
0x00473a3d: jge    0x140473a71
0x00473a3f: mov    rbx,QWORD PTR [rbx+rcx*8]
0x00473a43: mov    rcx,rbx
0x00473a46: call   0x1400d17d0
0x00473a4b: mov    rax,QWORD PTR [rbx+0x80]
0x00473a52: sub    rax,QWORD PTR [rbx+0x78]
0x00473a56: sar    rax,0x3
0x00473a5a: cmp    eax,edi
0x00473a5c: cmovl  eax,edi
0x00473a5f: mov    edx,DWORD PTR [rbp-0x71]
0x00473a62: dec    edx
0x00473a64: add    edx,eax
0x00473a66: mov    DWORD PTR [rbp-0x71],edx
0x00473a69: movzx  r9d,BYTE PTR [rip+0x1f16a54]        # 0x14238a4c5
0x00473a71: lea    eax,[r13+0x2]
0x00473a75: mov    DWORD PTR [rbp-0x4d],eax
0x00473a78: mov    r8d,DWORD PTR [rbp-0x6d]
0x00473a7c: lea    eax,[r8-0x2]
0x00473a80: mov    DWORD PTR [rbp-0x75],eax
0x00473a83: mov    edi,DWORD PTR [rbp-0x79]
0x00473a86: add    edi,0x4
0x00473a89: mov    eax,DWORD PTR [rbp-0x65]
0x00473a8c: mov    ecx,eax
0x00473a8e: sub    ecx,edi
0x00473a90: dec    ecx
0x00473a92: mov    DWORD PTR [rbp-0x59],ecx
0x00473a95: cmp    edx,ecx
0x00473a97: jle    0x140473aa3
0x00473a99: lea    eax,[r8-0x4]
0x00473a9d: mov    DWORD PTR [rbp-0x75],eax
0x00473aa0: mov    eax,DWORD PTR [rbp-0x65]
0x00473aa3: test   r9b,r9b
0x00473aa6: je     0x140473b2f
0x00473aac: cmp    edx,ecx
0x00473aae: jle    0x140473b2f
0x00473ab0: cmp    r12d,r13d
0x00473ab3: jl     0x140473b2f
0x00473ab5: cmp    r12d,r8d
0x00473ab8: jg     0x140473b2f
0x00473aba: cmp    r14d,edi
0x00473abd: jl     0x140473b2f
0x00473abf: cmp    r14d,eax
0x00473ac2: jg     0x140473b2f
0x00473ac4: mov    QWORD PTR [rsp+0x38],r15
0x00473ac9: mov    eax,DWORD PTR [rsi+0x2c8]
0x00473acf: mov    DWORD PTR [rsp+0x20],eax
0x00473ad3: mov    DWORD PTR [rsp+0x24],r15d
0x00473ad8: lea    eax,[rdx-0x1]
0x00473adb: mov    DWORD PTR [rsp+0x28],eax
0x00473adf: lea    eax,[rdi+0x1]
0x00473ae2: mov    DWORD PTR [rsp+0x30],eax
0x00473ae6: lea    eax,[rdi-0x2]
0x00473ae9: add    eax,ecx
0x00473aeb: mov    DWORD PTR [rsp+0x34],eax
0x00473aef: mov    DWORD PTR [rsp+0x2c],ecx
0x00473af3: lea    rcx,[rsp+0x20]
0x00473af8: call   0x1400bb340
0x00473afd: lea    r9,[rsi+0x2cc]
0x00473b04: lea    r8,[rsi+0x2c8]
0x00473b0b: mov    rdx,QWORD PTR [rbp-0x41]
0x00473b0f: lea    rcx,[rsp+0x20]
0x00473b14: call   0x14140a220
0x00473b19: test   al,al
0x00473b1b: jne    0x140474564
0x00473b21: movzx  r9d,BYTE PTR [rip+0x1f1699c]        # 0x14238a4c5
0x00473b29: mov    ecx,DWORD PTR [rbp-0x59]
0x00473b2c: mov    edx,DWORD PTR [rbp-0x71]
0x00473b2f: cmp    BYTE PTR [rsi+0x2cc],0x0
0x00473b36: je     0x140473baa
0x00473b38: test   r9b,r9b
0x00473b3b: je     0x140473b9e
0x00473b3d: cmp    BYTE PTR [rip+0x1f1697a],0x0        # 0x14238a4be
0x00473b44: je     0x140473b9e
0x00473b46: mov    QWORD PTR [rsp+0x38],r15
0x00473b4b: mov    eax,DWORD PTR [rsi+0x2c8]
0x00473b51: mov    DWORD PTR [rsp+0x20],eax
0x00473b55: mov    DWORD PTR [rsp+0x24],r15d
0x00473b5a: lea    eax,[rdx-0x1]
0x00473b5d: mov    DWORD PTR [rsp+0x28],eax
0x00473b61: lea    eax,[rdi+0x1]
0x00473b64: mov    DWORD PTR [rsp+0x30],eax
0x00473b68: lea    eax,[rdi-0x2]
0x00473b6b: add    eax,ecx
0x00473b6d: mov    DWORD PTR [rsp+0x34],eax
0x00473b71: mov    DWORD PTR [rsp+0x2c],ecx
0x00473b75: lea    rcx,[rsp+0x20]
0x00473b7a: call   0x1400bb340
0x00473b7f: mov    edx,DWORD PTR [rsp+0x30]
0x00473b83: cmp    r14d,edx
0x00473b86: jle    0x140473634
0x00473b8c: mov    ecx,DWORD PTR [rsp+0x34]
0x00473b90: cmp    r14d,ecx
0x00473b93: jge    0x140473647
0x00473b99: jmp    0x14047365f
0x00473b9e: mov    BYTE PTR [rsi+0x2cc],0x0
0x00473ba5: jmp    0x140474564
0x00473baa: test   r9b,r9b
0x00473bad: je     0x140474564
0x00473bb3: cmp    BYTE PTR [rip+0x1f16902],0x0        # 0x14238a4bc
0x00473bba: je     0x140474564
0x00473bc0: cmp    edx,ecx
0x00473bc2: jle    0x140473ca2
0x00473bc8: mov    eax,DWORD PTR [rbp-0x75]
0x00473bcb: inc    eax
0x00473bcd: cmp    r12d,eax
0x00473bd0: jl     0x140473ca2
0x00473bd6: inc    eax
0x00473bd8: cmp    r12d,eax
0x00473bdb: jg     0x140473ca2
0x00473be1: cmp    r14d,edi
0x00473be4: jl     0x140473ca2
0x00473bea: lea    r8d,[rcx+rdi*1]
0x00473bee: lea    eax,[r8-0x1]
0x00473bf2: cmp    r14d,eax
0x00473bf5: jg     0x140473ca2
0x00473bfb: mov    BYTE PTR [rip+0x1f168ba],0x0        # 0x14238a4bc
0x00473c02: mov    eax,DWORD PTR [rsi+0x2c8]
0x00473c08: mov    DWORD PTR [rsp+0x20],eax
0x00473c0c: lea    eax,[rdx-0x1]
0x00473c0f: mov    DWORD PTR [rsp+0x28],eax
0x00473c13: lea    eax,[rdi+0x1]
0x00473c16: mov    DWORD PTR [rsp+0x30],eax
0x00473c1a: lea    eax,[r8-0x2]
0x00473c1e: mov    DWORD PTR [rsp+0x2c],ecx
0x00473c22: mov    QWORD PTR [rsp+0x38],r15
0x00473c27: mov    DWORD PTR [rsp+0x24],r15d
0x00473c2c: mov    DWORD PTR [rsp+0x34],eax
0x00473c30: lea    rcx,[rsp+0x20]
0x00473c35: call   0x1400bb340
0x00473c3a: mov    eax,DWORD PTR [rsp+0x30]
0x00473c3e: dec    eax
0x00473c40: cmp    r14d,eax
0x00473c43: mov    BYTE PTR [rsi+0x2cc],0x0
0x00473c4a: je     0x1404733a3
0x00473c50: mov    eax,DWORD PTR [rsp+0x34]
0x00473c54: inc    eax
0x00473c56: cmp    r14d,eax
0x00473c59: je     0x1404733ca
0x00473c5f: cmp    r14d,DWORD PTR [rsp+0x38]
0x00473c64: jl     0x1404733f7
0x00473c6a: cmp    r14d,DWORD PTR [rbp-0x7d]
0x00473c6e: jg     0x140473c7e
0x00473c70: mov    BYTE PTR [rsi+0x2cc],0x1
0x00473c77: mov    al,0x1
0x00473c79: jmp    0x140474566
0x00473c7e: mov    edx,DWORD PTR [rsp+0x20]
0x00473c82: add    edx,DWORD PTR [rsp+0x2c]
0x00473c86: mov    ecx,DWORD PTR [rsp+0x28]
0x00473c8a: sub    ecx,DWORD PTR [rsp+0x2c]
0x00473c8e: inc    ecx
0x00473c90: cmp    edx,ecx
0x00473c92: cmovg  edx,ecx
0x00473c95: mov    DWORD PTR [rsi+0x2c8],edx
0x00473c9b: mov    al,0x1
0x00473c9d: jmp    0x140474566
0x00473ca2: mov    eax,DWORD PTR [rsi+0x2c8]
0x00473ca8: sub    edx,ecx
0x00473caa: cmp    eax,edx
0x00473cac: cmovle edx,eax
0x00473caf: mov    eax,r15d
0x00473cb2: test   edx,edx
0x00473cb4: cmovns eax,edx
0x00473cb7: sub    edi,eax
0x00473cb9: mov    rax,QWORD PTR [rsi+0x320]
0x00473cc0: sub    rax,QWORD PTR [rsi+0x318]
0x00473cc7: sar    rax,0x3
0x00473ccb: test   eax,eax
0x00473ccd: jle    0x140474564
0x00473cd3: mov    rbx,r15
0x00473cd6: cdqe
0x00473cd8: mov    QWORD PTR [rsp+0x20],rax
0x00473cdd: nop    DWORD PTR [rax]
0x00473ce0: mov    rax,QWORD PTR [rsi+0x318]
0x00473ce7: mov    r13,QWORD PTR [rax+rbx*8]
0x00473ceb: mov    rcx,r13
0x00473cee: call   0x1400d17d0
0x00473cf3: mov    eax,0x3
0x00473cf8: mov    ecx,eax
0x00473cfa: cmp    r15d,DWORD PTR [rsi+0x294]
0x00473d01: jne    0x140473d17
0x00473d03: mov    rcx,QWORD PTR [r13+0x80]
0x00473d0a: sub    rcx,QWORD PTR [r13+0x78]
0x00473d0e: sar    rcx,0x3
0x00473d12: cmp    ecx,eax
0x00473d14: cmovl  ecx,eax
0x00473d17: cmp    r12d,DWORD PTR [rbp-0x4d]
0x00473d1b: jl     0x140473d32
0x00473d1d: cmp    r12d,DWORD PTR [rbp-0x75]
0x00473d21: jg     0x140473d32
0x00473d23: cmp    r14d,edi
0x00473d26: jl     0x140473d32
0x00473d28: lea    eax,[rdi+0x1]
0x00473d2b: add    eax,ecx
0x00473d2d: cmp    r14d,eax
0x00473d30: jle    0x140473d49
0x00473d32: add    edi,0x2
0x00473d35: add    edi,ecx
0x00473d37: inc    r15d
0x00473d3a: inc    rbx
0x00473d3d: cmp    rbx,QWORD PTR [rsp+0x20]
0x00473d42: jl     0x140473ce0
0x00473d44: jmp    0x140474564
0x00473d49: mov    BYTE PTR [rip+0x1f1676c],0x0        # 0x14238a4bc
0x00473d50: mov    DWORD PTR [rsi+0x294],r15d
0x00473d57: mov    rcx,r13
0x00473d5a: call   0x1400d17d0
0x00473d5f: mov    al,0x1
0x00473d61: jmp    0x140474566
0x00473d66: lea    r10d,[r13+0x2]
0x00473d6a: mov    DWORD PTR [rbp-0x61],r10d
0x00473d6e: cmp    QWORD PTR [rsi+0x230],0x0
0x00473d76: je     0x1404741c5
0x00473d7c: mov    r8d,DWORD PTR [rbp-0x6d]
0x00473d80: lea    ebx,[r8-0x4]
0x00473d84: sub    ebx,r10d
0x00473d87: inc    ebx
0x00473d89: mov    DWORD PTR [rbp-0x59],ebx
0x00473d8c: cmp    DWORD PTR [rsi+0x210],ebx
0x00473d92: je     0x140473ed4
0x00473d98: lea    r13,[rsi+0x1f8]
0x00473d9f: mov    rcx,r13
0x00473da2: call   0x1400bb940
0x00473da7: mov    DWORD PTR [rsi+0x210],ebx
0x00473dad: mov    r8d,ebx
0x00473db0: mov    rdx,QWORD PTR [rsi+0x230]
0x00473db7: mov    rcx,r13
0x00473dba: call   0x1408e4b80
0x00473dbf: mov    rdx,QWORD PTR [rsi+0x230]
0x00473dc6: add    rdx,0x28
0x00473dca: mov    r8d,ebx
0x00473dcd: mov    rcx,r13
0x00473dd0: call   0x1408e4b80
0x00473dd5: mov    ecx,0x20
0x00473dda: call   0x141534600
0x00473ddf: mov    rbx,rax
0x00473de2: xorps  xmm0,xmm0
0x00473de5: movups XMMWORD PTR [rax],xmm0
0x00473de8: mov    QWORD PTR [rax+0x10],r15
0x00473dec: mov    QWORD PTR [rax+0x18],0xf
0x00473df4: mov    BYTE PTR [rax],0x0
0x00473df7: mov    QWORD PTR [rsp+0x20],rax
0x00473dfc: xor    r8d,r8d
0x00473dff: lea    rdx,[rip+0x11726aa]        # 0x1415e64b0
0x00473e06: mov    rcx,rax
0x00473e09: call   0x14006f860
0x00473e0e: mov    rdx,QWORD PTR [r13+0x8]
0x00473e12: cmp    rdx,QWORD PTR [r13+0x10]
0x00473e16: je     0x140473e22
0x00473e18: mov    QWORD PTR [rdx],rbx
0x00473e1b: add    QWORD PTR [r13+0x8],0x8
0x00473e20: jmp    0x140473e2f
0x00473e22: lea    r8,[rsp+0x20]
0x00473e27: mov    rcx,r13
0x00473e2a: call   0x1400bacc0
0x00473e2f: mov    rdi,QWORD PTR [rsi+0x230]
0x00473e36: mov    rbx,QWORD PTR [rdi+0x110]
0x00473e3d: mov    rdi,QWORD PTR [rdi+0x118]
0x00473e44: mov    r14d,DWORD PTR [rbp-0x59]
0x00473e48: cmp    rbx,rdi
0x00473e4b: jae    0x140473ec0
0x00473e4d: mov    ecx,0x20
0x00473e52: call   0x141534600
0x00473e57: mov    QWORD PTR [rsp+0x20],rax
0x00473e5c: xorps  xmm0,xmm0
0x00473e5f: movups XMMWORD PTR [rax],xmm0
0x00473e62: mov    QWORD PTR [rax+0x10],r15
0x00473e66: mov    QWORD PTR [rax+0x18],0xf
0x00473e6e: mov    BYTE PTR [rax],0x0
0x00473e71: mov    QWORD PTR [rbp-0x59],rax
0x00473e75: xor    r8d,r8d
0x00473e78: lea    rdx,[rip+0x1172631]        # 0x1415e64b0
0x00473e7f: mov    rcx,rax
0x00473e82: call   0x14006f860
0x00473e87: mov    rdx,QWORD PTR [r13+0x8]
0x00473e8b: cmp    rdx,QWORD PTR [r13+0x10]
0x00473e8f: je     0x140473ea0
0x00473e91: mov    rax,QWORD PTR [rsp+0x20]
0x00473e96: mov    QWORD PTR [rdx],rax
0x00473e99: add    QWORD PTR [r13+0x8],0x8
0x00473e9e: jmp    0x140473eac
0x00473ea0: lea    r8,[rbp-0x59]
0x00473ea4: mov    rcx,r13
0x00473ea7: call   0x1400bacc0
0x00473eac: mov    r8d,r14d
0x00473eaf: mov    rdx,QWORD PTR [rbx]
0x00473eb2: mov    rcx,r13
0x00473eb5: call   0x1408e4b80
0x00473eba: add    rbx,0x8
0x00473ebe: jmp    0x140473e48
0x00473ec0: movzx  r9d,BYTE PTR [rip+0x1f165fd]        # 0x14238a4c5
0x00473ec8: mov    r14d,DWORD PTR [rbp-0x49]
0x00473ecc: mov    r13d,DWORD PTR [rbp-0x4d]
0x00473ed0: mov    r8d,DWORD PTR [rbp-0x6d]
0x00473ed4: mov    ecx,DWORD PTR [rbp-0x79]
0x00473ed7: add    ecx,0x4
0x00473eda: mov    DWORD PTR [rbp-0x59],ecx
0x00473edd: mov    eax,DWORD PTR [rbp-0x65]
0x00473ee0: mov    edi,eax
0x00473ee2: sub    edi,ecx
0x00473ee4: dec    edi
0x00473ee6: mov    rdx,QWORD PTR [rsi+0x200]
0x00473eed: sub    rdx,QWORD PTR [rsi+0x1f8]
0x00473ef4: sar    rdx,0x3
0x00473ef8: mov    QWORD PTR [rsp+0x20],rdx
0x00473efd: test   r9b,r9b
0x00473f00: je     0x140473f7e
0x00473f02: cmp    edx,edi
0x00473f04: jle    0x140473f7e
0x00473f06: cmp    r12d,r13d
0x00473f09: jl     0x140473f7e
0x00473f0b: cmp    r12d,r8d
0x00473f0e: jg     0x140473f7e
0x00473f10: cmp    r14d,ecx
0x00473f13: jl     0x140473f7e
0x00473f15: cmp    r14d,eax
0x00473f18: jg     0x140473f7e
0x00473f1a: mov    QWORD PTR [rbp-0x21],r15
0x00473f1e: mov    eax,DWORD PTR [rsi+0x240]
0x00473f24: mov    DWORD PTR [rbp-0x39],eax
0x00473f27: mov    DWORD PTR [rbp-0x35],r15d
0x00473f2b: lea    eax,[rdx-0x1]
0x00473f2e: mov    DWORD PTR [rbp-0x31],eax
0x00473f31: lea    eax,[rcx+0x1]
0x00473f34: mov    DWORD PTR [rbp-0x29],eax
0x00473f37: lea    eax,[rcx-0x2]
0x00473f3a: add    eax,edi
0x00473f3c: mov    DWORD PTR [rbp-0x25],eax
0x00473f3f: mov    DWORD PTR [rbp-0x2d],edi
0x00473f42: lea    rcx,[rbp-0x39]
0x00473f46: call   0x1400bb340
0x00473f4b: lea    r9,[rsi+0x244]
0x00473f52: lea    r8,[rsi+0x240]
0x00473f59: mov    rdx,QWORD PTR [rbp-0x41]
0x00473f5d: lea    rcx,[rbp-0x39]
0x00473f61: call   0x14140a220
0x00473f66: test   al,al
0x00473f68: jne    0x140474564
0x00473f6e: movzx  r9d,BYTE PTR [rip+0x1f1654f]        # 0x14238a4c5
0x00473f76: mov    ecx,DWORD PTR [rbp-0x59]
0x00473f79: mov    rdx,QWORD PTR [rsp+0x20]
0x00473f7e: cmp    BYTE PTR [rsi+0x244],0x0
0x00473f85: je     0x14047407c
0x00473f8b: test   r9b,r9b
0x00473f8e: je     0x140474070
0x00473f94: cmp    BYTE PTR [rip+0x1f16523],0x0        # 0x14238a4be
0x00473f9b: je     0x140474070
0x00473fa1: mov    QWORD PTR [rsp+0x38],r15
0x00473fa6: mov    eax,DWORD PTR [rsi+0x240]
0x00473fac: mov    DWORD PTR [rsp+0x20],eax
0x00473fb0: mov    DWORD PTR [rsp+0x24],r15d
0x00473fb5: lea    eax,[rdx-0x1]
0x00473fb8: mov    DWORD PTR [rsp+0x28],eax
0x00473fbc: lea    eax,[rcx+0x1]
0x00473fbf: mov    DWORD PTR [rsp+0x30],eax
0x00473fc3: lea    eax,[rdi-0x2]
0x00473fc6: add    eax,ecx
0x00473fc8: mov    DWORD PTR [rsp+0x34],eax
0x00473fcc: mov    DWORD PTR [rsp+0x2c],edi
0x00473fd0: lea    rcx,[rsp+0x20]
0x00473fd5: call   0x1400bb340
0x00473fda: mov    edx,DWORD PTR [rsp+0x30]
0x00473fde: cmp    r14d,edx
0x00473fe1: jg     0x140473fed
0x00473fe3: mov    eax,DWORD PTR [rsp+0x24]
0x00473fe7: mov    DWORD PTR [rsp+0x20],eax
0x00473feb: jmp    0x140474057
0x00473fed: mov    ecx,DWORD PTR [rsp+0x34]
0x00473ff1: cmp    r14d,ecx
0x00473ff4: jl     0x14047400e
0x00473ff6: mov    eax,DWORD PTR [rsp+0x28]
0x00473ffa: sub    eax,DWORD PTR [rsp+0x2c]
0x00473ffe: inc    eax
0x00474000: mov    DWORD PTR [rsp+0x20],eax
0x00474004: mov    ecx,DWORD PTR [rsp+0x24]
0x00474008: cmp    eax,ecx
0x0047400a: jge    0x140474057
0x0047400c: jmp    0x140474053
0x0047400e: cmp    ecx,edx
0x00474010: jle    0x140474057
0x00474012: mov    r8d,DWORD PTR [rsp+0x28]
0x00474017: sub    r8d,DWORD PTR [rsp+0x2c]
0x0047401c: mov    eax,r8d
0x0047401f: mov    r9d,DWORD PTR [rsp+0x24]
0x00474024: sub    eax,r9d
0x00474027: add    eax,0x1
0x0047402a: cmovns r15d,eax
0x0047402e: sub    r14d,edx
0x00474031: imul   r15d,r14d
0x00474035: sub    ecx,edx
0x00474037: inc    ecx
0x00474039: mov    eax,r15d
0x0047403c: cdq
0x0047403d: idiv   ecx
0x0047403f: lea    ecx,[rax+r9*1]
0x00474043: lea    eax,[r8+0x1]
0x00474047: cmp    ecx,eax
0x00474049: cmovg  ecx,eax
0x0047404c: cmp    ecx,r9d
0x0047404f: cmovl  ecx,r9d
0x00474053: mov    DWORD PTR [rsp+0x20],ecx
0x00474057: lea    rcx,[rsp+0x20]
0x0047405c: call   0x1400bb340
0x00474061: mov    eax,DWORD PTR [rsp+0x20]
0x00474065: mov    DWORD PTR [rsi+0x240],eax
0x0047406b: jmp    0x140474564
0x00474070: mov    BYTE PTR [rsi+0x244],0x0
0x00474077: jmp    0x140474564
0x0047407c: test   r9b,r9b
0x0047407f: je     0x140474564
0x00474085: cmp    BYTE PTR [rip+0x1f16430],0x0        # 0x14238a4bc
0x0047408c: je     0x140474564
0x00474092: cmp    edx,edi
0x00474094: jle    0x140474564
0x0047409a: mov    eax,DWORD PTR [rbp-0x6d]
0x0047409d: add    eax,0xfffffffd
0x004740a0: cmp    r12d,eax
0x004740a3: jl     0x140474564
0x004740a9: inc    eax
0x004740ab: cmp    r12d,eax
0x004740ae: jg     0x140474564
0x004740b4: cmp    r14d,ecx
0x004740b7: jl     0x140474564
0x004740bd: lea    r8d,[rcx+rdi*1]
0x004740c1: lea    eax,[r8-0x1]
0x004740c5: cmp    r14d,eax
0x004740c8: jg     0x140474564
0x004740ce: mov    BYTE PTR [rip+0x1f163e7],0x0        # 0x14238a4bc
0x004740d5: mov    QWORD PTR [rsp+0x38],r15
0x004740da: mov    eax,DWORD PTR [rsi+0x240]
0x004740e0: mov    DWORD PTR [rsp+0x20],eax
0x004740e4: mov    DWORD PTR [rsp+0x24],r15d
0x004740e9: lea    eax,[rdx-0x1]
0x004740ec: mov    DWORD PTR [rsp+0x28],eax
0x004740f0: lea    eax,[rcx+0x1]
0x004740f3: mov    DWORD PTR [rsp+0x30],eax
0x004740f7: lea    eax,[r8-0x2]
0x004740fb: mov    DWORD PTR [rsp+0x34],eax
0x004740ff: mov    DWORD PTR [rsp+0x2c],edi
0x00474103: lea    rcx,[rsp+0x20]
0x00474108: call   0x1400bb340
0x0047410d: mov    BYTE PTR [rsi+0x244],0x0
0x00474114: mov    eax,DWORD PTR [rsp+0x30]
0x00474118: dec    eax
0x0047411a: cmp    r14d,eax
0x0047411d: jne    0x14047413b
0x0047411f: mov    ecx,DWORD PTR [rsp+0x20]
0x00474123: dec    ecx
0x00474125: cmp    ecx,DWORD PTR [rsp+0x24]
0x00474129: cmovl  ecx,DWORD PTR [rsp+0x24]
0x0047412e: mov    DWORD PTR [rsi+0x240],ecx
0x00474134: mov    al,0x1
0x00474136: jmp    0x140474566
0x0047413b: mov    eax,DWORD PTR [rsp+0x34]
0x0047413f: inc    eax
0x00474141: cmp    r14d,eax
0x00474144: jne    0x140474168
0x00474146: mov    ecx,DWORD PTR [rsp+0x20]
0x0047414a: inc    ecx
0x0047414c: mov    eax,DWORD PTR [rsp+0x28]
0x00474150: sub    eax,DWORD PTR [rsp+0x2c]
0x00474154: inc    eax
0x00474156: cmp    ecx,eax
0x00474158: cmovg  ecx,eax
0x0047415b: mov    DWORD PTR [rsi+0x240],ecx
0x00474161: mov    al,0x1
0x00474163: jmp    0x140474566
0x00474168: cmp    r14d,DWORD PTR [rsp+0x38]
0x0047416d: jl     0x1404741a7
0x0047416f: cmp    r14d,DWORD PTR [rbp-0x7d]
0x00474173: jg     0x140474183
0x00474175: mov    BYTE PTR [rsi+0x244],0x1
0x0047417c: mov    al,0x1
0x0047417e: jmp    0x140474566
0x00474183: mov    edx,DWORD PTR [rsp+0x20]
0x00474187: add    edx,DWORD PTR [rsp+0x2c]
0x0047418b: mov    ecx,DWORD PTR [rsp+0x28]
0x0047418f: sub    ecx,DWORD PTR [rsp+0x2c]
0x00474193: inc    ecx
0x00474195: cmp    edx,ecx
0x00474197: cmovg  edx,ecx
0x0047419a: mov    DWORD PTR [rsi+0x240],edx
0x004741a0: mov    al,0x1
0x004741a2: jmp    0x140474566
0x004741a7: mov    ecx,DWORD PTR [rsp+0x20]
0x004741ab: sub    ecx,DWORD PTR [rsp+0x2c]
0x004741af: cmp    ecx,DWORD PTR [rsp+0x24]
0x004741b3: cmovl  ecx,DWORD PTR [rsp+0x24]
0x004741b8: mov    DWORD PTR [rsi+0x240],ecx
0x004741be: mov    al,0x1
0x004741c0: jmp    0x140474566
0x004741c5: mov    r11d,DWORD PTR [rbp-0x6d]
0x004741c9: lea    eax,[r11-0x2]
0x004741cd: mov    DWORD PTR [rbp-0x71],eax
0x004741d0: mov    edi,DWORD PTR [rbp-0x79]
0x004741d3: add    edi,0x4
0x004741d6: mov    ebx,DWORD PTR [rbp-0x65]
0x004741d9: mov    ecx,ebx
0x004741db: sub    ecx,edi
0x004741dd: dec    ecx
0x004741df: mov    eax,0x55555556
0x004741e4: imul   ecx
0x004741e6: mov    eax,edx
0x004741e8: shr    eax,0x1f
0x004741eb: add    edx,eax
0x004741ed: mov    DWORD PTR [rbp-0x59],edx
0x004741f0: mov    r8,QWORD PTR [rsi+0x220]
0x004741f7: sub    r8,QWORD PTR [rsi+0x218]
0x004741fe: sar    r8,0x3
0x00474202: mov    QWORD PTR [rsp+0x20],r8
0x00474207: cmp    r8d,edx
0x0047420a: jle    0x140474213
0x0047420c: lea    eax,[r11-0x4]
0x00474210: mov    DWORD PTR [rbp-0x71],eax
0x00474213: test   r9b,r9b
0x00474216: je     0x1404742a5
0x0047421c: cmp    r8d,edx
0x0047421f: jle    0x1404742a5
0x00474225: cmp    r12d,r13d
0x00474228: jl     0x1404742a5
0x0047422a: cmp    r12d,r11d
0x0047422d: jg     0x1404742a5
0x0047422f: cmp    r14d,edi
0x00474232: jl     0x1404742a5
0x00474234: cmp    r14d,ebx
0x00474237: jg     0x1404742a5
0x00474239: mov    QWORD PTR [rbp-0x21],r15
0x0047423d: mov    eax,DWORD PTR [rsi+0x238]
0x00474243: mov    DWORD PTR [rbp-0x39],eax
0x00474246: mov    DWORD PTR [rbp-0x35],r15d
0x0047424a: lea    eax,[r8-0x1]
0x0047424e: mov    DWORD PTR [rbp-0x31],eax
0x00474251: lea    eax,[rdi+0x1]
0x00474254: mov    DWORD PTR [rbp-0x29],eax
0x00474257: lea    ecx,[rdi-0x2]
0x0047425a: lea    ecx,[rcx+rdx*2]
0x0047425d: add    ecx,edx
0x0047425f: mov    DWORD PTR [rbp-0x25],ecx
0x00474262: mov    DWORD PTR [rbp-0x2d],edx
0x00474265: lea    rcx,[rbp-0x39]
0x00474269: call   0x1400bb340
0x0047426e: lea    r9,[rsi+0x23c]
0x00474275: lea    r8,[rsi+0x238]
0x0047427c: mov    rdx,QWORD PTR [rbp-0x41]
0x00474280: lea    rcx,[rbp-0x39]
0x00474284: call   0x14140a220
0x00474289: test   al,al
0x0047428b: jne    0x140474564
0x00474291: movzx  r9d,BYTE PTR [rip+0x1f1622c]        # 0x14238a4c5
0x00474299: mov    edx,DWORD PTR [rbp-0x59]
0x0047429c: mov    r8,QWORD PTR [rsp+0x20]
0x004742a1: mov    r10d,DWORD PTR [rbp-0x61]
0x004742a5: cmp    BYTE PTR [rsi+0x23c],0x0
0x004742ac: je     0x1404743a7
0x004742b2: test   r9b,r9b
0x004742b5: je     0x14047439b
0x004742bb: cmp    BYTE PTR [rip+0x1f161fc],0x0        # 0x14238a4be
0x004742c2: je     0x14047439b
0x004742c8: mov    QWORD PTR [rsp+0x38],r15
0x004742cd: mov    eax,DWORD PTR [rsi+0x238]
0x004742d3: mov    DWORD PTR [rsp+0x20],eax
0x004742d7: mov    DWORD PTR [rsp+0x24],r15d
0x004742dc: lea    eax,[r8-0x1]
0x004742e0: mov    DWORD PTR [rsp+0x28],eax
0x004742e4: lea    eax,[rdi+0x1]
0x004742e7: mov    DWORD PTR [rsp+0x30],eax
0x004742eb: lea    ecx,[rdi-0x2]
0x004742ee: lea    ecx,[rcx+rdx*2]
0x004742f1: add    ecx,edx
0x004742f3: mov    DWORD PTR [rsp+0x34],ecx
0x004742f7: mov    DWORD PTR [rsp+0x2c],edx
0x004742fb: lea    rcx,[rsp+0x20]
0x00474300: call   0x1400bb340
0x00474305: mov    edx,DWORD PTR [rsp+0x30]
0x00474309: cmp    r14d,edx
0x0047430c: jg     0x140474318
0x0047430e: mov    eax,DWORD PTR [rsp+0x24]
0x00474312: mov    DWORD PTR [rsp+0x20],eax
0x00474316: jmp    0x140474382
0x00474318: mov    ecx,DWORD PTR [rsp+0x34]
0x0047431c: cmp    r14d,ecx
0x0047431f: jl     0x140474339
0x00474321: mov    eax,DWORD PTR [rsp+0x28]
0x00474325: sub    eax,DWORD PTR [rsp+0x2c]
0x00474329: inc    eax
0x0047432b: mov    DWORD PTR [rsp+0x20],eax
0x0047432f: mov    ecx,DWORD PTR [rsp+0x24]
0x00474333: cmp    eax,ecx
0x00474335: jge    0x140474382
0x00474337: jmp    0x14047437e
0x00474339: cmp    ecx,edx
0x0047433b: jle    0x140474382
0x0047433d: mov    r8d,DWORD PTR [rsp+0x28]
0x00474342: sub    r8d,DWORD PTR [rsp+0x2c]
0x00474347: mov    eax,r8d
0x0047434a: mov    r9d,DWORD PTR [rsp+0x24]
0x0047434f: sub    eax,r9d
0x00474352: add    eax,0x1
0x00474355: cmovns r15d,eax
0x00474359: sub    r14d,edx
0x0047435c: imul   r15d,r14d
0x00474360: sub    ecx,edx
0x00474362: inc    ecx
0x00474364: mov    eax,r15d
0x00474367: cdq
0x00474368: idiv   ecx
0x0047436a: lea    ecx,[rax+r9*1]
0x0047436e: lea    eax,[r8+0x1]
0x00474372: cmp    ecx,eax
0x00474374: cmovg  ecx,eax
0x00474377: cmp    ecx,r9d
0x0047437a: cmovl  ecx,r9d
0x0047437e: mov    DWORD PTR [rsp+0x20],ecx
0x00474382: lea    rcx,[rsp+0x20]
0x00474387: call   0x1400bb340
0x0047438c: mov    eax,DWORD PTR [rsp+0x20]
0x00474390: mov    DWORD PTR [rsi+0x238],eax
0x00474396: jmp    0x140474564
0x0047439b: mov    BYTE PTR [rsi+0x23c],0x0
0x004743a2: jmp    0x140474564
0x004743a7: test   r9b,r9b
0x004743aa: je     0x140474564
0x004743b0: cmp    BYTE PTR [rip+0x1f16105],0x0        # 0x14238a4bc
0x004743b7: je     0x140474564
0x004743bd: mov    r9d,DWORD PTR [rbp-0x71]
0x004743c1: cmp    r8d,edx
0x004743c4: jle    0x1404744e1
0x004743ca: lea    eax,[r9+0x1]
0x004743ce: cmp    r12d,eax
0x004743d1: jl     0x1404744e1
0x004743d7: inc    eax
0x004743d9: cmp    r12d,eax
0x004743dc: jg     0x1404744e1
0x004743e2: cmp    r14d,edi
0x004743e5: jl     0x1404744e1
0x004743eb: lea    ecx,[rdi+rdx*2]
0x004743ee: lea    eax,[rcx-0x1]
0x004743f1: add    eax,edx
0x004743f3: cmp    r14d,eax
0x004743f6: jg     0x1404744e1
0x004743fc: mov    BYTE PTR [rip+0x1f160b9],0x0        # 0x14238a4bc
0x00474403: mov    QWORD PTR [rsp+0x38],r15
0x00474408: mov    eax,DWORD PTR [rsi+0x238]
0x0047440e: mov    DWORD PTR [rsp+0x20],eax
0x00474412: mov    DWORD PTR [rsp+0x24],r15d
0x00474417: lea    eax,[r8-0x1]
0x0047441b: mov    DWORD PTR [rsp+0x28],eax
0x0047441f: lea    eax,[rdi+0x1]
0x00474422: mov    DWORD PTR [rsp+0x30],eax
0x00474426: lea    eax,[rcx-0x2]
0x00474429: add    eax,edx
0x0047442b: mov    DWORD PTR [rsp+0x34],eax
0x0047442f: mov    DWORD PTR [rsp+0x2c],edx
0x00474433: lea    rcx,[rsp+0x20]
0x00474438: call   0x1400bb340
0x0047443d: mov    BYTE PTR [rsi+0x23c],0x0
0x00474444: mov    eax,DWORD PTR [rsp+0x30]
0x00474448: dec    eax
0x0047444a: cmp    r14d,eax
0x0047444d: jne    0x140474457
0x0047444f: mov    ecx,DWORD PTR [rsp+0x20]
0x00474453: dec    ecx
0x00474455: jmp    0x1404744cb
0x00474457: mov    eax,DWORD PTR [rsp+0x34]
0x0047445b: inc    eax
0x0047445d: cmp    r14d,eax
0x00474460: jne    0x140474484
0x00474462: mov    ecx,DWORD PTR [rsp+0x20]
0x00474466: inc    ecx
0x00474468: mov    eax,DWORD PTR [rsp+0x28]
0x0047446c: sub    eax,DWORD PTR [rsp+0x2c]
0x00474470: inc    eax
0x00474472: cmp    ecx,eax
0x00474474: cmovg  ecx,eax
0x00474477: mov    DWORD PTR [rsi+0x238],ecx
0x0047447d: mov    al,0x1
0x0047447f: jmp    0x140474566
0x00474484: cmp    r14d,DWORD PTR [rsp+0x38]
0x00474489: jl     0x1404744c3
0x0047448b: cmp    r14d,DWORD PTR [rbp-0x7d]
0x0047448f: jg     0x14047449f
0x00474491: mov    BYTE PTR [rsi+0x23c],0x1
0x00474498: mov    al,0x1
0x0047449a: jmp    0x140474566
0x0047449f: mov    edx,DWORD PTR [rsp+0x20]
0x004744a3: add    edx,DWORD PTR [rsp+0x2c]
0x004744a7: mov    ecx,DWORD PTR [rsp+0x28]
0x004744ab: sub    ecx,DWORD PTR [rsp+0x2c]
0x004744af: inc    ecx
0x004744b1: cmp    edx,ecx
0x004744b3: cmovg  edx,ecx
0x004744b6: mov    DWORD PTR [rsi+0x238],edx
0x004744bc: mov    al,0x1
0x004744be: jmp    0x140474566
0x004744c3: mov    ecx,DWORD PTR [rsp+0x20]
0x004744c7: sub    ecx,DWORD PTR [rsp+0x2c]
0x004744cb: cmp    ecx,DWORD PTR [rsp+0x24]
0x004744cf: cmovl  ecx,DWORD PTR [rsp+0x24]
0x004744d4: mov    DWORD PTR [rsi+0x238],ecx
0x004744da: mov    al,0x1
0x004744dc: jmp    0x140474566
0x004744e1: mov    eax,DWORD PTR [rsi+0x238]
0x004744e7: mov    ecx,r8d
0x004744ea: sub    ecx,edx
0x004744ec: cmp    eax,ecx
0x004744ee: cmovle ecx,eax
0x004744f1: mov    ebx,r15d
0x004744f4: test   ecx,ecx
0x004744f6: cmovns ebx,ecx
0x004744f9: lea    ecx,[rbx+rdx*1]
0x004744fc: cmp    ebx,ecx
0x004744fe: jge    0x140474564
0x00474500: cmp    ebx,r8d
0x00474503: jge    0x140474564
0x00474505: cmp    r12d,r10d
0x00474508: jl     0x14047451c
0x0047450a: cmp    r12d,r9d
0x0047450d: jg     0x14047451c
0x0047450f: cmp    r14d,edi
0x00474512: jl     0x14047451c
0x00474514: lea    eax,[rdi+0x2]
0x00474517: cmp    r14d,eax
0x0047451a: jle    0x140474527
0x0047451c: add    edi,0x3
0x0047451f: inc    ebx
0x00474521: cmp    ebx,ecx
0x00474523: jl     0x140474500
0x00474525: jmp    0x140474564
0x00474527: mov    BYTE PTR [rip+0x1f15f8e],0x0        # 0x14238a4bc
0x0047452e: lea    rcx,[rsi+0x1f8]
0x00474535: call   0x1400bb940
0x0047453a: mov    DWORD PTR [rsi+0x210],r15d
0x00474541: mov    DWORD PTR [rsi+0x240],r15d
0x00474548: mov    BYTE PTR [rsi+0x244],0x0
0x0047454f: movsxd rcx,ebx
0x00474552: mov    rax,QWORD PTR [rsi+0x218]
0x00474559: mov    rcx,QWORD PTR [rax+rcx*8]
0x0047455d: mov    QWORD PTR [rsi+0x230],rcx
0x00474564: xor    al,al
0x00474566: mov    rcx,QWORD PTR [rbp+0x7]
0x0047456a: xor    rcx,rsp
0x0047456d: call   0x1415345d0
0x00474572: mov    rbx,QWORD PTR [rsp+0x120]
0x0047457a: add    rsp,0xd0
0x00474581: pop    r15
0x00474583: pop    r14
0x00474585: pop    r13
0x00474587: pop    r12
0x00474589: pop    rdi
0x0047458a: pop    rsi
0x0047458b: pop    rbp
0x0047458c: ret
