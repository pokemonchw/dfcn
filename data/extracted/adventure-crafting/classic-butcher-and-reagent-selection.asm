# classic PE:6a70b91c:0270a000; butcher-and-reagent-selection; RVA 0x27bec0..0x27cdeb
0x0027bec0: mov    QWORD PTR [rsp+0x18],rbx
0x0027bec5: push   rbp
0x0027bec6: push   rsi
0x0027bec7: push   rdi
0x0027bec8: push   r12
0x0027beca: push   r13
0x0027becc: push   r14
0x0027bece: push   r15
0x0027bed0: lea    rbp,[rsp-0x50]
0x0027bed5: sub    rsp,0x150
0x0027bedc: mov    rax,QWORD PTR [rip+0x161a15d]        # 0x141896040
0x0027bee3: xor    rax,rsp
0x0027bee6: mov    QWORD PTR [rbp+0x40],rax
0x0027beea: mov    edi,r9d
0x0027beed: mov    r9d,r8d
0x0027bef0: mov    DWORD PTR [rbp-0x64],r8d
0x0027bef4: mov    r14,rdx
0x0027bef7: mov    QWORD PTR [rsp+0x70],rdx
0x0027befc: mov    rsi,rcx
0x0027beff: mov    eax,DWORD PTR [rcx+0x4]
0x0027bf02: sub    eax,0x4
0x0027bf05: cmp    eax,0x1
0x0027bf08: jbe    0x14027c1d4
0x0027bf0e: mov    rax,QWORD PTR [rip+0x21630eb]        # 0x1423df000
0x0027bf15: mov    QWORD PTR [rbp-0x70],rax
0x0027bf19: mov    eax,DWORD PTR [rbp+0xb0]
0x0027bf1f: add    eax,DWORD PTR [rbp+0xb8]
0x0027bf25: cdq
0x0027bf26: sub    eax,edx
0x0027bf28: sar    eax,1
0x0027bf2a: lea    ecx,[rax-0x32]
0x0027bf2d: mov    DWORD PTR [rsp+0x64],ecx
0x0027bf31: lea    ebx,[rax+0x32]
0x0027bf34: mov    r15d,0x14
0x0027bf3a: mov    r11d,DWORD PTR [rip+0x214b737]        # 0x1423c7678
0x0027bf41: add    r11d,0xfffffffb
0x0027bf45: mov    DWORD PTR [rbp-0x68],r11d
0x0027bf49: movzx  r10d,BYTE PTR [rip+0x210e574]        # 0x14238a4c5
0x0027bf51: test   r10b,r10b
0x0027bf54: je     0x14027bf5f
0x0027bf56: cmp    BYTE PTR [rip+0x210e560],0x0        # 0x14238a4bd
0x0027bf5d: jne    0x14027bf94
0x0027bf5f: mov    rcx,QWORD PTR [r14]
0x0027bf62: mov    rax,QWORD PTR [rcx+0x8]
0x0027bf66: cmp    BYTE PTR [rax+0x19],0x0
0x0027bf6a: jne    0x14027bf88
0x0027bf6c: nop    DWORD PTR [rax+0x0]
0x0027bf70: cmp    DWORD PTR [rax+0x1c],0x5
0x0027bf74: jge    0x14027bf7c
0x0027bf76: mov    rax,QWORD PTR [rax+0x10]
0x0027bf7a: jmp    0x14027bf82
0x0027bf7c: mov    rcx,rax
0x0027bf7f: mov    rax,QWORD PTR [rax]
0x0027bf82: cmp    BYTE PTR [rax+0x19],0x0
0x0027bf86: je     0x14027bf70
0x0027bf88: cmp    BYTE PTR [rcx+0x19],0x0
0x0027bf8c: jne    0x14027bfb5
0x0027bf8e: cmp    DWORD PTR [rcx+0x1c],0x5
0x0027bf92: jg     0x14027bfb5
0x0027bf94: mov    ecx,0x232a ; inline_fragment="*#"
0x0027bf99: call   0x1407e1c40
0x0027bf9e: mov    BYTE PTR [rip+0x210e518],0x0        # 0x14238a4bd
0x0027bfa5: mov    rcx,r14
0x0027bfa8: call   0x1400e1100
0x0027bfad: mov    BYTE PTR [rsi],0x0
0x0027bfb0: jmp    0x14027cdc1
0x0027bfb5: mov    rcx,rsi
0x0027bfb8: call   0x14027db70
0x0027bfbd: mov    DWORD PTR [rsp+0x60],eax
0x0027bfc1: mov    r8d,0x27 ; inline_fragment="'"
0x0027bfc7: lea    ecx,[rax+0x2]
0x0027bfca: lea    edx,[rcx+rcx*2]
0x0027bfcd: cmp    edx,r8d
0x0027bfd0: cmovl  r8d,edx
0x0027bfd4: lea    ecx,[r11-0x13]
0x0027bfd8: cmp    ecx,r8d
0x0027bfdb: jle    0x14027bfe6
0x0027bfdd: mov    r15d,r11d
0x0027bfe0: sub    r15d,r8d
0x0027bfe3: inc    r15d
0x0027bfe6: mov    r8d,DWORD PTR [rsp+0x64]
0x0027bfeb: lea    eax,[r8+0x1]
0x0027bfef: mov    DWORD PTR [rbp-0x60],eax
0x0027bff2: lea    eax,[rbx-0x1]
0x0027bff5: mov    DWORD PTR [rsp+0x68],eax
0x0027bff9: lea    r12d,[r15+0x4]
0x0027bffd: lea    ecx,[r11-0x1]
0x0027c001: sub    ecx,r12d
0x0027c004: inc    ecx
0x0027c006: mov    eax,0x55555556 ; inline_fragment="VUUU"
0x0027c00b: imul   ecx
0x0027c00d: mov    r13d,edx
0x0027c010: shr    r13d,0x1f
0x0027c014: add    r13d,edx
0x0027c017: xor    r14d,r14d
0x0027c01a: mov    ecx,DWORD PTR [rsp+0x60]
0x0027c01e: cmp    ecx,r13d
0x0027c021: jle    0x14027c0e1
0x0027c027: lea    eax,[rbx-0x3]
0x0027c02a: mov    DWORD PTR [rsp+0x68],eax
0x0027c02e: test   r10b,r10b
0x0027c031: je     0x14027c0a3
0x0027c033: cmp    r9d,r8d
0x0027c036: jl     0x14027c0a3
0x0027c038: cmp    r9d,ebx
0x0027c03b: jg     0x14027c0a3
0x0027c03d: cmp    edi,r15d
0x0027c040: jl     0x14027c0a3
0x0027c042: cmp    edi,r11d
0x0027c045: jg     0x14027c0a3
0x0027c047: lea    edx,[r12+0x1]
0x0027c04c: lea    ecx,[r13-0x1]
0x0027c050: lea    ecx,[r12+rcx*2]
0x0027c054: add    ecx,r13d
0x0027c057: mov    QWORD PTR [rbp+0x18],r14
0x0027c05b: mov    eax,DWORD PTR [rsi+0x24]
0x0027c05e: mov    DWORD PTR [rbp+0x0],eax
0x0027c061: mov    DWORD PTR [rbp+0x4],r14d
0x0027c065: mov    eax,DWORD PTR [rsp+0x60]
0x0027c069: dec    eax
0x0027c06b: mov    DWORD PTR [rbp+0x8],eax
0x0027c06e: mov    DWORD PTR [rbp+0x10],edx
0x0027c071: mov    DWORD PTR [rbp+0x14],ecx
0x0027c074: mov    DWORD PTR [rbp+0xc],r13d
0x0027c078: lea    rcx,[rbp+0x0]
0x0027c07c: call   0x1400bb340
0x0027c081: lea    r9,[rsi+0x20]
0x0027c085: lea    r8,[rsi+0x24]
0x0027c089: mov    rdx,QWORD PTR [rsp+0x70]
0x0027c08e: lea    rcx,[rbp+0x0]
0x0027c092: call   0x14140a220
0x0027c097: test   al,al
0x0027c099: jne    0x14027c1d4
0x0027c09f: mov    ecx,DWORD PTR [rsp+0x60]
0x0027c0a3: lea    eax,[rcx-0x1]
0x0027c0a6: lea    r8,[rsi+0x24]
0x0027c0aa: mov    DWORD PTR [rsp+0x30],0x1
0x0027c0b2: mov    DWORD PTR [rsp+0x28],r13d
0x0027c0b7: mov    DWORD PTR [rsp+0x20],eax
0x0027c0bb: xor    r9d,r9d
0x0027c0be: mov    rdx,QWORD PTR [rsp+0x70]
0x0027c0c3: call   0x140a99ba0
0x0027c0c8: movzx  r10d,BYTE PTR [rip+0x210e3f5]        # 0x14238a4c5
0x0027c0d0: mov    r9d,DWORD PTR [rbp-0x64]
0x0027c0d4: mov    r11d,DWORD PTR [rbp-0x68]
0x0027c0d8: mov    r8d,DWORD PTR [rsp+0x64]
0x0027c0dd: mov    ecx,DWORD PTR [rsp+0x60]
0x0027c0e1: cmp    BYTE PTR [rsi+0x20],r14b
0x0027c0e5: je     0x14027c203
0x0027c0eb: test   r10b,r10b
0x0027c0ee: je     0x14027c1fd
0x0027c0f4: cmp    BYTE PTR [rip+0x210e3c3],r14b        # 0x14238a4be
0x0027c0fb: je     0x14027c1fd
0x0027c101: mov    QWORD PTR [rbp-0x78],r14
0x0027c105: mov    eax,DWORD PTR [rsi+0x24]
0x0027c108: mov    DWORD PTR [rsp+0x70],eax
0x0027c10c: mov    DWORD PTR [rsp+0x74],r14d
0x0027c111: lea    eax,[rcx-0x1]
0x0027c114: mov    DWORD PTR [rsp+0x78],eax
0x0027c118: lea    eax,[r12+0x1]
0x0027c11d: mov    DWORD PTR [rbp-0x80],eax
0x0027c120: lea    ecx,[r13-0x1]
0x0027c124: lea    ecx,[r12+rcx*2]
0x0027c128: add    ecx,r13d
0x0027c12b: mov    DWORD PTR [rbp-0x7c],ecx
0x0027c12e: mov    DWORD PTR [rsp+0x7c],r13d
0x0027c133: lea    rcx,[rsp+0x70]
0x0027c138: call   0x1400bb340
0x0027c13d: mov    eax,DWORD PTR [rbp-0x80]
0x0027c140: cmp    edi,eax
0x0027c142: jg     0x14027c14a
0x0027c144: mov    eax,DWORD PTR [rsp+0x74]
0x0027c148: jmp    0x14027c1b6
0x0027c14a: mov    r10d,DWORD PTR [rbp-0x7c]
0x0027c14e: cmp    edi,r10d
0x0027c151: jl     0x14027c16f
0x0027c153: mov    eax,DWORD PTR [rsp+0x78]
0x0027c157: sub    eax,DWORD PTR [rsp+0x7c]
0x0027c15b: inc    eax
0x0027c15d: mov    DWORD PTR [rsp+0x70],eax
0x0027c161: mov    ecx,DWORD PTR [rsp+0x74]
0x0027c165: cmp    eax,ecx
0x0027c167: jge    0x14027c1ba
0x0027c169: mov    DWORD PTR [rsp+0x70],ecx
0x0027c16d: jmp    0x14027c1ba
0x0027c16f: cmp    r10d,eax
0x0027c172: jle    0x14027c1ba
0x0027c174: mov    r8d,DWORD PTR [rsp+0x78]
0x0027c179: sub    r8d,DWORD PTR [rsp+0x7c]
0x0027c17e: mov    ecx,r8d
0x0027c181: mov    r9d,DWORD PTR [rsp+0x74]
0x0027c186: sub    ecx,r9d
0x0027c189: add    ecx,0x1
0x0027c18c: cmovns r14d,ecx
0x0027c190: sub    edi,eax
0x0027c192: imul   r14d,edi
0x0027c196: sub    r10d,eax
0x0027c199: inc    r10d
0x0027c19c: mov    eax,r14d
0x0027c19f: cdq
0x0027c1a0: idiv   r10d
0x0027c1a3: add    eax,r9d
0x0027c1a6: lea    ecx,[r8+0x1]
0x0027c1aa: cmp    eax,ecx
0x0027c1ac: cmovg  eax,ecx
0x0027c1af: cmp    eax,r9d
0x0027c1b2: cmovl  eax,r9d
0x0027c1b6: mov    DWORD PTR [rsp+0x70],eax
0x0027c1ba: lea    rcx,[rsp+0x70]
0x0027c1bf: call   0x1400bb340
0x0027c1c4: mov    eax,DWORD PTR [rsp+0x70]
0x0027c1c8: mov    DWORD PTR [rsi+0x24],eax
0x0027c1cb: mov    WORD PTR [rip+0x210e2e8],0x0        # 0x14238a4bc
0x0027c1d4: xor    al,al
0x0027c1d6: mov    rcx,QWORD PTR [rbp+0x40]
0x0027c1da: xor    rcx,rsp
0x0027c1dd: call   0x1415345d0
0x0027c1e2: mov    rbx,QWORD PTR [rsp+0x1a0]
0x0027c1ea: add    rsp,0x150
0x0027c1f1: pop    r15
0x0027c1f3: pop    r14
0x0027c1f5: pop    r13
0x0027c1f7: pop    r12
0x0027c1f9: pop    rdi
0x0027c1fa: pop    rsi
0x0027c1fb: pop    rbp
0x0027c1fc: ret
0x0027c1fd: mov    BYTE PTR [rsi+0x20],r14b
0x0027c201: jmp    0x14027c1cb
0x0027c203: cmp    r9d,r8d
0x0027c206: jl     0x14027c217
0x0027c208: cmp    r9d,ebx
0x0027c20b: jg     0x14027c217
0x0027c20d: cmp    edi,r15d
0x0027c210: jl     0x14027c217
0x0027c212: cmp    edi,r11d
0x0027c215: jle    0x14027c235
0x0027c217: movzx  r11d,BYTE PTR [rip+0x210e29d]        # 0x14238a4bc
0x0027c21f: test   r10b,r10b
0x0027c222: je     0x14027c23d
0x0027c224: test   r11b,r11b
0x0027c227: je     0x14027c23d
0x0027c229: mov    BYTE PTR [rip+0x210e28c],r14b        # 0x14238a4bc
0x0027c230: jmp    0x14027cdbe
0x0027c235: movzx  r11d,BYTE PTR [rip+0x210e27f]        # 0x14238a4bc
0x0027c23d: lea    eax,[rbx-0xc]
0x0027c240: cmp    r9d,eax
0x0027c243: jl     0x14027c27d
0x0027c245: lea    eax,[rbx-0x1]
0x0027c248: cmp    r9d,eax
0x0027c24b: jg     0x14027c27d
0x0027c24d: lea    eax,[r15+0x1]
0x0027c251: cmp    edi,eax
0x0027c253: jl     0x14027c27d
0x0027c255: lea    eax,[r15+0x3]
0x0027c259: cmp    edi,eax
0x0027c25b: jg     0x14027c27d
0x0027c25d: test   r10b,r10b
0x0027c260: je     0x14027c27d
0x0027c262: test   r11b,r11b
0x0027c265: je     0x14027c27d
0x0027c267: mov    ecx,0x232a ; inline_fragment="*#"
0x0027c26c: call   0x1407e1c40
0x0027c271: mov    BYTE PTR [rip+0x210e244],r14b        # 0x14238a4bc
0x0027c278: jmp    0x14027cdbe
0x0027c27d: mov    ebx,DWORD PTR [rsp+0x60]
0x0027c281: cmp    ebx,r13d
0x0027c284: jle    0x14027c3a4
0x0027c28a: mov    ecx,DWORD PTR [rsp+0x68]
0x0027c28e: inc    ecx
0x0027c290: lea    r8d,[r12+0x1]
0x0027c295: lea    edx,[r13-0x1]
0x0027c299: lea    edx,[r12+rdx*2]
0x0027c29d: add    edx,r13d
0x0027c2a0: cmp    r9d,ecx
0x0027c2a3: jl     0x14027c3a4
0x0027c2a9: lea    eax,[rcx+0x1]
0x0027c2ac: cmp    r9d,eax
0x0027c2af: jg     0x14027c3a4
0x0027c2b5: cmp    edi,r12d
0x0027c2b8: jl     0x14027c3a4
0x0027c2be: lea    eax,[rdx+0x1]
0x0027c2c1: cmp    edi,eax
0x0027c2c3: jg     0x14027c3a4
0x0027c2c9: test   r10b,r10b
0x0027c2cc: je     0x14027c3a4
0x0027c2d2: test   r11b,r11b
0x0027c2d5: je     0x14027c3a4
0x0027c2db: mov    BYTE PTR [rip+0x210e1da],r14b        # 0x14238a4bc
0x0027c2e2: mov    QWORD PTR [rbp-0x78],r14
0x0027c2e6: mov    eax,DWORD PTR [rsi+0x24]
0x0027c2e9: mov    DWORD PTR [rsp+0x70],eax
0x0027c2ed: mov    DWORD PTR [rsp+0x74],r14d
0x0027c2f2: lea    eax,[rbx-0x1]
0x0027c2f5: mov    DWORD PTR [rsp+0x78],eax
0x0027c2f9: mov    DWORD PTR [rbp-0x80],r8d
0x0027c2fd: mov    DWORD PTR [rbp-0x7c],edx
0x0027c300: mov    DWORD PTR [rsp+0x7c],r13d
0x0027c305: lea    rcx,[rsp+0x70]
0x0027c30a: call   0x1400bb340
0x0027c30f: mov    BYTE PTR [rsi+0x20],r14b
0x0027c313: mov    eax,DWORD PTR [rbp-0x80]
0x0027c316: dec    eax
0x0027c318: cmp    edi,eax
0x0027c31a: jne    0x14027c333
0x0027c31c: mov    ecx,DWORD PTR [rsp+0x70]
0x0027c320: dec    ecx
0x0027c322: cmp    ecx,DWORD PTR [rsp+0x74]
0x0027c326: cmovl  ecx,DWORD PTR [rsp+0x74]
0x0027c32b: mov    DWORD PTR [rsi+0x24],ecx
0x0027c32e: jmp    0x14027c1d4
0x0027c333: mov    eax,DWORD PTR [rbp-0x7c]
0x0027c336: inc    eax
0x0027c338: cmp    edi,eax
0x0027c33a: jne    0x14027c359
0x0027c33c: mov    ecx,DWORD PTR [rsp+0x70]
0x0027c340: inc    ecx
0x0027c342: mov    eax,DWORD PTR [rsp+0x78]
0x0027c346: sub    eax,DWORD PTR [rsp+0x7c]
0x0027c34a: inc    eax
0x0027c34c: cmp    ecx,eax
0x0027c34e: cmovg  ecx,eax
0x0027c351: mov    DWORD PTR [rsi+0x24],ecx
0x0027c354: jmp    0x14027c1d4
0x0027c359: cmp    edi,DWORD PTR [rbp-0x78]
0x0027c35c: jl     0x14027c38b
0x0027c35e: cmp    edi,DWORD PTR [rbp-0x74]
0x0027c361: jg     0x14027c36c
0x0027c363: mov    BYTE PTR [rsi+0x20],0x1
0x0027c367: jmp    0x14027c1d4
0x0027c36c: mov    edx,DWORD PTR [rsp+0x70]
0x0027c370: add    edx,DWORD PTR [rsp+0x7c]
0x0027c374: mov    eax,DWORD PTR [rsp+0x78]
0x0027c378: sub    eax,DWORD PTR [rsp+0x7c]
0x0027c37c: inc    eax
0x0027c37e: cmp    edx,eax
0x0027c380: cmovg  edx,eax
0x0027c383: mov    DWORD PTR [rsi+0x24],edx
0x0027c386: jmp    0x14027c1d4
0x0027c38b: mov    ecx,DWORD PTR [rsp+0x70]
0x0027c38f: sub    ecx,DWORD PTR [rsp+0x7c]
0x0027c393: cmp    ecx,DWORD PTR [rsp+0x74]
0x0027c397: cmovl  ecx,DWORD PTR [rsp+0x74]
0x0027c39c: mov    DWORD PTR [rsi+0x24],ecx
0x0027c39f: jmp    0x14027c1d4
0x0027c3a4: mov    ecx,ebx
0x0027c3a6: sub    ecx,r13d
0x0027c3a9: cmp    DWORD PTR [rsi+0x24],ecx
0x0027c3ac: cmovle ecx,DWORD PTR [rsi+0x24]
0x0027c3b0: mov    r8d,r14d
0x0027c3b3: test   ecx,ecx
0x0027c3b5: cmovns r8d,ecx
0x0027c3b9: mov    DWORD PTR [rbp-0x68],r8d
0x0027c3bd: mov    r15d,r8d
0x0027c3c0: lea    eax,[r8+r13*1]
0x0027c3c4: cmp    r8d,eax
0x0027c3c7: jge    0x14027c1cb
0x0027c3cd: movzx  r11d,BYTE PTR [rip+0x210e0e7]        # 0x14238a4bc
0x0027c3d5: cmp    r15d,ebx
0x0027c3d8: jge    0x14027c1cb
0x0027c3de: mov    edx,r15d
0x0027c3e1: sub    edx,r8d
0x0027c3e4: add    edx,0x52
0x0027c3e7: mov    rax,QWORD PTR [rsp+0x70]
0x0027c3ec: mov    rcx,QWORD PTR [rax]
0x0027c3ef: mov    rax,QWORD PTR [rcx+0x8]
0x0027c3f3: cmp    BYTE PTR [rax+0x19],r14b
0x0027c3f7: jne    0x14027c417
0x0027c3f9: nop    DWORD PTR [rax+0x0]
0x0027c400: cmp    DWORD PTR [rax+0x1c],edx
0x0027c403: jge    0x14027c40b
0x0027c405: mov    rax,QWORD PTR [rax+0x10]
0x0027c409: jmp    0x14027c411
0x0027c40b: mov    rcx,rax
0x0027c40e: mov    rax,QWORD PTR [rax]
0x0027c411: cmp    BYTE PTR [rax+0x19],r14b
0x0027c415: je     0x14027c400
0x0027c417: cmp    BYTE PTR [rcx+0x19],r14b
0x0027c41b: jne    0x14027c426
0x0027c41d: cmp    edx,DWORD PTR [rcx+0x1c]
0x0027c420: jl     0x14027c426
0x0027c422: mov    bl,0x1
0x0027c424: jmp    0x14027c428
0x0027c426: xor    bl,bl
0x0027c428: cmp    r9d,DWORD PTR [rbp-0x60]
0x0027c42c: jl     0x14027c449
0x0027c42e: cmp    r9d,DWORD PTR [rsp+0x68]
0x0027c433: jge    0x14027c449
0x0027c435: cmp    edi,r12d
0x0027c438: jl     0x14027c449
0x0027c43a: lea    eax,[r12+0x3]
0x0027c43f: cmp    edi,eax
0x0027c441: jge    0x14027c449
0x0027c443: test   bl,bl
0x0027c445: je     0x14027c46f
0x0027c447: jmp    0x14027c44d
0x0027c449: test   bl,bl
0x0027c44b: je     0x14027c47d
0x0027c44d: mov    rcx,QWORD PTR [rsp+0x70]
0x0027c452: call   0x1400e1100
0x0027c457: movzx  r10d,BYTE PTR [rip+0x210e066]        # 0x14238a4c5
0x0027c45f: mov    r9d,DWORD PTR [rbp-0x64]
0x0027c463: mov    r8d,DWORD PTR [rbp-0x68]
0x0027c467: movzx  r11d,BYTE PTR [rip+0x210e04d]        # 0x14238a4bc
0x0027c46f: test   r10b,r10b
0x0027c472: je     0x14027c479
0x0027c474: test   r11b,r11b
0x0027c477: jne    0x14027c49a
0x0027c479: test   bl,bl
0x0027c47b: jne    0x14027c49a
0x0027c47d: add    r12d,0x3
0x0027c481: inc    r15d
0x0027c484: lea    eax,[r8+r13*1]
0x0027c488: cmp    r15d,eax
0x0027c48b: jge    0x14027c1cb
0x0027c491: mov    ebx,DWORD PTR [rsp+0x60]
0x0027c495: jmp    0x14027c3d5
0x0027c49a: mov    BYTE PTR [rip+0x210e01b],r14b        # 0x14238a4bc
0x0027c4a1: mov    rcx,QWORD PTR [rsp+0x70]
0x0027c4a6: call   0x1400e1100
0x0027c4ab: mov    ecx,DWORD PTR [rsi+0x4]
0x0027c4ae: test   ecx,ecx
0x0027c4b0: je     0x14027cca9
0x0027c4b6: sub    ecx,0x1
0x0027c4b9: je     0x14027cbe2
0x0027c4bf: sub    ecx,0x1
0x0027c4c2: je     0x14027c5df
0x0027c4c8: cmp    ecx,0x1
0x0027c4cb: jne    0x14027cdd7
0x0027c4d1: movsxd rax,r15d
0x0027c4d4: lea    r14,[rax*8+0x0]
0x0027c4dc: mov    rax,QWORD PTR [rsi+0x78]
0x0027c4e0: mov    rdi,QWORD PTR [r14+rax*1]
0x0027c4e4: mov    QWORD PTR [rbp-0x70],rdi
0x0027c4e8: lea    rcx,[rsi+0x90]
0x0027c4ef: mov    rdx,QWORD PTR [rsi+0x98]
0x0027c4f6: cmp    rdx,QWORD PTR [rsi+0xa0]
0x0027c4fd: je     0x14027c50c
0x0027c4ff: mov    QWORD PTR [rdx],rdi
0x0027c502: add    QWORD PTR [rsi+0x98],0x8
0x0027c50a: jmp    0x14027c515
0x0027c50c: lea    r8,[rbp-0x70]
0x0027c510: call   0x1400bacc0
0x0027c515: lea    rcx,[rsi+0xa8]
0x0027c51c: mov    rdx,QWORD PTR [rsi+0xb0]
0x0027c523: cmp    rdx,QWORD PTR [rsi+0xb8]
0x0027c52a: je     0x14027c53e
0x0027c52c: mov    eax,DWORD PTR [rsi+0xc8]
0x0027c532: mov    DWORD PTR [rdx],eax
0x0027c534: add    QWORD PTR [rsi+0xb0],0x4
0x0027c53c: jmp    0x14027c54a
0x0027c53e: lea    r8,[rsi+0xc8]
0x0027c545: call   0x140070db0
0x0027c54a: mov    rcx,QWORD PTR [rsi+0x78]
0x0027c54e: add    rcx,r14
0x0027c551: mov    r8,QWORD PTR [rsi+0x80]
0x0027c558: lea    rdx,[rcx+0x8]
0x0027c55c: sub    r8,rdx
0x0027c55f: call   0x141535d8a
0x0027c564: add    QWORD PTR [rsi+0x80],0xfffffffffffffff8
0x0027c56c: cmp    DWORD PTR [rsi+0xcc],0x1
0x0027c573: jle    0x14027c58b
0x0027c575: mov    rax,QWORD PTR [rdi]
0x0027c578: mov    rcx,rdi
0x0027c57b: call   QWORD PTR [rax+0x78]
0x0027c57e: sub    DWORD PTR [rsi+0xcc],eax
0x0027c584: mov    al,0x1
0x0027c586: jmp    0x14027c1d6
0x0027c58b: inc    DWORD PTR [rsi+0xc8]
0x0027c591: mov    rax,QWORD PTR [rsi+0xc0]
0x0027c598: mov    rcx,QWORD PTR [rax+0x58]
0x0027c59c: sub    rcx,QWORD PTR [rax+0x50]
0x0027c5a0: sar    rcx,0x3
0x0027c5a4: movsxd rax,DWORD PTR [rsi+0xc8]
0x0027c5ab: cmp    rax,rcx
0x0027c5ae: jb     0x14027cdde
0x0027c5b4: mov    rcx,rsi
0x0027c5b7: call   0x14027dd60
0x0027c5bc: cmp    DWORD PTR [rsi+0x4],0x5
0x0027c5c0: jne    0x14027c1d4
0x0027c5c6: test   BYTE PTR [rsi+0xec],0x1
0x0027c5cd: jne    0x14027c5d7
0x0027c5cf: mov    rcx,rsi
0x0027c5d2: call   0x14027e070
0x0027c5d7: mov    BYTE PTR [rsi],0x0
0x0027c5da: jmp    0x14027cdc1
0x0027c5df: or     DWORD PTR [rip+0x226551a],0x5        # 0x1424e1b00
0x0027c5e6: mov    r12d,0xffff8ad0
0x0027c5ec: mov    WORD PTR [rsp+0x64],r12w
0x0027c5f2: mov    rcx,QWORD PTR [rbp-0x70]
0x0027c5f6: test   DWORD PTR [rcx+0x110],0x2000000
0x0027c600: je     0x14027c650
0x0027c602: mov    rbx,QWORD PTR [rcx+0x1d8]
0x0027c609: mov    rdi,QWORD PTR [rcx+0x1e0]
0x0027c610: cmp    rbx,rdi
0x0027c613: jae    0x14027c674
0x0027c615: mov    rcx,QWORD PTR [rbx]
0x0027c618: mov    rax,QWORD PTR [rcx]
0x0027c61b: call   QWORD PTR [rax+0x10]
0x0027c61e: cmp    eax,0xb
0x0027c621: jne    0x14027c631
0x0027c623: mov    rcx,QWORD PTR [rbx]
0x0027c626: mov    rax,QWORD PTR [rcx]
0x0027c629: call   QWORD PTR [rax+0x18]
0x0027c62c: test   rax,rax
0x0027c62f: jne    0x14027c637
0x0027c631: add    rbx,0x8
0x0027c635: jmp    0x14027c610
0x0027c637: lea    r9,[rsp+0x68]
0x0027c63c: lea    r8,[rsp+0x60]
0x0027c641: lea    rdx,[rsp+0x64]
0x0027c646: mov    rcx,rax
0x0027c649: call   0x140c88ae0
0x0027c64e: jmp    0x14027c674
0x0027c650: movzx  eax,WORD PTR [rcx+0xa8]
0x0027c657: mov    WORD PTR [rsp+0x64],ax
0x0027c65c: movzx  eax,WORD PTR [rcx+0xaa]
0x0027c663: mov    WORD PTR [rsp+0x60],ax
0x0027c668: movzx  eax,WORD PTR [rcx+0xac]
0x0027c66f: mov    WORD PTR [rsp+0x68],ax
0x0027c674: mov    DWORD PTR [rbp-0x44],r14d
0x0027c678: mov    DWORD PTR [rbp-0x40],0x8ad08ad0
0x0027c67f: mov    WORD PTR [rbp-0x3c],r12w
0x0027c684: mov    DWORD PTR [rbp-0x38],r14d
0x0027c688: xorps  xmm0,xmm0
0x0027c68b: movdqa XMMWORD PTR [rbp-0x30],xmm0
0x0027c690: mov    eax,0xffffffff
0x0027c695: mov    QWORD PTR [rbp-0x20],0xffffffffffffffff
0x0027c69d: mov    DWORD PTR [rbp-0x18],eax
0x0027c6a0: mov    DWORD PTR [rbp-0x14],r14d
0x0027c6a4: mov    DWORD PTR [rbp-0x10],eax
0x0027c6a7: mov    DWORD PTR [rbp-0x50],0x60087
0x0027c6ae: mov    BYTE PTR [rbp-0x4c],r14b
0x0027c6b2: mov    WORD PTR [rbp-0x34],r14w
0x0027c6b7: movzx  eax,WORD PTR [rsp+0x64]
0x0027c6bc: mov    WORD PTR [rbp-0x4a],ax
0x0027c6c0: movzx  eax,WORD PTR [rsp+0x60]
0x0027c6c5: mov    WORD PTR [rbp-0x48],ax
0x0027c6c9: movzx  eax,WORD PTR [rsp+0x68]
0x0027c6ce: mov    WORD PTR [rbp-0x46],ax
0x0027c6d2: movups XMMWORD PTR [rbp+0x20],xmm0
0x0027c6d6: movdqa xmm1,XMMWORD PTR [rip+0x1509342]        # 0x141785a20
0x0027c6de: movdqu XMMWORD PTR [rbp+0x30],xmm1
0x0027c6e3: mov    BYTE PTR [rbp+0x20],r14b
0x0027c6e7: mov    r8d,0xc
0x0027c6ed: lea    rdx,[rip+0x139a974]        # 0x141617068 ; literal="You butcher "
0x0027c6f4: lea    rcx,[rbp+0x20]
0x0027c6f8: call   0x14006f860
0x0027c6fd: xorps  xmm0,xmm0
0x0027c700: movups XMMWORD PTR [rbp+0x0],xmm0
0x0027c704: mov    QWORD PTR [rbp+0x10],r14
0x0027c708: mov    QWORD PTR [rbp+0x18],0xf
0x0027c710: mov    BYTE PTR [rbp+0x0],0x0
0x0027c714: mov    ebx,0x1
0x0027c719: mov    r9d,ebx
0x0027c71c: xor    r8d,r8d
0x0027c71f: lea    rdx,[rbp+0x0]
0x0027c723: mov    rcx,QWORD PTR [rsi+0xf0]
0x0027c72a: call   0x140c62490
0x0027c72f: lea    rdx,[rbp+0x0]
0x0027c733: cmp    QWORD PTR [rbp+0x18],0xf
0x0027c738: cmova  rdx,QWORD PTR [rbp+0x0]
0x0027c73d: mov    r8,QWORD PTR [rbp+0x10]
0x0027c741: lea    rcx,[rbp+0x20]
0x0027c745: call   0x14006f9a0
0x0027c74a: mov    r8d,ebx
0x0027c74d: lea    rdx,[rip+0x1366e20]        # 0x1415e3574 ; literal="."
0x0027c754: lea    rcx,[rbp+0x20]
0x0027c758: call   0x14006f9a0
0x0027c75d: lea    r8,[rbp-0x50]
0x0027c761: lea    rdx,[rbp+0x20]
0x0027c765: lea    rcx,[rip+0x2260fd4]        # 0x1424dd740
0x0027c76c: call   0x1400e3bb0
0x0027c771: mov    rcx,QWORD PTR [rsi+0xf0]
0x0027c778: mov    rax,QWORD PTR [rcx]
0x0027c77b: call   QWORD PTR [rax]
0x0027c77d: cmp    ax,0x17
0x0027c781: je     0x14027c799
0x0027c783: mov    rcx,QWORD PTR [rsi+0xf0]
0x0027c78a: mov    rax,QWORD PTR [rcx]
0x0027c78d: call   QWORD PTR [rax]
0x0027c78f: cmp    ax,0x2e
0x0027c793: jne    0x14027ca8b
0x0027c799: mov    rcx,QWORD PTR [rsi+0xf0]
0x0027c7a0: mov    ebx,DWORD PTR [rcx+0x310]
0x0027c7a6: test   ebx,ebx
0x0027c7a8: jle    0x14027ca8b
0x0027c7ae: mov    eax,0x32 ; inline_fragment="2"
0x0027c7b3: cmp    ebx,eax
0x0027c7b5: cmovg  ebx,eax
0x0027c7b8: mov    r11d,DWORD PTR [rcx+0xc0]
0x0027c7bf: mov    rdi,QWORD PTR [rip+0x21627da]        # 0x1423defa0
0x0027c7c6: mov    r9,QWORD PTR [rip+0x21627db]        # 0x1423defa8
0x0027c7cd: sub    r9,rdi
0x0027c7d0: sar    r9,0x3
0x0027c7d4: test   r9d,r9d
0x0027c7d7: je     0x14027c919
0x0027c7dd: cmp    r11d,0xffffffff
0x0027c7e1: je     0x14027c919
0x0027c7e7: sub    r9d,0x1
0x0027c7eb: mov    edx,r14d
0x0027c7ee: js     0x14027c81b
0x0027c7f0: lea    ecx,[r9+rdx*1]
0x0027c7f4: sar    ecx,1
0x0027c7f6: movsxd rax,ecx
0x0027c7f9: mov    r8,QWORD PTR [rdi+rax*8]
0x0027c7fd: cmp    DWORD PTR [r8+0x130],r11d
0x0027c804: je     0x14027c81e
0x0027c806: lea    eax,[rcx-0x1]
0x0027c809: cmovle eax,r9d
0x0027c80d: mov    r9d,eax
0x0027c810: lea    eax,[rcx+0x1]
0x0027c813: cmovle edx,eax
0x0027c816: cmp    edx,r9d
0x0027c819: jle    0x14027c7f0
0x0027c81b: mov    r8,r14
0x0027c81e: test   r8,r8
0x0027c821: je     0x14027c912
0x0027c827: movsx  rdx,WORD PTR [r8+0x12c]
0x0027c82f: movsx  rax,WORD PTR [r8+0xa4]
0x0027c837: test   ax,ax
0x0027c83a: js     0x14027c8a8
0x0027c83c: mov    rcx,QWORD PTR [rip+0x226a115]        # 0x1424e6958
0x0027c843: mov    r9,rax
0x0027c846: mov    rax,QWORD PTR [rip+0x226a113]        # 0x1424e6960
0x0027c84d: sub    rax,rcx
0x0027c850: sar    rax,0x3
0x0027c854: cmp    r9,rax
0x0027c857: jae    0x14027c8a8
0x0027c859: test   dx,dx
0x0027c85c: js     0x14027c8a8
0x0027c85e: mov    rcx,QWORD PTR [rcx+r9*8]
0x0027c862: mov    rax,QWORD PTR [rcx+0x180]
0x0027c869: sub    rax,QWORD PTR [rcx+0x178]
0x0027c870: sar    rax,0x3
0x0027c874: cmp    rdx,rax
0x0027c877: jae    0x14027c8a8
0x0027c879: mov    rax,QWORD PTR [rcx+0x178]
0x0027c880: mov    r13,QWORD PTR [rax+rdx*8]
0x0027c884: test   r13,r13
0x0027c887: je     0x14027c8a8
0x0027c889: movzx  edi,WORD PTR [r13+0x3c76]
0x0027c891: mov    r12d,DWORD PTR [r13+0x3c78]
0x0027c898: movzx  r13d,WORD PTR [r13+0x3c74]
0x0027c8a0: mov    r9d,0xffffffff
0x0027c8a6: jmp    0x14027c8bb
0x0027c8a8: mov    r9d,0xffffffff
0x0027c8ae: mov    edi,r9d
0x0027c8b1: movzx  r13d,WORD PTR [rsp+0x60]
0x0027c8b7: mov    r12d,DWORD PTR [rbp-0x60]
0x0027c8bb: mov    ecx,DWORD PTR [r8+0xa4]
0x0027c8c2: cmp    ecx,DWORD PTR [r8+0xd90]
0x0027c8c9: jne    0x14027c9ab
0x0027c8cf: mov    edx,DWORD PTR [r8+0xc30]
0x0027c8d6: cmp    edx,0xffffffff
0x0027c8d9: je     0x14027c9ab
0x0027c8df: lea    eax,[rdi-0x13]
0x0027c8e2: mov    r8d,0xc7
0x0027c8e8: cmp    ax,r8w
0x0027c8ec: ja     0x14027c9ab
0x0027c8f2: cmp    r12d,ecx
0x0027c8f5: mov    rcx,QWORD PTR [rsi+0xf0]
0x0027c8fc: jne    0x14027c9b2
0x0027c902: mov    eax,0xc8
0x0027c907: add    di,ax
0x0027c90a: mov    r12d,edx
0x0027c90d: jmp    0x14027c9b2
0x0027c912: mov    rcx,QWORD PTR [rsi+0xf0]
0x0027c919: movsx  rdx,WORD PTR [rcx+0xc4]
0x0027c921: movsx  rax,WORD PTR [rcx+0xb8]
0x0027c929: test   ax,ax
0x0027c92c: js     0x14027ca8b
0x0027c932: mov    r8,QWORD PTR [rip+0x226a01f]        # 0x1424e6958
0x0027c939: mov    r9,rax
0x0027c93c: mov    rax,QWORD PTR [rip+0x226a01d]        # 0x1424e6960
0x0027c943: sub    rax,r8
0x0027c946: sar    rax,0x3
0x0027c94a: cmp    r9,rax
0x0027c94d: jae    0x14027ca8b
0x0027c953: test   dx,dx
0x0027c956: js     0x14027ca8b
0x0027c95c: mov    rax,QWORD PTR [r8+r9*8]
0x0027c960: mov    r13,QWORD PTR [rax+0x178]
0x0027c967: mov    rax,QWORD PTR [rax+0x180]
0x0027c96e: sub    rax,r13
0x0027c971: sar    rax,0x3
0x0027c975: cmp    rdx,rax
0x0027c978: jae    0x14027ca8b
0x0027c97e: mov    r13,QWORD PTR [r13+rdx*8+0x0]
0x0027c983: test   r13,r13
0x0027c986: je     0x14027ca8b
0x0027c98c: movzx  edi,WORD PTR [r13+0x3c76]
0x0027c994: mov    r12d,DWORD PTR [r13+0x3c78]
0x0027c99b: movzx  r13d,WORD PTR [r13+0x3c74]
0x0027c9a3: mov    r9d,0xffffffff
0x0027c9a9: jmp    0x14027c9b2
0x0027c9ab: mov    rcx,QWORD PTR [rsi+0xf0]
0x0027c9b2: cmp    di,0xffff
0x0027c9b6: je     0x14027ca8b
0x0027c9bc: movzx  r8d,WORD PTR [rcx+0xa0]
0x0027c9c4: cmp    r13w,0x2
0x0027c9c9: je     0x14027ca14
0x0027c9cb: lea    eax,[rbx+0x1]
0x0027c9ce: cdq
0x0027c9cf: sub    eax,edx
0x0027c9d1: sar    eax,1
0x0027c9d3: sub    ebx,eax
0x0027c9d5: movsxd rdx,r15d
0x0027c9d8: mov    rcx,QWORD PTR [rsi+0x110]
0x0027c9df: mov    r11,QWORD PTR [rcx+rdx*8]
0x0027c9e3: mov    rcx,QWORD PTR [r11]
0x0027c9e6: mov    r10,QWORD PTR [rcx+0x3f0]
0x0027c9ed: mov    WORD PTR [rsp+0x38],0x1
0x0027c9f4: mov    WORD PTR [rsp+0x30],r9w
0x0027c9fa: mov    DWORD PTR [rsp+0x28],eax
0x0027c9fe: mov    WORD PTR [rsp+0x20],r8w
0x0027ca04: movzx  r9d,r13w
0x0027ca08: mov    r8d,r12d
0x0027ca0b: movzx  edx,di
0x0027ca0e: mov    rcx,r11
0x0027ca11: call   r10
0x0027ca14: test   ebx,ebx
0x0027ca16: jle    0x14027ca8b
0x0027ca18: lea    rcx,[rip+0x214e9c1]        # 0x1423cb3e0
0x0027ca1f: cmp    r13w,0x2
0x0027ca24: jne    0x14027ca5c
0x0027ca26: mov    eax,0x64 ; inline_fragment="d"
0x0027ca2b: cmp    ebx,eax
0x0027ca2d: cmovg  ebx,eax
0x0027ca30: mov    WORD PTR [rsp+0x30],bx
0x0027ca35: movzx  eax,WORD PTR [rsp+0x68]
0x0027ca3a: mov    WORD PTR [rsp+0x28],ax
0x0027ca3f: movzx  eax,WORD PTR [rsp+0x60]
0x0027ca44: mov    WORD PTR [rsp+0x20],ax
0x0027ca49: movzx  r9d,WORD PTR [rsp+0x64]
0x0027ca4f: mov    r8d,r12d
0x0027ca52: movzx  edx,di
0x0027ca55: call   0x14145e990
0x0027ca5a: jmp    0x14027ca8b
0x0027ca5c: mov    BYTE PTR [rsp+0x40],0x1
0x0027ca61: mov    DWORD PTR [rsp+0x38],ebx
0x0027ca65: mov    WORD PTR [rsp+0x30],r13w
0x0027ca6b: mov    DWORD PTR [rsp+0x28],r12d
0x0027ca70: mov    WORD PTR [rsp+0x20],di
0x0027ca75: movzx  r9d,WORD PTR [rsp+0x68]
0x0027ca7b: movzx  r8d,WORD PTR [rsp+0x60]
0x0027ca81: movzx  edx,WORD PTR [rsp+0x64]
0x0027ca86: call   0x1414aa260
0x0027ca8b: mov    ecx,0xa
0x0027ca90: mov    edx,0x19
0x0027ca95: mov    DWORD PTR [rsp+0x50],0xffffffff
0x0027ca9d: mov    WORD PTR [rsp+0x48],cx
0x0027caa2: mov    DWORD PTR [rsp+0x40],0x2
0x0027caaa: mov    QWORD PTR [rsp+0x38],r14
0x0027caaf: mov    QWORD PTR [rsp+0x30],r14
0x0027cab4: mov    DWORD PTR [rsp+0x28],0x1e
0x0027cabc: mov    DWORD PTR [rsp+0x20],ecx
0x0027cac0: mov    r9d,0x5
0x0027cac6: mov    r8d,0xb
0x0027cacc: mov    rcx,QWORD PTR [rbp-0x70]
0x0027cad0: call   0x141363900
0x0027cad5: xor    r8d,r8d
0x0027cad8: xor    edx,edx
0x0027cada: mov    rcx,QWORD PTR [rsi+0xf0]
0x0027cae1: call   0x140a8cf20
0x0027cae6: mov    rbx,QWORD PTR [rsi+0xf0]
0x0027caed: mov    QWORD PTR [rbp-0x70],rbx
0x0027caf1: test   rbx,rbx
0x0027caf4: je     0x14027cb48
0x0027caf6: test   DWORD PTR [rbx+0x10],0x100000
0x0027cafd: jne    0x14027cb2a
0x0027caff: xor    edx,edx
0x0027cb01: mov    rcx,rbx
0x0027cb04: call   0x140c60530
0x0027cb09: cmp    DWORD PTR [rbx+0x50],0xffffffff
0x0027cb0d: je     0x14027cb17
0x0027cb0f: mov    rcx,rbx
0x0027cb12: call   0x140cc5420
0x0027cb17: and    DWORD PTR [rbx+0x10],0x7fffffff
0x0027cb1e: mov    rax,QWORD PTR [rbx]
0x0027cb21: mov    rcx,rbx
0x0027cb24: call   QWORD PTR [rax+0x330]
0x0027cb2a: lea    r8,[rbp-0x70]
0x0027cb2e: lea    rdx,[rsp+0x70]
0x0027cb33: lea    rcx,[rip+0x21634f6]        # 0x1423e0030
0x0027cb3a: call   0x140282ad0
0x0027cb3f: mov    rcx,QWORD PTR [rbp-0x70]
0x0027cb43: call   0x140c645d0
0x0027cb48: mov    BYTE PTR [rsi],0x0
0x0027cb4b: mov    rdx,QWORD PTR [rbp+0x18]
0x0027cb4f: cmp    rdx,0xf
0x0027cb53: jbe    0x14027cb89
0x0027cb55: inc    rdx
0x0027cb58: mov    rcx,QWORD PTR [rbp+0x0]
0x0027cb5c: mov    rax,rcx
0x0027cb5f: cmp    rdx,0x1000
0x0027cb66: jb     0x14027cb84
0x0027cb68: add    rdx,0x27
0x0027cb6c: mov    rcx,QWORD PTR [rcx-0x8]
0x0027cb70: sub    rax,rcx
0x0027cb73: add    rax,0xfffffffffffffff8
0x0027cb77: cmp    rax,0x1f
0x0027cb7b: jbe    0x14027cb84
0x0027cb7d: call   QWORD PTR [rip+0x1363f1d]        # 0x1415e0aa0
0x0027cb83: int3
0x0027cb84: call   0x1415345f0
0x0027cb89: mov    QWORD PTR [rbp+0x10],r14
0x0027cb8d: mov    QWORD PTR [rbp+0x18],0xf
0x0027cb95: mov    BYTE PTR [rbp+0x0],0x0
0x0027cb99: mov    rdx,QWORD PTR [rbp+0x38]
0x0027cb9d: cmp    rdx,0xf
0x0027cba1: jbe    0x14027cdd7
0x0027cba7: inc    rdx
0x0027cbaa: mov    rcx,QWORD PTR [rbp+0x20]
0x0027cbae: mov    rax,rcx
0x0027cbb1: cmp    rdx,0x1000
0x0027cbb8: jb     0x14027cbd6
0x0027cbba: add    rdx,0x27
0x0027cbbe: mov    rcx,QWORD PTR [rcx-0x8]
0x0027cbc2: sub    rax,rcx
0x0027cbc5: add    rax,0xfffffffffffffff8
0x0027cbc9: cmp    rax,0x1f
0x0027cbcd: jbe    0x14027cbd6
0x0027cbcf: call   QWORD PTR [rip+0x1363ecb]        # 0x1415e0aa0
0x0027cbd5: int3
0x0027cbd6: call   0x1415345f0
0x0027cbdb: mov    al,0x1
0x0027cbdd: jmp    0x14027c1d6
0x0027cbe2: movsxd rcx,r15d
0x0027cbe5: mov    rax,QWORD PTR [rsi+0xf8]
0x0027cbec: mov    rbx,QWORD PTR [rax+rcx*8]
0x0027cbf0: cmp    QWORD PTR [rsi+0xf0],rbx
0x0027cbf7: je     0x14027cdd7
0x0027cbfd: mov    rax,QWORD PTR [rbp-0x70]
0x0027cc01: cmp    DWORD PTR [rax+0x988],0x278d00
0x0027cc0b: setge  r8b
0x0027cc0f: xor    edx,edx
0x0027cc11: mov    rcx,rbx
0x0027cc14: call   0x140c70270
0x0027cc19: test   al,al
0x0027cc1b: je     0x14027cdd7
0x0027cc21: mov    QWORD PTR [rsi+0xf0],rbx
0x0027cc28: lea    rbx,[rsi+0x110]
0x0027cc2f: mov    rax,QWORD PTR [rbx]
0x0027cc32: cmp    rax,QWORD PTR [rbx+0x8]
0x0027cc36: je     0x14027cc3c
0x0027cc38: mov    QWORD PTR [rbx+0x8],rax
0x0027cc3c: mov    rax,QWORD PTR [rsi+0x10]
0x0027cc40: sub    rax,QWORD PTR [rsi+0x8]
0x0027cc44: sar    rax,0x3
0x0027cc48: movsxd r15,eax
0x0027cc4b: test   eax,eax
0x0027cc4d: jle    0x14027cc9d
0x0027cc4f: nop
0x0027cc50: mov    rax,QWORD PTR [rsi+0x8]
0x0027cc54: mov    rdi,QWORD PTR [rax+r14*8]
0x0027cc58: mov    QWORD PTR [rbp-0x70],rdi
0x0027cc5c: cmp    rdi,QWORD PTR [rsi+0xf0]
0x0027cc63: je     0x14027cc95
0x0027cc65: mov    rax,QWORD PTR [rdi]
0x0027cc68: mov    rcx,rdi
0x0027cc6b: call   QWORD PTR [rax+0x538]
0x0027cc71: test   eax,eax
0x0027cc73: jle    0x14027cc95
0x0027cc75: mov    rdx,QWORD PTR [rbx+0x8]
0x0027cc79: cmp    rdx,QWORD PTR [rbx+0x10]
0x0027cc7d: je     0x14027cc89
0x0027cc7f: mov    QWORD PTR [rdx],rdi
0x0027cc82: add    QWORD PTR [rbx+0x8],0x8
0x0027cc87: jmp    0x14027cc95
0x0027cc89: lea    r8,[rbp-0x70]
0x0027cc8d: mov    rcx,rbx
0x0027cc90: call   0x1400bacc0
0x0027cc95: inc    r14
0x0027cc98: cmp    r14,r15
0x0027cc9b: jl     0x14027cc50
0x0027cc9d: mov    DWORD PTR [rsi+0x4],0x2
0x0027cca4: jmp    0x14027c1d4
0x0027cca9: movsxd rax,r15d
0x0027ccac: lea    rdx,[rax*8+0x0]
0x0027ccb4: mov    rax,QWORD PTR [rsi+0x28]
0x0027ccb8: mov    rcx,QWORD PTR [rdx+rax*1]
0x0027ccbc: test   rcx,rcx
0x0027ccbf: jne    0x14027cd48
0x0027ccc5: mov    rax,QWORD PTR [rsi+0x40]
0x0027ccc9: mov    rcx,QWORD PTR [rax+rdx*1]
0x0027cccd: cmp    QWORD PTR [rcx+0x10],r14
0x0027ccd1: jne    0x14027cd17
0x0027ccd3: mov    rax,QWORD PTR [rsi+0x100]
0x0027ccda: sub    rax,QWORD PTR [rsi+0xf8]
0x0027cce1: sar    rax,0x3
0x0027cce5: test   rax,rax
0x0027cce8: je     0x14027cdd7
0x0027ccee: mov    rax,QWORD PTR [rsi+0x118]
0x0027ccf5: sub    rax,QWORD PTR [rsi+0x110]
0x0027ccfc: sar    rax,0x3
0x0027cd00: test   rax,rax
0x0027cd03: je     0x14027cdd7
0x0027cd09: mov    DWORD PTR [rsi+0x4],0x1
0x0027cd10: mov    al,0x1
0x0027cd12: jmp    0x14027c1d6
0x0027cd17: mov    rax,QWORD PTR [rsi+0x40]
0x0027cd1b: mov    rdx,QWORD PTR [rdx+rax*1]
0x0027cd1f: lea    rcx,[rsi+0x58]
0x0027cd23: cmp    rcx,rdx
0x0027cd26: je     0x14027cd3b
0x0027cd28: mov    r8,QWORD PTR [rdx+0x10]
0x0027cd2c: cmp    QWORD PTR [rdx+0x18],0xf
0x0027cd31: jbe    0x14027cd36
0x0027cd33: mov    rdx,QWORD PTR [rdx]
0x0027cd36: call   0x14006f860
0x0027cd3b: mov    rcx,rsi
0x0027cd3e: call   0x14027d150
0x0027cd43: jmp    0x14027c1d4
0x0027cd48: mov    DWORD PTR [rsi+0x4],0x3
0x0027cd4f: mov    QWORD PTR [rsi+0xc0],rcx
0x0027cd56: mov    DWORD PTR [rsi+0xc8],r14d
0x0027cd5d: mov    rax,QWORD PTR [rsi+0x90]
0x0027cd64: cmp    rax,QWORD PTR [rsi+0x98]
0x0027cd6b: je     0x14027cd74
0x0027cd6d: mov    QWORD PTR [rsi+0x98],rax
0x0027cd74: mov    rax,QWORD PTR [rsi+0xa8]
0x0027cd7b: cmp    rax,QWORD PTR [rsi+0xb0]
0x0027cd82: je     0x14027cd8b
0x0027cd84: mov    QWORD PTR [rsi+0xb0],rax
0x0027cd8b: mov    rax,QWORD PTR [rcx+0x58]
0x0027cd8f: sub    rax,QWORD PTR [rcx+0x50]
0x0027cd93: test   rax,0xfffffffffffffff8
0x0027cd99: jne    0x14027cdde
0x0027cd9b: mov    rcx,rsi
0x0027cd9e: call   0x14027dd60
0x0027cda3: cmp    DWORD PTR [rsi+0x4],0x5
0x0027cda7: jne    0x14027c1d4
0x0027cdad: test   BYTE PTR [rsi+0xec],0x1
0x0027cdb4: jne    0x14027cdbe
0x0027cdb6: mov    rcx,rsi
0x0027cdb9: call   0x14027e070
0x0027cdbe: mov    BYTE PTR [rsi],r14b
0x0027cdc1: cmp    WORD PTR [rip+0x23c7c1f],0x2        # 0x1426449e8
0x0027cdc9: jge    0x14027cdd7
0x0027cdcb: mov    eax,0x2
0x0027cdd0: mov    WORD PTR [rip+0x23c7c11],ax        # 0x1426449e8
0x0027cdd7: mov    al,0x1
0x0027cdd9: jmp    0x14027c1d6
0x0027cdde: mov    rcx,rsi
0x0027cde1: call   0x14027dbd0
0x0027cde6: jmp    0x14027c1d4
