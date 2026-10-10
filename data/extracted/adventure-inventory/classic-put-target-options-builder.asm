# classic PE:6a70b91c:0270a000; put-target-options-builder; RVA 0x896bf0..0x89748f
0x00896bf0: mov    QWORD PTR [rsp+0x10],rbx
0x00896bf5: mov    QWORD PTR [rsp+0x18],r8
0x00896bfa: mov    QWORD PTR [rsp+0x8],rcx
0x00896bff: push   rbp
0x00896c00: push   rsi
0x00896c01: push   rdi
0x00896c02: push   r12
0x00896c04: push   r13
0x00896c06: push   r14
0x00896c08: push   r15
0x00896c0a: mov    rbp,rsp
0x00896c0d: sub    rsp,0x60
0x00896c11: mov    r9,QWORD PTR [rip+0x1b483e8]        # 0x1423df000
0x00896c18: mov    eax,0xffff8ad0
0x00896c1d: mov    WORD PTR [rbp+0x58],ax
0x00896c21: mov    rsi,r8
0x00896c24: mov    r13,rdx
0x00896c27: test   DWORD PTR [r9+0x110],0x2000000
0x00896c32: je     0x140896c7f
0x00896c34: mov    rbx,QWORD PTR [r9+0x1d8]
0x00896c3b: mov    rdi,QWORD PTR [r9+0x1e0]
0x00896c42: cmp    rbx,rdi
0x00896c45: jae    0x140896ca3
0x00896c47: mov    rcx,QWORD PTR [rbx]
0x00896c4a: mov    rax,QWORD PTR [rcx]
0x00896c4d: call   QWORD PTR [rax+0x10]
0x00896c50: cmp    eax,0xb
0x00896c53: jne    0x140896c63
0x00896c55: mov    rcx,QWORD PTR [rbx]
0x00896c58: mov    rax,QWORD PTR [rcx]
0x00896c5b: call   QWORD PTR [rax+0x18]
0x00896c5e: test   rax,rax
0x00896c61: jne    0x140896c69
0x00896c63: add    rbx,0x8
0x00896c67: jmp    0x140896c42
0x00896c69: lea    r9,[rbp-0x1c]
0x00896c6d: mov    rcx,rax
0x00896c70: lea    r8,[rbp-0x20]
0x00896c74: lea    rdx,[rbp+0x58]
0x00896c78: call   0x140c88ae0
0x00896c7d: jmp    0x140896ca3
0x00896c7f: movzx  eax,WORD PTR [r9+0xa8]
0x00896c87: mov    WORD PTR [rbp+0x58],ax
0x00896c8b: movzx  eax,WORD PTR [r9+0xaa]
0x00896c93: mov    WORD PTR [rbp-0x20],ax
0x00896c97: movzx  eax,WORD PTR [r9+0xac]
0x00896c9f: mov    WORD PTR [rbp-0x1c],ax
0x00896ca3: mov    rax,QWORD PTR [rip+0x1b48356]        # 0x1423df000
0x00896caa: xor    r8d,r8d
0x00896cad: mov    r12d,r8d
0x00896cb0: mov    rcx,QWORD PTR [rax+0x410]
0x00896cb7: sub    rcx,QWORD PTR [rax+0x408]
0x00896cbe: sar    rcx,0x3
0x00896cc2: test   rcx,rcx
0x00896cc5: je     0x140896eae
0x00896ccb: mov    r15d,r8d
0x00896cce: xchg   ax,ax
0x00896cd0: mov    rcx,QWORD PTR [rip+0x1b48329]        # 0x1423df000
0x00896cd7: mov    rax,QWORD PTR [rcx+0x408]
0x00896cde: mov    rdx,QWORD PTR [r15+rax*1]
0x00896ce2: mov    rdx,QWORD PTR [rdx]
0x00896ce5: call   0x14135c060
0x00896cea: mov    rdx,QWORD PTR [rip+0x1b4830f]        # 0x1423df000
0x00896cf1: test   al,al
0x00896cf3: sete   r10b
0x00896cf7: mov    rax,QWORD PTR [rdx+0x408]
0x00896cfe: mov    rcx,QWORD PTR [r15+rax*1]
0x00896d02: mov    rdi,QWORD PTR [rcx]
0x00896d05: test   rdi,rdi
0x00896d08: je     0x140896d4b
0x00896d0a: mov    r8,QWORD PTR [rdx+0xb18]
0x00896d11: mov    rax,QWORD PTR [rdx+0xb20]
0x00896d18: sub    rax,r8
0x00896d1b: sar    rax,0x4
0x00896d1f: sub    eax,0x1
0x00896d22: js     0x140896d4b
0x00896d24: mov    r9d,DWORD PTR [rdi+0x1c]
0x00896d28: movsxd rdx,eax
0x00896d2b: mov    rcx,rdx
0x00896d2e: shl    rcx,0x4
0x00896d32: mov    rax,QWORD PTR [r8+rcx*1]
0x00896d36: cmp    DWORD PTR [rax+0x14],r9d
0x00896d3a: je     0x140896d48
0x00896d3c: sub    rcx,0x10
0x00896d40: sub    rdx,0x1
0x00896d44: jns    0x140896d32
0x00896d46: jmp    0x140896d4b
0x00896d48: xor    r10b,r10b
0x00896d4b: mov    rbx,QWORD PTR [rdi+0x38]
0x00896d4f: xor    r14d,r14d
0x00896d52: cmp    rdi,rsi
0x00896d55: movzx  eax,r10b
0x00896d59: mov    esi,DWORD PTR [rsi+0x1c]
0x00896d5c: mov    rdi,QWORD PTR [rdi+0x40]
0x00896d60: cmovne r14d,eax
0x00896d64: cmp    rbx,rdi
0x00896d67: jae    0x140896d8d
0x00896d69: mov    rcx,QWORD PTR [rbx]
0x00896d6c: mov    rax,QWORD PTR [rcx]
0x00896d6f: call   QWORD PTR [rax+0x10]
0x00896d72: cmp    eax,0xa
0x00896d75: jne    0x140896d84
0x00896d77: mov    rcx,QWORD PTR [rbx]
0x00896d7a: mov    rax,QWORD PTR [rcx]
0x00896d7d: call   QWORD PTR [rax+0x60]
0x00896d80: cmp    eax,esi
0x00896d82: je     0x140896d8a
0x00896d84: add    rbx,0x8
0x00896d88: jmp    0x140896d64
0x00896d8a: xor    r14b,r14b
0x00896d8d: mov    rax,QWORD PTR [rip+0x1b4826c]        # 0x1423df000
0x00896d94: xor    edx,edx
0x00896d96: mov    rax,QWORD PTR [rax+0x408]
0x00896d9d: mov    rcx,QWORD PTR [r15+rax*1]
0x00896da1: mov    rcx,QWORD PTR [rcx]
0x00896da4: call   0x140c875c0
0x00896da9: mov    rsi,QWORD PTR [rbp+0x50]
0x00896dad: mov    ebx,eax
0x00896daf: mov    rcx,rsi
0x00896db2: mov    rdx,QWORD PTR [rsi]
0x00896db5: call   QWORD PTR [rdx+0x2c0]
0x00896dbb: cmp    ebx,eax
0x00896dbd: jl     0x140896e56
0x00896dc3: test   r14b,r14b
0x00896dc6: je     0x140896e56
0x00896dcc: mov    ecx,0x30
0x00896dd1: call   0x141534600
0x00896dd6: mov    QWORD PTR [rbp-0x8],rax
0x00896dda: mov    rdx,rax
0x00896ddd: xor    r8d,r8d
0x00896de0: mov    QWORD PTR [rbp-0x8],rdx
0x00896de4: mov    DWORD PTR [rax+0x8],r8d
0x00896de8: mov    DWORD PTR [rax+0xc],0xffffffff
0x00896def: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x00896df6: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x00896dfd: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x00896e04: lea    rax,[rip+0xe1b275]        # 0x1416b2080
0x00896e0b: mov    QWORD PTR [rdx+0x28],r8
0x00896e0f: mov    QWORD PTR [rdx],rax
0x00896e12: mov    QWORD PTR [rdx+0x20],rsi
0x00896e16: mov    rax,QWORD PTR [rip+0x1b481e3]        # 0x1423df000
0x00896e1d: mov    rax,QWORD PTR [rax+0x408]
0x00896e24: mov    rcx,QWORD PTR [r15+rax*1]
0x00896e28: mov    rax,QWORD PTR [rcx]
0x00896e2b: mov    QWORD PTR [rdx+0x28],rax
0x00896e2f: mov    DWORD PTR [rdx+0x8],r8d
0x00896e33: mov    rax,QWORD PTR [r13+0x8]
0x00896e37: cmp    rax,QWORD PTR [r13+0x10]
0x00896e3b: je     0x140896e47
0x00896e3d: mov    QWORD PTR [rax],rdx
0x00896e40: add    QWORD PTR [r13+0x8],0x8
0x00896e45: jmp    0x140896e56
0x00896e47: lea    r8,[rbp-0x8]
0x00896e4b: mov    rdx,rax
0x00896e4e: mov    rcx,r13
0x00896e51: call   0x1400bacc0
0x00896e56: mov    rax,QWORD PTR [rip+0x1b481a3]        # 0x1423df000
0x00896e5d: mov    r8,rsi
0x00896e60: mov    rcx,QWORD PTR [rbp+0x40]
0x00896e64: mov    rdx,r13
0x00896e67: mov    DWORD PTR [rsp+0x20],0x1
0x00896e6f: mov    rax,QWORD PTR [rax+0x408]
0x00896e76: mov    r9,QWORD PTR [r15+rax*1]
0x00896e7a: mov    r9,QWORD PTR [r9]
0x00896e7d: call   0x140897490
0x00896e82: mov    rax,QWORD PTR [rip+0x1b48177]        # 0x1423df000
0x00896e89: inc    r12d
0x00896e8c: add    r15,0x8
0x00896e90: mov    rcx,QWORD PTR [rax+0x410]
0x00896e97: sub    rcx,QWORD PTR [rax+0x408]
0x00896e9e: sar    rcx,0x3
0x00896ea2: movsxd rax,r12d
0x00896ea5: cmp    rax,rcx
0x00896ea8: jb     0x140896cd0
0x00896eae: mov    rsi,QWORD PTR [rip+0x1b48103]        # 0x1423defb8
0x00896eb5: lea    rbx,[rip+0xe19eb4]        # 0x1416b0d70
0x00896ebc: mov    r14,QWORD PTR [rip+0x1b480fd]        # 0x1423defc0
0x00896ec3: mov    r12,QWORD PTR [rbp+0x50]
0x00896ec7: cmp    rsi,r14
0x00896eca: jae    0x140897188
0x00896ed0: mov    r15,QWORD PTR [rsi]
0x00896ed3: test   BYTE PTR [r15+0x110],0x2
0x00896edb: jne    0x14089717f
0x00896ee1: movzx  eax,WORD PTR [r15+0xa0]
0x00896ee9: cmp    ax,0x67
0x00896eed: je     0x14089717f
0x00896ef3: cmp    ax,0x68
0x00896ef7: je     0x14089717f
0x00896efd: cmp    r15,QWORD PTR [rip+0x1b480fc]        # 0x1423df000
0x00896f04: je     0x14089717f
0x00896f0a: mov    edi,0xffff8ad0
0x00896f0f: mov    WORD PTR [rbp-0x18],di
0x00896f13: test   DWORD PTR [r15+0x110],0x2000000
0x00896f1e: je     0x140896f74
0x00896f20: mov    rbx,QWORD PTR [r15+0x1d8]
0x00896f27: mov    rdi,QWORD PTR [r15+0x1e0]
0x00896f2e: xchg   ax,ax
0x00896f30: cmp    rbx,rdi
0x00896f33: jae    0x140896f6b
0x00896f35: mov    rcx,QWORD PTR [rbx]
0x00896f38: mov    rax,QWORD PTR [rcx]
0x00896f3b: call   QWORD PTR [rax+0x10]
0x00896f3e: cmp    eax,0xb
0x00896f41: jne    0x140896f51
0x00896f43: mov    rcx,QWORD PTR [rbx]
0x00896f46: mov    rax,QWORD PTR [rcx]
0x00896f49: call   QWORD PTR [rax+0x18]
0x00896f4c: test   rax,rax
0x00896f4f: jne    0x140896f57
0x00896f51: add    rbx,0x8
0x00896f55: jmp    0x140896f30
0x00896f57: lea    r9,[rbp-0x10]
0x00896f5b: mov    rcx,rax
0x00896f5e: lea    r8,[rbp-0x14]
0x00896f62: lea    rdx,[rbp-0x18]
0x00896f66: call   0x140c88ae0
0x00896f6b: lea    rbx,[rip+0xe19dfe]        # 0x1416b0d70
0x00896f72: jmp    0x140896f98
0x00896f74: movzx  eax,WORD PTR [r15+0xa8]
0x00896f7c: mov    WORD PTR [rbp-0x18],ax
0x00896f80: movzx  eax,WORD PTR [r15+0xaa]
0x00896f88: mov    WORD PTR [rbp-0x14],ax
0x00896f8c: movzx  eax,WORD PTR [r15+0xac]
0x00896f94: mov    WORD PTR [rbp-0x10],ax
0x00896f98: movzx  eax,WORD PTR [rbp-0x10]
0x00896f9c: lea    rcx,[rip+0x1b3443d]        # 0x1423cb3e0
0x00896fa3: movzx  r9d,WORD PTR [rbp-0x1c]
0x00896fa8: movzx  r8d,WORD PTR [rbp-0x20]
0x00896fad: movzx  edx,WORD PTR [rbp+0x58]
0x00896fb1: mov    WORD PTR [rsp+0x30],ax
0x00896fb6: movzx  eax,WORD PTR [rbp-0x14]
0x00896fba: mov    WORD PTR [rsp+0x28],ax
0x00896fbf: movzx  eax,WORD PTR [rbp-0x18]
0x00896fc3: mov    WORD PTR [rsp+0x20],ax
0x00896fc8: call   0x1414479d0
0x00896fcd: test   al,al
0x00896fcf: je     0x14089717f
0x00896fd5: test   DWORD PTR [r15+0x110],0x4000000
0x00896fe0: jne    0x1408970c6
0x00896fe6: mov    rax,QWORD PTR [rip+0x1dac50b]        # 0x1426434f8
0x00896fed: mov    r8d,DWORD PTR [r15+0xc30]
0x00896ff4: mov    rdx,rax
0x00896ff7: mov    rcx,QWORD PTR [rip+0x1dac502]        # 0x142643500
0x00896ffe: xchg   ax,ax
0x00897000: cmp    rax,rcx
0x00897003: jae    0x140897020
0x00897005: cmp    DWORD PTR [rax],r8d
0x00897008: je     0x140897010
0x0089700a: add    rax,0x4
0x0089700e: jmp    0x140897000
0x00897010: sub    rax,rdx
0x00897013: sar    rax,0x2
0x00897017: cmp    eax,0xffffffff
0x0089701a: jne    0x1408970c6
0x00897020: mov    rax,QWORD PTR [rip+0x1dac501]        # 0x142643528
0x00897027: mov    rcx,QWORD PTR [rip+0x1dac502]        # 0x142643530
0x0089702e: mov    rdx,rax
0x00897031: cmp    rax,rcx
0x00897034: jae    0x14089704d
0x00897036: cmp    DWORD PTR [rax],r8d
0x00897039: je     0x140897041
0x0089703b: add    rax,0x4
0x0089703f: jmp    0x140897031
0x00897041: sub    rax,rdx
0x00897044: sar    rax,0x2
0x00897048: cmp    eax,0xffffffff
0x0089704b: jne    0x1408970c6
0x0089704d: mov    rax,QWORD PTR [rip+0x1dac4ec]        # 0x142643540
0x00897054: mov    rcx,QWORD PTR [rip+0x1dac4ed]        # 0x142643548
0x0089705b: mov    rdx,rax
0x0089705e: xchg   ax,ax
0x00897060: cmp    rax,rcx
0x00897063: jae    0x14089707c
0x00897065: cmp    DWORD PTR [rax],r8d
0x00897068: je     0x140897070
0x0089706a: add    rax,0x4
0x0089706e: jmp    0x140897060
0x00897070: sub    rax,rdx
0x00897073: sar    rax,0x2
0x00897077: cmp    eax,0xffffffff
0x0089707a: jne    0x1408970c6
0x0089707c: mov    rax,QWORD PTR [rip+0x1dac48d]        # 0x142643510
0x00897083: mov    rcx,QWORD PTR [rip+0x1dac48e]        # 0x142643518
0x0089708a: mov    rdx,rax
0x0089708d: nop    DWORD PTR [rax]
0x00897090: cmp    rax,rcx
0x00897093: jae    0x1408970ac
0x00897095: cmp    DWORD PTR [rax],r8d
0x00897098: je     0x1408970a0
0x0089709a: add    rax,0x4
0x0089709e: jmp    0x140897090
0x008970a0: sub    rax,rdx
0x008970a3: sar    rax,0x2
0x008970a7: cmp    eax,0xffffffff
0x008970aa: jne    0x1408970c6
0x008970ac: mov    rax,QWORD PTR [rip+0x1b47f4d]        # 0x1423df000
0x008970b3: mov    ecx,DWORD PTR [rax+0x130]
0x008970b9: cmp    DWORD PTR [r15+0x3d0],ecx
0x008970c0: jne    0x14089717f
0x008970c6: cmp    DWORD PTR [r15+0x1280],0x2
0x008970ce: jle    0x14089717f
0x008970d4: mov    rax,QWORD PTR [r15+0x1278]
0x008970db: test   BYTE PTR [rax+0x2],0x4
0x008970df: je     0x14089717f
0x008970e5: mov    ecx,0x30
0x008970ea: call   0x141534600
0x008970ef: mov    QWORD PTR [rbp-0x8],rax
0x008970f3: mov    rcx,rax
0x008970f6: xor    r8d,r8d
0x008970f9: mov    QWORD PTR [rbp-0x8],rcx
0x008970fd: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x00897104: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x0089710b: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x00897112: mov    DWORD PTR [rax+0x8],r8d
0x00897116: mov    DWORD PTR [rax+0xc],0xffffffff
0x0089711d: mov    QWORD PTR [rax],rbx
0x00897120: mov    QWORD PTR [rax+0x20],r12
0x00897124: mov    QWORD PTR [rax+0x28],r15
0x00897128: movzx  eax,WORD PTR [rbp-0x18]
0x0089712c: mov    WORD PTR [rcx+0x10],ax
0x00897130: movzx  eax,WORD PTR [rbp-0x14]
0x00897134: mov    WORD PTR [rcx+0x12],ax
0x00897138: movzx  eax,WORD PTR [rbp-0x10]
0x0089713c: mov    WORD PTR [rcx+0x14],ax
0x00897140: movzx  eax,WORD PTR [rbp+0x58]
0x00897144: mov    WORD PTR [rcx+0x16],ax
0x00897148: movzx  eax,WORD PTR [rbp-0x20]
0x0089714c: mov    WORD PTR [rcx+0x18],ax
0x00897150: movzx  eax,WORD PTR [rbp-0x1c]
0x00897154: mov    WORD PTR [rcx+0x1a],ax
0x00897158: mov    rdx,QWORD PTR [r13+0x8]
0x0089715c: cmp    rdx,QWORD PTR [r13+0x10]
0x00897160: je     0x140897173
0x00897162: mov    QWORD PTR [rdx],rcx
0x00897165: add    QWORD PTR [r13+0x8],0x8
0x0089716a: add    rsi,0x8
0x0089716e: jmp    0x140896ec7
0x00897173: lea    r8,[rbp-0x8]
0x00897177: mov    rcx,r13
0x0089717a: call   0x1400bacc0
0x0089717f: add    rsi,0x8
0x00897183: jmp    0x140896ec7
0x00897188: mov    rbx,QWORD PTR [rip+0x1b50c89]        # 0x1423e7e18
0x0089718f: lea    r15,[rip+0xe1f13a]        # 0x1416b62d0
0x00897196: mov    rdi,QWORD PTR [rip+0x1b50c83]        # 0x1423e7e20
0x0089719d: nop    DWORD PTR [rax]
0x008971a0: cmp    rbx,rdi
0x008971a3: jae    0x1408972eb
0x008971a9: mov    rdx,QWORD PTR [rbx]
0x008971ac: movzx  r9d,WORD PTR [rbp-0x1c]
0x008971b1: movzx  r8d,WORD PTR [rbp-0x20]
0x008971b6: movzx  ecx,WORD PTR [rdx+0x1c]
0x008971ba: movzx  eax,WORD PTR [rdx+0x20]
0x008971be: movzx  edx,WORD PTR [rdx+0x10]
0x008971c2: mov    WORD PTR [rsp+0x30],ax
0x008971c7: mov    WORD PTR [rsp+0x28],cx
0x008971cc: lea    rcx,[rip+0x1b3420d]        # 0x1423cb3e0
0x008971d3: mov    WORD PTR [rsp+0x20],dx
0x008971d8: movzx  edx,WORD PTR [rbp+0x58]
0x008971dc: call   0x1414479d0
0x008971e1: test   al,al
0x008971e3: je     0x1408972e2
0x008971e9: mov    r14,QWORD PTR [rbx]
0x008971ec: mov    rcx,r14
0x008971ef: mov    rax,QWORD PTR [r14]
0x008971f2: call   QWORD PTR [rax+0x120]
0x008971f8: mov    rdx,QWORD PTR [r14]
0x008971fb: mov    rcx,r14
0x008971fe: mov    esi,eax
0x00897200: call   QWORD PTR [rdx+0x118]
0x00897206: cmp    eax,esi
0x00897208: jne    0x1408972e2
0x0089720e: mov    rcx,QWORD PTR [rbx]
0x00897211: mov    rax,QWORD PTR [rcx]
0x00897214: call   QWORD PTR [rax+0xd0]
0x0089721a: sub    eax,0x2
0x0089721d: je     0x140897237
0x0089721f: sub    eax,0x1
0x00897222: je     0x140897237
0x00897224: sub    eax,0x7
0x00897227: je     0x140897237
0x00897229: sub    eax,0x4
0x0089722c: je     0x140897237
0x0089722e: cmp    eax,0x27
0x00897231: jne    0x1408972e2
0x00897237: mov    ecx,0x30
0x0089723c: call   0x141534600
0x00897241: mov    QWORD PTR [rbp-0x8],rax
0x00897245: mov    rdx,rax
0x00897248: xor    ecx,ecx
0x0089724a: mov    QWORD PTR [rbp-0x8],rdx
0x0089724e: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x00897255: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x0089725c: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x00897263: mov    QWORD PTR [rax+0x28],rcx
0x00897267: mov    DWORD PTR [rax+0x8],ecx
0x0089726a: mov    DWORD PTR [rax+0xc],0xffffffff
0x00897271: mov    QWORD PTR [rax],r15
0x00897274: mov    QWORD PTR [rax+0x20],r12
0x00897278: mov    rax,QWORD PTR [rbx]
0x0089727b: mov    QWORD PTR [rdx+0x28],rax
0x0089727f: mov    rax,QWORD PTR [rbx]
0x00897282: movzx  ecx,WORD PTR [rax+0x10]
0x00897286: mov    WORD PTR [rdx+0x10],cx
0x0089728a: mov    rax,QWORD PTR [rbx]
0x0089728d: movzx  ecx,WORD PTR [rax+0x1c]
0x00897291: mov    WORD PTR [rdx+0x12],cx
0x00897295: mov    rax,QWORD PTR [rbx]
0x00897298: movzx  ecx,WORD PTR [rax+0x20]
0x0089729c: mov    WORD PTR [rdx+0x14],cx
0x008972a0: movzx  eax,WORD PTR [rbp+0x58]
0x008972a4: mov    WORD PTR [rdx+0x16],ax
0x008972a8: movzx  eax,WORD PTR [rbp-0x20]
0x008972ac: mov    WORD PTR [rdx+0x18],ax
0x008972b0: movzx  eax,WORD PTR [rbp-0x1c]
0x008972b4: mov    WORD PTR [rdx+0x1a],ax
0x008972b8: mov    rax,QWORD PTR [r13+0x8]
0x008972bc: cmp    rax,QWORD PTR [r13+0x10]
0x008972c0: je     0x1408972d3
0x008972c2: mov    QWORD PTR [rax],rdx
0x008972c5: add    QWORD PTR [r13+0x8],0x8
0x008972ca: add    rbx,0x8
0x008972ce: jmp    0x1408971a0
0x008972d3: lea    r8,[rbp-0x8]
0x008972d7: mov    rdx,rax
0x008972da: mov    rcx,r13
0x008972dd: call   0x1400bacc0
0x008972e2: add    rbx,0x8
0x008972e6: jmp    0x1408971a0
0x008972eb: mov    rsi,QWORD PTR [rip+0x1b48066]        # 0x1423df358
0x008972f2: mov    r14,QWORD PTR [rip+0x1b48067]        # 0x1423df360
0x008972f9: nop    DWORD PTR [rax+0x0]
0x00897300: cmp    rsi,r14
0x00897303: jae    0x140897477
0x00897309: mov    rdx,QWORD PTR [rsi]
0x0089730c: test   BYTE PTR [rdx+0x10],0x1
0x00897310: je     0x14089746e
0x00897316: movzx  ecx,WORD PTR [rdx+0xa]
0x0089731a: movzx  eax,WORD PTR [rdx+0xc]
0x0089731e: movzx  edx,WORD PTR [rdx+0x8]
0x00897322: movzx  r9d,WORD PTR [rbp-0x1c]
0x00897327: movzx  r8d,WORD PTR [rbp-0x20]
0x0089732c: mov    WORD PTR [rsp+0x30],ax
0x00897331: mov    WORD PTR [rsp+0x28],cx
0x00897336: lea    rcx,[rip+0x1b340a3]        # 0x1423cb3e0
0x0089733d: mov    WORD PTR [rsp+0x20],dx
0x00897342: movzx  edx,WORD PTR [rbp+0x58]
0x00897346: call   0x1414479d0
0x0089734b: test   al,al
0x0089734d: je     0x14089746e
0x00897353: mov    rdi,QWORD PTR [rsi]
0x00897356: cmp    rdi,r12
0x00897359: je     0x14089746e
0x0089735f: mov    rbx,QWORD PTR [rdi+0x38]
0x00897363: mov    rdi,QWORD PTR [rdi+0x40]
0x00897367: mov    r15d,DWORD PTR [r12+0x1c]
0x0089736c: nop    DWORD PTR [rax+0x0]
0x00897370: cmp    rbx,rdi
0x00897373: jae    0x14089739b
0x00897375: mov    rcx,QWORD PTR [rbx]
0x00897378: mov    rax,QWORD PTR [rcx]
0x0089737b: call   QWORD PTR [rax+0x10]
0x0089737e: cmp    eax,0xa
0x00897381: jne    0x140897395
0x00897383: mov    rcx,QWORD PTR [rbx]
0x00897386: mov    rax,QWORD PTR [rcx]
0x00897389: call   QWORD PTR [rax+0x60]
0x0089738c: cmp    eax,r15d
0x0089738f: je     0x14089746e
0x00897395: add    rbx,0x8
0x00897399: jmp    0x140897370
0x0089739b: mov    rcx,QWORD PTR [rsi]
0x0089739e: xor    edx,edx
0x008973a0: call   0x140c875c0
0x008973a5: mov    rdx,QWORD PTR [r12]
0x008973a9: mov    rcx,r12
0x008973ac: mov    ebx,eax
0x008973ae: call   QWORD PTR [rdx+0x2c0]
0x008973b4: cmp    ebx,eax
0x008973b6: jl     0x14089746e
0x008973bc: mov    ecx,0x30
0x008973c1: call   0x141534600
0x008973c6: mov    QWORD PTR [rbp-0x8],rax
0x008973ca: mov    rdx,rax
0x008973cd: xor    ecx,ecx
0x008973cf: mov    QWORD PTR [rbp-0x8],rdx
0x008973d3: mov    DWORD PTR [rax+0x10],0x8ad08ad0
0x008973da: mov    DWORD PTR [rax+0x14],0x8ad08ad0
0x008973e1: mov    DWORD PTR [rax+0x18],0x8ad08ad0
0x008973e8: mov    DWORD PTR [rax+0x8],ecx
0x008973eb: mov    DWORD PTR [rax+0xc],0xffffffff
0x008973f2: lea    rax,[rip+0xe1ac87]        # 0x1416b2080
0x008973f9: mov    QWORD PTR [rdx+0x28],rcx
0x008973fd: mov    QWORD PTR [rdx],rax
0x00897400: mov    QWORD PTR [rdx+0x20],r12
0x00897404: mov    rax,QWORD PTR [rsi]
0x00897407: mov    QWORD PTR [rdx+0x28],rax
0x0089740b: mov    rax,QWORD PTR [rsi]
0x0089740e: movzx  ecx,WORD PTR [rax+0x8]
0x00897412: mov    WORD PTR [rdx+0x10],cx
0x00897416: mov    rax,QWORD PTR [rsi]
0x00897419: movzx  ecx,WORD PTR [rax+0xa]
0x0089741d: mov    WORD PTR [rdx+0x12],cx
0x00897421: mov    rax,QWORD PTR [rsi]
0x00897424: movzx  ecx,WORD PTR [rax+0xc]
0x00897428: mov    WORD PTR [rdx+0x14],cx
0x0089742c: movzx  eax,WORD PTR [rbp+0x58]
0x00897430: mov    WORD PTR [rdx+0x16],ax
0x00897434: movzx  eax,WORD PTR [rbp-0x20]
0x00897438: mov    WORD PTR [rdx+0x18],ax
0x0089743c: movzx  eax,WORD PTR [rbp-0x1c]
0x00897440: mov    WORD PTR [rdx+0x1a],ax
0x00897444: mov    rax,QWORD PTR [r13+0x8]
0x00897448: cmp    rax,QWORD PTR [r13+0x10]
0x0089744c: je     0x14089745f
0x0089744e: mov    QWORD PTR [rax],rdx
0x00897451: add    QWORD PTR [r13+0x8],0x8
0x00897456: add    rsi,0x8
0x0089745a: jmp    0x140897300
0x0089745f: lea    r8,[rbp-0x8]
0x00897463: mov    rdx,rax
0x00897466: mov    rcx,r13
0x00897469: call   0x1400bacc0
0x0089746e: add    rsi,0x8
0x00897472: jmp    0x140897300
0x00897477: mov    rbx,QWORD PTR [rsp+0xa8]
0x0089747f: add    rsp,0x60
0x00897483: pop    r15
0x00897485: pop    r14
0x00897487: pop    r13
0x00897489: pop    r12
0x0089748b: pop    rdi
0x0089748c: pop    rsi
0x0089748d: pop    rbp
0x0089748e: ret
