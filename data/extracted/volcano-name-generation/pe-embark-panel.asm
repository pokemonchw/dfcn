0x140826d20: mov    QWORD PTR [rsp+0x8],rbx
0x140826d25: mov    QWORD PTR [rsp+0x10],rsi
0x140826d2a: mov    QWORD PTR [rsp+0x18],rdi
0x140826d2f: push   rbp
0x140826d30: push   r12
0x140826d32: push   r13
0x140826d34: push   r14
0x140826d36: push   r15
0x140826d38: lea    rbp,[rsp-0x3010]
0x140826d40: mov    eax,0x3110
0x140826d45: call   0x141554810
0x140826d4a: sub    rsp,rax
0x140826d4d: mov    rax,QWORD PTR [rip+0x10972ec]        # 0x1418be040
0x140826d54: xor    rax,rsp
0x140826d57: mov    QWORD PTR [rbp+0x3008],rax
0x140826d5e: call   QWORD PTR [rip+0xdd932c]        # 0x141600090
0x140826d64: mov    DWORD PTR [rbp-0x50],eax
0x140826d67: xor    r13d,r13d
0x140826d6a: mov    esi,r13d
0x140826d6d: mov    DWORD PTR [rbp-0x6c],r13d
0x140826d71: mov    r14d,r13d
0x140826d74: mov    DWORD PTR [rbp-0x70],r13d
0x140826d78: mov    edi,r13d
0x140826d7b: mov    DWORD PTR [rsp+0x74],r13d
0x140826d80: cmp    BYTE PTR [rip+0x1e3c2bd],r13b        # 0x142663044
0x140826d87: je     0x140826eaa
0x140826d8d: mov    ecx,DWORD PTR [rip+0x1e3c271]        # 0x142663004
0x140826d93: cmp    ecx,0xffffffff
0x140826d96: je     0x140826dd1
0x140826d98: mov    eax,0x55555556
0x140826d9d: imul   ecx
0x140826d9f: mov    esi,edx
0x140826da1: shr    esi,0x1f
0x140826da4: add    esi,edx
0x140826da6: mov    DWORD PTR [rbp-0x6c],esi
0x140826da9: mov    eax,0x55555556
0x140826dae: imul   DWORD PTR [rip+0x1e3c254]        # 0x142663008
0x140826db4: mov    r14d,edx
0x140826db7: shr    r14d,0x1f
0x140826dbb: add    r14d,edx
0x140826dbe: mov    DWORD PTR [rbp-0x70],r14d
0x140826dc2: mov    edi,DWORD PTR [rip+0x1e3c244]        # 0x14266300c
0x140826dc8: mov    DWORD PTR [rsp+0x74],edi
0x140826dcc: jmp    0x140826f2c
0x140826dd1: lea    rcx,[rip+0x1be0770]        # 0x142407548
0x140826dd8: call   0x140070480
0x140826ddd: test   rax,rax
0x140826de0: je     0x140826e9d
0x140826de6: mov    rcx,QWORD PTR [rip+0x1be07a3]        # 0x142407590
0x140826ded: test   rcx,rcx
0x140826df0: je     0x140826e9d
0x140826df6: lea    r9,[rbp+0x0]
0x140826dfa: lea    r8,[rbp+0x4]
0x140826dfe: lea    rdx,[rbp+0x8]
0x140826e02: call   0x14137fd40
0x140826e07: mov    edx,0xa2
0x140826e0c: mov    rcx,QWORD PTR [rip+0x1be077d]        # 0x142407590
0x140826e13: call   0x140074860
0x140826e18: test   al,al
0x140826e1a: je     0x140826e2d
0x140826e1c: mov    edx,0x2e
0x140826e21: mov    rcx,QWORD PTR [rip+0x1be0768]        # 0x142407590
0x140826e28: call   0x140074de0
0x140826e2d: movsx  r10d,WORD PTR [rbp+0x8]
0x140826e32: mov    eax,0x2aaaaaab
0x140826e37: imul   r10d
0x140826e3a: mov    esi,edx
0x140826e3c: sar    esi,0x3
0x140826e3f: mov    eax,esi
0x140826e41: shr    eax,0x1f
0x140826e44: add    esi,eax
0x140826e46: add    esi,DWORD PTR [rip+0x1ce371c]        # 0x14250a568
0x140826e4c: mov    DWORD PTR [rbp-0x6c],esi
0x140826e4f: movsx  r8d,WORD PTR [rbp+0x4]
0x140826e54: mov    eax,0x2aaaaaab
0x140826e59: imul   r8d
0x140826e5c: mov    r14d,edx
0x140826e5f: sar    r14d,0x3
0x140826e63: mov    eax,r14d
0x140826e66: shr    eax,0x1f
0x140826e69: add    r14d,eax
0x140826e6c: add    r14d,DWORD PTR [rip+0x1ce36f9]        # 0x14250a56c
0x140826e73: mov    DWORD PTR [rbp-0x70],r14d
0x140826e77: movzx  r9d,WORD PTR [rbp+0x0]
0x140826e7c: movzx  edx,r10w
0x140826e80: lea    rcx,[rip+0x1bccae9]        # 0x1423f3970
0x140826e87: call   0x14007f270
0x140826e8c: mov    edi,eax
0x140826e8e: shr    edi,0xf
0x140826e91: and    edi,0x1
0x140826e94: mov    DWORD PTR [rsp+0x74],edi
0x140826e98: jmp    0x140826f2c
0x140826e9d: mov    DWORD PTR [rbp-0x6c],r13d
0x140826ea1: mov    DWORD PTR [rbp-0x70],r13d
0x140826ea5: jmp    0x140826f2c
0x140826eaa: mov    edx,DWORD PTR [rip+0x1e3c2a0]        # 0x142663150
0x140826eb0: lea    rcx,[rip+0x1ce33a1]        # 0x14250a258
0x140826eb7: call   0x140073ba0
0x140826ebc: mov    rbx,rax
0x140826ebf: test   rax,rax
0x140826ec2: je     0x140826f2c
0x140826ec4: movsx  ecx,WORD PTR [rax+0x4]
0x140826ec8: mov    eax,0x55555556
0x140826ecd: imul   ecx
0x140826ecf: mov    esi,edx
0x140826ed1: shr    esi,0x1f
0x140826ed4: add    esi,edx
0x140826ed6: mov    DWORD PTR [rbp-0x6c],esi
0x140826ed9: movsx  ecx,WORD PTR [rbx+0x6]
0x140826edd: mov    eax,0x55555556
0x140826ee2: imul   ecx
0x140826ee4: mov    r14d,edx
0x140826ee7: shr    r14d,0x1f
0x140826eeb: add    r14d,edx
0x140826eee: mov    DWORD PTR [rbp-0x70],r14d
0x140826ef2: movsx  edi,WORD PTR [rbx+0x8]
0x140826ef6: mov    DWORD PTR [rsp+0x74],edi
0x140826efa: cmp    DWORD PTR [rip+0x1097337],0x1        # 0x1418be238
0x140826f01: jne    0x140826f2c
0x140826f03: movsxd rax,DWORD PTR [rip+0x1e44a3e]        # 0x14266b948
0x140826f0a: cmp    eax,0xffffffff
0x140826f0d: je     0x140826f2c
0x140826f0f: mov    rdx,rax
0x140826f12: lea    rcx,[rip+0x1be06df]        # 0x1424075f8
0x140826f19: call   0x140070850
0x140826f1e: lea    rdx,[rbx+0x20]
0x140826f22: mov    rcx,QWORD PTR [rax]
0x140826f25: mov    ecx,DWORD PTR [rcx]
0x140826f27: call   0x1400bb3f0
0x140826f2c: mov    eax,esi
0x140826f2e: cdq
0x140826f2f: and    edx,0xf
0x140826f32: add    eax,edx
0x140826f34: mov    r10d,eax
0x140826f37: and    eax,0xf
0x140826f3a: sub    eax,edx
0x140826f3c: sar    r10d,0x4
0x140826f40: mov    DWORD PTR [rbp-0x7c],r10d
0x140826f44: mov    ebx,eax
0x140826f46: mov    DWORD PTR [rbp+0x3c],eax
0x140826f49: mov    eax,r14d
0x140826f4c: cdq
0x140826f4d: and    edx,0xf
0x140826f50: add    eax,edx
0x140826f52: mov    r8d,eax
0x140826f55: and    eax,0xf
0x140826f58: sub    eax,edx
0x140826f5a: sar    r8d,0x4
0x140826f5e: mov    DWORD PTR [rbp-0x68],r8d
0x140826f62: mov    r15d,eax
0x140826f65: mov    DWORD PTR [rbp+0x38],eax
0x140826f68: mov    rcx,QWORD PTR [rip+0x1ce7069]        # 0x14250dfd8
0x140826f6f: add    rcx,0xe8
0x140826f76: mov    BYTE PTR [rsp+0x20],0x1
0x140826f7b: mov    r9b,0x1
0x140826f7e: movzx  edx,r10w
0x140826f82: call   0x140fd99b0
0x140826f87: mov    WORD PTR [rsp+0x20],r15w
0x140826f8d: movzx  r9d,bx
0x140826f91: lea    r8,[rbp-0x2c]
0x140826f95: lea    rdx,[rbp-0x48]
0x140826f99: mov    rcx,rax
0x140826f9c: call   0x140fda9b0
0x140826fa1: cmp    BYTE PTR [rip+0x1e45b4c],r13b        # 0x14266caf4
0x140826fa8: jne    0x140831d14
0x140826fae: mov    ecx,0x2
0x140826fb3: lea    r12,[rip+0x1e458b6]        # 0x14266c870
0x140826fba: cmp    BYTE PTR [rip+0x1e45b34],r13b        # 0x14266caf5
0x140826fc1: je     0x140826fe3
0x140826fc3: mov    rax,QWORD PTR [rip+0x1e4591e]        # 0x14266c8e8
0x140826fca: test   rax,rax
0x140826fcd: je     0x140826fd2
0x140826fcf: or     DWORD PTR [rax],0x1
0x140826fd2: mov    BYTE PTR [rip+0x1e45b1c],r13b        # 0x14266caf5
0x140826fd9: mov    edx,ecx
0x140826fdb: mov    rcx,r12
0x140826fde: call   0x140b016a0
0x140826fe3: mov    rbx,0xffffffffffffffff
0x140826fea: mov    QWORD PTR [rbp+0x58],rbx
0x140826fee: mov    DWORD PTR [rbp-0x60],ebx
0x140826ff1: mov    DWORD PTR [rbp-0x5c],ebx
0x140826ff4: cmp    BYTE PTR [rip+0x1b8ba5a],r13b        # 0x1423b2a55
0x140826ffb: je     0x14082700d
0x140826ffd: lea    r8,[rbp-0x5c]
0x140827001: lea    rdx,[rbp-0x60]
0x140827005: mov    rcx,r12
0x140827008: call   0x1400bc970
0x14082700d: lea    r8,[rbp-0x80]
0x140827011: lea    rdx,[rbp-0x74]
0x140827015: lea    rcx,[rip+0x109c604]        # 0x1418c3620
0x14082701c: call   0x1404287a0
0x140827021: xor    r8d,r8d
0x140827024: movzx  edx,bl
0x140827027: xor    ecx,ecx
0x140827029: call   0x1408d8160
0x14082702e: cmp    BYTE PTR [rip+0x1e3bfdc],r13b        # 0x142663011
0x140827035: je     0x14082a200
0x14082703b: mov    r13d,DWORD PTR [rip+0x1bc8bc6]        # 0x1423efc08
0x140827042: add    r13d,0xfffffffd
0x140827046: mov    r12d,DWORD PTR [rbp-0x80]
0x14082704a: add    r12d,0xfffffff1
0x14082704e: mov    DWORD PTR [rbp-0x64],r12d
0x140827052: mov    r15d,r12d
0x140827055: lea    rbx,[rip+0x1e4f48c]        # 0x1426764e8
0x14082705c: lea    rdi,[rip+0x1e4f4b5]        # 0x142676518
0x140827063: mov    r12d,0x3
0x140827069: nop    DWORD PTR [rax+0x0]
0x140827070: mov    esi,r13d
0x140827073: mov    r14,r12
0x140827076: data16 nop WORD PTR [rax+rax*1+0x0]
0x140827080: mov    r8d,r15d
0x140827083: mov    edx,esi
0x140827085: lea    rcx,[rip+0x1e457e4]        # 0x14266c870
0x14082708c: call   0x1400bc750
0x140827091: xor    r8d,r8d
0x140827094: mov    edx,DWORD PTR [rbx]
0x140827096: lea    rcx,[rip+0x1e457d3]        # 0x14266c870
0x14082709d: call   0x140af4ba0
0x1408270a2: inc    esi
0x1408270a4: add    rbx,0x4
0x1408270a8: sub    r14,0x1
0x1408270ac: jne    0x140827080
0x1408270ae: inc    r15d
0x1408270b1: cmp    rbx,rdi
0x1408270b4: jl     0x140827070
0x1408270b6: mov    ecx,DWORD PTR [rbp-0x60]
0x1408270b9: mov    r12d,DWORD PTR [rbp-0x64]
0x1408270bd: cmp    ecx,r12d
0x1408270c0: jl     0x14082710c
0x1408270c2: lea    eax,[r12+0x4]
0x1408270c7: cmp    ecx,eax
0x1408270c9: jge    0x14082710c
0x1408270cb: mov    ecx,DWORD PTR [rbp-0x5c]
0x1408270ce: cmp    ecx,r13d
0x1408270d1: jl     0x14082710c
0x1408270d3: lea    eax,[r13+0x3]
0x1408270d7: cmp    ecx,eax
0x1408270d9: jge    0x14082710c
0x1408270db: mov    eax,DWORD PTR [rbp-0x80]
0x1408270de: add    eax,0xffffffe2
0x1408270e1: mov    DWORD PTR [rip+0x10a4325],eax        # 0x1418cb40c
0x1408270e7: lea    eax,[r13-0x2]
0x1408270eb: mov    DWORD PTR [rip+0x10a431f],eax        # 0x1418cb410
0x1408270f1: mov    BYTE PTR [rip+0x10a4310],r14b        # 0x1418cb408
0x1408270f8: mov    DWORD PTR [rip+0x10a42e6],0x221        # 0x1418cb3e8
0x140827102: mov    DWORD PTR [rip+0x10a42ec],0x1a7        # 0x1418cb3f8
0x14082710c: xor    edx,edx
0x14082710e: lea    rcx,[rip+0x1bc8adb]        # 0x1423efbf0
0x140827115: call   0x1400735c0
0x14082711a: mov    ebx,0x7
0x14082711f: test   al,al
0x140827121: je     0x14082717a
0x140827123: mov    rdx,QWORD PTR [rip+0x1e457be]        # 0x14266c8e8
0x14082712a: xor    r14d,r14d
0x14082712d: mov    edi,DWORD PTR [rbp-0x68]
0x140827130: test   rdx,rdx
0x140827133: je     0x1408271e5
0x140827139: mov    DWORD PTR [rsp+0x58],r14d
0x14082713e: mov    DWORD PTR [rsp+0x50],r14d
0x140827143: mov    QWORD PTR [rsp+0x48],r14
0x140827148: mov    BYTE PTR [rsp+0x40],0x1
0x14082714d: mov    BYTE PTR [rsp+0x38],r14b
0x140827152: mov    DWORD PTR [rsp+0x30],0xffffffff
0x14082715a: mov    DWORD PTR [rsp+0x28],ebx
0x14082715e: mov    BYTE PTR [rsp+0x20],0x1
0x140827163: mov    r9d,edi
0x140827166: mov    ebx,DWORD PTR [rbp-0x7c]
0x140827169: mov    r8d,ebx
0x14082716c: mov    rcx,QWORD PTR [rip+0x1ce6e65]        # 0x14250dfd8
0x140827173: call   0x1402f78c0
0x140827178: jmp    0x1408271e8
0x14082717a: lea    rcx,[rbp+0x2e40]
0x140827181: call   0x1400bd5c0
0x140827186: lea    rax,[rbp+0x2e40]
0x14082718d: mov    QWORD PTR [rsp+0x60],rax
0x140827192: mov    BYTE PTR [rsp+0x58],0x1
0x140827197: mov    BYTE PTR [rsp+0x50],0x0
0x14082719c: mov    DWORD PTR [rsp+0x48],0xffffffff
0x1408271a4: mov    DWORD PTR [rsp+0x40],ebx
0x1408271a8: mov    BYTE PTR [rsp+0x38],0x1
0x1408271ad: mov    eax,DWORD PTR [rip+0x1bc8a55]        # 0x1423efc08
0x1408271b3: mov    DWORD PTR [rsp+0x30],eax
0x1408271b7: mov    eax,DWORD PTR [rip+0x1bc8a47]        # 0x1423efc04
0x1408271bd: mov    DWORD PTR [rsp+0x28],eax
0x1408271c1: xor    r14d,r14d
0x1408271c4: mov    DWORD PTR [rsp+0x20],r14d
0x1408271c9: xor    r9d,r9d
0x1408271cc: mov    edi,DWORD PTR [rbp-0x68]
0x1408271cf: mov    r8d,edi
0x1408271d2: mov    ebx,DWORD PTR [rbp-0x7c]
0x1408271d5: mov    edx,ebx
0x1408271d7: mov    rcx,QWORD PTR [rip+0x1ce6dfa]        # 0x14250dfd8
0x1408271de: call   0x140f75bd0
0x1408271e3: jmp    0x1408271e8
0x1408271e5: mov    ebx,DWORD PTR [rbp-0x7c]
0x1408271e8: cmp    BYTE PTR [rip+0x1b8b866],0x0        # 0x1423b2a55
0x1408271ef: je     0x140831d14
0x1408271f5: lea    r8,[rbp+0xd0]
0x1408271fc: lea    rdx,[rbp+0xcc]
0x140827203: lea    rsi,[rip+0x1e45666]        # 0x14266c870
0x14082720a: mov    rcx,rsi
0x14082720d: call   0x1400bc970
0x140827212: lea    r8,[rbp+0xc8]
0x140827219: lea    rdx,[rbp+0xc4]
0x140827220: mov    rcx,rsi
0x140827223: call   0x14014ec70
0x140827228: xor    edx,edx
0x14082722a: lea    rcx,[rip+0x1bc89bf]        # 0x1423efbf0
0x140827231: call   0x1400735c0
0x140827236: test   al,al
0x140827238: je     0x140827279
0x14082723a: mov    rax,QWORD PTR [rip+0x1e456a7]        # 0x14266c8e8
0x140827241: mov    ecx,DWORD PTR [rax+0x4]
0x140827244: mov    r8d,DWORD PTR [rax+0x8]
0x140827248: sar    ecx,1
0x14082724a: mov    eax,DWORD PTR [rbp+0xc4]
0x140827250: cdq
0x140827251: and    edx,0xf
0x140827254: lea    r12d,[rdx+rax*1]
0x140827258: sar    r12d,0x4
0x14082725c: sub    r12d,ecx
0x14082725f: sar    r8d,1
0x140827262: mov    eax,DWORD PTR [rbp+0xc8]
0x140827268: cdq
0x140827269: and    edx,0xf
0x14082726c: lea    r15d,[rdx+rax*1]
0x140827270: sar    r15d,0x4
0x140827274: sub    r15d,r8d
0x140827277: jmp    0x14082729d
0x140827279: mov    eax,DWORD PTR [rip+0x1bc8985]        # 0x1423efc04
0x14082727f: sar    eax,1
0x140827281: mov    r12d,DWORD PTR [rbp+0xcc]
0x140827288: sub    r12d,eax
0x14082728b: mov    eax,DWORD PTR [rip+0x1bc8977]        # 0x1423efc08
0x140827291: sar    eax,1
0x140827293: mov    r15d,DWORD PTR [rbp+0xd0]
0x14082729a: sub    r15d,eax
0x14082729d: add    r12d,ebx
0x1408272a0: add    r15d,edi
0x1408272a3: mov    DWORD PTR [rsp+0x7c],r15d
0x1408272a8: mov    DWORD PTR [rbp-0x50],r12d
0x1408272ac: test   r12d,r12d
0x1408272af: js     0x140831d14
0x1408272b5: mov    rcx,QWORD PTR [rip+0x1ce6d1c]        # 0x14250dfd8
0x1408272bc: cmp    r12d,DWORD PTR [rcx+0xa0]
0x1408272c3: jge    0x140831d14
0x1408272c9: test   r15d,r15d
0x1408272cc: js     0x140831d14
0x1408272d2: cmp    r15d,DWORD PTR [rcx+0xa4]
0x1408272d9: jge    0x140831d14
0x1408272df: mov    r9d,0x9
0x1408272e5: movzx  r8d,r15w
0x1408272e9: movzx  edx,r12w
0x1408272ed: call   0x1400bd630
0x1408272f2: test   al,al
0x1408272f4: je     0x140831d14
0x1408272fa: mov    edi,DWORD PTR [rbp-0x80]
0x1408272fd: lea    r13d,[rdi-0x25]
0x140827301: mov    DWORD PTR [rsp+0x70],r13d
0x140827306: lea    esi,[r13-0x2]
0x14082730a: mov    eax,edi
0x14082730c: sub    eax,r13d
0x14082730f: dec    eax
0x140827311: mov    DWORD PTR [rsp+0x74],eax
0x140827315: cmp    BYTE PTR [rip+0x1b8b739],0x0        # 0x1423b2a55
0x14082731c: je     0x140827340
0x14082731e: mov    eax,DWORD PTR [rip+0x1bc88e0]        # 0x1423efc04
0x140827324: cdq
0x140827325: sub    eax,edx
0x140827327: sar    eax,1
0x140827329: cmp    DWORD PTR [rbp-0x60],eax
0x14082732c: jl     0x140827340
0x14082732e: mov    eax,DWORD PTR [rbp-0x74]
0x140827331: sub    eax,esi
0x140827333: add    esi,eax
0x140827335: add    edi,eax
0x140827337: add    r13d,eax
0x14082733a: mov    DWORD PTR [rsp+0x70],r13d
0x14082733f: nop
0x140827340: mov    ebx,esi
0x140827342: cmp    esi,edi
0x140827344: jg     0x1408273fe
0x14082734a: nop    WORD PTR [rax+rax*1+0x0]
0x140827350: mov    r8d,ebx
0x140827353: mov    edx,r14d
0x140827356: lea    rcx,[rip+0x1e45513]        # 0x14266c870
0x14082735d: call   0x1400bc750
0x140827362: xor    r8d,r8d
0x140827365: xor    edx,edx
0x140827367: lea    rcx,[rip+0x1e45502]        # 0x14266c870
0x14082736e: call   0x1400bc7c0
0x140827373: test   r14d,r14d
0x140827376: jne    0x14082739f
0x140827378: cmp    ebx,esi
0x14082737a: jne    0x140827384
0x14082737c: mov    edx,DWORD PTR [rip+0x1e46e12]        # 0x14266e194
0x140827382: jmp    0x1408273e8
0x140827384: lea    rcx,[rip+0x1e454e5]        # 0x14266c870
0x14082738b: cmp    ebx,edi
0x14082738d: jne    0x140827397
0x14082738f: mov    edx,DWORD PTR [rip+0x1e46e17]        # 0x14266e1ac
0x140827395: jmp    0x1408273ef
0x140827397: mov    edx,DWORD PTR [rip+0x1e46e03]        # 0x14266e1a0
0x14082739d: jmp    0x1408273ef
0x14082739f: cmp    r14d,0x25
0x1408273a3: jne    0x1408273cc
0x1408273a5: cmp    ebx,esi
0x1408273a7: jne    0x1408273b1
0x1408273a9: mov    edx,DWORD PTR [rip+0x1e46ded]        # 0x14266e19c
0x1408273af: jmp    0x1408273e8
0x1408273b1: lea    rcx,[rip+0x1e454b8]        # 0x14266c870
0x1408273b8: cmp    ebx,edi
0x1408273ba: jne    0x1408273c4
0x1408273bc: mov    edx,DWORD PTR [rip+0x1e46df2]        # 0x14266e1b4
0x1408273c2: jmp    0x1408273ef
0x1408273c4: mov    edx,DWORD PTR [rip+0x1e46dde]        # 0x14266e1a8
0x1408273ca: jmp    0x1408273ef
0x1408273cc: cmp    ebx,esi
0x1408273ce: jne    0x1408273d8
0x1408273d0: mov    edx,DWORD PTR [rip+0x1e46dc2]        # 0x14266e198
0x1408273d6: jmp    0x1408273e8
0x1408273d8: cmp    ebx,edi
0x1408273da: mov    edx,DWORD PTR [rip+0x1e46dd0]        # 0x14266e1b0
0x1408273e0: je     0x1408273e8
0x1408273e2: mov    edx,DWORD PTR [rip+0x1e46dbc]        # 0x14266e1a4
0x1408273e8: lea    rcx,[rip+0x1e45481]        # 0x14266c870
0x1408273ef: call   0x140af4570
0x1408273f4: inc    ebx
0x1408273f6: cmp    ebx,edi
0x1408273f8: jle    0x140827350
0x1408273fe: inc    r14d
0x140827401: cmp    r14d,0x25
0x140827405: jle    0x140827340
0x14082740b: xor    r8d,r8d
0x14082740e: mov    edx,0x7
0x140827413: mov    r9b,0x1
0x140827416: lea    rbx,[rip+0x1e45453]        # 0x14266c870
0x14082741d: mov    rcx,rbx
0x140827420: call   0x1400bc760
0x140827425: mov    r8d,r13d
0x140827428: mov    edx,0x1
0x14082742d: mov    rcx,rbx
0x140827430: call   0x1400bc750
0x140827435: lea    rcx,[rbp+0x5c0]
0x14082743c: call   0x140070cc0
0x140827441: nop
0x140827442: lea    rcx,[rbp+0x2ae0]
0x140827449: call   0x140070cc0
0x14082744e: nop
0x14082744f: lea    rcx,[rbp+0x640]
0x140827456: call   0x140070cc0
0x14082745b: nop
0x14082745c: lea    rcx,[rbp+0xf0]
0x140827463: call   0x140067130
0x140827468: nop
0x140827469: mov    r14d,0xa
0x14082746f: mov    r8d,r15d
0x140827472: mov    edx,r12d
0x140827475: mov    rcx,QWORD PTR [rip+0x1ce6b5c]        # 0x14250dfd8
0x14082747c: call   0x1401be9f0
0x140827481: mov    rdi,rax
0x140827484: test   rax,rax
0x140827487: je     0x140829425
0x14082748d: xor    r9d,r9d
0x140827490: mov    r8b,0x1
0x140827493: lea    rdx,[rbp+0x5c0]
0x14082749a: mov    rcx,rax
0x14082749d: call   0x140aae180
0x1408274a2: xor    sil,sil
0x1408274a5: xor    r14b,r14b
0x1408274a8: xor    r13b,r13b
0x1408274ab: xor    ebx,ebx
0x1408274ad: add    rdi,0xc8
0x1408274b4: mov    rcx,rdi
0x1408274b7: call   0x140070480
0x1408274bc: test   rax,rax
0x1408274bf: je     0x14082753a
0x1408274c1: mov    r12d,ebx
0x1408274c4: mov    r15d,0x1
0x1408274ca: nop    WORD PTR [rax+rax*1+0x0]
0x1408274d0: mov    rdx,rbx
0x1408274d3: mov    rcx,rdi
0x1408274d6: call   0x140070850
0x1408274db: mov    rcx,QWORD PTR [rax]
0x1408274de: movzx  esi,sil
0x1408274e2: cmp    WORD PTR [rcx],0x5
0x1408274e6: cmove  esi,r15d
0x1408274ea: mov    rdx,rbx
0x1408274ed: mov    rcx,rdi
0x1408274f0: call   0x140070850
0x1408274f5: mov    rcx,QWORD PTR [rax]
0x1408274f8: movzx  r14d,r14b
0x1408274fc: cmp    WORD PTR [rcx],0x7
0x140827500: cmove  r14d,r15d
0x140827504: mov    rdx,rbx
0x140827507: mov    rcx,rdi
0x14082750a: call   0x140070850
0x14082750f: mov    rcx,QWORD PTR [rax]
0x140827512: movzx  r13d,r13b
0x140827516: cmp    WORD PTR [rcx],0x6
0x14082751a: cmove  r13d,r15d
0x14082751e: inc    r12d
0x140827521: movsxd rbx,r12d
0x140827524: mov    rcx,rdi
0x140827527: call   0x140070480
0x14082752c: cmp    rbx,rax
0x14082752f: jb     0x1408274d0
0x140827531: mov    r15d,DWORD PTR [rsp+0x7c]
0x140827536: mov    r12d,DWORD PTR [rbp-0x50]
0x14082753a: mov    r9d,DWORD PTR [rsp+0x74]
0x14082753f: xor    r8d,r8d
0x140827542: lea    rdx,[rbp+0x5c0]
0x140827549: lea    rcx,[rip+0x1e45320]        # 0x14266c870
0x140827550: call   0x140af3400
0x140827555: mov    r8d,r15d
0x140827558: mov    edx,r12d
0x14082755b: mov    rcx,QWORD PTR [rip+0x1ce6a76]        # 0x14250dfd8
0x140827562: call   0x1401bea60
0x140827567: mov    rbx,rax
0x14082756a: test   rax,rax
0x14082756d: je     0x1408275d3
0x14082756f: lea    rcx,[rbp+0x660]
0x140827576: call   0x140070cc0
0x14082757b: nop
0x14082757c: mov    edi,DWORD PTR [rsp+0x70]
0x140827580: mov    r8d,edi
0x140827583: mov    edx,0x2
0x140827588: lea    rcx,[rip+0x1e452e1]        # 0x14266c870
0x14082758f: call   0x1400bc750
0x140827594: xor    r9d,r9d
0x140827597: mov    r8b,0x1
0x14082759a: lea    rdx,[rbp+0x660]
0x1408275a1: mov    rcx,rbx
0x1408275a4: call   0x140aae180
0x1408275a9: mov    r9d,DWORD PTR [rsp+0x74]
0x1408275ae: xor    r8d,r8d
0x1408275b1: lea    rdx,[rbp+0x660]
0x1408275b8: lea    rcx,[rip+0x1e452b1]        # 0x14266c870
0x1408275bf: call   0x140af3400
0x1408275c4: nop
0x1408275c5: lea    rcx,[rbp+0x660]
0x1408275cc: call   0x140069460
0x1408275d1: jmp    0x1408275d7
0x1408275d3: mov    edi,DWORD PTR [rsp+0x70]
0x1408275d7: movzx  r8d,r15w
0x1408275db: movzx  edx,r12w
0x1408275df: mov    rcx,QWORD PTR [rip+0x1ce69f2]        # 0x14250dfd8
0x1408275e6: call   0x140f6e8b0
0x1408275eb: movsxd rbx,eax
0x1408275ee: mov    r8d,edi
0x1408275f1: mov    edx,0x4
0x1408275f6: lea    rcx,[rip+0x1e45273]        # 0x14266c870
0x1408275fd: call   0x1400bc750
0x140827602: xor    r8d,r8d
0x140827605: mov    edx,0x7
0x14082760a: mov    r9b,0x1
0x14082760d: lea    rcx,[rip+0x1e4525c]        # 0x14266c870
0x140827614: call   0x1400bc760
0x140827619: lea    rdx,[rip+0xffffffffff7d89e0]        # 0x140000000
0x140827620: cmp    ebx,0x32
0x140827623: ja     0x1408281bd
0x140827629: mov    ecx,DWORD PTR [rdx+rbx*4+0x831d44]
0x140827630: add    rcx,rdx
0x140827633: jmp    rcx
0x140827635: lea    rdx,[rip+0xde06c4]        # 0x141607d00 ; 'Mountain'
0x14082763c: lea    rcx,[rbp+0x2a40]
0x140827643: call   0x140069780
0x140827648: nop
0x140827649: xor    r9d,r9d
0x14082764c: xor    r8d,r8d
0x14082764f: lea    rdx,[rbp+0x2a40]
0x140827656: lea    rcx,[rip+0x1e45213]        # 0x14266c870
0x14082765d: call   0x140af3400
0x140827662: nop
0x140827663: lea    rcx,[rbp+0x2a40]
0x14082766a: jmp    0x1408281b8
0x14082766f: lea    rdx,[rip+0xddf112]        # 0x141606788 ; 'Glacier'
0x140827676: lea    rcx,[rbp+0x2a60]
0x14082767d: call   0x140069780
0x140827682: nop
0x140827683: xor    r9d,r9d
0x140827686: xor    r8d,r8d
0x140827689: lea    rdx,[rbp+0x2a60]
0x140827690: lea    rcx,[rip+0x1e451d9]        # 0x14266c870
0x140827697: call   0x140af3400
0x14082769c: nop
0x14082769d: lea    rcx,[rbp+0x2a60]
0x1408276a4: jmp    0x1408281b8
0x1408276a9: lea    rdx,[rip+0xddf0e0]        # 0x141606790 ; 'Tundra'
0x1408276b0: lea    rcx,[rbp+0x2a80]
0x1408276b7: call   0x140069780
0x1408276bc: nop
0x1408276bd: xor    r9d,r9d
0x1408276c0: xor    r8d,r8d
0x1408276c3: lea    rdx,[rbp+0x2a80]
0x1408276ca: lea    rcx,[rip+0x1e4519f]        # 0x14266c870
0x1408276d1: call   0x140af3400
0x1408276d6: nop
0x1408276d7: lea    rcx,[rbp+0x2a80]
0x1408276de: jmp    0x1408281b8
0x1408276e3: lea    rdx,[rip+0xde0626]        # 0x141607d10 ; 'Temperate Freshwater Swamp'
0x1408276ea: lea    rcx,[rbp+0x8a0]
0x1408276f1: call   0x140069780
0x1408276f6: nop
0x1408276f7: xor    r9d,r9d
0x1408276fa: xor    r8d,r8d
0x1408276fd: lea    rdx,[rbp+0x8a0]
0x140827704: lea    rcx,[rip+0x1e45165]        # 0x14266c870
0x14082770b: call   0x140af3400
0x140827710: nop
0x140827711: lea    rcx,[rbp+0x8a0]
0x140827718: jmp    0x1408281b8
0x14082771d: lea    rdx,[rip+0xde059c]        # 0x141607cc0 ; 'Temperate Saltwater Swamp'
0x140827724: lea    rcx,[rbp+0x8c0]
0x14082772b: call   0x140069780
0x140827730: nop
0x140827731: xor    r9d,r9d
0x140827734: xor    r8d,r8d
0x140827737: lea    rdx,[rbp+0x8c0]
0x14082773e: lea    rcx,[rip+0x1e4512b]        # 0x14266c870
0x140827745: call   0x140af3400
0x14082774a: nop
0x14082774b: lea    rcx,[rbp+0x8c0]
0x140827752: jmp    0x1408281b8
0x140827757: lea    rdx,[rip+0xde0582]        # 0x141607ce0 ; 'Temperate Freshwater Marsh'
0x14082775e: lea    rcx,[rbp+0x8e0]
0x140827765: call   0x140069780
0x14082776a: nop
0x14082776b: xor    r9d,r9d
0x14082776e: xor    r8d,r8d
0x140827771: lea    rdx,[rbp+0x8e0]
0x140827778: lea    rcx,[rip+0x1e450f1]        # 0x14266c870
0x14082777f: call   0x140af3400
0x140827784: nop
0x140827785: lea    rcx,[rbp+0x8e0]
0x14082778c: jmp    0x1408281b8
0x140827791: lea    rdx,[rip+0xde05c8]        # 0x141607d60 ; 'Temperate Saltwater Marsh'
0x140827798: lea    rcx,[rbp+0x900]
0x14082779f: call   0x140069780
0x1408277a4: nop
0x1408277a5: xor    r9d,r9d
0x1408277a8: xor    r8d,r8d
0x1408277ab: lea    rdx,[rbp+0x900]
0x1408277b2: lea    rcx,[rip+0x1e450b7]        # 0x14266c870
0x1408277b9: call   0x140af3400
0x1408277be: nop
0x1408277bf: lea    rcx,[rbp+0x900]
0x1408277c6: jmp    0x1408281b8
0x1408277cb: lea    rdx,[rip+0xde05ae]        # 0x141607d80 ; 'Tropical Freshwater Swamp'
0x1408277d2: lea    rcx,[rbp+0x920]
0x1408277d9: call   0x140069780
0x1408277de: nop
0x1408277df: xor    r9d,r9d
0x1408277e2: xor    r8d,r8d
0x1408277e5: lea    rdx,[rbp+0x920]
0x1408277ec: lea    rcx,[rip+0x1e4507d]        # 0x14266c870
0x1408277f3: call   0x140af3400
0x1408277f8: nop
0x1408277f9: lea    rcx,[rbp+0x920]
0x140827800: jmp    0x1408281b8
0x140827805: lea    rdx,[rip+0xde0524]        # 0x141607d30 ; 'Tropical Saltwater Swamp'
0x14082780c: lea    rcx,[rbp+0x940]
0x140827813: call   0x140069780
0x140827818: nop
0x140827819: xor    r9d,r9d
0x14082781c: xor    r8d,r8d
0x14082781f: lea    rdx,[rbp+0x940]
0x140827826: lea    rcx,[rip+0x1e45043]        # 0x14266c870
0x14082782d: call   0x140af3400
0x140827832: nop
0x140827833: lea    rcx,[rbp+0x940]
0x14082783a: jmp    0x1408281b8
0x14082783f: lea    rdx,[rip+0xde050a]        # 0x141607d50 ; 'Mangrove Swamp'
0x140827846: lea    rcx,[rbp+0x960]
0x14082784d: call   0x140069780
0x140827852: nop
0x140827853: xor    r9d,r9d
0x140827856: xor    r8d,r8d
0x140827859: lea    rdx,[rbp+0x960]
0x140827860: lea    rcx,[rip+0x1e45009]        # 0x14266c870
0x140827867: call   0x140af3400
0x14082786c: nop
0x14082786d: lea    rcx,[rbp+0x960]
0x140827874: jmp    0x1408281b8
0x140827879: lea    rdx,[rip+0xde0548]        # 0x141607dc8 ; 'Tropical Freshwater Marsh'
0x140827880: lea    rcx,[rbp+0x980]
0x140827887: call   0x140069780
0x14082788c: nop
0x14082788d: xor    r9d,r9d
0x140827890: xor    r8d,r8d
0x140827893: lea    rdx,[rbp+0x980]
0x14082789a: lea    rcx,[rip+0x1e44fcf]        # 0x14266c870
0x1408278a1: call   0x140af3400
0x1408278a6: nop
0x1408278a7: lea    rcx,[rbp+0x980]
0x1408278ae: jmp    0x1408281b8
0x1408278b3: lea    rdx,[rip+0xde052e]        # 0x141607de8 ; 'Tropical Saltwater Marsh'
0x1408278ba: lea    rcx,[rbp+0x9a0]
0x1408278c1: call   0x140069780
0x1408278c6: nop
0x1408278c7: xor    r9d,r9d
0x1408278ca: xor    r8d,r8d
0x1408278cd: lea    rdx,[rbp+0x9a0]
0x1408278d4: lea    rcx,[rip+0x1e44f95]        # 0x14266c870
0x1408278db: call   0x140af3400
0x1408278e0: nop
0x1408278e1: lea    rcx,[rbp+0x9a0]
0x1408278e8: jmp    0x1408281b8
0x1408278ed: lea    rdx,[rip+0xde04a8]        # 0x141607d9c ; 'Taiga'
0x1408278f4: lea    rcx,[rbp+0x9c0]
0x1408278fb: call   0x140069780
0x140827900: nop
0x140827901: xor    r9d,r9d
0x140827904: xor    r8d,r8d
0x140827907: lea    rdx,[rbp+0x9c0]
0x14082790e: lea    rcx,[rip+0x1e44f5b]        # 0x14266c870
0x140827915: call   0x140af3400
0x14082791a: nop
0x14082791b: lea    rcx,[rbp+0x9c0]
0x140827922: jmp    0x1408281b8
0x140827927: lea    rdx,[rip+0xeb195a]        # 0x1416d9288 ; 'Temperate Conifer Forest'
0x14082792e: lea    rcx,[rbp+0x9e0]
0x140827935: call   0x140069780
0x14082793a: nop
0x14082793b: xor    r9d,r9d
0x14082793e: xor    r8d,r8d
0x140827941: lea    rdx,[rbp+0x9e0]
0x140827948: lea    rcx,[rip+0x1e44f21]        # 0x14266c870
0x14082794f: call   0x140af3400
0x140827954: nop
0x140827955: lea    rcx,[rbp+0x9e0]
0x14082795c: jmp    0x1408281b8
0x140827961: lea    rdx,[rip+0xde04e0]        # 0x141607e48 ; 'Temperate Broadleaf Forest'
0x140827968: lea    rcx,[rbp+0xa00]
0x14082796f: call   0x140069780
0x140827974: nop
0x140827975: xor    r9d,r9d
0x140827978: xor    r8d,r8d
0x14082797b: lea    rdx,[rbp+0xa00]
0x140827982: lea    rcx,[rip+0x1e44ee7]        # 0x14266c870
0x140827989: call   0x140af3400
0x14082798e: nop
0x14082798f: lea    rcx,[rbp+0xa00]
0x140827996: jmp    0x1408281b8
0x14082799b: lea    rdx,[rip+0xde04c6]        # 0x141607e68 ; 'Tropical Coniferous Forest'
0x1408279a2: lea    rcx,[rbp+0xa20]
0x1408279a9: call   0x140069780
0x1408279ae: nop
0x1408279af: xor    r9d,r9d
0x1408279b2: xor    r8d,r8d
0x1408279b5: lea    rdx,[rbp+0xa20]
0x1408279bc: lea    rcx,[rip+0x1e44ead]        # 0x14266c870
0x1408279c3: call   0x140af3400
0x1408279c8: nop
0x1408279c9: lea    rcx,[rbp+0xa20]
0x1408279d0: jmp    0x1408281b8
0x1408279d5: lea    rdx,[rip+0xeb185c]        # 0x1416d9238 ; 'Tropical Dry Brdlf Forest'
0x1408279dc: lea    rcx,[rbp+0xa40]
0x1408279e3: call   0x140069780
0x1408279e8: nop
0x1408279e9: xor    r9d,r9d
0x1408279ec: xor    r8d,r8d
0x1408279ef: lea    rdx,[rbp+0xa40]
0x1408279f6: lea    rcx,[rip+0x1e44e73]        # 0x14266c870
0x1408279fd: call   0x140af3400
0x140827a02: nop
0x140827a03: lea    rcx,[rbp+0xa40]
0x140827a0a: jmp    0x1408281b8
0x140827a0f: lea    rdx,[rip+0xeb1842]        # 0x1416d9258 ; 'Tropical Moist Brdlf Forst'
0x140827a16: lea    rcx,[rbp+0xa60]
0x140827a1d: call   0x140069780
0x140827a22: nop
0x140827a23: xor    r9d,r9d
0x140827a26: xor    r8d,r8d
0x140827a29: lea    rdx,[rbp+0xa60]
0x140827a30: lea    rcx,[rip+0x1e44e39]        # 0x14266c870
0x140827a37: call   0x140af3400
0x140827a3c: nop
0x140827a3d: lea    rcx,[rbp+0xa60]
0x140827a44: jmp    0x1408281b8
0x140827a49: lea    rdx,[rip+0xde0468]        # 0x141607eb8 ; 'Temperate Grassland'
0x140827a50: lea    rcx,[rbp+0xa80]
0x140827a57: call   0x140069780
0x140827a5c: nop
0x140827a5d: xor    r9d,r9d
0x140827a60: xor    r8d,r8d
0x140827a63: lea    rdx,[rbp+0xa80]
0x140827a6a: lea    rcx,[rip+0x1e44dff]        # 0x14266c870
0x140827a71: call   0x140af3400
0x140827a76: nop
0x140827a77: lea    rcx,[rbp+0xa80]
0x140827a7e: jmp    0x1408281b8
0x140827a83: lea    rdx,[rip+0xde0446]        # 0x141607ed0 ; 'Temperate Savanna'
0x140827a8a: lea    rcx,[rbp+0xaa0]
0x140827a91: call   0x140069780
0x140827a96: nop
0x140827a97: xor    r9d,r9d
0x140827a9a: xor    r8d,r8d
0x140827a9d: lea    rdx,[rbp+0xaa0]
0x140827aa4: lea    rcx,[rip+0x1e44dc5]        # 0x14266c870
0x140827aab: call   0x140af3400
0x140827ab0: nop
0x140827ab1: lea    rcx,[rbp+0xaa0]
0x140827ab8: jmp    0x1408281b8
0x140827abd: lea    rdx,[rip+0xde03c4]        # 0x141607e88 ; 'Temperate Shrubland'
0x140827ac4: lea    rcx,[rbp+0xac0]
0x140827acb: call   0x140069780
0x140827ad0: nop
0x140827ad1: xor    r9d,r9d
0x140827ad4: xor    r8d,r8d
0x140827ad7: lea    rdx,[rbp+0xac0]
0x140827ade: lea    rcx,[rip+0x1e44d8b]        # 0x14266c870
0x140827ae5: call   0x140af3400
0x140827aea: nop
0x140827aeb: lea    rcx,[rbp+0xac0]
0x140827af2: jmp    0x1408281b8
0x140827af7: lea    rdx,[rip+0xde03a2]        # 0x141607ea0 ; 'Tropical Grassland'
0x140827afe: lea    rcx,[rbp+0xae0]
0x140827b05: call   0x140069780
0x140827b0a: nop
0x140827b0b: xor    r9d,r9d
0x140827b0e: xor    r8d,r8d
0x140827b11: lea    rdx,[rbp+0xae0]
0x140827b18: lea    rcx,[rip+0x1e44d51]        # 0x14266c870
0x140827b1f: call   0x140af3400
0x140827b24: nop
0x140827b25: lea    rcx,[rbp+0xae0]
0x140827b2c: jmp    0x1408281b8
0x140827b31: lea    rdx,[rip+0xde03d0]        # 0x141607f08 ; 'Tropical Savanna'
0x140827b38: lea    rcx,[rbp+0xb00]
0x140827b3f: call   0x140069780
0x140827b44: nop
0x140827b45: xor    r9d,r9d
0x140827b48: xor    r8d,r8d
0x140827b4b: lea    rdx,[rbp+0xb00]
0x140827b52: lea    rcx,[rip+0x1e44d17]        # 0x14266c870
0x140827b59: call   0x140af3400
0x140827b5e: nop
0x140827b5f: lea    rcx,[rbp+0xb00]
0x140827b66: jmp    0x1408281b8
0x140827b6b: lea    rdx,[rip+0xde03ae]        # 0x141607f20 ; 'Tropical Shrubland'
0x140827b72: lea    rcx,[rbp+0xb20]
0x140827b79: call   0x140069780
0x140827b7e: nop
0x140827b7f: xor    r9d,r9d
0x140827b82: xor    r8d,r8d
0x140827b85: lea    rdx,[rbp+0xb20]
0x140827b8c: lea    rcx,[rip+0x1e44cdd]        # 0x14266c870
0x140827b93: call   0x140af3400
0x140827b98: nop
0x140827b99: lea    rcx,[rbp+0xb20]
0x140827ba0: jmp    0x1408281b8
0x140827ba5: lea    rdx,[rip+0xde033c]        # 0x141607ee8 ; 'Badlands'
0x140827bac: lea    rcx,[rbp+0xb40]
0x140827bb3: call   0x140069780
0x140827bb8: nop
0x140827bb9: xor    r9d,r9d
0x140827bbc: xor    r8d,r8d
0x140827bbf: lea    rdx,[rbp+0xb40]
0x140827bc6: lea    rcx,[rip+0x1e44ca3]        # 0x14266c870
0x140827bcd: call   0x140af3400
0x140827bd2: nop
0x140827bd3: lea    rcx,[rbp+0xb40]
0x140827bda: jmp    0x1408281b8
0x140827bdf: lea    rdx,[rip+0xde0312]        # 0x141607ef8 ; 'Rocky Wasteland'
0x140827be6: lea    rcx,[rbp+0xb60]
0x140827bed: call   0x140069780
0x140827bf2: nop
0x140827bf3: xor    r9d,r9d
0x140827bf6: xor    r8d,r8d
0x140827bf9: lea    rdx,[rbp+0xb60]
0x140827c00: lea    rcx,[rip+0x1e44c69]        # 0x14266c870
0x140827c07: call   0x140af3400
0x140827c0c: nop
0x140827c0d: lea    rcx,[rbp+0xb60]
0x140827c14: jmp    0x1408281b8
0x140827c19: lea    rdx,[rip+0xde0338]        # 0x141607f58 ; 'Sand Desert'
0x140827c20: lea    rcx,[rbp+0xb80]
0x140827c27: call   0x140069780
0x140827c2c: nop
0x140827c2d: xor    r9d,r9d
0x140827c30: xor    r8d,r8d
0x140827c33: lea    rdx,[rbp+0xb80]
0x140827c3a: lea    rcx,[rip+0x1e44c2f]        # 0x14266c870
0x140827c41: call   0x140af3400
0x140827c46: nop
0x140827c47: lea    rcx,[rbp+0xb80]
0x140827c4e: jmp    0x1408281b8
0x140827c53: lea    rdx,[rip+0xde030e]        # 0x141607f68 ; 'Tropical Ocean'
0x140827c5a: lea    rcx,[rbp+0xba0]
0x140827c61: call   0x140069780
0x140827c66: nop
0x140827c67: xor    r9d,r9d
0x140827c6a: xor    r8d,r8d
0x140827c6d: lea    rdx,[rbp+0xba0]
0x140827c74: lea    rcx,[rip+0x1e44bf5]        # 0x14266c870
0x140827c7b: call   0x140af3400
0x140827c80: nop
0x140827c81: lea    rcx,[rbp+0xba0]
0x140827c88: jmp    0x1408281b8
0x140827c8d: lea    rdx,[rip+0xde02a4]        # 0x141607f38 ; 'Temperate Ocean'
0x140827c94: lea    rcx,[rbp+0xbc0]
0x140827c9b: call   0x140069780
0x140827ca0: nop
0x140827ca1: xor    r9d,r9d
0x140827ca4: xor    r8d,r8d
0x140827ca7: lea    rdx,[rbp+0xbc0]
0x140827cae: lea    rcx,[rip+0x1e44bbb]        # 0x14266c870
0x140827cb5: call   0x140af3400
0x140827cba: nop
0x140827cbb: lea    rcx,[rbp+0xbc0]
0x140827cc2: jmp    0x1408281b8
0x140827cc7: lea    rdx,[rip+0xde027a]        # 0x141607f48 ; 'Arctic Ocean'
0x140827cce: lea    rcx,[rbp+0xbe0]
0x140827cd5: call   0x140069780
0x140827cda: nop
0x140827cdb: xor    r9d,r9d
0x140827cde: xor    r8d,r8d
0x140827ce1: lea    rdx,[rbp+0xbe0]
0x140827ce8: lea    rcx,[rip+0x1e44b81]        # 0x14266c870
0x140827cef: call   0x140af3400
0x140827cf4: nop
0x140827cf5: lea    rcx,[rbp+0xbe0]
0x140827cfc: jmp    0x1408281b8
0x140827d01: lea    rdx,[rip+0xde02b0]        # 0x141607fb8 ; 'Temperate Freshwater Pool'
0x140827d08: lea    rcx,[rbp+0xc00]
0x140827d0f: call   0x140069780
0x140827d14: nop
0x140827d15: xor    r9d,r9d
0x140827d18: xor    r8d,r8d
0x140827d1b: lea    rdx,[rbp+0xc00]
0x140827d22: lea    rcx,[rip+0x1e44b47]        # 0x14266c870
0x140827d29: call   0x140af3400
0x140827d2e: nop
0x140827d2f: lea    rcx,[rbp+0xc00]
0x140827d36: jmp    0x1408281b8
0x140827d3b: lea    rdx,[rip+0xde0296]        # 0x141607fd8 ; 'Temperate Brackish Pool'
0x140827d42: lea    rcx,[rbp+0xc20]
0x140827d49: call   0x140069780
0x140827d4e: nop
0x140827d4f: xor    r9d,r9d
0x140827d52: xor    r8d,r8d
0x140827d55: lea    rdx,[rbp+0xc20]
0x140827d5c: lea    rcx,[rip+0x1e44b0d]        # 0x14266c870
0x140827d63: call   0x140af3400
0x140827d68: nop
0x140827d69: lea    rcx,[rbp+0xc20]
0x140827d70: jmp    0x1408281b8
0x140827d75: lea    rdx,[rip+0xde01fc]        # 0x141607f78 ; 'Temperate Saltwater Pool'
0x140827d7c: lea    rcx,[rbp+0xc40]
0x140827d83: call   0x140069780
0x140827d88: nop
0x140827d89: xor    r9d,r9d
0x140827d8c: xor    r8d,r8d
0x140827d8f: lea    rdx,[rbp+0xc40]
0x140827d96: lea    rcx,[rip+0x1e44ad3]        # 0x14266c870
0x140827d9d: call   0x140af3400
0x140827da2: nop
0x140827da3: lea    rcx,[rbp+0xc40]
0x140827daa: jmp    0x1408281b8
0x140827daf: lea    rdx,[rip+0xde01e2]        # 0x141607f98 ; 'Tropical Freshwater Pool'
0x140827db6: lea    rcx,[rbp+0xc60]
0x140827dbd: call   0x140069780
0x140827dc2: nop
0x140827dc3: xor    r9d,r9d
0x140827dc6: xor    r8d,r8d
0x140827dc9: lea    rdx,[rbp+0xc60]
0x140827dd0: lea    rcx,[rip+0x1e44a99]        # 0x14266c870
0x140827dd7: call   0x140af3400
0x140827ddc: nop
0x140827ddd: lea    rcx,[rbp+0xc60]
0x140827de4: jmp    0x1408281b8
0x140827de9: lea    rdx,[rip+0xde0238]        # 0x141608028 ; 'Tropical Brackish Pool'
0x140827df0: lea    rcx,[rbp+0xc80]
0x140827df7: call   0x140069780
0x140827dfc: nop
0x140827dfd: xor    r9d,r9d
0x140827e00: xor    r8d,r8d
0x140827e03: lea    rdx,[rbp+0xc80]
0x140827e0a: lea    rcx,[rip+0x1e44a5f]        # 0x14266c870
0x140827e11: call   0x140af3400
0x140827e16: nop
0x140827e17: lea    rcx,[rbp+0xc80]
0x140827e1e: jmp    0x1408281b8
0x140827e23: lea    rdx,[rip+0xde0216]        # 0x141608040 ; 'Tropical Saltwater Pool'
0x140827e2a: lea    rcx,[rbp+0xca0]
0x140827e31: call   0x140069780
0x140827e36: nop
0x140827e37: xor    r9d,r9d
0x140827e3a: xor    r8d,r8d
0x140827e3d: lea    rdx,[rbp+0xca0]
0x140827e44: lea    rcx,[rip+0x1e44a25]        # 0x14266c870
0x140827e4b: call   0x140af3400
0x140827e50: nop
0x140827e51: lea    rcx,[rbp+0xca0]
0x140827e58: jmp    0x1408281b8
0x140827e5d: lea    rdx,[rip+0xde018c]        # 0x141607ff0 ; 'Temperate Freshwater Lake'
0x140827e64: lea    rcx,[rbp+0xcc0]
0x140827e6b: call   0x140069780
0x140827e70: nop
0x140827e71: xor    r9d,r9d
0x140827e74: xor    r8d,r8d
0x140827e77: lea    rdx,[rbp+0xcc0]
0x140827e7e: lea    rcx,[rip+0x1e449eb]        # 0x14266c870
0x140827e85: call   0x140af3400
0x140827e8a: nop
0x140827e8b: lea    rcx,[rbp+0xcc0]
0x140827e92: jmp    0x1408281b8
0x140827e97: lea    rdx,[rip+0xde0172]        # 0x141608010 ; 'Temperate Brackish Lake'
0x140827e9e: lea    rcx,[rbp+0xce0]
0x140827ea5: call   0x140069780
0x140827eaa: nop
0x140827eab: xor    r9d,r9d
0x140827eae: xor    r8d,r8d
0x140827eb1: lea    rdx,[rbp+0xce0]
0x140827eb8: lea    rcx,[rip+0x1e449b1]        # 0x14266c870
0x140827ebf: call   0x140af3400
0x140827ec4: nop
0x140827ec5: lea    rcx,[rbp+0xce0]
0x140827ecc: jmp    0x1408281b8
0x140827ed1: lea    rdx,[rip+0xde01b0]        # 0x141608088 ; 'Temperate Saltwater Lake'
0x140827ed8: lea    rcx,[rbp+0xd00]
0x140827edf: call   0x140069780
0x140827ee4: nop
0x140827ee5: xor    r9d,r9d
0x140827ee8: xor    r8d,r8d
0x140827eeb: lea    rdx,[rbp+0xd00]
0x140827ef2: lea    rcx,[rip+0x1e44977]        # 0x14266c870
0x140827ef9: call   0x140af3400
0x140827efe: nop
0x140827eff: lea    rcx,[rbp+0xd00]
0x140827f06: jmp    0x1408281b8
0x140827f0b: lea    rdx,[rip+0xde0196]        # 0x1416080a8 ; 'Tropical Freshwater Lake'
0x140827f12: lea    rcx,[rbp+0xd20]
0x140827f19: call   0x140069780
0x140827f1e: nop
0x140827f1f: xor    r9d,r9d
0x140827f22: xor    r8d,r8d
0x140827f25: lea    rdx,[rbp+0xd20]
0x140827f2c: lea    rcx,[rip+0x1e4493d]        # 0x14266c870
0x140827f33: call   0x140af3400
0x140827f38: nop
0x140827f39: lea    rcx,[rbp+0xd20]
0x140827f40: jmp    0x1408281b8
0x140827f45: lea    rdx,[rip+0xde010c]        # 0x141608058 ; 'Tropical Brackish Lake'
0x140827f4c: lea    rcx,[rbp+0xd40]
0x140827f53: call   0x140069780
0x140827f58: nop
0x140827f59: xor    r9d,r9d
0x140827f5c: xor    r8d,r8d
0x140827f5f: lea    rdx,[rbp+0xd40]
0x140827f66: lea    rcx,[rip+0x1e44903]        # 0x14266c870
0x140827f6d: call   0x140af3400
0x140827f72: nop
0x140827f73: lea    rcx,[rbp+0xd40]
0x140827f7a: jmp    0x1408281b8
0x140827f7f: lea    rdx,[rip+0xde00ea]        # 0x141608070 ; 'Tropical Saltwater Lake'
0x140827f86: lea    rcx,[rbp+0xd60]
0x140827f8d: call   0x140069780
0x140827f92: nop
0x140827f93: xor    r9d,r9d
0x140827f96: xor    r8d,r8d
0x140827f99: lea    rdx,[rbp+0xd60]
0x140827fa0: lea    rcx,[rip+0x1e448c9]        # 0x14266c870
0x140827fa7: call   0x140af3400
0x140827fac: nop
0x140827fad: lea    rcx,[rbp+0xd60]
0x140827fb4: jmp    0x1408281b8
0x140827fb9: lea    rdx,[rip+0xde0148]        # 0x141608108 ; 'Temperate Freshwater River'
0x140827fc0: lea    rcx,[rbp+0xd80]
0x140827fc7: call   0x140069780
0x140827fcc: nop
0x140827fcd: xor    r9d,r9d
0x140827fd0: xor    r8d,r8d
0x140827fd3: lea    rdx,[rbp+0xd80]
0x140827fda: lea    rcx,[rip+0x1e4488f]        # 0x14266c870
0x140827fe1: call   0x140af3400
0x140827fe6: nop
0x140827fe7: lea    rcx,[rbp+0xd80]
0x140827fee: jmp    0x1408281b8
0x140827ff3: lea    rdx,[rip+0xde012e]        # 0x141608128 ; 'Temperate Brackish River'
0x140827ffa: lea    rcx,[rbp+0xda0]
0x140828001: call   0x140069780
0x140828006: nop
0x140828007: xor    r9d,r9d
0x14082800a: xor    r8d,r8d
0x14082800d: lea    rdx,[rbp+0xda0]
0x140828014: lea    rcx,[rip+0x1e44855]        # 0x14266c870
0x14082801b: call   0x140af3400
0x140828020: nop
0x140828021: lea    rcx,[rbp+0xda0]
0x140828028: jmp    0x1408281b8
0x14082802d: lea    rdx,[rip+0xde0094]        # 0x1416080c8 ; 'Temperate Saltwater River'
0x140828034: lea    rcx,[rbp+0xdc0]
0x14082803b: call   0x140069780
0x140828040: nop
0x140828041: xor    r9d,r9d
0x140828044: xor    r8d,r8d
0x140828047: lea    rdx,[rbp+0xdc0]
0x14082804e: lea    rcx,[rip+0x1e4481b]        # 0x14266c870
0x140828055: call   0x140af3400
0x14082805a: nop
0x14082805b: lea    rcx,[rbp+0xdc0]
0x140828062: jmp    0x1408281b8
0x140828067: lea    rdx,[rip+0xde007a]        # 0x1416080e8 ; 'Tropical Freshwater River'
0x14082806e: lea    rcx,[rbp+0xde0]
0x140828075: call   0x140069780
0x14082807a: nop
0x14082807b: xor    r9d,r9d
0x14082807e: xor    r8d,r8d
0x140828081: lea    rdx,[rbp+0xde0]
0x140828088: lea    rcx,[rip+0x1e447e1]        # 0x14266c870
0x14082808f: call   0x140af3400
0x140828094: nop
0x140828095: lea    rcx,[rbp+0xde0]
0x14082809c: jmp    0x1408281b8
0x1408280a1: lea    rdx,[rip+0xde00d0]        # 0x141608178 ; 'Tropical Brackish River'
0x1408280a8: lea    rcx,[rbp+0xe00]
0x1408280af: call   0x140069780
0x1408280b4: nop
0x1408280b5: xor    r9d,r9d
0x1408280b8: xor    r8d,r8d
0x1408280bb: lea    rdx,[rbp+0xe00]
0x1408280c2: lea    rcx,[rip+0x1e447a7]        # 0x14266c870
0x1408280c9: call   0x140af3400
0x1408280ce: nop
0x1408280cf: lea    rcx,[rbp+0xe00]
0x1408280d6: jmp    0x1408281b8
0x1408280db: lea    rdx,[rip+0xde00ae]        # 0x141608190 ; 'Tropical Saltwater River'
0x1408280e2: lea    rcx,[rbp+0xe20]
0x1408280e9: call   0x140069780
0x1408280ee: nop
0x1408280ef: xor    r9d,r9d
0x1408280f2: xor    r8d,r8d
0x1408280f5: lea    rdx,[rbp+0xe20]
0x1408280fc: lea    rcx,[rip+0x1e4476d]        # 0x14266c870
0x140828103: call   0x140af3400
0x140828108: nop
0x140828109: lea    rcx,[rbp+0xe20]
0x140828110: jmp    0x1408281b8
0x140828115: lea    rdx,[rip+0xde002c]        # 0x141608148 ; 'Subterranean Water'
0x14082811c: lea    rcx,[rbp+0xe40]
0x140828123: call   0x140069780
0x140828128: nop
0x140828129: xor    r9d,r9d
0x14082812c: xor    r8d,r8d
0x14082812f: lea    rdx,[rbp+0xe40]
0x140828136: lea    rcx,[rip+0x1e44733]        # 0x14266c870
0x14082813d: call   0x140af3400
0x140828142: nop
0x140828143: lea    rcx,[rbp+0xe40]
0x14082814a: jmp    0x1408281b8
0x14082814c: lea    rdx,[rip+0xde000d]        # 0x141608160 ; 'Subterranean Chasm'
0x140828153: lea    rcx,[rbp+0xe60]
0x14082815a: call   0x140069780
0x14082815f: nop
0x140828160: xor    r9d,r9d
0x140828163: xor    r8d,r8d
0x140828166: lea    rdx,[rbp+0xe60]
0x14082816d: lea    rcx,[rip+0x1e446fc]        # 0x14266c870
0x140828174: call   0x140af3400
0x140828179: nop
0x14082817a: lea    rcx,[rbp+0xe60]
0x140828181: jmp    0x1408281b8
0x140828183: lea    rdx,[rip+0xde005e]        # 0x1416081e8 ; 'Subterranean Magma'
0x14082818a: lea    rcx,[rbp+0xe80]
0x140828191: call   0x140069780
0x140828196: nop
0x140828197: xor    r9d,r9d
0x14082819a: xor    r8d,r8d
0x14082819d: lea    rdx,[rbp+0xe80]
0x1408281a4: lea    rcx,[rip+0x1e446c5]        # 0x14266c870
0x1408281ab: call   0x140af3400
0x1408281b0: nop
0x1408281b1: lea    rcx,[rbp+0xe80]
0x1408281b8: call   0x140069460
0x1408281bd: movzx  r8d,r15w
0x1408281c1: movzx  edx,r12w
0x1408281c5: mov    rcx,QWORD PTR [rip+0x1ce5e0c]        # 0x14250dfd8
0x1408281cc: call   0x1402c7870
0x1408281d1: mov    rbx,rax
0x1408281d4: mov    r8d,edi
0x1408281d7: mov    edx,0x5
0x1408281dc: lea    rcx,[rip+0x1e4468d]        # 0x14266c870
0x1408281e3: call   0x1400bc750
0x1408281e8: xor    r8d,r8d
0x1408281eb: mov    edx,0x7
0x1408281f0: xor    r9d,r9d
0x1408281f3: lea    rcx,[rip+0x1e44676]        # 0x14266c870
0x1408281fa: call   0x1400bc760
0x1408281ff: lea    rdx,[rip+0xeb101a]        # 0x1416d9220 ; 'Temperature: '
0x140828206: lea    rcx,[rbp+0xea0]
0x14082820d: call   0x140069780
0x140828212: nop
0x140828213: xor    r9d,r9d
0x140828216: mov    r8b,0x3
0x140828219: lea    rdx,[rbp+0xea0]
0x140828220: lea    rcx,[rip+0x1e44649]        # 0x14266c870
0x140828227: call   0x140af3400
0x14082822c: nop
0x14082822d: lea    rcx,[rbp+0xea0]
0x140828234: call   0x140069460
0x140828239: movzx  eax,WORD PTR [rbx+0x6]
0x14082823d: xor    r8d,r8d
0x140828240: lea    rcx,[rip+0x1e44629]        # 0x14266c870
0x140828247: test   ax,ax
0x14082824a: jns    0x140828293
0x14082824c: mov    edx,0x3
0x140828251: mov    r9b,0x1
0x140828254: call   0x1400bc760
0x140828259: lea    rdx,[rip+0xdeaf10]        # 0x141613170 ; 'Freezing'
0x140828260: lea    rcx,[rbp+0xec0]
0x140828267: call   0x140069780
0x14082826c: nop
0x14082826d: xor    r9d,r9d
0x140828270: xor    r8d,r8d
0x140828273: lea    rdx,[rbp+0xec0]
0x14082827a: lea    rcx,[rip+0x1e445ef]        # 0x14266c870
0x140828281: call   0x140af3400
0x140828286: nop
0x140828287: lea    rcx,[rbp+0xec0]
0x14082828e: jmp    0x140828402
0x140828293: cmp    ax,0xf
0x140828297: jge    0x1408282e1
0x140828299: mov    edx,0x1
0x14082829e: movzx  r9d,dl
0x1408282a2: call   0x1400bc760
0x1408282a7: lea    rdx,[rip+0xdeaee2]        # 0x141613190 ; 'Cold'
0x1408282ae: lea    rcx,[rbp+0xee0]
0x1408282b5: call   0x140069780
0x1408282ba: nop
0x1408282bb: xor    r9d,r9d
0x1408282be: xor    r8d,r8d
0x1408282c1: lea    rdx,[rbp+0xee0]
0x1408282c8: lea    rcx,[rip+0x1e445a1]        # 0x14266c870
0x1408282cf: call   0x140af3400
0x1408282d4: nop
0x1408282d5: lea    rcx,[rbp+0xee0]
0x1408282dc: jmp    0x140828402
0x1408282e1: cmp    ax,0x32
0x1408282e5: jge    0x14082832e
0x1408282e7: mov    edx,0x2
0x1408282ec: mov    r9b,0x1
0x1408282ef: call   0x1400bc760
0x1408282f4: lea    rdx,[rip+0xdf27c5]        # 0x14161aac0 ; 'Temperate'
0x1408282fb: lea    rcx,[rbp+0xf00]
0x140828302: call   0x140069780
0x140828307: nop
0x140828308: xor    r9d,r9d
0x14082830b: xor    r8d,r8d
0x14082830e: lea    rdx,[rbp+0xf00]
0x140828315: lea    rcx,[rip+0x1e44554]        # 0x14266c870
0x14082831c: call   0x140af3400
0x140828321: nop
0x140828322: lea    rcx,[rbp+0xf00]
0x140828329: jmp    0x140828402
0x14082832e: cmp    ax,0x4b
0x140828332: jge    0x14082837b
0x140828334: mov    edx,0x6
0x140828339: mov    r9b,0x1
0x14082833c: call   0x1400bc760
0x140828341: lea    rdx,[rip+0xdeada4]        # 0x1416130ec ; 'Warm'
0x140828348: lea    rcx,[rbp+0xf20]
0x14082834f: call   0x140069780
0x140828354: nop
0x140828355: xor    r9d,r9d
0x140828358: xor    r8d,r8d
0x14082835b: lea    rdx,[rbp+0xf20]
0x140828362: lea    rcx,[rip+0x1e44507]        # 0x14266c870
0x140828369: call   0x140af3400
0x14082836e: nop
0x14082836f: lea    rcx,[rbp+0xf20]
0x140828376: jmp    0x140828402
0x14082837b: mov    edx,0x4
0x140828380: cmp    ax,0x5a
0x140828384: jge    0x1408283c5
0x140828386: mov    r9b,0x1
0x140828389: call   0x1400bc760
0x14082838e: lea    rdx,[rip+0xdead5f]        # 0x1416130f4 ; 'Hot'
0x140828395: lea    rcx,[rbp+0xf40]
0x14082839c: call   0x140069780
0x1408283a1: nop
0x1408283a2: xor    r9d,r9d
0x1408283a5: xor    r8d,r8d
0x1408283a8: lea    rdx,[rbp+0xf40]
0x1408283af: lea    rcx,[rip+0x1e444ba]        # 0x14266c870
0x1408283b6: call   0x140af3400
0x1408283bb: nop
0x1408283bc: lea    rcx,[rbp+0xf40]
0x1408283c3: jmp    0x140828402
0x1408283c5: xor    r9d,r9d
0x1408283c8: call   0x1400bc760
0x1408283cd: lea    rdx,[rip+0xdead24]        # 0x1416130f8 ; 'Scorching'
0x1408283d4: lea    rcx,[rbp+0xf60]
0x1408283db: call   0x140069780
0x1408283e0: nop
0x1408283e1: xor    r9d,r9d
0x1408283e4: xor    r8d,r8d
0x1408283e7: lea    rdx,[rbp+0xf60]
0x1408283ee: lea    rcx,[rip+0x1e4447b]        # 0x14266c870
0x1408283f5: call   0x140af3400
0x1408283fa: nop
0x1408283fb: lea    rcx,[rbp+0xf60]
0x140828402: call   0x140069460
0x140828407: mov    r8d,edi
0x14082840a: mov    edx,0x6
0x14082840f: lea    rcx,[rip+0x1e4445a]        # 0x14266c870
0x140828416: call   0x1400bc750
0x14082841b: xor    r8d,r8d
0x14082841e: mov    edx,0x7
0x140828423: xor    r9d,r9d
0x140828426: lea    rcx,[rip+0x1e44443]        # 0x14266c870
0x14082842d: call   0x1400bc760
0x140828432: lea    rdx,[rip+0xeb0df7]        # 0x1416d9230 ; 'Trees: '
0x140828439: lea    rcx,[rbp+0xf80]
0x140828440: call   0x140069780
0x140828445: nop
0x140828446: xor    r9d,r9d
0x140828449: mov    r8b,0x3
0x14082844c: lea    rdx,[rbp+0xf80]
0x140828453: lea    rcx,[rip+0x1e44416]        # 0x14266c870
0x14082845a: call   0x140af3400
0x14082845f: nop
0x140828460: lea    rcx,[rbp+0xf80]
0x140828467: call   0x140069460
0x14082846c: movzx  r8d,r15w
0x140828470: movzx  edx,r12w
0x140828474: mov    rcx,QWORD PTR [rip+0x1ce5b5d]        # 0x14250dfd8
0x14082847b: call   0x140f941d0
0x140828480: test   ax,ax
0x140828483: jle    0x1408285b5
0x140828489: test   sil,sil
0x14082848c: je     0x1408285b5
0x140828492: xor    r8d,r8d
0x140828495: lea    rsi,[rip+0x1e443d4]        # 0x14266c870
0x14082849c: mov    rcx,rsi
0x14082849f: cmp    ax,0xa
0x1408284a3: jge    0x1408284e8
0x1408284a5: mov    edx,0x6
0x1408284aa: mov    r9b,0x1
0x1408284ad: call   0x1400bc760
0x1408284b2: lea    rdx,[rip+0xeb0e73]        # 0x1416d932c ; 'Scarce'
0x1408284b9: lea    rcx,[rbp+0xfa0]
0x1408284c0: call   0x140069780
0x1408284c5: nop
0x1408284c6: xor    r9d,r9d
0x1408284c9: xor    r8d,r8d
0x1408284cc: lea    rdx,[rbp+0xfa0]
0x1408284d3: mov    rcx,rsi
0x1408284d6: call   0x140af3400
0x1408284db: nop
0x1408284dc: lea    rcx,[rbp+0xfa0]
0x1408284e3: jmp    0x140828600
0x1408284e8: cmp    ax,0x21
0x1408284ec: jge    0x140828531
0x1408284ee: mov    edx,0x7
0x1408284f3: xor    r9d,r9d
0x1408284f6: call   0x1400bc760
0x1408284fb: lea    rdx,[rip+0xeb0e32]        # 0x1416d9334 ; 'Sparse'
0x140828502: lea    rcx,[rbp+0xfc0]
0x140828509: call   0x140069780
0x14082850e: nop
0x14082850f: xor    r9d,r9d
0x140828512: xor    r8d,r8d
0x140828515: lea    rdx,[rbp+0xfc0]
0x14082851c: mov    rcx,rsi
0x14082851f: call   0x140af3400
0x140828524: nop
0x140828525: lea    rcx,[rbp+0xfc0]
0x14082852c: jmp    0x140828600
0x140828531: mov    edx,0x2
0x140828536: cmp    ax,0x42
0x14082853a: jge    0x14082857a
0x14082853c: mov    r9b,0x1
0x14082853f: call   0x1400bc760
0x140828544: lea    rdx,[rip+0xeb0dbd]        # 0x1416d9308 ; 'Woodland'
0x14082854b: lea    rcx,[rbp+0xfe0]
0x140828552: call   0x140069780
0x140828557: nop
0x140828558: xor    r9d,r9d
0x14082855b: xor    r8d,r8d
0x14082855e: lea    rdx,[rbp+0xfe0]
0x140828565: mov    rcx,rsi
0x140828568: call   0x140af3400
0x14082856d: nop
0x14082856e: lea    rcx,[rbp+0xfe0]
0x140828575: jmp    0x140828600
0x14082857a: xor    r9d,r9d
0x14082857d: call   0x1400bc760
0x140828582: lea    rdx,[rip+0xeb0d8f]        # 0x1416d9318 ; 'Heavily Forested'
0x140828589: lea    rcx,[rbp+0x1000]
0x140828590: call   0x140069780
0x140828595: nop
0x140828596: xor    r9d,r9d
0x140828599: xor    r8d,r8d
0x14082859c: lea    rdx,[rbp+0x1000]
0x1408285a3: mov    rcx,rsi
0x1408285a6: call   0x140af3400
0x1408285ab: nop
0x1408285ac: lea    rcx,[rbp+0x1000]
0x1408285b3: jmp    0x140828600
0x1408285b5: xor    r8d,r8d
0x1408285b8: mov    edx,0x4
0x1408285bd: mov    r9b,0x1
0x1408285c0: lea    rsi,[rip+0x1e442a9]        # 0x14266c870
0x1408285c7: mov    rcx,rsi
0x1408285ca: call   0x1400bc760
0x1408285cf: lea    rdx,[rip+0xdf2eb6]        # 0x14161b48c ; 'None'
0x1408285d6: lea    rcx,[rbp+0x1020]
0x1408285dd: call   0x140069780
0x1408285e2: nop
0x1408285e3: xor    r9d,r9d
0x1408285e6: xor    r8d,r8d
0x1408285e9: lea    rdx,[rbp+0x1020]
0x1408285f0: mov    rcx,rsi
0x1408285f3: call   0x140af3400
0x1408285f8: nop
0x1408285f9: lea    rcx,[rbp+0x1020]
0x140828600: call   0x140069460
0x140828605: mov    r8d,edi
0x140828608: mov    edi,0x7
0x14082860d: mov    edx,edi
0x14082860f: mov    rcx,rsi
0x140828612: call   0x1400bc750
0x140828617: xor    r8d,r8d
0x14082861a: mov    edx,edi
0x14082861c: xor    r9d,r9d
0x14082861f: mov    rcx,rsi
0x140828622: call   0x1400bc760
0x140828627: lea    rdx,[rip+0xeb0cb2]        # 0x1416d92e0 ; 'Other Vegetation: '
0x14082862e: lea    rcx,[rbp+0x1040]
0x140828635: call   0x140069780
0x14082863a: nop
0x14082863b: xor    r9d,r9d
0x14082863e: mov    r8b,0x3
0x140828641: lea    rdx,[rbp+0x1040]
0x140828648: mov    rcx,rsi
0x14082864b: call   0x140af3400
0x140828650: nop
0x140828651: lea    rcx,[rbp+0x1040]
0x140828658: call   0x140069460
0x14082865d: movzx  eax,WORD PTR [rbx+0x4]
0x140828661: test   ax,ax
0x140828664: jle    0x140828756
0x14082866a: test   r14b,r14b
0x14082866d: jne    0x140828678
0x14082866f: test   r13b,r13b
0x140828672: je     0x140828756
0x140828678: xor    r8d,r8d
0x14082867b: mov    rcx,rsi
0x14082867e: cmp    ax,0xa
0x140828682: jge    0x1408286c7
0x140828684: mov    edx,0x6
0x140828689: mov    r9b,0x1
0x14082868c: call   0x1400bc760
0x140828691: lea    rdx,[rip+0xeb0c94]        # 0x1416d932c ; 'Scarce'
0x140828698: lea    rcx,[rbp+0x1060]
0x14082869f: call   0x140069780
0x1408286a4: nop
0x1408286a5: xor    r9d,r9d
0x1408286a8: xor    r8d,r8d
0x1408286ab: lea    rdx,[rbp+0x1060]
0x1408286b2: mov    rcx,rsi
0x1408286b5: call   0x140af3400
0x1408286ba: nop
0x1408286bb: lea    rcx,[rbp+0x1060]
0x1408286c2: jmp    0x14082879a
0x1408286c7: cmp    ax,0x42
0x1408286cb: jge    0x14082870d
0x1408286cd: mov    edx,edi
0x1408286cf: xor    r9d,r9d
0x1408286d2: call   0x1400bc760
0x1408286d7: lea    rdx,[rip+0xeb0c1a]        # 0x1416d92f8 ; 'Moderate'
0x1408286de: lea    rcx,[rbp+0x1080]
0x1408286e5: call   0x140069780
0x1408286ea: nop
0x1408286eb: xor    r9d,r9d
0x1408286ee: xor    r8d,r8d
0x1408286f1: lea    rdx,[rbp+0x1080]
0x1408286f8: mov    rcx,rsi
0x1408286fb: call   0x140af3400
0x140828700: nop
0x140828701: lea    rcx,[rbp+0x1080]
0x140828708: jmp    0x14082879a
0x14082870d: mov    r14d,0x2
0x140828713: mov    edx,r14d
0x140828716: mov    r9b,0x1
0x140828719: call   0x1400bc760
0x14082871e: lea    rdx,[rip+0xeb0b9f]        # 0x1416d92c4 ; 'Thick'
0x140828725: lea    rcx,[rbp+0x10a0]
0x14082872c: call   0x140069780
0x140828731: nop
0x140828732: xor    r9d,r9d
0x140828735: xor    r8d,r8d
0x140828738: lea    rdx,[rbp+0x10a0]
0x14082873f: mov    rcx,rsi
0x140828742: call   0x140af3400
0x140828747: nop
0x140828748: lea    rcx,[rbp+0x10a0]
0x14082874f: call   0x140069460
0x140828754: jmp    0x1408287a5
0x140828756: xor    r8d,r8d
0x140828759: mov    edx,0x4
0x14082875e: mov    r9b,0x1
0x140828761: mov    rcx,rsi
0x140828764: call   0x1400bc760
0x140828769: lea    rdx,[rip+0xdf2d1c]        # 0x14161b48c ; 'None'
0x140828770: lea    rcx,[rbp+0x10c0]
0x140828777: call   0x140069780
0x14082877c: nop
0x14082877d: xor    r9d,r9d
0x140828780: xor    r8d,r8d
0x140828783: lea    rdx,[rbp+0x10c0]
0x14082878a: mov    rcx,rsi
0x14082878d: call   0x140af3400
0x140828792: nop
0x140828793: lea    rcx,[rbp+0x10c0]
0x14082879a: call   0x140069460
0x14082879f: mov    r14d,0x2
0x1408287a5: mov    r13d,DWORD PTR [rsp+0x70]
0x1408287aa: mov    r8d,r13d
0x1408287ad: mov    edx,0x8
0x1408287b2: mov    rcx,rsi
0x1408287b5: call   0x1400bc750
0x1408287ba: xor    r8d,r8d
0x1408287bd: mov    edx,edi
0x1408287bf: xor    r9d,r9d
0x1408287c2: mov    rcx,rsi
0x1408287c5: call   0x1400bc760
0x1408287ca: lea    rdx,[rip+0xeb0aff]        # 0x1416d92d0 ; 'Surroundings: '
0x1408287d1: lea    rcx,[rbp+0x10e0]
0x1408287d8: call   0x140069780
0x1408287dd: nop
0x1408287de: xor    r9d,r9d
0x1408287e1: mov    r8b,0x3
0x1408287e4: lea    rdx,[rbp+0x10e0]
0x1408287eb: mov    rcx,rsi
0x1408287ee: call   0x140af3400
0x1408287f3: nop
0x1408287f4: lea    rcx,[rbp+0x10e0]
0x1408287fb: call   0x140069460
0x140828800: movzx  ecx,WORD PTR [rbx+0xe]
0x140828804: movzx  eax,WORD PTR [rbx+0x8]
0x140828808: xor    r8d,r8d
0x14082880b: cmp    cx,0x21
0x14082880f: jge    0x1408288e8
0x140828815: mov    rcx,rsi
0x140828818: cmp    ax,0x21
0x14082881c: jge    0x140828862
0x14082881e: mov    edx,0x1
0x140828823: movzx  r9d,dl
0x140828827: call   0x1400bc760
0x14082882c: lea    rdx,[rip+0xeb0961]        # 0x1416d9194 ; 'Serene'
0x140828833: lea    rcx,[rbp+0x1100]
0x14082883a: call   0x140069780
0x14082883f: nop
0x140828840: xor    r9d,r9d
0x140828843: xor    r8d,r8d
0x140828846: lea    rdx,[rbp+0x1100]
0x14082884d: mov    rcx,rsi
0x140828850: call   0x140af3400
0x140828855: nop
0x140828856: lea    rcx,[rbp+0x1100]
0x14082885d: jmp    0x140828a8a
0x140828862: xor    r9d,r9d
0x140828865: cmp    ax,0x42
0x140828869: jge    0x1408288a8
0x14082886b: mov    edx,edi
0x14082886d: call   0x1400bc760
0x140828872: lea    rdx,[rip+0xeb0923]        # 0x1416d919c ; 'Calm'
0x140828879: lea    rcx,[rbp+0x1120]
0x140828880: call   0x140069780
0x140828885: nop
0x140828886: xor    r9d,r9d
0x140828889: xor    r8d,r8d
0x14082888c: lea    rdx,[rbp+0x1120]
0x140828893: mov    rcx,rsi
0x140828896: call   0x140af3400
0x14082889b: nop
0x14082889c: lea    rcx,[rbp+0x1120]
0x1408288a3: jmp    0x140828a8a
0x1408288a8: mov    edx,0x5
0x1408288ad: call   0x1400bc760
0x1408288b2: lea    rdx,[rip+0xeb08bf]        # 0x1416d9178 ; 'Sinister'
0x1408288b9: lea    rcx,[rbp+0x1140]
0x1408288c0: call   0x140069780
0x1408288c5: nop
0x1408288c6: xor    r9d,r9d
0x1408288c9: xor    r8d,r8d
0x1408288cc: lea    rdx,[rbp+0x1140]
0x1408288d3: mov    rcx,rsi
0x1408288d6: call   0x140af3400
0x1408288db: nop
0x1408288dc: lea    rcx,[rbp+0x1140]
0x1408288e3: jmp    0x140828a8a
0x1408288e8: cmp    cx,0x42
0x1408288ec: mov    rcx,rsi
0x1408288ef: jge    0x1408289c6
0x1408288f5: cmp    ax,0x21
0x1408288f9: jge    0x14082893c
0x1408288fb: mov    edx,r14d
0x1408288fe: mov    r9b,0x1
0x140828901: call   0x1400bc760
0x140828906: lea    rdx,[rip+0xeb087b]        # 0x1416d9188 ; 'Mirthful'
0x14082890d: lea    rcx,[rbp+0x1160]
0x140828914: call   0x140069780
0x140828919: nop
0x14082891a: xor    r9d,r9d
0x14082891d: xor    r8d,r8d
0x140828920: lea    rdx,[rbp+0x1160]
0x140828927: mov    rcx,rsi
0x14082892a: call   0x140af3400
0x14082892f: nop
0x140828930: lea    rcx,[rbp+0x1160]
0x140828937: jmp    0x140828a8a
0x14082893c: cmp    ax,0x42
0x140828940: jge    0x140828983
0x140828942: mov    edx,r14d
0x140828945: xor    r9d,r9d
0x140828948: call   0x1400bc760
0x14082894d: lea    rdx,[rip+0xeb080c]        # 0x1416d9160 ; 'Wilderness'
0x140828954: lea    rcx,[rbp+0x1180]
0x14082895b: call   0x140069780
0x140828960: nop
0x140828961: xor    r9d,r9d
0x140828964: xor    r8d,r8d
0x140828967: lea    rdx,[rbp+0x1180]
0x14082896e: mov    rcx,rsi
0x140828971: call   0x140af3400
0x140828976: nop
0x140828977: lea    rcx,[rbp+0x1180]
0x14082897e: jmp    0x140828a8a
0x140828983: mov    edx,0x5
0x140828988: mov    r9b,0x1
0x14082898b: call   0x1400bc760
0x140828990: lea    rdx,[rip+0xeb07d9]        # 0x1416d9170 ; 'Haunted'
0x140828997: lea    rcx,[rbp+0x11a0]
0x14082899e: call   0x140069780
0x1408289a3: nop
0x1408289a4: xor    r9d,r9d
0x1408289a7: xor    r8d,r8d
0x1408289aa: lea    rdx,[rbp+0x11a0]
0x1408289b1: mov    rcx,rsi
0x1408289b4: call   0x140af3400
0x1408289b9: nop
0x1408289ba: lea    rcx,[rbp+0x11a0]
0x1408289c1: jmp    0x140828a8a
0x1408289c6: mov    r9b,0x1
0x1408289c9: cmp    ax,0x21
0x1408289cd: jge    0x140828a0c
0x1408289cf: mov    edx,0x3
0x1408289d4: call   0x1400bc760
0x1408289d9: lea    rdx,[rip+0xeb0760]        # 0x1416d9140 ; 'Joyous Wilds'
0x1408289e0: lea    rcx,[rbp+0x11c0]
0x1408289e7: call   0x140069780
0x1408289ec: nop
0x1408289ed: xor    r9d,r9d
0x1408289f0: xor    r8d,r8d
0x1408289f3: lea    rdx,[rbp+0x11c0]
0x1408289fa: mov    rcx,rsi
0x1408289fd: call   0x140af3400
0x140828a02: nop
0x140828a03: lea    rcx,[rbp+0x11c0]
0x140828a0a: jmp    0x140828a8a
0x140828a0c: cmp    ax,0x42
0x140828a10: jge    0x140828a4f
0x140828a12: mov    edx,0x6
0x140828a17: call   0x1400bc760
0x140828a1c: lea    rdx,[rip+0xeb072d]        # 0x1416d9150 ; 'Untamed Wilds'
0x140828a23: lea    rcx,[rbp+0x11e0]
0x140828a2a: call   0x140069780
0x140828a2f: nop
0x140828a30: xor    r9d,r9d
0x140828a33: xor    r8d,r8d
0x140828a36: lea    rdx,[rbp+0x11e0]
0x140828a3d: mov    rcx,rsi
0x140828a40: call   0x140af3400
0x140828a45: nop
0x140828a46: lea    rcx,[rbp+0x11e0]
0x140828a4d: jmp    0x140828a8a
0x140828a4f: mov    edx,0x5
0x140828a54: call   0x1400bc760
0x140828a59: lea    rdx,[rip+0xeb0798]        # 0x1416d91f8 ; 'Terrifying'
0x140828a60: lea    rcx,[rbp+0x1200]
0x140828a67: call   0x140069780
0x140828a6c: nop
0x140828a6d: xor    r9d,r9d
0x140828a70: xor    r8d,r8d
0x140828a73: lea    rdx,[rbp+0x1200]
0x140828a7a: mov    rcx,rsi
0x140828a7d: call   0x140af3400
0x140828a82: nop
0x140828a83: lea    rcx,[rbp+0x1200]
0x140828a8a: call   0x140069460
0x140828a8f: mov    r14d,0xa
0x140828a95: mov    DWORD PTR [rbp-0x7c],r14d
0x140828a99: xor    sil,sil
0x140828a9c: lea    rcx,[rbp+0x540]
0x140828aa3: call   0x140070cc0
0x140828aa8: nop
0x140828aa9: mov    rcx,QWORD PTR [rip+0x1ce5528]        # 0x14250dfd8
0x140828ab0: add    rcx,0x178
0x140828ab7: lea    rdx,[rbp+0x98]
0x140828abe: call   0x140070870
0x140828ac3: mov    rcx,QWORD PTR [rip+0x1ce550e]        # 0x14250dfd8
0x140828aca: add    rcx,0x178
0x140828ad1: lea    rdx,[rbp+0x190]
0x140828ad8: call   0x140070860
0x140828add: lea    r8,[rbp+0x190]
0x140828ae4: lea    rdx,[rbp-0x4c]
0x140828ae8: lea    rcx,[rbp+0x98]
0x140828aef: call   0x140070450
0x140828af4: xor    edx,edx
0x140828af6: movzx  ecx,BYTE PTR [rax]
0x140828af9: call   0x140066de0
0x140828afe: test   al,al
0x140828b00: je     0x140828e39
0x140828b06: data16 nop WORD PTR [rax+rax*1+0x0]
0x140828b10: lea    rcx,[rbp+0x98]
0x140828b17: call   0x140070440
0x140828b1c: mov    rbx,QWORD PTR [rax]
0x140828b1f: movsx  eax,WORD PTR [rbx+0x82]
0x140828b26: cmp    eax,r12d
0x140828b29: jne    0x140828df7
0x140828b2f: movsx  eax,WORD PTR [rbx+0x84]
0x140828b36: cmp    eax,r15d
0x140828b39: jne    0x140828df7
0x140828b3f: xor    edx,edx
0x140828b41: lea    rcx,[rbx+0x2a0]
0x140828b48: call   0x1400735c0
0x140828b4d: test   al,al
0x140828b4f: jne    0x140828df7
0x140828b55: mov    edx,0x2
0x140828b5a: lea    rcx,[rbx+0x2a0]
0x140828b61: call   0x1400735c0
0x140828b66: test   al,al
0x140828b68: jne    0x140828df7
0x140828b6e: xor    r8d,r8d
0x140828b71: mov    edx,0x7
0x140828b76: xor    r9d,r9d
0x140828b79: lea    rdi,[rip+0x1e43cf0]        # 0x14266c870
0x140828b80: mov    rcx,rdi
0x140828b83: call   0x1400bc760
0x140828b88: movsx  rax,WORD PTR [rbx+0x80]
0x140828b90: cmp    eax,0xa
0x140828b93: ja     0x140828df7
0x140828b99: lea    rdx,[rip+0xffffffffff7d7460]        # 0x140000000
0x140828ba0: mov    ecx,DWORD PTR [rdx+rax*4+0x831e10]
0x140828ba7: add    rcx,rdx
0x140828baa: jmp    rcx
0x140828bac: lea    rdx,[rbx+0x88]
0x140828bb3: lea    rcx,[rbp+0xf0]
0x140828bba: call   0x140070a40
0x140828bbf: lea    rdx,[rbp+0x540]
0x140828bc6: mov    rcx,rbx
0x140828bc9: call   0x140aadad0
0x140828bce: movsx  edx,r14w
0x140828bd2: mov    r8d,r13d
0x140828bd5: mov    rcx,rdi
0x140828bd8: call   0x1400bc750
0x140828bdd: xor    r9d,r9d
0x140828be0: xor    r8d,r8d
0x140828be3: lea    rdx,[rbp+0x540]
0x140828bea: mov    rcx,rdi
0x140828bed: call   0x140af3400
0x140828bf2: inc    r14w
0x140828bf6: xor    r9d,r9d
0x140828bf9: mov    r8b,0x1
0x140828bfc: lea    rdx,[rbp+0x540]
0x140828c03: mov    rcx,rbx
0x140828c06: call   0x140aae180
0x140828c0b: movsx  edx,r14w
0x140828c0f: lea    r8d,[r13+0x1]
0x140828c13: mov    rcx,rdi
0x140828c16: call   0x1400bc750
0x140828c1b: lea    rdx,[rip+0xddbdaa]        # 0x1416049cc ; '"'
0x140828c22: lea    rcx,[rbp+0x1220]
0x140828c29: call   0x140069780
0x140828c2e: nop
0x140828c2f: xor    r9d,r9d
0x140828c32: mov    r8b,0x3
0x140828c35: lea    rdx,[rbp+0x1220]
0x140828c3c: mov    rcx,rdi
0x140828c3f: call   0x140af3400
0x140828c44: nop
0x140828c45: lea    rcx,[rbp+0x1220]
0x140828c4c: call   0x140069460
0x140828c51: xor    r9d,r9d
0x140828c54: mov    r8b,0x3
0x140828c57: lea    rdx,[rbp+0x540]
0x140828c5e: mov    rcx,rdi
0x140828c61: call   0x140af3400
0x140828c66: lea    rdx,[rip+0xddbd5f]        # 0x1416049cc ; '"'
0x140828c6d: lea    rcx,[rbp+0x1240]
0x140828c74: call   0x140069780
0x140828c79: nop
0x140828c7a: xor    r9d,r9d
0x140828c7d: xor    r8d,r8d
0x140828c80: lea    rdx,[rbp+0x1240]
0x140828c87: mov    rcx,rdi
0x140828c8a: call   0x140af3400
0x140828c8f: nop
0x140828c90: lea    rcx,[rbp+0x1240]
0x140828c97: call   0x140069460
0x140828c9c: inc    r14w
0x140828ca0: lea    rcx,[rbp+0x4e0]
0x140828ca7: call   0x140070cc0
0x140828cac: nop
0x140828cad: lea    rcx,[rbp+0x5a0]
0x140828cb4: call   0x140070cc0
0x140828cb9: nop
0x140828cba: lea    rdx,[rbp+0x5a0]
0x140828cc1: mov    rcx,rbx
0x140828cc4: call   0x1410e4720
0x140828cc9: lea    rcx,[rbp+0x5a0]
0x140828cd0: call   0x140070b50
0x140828cd5: test   al,al
0x140828cd7: jne    0x140828cff
0x140828cd9: lea    rdx,[rbp+0x5a0]
0x140828ce0: lea    rcx,[rbp+0x4e0]
0x140828ce7: call   0x1400bb340
0x140828cec: lea    rdx,[rip+0xddacfd]        # 0x1416039f0 ; ' '
0x140828cf3: lea    rcx,[rbp+0x4e0]
0x140828cfa: call   0x140070b90
0x140828cff: cmp    WORD PTR [rbx+0x80],0xa
0x140828d07: je     0x140828d84
0x140828d09: mov    rcx,rbx
0x140828d0c: call   0x14109aed0
0x140828d11: mov    rdi,rax
0x140828d14: test   rax,rax
0x140828d17: je     0x140828d7d
0x140828d19: mov    ecx,DWORD PTR [rax+0x9c]
0x140828d1f: shr    ecx,0xa
0x140828d22: not    ecx
0x140828d24: test   cl,0x1
0x140828d27: je     0x140828d7d
0x140828d29: lea    rcx,[rbp+0x680]
0x140828d30: call   0x140070cc0
0x140828d35: nop
0x140828d36: mov    r8d,0xffffffff
0x140828d3c: lea    rdx,[rbp+0x680]
0x140828d43: movzx  ecx,WORD PTR [rdi+0x98]
0x140828d4a: call   0x140abd210
0x140828d4f: lea    rdx,[rbp+0x680]
0x140828d56: lea    rcx,[rbp+0x4e0]
0x140828d5d: call   0x1400bb340
0x140828d62: mov    dl,0x20
0x140828d64: lea    rcx,[rbp+0x4e0]
0x140828d6b: call   0x1400bb360
0x140828d70: nop
0x140828d71: lea    rcx,[rbp+0x680]
0x140828d78: call   0x140069460
0x140828d7d: lea    rdi,[rip+0x1e43aec]        # 0x14266c870
0x140828d84: lea    rdx,[rbp+0x5a0]
0x140828d8b: mov    rcx,rbx
0x140828d8e: call   0x1410e4760
0x140828d93: lea    rdx,[rbp+0x5a0]
0x140828d9a: lea    rcx,[rbp+0x4e0]
0x140828da1: call   0x1400bb340
0x140828da6: lea    rcx,[rbp+0x4e0]
0x140828dad: call   0x140546b30
0x140828db2: movsx  edx,r14w
0x140828db6: lea    r8d,[r13+0x1]
0x140828dba: mov    rcx,rdi
0x140828dbd: call   0x1400bc750
0x140828dc2: xor    r9d,r9d
0x140828dc5: xor    r8d,r8d
0x140828dc8: lea    rdx,[rbp+0x4e0]
0x140828dcf: mov    rcx,rdi
0x140828dd2: call   0x140af3400
0x140828dd7: inc    r14w
0x140828ddb: mov    sil,0x1
0x140828dde: lea    rcx,[rbp+0x5a0]
0x140828de5: call   0x140069460
0x140828dea: nop
0x140828deb: lea    rcx,[rbp+0x4e0]
0x140828df2: call   0x140069460
0x140828df7: lea    rcx,[rbp+0x98]
0x140828dfe: call   0x140070430
0x140828e03: lea    r8,[rbp+0x190]
0x140828e0a: lea    rdx,[rbp-0x4c]
0x140828e0e: lea    rcx,[rbp+0x98]
0x140828e15: call   0x140070450
0x140828e1a: xor    edx,edx
0x140828e1c: movzx  ecx,BYTE PTR [rax]
0x140828e1f: call   0x140066de0
0x140828e24: test   al,al
0x140828e26: jne    0x140828b10
0x140828e2c: mov    DWORD PTR [rbp-0x7c],r14d
0x140828e30: test   sil,sil
0x140828e33: jne    0x140829025
0x140828e39: xor    edi,edi
0x140828e3b: mov    r13d,edi
0x140828e3e: mov    ebx,edi
0x140828e40: mov    QWORD PTR [rbp-0x58],rbx
0x140828e44: mov    eax,r12d
0x140828e47: sar    eax,0x4
0x140828e4a: mov    ecx,r15d
0x140828e4d: sar    ecx,0x4
0x140828e50: movsx  r8,ax
0x140828e54: mov    rax,QWORD PTR [rip+0x1ce517d]        # 0x14250dfd8
0x140828e5b: mov    rdx,QWORD PTR [rax+0x130]
0x140828e62: movsx  rax,cx
0x140828e66: lea    rcx,[rax+rax*2]
0x140828e6a: mov    rax,QWORD PTR [rdx+r8*8]
0x140828e6e: lea    rsi,[rax+rcx*8]
0x140828e72: mov    r14d,edi
0x140828e75: mov    rcx,rsi
0x140828e78: call   0x140070480
0x140828e7d: test   rax,rax
0x140828e80: je     0x14082901c
0x140828e86: data16 nop WORD PTR [rax+rax*1+0x0]
0x140828e90: mov    rdx,rdi
0x140828e93: mov    rcx,rsi
0x140828e96: call   0x140070850
0x140828e9b: mov    rcx,QWORD PTR [rax]
0x140828e9e: movsx  eax,WORD PTR [rcx+0x8]
0x140828ea2: cmp    eax,r12d
0x140828ea5: jne    0x140828f13
0x140828ea7: mov    rdx,rdi
0x140828eaa: mov    rcx,rsi
0x140828ead: call   0x140070850
0x140828eb2: mov    rcx,QWORD PTR [rax]
0x140828eb5: movsx  eax,WORD PTR [rcx+0xa]
0x140828eb9: cmp    eax,r15d
0x140828ebc: jne    0x140828f13
0x140828ebe: mov    rbx,QWORD PTR [rip+0x1ce5113]        # 0x14250dfd8
0x140828ec5: mov    rdx,rdi
0x140828ec8: mov    rcx,rsi
0x140828ecb: call   0x140070850
0x140828ed0: mov    rcx,QWORD PTR [rax]
0x140828ed3: mov    edx,DWORD PTR [rcx+0xc]
0x140828ed6: lea    rcx,[rbx+0x128]
0x140828edd: call   0x141547960
0x140828ee2: mov    rbx,rax
0x140828ee5: test   rax,rax
0x140828ee8: je     0x140828f0f
0x140828eea: mov    rdx,QWORD PTR [rax]
0x140828eed: mov    rcx,rax
0x140828ef0: call   QWORD PTR [rdx]
0x140828ef2: cmp    ax,0x1
0x140828ef6: je     0x140828f0f
0x140828ef8: mov    rdx,QWORD PTR [rbx]
0x140828efb: mov    rcx,rbx
0x140828efe: call   QWORD PTR [rdx+0x8]
0x140828f01: test   rax,rax
0x140828f04: je     0x140828f0f
0x140828f06: mov    QWORD PTR [rbp-0x58],rbx
0x140828f0a: inc    r13d
0x140828f0d: jmp    0x140828f13
0x140828f0f: mov    rbx,QWORD PTR [rbp-0x58]
0x140828f13: inc    r14d
0x140828f16: movsxd rdi,r14d
0x140828f19: mov    rcx,rsi
0x140828f1c: call   0x140070480
0x140828f21: cmp    rdi,rax
0x140828f24: jb     0x140828e90
0x140828f2a: lea    rsi,[rip+0x1e4393f]        # 0x14266c870
0x140828f31: cmp    r13d,0x1
0x140828f35: jne    0x140828fa8
0x140828f37: test   rbx,rbx
0x140828f3a: je     0x140829011
0x140828f40: xor    r8d,r8d
0x140828f43: mov    edx,0x7
0x140828f48: xor    r9d,r9d
0x140828f4b: mov    rcx,rsi
0x140828f4e: call   0x1400bc760
0x140828f53: mov    rax,QWORD PTR [rbx]
0x140828f56: mov    rcx,rbx
0x140828f59: call   QWORD PTR [rax+0x8]
0x140828f5c: mov    rcx,rax
0x140828f5f: xor    r9d,r9d
0x140828f62: movzx  r8d,r13b
0x140828f66: lea    rdx,[rbp+0x540]
0x140828f6d: call   0x140aae180
0x140828f72: mov    r14d,DWORD PTR [rbp-0x7c]
0x140828f76: movsx  edx,r14w
0x140828f7a: mov    r13d,DWORD PTR [rsp+0x70]
0x140828f7f: mov    r8d,r13d
0x140828f82: mov    rcx,rsi
0x140828f85: call   0x1400bc750
0x140828f8a: inc    r14w
0x140828f8e: xor    r9d,r9d
0x140828f91: xor    r8d,r8d
0x140828f94: lea    rdx,[rbp+0x540]
0x140828f9b: mov    rcx,rsi
0x140828f9e: call   0x140af3400
0x140828fa3: jmp    0x14082902c
0x140828fa8: jle    0x140829011
0x140828faa: xor    r8d,r8d
0x140828fad: mov    edx,0x7
0x140828fb2: xor    r9d,r9d
0x140828fb5: mov    rcx,rsi
0x140828fb8: call   0x1400bc760
0x140828fbd: mov    r14d,DWORD PTR [rbp-0x7c]
0x140828fc1: movsx  edx,r14w
0x140828fc5: mov    r13d,DWORD PTR [rsp+0x70]
0x140828fca: mov    r8d,r13d
0x140828fcd: mov    rcx,rsi
0x140828fd0: call   0x1400bc750
0x140828fd5: inc    r14w
0x140828fd9: lea    rdx,[rip+0xeb0228]        # 0x1416d9208 ; 'Multiple Constructions'
0x140828fe0: lea    rcx,[rbp+0x1260]
0x140828fe7: call   0x140069780
0x140828fec: nop
0x140828fed: xor    r9d,r9d
0x140828ff0: xor    r8d,r8d
0x140828ff3: lea    rdx,[rbp+0x1260]
0x140828ffa: mov    rcx,rsi
0x140828ffd: call   0x140af3400
0x140829002: nop
0x140829003: lea    rcx,[rbp+0x1260]
0x14082900a: call   0x140069460
0x14082900f: jmp    0x14082902c
0x140829011: mov    r14d,DWORD PTR [rbp-0x7c]
0x140829015: mov    r13d,DWORD PTR [rsp+0x70]
0x14082901a: jmp    0x14082902c
0x14082901c: mov    r14d,DWORD PTR [rbp-0x7c]
0x140829020: mov    r13d,DWORD PTR [rsp+0x70]
0x140829025: lea    rsi,[rip+0x1e43844]        # 0x14266c870
0x14082902c: lea    r9,[rbp-0x3c]
0x140829030: movzx  r8d,r15w
0x140829034: movzx  edx,r12w
0x140829038: mov    rcx,QWORD PTR [rip+0x1ce4f99]        # 0x14250dfd8
0x14082903f: call   0x140fa11e0
0x140829044: mov    rdi,rax
0x140829047: test   rax,rax
0x14082904a: je     0x140829334
0x140829050: movzx  r8d,r15w
0x140829054: movzx  edx,r12w
0x140829058: mov    rcx,QWORD PTR [rip+0x1ce4f79]        # 0x14250dfd8
0x14082905f: call   0x140f6e8b0
0x140829064: mov    ecx,eax
0x140829066: call   0x140766b90
0x14082906b: test   al,al
0x14082906d: jne    0x140829334
0x140829073: movzx  r8d,r15w
0x140829077: movzx  edx,r12w
0x14082907b: mov    rcx,QWORD PTR [rip+0x1ce4f56]        # 0x14250dfd8
0x140829082: call   0x1402c78c0
0x140829087: cmp    ax,0xfffb
0x14082908b: jle    0x140829334
0x140829091: movsx  edx,r14w
0x140829095: mov    r8d,r13d
0x140829098: mov    rcx,rsi
0x14082909b: call   0x1400bc750
0x1408290a0: xor    r8d,r8d
0x1408290a3: mov    edx,0x7
0x1408290a8: xor    r9d,r9d
0x1408290ab: mov    rcx,rsi
0x1408290ae: call   0x1400bc760
0x1408290b3: movsx  rdx,WORD PTR [rbp-0x3c]
0x1408290b8: lea    rcx,[rdi+0xa8]
0x1408290bf: call   0x140070990
0x1408290c4: cmp    DWORD PTR [rax],0x4e20
0x1408290ca: jl     0x14082910e
0x1408290cc: lea    rdx,[rip+0xeb010d]        # 0x1416d91e0 ; 'Major River: '
0x1408290d3: lea    rcx,[rbp+0x1280]
0x1408290da: call   0x140069780
0x1408290df: nop
0x1408290e0: xor    r9d,r9d
0x1408290e3: xor    r8d,r8d
0x1408290e6: lea    rdx,[rbp+0x1280]
0x1408290ed: mov    rcx,rsi
0x1408290f0: call   0x140af3400
0x1408290f5: nop
0x1408290f6: lea    rcx,[rbp+0x1280]
0x1408290fd: call   0x140069460
0x140829102: mov    ebx,DWORD PTR [rsp+0x74]
0x140829106: add    ebx,0xfffffff3
0x140829109: jmp    0x140829252
0x14082910e: movsx  rdx,WORD PTR [rbp-0x3c]
0x140829113: lea    rcx,[rdi+0xa8]
0x14082911a: call   0x140070990
0x14082911f: cmp    DWORD PTR [rax],0x2710
0x140829125: jl     0x14082915d
0x140829127: lea    rdx,[rip+0xeb00c2]        # 0x1416d91f0 ; 'River: '
0x14082912e: lea    rcx,[rbp+0x12a0]
0x140829135: call   0x140069780
0x14082913a: nop
0x14082913b: xor    r9d,r9d
0x14082913e: xor    r8d,r8d
0x140829141: lea    rdx,[rbp+0x12a0]
0x140829148: mov    rcx,rsi
0x14082914b: call   0x140af3400
0x140829150: nop
0x140829151: lea    rcx,[rbp+0x12a0]
0x140829158: jmp    0x140829246
0x14082915d: movsx  rdx,WORD PTR [rbp-0x3c]
0x140829162: lea    rcx,[rdi+0xa8]
0x140829169: call   0x140070990
0x14082916e: cmp    DWORD PTR [rax],0x1388
0x140829174: jl     0x1408291b8
0x140829176: lea    rdx,[rip+0xeb0043]        # 0x1416d91c0 ; 'Minor River: '
0x14082917d: lea    rcx,[rbp+0x12c0]
0x140829184: call   0x140069780
0x140829189: nop
0x14082918a: xor    r9d,r9d
0x14082918d: xor    r8d,r8d
0x140829190: lea    rdx,[rbp+0x12c0]
0x140829197: mov    rcx,rsi
0x14082919a: call   0x140af3400
0x14082919f: nop
0x1408291a0: lea    rcx,[rbp+0x12c0]
0x1408291a7: call   0x140069460
0x1408291ac: mov    ebx,DWORD PTR [rsp+0x74]
0x1408291b0: add    ebx,0xfffffff3
0x1408291b3: jmp    0x140829252
0x1408291b8: mov    r9d,0xf
0x1408291be: movzx  r8d,r15w
0x1408291c2: movzx  edx,r12w
0x1408291c6: mov    rcx,QWORD PTR [rip+0x1ce4e0b]        # 0x14250dfd8
0x1408291cd: call   0x1400bd630
0x1408291d2: test   al,al
0x1408291d4: jne    0x140829215
0x1408291d6: lea    rdx,[rip+0xeafff3]        # 0x1416d91d0 ; 'Stream: '
0x1408291dd: lea    rcx,[rbp+0x12e0]
0x1408291e4: call   0x140069780
0x1408291e9: nop
0x1408291ea: xor    r9d,r9d
0x1408291ed: xor    r8d,r8d
0x1408291f0: lea    rdx,[rbp+0x12e0]
0x1408291f7: mov    rcx,rsi
0x1408291fa: call   0x140af3400
0x1408291ff: nop
0x140829200: lea    rcx,[rbp+0x12e0]
0x140829207: call   0x140069460
0x14082920c: mov    ebx,DWORD PTR [rsp+0x74]
0x140829210: add    ebx,0xfffffff8
0x140829213: jmp    0x140829252
0x140829215: lea    rdx,[rip+0xeaff8c]        # 0x1416d91a8 ; 'Brook: '
0x14082921c: lea    rcx,[rbp+0x1300]
0x140829223: call   0x140069780
0x140829228: nop
0x140829229: xor    r9d,r9d
0x14082922c: xor    r8d,r8d
0x14082922f: lea    rdx,[rbp+0x1300]
0x140829236: mov    rcx,rsi
0x140829239: call   0x140af3400
0x14082923e: nop
0x14082923f: lea    rcx,[rbp+0x1300]
0x140829246: call   0x140069460
0x14082924b: mov    ebx,DWORD PTR [rsp+0x74]
0x14082924f: add    ebx,0xfffffff9
0x140829252: lea    rcx,[rbp+0x440]
0x140829259: call   0x140070cc0
0x14082925e: nop
0x14082925f: xor    r9d,r9d
0x140829262: mov    r8b,0x1
0x140829265: lea    rdx,[rbp+0x440]
0x14082926c: mov    rcx,rdi
0x14082926f: call   0x140aae180
0x140829274: movsxd rdi,ebx
0x140829277: lea    rcx,[rbp+0x440]
0x14082927e: call   0x140070960
0x140829283: cmp    rax,rdi
0x140829286: jbe    0x14082930f
0x14082928c: lea    rcx,[rbp+0x440]
0x140829293: call   0x140070960
0x140829298: cmp    rax,0x4
0x14082929c: jbe    0x1408292aa
0x14082929e: lea    rcx,[rbp+0x440]
0x1408292a5: call   0x140ef6230
0x1408292aa: lea    rcx,[rbp+0x440]
0x1408292b1: call   0x140070960
0x1408292b6: cmp    rax,rdi
0x1408292b9: jbe    0x14082930f
0x1408292bb: test   ebx,ebx
0x1408292bd: js     0x1408292d1
0x1408292bf: xor    r8d,r8d
0x1408292c2: mov    rdx,rdi
0x1408292c5: lea    rcx,[rbp+0x440]
0x1408292cc: call   0x1400e2860
0x1408292d1: cmp    ebx,0x3
0x1408292d4: jle    0x14082930f
0x1408292d6: lea    rdx,[rdi-0x3]
0x1408292da: lea    rcx,[rbp+0x440]
0x1408292e1: call   0x1400fcbe0
0x1408292e6: mov    BYTE PTR [rax],0x2e
0x1408292e9: lea    rdx,[rdi-0x2]
0x1408292ed: lea    rcx,[rbp+0x440]
0x1408292f4: call   0x1400fcbe0
0x1408292f9: mov    BYTE PTR [rax],0x2e
0x1408292fc: lea    rdx,[rdi-0x1]
0x140829300: lea    rcx,[rbp+0x440]
0x140829307: call   0x1400fcbe0
0x14082930c: mov    BYTE PTR [rax],0x2e
0x14082930f: mov    r9d,ebx
0x140829312: xor    r8d,r8d
0x140829315: lea    rdx,[rbp+0x440]
0x14082931c: mov    rcx,rsi
0x14082931f: call   0x140af3400
0x140829324: inc    r14w
0x140829328: lea    rcx,[rbp+0x440]
0x14082932f: call   0x140069460
0x140829334: movzx  r8d,r15w
0x140829338: movzx  edx,r12w
0x14082933c: mov    rcx,QWORD PTR [rip+0x1ce4c95]        # 0x14250dfd8
0x140829343: call   0x140fa1160
0x140829348: mov    rbx,rax
0x14082934b: test   rax,rax
0x14082934e: je     0x140829419
0x140829354: xor    r8d,r8d
0x140829357: mov    edx,0x7
0x14082935c: xor    r9d,r9d
0x14082935f: mov    rcx,rsi
0x140829362: call   0x1400bc760
0x140829367: xor    r9d,r9d
0x14082936a: mov    r8b,0x1
0x14082936d: lea    rdx,[rbp+0x640]
0x140829374: mov    rcx,rbx
0x140829377: call   0x140aae180
0x14082937c: lea    rcx,[rbx+0x80]
0x140829383: xor    edx,edx
0x140829385: call   0x1400735c0
0x14082938a: lea    r8,[rbp+0x640]
0x140829391: test   al,al
0x140829393: je     0x1408293c0
0x140829395: lea    rdx,[rip+0xeafe14]        # 0x1416d91b0 ; 'Volcano: '
0x14082939c: lea    rcx,[rbp+0x2aa0]
0x1408293a3: call   0x14014c620
0x1408293a8: mov    rdx,rax
0x1408293ab: lea    rcx,[rbp+0x5c0]
0x1408293b2: call   0x1401fc980
0x1408293b7: lea    rcx,[rbp+0x2aa0]
0x1408293be: jmp    0x1408293e9
0x1408293c0: lea    rdx,[rip+0xeafc81]        # 0x1416d9048 ; 'Mountain: '
0x1408293c7: lea    rcx,[rbp+0x2ac0]
0x1408293ce: call   0x14014c620
0x1408293d3: mov    rdx,rax
0x1408293d6: lea    rcx,[rbp+0x5c0]
0x1408293dd: call   0x1401fc980
0x1408293e2: lea    rcx,[rbp+0x2ac0]
0x1408293e9: call   0x140069460
0x1408293ee: movsx  edx,r14w
0x1408293f2: mov    r8d,r13d
0x1408293f5: mov    rcx,rsi
0x1408293f8: call   0x1400bc750
0x1408293fd: inc    r14w
0x140829401: mov    r9d,DWORD PTR [rsp+0x74]
0x140829406: xor    r8d,r8d
0x140829409: lea    rdx,[rbp+0x5c0]
0x140829410: mov    rcx,rsi
0x140829413: call   0x140af3400
0x140829418: nop
0x140829419: lea    rcx,[rbp+0x540]
0x140829420: call   0x140069460
0x140829425: inc    r14w
0x140829429: mov    DWORD PTR [rbp-0x7c],r14d
0x14082942d: cmp    r14w,0x24
0x140829432: jg     0x14082a1c8
0x140829438: cmp    DWORD PTR [rip+0x10a17b9],r12d        # 0x1418cabf8
0x14082943f: jne    0x14082944e
0x140829441: cmp    DWORD PTR [rip+0x10a17b4],r15d        # 0x1418cabfc
0x140829448: je     0x14082a085
0x14082944e: mov    DWORD PTR [rip+0x10a17a3],r12d        # 0x1418cabf8
0x140829455: mov    DWORD PTR [rip+0x10a17a0],r15d        # 0x1418cabfc
0x14082945c: lea    rcx,[rip+0x10a179d]        # 0x1418cac00
0x140829463: call   0x1400e4e00
0x140829468: xor    ebx,ebx
0x14082946a: mov    r13d,ebx
0x14082946d: cmp    DWORD PTR [rip+0x1094dc4],0x1        # 0x1418be238
0x140829474: jne    0x14082a075
0x14082947a: cmp    DWORD PTR [rip+0x1e424c7],0xffffffff        # 0x14266b948
0x140829481: je     0x14082a075
0x140829487: lea    rcx,[rbp+0xf0]
0x14082948e: call   0x1400709a0
0x140829493: test   rax,rax
0x140829496: je     0x140829d71
0x14082949c: movsxd rdx,DWORD PTR [rip+0x1e424a5]        # 0x14266b948
0x1408294a3: lea    rcx,[rip+0x1bde14e]        # 0x1424075f8
0x1408294aa: call   0x140070850
0x1408294af: mov    rcx,QWORD PTR [rax]
0x1408294b2: mov    rbx,QWORD PTR [rcx+0x10]
0x1408294b6: mov    QWORD PTR [rbp-0x58],rbx
0x1408294ba: test   rbx,rbx
0x1408294bd: je     0x140829d6f
0x1408294c3: lea    rdx,[rbp+0xa0]
0x1408294ca: lea    rcx,[rbx+0xe8]
0x1408294d1: call   0x140070870
0x1408294d6: lea    rdx,[rbp+0x108]
0x1408294dd: lea    rcx,[rbx+0xe8]
0x1408294e4: call   0x140070860
0x1408294e9: lea    rdx,[rbp+0x108]
0x1408294f0: lea    rcx,[rbp+0xa0]
0x1408294f7: call   0x1400bafa0
0x1408294fc: test   al,al
0x1408294fe: jne    0x140829d6f
0x140829504: mov    r14,0xffffffffffffffff
0x14082950b: nop    DWORD PTR [rax+rax*1+0x0]
0x140829510: lea    rcx,[rbp+0xa0]
0x140829517: call   0x140070440
0x14082951c: mov    rbx,QWORD PTR [rax]
0x14082951f: mov    rax,QWORD PTR [rbx]
0x140829522: mov    rcx,rbx
0x140829525: call   QWORD PTR [rax]
0x140829527: cmp    ax,0xd
0x14082952b: jne    0x140829531
0x14082952d: mov    r14d,DWORD PTR [rbx+0x18]
0x140829531: lea    rcx,[rbp+0xa0]
0x140829538: call   0x140070430
0x14082953d: lea    rdx,[rbp+0x108]
0x140829544: lea    rcx,[rbp+0xa0]
0x14082954b: call   0x1400bafa0
0x140829550: test   al,al
0x140829552: je     0x140829510
0x140829554: mov    QWORD PTR [rbp+0x58],r14
0x140829558: cmp    r14d,0xffffffff
0x14082955c: mov    r14d,DWORD PTR [rbp-0x7c]
0x140829560: je     0x140829d6f
0x140829566: mov    edx,DWORD PTR [rbp+0x58]
0x140829569: lea    rcx,[rip+0x1cdc6d0]        # 0x142505c40
0x140829570: call   0x140076b30
0x140829575: mov    r13,rax
0x140829578: mov    QWORD PTR [rbp+0x58],rax
0x14082957c: test   rax,rax
0x14082957f: je     0x140829d6f
0x140829585: mov    edx,DWORD PTR [rax+0x1c4]
0x14082958b: lea    rcx,[rip+0x1bca6e6]        # 0x1423f3c78
0x140829592: call   0x14007f120
0x140829597: mov    rsi,rax
0x14082959a: test   rax,rax
0x14082959d: je     0x1408296ea
0x1408295a3: lea    rdx,[rbp+0xa8]
0x1408295aa: lea    rcx,[rbp+0xf0]
0x1408295b1: call   0x140070870
0x1408295b6: lea    rdx,[rbp+0x110]
0x1408295bd: lea    rcx,[rbp+0xf0]
0x1408295c4: call   0x140070860
0x1408295c9: lea    rdx,[rbp+0x110]
0x1408295d0: lea    rcx,[rbp+0xa8]
0x1408295d7: call   0x1400bafa0
0x1408295dc: test   al,al
0x1408295de: jne    0x1408296ea
0x1408295e4: lea    rcx,[rbp+0xa8]
0x1408295eb: call   0x140070440
0x1408295f0: mov    edi,DWORD PTR [rax]
0x1408295f2: xor    r8d,r8d
0x1408295f5: mov    edx,edi
0x1408295f7: mov    rcx,rsi
0x1408295fa: call   0x14094ff80
0x1408295ff: test   rax,rax
0x140829602: je     0x1408296c3
0x140829608: test   BYTE PTR [rax+0x1c],0x1
0x14082960c: je     0x1408296c3
0x140829612: lea    rdx,[rsi+0x10c0]
0x140829619: mov    ecx,DWORD PTR [r13+0x1c8]
0x140829620: call   0x1401bc940
0x140829625: mov    rbx,rax
0x140829628: test   rax,rax
0x14082962b: je     0x1408296c3
0x140829631: lea    rcx,[rbp+0x560]
0x140829638: call   0x140070cc0
0x14082963d: nop
0x14082963e: lea    rdx,[rip+0xeafa13]        # 0x1416d9058 ; '[C:3:0:1]You are a '
0x140829645: lea    rcx,[rbp+0x560]
0x14082964c: call   0x140070bb0
0x140829651: lea    rdx,[rbx+0x218]
0x140829658: lea    rcx,[rbp+0x560]
0x14082965f: call   0x1400bb340
0x140829664: lea    rdx,[rip+0xeaf9c5]        # 0x1416d9030 ; ' based in '
0x14082966b: lea    rcx,[rbp+0x560]
0x140829672: call   0x140070b90
0x140829677: xor    r9d,r9d
0x14082967a: mov    r8d,edi
0x14082967d: lea    rdx,[rbp+0x560]
0x140829684: lea    rcx,[rip+0x1cf2aad]        # 0x14251c138
0x14082968b: call   0x140bab5f0
0x140829690: lea    rdx,[rip+0xeaf9a5]        # 0x1416d903c ; '.[B]'
0x140829697: lea    rcx,[rbp+0x560]
0x14082969e: call   0x140070b90
0x1408296a3: lea    rdx,[rbp+0x560]
0x1408296aa: lea    rcx,[rip+0x10a154f]        # 0x1418cac00
0x1408296b1: call   0x140d69ba0
0x1408296b6: nop
0x1408296b7: lea    rcx,[rbp+0x560]
0x1408296be: call   0x140069460
0x1408296c3: lea    rcx,[rbp+0xa8]
0x1408296ca: call   0x140070980
0x1408296cf: lea    rdx,[rbp+0x110]
0x1408296d6: lea    rcx,[rbp+0xa8]
0x1408296dd: call   0x1400bafa0
0x1408296e2: test   al,al
0x1408296e4: je     0x1408295e4
0x1408296ea: lea    rdx,[rbp+0x28]
0x1408296ee: lea    rcx,[r13+0xb8]
0x1408296f5: call   0x140070870
0x1408296fa: lea    rdx,[rbp+0x138]
0x140829701: lea    rcx,[r13+0xb8]
0x140829708: call   0x140070860
0x14082970d: lea    r8,[rbp+0x138]
0x140829714: lea    rdx,[rbp-0x31]
0x140829718: lea    rcx,[rbp+0x28]
0x14082971c: call   0x140070450
0x140829721: xor    edx,edx
0x140829723: movzx  ecx,BYTE PTR [rax]
0x140829726: call   0x140066de0
0x14082972b: test   al,al
0x14082972d: je     0x140829d6f
0x140829733: mov    r13,QWORD PTR [rbp-0x58]
0x140829737: lea    rcx,[rbp+0x28]
0x14082973b: call   0x140070440
0x140829740: mov    rcx,QWORD PTR [rax]
0x140829743: mov    eax,DWORD PTR [r13+0xe0]
0x14082974a: cmp    DWORD PTR [rcx+0xc],eax
0x14082974d: jne    0x140829d38
0x140829753: lea    rcx,[rbp+0x28]
0x140829757: call   0x140070440
0x14082975c: mov    rcx,QWORD PTR [rax]
0x14082975f: mov    rax,QWORD PTR [rcx]
0x140829762: call   QWORD PTR [rax+0x18]
0x140829765: cmp    eax,0x5
0x140829768: je     0x140829b27
0x14082976e: cmp    eax,0x8
0x140829771: jne    0x140829d38
0x140829777: lea    rcx,[rbp+0x28]
0x14082977b: call   0x140070440
0x140829780: mov    r15,QWORD PTR [rax]
0x140829783: lea    rdx,[rbp+0xf0]
0x14082978a: mov    ecx,DWORD PTR [r15+0x24]
0x14082978e: call   0x1400e2a50
0x140829793: cmp    eax,0xffffffff
0x140829796: je     0x140829d38
0x14082979c: lea    rcx,[rbp+0x4a0]
0x1408297a3: call   0x140070cc0
0x1408297a8: nop
0x1408297a9: lea    rdx,[rip+0xeaf820]        # 0x1416d8fd0 ; '[C:2:0:1]You have been ordered to drive '
0x1408297b0: lea    rcx,[rbp+0x4a0]
0x1408297b7: call   0x140070bb0
0x1408297bc: xor    r9d,r9d
0x1408297bf: mov    r8d,DWORD PTR [r15+0x20]
0x1408297c3: lea    rdx,[rbp+0x4a0]
0x1408297ca: lea    rcx,[rip+0x1cf2967]        # 0x14251c138
0x1408297d1: call   0x140baa5c0
0x1408297d6: lea    rdx,[rip+0xddf41f]        # 0x141608bfc ; ' from '
0x1408297dd: lea    rcx,[rbp+0x4a0]
0x1408297e4: call   0x140070b90
0x1408297e9: xor    r9d,r9d
0x1408297ec: mov    r8d,DWORD PTR [r15+0x24]
0x1408297f0: lea    rdx,[rbp+0x4a0]
0x1408297f7: lea    rcx,[rip+0x1cf293a]        # 0x14251c138
0x1408297fe: call   0x140bab5f0
0x140829803: lea    rdx,[rip+0xdda03a]        # 0x141603844 ; '.'
0x14082980a: lea    rcx,[rbp+0x4a0]
0x140829811: call   0x140070b90
0x140829816: xor    r12b,r12b
0x140829819: mov    edx,DWORD PTR [r15+0x20]
0x14082981d: lea    rcx,[rip+0x1bca454]        # 0x1423f3c78
0x140829824: call   0x14007f120
0x140829829: mov    rbx,rax
0x14082982c: mov    edx,DWORD PTR [r15+0x24]
0x140829830: mov    rcx,QWORD PTR [rip+0x1ce47a1]        # 0x14250dfd8
0x140829837: call   0x14007f150
0x14082983c: mov    r14,rax
0x14082983f: test   rax,rax
0x140829842: je     0x140829ae1
0x140829848: test   rbx,rbx
0x14082984b: je     0x140829ae1
0x140829851: lea    rdx,[rbp+0xb8]
0x140829858: lea    rcx,[rbx+0x1408]
0x14082985f: call   0x140070870
0x140829864: lea    rdx,[rbp+0x120]
0x14082986b: lea    rcx,[rbx+0x1408]
0x140829872: call   0x140070860
0x140829877: lea    r8,[rbp+0x120]
0x14082987e: lea    rdx,[rbp-0x2e]
0x140829882: lea    rcx,[rbp+0xb8]
0x140829889: call   0x140070450
0x14082988e: xor    edx,edx
0x140829890: movzx  ecx,BYTE PTR [rax]
0x140829893: call   0x140066de0
0x140829898: test   al,al
0x14082989a: je     0x140829a03
0x1408298a0: lea    rcx,[rbp+0xb8]
0x1408298a7: call   0x140070440
0x1408298ac: mov    rsi,QWORD PTR [rax]
0x1408298af: movsx  ecx,WORD PTR [rsi+0x4]
0x1408298b3: mov    eax,0x55555556
0x1408298b8: imul   ecx
0x1408298ba: mov    r8d,edx
0x1408298bd: shr    r8d,0x1f
0x1408298c1: add    r8d,edx
0x1408298c4: movsx  ecx,WORD PTR [rsi+0x6]
0x1408298c8: mov    eax,0x55555556
0x1408298cd: imul   ecx
0x1408298cf: mov    eax,edx
0x1408298d1: shr    eax,0x1f
0x1408298d4: add    edx,eax
0x1408298d6: cmp    DWORD PTR [r14+0x1f8],r8d
0x1408298dd: jg     0x1408299c9
0x1408298e3: cmp    DWORD PTR [r14+0x200],r8d
0x1408298ea: jl     0x1408299c9
0x1408298f0: cmp    DWORD PTR [r14+0x1fc],edx
0x1408298f7: jg     0x1408299c9
0x1408298fd: cmp    DWORD PTR [r14+0x204],edx
0x140829904: jl     0x1408299c9
0x14082990a: lea    rcx,[rsi+0x20]
0x14082990e: call   0x140070480
0x140829913: mov    rdi,rax
0x140829916: lea    rdx,[rbp+0xb0]
0x14082991d: lea    rcx,[rsi+0x38]
0x140829921: call   0x140070870
0x140829926: lea    rdx,[rbp+0x118]
0x14082992d: lea    rcx,[rsi+0x38]
0x140829931: call   0x140070860
0x140829936: lea    r8,[rbp+0x118]
0x14082993d: lea    rdx,[rbp-0x4b]
0x140829941: lea    rcx,[rbp+0xb0]
0x140829948: call   0x140070450
0x14082994d: xor    edx,edx
0x14082994f: movzx  ecx,BYTE PTR [rax]
0x140829952: call   0x140066de0
0x140829957: test   al,al
0x140829959: je     0x1408299a2
0x14082995b: nop    DWORD PTR [rax+rax*1+0x0]
0x140829960: lea    rcx,[rbp+0xb0]
0x140829967: call   0x140070440
0x14082996c: mov    rcx,QWORD PTR [rax]
0x14082996f: add    edi,DWORD PTR [rcx]
0x140829971: lea    rcx,[rbp+0xb0]
0x140829978: call   0x140070430
0x14082997d: lea    r8,[rbp+0x118]
0x140829984: lea    rdx,[rbp-0x4b]
0x140829988: lea    rcx,[rbp+0xb0]
0x14082998f: call   0x140070450
0x140829994: xor    edx,edx
0x140829996: movzx  ecx,BYTE PTR [rax]
0x140829999: call   0x140066de0
0x14082999e: test   al,al
0x1408299a0: jne    0x140829960
0x1408299a2: test   edi,edi
0x1408299a4: je     0x1408299c9
0x1408299a6: mov    rcx,QWORD PTR [rsi+0x60]
0x1408299aa: test   rcx,rcx
0x1408299ad: je     0x140829a00
0x1408299af: call   0x140076740
0x1408299b4: cmp    eax,0x1
0x1408299b7: jne    0x140829a00
0x1408299b9: mov    rax,QWORD PTR [rsi+0x60]
0x1408299bd: mov    rcx,QWORD PTR [rax+0x130]
0x1408299c4: test   BYTE PTR [rcx],0x1
0x1408299c7: je     0x140829a00
0x1408299c9: lea    rcx,[rbp+0xb8]
0x1408299d0: call   0x140070430
0x1408299d5: lea    r8,[rbp+0x120]
0x1408299dc: lea    rdx,[rbp-0x2e]
0x1408299e0: lea    rcx,[rbp+0xb8]
0x1408299e7: call   0x140070450
0x1408299ec: xor    edx,edx
0x1408299ee: movzx  ecx,BYTE PTR [rax]
0x1408299f1: call   0x140066de0
0x1408299f6: test   al,al
0x1408299f8: jne    0x1408298a0
0x1408299fe: jmp    0x140829a03
0x140829a00: mov    r12b,0x1
0x140829a03: lea    rdx,[rbp+0x20]
0x140829a07: lea    rcx,[rip+0x1bddb3a]        # 0x142407548
0x140829a0e: call   0x140070870
0x140829a13: lea    rdx,[rbp+0x128]
0x140829a1a: lea    rcx,[rip+0x1bddb27]        # 0x142407548
0x140829a21: call   0x140070860
0x140829a26: lea    r8,[rbp+0x128]
0x140829a2d: lea    rdx,[rbp-0x2f]
0x140829a31: lea    rcx,[rbp+0x20]
0x140829a35: call   0x140070450
0x140829a3a: xor    edx,edx
0x140829a3c: movzx  ecx,BYTE PTR [rax]
0x140829a3f: call   0x140066de0
0x140829a44: test   al,al
0x140829a46: je     0x140829adc
0x140829a4c: nop    DWORD PTR [rax+0x0]
0x140829a50: lea    rcx,[rbp+0x20]
0x140829a54: call   0x140070440
0x140829a59: mov    rcx,QWORD PTR [rax]
0x140829a5c: test   BYTE PTR [rcx+0x110],0x2
0x140829a63: jne    0x140829aad
0x140829a65: lea    rcx,[rbp+0x20]
0x140829a69: call   0x140070440
0x140829a6e: mov    rcx,QWORD PTR [rax]
0x140829a71: cmp    QWORD PTR [rcx+0x1208],0x0
0x140829a79: je     0x140829aad
0x140829a7b: lea    rcx,[rbp+0x20]
0x140829a7f: call   0x140070440
0x140829a84: mov    rcx,QWORD PTR [rax]
0x140829a87: mov    rdx,QWORD PTR [rcx+0x1208]
0x140829a8e: mov    eax,DWORD PTR [r15+0x20]
0x140829a92: cmp    DWORD PTR [rdx+0x4],eax
0x140829a95: jne    0x140829aad
0x140829a97: lea    rcx,[rbp+0x20]
0x140829a9b: call   0x140070440
0x140829aa0: mov    rcx,QWORD PTR [rax]
0x140829aa3: call   0x1413bdf60
0x140829aa8: cmp    rax,r14
0x140829aab: je     0x140829af4
0x140829aad: lea    rcx,[rbp+0x20]
0x140829ab1: call   0x140070430
0x140829ab6: lea    r8,[rbp+0x128]
0x140829abd: lea    rdx,[rbp-0x2f]
0x140829ac1: lea    rcx,[rbp+0x20]
0x140829ac5: call   0x140070450
0x140829aca: xor    edx,edx
0x140829acc: movzx  ecx,BYTE PTR [rax]
0x140829acf: call   0x140066de0
0x140829ad4: test   al,al
0x140829ad6: jne    0x140829a50
0x140829adc: test   r12b,r12b
0x140829adf: jne    0x140829af4
0x140829ae1: lea    rdx,[rip+0xeaf518]        # 0x1416d9000 ; '  You should report the task as complete.'
0x140829ae8: lea    rcx,[rbp+0x4a0]
0x140829aef: call   0x140070b90
0x140829af4: lea    rdx,[rip+0xdef3d5]        # 0x141618ed0 ; '[B]'
0x140829afb: lea    rcx,[rbp+0x4a0]
0x140829b02: call   0x140070b90
0x140829b07: lea    rdx,[rbp+0x4a0]
0x140829b0e: lea    rcx,[rip+0x10a10eb]        # 0x1418cac00
0x140829b15: call   0x140d69ba0
0x140829b1a: nop
0x140829b1b: lea    rcx,[rbp+0x4a0]
0x140829b22: jmp    0x140829d33
0x140829b27: lea    rcx,[rbp+0x28]
0x140829b2b: call   0x140070440
0x140829b30: mov    rdi,QWORD PTR [rax]
0x140829b33: lea    rdx,[rbp+0xf0]
0x140829b3a: mov    ecx,DWORD PTR [rdi+0x24]
0x140829b3d: call   0x1400e2a50
0x140829b42: cmp    eax,0xffffffff
0x140829b45: je     0x140829d38
0x140829b4b: lea    rcx,[rbp+0x480]
0x140829b52: call   0x140070cc0
0x140829b57: nop
0x140829b58: lea    rdx,[rip+0xeaf471]        # 0x1416d8fd0 ; '[C:2:0:1]You have been ordered to drive '
0x140829b5f: lea    rcx,[rbp+0x480]
0x140829b66: call   0x140070bb0
0x140829b6b: xor    r9d,r9d
0x140829b6e: mov    r8d,DWORD PTR [rdi+0x20]
0x140829b72: lea    rdx,[rbp+0x480]
0x140829b79: lea    rcx,[rip+0x1cf25b8]        # 0x14251c138
0x140829b80: call   0x140baa5c0
0x140829b85: lea    rdx,[rip+0xddf070]        # 0x141608bfc ; ' from '
0x140829b8c: lea    rcx,[rbp+0x480]
0x140829b93: call   0x140070b90
0x140829b98: xor    r9d,r9d
0x140829b9b: mov    r8d,DWORD PTR [rdi+0x24]
0x140829b9f: lea    rdx,[rbp+0x480]
0x140829ba6: lea    rcx,[rip+0x1cf258b]        # 0x14251c138
0x140829bad: call   0x140bab5f0
0x140829bb2: lea    rdx,[rip+0xdd9c8b]        # 0x141603844 ; '.'
0x140829bb9: lea    rcx,[rbp+0x480]
0x140829bc0: call   0x140070b90
0x140829bc5: mov    edx,DWORD PTR [rdi+0x20]
0x140829bc8: lea    rcx,[rip+0x1bca0a9]        # 0x1423f3c78
0x140829bcf: call   0x14007f120
0x140829bd4: mov    rbx,rax
0x140829bd7: mov    edx,DWORD PTR [rdi+0x24]
0x140829bda: mov    rcx,QWORD PTR [rip+0x1ce43f7]        # 0x14250dfd8
0x140829be1: call   0x14007f150
0x140829be6: mov    rsi,rax
0x140829be9: test   rax,rax
0x140829bec: je     0x140829cf2
0x140829bf2: test   rbx,rbx
0x140829bf5: je     0x140829cf2
0x140829bfb: mov    rcx,rax
0x140829bfe: call   0x1409ce920
0x140829c03: mov    rdi,rax
0x140829c06: test   rax,rax
0x140829c09: je     0x140829cf2
0x140829c0f: movzx  ecx,WORD PTR [rbx]
0x140829c12: cmp    cx,0x1
0x140829c16: jne    0x140829c26
0x140829c18: cmp    rax,rbx
0x140829c1b: je     0x140829d05
0x140829c21: jmp    0x140829cf2
0x140829c26: cmp    cx,0x7
0x140829c2a: je     0x140829ce3
0x140829c30: cmp    cx,0x4
0x140829c34: je     0x140829ce3
0x140829c3a: test   cx,cx
0x140829c3d: jne    0x140829cf2
0x140829c43: lea    rdx,[rbp+0x60]
0x140829c47: lea    rcx,[rbx+0xb8]
0x140829c4e: call   0x140070870
0x140829c53: lea    rdx,[rbp+0x130]
0x140829c5a: lea    rcx,[rbx+0xb8]
0x140829c61: call   0x140070860
0x140829c66: lea    r8,[rbp+0x130]
0x140829c6d: lea    rdx,[rbp-0x30]
0x140829c71: lea    rcx,[rbp+0x60]
0x140829c75: call   0x140070450
0x140829c7a: xor    edx,edx
0x140829c7c: movzx  ecx,BYTE PTR [rax]
0x140829c7f: call   0x140066de0
0x140829c84: test   al,al
0x140829c86: je     0x140829cf2
0x140829c88: nop    DWORD PTR [rax+rax*1+0x0]
0x140829c90: lea    rcx,[rbp+0x60]
0x140829c94: call   0x140070440
0x140829c99: mov    rcx,QWORD PTR [rax]
0x140829c9c: cmp    WORD PTR [rcx],0x1
0x140829ca0: jne    0x140829cb6
0x140829ca2: lea    rcx,[rbp+0x60]
0x140829ca6: call   0x140070440
0x140829cab: mov    rcx,QWORD PTR [rax]
0x140829cae: mov    eax,DWORD PTR [rdi+0x4]
0x140829cb1: cmp    DWORD PTR [rcx+0x4],eax
0x140829cb4: je     0x140829d05
0x140829cb6: lea    rcx,[rbp+0x60]
0x140829cba: call   0x140070430
0x140829cbf: lea    r8,[rbp+0x130]
0x140829cc6: lea    rdx,[rbp-0x30]
0x140829cca: lea    rcx,[rbp+0x60]
0x140829cce: call   0x140070450
0x140829cd3: xor    edx,edx
0x140829cd5: movzx  ecx,BYTE PTR [rax]
0x140829cd8: call   0x140066de0
0x140829cdd: test   al,al
0x140829cdf: jne    0x140829c90
0x140829ce1: jmp    0x140829cf2
0x140829ce3: mov    rdx,rsi
0x140829ce6: mov    rcx,rbx
0x140829ce9: call   0x1406c86c0
0x140829cee: test   al,al
0x140829cf0: jne    0x140829d05
0x140829cf2: lea    rdx,[rip+0xeaf307]        # 0x1416d9000 ; '  You should report the task as complete.'
0x140829cf9: lea    rcx,[rbp+0x480]
0x140829d00: call   0x140070b90
0x140829d05: lea    rdx,[rip+0xdef1c4]        # 0x141618ed0 ; '[B]'
0x140829d0c: lea    rcx,[rbp+0x480]
0x140829d13: call   0x140070b90
0x140829d18: lea    rdx,[rbp+0x480]
0x140829d1f: lea    rcx,[rip+0x10a0eda]        # 0x1418cac00
0x140829d26: call   0x140d69ba0
0x140829d2b: nop
0x140829d2c: lea    rcx,[rbp+0x480]
0x140829d33: call   0x140069460
0x140829d38: lea    rcx,[rbp+0x28]
0x140829d3c: call   0x140070430
0x140829d41: lea    r8,[rbp+0x138]
0x140829d48: lea    rdx,[rbp-0x31]
0x140829d4c: lea    rcx,[rbp+0x28]
0x140829d50: call   0x140070450
0x140829d55: xor    edx,edx
0x140829d57: movzx  ecx,BYTE PTR [rax]
0x140829d5a: call   0x140066de0
0x140829d5f: test   al,al
0x140829d61: jne    0x140829737
0x140829d67: mov    r13,QWORD PTR [rbp+0x58]
0x140829d6b: mov    r14d,DWORD PTR [rbp-0x7c]
0x140829d6f: xor    ebx,ebx
0x140829d71: cmp    DWORD PTR [rip+0x10944c0],0x1        # 0x1418be238
0x140829d78: jne    0x14082a075
0x140829d7e: cmp    DWORD PTR [rip+0x1e41bc3],0xffffffff        # 0x14266b948
0x140829d85: je     0x14082a075
0x140829d8b: lea    rcx,[rbp+0xf0]
0x140829d92: call   0x1400709a0
0x140829d97: test   rax,rax
0x140829d9a: je     0x14082a075
0x140829da0: lea    rdx,[rbp+0x68]
0x140829da4: lea    rcx,[rip+0x1e3c44d]        # 0x1426661f8
0x140829dab: call   0x140070870
0x140829db0: lea    rdx,[rbp+0x148]
0x140829db7: lea    rcx,[rip+0x1e3c43a]        # 0x1426661f8
0x140829dbe: call   0x140070860
0x140829dc3: lea    rdx,[rbp+0x148]
0x140829dca: lea    rcx,[rbp+0x68]
0x140829dce: call   0x1400bafa0
0x140829dd3: test   al,al
0x140829dd5: jne    0x14082a075
0x140829ddb: nop    DWORD PTR [rax+rax*1+0x0]
0x140829de0: lea    rcx,[rbp+0x68]
0x140829de4: call   0x140070440
0x140829de9: mov    rdi,QWORD PTR [rax]
0x140829dec: lea    rdx,[rbp+0xf0]
0x140829df3: mov    ecx,DWORD PTR [rdi+0x4]
0x140829df6: call   0x1400e2a50
0x140829dfb: cmp    eax,0xffffffff
0x140829dfe: je     0x14082a054
0x140829e04: lea    rdx,[rip+0xdf448d]        # 0x14161e298 ; '[C:4:0:1]'
0x140829e0b: lea    rcx,[rbp+0x460]
0x140829e12: call   0x140069780
0x140829e17: nop
0x140829e18: lea    rcx,[rbp+0x620]
0x140829e1f: call   0x140070cc0
0x140829e24: nop
0x140829e25: lea    rcx,[rbp+0x280]
0x140829e2c: call   0x1400736b0
0x140829e31: mov    WORD PTR [rsp+0x28],bx
0x140829e36: mov    WORD PTR [rsp+0x20],bx
0x140829e3b: lea    r9,[rbp+0x280]
0x140829e42: mov    r8d,DWORD PTR [rdi]
0x140829e45: lea    rdx,[rbp+0x620]
0x140829e4c: lea    rcx,[rip+0x1cf22e5]        # 0x14251c138
0x140829e53: call   0x140baabd0
0x140829e58: lea    rcx,[rbp+0x620]
0x140829e5f: call   0x140546b30
0x140829e64: lea    rdx,[rbp+0x620]
0x140829e6b: lea    rcx,[rbp+0x460]
0x140829e72: call   0x1400bb340
0x140829e77: lea    rdx,[rip+0xeaf102]        # 0x1416d8f80 ; ' is rumored to be in '
0x140829e7e: lea    rcx,[rbp+0x460]
0x140829e85: call   0x140070b90
0x140829e8a: xor    r9d,r9d
0x140829e8d: mov    r8d,DWORD PTR [rdi+0x4]
0x140829e91: lea    rdx,[rbp+0x460]
0x140829e98: lea    rcx,[rip+0x1cf2299]        # 0x14251c138
0x140829e9f: call   0x140bab5f0
0x140829ea4: lea    rdx,[rip+0xdd9999]        # 0x141603844 ; '.'
0x140829eab: lea    rcx,[rbp+0x460]
0x140829eb2: call   0x140070b90
0x140829eb7: test   BYTE PTR [rdi+0x28],0x2
0x140829ebb: je     0x140829ed0
0x140829ebd: lea    rdx,[rip+0xeaf0d4]        # 0x1416d8f98 ; '  [C:7:0:0]This is common knowledge where you are from.'
0x140829ec4: lea    rcx,[rbp+0x460]
0x140829ecb: call   0x140070b90
0x140829ed0: movsxd rdx,DWORD PTR [rip+0x1e41a71]        # 0x14266b948
0x140829ed7: lea    rcx,[rip+0x1bdd71a]        # 0x1424075f8
0x140829ede: call   0x140070850
0x140829ee3: mov    rcx,QWORD PTR [rax]
0x140829ee6: mov    rsi,QWORD PTR [rcx+0x10]
0x140829eea: test   rsi,rsi
0x140829eed: je     0x140829f10
0x140829eef: mov    edx,DWORD PTR [rdi]
0x140829ef1: mov    rcx,rsi
0x140829ef4: call   0x1406ad990
0x140829ef9: test   al,al
0x140829efb: je     0x140829f10
0x140829efd: lea    rdx,[rip+0xeaf1d4]        # 0x1416d90d8 ; '  [C:5:0:1]This creature is known to be dead.'
0x140829f04: lea    rcx,[rbp+0x460]
0x140829f0b: call   0x140070b90
0x140829f10: test   r13,r13
0x140829f13: je     0x14082a014
0x140829f19: lea    rdx,[rbp+0x48]
0x140829f1d: lea    rcx,[r13+0xb8]
0x140829f24: call   0x140070870
0x140829f29: lea    rdx,[rbp+0x140]
0x140829f30: lea    rcx,[r13+0xb8]
0x140829f37: call   0x140070860
0x140829f3c: lea    r8,[rbp+0x140]
0x140829f43: lea    rdx,[rbp-0x32]
0x140829f47: lea    rcx,[rbp+0x48]
0x140829f4b: call   0x140070450
0x140829f50: xor    edx,edx
0x140829f52: movzx  ecx,BYTE PTR [rax]
0x140829f55: call   0x140066de0
0x140829f5a: test   al,al
0x140829f5c: je     0x14082a012
0x140829f62: lea    rcx,[rbp+0x48]
0x140829f66: call   0x140070440
0x140829f6b: mov    rcx,QWORD PTR [rax]
0x140829f6e: mov    eax,DWORD PTR [rsi+0xe0]
0x140829f74: cmp    DWORD PTR [rcx+0xc],eax
0x140829f77: jne    0x140829fe3
0x140829f79: lea    rcx,[rbp+0x48]
0x140829f7d: call   0x140070440
0x140829f82: mov    rcx,QWORD PTR [rax]
0x140829f85: mov    rax,QWORD PTR [rcx]
0x140829f88: call   QWORD PTR [rax+0x18]
0x140829f8b: cmp    eax,0x7
0x140829f8e: jne    0x140829fe3
0x140829f90: lea    rcx,[rbp+0x48]
0x140829f94: call   0x140070440
0x140829f99: mov    rbx,QWORD PTR [rax]
0x140829f9c: mov    eax,DWORD PTR [rdi]
0x140829f9e: cmp    DWORD PTR [rbx+0x20],eax
0x140829fa1: jne    0x140829fe3
0x140829fa3: lea    rdx,[rip+0xeaf15e]        # 0x1416d9108 ; '  [C:2:0:1]You have been ordered to kill this creature.'
0x140829faa: lea    rcx,[rbp+0x460]
0x140829fb1: call   0x140070b90
0x140829fb6: mov    edx,DWORD PTR [rbx+0x20]
0x140829fb9: lea    rcx,[rip+0x1cf2178]        # 0x14251c138
0x140829fc0: call   0x1400693f0
0x140829fc5: test   rax,rax
0x140829fc8: je     0x140829fe3
0x140829fca: cmp    DWORD PTR [rax+0x30],0xffffffff
0x140829fce: je     0x140829fe3
0x140829fd0: lea    rdx,[rip+0xeaf029]        # 0x1416d9000 ; '  You should report the task as complete.'
0x140829fd7: lea    rcx,[rbp+0x460]
0x140829fde: call   0x140070b90
0x140829fe3: lea    rcx,[rbp+0x48]
0x140829fe7: call   0x140070430
0x140829fec: lea    r8,[rbp+0x140]
0x140829ff3: lea    rdx,[rbp-0x32]
0x140829ff7: lea    rcx,[rbp+0x48]
0x140829ffb: call   0x140070450
0x14082a000: xor    edx,edx
0x14082a002: movzx  ecx,BYTE PTR [rax]
0x14082a005: call   0x140066de0
0x14082a00a: test   al,al
0x14082a00c: jne    0x140829f62
0x14082a012: xor    ebx,ebx
0x14082a014: lea    rdx,[rip+0xdeeeb5]        # 0x141618ed0 ; '[B]'
0x14082a01b: lea    rcx,[rbp+0x460]
0x14082a022: call   0x140070b90
0x14082a027: lea    rdx,[rbp+0x460]
0x14082a02e: lea    rcx,[rip+0x10a0bcb]        # 0x1418cac00
0x14082a035: call   0x140d69ba0
0x14082a03a: nop
0x14082a03b: lea    rcx,[rbp+0x620]
0x14082a042: call   0x140069460
0x14082a047: nop
0x14082a048: lea    rcx,[rbp+0x460]
0x14082a04f: call   0x140069460
0x14082a054: lea    rcx,[rbp+0x68]
0x14082a058: call   0x140070430
0x14082a05d: lea    rdx,[rbp+0x148]
0x14082a064: lea    rcx,[rbp+0x68]
0x14082a068: call   0x1400bafa0
0x14082a06d: test   al,al
0x14082a06f: je     0x140829de0
0x14082a075: mov    edx,DWORD PTR [rsp+0x74]
0x14082a079: lea    rcx,[rip+0x10a0b80]        # 0x1418cac00
0x14082a080: call   0x140d69970
0x14082a085: lea    rcx,[rip+0x10a0b74]        # 0x1418cac00
0x14082a08c: call   0x140070480
0x14082a091: test   rax,rax
0x14082a094: je     0x14082a1c8
0x14082a09a: lea    rdx,[rbp-0x10]
0x14082a09e: lea    rcx,[rip+0x10a0b5b]        # 0x1418cac00
0x14082a0a5: call   0x140070870
0x14082a0aa: lea    rdx,[rbp+0x150]
0x14082a0b1: lea    rcx,[rip+0x10a0b48]        # 0x1418cac00
0x14082a0b8: call   0x140070860
0x14082a0bd: lea    r8,[rbp+0x150]
0x14082a0c4: lea    rdx,[rbp-0x33]
0x14082a0c8: lea    rcx,[rbp-0x10]
0x14082a0cc: call   0x140070450
0x14082a0d1: xor    edx,edx
0x14082a0d3: movzx  ecx,BYTE PTR [rax]
0x14082a0d6: call   0x140066de0
0x14082a0db: test   al,al
0x14082a0dd: je     0x14082a1c8
0x14082a0e3: movsx  esi,r14w
0x14082a0e7: mov    r14d,DWORD PTR [rsp+0x70]
0x14082a0ec: nop    DWORD PTR [rax+0x0]
0x14082a0f0: lea    rcx,[rbp-0x10]
0x14082a0f4: call   0x140070440
0x14082a0f9: mov    rcx,QWORD PTR [rax]
0x14082a0fc: mov    ecx,DWORD PTR [rcx+0x2c]
0x14082a0ff: add    ecx,esi
0x14082a101: cmp    ecx,0x24
0x14082a104: jg     0x14082a1c8
0x14082a10a: lea    rcx,[rbp-0x10]
0x14082a10e: call   0x140070440
0x14082a113: mov    rcx,QWORD PTR [rax]
0x14082a116: movzx  edi,BYTE PTR [rcx+0x22]
0x14082a11a: lea    rcx,[rbp-0x10]
0x14082a11e: call   0x140070440
0x14082a123: mov    rcx,QWORD PTR [rax]
0x14082a126: movzx  ebx,BYTE PTR [rcx+0x21]
0x14082a12a: lea    rcx,[rbp-0x10]
0x14082a12e: call   0x140070440
0x14082a133: mov    rcx,QWORD PTR [rax]
0x14082a136: movzx  r9d,dil
0x14082a13a: movzx  r8d,bl
0x14082a13e: movzx  edx,BYTE PTR [rcx+0x20]
0x14082a142: lea    rdi,[rip+0x1e42727]        # 0x14266c870
0x14082a149: mov    rcx,rdi
0x14082a14c: call   0x1400bc780
0x14082a151: lea    rcx,[rbp-0x10]
0x14082a155: call   0x140070440
0x14082a15a: mov    rcx,QWORD PTR [rax]
0x14082a15d: mov    ebx,DWORD PTR [rcx+0x28]
0x14082a160: add    ebx,r14d
0x14082a163: lea    rcx,[rbp-0x10]
0x14082a167: call   0x140070440
0x14082a16c: mov    rcx,QWORD PTR [rax]
0x14082a16f: mov    edx,DWORD PTR [rcx+0x2c]
0x14082a172: add    edx,esi
0x14082a174: mov    r8d,ebx
0x14082a177: mov    rcx,rdi
0x14082a17a: call   0x1400bc750
0x14082a17f: lea    rcx,[rbp-0x10]
0x14082a183: call   0x140070440
0x14082a188: xor    r9d,r9d
0x14082a18b: xor    r8d,r8d
0x14082a18e: mov    rdx,QWORD PTR [rax]
0x14082a191: mov    rcx,rdi
0x14082a194: call   0x140af3400
0x14082a199: lea    rcx,[rbp-0x10]
0x14082a19d: call   0x140070430
0x14082a1a2: lea    r8,[rbp+0x150]
0x14082a1a9: lea    rdx,[rbp-0x33]
0x14082a1ad: lea    rcx,[rbp-0x10]
0x14082a1b1: call   0x140070450
0x14082a1b6: xor    edx,edx
0x14082a1b8: movzx  ecx,BYTE PTR [rax]
0x14082a1bb: call   0x140066de0
0x14082a1c0: test   al,al
0x14082a1c2: jne    0x14082a0f0
0x14082a1c8: lea    rcx,[rbp+0xf0]
0x14082a1cf: call   0x140067150
0x14082a1d4: nop
0x14082a1d5: lea    rcx,[rbp+0x640]
0x14082a1dc: call   0x140069460
0x14082a1e1: nop
0x14082a1e2: lea    rcx,[rbp+0x2ae0]
0x14082a1e9: call   0x140069460
0x14082a1ee: nop
0x14082a1ef: lea    rcx,[rbp+0x5c0]
0x14082a1f6: call   0x140069460
0x14082a1fb: jmp    0x140831d14
0x14082a200: xor    edx,edx
0x14082a202: lea    rcx,[rip+0x1bc59e7]        # 0x1423efbf0
0x14082a209: call   0x1400735c0
0x14082a20e: mov    r15d,0x1
0x14082a214: test   al,al
0x14082a216: je     0x14082a416
0x14082a21c: cmp    QWORD PTR [rip+0x1e426c5],r13        # 0x14266c8e8
0x14082a223: je     0x14082a42b
0x14082a229: cmp    BYTE PTR [rip+0x1e38dd0],r13b        # 0x142663000
0x14082a230: je     0x14082a3b5
0x14082a236: lea    rcx,[rbp+0x2b00]
0x14082a23d: call   0x1400bd5c0
0x14082a242: mov    DWORD PTR [rbp+0x2bfc],esi
0x14082a248: mov    DWORD PTR [rbp+0x2c00],r14d
0x14082a24f: cmp    BYTE PTR [rip+0x1e38dee],r13b        # 0x142663044
0x14082a256: je     0x14082a329
0x14082a25c: mov    eax,DWORD PTR [rip+0x1e38da2]        # 0x142663004
0x14082a262: cmp    eax,ebx
0x14082a264: je     0x14082a289
0x14082a266: mov    DWORD PTR [rbp+0x2c04],eax
0x14082a26c: mov    eax,DWORD PTR [rip+0x1e38d96]        # 0x142663008
0x14082a272: mov    DWORD PTR [rbp+0x2c08],eax
0x14082a278: mov    eax,DWORD PTR [rip+0x1e38d8e]        # 0x14266300c
0x14082a27e: mov    DWORD PTR [rbp+0x2c0c],eax
0x14082a284: jmp    0x14082a379
0x14082a289: lea    rcx,[rip+0x1bdd2b8]        # 0x142407548
0x14082a290: call   0x140070480
0x14082a295: test   rax,rax
0x14082a298: je     0x14082a366
0x14082a29e: mov    rcx,QWORD PTR [rip+0x1bdd2eb]        # 0x142407590
0x14082a2a5: test   rcx,rcx
0x14082a2a8: je     0x14082a366
0x14082a2ae: lea    r9,[rbp+0x1c]
0x14082a2b2: lea    r8,[rbp+0x34]
0x14082a2b6: lea    rdx,[rbp+0x40]
0x14082a2ba: call   0x14137fd40
0x14082a2bf: movsx  r10d,WORD PTR [rbp+0x40]
0x14082a2c4: mov    eax,r10d
0x14082a2c7: cdq
0x14082a2c8: and    edx,0xf
0x14082a2cb: add    eax,edx
0x14082a2cd: sar    eax,0x4
0x14082a2d0: mov    ecx,DWORD PTR [rip+0x1ce0292]        # 0x14250a568
0x14082a2d6: lea    edx,[rcx+rcx*2]
0x14082a2d9: add    eax,edx
0x14082a2db: mov    DWORD PTR [rbp+0x2c04],eax
0x14082a2e1: movsx  r8d,WORD PTR [rbp+0x34]
0x14082a2e6: mov    eax,r8d
0x14082a2e9: cdq
0x14082a2ea: and    edx,0xf
0x14082a2ed: add    eax,edx
0x14082a2ef: sar    eax,0x4
0x14082a2f2: mov    ecx,DWORD PTR [rip+0x1ce0274]        # 0x14250a56c
0x14082a2f8: lea    r9d,[rcx+rcx*2]
0x14082a2fc: add    eax,r9d
0x14082a2ff: mov    DWORD PTR [rbp+0x2c08],eax
0x14082a305: movzx  r9d,WORD PTR [rbp+0x1c]
0x14082a30a: movzx  edx,r10w
0x14082a30e: lea    rcx,[rip+0x1bc965b]        # 0x1423f3970
0x14082a315: call   0x14007f270
0x14082a31a: bt     eax,0xf
0x14082a31e: jae    0x14082a379
0x14082a320: mov    DWORD PTR [rbp+0x2c0c],r15d
0x14082a327: jmp    0x14082a379
0x14082a329: mov    edx,DWORD PTR [rip+0x1e38e21]        # 0x142663150
0x14082a32f: lea    rcx,[rip+0x1cdff22]        # 0x14250a258
0x14082a336: call   0x140073ba0
0x14082a33b: test   rax,rax
0x14082a33e: je     0x14082a360
0x14082a340: movsx  ecx,WORD PTR [rax+0x4]
0x14082a344: mov    DWORD PTR [rbp+0x2c04],ecx
0x14082a34a: movsx  ecx,WORD PTR [rax+0x6]
0x14082a34e: mov    DWORD PTR [rbp+0x2c08],ecx
0x14082a354: movsx  eax,WORD PTR [rax+0x8]
0x14082a358: mov    DWORD PTR [rbp+0x2c0c],eax
0x14082a35e: jmp    0x14082a379
0x14082a360: mov    DWORD PTR [rbp+0x2c0c],edi
0x14082a366: lea    eax,[rsi+rsi*2]
0x14082a369: mov    DWORD PTR [rbp+0x2c04],eax
0x14082a36f: lea    eax,[r14+r14*2]
0x14082a373: mov    DWORD PTR [rbp+0x2c08],eax
0x14082a379: mov    eax,DWORD PTR [rbp+0x2b08]
0x14082a37f: bts    eax,0x8
0x14082a383: mov    DWORD PTR [rbp+0x2b08],eax
0x14082a389: cmp    DWORD PTR [rip+0x1e38cac],0x12        # 0x14266303c
0x14082a390: jne    0x14082a3ac
0x14082a392: mov    ecx,DWORD PTR [rip+0x1e38ca8]        # 0x142663040
0x14082a398: cmp    ecx,ebx
0x14082a39a: je     0x14082a3ac
0x14082a39c: bts    eax,0x9
0x14082a3a0: mov    DWORD PTR [rbp+0x2b08],eax
0x14082a3a6: mov    DWORD PTR [rbp+0x2c88],ecx
0x14082a3ac: lea    r9,[rbp+0x2b00]
0x14082a3b3: jmp    0x14082a3fe
0x14082a3b5: lea    rcx,[rbp+0x2ca0]
0x14082a3bc: call   0x1400bd5c0
0x14082a3c1: mov    DWORD PTR [rbp+0x2d9c],esi
0x14082a3c7: mov    DWORD PTR [rbp+0x2da0],r14d
0x14082a3ce: mov    DWORD PTR [rbp+0x2dac],edi
0x14082a3d4: cmp    DWORD PTR [rip+0x1e38c61],0x12        # 0x14266303c
0x14082a3db: jne    0x14082a3f7
0x14082a3dd: mov    eax,DWORD PTR [rip+0x1e38c5d]        # 0x142663040
0x14082a3e3: cmp    eax,ebx
0x14082a3e5: je     0x14082a3f7
0x14082a3e7: or     DWORD PTR [rbp+0x2ca8],0x200
0x14082a3f1: mov    DWORD PTR [rbp+0x2e28],eax
0x14082a3f7: lea    r9,[rbp+0x2ca0]
0x14082a3fe: mov    r8d,ebx
0x14082a401: mov    rdx,QWORD PTR [rip+0x1e424e0]        # 0x14266c8e8
0x14082a408: mov    rcx,QWORD PTR [rip+0x1ce3bc9]        # 0x14250dfd8
0x14082a40f: call   0x1402e3330
0x14082a414: jmp    0x14082a42b
0x14082a416: cmp    BYTE PTR [rip+0x1e38be3],r13b        # 0x142663000
0x14082a41d: je     0x14082a426
0x14082a41f: call   0x140823660
0x14082a424: jmp    0x14082a42b
0x14082a426: call   0x140825590
0x14082a42b: lea    rcx,[rip+0x1cdb8ce]        # 0x142505d00
0x14082a432: call   0x140070480
0x14082a437: test   rax,rax
0x14082a43a: je     0x14082a454
0x14082a43c: mov    r8d,DWORD PTR [rbp-0x80]
0x14082a440: mov    edx,DWORD PTR [rbp-0x74]
0x14082a443: lea    rcx,[rip+0x1cdb886]        # 0x142505cd0
0x14082a44a: call   0x1400eb560
0x14082a44f: jmp    0x140831d14
0x14082a454: mov    eax,DWORD PTR [rip+0x1cdfc36]        # 0x14250a090
0x14082a45a: test   r15b,al
0x14082a45d: jne    0x140831d14
0x14082a463: test   al,0x10
0x14082a465: je     0x14082a487
0x14082a467: mov    r8d,DWORD PTR [rbp-0x80]
0x14082a46b: mov    edx,DWORD PTR [rbp-0x74]
0x14082a46e: lea    rcx,[rip+0x1cdb85b]        # 0x142505cd0
0x14082a475: call   0x14081b800
0x14082a47a: test   BYTE PTR [rip+0x1cdfc0f],0x2        # 0x14250a090
0x14082a481: jne    0x140831d14
0x14082a487: cmp    BYTE PTR [rip+0x10a0742],r13b        # 0x1418cabd0
0x14082a48e: je     0x14082a4ac
0x14082a490: call   QWORD PTR [rip+0xdd5bfa]        # 0x141600090
0x14082a496: mov    r9d,DWORD PTR [rbp-0x80]
0x14082a49a: mov    r8d,DWORD PTR [rbp-0x74]
0x14082a49e: mov    edx,eax
0x14082a4a0: lea    rcx,[rip+0x10a0729]        # 0x1418cabd0
0x14082a4a7: call   0x14088cae0
0x14082a4ac: mov    BYTE PTR [rbp-0x78],r13b
0x14082a4b0: cmp    BYTE PTR [rip+0x1e38bbd],r15b        # 0x142663074
0x14082a4b7: jl     0x14082a622
0x14082a4bd: mov    eax,DWORD PTR [rbp-0x74]
0x14082a4c0: add    eax,DWORD PTR [rbp-0x80]
0x14082a4c3: cdq
0x14082a4c4: sub    eax,edx
0x14082a4c6: sar    eax,1
0x14082a4c8: lea    r14d,[rax-0xa]
0x14082a4cc: lea    edi,[rax+0xa]
0x14082a4cf: mov    eax,DWORD PTR [rip+0x1bc5733]        # 0x1423efc08
0x14082a4d5: cdq
0x14082a4d6: sub    eax,edx
0x14082a4d8: sar    eax,1
0x14082a4da: mov    r12d,eax
0x14082a4dd: lea    r13d,[rax-0x2]
0x14082a4e1: lea    r15d,[r13+0x4]
0x14082a4e5: mov    esi,r13d
0x14082a4e8: cmp    r13d,r15d
0x14082a4eb: jg     0x14082a5ba
0x14082a4f1: mov    ebx,r14d
0x14082a4f4: cmp    r14d,edi
0x14082a4f7: jg     0x14082a5af
0x14082a4fd: nop    DWORD PTR [rax]
0x14082a500: mov    r8d,ebx
0x14082a503: mov    edx,esi
0x14082a505: lea    rcx,[rip+0x1e42364]        # 0x14266c870
0x14082a50c: call   0x1400bc750
0x14082a511: xor    r8d,r8d
0x14082a514: xor    edx,edx
0x14082a516: lea    rcx,[rip+0x1e42353]        # 0x14266c870
0x14082a51d: call   0x1400bc7c0
0x14082a522: cmp    esi,r13d
0x14082a525: jne    0x14082a54f
0x14082a527: cmp    ebx,r14d
0x14082a52a: jne    0x14082a534
0x14082a52c: mov    edx,DWORD PTR [rip+0x1e43c62]        # 0x14266e194
0x14082a532: jmp    0x14082a599
0x14082a534: lea    rcx,[rip+0x1e42335]        # 0x14266c870
0x14082a53b: cmp    ebx,edi
0x14082a53d: jne    0x14082a547
0x14082a53f: mov    edx,DWORD PTR [rip+0x1e43c67]        # 0x14266e1ac
0x14082a545: jmp    0x14082a5a0
0x14082a547: mov    edx,DWORD PTR [rip+0x1e43c53]        # 0x14266e1a0
0x14082a54d: jmp    0x14082a5a0
0x14082a54f: cmp    esi,r15d
0x14082a552: jne    0x14082a57c
0x14082a554: cmp    ebx,r14d
0x14082a557: jne    0x14082a561
0x14082a559: mov    edx,DWORD PTR [rip+0x1e43c3d]        # 0x14266e19c
0x14082a55f: jmp    0x14082a599
0x14082a561: lea    rcx,[rip+0x1e42308]        # 0x14266c870
0x14082a568: cmp    ebx,edi
0x14082a56a: jne    0x14082a574
0x14082a56c: mov    edx,DWORD PTR [rip+0x1e43c42]        # 0x14266e1b4
0x14082a572: jmp    0x14082a5a0
0x14082a574: mov    edx,DWORD PTR [rip+0x1e43c2e]        # 0x14266e1a8
0x14082a57a: jmp    0x14082a5a0
0x14082a57c: cmp    ebx,r14d
0x14082a57f: jne    0x14082a589
0x14082a581: mov    edx,DWORD PTR [rip+0x1e43c11]        # 0x14266e198
0x14082a587: jmp    0x14082a599
0x14082a589: cmp    ebx,edi
0x14082a58b: mov    edx,DWORD PTR [rip+0x1e43c1f]        # 0x14266e1b0
0x14082a591: je     0x14082a599
0x14082a593: mov    edx,DWORD PTR [rip+0x1e43c0b]        # 0x14266e1a4
0x14082a599: lea    rcx,[rip+0x1e422d0]        # 0x14266c870
0x14082a5a0: call   0x140af4570
0x14082a5a5: inc    ebx
0x14082a5a7: cmp    ebx,edi
0x14082a5a9: jle    0x14082a500
0x14082a5af: inc    esi
0x14082a5b1: cmp    esi,r15d
0x14082a5b4: jle    0x14082a4f1
0x14082a5ba: xor    r8d,r8d
0x14082a5bd: mov    edx,0x7
0x14082a5c2: mov    r9b,0x1
0x14082a5c5: lea    rcx,[rip+0x1e422a4]        # 0x14266c870
0x14082a5cc: call   0x1400bc760
0x14082a5d1: lea    r8d,[r14+0x2]
0x14082a5d5: mov    edx,r12d
0x14082a5d8: lea    r12,[rip+0x1e42291]        # 0x14266c870
0x14082a5df: mov    rcx,r12
0x14082a5e2: call   0x1400bc750
0x14082a5e7: lea    rdx,[rip+0xeaeac2]        # 0x1416d90b0 ; 'Offloading site...'
0x14082a5ee: lea    rcx,[rbp+0x1320]
0x14082a5f5: call   0x140069780
0x14082a5fa: nop
0x14082a5fb: xor    r9d,r9d
0x14082a5fe: xor    r8d,r8d
0x14082a601: lea    rdx,[rbp+0x1320]
0x14082a608: mov    rcx,r12
0x14082a60b: call   0x140af3400
0x14082a610: nop
0x14082a611: lea    rcx,[rbp+0x1320]
0x14082a618: call   0x140069460
0x14082a61d: jmp    0x14082a8c3
0x14082a622: cmp    BYTE PTR [rip+0x1e38a1b],r13b        # 0x142663044
0x14082a629: jne    0x14082a8d0
0x14082a62f: mov    edx,DWORD PTR [rip+0x1e38b1b]        # 0x142663150
0x14082a635: lea    rcx,[rip+0x1cdfc1c]        # 0x14250a258
0x14082a63c: call   0x140073ba0
0x14082a641: mov    r13,rax
0x14082a644: test   rax,rax
0x14082a647: je     0x14082a8cd
0x14082a64d: cmp    WORD PTR [rax+0x10],0x0
0x14082a652: jle    0x14082a8cd
0x14082a658: mov    eax,DWORD PTR [rbp-0x74]
0x14082a65b: add    eax,DWORD PTR [rbp-0x80]
0x14082a65e: cdq
0x14082a65f: sub    eax,edx
0x14082a661: sar    eax,1
0x14082a663: lea    esi,[rax-0x28]
0x14082a666: lea    edi,[rax+0x28]
0x14082a669: mov    r12d,DWORD PTR [rip+0x1bc5598]        # 0x1423efc08
0x14082a670: add    r12d,0xfffffffa
0x14082a674: lea    r15d,[r12+0x3]
0x14082a679: mov    r14d,r12d
0x14082a67c: cmp    r12d,r15d
0x14082a67f: jg     0x14082a749
0x14082a685: mov    ebx,esi
0x14082a687: cmp    esi,edi
0x14082a689: jg     0x14082a73d
0x14082a68f: nop
0x14082a690: mov    r8d,ebx
0x14082a693: mov    edx,r14d
0x14082a696: lea    rcx,[rip+0x1e421d3]        # 0x14266c870
0x14082a69d: call   0x1400bc750
0x14082a6a2: xor    r8d,r8d
0x14082a6a5: xor    edx,edx
0x14082a6a7: lea    rcx,[rip+0x1e421c2]        # 0x14266c870
0x14082a6ae: call   0x1400bc7c0
0x14082a6b3: cmp    r14d,r12d
0x14082a6b6: jne    0x14082a6df
0x14082a6b8: cmp    ebx,esi
0x14082a6ba: jne    0x14082a6c4
0x14082a6bc: mov    edx,DWORD PTR [rip+0x1e43ad2]        # 0x14266e194
0x14082a6c2: jmp    0x14082a727
0x14082a6c4: lea    rcx,[rip+0x1e421a5]        # 0x14266c870
0x14082a6cb: cmp    ebx,edi
0x14082a6cd: jne    0x14082a6d7
0x14082a6cf: mov    edx,DWORD PTR [rip+0x1e43ad7]        # 0x14266e1ac
0x14082a6d5: jmp    0x14082a72e
0x14082a6d7: mov    edx,DWORD PTR [rip+0x1e43ac3]        # 0x14266e1a0
0x14082a6dd: jmp    0x14082a72e
0x14082a6df: cmp    r14d,r15d
0x14082a6e2: jne    0x14082a70b
0x14082a6e4: cmp    ebx,esi
0x14082a6e6: jne    0x14082a6f0
0x14082a6e8: mov    edx,DWORD PTR [rip+0x1e43aae]        # 0x14266e19c
0x14082a6ee: jmp    0x14082a727
0x14082a6f0: lea    rcx,[rip+0x1e42179]        # 0x14266c870
0x14082a6f7: cmp    ebx,edi
0x14082a6f9: jne    0x14082a703
0x14082a6fb: mov    edx,DWORD PTR [rip+0x1e43ab3]        # 0x14266e1b4
0x14082a701: jmp    0x14082a72e
0x14082a703: mov    edx,DWORD PTR [rip+0x1e43a9f]        # 0x14266e1a8
0x14082a709: jmp    0x14082a72e
0x14082a70b: cmp    ebx,esi
0x14082a70d: jne    0x14082a717
0x14082a70f: mov    edx,DWORD PTR [rip+0x1e43a83]        # 0x14266e198
0x14082a715: jmp    0x14082a727
0x14082a717: cmp    ebx,edi
0x14082a719: mov    edx,DWORD PTR [rip+0x1e43a91]        # 0x14266e1b0
0x14082a71f: je     0x14082a727
0x14082a721: mov    edx,DWORD PTR [rip+0x1e43a7d]        # 0x14266e1a4
0x14082a727: lea    rcx,[rip+0x1e42142]        # 0x14266c870
0x14082a72e: call   0x140af4570
0x14082a733: inc    ebx
0x14082a735: cmp    ebx,edi
0x14082a737: jle    0x14082a690
0x14082a73d: inc    r14d
0x14082a740: cmp    r14d,r15d
0x14082a743: jle    0x14082a685
0x14082a749: mov    edx,0x5
0x14082a74e: lea    rcx,[r13+0x68]
0x14082a752: call   0x1400735c0
0x14082a757: test   al,al
0x14082a759: jne    0x14082a7bf
0x14082a75b: mov    edx,0x6
0x14082a760: lea    rcx,[r13+0x68]
0x14082a764: call   0x1400735c0
0x14082a769: test   al,al
0x14082a76b: jne    0x14082a7bf
0x14082a76d: mov    edx,0x2
0x14082a772: lea    rcx,[r13+0x68]
0x14082a776: call   0x1400735c0
0x14082a77b: test   al,al
0x14082a77d: jne    0x14082a7bf
0x14082a77f: mov    edx,0x3
0x14082a784: lea    rcx,[r13+0x68]
0x14082a788: call   0x1400735c0
0x14082a78d: test   al,al
0x14082a78f: jne    0x14082a7bf
0x14082a791: imul   ecx,DWORD PTR [r13+0x58],0x12c0
0x14082a799: mov    eax,0xf2b9d649
0x14082a79e: imul   ecx
0x14082a7a0: lea    r8d,[rcx+rdx*1]
0x14082a7a4: sar    r8d,0xc
0x14082a7a8: mov    eax,r8d
0x14082a7ab: shr    eax,0x1f
0x14082a7ae: add    r8d,eax
0x14082a7b1: cmp    r8d,0x1
0x14082a7b5: jge    0x14082a7c5
0x14082a7b7: mov    r8d,0x1
0x14082a7bd: jmp    0x14082a7c5
0x14082a7bf: mov    r8d,0x4b00
0x14082a7c5: movsx  eax,WORD PTR [r13+0x10]
0x14082a7ca: imul   eax,eax,0x4e
0x14082a7cd: cdq
0x14082a7ce: idiv   r8d
0x14082a7d1: mov    ebx,eax
0x14082a7d3: cmp    eax,0x4e
0x14082a7d6: jle    0x14082a7e4
0x14082a7d8: mov    ebx,0x4e
0x14082a7dd: mov    edi,0x4f
0x14082a7e2: jmp    0x14082a7f0
0x14082a7e4: cmp    eax,0x2
0x14082a7e7: jl     0x14082a8c3
0x14082a7ed: lea    edi,[rax+0x1]
0x14082a7f0: mov    r14d,0x1
0x14082a7f6: lea    eax,[r12+0x1]
0x14082a7fb: mov    DWORD PTR [rbp-0x64],eax
0x14082a7fe: add    r12d,0x2
0x14082a802: mov    r13d,edi
0x14082a805: xor    r8d,r8d
0x14082a808: mov    edx,0x3
0x14082a80d: mov    r9b,0x1
0x14082a810: lea    rcx,[rip+0x1e42059]        # 0x14266c870
0x14082a817: call   0x1400bc760
0x14082a81c: lea    r15d,[r14+rsi*1]
0x14082a820: mov    r8d,r15d
0x14082a823: mov    edx,DWORD PTR [rbp-0x64]
0x14082a826: lea    rcx,[rip+0x1e42043]        # 0x14266c870
0x14082a82d: call   0x1400bc750
0x14082a832: mov    r8b,0x1
0x14082a835: cmp    r14d,0x1
0x14082a839: jne    0x14082a86d
0x14082a83b: mov    dl,0xda
0x14082a83d: lea    rdi,[rip+0x1e4202c]        # 0x14266c870
0x14082a844: mov    rcx,rdi
0x14082a847: call   0x1400bc7c0
0x14082a84c: mov    r8d,r15d
0x14082a84f: mov    edx,r12d
0x14082a852: mov    rcx,rdi
0x14082a855: call   0x1400bc750
0x14082a85a: movzx  r8d,r14b
0x14082a85e: mov    dl,0xc0
0x14082a860: mov    rcx,rdi
0x14082a863: call   0x1400bc7c0
0x14082a868: mov    edi,r13d
0x14082a86b: jmp    0x14082a8b7
0x14082a86d: lea    r13,[rip+0x1e41ffc]        # 0x14266c870
0x14082a874: mov    rcx,r13
0x14082a877: cmp    r14d,ebx
0x14082a87a: jne    0x14082a895
0x14082a87c: mov    dl,0xbf
0x14082a87e: call   0x1400bc7c0
0x14082a883: mov    r8d,r15d
0x14082a886: mov    edx,r12d
0x14082a889: mov    rcx,r13
0x14082a88c: call   0x1400bc750
0x14082a891: mov    dl,0xd9
0x14082a893: jmp    0x14082a8ac
0x14082a895: mov    dl,0xc4
0x14082a897: call   0x1400bc7c0
0x14082a89c: mov    r8d,r15d
0x14082a89f: mov    edx,r12d
0x14082a8a2: mov    rcx,r13
0x14082a8a5: call   0x1400bc750
0x14082a8aa: mov    dl,0xc4
0x14082a8ac: mov    r8b,0x1
0x14082a8af: mov    rcx,r13
0x14082a8b2: call   0x1400bc7c0
0x14082a8b7: inc    r14d
0x14082a8ba: cmp    r14d,edi
0x14082a8bd: jl     0x14082a802
0x14082a8c3: mov    r15d,0x1
0x14082a8c9: mov    BYTE PTR [rbp-0x78],r15b
0x14082a8cd: xor    r13d,r13d
0x14082a8d0: cmp    BYTE PTR [rip+0x1e3879d],0x0        # 0x142663074
0x14082a8d7: jg     0x14082ac20
0x14082a8dd: lea    rcx,[rip+0x1e38734]        # 0x142663018
0x14082a8e4: call   0x140070b50
0x14082a8e9: test   al,al
0x14082a8eb: je     0x14082ac20
0x14082a8f1: mov    r14d,DWORD PTR [rip+0x1e3b740]        # 0x142666038
0x14082a8f8: and    r14d,0x2
0x14082a8fc: mov    DWORD PTR [rbp-0x64],r14d
0x14082a900: xor    sil,sil
0x14082a903: mov    QWORD PTR [rbp-0x8],r13
0x14082a907: lea    r9,[rbp-0x8]
0x14082a90b: mov    r8d,r15d
0x14082a90e: xor    edx,edx
0x14082a910: xor    ecx,ecx
0x14082a912: call   0x1407fed40
0x14082a917: mov    DWORD PTR [rsp+0x7c],eax
0x14082a91b: lea    r9,[rbp-0x8]
0x14082a91f: mov    r12,0xffffffffffffffff
0x14082a926: mov    r8d,r12d
0x14082a929: xor    edx,edx
0x14082a92b: xor    ecx,ecx
0x14082a92d: call   0x1407fed40
0x14082a932: mov    r15d,eax
0x14082a935: mov    edi,r12d
0x14082a938: lea    rbx,[rbp+0x2fe4]
0x14082a93f: mov    r14d,0x1
0x14082a945: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x14082a950: lea    r9,[rbp-0x8]
0x14082a954: xor    r8d,r8d
0x14082a957: mov    edx,r12d
0x14082a95a: mov    ecx,edi
0x14082a95c: call   0x1407fed40
0x14082a961: mov    DWORD PTR [rbx-0x4],eax
0x14082a964: test   eax,eax
0x14082a966: je     0x14082a992
0x14082a968: cmp    eax,0x3
0x14082a96b: jne    0x14082a98e
0x14082a96d: mov    rcx,QWORD PTR [rbp-0x8]
0x14082a971: test   rcx,rcx
0x14082a974: je     0x14082a988
0x14082a976: add    rcx,0x2a0
0x14082a97d: xor    edx,edx
0x14082a97f: call   0x1400735c0
0x14082a984: test   al,al
0x14082a986: je     0x14082a98e
0x14082a988: mov    DWORD PTR [rbx-0x4],r13d
0x14082a98c: jmp    0x14082a992
0x14082a98e: movzx  esi,r14b
0x14082a992: test   edi,edi
0x14082a994: je     0x14082a9d5
0x14082a996: lea    r9,[rbp-0x8]
0x14082a99a: xor    r8d,r8d
0x14082a99d: xor    edx,edx
0x14082a99f: mov    ecx,edi
0x14082a9a1: call   0x1407fed40
0x14082a9a6: mov    DWORD PTR [rbx],eax
0x14082a9a8: test   eax,eax
0x14082a9aa: je     0x14082a9d5
0x14082a9ac: cmp    eax,0x3
0x14082a9af: jne    0x14082a9d1
0x14082a9b1: mov    rcx,QWORD PTR [rbp-0x8]
0x14082a9b5: test   rcx,rcx
0x14082a9b8: je     0x14082a9cc
0x14082a9ba: add    rcx,0x2a0
0x14082a9c1: xor    edx,edx
0x14082a9c3: call   0x1400735c0
0x14082a9c8: test   al,al
0x14082a9ca: je     0x14082a9d1
0x14082a9cc: mov    DWORD PTR [rbx],r13d
0x14082a9cf: jmp    0x14082a9d5
0x14082a9d1: movzx  esi,r14b
0x14082a9d5: lea    r9,[rbp-0x8]
0x14082a9d9: xor    r8d,r8d
0x14082a9dc: mov    edx,r14d
0x14082a9df: mov    ecx,edi
0x14082a9e1: call   0x1407fed40
0x14082a9e6: mov    DWORD PTR [rbx+0x4],eax
0x14082a9e9: test   eax,eax
0x14082a9eb: je     0x14082aa17
0x14082a9ed: cmp    eax,0x3
0x14082a9f0: jne    0x14082aa13
0x14082a9f2: mov    rcx,QWORD PTR [rbp-0x8]
0x14082a9f6: test   rcx,rcx
0x14082a9f9: je     0x14082aa0d
0x14082a9fb: add    rcx,0x2a0
0x14082aa02: xor    edx,edx
0x14082aa04: call   0x1400735c0
0x14082aa09: test   al,al
0x14082aa0b: je     0x14082aa13
0x14082aa0d: mov    DWORD PTR [rbx+0x4],r13d
0x14082aa11: jmp    0x14082aa17
0x14082aa13: movzx  esi,r14b
0x14082aa17: inc    edi
0x14082aa19: add    rbx,0xc
0x14082aa1d: cmp    edi,r14d
0x14082aa20: jle    0x14082a950
0x14082aa26: test   sil,sil
0x14082aa29: mov    r14d,DWORD PTR [rbp-0x64]
0x14082aa2d: mov    r12d,DWORD PTR [rsp+0x7c]
0x14082aa32: jne    0x14082aa42
0x14082aa34: test   r12d,r12d
0x14082aa37: je     0x14082aa42
0x14082aa39: test   r15d,r15d
0x14082aa3c: jne    0x14082ac20
0x14082aa42: mov    edx,0xd
0x14082aa47: test   r14d,r14d
0x14082aa4a: mov    edi,0x2
0x14082aa4f: cmove  edx,edi
0x14082aa52: mov    r8d,0x1
0x14082aa58: lea    rbx,[rip+0x1e41e11]        # 0x14266c870
0x14082aa5f: mov    rcx,rbx
0x14082aa62: call   0x1400bc750
0x14082aa67: xor    r8d,r8d
0x14082aa6a: mov    edx,edi
0x14082aa6c: mov    r9b,0x1
0x14082aa6f: mov    rcx,rbx
0x14082aa72: call   0x1400bc760
0x14082aa77: xor    r8d,r8d
0x14082aa7a: mov    rcx,rbx
0x14082aa7d: test   r12d,r12d
0x14082aa80: jne    0x14082aa97
0x14082aa82: test   r15d,r15d
0x14082aa85: jne    0x14082aa8f
0x14082aa87: mov    edx,DWORD PTR [rip+0x1e4d79b]        # 0x142678228
0x14082aa8d: jmp    0x14082aaa8
0x14082aa8f: mov    edx,DWORD PTR [rip+0x1e4d797]        # 0x14267822c
0x14082aa95: jmp    0x14082aaa8
0x14082aa97: test   r15d,r15d
0x14082aa9a: mov    edx,DWORD PTR [rip+0x1e4d790]        # 0x142678230
0x14082aaa0: je     0x14082aaa8
0x14082aaa2: mov    edx,DWORD PTR [rip+0x1e4d748]        # 0x1426781f0
0x14082aaa8: call   0x140af4ba0
0x14082aaad: mov    rdx,0xffffffffffffffff
0x14082aab4: mov    ecx,edx
0x14082aab6: mov    DWORD PTR [rsp+0x70],edx
0x14082aaba: mov    r15,rdx
0x14082aabd: neg    r14d
0x14082aac0: sbb    eax,eax
0x14082aac2: and    eax,0xb
0x14082aac5: mov    DWORD PTR [rbp-0x1c],eax
0x14082aac8: nop    DWORD PTR [rax+rax*1+0x0]
0x14082aad0: mov    rbx,rdx
0x14082aad3: mov    r14,rbx
0x14082aad6: mov    edi,eax
0x14082aad8: mov    esi,eax
0x14082aada: test   r15,r15
0x14082aadd: jne    0x14082aaf0
0x14082aadf: test   rbx,rbx
0x14082aae2: je     0x14082acff
0x14082aae8: nop    DWORD PTR [rax+rax*1+0x0]
0x14082aaf0: lea    r8d,[rcx+0x1]
0x14082aaf4: lea    edx,[rax+0x1]
0x14082aaf7: lea    rcx,[rip+0x1e41d72]        # 0x14266c870
0x14082aafe: call   0x1400bc750
0x14082ab03: lea    rcx,[rbx+r15*2]
0x14082ab07: add    rcx,r15
0x14082ab0a: cmp    DWORD PTR [rbp+rcx*4+0x2ff0],0x0
0x14082ab12: je     0x14082ac5e
0x14082ab18: cmp    r15,0xffffffffffffffff
0x14082ab1c: jne    0x14082ab3c
0x14082ab1e: cmp    rbx,r15
0x14082ab21: jne    0x14082ab2b
0x14082ab23: mov    edx,DWORD PTR [rip+0x1e4d6db]        # 0x142678204
0x14082ab29: jmp    0x14082ab64
0x14082ab2b: test   rbx,rbx
0x14082ab2e: jne    0x14082abbc
0x14082ab34: mov    edx,DWORD PTR [rip+0x1e4d6d6]        # 0x142678210
0x14082ab3a: jmp    0x14082ab64
0x14082ab3c: test   r15,r15
0x14082ab3f: je     0x14082ab8a
0x14082ab41: cmp    r15,0x1
0x14082ab45: jne    0x14082acfb
0x14082ab4b: cmp    rbx,0xffffffffffffffff
0x14082ab4f: jne    0x14082ab59
0x14082ab51: mov    edx,DWORD PTR [rip+0x1e4d6b5]        # 0x14267820c
0x14082ab57: jmp    0x14082ab64
0x14082ab59: test   rbx,rbx
0x14082ab5c: jne    0x14082abce
0x14082ab5e: mov    edx,DWORD PTR [rip+0x1e4d6b4]        # 0x142678218
0x14082ab64: xor    r8d,r8d
0x14082ab67: lea    rcx,[rip+0x1e41d02]        # 0x14266c870
0x14082ab6e: call   0x140af4ba0
0x14082ab73: lea    rbx,[r14+0x1]
0x14082ab77: lea    eax,[rsi+0x1]
0x14082ab7a: mov    edi,eax
0x14082ab7c: mov    r14,rbx
0x14082ab7f: mov    esi,eax
0x14082ab81: mov    ecx,DWORD PTR [rsp+0x70]
0x14082ab85: jmp    0x14082aaf0
0x14082ab8a: cmp    rbx,0xffffffffffffffff
0x14082ab8e: jne    0x14082abe0
0x14082ab90: xor    r8d,r8d
0x14082ab93: mov    edx,DWORD PTR [rip+0x1e4d66f]        # 0x142678208
0x14082ab99: lea    rcx,[rip+0x1e41cd0]        # 0x14266c870
0x14082aba0: call   0x140af4ba0
0x14082aba5: lea    rbx,[r14+0x1]
0x14082aba9: lea    eax,[rsi+0x1]
0x14082abac: mov    edi,eax
0x14082abae: mov    r14,rbx
0x14082abb1: mov    esi,eax
0x14082abb3: mov    ecx,DWORD PTR [rsp+0x70]
0x14082abb7: jmp    0x14082aadf
0x14082abbc: cmp    rbx,0x1
0x14082abc0: jne    0x14082acfb
0x14082abc6: mov    edx,DWORD PTR [rip+0x1e4d650]        # 0x14267821c
0x14082abcc: jmp    0x14082abf0
0x14082abce: cmp    rbx,0x1
0x14082abd2: jne    0x14082acfb
0x14082abd8: mov    edx,DWORD PTR [rip+0x1e4d646]        # 0x142678224
0x14082abde: jmp    0x14082abf0
0x14082abe0: cmp    rbx,0x1
0x14082abe4: jne    0x14082acfb
0x14082abea: mov    edx,DWORD PTR [rip+0x1e4d630]        # 0x142678220
0x14082abf0: xor    r8d,r8d
0x14082abf3: lea    rcx,[rip+0x1e41c76]        # 0x14266c870
0x14082abfa: call   0x140af4ba0
0x14082abff: mov    ecx,DWORD PTR [rsp+0x70]
0x14082ac03: inc    ecx
0x14082ac05: mov    DWORD PTR [rsp+0x70],ecx
0x14082ac09: inc    r15
0x14082ac0c: cmp    r15,0x1
0x14082ac10: mov    eax,DWORD PTR [rbp-0x1c]
0x14082ac13: mov    rdx,0xffffffffffffffff
0x14082ac1a: jle    0x14082aad0
0x14082ac20: mov    edi,DWORD PTR [rsp+0x74]
0x14082ac24: xor    ebx,ebx
0x14082ac26: mov    r15d,ebx
0x14082ac29: mov    r12d,ebx
0x14082ac2c: cmp    edi,0x1
0x14082ac2f: jl     0x14082d137
0x14082ac35: cmp    BYTE PTR [rip+0x1e38409],bl        # 0x142663044
0x14082ac3b: je     0x14082ad80
0x14082ac41: mov    r15d,DWORD PTR [rip+0x1e383bc]        # 0x142663004
0x14082ac48: cmp    r15d,0xffffffff
0x14082ac4c: je     0x14082ad14
0x14082ac52: mov    r12d,DWORD PTR [rip+0x1e383af]        # 0x142663008
0x14082ac59: jmp    0x14082ada1
0x14082ac5e: cmp    r15,0xffffffffffffffff
0x14082ac62: jne    0x14082ac92
0x14082ac64: cmp    rbx,r15
0x14082ac67: jne    0x14082ac71
0x14082ac69: mov    edx,DWORD PTR [rip+0x1e4d571]        # 0x1426781e0
0x14082ac6f: jmp    0x14082acec
0x14082ac71: mov    r14d,edi
0x14082ac74: mov    rsi,rbx
0x14082ac77: test   rbx,rbx
0x14082ac7a: jne    0x14082ac84
0x14082ac7c: mov    edx,DWORD PTR [rip+0x1e4d56a]        # 0x1426781ec
0x14082ac82: jmp    0x14082acec
0x14082ac84: cmp    rbx,0x1
0x14082ac88: jne    0x14082acfb
0x14082ac8a: mov    edx,DWORD PTR [rip+0x1e4d568]        # 0x1426781f8
0x14082ac90: jmp    0x14082acec
0x14082ac92: test   r15,r15
0x14082ac95: jne    0x14082acb9
0x14082ac97: cmp    rbx,0xffffffffffffffff
0x14082ac9b: jne    0x14082aca5
0x14082ac9d: mov    edx,DWORD PTR [rip+0x1e4d541]        # 0x1426781e4
0x14082aca3: jmp    0x14082acec
0x14082aca5: mov    rsi,rbx
0x14082aca8: mov    r14d,edi
0x14082acab: cmp    rbx,0x1
0x14082acaf: jne    0x14082acfb
0x14082acb1: mov    edx,DWORD PTR [rip+0x1e4d545]        # 0x1426781fc
0x14082acb7: jmp    0x14082acec
0x14082acb9: cmp    r15,0x1
0x14082acbd: jne    0x14082acfb
0x14082acbf: cmp    rbx,0xffffffffffffffff
0x14082acc3: jne    0x14082accd
0x14082acc5: mov    edx,DWORD PTR [rip+0x1e4d51d]        # 0x1426781e8
0x14082accb: jmp    0x14082acec
0x14082accd: mov    r14d,edi
0x14082acd0: mov    rsi,rbx
0x14082acd3: test   rbx,rbx
0x14082acd6: jne    0x14082ace0
0x14082acd8: mov    edx,DWORD PTR [rip+0x1e4d516]        # 0x1426781f4
0x14082acde: jmp    0x14082acec
0x14082ace0: cmp    rbx,0x1
0x14082ace4: jne    0x14082acfb
0x14082ace6: mov    edx,DWORD PTR [rip+0x1e4d514]        # 0x142678200
0x14082acec: xor    r8d,r8d
0x14082acef: lea    rcx,[rip+0x1e41b7a]        # 0x14266c870
0x14082acf6: call   0x140af4ba0
0x14082acfb: mov    ecx,DWORD PTR [rsp+0x70]
0x14082acff: inc    rbx
0x14082ad02: lea    eax,[rdi+0x1]
0x14082ad05: cmp    rbx,0x1
0x14082ad09: jle    0x14082aad3
0x14082ad0f: jmp    0x14082ac03
0x14082ad14: lea    rcx,[rip+0x1bdc82d]        # 0x142407548
0x14082ad1b: call   0x140070480
0x14082ad20: test   rax,rax
0x14082ad23: je     0x14082ad7b
0x14082ad25: mov    rcx,QWORD PTR [rip+0x1bdc864]        # 0x142407590
0x14082ad2c: test   rcx,rcx
0x14082ad2f: je     0x14082ad7b
0x14082ad31: lea    r9,[rbp+0xc0]
0x14082ad38: lea    r8,[rbp+0xc]
0x14082ad3c: lea    rdx,[rbp+0x30]
0x14082ad40: call   0x14137fd40
0x14082ad45: movsx  eax,WORD PTR [rbp+0x30]
0x14082ad49: cdq
0x14082ad4a: and    edx,0xf
0x14082ad4d: add    eax,edx
0x14082ad4f: sar    eax,0x4
0x14082ad52: mov    ecx,DWORD PTR [rip+0x1cdf810]        # 0x14250a568
0x14082ad58: lea    r15d,[rcx+rcx*2]
0x14082ad5c: add    r15d,eax
0x14082ad5f: movsx  eax,WORD PTR [rbp+0xc]
0x14082ad63: cdq
0x14082ad64: and    edx,0xf
0x14082ad67: add    eax,edx
0x14082ad69: sar    eax,0x4
0x14082ad6c: mov    ecx,DWORD PTR [rip+0x1cdf7fa]        # 0x14250a56c
0x14082ad72: lea    r12d,[rcx+rcx*2]
0x14082ad76: add    r12d,eax
0x14082ad79: jmp    0x14082ada1
0x14082ad7b: mov    r15d,ebx
0x14082ad7e: jmp    0x14082ada1
0x14082ad80: mov    edx,DWORD PTR [rip+0x1e383ca]        # 0x142663150
0x14082ad86: lea    rcx,[rip+0x1cdf4cb]        # 0x14250a258
0x14082ad8d: call   0x140073ba0
0x14082ad92: test   rax,rax
0x14082ad95: je     0x14082ada1
0x14082ad97: movsx  r15d,WORD PTR [rax+0x4]
0x14082ad9c: movsx  r12d,WORD PTR [rax+0x6]
0x14082ada1: mov    r13,rbx
0x14082ada4: mov    rcx,QWORD PTR [rip+0x1ce322d]        # 0x14250dfd8
0x14082adab: add    rcx,0x178
0x14082adb2: lea    rdx,[rbp+0x70]
0x14082adb6: call   0x140070870
0x14082adbb: mov    rcx,QWORD PTR [rip+0x1ce3216]        # 0x14250dfd8
0x14082adc2: add    rcx,0x178
0x14082adc9: lea    rdx,[rbp+0x158]
0x14082add0: call   0x140070860
0x14082add5: lea    r8,[rbp+0x158]
0x14082addc: lea    rdx,[rbp-0x34]
0x14082ade0: lea    rcx,[rbp+0x70]
0x14082ade4: call   0x140070450
0x14082ade9: xor    edx,edx
0x14082adeb: movzx  ecx,BYTE PTR [rax]
0x14082adee: call   0x140066de0
0x14082adf3: test   al,al
0x14082adf5: je     0x14082d0bb
0x14082adfb: nop    DWORD PTR [rax+rax*1+0x0]
0x14082ae00: lea    rcx,[rbp+0x70]
0x14082ae04: call   0x140070440
0x14082ae09: mov    rbx,QWORD PTR [rax]
0x14082ae0c: lea    rcx,[rbx+0x2a0]
0x14082ae13: xor    edx,edx
0x14082ae15: call   0x1400735c0
0x14082ae1a: test   al,al
0x14082ae1c: jne    0x14082ae6e
0x14082ae1e: cmp    DWORD PTR [rbx+0x34c],edi
0x14082ae24: jl     0x14082ae6e
0x14082ae26: cmp    DWORD PTR [rbx+0x348],edi
0x14082ae2c: jg     0x14082ae6e
0x14082ae2e: mov    eax,DWORD PTR [rbx+0x1f8]
0x14082ae34: lea    ecx,[rax+rax*2]
0x14082ae37: cmp    ecx,r15d
0x14082ae3a: jg     0x14082ae6e
0x14082ae3c: mov    eax,DWORD PTR [rbx+0x200]
0x14082ae42: lea    ecx,[rax+0x1]
0x14082ae45: lea    ecx,[rax+rcx*2]
0x14082ae48: cmp    ecx,r15d
0x14082ae4b: jl     0x14082ae6e
0x14082ae4d: mov    eax,DWORD PTR [rbx+0x1fc]
0x14082ae53: lea    ecx,[rax+rax*2]
0x14082ae56: cmp    ecx,r12d
0x14082ae59: jg     0x14082ae6e
0x14082ae5b: mov    eax,DWORD PTR [rbx+0x204]
0x14082ae61: lea    ecx,[rax+0x1]
0x14082ae64: lea    ecx,[rax+rcx*2]
0x14082ae67: cmp    ecx,r12d
0x14082ae6a: cmovge r13,rbx
0x14082ae6e: lea    rcx,[rbp+0x70]
0x14082ae72: call   0x140070430
0x14082ae77: lea    r8,[rbp+0x158]
0x14082ae7e: lea    rdx,[rbp-0x34]
0x14082ae82: lea    rcx,[rbp+0x70]
0x14082ae86: call   0x140070450
0x14082ae8b: xor    edx,edx
0x14082ae8d: movzx  ecx,BYTE PTR [rax]
0x14082ae90: call   0x140066de0
0x14082ae95: test   al,al
0x14082ae97: jne    0x14082ae00
0x14082ae9d: mov    QWORD PTR [rbp-0x58],r13
0x14082aea1: test   r13,r13
0x14082aea4: je     0x14082d0bb
0x14082aeaa: cmp    QWORD PTR [r13+0x308],0x0
0x14082aeb2: je     0x14082d0bb
0x14082aeb8: mov    eax,DWORD PTR [rip+0x1bc4d46]        # 0x1423efc04
0x14082aebe: lea    r14d,[rax-0x1e]
0x14082aec2: lea    edi,[rax-0x1]
0x14082aec5: mov    esi,0x1
0x14082aeca: nop    WORD PTR [rax+rax*1+0x0]
0x14082aed0: mov    ebx,r14d
0x14082aed3: cmp    r14d,edi
0x14082aed6: jg     0x14082af8f
0x14082aedc: nop    DWORD PTR [rax+0x0]
0x14082aee0: mov    r8d,ebx
0x14082aee3: mov    edx,esi
0x14082aee5: lea    rcx,[rip+0x1e41984]        # 0x14266c870
0x14082aeec: call   0x1400bc750
0x14082aef1: xor    r8d,r8d
0x14082aef4: xor    edx,edx
0x14082aef6: lea    rcx,[rip+0x1e41973]        # 0x14266c870
0x14082aefd: call   0x1400bc7c0
0x14082af02: cmp    esi,0x1
0x14082af05: jne    0x14082af2f
0x14082af07: cmp    ebx,r14d
0x14082af0a: jne    0x14082af14
0x14082af0c: mov    edx,DWORD PTR [rip+0x1e43282]        # 0x14266e194
0x14082af12: jmp    0x14082af79
0x14082af14: lea    rcx,[rip+0x1e41955]        # 0x14266c870
0x14082af1b: cmp    ebx,edi
0x14082af1d: jne    0x14082af27
0x14082af1f: mov    edx,DWORD PTR [rip+0x1e43287]        # 0x14266e1ac
0x14082af25: jmp    0x14082af80
0x14082af27: mov    edx,DWORD PTR [rip+0x1e43273]        # 0x14266e1a0
0x14082af2d: jmp    0x14082af80
0x14082af2f: cmp    esi,0xb
0x14082af32: jne    0x14082af5c
0x14082af34: cmp    ebx,r14d
0x14082af37: jne    0x14082af41
0x14082af39: mov    edx,DWORD PTR [rip+0x1e4325d]        # 0x14266e19c
0x14082af3f: jmp    0x14082af79
0x14082af41: lea    rcx,[rip+0x1e41928]        # 0x14266c870
0x14082af48: cmp    ebx,edi
0x14082af4a: jne    0x14082af54
0x14082af4c: mov    edx,DWORD PTR [rip+0x1e43262]        # 0x14266e1b4
0x14082af52: jmp    0x14082af80
0x14082af54: mov    edx,DWORD PTR [rip+0x1e4324e]        # 0x14266e1a8
0x14082af5a: jmp    0x14082af80
0x14082af5c: cmp    ebx,r14d
0x14082af5f: jne    0x14082af69
0x14082af61: mov    edx,DWORD PTR [rip+0x1e43231]        # 0x14266e198
0x14082af67: jmp    0x14082af79
0x14082af69: cmp    ebx,edi
0x14082af6b: mov    edx,DWORD PTR [rip+0x1e4323f]        # 0x14266e1b0
0x14082af71: je     0x14082af79
0x14082af73: mov    edx,DWORD PTR [rip+0x1e4322b]        # 0x14266e1a4
0x14082af79: lea    rcx,[rip+0x1e418f0]        # 0x14266c870
0x14082af80: call   0x140af4570
0x14082af85: inc    ebx
0x14082af87: cmp    ebx,edi
0x14082af89: jle    0x14082aee0
0x14082af8f: inc    esi
0x14082af91: cmp    esi,0xb
0x14082af94: jle    0x14082aed0
0x14082af9a: mov    r9d,0x2
0x14082afa0: mov    edi,r9d
0x14082afa3: mov    eax,DWORD PTR [r13+0x1f8]
0x14082afaa: lea    ecx,[rax+rax*2]
0x14082afad: sub    r15d,ecx
0x14082afb0: shl    r15d,0x4
0x14082afb4: mov    eax,DWORD PTR [r13+0x1fc]
0x14082afbb: lea    ecx,[rax+rax*2]
0x14082afbe: sub    r12d,ecx
0x14082afc1: shl    r12d,0x4
0x14082afc5: mov    eax,0x2aaaaaab
0x14082afca: imul   r15d
0x14082afcd: mov    r15d,edx
0x14082afd0: sar    r15d,0x3
0x14082afd4: mov    ecx,r15d
0x14082afd7: shr    ecx,0x1f
0x14082afda: add    r15d,ecx
0x14082afdd: mov    DWORD PTR [rbp-0x1c],r15d
0x14082afe1: mov    eax,0x2aaaaaab
0x14082afe6: imul   r12d
0x14082afe9: mov    r12d,edx
0x14082afec: sar    r12d,0x3
0x14082aff0: mov    eax,r12d
0x14082aff3: shr    eax,0x1f
0x14082aff6: add    r12d,eax
0x14082aff9: mov    DWORD PTR [rbp-0x20],r12d
0x14082affd: movsxd rax,r15d
0x14082b000: imul   rbx,rax,0x11
0x14082b004: movsxd rax,r12d
0x14082b007: add    rbx,rax
0x14082b00a: imul   rcx,rbx,0xa8
0x14082b011: mov    rax,QWORD PTR [r13+0x308]
0x14082b018: test   DWORD PTR [rcx+rax*1+0xb518],0x100000
0x14082b023: je     0x14082b089
0x14082b025: lea    r8d,[r14+0x3]
0x14082b029: mov    edx,r9d
0x14082b02c: lea    rdi,[rip+0x1e4183d]        # 0x14266c870
0x14082b033: mov    rcx,rdi
0x14082b036: call   0x1400bc750
0x14082b03b: xor    r8d,r8d
0x14082b03e: mov    edx,0x5
0x14082b043: mov    r9b,0x1
0x14082b046: mov    rcx,rdi
0x14082b049: call   0x1400bc760
0x14082b04e: lea    rdx,[rip+0xeae073]        # 0x1416d90c8 ; 'Sewer Access'
0x14082b055: lea    rcx,[rbp+0x1340]
0x14082b05c: call   0x140069780
0x14082b061: nop
0x14082b062: xor    r9d,r9d
0x14082b065: xor    r8d,r8d
0x14082b068: lea    rdx,[rbp+0x1340]
0x14082b06f: mov    rcx,rdi
0x14082b072: call   0x140af3400
0x14082b077: nop
0x14082b078: lea    rcx,[rbp+0x1340]
0x14082b07f: call   0x140069460
0x14082b084: mov    edi,0x3
0x14082b089: xor    eax,eax
0x14082b08b: mov    esi,eax
0x14082b08d: mov    DWORD PTR [rsp+0x70],eax
0x14082b091: mov    DWORD PTR [rsp+0x7c],eax
0x14082b095: mov    DWORD PTR [rsp+0x74],eax
0x14082b099: shl    rbx,0x6
0x14082b09d: add    rbx,QWORD PTR [r13+0x308]
0x14082b0a4: lea    rdx,[rbp+0x78]
0x14082b0a8: lea    rcx,[rbx+0x17278]
0x14082b0af: call   0x140070870
0x14082b0b4: lea    rdx,[rbp+0x160]
0x14082b0bb: lea    rcx,[rbx+0x17278]
0x14082b0c2: call   0x140070860
0x14082b0c7: lea    r8,[rbp+0x160]
0x14082b0ce: lea    rdx,[rbp-0x35]
0x14082b0d2: lea    rcx,[rbp+0x78]
0x14082b0d6: call   0x140070450
0x14082b0db: xor    edx,edx
0x14082b0dd: movzx  ecx,BYTE PTR [rax]
0x14082b0e0: call   0x140066de0
0x14082b0e5: test   al,al
0x14082b0e7: je     0x14082ca53
0x14082b0ed: lea    rbx,[rip+0xffffffffff7d4f0c]        # 0x140000000
0x14082b0f4: mov    r15d,esi
0x14082b0f7: mov    r12d,esi
0x14082b0fa: nop    WORD PTR [rax+rax*1+0x0]
0x14082b100: cmp    edi,0xa
0x14082b103: jg     0x14082ca41
0x14082b109: lea    rcx,[rbp+0x78]
0x14082b10d: call   0x140070440
0x14082b112: mov    rsi,QWORD PTR [rax]
0x14082b115: movsxd rax,DWORD PTR [rsi+0x4]
0x14082b119: cmp    eax,0x1f
0x14082b11c: ja     0x14082ca07
0x14082b122: mov    ecx,DWORD PTR [rbx+rax*4+0x831e3c]
0x14082b129: add    rcx,rbx
0x14082b12c: jmp    rcx
0x14082b12e: mov    rbx,QWORD PTR [rsi+0x58]
0x14082b132: lea    r8d,[r14+0x3]
0x14082b136: mov    edx,edi
0x14082b138: lea    rsi,[rip+0x1e41731]        # 0x14266c870
0x14082b13f: mov    rcx,rsi
0x14082b142: call   0x1400bc750
0x14082b147: xor    r8d,r8d
0x14082b14a: mov    edx,0x2
0x14082b14f: mov    r9b,0x1
0x14082b152: mov    rcx,rsi
0x14082b155: call   0x1400bc760
0x14082b15a: movsxd rax,DWORD PTR [rbx+0x8]
0x14082b15e: cmp    eax,0x8
0x14082b161: ja     0x14082ca05
0x14082b167: lea    rdx,[rip+0xffffffffff7d4e92]        # 0x140000000
0x14082b16e: mov    ecx,DWORD PTR [rdx+rax*4+0x831ebc]
0x14082b175: add    rcx,rdx
0x14082b178: jmp    rcx
0x14082b17a: lea    rdx,[rip+0xeadf0f]        # 0x1416d9090 ; 'Tree House'
0x14082b181: lea    rcx,[rbp+0x1360]
0x14082b188: call   0x140069780
0x14082b18d: nop
0x14082b18e: xor    r9d,r9d
0x14082b191: xor    r8d,r8d
0x14082b194: lea    rdx,[rbp+0x1360]
0x14082b19b: mov    rcx,rsi
0x14082b19e: call   0x140af3400
0x14082b1a3: nop
0x14082b1a4: lea    rcx,[rbp+0x1360]
0x14082b1ab: jmp    0x14082ca00
0x14082b1b0: lea    rdx,[rip+0xeadee9]        # 0x1416d90a0 ; 'The Home Tree'
0x14082b1b7: lea    rcx,[rbp+0x1380]
0x14082b1be: call   0x140069780
0x14082b1c3: nop
0x14082b1c4: xor    r9d,r9d
0x14082b1c7: xor    r8d,r8d
0x14082b1ca: lea    rdx,[rbp+0x1380]
0x14082b1d1: mov    rcx,rsi
0x14082b1d4: call   0x140af3400
0x14082b1d9: nop
0x14082b1da: lea    rcx,[rbp+0x1380]
0x14082b1e1: jmp    0x14082ca00
0x14082b1e6: lea    rdx,[rip+0xeade83]        # 0x1416d9070 ; 'Shaping Tree'
0x14082b1ed: lea    rcx,[rbp+0x13a0]
0x14082b1f4: call   0x140069780
0x14082b1f9: nop
0x14082b1fa: xor    r9d,r9d
0x14082b1fd: xor    r8d,r8d
0x14082b200: lea    rdx,[rbp+0x13a0]
0x14082b207: mov    rcx,rsi
0x14082b20a: call   0x140af3400
0x14082b20f: nop
0x14082b210: lea    rcx,[rbp+0x13a0]
0x14082b217: jmp    0x14082ca00
0x14082b21c: lea    rdx,[rip+0xeade5d]        # 0x1416d9080 ; 'Market Tree'
0x14082b223: lea    rcx,[rbp+0x13c0]
0x14082b22a: call   0x140069780
0x14082b22f: nop
0x14082b230: xor    r9d,r9d
0x14082b233: xor    r8d,r8d
0x14082b236: lea    rdx,[rbp+0x13c0]
0x14082b23d: mov    rcx,rsi
0x14082b240: call   0x140af3400
0x14082b245: nop
0x14082b246: lea    rcx,[rbp+0x13c0]
0x14082b24d: jmp    0x14082ca00
0x14082b252: lea    rdx,[rip+0xeae747]        # 0x1416d99a0 ; 'Tavern Tree'
0x14082b259: lea    rcx,[rbp+0x13e0]
0x14082b260: call   0x140069780
0x14082b265: nop
0x14082b266: xor    r9d,r9d
0x14082b269: xor    r8d,r8d
0x14082b26c: lea    rdx,[rbp+0x13e0]
0x14082b273: mov    rcx,rsi
0x14082b276: call   0x140af3400
0x14082b27b: nop
0x14082b27c: lea    rcx,[rbp+0x13e0]
0x14082b283: jmp    0x14082ca00
0x14082b288: lea    rdx,[rip+0xeae721]        # 0x1416d99b0 ; 'Library Tree'
0x14082b28f: lea    rcx,[rbp+0x1400]
0x14082b296: call   0x140069780
0x14082b29b: nop
0x14082b29c: xor    r9d,r9d
0x14082b29f: xor    r8d,r8d
0x14082b2a2: lea    rdx,[rbp+0x1400]
0x14082b2a9: mov    rcx,rsi
0x14082b2ac: call   0x140af3400
0x14082b2b1: nop
0x14082b2b2: lea    rcx,[rbp+0x1400]
0x14082b2b9: jmp    0x14082ca00
0x14082b2be: lea    rdx,[rip+0xeae6bb]        # 0x1416d9980 ; 'Counting Tree'
0x14082b2c5: lea    rcx,[rbp+0x1420]
0x14082b2cc: call   0x140069780
0x14082b2d1: nop
0x14082b2d2: xor    r9d,r9d
0x14082b2d5: xor    r8d,r8d
0x14082b2d8: lea    rdx,[rbp+0x1420]
0x14082b2df: mov    rcx,rsi
0x14082b2e2: call   0x140af3400
0x14082b2e7: nop
0x14082b2e8: lea    rcx,[rbp+0x1420]
0x14082b2ef: jmp    0x14082ca00
0x14082b2f4: lea    rdx,[rip+0xeae695]        # 0x1416d9990 ; 'Guild Tree'
0x14082b2fb: lea    rcx,[rbp+0x1440]
0x14082b302: call   0x140069780
0x14082b307: nop
0x14082b308: xor    r9d,r9d
0x14082b30b: xor    r8d,r8d
0x14082b30e: lea    rdx,[rbp+0x1440]
0x14082b315: mov    rcx,rsi
0x14082b318: call   0x140af3400
0x14082b31d: nop
0x14082b31e: lea    rcx,[rbp+0x1440]
0x14082b325: jmp    0x14082ca00
0x14082b32a: lea    rdx,[rip+0xeae62f]        # 0x1416d9960 ; 'Tower Tree'
0x14082b331: lea    rcx,[rbp+0x1460]
0x14082b338: call   0x140069780
0x14082b33d: nop
0x14082b33e: xor    r9d,r9d
0x14082b341: xor    r8d,r8d
0x14082b344: lea    rdx,[rbp+0x1460]
0x14082b34b: mov    rcx,rsi
0x14082b34e: call   0x140af3400
0x14082b353: nop
0x14082b354: lea    rcx,[rbp+0x1460]
0x14082b35b: jmp    0x14082ca00
0x14082b360: mov    rbx,QWORD PTR [rsi+0x58]
0x14082b364: mov    ecx,DWORD PTR [rbx+0x8]
0x14082b367: test   ecx,ecx
0x14082b369: je     0x14082b48d
0x14082b36f: sub    ecx,0x1
0x14082b372: je     0x14082b382
0x14082b374: sub    ecx,0x1
0x14082b377: je     0x14082b382
0x14082b379: cmp    ecx,0x1
0x14082b37c: jne    0x14082ca07
0x14082b382: lea    r8d,[r14+0x3]
0x14082b386: mov    edx,edi
0x14082b388: lea    rsi,[rip+0x1e414e1]        # 0x14266c870
0x14082b38f: mov    rcx,rsi
0x14082b392: call   0x1400bc750
0x14082b397: mov    ecx,DWORD PTR [rbx+0x8]
0x14082b39a: sub    ecx,0x1
0x14082b39d: je     0x14082b444
0x14082b3a3: sub    ecx,0x1
0x14082b3a6: je     0x14082b3fb
0x14082b3a8: cmp    ecx,0x1
0x14082b3ab: jne    0x14082ca05
0x14082b3b1: xor    r8d,r8d
0x14082b3b4: mov    edx,0x6
0x14082b3b9: movzx  r9d,cl
0x14082b3bd: mov    rcx,rsi
0x14082b3c0: call   0x1400bc760
0x14082b3c5: lea    rdx,[rip+0xeae584]        # 0x1416d9950 ; 'Drinking Mound'
0x14082b3cc: lea    rcx,[rbp+0x1480]
0x14082b3d3: call   0x140069780
0x14082b3d8: nop
0x14082b3d9: xor    r9d,r9d
0x14082b3dc: xor    r8d,r8d
0x14082b3df: lea    rdx,[rbp+0x1480]
0x14082b3e6: mov    rcx,rsi
0x14082b3e9: call   0x140af3400
0x14082b3ee: nop
0x14082b3ef: lea    rcx,[rbp+0x1480]
0x14082b3f6: jmp    0x14082ca00
0x14082b3fb: xor    r8d,r8d
0x14082b3fe: mov    edx,0x5
0x14082b403: mov    r9b,0x1
0x14082b406: mov    rcx,rsi
0x14082b409: call   0x1400bc760
0x14082b40e: lea    rdx,[rip+0xeae52b]        # 0x1416d9940 ; 'Castle Mound'
0x14082b415: lea    rcx,[rbp+0x14a0]
0x14082b41c: call   0x140069780
0x14082b421: nop
0x14082b422: xor    r9d,r9d
0x14082b425: xor    r8d,r8d
0x14082b428: lea    rdx,[rbp+0x14a0]
0x14082b42f: mov    rcx,rsi
0x14082b432: call   0x140af3400
0x14082b437: nop
0x14082b438: lea    rcx,[rbp+0x14a0]
0x14082b43f: jmp    0x14082ca00
0x14082b444: xor    r8d,r8d
0x14082b447: mov    edx,0x7
0x14082b44c: mov    r9b,0x1
0x14082b44f: mov    rcx,rsi
0x14082b452: call   0x1400bc760
0x14082b457: lea    rdx,[rip+0xeae512]        # 0x1416d9970 ; 'Civic Mound'
0x14082b45e: lea    rcx,[rbp+0x14c0]
0x14082b465: call   0x140069780
0x14082b46a: nop
0x14082b46b: xor    r9d,r9d
0x14082b46e: xor    r8d,r8d
0x14082b471: lea    rdx,[rbp+0x14c0]
0x14082b478: mov    rcx,rsi
0x14082b47b: call   0x140af3400
0x14082b480: nop
0x14082b481: lea    rcx,[rbp+0x14c0]
0x14082b488: jmp    0x14082ca00
0x14082b48d: mov    eax,DWORD PTR [rsi+0x78]
0x14082b490: test   al,0xa
0x14082b492: je     0x14082b49c
0x14082b494: inc    r12d
0x14082b497: jmp    0x14082ca07
0x14082b49c: mov    esi,DWORD PTR [rsp+0x70]
0x14082b4a0: test   al,0x1
0x14082b4a2: je     0x14082b4ac
0x14082b4a4: inc    r15d
0x14082b4a7: jmp    0x14082ca0b
0x14082b4ac: inc    esi
0x14082b4ae: mov    DWORD PTR [rsp+0x70],esi
0x14082b4b2: jmp    0x14082ca0b
0x14082b4b7: lea    r8d,[r14+0x3]
0x14082b4bb: mov    edx,edi
0x14082b4bd: lea    rbx,[rip+0x1e413ac]        # 0x14266c870
0x14082b4c4: mov    rcx,rbx
0x14082b4c7: call   0x1400bc750
0x14082b4cc: xor    r8d,r8d
0x14082b4cf: mov    edx,0x5
0x14082b4d4: mov    r9b,0x1
0x14082b4d7: mov    rcx,rbx
0x14082b4da: call   0x1400bc760
0x14082b4df: mov    ecx,DWORD PTR [rsi+0x4c]
0x14082b4e2: cmp    ecx,0xffffffff
0x14082b4e5: je     0x14082b5c9
0x14082b4eb: lea    rdx,[r13+0x2b0]
0x14082b4f2: call   0x140071530
0x14082b4f7: test   rax,rax
0x14082b4fa: je     0x14082b593
0x14082b500: mov    rdx,QWORD PTR [rax]
0x14082b503: mov    rcx,rax
0x14082b506: call   QWORD PTR [rdx+0x10]
0x14082b509: mov    rbx,rax
0x14082b50c: test   rax,rax
0x14082b50f: je     0x14082b559
0x14082b511: lea    rcx,[rbp+0x6a0]
0x14082b518: call   0x140070cc0
0x14082b51d: nop
0x14082b51e: xor    r9d,r9d
0x14082b521: mov    r8b,0x1
0x14082b524: lea    rdx,[rbp+0x6a0]
0x14082b52b: mov    rcx,rbx
0x14082b52e: call   0x140aae180
0x14082b533: xor    r9d,r9d
0x14082b536: xor    r8d,r8d
0x14082b539: lea    rdx,[rbp+0x6a0]
0x14082b540: lea    rcx,[rip+0x1e41329]        # 0x14266c870
0x14082b547: call   0x140af3400
0x14082b54c: nop
0x14082b54d: lea    rcx,[rbp+0x6a0]
0x14082b554: jmp    0x14082ca00
0x14082b559: lea    rdx,[rip+0xe52f58]        # 0x14167e4b8 ; 'Mead Hall'
0x14082b560: lea    rcx,[rbp+0x14e0]
0x14082b567: call   0x140069780
0x14082b56c: nop
0x14082b56d: xor    r9d,r9d
0x14082b570: xor    r8d,r8d
0x14082b573: lea    rdx,[rbp+0x14e0]
0x14082b57a: lea    rcx,[rip+0x1e412ef]        # 0x14266c870
0x14082b581: call   0x140af3400
0x14082b586: nop
0x14082b587: lea    rcx,[rbp+0x14e0]
0x14082b58e: jmp    0x14082ca00
0x14082b593: lea    rdx,[rip+0xe52f1e]        # 0x14167e4b8 ; 'Mead Hall'
0x14082b59a: lea    rcx,[rbp+0x1500]
0x14082b5a1: call   0x140069780
0x14082b5a6: nop
0x14082b5a7: xor    r9d,r9d
0x14082b5aa: xor    r8d,r8d
0x14082b5ad: lea    rdx,[rbp+0x1500]
0x14082b5b4: mov    rcx,rbx
0x14082b5b7: call   0x140af3400
0x14082b5bc: nop
0x14082b5bd: lea    rcx,[rbp+0x1500]
0x14082b5c4: jmp    0x14082ca00
0x14082b5c9: lea    rdx,[rip+0xe52ee8]        # 0x14167e4b8 ; 'Mead Hall'
0x14082b5d0: lea    rcx,[rbp+0x1520]
0x14082b5d7: call   0x140069780
0x14082b5dc: nop
0x14082b5dd: xor    r9d,r9d
0x14082b5e0: xor    r8d,r8d
0x14082b5e3: lea    rdx,[rbp+0x1520]
0x14082b5ea: mov    rcx,rbx
0x14082b5ed: call   0x140af3400
0x14082b5f2: nop
0x14082b5f3: lea    rcx,[rbp+0x1520]
0x14082b5fa: jmp    0x14082ca00
0x14082b5ff: lea    r8d,[r14+0x3]
0x14082b603: mov    edx,edi
0x14082b605: lea    rbx,[rip+0x1e41264]        # 0x14266c870
0x14082b60c: mov    rcx,rbx
0x14082b60f: call   0x1400bc750
0x14082b614: xor    r8d,r8d
0x14082b617: mov    edx,0x3
0x14082b61c: mov    r9b,0x1
0x14082b61f: mov    rcx,rbx
0x14082b622: call   0x1400bc760
0x14082b627: mov    ecx,DWORD PTR [rsi+0x4c]
0x14082b62a: cmp    ecx,0xffffffff
0x14082b62d: je     0x14082b711
0x14082b633: lea    rdx,[r13+0x2b0]
0x14082b63a: call   0x140071530
0x14082b63f: test   rax,rax
0x14082b642: je     0x14082b6db
0x14082b648: mov    rdx,QWORD PTR [rax]
0x14082b64b: mov    rcx,rax
0x14082b64e: call   QWORD PTR [rdx+0x10]
0x14082b651: mov    rbx,rax
0x14082b654: test   rax,rax
0x14082b657: je     0x14082b6a1
0x14082b659: lea    rcx,[rbp+0x880]
0x14082b660: call   0x140070cc0
0x14082b665: nop
0x14082b666: xor    r9d,r9d
0x14082b669: mov    r8b,0x1
0x14082b66c: lea    rdx,[rbp+0x880]
0x14082b673: mov    rcx,rbx
0x14082b676: call   0x140aae180
0x14082b67b: xor    r9d,r9d
0x14082b67e: xor    r8d,r8d
0x14082b681: lea    rdx,[rbp+0x880]
0x14082b688: lea    rcx,[rip+0x1e411e1]        # 0x14266c870
0x14082b68f: call   0x140af3400
0x14082b694: nop
0x14082b695: lea    rcx,[rbp+0x880]
0x14082b69c: jmp    0x14082ca00
0x14082b6a1: lea    rdx,[rip+0xe1c3c0]        # 0x141647a68 ; 'Temple'
0x14082b6a8: lea    rcx,[rbp+0x1540]
0x14082b6af: call   0x140069780
0x14082b6b4: nop
0x14082b6b5: xor    r9d,r9d
0x14082b6b8: xor    r8d,r8d
0x14082b6bb: lea    rdx,[rbp+0x1540]
0x14082b6c2: lea    rcx,[rip+0x1e411a7]        # 0x14266c870
0x14082b6c9: call   0x140af3400
0x14082b6ce: nop
0x14082b6cf: lea    rcx,[rbp+0x1540]
0x14082b6d6: jmp    0x14082ca00
0x14082b6db: lea    rdx,[rip+0xe1c386]        # 0x141647a68 ; 'Temple'
0x14082b6e2: lea    rcx,[rbp+0x1560]
0x14082b6e9: call   0x140069780
0x14082b6ee: nop
0x14082b6ef: xor    r9d,r9d
0x14082b6f2: xor    r8d,r8d
0x14082b6f5: lea    rdx,[rbp+0x1560]
0x14082b6fc: mov    rcx,rbx
0x14082b6ff: call   0x140af3400
0x14082b704: nop
0x14082b705: lea    rcx,[rbp+0x1560]
0x14082b70c: jmp    0x14082ca00
0x14082b711: lea    rdx,[rip+0xe1c350]        # 0x141647a68 ; 'Temple'
0x14082b718: lea    rcx,[rbp+0x1580]
0x14082b71f: call   0x140069780
0x14082b724: nop
0x14082b725: xor    r9d,r9d
0x14082b728: xor    r8d,r8d
0x14082b72b: lea    rdx,[rbp+0x1580]
0x14082b732: mov    rcx,rbx
0x14082b735: call   0x140af3400
0x14082b73a: nop
0x14082b73b: lea    rcx,[rbp+0x1580]
0x14082b742: jmp    0x14082ca00
0x14082b747: lea    r8d,[r14+0x3]
0x14082b74b: mov    edx,edi
0x14082b74d: lea    rbx,[rip+0x1e4111c]        # 0x14266c870
0x14082b754: mov    rcx,rbx
0x14082b757: call   0x1400bc750
0x14082b75c: mov    edx,0x6
0x14082b761: mov    r8d,edx
0x14082b764: mov    r9b,0x1
0x14082b767: mov    rcx,rbx
0x14082b76a: call   0x1400bc760
0x14082b76f: mov    ecx,DWORD PTR [rsi+0x4c]
0x14082b772: cmp    ecx,0xffffffff
0x14082b775: je     0x14082b859
0x14082b77b: lea    rdx,[r13+0x2b0]
0x14082b782: call   0x140071530
0x14082b787: test   rax,rax
0x14082b78a: je     0x14082b823
0x14082b790: mov    rdx,QWORD PTR [rax]
0x14082b793: mov    rcx,rax
0x14082b796: call   QWORD PTR [rdx+0x10]
0x14082b799: mov    rbx,rax
0x14082b79c: test   rax,rax
0x14082b79f: je     0x14082b7e9
0x14082b7a1: lea    rcx,[rbp+0x6c0]
0x14082b7a8: call   0x140070cc0
0x14082b7ad: nop
0x14082b7ae: xor    r9d,r9d
0x14082b7b1: mov    r8b,0x1
0x14082b7b4: lea    rdx,[rbp+0x6c0]
0x14082b7bb: mov    rcx,rbx
0x14082b7be: call   0x140aae180
0x14082b7c3: xor    r9d,r9d
0x14082b7c6: xor    r8d,r8d
0x14082b7c9: lea    rdx,[rbp+0x6c0]
0x14082b7d0: lea    rcx,[rip+0x1e41099]        # 0x14266c870
0x14082b7d7: call   0x140af3400
0x14082b7dc: nop
0x14082b7dd: lea    rcx,[rbp+0x6c0]
0x14082b7e4: jmp    0x14082ca00
0x14082b7e9: lea    rdx,[rip+0xeae230]        # 0x1416d9a20 ; 'Counting House'
0x14082b7f0: lea    rcx,[rbp+0x15a0]
0x14082b7f7: call   0x140069780
0x14082b7fc: nop
0x14082b7fd: xor    r9d,r9d
0x14082b800: xor    r8d,r8d
0x14082b803: lea    rdx,[rbp+0x15a0]
0x14082b80a: lea    rcx,[rip+0x1e4105f]        # 0x14266c870
0x14082b811: call   0x140af3400
0x14082b816: nop
0x14082b817: lea    rcx,[rbp+0x15a0]
0x14082b81e: jmp    0x14082ca00
0x14082b823: lea    rdx,[rip+0xeae1f6]        # 0x1416d9a20 ; 'Counting House'
0x14082b82a: lea    rcx,[rbp+0x15c0]
0x14082b831: call   0x140069780
0x14082b836: nop
0x14082b837: xor    r9d,r9d
0x14082b83a: xor    r8d,r8d
0x14082b83d: lea    rdx,[rbp+0x15c0]
0x14082b844: mov    rcx,rbx
0x14082b847: call   0x140af3400
0x14082b84c: nop
0x14082b84d: lea    rcx,[rbp+0x15c0]
0x14082b854: jmp    0x14082ca00
0x14082b859: lea    rdx,[rip+0xeae1c0]        # 0x1416d9a20 ; 'Counting House'
0x14082b860: lea    rcx,[rbp+0x15e0]
0x14082b867: call   0x140069780
0x14082b86c: nop
0x14082b86d: xor    r9d,r9d
0x14082b870: xor    r8d,r8d
0x14082b873: lea    rdx,[rbp+0x15e0]
0x14082b87a: mov    rcx,rbx
0x14082b87d: call   0x140af3400
0x14082b882: nop
0x14082b883: lea    rcx,[rbp+0x15e0]
0x14082b88a: jmp    0x14082ca00
0x14082b88f: lea    r8d,[r14+0x3]
0x14082b893: mov    edx,edi
0x14082b895: lea    rbx,[rip+0x1e40fd4]        # 0x14266c870
0x14082b89c: mov    rcx,rbx
0x14082b89f: call   0x1400bc750
0x14082b8a4: mov    edx,0x6
0x14082b8a9: mov    r8d,edx
0x14082b8ac: mov    r9b,0x1
0x14082b8af: mov    rcx,rbx
0x14082b8b2: call   0x1400bc760
0x14082b8b7: mov    ecx,DWORD PTR [rsi+0x4c]
0x14082b8ba: cmp    ecx,0xffffffff
0x14082b8bd: je     0x14082b9a1
0x14082b8c3: lea    rdx,[r13+0x2b0]
0x14082b8ca: call   0x140071530
0x14082b8cf: test   rax,rax
0x14082b8d2: je     0x14082b96b
0x14082b8d8: mov    rdx,QWORD PTR [rax]
0x14082b8db: mov    rcx,rax
0x14082b8de: call   QWORD PTR [rdx+0x10]
0x14082b8e1: mov    rbx,rax
0x14082b8e4: test   rax,rax
0x14082b8e7: je     0x14082b931
0x14082b8e9: lea    rcx,[rbp+0x6e0]
0x14082b8f0: call   0x140070cc0
0x14082b8f5: nop
0x14082b8f6: xor    r9d,r9d
0x14082b8f9: mov    r8b,0x1
0x14082b8fc: lea    rdx,[rbp+0x6e0]
0x14082b903: mov    rcx,rbx
0x14082b906: call   0x140aae180
0x14082b90b: xor    r9d,r9d
0x14082b90e: xor    r8d,r8d
0x14082b911: lea    rdx,[rbp+0x6e0]
0x14082b918: lea    rcx,[rip+0x1e40f51]        # 0x14266c870
0x14082b91f: call   0x140af3400
0x14082b924: nop
0x14082b925: lea    rcx,[rbp+0x6e0]
0x14082b92c: jmp    0x14082ca00
0x14082b931: lea    rdx,[rip+0xeae0f8]        # 0x1416d9a30 ; 'Guildhall'
0x14082b938: lea    rcx,[rbp+0x1600]
0x14082b93f: call   0x140069780
0x14082b944: nop
0x14082b945: xor    r9d,r9d
0x14082b948: xor    r8d,r8d
0x14082b94b: lea    rdx,[rbp+0x1600]
0x14082b952: lea    rcx,[rip+0x1e40f17]        # 0x14266c870
0x14082b959: call   0x140af3400
0x14082b95e: nop
0x14082b95f: lea    rcx,[rbp+0x1600]
0x14082b966: jmp    0x14082ca00
0x14082b96b: lea    rdx,[rip+0xeae0be]        # 0x1416d9a30 ; 'Guildhall'
0x14082b972: lea    rcx,[rbp+0x1620]
0x14082b979: call   0x140069780
0x14082b97e: nop
0x14082b97f: xor    r9d,r9d
0x14082b982: xor    r8d,r8d
0x14082b985: lea    rdx,[rbp+0x1620]
0x14082b98c: mov    rcx,rbx
0x14082b98f: call   0x140af3400
0x14082b994: nop
0x14082b995: lea    rcx,[rbp+0x1620]
0x14082b99c: jmp    0x14082ca00
0x14082b9a1: lea    rdx,[rip+0xeae088]        # 0x1416d9a30 ; 'Guildhall'
0x14082b9a8: lea    rcx,[rbp+0x1640]
0x14082b9af: call   0x140069780
0x14082b9b4: nop
0x14082b9b5: xor    r9d,r9d
0x14082b9b8: xor    r8d,r8d
0x14082b9bb: lea    rdx,[rbp+0x1640]
0x14082b9c2: mov    rcx,rbx
0x14082b9c5: call   0x140af3400
0x14082b9ca: nop
0x14082b9cb: lea    rcx,[rbp+0x1640]
0x14082b9d2: jmp    0x14082ca00
0x14082b9d7: lea    r8d,[r14+0x3]
0x14082b9db: mov    edx,edi
0x14082b9dd: lea    rbx,[rip+0x1e40e8c]        # 0x14266c870
0x14082b9e4: mov    rcx,rbx
0x14082b9e7: call   0x1400bc750
0x14082b9ec: mov    edx,0x6
0x14082b9f1: mov    r8d,edx
0x14082b9f4: mov    r9b,0x1
0x14082b9f7: mov    rcx,rbx
0x14082b9fa: call   0x1400bc760
0x14082b9ff: mov    ecx,DWORD PTR [rsi+0x4c]
0x14082ba02: cmp    ecx,0xffffffff
0x14082ba05: je     0x14082bae9
0x14082ba0b: lea    rdx,[r13+0x2b0]
0x14082ba12: call   0x140071530
0x14082ba17: test   rax,rax
0x14082ba1a: je     0x14082bab3
0x14082ba20: mov    rdx,QWORD PTR [rax]
0x14082ba23: mov    rcx,rax
0x14082ba26: call   QWORD PTR [rdx+0x10]
0x14082ba29: mov    rbx,rax
0x14082ba2c: test   rax,rax
0x14082ba2f: je     0x14082ba79
0x14082ba31: lea    rcx,[rbp+0x700]
0x14082ba38: call   0x140070cc0
0x14082ba3d: nop
0x14082ba3e: xor    r9d,r9d
0x14082ba41: mov    r8b,0x1
0x14082ba44: lea    rdx,[rbp+0x700]
0x14082ba4b: mov    rcx,rbx
0x14082ba4e: call   0x140aae180
0x14082ba53: xor    r9d,r9d
0x14082ba56: xor    r8d,r8d
0x14082ba59: lea    rdx,[rbp+0x700]
0x14082ba60: lea    rcx,[rip+0x1e40e09]        # 0x14266c870
0x14082ba67: call   0x140af3400
0x14082ba6c: nop
0x14082ba6d: lea    rcx,[rbp+0x700]
0x14082ba74: jmp    0x14082ca00
0x14082ba79: lea    rdx,[rip+0xeadf84]        # 0x1416d9a04 ; 'Tower'
0x14082ba80: lea    rcx,[rbp+0x1660]
0x14082ba87: call   0x140069780
0x14082ba8c: nop
0x14082ba8d: xor    r9d,r9d
0x14082ba90: xor    r8d,r8d
0x14082ba93: lea    rdx,[rbp+0x1660]
0x14082ba9a: lea    rcx,[rip+0x1e40dcf]        # 0x14266c870
0x14082baa1: call   0x140af3400
0x14082baa6: nop
0x14082baa7: lea    rcx,[rbp+0x1660]
0x14082baae: jmp    0x14082ca00
0x14082bab3: lea    rdx,[rip+0xeadf4a]        # 0x1416d9a04 ; 'Tower'
0x14082baba: lea    rcx,[rbp+0x1680]
0x14082bac1: call   0x140069780
0x14082bac6: nop
0x14082bac7: xor    r9d,r9d
0x14082baca: xor    r8d,r8d
0x14082bacd: lea    rdx,[rbp+0x1680]
0x14082bad4: mov    rcx,rbx
0x14082bad7: call   0x140af3400
0x14082badc: nop
0x14082badd: lea    rcx,[rbp+0x1680]
0x14082bae4: jmp    0x14082ca00
0x14082bae9: lea    rdx,[rip+0xeadf14]        # 0x1416d9a04 ; 'Tower'
0x14082baf0: lea    rcx,[rbp+0x16a0]
0x14082baf7: call   0x140069780
0x14082bafc: nop
0x14082bafd: xor    r9d,r9d
0x14082bb00: xor    r8d,r8d
0x14082bb03: lea    rdx,[rbp+0x16a0]
0x14082bb0a: mov    rcx,rbx
0x14082bb0d: call   0x140af3400
0x14082bb12: nop
0x14082bb13: lea    rcx,[rbp+0x16a0]
0x14082bb1a: jmp    0x14082ca00
0x14082bb1f: lea    r8d,[r14+0x3]
0x14082bb23: mov    edx,edi
0x14082bb25: lea    rbx,[rip+0x1e40d44]        # 0x14266c870
0x14082bb2c: mov    rcx,rbx
0x14082bb2f: call   0x1400bc750
0x14082bb34: mov    edx,0x7
0x14082bb39: mov    r8d,0x6
0x14082bb3f: mov    r9b,0x1
0x14082bb42: mov    rcx,rbx
0x14082bb45: call   0x1400bc760
0x14082bb4a: mov    ecx,DWORD PTR [rsi+0x4c]
0x14082bb4d: cmp    ecx,0xffffffff
0x14082bb50: je     0x14082bc34
0x14082bb56: lea    rdx,[r13+0x2b0]
0x14082bb5d: call   0x140071530
0x14082bb62: test   rax,rax
0x14082bb65: je     0x14082bbfe
0x14082bb6b: mov    rdx,QWORD PTR [rax]
0x14082bb6e: mov    rcx,rax
0x14082bb71: call   QWORD PTR [rdx+0x10]
0x14082bb74: mov    rbx,rax
0x14082bb77: test   rax,rax
0x14082bb7a: je     0x14082bbc4
0x14082bb7c: lea    rcx,[rbp+0x720]
0x14082bb83: call   0x140070cc0
0x14082bb88: nop
0x14082bb89: xor    r9d,r9d
0x14082bb8c: mov    r8b,0x1
0x14082bb8f: lea    rdx,[rbp+0x720]
0x14082bb96: mov    rcx,rbx
0x14082bb99: call   0x140aae180
0x14082bb9e: xor    r9d,r9d
0x14082bba1: xor    r8d,r8d
0x14082bba4: lea    rdx,[rbp+0x720]
0x14082bbab: lea    rcx,[rip+0x1e40cbe]        # 0x14266c870
0x14082bbb2: call   0x140af3400
0x14082bbb7: nop
0x14082bbb8: lea    rcx,[rbp+0x720]
0x14082bbbf: jmp    0x14082ca00
0x14082bbc4: lea    rdx,[rip+0xe1be8d]        # 0x141647a58 ; 'Library'
0x14082bbcb: lea    rcx,[rbp+0x16c0]
0x14082bbd2: call   0x140069780
0x14082bbd7: nop
0x14082bbd8: xor    r9d,r9d
0x14082bbdb: xor    r8d,r8d
0x14082bbde: lea    rdx,[rbp+0x16c0]
0x14082bbe5: lea    rcx,[rip+0x1e40c84]        # 0x14266c870
0x14082bbec: call   0x140af3400
0x14082bbf1: nop
0x14082bbf2: lea    rcx,[rbp+0x16c0]
0x14082bbf9: jmp    0x14082ca00
0x14082bbfe: lea    rdx,[rip+0xe1be53]        # 0x141647a58 ; 'Library'
0x14082bc05: lea    rcx,[rbp+0x16e0]
0x14082bc0c: call   0x140069780
0x14082bc11: nop
0x14082bc12: xor    r9d,r9d
0x14082bc15: xor    r8d,r8d
0x14082bc18: lea    rdx,[rbp+0x16e0]
0x14082bc1f: mov    rcx,rbx
0x14082bc22: call   0x140af3400
0x14082bc27: nop
0x14082bc28: lea    rcx,[rbp+0x16e0]
0x14082bc2f: jmp    0x14082ca00
0x14082bc34: lea    rdx,[rip+0xe1be1d]        # 0x141647a58 ; 'Library'
0x14082bc3b: lea    rcx,[rbp+0x1700]
0x14082bc42: call   0x140069780
0x14082bc47: nop
0x14082bc48: xor    r9d,r9d
0x14082bc4b: xor    r8d,r8d
0x14082bc4e: lea    rdx,[rbp+0x1700]
0x14082bc55: mov    rcx,rbx
0x14082bc58: call   0x140af3400
0x14082bc5d: nop
0x14082bc5e: lea    rcx,[rbp+0x1700]
0x14082bc65: jmp    0x14082ca00
0x14082bc6a: lea    r8d,[r14+0x3]
0x14082bc6e: mov    edx,edi
0x14082bc70: lea    rbx,[rip+0x1e40bf9]        # 0x14266c870
0x14082bc77: mov    rcx,rbx
0x14082bc7a: call   0x1400bc750
0x14082bc7f: mov    edx,0x6
0x14082bc84: mov    r8d,edx
0x14082bc87: mov    r9b,0x1
0x14082bc8a: mov    rcx,rbx
0x14082bc8d: call   0x1400bc760
0x14082bc92: mov    ecx,DWORD PTR [rsi+0x4c]
0x14082bc95: cmp    ecx,0xffffffff
0x14082bc98: je     0x14082bd7c
0x14082bc9e: lea    rdx,[r13+0x2b0]
0x14082bca5: call   0x140071530
0x14082bcaa: test   rax,rax
0x14082bcad: je     0x14082bd46
0x14082bcb3: mov    rdx,QWORD PTR [rax]
0x14082bcb6: mov    rcx,rax
0x14082bcb9: call   QWORD PTR [rdx+0x10]
0x14082bcbc: mov    rbx,rax
0x14082bcbf: test   rax,rax
0x14082bcc2: je     0x14082bd0c
0x14082bcc4: lea    rcx,[rbp+0x740]
0x14082bccb: call   0x140070cc0
0x14082bcd0: nop
0x14082bcd1: xor    r9d,r9d
0x14082bcd4: mov    r8b,0x1
0x14082bcd7: lea    rdx,[rbp+0x740]
0x14082bcde: mov    rcx,rbx
0x14082bce1: call   0x140aae180
0x14082bce6: xor    r9d,r9d
0x14082bce9: xor    r8d,r8d
0x14082bcec: lea    rdx,[rbp+0x740]
0x14082bcf3: lea    rcx,[rip+0x1e40b76]        # 0x14266c870
0x14082bcfa: call   0x140af3400
0x14082bcff: nop
0x14082bd00: lea    rcx,[rbp+0x740]
0x14082bd07: jmp    0x14082ca00
0x14082bd0c: lea    rdx,[rip+0xe1bd4d]        # 0x141647a60 ; 'Tavern'
0x14082bd13: lea    rcx,[rbp+0x1720]
0x14082bd1a: call   0x140069780
0x14082bd1f: nop
0x14082bd20: xor    r9d,r9d
0x14082bd23: xor    r8d,r8d
0x14082bd26: lea    rdx,[rbp+0x1720]
0x14082bd2d: lea    rcx,[rip+0x1e40b3c]        # 0x14266c870
0x14082bd34: call   0x140af3400
0x14082bd39: nop
0x14082bd3a: lea    rcx,[rbp+0x1720]
0x14082bd41: jmp    0x14082ca00
0x14082bd46: lea    rdx,[rip+0xe1bd13]        # 0x141647a60 ; 'Tavern'
0x14082bd4d: lea    rcx,[rbp+0x1740]
0x14082bd54: call   0x140069780
0x14082bd59: nop
0x14082bd5a: xor    r9d,r9d
0x14082bd5d: xor    r8d,r8d
0x14082bd60: lea    rdx,[rbp+0x1740]
0x14082bd67: mov    rcx,rbx
0x14082bd6a: call   0x140af3400
0x14082bd6f: nop
0x14082bd70: lea    rcx,[rbp+0x1740]
0x14082bd77: jmp    0x14082ca00
0x14082bd7c: lea    rdx,[rip+0xe1bcdd]        # 0x141647a60 ; 'Tavern'
0x14082bd83: lea    rcx,[rbp+0x1760]
0x14082bd8a: call   0x140069780
0x14082bd8f: nop
0x14082bd90: xor    r9d,r9d
0x14082bd93: xor    r8d,r8d
0x14082bd96: lea    rdx,[rbp+0x1760]
0x14082bd9d: mov    rcx,rbx
0x14082bda0: call   0x140af3400
0x14082bda5: nop
0x14082bda6: lea    rcx,[rbp+0x1760]
0x14082bdad: jmp    0x14082ca00
0x14082bdb2: mov    rbx,QWORD PTR [rsi+0x58]
0x14082bdb6: lea    r8d,[r14+0x1]
0x14082bdba: mov    edx,edi
0x14082bdbc: lea    rcx,[rip+0x1e40aad]        # 0x14266c870
0x14082bdc3: call   0x1400bc750
0x14082bdc8: test   BYTE PTR [rsi+0x78],0x1
0x14082bdcc: jne    0x14082bfbd
0x14082bdd2: movsxd rax,DWORD PTR [rbx+0x8]
0x14082bdd6: cmp    eax,0x11
0x14082bdd9: ja     0x14082bfbd
0x14082bddf: lea    rdx,[rip+0xffffffffff7d421a]        # 0x140000000
0x14082bde6: mov    ecx,DWORD PTR [rdx+rax*4+0x831ee0]
0x14082bded: add    rcx,rdx
0x14082bdf0: jmp    rcx
0x14082bdf2: mov    edx,0x2
0x14082bdf7: mov    r8d,0x6
0x14082bdfd: mov    r9b,0x1
0x14082be00: lea    rcx,[rip+0x1e40a69]        # 0x14266c870
0x14082be07: call   0x1400bc760
0x14082be0c: mov    dl,0xe6
0x14082be0e: jmp    0x14082bfae
0x14082be13: mov    edx,0x2
0x14082be18: mov    r8d,0x6
0x14082be1e: mov    r9b,0x1
0x14082be21: lea    rcx,[rip+0x1e40a48]        # 0x14266c870
0x14082be28: call   0x1400bc760
0x14082be2d: mov    dl,0x25
0x14082be2f: jmp    0x14082bfae
0x14082be34: mov    edx,0x2
0x14082be39: mov    r8d,0x6
0x14082be3f: mov    r9b,0x1
0x14082be42: lea    rcx,[rip+0x1e40a27]        # 0x14266c870
0x14082be49: call   0x1400bc760
0x14082be4e: mov    dl,0x5b
0x14082be50: jmp    0x14082bfae
0x14082be55: mov    edx,0x6
0x14082be5a: mov    r8d,edx
0x14082be5d: mov    r9b,0x1
0x14082be60: lea    rcx,[rip+0x1e40a09]        # 0x14266c870
0x14082be67: call   0x1400bc760
0x14082be6c: mov    dl,0xa7
0x14082be6e: jmp    0x14082bfae
0x14082be73: mov    edx,0x6
0x14082be78: mov    r8d,edx
0x14082be7b: mov    r9b,0x1
0x14082be7e: lea    rcx,[rip+0x1e409eb]        # 0x14266c870
0x14082be85: call   0x1400bc760
0x14082be8a: mov    dl,0xe1
0x14082be8c: jmp    0x14082bfae
0x14082be91: mov    edx,0x7
0x14082be96: jmp    0x14082be39
0x14082be98: mov    edx,0x6
0x14082be9d: mov    r8d,edx
0x14082bea0: jmp    0x14082be3f
0x14082bea2: mov    edx,0x7
0x14082bea7: mov    r8d,0x6
0x14082bead: mov    r9b,0x1
0x14082beb0: lea    rcx,[rip+0x1e409b9]        # 0x14266c870
0x14082beb7: call   0x1400bc760
0x14082bebc: mov    dl,0x8f
0x14082bebe: jmp    0x14082bfae
0x14082bec3: mov    edx,0x2
0x14082bec8: mov    r8d,0x6
0x14082bece: mov    r9b,0x1
0x14082bed1: lea    rcx,[rip+0x1e40998]        # 0x14266c870
0x14082bed8: call   0x1400bc760
0x14082bedd: mov    dl,0x4
0x14082bedf: jmp    0x14082bfae
0x14082bee4: xor    edx,edx
0x14082bee6: mov    r8d,0x6
0x14082beec: xor    r9d,r9d
0x14082beef: lea    rcx,[rip+0x1e4097a]        # 0x14266c870
0x14082bef6: call   0x1400bc760
0x14082befb: mov    dl,0x2f
0x14082befd: jmp    0x14082bfae
0x14082bf02: mov    edx,0x6
0x14082bf07: mov    r8d,edx
0x14082bf0a: mov    r9b,0x1
0x14082bf0d: lea    rcx,[rip+0x1e4095c]        # 0x14266c870
0x14082bf14: call   0x1400bc760
0x14082bf19: mov    dl,0x2f
0x14082bf1b: jmp    0x14082bfae
0x14082bf20: xor    edx,edx
0x14082bf22: mov    r8d,0x6
0x14082bf28: xor    r9d,r9d
0x14082bf2b: lea    rcx,[rip+0x1e4093e]        # 0x14266c870
0x14082bf32: call   0x1400bc760
0x14082bf37: mov    dl,0xe5
0x14082bf39: jmp    0x14082bfae
0x14082bf3b: xor    edx,edx
0x14082bf3d: mov    r8d,0x6
0x14082bf43: xor    r9d,r9d
0x14082bf46: lea    rcx,[rip+0x1e40923]        # 0x14266c870
0x14082bf4d: call   0x1400bc760
0x14082bf52: mov    dl,0x5b
0x14082bf54: jmp    0x14082bfae
0x14082bf56: xor    edx,edx
0x14082bf58: mov    r8d,0x6
0x14082bf5e: xor    r9d,r9d
0x14082bf61: lea    rcx,[rip+0x1e40908]        # 0x14266c870
0x14082bf68: call   0x1400bc760
0x14082bf6d: mov    dl,0x8f
0x14082bf6f: jmp    0x14082bfae
0x14082bf71: mov    edx,0x6
0x14082bf76: mov    r8d,edx
0x14082bf79: jmp    0x14082bead
0x14082bf7e: mov    edx,0x6
0x14082bf83: mov    r8d,edx
0x14082bf86: mov    r9b,0x1
0x14082bf89: jmp    0x14082bfa0
0x14082bf8b: mov    edx,0x7
0x14082bf90: mov    r9b,0x1
0x14082bf93: jmp    0x14082bf9a
0x14082bf95: xor    edx,edx
0x14082bf97: xor    r9d,r9d
0x14082bf9a: mov    r8d,0x6
0x14082bfa0: lea    rcx,[rip+0x1e408c9]        # 0x14266c870
0x14082bfa7: call   0x1400bc760
0x14082bfac: mov    dl,0xd1
0x14082bfae: mov    r8b,0x1
0x14082bfb1: lea    rcx,[rip+0x1e408b8]        # 0x14266c870
0x14082bfb8: call   0x1400bc7c0
0x14082bfbd: lea    r8d,[r14+0x3]
0x14082bfc1: mov    edx,edi
0x14082bfc3: lea    rcx,[rip+0x1e408a6]        # 0x14266c870
0x14082bfca: call   0x1400bc750
0x14082bfcf: xor    r8d,r8d
0x14082bfd2: mov    edx,0x6
0x14082bfd7: test   BYTE PTR [rsi+0x78],0x1
0x14082bfdb: lea    rsi,[rip+0x1e4088e]        # 0x14266c870
0x14082bfe2: mov    rcx,rsi
0x14082bfe5: je     0x14082c025
0x14082bfe7: xor    r9d,r9d
0x14082bfea: call   0x1400bc760
0x14082bfef: lea    rdx,[rip+0xeada1a]        # 0x1416d9a10 ; 'Abandoned shop'
0x14082bff6: lea    rcx,[rbp+0x1780]
0x14082bffd: call   0x140069780
0x14082c002: nop
0x14082c003: xor    r9d,r9d
0x14082c006: xor    r8d,r8d
0x14082c009: lea    rdx,[rbp+0x1780]
0x14082c010: mov    rcx,rsi
0x14082c013: call   0x140af3400
0x14082c018: nop
0x14082c019: lea    rcx,[rbp+0x1780]
0x14082c020: jmp    0x14082ca00
0x14082c025: mov    r9b,0x1
0x14082c028: call   0x1400bc760
0x14082c02d: movsxd rax,DWORD PTR [rbx+0x8]
0x14082c031: cmp    eax,0x11
0x14082c034: ja     0x14082ca05
0x14082c03a: lea    rdx,[rip+0xffffffffff7d3fbf]        # 0x140000000
0x14082c041: mov    ecx,DWORD PTR [rdx+rax*4+0x831f28]
0x14082c048: add    rcx,rdx
0x14082c04b: jmp    rcx
0x14082c04d: lea    rdx,[rip+0xead98c]        # 0x1416d99e0 ; 'Food imports'
0x14082c054: lea    rcx,[rbp+0x17a0]
0x14082c05b: call   0x140069780
0x14082c060: nop
0x14082c061: xor    r9d,r9d
0x14082c064: xor    r8d,r8d
0x14082c067: lea    rdx,[rbp+0x17a0]
0x14082c06e: mov    rcx,rsi
0x14082c071: call   0x140af3400
0x14082c076: nop
0x14082c077: lea    rcx,[rbp+0x17a0]
0x14082c07e: jmp    0x14082ca00
0x14082c083: lea    rdx,[rip+0xead966]        # 0x1416d99f0 ; 'Clothing imports'
0x14082c08a: lea    rcx,[rbp+0x17c0]
0x14082c091: call   0x140069780
0x14082c096: nop
0x14082c097: xor    r9d,r9d
0x14082c09a: xor    r8d,r8d
0x14082c09d: lea    rdx,[rbp+0x17c0]
0x14082c0a4: mov    rcx,rsi
0x14082c0a7: call   0x140af3400
0x14082c0ac: nop
0x14082c0ad: lea    rcx,[rbp+0x17c0]
0x14082c0b4: jmp    0x14082ca00
0x14082c0b9: lea    rdx,[rip+0xead900]        # 0x1416d99c0 ; 'General imports'
0x14082c0c0: lea    rcx,[rbp+0x17e0]
0x14082c0c7: call   0x140069780
0x14082c0cc: nop
0x14082c0cd: xor    r9d,r9d
0x14082c0d0: xor    r8d,r8d
0x14082c0d3: lea    rdx,[rbp+0x17e0]
0x14082c0da: mov    rcx,rsi
0x14082c0dd: call   0x140af3400
0x14082c0e2: nop
0x14082c0e3: lea    rcx,[rbp+0x17e0]
0x14082c0ea: jmp    0x14082ca00
0x14082c0ef: lea    rdx,[rip+0xead8da]        # 0x1416d99d0 ; 'Cloth shop'
0x14082c0f6: lea    rcx,[rbp+0x1800]
0x14082c0fd: call   0x140069780
0x14082c102: nop
0x14082c103: xor    r9d,r9d
0x14082c106: xor    r8d,r8d
0x14082c109: lea    rdx,[rbp+0x1800]
0x14082c110: mov    rcx,rsi
0x14082c113: call   0x140af3400
0x14082c118: nop
0x14082c119: lea    rcx,[rbp+0x1800]
0x14082c120: jmp    0x14082ca00
0x14082c125: lea    rdx,[rip+0xead744]        # 0x1416d9870 ; 'Leather shop'
0x14082c12c: lea    rcx,[rbp+0x1820]
0x14082c133: call   0x140069780
0x14082c138: nop
0x14082c139: xor    r9d,r9d
0x14082c13c: xor    r8d,r8d
0x14082c13f: lea    rdx,[rbp+0x1820]
0x14082c146: mov    rcx,rsi
0x14082c149: call   0x140af3400
0x14082c14e: nop
0x14082c14f: lea    rcx,[rbp+0x1820]
0x14082c156: jmp    0x14082ca00
0x14082c15b: lea    rdx,[rip+0xead71e]        # 0x1416d9880 ; 'Woven clothing shop'
0x14082c162: lea    rcx,[rbp+0x1840]
0x14082c169: call   0x140069780
0x14082c16e: nop
0x14082c16f: xor    r9d,r9d
0x14082c172: xor    r8d,r8d
0x14082c175: lea    rdx,[rbp+0x1840]
0x14082c17c: mov    rcx,rsi
0x14082c17f: call   0x140af3400
0x14082c184: nop
0x14082c185: lea    rcx,[rbp+0x1840]
0x14082c18c: jmp    0x14082ca00
0x14082c191: lea    rdx,[rip+0xead6a8]        # 0x1416d9840 ; 'Leather clothing shop'
0x14082c198: lea    rcx,[rbp+0x1860]
0x14082c19f: call   0x140069780
0x14082c1a4: nop
0x14082c1a5: xor    r9d,r9d
0x14082c1a8: xor    r8d,r8d
0x14082c1ab: lea    rdx,[rbp+0x1860]
0x14082c1b2: mov    rcx,rsi
0x14082c1b5: call   0x140af3400
0x14082c1ba: nop
0x14082c1bb: lea    rcx,[rbp+0x1860]
0x14082c1c2: jmp    0x14082ca00
0x14082c1c7: lea    rdx,[rip+0xead68a]        # 0x1416d9858 ; "Bone carver's shop"
0x14082c1ce: lea    rcx,[rbp+0x1880]
0x14082c1d5: call   0x140069780
0x14082c1da: nop
0x14082c1db: xor    r9d,r9d
0x14082c1de: xor    r8d,r8d
0x14082c1e1: lea    rdx,[rbp+0x1880]
0x14082c1e8: mov    rcx,rsi
0x14082c1eb: call   0x140af3400
0x14082c1f0: nop
0x14082c1f1: lea    rcx,[rbp+0x1880]
0x14082c1f8: jmp    0x14082ca00
0x14082c1fd: lea    rdx,[rip+0xead60c]        # 0x1416d9810 ; "Gem cutter's shop"
0x14082c204: lea    rcx,[rbp+0x18a0]
0x14082c20b: call   0x140069780
0x14082c210: nop
0x14082c211: xor    r9d,r9d
0x14082c214: xor    r8d,r8d
0x14082c217: lea    rdx,[rbp+0x18a0]
0x14082c21e: mov    rcx,rsi
0x14082c221: call   0x140af3400
0x14082c226: nop
0x14082c227: lea    rcx,[rbp+0x18a0]
0x14082c22e: jmp    0x14082ca00
0x14082c233: lea    rdx,[rip+0xead5ee]        # 0x1416d9828 ; "Weaponsmith's shop"
0x14082c23a: lea    rcx,[rbp+0x18c0]
0x14082c241: call   0x140069780
0x14082c246: nop
0x14082c247: xor    r9d,r9d
0x14082c24a: xor    r8d,r8d
0x14082c24d: lea    rdx,[rbp+0x18c0]
0x14082c254: mov    rcx,rsi
0x14082c257: call   0x140af3400
0x14082c25c: nop
0x14082c25d: lea    rcx,[rbp+0x18c0]
0x14082c264: jmp    0x14082ca00
0x14082c269: lea    rdx,[rip+0xead578]        # 0x1416d97e8 ; "Bowyer's shop"
0x14082c270: lea    rcx,[rbp+0x18e0]
0x14082c277: call   0x140069780
0x14082c27c: nop
0x14082c27d: xor    r9d,r9d
0x14082c280: xor    r8d,r8d
0x14082c283: lea    rdx,[rbp+0x18e0]
0x14082c28a: mov    rcx,rsi
0x14082c28d: call   0x140af3400
0x14082c292: nop
0x14082c293: lea    rcx,[rbp+0x18e0]
0x14082c29a: jmp    0x14082ca00
0x14082c29f: lea    rdx,[rip+0xead552]        # 0x1416d97f8 ; "Blacksmith's shop"
0x14082c2a6: lea    rcx,[rbp+0x1900]
0x14082c2ad: call   0x140069780
0x14082c2b2: nop
0x14082c2b3: xor    r9d,r9d
0x14082c2b6: xor    r8d,r8d
0x14082c2b9: lea    rdx,[rbp+0x1900]
0x14082c2c0: mov    rcx,rsi
0x14082c2c3: call   0x140af3400
0x14082c2c8: nop
0x14082c2c9: lea    rcx,[rbp+0x1900]
0x14082c2d0: jmp    0x14082ca00
0x14082c2d5: lea    rdx,[rip+0xead634]        # 0x1416d9910 ; "Armorsmith's shop"
0x14082c2dc: lea    rcx,[rbp+0x1920]
0x14082c2e3: call   0x140069780
0x14082c2e8: nop
0x14082c2e9: xor    r9d,r9d
0x14082c2ec: xor    r8d,r8d
0x14082c2ef: lea    rdx,[rbp+0x1920]
0x14082c2f6: mov    rcx,rsi
0x14082c2f9: call   0x140af3400
0x14082c2fe: nop
0x14082c2ff: lea    rcx,[rbp+0x1920]
0x14082c306: jmp    0x14082ca00
0x14082c30b: lea    rdx,[rip+0xead616]        # 0x1416d9928 ; 'Metal craft shop'
0x14082c312: lea    rcx,[rbp+0x1940]
0x14082c319: call   0x140069780
0x14082c31e: nop
0x14082c31f: xor    r9d,r9d
0x14082c322: xor    r8d,r8d
0x14082c325: lea    rdx,[rbp+0x1940]
0x14082c32c: mov    rcx,rsi
0x14082c32f: call   0x140af3400
0x14082c334: nop
0x14082c335: lea    rcx,[rbp+0x1940]
0x14082c33c: jmp    0x14082ca00
0x14082c341: lea    rdx,[rip+0xead598]        # 0x1416d98e0 ; 'Leather goods shop'
0x14082c348: lea    rcx,[rbp+0x1960]
0x14082c34f: call   0x140069780
0x14082c354: nop
0x14082c355: xor    r9d,r9d
0x14082c358: xor    r8d,r8d
0x14082c35b: lea    rdx,[rbp+0x1960]
0x14082c362: mov    rcx,rsi
0x14082c365: call   0x140af3400
0x14082c36a: nop
0x14082c36b: lea    rcx,[rbp+0x1960]
0x14082c372: jmp    0x14082ca00
0x14082c377: lea    rdx,[rip+0xead57a]        # 0x1416d98f8 ; "Carpenter's shop"
0x14082c37e: lea    rcx,[rbp+0x1980]
0x14082c385: call   0x140069780
0x14082c38a: nop
0x14082c38b: xor    r9d,r9d
0x14082c38e: xor    r8d,r8d
0x14082c391: lea    rdx,[rbp+0x1980]
0x14082c398: mov    rcx,rsi
0x14082c39b: call   0x140af3400
0x14082c3a0: nop
0x14082c3a1: lea    rcx,[rbp+0x1980]
0x14082c3a8: jmp    0x14082ca00
0x14082c3ad: lea    rdx,[rip+0xead4fc]        # 0x1416d98b0 ; 'Stone furniture shop'
0x14082c3b4: lea    rcx,[rbp+0x19a0]
0x14082c3bb: call   0x140069780
0x14082c3c0: nop
0x14082c3c1: xor    r9d,r9d
0x14082c3c4: xor    r8d,r8d
0x14082c3c7: lea    rdx,[rbp+0x19a0]
0x14082c3ce: mov    rcx,rsi
0x14082c3d1: call   0x140af3400
0x14082c3d6: nop
0x14082c3d7: lea    rcx,[rbp+0x19a0]
0x14082c3de: jmp    0x14082ca00
0x14082c3e3: lea    rdx,[rip+0xead4de]        # 0x1416d98c8 ; 'Metal furniture shop'
0x14082c3ea: lea    rcx,[rbp+0x19c0]
0x14082c3f1: call   0x140069780
0x14082c3f6: nop
0x14082c3f7: xor    r9d,r9d
0x14082c3fa: xor    r8d,r8d
0x14082c3fd: lea    rdx,[rbp+0x19c0]
0x14082c404: mov    rcx,rsi
0x14082c407: call   0x140af3400
0x14082c40c: nop
0x14082c40d: lea    rcx,[rbp+0x19c0]
0x14082c414: jmp    0x14082ca00
0x14082c419: lea    r8d,[r14+0x3]
0x14082c41d: mov    edx,edi
0x14082c41f: lea    rbx,[rip+0x1e4044a]        # 0x14266c870
0x14082c426: mov    rcx,rbx
0x14082c429: call   0x1400bc750
0x14082c42e: xor    r8d,r8d
0x14082c431: mov    edx,0x7
0x14082c436: xor    r9d,r9d
0x14082c439: mov    rcx,rbx
0x14082c43c: call   0x1400bc760
0x14082c441: lea    rdx,[rip+0xe1b078]        # 0x1416474c0 ; 'Dormitory'
0x14082c448: lea    rcx,[rbp+0x19e0]
0x14082c44f: call   0x140069780
0x14082c454: nop
0x14082c455: xor    r9d,r9d
0x14082c458: xor    r8d,r8d
0x14082c45b: lea    rdx,[rbp+0x19e0]
0x14082c462: mov    rcx,rbx
0x14082c465: call   0x140af3400
0x14082c46a: nop
0x14082c46b: lea    rcx,[rbp+0x19e0]
0x14082c472: jmp    0x14082ca00
0x14082c477: lea    r8d,[r14+0x3]
0x14082c47b: mov    edx,edi
0x14082c47d: lea    rbx,[rip+0x1e403ec]        # 0x14266c870
0x14082c484: mov    rcx,rbx
0x14082c487: call   0x1400bc750
0x14082c48c: xor    r8d,r8d
0x14082c48f: mov    edx,0x7
0x14082c494: xor    r9d,r9d
0x14082c497: mov    rcx,rbx
0x14082c49a: call   0x1400bc760
0x14082c49f: lea    rdx,[rip+0xead3ee]        # 0x1416d9894 ; 'Barrow'
0x14082c4a6: lea    rcx,[rbp+0x1a00]
0x14082c4ad: call   0x140069780
0x14082c4b2: nop
0x14082c4b3: xor    r9d,r9d
0x14082c4b6: xor    r8d,r8d
0x14082c4b9: lea    rdx,[rbp+0x1a00]
0x14082c4c0: mov    rcx,rbx
0x14082c4c3: call   0x140af3400
0x14082c4c8: nop
0x14082c4c9: lea    rcx,[rbp+0x1a00]
0x14082c4d0: jmp    0x14082ca00
0x14082c4d5: lea    r8d,[r14+0x3]
0x14082c4d9: mov    edx,edi
0x14082c4db: lea    rbx,[rip+0x1e4038e]        # 0x14266c870
0x14082c4e2: mov    rcx,rbx
0x14082c4e5: call   0x1400bc750
0x14082c4ea: xor    r8d,r8d
0x14082c4ed: mov    edx,0x6
0x14082c4f2: mov    r9b,0x1
0x14082c4f5: mov    rcx,rbx
0x14082c4f8: call   0x1400bc760
0x14082c4fd: lea    rdx,[rip+0xe1f50c]        # 0x14164ba10 ; 'Dining Hall'
0x14082c504: lea    rcx,[rbp+0x1a20]
0x14082c50b: call   0x140069780
0x14082c510: nop
0x14082c511: xor    r9d,r9d
0x14082c514: xor    r8d,r8d
0x14082c517: lea    rdx,[rbp+0x1a20]
0x14082c51e: mov    rcx,rbx
0x14082c521: call   0x140af3400
0x14082c526: nop
0x14082c527: lea    rcx,[rbp+0x1a20]
0x14082c52e: jmp    0x14082ca00
0x14082c533: lea    r8d,[r14+0x3]
0x14082c537: mov    edx,edi
0x14082c539: lea    rbx,[rip+0x1e40330]        # 0x14266c870
0x14082c540: mov    rcx,rbx
0x14082c543: call   0x1400bc750
0x14082c548: xor    r8d,r8d
0x14082c54b: mov    edx,0x7
0x14082c550: mov    r9b,0x1
0x14082c553: mov    rcx,rbx
0x14082c556: call   0x1400bc760
0x14082c55b: lea    rdx,[rip+0xead33e]        # 0x1416d98a0 ; 'Warehouse'
0x14082c562: lea    rcx,[rbp+0x1a40]
0x14082c569: call   0x140069780
0x14082c56e: nop
0x14082c56f: xor    r9d,r9d
0x14082c572: xor    r8d,r8d
0x14082c575: lea    rdx,[rbp+0x1a40]
0x14082c57c: mov    rcx,rbx
0x14082c57f: call   0x140af3400
0x14082c584: nop
0x14082c585: lea    rcx,[rbp+0x1a40]
0x14082c58c: jmp    0x14082ca00
0x14082c591: lea    r8d,[r14+0x3]
0x14082c595: mov    edx,edi
0x14082c597: lea    rbx,[rip+0x1e402d2]        # 0x14266c870
0x14082c59e: mov    rcx,rbx
0x14082c5a1: call   0x1400bc750
0x14082c5a6: xor    r8d,r8d
0x14082c5a9: mov    edx,0x7
0x14082c5ae: mov    r9b,0x1
0x14082c5b1: mov    rcx,rbx
0x14082c5b4: call   0x1400bc760
0x14082c5b9: lea    rdx,[rip+0xead160]        # 0x1416d9720 ; 'Fortress Entrance'
0x14082c5c0: lea    rcx,[rbp+0x1a60]
0x14082c5c7: call   0x140069780
0x14082c5cc: nop
0x14082c5cd: xor    r9d,r9d
0x14082c5d0: xor    r8d,r8d
0x14082c5d3: lea    rdx,[rbp+0x1a60]
0x14082c5da: mov    rcx,rbx
0x14082c5dd: call   0x140af3400
0x14082c5e2: nop
0x14082c5e3: lea    rcx,[rbp+0x1a60]
0x14082c5ea: jmp    0x14082ca00
0x14082c5ef: lea    r8d,[r14+0x3]
0x14082c5f3: mov    edx,edi
0x14082c5f5: lea    rbx,[rip+0x1e40274]        # 0x14266c870
0x14082c5fc: mov    rcx,rbx
0x14082c5ff: call   0x1400bc750
0x14082c604: xor    r8d,r8d
0x14082c607: mov    edx,0x1
0x14082c60c: movzx  r9d,dl
0x14082c610: mov    rcx,rbx
0x14082c613: call   0x1400bc760
0x14082c618: lea    rdx,[rip+0xe1c44d]        # 0x141648a6c ; 'Well'
0x14082c61f: lea    rcx,[rbp+0x1a80]
0x14082c626: call   0x140069780
0x14082c62b: nop
0x14082c62c: xor    r9d,r9d
0x14082c62f: xor    r8d,r8d
0x14082c632: lea    rdx,[rbp+0x1a80]
0x14082c639: mov    rcx,rbx
0x14082c63c: call   0x140af3400
0x14082c641: nop
0x14082c642: lea    rcx,[rbp+0x1a80]
0x14082c649: jmp    0x14082ca00
0x14082c64e: lea    r8d,[r14+0x3]
0x14082c652: mov    edx,edi
0x14082c654: lea    rbx,[rip+0x1e40215]        # 0x14266c870
0x14082c65b: mov    rcx,rbx
0x14082c65e: call   0x1400bc750
0x14082c663: xor    r8d,r8d
0x14082c666: mov    edx,0x7
0x14082c66b: xor    r9d,r9d
0x14082c66e: mov    rcx,rbx
0x14082c671: call   0x1400bc760
0x14082c676: lea    rdx,[rip+0xead0bb]        # 0x1416d9738 ; 'Trenches'
0x14082c67d: lea    rcx,[rbp+0x1aa0]
0x14082c684: call   0x140069780
0x14082c689: nop
0x14082c68a: xor    r9d,r9d
0x14082c68d: xor    r8d,r8d
0x14082c690: lea    rdx,[rbp+0x1aa0]
0x14082c697: mov    rcx,rbx
0x14082c69a: call   0x140af3400
0x14082c69f: nop
0x14082c6a0: lea    rcx,[rbp+0x1aa0]
0x14082c6a7: jmp    0x14082ca00
0x14082c6ac: lea    r8d,[r14+0x3]
0x14082c6b0: mov    edx,edi
0x14082c6b2: lea    rbx,[rip+0x1e401b7]        # 0x14266c870
0x14082c6b9: mov    rcx,rbx
0x14082c6bc: call   0x1400bc750
0x14082c6c1: xor    r8d,r8d
0x14082c6c4: mov    edx,0x3
0x14082c6c9: mov    r9b,0x1
0x14082c6cc: mov    rcx,rbx
0x14082c6cf: call   0x1400bc760
0x14082c6d4: mov    rbx,QWORD PTR [rsi+0x58]
0x14082c6d8: test   rbx,rbx
0x14082c6db: je     0x14082c7bf
0x14082c6e1: lea    rcx,[rbp+0x580]
0x14082c6e8: call   0x140070cc0
0x14082c6ed: nop
0x14082c6ee: mov    ecx,DWORD PTR [rbx+0x8]
0x14082c6f1: test   ecx,ecx
0x14082c6f3: je     0x14082c741
0x14082c6f5: cmp    ecx,0x1
0x14082c6f8: jne    0x14082c78d
0x14082c6fe: mov    edx,DWORD PTR [rbx+0xc]
0x14082c701: lea    rcx,[rip+0x1bc7570]        # 0x1423f3c78
0x14082c708: call   0x14007f120
0x14082c70d: test   rax,rax
0x14082c710: je     0x14082c78d
0x14082c712: xor    r9d,r9d
0x14082c715: mov    r8d,DWORD PTR [rbx+0xc]
0x14082c719: lea    rdx,[rbp+0x580]
0x14082c720: lea    rcx,[rip+0x1cefa11]        # 0x14251c138
0x14082c727: call   0x140baa5c0
0x14082c72c: lea    rdx,[rip+0xe33605]        # 0x14165fd38 ; ' shrine'
0x14082c733: lea    rcx,[rbp+0x580]
0x14082c73a: call   0x140070b90
0x14082c73f: jmp    0x14082c78d
0x14082c741: lea    rdx,[rip+0xeacfb8]        # 0x1416d9700 ; 'Shrine to '
0x14082c748: lea    rcx,[rbp+0x580]
0x14082c74f: call   0x140070b90
0x14082c754: lea    rcx,[rbp+0x350]
0x14082c75b: call   0x1400736b0
0x14082c760: mov    eax,0x1
0x14082c765: mov    WORD PTR [rsp+0x28],ax
0x14082c76a: mov    WORD PTR [rsp+0x20],ax
0x14082c76f: lea    r9,[rbp+0x350]
0x14082c776: mov    r8d,DWORD PTR [rbx+0xc]
0x14082c77a: lea    rdx,[rbp+0x580]
0x14082c781: lea    rcx,[rip+0x1cef9b0]        # 0x14251c138
0x14082c788: call   0x140baabd0
0x14082c78d: lea    rcx,[rbp+0x580]
0x14082c794: call   0x140546b30
0x14082c799: xor    r9d,r9d
0x14082c79c: xor    r8d,r8d
0x14082c79f: lea    rdx,[rbp+0x580]
0x14082c7a6: lea    rcx,[rip+0x1e400c3]        # 0x14266c870
0x14082c7ad: call   0x140af3400
0x14082c7b2: nop
0x14082c7b3: lea    rcx,[rbp+0x580]
0x14082c7ba: jmp    0x14082ca00
0x14082c7bf: lea    rdx,[rip+0xe1b2aa]        # 0x141647a70 ; 'Shrine'
0x14082c7c6: lea    rcx,[rbp+0x1ac0]
0x14082c7cd: call   0x140069780
0x14082c7d2: nop
0x14082c7d3: xor    r9d,r9d
0x14082c7d6: xor    r8d,r8d
0x14082c7d9: lea    rdx,[rbp+0x1ac0]
0x14082c7e0: lea    rcx,[rip+0x1e40089]        # 0x14266c870
0x14082c7e7: call   0x140af3400
0x14082c7ec: nop
0x14082c7ed: lea    rcx,[rbp+0x1ac0]
0x14082c7f4: jmp    0x14082ca00
0x14082c7f9: mov    rbx,QWORD PTR [rsi+0x58]
0x14082c7fd: lea    r8d,[r14+0x3]
0x14082c801: mov    edx,edi
0x14082c803: lea    rcx,[rip+0x1e40066]        # 0x14266c870
0x14082c80a: call   0x1400bc750
0x14082c80f: xor    r8d,r8d
0x14082c812: mov    edx,0x2
0x14082c817: test   BYTE PTR [rsi+0x78],0x1
0x14082c81b: lea    rsi,[rip+0x1e4004e]        # 0x14266c870
0x14082c822: mov    rcx,rsi
0x14082c825: je     0x14082c865
0x14082c827: xor    r9d,r9d
0x14082c82a: call   0x1400bc760
0x14082c82f: lea    rdx,[rip+0xeaceda]        # 0x1416d9710 ; 'Empty market'
0x14082c836: lea    rcx,[rbp+0x1ae0]
0x14082c83d: call   0x140069780
0x14082c842: nop
0x14082c843: xor    r9d,r9d
0x14082c846: xor    r8d,r8d
0x14082c849: lea    rdx,[rbp+0x1ae0]
0x14082c850: mov    rcx,rsi
0x14082c853: call   0x140af3400
0x14082c858: nop
0x14082c859: lea    rcx,[rbp+0x1ae0]
0x14082c860: jmp    0x14082ca00
0x14082c865: mov    r9b,0x1
0x14082c868: call   0x1400bc760
0x14082c86d: mov    eax,DWORD PTR [rbx+0x8]
0x14082c870: add    eax,0xffffffee
0x14082c873: cmp    eax,0x6
0x14082c876: ja     0x14082ca05
0x14082c87c: cdqe
0x14082c87e: lea    rdx,[rip+0xffffffffff7d377b]        # 0x140000000
0x14082c885: mov    ecx,DWORD PTR [rdx+rax*4+0x831f70]
0x14082c88c: add    rcx,rdx
0x14082c88f: jmp    rcx
0x14082c891: lea    rdx,[rip+0xeace38]        # 0x1416d96d0 ; 'Imported goods market'
0x14082c898: lea    rcx,[rbp+0x1b00]
0x14082c89f: call   0x140069780
0x14082c8a4: nop
0x14082c8a5: xor    r9d,r9d
0x14082c8a8: xor    r8d,r8d
0x14082c8ab: lea    rdx,[rbp+0x1b00]
0x14082c8b2: mov    rcx,rsi
0x14082c8b5: call   0x140af3400
0x14082c8ba: nop
0x14082c8bb: lea    rcx,[rbp+0x1b00]
0x14082c8c2: jmp    0x14082ca00
0x14082c8c7: lea    rdx,[rip+0xeace1a]        # 0x1416d96e8 ; 'Imported food market'
0x14082c8ce: lea    rcx,[rbp+0x1b20]
0x14082c8d5: call   0x140069780
0x14082c8da: nop
0x14082c8db: xor    r9d,r9d
0x14082c8de: xor    r8d,r8d
0x14082c8e1: lea    rdx,[rbp+0x1b20]
0x14082c8e8: mov    rcx,rsi
0x14082c8eb: call   0x140af3400
0x14082c8f0: nop
0x14082c8f1: lea    rcx,[rbp+0x1b20]
0x14082c8f8: jmp    0x14082ca00
0x14082c8fd: lea    rdx,[rip+0xeacd9c]        # 0x1416d96a0 ; 'Imported clothing market'
0x14082c904: lea    rcx,[rbp+0x1b40]
0x14082c90b: call   0x140069780
0x14082c910: nop
0x14082c911: xor    r9d,r9d
0x14082c914: xor    r8d,r8d
0x14082c917: lea    rdx,[rbp+0x1b40]
0x14082c91e: mov    rcx,rsi
0x14082c921: call   0x140af3400
0x14082c926: nop
0x14082c927: lea    rcx,[rbp+0x1b40]
0x14082c92e: jmp    0x14082ca00
0x14082c933: lea    rdx,[rip+0xeacd86]        # 0x1416d96c0 ; 'Meat market'
0x14082c93a: lea    rcx,[rbp+0x1b60]
0x14082c941: call   0x140069780
0x14082c946: nop
0x14082c947: xor    r9d,r9d
0x14082c94a: xor    r8d,r8d
0x14082c94d: lea    rdx,[rbp+0x1b60]
0x14082c954: mov    rcx,rsi
0x14082c957: call   0x140af3400
0x14082c95c: nop
0x14082c95d: lea    rcx,[rbp+0x1b60]
0x14082c964: jmp    0x14082ca00
0x14082c969: lea    rdx,[rip+0xeace48]        # 0x1416d97b8 ; 'Fruit and vegetable market'
0x14082c970: lea    rcx,[rbp+0x1b80]
0x14082c977: call   0x140069780
0x14082c97c: nop
0x14082c97d: xor    r9d,r9d
0x14082c980: xor    r8d,r8d
0x14082c983: lea    rdx,[rbp+0x1b80]
0x14082c98a: mov    rcx,rsi
0x14082c98d: call   0x140af3400
0x14082c992: nop
0x14082c993: lea    rcx,[rbp+0x1b80]
0x14082c99a: jmp    0x14082ca00
0x14082c99c: lea    rdx,[rip+0xeace35]        # 0x1416d97d8 ; 'Cheese market'
0x14082c9a3: lea    rcx,[rbp+0x1ba0]
0x14082c9aa: call   0x140069780
0x14082c9af: nop
0x14082c9b0: xor    r9d,r9d
0x14082c9b3: xor    r8d,r8d
0x14082c9b6: lea    rdx,[rbp+0x1ba0]
0x14082c9bd: mov    rcx,rsi
0x14082c9c0: call   0x140af3400
0x14082c9c5: nop
0x14082c9c6: lea    rcx,[rbp+0x1ba0]
0x14082c9cd: jmp    0x14082ca00
0x14082c9cf: lea    rdx,[rip+0xeacdb2]        # 0x1416d9788 ; 'Processed goods market'
0x14082c9d6: lea    rcx,[rbp+0x1bc0]
0x14082c9dd: call   0x140069780
0x14082c9e2: nop
0x14082c9e3: xor    r9d,r9d
0x14082c9e6: xor    r8d,r8d
0x14082c9e9: lea    rdx,[rbp+0x1bc0]
0x14082c9f0: mov    rcx,rsi
0x14082c9f3: call   0x140af3400
0x14082c9f8: nop
0x14082c9f9: lea    rcx,[rbp+0x1bc0]
0x14082ca00: call   0x140069460
0x14082ca05: inc    edi
0x14082ca07: mov    esi,DWORD PTR [rsp+0x70]
0x14082ca0b: lea    rcx,[rbp+0x78]
0x14082ca0f: call   0x140070430
0x14082ca14: lea    r8,[rbp+0x160]
0x14082ca1b: lea    rdx,[rbp-0x35]
0x14082ca1f: lea    rcx,[rbp+0x78]
0x14082ca23: call   0x140070450
0x14082ca28: xor    edx,edx
0x14082ca2a: movzx  ecx,BYTE PTR [rax]
0x14082ca2d: call   0x140066de0
0x14082ca32: test   al,al
0x14082ca34: lea    rbx,[rip+0xffffffffff7d35c5]        # 0x140000000
0x14082ca3b: jne    0x14082b100
0x14082ca41: mov    DWORD PTR [rsp+0x7c],r12d
0x14082ca46: mov    DWORD PTR [rsp+0x74],r15d
0x14082ca4b: mov    r15d,DWORD PTR [rbp-0x1c]
0x14082ca4f: mov    r12d,DWORD PTR [rbp-0x20]
0x14082ca53: movsxd rax,r15d
0x14082ca56: imul   rcx,rax,0x11
0x14082ca5a: movsxd rax,r12d
0x14082ca5d: add    rcx,rax
0x14082ca60: imul   rcx,rcx,0xa8
0x14082ca67: mov    rax,QWORD PTR [r13+0x308]
0x14082ca6e: add    rax,0xb538
0x14082ca74: add    rcx,rax
0x14082ca77: lea    rdx,[rbp+0x50]
0x14082ca7b: call   0x140070870
0x14082ca80: movsxd rax,r15d
0x14082ca83: imul   rcx,rax,0x11
0x14082ca87: movsxd rax,r12d
0x14082ca8a: add    rcx,rax
0x14082ca8d: imul   rcx,rcx,0xa8
0x14082ca94: mov    rax,QWORD PTR [r13+0x308]
0x14082ca9b: add    rax,0xb538
0x14082caa1: add    rcx,rax
0x14082caa4: lea    rdx,[rbp+0x168]
0x14082caab: call   0x140070860
0x14082cab0: lea    r8,[rbp+0x168]
0x14082cab7: lea    rdx,[rbp-0x36]
0x14082cabb: lea    rcx,[rbp+0x50]
0x14082cabf: call   0x140070450
0x14082cac4: xor    edx,edx
0x14082cac6: movzx  ecx,BYTE PTR [rax]
0x14082cac9: call   0x140066de0
0x14082cace: test   al,al
0x14082cad0: je     0x14082cc70
0x14082cad6: mov    esi,0x5
0x14082cadb: lea    r13,[rip+0x1e3fd8e]        # 0x14266c870
0x14082cae2: cmp    edi,0xa
0x14082cae5: jg     0x14082cc68
0x14082caeb: lea    rcx,[rbp+0x50]
0x14082caef: call   0x140070440
0x14082caf4: mov    rcx,QWORD PTR [rax]
0x14082caf7: cmp    DWORD PTR [rcx],0x7
0x14082cafa: jne    0x14082cc39
0x14082cb00: lea    rcx,[rbp+0x50]
0x14082cb04: call   0x140070440
0x14082cb09: mov    rcx,QWORD PTR [rax]
0x14082cb0c: mov    edx,DWORD PTR [rcx+0x4]
0x14082cb0f: sub    edx,0x8
0x14082cb12: je     0x14082cbce
0x14082cb18: sub    edx,0x2
0x14082cb1b: je     0x14082cb7d
0x14082cb1d: cmp    edx,0x1
0x14082cb20: jne    0x14082cc39
0x14082cb26: lea    r8d,[r14+0x3]
0x14082cb2a: mov    edx,edi
0x14082cb2c: mov    rcx,r13
0x14082cb2f: call   0x1400bc750
0x14082cb34: xor    r8d,r8d
0x14082cb37: mov    edx,0x7
0x14082cb3c: mov    r9b,0x1
0x14082cb3f: mov    rcx,r13
0x14082cb42: call   0x1400bc760
0x14082cb47: lea    rdx,[rip+0xeacc52]        # 0x1416d97a0 ; 'Underground Fortress'
0x14082cb4e: lea    rcx,[rbp+0x1be0]
0x14082cb55: call   0x140069780
0x14082cb5a: nop
0x14082cb5b: xor    r9d,r9d
0x14082cb5e: xor    r8d,r8d
0x14082cb61: lea    rdx,[rbp+0x1be0]
0x14082cb68: mov    rcx,r13
0x14082cb6b: call   0x140af3400
0x14082cb70: nop
0x14082cb71: lea    rcx,[rbp+0x1be0]
0x14082cb78: jmp    0x14082cc32
0x14082cb7d: lea    r8d,[r14+0x3]
0x14082cb81: mov    edx,edi
0x14082cb83: mov    rcx,r13
0x14082cb86: call   0x1400bc750
0x14082cb8b: xor    r8d,r8d
0x14082cb8e: mov    edx,esi
0x14082cb90: mov    r9b,0x1
0x14082cb93: mov    rcx,r13
0x14082cb96: call   0x1400bc760
0x14082cb9b: lea    rdx,[rip+0xeacbb6]        # 0x1416d9758 ; 'Underground Farms'
0x14082cba2: lea    rcx,[rbp+0x1c00]
0x14082cba9: call   0x140069780
0x14082cbae: nop
0x14082cbaf: xor    r9d,r9d
0x14082cbb2: xor    r8d,r8d
0x14082cbb5: lea    rdx,[rbp+0x1c00]
0x14082cbbc: mov    rcx,r13
0x14082cbbf: call   0x140af3400
0x14082cbc4: nop
0x14082cbc5: lea    rcx,[rbp+0x1c00]
0x14082cbcc: jmp    0x14082cc32
0x14082cbce: lea    rcx,[rbp+0x50]
0x14082cbd2: call   0x140070440
0x14082cbd7: mov    rcx,QWORD PTR [rax]
0x14082cbda: cmp    DWORD PTR [rcx+0x54],0xffffffff
0x14082cbde: je     0x14082cc39
0x14082cbe0: lea    r8d,[r14+0x3]
0x14082cbe4: mov    edx,edi
0x14082cbe6: mov    rcx,r13
0x14082cbe9: call   0x1400bc750
0x14082cbee: xor    r8d,r8d
0x14082cbf1: mov    edx,0x7
0x14082cbf6: xor    r9d,r9d
0x14082cbf9: mov    rcx,r13
0x14082cbfc: call   0x1400bc760
0x14082cc01: lea    rdx,[rip+0xeacb68]        # 0x1416d9770 ; 'Underground Stair'
0x14082cc08: lea    rcx,[rbp+0x1c20]
0x14082cc0f: call   0x140069780
0x14082cc14: nop
0x14082cc15: xor    r9d,r9d
0x14082cc18: xor    r8d,r8d
0x14082cc1b: lea    rdx,[rbp+0x1c20]
0x14082cc22: mov    rcx,r13
0x14082cc25: call   0x140af3400
0x14082cc2a: nop
0x14082cc2b: lea    rcx,[rbp+0x1c20]
0x14082cc32: call   0x140069460
0x14082cc37: inc    edi
0x14082cc39: lea    rcx,[rbp+0x50]
0x14082cc3d: call   0x140070430
0x14082cc42: lea    r8,[rbp+0x168]
0x14082cc49: lea    rdx,[rbp-0x36]
0x14082cc4d: lea    rcx,[rbp+0x50]
0x14082cc51: call   0x140070450
0x14082cc56: xor    edx,edx
0x14082cc58: movzx  ecx,BYTE PTR [rax]
0x14082cc5b: call   0x140066de0
0x14082cc60: test   al,al
0x14082cc62: jne    0x14082cae2
0x14082cc68: mov    r13,QWORD PTR [rbp-0x58]
0x14082cc6c: mov    esi,DWORD PTR [rsp+0x70]
0x14082cc70: lea    rbx,[rip+0x1e3fbf9]        # 0x14266c870
0x14082cc77: cmp    esi,0x1
0x14082cc7a: jle    0x14082cd21
0x14082cc80: cmp    edi,0xa
0x14082cc83: jg     0x14082cdc7
0x14082cc89: lea    r8d,[r14+0x3]
0x14082cc8d: mov    edx,edi
0x14082cc8f: mov    rcx,rbx
0x14082cc92: call   0x1400bc750
0x14082cc97: xor    r8d,r8d
0x14082cc9a: mov    edx,0x7
0x14082cc9f: xor    r9d,r9d
0x14082cca2: mov    rcx,rbx
0x14082cca5: call   0x1400bc760
0x14082ccaa: cmp    WORD PTR [r13+0x80],0x3
0x14082ccb3: jne    0x14082cceb
0x14082ccb5: lea    rdx,[rip+0xeaa764]        # 0x1416d7420 ; 'Hillocks'
0x14082ccbc: lea    rcx,[rbp+0x1c40]
0x14082ccc3: call   0x140069780
0x14082ccc8: nop
0x14082ccc9: xor    r9d,r9d
0x14082cccc: xor    r8d,r8d
0x14082cccf: lea    rdx,[rbp+0x1c40]
0x14082ccd6: mov    rcx,rbx
0x14082ccd9: call   0x140af3400
0x14082ccde: nop
0x14082ccdf: lea    rcx,[rbp+0x1c40]
0x14082cce6: jmp    0x14082cdc0
0x14082cceb: lea    rdx,[rip+0xeaca52]        # 0x1416d9744 ; 'Houses'
0x14082ccf2: lea    rcx,[rbp+0x1c60]
0x14082ccf9: call   0x140069780
0x14082ccfe: nop
0x14082ccff: xor    r9d,r9d
0x14082cd02: xor    r8d,r8d
0x14082cd05: lea    rdx,[rbp+0x1c60]
0x14082cd0c: mov    rcx,rbx
0x14082cd0f: call   0x140af3400
0x14082cd14: nop
0x14082cd15: lea    rcx,[rbp+0x1c60]
0x14082cd1c: jmp    0x14082cdc0
0x14082cd21: jne    0x14082cdc7
0x14082cd27: cmp    edi,0xa
0x14082cd2a: jg     0x14082cdc7
0x14082cd30: lea    r8d,[r14+0x3]
0x14082cd34: mov    edx,edi
0x14082cd36: mov    rcx,rbx
0x14082cd39: call   0x1400bc750
0x14082cd3e: xor    r8d,r8d
0x14082cd41: mov    edx,0x7
0x14082cd46: xor    r9d,r9d
0x14082cd49: mov    rcx,rbx
0x14082cd4c: call   0x1400bc760
0x14082cd51: cmp    WORD PTR [r13+0x80],0x3
0x14082cd5a: jne    0x14082cd8f
0x14082cd5c: lea    rdx,[rip+0xeac9ed]        # 0x1416d9750 ; 'Hillock'
0x14082cd63: lea    rcx,[rbp+0x1c80]
0x14082cd6a: call   0x140069780
0x14082cd6f: nop
0x14082cd70: xor    r9d,r9d
0x14082cd73: xor    r8d,r8d
0x14082cd76: lea    rdx,[rbp+0x1c80]
0x14082cd7d: mov    rcx,rbx
0x14082cd80: call   0x140af3400
0x14082cd85: nop
0x14082cd86: lea    rcx,[rbp+0x1c80]
0x14082cd8d: jmp    0x14082cdc0
0x14082cd8f: lea    rdx,[rip+0xeac836]        # 0x1416d95cc ; 'House'
0x14082cd96: lea    rcx,[rbp+0x1ca0]
0x14082cd9d: call   0x140069780
0x14082cda2: nop
0x14082cda3: xor    r9d,r9d
0x14082cda6: xor    r8d,r8d
0x14082cda9: lea    rdx,[rbp+0x1ca0]
0x14082cdb0: mov    rcx,rbx
0x14082cdb3: call   0x140af3400
0x14082cdb8: nop
0x14082cdb9: lea    rcx,[rbp+0x1ca0]
0x14082cdc0: call   0x140069460
0x14082cdc5: inc    edi
0x14082cdc7: cmp    DWORD PTR [rsp+0x74],0x1
0x14082cdcc: jle    0x14082ce70
0x14082cdd2: cmp    edi,0xa
0x14082cdd5: jg     0x14082cf13
0x14082cddb: lea    r8d,[r14+0x3]
0x14082cddf: mov    edx,edi
0x14082cde1: mov    rcx,rbx
0x14082cde4: call   0x1400bc750
0x14082cde9: xor    r8d,r8d
0x14082cdec: xor    edx,edx
0x14082cdee: mov    r9b,0x1
0x14082cdf1: mov    rcx,rbx
0x14082cdf4: call   0x1400bc760
0x14082cdf9: cmp    WORD PTR [r13+0x80],0x3
0x14082ce02: jne    0x14082ce3a
0x14082ce04: lea    rdx,[rip+0xeac7cd]        # 0x1416d95d8 ; 'Abandoned hillocks'
0x14082ce0b: lea    rcx,[rbp+0x1cc0]
0x14082ce12: call   0x140069780
0x14082ce17: nop
0x14082ce18: xor    r9d,r9d
0x14082ce1b: xor    r8d,r8d
0x14082ce1e: lea    rdx,[rbp+0x1cc0]
0x14082ce25: mov    rcx,rbx
0x14082ce28: call   0x140af3400
0x14082ce2d: nop
0x14082ce2e: lea    rcx,[rbp+0x1cc0]
0x14082ce35: jmp    0x14082cf0c
0x14082ce3a: lea    rdx,[rip+0xeac75f]        # 0x1416d95a0 ; 'Abandoned houses'
0x14082ce41: lea    rcx,[rbp+0x1ce0]
0x14082ce48: call   0x140069780
0x14082ce4d: nop
0x14082ce4e: xor    r9d,r9d
0x14082ce51: xor    r8d,r8d
0x14082ce54: lea    rdx,[rbp+0x1ce0]
0x14082ce5b: mov    rcx,rbx
0x14082ce5e: call   0x140af3400
0x14082ce63: nop
0x14082ce64: lea    rcx,[rbp+0x1ce0]
0x14082ce6b: jmp    0x14082cf0c
0x14082ce70: jne    0x14082cf13
0x14082ce76: cmp    edi,0xa
0x14082ce79: jg     0x14082cf13
0x14082ce7f: lea    r8d,[r14+0x3]
0x14082ce83: mov    edx,edi
0x14082ce85: mov    rcx,rbx
0x14082ce88: call   0x1400bc750
0x14082ce8d: xor    r8d,r8d
0x14082ce90: xor    edx,edx
0x14082ce92: mov    r9b,0x1
0x14082ce95: mov    rcx,rbx
0x14082ce98: call   0x1400bc760
0x14082ce9d: cmp    WORD PTR [r13+0x80],0x3
0x14082cea6: jne    0x14082cedb
0x14082cea8: lea    rdx,[rip+0xeac709]        # 0x1416d95b8 ; 'Abandoned hillock'
0x14082ceaf: lea    rcx,[rbp+0x1d00]
0x14082ceb6: call   0x140069780
0x14082cebb: nop
0x14082cebc: xor    r9d,r9d
0x14082cebf: xor    r8d,r8d
0x14082cec2: lea    rdx,[rbp+0x1d00]
0x14082cec9: mov    rcx,rbx
0x14082cecc: call   0x140af3400
0x14082ced1: nop
0x14082ced2: lea    rcx,[rbp+0x1d00]
0x14082ced9: jmp    0x14082cf0c
0x14082cedb: lea    rdx,[rip+0xeac69e]        # 0x1416d9580 ; 'Abandoned house'
0x14082cee2: lea    rcx,[rbp+0x1d20]
0x14082cee9: call   0x140069780
0x14082ceee: nop
0x14082ceef: xor    r9d,r9d
0x14082cef2: xor    r8d,r8d
0x14082cef5: lea    rdx,[rbp+0x1d20]
0x14082cefc: mov    rcx,rbx
0x14082ceff: call   0x140af3400
0x14082cf04: nop
0x14082cf05: lea    rcx,[rbp+0x1d20]
0x14082cf0c: call   0x140069460
0x14082cf11: inc    edi
0x14082cf13: cmp    DWORD PTR [rsp+0x7c],0x1
0x14082cf18: jle    0x14082cfbc
0x14082cf1e: cmp    edi,0xa
0x14082cf21: jg     0x14082d05f
0x14082cf27: lea    r8d,[r14+0x3]
0x14082cf2b: mov    edx,edi
0x14082cf2d: mov    rcx,rbx
0x14082cf30: call   0x1400bc750
0x14082cf35: xor    r8d,r8d
0x14082cf38: xor    edx,edx
0x14082cf3a: mov    r9b,0x1
0x14082cf3d: mov    rcx,rbx
0x14082cf40: call   0x1400bc760
0x14082cf45: cmp    WORD PTR [r13+0x80],0x3
0x14082cf4e: jne    0x14082cf86
0x14082cf50: lea    rdx,[rip+0xeac639]        # 0x1416d9590 ; 'Ruined hillocks'
0x14082cf57: lea    rcx,[rbp+0x1d40]
0x14082cf5e: call   0x140069780
0x14082cf63: nop
0x14082cf64: xor    r9d,r9d
0x14082cf67: xor    r8d,r8d
0x14082cf6a: lea    rdx,[rbp+0x1d40]
0x14082cf71: mov    rcx,rbx
0x14082cf74: call   0x140af3400
0x14082cf79: nop
0x14082cf7a: lea    rcx,[rbp+0x1d40]
0x14082cf81: jmp    0x14082d058
0x14082cf86: lea    rdx,[rip+0xeac5d3]        # 0x1416d9560 ; 'Ruined houses'
0x14082cf8d: lea    rcx,[rbp+0x1d60]
0x14082cf94: call   0x140069780
0x14082cf99: nop
0x14082cf9a: xor    r9d,r9d
0x14082cf9d: xor    r8d,r8d
0x14082cfa0: lea    rdx,[rbp+0x1d60]
0x14082cfa7: mov    rcx,rbx
0x14082cfaa: call   0x140af3400
0x14082cfaf: nop
0x14082cfb0: lea    rcx,[rbp+0x1d60]
0x14082cfb7: jmp    0x14082d058
0x14082cfbc: jne    0x14082d05f
0x14082cfc2: cmp    edi,0xa
0x14082cfc5: jg     0x14082d05f
0x14082cfcb: lea    r8d,[r14+0x3]
0x14082cfcf: mov    edx,edi
0x14082cfd1: mov    rcx,rbx
0x14082cfd4: call   0x1400bc750
0x14082cfd9: xor    r8d,r8d
0x14082cfdc: xor    edx,edx
0x14082cfde: mov    r9b,0x1
0x14082cfe1: mov    rcx,rbx
0x14082cfe4: call   0x1400bc760
0x14082cfe9: cmp    WORD PTR [r13+0x80],0x3
0x14082cff2: jne    0x14082d027
0x14082cff4: lea    rdx,[rip+0xeac575]        # 0x1416d9570 ; 'Ruined hillock'
0x14082cffb: lea    rcx,[rbp+0x1d80]
0x14082d002: call   0x140069780
0x14082d007: nop
0x14082d008: xor    r9d,r9d
0x14082d00b: xor    r8d,r8d
0x14082d00e: lea    rdx,[rbp+0x1d80]
0x14082d015: mov    rcx,rbx
0x14082d018: call   0x140af3400
0x14082d01d: nop
0x14082d01e: lea    rcx,[rbp+0x1d80]
0x14082d025: jmp    0x14082d058
0x14082d027: lea    rdx,[rip+0xeac642]        # 0x1416d9670 ; 'Ruined house'
0x14082d02e: lea    rcx,[rbp+0x1da0]
0x14082d035: call   0x140069780
0x14082d03a: nop
0x14082d03b: xor    r9d,r9d
0x14082d03e: xor    r8d,r8d
0x14082d041: lea    rdx,[rbp+0x1da0]
0x14082d048: mov    rcx,rbx
0x14082d04b: call   0x140af3400
0x14082d050: nop
0x14082d051: lea    rcx,[rbp+0x1da0]
0x14082d058: call   0x140069460
0x14082d05d: inc    edi
0x14082d05f: cmp    edi,0x2
0x14082d062: jne    0x14082d0bb
0x14082d064: lea    r8d,[r14+0x3]
0x14082d068: mov    edx,edi
0x14082d06a: mov    rcx,rbx
0x14082d06d: call   0x1400bc750
0x14082d072: xor    r8d,r8d
0x14082d075: mov    edx,0x7
0x14082d07a: xor    r9d,r9d
0x14082d07d: mov    rcx,rbx
0x14082d080: call   0x1400bc760
0x14082d085: lea    rdx,[rip+0xeac5f4]        # 0x1416d9680 ; 'No significant structures'
0x14082d08c: lea    rcx,[rbp+0x1dc0]
0x14082d093: call   0x140069780
0x14082d098: nop
0x14082d099: xor    r9d,r9d
0x14082d09c: xor    r8d,r8d
0x14082d09f: lea    rdx,[rbp+0x1dc0]
0x14082d0a6: mov    rcx,rbx
0x14082d0a9: call   0x140af3400
0x14082d0ae: nop
0x14082d0af: lea    rcx,[rbp+0x1dc0]
0x14082d0b6: call   0x140069460
0x14082d0bb: lea    r12,[rip+0x1e3f7ae]        # 0x14266c870
0x14082d0c2: lea    rsi,[rip+0x1e35f27]        # 0x142662ff0
0x14082d0c9: mov    r15d,0x4
0x14082d0cf: test   BYTE PTR [rip+0x1e38f62],0x2        # 0x142666038
0x14082d0d6: je     0x14082fc63
0x14082d0dc: mov    r14d,DWORD PTR [rbp-0x74]
0x14082d0e0: lea    edi,[r14+0xa]
0x14082d0e4: mov    r13d,0x1
0x14082d0ea: mov    esi,r13d
0x14082d0ed: nop    DWORD PTR [rax]
0x14082d0f0: mov    ebx,r14d
0x14082d0f3: cmp    r14d,edi
0x14082d0f6: jg     0x14082f4ef
0x14082d0fc: nop    DWORD PTR [rax+0x0]
0x14082d100: mov    r8d,ebx
0x14082d103: mov    edx,esi
0x14082d105: mov    rcx,r12
0x14082d108: call   0x1400bc750
0x14082d10d: xor    r8d,r8d
0x14082d110: xor    edx,edx
0x14082d112: mov    rcx,r12
0x14082d115: call   0x1400bc7c0
0x14082d11a: cmp    esi,r13d
0x14082d11d: jne    0x14082f497
0x14082d123: cmp    ebx,r14d
0x14082d126: jne    0x14082f480
0x14082d12c: mov    edx,DWORD PTR [rip+0x1e41062]        # 0x14266e194
0x14082d132: jmp    0x14082f4dd
0x14082d137: cmp    BYTE PTR [rip+0x1e35f07],bl        # 0x142663044
0x14082d13d: je     0x14082d1c5
0x14082d143: mov    r15d,DWORD PTR [rip+0x1e35eba]        # 0x142663004
0x14082d14a: cmp    r15d,0xffffffff
0x14082d14e: je     0x14082d15c
0x14082d150: mov    r12d,DWORD PTR [rip+0x1e35eb1]        # 0x142663008
0x14082d157: jmp    0x14082d1e6
0x14082d15c: lea    rcx,[rip+0x1bda3e5]        # 0x142407548
0x14082d163: call   0x140070480
0x14082d168: test   rax,rax
0x14082d16b: je     0x14082d1c0
0x14082d16d: mov    rcx,QWORD PTR [rip+0x1bda41c]        # 0x142407590
0x14082d174: test   rcx,rcx
0x14082d177: je     0x14082d1c0
0x14082d179: lea    r9,[rbp+0x18]
0x14082d17d: lea    r8,[rbp+0x14]
0x14082d181: lea    rdx,[rbp+0x10]
0x14082d185: call   0x14137fd40
0x14082d18a: movsx  eax,WORD PTR [rbp+0x10]
0x14082d18e: cdq
0x14082d18f: and    edx,0xf
0x14082d192: add    eax,edx
0x14082d194: sar    eax,0x4
0x14082d197: mov    ecx,DWORD PTR [rip+0x1cdd3cb]        # 0x14250a568
0x14082d19d: lea    r15d,[rcx+rcx*2]
0x14082d1a1: add    r15d,eax
0x14082d1a4: movsx  eax,WORD PTR [rbp+0x14]
0x14082d1a8: cdq
0x14082d1a9: and    edx,0xf
0x14082d1ac: add    eax,edx
0x14082d1ae: sar    eax,0x4
0x14082d1b1: mov    ecx,DWORD PTR [rip+0x1cdd3b5]        # 0x14250a56c
0x14082d1b7: lea    r12d,[rcx+rcx*2]
0x14082d1bb: add    r12d,eax
0x14082d1be: jmp    0x14082d1e6
0x14082d1c0: mov    r15d,ebx
0x14082d1c3: jmp    0x14082d1e6
0x14082d1c5: mov    edx,DWORD PTR [rip+0x1e35f85]        # 0x142663150
0x14082d1cb: lea    rcx,[rip+0x1cdd086]        # 0x14250a258
0x14082d1d2: call   0x140073ba0
0x14082d1d7: test   rax,rax
0x14082d1da: je     0x14082d1e6
0x14082d1dc: movsx  r15d,WORD PTR [rax+0x4]
0x14082d1e1: movsx  r12d,WORD PTR [rax+0x6]
0x14082d1e6: mov    r13,rbx
0x14082d1e9: mov    rcx,QWORD PTR [rip+0x1ce0de8]        # 0x14250dfd8
0x14082d1f0: add    rcx,0x178
0x14082d1f7: lea    rdx,[rbp+0x80]
0x14082d1fe: call   0x140070870
0x14082d203: mov    rcx,QWORD PTR [rip+0x1ce0dce]        # 0x14250dfd8
0x14082d20a: add    rcx,0x178
0x14082d211: lea    rdx,[rbp+0x170]
0x14082d218: call   0x140070860
0x14082d21d: lea    r8,[rbp+0x170]
0x14082d224: lea    rdx,[rbp-0x37]
0x14082d228: lea    rcx,[rbp+0x80]
0x14082d22f: call   0x140070450
0x14082d234: xor    edx,edx
0x14082d236: movzx  ecx,BYTE PTR [rax]
0x14082d239: call   0x140066de0
0x14082d23e: test   al,al
0x14082d240: je     0x14082d0bb
0x14082d246: data16 nop WORD PTR [rax+rax*1+0x0]
0x14082d250: lea    rcx,[rbp+0x80]
0x14082d257: call   0x140070440
0x14082d25c: mov    rbx,QWORD PTR [rax]
0x14082d25f: lea    rcx,[rbx+0x2a0]
0x14082d266: xor    edx,edx
0x14082d268: call   0x1400735c0
0x14082d26d: test   al,al
0x14082d26f: jne    0x14082d2ba
0x14082d271: cmp    DWORD PTR [rbx+0x348],0x0
0x14082d278: jg     0x14082d2ba
0x14082d27a: mov    eax,DWORD PTR [rbx+0x1f8]
0x14082d280: lea    ecx,[rax+rax*2]
0x14082d283: cmp    ecx,r15d
0x14082d286: jg     0x14082d2ba
0x14082d288: mov    eax,DWORD PTR [rbx+0x200]
0x14082d28e: lea    ecx,[rax+0x1]
0x14082d291: lea    ecx,[rax+rcx*2]
0x14082d294: cmp    ecx,r15d
0x14082d297: jl     0x14082d2ba
0x14082d299: mov    eax,DWORD PTR [rbx+0x1fc]
0x14082d29f: lea    ecx,[rax+rax*2]
0x14082d2a2: cmp    ecx,r12d
0x14082d2a5: jg     0x14082d2ba
0x14082d2a7: mov    eax,DWORD PTR [rbx+0x204]
0x14082d2ad: lea    ecx,[rax+0x1]
0x14082d2b0: lea    ecx,[rax+rcx*2]
0x14082d2b3: cmp    ecx,r12d
0x14082d2b6: cmovge r13,rbx
0x14082d2ba: lea    rcx,[rbp+0x80]
0x14082d2c1: call   0x140070430
0x14082d2c6: lea    r8,[rbp+0x170]
0x14082d2cd: lea    rdx,[rbp-0x37]
0x14082d2d1: lea    rcx,[rbp+0x80]
0x14082d2d8: call   0x140070450
0x14082d2dd: xor    edx,edx
0x14082d2df: movzx  ecx,BYTE PTR [rax]
0x14082d2e2: call   0x140066de0
0x14082d2e7: test   al,al
0x14082d2e9: jne    0x14082d250
0x14082d2ef: test   r13,r13
0x14082d2f2: je     0x14082d0bb
0x14082d2f8: cmp    QWORD PTR [r13+0x308],0x0
0x14082d300: je     0x14082d0bb
0x14082d306: mov    eax,DWORD PTR [rip+0x1bc28f8]        # 0x1423efc04
0x14082d30c: lea    r14d,[rax-0x1e]
0x14082d310: lea    edi,[rax-0x1]
0x14082d313: mov    esi,0x1
0x14082d318: nop    DWORD PTR [rax+rax*1+0x0]
0x14082d320: mov    ebx,r14d
0x14082d323: cmp    r14d,edi
0x14082d326: jg     0x14082d3df
0x14082d32c: nop    DWORD PTR [rax+0x0]
0x14082d330: mov    r8d,ebx
0x14082d333: mov    edx,esi
0x14082d335: lea    rcx,[rip+0x1e3f534]        # 0x14266c870
0x14082d33c: call   0x1400bc750
0x14082d341: xor    r8d,r8d
0x14082d344: xor    edx,edx
0x14082d346: lea    rcx,[rip+0x1e3f523]        # 0x14266c870
0x14082d34d: call   0x1400bc7c0
0x14082d352: cmp    esi,0x1
0x14082d355: jne    0x14082d37f
0x14082d357: cmp    ebx,r14d
0x14082d35a: jne    0x14082d364
0x14082d35c: mov    edx,DWORD PTR [rip+0x1e40e32]        # 0x14266e194
0x14082d362: jmp    0x14082d3c9
0x14082d364: lea    rcx,[rip+0x1e3f505]        # 0x14266c870
0x14082d36b: cmp    ebx,edi
0x14082d36d: jne    0x14082d377
0x14082d36f: mov    edx,DWORD PTR [rip+0x1e40e37]        # 0x14266e1ac
0x14082d375: jmp    0x14082d3d0
0x14082d377: mov    edx,DWORD PTR [rip+0x1e40e23]        # 0x14266e1a0
0x14082d37d: jmp    0x14082d3d0
0x14082d37f: cmp    esi,0x14
0x14082d382: jne    0x14082d3ac
0x14082d384: cmp    ebx,r14d
0x14082d387: jne    0x14082d391
0x14082d389: mov    edx,DWORD PTR [rip+0x1e40e0d]        # 0x14266e19c
0x14082d38f: jmp    0x14082d3c9
0x14082d391: lea    rcx,[rip+0x1e3f4d8]        # 0x14266c870
0x14082d398: cmp    ebx,edi
0x14082d39a: jne    0x14082d3a4
0x14082d39c: mov    edx,DWORD PTR [rip+0x1e40e12]        # 0x14266e1b4
0x14082d3a2: jmp    0x14082d3d0
0x14082d3a4: mov    edx,DWORD PTR [rip+0x1e40dfe]        # 0x14266e1a8
0x14082d3aa: jmp    0x14082d3d0
0x14082d3ac: cmp    ebx,r14d
0x14082d3af: jne    0x14082d3b9
0x14082d3b1: mov    edx,DWORD PTR [rip+0x1e40de1]        # 0x14266e198
0x14082d3b7: jmp    0x14082d3c9
0x14082d3b9: cmp    ebx,edi
0x14082d3bb: mov    edx,DWORD PTR [rip+0x1e40def]        # 0x14266e1b0
0x14082d3c1: je     0x14082d3c9
0x14082d3c3: mov    edx,DWORD PTR [rip+0x1e40ddb]        # 0x14266e1a4
0x14082d3c9: lea    rcx,[rip+0x1e3f4a0]        # 0x14266c870
0x14082d3d0: call   0x140af4570
0x14082d3d5: inc    ebx
0x14082d3d7: cmp    ebx,edi
0x14082d3d9: jle    0x14082d330
0x14082d3df: inc    esi
0x14082d3e1: cmp    esi,0x14
0x14082d3e4: jle    0x14082d320
0x14082d3ea: mov    r9d,0x2
0x14082d3f0: mov    edi,r9d
0x14082d3f3: mov    eax,DWORD PTR [r13+0x1f8]
0x14082d3fa: lea    ecx,[rax+rax*2]
0x14082d3fd: sub    r15d,ecx
0x14082d400: shl    r15d,0x4
0x14082d404: mov    eax,DWORD PTR [r13+0x1fc]
0x14082d40b: lea    ecx,[rax+rax*2]
0x14082d40e: sub    r12d,ecx
0x14082d411: shl    r12d,0x4
0x14082d415: mov    eax,0x2aaaaaab
0x14082d41a: imul   r15d
0x14082d41d: mov    ecx,edx
0x14082d41f: sar    ecx,0x3
0x14082d422: mov    eax,ecx
0x14082d424: shr    eax,0x1f
0x14082d427: add    ecx,eax
0x14082d429: mov    eax,0x2aaaaaab
0x14082d42e: imul   r12d
0x14082d431: sar    edx,0x3
0x14082d434: mov    eax,edx
0x14082d436: shr    eax,0x1f
0x14082d439: add    edx,eax
0x14082d43b: movsxd rax,ecx
0x14082d43e: imul   rbx,rax,0x11
0x14082d442: movsxd rax,edx
0x14082d445: add    rbx,rax
0x14082d448: imul   rcx,rbx,0xa8
0x14082d44f: mov    rax,QWORD PTR [r13+0x308]
0x14082d456: test   DWORD PTR [rcx+rax*1+0xb518],0x100000
0x14082d461: je     0x14082d4c7
0x14082d463: lea    r8d,[r14+0x3]
0x14082d467: mov    edx,r9d
0x14082d46a: lea    rdi,[rip+0x1e3f3ff]        # 0x14266c870
0x14082d471: mov    rcx,rdi
0x14082d474: call   0x1400bc750
0x14082d479: xor    r8d,r8d
0x14082d47c: mov    edx,0x5
0x14082d481: mov    r9b,0x1
0x14082d484: mov    rcx,rdi
0x14082d487: call   0x1400bc760
0x14082d48c: lea    rdx,[rip+0xeabc35]        # 0x1416d90c8 ; 'Sewer Access'
0x14082d493: lea    rcx,[rbp+0x1de0]
0x14082d49a: call   0x140069780
0x14082d49f: nop
0x14082d4a0: xor    r9d,r9d
0x14082d4a3: xor    r8d,r8d
0x14082d4a6: lea    rdx,[rbp+0x1de0]
0x14082d4ad: mov    rcx,rdi
0x14082d4b0: call   0x140af3400
0x14082d4b5: nop
0x14082d4b6: lea    rcx,[rbp+0x1de0]
0x14082d4bd: call   0x140069460
0x14082d4c2: mov    edi,0x3
0x14082d4c7: xor    eax,eax
0x14082d4c9: mov    r15d,eax
0x14082d4cc: mov    esi,eax
0x14082d4ce: mov    DWORD PTR [rsp+0x74],eax
0x14082d4d2: mov    r12d,eax
0x14082d4d5: shl    rbx,0x6
0x14082d4d9: add    rbx,QWORD PTR [r13+0x308]
0x14082d4e0: lea    rdx,[rbp+0x88]
0x14082d4e7: lea    rcx,[rbx+0x17278]
0x14082d4ee: call   0x140070870
0x14082d4f3: lea    rdx,[rbp+0x178]
0x14082d4fa: lea    rcx,[rbx+0x17278]
0x14082d501: call   0x140070860
0x14082d506: lea    r8,[rbp+0x178]
0x14082d50d: lea    rdx,[rbp-0x38]
0x14082d511: lea    rcx,[rbp+0x88]
0x14082d518: call   0x140070450
0x14082d51d: xor    edx,edx
0x14082d51f: movzx  ecx,BYTE PTR [rax]
0x14082d522: call   0x140066de0
0x14082d527: test   al,al
0x14082d529: je     0x14082f414
0x14082d52f: nop
0x14082d530: cmp    edi,0x13
0x14082d533: jg     0x14082f027
0x14082d539: lea    rcx,[rbp+0x88]
0x14082d540: call   0x140070440
0x14082d545: mov    rbx,QWORD PTR [rax]
0x14082d548: movsxd rax,DWORD PTR [rbx+0x4]
0x14082d54c: cmp    eax,0x1f
0x14082d54f: ja     0x14082eff2
0x14082d555: lea    rdx,[rip+0xffffffffff7d2aa4]        # 0x140000000
0x14082d55c: mov    ecx,DWORD PTR [rdx+rax*4+0x831f8c]
0x14082d563: add    rcx,rdx
0x14082d566: jmp    rcx
0x14082d568: mov    rbx,QWORD PTR [rbx+0x58]
0x14082d56c: lea    r8d,[r14+0x3]
0x14082d570: mov    edx,edi
0x14082d572: lea    rcx,[rip+0x1e3f2f7]        # 0x14266c870
0x14082d579: call   0x1400bc750
0x14082d57e: xor    r8d,r8d
0x14082d581: mov    edx,0x2
0x14082d586: mov    r9b,0x1
0x14082d589: lea    rcx,[rip+0x1e3f2e0]        # 0x14266c870
0x14082d590: call   0x1400bc760
0x14082d595: movsxd rax,DWORD PTR [rbx+0x8]
0x14082d599: cmp    eax,0x8
0x14082d59c: ja     0x14082d7f7
0x14082d5a2: lea    rdx,[rip+0xffffffffff7d2a57]        # 0x140000000
0x14082d5a9: mov    ecx,DWORD PTR [rdx+rax*4+0x83200c]
0x14082d5b0: add    rcx,rdx
0x14082d5b3: jmp    rcx
0x14082d5b5: lea    rdx,[rip+0xeabad4]        # 0x1416d9090 ; 'Tree House'
0x14082d5bc: lea    rcx,[rbp+0x1e00]
0x14082d5c3: call   0x140069780
0x14082d5c8: nop
0x14082d5c9: xor    r9d,r9d
0x14082d5cc: xor    r8d,r8d
0x14082d5cf: lea    rdx,[rbp+0x1e00]
0x14082d5d6: lea    rcx,[rip+0x1e3f293]        # 0x14266c870
0x14082d5dd: call   0x140af3400
0x14082d5e2: nop
0x14082d5e3: lea    rcx,[rbp+0x1e00]
0x14082d5ea: call   0x140069460
0x14082d5ef: inc    edi
0x14082d5f1: jmp    0x14082eff2
0x14082d5f6: lea    rdx,[rip+0xeabaa3]        # 0x1416d90a0 ; 'The Home Tree'
0x14082d5fd: lea    rcx,[rbp+0x1e20]
0x14082d604: call   0x140069780
0x14082d609: nop
0x14082d60a: xor    r9d,r9d
0x14082d60d: xor    r8d,r8d
0x14082d610: lea    rdx,[rbp+0x1e20]
0x14082d617: lea    rcx,[rip+0x1e3f252]        # 0x14266c870
0x14082d61e: call   0x140af3400
0x14082d623: nop
0x14082d624: lea    rcx,[rbp+0x1e20]
0x14082d62b: call   0x140069460
0x14082d630: inc    edi
0x14082d632: jmp    0x14082eff2
0x14082d637: lea    rdx,[rip+0xeaba32]        # 0x1416d9070 ; 'Shaping Tree'
0x14082d63e: lea    rcx,[rbp+0x1e40]
0x14082d645: call   0x140069780
0x14082d64a: nop
0x14082d64b: xor    r9d,r9d
0x14082d64e: xor    r8d,r8d
0x14082d651: lea    rdx,[rbp+0x1e40]
0x14082d658: lea    rcx,[rip+0x1e3f211]        # 0x14266c870
0x14082d65f: call   0x140af3400
0x14082d664: nop
0x14082d665: lea    rcx,[rbp+0x1e40]
0x14082d66c: call   0x140069460
0x14082d671: inc    edi
0x14082d673: jmp    0x14082eff2
0x14082d678: lea    rdx,[rip+0xeaba01]        # 0x1416d9080 ; 'Market Tree'
0x14082d67f: lea    rcx,[rbp+0x1e60]
0x14082d686: call   0x140069780
0x14082d68b: nop
0x14082d68c: xor    r9d,r9d
0x14082d68f: xor    r8d,r8d
0x14082d692: lea    rdx,[rbp+0x1e60]
0x14082d699: lea    rcx,[rip+0x1e3f1d0]        # 0x14266c870
0x14082d6a0: call   0x140af3400
0x14082d6a5: nop
0x14082d6a6: lea    rcx,[rbp+0x1e60]
0x14082d6ad: call   0x140069460
0x14082d6b2: inc    edi
0x14082d6b4: jmp    0x14082eff2
0x14082d6b9: lea    rdx,[rip+0xeac2e0]        # 0x1416d99a0 ; 'Tavern Tree'
0x14082d6c0: lea    rcx,[rbp+0x1e80]
0x14082d6c7: call   0x140069780
0x14082d6cc: nop
0x14082d6cd: xor    r9d,r9d
0x14082d6d0: xor    r8d,r8d
0x14082d6d3: lea    rdx,[rbp+0x1e80]
0x14082d6da: lea    rcx,[rip+0x1e3f18f]        # 0x14266c870
0x14082d6e1: call   0x140af3400
0x14082d6e6: nop
0x14082d6e7: lea    rcx,[rbp+0x1e80]
0x14082d6ee: call   0x140069460
0x14082d6f3: inc    edi
0x14082d6f5: jmp    0x14082eff2
0x14082d6fa: lea    rdx,[rip+0xeac2af]        # 0x1416d99b0 ; 'Library Tree'
0x14082d701: lea    rcx,[rbp+0x1ea0]
0x14082d708: call   0x140069780
0x14082d70d: nop
0x14082d70e: xor    r9d,r9d
0x14082d711: xor    r8d,r8d
0x14082d714: lea    rdx,[rbp+0x1ea0]
0x14082d71b: lea    rcx,[rip+0x1e3f14e]        # 0x14266c870
0x14082d722: call   0x140af3400
0x14082d727: nop
0x14082d728: lea    rcx,[rbp+0x1ea0]
0x14082d72f: call   0x140069460
0x14082d734: inc    edi
0x14082d736: jmp    0x14082eff2
0x14082d73b: lea    rdx,[rip+0xeac23e]        # 0x1416d9980 ; 'Counting Tree'
0x14082d742: lea    rcx,[rbp+0x1ec0]
0x14082d749: call   0x140069780
0x14082d74e: nop
0x14082d74f: xor    r9d,r9d
0x14082d752: xor    r8d,r8d
0x14082d755: lea    rdx,[rbp+0x1ec0]
0x14082d75c: lea    rcx,[rip+0x1e3f10d]        # 0x14266c870
0x14082d763: call   0x140af3400
0x14082d768: nop
0x14082d769: lea    rcx,[rbp+0x1ec0]
0x14082d770: call   0x140069460
0x14082d775: inc    edi
0x14082d777: jmp    0x14082eff2
0x14082d77c: lea    rdx,[rip+0xeac20d]        # 0x1416d9990 ; 'Guild Tree'
0x14082d783: lea    rcx,[rbp+0x1ee0]
0x14082d78a: call   0x140069780
0x14082d78f: nop
0x14082d790: xor    r9d,r9d
0x14082d793: xor    r8d,r8d
0x14082d796: lea    rdx,[rbp+0x1ee0]
0x14082d79d: lea    rcx,[rip+0x1e3f0cc]        # 0x14266c870
0x14082d7a4: call   0x140af3400
0x14082d7a9: nop
0x14082d7aa: lea    rcx,[rbp+0x1ee0]
0x14082d7b1: call   0x140069460
0x14082d7b6: inc    edi
0x14082d7b8: jmp    0x14082eff2
0x14082d7bd: lea    rdx,[rip+0xeac19c]        # 0x1416d9960 ; 'Tower Tree'
0x14082d7c4: lea    rcx,[rbp+0x1f00]
0x14082d7cb: call   0x140069780
0x14082d7d0: nop
0x14082d7d1: xor    r9d,r9d
0x14082d7d4: xor    r8d,r8d
0x14082d7d7: lea    rdx,[rbp+0x1f00]
0x14082d7de: lea    rcx,[rip+0x1e3f08b]        # 0x14266c870
0x14082d7e5: call   0x140af3400
0x14082d7ea: nop
0x14082d7eb: lea    rcx,[rbp+0x1f00]
0x14082d7f2: call   0x140069460
0x14082d7f7: inc    edi
0x14082d7f9: jmp    0x14082eff2
0x14082d7fe: mov    rsi,QWORD PTR [rbx+0x58]
0x14082d802: mov    ecx,DWORD PTR [rsi+0x8]
0x14082d805: test   ecx,ecx
0x14082d807: je     0x14082d92b
0x14082d80d: sub    ecx,0x1
0x14082d810: je     0x14082d820
0x14082d812: sub    ecx,0x1
0x14082d815: je     0x14082d820
0x14082d817: cmp    ecx,0x1
0x14082d81a: jne    0x14082efee
0x14082d820: lea    r8d,[r14+0x3]
0x14082d824: mov    edx,edi
0x14082d826: lea    rbx,[rip+0x1e3f043]        # 0x14266c870
0x14082d82d: mov    rcx,rbx
0x14082d830: call   0x1400bc750
0x14082d835: mov    ecx,DWORD PTR [rsi+0x8]
0x14082d838: sub    ecx,0x1
0x14082d83b: je     0x14082d8e2
0x14082d841: sub    ecx,0x1
0x14082d844: je     0x14082d899
0x14082d846: cmp    ecx,0x1
0x14082d849: jne    0x14082efec
0x14082d84f: xor    r8d,r8d
0x14082d852: mov    edx,0x6
0x14082d857: movzx  r9d,cl
0x14082d85b: mov    rcx,rbx
0x14082d85e: call   0x1400bc760
0x14082d863: lea    rdx,[rip+0xeac0e6]        # 0x1416d9950 ; 'Drinking Mound'
0x14082d86a: lea    rcx,[rbp+0x1f20]
0x14082d871: call   0x140069780
0x14082d876: nop
0x14082d877: xor    r9d,r9d
0x14082d87a: xor    r8d,r8d
0x14082d87d: lea    rdx,[rbp+0x1f20]
0x14082d884: mov    rcx,rbx
0x14082d887: call   0x140af3400
0x14082d88c: nop
0x14082d88d: lea    rcx,[rbp+0x1f20]
0x14082d894: jmp    0x14082efe7
0x14082d899: xor    r8d,r8d
0x14082d89c: mov    edx,0x5
0x14082d8a1: mov    r9b,0x1
0x14082d8a4: mov    rcx,rbx
0x14082d8a7: call   0x1400bc760
0x14082d8ac: lea    rdx,[rip+0xeac08d]        # 0x1416d9940 ; 'Castle Mound'
0x14082d8b3: lea    rcx,[rbp+0x1f40]
0x14082d8ba: call   0x140069780
0x14082d8bf: nop
0x14082d8c0: xor    r9d,r9d
0x14082d8c3: xor    r8d,r8d
0x14082d8c6: lea    rdx,[rbp+0x1f40]
0x14082d8cd: mov    rcx,rbx
0x14082d8d0: call   0x140af3400
0x14082d8d5: nop
0x14082d8d6: lea    rcx,[rbp+0x1f40]
0x14082d8dd: jmp    0x14082efe7
0x14082d8e2: xor    r8d,r8d
0x14082d8e5: mov    edx,0x7
0x14082d8ea: mov    r9b,0x1
0x14082d8ed: mov    rcx,rbx
0x14082d8f0: call   0x1400bc760
0x14082d8f5: lea    rdx,[rip+0xeac074]        # 0x1416d9970 ; 'Civic Mound'
0x14082d8fc: lea    rcx,[rbp+0x1f60]
0x14082d903: call   0x140069780
0x14082d908: nop
0x14082d909: xor    r9d,r9d
0x14082d90c: xor    r8d,r8d
0x14082d90f: lea    rdx,[rbp+0x1f60]
0x14082d916: mov    rcx,rbx
0x14082d919: call   0x140af3400
0x14082d91e: nop
0x14082d91f: lea    rcx,[rbp+0x1f60]
0x14082d926: jmp    0x14082efe7
0x14082d92b: mov    eax,DWORD PTR [rbx+0x78]
0x14082d92e: mov    esi,DWORD PTR [rsp+0x74]
0x14082d932: test   al,0xa
0x14082d934: je     0x14082d941
0x14082d936: inc    esi
0x14082d938: mov    DWORD PTR [rsp+0x74],esi
0x14082d93c: jmp    0x14082eff2
0x14082d941: test   al,0x1
0x14082d943: je     0x14082d94d
0x14082d945: inc    r12d
0x14082d948: jmp    0x14082eff2
0x14082d94d: inc    r15d
0x14082d950: jmp    0x14082eff2
0x14082d955: mov    eax,DWORD PTR [rbx+0x78]
0x14082d958: test   al,0xa
0x14082d95a: je     0x14082d941
0x14082d95c: inc    esi
0x14082d95e: mov    DWORD PTR [rsp+0x74],esi
0x14082d962: jmp    0x14082eff2
0x14082d967: lea    r8d,[r14+0x3]
0x14082d96b: mov    edx,edi
0x14082d96d: lea    rcx,[rip+0x1e3eefc]        # 0x14266c870
0x14082d974: call   0x1400bc750
0x14082d979: xor    r8d,r8d
0x14082d97c: mov    edx,0x5
0x14082d981: mov    r9b,0x1
0x14082d984: lea    rcx,[rip+0x1e3eee5]        # 0x14266c870
0x14082d98b: call   0x1400bc760
0x14082d990: mov    ecx,DWORD PTR [rbx+0x4c]
0x14082d993: cmp    ecx,0xffffffff
0x14082d996: je     0x14082da93
0x14082d99c: lea    rdx,[r13+0x2b0]
0x14082d9a3: call   0x140071530
0x14082d9a8: test   rax,rax
0x14082d9ab: je     0x14082da52
0x14082d9b1: mov    rdx,QWORD PTR [rax]
0x14082d9b4: mov    rcx,rax
0x14082d9b7: call   QWORD PTR [rdx+0x10]
0x14082d9ba: mov    rbx,rax
0x14082d9bd: test   rax,rax
0x14082d9c0: je     0x14082da11
0x14082d9c2: lea    rcx,[rbp+0x760]
0x14082d9c9: call   0x140070cc0
0x14082d9ce: nop
0x14082d9cf: xor    r9d,r9d
0x14082d9d2: mov    r8b,0x1
0x14082d9d5: lea    rdx,[rbp+0x760]
0x14082d9dc: mov    rcx,rbx
0x14082d9df: call   0x140aae180
0x14082d9e4: xor    r9d,r9d
0x14082d9e7: xor    r8d,r8d
0x14082d9ea: lea    rdx,[rbp+0x760]
0x14082d9f1: lea    rcx,[rip+0x1e3ee78]        # 0x14266c870
0x14082d9f8: call   0x140af3400
0x14082d9fd: nop
0x14082d9fe: lea    rcx,[rbp+0x760]
0x14082da05: call   0x140069460
0x14082da0a: inc    edi
0x14082da0c: jmp    0x14082eff2
0x14082da11: lea    rdx,[rip+0xe50aa0]        # 0x14167e4b8 ; 'Mead Hall'
0x14082da18: lea    rcx,[rbp+0x1f80]
0x14082da1f: call   0x140069780
0x14082da24: nop
0x14082da25: xor    r9d,r9d
0x14082da28: xor    r8d,r8d
0x14082da2b: lea    rdx,[rbp+0x1f80]
0x14082da32: lea    rcx,[rip+0x1e3ee37]        # 0x14266c870
0x14082da39: call   0x140af3400
0x14082da3e: nop
0x14082da3f: lea    rcx,[rbp+0x1f80]
0x14082da46: call   0x140069460
0x14082da4b: inc    edi
0x14082da4d: jmp    0x14082eff2
0x14082da52: lea    rdx,[rip+0xe50a5f]        # 0x14167e4b8 ; 'Mead Hall'
0x14082da59: lea    rcx,[rbp+0x1fa0]
0x14082da60: call   0x140069780
0x14082da65: nop
0x14082da66: xor    r9d,r9d
0x14082da69: xor    r8d,r8d
0x14082da6c: lea    rdx,[rbp+0x1fa0]
0x14082da73: lea    rcx,[rip+0x1e3edf6]        # 0x14266c870
0x14082da7a: call   0x140af3400
0x14082da7f: nop
0x14082da80: lea    rcx,[rbp+0x1fa0]
0x14082da87: call   0x140069460
0x14082da8c: inc    edi
0x14082da8e: jmp    0x14082eff2
0x14082da93: lea    rdx,[rip+0xe50a1e]        # 0x14167e4b8 ; 'Mead Hall'
0x14082da9a: lea    rcx,[rbp+0x1fc0]
0x14082daa1: call   0x140069780
0x14082daa6: nop
0x14082daa7: xor    r9d,r9d
0x14082daaa: xor    r8d,r8d
0x14082daad: lea    rdx,[rbp+0x1fc0]
0x14082dab4: lea    rcx,[rip+0x1e3edb5]        # 0x14266c870
0x14082dabb: call   0x140af3400
0x14082dac0: nop
0x14082dac1: lea    rcx,[rbp+0x1fc0]
0x14082dac8: call   0x140069460
0x14082dacd: inc    edi
0x14082dacf: jmp    0x14082eff2
0x14082dad4: lea    r8d,[r14+0x3]
0x14082dad8: mov    edx,edi
0x14082dada: lea    rcx,[rip+0x1e3ed8f]        # 0x14266c870
0x14082dae1: call   0x1400bc750
0x14082dae6: xor    r8d,r8d
0x14082dae9: mov    edx,0x3
0x14082daee: mov    r9b,0x1
0x14082daf1: lea    rcx,[rip+0x1e3ed78]        # 0x14266c870
0x14082daf8: call   0x1400bc760
0x14082dafd: mov    ecx,DWORD PTR [rbx+0x4c]
0x14082db00: cmp    ecx,0xffffffff
0x14082db03: je     0x14082dc00
0x14082db09: lea    rdx,[r13+0x2b0]
0x14082db10: call   0x140071530
0x14082db15: test   rax,rax
0x14082db18: je     0x14082dbbf
0x14082db1e: mov    rdx,QWORD PTR [rax]
0x14082db21: mov    rcx,rax
0x14082db24: call   QWORD PTR [rdx+0x10]
0x14082db27: mov    rbx,rax
0x14082db2a: test   rax,rax
0x14082db2d: je     0x14082db7e
0x14082db2f: lea    rcx,[rbp+0x780]
0x14082db36: call   0x140070cc0
0x14082db3b: nop
0x14082db3c: xor    r9d,r9d
0x14082db3f: mov    r8b,0x1
0x14082db42: lea    rdx,[rbp+0x780]
0x14082db49: mov    rcx,rbx
0x14082db4c: call   0x140aae180
0x14082db51: xor    r9d,r9d
0x14082db54: xor    r8d,r8d
0x14082db57: lea    rdx,[rbp+0x780]
0x14082db5e: lea    rcx,[rip+0x1e3ed0b]        # 0x14266c870
0x14082db65: call   0x140af3400
0x14082db6a: nop
0x14082db6b: lea    rcx,[rbp+0x780]
0x14082db72: call   0x140069460
0x14082db77: inc    edi
0x14082db79: jmp    0x14082eff2
0x14082db7e: lea    rdx,[rip+0xe19ee3]        # 0x141647a68 ; 'Temple'
0x14082db85: lea    rcx,[rbp+0x1fe0]
0x14082db8c: call   0x140069780
0x14082db91: nop
0x14082db92: xor    r9d,r9d
0x14082db95: xor    r8d,r8d
0x14082db98: lea    rdx,[rbp+0x1fe0]
0x14082db9f: lea    rcx,[rip+0x1e3ecca]        # 0x14266c870
0x14082dba6: call   0x140af3400
0x14082dbab: nop
0x14082dbac: lea    rcx,[rbp+0x1fe0]
0x14082dbb3: call   0x140069460
0x14082dbb8: inc    edi
0x14082dbba: jmp    0x14082eff2
0x14082dbbf: lea    rdx,[rip+0xe19ea2]        # 0x141647a68 ; 'Temple'
0x14082dbc6: lea    rcx,[rbp+0x2000]
0x14082dbcd: call   0x140069780
0x14082dbd2: nop
0x14082dbd3: xor    r9d,r9d
0x14082dbd6: xor    r8d,r8d
0x14082dbd9: lea    rdx,[rbp+0x2000]
0x14082dbe0: lea    rcx,[rip+0x1e3ec89]        # 0x14266c870
0x14082dbe7: call   0x140af3400
0x14082dbec: nop
0x14082dbed: lea    rcx,[rbp+0x2000]
0x14082dbf4: call   0x140069460
0x14082dbf9: inc    edi
0x14082dbfb: jmp    0x14082eff2
0x14082dc00: lea    rdx,[rip+0xe19e61]        # 0x141647a68 ; 'Temple'
0x14082dc07: lea    rcx,[rbp+0x2020]
0x14082dc0e: call   0x140069780
0x14082dc13: nop
0x14082dc14: xor    r9d,r9d
0x14082dc17: xor    r8d,r8d
0x14082dc1a: lea    rdx,[rbp+0x2020]
0x14082dc21: lea    rcx,[rip+0x1e3ec48]        # 0x14266c870
0x14082dc28: call   0x140af3400
0x14082dc2d: nop
0x14082dc2e: lea    rcx,[rbp+0x2020]
0x14082dc35: call   0x140069460
0x14082dc3a: inc    edi
0x14082dc3c: jmp    0x14082eff2
0x14082dc41: lea    r8d,[r14+0x3]
0x14082dc45: mov    edx,edi
0x14082dc47: lea    rcx,[rip+0x1e3ec22]        # 0x14266c870
0x14082dc4e: call   0x1400bc750
0x14082dc53: mov    edx,0x6
0x14082dc58: mov    r8d,edx
0x14082dc5b: mov    r9b,0x1
0x14082dc5e: lea    rcx,[rip+0x1e3ec0b]        # 0x14266c870
0x14082dc65: call   0x1400bc760
0x14082dc6a: mov    ecx,DWORD PTR [rbx+0x4c]
0x14082dc6d: cmp    ecx,0xffffffff
0x14082dc70: je     0x14082dd6d
0x14082dc76: lea    rdx,[r13+0x2b0]
0x14082dc7d: call   0x140071530
0x14082dc82: test   rax,rax
0x14082dc85: je     0x14082dd2c
0x14082dc8b: mov    rdx,QWORD PTR [rax]
0x14082dc8e: mov    rcx,rax
0x14082dc91: call   QWORD PTR [rdx+0x10]
0x14082dc94: mov    rbx,rax
0x14082dc97: test   rax,rax
0x14082dc9a: je     0x14082dceb
0x14082dc9c: lea    rcx,[rbp+0x7a0]
0x14082dca3: call   0x140070cc0
0x14082dca8: nop
0x14082dca9: xor    r9d,r9d
0x14082dcac: mov    r8b,0x1
0x14082dcaf: lea    rdx,[rbp+0x7a0]
0x14082dcb6: mov    rcx,rbx
0x14082dcb9: call   0x140aae180
0x14082dcbe: xor    r9d,r9d
0x14082dcc1: xor    r8d,r8d
0x14082dcc4: lea    rdx,[rbp+0x7a0]
0x14082dccb: lea    rcx,[rip+0x1e3eb9e]        # 0x14266c870
0x14082dcd2: call   0x140af3400
0x14082dcd7: nop
0x14082dcd8: lea    rcx,[rbp+0x7a0]
0x14082dcdf: call   0x140069460
0x14082dce4: inc    edi
0x14082dce6: jmp    0x14082eff2
0x14082dceb: lea    rdx,[rip+0xeabd2e]        # 0x1416d9a20 ; 'Counting House'
0x14082dcf2: lea    rcx,[rbp+0x2040]
0x14082dcf9: call   0x140069780
0x14082dcfe: nop
0x14082dcff: xor    r9d,r9d
0x14082dd02: xor    r8d,r8d
0x14082dd05: lea    rdx,[rbp+0x2040]
0x14082dd0c: lea    rcx,[rip+0x1e3eb5d]        # 0x14266c870
0x14082dd13: call   0x140af3400
0x14082dd18: nop
0x14082dd19: lea    rcx,[rbp+0x2040]
0x14082dd20: call   0x140069460
0x14082dd25: inc    edi
0x14082dd27: jmp    0x14082eff2
0x14082dd2c: lea    rdx,[rip+0xeabced]        # 0x1416d9a20 ; 'Counting House'
0x14082dd33: lea    rcx,[rbp+0x2060]
0x14082dd3a: call   0x140069780
0x14082dd3f: nop
0x14082dd40: xor    r9d,r9d
0x14082dd43: xor    r8d,r8d
0x14082dd46: lea    rdx,[rbp+0x2060]
0x14082dd4d: lea    rcx,[rip+0x1e3eb1c]        # 0x14266c870
0x14082dd54: call   0x140af3400
0x14082dd59: nop
0x14082dd5a: lea    rcx,[rbp+0x2060]
0x14082dd61: call   0x140069460
0x14082dd66: inc    edi
0x14082dd68: jmp    0x14082eff2
0x14082dd6d: lea    rdx,[rip+0xeabcac]        # 0x1416d9a20 ; 'Counting House'
0x14082dd74: lea    rcx,[rbp+0x2080]
0x14082dd7b: call   0x140069780
0x14082dd80: nop
0x14082dd81: xor    r9d,r9d
0x14082dd84: xor    r8d,r8d
0x14082dd87: lea    rdx,[rbp+0x2080]
0x14082dd8e: lea    rcx,[rip+0x1e3eadb]        # 0x14266c870
0x14082dd95: call   0x140af3400
0x14082dd9a: nop
0x14082dd9b: lea    rcx,[rbp+0x2080]
0x14082dda2: call   0x140069460
0x14082dda7: inc    edi
0x14082dda9: jmp    0x14082eff2
0x14082ddae: lea    r8d,[r14+0x3]
0x14082ddb2: mov    edx,edi
0x14082ddb4: lea    rcx,[rip+0x1e3eab5]        # 0x14266c870
0x14082ddbb: call   0x1400bc750
0x14082ddc0: mov    edx,0x6
0x14082ddc5: mov    r8d,edx
0x14082ddc8: mov    r9b,0x1
0x14082ddcb: lea    rcx,[rip+0x1e3ea9e]        # 0x14266c870
0x14082ddd2: call   0x1400bc760
0x14082ddd7: mov    ecx,DWORD PTR [rbx+0x4c]
0x14082ddda: cmp    ecx,0xffffffff
0x14082dddd: je     0x14082deda
0x14082dde3: lea    rdx,[r13+0x2b0]
0x14082ddea: call   0x140071530
0x14082ddef: test   rax,rax
0x14082ddf2: je     0x14082de99
0x14082ddf8: mov    rdx,QWORD PTR [rax]
0x14082ddfb: mov    rcx,rax
0x14082ddfe: call   QWORD PTR [rdx+0x10]
0x14082de01: mov    rbx,rax
0x14082de04: test   rax,rax
0x14082de07: je     0x14082de58
0x14082de09: lea    rcx,[rbp+0x7c0]
0x14082de10: call   0x140070cc0
0x14082de15: nop
0x14082de16: xor    r9d,r9d
0x14082de19: mov    r8b,0x1
0x14082de1c: lea    rdx,[rbp+0x7c0]
0x14082de23: mov    rcx,rbx
0x14082de26: call   0x140aae180
0x14082de2b: xor    r9d,r9d
0x14082de2e: xor    r8d,r8d
0x14082de31: lea    rdx,[rbp+0x7c0]
0x14082de38: lea    rcx,[rip+0x1e3ea31]        # 0x14266c870
0x14082de3f: call   0x140af3400
0x14082de44: nop
0x14082de45: lea    rcx,[rbp+0x7c0]
0x14082de4c: call   0x140069460
0x14082de51: inc    edi
0x14082de53: jmp    0x14082eff2
0x14082de58: lea    rdx,[rip+0xeabbd1]        # 0x1416d9a30 ; 'Guildhall'
0x14082de5f: lea    rcx,[rbp+0x20a0]
0x14082de66: call   0x140069780
0x14082de6b: nop
0x14082de6c: xor    r9d,r9d
0x14082de6f: xor    r8d,r8d
0x14082de72: lea    rdx,[rbp+0x20a0]
0x14082de79: lea    rcx,[rip+0x1e3e9f0]        # 0x14266c870
0x14082de80: call   0x140af3400
0x14082de85: nop
0x14082de86: lea    rcx,[rbp+0x20a0]
0x14082de8d: call   0x140069460
0x14082de92: inc    edi
0x14082de94: jmp    0x14082eff2
0x14082de99: lea    rdx,[rip+0xeabb90]        # 0x1416d9a30 ; 'Guildhall'
0x14082dea0: lea    rcx,[rbp+0x20c0]
0x14082dea7: call   0x140069780
0x14082deac: nop
0x14082dead: xor    r9d,r9d
0x14082deb0: xor    r8d,r8d
0x14082deb3: lea    rdx,[rbp+0x20c0]
0x14082deba: lea    rcx,[rip+0x1e3e9af]        # 0x14266c870
0x14082dec1: call   0x140af3400
0x14082dec6: nop
0x14082dec7: lea    rcx,[rbp+0x20c0]
0x14082dece: call   0x140069460
0x14082ded3: inc    edi
0x14082ded5: jmp    0x14082eff2
0x14082deda: lea    rdx,[rip+0xeabb4f]        # 0x1416d9a30 ; 'Guildhall'
0x14082dee1: lea    rcx,[rbp+0x20e0]
0x14082dee8: call   0x140069780
0x14082deed: nop
0x14082deee: xor    r9d,r9d
0x14082def1: xor    r8d,r8d
0x14082def4: lea    rdx,[rbp+0x20e0]
0x14082defb: lea    rcx,[rip+0x1e3e96e]        # 0x14266c870
0x14082df02: call   0x140af3400
0x14082df07: nop
0x14082df08: lea    rcx,[rbp+0x20e0]
0x14082df0f: call   0x140069460
0x14082df14: inc    edi
0x14082df16: jmp    0x14082eff2
0x14082df1b: lea    r8d,[r14+0x3]
0x14082df1f: mov    edx,edi
0x14082df21: lea    rcx,[rip+0x1e3e948]        # 0x14266c870
0x14082df28: call   0x1400bc750
0x14082df2d: mov    edx,0x6
0x14082df32: mov    r8d,edx
0x14082df35: mov    r9b,0x1
0x14082df38: lea    rcx,[rip+0x1e3e931]        # 0x14266c870
0x14082df3f: call   0x1400bc760
0x14082df44: mov    ecx,DWORD PTR [rbx+0x4c]
0x14082df47: cmp    ecx,0xffffffff
0x14082df4a: je     0x14082e047
0x14082df50: lea    rdx,[r13+0x2b0]
0x14082df57: call   0x140071530
0x14082df5c: test   rax,rax
0x14082df5f: je     0x14082e006
0x14082df65: mov    rdx,QWORD PTR [rax]
0x14082df68: mov    rcx,rax
0x14082df6b: call   QWORD PTR [rdx+0x10]
0x14082df6e: mov    rbx,rax
0x14082df71: test   rax,rax
0x14082df74: je     0x14082dfc5
0x14082df76: lea    rcx,[rbp+0x7e0]
0x14082df7d: call   0x140070cc0
0x14082df82: nop
0x14082df83: xor    r9d,r9d
0x14082df86: mov    r8b,0x1
0x14082df89: lea    rdx,[rbp+0x7e0]
0x14082df90: mov    rcx,rbx
0x14082df93: call   0x140aae180
0x14082df98: xor    r9d,r9d
0x14082df9b: xor    r8d,r8d
0x14082df9e: lea    rdx,[rbp+0x7e0]
0x14082dfa5: lea    rcx,[rip+0x1e3e8c4]        # 0x14266c870
0x14082dfac: call   0x140af3400
0x14082dfb1: nop
0x14082dfb2: lea    rcx,[rbp+0x7e0]
0x14082dfb9: call   0x140069460
0x14082dfbe: inc    edi
0x14082dfc0: jmp    0x14082eff2
0x14082dfc5: lea    rdx,[rip+0xeaba38]        # 0x1416d9a04 ; 'Tower'
0x14082dfcc: lea    rcx,[rbp+0x2100]
0x14082dfd3: call   0x140069780
0x14082dfd8: nop
0x14082dfd9: xor    r9d,r9d
0x14082dfdc: xor    r8d,r8d
0x14082dfdf: lea    rdx,[rbp+0x2100]
0x14082dfe6: lea    rcx,[rip+0x1e3e883]        # 0x14266c870
0x14082dfed: call   0x140af3400
0x14082dff2: nop
0x14082dff3: lea    rcx,[rbp+0x2100]
0x14082dffa: call   0x140069460
0x14082dfff: inc    edi
0x14082e001: jmp    0x14082eff2
0x14082e006: lea    rdx,[rip+0xeab9f7]        # 0x1416d9a04 ; 'Tower'
0x14082e00d: lea    rcx,[rbp+0x2120]
0x14082e014: call   0x140069780
0x14082e019: nop
0x14082e01a: xor    r9d,r9d
0x14082e01d: xor    r8d,r8d
0x14082e020: lea    rdx,[rbp+0x2120]
0x14082e027: lea    rcx,[rip+0x1e3e842]        # 0x14266c870
0x14082e02e: call   0x140af3400
0x14082e033: nop
0x14082e034: lea    rcx,[rbp+0x2120]
0x14082e03b: call   0x140069460
0x14082e040: inc    edi
0x14082e042: jmp    0x14082eff2
0x14082e047: lea    rdx,[rip+0xeab9b6]        # 0x1416d9a04 ; 'Tower'
0x14082e04e: lea    rcx,[rbp+0x2140]
0x14082e055: call   0x140069780
0x14082e05a: nop
0x14082e05b: xor    r9d,r9d
0x14082e05e: xor    r8d,r8d
0x14082e061: lea    rdx,[rbp+0x2140]
0x14082e068: lea    rcx,[rip+0x1e3e801]        # 0x14266c870
0x14082e06f: call   0x140af3400
0x14082e074: nop
0x14082e075: lea    rcx,[rbp+0x2140]
0x14082e07c: call   0x140069460
0x14082e081: inc    edi
0x14082e083: jmp    0x14082eff2
0x14082e088: lea    r8d,[r14+0x3]
0x14082e08c: mov    edx,edi
0x14082e08e: lea    rcx,[rip+0x1e3e7db]        # 0x14266c870
0x14082e095: call   0x1400bc750
0x14082e09a: mov    edx,0x7
0x14082e09f: mov    r8d,0x6
0x14082e0a5: mov    r9b,0x1
0x14082e0a8: lea    rcx,[rip+0x1e3e7c1]        # 0x14266c870
0x14082e0af: call   0x1400bc760
0x14082e0b4: mov    ecx,DWORD PTR [rbx+0x4c]
0x14082e0b7: cmp    ecx,0xffffffff
0x14082e0ba: je     0x14082e1b7
0x14082e0c0: lea    rdx,[r13+0x2b0]
0x14082e0c7: call   0x140071530
0x14082e0cc: test   rax,rax
0x14082e0cf: je     0x14082e176
0x14082e0d5: mov    rdx,QWORD PTR [rax]
0x14082e0d8: mov    rcx,rax
0x14082e0db: call   QWORD PTR [rdx+0x10]
0x14082e0de: mov    rbx,rax
0x14082e0e1: test   rax,rax
0x14082e0e4: je     0x14082e135
0x14082e0e6: lea    rcx,[rbp+0x800]
0x14082e0ed: call   0x140070cc0
0x14082e0f2: nop
0x14082e0f3: xor    r9d,r9d
0x14082e0f6: mov    r8b,0x1
0x14082e0f9: lea    rdx,[rbp+0x800]
0x14082e100: mov    rcx,rbx
0x14082e103: call   0x140aae180
0x14082e108: xor    r9d,r9d
0x14082e10b: xor    r8d,r8d
0x14082e10e: lea    rdx,[rbp+0x800]
0x14082e115: lea    rcx,[rip+0x1e3e754]        # 0x14266c870
0x14082e11c: call   0x140af3400
0x14082e121: nop
0x14082e122: lea    rcx,[rbp+0x800]
0x14082e129: call   0x140069460
0x14082e12e: inc    edi
0x14082e130: jmp    0x14082eff2
0x14082e135: lea    rdx,[rip+0xe1991c]        # 0x141647a58 ; 'Library'
0x14082e13c: lea    rcx,[rbp+0x2160]
0x14082e143: call   0x140069780
0x14082e148: nop
0x14082e149: xor    r9d,r9d
0x14082e14c: xor    r8d,r8d
0x14082e14f: lea    rdx,[rbp+0x2160]
0x14082e156: lea    rcx,[rip+0x1e3e713]        # 0x14266c870
0x14082e15d: call   0x140af3400
0x14082e162: nop
0x14082e163: lea    rcx,[rbp+0x2160]
0x14082e16a: call   0x140069460
0x14082e16f: inc    edi
0x14082e171: jmp    0x14082eff2
0x14082e176: lea    rdx,[rip+0xe198db]        # 0x141647a58 ; 'Library'
0x14082e17d: lea    rcx,[rbp+0x2180]
0x14082e184: call   0x140069780
0x14082e189: nop
0x14082e18a: xor    r9d,r9d
0x14082e18d: xor    r8d,r8d
0x14082e190: lea    rdx,[rbp+0x2180]
0x14082e197: lea    rcx,[rip+0x1e3e6d2]        # 0x14266c870
0x14082e19e: call   0x140af3400
0x14082e1a3: nop
0x14082e1a4: lea    rcx,[rbp+0x2180]
0x14082e1ab: call   0x140069460
0x14082e1b0: inc    edi
0x14082e1b2: jmp    0x14082eff2
0x14082e1b7: lea    rdx,[rip+0xe1989a]        # 0x141647a58 ; 'Library'
0x14082e1be: lea    rcx,[rbp+0x21a0]
0x14082e1c5: call   0x140069780
0x14082e1ca: nop
0x14082e1cb: xor    r9d,r9d
0x14082e1ce: xor    r8d,r8d
0x14082e1d1: lea    rdx,[rbp+0x21a0]
0x14082e1d8: lea    rcx,[rip+0x1e3e691]        # 0x14266c870
0x14082e1df: call   0x140af3400
0x14082e1e4: nop
0x14082e1e5: lea    rcx,[rbp+0x21a0]
0x14082e1ec: call   0x140069460
0x14082e1f1: inc    edi
0x14082e1f3: jmp    0x14082eff2
0x14082e1f8: lea    r8d,[r14+0x3]
0x14082e1fc: mov    edx,edi
0x14082e1fe: lea    rcx,[rip+0x1e3e66b]        # 0x14266c870
0x14082e205: call   0x1400bc750
0x14082e20a: mov    edx,0x6
0x14082e20f: mov    r8d,edx
0x14082e212: mov    r9b,0x1
0x14082e215: lea    rcx,[rip+0x1e3e654]        # 0x14266c870
0x14082e21c: call   0x1400bc760
0x14082e221: mov    ecx,DWORD PTR [rbx+0x4c]
0x14082e224: cmp    ecx,0xffffffff
0x14082e227: je     0x14082e324
0x14082e22d: lea    rdx,[r13+0x2b0]
0x14082e234: call   0x140071530
0x14082e239: test   rax,rax
0x14082e23c: je     0x14082e2e3
0x14082e242: mov    rdx,QWORD PTR [rax]
0x14082e245: mov    rcx,rax
0x14082e248: call   QWORD PTR [rdx+0x10]
0x14082e24b: mov    rbx,rax
0x14082e24e: test   rax,rax
0x14082e251: je     0x14082e2a2
0x14082e253: lea    rcx,[rbp+0x820]
0x14082e25a: call   0x140070cc0
0x14082e25f: nop
0x14082e260: xor    r9d,r9d
0x14082e263: mov    r8b,0x1
0x14082e266: lea    rdx,[rbp+0x820]
0x14082e26d: mov    rcx,rbx
0x14082e270: call   0x140aae180
0x14082e275: xor    r9d,r9d
0x14082e278: xor    r8d,r8d
0x14082e27b: lea    rdx,[rbp+0x820]
0x14082e282: lea    rcx,[rip+0x1e3e5e7]        # 0x14266c870
0x14082e289: call   0x140af3400
0x14082e28e: nop
0x14082e28f: lea    rcx,[rbp+0x820]
0x14082e296: call   0x140069460
0x14082e29b: inc    edi
0x14082e29d: jmp    0x14082eff2
0x14082e2a2: lea    rdx,[rip+0xe197b7]        # 0x141647a60 ; 'Tavern'
0x14082e2a9: lea    rcx,[rbp+0x21c0]
0x14082e2b0: call   0x140069780
0x14082e2b5: nop
0x14082e2b6: xor    r9d,r9d
0x14082e2b9: xor    r8d,r8d
0x14082e2bc: lea    rdx,[rbp+0x21c0]
0x14082e2c3: lea    rcx,[rip+0x1e3e5a6]        # 0x14266c870
0x14082e2ca: call   0x140af3400
0x14082e2cf: nop
0x14082e2d0: lea    rcx,[rbp+0x21c0]
0x14082e2d7: call   0x140069460
0x14082e2dc: inc    edi
0x14082e2de: jmp    0x14082eff2
0x14082e2e3: lea    rdx,[rip+0xe19776]        # 0x141647a60 ; 'Tavern'
0x14082e2ea: lea    rcx,[rbp+0x21e0]
0x14082e2f1: call   0x140069780
0x14082e2f6: nop
0x14082e2f7: xor    r9d,r9d
0x14082e2fa: xor    r8d,r8d
0x14082e2fd: lea    rdx,[rbp+0x21e0]
0x14082e304: lea    rcx,[rip+0x1e3e565]        # 0x14266c870
0x14082e30b: call   0x140af3400
0x14082e310: nop
0x14082e311: lea    rcx,[rbp+0x21e0]
0x14082e318: call   0x140069460
0x14082e31d: inc    edi
0x14082e31f: jmp    0x14082eff2
0x14082e324: lea    rdx,[rip+0xe19735]        # 0x141647a60 ; 'Tavern'
0x14082e32b: lea    rcx,[rbp+0x2200]
0x14082e332: call   0x140069780
0x14082e337: nop
0x14082e338: xor    r9d,r9d
0x14082e33b: xor    r8d,r8d
0x14082e33e: lea    rdx,[rbp+0x2200]
0x14082e345: lea    rcx,[rip+0x1e3e524]        # 0x14266c870
0x14082e34c: call   0x140af3400
0x14082e351: nop
0x14082e352: lea    rcx,[rbp+0x2200]
0x14082e359: call   0x140069460
0x14082e35e: inc    edi
0x14082e360: jmp    0x14082eff2
0x14082e365: mov    rsi,QWORD PTR [rbx+0x58]
0x14082e369: lea    r8d,[r14+0x1]
0x14082e36d: mov    edx,edi
0x14082e36f: lea    rcx,[rip+0x1e3e4fa]        # 0x14266c870
0x14082e376: call   0x1400bc750
0x14082e37b: test   BYTE PTR [rbx+0x78],0x1
0x14082e37f: jne    0x14082e570
0x14082e385: movsxd rax,DWORD PTR [rsi+0x8]
0x14082e389: cmp    eax,0x11
0x14082e38c: ja     0x14082e570
0x14082e392: lea    rdx,[rip+0xffffffffff7d1c67]        # 0x140000000
0x14082e399: mov    ecx,DWORD PTR [rdx+rax*4+0x832030]
0x14082e3a0: add    rcx,rdx
0x14082e3a3: jmp    rcx
0x14082e3a5: mov    edx,0x2
0x14082e3aa: mov    r8d,0x6
0x14082e3b0: mov    r9b,0x1
0x14082e3b3: lea    rcx,[rip+0x1e3e4b6]        # 0x14266c870
0x14082e3ba: call   0x1400bc760
0x14082e3bf: mov    dl,0xe6
0x14082e3c1: jmp    0x14082e561
0x14082e3c6: mov    edx,0x2
0x14082e3cb: mov    r8d,0x6
0x14082e3d1: mov    r9b,0x1
0x14082e3d4: lea    rcx,[rip+0x1e3e495]        # 0x14266c870
0x14082e3db: call   0x1400bc760
0x14082e3e0: mov    dl,0x25
0x14082e3e2: jmp    0x14082e561
0x14082e3e7: mov    edx,0x2
0x14082e3ec: mov    r8d,0x6
0x14082e3f2: mov    r9b,0x1
0x14082e3f5: lea    rcx,[rip+0x1e3e474]        # 0x14266c870
0x14082e3fc: call   0x1400bc760
0x14082e401: mov    dl,0x5b
0x14082e403: jmp    0x14082e561
0x14082e408: mov    edx,0x6
0x14082e40d: mov    r8d,edx
0x14082e410: mov    r9b,0x1
0x14082e413: lea    rcx,[rip+0x1e3e456]        # 0x14266c870
0x14082e41a: call   0x1400bc760
0x14082e41f: mov    dl,0xa7
0x14082e421: jmp    0x14082e561
0x14082e426: mov    edx,0x6
0x14082e42b: mov    r8d,edx
0x14082e42e: mov    r9b,0x1
0x14082e431: lea    rcx,[rip+0x1e3e438]        # 0x14266c870
0x14082e438: call   0x1400bc760
0x14082e43d: mov    dl,0xe1
0x14082e43f: jmp    0x14082e561
0x14082e444: mov    edx,0x7
0x14082e449: jmp    0x14082e3ec
0x14082e44b: mov    edx,0x6
0x14082e450: mov    r8d,edx
0x14082e453: jmp    0x14082e3f2
0x14082e455: mov    edx,0x7
0x14082e45a: mov    r8d,0x6
0x14082e460: mov    r9b,0x1
0x14082e463: lea    rcx,[rip+0x1e3e406]        # 0x14266c870
0x14082e46a: call   0x1400bc760
0x14082e46f: mov    dl,0x8f
0x14082e471: jmp    0x14082e561
0x14082e476: mov    edx,0x2
0x14082e47b: mov    r8d,0x6
0x14082e481: mov    r9b,0x1
0x14082e484: lea    rcx,[rip+0x1e3e3e5]        # 0x14266c870
0x14082e48b: call   0x1400bc760
0x14082e490: mov    dl,0x4
0x14082e492: jmp    0x14082e561
0x14082e497: xor    edx,edx
0x14082e499: mov    r8d,0x6
0x14082e49f: xor    r9d,r9d
0x14082e4a2: lea    rcx,[rip+0x1e3e3c7]        # 0x14266c870
0x14082e4a9: call   0x1400bc760
0x14082e4ae: mov    dl,0x2f
0x14082e4b0: jmp    0x14082e561
0x14082e4b5: mov    edx,0x6
0x14082e4ba: mov    r8d,edx
0x14082e4bd: mov    r9b,0x1
0x14082e4c0: lea    rcx,[rip+0x1e3e3a9]        # 0x14266c870
0x14082e4c7: call   0x1400bc760
0x14082e4cc: mov    dl,0x2f
0x14082e4ce: jmp    0x14082e561
0x14082e4d3: xor    edx,edx
0x14082e4d5: mov    r8d,0x6
0x14082e4db: xor    r9d,r9d
0x14082e4de: lea    rcx,[rip+0x1e3e38b]        # 0x14266c870
0x14082e4e5: call   0x1400bc760
0x14082e4ea: mov    dl,0xe5
0x14082e4ec: jmp    0x14082e561
0x14082e4ee: xor    edx,edx
0x14082e4f0: mov    r8d,0x6
0x14082e4f6: xor    r9d,r9d
0x14082e4f9: lea    rcx,[rip+0x1e3e370]        # 0x14266c870
0x14082e500: call   0x1400bc760
0x14082e505: mov    dl,0x5b
0x14082e507: jmp    0x14082e561
0x14082e509: xor    edx,edx
0x14082e50b: mov    r8d,0x6
0x14082e511: xor    r9d,r9d
0x14082e514: lea    rcx,[rip+0x1e3e355]        # 0x14266c870
0x14082e51b: call   0x1400bc760
0x14082e520: mov    dl,0x8f
0x14082e522: jmp    0x14082e561
0x14082e524: mov    edx,0x6
0x14082e529: mov    r8d,edx
0x14082e52c: jmp    0x14082e460
0x14082e531: mov    edx,0x6
0x14082e536: mov    r8d,edx
0x14082e539: mov    r9b,0x1
0x14082e53c: jmp    0x14082e553
0x14082e53e: mov    edx,0x7
0x14082e543: mov    r9b,0x1
0x14082e546: jmp    0x14082e54d
0x14082e548: xor    edx,edx
0x14082e54a: xor    r9d,r9d
0x14082e54d: mov    r8d,0x6
0x14082e553: lea    rcx,[rip+0x1e3e316]        # 0x14266c870
0x14082e55a: call   0x1400bc760
0x14082e55f: mov    dl,0xd1
0x14082e561: mov    r8b,0x1
0x14082e564: lea    rcx,[rip+0x1e3e305]        # 0x14266c870
0x14082e56b: call   0x1400bc7c0
0x14082e570: lea    r8d,[r14+0x3]
0x14082e574: mov    edx,edi
0x14082e576: lea    rcx,[rip+0x1e3e2f3]        # 0x14266c870
0x14082e57d: call   0x1400bc750
0x14082e582: xor    r8d,r8d
0x14082e585: mov    edx,0x6
0x14082e58a: test   BYTE PTR [rbx+0x78],0x1
0x14082e58e: lea    rbx,[rip+0x1e3e2db]        # 0x14266c870
0x14082e595: mov    rcx,rbx
0x14082e598: je     0x14082e5d8
0x14082e59a: xor    r9d,r9d
0x14082e59d: call   0x1400bc760
0x14082e5a2: lea    rdx,[rip+0xeab467]        # 0x1416d9a10 ; 'Abandoned shop'
0x14082e5a9: lea    rcx,[rbp+0x2220]
0x14082e5b0: call   0x140069780
0x14082e5b5: nop
0x14082e5b6: xor    r9d,r9d
0x14082e5b9: xor    r8d,r8d
0x14082e5bc: lea    rdx,[rbp+0x2220]
0x14082e5c3: mov    rcx,rbx
0x14082e5c6: call   0x140af3400
0x14082e5cb: nop
0x14082e5cc: lea    rcx,[rbp+0x2220]
0x14082e5d3: jmp    0x14082efe7
0x14082e5d8: mov    r9b,0x1
0x14082e5db: call   0x1400bc760
0x14082e5e0: movsxd rax,DWORD PTR [rsi+0x8]
0x14082e5e4: cmp    eax,0x11
0x14082e5e7: ja     0x14082efec
0x14082e5ed: lea    rdx,[rip+0xffffffffff7d1a0c]        # 0x140000000
0x14082e5f4: mov    ecx,DWORD PTR [rdx+rax*4+0x832078]
0x14082e5fb: add    rcx,rdx
0x14082e5fe: jmp    rcx
0x14082e600: lea    rdx,[rip+0xeab3d9]        # 0x1416d99e0 ; 'Food imports'
0x14082e607: lea    rcx,[rbp+0x2240]
0x14082e60e: call   0x140069780
0x14082e613: nop
0x14082e614: xor    r9d,r9d
0x14082e617: xor    r8d,r8d
0x14082e61a: lea    rdx,[rbp+0x2240]
0x14082e621: mov    rcx,rbx
0x14082e624: call   0x140af3400
0x14082e629: nop
0x14082e62a: lea    rcx,[rbp+0x2240]
0x14082e631: jmp    0x14082efe7
0x14082e636: lea    rdx,[rip+0xeab3b3]        # 0x1416d99f0 ; 'Clothing imports'
0x14082e63d: lea    rcx,[rbp+0x2260]
0x14082e644: call   0x140069780
0x14082e649: nop
0x14082e64a: xor    r9d,r9d
0x14082e64d: xor    r8d,r8d
0x14082e650: lea    rdx,[rbp+0x2260]
0x14082e657: mov    rcx,rbx
0x14082e65a: call   0x140af3400
0x14082e65f: nop
0x14082e660: lea    rcx,[rbp+0x2260]
0x14082e667: jmp    0x14082efe7
0x14082e66c: lea    rdx,[rip+0xeab34d]        # 0x1416d99c0 ; 'General imports'
0x14082e673: lea    rcx,[rbp+0x2280]
0x14082e67a: call   0x140069780
0x14082e67f: nop
0x14082e680: xor    r9d,r9d
0x14082e683: xor    r8d,r8d
0x14082e686: lea    rdx,[rbp+0x2280]
0x14082e68d: mov    rcx,rbx
0x14082e690: call   0x140af3400
0x14082e695: nop
0x14082e696: lea    rcx,[rbp+0x2280]
0x14082e69d: jmp    0x14082efe7
0x14082e6a2: lea    rdx,[rip+0xeab327]        # 0x1416d99d0 ; 'Cloth shop'
0x14082e6a9: lea    rcx,[rbp+0x22a0]
0x14082e6b0: call   0x140069780
0x14082e6b5: nop
0x14082e6b6: xor    r9d,r9d
0x14082e6b9: xor    r8d,r8d
0x14082e6bc: lea    rdx,[rbp+0x22a0]
0x14082e6c3: mov    rcx,rbx
0x14082e6c6: call   0x140af3400
0x14082e6cb: nop
0x14082e6cc: lea    rcx,[rbp+0x22a0]
0x14082e6d3: jmp    0x14082efe7
0x14082e6d8: lea    rdx,[rip+0xeab191]        # 0x1416d9870 ; 'Leather shop'
0x14082e6df: lea    rcx,[rbp+0x22c0]
0x14082e6e6: call   0x140069780
0x14082e6eb: nop
0x14082e6ec: xor    r9d,r9d
0x14082e6ef: xor    r8d,r8d
0x14082e6f2: lea    rdx,[rbp+0x22c0]
0x14082e6f9: mov    rcx,rbx
0x14082e6fc: call   0x140af3400
0x14082e701: nop
0x14082e702: lea    rcx,[rbp+0x22c0]
0x14082e709: jmp    0x14082efe7
0x14082e70e: lea    rdx,[rip+0xeab16b]        # 0x1416d9880 ; 'Woven clothing shop'
0x14082e715: lea    rcx,[rbp+0x22e0]
0x14082e71c: call   0x140069780
0x14082e721: nop
0x14082e722: xor    r9d,r9d
0x14082e725: xor    r8d,r8d
0x14082e728: lea    rdx,[rbp+0x22e0]
0x14082e72f: mov    rcx,rbx
0x14082e732: call   0x140af3400
0x14082e737: nop
0x14082e738: lea    rcx,[rbp+0x22e0]
0x14082e73f: jmp    0x14082efe7
0x14082e744: lea    rdx,[rip+0xeab0f5]        # 0x1416d9840 ; 'Leather clothing shop'
0x14082e74b: lea    rcx,[rbp+0x2300]
0x14082e752: call   0x140069780
0x14082e757: nop
0x14082e758: xor    r9d,r9d
0x14082e75b: xor    r8d,r8d
0x14082e75e: lea    rdx,[rbp+0x2300]
0x14082e765: mov    rcx,rbx
0x14082e768: call   0x140af3400
0x14082e76d: nop
0x14082e76e: lea    rcx,[rbp+0x2300]
0x14082e775: jmp    0x14082efe7
0x14082e77a: lea    rdx,[rip+0xeab0d7]        # 0x1416d9858 ; "Bone carver's shop"
0x14082e781: lea    rcx,[rbp+0x2320]
0x14082e788: call   0x140069780
0x14082e78d: nop
0x14082e78e: xor    r9d,r9d
0x14082e791: xor    r8d,r8d
0x14082e794: lea    rdx,[rbp+0x2320]
0x14082e79b: mov    rcx,rbx
0x14082e79e: call   0x140af3400
0x14082e7a3: nop
0x14082e7a4: lea    rcx,[rbp+0x2320]
0x14082e7ab: jmp    0x14082efe7
0x14082e7b0: lea    rdx,[rip+0xeab059]        # 0x1416d9810 ; "Gem cutter's shop"
0x14082e7b7: lea    rcx,[rbp+0x2340]
0x14082e7be: call   0x140069780
0x14082e7c3: nop
0x14082e7c4: xor    r9d,r9d
0x14082e7c7: xor    r8d,r8d
0x14082e7ca: lea    rdx,[rbp+0x2340]
0x14082e7d1: mov    rcx,rbx
0x14082e7d4: call   0x140af3400
0x14082e7d9: nop
0x14082e7da: lea    rcx,[rbp+0x2340]
0x14082e7e1: jmp    0x14082efe7
0x14082e7e6: lea    rdx,[rip+0xeab03b]        # 0x1416d9828 ; "Weaponsmith's shop"
0x14082e7ed: lea    rcx,[rbp+0x2360]
0x14082e7f4: call   0x140069780
0x14082e7f9: nop
0x14082e7fa: xor    r9d,r9d
0x14082e7fd: xor    r8d,r8d
0x14082e800: lea    rdx,[rbp+0x2360]
0x14082e807: mov    rcx,rbx
0x14082e80a: call   0x140af3400
0x14082e80f: nop
0x14082e810: lea    rcx,[rbp+0x2360]
0x14082e817: jmp    0x14082efe7
0x14082e81c: lea    rdx,[rip+0xeaafc5]        # 0x1416d97e8 ; "Bowyer's shop"
0x14082e823: lea    rcx,[rbp+0x2380]
0x14082e82a: call   0x140069780
0x14082e82f: nop
0x14082e830: xor    r9d,r9d
0x14082e833: xor    r8d,r8d
0x14082e836: lea    rdx,[rbp+0x2380]
0x14082e83d: mov    rcx,rbx
0x14082e840: call   0x140af3400
0x14082e845: nop
0x14082e846: lea    rcx,[rbp+0x2380]
0x14082e84d: jmp    0x14082efe7
0x14082e852: lea    rdx,[rip+0xeaaf9f]        # 0x1416d97f8 ; "Blacksmith's shop"
0x14082e859: lea    rcx,[rbp+0x23a0]
0x14082e860: call   0x140069780
0x14082e865: nop
0x14082e866: xor    r9d,r9d
0x14082e869: xor    r8d,r8d
0x14082e86c: lea    rdx,[rbp+0x23a0]
0x14082e873: mov    rcx,rbx
0x14082e876: call   0x140af3400
0x14082e87b: nop
0x14082e87c: lea    rcx,[rbp+0x23a0]
0x14082e883: jmp    0x14082efe7
0x14082e888: lea    rdx,[rip+0xeab081]        # 0x1416d9910 ; "Armorsmith's shop"
0x14082e88f: lea    rcx,[rbp+0x23c0]
0x14082e896: call   0x140069780
0x14082e89b: nop
0x14082e89c: xor    r9d,r9d
0x14082e89f: xor    r8d,r8d
0x14082e8a2: lea    rdx,[rbp+0x23c0]
0x14082e8a9: mov    rcx,rbx
0x14082e8ac: call   0x140af3400
0x14082e8b1: nop
0x14082e8b2: lea    rcx,[rbp+0x23c0]
0x14082e8b9: jmp    0x14082efe7
0x14082e8be: lea    rdx,[rip+0xeab063]        # 0x1416d9928 ; 'Metal craft shop'
0x14082e8c5: lea    rcx,[rbp+0x23e0]
0x14082e8cc: call   0x140069780
0x14082e8d1: nop
0x14082e8d2: xor    r9d,r9d
0x14082e8d5: xor    r8d,r8d
0x14082e8d8: lea    rdx,[rbp+0x23e0]
0x14082e8df: mov    rcx,rbx
0x14082e8e2: call   0x140af3400
0x14082e8e7: nop
0x14082e8e8: lea    rcx,[rbp+0x23e0]
0x14082e8ef: jmp    0x14082efe7
0x14082e8f4: lea    rdx,[rip+0xeaafe5]        # 0x1416d98e0 ; 'Leather goods shop'
0x14082e8fb: lea    rcx,[rbp+0x2400]
0x14082e902: call   0x140069780
0x14082e907: nop
0x14082e908: xor    r9d,r9d
0x14082e90b: xor    r8d,r8d
0x14082e90e: lea    rdx,[rbp+0x2400]
0x14082e915: mov    rcx,rbx
0x14082e918: call   0x140af3400
0x14082e91d: nop
0x14082e91e: lea    rcx,[rbp+0x2400]
0x14082e925: jmp    0x14082efe7
0x14082e92a: lea    rdx,[rip+0xeaafc7]        # 0x1416d98f8 ; "Carpenter's shop"
0x14082e931: lea    rcx,[rbp+0x2420]
0x14082e938: call   0x140069780
0x14082e93d: nop
0x14082e93e: xor    r9d,r9d
0x14082e941: xor    r8d,r8d
0x14082e944: lea    rdx,[rbp+0x2420]
0x14082e94b: mov    rcx,rbx
0x14082e94e: call   0x140af3400
0x14082e953: nop
0x14082e954: lea    rcx,[rbp+0x2420]
0x14082e95b: jmp    0x14082efe7
0x14082e960: lea    rdx,[rip+0xeaaf49]        # 0x1416d98b0 ; 'Stone furniture shop'
0x14082e967: lea    rcx,[rbp+0x2440]
0x14082e96e: call   0x140069780
0x14082e973: nop
0x14082e974: xor    r9d,r9d
0x14082e977: xor    r8d,r8d
0x14082e97a: lea    rdx,[rbp+0x2440]
0x14082e981: mov    rcx,rbx
0x14082e984: call   0x140af3400
0x14082e989: nop
0x14082e98a: lea    rcx,[rbp+0x2440]
0x14082e991: jmp    0x14082efe7
0x14082e996: lea    rdx,[rip+0xeaaf2b]        # 0x1416d98c8 ; 'Metal furniture shop'
0x14082e99d: lea    rcx,[rbp+0x2460]
0x14082e9a4: call   0x140069780
0x14082e9a9: nop
0x14082e9aa: xor    r9d,r9d
0x14082e9ad: xor    r8d,r8d
0x14082e9b0: lea    rdx,[rbp+0x2460]
0x14082e9b7: mov    rcx,rbx
0x14082e9ba: call   0x140af3400
0x14082e9bf: nop
0x14082e9c0: lea    rcx,[rbp+0x2460]
0x14082e9c7: jmp    0x14082efe7
0x14082e9cc: lea    r8d,[r14+0x3]
0x14082e9d0: mov    edx,edi
0x14082e9d2: lea    rbx,[rip+0x1e3de97]        # 0x14266c870
0x14082e9d9: mov    rcx,rbx
0x14082e9dc: call   0x1400bc750
0x14082e9e1: xor    r8d,r8d
0x14082e9e4: mov    edx,0x7
0x14082e9e9: xor    r9d,r9d
0x14082e9ec: mov    rcx,rbx
0x14082e9ef: call   0x1400bc760
0x14082e9f4: lea    rdx,[rip+0xe18ac5]        # 0x1416474c0 ; 'Dormitory'
0x14082e9fb: lea    rcx,[rbp+0x2480]
0x14082ea02: call   0x140069780
0x14082ea07: nop
0x14082ea08: xor    r9d,r9d
0x14082ea0b: xor    r8d,r8d
0x14082ea0e: lea    rdx,[rbp+0x2480]
0x14082ea15: mov    rcx,rbx
0x14082ea18: call   0x140af3400
0x14082ea1d: nop
0x14082ea1e: lea    rcx,[rbp+0x2480]
0x14082ea25: call   0x140069460
0x14082ea2a: inc    edi
0x14082ea2c: jmp    0x14082eff2
0x14082ea31: lea    r8d,[r14+0x3]
0x14082ea35: mov    edx,edi
0x14082ea37: lea    rbx,[rip+0x1e3de32]        # 0x14266c870
0x14082ea3e: mov    rcx,rbx
0x14082ea41: call   0x1400bc750
0x14082ea46: xor    r8d,r8d
0x14082ea49: mov    edx,0x7
0x14082ea4e: xor    r9d,r9d
0x14082ea51: mov    rcx,rbx
0x14082ea54: call   0x1400bc760
0x14082ea59: lea    rdx,[rip+0xeaae34]        # 0x1416d9894 ; 'Barrow'
0x14082ea60: lea    rcx,[rbp+0x24a0]
0x14082ea67: call   0x140069780
0x14082ea6c: nop
0x14082ea6d: xor    r9d,r9d
0x14082ea70: xor    r8d,r8d
0x14082ea73: lea    rdx,[rbp+0x24a0]
0x14082ea7a: mov    rcx,rbx
0x14082ea7d: call   0x140af3400
0x14082ea82: nop
0x14082ea83: lea    rcx,[rbp+0x24a0]
0x14082ea8a: call   0x140069460
0x14082ea8f: inc    edi
0x14082ea91: jmp    0x14082eff2
0x14082ea96: lea    r8d,[r14+0x3]
0x14082ea9a: mov    edx,edi
0x14082ea9c: lea    rbx,[rip+0x1e3ddcd]        # 0x14266c870
0x14082eaa3: mov    rcx,rbx
0x14082eaa6: call   0x1400bc750
0x14082eaab: xor    r8d,r8d
0x14082eaae: mov    edx,0x6
0x14082eab3: mov    r9b,0x1
0x14082eab6: mov    rcx,rbx
0x14082eab9: call   0x1400bc760
0x14082eabe: lea    rdx,[rip+0xe18abb]        # 0x141647580 ; 'Dining hall'
0x14082eac5: lea    rcx,[rbp+0x24c0]
0x14082eacc: call   0x140069780
0x14082ead1: nop
0x14082ead2: xor    r9d,r9d
0x14082ead5: xor    r8d,r8d
0x14082ead8: lea    rdx,[rbp+0x24c0]
0x14082eadf: mov    rcx,rbx
0x14082eae2: call   0x140af3400
0x14082eae7: nop
0x14082eae8: lea    rcx,[rbp+0x24c0]
0x14082eaef: call   0x140069460
0x14082eaf4: inc    edi
0x14082eaf6: jmp    0x14082eff2
0x14082eafb: lea    r8d,[r14+0x3]
0x14082eaff: mov    edx,edi
0x14082eb01: lea    rbx,[rip+0x1e3dd68]        # 0x14266c870
0x14082eb08: mov    rcx,rbx
0x14082eb0b: call   0x1400bc750
0x14082eb10: xor    r8d,r8d
0x14082eb13: mov    edx,0x7
0x14082eb18: mov    r9b,0x1
0x14082eb1b: mov    rcx,rbx
0x14082eb1e: call   0x1400bc760
0x14082eb23: lea    rdx,[rip+0xeaad76]        # 0x1416d98a0 ; 'Warehouse'
0x14082eb2a: lea    rcx,[rbp+0x24e0]
0x14082eb31: call   0x140069780
0x14082eb36: nop
0x14082eb37: xor    r9d,r9d
0x14082eb3a: xor    r8d,r8d
0x14082eb3d: lea    rdx,[rbp+0x24e0]
0x14082eb44: mov    rcx,rbx
0x14082eb47: call   0x140af3400
0x14082eb4c: nop
0x14082eb4d: lea    rcx,[rbp+0x24e0]
0x14082eb54: call   0x140069460
0x14082eb59: inc    edi
0x14082eb5b: jmp    0x14082eff2
0x14082eb60: lea    r8d,[r14+0x3]
0x14082eb64: mov    edx,edi
0x14082eb66: lea    rbx,[rip+0x1e3dd03]        # 0x14266c870
0x14082eb6d: mov    rcx,rbx
0x14082eb70: call   0x1400bc750
0x14082eb75: xor    r8d,r8d
0x14082eb78: mov    edx,0x7
0x14082eb7d: mov    r9b,0x1
0x14082eb80: mov    rcx,rbx
0x14082eb83: call   0x1400bc760
0x14082eb88: lea    rdx,[rip+0xeaab91]        # 0x1416d9720 ; 'Fortress Entrance'
0x14082eb8f: lea    rcx,[rbp+0x2500]
0x14082eb96: call   0x140069780
0x14082eb9b: nop
0x14082eb9c: xor    r9d,r9d
0x14082eb9f: xor    r8d,r8d
0x14082eba2: lea    rdx,[rbp+0x2500]
0x14082eba9: mov    rcx,rbx
0x14082ebac: call   0x140af3400
0x14082ebb1: nop
0x14082ebb2: lea    rcx,[rbp+0x2500]
0x14082ebb9: call   0x140069460
0x14082ebbe: inc    edi
0x14082ebc0: jmp    0x14082eff2
0x14082ebc5: lea    r8d,[r14+0x3]
0x14082ebc9: mov    edx,edi
0x14082ebcb: lea    rbx,[rip+0x1e3dc9e]        # 0x14266c870
0x14082ebd2: mov    rcx,rbx
0x14082ebd5: call   0x1400bc750
0x14082ebda: xor    r8d,r8d
0x14082ebdd: mov    edx,0x1
0x14082ebe2: movzx  r9d,dl
0x14082ebe6: mov    rcx,rbx
0x14082ebe9: call   0x1400bc760
0x14082ebee: lea    rdx,[rip+0xe19e77]        # 0x141648a6c ; 'Well'
0x14082ebf5: lea    rcx,[rbp+0x2520]
0x14082ebfc: call   0x140069780
0x14082ec01: nop
0x14082ec02: xor    r9d,r9d
0x14082ec05: xor    r8d,r8d
0x14082ec08: lea    rdx,[rbp+0x2520]
0x14082ec0f: mov    rcx,rbx
0x14082ec12: call   0x140af3400
0x14082ec17: nop
0x14082ec18: lea    rcx,[rbp+0x2520]
0x14082ec1f: call   0x140069460
0x14082ec24: inc    edi
0x14082ec26: jmp    0x14082eff2
0x14082ec2b: lea    r8d,[r14+0x3]
0x14082ec2f: mov    edx,edi
0x14082ec31: lea    rbx,[rip+0x1e3dc38]        # 0x14266c870
0x14082ec38: mov    rcx,rbx
0x14082ec3b: call   0x1400bc750
0x14082ec40: xor    r8d,r8d
0x14082ec43: mov    edx,0x7
0x14082ec48: xor    r9d,r9d
0x14082ec4b: mov    rcx,rbx
0x14082ec4e: call   0x1400bc760
0x14082ec53: lea    rdx,[rip+0xeaaade]        # 0x1416d9738 ; 'Trenches'
0x14082ec5a: lea    rcx,[rbp+0x2540]
0x14082ec61: call   0x140069780
0x14082ec66: nop
0x14082ec67: xor    r9d,r9d
0x14082ec6a: xor    r8d,r8d
0x14082ec6d: lea    rdx,[rbp+0x2540]
0x14082ec74: mov    rcx,rbx
0x14082ec77: call   0x140af3400
0x14082ec7c: nop
0x14082ec7d: lea    rcx,[rbp+0x2540]
0x14082ec84: call   0x140069460
0x14082ec89: inc    edi
0x14082ec8b: jmp    0x14082eff2
0x14082ec90: lea    r8d,[r14+0x3]
0x14082ec94: mov    edx,edi
0x14082ec96: lea    rcx,[rip+0x1e3dbd3]        # 0x14266c870
0x14082ec9d: call   0x1400bc750
0x14082eca2: xor    r8d,r8d
0x14082eca5: mov    edx,0x3
0x14082ecaa: mov    r9b,0x1
0x14082ecad: lea    rcx,[rip+0x1e3dbbc]        # 0x14266c870
0x14082ecb4: call   0x1400bc760
0x14082ecb9: mov    rbx,QWORD PTR [rbx+0x58]
0x14082ecbd: test   rbx,rbx
0x14082ecc0: je     0x14082ed9f
0x14082ecc6: lea    rcx,[rbp+0x5e0]
0x14082eccd: call   0x140070cc0
0x14082ecd2: nop
0x14082ecd3: mov    ecx,DWORD PTR [rbx+0x8]
0x14082ecd6: test   ecx,ecx
0x14082ecd8: je     0x14082ed26
0x14082ecda: cmp    ecx,0x1
0x14082ecdd: jne    0x14082ed72
0x14082ece3: mov    edx,DWORD PTR [rbx+0xc]
0x14082ece6: lea    rcx,[rip+0x1bc4f8b]        # 0x1423f3c78
0x14082eced: call   0x14007f120
0x14082ecf2: test   rax,rax
0x14082ecf5: je     0x14082ed72
0x14082ecf7: lea    rdx,[rip+0xeaa94a]        # 0x1416d9648 ; 'Shrine of '
0x14082ecfe: lea    rcx,[rbp+0x5e0]
0x14082ed05: call   0x140070b90
0x14082ed0a: xor    r9d,r9d
0x14082ed0d: mov    r8d,DWORD PTR [rbx+0xc]
0x14082ed11: lea    rdx,[rbp+0x5e0]
0x14082ed18: lea    rcx,[rip+0x1ced419]        # 0x14251c138
0x14082ed1f: call   0x140baa5c0
0x14082ed24: jmp    0x14082ed72
0x14082ed26: lea    rdx,[rip+0xeaa9d3]        # 0x1416d9700 ; 'Shrine to '
0x14082ed2d: lea    rcx,[rbp+0x5e0]
0x14082ed34: call   0x140070b90
0x14082ed39: lea    rcx,[rbp+0x1b0]
0x14082ed40: call   0x1400736b0
0x14082ed45: mov    eax,0x1
0x14082ed4a: mov    WORD PTR [rsp+0x28],ax
0x14082ed4f: mov    WORD PTR [rsp+0x20],ax
0x14082ed54: lea    r9,[rbp+0x1b0]
0x14082ed5b: mov    r8d,DWORD PTR [rbx+0xc]
0x14082ed5f: lea    rdx,[rbp+0x5e0]
0x14082ed66: lea    rcx,[rip+0x1ced3cb]        # 0x14251c138
0x14082ed6d: call   0x140baabd0
0x14082ed72: xor    r9d,r9d
0x14082ed75: xor    r8d,r8d
0x14082ed78: lea    rdx,[rbp+0x5e0]
0x14082ed7f: lea    rcx,[rip+0x1e3daea]        # 0x14266c870
0x14082ed86: call   0x140af3400
0x14082ed8b: nop
0x14082ed8c: lea    rcx,[rbp+0x5e0]
0x14082ed93: call   0x140069460
0x14082ed98: inc    edi
0x14082ed9a: jmp    0x14082eff2
0x14082ed9f: lea    rdx,[rip+0xe18cca]        # 0x141647a70 ; 'Shrine'
0x14082eda6: lea    rcx,[rbp+0x2560]
0x14082edad: call   0x140069780
0x14082edb2: nop
0x14082edb3: xor    r9d,r9d
0x14082edb6: xor    r8d,r8d
0x14082edb9: lea    rdx,[rbp+0x2560]
0x14082edc0: lea    rcx,[rip+0x1e3daa9]        # 0x14266c870
0x14082edc7: call   0x140af3400
0x14082edcc: nop
0x14082edcd: lea    rcx,[rbp+0x2560]
0x14082edd4: call   0x140069460
0x14082edd9: inc    edi
0x14082eddb: jmp    0x14082eff2
0x14082ede0: mov    rsi,QWORD PTR [rbx+0x58]
0x14082ede4: lea    r8d,[r14+0x3]
0x14082ede8: mov    edx,edi
0x14082edea: lea    rcx,[rip+0x1e3da7f]        # 0x14266c870
0x14082edf1: call   0x1400bc750
0x14082edf6: xor    r8d,r8d
0x14082edf9: mov    edx,0x2
0x14082edfe: test   BYTE PTR [rbx+0x78],0x1
0x14082ee02: lea    rbx,[rip+0x1e3da67]        # 0x14266c870
0x14082ee09: mov    rcx,rbx
0x14082ee0c: je     0x14082ee4c
0x14082ee0e: xor    r9d,r9d
0x14082ee11: call   0x1400bc760
0x14082ee16: lea    rdx,[rip+0xeaa8f3]        # 0x1416d9710 ; 'Empty market'
0x14082ee1d: lea    rcx,[rbp+0x2580]
0x14082ee24: call   0x140069780
0x14082ee29: nop
0x14082ee2a: xor    r9d,r9d
0x14082ee2d: xor    r8d,r8d
0x14082ee30: lea    rdx,[rbp+0x2580]
0x14082ee37: mov    rcx,rbx
0x14082ee3a: call   0x140af3400
0x14082ee3f: nop
0x14082ee40: lea    rcx,[rbp+0x2580]
0x14082ee47: jmp    0x14082efe7
0x14082ee4c: mov    r9b,0x1
0x14082ee4f: call   0x1400bc760
0x14082ee54: mov    eax,DWORD PTR [rsi+0x8]
0x14082ee57: add    eax,0xffffffee
0x14082ee5a: cmp    eax,0x6
0x14082ee5d: ja     0x14082efec
0x14082ee63: cdqe
0x14082ee65: lea    rdx,[rip+0xffffffffff7d1194]        # 0x140000000
0x14082ee6c: mov    ecx,DWORD PTR [rdx+rax*4+0x8320c0]
0x14082ee73: add    rcx,rdx
0x14082ee76: jmp    rcx
0x14082ee78: lea    rdx,[rip+0xeaa851]        # 0x1416d96d0 ; 'Imported goods market'
0x14082ee7f: lea    rcx,[rbp+0x25a0]
0x14082ee86: call   0x140069780
0x14082ee8b: nop
0x14082ee8c: xor    r9d,r9d
0x14082ee8f: xor    r8d,r8d
0x14082ee92: lea    rdx,[rbp+0x25a0]
0x14082ee99: mov    rcx,rbx
0x14082ee9c: call   0x140af3400
0x14082eea1: nop
0x14082eea2: lea    rcx,[rbp+0x25a0]
0x14082eea9: jmp    0x14082efe7
0x14082eeae: lea    rdx,[rip+0xeaa833]        # 0x1416d96e8 ; 'Imported food market'
0x14082eeb5: lea    rcx,[rbp+0x25c0]
0x14082eebc: call   0x140069780
0x14082eec1: nop
0x14082eec2: xor    r9d,r9d
0x14082eec5: xor    r8d,r8d
0x14082eec8: lea    rdx,[rbp+0x25c0]
0x14082eecf: mov    rcx,rbx
0x14082eed2: call   0x140af3400
0x14082eed7: nop
0x14082eed8: lea    rcx,[rbp+0x25c0]
0x14082eedf: jmp    0x14082efe7
0x14082eee4: lea    rdx,[rip+0xeaa7b5]        # 0x1416d96a0 ; 'Imported clothing market'
0x14082eeeb: lea    rcx,[rbp+0x25e0]
0x14082eef2: call   0x140069780
0x14082eef7: nop
0x14082eef8: xor    r9d,r9d
0x14082eefb: xor    r8d,r8d
0x14082eefe: lea    rdx,[rbp+0x25e0]
0x14082ef05: mov    rcx,rbx
0x14082ef08: call   0x140af3400
0x14082ef0d: nop
0x14082ef0e: lea    rcx,[rbp+0x25e0]
0x14082ef15: jmp    0x14082efe7
0x14082ef1a: lea    rdx,[rip+0xeaa79f]        # 0x1416d96c0 ; 'Meat market'
0x14082ef21: lea    rcx,[rbp+0x2600]
0x14082ef28: call   0x140069780
0x14082ef2d: nop
0x14082ef2e: xor    r9d,r9d
0x14082ef31: xor    r8d,r8d
0x14082ef34: lea    rdx,[rbp+0x2600]
0x14082ef3b: mov    rcx,rbx
0x14082ef3e: call   0x140af3400
0x14082ef43: nop
0x14082ef44: lea    rcx,[rbp+0x2600]
0x14082ef4b: jmp    0x14082efe7
0x14082ef50: lea    rdx,[rip+0xeaa861]        # 0x1416d97b8 ; 'Fruit and vegetable market'
0x14082ef57: lea    rcx,[rbp+0x2620]
0x14082ef5e: call   0x140069780
0x14082ef63: nop
0x14082ef64: xor    r9d,r9d
0x14082ef67: xor    r8d,r8d
0x14082ef6a: lea    rdx,[rbp+0x2620]
0x14082ef71: mov    rcx,rbx
0x14082ef74: call   0x140af3400
0x14082ef79: nop
0x14082ef7a: lea    rcx,[rbp+0x2620]
0x14082ef81: jmp    0x14082efe7
0x14082ef83: lea    rdx,[rip+0xeaa84e]        # 0x1416d97d8 ; 'Cheese market'
0x14082ef8a: lea    rcx,[rbp+0x2640]
0x14082ef91: call   0x140069780
0x14082ef96: nop
0x14082ef97: xor    r9d,r9d
0x14082ef9a: xor    r8d,r8d
0x14082ef9d: lea    rdx,[rbp+0x2640]
0x14082efa4: mov    rcx,rbx
0x14082efa7: call   0x140af3400
0x14082efac: nop
0x14082efad: lea    rcx,[rbp+0x2640]
0x14082efb4: jmp    0x14082efe7
0x14082efb6: lea    rdx,[rip+0xeaa7cb]        # 0x1416d9788 ; 'Processed goods market'
0x14082efbd: lea    rcx,[rbp+0x2660]
0x14082efc4: call   0x140069780
0x14082efc9: nop
0x14082efca: xor    r9d,r9d
0x14082efcd: xor    r8d,r8d
0x14082efd0: lea    rdx,[rbp+0x2660]
0x14082efd7: mov    rcx,rbx
0x14082efda: call   0x140af3400
0x14082efdf: nop
0x14082efe0: lea    rcx,[rbp+0x2660]
0x14082efe7: call   0x140069460
0x14082efec: inc    edi
0x14082efee: mov    esi,DWORD PTR [rsp+0x74]
0x14082eff2: lea    rcx,[rbp+0x88]
0x14082eff9: call   0x140070430
0x14082effe: lea    r8,[rbp+0x178]
0x14082f005: lea    rdx,[rbp-0x38]
0x14082f009: lea    rcx,[rbp+0x88]
0x14082f010: call   0x140070450
0x14082f015: xor    edx,edx
0x14082f017: movzx  ecx,BYTE PTR [rax]
0x14082f01a: call   0x140066de0
0x14082f01f: test   al,al
0x14082f021: jne    0x14082d530
0x14082f027: lea    rbx,[rip+0x1e3d842]        # 0x14266c870
0x14082f02e: cmp    r15d,0x1
0x14082f032: jle    0x14082f0d9
0x14082f038: cmp    edi,0x13
0x14082f03b: jg     0x14082f17f
0x14082f041: lea    r8d,[r14+0x3]
0x14082f045: mov    edx,edi
0x14082f047: mov    rcx,rbx
0x14082f04a: call   0x1400bc750
0x14082f04f: xor    r8d,r8d
0x14082f052: mov    edx,0x7
0x14082f057: xor    r9d,r9d
0x14082f05a: mov    rcx,rbx
0x14082f05d: call   0x1400bc760
0x14082f062: cmp    WORD PTR [r13+0x80],0x3
0x14082f06b: jne    0x14082f0a3
0x14082f06d: lea    rdx,[rip+0xea83ac]        # 0x1416d7420 ; 'Hillocks'
0x14082f074: lea    rcx,[rbp+0x2680]
0x14082f07b: call   0x140069780
0x14082f080: nop
0x14082f081: xor    r9d,r9d
0x14082f084: xor    r8d,r8d
0x14082f087: lea    rdx,[rbp+0x2680]
0x14082f08e: mov    rcx,rbx
0x14082f091: call   0x140af3400
0x14082f096: nop
0x14082f097: lea    rcx,[rbp+0x2680]
0x14082f09e: jmp    0x14082f178
0x14082f0a3: lea    rdx,[rip+0xeaa69a]        # 0x1416d9744 ; 'Houses'
0x14082f0aa: lea    rcx,[rbp+0x26a0]
0x14082f0b1: call   0x140069780
0x14082f0b6: nop
0x14082f0b7: xor    r9d,r9d
0x14082f0ba: xor    r8d,r8d
0x14082f0bd: lea    rdx,[rbp+0x26a0]
0x14082f0c4: mov    rcx,rbx
0x14082f0c7: call   0x140af3400
0x14082f0cc: nop
0x14082f0cd: lea    rcx,[rbp+0x26a0]
0x14082f0d4: jmp    0x14082f178
0x14082f0d9: jne    0x14082f17f
0x14082f0df: cmp    edi,0x13
0x14082f0e2: jg     0x14082f17f
0x14082f0e8: lea    r8d,[r14+0x3]
0x14082f0ec: mov    edx,edi
0x14082f0ee: mov    rcx,rbx
0x14082f0f1: call   0x1400bc750
0x14082f0f6: xor    r8d,r8d
0x14082f0f9: mov    edx,0x7
0x14082f0fe: xor    r9d,r9d
0x14082f101: mov    rcx,rbx
0x14082f104: call   0x1400bc760
0x14082f109: cmp    WORD PTR [r13+0x80],0x3
0x14082f112: jne    0x14082f147
0x14082f114: lea    rdx,[rip+0xeaa635]        # 0x1416d9750 ; 'Hillock'
0x14082f11b: lea    rcx,[rbp+0x26c0]
0x14082f122: call   0x140069780
0x14082f127: nop
0x14082f128: xor    r9d,r9d
0x14082f12b: xor    r8d,r8d
0x14082f12e: lea    rdx,[rbp+0x26c0]
0x14082f135: mov    rcx,rbx
0x14082f138: call   0x140af3400
0x14082f13d: nop
0x14082f13e: lea    rcx,[rbp+0x26c0]
0x14082f145: jmp    0x14082f178
0x14082f147: lea    rdx,[rip+0xeaa47e]        # 0x1416d95cc ; 'House'
0x14082f14e: lea    rcx,[rbp+0x26e0]
0x14082f155: call   0x140069780
0x14082f15a: nop
0x14082f15b: xor    r9d,r9d
0x14082f15e: xor    r8d,r8d
0x14082f161: lea    rdx,[rbp+0x26e0]
0x14082f168: mov    rcx,rbx
0x14082f16b: call   0x140af3400
0x14082f170: nop
0x14082f171: lea    rcx,[rbp+0x26e0]
0x14082f178: call   0x140069460
0x14082f17d: inc    edi
0x14082f17f: cmp    r12d,0x1
0x14082f183: jle    0x14082f227
0x14082f189: cmp    edi,0x13
0x14082f18c: jg     0x14082f2ca
0x14082f192: lea    r8d,[r14+0x3]
0x14082f196: mov    edx,edi
0x14082f198: mov    rcx,rbx
0x14082f19b: call   0x1400bc750
0x14082f1a0: xor    r8d,r8d
0x14082f1a3: xor    edx,edx
0x14082f1a5: mov    r9b,0x1
0x14082f1a8: mov    rcx,rbx
0x14082f1ab: call   0x1400bc760
0x14082f1b0: cmp    WORD PTR [r13+0x80],0x3
0x14082f1b9: jne    0x14082f1f1
0x14082f1bb: lea    rdx,[rip+0xeaa416]        # 0x1416d95d8 ; 'Abandoned hillocks'
0x14082f1c2: lea    rcx,[rbp+0x2700]
0x14082f1c9: call   0x140069780
0x14082f1ce: nop
0x14082f1cf: xor    r9d,r9d
0x14082f1d2: xor    r8d,r8d
0x14082f1d5: lea    rdx,[rbp+0x2700]
0x14082f1dc: mov    rcx,rbx
0x14082f1df: call   0x140af3400
0x14082f1e4: nop
0x14082f1e5: lea    rcx,[rbp+0x2700]
0x14082f1ec: jmp    0x14082f2c3
0x14082f1f1: lea    rdx,[rip+0xeaa3a8]        # 0x1416d95a0 ; 'Abandoned houses'
0x14082f1f8: lea    rcx,[rbp+0x2720]
0x14082f1ff: call   0x140069780
0x14082f204: nop
0x14082f205: xor    r9d,r9d
0x14082f208: xor    r8d,r8d
0x14082f20b: lea    rdx,[rbp+0x2720]
0x14082f212: mov    rcx,rbx
0x14082f215: call   0x140af3400
0x14082f21a: nop
0x14082f21b: lea    rcx,[rbp+0x2720]
0x14082f222: jmp    0x14082f2c3
0x14082f227: jne    0x14082f2ca
0x14082f22d: cmp    edi,0x13
0x14082f230: jg     0x14082f2ca
0x14082f236: lea    r8d,[r14+0x3]
0x14082f23a: mov    edx,edi
0x14082f23c: mov    rcx,rbx
0x14082f23f: call   0x1400bc750
0x14082f244: xor    r8d,r8d
0x14082f247: xor    edx,edx
0x14082f249: mov    r9b,0x1
0x14082f24c: mov    rcx,rbx
0x14082f24f: call   0x1400bc760
0x14082f254: cmp    WORD PTR [r13+0x80],0x3
0x14082f25d: jne    0x14082f292
0x14082f25f: lea    rdx,[rip+0xeaa352]        # 0x1416d95b8 ; 'Abandoned hillock'
0x14082f266: lea    rcx,[rbp+0x2740]
0x14082f26d: call   0x140069780
0x14082f272: nop
0x14082f273: xor    r9d,r9d
0x14082f276: xor    r8d,r8d
0x14082f279: lea    rdx,[rbp+0x2740]
0x14082f280: mov    rcx,rbx
0x14082f283: call   0x140af3400
0x14082f288: nop
0x14082f289: lea    rcx,[rbp+0x2740]
0x14082f290: jmp    0x14082f2c3
0x14082f292: lea    rdx,[rip+0xeaa2e7]        # 0x1416d9580 ; 'Abandoned house'
0x14082f299: lea    rcx,[rbp+0x2760]
0x14082f2a0: call   0x140069780
0x14082f2a5: nop
0x14082f2a6: xor    r9d,r9d
0x14082f2a9: xor    r8d,r8d
0x14082f2ac: lea    rdx,[rbp+0x2760]
0x14082f2b3: mov    rcx,rbx
0x14082f2b6: call   0x140af3400
0x14082f2bb: nop
0x14082f2bc: lea    rcx,[rbp+0x2760]
0x14082f2c3: call   0x140069460
0x14082f2c8: inc    edi
0x14082f2ca: cmp    esi,0x1
0x14082f2cd: jle    0x14082f371
0x14082f2d3: cmp    edi,0x13
0x14082f2d6: jg     0x14082f414
0x14082f2dc: lea    r8d,[r14+0x3]
0x14082f2e0: mov    edx,edi
0x14082f2e2: mov    rcx,rbx
0x14082f2e5: call   0x1400bc750
0x14082f2ea: xor    r8d,r8d
0x14082f2ed: xor    edx,edx
0x14082f2ef: mov    r9b,0x1
0x14082f2f2: mov    rcx,rbx
0x14082f2f5: call   0x1400bc760
0x14082f2fa: cmp    WORD PTR [r13+0x80],0x3
0x14082f303: jne    0x14082f33b
0x14082f305: lea    rdx,[rip+0xeaa284]        # 0x1416d9590 ; 'Ruined hillocks'
0x14082f30c: lea    rcx,[rbp+0x2780]
0x14082f313: call   0x140069780
0x14082f318: nop
0x14082f319: xor    r9d,r9d
0x14082f31c: xor    r8d,r8d
0x14082f31f: lea    rdx,[rbp+0x2780]
0x14082f326: mov    rcx,rbx
0x14082f329: call   0x140af3400
0x14082f32e: nop
0x14082f32f: lea    rcx,[rbp+0x2780]
0x14082f336: jmp    0x14082f40d
0x14082f33b: lea    rdx,[rip+0xeaa21e]        # 0x1416d9560 ; 'Ruined houses'
0x14082f342: lea    rcx,[rbp+0x27a0]
0x14082f349: call   0x140069780
0x14082f34e: nop
0x14082f34f: xor    r9d,r9d
0x14082f352: xor    r8d,r8d
0x14082f355: lea    rdx,[rbp+0x27a0]
0x14082f35c: mov    rcx,rbx
0x14082f35f: call   0x140af3400
0x14082f364: nop
0x14082f365: lea    rcx,[rbp+0x27a0]
0x14082f36c: jmp    0x14082f40d
0x14082f371: jne    0x14082f414
0x14082f377: cmp    edi,0x13
0x14082f37a: jg     0x14082f414
0x14082f380: lea    r8d,[r14+0x3]
0x14082f384: mov    edx,edi
0x14082f386: mov    rcx,rbx
0x14082f389: call   0x1400bc750
0x14082f38e: xor    r8d,r8d
0x14082f391: xor    edx,edx
0x14082f393: mov    r9b,0x1
0x14082f396: mov    rcx,rbx
0x14082f399: call   0x1400bc760
0x14082f39e: cmp    WORD PTR [r13+0x80],0x3
0x14082f3a7: jne    0x14082f3dc
0x14082f3a9: lea    rdx,[rip+0xeaa1c0]        # 0x1416d9570 ; 'Ruined hillock'
0x14082f3b0: lea    rcx,[rbp+0x27c0]
0x14082f3b7: call   0x140069780
0x14082f3bc: nop
0x14082f3bd: xor    r9d,r9d
0x14082f3c0: xor    r8d,r8d
0x14082f3c3: lea    rdx,[rbp+0x27c0]
0x14082f3ca: mov    rcx,rbx
0x14082f3cd: call   0x140af3400
0x14082f3d2: nop
0x14082f3d3: lea    rcx,[rbp+0x27c0]
0x14082f3da: jmp    0x14082f40d
0x14082f3dc: lea    rdx,[rip+0xeaa28d]        # 0x1416d9670 ; 'Ruined house'
0x14082f3e3: lea    rcx,[rbp+0x27e0]
0x14082f3ea: call   0x140069780
0x14082f3ef: nop
0x14082f3f0: xor    r9d,r9d
0x14082f3f3: xor    r8d,r8d
0x14082f3f6: lea    rdx,[rbp+0x27e0]
0x14082f3fd: mov    rcx,rbx
0x14082f400: call   0x140af3400
0x14082f405: nop
0x14082f406: lea    rcx,[rbp+0x27e0]
0x14082f40d: call   0x140069460
0x14082f412: inc    edi
0x14082f414: cmp    edi,0x2
0x14082f417: jne    0x14082d0bb
0x14082f41d: lea    r8d,[r14+0x3]
0x14082f421: mov    edx,edi
0x14082f423: lea    r12,[rip+0x1e3d446]        # 0x14266c870
0x14082f42a: mov    rcx,r12
0x14082f42d: call   0x1400bc750
0x14082f432: xor    r8d,r8d
0x14082f435: mov    edx,0x7
0x14082f43a: xor    r9d,r9d
0x14082f43d: mov    rcx,r12
0x14082f440: call   0x1400bc760
0x14082f445: lea    rdx,[rip+0xeaa234]        # 0x1416d9680 ; 'No significant structures'
0x14082f44c: lea    rcx,[rbp+0x2800]
0x14082f453: call   0x140069780
0x14082f458: nop
0x14082f459: xor    r9d,r9d
0x14082f45c: xor    r8d,r8d
0x14082f45f: lea    rdx,[rbp+0x2800]
0x14082f466: mov    rcx,r12
0x14082f469: call   0x140af3400
0x14082f46e: nop
0x14082f46f: lea    rcx,[rbp+0x2800]
0x14082f476: call   0x140069460
0x14082f47b: jmp    0x14082d0c2
0x14082f480: mov    rcx,r12
0x14082f483: cmp    ebx,edi
0x14082f485: jne    0x14082f48f
0x14082f487: mov    edx,DWORD PTR [rip+0x1e3ed1f]        # 0x14266e1ac
0x14082f48d: jmp    0x14082f4e0
0x14082f48f: mov    edx,DWORD PTR [rip+0x1e3ed0b]        # 0x14266e1a0
0x14082f495: jmp    0x14082f4e0
0x14082f497: cmp    esi,0xb
0x14082f49a: jne    0x14082f4c0
0x14082f49c: cmp    ebx,r14d
0x14082f49f: jne    0x14082f4a9
0x14082f4a1: mov    edx,DWORD PTR [rip+0x1e3ecf5]        # 0x14266e19c
0x14082f4a7: jmp    0x14082f4dd
0x14082f4a9: mov    rcx,r12
0x14082f4ac: cmp    ebx,edi
0x14082f4ae: jne    0x14082f4b8
0x14082f4b0: mov    edx,DWORD PTR [rip+0x1e3ecfe]        # 0x14266e1b4
0x14082f4b6: jmp    0x14082f4e0
0x14082f4b8: mov    edx,DWORD PTR [rip+0x1e3ecea]        # 0x14266e1a8
0x14082f4be: jmp    0x14082f4e0
0x14082f4c0: cmp    ebx,r14d
0x14082f4c3: jne    0x14082f4cd
0x14082f4c5: mov    edx,DWORD PTR [rip+0x1e3eccd]        # 0x14266e198
0x14082f4cb: jmp    0x14082f4dd
0x14082f4cd: cmp    ebx,edi
0x14082f4cf: mov    edx,DWORD PTR [rip+0x1e3ecdb]        # 0x14266e1b0
0x14082f4d5: je     0x14082f4dd
0x14082f4d7: mov    edx,DWORD PTR [rip+0x1e3ecc7]        # 0x14266e1a4
0x14082f4dd: mov    rcx,r12
0x14082f4e0: call   0x140af4570
0x14082f4e5: inc    ebx
0x14082f4e7: cmp    ebx,edi
0x14082f4e9: jle    0x14082d100
0x14082f4ef: inc    esi
0x14082f4f1: cmp    esi,0xb
0x14082f4f4: jle    0x14082d0f0
0x14082f4fa: cmp    BYTE PTR [rip+0x1e33b43],0x0        # 0x142663044
0x14082f501: je     0x14082f925
0x14082f507: mov    r14d,DWORD PTR [rbp-0x74]
0x14082f50b: add    r14d,0x2
0x14082f50f: lea    rdi,[rip+0x1e36b6a]        # 0x142666080
0x14082f516: lea    rsi,[rip+0x1e36b23]        # 0x142666040
0x14082f51d: lea    rax,[rip+0x1e36b2e]        # 0x142666052
0x14082f524: mov    ecx,0xffff8ad0
0x14082f529: xor    r12d,r12d
0x14082f52c: nop    DWORD PTR [rax+0x0]
0x14082f530: cmp    WORD PTR [rsi],cx
0x14082f533: je     0x14082f7ce
0x14082f539: mov    r8d,r13d
0x14082f53c: mov    edx,r14d
0x14082f53f: lea    rbx,[rip+0x1e3d32a]        # 0x14266c870
0x14082f546: mov    rcx,rbx
0x14082f549: call   0x1400bc750
0x14082f54e: movzx  ecx,BYTE PTR [rdi-0x6]
0x14082f552: test   ecx,ecx
0x14082f554: je     0x14082f633
0x14082f55a: sub    ecx,0x1
0x14082f55d: je     0x14082f5cf
0x14082f55f: sub    ecx,0x1
0x14082f562: je     0x14082f586
0x14082f564: cmp    ecx,0x1
0x14082f567: jne    0x14082f653
0x14082f56d: xor    r8d,r8d
0x14082f570: mov    edx,r15d
0x14082f573: movzx  r9d,cl
0x14082f577: mov    rcx,rbx
0x14082f57a: call   0x1400bc760
0x14082f57f: mov    dl,0x25
0x14082f581: jmp    0x14082f648
0x14082f586: xor    r8d,r8d
0x14082f589: mov    edx,0x6
0x14082f58e: mov    r9b,0x1
0x14082f591: mov    rcx,rbx
0x14082f594: call   0x1400bc760
0x14082f599: mov    rax,0xffffffffffffffff
0x14082f5a0: mov    r9d,eax
0x14082f5a3: mov    DWORD PTR [rsp+0x28],r12d
0x14082f5a8: mov    DWORD PTR [rsp+0x20],eax
0x14082f5ac: movzx  r8d,WORD PTR [rdi]
0x14082f5b0: movzx  edx,WORD PTR [rdi-0x4]
0x14082f5b4: lea    rcx,[rip+0x1bd8315]        # 0x1424078d0
0x14082f5bb: call   0x140c93450
0x14082f5c0: movzx  edx,al
0x14082f5c3: test   al,al
0x14082f5c5: mov    eax,0x5b
0x14082f5ca: cmove  edx,eax
0x14082f5cd: jmp    0x14082f648
0x14082f5cf: xor    r8d,r8d
0x14082f5d2: mov    edx,0x5
0x14082f5d7: mov    r9b,0x1
0x14082f5da: mov    rcx,rbx
0x14082f5dd: call   0x1400bc760
0x14082f5e2: movsxd rdx,DWORD PTR [rdi]
0x14082f5e5: lea    rcx,[rip+0x1cdf91c]        # 0x14250ef08
0x14082f5ec: call   0x140070990
0x14082f5f1: mov    ebx,DWORD PTR [rax]
0x14082f5f3: movsxd rdx,DWORD PTR [rdi]
0x14082f5f6: lea    rcx,[rip+0x1cdf923]        # 0x14250ef20
0x14082f5fd: call   0x140070990
0x14082f602: mov    BYTE PTR [rsp+0x20],0x0
0x14082f607: xor    r9d,r9d
0x14082f60a: movzx  r8d,WORD PTR [rax]
0x14082f60e: movzx  edx,bx
0x14082f611: lea    rcx,[rip+0x1cdf8b0]        # 0x14250eec8
0x14082f618: call   0x14071b670
0x14082f61d: movzx  edx,al
0x14082f620: test   al,al
0x14082f622: mov    eax,0x21
0x14082f627: cmove  edx,eax
0x14082f62a: lea    rbx,[rip+0x1e3d23f]        # 0x14266c870
0x14082f631: jmp    0x14082f648
0x14082f633: xor    r8d,r8d
0x14082f636: mov    edx,0x2
0x14082f63b: mov    r9b,0x1
0x14082f63e: mov    rcx,rbx
0x14082f641: call   0x1400bc760
0x14082f646: mov    dl,0x22
0x14082f648: mov    r8b,0x1
0x14082f64b: mov    rcx,rbx
0x14082f64e: call   0x1400bc7c0
0x14082f653: test   BYTE PTR [rdi-0x8],0x2
0x14082f657: je     0x14082f7bf
0x14082f65d: mov    r8d,0x3
0x14082f663: mov    edx,r14d
0x14082f666: mov    rcx,rbx
0x14082f669: call   0x1400bc750
0x14082f66e: xor    r8d,r8d
0x14082f671: mov    edx,0x7
0x14082f676: mov    r9b,0x1
0x14082f679: mov    rcx,rbx
0x14082f67c: call   0x1400bc760
0x14082f681: movzx  eax,BYTE PTR [rdi-0x8]
0x14082f685: and    al,0x1c
0x14082f687: jne    0x14082f69b
0x14082f689: mov    r8b,0x1
0x14082f68c: mov    dl,0x4e
0x14082f68e: mov    rcx,rbx
0x14082f691: call   0x1400bc7c0
0x14082f696: jmp    0x14082f7bf
0x14082f69b: cmp    al,0x4
0x14082f69d: jne    0x14082f6b1
0x14082f69f: mov    r8b,0x1
0x14082f6a2: mov    dl,0x53
0x14082f6a4: mov    rcx,rbx
0x14082f6a7: call   0x1400bc7c0
0x14082f6ac: jmp    0x14082f7bf
0x14082f6b1: cmp    al,0x8
0x14082f6b3: jne    0x14082f6c7
0x14082f6b5: mov    r8b,0x1
0x14082f6b8: mov    dl,0x45
0x14082f6ba: mov    rcx,rbx
0x14082f6bd: call   0x1400bc7c0
0x14082f6c2: jmp    0x14082f7bf
0x14082f6c7: cmp    al,0x10
0x14082f6c9: jne    0x14082f6dd
0x14082f6cb: mov    r8b,0x1
0x14082f6ce: mov    dl,0x57
0x14082f6d0: mov    rcx,rbx
0x14082f6d3: call   0x1400bc7c0
0x14082f6d8: jmp    0x14082f7bf
0x14082f6dd: cmp    al,0x14
0x14082f6df: jne    0x14082f717
0x14082f6e1: lea    rdx,[rip+0xe90a80]        # 0x1416c0168 ; 'NW'
0x14082f6e8: lea    rcx,[rbp+0x2820]
0x14082f6ef: call   0x140069780
0x14082f6f4: nop
0x14082f6f5: xor    r9d,r9d
0x14082f6f8: xor    r8d,r8d
0x14082f6fb: lea    rdx,[rbp+0x2820]
0x14082f702: mov    rcx,rbx
0x14082f705: call   0x140af3400
0x14082f70a: nop
0x14082f70b: lea    rcx,[rbp+0x2820]
0x14082f712: jmp    0x14082f7ba
0x14082f717: cmp    al,0xc
0x14082f719: jne    0x14082f74e
0x14082f71b: lea    rdx,[rip+0xe90a42]        # 0x1416c0164 ; 'NE'
0x14082f722: lea    rcx,[rbp+0x2840]
0x14082f729: call   0x140069780
0x14082f72e: nop
0x14082f72f: xor    r9d,r9d
0x14082f732: xor    r8d,r8d
0x14082f735: lea    rdx,[rbp+0x2840]
0x14082f73c: mov    rcx,rbx
0x14082f73f: call   0x140af3400
0x14082f744: nop
0x14082f745: lea    rcx,[rbp+0x2840]
0x14082f74c: jmp    0x14082f7ba
0x14082f74e: cmp    al,0x1c
0x14082f750: jne    0x14082f785
0x14082f752: lea    rdx,[rip+0xe90a17]        # 0x1416c0170 ; 'SW'
0x14082f759: lea    rcx,[rbp+0x2860]
0x14082f760: call   0x140069780
0x14082f765: nop
0x14082f766: xor    r9d,r9d
0x14082f769: xor    r8d,r8d
0x14082f76c: lea    rdx,[rbp+0x2860]
0x14082f773: mov    rcx,rbx
0x14082f776: call   0x140af3400
0x14082f77b: nop
0x14082f77c: lea    rcx,[rbp+0x2860]
0x14082f783: jmp    0x14082f7ba
0x14082f785: cmp    al,0x18
0x14082f787: jne    0x14082f7bf
0x14082f789: lea    rdx,[rip+0xe909dc]        # 0x1416c016c ; 'SE'
0x14082f790: lea    rcx,[rbp+0x2880]
0x14082f797: call   0x140069780
0x14082f79c: nop
0x14082f79d: xor    r9d,r9d
0x14082f7a0: xor    r8d,r8d
0x14082f7a3: lea    rdx,[rbp+0x2880]
0x14082f7aa: mov    rcx,rbx
0x14082f7ad: call   0x140af3400
0x14082f7b2: nop
0x14082f7b3: lea    rcx,[rbp+0x2880]
0x14082f7ba: call   0x140069460
0x14082f7bf: inc    r14d
0x14082f7c2: lea    rax,[rip+0x1e36889]        # 0x142666052
0x14082f7c9: mov    ecx,0xffff8ad0
0x14082f7ce: add    rsi,0x2
0x14082f7d2: add    rdi,0x10
0x14082f7d6: cmp    rsi,rax
0x14082f7d9: jl     0x14082f530
0x14082f7df: xor    r8d,r8d
0x14082f7e2: lea    r12,[rip+0x1e3d087]        # 0x14266c870
0x14082f7e9: mov    rcx,r12
0x14082f7ec: cmp    DWORD PTR [rip+0x1e36959],0xffffffff        # 0x14266614c
0x14082f7f3: je     0x14082f7ff
0x14082f7f5: mov    edx,0x6
0x14082f7fa: mov    r9b,0x1
0x14082f7fd: jmp    0x14082f807
0x14082f7ff: mov    edx,0x7
0x14082f804: xor    r9d,r9d
0x14082f807: call   0x1400bc760
0x14082f80c: mov    edx,DWORD PTR [rbp-0x74]
0x14082f80f: add    edx,0xc
0x14082f812: xor    r8d,r8d
0x14082f815: mov    rcx,r12
0x14082f818: call   0x1400bc750
0x14082f81d: lea    rdx,[rip+0xea9e34]        # 0x1416d9658 ; 'Strongest Odor: '
0x14082f824: lea    rcx,[rbp+0x28a0]
0x14082f82b: call   0x140069780
0x14082f830: nop
0x14082f831: xor    r9d,r9d
0x14082f834: mov    r8b,0x3
0x14082f837: lea    rdx,[rbp+0x28a0]
0x14082f83e: mov    rcx,r12
0x14082f841: call   0x140af3400
0x14082f846: nop
0x14082f847: lea    rcx,[rbp+0x28a0]
0x14082f84e: call   0x140069460
0x14082f853: lea    rcx,[rbp+0x500]
0x14082f85a: call   0x140070cc0
0x14082f85f: nop
0x14082f860: mov    edx,DWORD PTR [rip+0x1e368e6]        # 0x14266614c
0x14082f866: cmp    edx,0xffffffff
0x14082f869: je     0x14082f8d8
0x14082f86b: cmp    BYTE PTR [rip+0x1e368e2],0x0        # 0x142666154
0x14082f872: je     0x14082f87d
0x14082f874: lea    rdx,[rip+0xde359d]        # 0x141612e18 ; 'Death'
0x14082f87b: jmp    0x14082f8df
0x14082f87d: movzx  r8d,WORD PTR [rip+0x1e368cb]        # 0x142666150
0x14082f885: lea    rcx,[rip+0x1cdf63c]        # 0x14250eec8
0x14082f88c: call   0x1400bd0c0
0x14082f891: test   rax,rax
0x14082f894: je     0x14082f8a9
0x14082f896: lea    rbx,[rax+0x4270]
0x14082f89d: mov    rcx,rbx
0x14082f8a0: call   0x140070b50
0x14082f8a5: test   al,al
0x14082f8a7: je     0x14082f8c7
0x14082f8a9: mov    r9d,0xffffffff
0x14082f8af: xor    r8d,r8d
0x14082f8b2: lea    rdx,[rbp+0x500]
0x14082f8b9: movzx  ecx,WORD PTR [rip+0x1e3688c]        # 0x14266614c
0x14082f8c0: call   0x140abd670
0x14082f8c5: jmp    0x14082f8eb
0x14082f8c7: mov    rdx,rbx
0x14082f8ca: lea    rcx,[rbp+0x500]
0x14082f8d1: call   0x140070bd0
0x14082f8d6: jmp    0x14082f8eb
0x14082f8d8: lea    rdx,[rip+0xdebbad]        # 0x14161b48c ; 'None'
0x14082f8df: lea    rcx,[rbp+0x500]
0x14082f8e6: call   0x140070bb0
0x14082f8eb: lea    rcx,[rbp+0x500]
0x14082f8f2: call   0x140546b30
0x14082f8f7: xor    r9d,r9d
0x14082f8fa: xor    r8d,r8d
0x14082f8fd: lea    rdx,[rbp+0x500]
0x14082f904: mov    rcx,r12
0x14082f907: call   0x140af3400
0x14082f90c: nop
0x14082f90d: lea    rcx,[rbp+0x500]
0x14082f914: call   0x140069460
0x14082f919: lea    rsi,[rip+0x1e336d0]        # 0x142662ff0
0x14082f920: jmp    0x14082fc63
0x14082f925: xor    eax,eax
0x14082f927: mov    edi,eax
0x14082f929: mov    ebx,eax
0x14082f92b: lea    rsi,[rip+0x1e336be]        # 0x142662ff0
0x14082f932: cmp    BYTE PTR [rbx+rsi*1+0x3118],0x0
0x14082f93a: je     0x14082fb21
0x14082f940: mov    edx,DWORD PTR [rbp-0x74]
0x14082f943: add    edx,0x2
0x14082f946: add    edx,edi
0x14082f948: mov    r8d,r13d
0x14082f94b: mov    rcx,r12
0x14082f94e: call   0x1400bc750
0x14082f953: xor    r8d,r8d
0x14082f956: mov    edx,0x7
0x14082f95b: xor    r9d,r9d
0x14082f95e: mov    rcx,r12
0x14082f961: call   0x1400bc760
0x14082f966: lea    rcx,[rbp+0x840]
0x14082f96d: call   0x140070cc0
0x14082f972: nop
0x14082f973: lea    rdx,[rbp+0x840]
0x14082f97a: mov    ecx,DWORD PTR [rsi+rbx*4+0x312c]
0x14082f981: call   0x140545610
0x14082f986: xor    r9d,r9d
0x14082f989: xor    r8d,r8d
0x14082f98c: lea    rdx,[rbp+0x840]
0x14082f993: mov    rcx,r12
0x14082f996: call   0x140af3400
0x14082f99b: test   BYTE PTR [rbx+rsi*1+0x3150],0x2
0x14082f9a3: je     0x14082fb15
0x14082f9a9: mov    edx,DWORD PTR [rbp-0x74]
0x14082f9ac: add    edx,0x2
0x14082f9af: add    edx,edi
0x14082f9b1: mov    r8d,0x6
0x14082f9b7: mov    rcx,r12
0x14082f9ba: call   0x1400bc750
0x14082f9bf: xor    r8d,r8d
0x14082f9c2: mov    edx,0x7
0x14082f9c7: mov    r9b,0x1
0x14082f9ca: mov    rcx,r12
0x14082f9cd: call   0x1400bc760
0x14082f9d2: movzx  eax,BYTE PTR [rbx+rsi*1+0x3150]
0x14082f9da: and    al,0x1c
0x14082f9dc: jne    0x14082f9f0
0x14082f9de: mov    r8b,0x1
0x14082f9e1: mov    dl,0x4e
0x14082f9e3: mov    rcx,r12
0x14082f9e6: call   0x1400bc7c0
0x14082f9eb: jmp    0x14082fb15
0x14082f9f0: cmp    al,0x4
0x14082f9f2: jne    0x14082fa06
0x14082f9f4: mov    r8b,0x1
0x14082f9f7: mov    dl,0x53
0x14082f9f9: mov    rcx,r12
0x14082f9fc: call   0x1400bc7c0
0x14082fa01: jmp    0x14082fb15
0x14082fa06: cmp    al,0x8
0x14082fa08: jne    0x14082fa1c
0x14082fa0a: mov    r8b,0x1
0x14082fa0d: mov    dl,0x45
0x14082fa0f: mov    rcx,r12
0x14082fa12: call   0x1400bc7c0
0x14082fa17: jmp    0x14082fb15
0x14082fa1c: cmp    al,0x10
0x14082fa1e: jne    0x14082fa32
0x14082fa20: mov    r8b,0x1
0x14082fa23: mov    dl,0x57
0x14082fa25: mov    rcx,r12
0x14082fa28: call   0x1400bc7c0
0x14082fa2d: jmp    0x14082fb15
0x14082fa32: cmp    al,0x14
0x14082fa34: jne    0x14082fa6c
0x14082fa36: lea    rdx,[rip+0xe9072b]        # 0x1416c0168 ; 'NW'
0x14082fa3d: lea    rcx,[rbp+0x28c0]
0x14082fa44: call   0x140069780
0x14082fa49: nop
0x14082fa4a: xor    r9d,r9d
0x14082fa4d: xor    r8d,r8d
0x14082fa50: lea    rdx,[rbp+0x28c0]
0x14082fa57: mov    rcx,r12
0x14082fa5a: call   0x140af3400
0x14082fa5f: nop
0x14082fa60: lea    rcx,[rbp+0x28c0]
0x14082fa67: jmp    0x14082fb0f
0x14082fa6c: cmp    al,0xc
0x14082fa6e: jne    0x14082faa3
0x14082fa70: lea    rdx,[rip+0xe906ed]        # 0x1416c0164 ; 'NE'
0x14082fa77: lea    rcx,[rbp+0x28e0]
0x14082fa7e: call   0x140069780
0x14082fa83: nop
0x14082fa84: xor    r9d,r9d
0x14082fa87: xor    r8d,r8d
0x14082fa8a: lea    rdx,[rbp+0x28e0]
0x14082fa91: mov    rcx,r12
0x14082fa94: call   0x140af3400
0x14082fa99: nop
0x14082fa9a: lea    rcx,[rbp+0x28e0]
0x14082faa1: jmp    0x14082fb0f
0x14082faa3: cmp    al,0x1c
0x14082faa5: jne    0x14082fada
0x14082faa7: lea    rdx,[rip+0xe906c2]        # 0x1416c0170 ; 'SW'
0x14082faae: lea    rcx,[rbp+0x2900]
0x14082fab5: call   0x140069780
0x14082faba: nop
0x14082fabb: xor    r9d,r9d
0x14082fabe: xor    r8d,r8d
0x14082fac1: lea    rdx,[rbp+0x2900]
0x14082fac8: mov    rcx,r12
0x14082facb: call   0x140af3400
0x14082fad0: nop
0x14082fad1: lea    rcx,[rbp+0x2900]
0x14082fad8: jmp    0x14082fb0f
0x14082fada: cmp    al,0x18
0x14082fadc: jne    0x14082fb15
0x14082fade: lea    rdx,[rip+0xe90687]        # 0x1416c016c ; 'SE'
0x14082fae5: lea    rcx,[rbp+0x2920]
0x14082faec: call   0x140069780
0x14082faf1: nop
0x14082faf2: xor    r9d,r9d
0x14082faf5: xor    r8d,r8d
0x14082faf8: lea    rdx,[rbp+0x2920]
0x14082faff: mov    rcx,r12
0x14082fb02: call   0x140af3400
0x14082fb07: nop
0x14082fb08: lea    rcx,[rbp+0x2920]
0x14082fb0f: call   0x140069460
0x14082fb14: nop
0x14082fb15: lea    rcx,[rbp+0x840]
0x14082fb1c: call   0x140069460
0x14082fb21: inc    edi
0x14082fb23: inc    rbx
0x14082fb26: cmp    rbx,0x9
0x14082fb2a: jl     0x14082f932
0x14082fb30: xor    r8d,r8d
0x14082fb33: mov    rcx,r12
0x14082fb36: cmp    DWORD PTR [rip+0x1e3661b],0xffffffff        # 0x142666158
0x14082fb3d: je     0x14082fb49
0x14082fb3f: mov    edx,0x6
0x14082fb44: mov    r9b,0x1
0x14082fb47: jmp    0x14082fb51
0x14082fb49: mov    edx,0x7
0x14082fb4e: xor    r9d,r9d
0x14082fb51: call   0x1400bc760
0x14082fb56: mov    edx,DWORD PTR [rbp-0x74]
0x14082fb59: add    edx,0xc
0x14082fb5c: xor    r8d,r8d
0x14082fb5f: mov    rcx,r12
0x14082fb62: call   0x1400bc750
0x14082fb67: lea    rdx,[rip+0xea9aea]        # 0x1416d9658 ; 'Strongest Odor: '
0x14082fb6e: lea    rcx,[rbp+0x2940]
0x14082fb75: call   0x140069780
0x14082fb7a: nop
0x14082fb7b: xor    r9d,r9d
0x14082fb7e: mov    r8b,0x3
0x14082fb81: lea    rdx,[rbp+0x2940]
0x14082fb88: mov    rcx,r12
0x14082fb8b: call   0x140af3400
0x14082fb90: nop
0x14082fb91: lea    rcx,[rbp+0x2940]
0x14082fb98: call   0x140069460
0x14082fb9d: lea    rcx,[rbp+0x520]
0x14082fba4: call   0x140070cc0
0x14082fba9: nop
0x14082fbaa: mov    edx,DWORD PTR [rip+0x1e365a8]        # 0x142666158
0x14082fbb0: cmp    edx,0xffffffff
0x14082fbb3: je     0x14082fc22
0x14082fbb5: cmp    BYTE PTR [rip+0x1e365a4],0x0        # 0x142666160
0x14082fbbc: je     0x14082fbc7
0x14082fbbe: lea    rdx,[rip+0xde3253]        # 0x141612e18 ; 'Death'
0x14082fbc5: jmp    0x14082fc29
0x14082fbc7: movzx  r8d,WORD PTR [rip+0x1e3658d]        # 0x14266615c
0x14082fbcf: lea    rcx,[rip+0x1cdf2f2]        # 0x14250eec8
0x14082fbd6: call   0x1400bd0c0
0x14082fbdb: test   rax,rax
0x14082fbde: je     0x14082fbf3
0x14082fbe0: lea    rbx,[rax+0x4270]
0x14082fbe7: mov    rcx,rbx
0x14082fbea: call   0x140070b50
0x14082fbef: test   al,al
0x14082fbf1: je     0x14082fc11
0x14082fbf3: mov    r9d,0xffffffff
0x14082fbf9: xor    r8d,r8d
0x14082fbfc: lea    rdx,[rbp+0x520]
0x14082fc03: movzx  ecx,WORD PTR [rip+0x1e3654e]        # 0x142666158
0x14082fc0a: call   0x140abd670
0x14082fc0f: jmp    0x14082fc35
0x14082fc11: mov    rdx,rbx
0x14082fc14: lea    rcx,[rbp+0x520]
0x14082fc1b: call   0x140070bd0
0x14082fc20: jmp    0x14082fc35
0x14082fc22: lea    rdx,[rip+0xdeb863]        # 0x14161b48c ; 'None'
0x14082fc29: lea    rcx,[rbp+0x520]
0x14082fc30: call   0x140070bb0
0x14082fc35: lea    rcx,[rbp+0x520]
0x14082fc3c: call   0x140546b30
0x14082fc41: xor    r9d,r9d
0x14082fc44: xor    r8d,r8d
0x14082fc47: lea    rdx,[rbp+0x520]
0x14082fc4e: mov    rcx,r12
0x14082fc51: call   0x140af3400
0x14082fc56: nop
0x14082fc57: lea    rcx,[rbp+0x520]
0x14082fc5e: call   0x140069460
0x14082fc63: xor    r13b,r13b
0x14082fc66: mov    DWORD PTR [rsp+0x7c],r13d
0x14082fc6b: cmp    BYTE PTR [rip+0x1e333d2],r13b        # 0x142663044
0x14082fc72: jne    0x14082fcf3
0x14082fc74: mov    edx,DWORD PTR [rip+0x1e334d6]        # 0x142663150
0x14082fc7a: lea    rcx,[rip+0x1cda5d7]        # 0x14250a258
0x14082fc81: call   0x140073ba0
0x14082fc86: mov    rdi,rax
0x14082fc89: test   rax,rax
0x14082fc8c: je     0x14082fd71
0x14082fc92: mov    edx,0x5
0x14082fc97: lea    rcx,[rax+0x68]
0x14082fc9b: call   0x1400735c0
0x14082fca0: test   al,al
0x14082fca2: jne    0x14082fcda
0x14082fca4: mov    edx,0x6
0x14082fca9: lea    rcx,[rdi+0x68]
0x14082fcad: call   0x1400735c0
0x14082fcb2: test   al,al
0x14082fcb4: jne    0x14082fcda
0x14082fcb6: mov    edx,0x2
0x14082fcbb: lea    rcx,[rdi+0x68]
0x14082fcbf: call   0x1400735c0
0x14082fcc4: test   al,al
0x14082fcc6: jne    0x14082fcda
0x14082fcc8: mov    edx,0x3
0x14082fccd: lea    rcx,[rdi+0x68]
0x14082fcd1: call   0x1400735c0
0x14082fcd6: test   al,al
0x14082fcd8: je     0x14082fce3
0x14082fcda: cmp    BYTE PTR [rip+0x1e3bccf],0x0        # 0x14266b9b0
0x14082fce1: jne    0x14082fcee
0x14082fce3: cmp    WORD PTR [rdi+0x8],0x0
0x14082fce8: jle    0x14082fd71
0x14082fcee: mov    r13b,0x1
0x14082fcf1: jmp    0x14082fd6c
0x14082fcf3: lea    rcx,[rip+0x1bd784e]        # 0x142407548
0x14082fcfa: call   0x140070480
0x14082fcff: test   rax,rax
0x14082fd02: je     0x14082fd71
0x14082fd04: mov    rcx,QWORD PTR [rip+0x1bd7885]        # 0x142407590
0x14082fd0b: test   rcx,rcx
0x14082fd0e: je     0x14082fd71
0x14082fd10: lea    r9,[rbp-0x18]
0x14082fd14: lea    r8,[rbp-0x28]
0x14082fd18: lea    rdx,[rbp-0x24]
0x14082fd1c: call   0x14137fd40
0x14082fd21: movzx  r9d,WORD PTR [rbp-0x18]
0x14082fd26: movzx  r8d,WORD PTR [rbp-0x28]
0x14082fd2b: movzx  edx,WORD PTR [rbp-0x24]
0x14082fd2f: lea    rcx,[rip+0x1bc3c3a]        # 0x1423f3970
0x14082fd36: call   0x14007f270
0x14082fd3b: and    eax,0x8000
0x14082fd40: setne  bl
0x14082fd43: movzx  r9d,WORD PTR [rbp-0x18]
0x14082fd48: movzx  r8d,WORD PTR [rbp-0x28]
0x14082fd4d: movzx  edx,WORD PTR [rbp-0x24]
0x14082fd51: lea    rcx,[rip+0x1bc3c18]        # 0x1423f3970
0x14082fd58: call   0x140314580
0x14082fd5d: movzx  r13d,bl
0x14082fd61: test   al,al
0x14082fd63: mov    eax,0x1
0x14082fd68: cmovne r13d,eax
0x14082fd6c: mov    DWORD PTR [rsp+0x7c],r13d
0x14082fd71: movzx  edx,WORD PTR [rbp-0x7c]
0x14082fd75: mov    rcx,rsi
0x14082fd78: call   0x140847620
0x14082fd7d: movsx  r15d,ax
0x14082fd81: movzx  r8d,WORD PTR [rbp-0x2c]
0x14082fd86: movzx  edx,WORD PTR [rbp-0x48]
0x14082fd8a: mov    rcx,QWORD PTR [rip+0x1cde247]        # 0x14250dfd8
0x14082fd91: call   0x140f93c30
0x14082fd96: movzx  esi,al
0x14082fd99: movsx  rdx,WORD PTR [rbp-0x48]
0x14082fd9e: mov    rbx,rdx
0x14082fda1: mov    rcx,QWORD PTR [rip+0x1cde230]        # 0x14250dfd8
0x14082fda8: mov    r11,QWORD PTR [rcx+0x2b0]
0x14082fdaf: movsx  r8,WORD PTR [rbp-0x2c]
0x14082fdb4: imul   r10,r8,0x70
0x14082fdb8: mov    r9,QWORD PTR [r11+rdx*8]
0x14082fdbc: movzx  r14d,WORD PTR [r9+r10*1+0x46]
0x14082fdc2: movzx  r12d,BYTE PTR [rcx+0xac]
0x14082fdca: call   0x140f93c80
0x14082fdcf: movzx  edi,al
0x14082fdd2: mov    BYTE PTR [rsp+0x78],al
0x14082fdd6: movzx  r8d,WORD PTR [rbp-0x68]
0x14082fddb: movzx  edx,WORD PTR [rbp-0x7c]
0x14082fddf: mov    rcx,QWORD PTR [rip+0x1cde1f2]        # 0x14250dfd8
0x14082fde6: call   0x140f93dd0
0x14082fdeb: movzx  ebx,al
0x14082fdee: mov    DWORD PTR [rsp+0x74],ebx
0x14082fdf2: test   dil,dil
0x14082fdf5: je     0x14082fe03
0x14082fdf7: movsx  eax,al
0x14082fdfa: cdq
0x14082fdfb: sub    eax,edx
0x14082fdfd: sar    eax,1
0x14082fdff: mov    DWORD PTR [rsp+0x74],eax
0x14082fe03: movzx  r8d,WORD PTR [rbp-0x2c]
0x14082fe08: movzx  edx,WORD PTR [rbp-0x48]
0x14082fe0c: mov    rcx,QWORD PTR [rip+0x1cde1c5]        # 0x14250dfd8
0x14082fe13: call   0x140f934b0
0x14082fe18: mov    edi,0xfffffc18
0x14082fe1d: mov    edx,0x1fa
0x14082fe22: movzx  ecx,r15w
0x14082fe26: sub    cx,dx
0x14082fe29: mov    eax,0x639
0x14082fe2e: mov    r8d,DWORD PTR [rip+0x1bbfdcf]        # 0x1423efc04
0x14082fe35: cmp    cx,ax
0x14082fe38: ja     0x14082fe98
0x14082fe3a: mov    eax,r15d
0x14082fe3d: sub    eax,edx
0x14082fe3f: imul   ecx,eax,0x68
0x14082fe42: mov    eax,0x523a759
0x14082fe47: imul   ecx
0x14082fe49: sar    edx,0x5
0x14082fe4c: mov    eax,edx
0x14082fe4e: shr    eax,0x1f
0x14082fe51: add    edx,eax
0x14082fe53: lea    edi,[rdx-0xc]
0x14082fe56: mov    rax,QWORD PTR [rip+0x1cde17b]        # 0x14250dfd8
0x14082fe5d: cmp    WORD PTR [rax+0xb2],0x0
0x14082fe65: jne    0x14082fe6e
0x14082fe67: mov    edi,0x5b
0x14082fe6c: sub    edi,edx
0x14082fe6e: cmp    r8d,0x50
0x14082fe72: jle    0x14082fe98
0x14082fe74: lea    ecx,[rdi-0x28]
0x14082fe77: imul   ecx,r8d
0x14082fe7b: mov    eax,0x66666667
0x14082fe80: imul   ecx
0x14082fe82: mov    edi,edx
0x14082fe84: sar    edi,0x5
0x14082fe87: mov    eax,edi
0x14082fe89: shr    eax,0x1f
0x14082fe8c: add    edi,eax
0x14082fe8e: mov    eax,r8d
0x14082fe91: cdq
0x14082fe92: sub    eax,edx
0x14082fe94: sar    eax,1
0x14082fe96: add    edi,eax
0x14082fe98: test   r13b,r13b
0x14082fe9b: lea    r13,[rip+0x1e3c9ce]        # 0x14266c870
0x14082fea2: mov    rcx,r13
0x14082fea5: je     0x14082fed5
0x14082fea7: xor    r8d,r8d
0x14082feaa: xor    edx,edx
0x14082feac: mov    r9b,0x1
0x14082feaf: call   0x1400bc760
0x14082feb4: xor    r8d,r8d
0x14082feb7: xor    edx,edx
0x14082feb9: mov    rcx,r13
0x14082febc: call   0x1400bc750
0x14082fec1: mov    r8b,0x1
0x14082fec4: mov    dl,0x57
0x14082fec6: mov    rcx,r13
0x14082fec9: call   0x1400bc7c0
0x14082fece: xor    edx,edx
0x14082fed0: jmp    0x14082ffa6
0x14082fed5: cmp    edi,0xfffffc18
0x14082fedb: jne    0x14082ff21
0x14082fedd: xor    r8d,r8d
0x14082fee0: mov    ebx,0x1
0x14082fee5: mov    edx,ebx
0x14082fee7: movzx  r9d,bl
0x14082feeb: call   0x1400bc760
0x14082fef0: xor    r8d,r8d
0x14082fef3: xor    edx,edx
0x14082fef5: mov    rcx,r13
0x14082fef8: call   0x1400bc750
0x14082fefd: movzx  r8d,bl
0x14082ff01: mov    dl,0x57
0x14082ff03: mov    rcx,r13
0x14082ff06: call   0x1400bc7c0
0x14082ff0b: xor    r8d,r8d
0x14082ff0e: mov    edx,ebx
0x14082ff10: movzx  r9d,bl
0x14082ff14: mov    rcx,r13
0x14082ff17: call   0x1400bc760
0x14082ff1c: jmp    0x14082ffb9
0x14082ff21: test   edi,edi
0x14082ff23: jg     0x14082ff59
0x14082ff25: xor    r8d,r8d
0x14082ff28: mov    edx,0x6
0x14082ff2d: mov    r9b,0x1
0x14082ff30: call   0x1400bc760
0x14082ff35: xor    r8d,r8d
0x14082ff38: xor    edx,edx
0x14082ff3a: mov    rcx,r13
0x14082ff3d: call   0x1400bc750
0x14082ff42: mov    r8b,0x1
0x14082ff45: mov    dl,0x57
0x14082ff47: mov    rcx,r13
0x14082ff4a: call   0x1400bc7c0
0x14082ff4f: mov    edx,0x7
0x14082ff54: xor    r9d,r9d
0x14082ff57: jmp    0x14082ffa9
0x14082ff59: lea    eax,[r8-0x1]
0x14082ff5d: xor    r8d,r8d
0x14082ff60: mov    edx,0x7
0x14082ff65: cmp    edi,eax
0x14082ff67: jl     0x14082ff6e
0x14082ff69: xor    r9d,r9d
0x14082ff6c: jmp    0x14082ff71
0x14082ff6e: mov    r9b,0x1
0x14082ff71: call   0x1400bc760
0x14082ff76: xor    r8d,r8d
0x14082ff79: xor    edx,edx
0x14082ff7b: mov    rcx,r13
0x14082ff7e: call   0x1400bc750
0x14082ff83: mov    r8b,0x1
0x14082ff86: mov    dl,0x57
0x14082ff88: mov    rcx,r13
0x14082ff8b: call   0x1400bc7c0
0x14082ff90: mov    eax,DWORD PTR [rip+0x1bbfc6e]        # 0x1423efc04
0x14082ff96: dec    eax
0x14082ff98: cmp    edi,eax
0x14082ff9a: mov    edx,0x6
0x14082ff9f: jge    0x14082ffa6
0x14082ffa1: mov    edx,0x7
0x14082ffa6: mov    r9b,0x1
0x14082ffa9: xor    r8d,r8d
0x14082ffac: mov    rcx,r13
0x14082ffaf: call   0x1400bc760
0x14082ffb4: mov    ebx,0x1
0x14082ffb9: mov    r8d,DWORD PTR [rip+0x1bbfc44]        # 0x1423efc04
0x14082ffc0: dec    r8d
0x14082ffc3: xor    edx,edx
0x14082ffc5: mov    rcx,r13
0x14082ffc8: call   0x1400bc750
0x14082ffcd: mov    r8b,0x1
0x14082ffd0: mov    dl,0x45
0x14082ffd2: mov    rcx,r13
0x14082ffd5: call   0x1400bc7c0
0x14082ffda: movsx  eax,BYTE PTR [rip+0x10c92b5]        # 0x1418f9296
0x14082ffe1: imul   r8d,eax,0x2760
0x14082ffe8: add    r8d,DWORD PTR [rip+0x1923ed5]        # 0x142153ec4
0x14082ffef: imul   ecx,r15d,0x9d80
0x14082fff6: mov    eax,0x1b4e81b5
0x14082fffb: imul   ecx
0x14082fffd: mov    r9d,edx
0x140830000: sar    r9d,0x8
0x140830004: mov    eax,r9d
0x140830007: shr    eax,0x1f
0x14083000a: add    r9d,eax
0x14083000d: mov    r10,QWORD PTR [rip+0x1cddfc4]        # 0x14250dfd8
0x140830014: add    r9d,DWORD PTR [r10+0xa8]
0x14083001b: sub    r9d,r8d
0x14083001e: add    r9d,0x9d80
0x140830025: mov    eax,0xd00d00d1
0x14083002a: imul   r9d
0x14083002d: add    edx,r9d
0x140830030: sar    edx,0xf
0x140830033: mov    ecx,edx
0x140830035: shr    ecx,0x1f
0x140830038: add    edx,ecx
0x14083003a: imul   ecx,edx,0x9d80
0x140830040: sub    r9d,ecx
0x140830043: imul   ecx,r9d,0x960
0x14083004a: mov    eax,0xd00d00d1
0x14083004f: imul   ecx
0x140830051: add    edx,ecx
0x140830053: sar    edx,0xf
0x140830056: mov    r8d,edx
0x140830059: shr    r8d,0x1f
0x14083005d: add    edx,0x514
0x140830063: add    r8d,edx
0x140830066: mov    eax,0x1b4e81b5
0x14083006b: imul   r8d
0x14083006e: sar    edx,0x8
0x140830071: mov    ecx,edx
0x140830073: shr    ecx,0x1f
0x140830076: add    edx,ecx
0x140830078: imul   ecx,edx,0x960
0x14083007e: sub    r8d,ecx
0x140830081: mov    r13d,0xffffffff
0x140830087: add    r8d,0xfffffe06
0x14083008e: mov    r11d,0x639
0x140830094: cmp    r8d,r11d
0x140830097: ja     0x1408300fd
0x140830099: imul   ecx,r8d,0x68
0x14083009d: mov    eax,0x523a759
0x1408300a2: imul   ecx
0x1408300a4: sar    edx,0x5
0x1408300a7: mov    eax,edx
0x1408300a9: shr    eax,0x1f
0x1408300ac: add    edx,eax
0x1408300ae: lea    r13d,[rdx-0xc]
0x1408300b2: cmp    WORD PTR [r10+0xb2],0x0
0x1408300bb: jne    0x1408300c6
0x1408300bd: mov    r13d,0x5b
0x1408300c3: sub    r13d,edx
0x1408300c6: mov    r8d,DWORD PTR [rip+0x1bbfb37]        # 0x1423efc04
0x1408300cd: cmp    r8d,0x50
0x1408300d1: jle    0x1408300fd
0x1408300d3: lea    ecx,[r13-0x28]
0x1408300d7: imul   ecx,r8d
0x1408300db: mov    eax,0x66666667
0x1408300e0: imul   ecx
0x1408300e2: mov    r13d,edx
0x1408300e5: sar    r13d,0x5
0x1408300e9: mov    ecx,r13d
0x1408300ec: shr    ecx,0x1f
0x1408300ef: add    r13d,ecx
0x1408300f2: mov    eax,r8d
0x1408300f5: cdq
0x1408300f6: sub    eax,edx
0x1408300f8: sar    eax,1
0x1408300fa: add    r13d,eax
0x1408300fd: cmp    BYTE PTR [rsp+0x7c],0x0
0x140830102: je     0x140830161
0x140830104: xor    r8d,r8d
0x140830107: xor    edx,edx
0x140830109: mov    r9b,0x1
0x14083010c: lea    r15,[rip+0x1e3c75d]        # 0x14266c870
0x140830113: mov    rcx,r15
0x140830116: call   0x1400bc760
0x14083011b: mov    r8d,ebx
0x14083011e: xor    edx,edx
0x140830120: mov    rcx,r15
0x140830123: call   0x1400bc750
0x140830128: mov    eax,DWORD PTR [rip+0x1bbfad6]        # 0x1423efc04
0x14083012e: add    eax,0xfffffffe
0x140830131: cmp    eax,0x1
0x140830134: jl     0x140830593
0x14083013a: nop    WORD PTR [rax+rax*1+0x0]
0x140830140: mov    r8b,0x1
0x140830143: mov    dl,0xb0
0x140830145: mov    rcx,r15
0x140830148: call   0x1400bc7c0
0x14083014d: inc    ebx
0x14083014f: mov    eax,DWORD PTR [rip+0x1bbfaaf]        # 0x1423efc04
0x140830155: add    eax,0xfffffffe
0x140830158: cmp    ebx,eax
0x14083015a: jle    0x140830140
0x14083015c: jmp    0x140830593
0x140830161: movzx  eax,r15w
0x140830165: mov    r10d,0x1fa
0x14083016b: sub    ax,r10w
0x14083016f: cmp    sil,0x3
0x140830173: jl     0x140830201
0x140830179: xor    r8d,r8d
0x14083017c: movzx  edx,r8w
0x140830180: xor    r9b,r9b
0x140830183: cmp    ax,0x5d
0x140830187: jbe    0x1408301ac
0x140830189: mov    ecx,0x7d6
0x14083018e: movzx  eax,r15w
0x140830192: sub    ax,cx
0x140830195: cmp    ax,0x5d
0x140830199: jbe    0x1408301ac
0x14083019b: sub    r15w,r10w
0x14083019f: cmp    r15w,r11w
0x1408301a3: ja     0x1408301af
0x1408301a5: mov    edx,0x7
0x1408301aa: jmp    0x1408301af
0x1408301ac: mov    r9b,0x1
0x1408301af: lea    r15,[rip+0x1e3c6ba]        # 0x14266c870
0x1408301b6: mov    rcx,r15
0x1408301b9: call   0x1400bc760
0x1408301be: mov    r8d,ebx
0x1408301c1: xor    edx,edx
0x1408301c3: mov    rcx,r15
0x1408301c6: call   0x1400bc750
0x1408301cb: mov    eax,DWORD PTR [rip+0x1bbfa33]        # 0x1423efc04
0x1408301d1: add    eax,0xfffffffe
0x1408301d4: cmp    eax,0x1
0x1408301d7: jl     0x140830593
0x1408301dd: nop    DWORD PTR [rax]
0x1408301e0: mov    r8b,0x1
0x1408301e3: mov    dl,0xdb
0x1408301e5: mov    rcx,r15
0x1408301e8: call   0x1400bc7c0
0x1408301ed: inc    ebx
0x1408301ef: mov    eax,DWORD PTR [rip+0x1bbfa0f]        # 0x1423efc04
0x1408301f5: add    eax,0xfffffffe
0x1408301f8: cmp    ebx,eax
0x1408301fa: jle    0x1408301e0
0x1408301fc: jmp    0x140830593
0x140830201: mov    bl,0xdb
0x140830203: xor    r11d,r11d
0x140830206: movzx  edx,r11w
0x14083020a: movzx  r9d,r11w
0x14083020e: cmp    ax,0x5d
0x140830212: jbe    0x140830241
0x140830214: mov    ecx,0x7d6
0x140830219: movzx  eax,r15w
0x14083021d: sub    ax,cx
0x140830220: cmp    ax,0x5d
0x140830224: jbe    0x140830241
0x140830226: movzx  eax,r15w
0x14083022a: sub    ax,r10w
0x14083022e: mov    ecx,0x639
0x140830233: cmp    ax,cx
0x140830236: mov    ecx,0x3
0x14083023b: ja     0x14083024b
0x14083023d: mov    edx,ecx
0x14083023f: jmp    0x14083024b
0x140830241: mov    edx,0x4
0x140830246: mov    ecx,0x3
0x14083024b: movzx  r8d,dx
0x14083024f: movzx  esi,dx
0x140830252: mov    eax,0x834
0x140830257: cmp    r15w,r10w
0x14083025b: jl     0x1408303b9
0x140830261: cmp    r15w,ax
0x140830265: jge    0x1408303b9
0x14083026b: movzx  eax,r14w
0x14083026f: and    ax,0xc
0x140830273: cmp    ax,0xc
0x140830277: jne    0x1408302a3
0x140830279: mov    eax,ecx
0x14083027b: mov    esi,0x1
0x140830280: movzx  r10d,r14w
0x140830284: and    r10w,0x10
0x140830289: and    r14w,0x60
0x14083028e: cmp    r14w,0x60
0x140830293: je     0x1408302d6
0x140830295: cmp    r14w,0x40
0x14083029a: jne    0x1408302c0
0x14083029c: mov    ecx,0x2
0x1408302a1: jmp    0x1408302d6
0x1408302a3: cmp    ax,0x8
0x1408302a7: jne    0x1408302b0
0x1408302a9: mov    eax,0x2
0x1408302ae: jmp    0x14083027b
0x1408302b0: cmp    ax,0x4
0x1408302b4: jne    0x14083027b
0x1408302b6: mov    esi,0x1
0x1408302bb: movzx  eax,si
0x1408302be: jmp    0x140830280
0x1408302c0: cmp    r14w,0x20
0x1408302c5: jne    0x1408302cc
0x1408302c7: movzx  ecx,si
0x1408302ca: jmp    0x1408302d6
0x1408302cc: movzx  ecx,r14w
0x1408302d0: test   r14w,r14w
0x1408302d4: je     0x14083033e
0x1408302d6: cmp    ax,0x3
0x1408302da: jne    0x140830322
0x1408302dc: cmp    cx,ax
0x1408302df: jne    0x1408302f2
0x1408302e1: mov    bl,0x14
0x1408302e3: movzx  edx,r11w
0x1408302e7: mov    r9d,esi
0x1408302ea: movzx  esi,dx
0x1408302ed: jmp    0x1408303b9
0x1408302f2: cmp    cx,0x2
0x1408302f6: jne    0x14083030a
0x1408302f8: mov    bl,0x14
0x1408302fa: movzx  edx,r11w
0x1408302fe: movzx  r9d,si
0x140830302: movzx  esi,dx
0x140830305: jmp    0x1408303b9
0x14083030a: cmp    cx,0x1
0x14083030e: jne    0x140830339
0x140830310: mov    bl,0x14
0x140830312: movzx  edx,r11w
0x140830316: movzx  r9d,si
0x14083031a: movzx  esi,dx
0x14083031d: jmp    0x1408303b9
0x140830322: cmp    cx,0x3
0x140830326: je     0x140830334
0x140830328: cmp    cx,0x2
0x14083032c: je     0x140830334
0x14083032e: cmp    cx,0x1
0x140830332: jne    0x140830339
0x140830334: mov    edx,0x7
0x140830339: movzx  esi,dx
0x14083033c: jmp    0x1408303b9
0x14083033e: test   r10w,r10w
0x140830342: je     0x14083037e
0x140830344: cmp    ax,0x3
0x140830348: jne    0x140830355
0x14083034a: mov    bl,0x14
0x14083034c: movzx  edx,r11w
0x140830350: mov    esi,r11d
0x140830353: jmp    0x1408303b3
0x140830355: mov    edx,0x7
0x14083035a: cmp    ax,0x2
0x14083035e: jne    0x140830368
0x140830360: mov    bl,0xe1
0x140830362: movzx  esi,r8w
0x140830366: jmp    0x1408303b9
0x140830368: movzx  r9d,si
0x14083036c: movzx  esi,r8w
0x140830370: cmp    ax,0x1
0x140830374: jne    0x14083037a
0x140830376: mov    bl,0xe0
0x140830378: jmp    0x1408303b9
0x14083037a: mov    bl,0xf0
0x14083037c: jmp    0x1408303b9
0x14083037e: cmp    ax,0x3
0x140830382: jne    0x140830390
0x140830384: mov    bl,0x14
0x140830386: movzx  edx,r11w
0x14083038a: movzx  esi,r11w
0x14083038e: jmp    0x1408303b3
0x140830390: cmp    ax,0x2
0x140830394: jne    0x1408303a3
0x140830396: mov    bl,0xe1
0x140830398: mov    edx,0x7
0x14083039d: movzx  esi,r8w
0x1408303a1: jmp    0x1408303b9
0x1408303a3: movzx  esi,dx
0x1408303a6: cmp    ax,0x1
0x1408303aa: jne    0x1408303b9
0x1408303ac: mov    bl,0xe0
0x1408303ae: mov    edx,0x7
0x1408303b3: mov    r9d,0x1
0x1408303b9: movzx  r8d,si
0x1408303bd: lea    r14,[rip+0x1e3c4ac]        # 0x14266c870
0x1408303c4: mov    rcx,r14
0x1408303c7: call   0x1400bc760
0x1408303cc: xor    edx,edx
0x1408303ce: mov    r8d,0x1
0x1408303d4: mov    rcx,r14
0x1408303d7: call   0x1400bc750
0x1408303dc: mov    r14d,0x1
0x1408303e2: mov    eax,DWORD PTR [rip+0x1bbf81c]        # 0x1423efc04
0x1408303e8: add    eax,0xfffffffe
0x1408303eb: cmp    eax,r14d
0x1408303ee: jl     0x140830413
0x1408303f0: mov    r8b,0x1
0x1408303f3: movzx  edx,bl
0x1408303f6: lea    rcx,[rip+0x1e3c473]        # 0x14266c870
0x1408303fd: call   0x1400bc7c0
0x140830402: inc    r14d
0x140830405: mov    eax,DWORD PTR [rip+0x1bbf7f9]        # 0x1423efc04
0x14083040b: add    eax,0xfffffffe
0x14083040e: cmp    r14d,eax
0x140830411: jle    0x1408303f0
0x140830413: movzx  ecx,BYTE PTR [rsp+0x78]
0x140830418: cmp    r13d,0x1
0x14083041c: jl     0x14083052d
0x140830422: mov    eax,DWORD PTR [rip+0x1bbf7dc]        # 0x1423efc04
0x140830428: add    eax,0xfffffffe
0x14083042b: cmp    r13d,eax
0x14083042e: jg     0x14083052d
0x140830434: lea    eax,[r12-0xd]
0x140830439: cmp    al,0x1
0x14083043b: jbe    0x14083052d
0x140830441: test   cl,cl
0x140830443: je     0x14083045f
0x140830445: mov    eax,0x1f9
0x14083044a: cmp    r15w,ax
0x14083044e: jbe    0x14083045f
0x140830450: mov    eax,0x834
0x140830455: cmp    r15w,ax
0x140830459: jl     0x14083052d
0x14083045f: mov    eax,DWORD PTR [rsp+0x74]
0x140830463: test   al,al
0x140830465: je     0x14083052d
0x14083046b: test   cl,cl
0x14083046d: je     0x14083047e
0x14083046f: mov    bl,0x7
0x140830471: cmp    al,0x3
0x140830473: jge    0x1408304f0
0x140830475: cmp    al,0x2
0x140830477: jne    0x1408304a8
0x140830479: xor    r9b,r9b
0x14083047c: jmp    0x1408304f3
0x14083047e: test   r12b,r12b
0x140830481: je     0x1408304ee
0x140830483: cmp    r12b,0x1b
0x140830487: je     0x1408304ee
0x140830489: cmp    r12b,0x17
0x14083048d: jl     0x140830493
0x14083048f: mov    bl,0x28
0x140830491: jmp    0x1408304f0
0x140830493: cmp    r12b,0x13
0x140830497: jl     0x1408304a0
0x140830499: mov    bl,0x28
0x14083049b: xor    r9b,r9b
0x14083049e: jmp    0x1408304f3
0x1408304a0: cmp    r12b,0xf
0x1408304a4: jl     0x1408304b4
0x1408304a6: mov    bl,0x28
0x1408304a8: xor    r12d,r12d
0x1408304ab: movzx  edx,r12w
0x1408304af: mov    r9b,0x1
0x1408304b2: jmp    0x1408304f8
0x1408304b4: cmp    r12b,0x4
0x1408304b8: jg     0x1408304be
0x1408304ba: mov    bl,0x29
0x1408304bc: jmp    0x1408304f0
0x1408304be: cmp    r12b,0x8
0x1408304c2: jg     0x1408304cb
0x1408304c4: mov    bl,0x29
0x1408304c6: xor    r9b,r9b
0x1408304c9: jmp    0x1408304f3
0x1408304cb: cmp    r12b,0xc
0x1408304cf: jg     0x1408304df
0x1408304d1: mov    bl,0x29
0x1408304d3: xor    r12d,r12d
0x1408304d6: movzx  edx,r12w
0x1408304da: mov    r9b,0x1
0x1408304dd: jmp    0x1408304f8
0x1408304df: movzx  ebx,BYTE PTR [rbp-0x77]
0x1408304e3: movzx  edx,WORD PTR [rbp+0x18]
0x1408304e7: movzx  r9d,BYTE PTR [rbp-0x77]
0x1408304ec: jmp    0x1408304f8
0x1408304ee: mov    bl,0x4f
0x1408304f0: mov    r9b,0x1
0x1408304f3: mov    edx,0x7
0x1408304f8: movzx  r8d,si
0x1408304fc: lea    r15,[rip+0x1e3c36d]        # 0x14266c870
0x140830503: mov    rcx,r15
0x140830506: call   0x1400bc760
0x14083050b: mov    r8d,r13d
0x14083050e: xor    edx,edx
0x140830510: mov    rcx,r15
0x140830513: call   0x1400bc750
0x140830518: mov    r8b,0x1
0x14083051b: movzx  edx,bl
0x14083051e: mov    rcx,r15
0x140830521: call   0x1400bc7c0
0x140830526: movzx  ecx,BYTE PTR [rsp+0x78]
0x14083052b: jmp    0x140830534
0x14083052d: lea    r15,[rip+0x1e3c33c]        # 0x14266c870
0x140830534: cmp    edi,0x1
0x140830537: jl     0x140830593
0x140830539: mov    eax,DWORD PTR [rip+0x1bbf6c5]        # 0x1423efc04
0x14083053f: add    eax,0xfffffffe
0x140830542: cmp    edi,eax
0x140830544: jg     0x140830593
0x140830546: mov    r9b,0x1
0x140830549: movzx  r8d,si
0x14083054d: test   cl,cl
0x14083054f: mov    rcx,r15
0x140830552: je     0x14083056f
0x140830554: mov    edx,0x7
0x140830559: call   0x1400bc760
0x14083055e: mov    r8d,edi
0x140830561: xor    edx,edx
0x140830563: mov    rcx,r15
0x140830566: call   0x1400bc750
0x14083056b: mov    dl,0x9
0x14083056d: jmp    0x140830588
0x14083056f: mov    edx,0x6
0x140830574: call   0x1400bc760
0x140830579: mov    r8d,edi
0x14083057c: xor    edx,edx
0x14083057e: mov    rcx,r15
0x140830581: call   0x1400bc750
0x140830586: mov    dl,0xf
0x140830588: mov    r8b,0x1
0x14083058b: mov    rcx,r15
0x14083058e: call   0x1400bc7c0
0x140830593: cmp    BYTE PTR [rbp-0x78],0x0
0x140830597: jne    0x140831d14
0x14083059d: cmp    BYTE PTR [rsp+0x7c],0x0
0x1408305a2: jne    0x140830bdf
0x1408305a8: mov    rcx,QWORD PTR [rip+0x1cdda29]        # 0x14250dfd8
0x1408305af: add    rcx,0xe8
0x1408305b6: mov    BYTE PTR [rsp+0x20],0x1
0x1408305bb: mov    r9b,0x1
0x1408305be: movzx  r8d,WORD PTR [rbp-0x68]
0x1408305c3: movzx  edx,WORD PTR [rbp-0x7c]
0x1408305c7: call   0x140fd99b0
0x1408305cc: mov    ecx,DWORD PTR [rbp+0x38]
0x1408305cf: mov    WORD PTR [rsp+0x20],cx
0x1408305d4: movzx  r9d,WORD PTR [rbp+0x3c]
0x1408305d9: lea    r8,[rbp-0x44]
0x1408305dd: lea    rdx,[rbp-0x40]
0x1408305e1: mov    rcx,rax
0x1408305e4: call   0x140fda9b0
0x1408305e9: lea    rcx,[rbp+0x420]
0x1408305f0: call   0x140070cc0
0x1408305f5: nop
0x1408305f6: xor    r8d,r8d
0x1408305f9: mov    edx,0x7
0x1408305fe: xor    r9d,r9d
0x140830601: mov    rcx,r15
0x140830604: call   0x1400bc760
0x140830609: mov    edx,DWORD PTR [rip+0x1bbf5f9]        # 0x1423efc08
0x14083060f: add    edx,0xfffffffe
0x140830612: mov    edi,0x5
0x140830617: mov    r8d,edi
0x14083061a: mov    rcx,r15
0x14083061d: call   0x1400bc750
0x140830622: mov    rcx,QWORD PTR [rip+0x1cdd9af]        # 0x14250dfd8
0x140830629: add    rcx,0x178
0x140830630: lea    rdx,[rbp+0x90]
0x140830637: call   0x140070870
0x14083063c: mov    rcx,QWORD PTR [rip+0x1cdd995]        # 0x14250dfd8
0x140830643: add    rcx,0x178
0x14083064a: lea    rdx,[rbp+0x180]
0x140830651: call   0x140070860
0x140830656: lea    r8,[rbp+0x180]
0x14083065d: lea    rdx,[rbp-0x77]
0x140830661: lea    rcx,[rbp+0x90]
0x140830668: call   0x140070450
0x14083066d: xor    edx,edx
0x14083066f: movzx  ecx,BYTE PTR [rax]
0x140830672: call   0x140066de0
0x140830677: test   al,al
0x140830679: je     0x1408306fa
0x14083067b: mov    esi,DWORD PTR [rbp-0x6c]
0x14083067e: mov    r14d,DWORD PTR [rbp-0x70]
0x140830682: lea    rcx,[rbp+0x90]
0x140830689: call   0x140070440
0x14083068e: mov    rbx,QWORD PTR [rax]
0x140830691: lea    rcx,[rbx+0x2a0]
0x140830698: xor    edx,edx
0x14083069a: call   0x1400735c0
0x14083069f: test   al,al
0x1408306a1: jne    0x1408306c9
0x1408306a3: cmp    esi,DWORD PTR [rbx+0x1f8]
0x1408306a9: jl     0x1408306c9
0x1408306ab: cmp    esi,DWORD PTR [rbx+0x200]
0x1408306b1: jg     0x1408306c9
0x1408306b3: cmp    r14d,DWORD PTR [rbx+0x1fc]
0x1408306ba: jl     0x1408306c9
0x1408306bc: cmp    r14d,DWORD PTR [rbx+0x204]
0x1408306c3: jle    0x1408308f4
0x1408306c9: lea    rcx,[rbp+0x90]
0x1408306d0: call   0x140070430
0x1408306d5: lea    r8,[rbp+0x180]
0x1408306dc: lea    rdx,[rbp-0x77]
0x1408306e0: lea    rcx,[rbp+0x90]
0x1408306e7: call   0x140070450
0x1408306ec: xor    edx,edx
0x1408306ee: movzx  ecx,BYTE PTR [rax]
0x1408306f1: call   0x140066de0
0x1408306f6: test   al,al
0x1408306f8: jne    0x140830682
0x1408306fa: xor    r8d,r8d
0x1408306fd: mov    edx,0x7
0x140830702: xor    r9d,r9d
0x140830705: mov    rcx,r15
0x140830708: call   0x1400bc760
0x14083070d: mov    edx,DWORD PTR [rip+0x1bbf4f5]        # 0x1423efc08
0x140830713: add    edx,0xfffffffe
0x140830716: mov    r8d,edi
0x140830719: mov    rcx,r15
0x14083071c: call   0x1400bc750
0x140830721: movsx  r8d,WORD PTR [rbp-0x44]
0x140830726: movsx  edx,WORD PTR [rbp-0x40]
0x14083072a: mov    rcx,QWORD PTR [rip+0x1cdd8a7]        # 0x14250dfd8
0x140830731: call   0x1401be9f0
0x140830736: mov    rbx,rax
0x140830739: lea    rdx,[rbp+0x420]
0x140830740: mov    rcx,rax
0x140830743: call   0x140aadad0
0x140830748: xor    r9d,r9d
0x14083074b: xor    r8d,r8d
0x14083074e: lea    rdx,[rbp+0x420]
0x140830755: mov    rcx,r15
0x140830758: call   0x140af3400
0x14083075d: lea    rdx,[rip+0xdee390]        # 0x14161eaf4 ; ', "'
0x140830764: lea    rcx,[rbp+0x29a0]
0x14083076b: call   0x140069780
0x140830770: nop
0x140830771: xor    r9d,r9d
0x140830774: xor    r8d,r8d
0x140830777: lea    rdx,[rbp+0x29a0]
0x14083077e: mov    rcx,r15
0x140830781: call   0x140af3400
0x140830786: nop
0x140830787: lea    rcx,[rbp+0x29a0]
0x14083078e: call   0x140069460
0x140830793: xor    r9d,r9d
0x140830796: mov    r8b,0x1
0x140830799: lea    rdx,[rbp+0x420]
0x1408307a0: mov    rcx,rbx
0x1408307a3: call   0x140aae180
0x1408307a8: xor    r9d,r9d
0x1408307ab: xor    r8d,r8d
0x1408307ae: lea    rdx,[rbp+0x420]
0x1408307b5: mov    rcx,r15
0x1408307b8: call   0x140af3400
0x1408307bd: lea    rdx,[rip+0xdd4208]        # 0x1416049cc ; '"'
0x1408307c4: lea    rcx,[rbp+0x29c0]
0x1408307cb: call   0x140069780
0x1408307d0: nop
0x1408307d1: xor    r9d,r9d
0x1408307d4: xor    r8d,r8d
0x1408307d7: lea    rdx,[rbp+0x29c0]
0x1408307de: mov    rcx,r15
0x1408307e1: call   0x140af3400
0x1408307e6: nop
0x1408307e7: lea    rcx,[rbp+0x29c0]
0x1408307ee: call   0x140069460
0x1408307f3: xor    r8d,r8d
0x1408307f6: mov    edx,0x7
0x1408307fb: xor    r9d,r9d
0x1408307fe: mov    rcx,r15
0x140830801: call   0x1400bc760
0x140830806: mov    edx,DWORD PTR [rip+0x1bbf3fc]        # 0x1423efc08
0x14083080c: dec    edx
0x14083080e: mov    r8d,edi
0x140830811: mov    rcx,r15
0x140830814: call   0x1400bc750
0x140830819: movsx  r8d,WORD PTR [rbp-0x44]
0x14083081e: movsx  edx,WORD PTR [rbp-0x40]
0x140830822: mov    rcx,QWORD PTR [rip+0x1cdd7af]        # 0x14250dfd8
0x140830829: call   0x1401bea60
0x14083082e: mov    rbx,rax
0x140830831: lea    rdx,[rbp+0x420]
0x140830838: test   rax,rax
0x14083083b: je     0x140830b43
0x140830841: mov    rcx,rax
0x140830844: call   0x140aadad0
0x140830849: xor    r9d,r9d
0x14083084c: xor    r8d,r8d
0x14083084f: lea    rdx,[rbp+0x420]
0x140830856: mov    rcx,r15
0x140830859: call   0x140af3400
0x14083085e: lea    rdx,[rip+0xdee28f]        # 0x14161eaf4 ; ', "'
0x140830865: lea    rcx,[rbp+0x29e0]
0x14083086c: call   0x140069780
0x140830871: nop
0x140830872: xor    r9d,r9d
0x140830875: xor    r8d,r8d
0x140830878: lea    rdx,[rbp+0x29e0]
0x14083087f: mov    rcx,r15
0x140830882: call   0x140af3400
0x140830887: nop
0x140830888: lea    rcx,[rbp+0x29e0]
0x14083088f: call   0x140069460
0x140830894: xor    r9d,r9d
0x140830897: mov    r8b,0x1
0x14083089a: lea    rdx,[rbp+0x420]
0x1408308a1: mov    rcx,rbx
0x1408308a4: call   0x140aae180
0x1408308a9: xor    r9d,r9d
0x1408308ac: xor    r8d,r8d
0x1408308af: lea    rdx,[rbp+0x420]
0x1408308b6: mov    rcx,r15
0x1408308b9: call   0x140af3400
0x1408308be: lea    rdx,[rip+0xdd4107]        # 0x1416049cc ; '"'
0x1408308c5: lea    rcx,[rbp+0x2a00]
0x1408308cc: call   0x140069780
0x1408308d1: nop
0x1408308d2: xor    r9d,r9d
0x1408308d5: xor    r8d,r8d
0x1408308d8: lea    rdx,[rbp+0x2a00]
0x1408308df: mov    rcx,r15
0x1408308e2: call   0x140af3400
0x1408308e7: nop
0x1408308e8: lea    rcx,[rbp+0x2a00]
0x1408308ef: jmp    0x140830bcb
0x1408308f4: cmp    BYTE PTR [rbx+0x72],0x0
0x1408308f8: je     0x14083098a
0x1408308fe: lea    rcx,[rbp+0x600]
0x140830905: call   0x140070cc0
0x14083090a: nop
0x14083090b: lea    rdx,[rbp+0x600]
0x140830912: mov    rcx,rbx
0x140830915: call   0x140aadad0
0x14083091a: lea    rdx,[rbp+0x600]
0x140830921: lea    rcx,[rbp+0x420]
0x140830928: call   0x1400bb340
0x14083092d: lea    rdx,[rip+0xdee1c0]        # 0x14161eaf4 ; ', "'
0x140830934: lea    rcx,[rbp+0x420]
0x14083093b: call   0x140070b90
0x140830940: xor    r9d,r9d
0x140830943: mov    r8b,0x1
0x140830946: lea    rdx,[rbp+0x600]
0x14083094d: mov    rcx,rbx
0x140830950: call   0x140aae180
0x140830955: lea    rdx,[rbp+0x600]
0x14083095c: lea    rcx,[rbp+0x420]
0x140830963: call   0x1400bb340
0x140830968: lea    rdx,[rip+0xea8cb9]        # 0x1416d9628 ; '", '
0x14083096f: lea    rcx,[rbp+0x420]
0x140830976: call   0x140070b90
0x14083097b: nop
0x14083097c: lea    rcx,[rbp+0x600]
0x140830983: call   0x140069460
0x140830988: jmp    0x14083099d
0x14083098a: lea    rdx,[rip+0xdeeecf]        # 0x14161f860 ; 'Unnamed '
0x140830991: lea    rcx,[rbp+0x420]
0x140830998: call   0x140070b90
0x14083099d: lea    rcx,[rbp+0x4c0]
0x1408309a4: call   0x140070cc0
0x1408309a9: nop
0x1408309aa: lea    rdx,[rbp+0x4c0]
0x1408309b1: mov    rcx,rbx
0x1408309b4: call   0x1410e4720
0x1408309b9: lea    rcx,[rbp+0x4c0]
0x1408309c0: call   0x1405468a0
0x1408309c5: lea    rcx,[rbp+0x4c0]
0x1408309cc: call   0x140070b50
0x1408309d1: test   al,al
0x1408309d3: jne    0x1408309fb
0x1408309d5: lea    rdx,[rbp+0x4c0]
0x1408309dc: lea    rcx,[rbp+0x420]
0x1408309e3: call   0x1400bb340
0x1408309e8: lea    rdx,[rip+0xdd3001]        # 0x1416039f0 ; ' '
0x1408309ef: lea    rcx,[rbp+0x420]
0x1408309f6: call   0x140070b90
0x1408309fb: lea    rdx,[rbp+0x4c0]
0x140830a02: mov    rcx,rbx
0x140830a05: call   0x1410e4760
0x140830a0a: lea    rcx,[rbp+0x4c0]
0x140830a11: call   0x1405468a0
0x140830a16: lea    rdx,[rbp+0x4c0]
0x140830a1d: lea    rcx,[rbp+0x420]
0x140830a24: call   0x1400bb340
0x140830a29: xor    r9d,r9d
0x140830a2c: xor    r8d,r8d
0x140830a2f: lea    rdx,[rbp+0x420]
0x140830a36: mov    rcx,r15
0x140830a39: call   0x140af3400
0x140830a3e: xor    r8d,r8d
0x140830a41: mov    edx,0x7
0x140830a46: xor    r9d,r9d
0x140830a49: mov    rcx,r15
0x140830a4c: call   0x1400bc760
0x140830a51: mov    edx,DWORD PTR [rip+0x1bbf1b1]        # 0x1423efc08
0x140830a57: dec    edx
0x140830a59: mov    r8d,edi
0x140830a5c: mov    rcx,r15
0x140830a5f: call   0x1400bc750
0x140830a64: movsx  r8d,WORD PTR [rbp-0x44]
0x140830a69: movsx  edx,WORD PTR [rbp-0x40]
0x140830a6d: mov    rcx,QWORD PTR [rip+0x1cdd564]        # 0x14250dfd8
0x140830a74: call   0x1401be9f0
0x140830a79: mov    rbx,rax
0x140830a7c: lea    rdx,[rbp+0x420]
0x140830a83: mov    rcx,rax
0x140830a86: call   0x140aadad0
0x140830a8b: xor    r9d,r9d
0x140830a8e: xor    r8d,r8d
0x140830a91: lea    rdx,[rbp+0x420]
0x140830a98: mov    rcx,r15
0x140830a9b: call   0x140af3400
0x140830aa0: lea    rdx,[rip+0xdee04d]        # 0x14161eaf4 ; ', "'
0x140830aa7: lea    rcx,[rbp+0x2960]
0x140830aae: call   0x140069780
0x140830ab3: nop
0x140830ab4: xor    r9d,r9d
0x140830ab7: xor    r8d,r8d
0x140830aba: lea    rdx,[rbp+0x2960]
0x140830ac1: mov    rcx,r15
0x140830ac4: call   0x140af3400
0x140830ac9: nop
0x140830aca: lea    rcx,[rbp+0x2960]
0x140830ad1: call   0x140069460
0x140830ad6: xor    r9d,r9d
0x140830ad9: mov    r8b,0x1
0x140830adc: lea    rdx,[rbp+0x420]
0x140830ae3: mov    rcx,rbx
0x140830ae6: call   0x140aae180
0x140830aeb: xor    r9d,r9d
0x140830aee: xor    r8d,r8d
0x140830af1: lea    rdx,[rbp+0x420]
0x140830af8: mov    rcx,r15
0x140830afb: call   0x140af3400
0x140830b00: lea    rdx,[rip+0xdd3ec5]        # 0x1416049cc ; '"'
0x140830b07: lea    rcx,[rbp+0x2980]
0x140830b0e: call   0x140069780
0x140830b13: nop
0x140830b14: xor    r9d,r9d
0x140830b17: xor    r8d,r8d
0x140830b1a: lea    rdx,[rbp+0x2980]
0x140830b21: mov    rcx,r15
0x140830b24: call   0x140af3400
0x140830b29: nop
0x140830b2a: lea    rcx,[rbp+0x2980]
0x140830b31: call   0x140069460
0x140830b36: nop
0x140830b37: lea    rcx,[rbp+0x4c0]
0x140830b3e: jmp    0x140830bcb
0x140830b43: mov    rcx,QWORD PTR [rip+0x1cdd48e]        # 0x14250dfd8
0x140830b4a: call   0x140aadad0
0x140830b4f: lea    rdx,[rip+0xdedf9e]        # 0x14161eaf4 ; ', "'
0x140830b56: lea    rcx,[rbp+0x420]
0x140830b5d: call   0x140070b90
0x140830b62: lea    rcx,[rbp+0x860]
0x140830b69: call   0x140070cc0
0x140830b6e: nop
0x140830b6f: xor    r9d,r9d
0x140830b72: mov    r8b,0x1
0x140830b75: lea    rdx,[rbp+0x860]
0x140830b7c: mov    rcx,QWORD PTR [rip+0x1cdd455]        # 0x14250dfd8
0x140830b83: call   0x140aae180
0x140830b88: lea    rdx,[rbp+0x860]
0x140830b8f: lea    rcx,[rbp+0x420]
0x140830b96: call   0x1400bb340
0x140830b9b: lea    rdx,[rip+0xdd3e2a]        # 0x1416049cc ; '"'
0x140830ba2: lea    rcx,[rbp+0x420]
0x140830ba9: call   0x140070b90
0x140830bae: xor    r9d,r9d
0x140830bb1: xor    r8d,r8d
0x140830bb4: lea    rdx,[rbp+0x420]
0x140830bbb: mov    rcx,r15
0x140830bbe: call   0x140af3400
0x140830bc3: nop
0x140830bc4: lea    rcx,[rbp+0x860]
0x140830bcb: call   0x140069460
0x140830bd0: nop
0x140830bd1: lea    rcx,[rbp+0x420]
0x140830bd8: call   0x140069460
0x140830bdd: jmp    0x140830be4
0x140830bdf: mov    edi,0x5
0x140830be4: cmp    BYTE PTR [rip+0x1e32459],0x0        # 0x142663044
0x140830beb: jne    0x140830c59
0x140830bed: mov    edx,DWORD PTR [rip+0x1e3255d]        # 0x142663150
0x140830bf3: lea    rcx,[rip+0x1cd965e]        # 0x14250a258
0x140830bfa: call   0x140073ba0
0x140830bff: test   rax,rax
0x140830c02: je     0x140830c59
0x140830c04: lea    rbx,[rax+0x68]
0x140830c08: mov    edx,edi
0x140830c0a: mov    rcx,rbx
0x140830c0d: call   0x1400735c0
0x140830c12: test   al,al
0x140830c14: jne    0x14083173c
0x140830c1a: mov    edx,0x6
0x140830c1f: mov    rcx,rbx
0x140830c22: call   0x1400735c0
0x140830c27: test   al,al
0x140830c29: jne    0x14083173c
0x140830c2f: mov    edx,0x2
0x140830c34: mov    rcx,rbx
0x140830c37: call   0x1400735c0
0x140830c3c: test   al,al
0x140830c3e: jne    0x14083173c
0x140830c44: mov    edx,0x3
0x140830c49: mov    rcx,rbx
0x140830c4c: call   0x1400735c0
0x140830c51: test   al,al
0x140830c53: jne    0x14083173c
0x140830c59: mov    ecx,DWORD PTR [rip+0x1bbefa5]        # 0x1423efc04
0x140830c5f: lea    r12d,[rcx-0x4]
0x140830c63: mov    r14d,DWORD PTR [rip+0x1bbef9e]        # 0x1423efc08
0x140830c6a: add    r14d,0xfffffffa
0x140830c6e: mov    DWORD PTR [rsp+0x7c],r14d
0x140830c73: lea    r13d,[rcx-0x2]
0x140830c77: mov    DWORD PTR [rbp+0x3c],r13d
0x140830c7b: mov    QWORD PTR [rbp+0x188],0x0
0x140830c86: lea    r9,[rbp+0x188]
0x140830c8d: xor    edx,edx
0x140830c8f: xor    ecx,ecx
0x140830c91: mov    r8d,0x1
0x140830c97: call   0x1407fed40
0x140830c9c: mov    DWORD PTR [rbp+0x38],eax
0x140830c9f: lea    r9,[rbp+0x188]
0x140830ca6: xor    edx,edx
0x140830ca8: xor    ecx,ecx
0x140830caa: mov    r8d,0xffffffff
0x140830cb0: call   0x1407fed40
0x140830cb5: mov    DWORD PTR [rbp-0x1c],eax
0x140830cb8: mov    eax,DWORD PTR [rip+0x1bbef46]        # 0x1423efc04
0x140830cbe: add    eax,0xfffffff4
0x140830cc1: mov    DWORD PTR [rbp-0x70],eax
0x140830cc4: mov    ecx,DWORD PTR [rip+0x1bbef3e]        # 0x1423efc08
0x140830cca: lea    edx,[rcx-0x6]
0x140830ccd: mov    DWORD PTR [rbp-0x6c],edx
0x140830cd0: add    eax,0x4
0x140830cd3: mov    DWORD PTR [rbp-0x20],eax
0x140830cd6: lea    r15d,[rcx-0x3]
0x140830cda: mov    DWORD PTR [rsp+0x74],r15d
0x140830cdf: mov    eax,DWORD PTR [rbp-0x74]
0x140830ce2: mov    DWORD PTR [rbp-0x68],eax
0x140830ce5: mov    eax,DWORD PTR [rbp-0x80]
0x140830ce8: add    eax,0xffffffe9
0x140830ceb: mov    DWORD PTR [rbp-0x7c],eax
0x140830cee: add    eax,0x4
0x140830cf1: mov    DWORD PTR [rsp+0x70],eax
0x140830cf5: add    eax,0x4
0x140830cf8: mov    DWORD PTR [rbp-0x64],eax
0x140830cfb: add    eax,0x4
0x140830cfe: mov    DWORD PTR [rbp+0xd8],eax
0x140830d04: add    eax,0x4
0x140830d07: mov    DWORD PTR [rbp+0xe0],eax
0x140830d0d: add    eax,0x4
0x140830d10: mov    DWORD PTR [rbp-0x58],eax
0x140830d13: lea    rbx,[rip+0x1e461be]        # 0x142676ed8
0x140830d1a: lea    rdi,[rip+0x1e461c7]        # 0x142676ee8
0x140830d21: mov    r15d,r14d
0x140830d24: mov    r13d,0x2
0x140830d2a: nop    WORD PTR [rax+rax*1+0x0]
0x140830d30: mov    esi,r15d
0x140830d33: mov    r14,r13
0x140830d36: data16 nop WORD PTR [rax+rax*1+0x0]
0x140830d40: mov    r8d,r12d
0x140830d43: mov    edx,esi
0x140830d45: lea    rcx,[rip+0x1e3bb24]        # 0x14266c870
0x140830d4c: call   0x1400bc750
0x140830d51: mov    edx,DWORD PTR [rbx]
0x140830d53: lea    rcx,[rip+0x1e3bb16]        # 0x14266c870
0x140830d5a: call   0x140af4570
0x140830d5f: xor    edx,edx
0x140830d61: lea    rcx,[rip+0x1bbee88]        # 0x1423efbf0
0x140830d68: call   0x1400735c0
0x140830d6d: test   al,al
0x140830d6f: je     0x140830d82
0x140830d71: mov    r8b,0x1
0x140830d74: xor    edx,edx
0x140830d76: lea    rcx,[rip+0x1e3baf3]        # 0x14266c870
0x140830d7d: call   0x1400bc7c0
0x140830d82: inc    esi
0x140830d84: add    rbx,0x4
0x140830d88: sub    r14,0x1
0x140830d8c: jne    0x140830d40
0x140830d8e: inc    r12d
0x140830d91: cmp    rbx,rdi
0x140830d94: jl     0x140830d30
0x140830d96: mov    r13d,DWORD PTR [rbp+0x3c]
0x140830d9a: mov    r14d,r15d
0x140830d9d: lea    r12,[rip+0x1e3bacc]        # 0x14266c870
0x140830da4: nop    DWORD PTR [rax+0x0]
0x140830da8: nop    DWORD PTR [rax+rax*1+0x0]
0x140830db0: mov    ebx,r14d
0x140830db3: mov    esi,0x2
0x140830db8: mov    r15d,0x7
0x140830dbe: mov    r14d,DWORD PTR [rbp-0x50]
0x140830dc2: mov    r8d,r13d
0x140830dc5: mov    edx,ebx
0x140830dc7: mov    rcx,r12
0x140830dca: call   0x1400bc750
0x140830dcf: mov    edx,DWORD PTR [rdi]
0x140830dd1: mov    rcx,r12
0x140830dd4: call   0x140af4570
0x140830dd9: cmp    BYTE PTR [rip+0x1098828],0x0        # 0x1418c9608
0x140830de0: je     0x140830e3f
0x140830de2: mov    eax,DWORD PTR [rip+0x109882c]        # 0x1418c9614
0x140830de8: cmp    eax,0xb
0x140830deb: je     0x140830df2
0x140830ded: cmp    eax,0x34
0x140830df0: jne    0x140830e3f
0x140830df2: mov    eax,0x10624dd3
0x140830df7: mul    r14d
0x140830dfa: shr    edx,0x6
0x140830dfd: imul   eax,edx,0x3e8
0x140830e03: mov    ecx,r14d
0x140830e06: sub    ecx,eax
0x140830e08: cmp    ecx,0x1f4
0x140830e0e: jae    0x140830e3f
0x140830e10: xor    r8d,r8d
0x140830e13: mov    edx,r15d
0x140830e16: mov    r9b,0x1
0x140830e19: mov    rcx,r12
0x140830e1c: call   0x1400bc760
0x140830e21: xor    r8d,r8d
0x140830e24: mov    dl,0xdb
0x140830e26: mov    rcx,r12
0x140830e29: call   0x1401bd800
0x140830e2e: xor    r8d,r8d
0x140830e31: mov    edx,r15d
0x140830e34: mov    r9b,0x1
0x140830e37: mov    rcx,r12
0x140830e3a: call   0x1400bc760
0x140830e3f: xor    edx,edx
0x140830e41: lea    rcx,[rip+0x1bbeda8]        # 0x1423efbf0
0x140830e48: call   0x1400735c0
0x140830e4d: test   al,al
0x140830e4f: je     0x140830e5e
0x140830e51: mov    r8b,0x1
0x140830e54: xor    edx,edx
0x140830e56: mov    rcx,r12
0x140830e59: call   0x1400bc7c0
0x140830e5e: inc    ebx
0x140830e60: add    rdi,0x4
0x140830e64: sub    rsi,0x1
0x140830e68: jne    0x140830dc2
0x140830e6e: inc    r13d
0x140830e71: lea    rax,[rip+0x1e46080]        # 0x142676ef8
0x140830e78: cmp    rdi,rax
0x140830e7b: mov    r15d,DWORD PTR [rsp+0x74]
0x140830e80: mov    r14d,DWORD PTR [rsp+0x7c]
0x140830e85: jl     0x140830db0
0x140830e8b: lea    rbx,[rip+0x1e45596]        # 0x142676428
0x140830e92: mov    r13d,DWORD PTR [rbp-0x6c]
0x140830e96: cmp    DWORD PTR [rbp+0x38],esi
0x140830e99: jne    0x140830f4d
0x140830e9f: mov    r12d,DWORD PTR [rbp-0x70]
0x140830ea3: lea    rdi,[rip+0x1e4554e]        # 0x1426763f8
0x140830eaa: mov    r15d,0x3
0x140830eb0: mov    esi,r13d
0x140830eb3: mov    r14,r15
0x140830eb6: data16 nop WORD PTR [rax+rax*1+0x0]
0x140830ec0: mov    r8d,r12d
0x140830ec3: mov    edx,esi
0x140830ec5: lea    rcx,[rip+0x1e3b9a4]        # 0x14266c870
0x140830ecc: call   0x1400bc750
0x140830ed1: xor    r8d,r8d
0x140830ed4: mov    edx,DWORD PTR [rdi]
0x140830ed6: lea    rcx,[rip+0x1e3b993]        # 0x14266c870
0x140830edd: call   0x140af4ba0
0x140830ee2: inc    esi
0x140830ee4: add    rdi,0x4
0x140830ee8: sub    r14,0x1
0x140830eec: jne    0x140830ec0
0x140830eee: inc    r12d
0x140830ef1: cmp    rdi,rbx
0x140830ef4: jl     0x140830eb0
0x140830ef6: mov    ecx,DWORD PTR [rbp-0x60]
0x140830ef9: mov    eax,DWORD PTR [rbp-0x70]
0x140830efc: cmp    ecx,eax
0x140830efe: mov    r15d,DWORD PTR [rsp+0x74]
0x140830f03: jl     0x140830f4d
0x140830f05: add    eax,0x4
0x140830f08: cmp    ecx,eax
0x140830f0a: jge    0x140830f4d
0x140830f0c: mov    ecx,DWORD PTR [rbp-0x5c]
0x140830f0f: cmp    ecx,r15d
0x140830f12: jl     0x140830f4d
0x140830f14: lea    eax,[r15+0x3]
0x140830f18: cmp    ecx,eax
0x140830f1a: jge    0x140830f4d
0x140830f1c: mov    eax,DWORD PTR [rbp-0x80]
0x140830f1f: add    eax,0xffffffe2
0x140830f22: mov    DWORD PTR [rip+0x109a4e4],eax        # 0x1418cb40c
0x140830f28: lea    eax,[r15-0x5]
0x140830f2c: mov    DWORD PTR [rip+0x109a4de],eax        # 0x1418cb410
0x140830f32: mov    BYTE PTR [rip+0x109a4cf],r14b        # 0x1418cb408
0x140830f39: mov    DWORD PTR [rip+0x109a4a5],0x222        # 0x1418cb3e8
0x140830f43: mov    DWORD PTR [rip+0x109a4ab],0x13c        # 0x1418cb3f8
0x140830f4d: cmp    DWORD PTR [rbp-0x1c],0x0
0x140830f51: jne    0x140831004
0x140830f57: mov    r12d,DWORD PTR [rbp-0x20]
0x140830f5b: mov    r14d,r12d
0x140830f5e: mov    r15d,0x3
0x140830f64: mov    edi,r13d
0x140830f67: mov    rsi,r15
0x140830f6a: nop    WORD PTR [rax+rax*1+0x0]
0x140830f70: mov    r8d,r14d
0x140830f73: mov    edx,edi
0x140830f75: lea    rcx,[rip+0x1e3b8f4]        # 0x14266c870
0x140830f7c: call   0x1400bc750
0x140830f81: xor    r8d,r8d
0x140830f84: mov    edx,DWORD PTR [rbx]
0x140830f86: lea    rcx,[rip+0x1e3b8e3]        # 0x14266c870
0x140830f8d: call   0x140af4ba0
0x140830f92: inc    edi
0x140830f94: add    rbx,0x4
0x140830f98: sub    rsi,0x1
0x140830f9c: jne    0x140830f70
0x140830f9e: inc    r14d
0x140830fa1: lea    rax,[rip+0x1e454b0]        # 0x142676458
0x140830fa8: cmp    rbx,rax
0x140830fab: jl     0x140830f64
0x140830fad: mov    ecx,DWORD PTR [rbp-0x60]
0x140830fb0: cmp    ecx,r12d
0x140830fb3: mov    r15d,DWORD PTR [rsp+0x74]
0x140830fb8: jl     0x140831004
0x140830fba: lea    eax,[r12+0x4]
0x140830fbf: cmp    ecx,eax
0x140830fc1: jge    0x140831004
0x140830fc3: mov    ecx,DWORD PTR [rbp-0x5c]
0x140830fc6: cmp    ecx,r15d
0x140830fc9: jl     0x140831004
0x140830fcb: lea    eax,[r15+0x3]
0x140830fcf: cmp    ecx,eax
0x140830fd1: jge    0x140831004
0x140830fd3: mov    eax,DWORD PTR [rbp-0x80]
0x140830fd6: add    eax,0xffffffe2
0x140830fd9: mov    DWORD PTR [rip+0x109a42d],eax        # 0x1418cb40c
0x140830fdf: lea    eax,[r15-0x5]
0x140830fe3: mov    DWORD PTR [rip+0x109a427],eax        # 0x1418cb410
0x140830fe9: mov    BYTE PTR [rip+0x109a418],sil        # 0x1418cb408
0x140830ff0: mov    DWORD PTR [rip+0x109a3ee],0x223        # 0x1418cb3e8
0x140830ffa: mov    DWORD PTR [rip+0x109a3f4],0x13c        # 0x1418cb3f8
0x140831004: mov    r14d,DWORD PTR [rbp-0x68]
0x140831008: lea    rbx,[rip+0x1e455f9]        # 0x142676608
0x14083100f: mov    r13d,0x3
0x140831015: lea    r12,[rip+0x1e3b854]        # 0x14266c870
0x14083101c: nop    DWORD PTR [rax+0x0]
0x140831020: mov    edi,r15d
0x140831023: mov    rsi,r13
0x140831026: data16 nop WORD PTR [rax+rax*1+0x0]
0x140831030: mov    r8d,r14d
0x140831033: mov    edx,edi
0x140831035: mov    rcx,r12
0x140831038: call   0x1400bc750
0x14083103d: xor    r8d,r8d
0x140831040: mov    edx,DWORD PTR [rbx]
0x140831042: mov    rcx,r12
0x140831045: call   0x140af4ba0
0x14083104a: inc    edi
0x14083104c: add    rbx,0x4
0x140831050: sub    rsi,0x1
0x140831054: jne    0x140831030
0x140831056: inc    r14d
0x140831059: lea    rax,[rip+0x1e455d8]        # 0x142676638
0x140831060: cmp    rbx,rax
0x140831063: jl     0x140831020
0x140831065: mov    ecx,DWORD PTR [rbp-0x60]
0x140831068: mov    r13d,DWORD PTR [rbp-0x68]
0x14083106c: cmp    ecx,r13d
0x14083106f: jl     0x1408310ba
0x140831071: lea    eax,[r13+0x4]
0x140831075: cmp    ecx,eax
0x140831077: jge    0x1408310ba
0x140831079: mov    ecx,DWORD PTR [rbp-0x5c]
0x14083107c: cmp    ecx,r15d
0x14083107f: jl     0x1408310ba
0x140831081: lea    eax,[r15+0x3]
0x140831085: cmp    ecx,eax
0x140831087: jge    0x1408310ba
0x140831089: mov    eax,DWORD PTR [rbp-0x80]
0x14083108c: add    eax,0xffffffe2
0x14083108f: mov    DWORD PTR [rip+0x109a377],eax        # 0x1418cb40c
0x140831095: lea    eax,[r15-0x2]
0x140831099: mov    DWORD PTR [rip+0x109a371],eax        # 0x1418cb410
0x14083109f: mov    BYTE PTR [rip+0x109a362],sil        # 0x1418cb408
0x1408310a6: mov    DWORD PTR [rip+0x109a338],0x224        # 0x1418cb3e8
0x1408310b0: mov    DWORD PTR [rip+0x109a33e],0x1c9        # 0x1418cb3f8
0x1408310ba: lea    r14d,[r15+0x1]
0x1408310be: lea    esi,[r15+0x2]
0x1408310c2: mov    edi,DWORD PTR [rbp-0x7c]
0x1408310c5: lea    rbx,[rip+0x109f10c]        # 0x1418d01d8
0x1408310cc: mov    r13d,0x7
0x1408310d2: xor    r12d,r12d
0x1408310d5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x1408310e0: mov    DWORD PTR [rip+0x1e3b80e],edi        # 0x14266c8f4
0x1408310e6: mov    DWORD PTR [rip+0x1e3b80b],r15d        # 0x14266c8f8
0x1408310ed: xor    r8d,r8d
0x1408310f0: lea    rax,[rip+0x1e3b779]        # 0x14266c870
0x1408310f7: mov    edx,DWORD PTR [r12+rax*1+0x9be8]
0x1408310ff: mov    rcx,rax
0x140831102: call   0x140af4ba0
0x140831107: cmp    WORD PTR [rip+0x1e31ee1],0x19        # 0x142662ff0
0x14083110f: jne    0x14083118c
0x140831111: lea    rcx,[rip+0x1e31f00]        # 0x142663018
0x140831118: call   0x140070b50
0x14083111d: test   al,al
0x14083111f: jne    0x14083118c
0x140831121: mov    eax,0x10624dd3
0x140831126: mov    ecx,DWORD PTR [rbp-0x50]
0x140831129: mul    ecx
0x14083112b: shr    edx,0x6
0x14083112e: imul   eax,edx,0x3e8
0x140831134: sub    ecx,eax
0x140831136: cmp    DWORD PTR [rbx-0x4],ecx
0x140831139: ja     0x14083118c
0x14083113b: cmp    DWORD PTR [rbx],ecx
0x14083113d: jb     0x14083118c
0x14083113f: mov    r8d,edi
0x140831142: mov    edx,r15d
0x140831145: lea    rcx,[rip+0x1e3b724]        # 0x14266c870
0x14083114c: call   0x1400bc750
0x140831151: xor    r8d,r8d
0x140831154: mov    edx,r13d
0x140831157: mov    r9b,0x1
0x14083115a: lea    rcx,[rip+0x1e3b70f]        # 0x14266c870
0x140831161: call   0x1400bc760
0x140831166: xor    r8d,r8d
0x140831169: mov    dl,0xdb
0x14083116b: lea    rcx,[rip+0x1e3b6fe]        # 0x14266c870
0x140831172: call   0x1400bc7c0
0x140831177: xor    r8d,r8d
0x14083117a: mov    edx,r13d
0x14083117d: mov    r9b,0x1
0x140831180: lea    rcx,[rip+0x1e3b6e9]        # 0x14266c870
0x140831187: call   0x1400bc760
0x14083118c: mov    DWORD PTR [rip+0x1e3b762],edi        # 0x14266c8f4
0x140831192: mov    DWORD PTR [rip+0x1e3b75f],r14d        # 0x14266c8f8
0x140831199: xor    r8d,r8d
0x14083119c: lea    rax,[rip+0x1e3b6cd]        # 0x14266c870
0x1408311a3: mov    edx,DWORD PTR [r12+rax*1+0x9bec]
0x1408311ab: mov    rcx,rax
0x1408311ae: call   0x140af4ba0
0x1408311b3: cmp    WORD PTR [rip+0x1e31e35],0x19        # 0x142662ff0
0x1408311bb: jne    0x140831239
0x1408311bd: lea    rcx,[rip+0x1e31e54]        # 0x142663018
0x1408311c4: call   0x140070b50
0x1408311c9: test   al,al
0x1408311cb: jne    0x140831239
0x1408311cd: mov    eax,0x10624dd3
0x1408311d2: mov    ecx,DWORD PTR [rbp-0x50]
0x1408311d5: mul    ecx
0x1408311d7: shr    edx,0x6
0x1408311da: imul   eax,edx,0x3e8
0x1408311e0: sub    ecx,eax
0x1408311e2: cmp    DWORD PTR [rbx+0x4],ecx
0x1408311e5: ja     0x140831239
0x1408311e7: cmp    DWORD PTR [rbx+0x8],ecx
0x1408311ea: jb     0x140831239
0x1408311ec: mov    r8d,edi
0x1408311ef: mov    edx,r14d
0x1408311f2: lea    rcx,[rip+0x1e3b677]        # 0x14266c870
0x1408311f9: call   0x1400bc750
0x1408311fe: xor    r8d,r8d
0x140831201: mov    edx,r13d
0x140831204: mov    r9b,0x1
0x140831207: lea    rcx,[rip+0x1e3b662]        # 0x14266c870
0x14083120e: call   0x1400bc760
0x140831213: xor    r8d,r8d
0x140831216: mov    dl,0xdb
0x140831218: lea    rcx,[rip+0x1e3b651]        # 0x14266c870
0x14083121f: call   0x1400bc7c0
0x140831224: xor    r8d,r8d
0x140831227: mov    edx,r13d
0x14083122a: mov    r9b,0x1
0x14083122d: lea    rcx,[rip+0x1e3b63c]        # 0x14266c870
0x140831234: call   0x1400bc760
0x140831239: mov    DWORD PTR [rip+0x1e3b6b5],edi        # 0x14266c8f4
0x14083123f: mov    DWORD PTR [rip+0x1e3b6b3],esi        # 0x14266c8f8
0x140831245: xor    r8d,r8d
0x140831248: lea    rax,[rip+0x1e3b621]        # 0x14266c870
0x14083124f: mov    edx,DWORD PTR [r12+rax*1+0x9bf0]
0x140831257: mov    rcx,rax
0x14083125a: call   0x140af4ba0
0x14083125f: cmp    WORD PTR [rip+0x1e31d89],0x19        # 0x142662ff0
0x140831267: jne    0x1408312e4
0x140831269: lea    rcx,[rip+0x1e31da8]        # 0x142663018
0x140831270: call   0x140070b50
0x140831275: test   al,al
0x140831277: jne    0x1408312e4
0x140831279: mov    eax,0x10624dd3
0x14083127e: mov    ecx,DWORD PTR [rbp-0x50]
0x140831281: mul    ecx
0x140831283: shr    edx,0x6
0x140831286: imul   eax,edx,0x3e8
0x14083128c: sub    ecx,eax
0x14083128e: cmp    DWORD PTR [rbx+0xc],ecx
0x140831291: ja     0x1408312e4
0x140831293: cmp    DWORD PTR [rbx+0x10],ecx
0x140831296: jb     0x1408312e4
0x140831298: mov    r8d,edi
0x14083129b: mov    edx,esi
0x14083129d: lea    rcx,[rip+0x1e3b5cc]        # 0x14266c870
0x1408312a4: call   0x1400bc750
0x1408312a9: xor    r8d,r8d
0x1408312ac: mov    edx,r13d
0x1408312af: mov    r9b,0x1
0x1408312b2: lea    rcx,[rip+0x1e3b5b7]        # 0x14266c870
0x1408312b9: call   0x1400bc760
0x1408312be: xor    r8d,r8d
0x1408312c1: mov    dl,0xdb
0x1408312c3: lea    rcx,[rip+0x1e3b5a6]        # 0x14266c870
0x1408312ca: call   0x1400bc7c0
0x1408312cf: xor    r8d,r8d
0x1408312d2: mov    edx,r13d
0x1408312d5: mov    r9b,0x1
0x1408312d8: lea    rcx,[rip+0x1e3b591]        # 0x14266c870
0x1408312df: call   0x1400bc760
0x1408312e4: inc    edi
0x1408312e6: add    r12,0xc
0x1408312ea: add    rbx,0x18
0x1408312ee: cmp    r12,0x30
0x1408312f2: jl     0x1408310e0
0x1408312f8: mov    ecx,DWORD PTR [rbp-0x60]
0x1408312fb: mov    r13d,DWORD PTR [rbp-0x7c]
0x1408312ff: cmp    ecx,r13d
0x140831302: jl     0x14083134d
0x140831304: lea    eax,[r13+0x4]
0x140831308: cmp    ecx,eax
0x14083130a: jge    0x14083134d
0x14083130c: mov    ecx,DWORD PTR [rbp-0x5c]
0x14083130f: cmp    ecx,r15d
0x140831312: jl     0x14083134d
0x140831314: lea    eax,[r15+0x3]
0x140831318: cmp    ecx,eax
0x14083131a: jge    0x14083134d
0x14083131c: mov    eax,DWORD PTR [rbp-0x80]
0x14083131f: add    eax,0xffffffe2
0x140831322: mov    DWORD PTR [rip+0x109a0e4],eax        # 0x1418cb40c
0x140831328: lea    eax,[r15-0x2]
0x14083132c: mov    DWORD PTR [rip+0x109a0de],eax        # 0x1418cb410
0x140831332: mov    BYTE PTR [rip+0x109a0cf],0x0        # 0x1418cb408
0x140831339: mov    DWORD PTR [rip+0x109a0a5],0x225        # 0x1418cb3e8
0x140831343: mov    DWORD PTR [rip+0x109a0ab],0x1c7        # 0x1418cb3f8
0x14083134d: xor    r13b,r13b
0x140831350: cmp    BYTE PTR [rip+0x1e31ced],r13b        # 0x142663044
0x140831357: jne    0x140831384
0x140831359: mov    edx,DWORD PTR [rip+0x1e31df1]        # 0x142663150
0x14083135f: lea    rcx,[rip+0x1cd8ef2]        # 0x14250a258
0x140831366: call   0x140073ba0
0x14083136b: test   rax,rax
0x14083136e: je     0x1408313a2
0x140831370: lea    rcx,[rax+0x68]
0x140831374: mov    edx,0x4
0x140831379: call   0x1400735c0
0x14083137e: movzx  r13d,al
0x140831382: jmp    0x1408313a2
0x140831384: mov    rax,QWORD PTR [rip+0x1bd6205]        # 0x142407590
0x14083138b: test   DWORD PTR [rax+0x110],0x40000
0x140831395: movzx  r13d,r13b
0x140831399: mov    eax,0x1
0x14083139e: cmovne r13d,eax
0x1408313a2: mov    r12d,DWORD PTR [rsp+0x70]
0x1408313a7: lea    rdi,[rip+0x1e4510a]        # 0x1426764b8
0x1408313ae: lea    rbx,[rip+0x1e45133]        # 0x1426764e8
0x1408313b5: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x1408313c0: mov    esi,r15d
0x1408313c3: mov    r14d,0x3
0x1408313c9: lea    r15,[rip+0x1e3b4a0]        # 0x14266c870
0x1408313d0: mov    r8d,r12d
0x1408313d3: mov    edx,esi
0x1408313d5: mov    rcx,r15
0x1408313d8: call   0x1400bc750
0x1408313dd: xor    r8d,r8d
0x1408313e0: mov    rcx,r15
0x1408313e3: test   r13b,r13b
0x1408313e6: je     0x1408313ed
0x1408313e8: mov    edx,DWORD PTR [rdi-0x30]
0x1408313eb: jmp    0x1408313ef
0x1408313ed: mov    edx,DWORD PTR [rdi]
0x1408313ef: call   0x140af4ba0
0x1408313f4: inc    esi
0x1408313f6: add    rdi,0x4
0x1408313fa: sub    r14,0x1
0x1408313fe: jne    0x1408313d0
0x140831400: inc    r12d
0x140831403: cmp    rdi,rbx
0x140831406: mov    r15d,DWORD PTR [rsp+0x74]
0x14083140b: jl     0x1408313c0
0x14083140d: mov    ecx,DWORD PTR [rbp-0x60]
0x140831410: mov    eax,DWORD PTR [rsp+0x70]
0x140831414: cmp    ecx,eax
0x140831416: jl     0x140831460
0x140831418: add    eax,0x4
0x14083141b: cmp    ecx,eax
0x14083141d: jge    0x140831460
0x14083141f: mov    ecx,DWORD PTR [rbp-0x5c]
0x140831422: cmp    ecx,r15d
0x140831425: jl     0x140831460
0x140831427: lea    eax,[r15+0x3]
0x14083142b: cmp    ecx,eax
0x14083142d: jge    0x140831460
0x14083142f: mov    eax,DWORD PTR [rbp-0x80]
0x140831432: add    eax,0xffffffe2
0x140831435: mov    DWORD PTR [rip+0x1099fd1],eax        # 0x1418cb40c
0x14083143b: lea    eax,[r15-0x2]
0x14083143f: mov    DWORD PTR [rip+0x1099fcb],eax        # 0x1418cb410
0x140831445: mov    BYTE PTR [rip+0x1099fbc],r14b        # 0x1418cb408
0x14083144c: mov    DWORD PTR [rip+0x1099f92],0x226        # 0x1418cb3e8
0x140831456: mov    DWORD PTR [rip+0x1099f98],0x1a0        # 0x1418cb3f8
0x140831460: mov    r12d,DWORD PTR [rbp-0x64]
0x140831464: lea    rdi,[rip+0x1e450ad]        # 0x142676518
0x14083146b: mov    r13d,0x3
0x140831471: mov    esi,r15d
0x140831474: mov    r14,r13
0x140831477: lea    r15,[rip+0x1e3b3f2]        # 0x14266c870
0x14083147e: xchg   ax,ax
0x140831480: mov    DWORD PTR [rip+0x1e3b46d],r12d        # 0x14266c8f4
0x140831487: mov    DWORD PTR [rip+0x1e3b46b],esi        # 0x14266c8f8
0x14083148d: xor    r8d,r8d
0x140831490: mov    edx,DWORD PTR [rbx]
0x140831492: mov    rcx,r15
0x140831495: call   0x140af4ba0
0x14083149a: inc    esi
0x14083149c: add    rbx,0x4
0x1408314a0: sub    r14,0x1
0x1408314a4: jne    0x140831480
0x1408314a6: inc    r12d
0x1408314a9: cmp    rbx,rdi
0x1408314ac: mov    r15d,DWORD PTR [rsp+0x74]
0x1408314b1: jl     0x140831471
0x1408314b3: mov    ecx,DWORD PTR [rbp-0x60]
0x1408314b6: mov    r13d,DWORD PTR [rbp-0x64]
0x1408314ba: cmp    ecx,r13d
0x1408314bd: jl     0x140831508
0x1408314bf: lea    eax,[r13+0x4]
0x1408314c3: cmp    ecx,eax
0x1408314c5: jge    0x140831508
0x1408314c7: mov    ecx,DWORD PTR [rbp-0x5c]
0x1408314ca: cmp    ecx,r15d
0x1408314cd: jl     0x140831508
0x1408314cf: lea    eax,[r15+0x3]
0x1408314d3: cmp    ecx,eax
0x1408314d5: jge    0x140831508
0x1408314d7: mov    eax,DWORD PTR [rbp-0x80]
0x1408314da: add    eax,0xffffffe2
0x1408314dd: mov    DWORD PTR [rip+0x1099f29],eax        # 0x1418cb40c
0x1408314e3: lea    eax,[r15-0x2]
0x1408314e7: mov    DWORD PTR [rip+0x1099f23],eax        # 0x1418cb410
0x1408314ed: mov    BYTE PTR [rip+0x1099f14],r14b        # 0x1418cb408
0x1408314f4: mov    DWORD PTR [rip+0x1099eea],0x227        # 0x1418cb3e8
0x1408314fe: mov    DWORD PTR [rip+0x1099ef0],0x1a7        # 0x1418cb3f8
0x140831508: mov    r13d,DWORD PTR [rbp+0xd8]
0x14083150f: mov    r14d,r13d
0x140831512: mov    r12d,0x3
0x140831518: nop    DWORD PTR [rax+rax*1+0x0]
0x140831520: mov    ebx,r15d
0x140831523: mov    rsi,r12
0x140831526: lea    r15,[rip+0x1e3b343]        # 0x14266c870
0x14083152d: nop    DWORD PTR [rax]
0x140831530: mov    DWORD PTR [rip+0x1e3b3bd],r14d        # 0x14266c8f4
0x140831537: mov    DWORD PTR [rip+0x1e3b3bb],ebx        # 0x14266c8f8
0x14083153d: xor    r8d,r8d
0x140831540: mov    edx,DWORD PTR [rdi]
0x140831542: mov    rcx,r15
0x140831545: call   0x140af4ba0
0x14083154a: inc    ebx
0x14083154c: add    rdi,0x4
0x140831550: sub    rsi,0x1
0x140831554: jne    0x140831530
0x140831556: inc    r14d
0x140831559: lea    rax,[rip+0x1e44fe8]        # 0x142676548
0x140831560: cmp    rdi,rax
0x140831563: mov    r15d,DWORD PTR [rsp+0x74]
0x140831568: jl     0x140831520
0x14083156a: mov    ecx,DWORD PTR [rbp-0x60]
0x14083156d: cmp    ecx,r13d
0x140831570: jl     0x1408315bb
0x140831572: lea    eax,[r13+0x4]
0x140831576: cmp    ecx,eax
0x140831578: jge    0x1408315bb
0x14083157a: mov    ecx,DWORD PTR [rbp-0x5c]
0x14083157d: cmp    ecx,r15d
0x140831580: jl     0x1408315bb
0x140831582: lea    eax,[r15+0x3]
0x140831586: cmp    ecx,eax
0x140831588: jge    0x1408315bb
0x14083158a: mov    eax,DWORD PTR [rbp-0x80]
0x14083158d: add    eax,0xffffffe2
0x140831590: mov    DWORD PTR [rip+0x1099e76],eax        # 0x1418cb40c
0x140831596: lea    eax,[r15-0x2]
0x14083159a: mov    DWORD PTR [rip+0x1099e70],eax        # 0x1418cb410
0x1408315a0: mov    BYTE PTR [rip+0x1099e61],sil        # 0x1418cb408
0x1408315a7: mov    DWORD PTR [rip+0x1099e37],0x228        # 0x1418cb3e8
0x1408315b1: mov    DWORD PTR [rip+0x1099e3d],0x1a6        # 0x1418cb3f8
0x1408315bb: mov    r13d,DWORD PTR [rbp+0xe0]
0x1408315c2: mov    r14d,r13d
0x1408315c5: lea    rbx,[rip+0x1e44fac]        # 0x142676578
0x1408315cc: nop    DWORD PTR [rax+0x0]
0x1408315d0: mov    edi,r15d
0x1408315d3: mov    rsi,r12
0x1408315d6: lea    r15,[rip+0x1e3b293]        # 0x14266c870
0x1408315dd: nop    DWORD PTR [rax]
0x1408315e0: mov    r8d,r14d
0x1408315e3: mov    edx,edi
0x1408315e5: mov    rcx,r15
0x1408315e8: call   0x1400bc750
0x1408315ed: xor    r8d,r8d
0x1408315f0: mov    rcx,r15
0x1408315f3: cmp    BYTE PTR [rip+0x1e31a16],r8b        # 0x142663010
0x1408315fa: je     0x140831601
0x1408315fc: mov    edx,DWORD PTR [rbx-0x30]
0x1408315ff: jmp    0x140831603
0x140831601: mov    edx,DWORD PTR [rbx]
0x140831603: call   0x140af4ba0
0x140831608: inc    edi
0x14083160a: add    rbx,0x4
0x14083160e: sub    rsi,0x1
0x140831612: jne    0x1408315e0
0x140831614: inc    r14d
0x140831617: lea    rax,[rip+0x1e44f8a]        # 0x1426765a8
0x14083161e: cmp    rbx,rax
0x140831621: mov    r15d,DWORD PTR [rsp+0x74]
0x140831626: jl     0x1408315d0
0x140831628: mov    ecx,DWORD PTR [rbp-0x60]
0x14083162b: cmp    ecx,r13d
0x14083162e: jl     0x140831679
0x140831630: lea    eax,[r13+0x4]
0x140831634: cmp    ecx,eax
0x140831636: jge    0x140831679
0x140831638: mov    ecx,DWORD PTR [rbp-0x5c]
0x14083163b: cmp    ecx,r15d
0x14083163e: jl     0x140831679
0x140831640: lea    eax,[r15+0x3]
0x140831644: cmp    ecx,eax
0x140831646: jge    0x140831679
0x140831648: mov    eax,DWORD PTR [rbp-0x80]
0x14083164b: add    eax,0xffffffe2
0x14083164e: mov    DWORD PTR [rip+0x1099db8],eax        # 0x1418cb40c
0x140831654: lea    eax,[r15-0x2]
0x140831658: mov    DWORD PTR [rip+0x1099db2],eax        # 0x1418cb410
0x14083165e: mov    BYTE PTR [rip+0x1099da3],sil        # 0x1418cb408
0x140831665: mov    DWORD PTR [rip+0x1099d79],0x229        # 0x1418cb3e8
0x14083166f: mov    DWORD PTR [rip+0x1099d7f],0x1c8        # 0x1418cb3f8
0x140831679: mov    r13d,DWORD PTR [rbp-0x58]
0x14083167d: mov    r14d,r13d
0x140831680: lea    rbx,[rip+0x1e44f51]        # 0x1426765d8
0x140831687: nop    WORD PTR [rax+rax*1+0x0]
0x140831690: mov    edi,r15d
0x140831693: mov    rsi,r12
0x140831696: lea    r15,[rip+0x1e3b1d3]        # 0x14266c870
0x14083169d: nop    DWORD PTR [rax]
0x1408316a0: mov    r8d,r14d
0x1408316a3: mov    edx,edi
0x1408316a5: mov    rcx,r15
0x1408316a8: call   0x1400bc750
0x1408316ad: xor    r8d,r8d
0x1408316b0: mov    rcx,r15
0x1408316b3: test   BYTE PTR [rip+0x1e3497e],0x2        # 0x142666038
0x1408316ba: je     0x1408316c1
0x1408316bc: mov    edx,DWORD PTR [rbx-0x30]
0x1408316bf: jmp    0x1408316c3
0x1408316c1: mov    edx,DWORD PTR [rbx]
0x1408316c3: call   0x140af4ba0
0x1408316c8: inc    edi
0x1408316ca: add    rbx,0x4
0x1408316ce: sub    rsi,0x1
0x1408316d2: jne    0x1408316a0
0x1408316d4: inc    r14d
0x1408316d7: lea    rax,[rip+0x1e44f2a]        # 0x142676608
0x1408316de: cmp    rbx,rax
0x1408316e1: mov    r15d,DWORD PTR [rsp+0x74]
0x1408316e6: jl     0x140831690
0x1408316e8: mov    ecx,DWORD PTR [rbp-0x60]
0x1408316eb: cmp    ecx,r13d
0x1408316ee: jl     0x14083173c
0x1408316f0: lea    eax,[r13+0x4]
0x1408316f4: cmp    ecx,eax
0x1408316f6: jge    0x14083173c
0x1408316f8: mov    ecx,DWORD PTR [rbp-0x5c]
0x1408316fb: cmp    ecx,r15d
0x1408316fe: jl     0x14083173c
0x140831700: lea    eax,[r15+0x3]
0x140831704: cmp    ecx,eax
0x140831706: jge    0x14083173c
0x140831708: mov    eax,DWORD PTR [rbp-0x80]
0x14083170b: add    eax,0xffffffe2
0x14083170e: mov    DWORD PTR [rip+0x1099cf8],eax        # 0x1418cb40c
0x140831714: lea    eax,[r15-0x2]
0x140831718: mov    DWORD PTR [rip+0x1099cf2],eax        # 0x1418cb410
0x14083171e: mov    BYTE PTR [rip+0x1099ce3],sil        # 0x1418cb408
0x140831725: mov    eax,0x22a
0x14083172a: mov    DWORD PTR [rip+0x1099cb8],eax        # 0x1418cb3e8
0x140831730: mov    DWORD PTR [rip+0x1099cbe],0x168        # 0x1418cb3f8
0x14083173a: jmp    0x140831742
0x14083173c: mov    eax,DWORD PTR [rip+0x1099ca6]        # 0x1418cb3e8
0x140831742: mov    r8,0xffffffffffffffff
0x140831749: mov    ecx,r8d
0x14083174c: mov    DWORD PTR [rbp-0x70],ecx
0x14083174f: mov    edx,r8d
0x140831752: mov    DWORD PTR [rbp-0x6c],edx
0x140831755: mov    DWORD PTR [rbp-0x68],r8d
0x140831759: cmp    eax,r8d
0x14083175c: je     0x140831acc
0x140831762: call   QWORD PTR [rip+0xdce928]        # 0x141600090
0x140831768: mov    ebx,eax
0x14083176a: cmp    BYTE PTR [rip+0x1099c6f],0x0        # 0x1418cb3e0
0x140831771: jne    0x1408317a6
0x140831773: mov    eax,DWORD PTR [rip+0x1099c6b]        # 0x1418cb3e4
0x140831779: cmp    eax,ebx
0x14083177b: jg     0x140831839
0x140831781: lea    ecx,[rax+0x3e8]
0x140831787: cmp    ecx,ebx
0x140831789: jl     0x140831839
0x14083178f: mov    ecx,ebx
0x140831791: sub    ecx,eax
0x140831793: cmp    ecx,0x1f4
0x140831799: jl     0x140831aef
0x14083179f: mov    BYTE PTR [rip+0x1099c3a],0x1        # 0x1418cb3e0
0x1408317a6: mov    eax,DWORD PTR [rip+0x1099c3c]        # 0x1418cb3e8
0x1408317ac: mov    QWORD PTR [rbp+0x58],rax
0x1408317b0: mov    eax,DWORD PTR [rip+0x1099c36]        # 0x1418cb3ec
0x1408317b6: mov    DWORD PTR [rbp-0x70],eax
0x1408317b9: mov    ecx,DWORD PTR [rip+0x1099c31]        # 0x1418cb3f0
0x1408317bf: mov    DWORD PTR [rbp-0x6c],ecx
0x1408317c2: mov    eax,DWORD PTR [rip+0x1099c2c]        # 0x1418cb3f4
0x1408317c8: mov    DWORD PTR [rbp-0x68],eax
0x1408317cb: xor    r8d,r8d
0x1408317ce: mov    edx,0x7
0x1408317d3: mov    r9b,0x1
0x1408317d6: lea    rcx,[rip+0x1e3b093]        # 0x14266c870
0x1408317dd: call   0x1400bc760
0x1408317e2: mov    DWORD PTR [rip+0x1099bfc],ebx        # 0x1418cb3e4
0x1408317e8: movsxd rdx,DWORD PTR [rip+0x1099bf9]        # 0x1418cb3e8
0x1408317ef: lea    r13,[rdx*2+0xfbf]
0x1408317f7: lea    rax,[rip+0x1091e22]        # 0x1418c3620
0x1408317fe: add    r13,rdx
0x140831801: lea    r13,[rax+r13*8]
0x140831805: mov    QWORD PTR [rbp-0x58],r13
0x140831809: cmp    edx,0x183
0x14083180f: jne    0x140831874
0x140831811: mov    eax,DWORD PTR [rip+0x1099bd5]        # 0x1418cb3ec
0x140831817: cmp    eax,0xd
0x14083181a: jne    0x140831844
0x14083181c: cmp    DWORD PTR [rip+0x1099bcd],0x17        # 0x1418cb3f0
0x140831823: jne    0x140831874
0x140831825: mov    edx,DWORD PTR [rip+0x1099bc9]        # 0x1418cb3f4
0x14083182b: lea    rcx,[rip+0x1ce7ee6]        # 0x142519718
0x140831832: call   0x14014f310
0x140831837: jmp    0x140831864
0x140831839: mov    DWORD PTR [rip+0x1099ba5],ebx        # 0x1418cb3e4
0x14083183f: jmp    0x140831b02
0x140831844: cmp    eax,0x5
0x140831847: jne    0x140831874
0x140831849: cmp    DWORD PTR [rip+0x1099ba0],0x7        # 0x1418cb3f0
0x140831850: jne    0x140831874
0x140831852: mov    edx,DWORD PTR [rip+0x1099b9c]        # 0x1418cb3f4
0x140831858: lea    rcx,[rip+0x1ce7eb9]        # 0x142519718
0x14083185f: call   0x14014f3b0
0x140831864: test   rax,rax
0x140831867: je     0x140831874
0x140831869: lea    r13,[rax+0xbca0]
0x140831870: mov    QWORD PTR [rbp-0x58],r13
0x140831874: mov    esi,DWORD PTR [rip+0x1099b92]        # 0x1418cb40c
0x14083187a: lea    edi,[rsi+0x1b]
0x14083187d: mov    rcx,r13
0x140831880: call   0x140070480
0x140831885: mov    r12d,DWORD PTR [rip+0x1099b84]        # 0x1418cb410
0x14083188c: mov    r15d,r12d
0x14083188f: sub    r15d,eax
0x140831892: dec    r15d
0x140831895: cmp    DWORD PTR [rip+0x1099b5c],0x0        # 0x1418cb3f8
0x14083189c: je     0x1408318a2
0x14083189e: sub    r15d,0x2
0x1408318a2: mov    r14d,r15d
0x1408318a5: cmp    r15d,r12d
0x1408318a8: jg     0x140831969
0x1408318ae: lea    r13,[rip+0x1e3afbb]        # 0x14266c870
0x1408318b5: mov    ebx,esi
0x1408318b7: cmp    esi,edi
0x1408318b9: jg     0x140831959
0x1408318bf: nop
0x1408318c0: mov    r8d,ebx
0x1408318c3: mov    edx,r14d
0x1408318c6: mov    rcx,r13
0x1408318c9: call   0x1400bc750
0x1408318ce: xor    r8d,r8d
0x1408318d1: xor    edx,edx
0x1408318d3: mov    rcx,r13
0x1408318d6: call   0x1400bc7c0
0x1408318db: cmp    r14d,r15d
0x1408318de: jne    0x140831903
0x1408318e0: cmp    ebx,esi
0x1408318e2: jne    0x1408318ec
0x1408318e4: mov    edx,DWORD PTR [rip+0x1e3c8aa]        # 0x14266e194
0x1408318ea: jmp    0x140831947
0x1408318ec: mov    rcx,r13
0x1408318ef: cmp    ebx,edi
0x1408318f1: jne    0x1408318fb
0x1408318f3: mov    edx,DWORD PTR [rip+0x1e3c8b3]        # 0x14266e1ac
0x1408318f9: jmp    0x14083194a
0x1408318fb: mov    edx,DWORD PTR [rip+0x1e3c89f]        # 0x14266e1a0
0x140831901: jmp    0x14083194a
0x140831903: cmp    r14d,r12d
0x140831906: jne    0x14083192b
0x140831908: cmp    ebx,esi
0x14083190a: jne    0x140831914
0x14083190c: mov    edx,DWORD PTR [rip+0x1e3c88a]        # 0x14266e19c
0x140831912: jmp    0x140831947
0x140831914: mov    rcx,r13
0x140831917: cmp    ebx,edi
0x140831919: jne    0x140831923
0x14083191b: mov    edx,DWORD PTR [rip+0x1e3c893]        # 0x14266e1b4
0x140831921: jmp    0x14083194a
0x140831923: mov    edx,DWORD PTR [rip+0x1e3c87f]        # 0x14266e1a8
0x140831929: jmp    0x14083194a
0x14083192b: cmp    ebx,esi
0x14083192d: jne    0x140831937
0x14083192f: mov    edx,DWORD PTR [rip+0x1e3c863]        # 0x14266e198
0x140831935: jmp    0x140831947
0x140831937: cmp    ebx,edi
0x140831939: mov    edx,DWORD PTR [rip+0x1e3c871]        # 0x14266e1b0
0x14083193f: je     0x140831947
0x140831941: mov    edx,DWORD PTR [rip+0x1e3c85d]        # 0x14266e1a4
0x140831947: mov    rcx,r13
0x14083194a: call   0x140af4570
0x14083194f: inc    ebx
0x140831951: cmp    ebx,edi
0x140831953: jle    0x1408318c0
0x140831959: inc    r14d
0x14083195c: cmp    r14d,r12d
0x14083195f: jle    0x1408318b5
0x140831965: mov    r13,QWORD PTR [rbp-0x58]
0x140831969: xor    r8d,r8d
0x14083196c: mov    ebx,0x7
0x140831971: mov    edx,ebx
0x140831973: mov    r9b,0x1
0x140831976: lea    rcx,[rip+0x1e3aef3]        # 0x14266c870
0x14083197d: call   0x1400bc760
0x140831982: cmp    BYTE PTR [rip+0x1099a7f],0x0        # 0x1418cb408
0x140831989: jne    0x14083198e
0x14083198b: inc    r15d
0x14083198e: lea    rdx,[rbp+0xe8]
0x140831995: mov    rcx,r13
0x140831998: call   0x140070870
0x14083199d: lea    rdx,[rbp+0x198]
0x1408319a4: mov    rcx,r13
0x1408319a7: call   0x140070860
0x1408319ac: mov    edi,0xff
0x1408319b1: lea    r13,[rip+0x1e3aeb8]        # 0x14266c870
0x1408319b8: nop    DWORD PTR [rax+rax*1+0x0]
0x1408319c0: mov    rax,QWORD PTR [rbp+0xe8]
0x1408319c7: cmp    rax,QWORD PTR [rbp+0x198]
0x1408319ce: je     0x140831a26
0x1408319d0: mov    edx,0x1
0x1408319d5: cmovb  edx,edi
0x1408319d8: test   dl,dl
0x1408319da: jns    0x140831a26
0x1408319dc: mov    edx,r15d
0x1408319df: mov    rcx,r13
0x1408319e2: cmp    BYTE PTR [rip+0x1099a1f],0x0        # 0x1418cb408
0x1408319e9: lea    r8d,[rsi+0x1]
0x1408319ed: jne    0x1408319f3
0x1408319ef: lea    r8d,[rsi+0x2]
0x1408319f3: call   0x1400bc750
0x1408319f8: lea    rcx,[rbp+0xe8]
0x1408319ff: call   0x140070440
0x140831a04: xor    r9d,r9d
0x140831a07: xor    r8d,r8d
0x140831a0a: mov    rdx,QWORD PTR [rax]
0x140831a0d: mov    rcx,r13
0x140831a10: call   0x140af3400
0x140831a15: inc    r15d
0x140831a18: lea    rcx,[rbp+0xe8]
0x140831a1f: call   0x140070430
0x140831a24: jmp    0x1408319c0
0x140831a26: cmp    DWORD PTR [rip+0x10999cb],0x0        # 0x1418cb3f8
0x140831a2d: je     0x140831aef
0x140831a33: lea    edx,[r15+0x1]
0x140831a37: mov    rcx,r13
0x140831a3a: cmp    BYTE PTR [rip+0x10999c7],0x0        # 0x1418cb408
0x140831a41: lea    r8d,[rsi+0x1]
0x140831a45: jne    0x140831a4b
0x140831a47: lea    r8d,[rsi+0x2]
0x140831a4b: call   0x1400bc750
0x140831a50: xor    r8d,r8d
0x140831a53: mov    edx,ebx
0x140831a55: xor    r9d,r9d
0x140831a58: mov    rcx,r13
0x140831a5b: call   0x1400bc760
0x140831a60: lea    rdx,[rip+0xdeeab1]        # 0x141620518 ; 'Hotkey: '
0x140831a67: lea    rcx,[rbp+0x2a20]
0x140831a6e: call   0x140069780
0x140831a73: nop
0x140831a74: xor    r9d,r9d
0x140831a77: mov    r8b,0x3
0x140831a7a: lea    rdx,[rbp+0x2a20]
0x140831a81: mov    rcx,r13
0x140831a84: call   0x140af3400
0x140831a89: nop
0x140831a8a: lea    rcx,[rbp+0x2a20]
0x140831a91: call   0x140069460
0x140831a96: xor    r8d,r8d
0x140831a99: mov    ebx,0x2
0x140831a9e: mov    edx,ebx
0x140831aa0: mov    r9b,0x1
0x140831aa3: mov    rcx,r13
0x140831aa6: call   0x1400bc760
0x140831aab: xor    r8d,r8d
0x140831aae: mov    edx,DWORD PTR [rip+0x1099944]        # 0x1418cb3f8
0x140831ab4: lea    rcx,[rip+0x109e785]        # 0x1418d0240
0x140831abb: call   0x140c511a0
0x140831ac0: mov    ecx,DWORD PTR [rbp-0x70]
0x140831ac3: mov    edx,DWORD PTR [rbp-0x6c]
0x140831ac6: mov    r8d,DWORD PTR [rbp-0x68]
0x140831aca: jmp    0x140831b16
0x140831acc: cmp    BYTE PTR [rip+0x109990d],0x0        # 0x1418cb3e0
0x140831ad3: je     0x140831b0a
0x140831ad5: call   QWORD PTR [rip+0xdce5b5]        # 0x141600090
0x140831adb: mov    ecx,DWORD PTR [rip+0x1099903]        # 0x1418cb3e4
0x140831ae1: cmp    ecx,eax
0x140831ae3: jg     0x140831afb
0x140831ae5: add    ecx,0x3e8
0x140831aeb: cmp    ecx,eax
0x140831aed: jl     0x140831afb
0x140831aef: mov    ecx,DWORD PTR [rbp-0x70]
0x140831af2: mov    edx,DWORD PTR [rbp-0x6c]
0x140831af5: mov    r8d,DWORD PTR [rbp-0x68]
0x140831af9: jmp    0x140831b0a
0x140831afb: mov    BYTE PTR [rip+0x10998de],0x0        # 0x1418cb3e0
0x140831b02: mov    ecx,DWORD PTR [rbp-0x70]
0x140831b05: mov    r8d,ecx
0x140831b08: mov    edx,ecx
0x140831b0a: mov    ebx,0x2
0x140831b0f: lea    r13,[rip+0x1e3ad5a]        # 0x14266c870
0x140831b16: mov    rax,QWORD PTR [rbp+0x58]
0x140831b1a: cmp    DWORD PTR [rip+0x109d348],eax        # 0x1418cee68
0x140831b20: jne    0x140831b3b
0x140831b22: cmp    DWORD PTR [rip+0x109d344],ecx        # 0x1418cee6c
0x140831b28: jne    0x140831b3b
0x140831b2a: cmp    DWORD PTR [rip+0x109d340],edx        # 0x1418cee70
0x140831b30: jne    0x140831b3b
0x140831b32: cmp    DWORD PTR [rip+0x109d33b],r8d        # 0x1418cee74
0x140831b39: je     0x140831b68
0x140831b3b: mov    DWORD PTR [rip+0x109d327],eax        # 0x1418cee68
0x140831b41: mov    DWORD PTR [rip+0x109d325],ecx        # 0x1418cee6c
0x140831b47: mov    DWORD PTR [rip+0x109d323],edx        # 0x1418cee70
0x140831b4d: mov    DWORD PTR [rip+0x109d320],r8d        # 0x1418cee74
0x140831b54: cmp    WORD PTR [rip+0x1e3b41c],0x2        # 0x14266cf78
0x140831b5c: jge    0x140831b68
0x140831b5e: mov    edx,ebx
0x140831b60: mov    rcx,r13
0x140831b63: call   0x140b016a0
0x140831b68: cmp    WORD PTR [rip+0x1e31480],0x19        # 0x142662ff0
0x140831b70: jne    0x140831cc8
0x140831b76: lea    rcx,[rip+0x1e3149b]        # 0x142663018
0x140831b7d: call   0x140070b50
0x140831b82: test   al,al
0x140831b84: jne    0x140831cc8
0x140831b8a: lea    rcx,[rip+0x1e31487]        # 0x142663018
0x140831b91: call   0x140070960
0x140831b96: mov    r8,rax
0x140831b99: mov    eax,DWORD PTR [rbp-0x74]
0x140831b9c: add    eax,DWORD PTR [rbp-0x80]
0x140831b9f: cdq
0x140831ba0: sub    eax,edx
0x140831ba2: sar    eax,1
0x140831ba4: mov    esi,eax
0x140831ba6: lea    eax,[r8+0x4]
0x140831baa: cdq
0x140831bab: sub    eax,edx
0x140831bad: sar    eax,1
0x140831baf: sub    esi,eax
0x140831bb1: lea    edi,[r8+0x3]
0x140831bb5: add    edi,esi
0x140831bb7: mov    r14d,0x5
0x140831bbd: nop    DWORD PTR [rax]
0x140831bc0: mov    ebx,esi
0x140831bc2: cmp    esi,edi
0x140831bc4: jg     0x140831c6b
0x140831bca: nop    WORD PTR [rax+rax*1+0x0]
0x140831bd0: mov    r8d,ebx
0x140831bd3: mov    edx,r14d
0x140831bd6: mov    rcx,r13
0x140831bd9: call   0x1400bc750
0x140831bde: xor    r8d,r8d
0x140831be1: xor    edx,edx
0x140831be3: mov    rcx,r13
0x140831be6: call   0x1400bc7c0
0x140831beb: cmp    r14d,0x5
0x140831bef: jne    0x140831c14
0x140831bf1: cmp    ebx,esi
0x140831bf3: jne    0x140831bfd
0x140831bf5: mov    edx,DWORD PTR [rip+0x1e3c599]        # 0x14266e194
0x140831bfb: jmp    0x140831c59
0x140831bfd: mov    rcx,r13
0x140831c00: cmp    ebx,edi
0x140831c02: jne    0x140831c0c
0x140831c04: mov    edx,DWORD PTR [rip+0x1e3c5a2]        # 0x14266e1ac
0x140831c0a: jmp    0x140831c5c
0x140831c0c: mov    edx,DWORD PTR [rip+0x1e3c58e]        # 0x14266e1a0
0x140831c12: jmp    0x140831c5c
0x140831c14: cmp    r14d,0x9
0x140831c18: jne    0x140831c3d
0x140831c1a: cmp    ebx,esi
0x140831c1c: jne    0x140831c26
0x140831c1e: mov    edx,DWORD PTR [rip+0x1e3c578]        # 0x14266e19c
0x140831c24: jmp    0x140831c59
0x140831c26: mov    rcx,r13
0x140831c29: cmp    ebx,edi
0x140831c2b: jne    0x140831c35
0x140831c2d: mov    edx,DWORD PTR [rip+0x1e3c581]        # 0x14266e1b4
0x140831c33: jmp    0x140831c5c
0x140831c35: mov    edx,DWORD PTR [rip+0x1e3c56d]        # 0x14266e1a8
0x140831c3b: jmp    0x140831c5c
0x140831c3d: cmp    ebx,esi
0x140831c3f: jne    0x140831c49
0x140831c41: mov    edx,DWORD PTR [rip+0x1e3c551]        # 0x14266e198
0x140831c47: jmp    0x140831c59
0x140831c49: cmp    ebx,edi
0x140831c4b: mov    edx,DWORD PTR [rip+0x1e3c55f]        # 0x14266e1b0
0x140831c51: je     0x140831c59
0x140831c53: mov    edx,DWORD PTR [rip+0x1e3c54b]        # 0x14266e1a4
0x140831c59: mov    rcx,r13
0x140831c5c: call   0x140af4570
0x140831c61: inc    ebx
0x140831c63: cmp    ebx,edi
0x140831c65: jle    0x140831bd0
0x140831c6b: inc    r14d
0x140831c6e: cmp    r14d,0x9
0x140831c72: jle    0x140831bc0
0x140831c78: lea    eax,[rsi+0x2]
0x140831c7b: mov    DWORD PTR [rip+0x1e3ac73],eax        # 0x14266c8f4
0x140831c81: mov    DWORD PTR [rip+0x1e3ac6d],0x7        # 0x14266c8f8
0x140831c8b: movzx  eax,BYTE PTR [rip+0x1e313a6]        # 0x142663038
0x140831c92: mov    BYTE PTR [rip+0x1e3ac64],al        # 0x14266c8fc
0x140831c98: mov    BYTE PTR [rip+0x1e3ac5e],0x0        # 0x14266c8fd
0x140831c9f: movzx  eax,BYTE PTR [rip+0x1e31394]        # 0x14266303a
0x140831ca6: mov    BYTE PTR [rip+0x1e3ac52],al        # 0x14266c8fe
0x140831cac: mov    BYTE PTR [rip+0x1e3ac4c],0x1        # 0x14266c8ff
0x140831cb3: xor    r9d,r9d
0x140831cb6: xor    r8d,r8d
0x140831cb9: lea    rdx,[rip+0x1e31358]        # 0x142663018
0x140831cc0: mov    rcx,r13
0x140831cc3: call   0x140af3400
0x140831cc8: cmp    BYTE PTR [rip+0x1097e71],0x0        # 0x1418c9b40
0x140831ccf: je     0x140831cdf
0x140831cd1: lea    rcx,[rip+0x1097e68]        # 0x1418c9b40
0x140831cd8: call   0x14022f500
0x140831cdd: jmp    0x140831cff
0x140831cdf: cmp    BYTE PTR [rip+0x109760a],0x0        # 0x1418c92f0
0x140831ce6: je     0x140831cff
0x140831ce8: mov    r9d,DWORD PTR [rbp-0x80]
0x140831cec: mov    r8d,DWORD PTR [rbp-0x74]
0x140831cf0: mov    edx,DWORD PTR [rbp-0x50]
0x140831cf3: lea    rcx,[rip+0x10975f6]        # 0x1418c92f0
0x140831cfa: call   0x1401e0e90
0x140831cff: cmp    BYTE PTR [rip+0x1097902],0x0        # 0x1418c9608
0x140831d06: je     0x140831d14
0x140831d08: lea    rcx,[rip+0x10978f9]        # 0x1418c9608
0x140831d0f: call   0x1401eb6d0
0x140831d14: mov    rcx,QWORD PTR [rbp+0x3008]
0x140831d1b: xor    rcx,rsp
0x140831d1e: call   0x1415530b0
0x140831d23: lea    r11,[rsp+0x3110]
0x140831d2b: mov    rbx,QWORD PTR [r11+0x30]
0x140831d2f: mov    rsi,QWORD PTR [r11+0x38]
0x140831d33: mov    rdi,QWORD PTR [r11+0x40]
0x140831d37: mov    rsp,r11
0x140831d3a: pop    r15
0x140831d3c: pop    r14
0x140831d3e: pop    r13
0x140831d40: pop    r12
0x140831d42: pop    rbp
0x140831d43: ret
0x140831d44: xor    eax,0x6f008276
0x140831d49: jbe    0x140831ccd
0x140831d4b: add    BYTE PTR [rcx-0x1cff7d8a],ch
0x140831d51: jbe    0x140831cd5
0x140831d53: add    BYTE PTR [rip+0x57008277],bl        # 0x197839fd0
0x140831d59: ja     0x140831cdd
0x140831d5b: add    BYTE PTR [rcx-0x34ff7d89],dl
0x140831d61: ja     0x140831ce5
0x140831d63: add    BYTE PTR [rip+0x3f008278],al        # 0x17f839fe1
0x140831d69: js     0x140831ced
0x140831d6b: add    BYTE PTR [rcx+0x78],bh
0x140831d6e: (bad)
0x140831d6f: add    BYTE PTR [rbx-0x12ff7d88],dh
0x140831d75: js     0x140831cf9
0x140831d77: add    BYTE PTR [rdi],ah
0x140831d79: jns    0x140831cfd
0x140831d7b: add    BYTE PTR [rcx+0x79],ah
0x140831d7e: (bad)
0x140831d7f: add    BYTE PTR [rbx-0x2aff7d87],bl
0x140831d85: jns    0x140831d09
0x140831d87: add    BYTE PTR [rdi],cl
0x140831d89: jp     0x140831d0d
0x140831d8b: add    BYTE PTR [rcx+0x7a],cl
0x140831d8e: (bad)
0x140831d8f: add    BYTE PTR [rbx-0x42ff7d86],al
0x140831d95: jp     0x140831d19
0x140831d97: add    bh,dh
0x140831d99: jp     0x140831d1d
0x140831d9b: add    BYTE PTR [rcx],dh
0x140831d9d: jnp    0x140831d21
0x140831d9f: add    BYTE PTR [rbx+0x7b],ch
0x140831da2: (bad)
0x140831da3: add    BYTE PTR [rbp-0x20ff7d85],ah
0x140831da9: jnp    0x140831d2d
0x140831dab: add    BYTE PTR [rcx],bl
0x140831dad: jl     0x140831d31
0x140831daf: add    BYTE PTR [rbx+0x7c],dl
0x140831db2: (bad)
0x140831db3: add    BYTE PTR [rbp-0x38ff7d84],cl
0x140831db9: jl     0x140831d3d
0x140831dbb: add    BYTE PTR [rcx],al
0x140831dbd: jge    0x140831d41
0x140831dbf: add    BYTE PTR [rbx],bh
0x140831dc1: jge    0x140831d45
0x140831dc3: add    BYTE PTR [rbp+0x7d],dh
0x140831dc6: (bad)
0x140831dc7: add    BYTE PTR [rdi-0x16ff7d83],ch
0x140831dcd: jge    0x140831d51
0x140831dcf: add    BYTE PTR [rbx],ah
0x140831dd1: jle    0x140831d55
0x140831dd3: add    BYTE PTR [rbp+0x7e],bl
0x140831dd6: (bad)
0x140831dd7: add    BYTE PTR [rdi-0x2eff7d82],dl
0x140831ddd: jle    0x140831d61
0x140831ddf: add    BYTE PTR [rbx],cl
0x140831de1: jg     0x140831d65
0x140831de3: add    BYTE PTR [rbp+0x7f],al
0x140831de6: (bad)
0x140831de7: add    BYTE PTR [rdi+0x7f],bh
0x140831dea: (bad)
0x140831deb: add    BYTE PTR [rcx-0xcff7d81],bh
0x140831df1: jg     0x140831d75
0x140831df3: add    BYTE PTR [rip+0x67008280],ch        # 0x1a783a079
0x140831df9: add    BYTE PTR [rdx-0x7d7f5f00],0x0
0x140831e00: fild   DWORD PTR [rax-0x7eeaff7e]
0x140831e06: (bad)
0x140831e07: add    BYTE PTR [rcx+rax*4-0x7e],cl
0x140831e0b: add    BYTE PTR [rbx-0x53ff7d7f],al
0x140831e11: mov    eax,DWORD PTR [rdx-0x7d745400]
0x140831e17: add    BYTE PTR [rbx+rcx*4-0x7453ff7e],ch
0x140831e1e: (bad)
0x140831e1f: add    BYTE PTR [rbx+rcx*4-0x7453ff7e],ch
0x140831e26: (bad)
0x140831e27: add    BYTE PTR [rbx+rcx*4-0x7453ff7e],ch
0x140831e2e: (bad)
0x140831e2f: add    BYTE PTR [rbx+rcx*4-0x7453ff7e],ch
0x140831e36: (bad)
0x140831e37: add    BYTE PTR [rbx+rcx*4-0x4b72ff7e],ch
0x140831e3e: (bad)
0x140831e3f: add    BYTE PTR [rdi],al
0x140831e41: retf   0x82
0x140831e44: (bad)
0x140831e45: retf   0x82
0x140831e48: (bad)
0x140831e49: retf   0x82
0x140831e4c: lea    esi,[rdx+rax*4-0x7d4a0100]
0x140831e53: add    BYTE PTR [rdi],al
0x140831e55: retf   0x82
0x140831e58: mov    dl,0xbd
0x140831e5a: (bad)
0x140831e5b: add    BYTE PTR [rbx],dh
0x140831e5d: (bad)
0x140831e60: stc
0x140831e61: mov    DWORD PTR [rdx-0x7d35f900],0x82ca0700
0x140831e6b: add    BYTE PTR [rdi],al
0x140831e6d: retf   0x82
0x140831e70: out    dx,eax
0x140831e71: (bad)
0x140831e74: (bad)
0x140831e75: retf   0x82
0x140831e78: (bad)
0x140831e79: retf   0x82
0x140831e7c: rex.WRX mov BYTE PTR [rdx-0x7d4ed200],0x0
0x140831e84: (bad)
0x140831e85: mov    bl,0x82
0x140831e87: add    BYTE PTR [rdi-0x6eff7d4c],dh
0x140831e8d: (bad)
0x140831e90: (bad)
0x140831e91: mov    ebx,0xbc6a0082
0x140831e96: (bad)
0x140831e97: add    BYTE PTR [rdi-0x49],al
0x140831e9a: (bad)
0x140831e9b: add    BYTE PTR [rdi-0x28ff7d48],cl
0x140831ea1: mov    ecx,0xc6ac0082
0x140831ea6: (bad)
0x140831ea7: add    BYTE PTR [rdi],al
0x140831ea9: retf   0x82
0x140831eac: sbb    esp,eax
0x140831eae: (bad)
0x140831eaf: add    ch,dl
0x140831eb1: (bad)
0x140831eb5: retf   0x82
0x140831eb8: ja     0x140831e7e
0x140831eba: (bad)
0x140831ebb: add    BYTE PTR [rdx-0x4f],bh
0x140831ebe: (bad)
0x140831ebf: add    BYTE PTR [rax-0x19ff7d4f],dh
0x140831ec5: mov    cl,0x82
0x140831ec7: add    BYTE PTR [rdx+rsi*4],bl
0x140831eca: (bad)
0x140831ecb: add    BYTE PTR [rdx-0x4e],dl
0x140831ece: (bad)
0x140831ecf: add    BYTE PTR [rax-0x41ff7d4e],cl
0x140831ed5: mov    dl,0x82
0x140831ed7: add    ah,dh
0x140831ed9: mov    dl,0x82
0x140831edb: add    BYTE PTR [rdx],ch
0x140831edd: mov    bl,0x82
0x140831edf: add    dl,dh
0x140831ee1: mov    ebp,0xbe130082
0x140831ee6: (bad)
0x140831ee7: add    BYTE PTR [rsi+rdi*4],dh
0x140831eea: (bad)
0x140831eeb: add    BYTE PTR [rbp-0x42],dl
0x140831eee: (bad)
0x140831eef: add    BYTE PTR [rbx-0x42],dh
0x140831ef2: (bad)
0x140831ef3: add    BYTE PTR [rcx-0x67ff7d42],dl
0x140831ef9: mov    esi,0xbea20082
0x140831efe: (bad)
0x140831eff: add    bl,al
0x140831f01: mov    esi,0xbee40082
0x140831f06: (bad)
0x140831f07: add    BYTE PTR [rdx],al
0x140831f09: mov    edi,0xbf200082
0x140831f0e: (bad)
0x140831f0f: add    BYTE PTR [rbx],bh
0x140831f11: mov    edi,0xbf560082
0x140831f16: (bad)
0x140831f17: add    BYTE PTR [rcx-0x41],dh
0x140831f1a: (bad)
0x140831f1b: add    BYTE PTR [rsi-0x41],bh
0x140831f1e: (bad)
0x140831f1f: add    BYTE PTR [rbx-0x6aff7d41],cl
0x140831f25: mov    edi,0xc0b90082
0x140831f2a: (bad)
0x140831f2b: add    BYTE PTR [rbp-0x40],cl
0x140831f2e: (bad)
0x140831f2f: add    BYTE PTR [rbx-0x10ff7d40],al
0x140831f35: rol    BYTE PTR [rdx-0x7d3edb00],0x0
0x140831f3c: pop    rbx
0x140831f3d: rol    DWORD PTR [rdx-0x7d3e6f00],0x0
0x140831f44: mov    ecx,0xc1fd0082
0x140831f4a: (bad)
0x140831f4b: add    BYTE PTR [rbx],dh
0x140831f4d: ret    0x82
0x140831f50: imul   eax,edx,0xc29f0082
0x140831f56: (bad)
0x140831f57: add    ch,dl
0x140831f59: ret    0x82
0x140831f5c: or     eax,ebx
0x140831f5e: (bad)
0x140831f5f: add    BYTE PTR [rcx-0x3d],al
0x140831f62: (bad)
0x140831f63: add    BYTE PTR [rdi-0x3d],dh
0x140831f66: (bad)
0x140831f67: add    BYTE PTR [rbp-0x1cff7d3d],ch
0x140831f6d: ret
0x140831f6e: (bad)
0x140831f6f: add    BYTE PTR [rcx-0x38ff7d38],dl
0x140831f75: enter  0x82,0xfd
0x140831f79: enter  0x82,0x33
0x140831f7d: leave
0x140831f7e: (bad)
0x140831f7f: add    BYTE PTR [rcx-0x37],ch
0x140831f82: (bad)
0x140831f83: add    BYTE PTR [rcx+rcx*8-0x3630ff7e],bl
0x140831f8a: (bad)
0x140831f8b: add    BYTE PTR [rbp-0x27],dl
0x140831f8e: (bad)
0x140831f8f: add    dl,dh
0x140831f91: out    dx,eax
0x140831f92: (bad)
0x140831f93: add    dl,dh
0x140831f95: out    dx,eax
0x140831f96: (bad)
0x140831f97: add    dl,dh
0x140831f99: out    dx,eax
0x140831f9a: (bad)
0x140831f9b: add    BYTE PTR [rbp-0x27],dl
0x140831f9e: (bad)
0x140831f9f: add    ah,dl
0x140831fa1: fiadd  DWORD PTR [rdx-0x7d100e00]
0x140831fa7: add    BYTE PTR [rbp-0x1d],ah
0x140831faa: (bad)
0x140831fab: add    bl,bh
0x140831fad: (bad)
0x140831fae: (bad)
0x140831faf: add    al,ah
0x140831fb1: in     eax,dx
0x140831fb2: (bad)
0x140831fb3: add    dl,dh
0x140831fb5: out    dx,eax
0x140831fb6: (bad)
0x140831fb7: add    dl,dh
0x140831fb9: out    dx,eax
0x140831fba: (bad)
0x140831fbb: add    dl,dh
0x140831fbd: out    dx,eax
0x140831fbe: (bad)
0x140831fbf: add    ch,al
0x140831fc1: jmp    0x140831f45
0x140831fc3: add    dl,dh
0x140831fc5: out    dx,eax
0x140831fc6: (bad)
0x140831fc7: add    dl,dh
0x140831fc9: out    dx,eax
0x140831fca: (bad)
0x140831fcb: add    BYTE PTR [rbx],ch
0x140831fcd: in     al,dx
0x140831fce: (bad)
0x140831fcf: add    BYTE PTR [rax-0x2b],ch
0x140831fd2: (bad)
0x140831fd3: add    dh,bh
0x140831fd5: xlat   BYTE PTR [rbx]
0x140831fd6: (bad)
0x140831fd7: add    BYTE PTR [rdi-0x27],ah
0x140831fda: (bad)
0x140831fdb: add    BYTE PTR [rax-0x15],ah
0x140831fde: (bad)
0x140831fdf: add    BYTE PTR [rax-0x7ff7d20],cl
0x140831fe5: loope  0x140831f69
0x140831fe7: add    BYTE PTR [rcx-0x24],al
0x140831fea: (bad)
0x140831feb: add    BYTE PTR [rsi+0x1b0082dd],ch
0x140831ff1: fild   WORD PTR [rdx-0x7d137000]
0x140831ff7: add    dl,dh
0x140831ff9: out    dx,eax
0x140831ffa: (bad)
0x140831ffb: add    ah,cl
0x140831ffd: jmp    0x12b192084
0x140832002: (bad)
0x140832003: add    dl,dh
0x140832005: out    dx,eax
0x140832006: (bad)
0x140832007: add    BYTE PTR [rcx],dh
0x140832009: (bad)
0x14083200a: (bad)
0x14083200b: add    BYTE PTR [rbp-0x9ff7d2b],dh
0x140832011: {rex2 0x82} (bad)
0x140832014: (bad)
0x140832015: udb
0x140832016: (bad)
0x140832017: add    BYTE PTR [rax-0x2a],bh
0x14083201a: (bad)
0x14083201b: add    BYTE PTR [rcx-0x5ff7d2a],bh
0x140832021: udb
0x140832022: (bad)
0x140832023: add    BYTE PTR [rbx],bh
0x140832025: xlat   BYTE PTR [rbx]
0x140832026: (bad)
0x140832027: add    BYTE PTR [rdi+rdx*8-0x7e],bh
0x14083202b: add    BYTE PTR [rbp-0x5aff7d29],bh
0x140832031: jrcxz  0x140831fb5
0x140832033: add    dh,al
0x140832035: jrcxz  0x140831fb9
0x140832037: add    bh,ah
0x140832039: jrcxz  0x140831fbd
0x14083203b: add    BYTE PTR [rax],cl
0x14083203d: in     al,0x82
0x14083203f: add    BYTE PTR [rsi],ah
0x140832041: in     al,0x82
0x140832043: add    BYTE PTR [rsp+riz*8-0x7e],al
0x140832047: add    BYTE PTR [rbx-0x1c],cl
0x14083204a: (bad)
0x14083204b: add    BYTE PTR [rbp-0x1c],dl
0x14083204e: (bad)
0x14083204f: add    BYTE PTR [rsi-0x1c],dh
0x140832052: (bad)
0x140832053: add    BYTE PTR [rdi-0x4aff7d1c],dl
0x140832059: in     al,0x82
0x14083205b: add    bl,dl
0x14083205d: in     al,0x82
0x14083205f: add    dh,ch
0x140832061: in     al,0x82
0x140832063: add    BYTE PTR [rcx],cl
0x140832065: in     eax,0x82
0x140832067: add    BYTE PTR [riz*8-0x1aceff7e],ah
0x14083206e: (bad)
0x14083206f: add    BYTE PTR [rsi],bh
0x140832071: in     eax,0x82
0x140832073: add    BYTE PTR [rax-0x1b],cl
0x140832076: (bad)
0x140832077: add    BYTE PTR [rsi+riz*8-0x7e],ch
0x14083207b: add    BYTE PTR [rax],al
0x14083207d: out    0x82,al
0x14083207f: add    BYTE PTR [rsi],dh
0x140832081: out    0x82,al
0x140832083: add    BYTE PTR [rdx-0x27ff7d1a],ah
0x140832089: out    0x82,al
0x14083208b: add    BYTE PTR [rsi],cl
0x14083208d: out    0x82,eax
0x14083208f: add    BYTE PTR [rdi+riz*8-0x7e],al
0x140832093: add    BYTE PTR [rdx-0x19],bh
0x140832096: (bad)
0x140832097: add    BYTE PTR [rax-0x19ff7d19],dh
0x14083209d: out    0x82,eax
0x14083209f: add    BYTE PTR [rax+rbp*8],bl
0x1408320a2: (bad)
0x1408320a3: add    BYTE PTR [rdx-0x18],dl
0x1408320a6: (bad)
0x1408320a7: add    BYTE PTR [rax-0x41ff7d18],cl
0x1408320ad: call   0x129772134
0x1408320b2: (bad)
0x1408320b3: add    BYTE PTR [rdx],ch
0x1408320b5: jmp    0x129e3213c
0x1408320ba: (bad)
0x1408320bb: add    BYTE PTR [rsi+0x780082e9],dl
0x1408320c1: out    dx,al
0x1408320c2: (bad)
0x1408320c3: add    BYTE PTR [rsi-0x1bff7d12],ch
0x1408320c9: out    dx,al
0x1408320ca: (bad)
0x1408320cb: add    BYTE PTR [rdx],bl
0x1408320cd: out    dx,eax
0x1408320ce: (bad)
0x1408320cf: add    BYTE PTR [rax-0x11],dl
0x1408320d2: (bad)
0x1408320d3: add    BYTE PTR [rbx-0x49ff7d11],al
0x1408320d9: out    dx,eax
0x1408320da: (bad)
