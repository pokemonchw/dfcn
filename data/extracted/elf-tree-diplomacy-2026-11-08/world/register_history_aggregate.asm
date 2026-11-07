1409946b0: test   r8,r8
1409946b3: je     0x140994b5c
1409946b9: mov    QWORD PTR [rsp+0x10],rdx
1409946be: push   r12
1409946c0: push   r13
1409946c2: push   r14
1409946c4: sub    rsp,0x30
1409946c8: mov    rax,QWORD PTR [r8+0x18]
1409946cc: mov    r12,r8
1409946cf: sub    rax,QWORD PTR [r8+0x10]
1409946d3: mov    r14,rdx
1409946d6: mov    QWORD PTR [rsp+0x68],rsi
1409946db: mov    r13,rcx
1409946de: sar    rax,0x2
1409946e2: sub    eax,0x1
1409946e5: mov    QWORD PTR [rsp+0x50],rbx
1409946ea: movsxd rsi,eax
1409946ed: mov    QWORD PTR [rsp+0x28],rdi
1409946f2: js     0x1409947b9
1409946f8: nop    DWORD PTR [rax+rax*1+0x0]
140994700: mov    rdx,QWORD PTR [r12+0x10]
140994705: lea    rcx,[rip+0x1b655ac]        # 0x1424f9cb8
14099470c: mov    edx,DWORD PTR [rdx+rsi*4]
14099470f: call   0x14007da30
140994714: mov    rdi,rax
140994717: test   rax,rax
14099471a: je     0x1409947af
140994720: mov    rcx,QWORD PTR [rax]
140994723: mov    r8d,DWORD PTR [r12]
140994727: mov    edx,DWORD PTR [r13+0x4]
14099472b: mov    ebx,DWORD PTR [rip+0x19dffc3]        # 0x1423746f4
140994731: mov    r9,QWORD PTR [rcx+0x8]
140994735: mov    rcx,rax
140994738: call   r9
14099473b: test   eax,eax
14099473d: je     0x1409947af
14099473f: sub    ebx,DWORD PTR [rdi+0x8]
140994742: cmp    ebx,0x9
140994745: jne    0x14099474c
140994747: sar    eax,0x3
14099474a: jmp    0x140994797
14099474c: cmp    ebx,0x8
14099474f: jne    0x140994756
140994751: sar    eax,0x2
140994754: jmp    0x140994797
140994756: cmp    ebx,0x7
140994759: jne    0x140994763
14099475b: lea    eax,[rax+rax*2]
14099475e: sar    eax,0x3
140994761: jmp    0x140994797
140994763: cmp    ebx,0x6
140994766: jne    0x14099476c
140994768: sar    eax,1
14099476a: jmp    0x140994797
14099476c: cmp    ebx,0x5
14099476f: jne    0x140994779
140994771: lea    eax,[rax+rax*4]
140994774: sar    eax,0x3
140994777: jmp    0x140994797
140994779: cmp    ebx,0x4
14099477c: jne    0x140994786
14099477e: lea    eax,[rax+rax*2]
140994781: sar    eax,0x2
140994784: jmp    0x140994797
140994786: cmp    ebx,0x3
140994789: jne    0x140994793
14099478b: imul   eax,eax,0x7
14099478e: sar    eax,0x3
140994791: jmp    0x140994797
140994793: test   ebx,ebx
140994795: jg     0x1409947af
140994797: test   eax,eax
140994799: je     0x1409947af
14099479b: mov    r8d,DWORD PTR [rdi+0x20]
14099479f: mov    edx,0x5
1409947a4: mov    r9d,eax
1409947a7: mov    rcx,r14
1409947aa: call   0x1407dd040
1409947af: sub    rsi,0x1
1409947b3: jns    0x140994700
1409947b9: mov    rax,QWORD PTR [r12+0x30]
1409947be: sub    rax,QWORD PTR [r12+0x28]
1409947c3: sar    rax,0x2
1409947c7: sub    eax,0x1
1409947ca: movsxd rsi,eax
1409947cd: js     0x1409948a0
1409947d3: nop    DWORD PTR [rax+0x0]
1409947d7: nop    WORD PTR [rax+rax*1+0x0]
1409947e0: mov    rcx,QWORD PTR [r12+0x28]
1409947e5: lea    rdx,[rip+0x1b65544]        # 0x1424f9d30
1409947ec: mov    ecx,DWORD PTR [rcx+rsi*4]
1409947ef: call   0x14013cc50
1409947f4: mov    rdi,rax
1409947f7: test   rax,rax
1409947fa: je     0x140994896
140994800: mov    rcx,QWORD PTR [rax]
140994803: mov    r8d,DWORD PTR [r12]
140994807: mov    edx,DWORD PTR [r13+0x4]
14099480b: mov    ebx,DWORD PTR [rip+0x19dfee3]        # 0x1423746f4
140994811: mov    r9,QWORD PTR [rcx+0x50]
140994815: mov    rcx,rax
140994818: call   r9
14099481b: test   eax,eax
14099481d: je     0x140994896
14099481f: mov    ecx,DWORD PTR [rdi+0x3c]
140994822: cmp    ecx,0xffffffff
140994825: je     0x140994882
140994827: sub    ebx,ecx
140994829: cmp    ebx,0x9
14099482c: jne    0x140994833
14099482e: sar    eax,0x3
140994831: jmp    0x14099487e
140994833: cmp    ebx,0x8
140994836: jne    0x14099483d
140994838: sar    eax,0x2
14099483b: jmp    0x14099487e
14099483d: cmp    ebx,0x7
140994840: jne    0x14099484a
140994842: lea    eax,[rax+rax*2]
140994845: sar    eax,0x3
140994848: jmp    0x14099487e
14099484a: cmp    ebx,0x6
14099484d: jne    0x140994853
14099484f: sar    eax,1
140994851: jmp    0x14099487e
140994853: cmp    ebx,0x5
140994856: jne    0x140994860
140994858: lea    eax,[rax+rax*4]
14099485b: sar    eax,0x3
14099485e: jmp    0x14099487e
140994860: cmp    ebx,0x4
140994863: jne    0x14099486d
140994865: lea    eax,[rax+rax*2]
140994868: sar    eax,0x2
14099486b: jmp    0x14099487e
14099486d: cmp    ebx,0x3
140994870: jne    0x14099487a
140994872: imul   eax,eax,0x7
140994875: sar    eax,0x3
140994878: jmp    0x14099487e
14099487a: test   ebx,ebx
14099487c: jg     0x140994896
14099487e: test   eax,eax
140994880: je     0x140994896
140994882: mov    r8d,DWORD PTR [rdi+0x58]
140994886: mov    edx,0x6
14099488b: mov    r9d,eax
14099488e: mov    rcx,r14
140994891: call   0x1407dd040
140994896: sub    rsi,0x1
14099489a: jns    0x1409947e0
1409948a0: mov    rax,QWORD PTR [rip+0x1a3cf59]        # 0x1423d1800
1409948a7: sub    rax,QWORD PTR [rip+0x1a3cf4a]        # 0x1423d17f8
1409948ae: test   rax,0xfffffffffffffff8
1409948b4: je     0x140994b43
1409948ba: mov    ecx,DWORD PTR [r12]
1409948be: cmp    ecx,0xffffffff
1409948c1: je     0x140994b43
1409948c7: lea    rdx,[rip+0x1a3cf2a]        # 0x1423d17f8
1409948ce: mov    QWORD PTR [rsp+0x60],rbp
1409948d3: call   0x1400ba0a0
1409948d8: mov    rbp,rax
1409948db: test   rax,rax
1409948de: je     0x140994b3e
1409948e4: mov    rbx,QWORD PTR [r13+0x1318]
1409948eb: mov    rdi,QWORD PTR [r13+0x1320]
1409948f2: mov    QWORD PTR [rsp+0x20],r15
1409948f7: mov    r15,QWORD PTR [rip+0x1a51882]        # 0x1423e6180
1409948fe: xchg   ax,ax
140994900: cmp    rbx,rdi
140994903: jae    0x140994b39
140994909: mov    r10,QWORD PTR [rbx]
14099490c: cmp    DWORD PTR [r10+0x14],0xffffffff
140994911: jne    0x1409949ef
140994917: mov    r9,QWORD PTR [rip+0x1a5186a]        # 0x1423e6188
14099491e: mov    r10d,DWORD PTR [r10]
140994921: sub    r9,r15
140994924: sar    r9,0x3
140994928: test   r9d,r9d
14099492b: je     0x1409949ef
140994931: cmp    r10d,0xffffffff
140994935: je     0x1409949ef
14099493b: xor    edx,edx
14099493d: sub    r9d,0x1
140994941: js     0x140994976
140994943: nop    DWORD PTR [rax+0x0]
140994947: nop    WORD PTR [rax+rax*1+0x0]
140994950: lea    ecx,[rdx+r9*1]
140994954: sar    ecx,1
140994956: movsxd rsi,ecx
140994959: mov    rsi,QWORD PTR [r15+rsi*8]
14099495d: cmp    DWORD PTR [rsi],r10d
140994960: je     0x140994978
140994962: lea    eax,[rcx+0x1]
140994965: cmovle edx,eax
140994968: lea    eax,[rcx-0x1]
14099496b: cmovle eax,r9d
14099496f: mov    r9d,eax
140994972: cmp    edx,eax
140994974: jle    0x140994950
140994976: xor    esi,esi
140994978: test   rsi,rsi
14099497b: je     0x1409949ef
14099497d: mov    rax,QWORD PTR [rsi+0x90]
140994984: test   BYTE PTR [rax+0x14],0x10
140994988: jne    0x1409949ef
14099498a: mov    r11d,DWORD PTR [rsi+0xbc]
140994991: cmp    r11d,0xffffffff
140994995: je     0x140994a6a
14099499b: mov    r10,QWORD PTR [rip+0x1b6537e]        # 0x1424f9d20
1409949a2: mov    r14,QWORD PTR [rip+0x1b6536f]        # 0x1424f9d18
1409949a9: sub    r10,r14
1409949ac: sar    r10,0x3
1409949b0: test   r10,r10
1409949b3: je     0x1409949ea
1409949b5: xor    edx,edx
1409949b7: sub    r10d,0x1
1409949bb: js     0x1409949ea
1409949bd: nop    DWORD PTR [rax]
1409949c0: lea    ecx,[rdx+r10*1]
1409949c4: sar    ecx,1
1409949c6: movsxd rax,ecx
1409949c9: mov    r8,QWORD PTR [r14+rax*8]
1409949cd: cmp    DWORD PTR [r8+0xe0],r11d
1409949d4: je     0x1409949f8
1409949d6: lea    eax,[rcx+0x1]
1409949d9: cmovle edx,eax
1409949dc: lea    eax,[rcx-0x1]
1409949df: cmovle eax,r10d
1409949e3: mov    r10d,eax
1409949e6: cmp    edx,eax
1409949e8: jle    0x1409949c0
1409949ea: mov    r14,QWORD PTR [rsp+0x58]
1409949ef: add    rbx,0x8
1409949f3: jmp    0x140994900
1409949f8: test   r8,r8
1409949fb: je     0x1409949ea
1409949fd: mov    r9d,DWORD PTR [r8+0xb0]
140994a04: cmp    r9d,DWORD PTR [r13+0x4]
140994a08: je     0x1409949ea
140994a0a: cmp    r9d,DWORD PTR [rbp+0x4]
140994a0e: je     0x140994a3f
140994a10: cmp    WORD PTR [rbp+0x0],0x0
140994a15: jne    0x1409949ea
140994a17: mov    rax,QWORD PTR [rbp+0xb8]
140994a1e: mov    rcx,QWORD PTR [rbp+0xc0]
140994a25: cmp    rax,rcx
140994a28: jae    0x1409949ea
140994a2a: mov    rdx,QWORD PTR [rax]
140994a2d: cmp    WORD PTR [rdx],0x1
140994a31: jne    0x140994a39
140994a33: cmp    DWORD PTR [rdx+0x4],r9d
140994a37: je     0x140994a3f
140994a39: add    rax,0x8
140994a3d: jmp    0x140994a25
140994a3f: mov    r14,QWORD PTR [rsp+0x58]
140994a44: mov    edx,0xa
140994a49: mov    r8d,DWORD PTR [rsi]
140994a4c: mov    rcx,r14
140994a4f: mov    r9d,0xffffffec
140994a55: call   0x1407dd040
140994a5a: mov    r15,QWORD PTR [rip+0x1a5171f]        # 0x1423e6180
140994a61: add    rbx,0x8
140994a65: jmp    0x140994900
140994a6a: mov    edx,DWORD PTR [rsi+0xa8]
140994a70: cmp    edx,0xffffffff
140994a73: je     0x1409949ef
140994a79: mov    rcx,QWORD PTR [rip+0x1b570d8]        # 0x1424ebb58
140994a80: call   0x14007db20
140994a85: test   rax,rax
140994a88: je     0x1409949ef
140994a8e: mov    rcx,QWORD PTR [rax+0x428]
140994a95: mov    rax,QWORD PTR [rax+0x430]
140994a9c: nop    DWORD PTR [rax+0x0]
140994aa0: cmp    rcx,rax
140994aa3: jae    0x140994ac6
140994aa5: mov    rdx,QWORD PTR [rcx]
140994aa8: test   BYTE PTR [rdx+0x1c],0x1
140994aac: je     0x140994aba
140994aae: cmp    DWORD PTR [rdx+0x10],0x0
140994ab2: jne    0x140994aba
140994ab4: cmp    DWORD PTR [rdx+0x14],0xffffffff
140994ab8: je     0x140994ac0
140994aba: add    rcx,0x8
140994abe: jmp    0x140994aa0
140994ac0: mov    r8d,DWORD PTR [rdx+0x4]
140994ac4: jmp    0x140994acc
140994ac6: mov    r8d,0xffffffff
140994acc: cmp    r8d,DWORD PTR [r13+0x4]
140994ad0: je     0x1409949ef
140994ad6: cmp    r8d,DWORD PTR [r12]
140994ada: je     0x140994b13
140994adc: cmp    WORD PTR [rbp+0x0],0x0
140994ae1: jne    0x1409949ef
140994ae7: mov    rax,QWORD PTR [rbp+0xb8]
140994aee: mov    rcx,QWORD PTR [rbp+0xc0]
140994af5: cmp    rax,rcx
140994af8: jae    0x1409949ef
140994afe: mov    rdx,QWORD PTR [rax]
140994b01: cmp    WORD PTR [rdx],0x1
140994b05: jne    0x140994b0d
140994b07: cmp    DWORD PTR [rdx+0x4],r8d
140994b0b: je     0x140994b13
140994b0d: add    rax,0x8
140994b11: jmp    0x140994af5
140994b13: mov    r8d,DWORD PTR [rsi]
140994b16: mov    edx,0xa
140994b1b: mov    r9d,0xffffffec
140994b21: mov    rcx,r14
140994b24: call   0x1407dd040
140994b29: mov    r15,QWORD PTR [rip+0x1a51650]        # 0x1423e6180
140994b30: add    rbx,0x8
140994b34: jmp    0x140994900
140994b39: mov    r15,QWORD PTR [rsp+0x20]
140994b3e: mov    rbp,QWORD PTR [rsp+0x60]
140994b43: mov    rbx,QWORD PTR [rsp+0x50]
140994b48: mov    rdi,QWORD PTR [rsp+0x28]
140994b4d: mov    rsi,QWORD PTR [rsp+0x68]
140994b52: add    rsp,0x30
140994b56: pop    r14
140994b58: pop    r13
140994b5a: pop    r12
140994b5c: ret