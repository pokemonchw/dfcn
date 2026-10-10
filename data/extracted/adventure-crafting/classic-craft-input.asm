# classic PE:6a70b91c:0270a000; craft-input; RVA 0x27ae70..0x27beba
0x0027ae70: mov    QWORD PTR [rsp+0x8],rbx
0x0027ae75: mov    QWORD PTR [rsp+0x18],rsi
0x0027ae7a: mov    QWORD PTR [rsp+0x20],rdi
0x0027ae7f: mov    QWORD PTR [rsp+0x10],rdx
0x0027ae84: push   rbp
0x0027ae85: push   r12
0x0027ae87: push   r13
0x0027ae89: push   r14
0x0027ae8b: push   r15
0x0027ae8d: lea    rbp,[rsp-0x27]
0x0027ae92: sub    rsp,0x90
0x0027ae99: mov    r14d,r9d
0x0027ae9c: mov    r15d,r8d
0x0027ae9f: mov    r8,rdx
0x0027aea2: mov    rsi,rcx
0x0027aea5: mov    eax,DWORD PTR [rbp+0x7f]
0x0027aea8: add    eax,DWORD PTR [rbp+0x77]
0x0027aeab: cdq
0x0027aeac: sub    eax,edx
0x0027aeae: sar    eax,1
0x0027aeb0: lea    ebx,[rax-0x32]
0x0027aeb3: mov    DWORD PTR [rbp-0x1],ebx
0x0027aeb6: lea    r13d,[rax+0x32]
0x0027aeba: mov    edx,DWORD PTR [rip+0x214c7b8]        # 0x1423c7678
0x0027aec0: add    edx,0xfffffffb
0x0027aec3: mov    DWORD PTR [rbp+0xf],edx
0x0027aec6: movzx  r10d,BYTE PTR [rip+0x210f5f7]        # 0x14238a4c5
0x0027aece: test   r10b,r10b
0x0027aed1: je     0x14027aedc
0x0027aed3: cmp    BYTE PTR [rip+0x210f5e3],0x0        # 0x14238a4bd
0x0027aeda: jne    0x14027af14
0x0027aedc: mov    rcx,QWORD PTR [r8]
0x0027aedf: mov    rax,QWORD PTR [rcx+0x8]
0x0027aee3: cmp    BYTE PTR [rax+0x19],0x0
0x0027aee7: jne    0x14027af08
0x0027aee9: nop    DWORD PTR [rax+0x0]
0x0027aef0: cmp    DWORD PTR [rax+0x1c],0x5
0x0027aef4: jge    0x14027aefc
0x0027aef6: mov    rax,QWORD PTR [rax+0x10]
0x0027aefa: jmp    0x14027af02
0x0027aefc: mov    rcx,rax
0x0027aeff: mov    rax,QWORD PTR [rax]
0x0027af02: cmp    BYTE PTR [rax+0x19],0x0
0x0027af06: je     0x14027aef0
0x0027af08: cmp    BYTE PTR [rcx+0x19],0x0
0x0027af0c: jne    0x14027af57
0x0027af0e: cmp    DWORD PTR [rcx+0x1c],0x5
0x0027af12: jg     0x14027af57
0x0027af14: mov    BYTE PTR [rip+0x210f5a2],0x0        # 0x14238a4bd
0x0027af1b: mov    rcx,r8
0x0027af1e: call   0x1400e1100
0x0027af23: mov    ecx,0x232a ; inline_fragment="*#"
0x0027af28: call   0x1407e1c40
0x0027af2d: mov    ecx,DWORD PTR [rsi+0x4]
0x0027af30: sub    ecx,0x2
0x0027af33: je     0x14027af43
0x0027af35: sub    ecx,0x1
0x0027af38: je     0x14027af43
0x0027af3a: cmp    ecx,0x1
0x0027af3d: jne    0x14027bb7e
0x0027af43: mov    DWORD PTR [rsi+0x4],0x1
0x0027af4a: mov    rcx,rsi
0x0027af4d: call   0x14027ec60
0x0027af52: jmp    0x14027b17e
0x0027af57: mov    r11,QWORD PTR [rsi+0xb8]
0x0027af5e: sub    r11,QWORD PTR [rsi+0xb0]
0x0027af65: sar    r11,0x3
0x0027af69: mov    QWORD PTR [rbp+0x7],r11
0x0027af6d: lea    eax,[rbx+0x1]
0x0027af70: mov    DWORD PTR [rbp+0x13],eax
0x0027af73: lea    r9d,[r13-0x1]
0x0027af77: lea    ecx,[rdx-0x1b]
0x0027af7a: mov    eax,0x55555556 ; inline_fragment="VUUU"
0x0027af7f: imul   ecx
0x0027af81: mov    r12d,edx
0x0027af84: shr    r12d,0x1f
0x0027af88: add    r12d,edx
0x0027af8b: lea    ecx,[r9-0x2]
0x0027af8f: cmp    r11d,r12d
0x0027af92: cmovle ecx,r9d
0x0027af96: mov    DWORD PTR [rbp+0x77],ecx
0x0027af99: xor    edi,edi
0x0027af9b: cmp    DWORD PTR [rsi+0x4],0x1
0x0027af9f: je     0x14027b081
0x0027afa5: cmp    r11d,r12d
0x0027afa8: jle    0x14027b081
0x0027afae: test   r10b,r10b
0x0027afb1: je     0x14027b0f7
0x0027afb7: cmp    r15d,ebx
0x0027afba: jl     0x14027b0f7
0x0027afc0: cmp    r15d,r13d
0x0027afc3: jg     0x14027b0f7
0x0027afc9: cmp    r14d,0x14
0x0027afcd: jl     0x14027b0f7
0x0027afd3: cmp    r14d,DWORD PTR [rbp+0xf]
0x0027afd7: jg     0x14027b0f7
0x0027afdd: lea    ecx,[r12*2+0x19]
0x0027afe5: add    ecx,r12d
0x0027afe8: mov    QWORD PTR [rbp-0x9],rdi
0x0027afec: mov    eax,DWORD PTR [rsi+0x8c]
0x0027aff2: mov    DWORD PTR [rbp-0x21],eax
0x0027aff5: mov    DWORD PTR [rbp-0x1d],edi
0x0027aff8: lea    eax,[r11-0x1]
0x0027affc: mov    DWORD PTR [rbp-0x19],eax
0x0027afff: mov    DWORD PTR [rbp-0x11],0x1c
0x0027b006: mov    DWORD PTR [rbp-0xd],ecx
0x0027b009: mov    DWORD PTR [rbp-0x15],r12d
0x0027b00d: lea    rcx,[rbp-0x21]
0x0027b011: call   0x1400bb340
0x0027b016: lea    r9,[rsi+0x90]
0x0027b01d: lea    r8,[rsi+0x8c]
0x0027b024: mov    rbx,QWORD PTR [rbp+0x5f]
0x0027b028: mov    rdx,rbx
0x0027b02b: lea    rcx,[rbp-0x21]
0x0027b02f: call   0x14140a220
0x0027b034: test   al,al
0x0027b036: jne    0x14027b17e
0x0027b03c: mov    r11,QWORD PTR [rbp+0x7]
0x0027b040: lea    eax,[r11-0x1]
0x0027b044: lea    r8,[rsi+0x8c]
0x0027b04b: mov    DWORD PTR [rsp+0x30],0x1
0x0027b053: mov    DWORD PTR [rsp+0x28],r12d
0x0027b058: mov    DWORD PTR [rsp+0x20],eax
0x0027b05c: xor    r9d,r9d
0x0027b05f: mov    rdx,rbx
0x0027b062: call   0x140a99ba0
0x0027b067: mov    r8,QWORD PTR [rbp+0x5f]
0x0027b06b: lea    r9d,[r13-0x1]
0x0027b06f: movzx  r10d,BYTE PTR [rip+0x210f44e]        # 0x14238a4c5
0x0027b077: mov    r11,QWORD PTR [rbp+0x7]
0x0027b07b: mov    ebx,DWORD PTR [rbp-0x1]
0x0027b07e: mov    ecx,DWORD PTR [rbp+0x77]
0x0027b081: cmp    BYTE PTR [rsi+0x90],dil
0x0027b088: je     0x14027b1aa
0x0027b08e: cmp    DWORD PTR [rsi+0x4],0x1
0x0027b092: je     0x14027b1aa
0x0027b098: test   r10b,r10b
0x0027b09b: je     0x14027b1a1
0x0027b0a1: cmp    BYTE PTR [rip+0x210f416],dil        # 0x14238a4be
0x0027b0a8: je     0x14027b1a1
0x0027b0ae: mov    QWORD PTR [rbp-0x9],rdi
0x0027b0b2: mov    eax,DWORD PTR [rsi+0x8c]
0x0027b0b8: mov    DWORD PTR [rbp-0x21],eax
0x0027b0bb: mov    DWORD PTR [rbp-0x1d],edi
0x0027b0be: lea    eax,[r11-0x1]
0x0027b0c2: mov    DWORD PTR [rbp-0x19],eax
0x0027b0c5: mov    DWORD PTR [rbp-0x11],0x1c
0x0027b0cc: lea    eax,[r12*2+0x19]
0x0027b0d4: add    eax,r12d
0x0027b0d7: mov    DWORD PTR [rbp-0xd],eax
0x0027b0da: mov    DWORD PTR [rbp-0x15],r12d
0x0027b0de: lea    rcx,[rbp-0x21]
0x0027b0e2: call   0x1400bb340
0x0027b0e7: mov    edx,DWORD PTR [rbp-0x11]
0x0027b0ea: cmp    r14d,edx
0x0027b0ed: jg     0x14027b100
0x0027b0ef: mov    eax,DWORD PTR [rbp-0x1d]
0x0027b0f2: mov    DWORD PTR [rbp-0x21],eax
0x0027b0f5: jmp    0x14027b163
0x0027b0f7: mov    rbx,QWORD PTR [rbp+0x5f]
0x0027b0fb: jmp    0x14027b040
0x0027b100: mov    ecx,DWORD PTR [rbp-0xd]
0x0027b103: cmp    r14d,ecx
0x0027b106: jl     0x14027b11c
0x0027b108: mov    eax,DWORD PTR [rbp-0x19]
0x0027b10b: sub    eax,DWORD PTR [rbp-0x15]
0x0027b10e: inc    eax
0x0027b110: mov    DWORD PTR [rbp-0x21],eax
0x0027b113: mov    ecx,DWORD PTR [rbp-0x1d]
0x0027b116: cmp    eax,ecx
0x0027b118: jge    0x14027b163
0x0027b11a: jmp    0x14027b160
0x0027b11c: cmp    ecx,edx
0x0027b11e: jle    0x14027b163
0x0027b120: mov    r9d,DWORD PTR [rbp-0x19]
0x0027b124: mov    eax,r9d
0x0027b127: mov    r10d,DWORD PTR [rbp-0x1d]
0x0027b12b: sub    eax,r10d
0x0027b12e: sub    eax,DWORD PTR [rbp-0x15]
0x0027b131: add    eax,0x1
0x0027b134: cmovns edi,eax
0x0027b137: sub    r14d,edx
0x0027b13a: imul   edi,r14d
0x0027b13e: sub    ecx,edx
0x0027b140: inc    ecx
0x0027b142: mov    eax,edi
0x0027b144: cdq
0x0027b145: idiv   ecx
0x0027b147: lea    ecx,[rax+r10*1]
0x0027b14b: sub    r9d,DWORD PTR [rbp-0x15]
0x0027b14f: inc    r9d
0x0027b152: cmp    ecx,r9d
0x0027b155: cmovg  ecx,r9d
0x0027b159: cmp    ecx,r10d
0x0027b15c: cmovl  ecx,r10d
0x0027b160: mov    DWORD PTR [rbp-0x21],ecx
0x0027b163: lea    rcx,[rbp-0x21]
0x0027b167: call   0x1400bb340
0x0027b16c: mov    eax,DWORD PTR [rbp-0x21]
0x0027b16f: mov    DWORD PTR [rsi+0x8c],eax
0x0027b175: mov    WORD PTR [rip+0x210f33e],0x0        # 0x14238a4bc
0x0027b17e: xor    al,al
0x0027b180: lea    r11,[rsp+0x90]
0x0027b188: mov    rbx,QWORD PTR [r11+0x30]
0x0027b18c: mov    rsi,QWORD PTR [r11+0x40]
0x0027b190: mov    rdi,QWORD PTR [r11+0x48]
0x0027b194: mov    rsp,r11
0x0027b197: pop    r15
0x0027b199: pop    r14
0x0027b19b: pop    r13
0x0027b19d: pop    r12
0x0027b19f: pop    rbp
0x0027b1a0: ret
0x0027b1a1: mov    BYTE PTR [rsi+0x90],dil
0x0027b1a8: jmp    0x14027b175
0x0027b1aa: cmp    r15d,ebx
0x0027b1ad: jl     0x14027b1c0
0x0027b1af: cmp    r15d,r13d
0x0027b1b2: jg     0x14027b1c0
0x0027b1b4: cmp    r14d,0x14
0x0027b1b8: jl     0x14027b1c0
0x0027b1ba: cmp    r14d,DWORD PTR [rbp+0xf]
0x0027b1be: jle    0x14027b1df
0x0027b1c0: movzx  edx,BYTE PTR [rip+0x210f2f5]        # 0x14238a4bc
0x0027b1c7: test   r10b,r10b
0x0027b1ca: je     0x14027b1e6
0x0027b1cc: test   dl,dl
0x0027b1ce: je     0x14027b1e6
0x0027b1d0: mov    BYTE PTR [rip+0x210f2e5],dil        # 0x14238a4bc
0x0027b1d7: mov    BYTE PTR [rsi],dil
0x0027b1da: jmp    0x14027bb81
0x0027b1df: movzx  edx,BYTE PTR [rip+0x210f2d6]        # 0x14238a4bc
0x0027b1e6: lea    eax,[r13-0xc]
0x0027b1ea: cmp    r15d,eax
0x0027b1ed: jl     0x14027b21f
0x0027b1ef: cmp    r15d,r9d
0x0027b1f2: jg     0x14027b21f
0x0027b1f4: lea    eax,[r14-0x15]
0x0027b1f8: cmp    eax,0x2
0x0027b1fb: ja     0x14027b21f
0x0027b1fd: test   r10b,r10b
0x0027b200: je     0x14027b21f
0x0027b202: test   dl,dl
0x0027b204: je     0x14027b21f
0x0027b206: mov    ecx,0x232a ; inline_fragment="*#"
0x0027b20b: call   0x1407e1c40
0x0027b210: mov    BYTE PTR [rip+0x210f2a5],dil        # 0x14238a4bc
0x0027b217: mov    BYTE PTR [rsi],dil
0x0027b21a: jmp    0x14027bb81
0x0027b21f: cmp    DWORD PTR [rsi+0x4],0x1
0x0027b223: je     0x14027b67e
0x0027b229: mov    rax,QWORD PTR [rsi+0xa0]
0x0027b230: sub    rax,QWORD PTR [rsi+0x98]
0x0027b237: sar    rax,0x3
0x0027b23b: test   rax,rax
0x0027b23e: je     0x14027b289
0x0027b240: mov    eax,0x2
0x0027b245: cmp    r11d,r12d
0x0027b248: cmovle eax,edi
0x0027b24b: lea    r9d,[rbx+0x1]
0x0027b24f: cmp    r15d,r9d
0x0027b252: jl     0x14027b289
0x0027b254: add    eax,ecx
0x0027b256: cmp    r15d,eax
0x0027b259: jg     0x14027b289
0x0027b25b: lea    eax,[r14-0x18]
0x0027b25f: cmp    eax,0x2
0x0027b262: ja     0x14027b289
0x0027b264: test   r10b,r10b
0x0027b267: je     0x14027b289
0x0027b269: test   dl,dl
0x0027b26b: je     0x14027b289
0x0027b26d: mov    BYTE PTR [rip+0x210f248],dil        # 0x14238a4bc
0x0027b274: cmp    BYTE PTR [rsi+0xe8],dil
0x0027b27b: sete   al
0x0027b27e: mov    BYTE PTR [rsi+0xe8],al
0x0027b284: jmp    0x14027b17e
0x0027b289: cmp    r11d,r12d
0x0027b28c: jle    0x14027b3ad
0x0027b292: lea    eax,[rcx+0x1]
0x0027b295: lea    ecx,[r12*2+0x19]
0x0027b29d: add    ecx,r12d
0x0027b2a0: cmp    r15d,eax
0x0027b2a3: jl     0x14027b3ad
0x0027b2a9: inc    eax
0x0027b2ab: cmp    r15d,eax
0x0027b2ae: jg     0x14027b3ad
0x0027b2b4: cmp    r14d,0x1b
0x0027b2b8: jl     0x14027b3ad
0x0027b2be: lea    eax,[rcx+0x1]
0x0027b2c1: cmp    r14d,eax
0x0027b2c4: jg     0x14027b3ad
0x0027b2ca: test   r10b,r10b
0x0027b2cd: je     0x14027b3ad
0x0027b2d3: test   dl,dl
0x0027b2d5: je     0x14027b3ad
0x0027b2db: mov    BYTE PTR [rip+0x210f1da],dil        # 0x14238a4bc
0x0027b2e2: mov    QWORD PTR [rbp-0x9],rdi
0x0027b2e6: mov    eax,DWORD PTR [rsi+0x8c]
0x0027b2ec: mov    DWORD PTR [rbp-0x21],eax
0x0027b2ef: mov    DWORD PTR [rbp-0x1d],edi
0x0027b2f2: lea    eax,[r11-0x1]
0x0027b2f6: mov    DWORD PTR [rbp-0x19],eax
0x0027b2f9: mov    DWORD PTR [rbp-0x11],0x1c
0x0027b300: mov    DWORD PTR [rbp-0xd],ecx
0x0027b303: mov    DWORD PTR [rbp-0x15],r12d
0x0027b307: lea    rcx,[rbp-0x21]
0x0027b30b: call   0x1400bb340
0x0027b310: mov    BYTE PTR [rsi+0x90],dil
0x0027b317: mov    eax,DWORD PTR [rbp-0x11]
0x0027b31a: dec    eax
0x0027b31c: cmp    r14d,eax
0x0027b31f: jne    0x14027b338
0x0027b321: mov    ecx,DWORD PTR [rbp-0x21]
0x0027b324: dec    ecx
0x0027b326: cmp    ecx,DWORD PTR [rbp-0x1d]
0x0027b329: cmovl  ecx,DWORD PTR [rbp-0x1d]
0x0027b32d: mov    DWORD PTR [rsi+0x8c],ecx
0x0027b333: jmp    0x14027b17e
0x0027b338: mov    eax,DWORD PTR [rbp-0xd]
0x0027b33b: inc    eax
0x0027b33d: cmp    r14d,eax
0x0027b340: jne    0x14027b35f
0x0027b342: mov    ecx,DWORD PTR [rbp-0x21]
0x0027b345: inc    ecx
0x0027b347: mov    eax,DWORD PTR [rbp-0x19]
0x0027b34a: sub    eax,DWORD PTR [rbp-0x15]
0x0027b34d: inc    eax
0x0027b34f: cmp    ecx,eax
0x0027b351: cmovg  ecx,eax
0x0027b354: mov    DWORD PTR [rsi+0x8c],ecx
0x0027b35a: jmp    0x14027b17e
0x0027b35f: cmp    r14d,DWORD PTR [rbp-0x9]
0x0027b363: jl     0x14027b395
0x0027b365: cmp    r14d,DWORD PTR [rbp-0x5]
0x0027b369: jg     0x14027b377
0x0027b36b: mov    BYTE PTR [rsi+0x90],0x1
0x0027b372: jmp    0x14027b17e
0x0027b377: mov    edx,DWORD PTR [rbp-0x21]
0x0027b37a: add    edx,DWORD PTR [rbp-0x15]
0x0027b37d: mov    ecx,DWORD PTR [rbp-0x19]
0x0027b380: sub    ecx,DWORD PTR [rbp-0x15]
0x0027b383: inc    ecx
0x0027b385: cmp    edx,ecx
0x0027b387: cmovg  edx,ecx
0x0027b38a: mov    DWORD PTR [rsi+0x8c],edx
0x0027b390: jmp    0x14027b17e
0x0027b395: mov    ecx,DWORD PTR [rbp-0x21]
0x0027b398: sub    ecx,DWORD PTR [rbp-0x15]
0x0027b39b: cmp    ecx,DWORD PTR [rbp-0x1d]
0x0027b39e: cmovl  ecx,DWORD PTR [rbp-0x1d]
0x0027b3a2: mov    DWORD PTR [rsi+0x8c],ecx
0x0027b3a8: jmp    0x14027b17e
0x0027b3ad: mov    r9d,0x1b
0x0027b3b3: mov    DWORD PTR [rbp+0x7f],r9d
0x0027b3b7: mov    eax,DWORD PTR [rsi+0x8c]
0x0027b3bd: mov    ecx,r11d
0x0027b3c0: sub    ecx,r12d
0x0027b3c3: cmp    eax,ecx
0x0027b3c5: cmovle ecx,eax
0x0027b3c8: mov    r13d,edi
0x0027b3cb: test   ecx,ecx
0x0027b3cd: cmovns r13d,ecx
0x0027b3d1: lea    eax,[r12+r13*1]
0x0027b3d5: mov    DWORD PTR [rbp+0x17],eax
0x0027b3d8: cmp    r13d,eax
0x0027b3db: jge    0x14027b67e
0x0027b3e1: mov    eax,0x52 ; inline_fragment="R"
0x0027b3e6: sub    eax,r13d
0x0027b3e9: mov    DWORD PTR [rbp+0x1b],eax
0x0027b3ec: nop    DWORD PTR [rax+0x0]
0x0027b3f0: cmp    r13d,r11d
0x0027b3f3: jge    0x14027b67b
0x0027b3f9: xor    bl,bl
0x0027b3fb: lea    edx,[rax+r13*1]
0x0027b3ff: mov    rcx,QWORD PTR [r8]
0x0027b402: mov    rax,QWORD PTR [rcx+0x8]
0x0027b406: cmp    BYTE PTR [rax+0x19],bl
0x0027b409: jne    0x14027b426
0x0027b40b: nop    DWORD PTR [rax+rax*1+0x0]
0x0027b410: cmp    DWORD PTR [rax+0x1c],edx
0x0027b413: jge    0x14027b41b
0x0027b415: mov    rax,QWORD PTR [rax+0x10]
0x0027b419: jmp    0x14027b421
0x0027b41b: mov    rcx,rax
0x0027b41e: mov    rax,QWORD PTR [rax]
0x0027b421: cmp    BYTE PTR [rax+0x19],bl
0x0027b424: je     0x14027b410
0x0027b426: mov    r12d,0x1
0x0027b42c: cmp    BYTE PTR [rcx+0x19],bl
0x0027b42f: jne    0x14027b43b
0x0027b431: movzx  ebx,bl
0x0027b434: cmp    edx,DWORD PTR [rcx+0x1c]
0x0027b437: cmovge ebx,r12d
0x0027b43b: cmp    r15d,DWORD PTR [rbp+0x13]
0x0027b43f: jl     0x14027b45b
0x0027b441: cmp    r15d,DWORD PTR [rbp+0x77]
0x0027b445: jge    0x14027b45b
0x0027b447: cmp    r14d,r9d
0x0027b44a: jl     0x14027b45b
0x0027b44c: lea    eax,[r9+0x3]
0x0027b450: cmp    r14d,eax
0x0027b453: jge    0x14027b45b
0x0027b455: test   bl,bl
0x0027b457: je     0x14027b47b
0x0027b459: jmp    0x14027b45f
0x0027b45b: test   bl,bl
0x0027b45d: je     0x14027b48d
0x0027b45f: mov    rcx,r8
0x0027b462: call   0x1400e1100
0x0027b467: mov    r8,QWORD PTR [rbp+0x5f]
0x0027b46b: mov    r9d,DWORD PTR [rbp+0x7f]
0x0027b46f: movzx  r10d,BYTE PTR [rip+0x210f04e]        # 0x14238a4c5
0x0027b477: mov    r11,QWORD PTR [rbp+0x7]
0x0027b47b: test   r10b,r10b
0x0027b47e: je     0x14027b489
0x0027b480: cmp    BYTE PTR [rip+0x210f035],dil        # 0x14238a4bc
0x0027b487: jne    0x14027b4aa
0x0027b489: test   bl,bl
0x0027b48b: jne    0x14027b4aa
0x0027b48d: add    r9d,0x3
0x0027b491: mov    DWORD PTR [rbp+0x7f],r9d
0x0027b495: inc    r13d
0x0027b498: cmp    r13d,DWORD PTR [rbp+0x17]
0x0027b49c: jge    0x14027b67b
0x0027b4a2: mov    eax,DWORD PTR [rbp+0x1b]
0x0027b4a5: jmp    0x14027b3f0
0x0027b4aa: mov    BYTE PTR [rip+0x210f00b],dil        # 0x14238a4bc
0x0027b4b1: mov    rcx,r8
0x0027b4b4: call   0x1400e1100
0x0027b4b9: movsxd rcx,r13d
0x0027b4bc: mov    rax,QWORD PTR [rsi+0xb0]
0x0027b4c3: mov    r14,QWORD PTR [rax+rcx*8]
0x0027b4c7: mov    ecx,DWORD PTR [rsi+0x4]
0x0027b4ca: test   ecx,ecx
0x0027b4cc: je     0x14027b53d
0x0027b4ce: sub    ecx,0x2
0x0027b4d1: je     0x14027b520
0x0027b4d3: sub    ecx,0x1
0x0027b4d6: je     0x14027b4ff
0x0027b4d8: cmp    ecx,0x1
0x0027b4db: jne    0x14027bb97
0x0027b4e1: mov    rax,QWORD PTR [r14+0x78]
0x0027b4e5: mov    ecx,DWORD PTR [rax+0x4]
0x0027b4e8: mov    DWORD PTR [rsi+0x88],ecx
0x0027b4ee: mov    DWORD PTR [rsi+0x4],r12d
0x0027b4f2: mov    rcx,rsi
0x0027b4f5: call   0x14027ec60
0x0027b4fa: jmp    0x14027b17e
0x0027b4ff: mov    rax,QWORD PTR [r14+0x68]
0x0027b503: mov    ecx,DWORD PTR [rax+0xe0]
0x0027b509: mov    DWORD PTR [rsi+0x80],ecx
0x0027b50f: mov    DWORD PTR [rsi+0x4],r12d
0x0027b513: mov    rcx,rsi
0x0027b516: call   0x14027ec60
0x0027b51b: jmp    0x14027b17e
0x0027b520: movzx  eax,WORD PTR [r14+0x70]
0x0027b525: mov    WORD PTR [rsi+0x84],ax
0x0027b52c: mov    DWORD PTR [rsi+0x4],r12d
0x0027b530: mov    rcx,rsi
0x0027b533: call   0x14027ec60
0x0027b538: jmp    0x14027b17e
0x0027b53d: mov    rdx,QWORD PTR [rip+0x2163abc]        # 0x1423df000
0x0027b544: lea    r8,[rdx+0x1274]
0x0027b54b: mov    edx,DWORD PTR [rdx+0xc30]
0x0027b551: lea    rcx,[rip+0x2278650]        # 0x1424f3ba8
0x0027b558: call   0x140b500f0
0x0027b55d: mov    rbx,rax
0x0027b560: test   rax,rax
0x0027b563: je     0x14027b673
0x0027b569: mov    rax,QWORD PTR [rax+0x130]
0x0027b570: test   rax,rax
0x0027b573: jne    0x14027b5bd
0x0027b575: mov    ecx,0x68 ; inline_fragment="h"
0x0027b57a: call   0x141534600
0x0027b57f: mov    QWORD PTR [rbp+0x7],rax
0x0027b583: mov    QWORD PTR [rax],rdi
0x0027b586: mov    QWORD PTR [rax+0x8],rdi
0x0027b58a: mov    QWORD PTR [rax+0x10],rdi
0x0027b58e: mov    QWORD PTR [rax+0x18],rdi
0x0027b592: mov    QWORD PTR [rax+0x20],rdi
0x0027b596: mov    QWORD PTR [rax+0x28],rdi
0x0027b59a: mov    QWORD PTR [rax+0x30],rdi
0x0027b59e: mov    QWORD PTR [rax+0x38],rdi
0x0027b5a2: mov    QWORD PTR [rax+0x40],rdi
0x0027b5a6: mov    QWORD PTR [rax+0x48],rdi
0x0027b5aa: mov    QWORD PTR [rax+0x50],rdi
0x0027b5ae: mov    QWORD PTR [rax+0x58],rdi
0x0027b5b2: mov    QWORD PTR [rax+0x60],rdi
0x0027b5b6: mov    QWORD PTR [rbx+0x130],rax
0x0027b5bd: cmp    QWORD PTR [rax+0x58],rdi
0x0027b5c1: jne    0x14027b610
0x0027b5c3: mov    ecx,0x60 ; inline_fragment="`"
0x0027b5c8: call   0x141534600
0x0027b5cd: mov    rcx,rax
0x0027b5d0: mov    QWORD PTR [rbp+0x7],rax
0x0027b5d4: mov    QWORD PTR [rax],rdi
0x0027b5d7: mov    QWORD PTR [rax+0x8],rdi
0x0027b5db: mov    QWORD PTR [rax+0x10],rdi
0x0027b5df: mov    QWORD PTR [rax+0x18],rdi
0x0027b5e3: mov    QWORD PTR [rax+0x20],rdi
0x0027b5e7: mov    QWORD PTR [rax+0x28],rdi
0x0027b5eb: mov    QWORD PTR [rax+0x38],rdi
0x0027b5ef: mov    QWORD PTR [rax+0x40],rdi
0x0027b5f3: mov    QWORD PTR [rax+0x48],rdi
0x0027b5f7: mov    DWORD PTR [rax+0x30],0xffffffff
0x0027b5fe: mov    DWORD PTR [rax+0x50],edi
0x0027b601: mov    QWORD PTR [rax+0x58],rdi
0x0027b605: mov    rax,QWORD PTR [rbx+0x130]
0x0027b60c: mov    QWORD PTR [rax+0x58],rcx
0x0027b610: mov    rdx,QWORD PTR [r14+0x60]
0x0027b614: mov    rax,QWORD PTR [rbx+0x130]
0x0027b61b: mov    rcx,QWORD PTR [rax+0x58]
0x0027b61f: mov    eax,DWORD PTR [rdx]
0x0027b621: mov    DWORD PTR [rcx+0x30],eax
0x0027b624: mov    rax,QWORD PTR [rbx+0x130]
0x0027b62b: mov    rdx,QWORD PTR [rax+0x58]
0x0027b62f: add    rdx,0x38
0x0027b633: mov    rcx,QWORD PTR [r14+0x60]
0x0027b637: mov    ecx,DWORD PTR [rcx]
0x0027b639: call   0x1400b9e00
0x0027b63e: call   0x140104380
0x0027b643: mov    ecx,DWORD PTR [rbx+0xe0]
0x0027b649: mov    DWORD PTR [rax+0x28],ecx
0x0027b64c: mov    rcx,QWORD PTR [r14+0x60]
0x0027b650: mov    edx,DWORD PTR [rcx]
0x0027b652: mov    DWORD PTR [rax+0x2c],edx
0x0027b655: mov    ecx,DWORD PTR [rip+0x20f2fa9]        # 0x14236e604
0x0027b65b: mov    DWORD PTR [rax+0x8],ecx
0x0027b65e: mov    ecx,DWORD PTR [rip+0x2106880]        # 0x142381ee4
0x0027b664: mov    DWORD PTR [rax+0xc],ecx
0x0027b667: mov    rdx,QWORD PTR [rax]
0x0027b66a: mov    rcx,rax
0x0027b66d: call   QWORD PTR [rdx+0x128]
0x0027b673: mov    BYTE PTR [rsi],dil
0x0027b676: jmp    0x14027bb81
0x0027b67b: mov    ebx,DWORD PTR [rbp-0x1]
0x0027b67e: mov    ecx,DWORD PTR [rsi+0x4]
0x0027b681: test   ecx,ecx
0x0027b683: je     0x14027bc94
0x0027b689: cmp    ecx,0x1
0x0027b68c: jne    0x14027b175
0x0027b692: xor    al,al
0x0027b694: mov    BYTE PTR [rbp+0x77],al
0x0027b697: mov    BYTE PTR [rbp+0x7f],al
0x0027b69a: mov    BYTE PTR [rbp-0x29],al
0x0027b69d: mov    BYTE PTR [rbp-0x28],al
0x0027b6a0: lea    ecx,[rbx+0x2]
0x0027b6a3: lea    edx,[rbx+0x14]
0x0027b6a6: lea    r9d,[rbx+0x16]
0x0027b6aa: lea    r10d,[rbx+0x28]
0x0027b6ae: lea    r11d,[rbx+0x2a]
0x0027b6b2: add    ebx,0x3c
0x0027b6b5: mov    eax,DWORD PTR [rbp-0x1]
0x0027b6b8: lea    r12d,[rax+0x3e]
0x0027b6bc: lea    r13d,[rax+0x50]
0x0027b6c0: cmp    BYTE PTR [rip+0x210edfe],dil        # 0x14238a4c5
0x0027b6c7: mov    r8,QWORD PTR [rbp+0x5f]
0x0027b6cb: je     0x14027b77f
0x0027b6d1: cmp    BYTE PTR [rip+0x210ede4],dil        # 0x14238a4bc
0x0027b6d8: je     0x14027b77f
0x0027b6de: cmp    r15d,ecx
0x0027b6e1: jl     0x14027b6fc
0x0027b6e3: cmp    r15d,edx
0x0027b6e6: jg     0x14027b6fc
0x0027b6e8: lea    eax,[r14-0x1d]
0x0027b6ec: cmp    eax,0x2
0x0027b6ef: ja     0x14027b6fc
0x0027b6f1: mov    BYTE PTR [rip+0x210edc4],dil        # 0x14238a4bc
0x0027b6f8: mov    BYTE PTR [rbp+0x77],0x1
0x0027b6fc: cmp    r15d,r9d
0x0027b6ff: jl     0x14027b71a
0x0027b701: cmp    r15d,r10d
0x0027b704: jg     0x14027b71a
0x0027b706: lea    eax,[r14-0x1d]
0x0027b70a: cmp    eax,0x2
0x0027b70d: ja     0x14027b71a
0x0027b70f: mov    BYTE PTR [rip+0x210eda6],dil        # 0x14238a4bc
0x0027b716: mov    BYTE PTR [rbp+0x7f],0x1
0x0027b71a: cmp    r15d,r11d
0x0027b71d: jl     0x14027b738
0x0027b71f: cmp    r15d,ebx
0x0027b722: jg     0x14027b738
0x0027b724: lea    eax,[r14-0x1d]
0x0027b728: cmp    eax,0x2
0x0027b72b: ja     0x14027b738
0x0027b72d: mov    BYTE PTR [rip+0x210ed88],dil        # 0x14238a4bc
0x0027b734: mov    BYTE PTR [rbp-0x29],0x1
0x0027b738: cmp    r15d,r12d
0x0027b73b: jl     0x14027b756
0x0027b73d: cmp    r15d,r13d
0x0027b740: jg     0x14027b756
0x0027b742: lea    eax,[r14-0x1d]
0x0027b746: cmp    eax,0x2
0x0027b749: ja     0x14027b756
0x0027b74b: mov    BYTE PTR [rip+0x210ed6a],dil        # 0x14238a4bc
0x0027b752: mov    BYTE PTR [rbp-0x28],0x1
0x0027b756: cmp    r15d,ecx
0x0027b759: jl     0x14027b77f
0x0027b75b: cmp    r15d,edx
0x0027b75e: jg     0x14027b77f
0x0027b760: mov    ecx,DWORD PTR [rbp+0xf]
0x0027b763: lea    eax,[rcx-0x3]
0x0027b766: cmp    r14d,eax
0x0027b769: jl     0x14027b77f
0x0027b76b: lea    eax,[rcx-0x1]
0x0027b76e: cmp    r14d,eax
0x0027b771: jg     0x14027b77f
0x0027b773: mov    BYTE PTR [rip+0x210ed42],dil        # 0x14238a4bc
0x0027b77a: mov    r12b,0x1
0x0027b77d: jmp    0x14027b782
0x0027b77f: xor    r12b,r12b
0x0027b782: mov    rcx,QWORD PTR [r8]
0x0027b785: mov    rax,QWORD PTR [rcx+0x8]
0x0027b789: cmp    BYTE PTR [rax+0x19],dil
0x0027b78d: jne    0x14027b7ab
0x0027b78f: nop
0x0027b790: cmp    DWORD PTR [rax+0x1c],0x171
0x0027b797: jge    0x14027b79f
0x0027b799: mov    rax,QWORD PTR [rax+0x10]
0x0027b79d: jmp    0x14027b7a5
0x0027b79f: mov    rcx,rax
0x0027b7a2: mov    rax,QWORD PTR [rax]
0x0027b7a5: cmp    BYTE PTR [rax+0x19],dil
0x0027b7a9: je     0x14027b790
0x0027b7ab: cmp    BYTE PTR [rcx+0x19],dil
0x0027b7af: jne    0x14027b7cb
0x0027b7b1: cmp    DWORD PTR [rcx+0x1c],0x171
0x0027b7b8: jg     0x14027b7cb
0x0027b7ba: mov    rcx,r8
0x0027b7bd: call   0x1400e1100
0x0027b7c2: mov    r15b,0x1
0x0027b7c5: mov    r8,QWORD PTR [rbp+0x5f]
0x0027b7c9: jmp    0x14027b7d0
0x0027b7cb: movzx  r15d,BYTE PTR [rbp+0x77]
0x0027b7d0: mov    rcx,QWORD PTR [r8]
0x0027b7d3: mov    rax,QWORD PTR [rcx+0x8]
0x0027b7d7: cmp    BYTE PTR [rax+0x19],dil
0x0027b7db: jne    0x14027b7fb
0x0027b7dd: nop    DWORD PTR [rax]
0x0027b7e0: cmp    DWORD PTR [rax+0x1c],0x172
0x0027b7e7: jge    0x14027b7ef
0x0027b7e9: mov    rax,QWORD PTR [rax+0x10]
0x0027b7ed: jmp    0x14027b7f5
0x0027b7ef: mov    rcx,rax
0x0027b7f2: mov    rax,QWORD PTR [rax]
0x0027b7f5: cmp    BYTE PTR [rax+0x19],dil
0x0027b7f9: je     0x14027b7e0
0x0027b7fb: cmp    BYTE PTR [rcx+0x19],dil
0x0027b7ff: jne    0x14027b81b
0x0027b801: cmp    DWORD PTR [rcx+0x1c],0x172
0x0027b808: jg     0x14027b81b
0x0027b80a: mov    rcx,r8
0x0027b80d: call   0x1400e1100
0x0027b812: mov    r14b,0x1
0x0027b815: mov    r8,QWORD PTR [rbp+0x5f]
0x0027b819: jmp    0x14027b820
0x0027b81b: movzx  r14d,BYTE PTR [rbp+0x7f]
0x0027b820: mov    rcx,QWORD PTR [r8]
0x0027b823: mov    rax,QWORD PTR [rcx+0x8]
0x0027b827: cmp    BYTE PTR [rax+0x19],dil
0x0027b82b: jne    0x14027b84b
0x0027b82d: nop    DWORD PTR [rax]
0x0027b830: cmp    DWORD PTR [rax+0x1c],0x173
0x0027b837: jge    0x14027b83f
0x0027b839: mov    rax,QWORD PTR [rax+0x10]
0x0027b83d: jmp    0x14027b845
0x0027b83f: mov    rcx,rax
0x0027b842: mov    rax,QWORD PTR [rax]
0x0027b845: cmp    BYTE PTR [rax+0x19],dil
0x0027b849: je     0x14027b830
0x0027b84b: cmp    BYTE PTR [rcx+0x19],dil
0x0027b84f: jne    0x14027b86a
0x0027b851: cmp    DWORD PTR [rcx+0x1c],0x173
0x0027b858: jg     0x14027b86a
0x0027b85a: mov    rcx,r8
0x0027b85d: call   0x1400e1100
0x0027b862: mov    bl,0x1
0x0027b864: mov    r8,QWORD PTR [rbp+0x5f]
0x0027b868: jmp    0x14027b86e
0x0027b86a: movzx  ebx,BYTE PTR [rbp-0x29]
0x0027b86e: mov    rcx,QWORD PTR [r8]
0x0027b871: mov    rax,QWORD PTR [rcx+0x8]
0x0027b875: cmp    BYTE PTR [rax+0x19],dil
0x0027b879: jne    0x14027b89b
0x0027b87b: nop    DWORD PTR [rax+rax*1+0x0]
0x0027b880: cmp    DWORD PTR [rax+0x1c],0x174
0x0027b887: jge    0x14027b88f
0x0027b889: mov    rax,QWORD PTR [rax+0x10]
0x0027b88d: jmp    0x14027b895
0x0027b88f: mov    rcx,rax
0x0027b892: mov    rax,QWORD PTR [rax]
0x0027b895: cmp    BYTE PTR [rax+0x19],dil
0x0027b899: je     0x14027b880
0x0027b89b: cmp    BYTE PTR [rcx+0x19],dil
0x0027b89f: jne    0x14027b8ba
0x0027b8a1: cmp    DWORD PTR [rcx+0x1c],0x174
0x0027b8a8: jg     0x14027b8ba
0x0027b8aa: mov    rcx,r8
0x0027b8ad: call   0x1400e1100
0x0027b8b2: mov    dl,0x1
0x0027b8b4: mov    r8,QWORD PTR [rbp+0x5f]
0x0027b8b8: jmp    0x14027b8be
0x0027b8ba: movzx  edx,BYTE PTR [rbp-0x28]
0x0027b8be: mov    rcx,QWORD PTR [r8]
0x0027b8c1: mov    rax,QWORD PTR [rcx+0x8]
0x0027b8c5: cmp    BYTE PTR [rax+0x19],dil
0x0027b8c9: jne    0x14027b8e8
0x0027b8cb: nop    DWORD PTR [rax+rax*1+0x0]
0x0027b8d0: cmp    DWORD PTR [rax+0x1c],0x1
0x0027b8d4: jge    0x14027b8dc
0x0027b8d6: mov    rax,QWORD PTR [rax+0x10]
0x0027b8da: jmp    0x14027b8e2
0x0027b8dc: mov    rcx,rax
0x0027b8df: mov    rax,QWORD PTR [rax]
0x0027b8e2: cmp    BYTE PTR [rax+0x19],dil
0x0027b8e6: je     0x14027b8d0
0x0027b8e8: cmp    BYTE PTR [rcx+0x19],dil
0x0027b8ec: jne    0x14027b8fe
0x0027b8ee: cmp    DWORD PTR [rcx+0x1c],0x1
0x0027b8f2: jg     0x14027b8fe
0x0027b8f4: mov    rcx,r8
0x0027b8f7: call   0x1400e1100
0x0027b8fc: jmp    0x14027b907
0x0027b8fe: test   r12b,r12b
0x0027b901: je     0x14027bb9e
0x0027b907: mov    rdx,QWORD PTR [rip+0x21636f2]        # 0x1423df000
0x0027b90e: lea    r8,[rdx+0x1274]
0x0027b915: mov    edx,DWORD PTR [rdx+0xc30]
0x0027b91b: lea    rcx,[rip+0x2278286]        # 0x1424f3ba8
0x0027b922: call   0x140b500f0
0x0027b927: mov    rbx,rax
0x0027b92a: test   rax,rax
0x0027b92d: je     0x14027bb7e
0x0027b933: mov    rax,QWORD PTR [rax+0x130]
0x0027b93a: test   rax,rax
0x0027b93d: jne    0x14027b987
0x0027b93f: mov    ecx,0x68 ; inline_fragment="h"
0x0027b944: call   0x141534600
0x0027b949: mov    QWORD PTR [rbp+0x7],rax
0x0027b94d: mov    QWORD PTR [rax],rdi
0x0027b950: mov    QWORD PTR [rax+0x8],rdi
0x0027b954: mov    QWORD PTR [rax+0x10],rdi
0x0027b958: mov    QWORD PTR [rax+0x18],rdi
0x0027b95c: mov    QWORD PTR [rax+0x20],rdi
0x0027b960: mov    QWORD PTR [rax+0x28],rdi
0x0027b964: mov    QWORD PTR [rax+0x30],rdi
0x0027b968: mov    QWORD PTR [rax+0x38],rdi
0x0027b96c: mov    QWORD PTR [rax+0x40],rdi
0x0027b970: mov    QWORD PTR [rax+0x48],rdi
0x0027b974: mov    QWORD PTR [rax+0x50],rdi
0x0027b978: mov    QWORD PTR [rax+0x58],rdi
0x0027b97c: mov    QWORD PTR [rax+0x60],rdi
0x0027b980: mov    QWORD PTR [rbx+0x130],rax
0x0027b987: cmp    QWORD PTR [rax+0x58],rdi
0x0027b98b: jne    0x14027b9da
0x0027b98d: mov    ecx,0x60 ; inline_fragment="`"
0x0027b992: call   0x141534600
0x0027b997: mov    rcx,rax
0x0027b99a: mov    QWORD PTR [rbp+0x7],rax
0x0027b99e: mov    QWORD PTR [rax],rdi
0x0027b9a1: mov    QWORD PTR [rax+0x8],rdi
0x0027b9a5: mov    QWORD PTR [rax+0x10],rdi
0x0027b9a9: mov    QWORD PTR [rax+0x18],rdi
0x0027b9ad: mov    QWORD PTR [rax+0x20],rdi
0x0027b9b1: mov    QWORD PTR [rax+0x28],rdi
0x0027b9b5: mov    QWORD PTR [rax+0x38],rdi
0x0027b9b9: mov    QWORD PTR [rax+0x40],rdi
0x0027b9bd: mov    QWORD PTR [rax+0x48],rdi
0x0027b9c1: mov    DWORD PTR [rax+0x30],0xffffffff
0x0027b9c8: mov    DWORD PTR [rax+0x50],edi
0x0027b9cb: mov    QWORD PTR [rax+0x58],rdi
0x0027b9cf: mov    rax,QWORD PTR [rbx+0x130]
0x0027b9d6: mov    QWORD PTR [rax+0x58],rcx
0x0027b9da: mov    ecx,0xe8
0x0027b9df: call   0x141534600
0x0027b9e4: mov    QWORD PTR [rbp+0x7],rax
0x0027b9e8: xor    edx,edx
0x0027b9ea: mov    rcx,rax
0x0027b9ed: call   0x140c36d10
0x0027b9f2: mov    rdi,rax
0x0027b9f5: mov    ecx,DWORD PTR [rbx+0xe0]
0x0027b9fb: mov    DWORD PTR [rax+0x8c],ecx
0x0027ba01: movsx  ecx,WORD PTR [rbx+0x2]
0x0027ba05: mov    DWORD PTR [rax+0x80],ecx
0x0027ba0b: movzx  ecx,WORD PTR [rbx+0x4]
0x0027ba0f: mov    WORD PTR [rax+0x84],cx
0x0027ba16: mov    r9d,DWORD PTR [rip+0x20f2be7]        # 0x14236e604
0x0027ba1d: mov    edx,DWORD PTR [rip+0x21064c1]        # 0x142381ee4
0x0027ba23: mov    r8d,DWORD PTR [rbx+0x18]
0x0027ba27: cmp    r8d,0xffffffff
0x0027ba2b: je     0x14027ba30
0x0027ba2d: mov    edx,DWORD PTR [rbx+0x1c]
0x0027ba30: cmove  r8d,r9d
0x0027ba34: mov    ecx,DWORD PTR [rbx+0x14]
0x0027ba37: cmp    ecx,0xffffffff
0x0027ba3a: je     0x14027ba78
0x0027ba3c: cmp    edx,0xffffffff
0x0027ba3f: je     0x14027ba78
0x0027ba41: cmp    DWORD PTR [rip+0x161a820],0x1        # 0x141896268
0x0027ba48: ja     0x14027ba78
0x0027ba4a: sub    r8d,DWORD PTR [rbx+0x20]
0x0027ba4e: sub    r8d,DWORD PTR [rbx+0x10]
0x0027ba52: mov    eax,DWORD PTR [rbx+0x24]
0x0027ba55: add    eax,ecx
0x0027ba57: sub    edx,eax
0x0027ba59: jns    0x14027ba80
0x0027ba5b: mov    ecx,0x62700
0x0027ba60: sub    ecx,edx
0x0027ba62: mov    eax,0xd663cca3
0x0027ba67: imul   ecx
0x0027ba69: sar    edx,0x10
0x0027ba6c: mov    eax,edx
0x0027ba6e: shr    eax,0x1f
0x0027ba71: add    edx,eax
0x0027ba73: add    r8d,edx
0x0027ba76: jmp    0x14027ba80
0x0027ba78: sub    r8d,DWORD PTR [rbx+0x20]
0x0027ba7c: sub    r8d,DWORD PTR [rbx+0x10]
0x0027ba80: sub    r9d,r8d
0x0027ba83: mov    DWORD PTR [rdi+0x94],r9d
0x0027ba8a: call   0x140eb1820
0x0027ba8f: mov    r8d,eax
0x0027ba92: mov    eax,0x3
0x0027ba97: mul    r8d
0x0027ba9a: mov    ecx,r8d
0x0027ba9d: sub    ecx,edx
0x0027ba9f: shr    ecx,1
0x0027baa1: add    ecx,edx
0x0027baa3: shr    ecx,0x1e
0x0027baa6: imul   ecx,ecx,0x7fffffff
0x0027baac: sub    r8d,ecx
0x0027baaf: mov    eax,0xc4d77ce7
0x0027bab4: mul    r8d
0x0027bab7: shr    edx,0xc
0x0027baba: mov    DWORD PTR [rdi+0x98],edx
0x0027bac0: lea    rdx,[rsi+0x8]
0x0027bac4: lea    rcx,[rdi+0x8]
0x0027bac8: call   0x14014d6f0
0x0027bacd: mov    eax,DWORD PTR [rsi+0x88]
0x0027bad3: mov    DWORD PTR [rdi+0xb0],eax
0x0027bad9: movzx  eax,WORD PTR [rsi+0x84]
0x0027bae0: mov    WORD PTR [rdi+0xac],ax
0x0027bae7: mov    edx,DWORD PTR [rsi+0x80]
0x0027baed: mov    DWORD PTR [rdi+0xa0],edx
0x0027baf3: mov    DWORD PTR [rdi+0x90],0xffffffff
0x0027bafd: cmp    edx,0xffffffff
0x0027bb00: je     0x14027bb27
0x0027bb02: mov    ecx,0x83
0x0027bb07: cmp    ax,cx
0x0027bb0a: jne    0x14027bb27
0x0027bb0c: mov    r8d,DWORD PTR [rbx+0xe0]
0x0027bb13: lea    rcx,[rip+0x214f8c6]        # 0x1423cb3e0
0x0027bb1a: call   0x14014c480
0x0027bb1f: mov    ecx,DWORD PTR [rax]
0x0027bb21: mov    DWORD PTR [rdi+0x9c],ecx
0x0027bb27: mov    rax,QWORD PTR [rbx+0x130]
0x0027bb2e: mov    rcx,QWORD PTR [rax+0x58]
0x0027bb32: mov    eax,DWORD PTR [rdi]
0x0027bb34: mov    DWORD PTR [rcx+0x30],eax
0x0027bb37: mov    rax,QWORD PTR [rbx+0x130]
0x0027bb3e: mov    rdx,QWORD PTR [rax+0x58]
0x0027bb42: add    rdx,0x38
0x0027bb46: mov    ecx,DWORD PTR [rdi]
0x0027bb48: call   0x1400b9e00
0x0027bb4d: call   0x140104380
0x0027bb52: mov    ecx,DWORD PTR [rbx+0xe0]
0x0027bb58: mov    DWORD PTR [rax+0x28],ecx
0x0027bb5b: mov    ecx,DWORD PTR [rdi]
0x0027bb5d: mov    DWORD PTR [rax+0x2c],ecx
0x0027bb60: mov    ecx,DWORD PTR [rip+0x20f2a9e]        # 0x14236e604
0x0027bb66: mov    DWORD PTR [rax+0x8],ecx
0x0027bb69: mov    ecx,DWORD PTR [rip+0x2106375]        # 0x142381ee4
0x0027bb6f: mov    DWORD PTR [rax+0xc],ecx
0x0027bb72: mov    rdx,QWORD PTR [rax]
0x0027bb75: mov    rcx,rax
0x0027bb78: call   QWORD PTR [rdx+0x128]
0x0027bb7e: mov    BYTE PTR [rsi],0x0
0x0027bb81: cmp    WORD PTR [rip+0x23c8e5f],0x2        # 0x1426449e8
0x0027bb89: jge    0x14027bb97
0x0027bb8b: mov    eax,0x2
0x0027bb90: mov    WORD PTR [rip+0x23c8e51],ax        # 0x1426449e8
0x0027bb97: mov    al,0x1
0x0027bb99: jmp    0x14027b180
0x0027bb9e: test   r15b,r15b
0x0027bba1: je     0x14027bc47
0x0027bba7: mov    rcx,r8
0x0027bbaa: call   0x1400e1100
0x0027bbaf: mov    BYTE PTR [rip+0x210e906],dil        # 0x14238a4bc
0x0027bbb6: mov    ecx,DWORD PTR [rsi+0x88]
0x0027bbbc: mov    rax,QWORD PTR [rip+0x214fb2d]        # 0x1423cb6f0
0x0027bbc3: sub    rax,QWORD PTR [rip+0x214fb1e]        # 0x1423cb6e8
0x0027bbca: test   rax,0xfffffffffffffff8
0x0027bbd0: je     0x14027bbff
0x0027bbd2: cmp    ecx,0xffffffff
0x0027bbd5: je     0x14027bbff
0x0027bbd7: lea    rdx,[rip+0x214fb0a]        # 0x1423cb6e8
0x0027bbde: call   0x1400ba030
0x0027bbe3: mov    rdi,rax
0x0027bbe6: add    rsi,0x8
0x0027bbea: test   rax,rax
0x0027bbed: je     0x14027bc03
0x0027bbef: xor    r8d,r8d
0x0027bbf2: mov    rdx,rsi
0x0027bbf5: mov    rcx,rax
0x0027bbf8: call   0x14092f090
0x0027bbfd: jmp    0x14027bc26
0x0027bbff: add    rsi,0x8
0x0027bc03: xor    r8d,r8d
0x0027bc06: lea    rax,[rip+0x227071b]        # 0x1424ec328
0x0027bc0d: mov    QWORD PTR [rsp+0x20],rax
0x0027bc12: lea    r9,[rip+0x226ba8f]        # 0x1424e76a8
0x0027bc19: mov    edx,0xffffffff
0x0027bc1e: mov    rcx,rsi
0x0027bc21: call   0x140a8f8e0
0x0027bc26: mov    QWORD PTR [rsp+0x20],rdi
0x0027bc2b: xor    r9d,r9d
0x0027bc2e: mov    r8,rsi
0x0027bc31: mov    edx,0xc
0x0027bc36: lea    rcx,[rip+0x162108b]        # 0x14189ccc8
0x0027bc3d: call   0x1401fc0e0
0x0027bc42: jmp    0x14027b17e
0x0027bc47: test   r14b,r14b
0x0027bc4a: je     0x14027bc60
0x0027bc4c: mov    DWORD PTR [rsi+0x4],0x4
0x0027bc53: mov    rcx,rsi
0x0027bc56: call   0x14027ec60
0x0027bc5b: jmp    0x14027b17e
0x0027bc60: test   bl,bl
0x0027bc62: je     0x14027bc78
0x0027bc64: mov    DWORD PTR [rsi+0x4],0x2
0x0027bc6b: mov    rcx,rsi
0x0027bc6e: call   0x14027ec60
0x0027bc73: jmp    0x14027b17e
0x0027bc78: test   dl,dl
0x0027bc7a: je     0x14027b175
0x0027bc80: mov    DWORD PTR [rsi+0x4],0x3
0x0027bc87: mov    rcx,rsi
0x0027bc8a: call   0x14027ec60
0x0027bc8f: jmp    0x14027b17e
0x0027bc94: xor    r12b,r12b
0x0027bc97: xor    bl,bl
0x0027bc99: mov    eax,DWORD PTR [rbp-0x1]
0x0027bc9c: lea    r9d,[rax+0x2]
0x0027bca0: lea    ecx,[rax+0x14]
0x0027bca3: mov    r11d,DWORD PTR [rbp+0xf]
0x0027bca7: lea    eax,[r11-0x3]
0x0027bcab: lea    r10d,[r11-0x1]
0x0027bcaf: lea    edx,[rcx+0x4]
0x0027bcb2: lea    r13d,[rdx+0x12]
0x0027bcb6: dec    r11d
0x0027bcb9: cmp    BYTE PTR [rip+0x210e806],bl        # 0x14238a4c5
0x0027bcbf: je     0x14027bd02
0x0027bcc1: cmp    BYTE PTR [rip+0x210e7f5],bl        # 0x14238a4bc
0x0027bcc7: je     0x14027bd02
0x0027bcc9: cmp    r15d,r9d
0x0027bccc: jl     0x14027bce6
0x0027bcce: cmp    r15d,ecx
0x0027bcd1: jg     0x14027bce6
0x0027bcd3: cmp    r14d,eax
0x0027bcd6: jl     0x14027bce6
0x0027bcd8: cmp    r14d,r10d
0x0027bcdb: jg     0x14027bce6
0x0027bcdd: mov    BYTE PTR [rip+0x210e7d9],bl        # 0x14238a4bc
0x0027bce3: mov    r12b,0x1
0x0027bce6: cmp    r15d,edx
0x0027bce9: jl     0x14027bd02
0x0027bceb: cmp    r15d,r13d
0x0027bcee: jg     0x14027bd02
0x0027bcf0: cmp    r14d,eax
0x0027bcf3: jl     0x14027bd02
0x0027bcf5: cmp    r14d,r11d
0x0027bcf8: jg     0x14027bd02
0x0027bcfa: mov    BYTE PTR [rip+0x210e7bc],bl        # 0x14238a4bc
0x0027bd00: mov    bl,0x1
0x0027bd02: mov    rcx,QWORD PTR [r8]
0x0027bd05: mov    rax,QWORD PTR [rcx+0x8]
0x0027bd09: cmp    BYTE PTR [rax+0x19],dil
0x0027bd0d: jne    0x14027bd2b
0x0027bd0f: nop
0x0027bd10: cmp    DWORD PTR [rax+0x1c],0x16f
0x0027bd17: jge    0x14027bd1f
0x0027bd19: mov    rax,QWORD PTR [rax+0x10]
0x0027bd1d: jmp    0x14027bd25
0x0027bd1f: mov    rcx,rax
0x0027bd22: mov    rax,QWORD PTR [rax]
0x0027bd25: cmp    BYTE PTR [rax+0x19],dil
0x0027bd29: je     0x14027bd10
0x0027bd2b: cmp    BYTE PTR [rcx+0x19],dil
0x0027bd2f: jne    0x14027bd49
0x0027bd31: cmp    DWORD PTR [rcx+0x1c],0x16f
0x0027bd38: jg     0x14027bd49
0x0027bd3a: mov    rcx,r8
0x0027bd3d: call   0x1400e1100
0x0027bd42: mov    r12b,0x1
0x0027bd45: mov    r8,QWORD PTR [rbp+0x5f]
0x0027bd49: mov    rcx,QWORD PTR [r8]
0x0027bd4c: mov    rax,QWORD PTR [rcx+0x8]
0x0027bd50: cmp    BYTE PTR [rax+0x19],dil
0x0027bd54: jne    0x14027bd71
0x0027bd56: cmp    DWORD PTR [rax+0x1c],0x170
0x0027bd5d: jge    0x14027bd65
0x0027bd5f: mov    rax,QWORD PTR [rax+0x10]
0x0027bd63: jmp    0x14027bd6b
0x0027bd65: mov    rcx,rax
0x0027bd68: mov    rax,QWORD PTR [rax]
0x0027bd6b: cmp    BYTE PTR [rax+0x19],dil
0x0027bd6f: je     0x14027bd56
0x0027bd71: cmp    BYTE PTR [rcx+0x19],dil
0x0027bd75: jne    0x14027bd8e
0x0027bd77: cmp    DWORD PTR [rcx+0x1c],0x170
0x0027bd7e: jg     0x14027bd8e
0x0027bd80: mov    rcx,r8
0x0027bd83: call   0x1400e1100
0x0027bd88: mov    bl,0x1
0x0027bd8a: mov    r8,QWORD PTR [rbp+0x5f]
0x0027bd8e: test   r12b,r12b
0x0027bd91: je     0x14027bdb6
0x0027bd93: mov    rcx,r8
0x0027bd96: call   0x1400e1100
0x0027bd9b: mov    BYTE PTR [rip+0x210e71a],dil        # 0x14238a4bc
0x0027bda2: mov    DWORD PTR [rsi+0x4],0x1
0x0027bda9: mov    rcx,rsi
0x0027bdac: call   0x14027ec60
0x0027bdb1: jmp    0x14027b17e
0x0027bdb6: test   bl,bl
0x0027bdb8: je     0x14027b175
0x0027bdbe: mov    rcx,r8
0x0027bdc1: call   0x1400e1100
0x0027bdc6: mov    BYTE PTR [rip+0x210e6ef],dil        # 0x14238a4bc
0x0027bdcd: mov    rdx,QWORD PTR [rip+0x216322c]        # 0x1423df000
0x0027bdd4: lea    r8,[rdx+0x1274]
0x0027bddb: mov    edx,DWORD PTR [rdx+0xc30]
0x0027bde1: lea    rcx,[rip+0x2277dc0]        # 0x1424f3ba8
0x0027bde8: call   0x140b500f0
0x0027bded: mov    rbx,rax
0x0027bdf0: test   rax,rax
0x0027bdf3: je     0x14027beb2
0x0027bdf9: mov    rax,QWORD PTR [rax+0x130]
0x0027be00: test   rax,rax
0x0027be03: jne    0x14027be4d
0x0027be05: mov    ecx,0x68 ; inline_fragment="h"
0x0027be0a: call   0x141534600
0x0027be0f: mov    QWORD PTR [rbp+0x7],rax
0x0027be13: mov    QWORD PTR [rax],rdi
0x0027be16: mov    QWORD PTR [rax+0x8],rdi
0x0027be1a: mov    QWORD PTR [rax+0x10],rdi
0x0027be1e: mov    QWORD PTR [rax+0x18],rdi
0x0027be22: mov    QWORD PTR [rax+0x20],rdi
0x0027be26: mov    QWORD PTR [rax+0x28],rdi
0x0027be2a: mov    QWORD PTR [rax+0x30],rdi
0x0027be2e: mov    QWORD PTR [rax+0x38],rdi
0x0027be32: mov    QWORD PTR [rax+0x40],rdi
0x0027be36: mov    QWORD PTR [rax+0x48],rdi
0x0027be3a: mov    QWORD PTR [rax+0x50],rdi
0x0027be3e: mov    QWORD PTR [rax+0x58],rdi
0x0027be42: mov    QWORD PTR [rax+0x60],rdi
0x0027be46: mov    QWORD PTR [rbx+0x130],rax
0x0027be4d: cmp    QWORD PTR [rax+0x58],rdi
0x0027be51: jne    0x14027bea0
0x0027be53: mov    ecx,0x60 ; inline_fragment="`"
0x0027be58: call   0x141534600
0x0027be5d: mov    rcx,rax
0x0027be60: mov    QWORD PTR [rbp+0x7],rax
0x0027be64: mov    QWORD PTR [rax],rdi
0x0027be67: mov    QWORD PTR [rax+0x8],rdi
0x0027be6b: mov    QWORD PTR [rax+0x10],rdi
0x0027be6f: mov    QWORD PTR [rax+0x18],rdi
0x0027be73: mov    QWORD PTR [rax+0x20],rdi
0x0027be77: mov    QWORD PTR [rax+0x28],rdi
0x0027be7b: mov    QWORD PTR [rax+0x38],rdi
0x0027be7f: mov    QWORD PTR [rax+0x40],rdi
0x0027be83: mov    QWORD PTR [rax+0x48],rdi
0x0027be87: mov    DWORD PTR [rax+0x30],0xffffffff
0x0027be8e: mov    DWORD PTR [rax+0x50],edi
0x0027be91: mov    QWORD PTR [rax+0x58],rdi
0x0027be95: mov    rax,QWORD PTR [rbx+0x130]
0x0027be9c: mov    QWORD PTR [rax+0x58],rcx
0x0027bea0: mov    rax,QWORD PTR [rbx+0x130]
0x0027bea7: mov    rcx,QWORD PTR [rax+0x58]
0x0027beab: mov    DWORD PTR [rcx+0x30],0xffffffff
0x0027beb2: mov    BYTE PTR [rsi],dil
0x0027beb5: jmp    0x14027b17e
