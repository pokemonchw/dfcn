; reference PE:6a70a6d9:02711000 D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe
; appearance code 0x140717d30..0x14071a25c; unwind end 0x14071a2b4
0x140717d30: mov    QWORD PTR [rsp+0x10],rbx
0x140717d35: mov    QWORD PTR [rsp+0x18],rsi
0x140717d3a: mov    QWORD PTR [rsp+0x20],rdi
0x140717d3f: push   rbp
0x140717d40: push   r12
0x140717d42: push   r13
0x140717d44: push   r14
0x140717d46: push   r15
0x140717d48: lea    rbp,[rsp-0x1c0]
0x140717d50: sub    rsp,0x2c0
0x140717d57: mov    rax,QWORD PTR [rip+0x11842e2]        # 0x14189c040
0x140717d5e: xor    rax,rsp
0x140717d61: mov    QWORD PTR [rbp+0x1b0],rax
0x140717d68: mov    rsi,rcx
0x140717d6b: mov    QWORD PTR [rsp+0x40],rcx
0x140717d70: xor    r15d,r15d
0x140717d73: mov    QWORD PTR [rcx+0x13f8],r15
0x140717d7a: lea    rax,[rcx+0x13e8]
0x140717d81: cmp    QWORD PTR [rcx+0x1400],0xf
0x140717d89: jbe    0x140717d92
0x140717d8b: mov    rax,QWORD PTR [rcx+0x13e8]
0x140717d92: mov    BYTE PTR [rax],r15b
0x140717d95: movsx  r8,WORD PTR [rcx+0xa4]
0x140717d9d: test   r8w,r8w
0x140717da1: js     0x14071a20c
0x140717da7: mov    rcx,QWORD PTR [rip+0x1dd4cc2]        # 0x1424eca70
0x140717dae: mov    rax,rcx
0x140717db1: mov    rdx,QWORD PTR [rip+0x1dd4cb0]        # 0x1424eca68
0x140717db8: sub    rax,rdx
0x140717dbb: sar    rax,0x3
0x140717dbf: cmp    r8,rax
0x140717dc2: jae    0x14071a20c
0x140717dc8: mov    r13,QWORD PTR [rdx+r8*8]
0x140717dcc: test   r13,r13
0x140717dcf: je     0x14071a20c
0x140717dd5: movsx  r9,WORD PTR [rsi+0x12c]
0x140717ddd: sub    rcx,rdx
0x140717de0: sar    rcx,0x3
0x140717de4: cmp    r8,rcx
0x140717de7: jae    0x14071a20c
0x140717ded: test   r9w,r9w
0x140717df1: js     0x14071a20c
0x140717df7: mov    rcx,QWORD PTR [r13+0x178]
0x140717dfe: mov    rax,QWORD PTR [r13+0x180]
0x140717e05: sub    rax,rcx
0x140717e08: sar    rax,0x3
0x140717e0c: cmp    r9,rax
0x140717e0f: jae    0x14071a20c
0x140717e15: mov    r14,QWORD PTR [rcx+r9*8]
0x140717e19: test   r14,r14
0x140717e1c: je     0x14071a20c
0x140717e22: mov    rcx,rsi
0x140717e25: call   0x1413b3030
0x140717e2a: test   rax,rax
0x140717e2d: je     0x140717e3c
0x140717e2f: cmp    DWORD PTR [rax+0x90],r15d
0x140717e36: sete   r11b
0x140717e3a: jmp    0x140717e3f
0x140717e3c: mov    r11d,r15d
0x140717e3f: mov    r8d,r15d
0x140717e42: mov    DWORD PTR [rsp+0x34],r15d
0x140717e47: mov    edx,r15d
0x140717e4a: mov    DWORD PTR [rsp+0x30],edx
0x140717e4e: cmp    DWORD PTR [r14+0x85c],r15d
0x140717e55: jle    0x140717eb9
0x140717e57: mov    ebx,DWORD PTR [r14+0x1234]
0x140717e5e: mov    rcx,rsi
0x140717e61: call   0x1413cac50
0x140717e66: mov    ecx,eax
0x140717e68: sub    ecx,ebx
0x140717e6a: mov    eax,0x66666667 ; PRINTABLE_IMMEDIATE_BYTES 'gfff'
0x140717e6f: imul   ecx
0x140717e71: mov    r8d,edx
0x140717e74: sar    r8d,0x2
0x140717e78: mov    ecx,r8d
0x140717e7b: shr    ecx,0x1f
0x140717e7e: add    r8d,ecx
0x140717e81: mov    DWORD PTR [rsp+0x34],r8d
0x140717e86: test   r11b,r11b
0x140717e89: je     0x140717eb6
0x140717e8b: mov    ecx,DWORD PTR [rsi+0x604]
0x140717e91: sub    ecx,DWORD PTR [rsi+0x614]
0x140717e97: sub    ecx,ebx
0x140717e99: mov    eax,0x66666667 ; PRINTABLE_IMMEDIATE_BYTES 'gfff'
0x140717e9e: imul   ecx
0x140717ea0: sar    edx,0x2
0x140717ea3: mov    eax,edx
0x140717ea5: shr    eax,0x1f
0x140717ea8: add    edx,eax
0x140717eaa: cmp    edx,r8d
0x140717ead: cmovl  r8d,edx
0x140717eb1: mov    DWORD PTR [rsp+0x34],r8d
0x140717eb6: mov    edx,r15d
0x140717eb9: cmp    DWORD PTR [r14+0x858],r15d
0x140717ec0: jle    0x140717ef8
0x140717ec2: mov    ecx,DWORD PTR [r14+0x12a4]
0x140717ec9: mov    eax,0x7d0
0x140717ece: cmp    ecx,eax
0x140717ed0: cmovge ecx,eax
0x140717ed3: sub    eax,ecx
0x140717ed5: imul   eax,eax,0x1f4
0x140717edb: mov    ecx,DWORD PTR [rsi+0x9a0]
0x140717ee1: sub    ecx,eax
0x140717ee3: mov    eax,0x68db8bad
0x140717ee8: imul   ecx
0x140717eea: sar    edx,0xb
0x140717eed: mov    eax,edx
0x140717eef: shr    eax,0x1f
0x140717ef2: add    edx,eax
0x140717ef4: mov    DWORD PTR [rsp+0x30],edx
0x140717ef8: lea    rcx,[rbp-0x30]
0x140717efc: call   0x1405c0950
0x140717f01: nop
0x140717f02: mov    QWORD PTR [rbp-0x30],r13
0x140717f06: mov    QWORD PTR [rbp-0x28],r14
0x140717f0a: mov    DWORD PTR [rbp-0x20],r8d
0x140717f0e: mov    DWORD PTR [rbp-0x1c],edx
0x140717f11: mov    rbx,QWORD PTR [rsi+0x6f0]
0x140717f18: sub    rbx,QWORD PTR [rsi+0x6e8]
0x140717f1f: sar    rbx,0x2
0x140717f23: mov    rdi,QWORD PTR [rbp-0x10]
0x140717f27: mov    rcx,rdi
0x140717f2a: mov    rax,QWORD PTR [rbp-0x18]
0x140717f2e: sub    rcx,rax
0x140717f31: sar    rcx,0x2
0x140717f35: cmp    rbx,rcx
0x140717f38: jae    0x140717f40
0x140717f3a: lea    rax,[rax+rbx*4]
0x140717f3e: jmp    0x140717f7d
0x140717f40: jbe    0x140717f81
0x140717f42: mov    rax,QWORD PTR [rbp-0x8]
0x140717f46: sub    rax,QWORD PTR [rbp-0x18]
0x140717f4a: sar    rax,0x2
0x140717f4e: cmp    rbx,rax
0x140717f51: jbe    0x140717f61
0x140717f53: mov    rdx,rbx
0x140717f56: lea    rcx,[rbp-0x18]
0x140717f5a: call   0x140070d30
0x140717f5f: jmp    0x140717f81
0x140717f61: sub    rbx,rcx
0x140717f64: lea    rbx,[rbx*4+0x0]
0x140717f6c: mov    r8,rbx
0x140717f6f: xor    edx,edx
0x140717f71: mov    rcx,rdi
0x140717f74: call   0x14153aa96
0x140717f79: lea    rax,[rbx+rdi*1]
0x140717f7d: mov    QWORD PTR [rbp-0x10],rax
0x140717f81: mov    rbx,QWORD PTR [rsi+0x708]
0x140717f88: sub    rbx,QWORD PTR [rsi+0x700]
0x140717f8f: sar    rbx,0x2
0x140717f93: mov    rdi,QWORD PTR [rbp+0x8]
0x140717f97: mov    rcx,rdi
0x140717f9a: mov    rax,QWORD PTR [rbp+0x0]
0x140717f9e: sub    rcx,rax
0x140717fa1: sar    rcx,0x2
0x140717fa5: cmp    rbx,rcx
0x140717fa8: jae    0x140717fb0
0x140717faa: lea    rax,[rax+rbx*4]
0x140717fae: jmp    0x140717fed
0x140717fb0: jbe    0x140717ff1
0x140717fb2: mov    rax,QWORD PTR [rbp+0x10]
0x140717fb6: sub    rax,QWORD PTR [rbp+0x0]
0x140717fba: sar    rax,0x2
0x140717fbe: cmp    rbx,rax
0x140717fc1: jbe    0x140717fd1
0x140717fc3: mov    rdx,rbx
0x140717fc6: lea    rcx,[rbp+0x0]
0x140717fca: call   0x140070d30
0x140717fcf: jmp    0x140717ff1
0x140717fd1: sub    rbx,rcx
0x140717fd4: lea    rbx,[rbx*4+0x0]
0x140717fdc: mov    r8,rbx
0x140717fdf: xor    edx,edx
0x140717fe1: mov    rcx,rdi
0x140717fe4: call   0x14153aa96
0x140717fe9: lea    rax,[rbx+rdi*1]
0x140717fed: mov    QWORD PTR [rbp+0x8],rax
0x140717ff1: mov    r9d,r15d
0x140717ff4: mov    rcx,QWORD PTR [rsi+0x6e8]
0x140717ffb: mov    rax,QWORD PTR [rsi+0x6f0]
0x140718002: sub    rax,rcx
0x140718005: sar    rax,0x2
0x140718009: test   rax,rax
0x14071800c: je     0x140718082
0x14071800e: mov    rdx,r15
0x140718011: mov    r8,r15
0x140718014: test   r9d,r9d
0x140718017: jns    0x140718020
0x140718019: mov    ecx,0x64
0x14071801e: jmp    0x140718056
0x140718020: mov    ecx,DWORD PTR [rcx+r8*1]
0x140718024: mov    r10,QWORD PTR [rsi+0x8b0]
0x14071802b: mov    rax,QWORD PTR [rsi+0x8b8]
0x140718032: sub    rax,r10
0x140718035: sar    rax,0x2
0x140718039: cmp    rdx,rax
0x14071803c: jae    0x140718056
0x14071803e: imul   ecx,DWORD PTR [r10+r8*1]
0x140718043: mov    eax,0x51eb851f
0x140718048: imul   ecx
0x14071804a: mov    ecx,edx
0x14071804c: sar    ecx,0x5
0x14071804f: mov    eax,ecx
0x140718051: shr    eax,0x1f
0x140718054: add    ecx,eax
0x140718056: mov    rax,QWORD PTR [rbp-0x18]
0x14071805a: mov    DWORD PTR [rax+r8*1],ecx
0x14071805e: inc    r9d
0x140718061: add    r8,0x4
0x140718065: mov    rcx,QWORD PTR [rsi+0x6e8]
0x14071806c: movsxd rdx,r9d
0x14071806f: mov    rax,QWORD PTR [rsi+0x6f0]
0x140718076: sub    rax,rcx
0x140718079: sar    rax,0x2
0x14071807d: cmp    rdx,rax
0x140718080: jb     0x140718014
0x140718082: mov    r9d,r15d
0x140718085: mov    rcx,QWORD PTR [rsi+0x700]
0x14071808c: mov    rax,QWORD PTR [rsi+0x708]
0x140718093: sub    rax,rcx
0x140718096: sar    rax,0x2
0x14071809a: test   rax,rax
0x14071809d: je     0x140718113
0x14071809f: mov    rdx,r15
0x1407180a2: mov    r8,r15
0x1407180a5: test   r9d,r9d
0x1407180a8: jns    0x1407180b1
0x1407180aa: mov    ecx,0x64
0x1407180af: jmp    0x1407180e7
0x1407180b1: mov    ecx,DWORD PTR [rcx+r8*1]
0x1407180b5: mov    r10,QWORD PTR [rsi+0x8c8]
0x1407180bc: mov    rax,QWORD PTR [rsi+0x8d0]
0x1407180c3: sub    rax,r10
0x1407180c6: sar    rax,0x2
0x1407180ca: cmp    rdx,rax
0x1407180cd: jae    0x1407180e7
0x1407180cf: imul   ecx,DWORD PTR [r10+r8*1]
0x1407180d4: mov    eax,0x51eb851f
0x1407180d9: imul   ecx
0x1407180db: mov    ecx,edx
0x1407180dd: sar    ecx,0x5
0x1407180e0: mov    eax,ecx
0x1407180e2: shr    eax,0x1f
0x1407180e5: add    ecx,eax
0x1407180e7: mov    rax,QWORD PTR [rbp+0x0]
0x1407180eb: mov    DWORD PTR [rax+r8*1],ecx
0x1407180ef: inc    r9d
0x1407180f2: add    r8,0x4
0x1407180f6: mov    rcx,QWORD PTR [rsi+0x700]
0x1407180fd: movsxd rdx,r9d
0x140718100: mov    rax,QWORD PTR [rsi+0x708]
0x140718107: sub    rax,rcx
0x14071810a: sar    rax,0x2
0x14071810e: cmp    rdx,rax
0x140718111: jb     0x1407180a5
0x140718113: mov    rax,QWORD PTR [rsi+0x5f8]
0x14071811a: mov    QWORD PTR [rbp+0x18],rax
0x14071811e: lea    r8,[rsi+0x4f0]
0x140718125: lea    rax,[rbp+0x20]
0x140718129: cmp    rax,r8
0x14071812c: je     0x140718145
0x14071812e: mov    rdx,QWORD PTR [r8]
0x140718131: mov    r8,QWORD PTR [r8+0x8]
0x140718135: sub    r8,rdx
0x140718138: sar    r8,0x2
0x14071813c: lea    rcx,[rbp+0x20]
0x140718140: call   0x1400ba940
0x140718145: lea    r8,[rsi+0x538]
0x14071814c: lea    rax,[rbp+0x38]
0x140718150: cmp    rax,r8
0x140718153: je     0x14071816c
0x140718155: mov    rdx,QWORD PTR [r8]
0x140718158: mov    r8,QWORD PTR [r8+0x8]
0x14071815c: sub    r8,rdx
0x14071815f: sar    r8,0x2
0x140718163: lea    rcx,[rbp+0x38]
0x140718167: call   0x1400ba940
0x14071816c: lea    r8,[rsi+0x720]
0x140718173: lea    rax,[rbp+0x50]
0x140718177: cmp    rax,r8
0x14071817a: je     0x140718192
0x14071817c: mov    rdx,QWORD PTR [r8]
0x14071817f: mov    r8,QWORD PTR [r8+0x8]
0x140718183: sub    r8,rdx
0x140718186: sar    r8,1
0x140718189: lea    rcx,[rbp+0x50]
0x14071818d: call   0x1400704c0
0x140718192: lea    r8,[rsi+0x738]
0x140718199: lea    rax,[rbp+0x68]
0x14071819d: cmp    rax,r8
0x1407181a0: je     0x1407181b9
0x1407181a2: mov    rdx,QWORD PTR [r8]
0x1407181a5: mov    r8,QWORD PTR [r8+0x8]
0x1407181a9: sub    r8,rdx
0x1407181ac: sar    r8,0x2
0x1407181b0: lea    rcx,[rbp+0x68]
0x1407181b4: call   0x1400ba940
0x1407181b9: lea    r8,[rsi+0x750]
0x1407181c0: lea    rax,[rbp+0x80]
0x1407181c7: cmp    rax,r8
0x1407181ca: je     0x1407181e6
0x1407181cc: mov    rdx,QWORD PTR [r8]
0x1407181cf: mov    r8,QWORD PTR [r8+0x8]
0x1407181d3: sub    r8,rdx
0x1407181d6: sar    r8,0x2
0x1407181da: lea    rcx,[rbp+0x80]
0x1407181e1: call   0x1400ba940
0x1407181e6: lea    r8,[rsi+0x768]
0x1407181ed: lea    rax,[rbp+0x98]
0x1407181f4: cmp    rax,r8
0x1407181f7: je     0x140718213
0x1407181f9: mov    rdx,QWORD PTR [r8]
0x1407181fc: mov    r8,QWORD PTR [r8+0x8]
0x140718200: sub    r8,rdx
0x140718203: sar    r8,0x2
0x140718207: lea    rcx,[rbp+0x98]
0x14071820e: call   0x1400ba940
0x140718213: lea    r8,[rsi+0x780]
0x14071821a: lea    rax,[rbp+0xb0]
0x140718221: cmp    rax,r8
0x140718224: je     0x140718240
0x140718226: mov    rdx,QWORD PTR [r8]
0x140718229: mov    r8,QWORD PTR [r8+0x8]
0x14071822d: sub    r8,rdx
0x140718230: sar    r8,0x2
0x140718234: lea    rcx,[rbp+0xb0]
0x14071823b: call   0x1400ba940
0x140718240: lea    r8,[rsi+0x7b8]
0x140718247: lea    rax,[rbp+0xc8]
0x14071824e: cmp    rax,r8
0x140718251: je     0x14071826d
0x140718253: mov    rdx,QWORD PTR [r8]
0x140718256: mov    r8,QWORD PTR [r8+0x8]
0x14071825a: sub    r8,rdx
0x14071825d: sar    r8,0x2
0x140718261: lea    rcx,[rbp+0xc8]
0x140718268: call   0x1400ba940
0x14071826d: lea    rax,[rsi+0x5b0]
0x140718274: mov    QWORD PTR [rbp+0xe0],rax
0x14071827b: mov    r8d,DWORD PTR [rsi+0x390]
0x140718282: mov    edx,DWORD PTR [rip+0x1c6fd3c]        # 0x142387fc4
0x140718288: cmp    r8d,0xffffffff
0x14071828c: je     0x1407182bb
0x14071828e: cmp    edx,0xffffffff
0x140718291: je     0x1407182bb
0x140718293: cmp    DWORD PTR [rip+0x1183ffe],0x1        # 0x14189c298
0x14071829a: ja     0x1407182bb
0x14071829c: mov    eax,DWORD PTR [rip+0x1c5c452]        # 0x1423746f4
0x1407182a2: sub    eax,DWORD PTR [rsi+0x38c]
0x1407182a8: dec    eax
0x1407182aa: imul   ecx,eax,0x150
0x1407182b0: sub    edx,r8d
0x1407182b3: add    edx,0x62700
0x1407182b9: jmp    0x1407182d4
0x1407182bb: mov    ecx,DWORD PTR [rsi+0x38c]
0x1407182c1: mov    eax,DWORD PTR [rip+0x1c5c42d]        # 0x1423746f4
0x1407182c7: sub    eax,ecx
0x1407182c9: cmp    edx,0xffffffff
0x1407182cc: je     0x1407182e9
0x1407182ce: imul   ecx,eax,0x150
0x1407182d4: mov    eax,0x1b4e81b5
0x1407182d9: imul   edx
0x1407182db: sar    edx,0x7
0x1407182de: mov    eax,edx
0x1407182e0: shr    eax,0x1f
0x1407182e3: add    edx,ecx
0x1407182e5: add    eax,edx
0x1407182e7: jmp    0x1407182ef
0x1407182e9: imul   eax,eax,0x150
0x1407182ef: mov    DWORD PTR [rbp+0xe8],eax
0x1407182f5: movsxd rdx,DWORD PTR [rsi+0xa4]
0x1407182fc: mov    DWORD PTR [rbp+0xec],edx
0x140718302: movsx  rcx,WORD PTR [rsi+0x12c]
0x14071830a: mov    DWORD PTR [rbp+0xf0],ecx
0x140718310: movzx  eax,BYTE PTR [rsi+0x12e]
0x140718317: mov    BYTE PTR [rbp+0xf4],al
0x14071831d: mov    r10d,0xffffffff
0x140718323: test   dx,dx
0x140718326: js     0x14071839e
0x140718328: mov    r8,QWORD PTR [rip+0x1dd4739]        # 0x1424eca68
0x14071832f: movsx  r9,dx
0x140718333: mov    rax,QWORD PTR [rip+0x1dd4736]        # 0x1424eca70
0x14071833a: sub    rax,r8
0x14071833d: sar    rax,0x3
0x140718341: cmp    r9,rax
0x140718344: jae    0x14071839e
0x140718346: test   cx,cx
0x140718349: js     0x14071839e
0x14071834b: mov    rax,QWORD PTR [r8+r9*8]
0x14071834f: mov    r8,QWORD PTR [rax+0x178]
0x140718356: mov    rax,QWORD PTR [rax+0x180]
0x14071835d: sub    rax,r8
0x140718360: sar    rax,0x3
0x140718364: cmp    rcx,rax
0x140718367: jae    0x14071839e
0x140718369: mov    rax,QWORD PTR [r8+rcx*8]
0x14071836d: test   rax,rax
0x140718370: je     0x14071839e
0x140718372: movzx  ecx,WORD PTR [rax+0x3c76]
0x140718379: mov    WORD PTR [rbp+0xf6],cx
0x140718380: mov    r8d,DWORD PTR [rax+0x3c78]
0x140718387: mov    DWORD PTR [rbp+0xf8],r8d
0x14071838e: movzx  eax,WORD PTR [rax+0x3c74]
0x140718395: mov    WORD PTR [rbp+0xfc],ax
0x14071839c: jmp    0x1407183af
0x14071839e: mov    ecx,r10d
0x1407183a1: mov    WORD PTR [rbp+0xf6],cx
0x1407183a8: mov    r8d,DWORD PTR [rbp+0xf8]
0x1407183af: cmp    edx,DWORD PTR [rsi+0xd90]
0x1407183b5: jne    0x1407183ed
0x1407183b7: mov    r9d,DWORD PTR [rsi+0xc30]
0x1407183be: cmp    r9d,r10d
0x1407183c1: je     0x1407183ed
0x1407183c3: lea    eax,[rcx-0x13]
0x1407183c6: mov    r10d,0xc7
0x1407183cc: cmp    ax,r10w
0x1407183d0: ja     0x1407183ed
0x1407183d2: cmp    r8d,edx
0x1407183d5: jne    0x1407183ed
0x1407183d7: mov    eax,0xc8
0x1407183dc: add    cx,ax
0x1407183df: mov    WORD PTR [rbp+0xf6],cx
0x1407183e6: mov    DWORD PTR [rbp+0xf8],r9d
0x1407183ed: lea    rcx,[rbp-0x30]
0x1407183f1: call   0x14070f070
0x1407183f6: mov    DWORD PTR [rsp+0x4c],0x7cf
0x1407183fe: mov    rbx,QWORD PTR [rbp+0x118]
0x140718405: mov    rdi,QWORD PTR [rbp+0x120]
0x14071840c: mov    QWORD PTR [rbp-0x38],rdi
0x140718410: lea    r9,[r14+0x1608]
0x140718417: mov    QWORD PTR [rbp-0x80],r9
0x14071841b: lea    rax,[rsi+0x13e8]
0x140718422: mov    QWORD PTR [rsp+0x68],rax
0x140718427: mov    edx,0xf
0x14071842c: mov    QWORD PTR [rbp-0x40],rbx
0x140718430: cmp    rbx,rdi
0x140718433: je     0x14071a153
0x140718439: mov    QWORD PTR [rsp+0x58],r13
0x14071843e: mov    rcx,r14
0x140718441: mov    QWORD PTR [rbp-0x68],rcx
0x140718445: jae    0x14071a153
0x14071844b: mov    r11,QWORD PTR [rbx]
0x14071844e: mov    QWORD PTR [rbp-0x60],r11
0x140718452: mov    r14,QWORD PTR [r11+0x38]
0x140718456: mov    r12,QWORD PTR [r11+0x40]
0x14071845a: sub    r12,r14
0x14071845d: sar    r12,0x2
0x140718461: test   r12,r12
0x140718464: je     0x140718b14
0x14071846a: cmp    WORD PTR [r11],0x0
0x14071846f: jne    0x14071a140
0x140718475: mov    DWORD PTR [rbp-0x78],0xffff8ad0
0x14071847c: mov    DWORD PTR [rsp+0x70],0xffff8ad0
0x140718484: mov    DWORD PTR [rsp+0x48],0xffff8ad0
0x14071848c: mov    esi,0xffff8ad0
0x140718491: mov    edx,esi
0x140718493: xor    eax,eax
0x140718495: mov    r11d,esi
0x140718498: mov    r13d,eax
0x14071849b: mov    rcx,QWORD PTR [rbp-0x60]
0x14071849f: mov    rdi,QWORD PTR [rcx+0x50]
0x1407184a3: mov    rbx,QWORD PTR [r9]
0x1407184a6: mov    rcx,QWORD PTR [rsp+0x40]
0x1407184ab: mov    r8,QWORD PTR [rcx+0x6e8]
0x1407184b2: mov    QWORD PTR [rbp-0x50],r8
0x1407184b6: sub    rdi,r14
0x1407184b9: nop    DWORD PTR [rax+0x0]
0x1407184c0: cmp    DWORD PTR [r14+rdi*1],r15d
0x1407184c4: cmovg  r15d,DWORD PTR [r14+rdi*1]
0x1407184c9: movsxd rax,DWORD PTR [r14]
0x1407184cc: mov    rcx,QWORD PTR [rbx+rax*8]
0x1407184d0: mov    r9d,DWORD PTR [r8+rax*4]
0x1407184d4: mov    r10d,DWORD PTR [rcx+0x10]
0x1407184d8: movsx  r8d,WORD PTR [rcx]
0x1407184dc: test   r8d,r8d
0x1407184df: je     0x14071850c
0x1407184e1: sub    r8d,0x1
0x1407184e5: je     0x1407184fd
0x1407184e7: mov    ecx,DWORD PTR [rsp+0x70]
0x1407184eb: cmp    r8d,0x1
0x1407184ef: jne    0x14071851b
0x1407184f1: mov    DWORD PTR [rbp-0x78],r9d
0x1407184f5: mov    esi,r9d
0x1407184f8: sub    esi,r10d
0x1407184fb: jmp    0x14071851b
0x1407184fd: mov    ecx,r9d
0x140718500: mov    DWORD PTR [rsp+0x70],ecx
0x140718504: mov    edx,r9d
0x140718507: sub    edx,r10d
0x14071850a: jmp    0x14071851b
0x14071850c: mov    DWORD PTR [rsp+0x48],r9d
0x140718511: mov    r11d,r9d
0x140718514: sub    r11d,r10d
0x140718517: mov    ecx,DWORD PTR [rsp+0x70]
0x14071851b: inc    r13d
0x14071851e: add    r14,0x4
0x140718522: movsxd rax,r13d
0x140718525: cmp    rax,r12
0x140718528: mov    r8,QWORD PTR [rbp-0x50]
0x14071852c: jb     0x1407184c0
0x14071852e: mov    r14,QWORD PTR [rbp-0x68]
0x140718532: mov    r12,QWORD PTR [rsp+0x58]
0x140718537: mov    r13,r12
0x14071853a: cmp    r15d,DWORD PTR [rsp+0x4c]
0x14071853f: mov    rbx,QWORD PTR [rbp-0x40]
0x140718543: mov    rdi,QWORD PTR [rbp-0x38]
0x140718547: jle    0x1407188a7
0x14071854d: mov    DWORD PTR [rsp+0x4c],r15d
0x140718552: cmp    esi,0xffff8ad0
0x140718558: je     0x1407188b1
0x14071855e: cmp    r11d,0xffff8ad0
0x140718565: je     0x140718626
0x14071856b: cmp    edx,0xffff8ad0
0x140718571: je     0x140718798
0x140718577: movsxd rcx,ecx
0x14071857a: movsxd rax,DWORD PTR [rbp-0x78]
0x14071857e: imul   rcx,rax
0x140718582: movsxd rax,DWORD PTR [rsp+0x48]
0x140718587: imul   rcx,rax
0x14071858b: cmp    rcx,0x16e360
0x140718592: jl     0x14071859d
0x140718594: xor    r15d,r15d
0x140718597: movzx  edx,r15w
0x14071859b: jmp    0x1407185f3
0x14071859d: cmp    rcx,0x1312d0
0x1407185a4: jl     0x1407185ad
0x1407185a6: mov    edx,0x1
0x1407185ab: jmp    0x1407185f0
0x1407185ad: cmp    rcx,0x10c8e0
0x1407185b4: jl     0x1407185bd
0x1407185b6: mov    edx,0x2
0x1407185bb: jmp    0x1407185f0
0x1407185bd: cmp    rcx,0x7c830
0x1407185c4: jge    0x1407185cd
0x1407185c6: mov    edx,0x1b
0x1407185cb: jmp    0x1407185f0
0x1407185cd: cmp    rcx,0xb98c0
0x1407185d4: jge    0x1407185dd
0x1407185d6: mov    edx,0x1a
0x1407185db: jmp    0x1407185f0
0x1407185dd: cmp    rcx,0xde2b0
0x1407185e4: mov    edx,0x19
0x1407185e9: jl     0x1407185f0
0x1407185eb: mov    edx,0x18
0x1407185f0: xor    r15d,r15d
0x1407185f3: mov    r8d,DWORD PTR [rsp+0x34]
0x1407185f8: mov    r9d,DWORD PTR [rsp+0x30]
0x1407185fd: mov    rax,QWORD PTR [rsp+0x40]
0x140718602: mov    ecx,0x13e8
0x140718607: add    rcx,rax
0x14071860a: call   0x140716b70
0x14071860f: mov    rsi,QWORD PTR [rsp+0x40]
0x140718614: mov    r9,QWORD PTR [rbp-0x80]
0x140718618: mov    edx,0xf
0x14071861d: add    rbx,0x8
0x140718621: jmp    0x14071842c
0x140718626: cmp    edx,0xffff8ad0
0x14071862c: je     0x14071878b
0x140718632: cmp    esi,0x32
0x140718635: jl     0x14071864d
0x140718637: cmp    edx,0x32
0x14071863a: jl     0x14071866b
0x14071863c: mov    rcx,QWORD PTR [rsp+0x68]
0x140718641: xor    r15d,r15d
0x140718644: movzx  edx,r15w
0x140718648: jmp    0x140718765
0x14071864d: cmp    esi,0xffffffce
0x140718650: jg     0x140718666
0x140718652: cmp    edx,0xffffffce
0x140718655: jg     0x140718698
0x140718657: mov    rcx,QWORD PTR [rsp+0x68]
0x14071865c: mov    edx,0x1b
0x140718661: jmp    0x140718762
0x140718666: cmp    esi,0xa
0x140718669: jl     0x140718693
0x14071866b: cmp    edx,0xa
0x14071866e: jl     0x14071867f
0x140718670: mov    rcx,QWORD PTR [rsp+0x68]
0x140718675: mov    edx,0x2
0x14071867a: jmp    0x140718762
0x14071867f: cmp    edx,0xfffffff6
0x140718682: jg     0x1407186c0
0x140718684: mov    rcx,QWORD PTR [rsp+0x68]
0x140718689: mov    edx,0x8
0x14071868e: jmp    0x140718762
0x140718693: cmp    esi,0xfffffff6
0x140718696: jg     0x1407186c0
0x140718698: cmp    edx,0xa
0x14071869b: jl     0x1407186ac
0x14071869d: mov    rcx,QWORD PTR [rsp+0x68]
0x1407186a2: mov    edx,0x4
0x1407186a7: jmp    0x140718762
0x1407186ac: cmp    edx,0xfffffff6
0x1407186af: jg     0x1407186c0
0x1407186b1: mov    rcx,QWORD PTR [rsp+0x68]
0x1407186b6: mov    edx,0x19
0x1407186bb: jmp    0x140718762
0x1407186c0: mov    rcx,QWORD PTR [rsp+0x40]
0x1407186c5: add    rcx,0x13e8
0x1407186cc: cmp    edx,0x32
0x1407186cf: jl     0x1407186db
0x1407186d1: mov    edx,0x5
0x1407186d6: jmp    0x140718762
0x1407186db: cmp    edx,0x19
0x1407186de: jl     0x1407186e7
0x1407186e0: mov    edx,0x6
0x1407186e5: jmp    0x140718762
0x1407186e7: cmp    edx,0xa
0x1407186ea: jl     0x1407186f3
0x1407186ec: mov    edx,0x7
0x1407186f1: jmp    0x140718762
0x1407186f3: cmp    edx,0xffffffce
0x1407186f6: jg     0x1407186ff
0x1407186f8: mov    edx,0x9
0x1407186fd: jmp    0x140718762
0x1407186ff: cmp    edx,0xffffffe7
0x140718702: jg     0x14071870b
0x140718704: mov    edx,0xa
0x140718709: jmp    0x140718762
0x14071870b: cmp    edx,0xfffffff6
0x14071870e: jg     0x140718717
0x140718710: mov    edx,0xb
0x140718715: jmp    0x140718762
0x140718717: cmp    esi,0x32
0x14071871a: jl     0x140718723
0x14071871c: mov    edx,0xf
0x140718721: jmp    0x140718762
0x140718723: cmp    esi,0x19
0x140718726: jl     0x14071872f
0x140718728: mov    edx,0x10
0x14071872d: jmp    0x140718762
0x14071872f: cmp    esi,0xa
0x140718732: jl     0x14071873b
0x140718734: mov    edx,0x11
0x140718739: jmp    0x140718762
0x14071873b: cmp    esi,0xffffffce
0x14071873e: jg     0x140718747
0x140718740: mov    edx,0x15
0x140718745: jmp    0x140718762
0x140718747: cmp    esi,0xffffffe7
0x14071874a: jg     0x140718753
0x14071874c: mov    edx,0x16
0x140718751: jmp    0x140718762
0x140718753: cmp    esi,0xfffffff6
0x140718756: mov    edx,0x17
0x14071875b: jle    0x140718762
0x14071875d: mov    edx,0x18
0x140718762: xor    r15d,r15d
0x140718765: mov    r8d,DWORD PTR [rsp+0x34]
0x14071876a: mov    r9d,DWORD PTR [rsp+0x30]
0x14071876f: call   0x140716b70
0x140718774: mov    rsi,QWORD PTR [rsp+0x40]
0x140718779: mov    r9,QWORD PTR [rbp-0x80]
0x14071877d: mov    edx,0xf
0x140718782: add    rbx,0x8
0x140718786: jmp    0x14071842c
0x14071878b: cmp    r11d,0xffff8ad0
0x140718792: je     0x140718840
0x140718798: movsxd rcx,DWORD PTR [rbp-0x78]
0x14071879c: movsxd rax,DWORD PTR [rsp+0x48]
0x1407187a1: imul   rcx,rax
0x1407187a5: cmp    rcx,0x3a98
0x1407187ac: jl     0x1407187b7
0x1407187ae: xor    r15d,r15d
0x1407187b1: movzx  edx,r15w
0x1407187b5: jmp    0x14071880d
0x1407187b7: cmp    rcx,0x30d4
0x1407187be: jl     0x1407187c7
0x1407187c0: mov    edx,0x1
0x1407187c5: jmp    0x14071880a
0x1407187c7: cmp    rcx,0x2af8
0x1407187ce: jl     0x1407187d7
0x1407187d0: mov    edx,0x2
0x1407187d5: jmp    0x14071880a
0x1407187d7: cmp    rcx,0x13ec
0x1407187de: jge    0x1407187e7
0x1407187e0: mov    edx,0x1b
0x1407187e5: jmp    0x14071880a
0x1407187e7: cmp    rcx,0x1db0
0x1407187ee: jge    0x1407187f7
0x1407187f0: mov    edx,0x1a
0x1407187f5: jmp    0x14071880a
0x1407187f7: cmp    rcx,0x238c
0x1407187fe: mov    edx,0x19
0x140718803: jl     0x14071880a
0x140718805: mov    edx,0x18
0x14071880a: xor    r15d,r15d
0x14071880d: mov    r8d,DWORD PTR [rsp+0x34]
0x140718812: mov    r9d,DWORD PTR [rsp+0x30]
0x140718817: mov    rax,QWORD PTR [rsp+0x40]
0x14071881c: mov    ecx,0x13e8
0x140718821: add    rcx,rax
0x140718824: call   0x140716b70
0x140718829: mov    rsi,QWORD PTR [rsp+0x40]
0x14071882e: mov    r9,QWORD PTR [rbp-0x80]
0x140718832: mov    edx,0xf
0x140718837: add    rbx,0x8
0x14071883b: jmp    0x14071842c
0x140718840: cmp    esi,0x32
0x140718843: jl     0x14071884c
0x140718845: mov    edx,0xf
0x14071884a: jmp    0x14071888b
0x14071884c: cmp    esi,0x19
0x14071884f: jl     0x140718858
0x140718851: mov    edx,0x10
0x140718856: jmp    0x14071888b
0x140718858: cmp    esi,0xa
0x14071885b: jl     0x140718864
0x14071885d: mov    edx,0x11
0x140718862: jmp    0x14071888b
0x140718864: cmp    esi,0xffffffce
0x140718867: jg     0x140718870
0x140718869: mov    edx,0x15
0x14071886e: jmp    0x14071888b
0x140718870: cmp    esi,0xffffffe7
0x140718873: jg     0x14071887c
0x140718875: mov    edx,0x16
0x14071887a: jmp    0x14071888b
0x14071887c: cmp    esi,0xfffffff6
0x14071887f: mov    edx,0x17
0x140718884: jle    0x14071888b
0x140718886: mov    edx,0x18
0x14071888b: mov    r8d,DWORD PTR [rsp+0x34]
0x140718890: mov    r9d,DWORD PTR [rsp+0x30]
0x140718895: mov    rax,QWORD PTR [rsp+0x40]
0x14071889a: mov    ecx,0x13e8
0x14071889f: add    rcx,rax
0x1407188a2: call   0x140716b70
0x1407188a7: mov    rsi,QWORD PTR [rsp+0x40]
0x1407188ac: jmp    0x140718aff
0x1407188b1: cmp    r11d,0xffff8ad0
0x1407188b8: je     0x140718a20
0x1407188be: cmp    edx,0xffff8ad0
0x1407188c4: je     0x140718a93
0x1407188ca: cmp    r11d,0x32
0x1407188ce: jl     0x1407188e6
0x1407188d0: cmp    edx,0x32
0x1407188d3: jl     0x140718906
0x1407188d5: mov    rcx,QWORD PTR [rsp+0x68]
0x1407188da: xor    r15d,r15d
0x1407188dd: movzx  edx,r15w
0x1407188e1: jmp    0x140718765
0x1407188e6: cmp    r11d,0xffffffce
0x1407188ea: jg     0x140718900
0x1407188ec: cmp    edx,0xffffffce
0x1407188ef: jg     0x140718934
0x1407188f1: mov    rcx,QWORD PTR [rsp+0x68]
0x1407188f6: mov    edx,0x1b
0x1407188fb: jmp    0x140718762
0x140718900: cmp    r11d,0xa
0x140718904: jl     0x14071892e
0x140718906: cmp    edx,0xa
0x140718909: jl     0x14071891a
0x14071890b: mov    rcx,QWORD PTR [rsp+0x68]
0x140718910: mov    edx,0x2
0x140718915: jmp    0x140718762
0x14071891a: cmp    edx,0xfffffff6
0x14071891d: jg     0x14071895c
0x14071891f: mov    rcx,QWORD PTR [rsp+0x68]
0x140718924: mov    edx,0x3
0x140718929: jmp    0x140718762
0x14071892e: cmp    r11d,0xfffffff6
0x140718932: jg     0x14071895c
0x140718934: cmp    edx,0xa
0x140718937: jl     0x140718948
0x140718939: mov    rcx,QWORD PTR [rsp+0x68]
0x14071893e: mov    edx,0x4
0x140718943: jmp    0x140718762
0x140718948: cmp    edx,0xfffffff6
0x14071894b: jg     0x14071895c
0x14071894d: mov    rcx,QWORD PTR [rsp+0x68]
0x140718952: mov    edx,0x19
0x140718957: jmp    0x140718762
0x14071895c: mov    rcx,QWORD PTR [rsp+0x40]
0x140718961: add    rcx,0x13e8
0x140718968: cmp    edx,0x32
0x14071896b: jl     0x140718977
0x14071896d: mov    edx,0x5
0x140718972: jmp    0x140718762
0x140718977: cmp    edx,0x19
0x14071897a: jl     0x140718986
0x14071897c: mov    edx,0x6
0x140718981: jmp    0x140718762
0x140718986: cmp    edx,0xa
0x140718989: jl     0x140718995
0x14071898b: mov    edx,0x7
0x140718990: jmp    0x140718762
0x140718995: cmp    edx,0xffffffce
0x140718998: jg     0x1407189a4
0x14071899a: mov    edx,0x9
0x14071899f: jmp    0x140718762
0x1407189a4: cmp    edx,0xffffffe7
0x1407189a7: jg     0x1407189b3
0x1407189a9: mov    edx,0xa
0x1407189ae: jmp    0x140718762
0x1407189b3: cmp    edx,0xfffffff6
0x1407189b6: jg     0x1407189c2
0x1407189b8: mov    edx,0xb
0x1407189bd: jmp    0x140718762
0x1407189c2: cmp    r11d,0x32
0x1407189c6: jl     0x1407189d2
0x1407189c8: mov    edx,0xc
0x1407189cd: jmp    0x140718762
0x1407189d2: cmp    r11d,0x19
0x1407189d6: jl     0x1407189e2
0x1407189d8: mov    edx,0xd
0x1407189dd: jmp    0x140718762
0x1407189e2: cmp    r11d,0xa
0x1407189e6: jl     0x1407189f2
0x1407189e8: mov    edx,0xe
0x1407189ed: jmp    0x140718762
0x1407189f2: cmp    r11d,0xffffffce
0x1407189f6: jg     0x140718a02
0x1407189f8: mov    edx,0x12
0x1407189fd: jmp    0x140718762
0x140718a02: cmp    r11d,0xffffffe7
0x140718a06: jg     0x140718a12
0x140718a08: mov    edx,0x13
0x140718a0d: jmp    0x140718762
0x140718a12: cmp    r11d,0xfffffff6
0x140718a16: mov    edx,0x14
0x140718a1b: jmp    0x14071875b
0x140718a20: cmp    edx,0xffff8ad0
0x140718a26: je     0x140718a86
0x140718a28: cmp    edx,0x32
0x140718a2b: jl     0x140718a37
0x140718a2d: mov    edx,0x5
0x140718a32: jmp    0x14071888b
0x140718a37: cmp    edx,0x19
0x140718a3a: jl     0x140718a46
0x140718a3c: mov    edx,0x6
0x140718a41: jmp    0x14071888b
0x140718a46: cmp    edx,0xa
0x140718a49: jl     0x140718a55
0x140718a4b: mov    edx,0x7
0x140718a50: jmp    0x14071888b
0x140718a55: cmp    edx,0xffffffce
0x140718a58: jg     0x140718a64
0x140718a5a: mov    edx,0x9
0x140718a5f: jmp    0x14071888b
0x140718a64: cmp    edx,0xffffffe7
0x140718a67: jg     0x140718a73
0x140718a69: mov    edx,0xa
0x140718a6e: jmp    0x14071888b
0x140718a73: cmp    edx,0xfffffff6
0x140718a76: jg     0x140718886
0x140718a7c: mov    edx,0xb
0x140718a81: jmp    0x14071888b
0x140718a86: cmp    r11d,0xffff8ad0
0x140718a8d: je     0x1407188a7
0x140718a93: mov    rsi,QWORD PTR [rsp+0x40]
0x140718a98: lea    rcx,[rsi+0x13e8]
0x140718a9f: mov    r9d,DWORD PTR [rsp+0x30]
0x140718aa4: mov    r8d,DWORD PTR [rsp+0x34]
0x140718aa9: cmp    r11d,0x32
0x140718aad: jl     0x140718ab6
0x140718aaf: mov    edx,0xc
0x140718ab4: jmp    0x140718afa
0x140718ab6: cmp    r11d,0x19
0x140718aba: jl     0x140718ac3
0x140718abc: mov    edx,0xd
0x140718ac1: jmp    0x140718afa
0x140718ac3: cmp    r11d,0xa
0x140718ac7: jl     0x140718ad0
0x140718ac9: mov    edx,0xe
0x140718ace: jmp    0x140718afa
0x140718ad0: cmp    r11d,0xffffffce
0x140718ad4: jg     0x140718add
0x140718ad6: mov    edx,0x12
0x140718adb: jmp    0x140718afa
0x140718add: cmp    r11d,0xffffffe7
0x140718ae1: jg     0x140718aea
0x140718ae3: mov    edx,0x13
0x140718ae8: jmp    0x140718afa
0x140718aea: cmp    r11d,0xfffffff6
0x140718aee: mov    edx,0x14
0x140718af3: jle    0x140718afa
0x140718af5: mov    edx,0x18
0x140718afa: call   0x140716b70
0x140718aff: xor    r15d,r15d
0x140718b02: mov    r9,QWORD PTR [rbp-0x80]
0x140718b06: mov    edx,0xf
0x140718b0b: add    rbx,0x8
0x140718b0f: jmp    0x14071842c
0x140718b14: xorps  xmm0,xmm0
0x140718b17: movups XMMWORD PTR [rbp+0x150],xmm0
0x140718b1e: xor    r12d,r12d
0x140718b21: mov    QWORD PTR [rbp+0x160],r12
0x140718b28: mov    r15,rdx
0x140718b2b: mov    QWORD PTR [rbp+0x168],rdx
0x140718b32: mov    BYTE PTR [rbp+0x150],r12b
0x140718b39: movups XMMWORD PTR [rbp+0x170],xmm0
0x140718b40: mov    QWORD PTR [rbp+0x180],r12
0x140718b47: mov    QWORD PTR [rbp+0x188],rdx
0x140718b4e: mov    BYTE PTR [rbp+0x170],r12b
0x140718b55: mov    r9,QWORD PTR [r11+0x8]
0x140718b59: mov    r10,QWORD PTR [r11+0x10]
0x140718b5d: sub    r10,r9
0x140718b60: sar    r10,0x2
0x140718b64: mov    QWORD PTR [rbp-0x50],r10
0x140718b68: mov    r14,rcx
0x140718b6b: test   r10,r10
0x140718b6e: jne    0x140718b84
0x140718b70: mov    rax,QWORD PTR [r11+0x70]
0x140718b74: sub    rax,QWORD PTR [r11+0x68]
0x140718b78: test   rax,0xfffffffffffffffc
0x140718b7e: je     0x140719207
0x140718b84: mov    QWORD PTR [rsp+0x58],r13
0x140718b89: mov    QWORD PTR [rsp+0x50],r14
0x140718b8e: movsx  ecx,WORD PTR [r11]
0x140718b92: sub    ecx,0x2
0x140718b95: je     0x140719739
0x140718b9b: sub    ecx,0x1
0x140718b9e: je     0x140719243
0x140718ba4: cmp    ecx,0x1
0x140718ba7: jne    0x140719207
0x140718bad: mov    r9d,r12d
0x140718bb0: mov    DWORD PTR [rsp+0x48],r12d
0x140718bb5: mov    r15d,r12d
0x140718bb8: mov    r14d,r12d
0x140718bbb: mov    DWORD PTR [rsp+0x38],r12d
0x140718bc0: mov    DWORD PTR [rbp-0x70],r12d
0x140718bc4: mov    r13d,r12d
0x140718bc7: mov    DWORD PTR [rbp-0x48],r12d
0x140718bcb: mov    DWORD PTR [rbp-0x78],r12d
0x140718bcf: xor    ecx,ecx
0x140718bd1: mov    esi,ecx
0x140718bd3: mov    DWORD PTR [rsp+0x70],ecx
0x140718bd7: mov    edx,0xffffffff
0x140718bdc: mov    DWORD PTR [rbp-0x58],edx
0x140718bdf: mov    r8d,ecx
0x140718be2: mov    DWORD PTR [rsp+0x78],ecx
0x140718be6: test   r10,r10
0x140718be9: je     0x140719008
0x140718bef: mov    rcx,QWORD PTR [r11+0x8]
0x140718bf3: mov    rdi,QWORD PTR [rsp+0x50]
0x140718bf8: mov    rdi,QWORD PTR [rdi+0x1620]
0x140718bff: mov    rax,QWORD PTR [rsp+0x40]
0x140718c04: mov    r14,QWORD PTR [rax+0x700]
0x140718c0b: mov    r11,QWORD PTR [rax+0x708]
0x140718c12: sub    r11,r14
0x140718c15: sar    r11,0x2
0x140718c19: mov    QWORD PTR [rbp-0x68],r11
0x140718c1d: xor    eax,eax
0x140718c1f: mov    r12d,eax
0x140718c22: movzx  ebx,dx
0x140718c25: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x140718c30: movsxd rsi,DWORD PTR [rcx+r12*1]
0x140718c34: mov    rdx,QWORD PTR [rdi+rsi*8]
0x140718c38: test   r8d,r8d
0x140718c3b: jne    0x140718c54
0x140718c3d: mov    rax,QWORD PTR [rdx+0x80]
0x140718c44: movzx  ebx,WORD PTR [rax]
0x140718c47: mov    rax,QWORD PTR [rdx+0x98]
0x140718c4e: movsx  eax,WORD PTR [rax]
0x140718c51: mov    DWORD PTR [rbp-0x58],eax
0x140718c54: xor    eax,eax
0x140718c56: mov    r10d,eax
0x140718c59: mov    r8d,eax
0x140718c5c: test   r11,r11
0x140718c5f: je     0x140718cac
0x140718c61: mov    rax,QWORD PTR [rsp+0x50]
0x140718c66: mov    r11,QWORD PTR [rax+0x1638]
0x140718c6d: nop    DWORD PTR [rax]
0x140718c70: lea    r9,[r8*4+0x0]
0x140718c78: cmp    DWORD PTR [r11+r9*1],esi
0x140718c7c: je     0x140718d5e
0x140718c82: inc    r10d
0x140718c85: inc    r8
0x140718c88: mov    rax,QWORD PTR [rsp+0x40]
0x140718c8d: mov    rcx,QWORD PTR [rax+0x708]
0x140718c94: sub    rcx,r14
0x140718c97: sar    rcx,0x2
0x140718c9b: movsxd rax,r10d
0x140718c9e: cmp    rax,rcx
0x140718ca1: jb     0x140718c70
0x140718ca3: mov    r9d,DWORD PTR [rsp+0x48]
0x140718ca8: mov    r11,QWORD PTR [rbp-0x68]
0x140718cac: mov    esi,DWORD PTR [rsp+0x70]
0x140718cb0: mov    r8d,DWORD PTR [rsp+0x78]
0x140718cb5: inc    r8d
0x140718cb8: mov    DWORD PTR [rsp+0x78],r8d
0x140718cbd: add    r12,0x4
0x140718cc1: mov    rax,QWORD PTR [rbp-0x60]
0x140718cc5: mov    rcx,QWORD PTR [rax+0x8]
0x140718cc9: movsxd rax,r8d
0x140718ccc: cmp    rax,QWORD PTR [rbp-0x50]
0x140718cd0: jb     0x140718c30
0x140718cd6: mov    WORD PTR [rsp+0x60],bx
0x140718cdb: cmp    bx,0xffff
0x140718cdf: mov    rbx,QWORD PTR [rbp-0x40]
0x140718ce3: mov    rdi,QWORD PTR [rbp-0x38]
0x140718ce7: je     0x140718fff
0x140718ced: movsx  r8,WORD PTR [rsp+0x60]
0x140718cf3: mov    rax,QWORD PTR [rbp+0x130]
0x140718cfa: cmp    BYTE PTR [r8+rax*1],0x0
0x140718cff: jne    0x140719437
0x140718d05: movsxd rdx,DWORD PTR [rbp-0x58]
0x140718d09: mov    r10,QWORD PTR [rsp+0x40]
0x140718d0e: cmp    edx,0xffffffff
0x140718d11: je     0x140718d3e
0x140718d13: mov    rax,QWORD PTR [r10+0x5f8]
0x140718d1a: mov    rcx,QWORD PTR [rax]
0x140718d1d: mov    rax,QWORD PTR [rcx+r8*8]
0x140718d21: mov    rax,QWORD PTR [rax+0x58]
0x140718d25: mov    rcx,QWORD PTR [rax+rdx*8]
0x140718d29: movsxd rdx,DWORD PTR [rcx+0x68]
0x140718d2d: mov    rax,QWORD PTR [r10+0x538]
0x140718d34: test   BYTE PTR [rax+rdx*4],0x1
0x140718d38: jne    0x14071a12d
0x140718d3e: mov    rax,QWORD PTR [r10+0x4f0]
0x140718d45: test   BYTE PTR [rax+r8*4],0x2
0x140718d4a: jne    0x140719437
0x140718d50: mov    r14d,DWORD PTR [rsp+0x38]
0x140718d55: mov    r12d,DWORD PTR [rbp-0x78]
0x140718d59: jmp    0x14071900d
0x140718d5e: movsx  ecx,WORD PTR [rdx]
0x140718d61: sub    ecx,0x10
0x140718d64: je     0x140718f93
0x140718d6a: sub    ecx,0x1
0x140718d6d: je     0x140718ec0
0x140718d73: sub    ecx,0x1
0x140718d76: je     0x140718e01
0x140718d7c: cmp    ecx,0x1
0x140718d7f: jne    0x140718ca3
0x140718d85: mov    eax,DWORD PTR [r14+r9*1]
0x140718d89: cmp    eax,DWORD PTR [rdx+0x20]
0x140718d8c: jg     0x140718d97
0x140718d8e: mov    DWORD PTR [rbp-0x78],0xfffffffd
0x140718d95: jmp    0x140718de3
0x140718d97: cmp    eax,DWORD PTR [rdx+0x24]
0x140718d9a: jg     0x140718da5
0x140718d9c: mov    DWORD PTR [rbp-0x78],0xfffffffe
0x140718da3: jmp    0x140718de3
0x140718da5: cmp    eax,DWORD PTR [rdx+0x28]
0x140718da8: jg     0x140718db3
0x140718daa: mov    DWORD PTR [rbp-0x78],0xffffffff
0x140718db1: jmp    0x140718de3
0x140718db3: cmp    eax,DWORD PTR [rdx+0x34]
0x140718db6: jl     0x140718dc1
0x140718db8: mov    DWORD PTR [rbp-0x78],0x3
0x140718dbf: jmp    0x140718de3
0x140718dc1: cmp    eax,DWORD PTR [rdx+0x30]
0x140718dc4: jl     0x140718dcf
0x140718dc6: mov    DWORD PTR [rbp-0x78],0x2
0x140718dcd: jmp    0x140718de3
0x140718dcf: mov    r11d,DWORD PTR [rbp-0x78]
0x140718dd3: cmp    eax,DWORD PTR [rdx+0x2c]
0x140718dd6: mov    eax,0x1
0x140718ddb: cmovge r11d,eax
0x140718ddf: mov    DWORD PTR [rbp-0x78],r11d
0x140718de3: mov    rcx,QWORD PTR [rbp-0x60]
0x140718de7: mov    rax,QWORD PTR [rcx+0x20]
0x140718deb: mov    esi,DWORD PTR [r12+rax*1]
0x140718def: mov    DWORD PTR [rsp+0x70],esi
0x140718df3: mov    r9d,DWORD PTR [rsp+0x48]
0x140718df8: mov    r11,QWORD PTR [rbp-0x68]
0x140718dfc: jmp    0x140718cb0
0x140718e01: mov    eax,DWORD PTR [r14+r9*1]
0x140718e05: cmp    eax,DWORD PTR [rdx+0x20]
0x140718e08: jg     0x140718e24
0x140718e0a: mov    r13d,0xfffffffd
0x140718e10: mov    rcx,QWORD PTR [rbp-0x60]
0x140718e14: mov    rax,QWORD PTR [rcx+0x20]
0x140718e18: mov    edx,DWORD PTR [r12+rax*1]
0x140718e1c: mov    DWORD PTR [rbp-0x48],edx
0x140718e1f: jmp    0x140718ca3
0x140718e24: cmp    eax,DWORD PTR [rdx+0x24]
0x140718e27: jg     0x140718e43
0x140718e29: mov    r13d,0xfffffffe
0x140718e2f: mov    rcx,QWORD PTR [rbp-0x60]
0x140718e33: mov    rax,QWORD PTR [rcx+0x20]
0x140718e37: mov    edx,DWORD PTR [r12+rax*1]
0x140718e3b: mov    DWORD PTR [rbp-0x48],edx
0x140718e3e: jmp    0x140718ca3
0x140718e43: cmp    eax,DWORD PTR [rdx+0x28]
0x140718e46: jg     0x140718e62
0x140718e48: mov    r13d,0xffffffff
0x140718e4e: mov    rcx,QWORD PTR [rbp-0x60]
0x140718e52: mov    rax,QWORD PTR [rcx+0x20]
0x140718e56: mov    edx,DWORD PTR [r12+rax*1]
0x140718e5a: mov    DWORD PTR [rbp-0x48],edx
0x140718e5d: jmp    0x140718ca3
0x140718e62: cmp    eax,DWORD PTR [rdx+0x34]
0x140718e65: jl     0x140718e81
0x140718e67: mov    r13d,0x3
0x140718e6d: mov    rcx,QWORD PTR [rbp-0x60]
0x140718e71: mov    rax,QWORD PTR [rcx+0x20]
0x140718e75: mov    edx,DWORD PTR [r12+rax*1]
0x140718e79: mov    DWORD PTR [rbp-0x48],edx
0x140718e7c: jmp    0x140718ca3
0x140718e81: cmp    eax,DWORD PTR [rdx+0x30]
0x140718e84: jl     0x140718ea0
0x140718e86: mov    r13d,0x2
0x140718e8c: mov    rcx,QWORD PTR [rbp-0x60]
0x140718e90: mov    rax,QWORD PTR [rcx+0x20]
0x140718e94: mov    edx,DWORD PTR [r12+rax*1]
0x140718e98: mov    DWORD PTR [rbp-0x48],edx
0x140718e9b: jmp    0x140718ca3
0x140718ea0: cmp    eax,DWORD PTR [rdx+0x2c]
0x140718ea3: mov    eax,0x1
0x140718ea8: cmovge r13d,eax
0x140718eac: mov    rcx,QWORD PTR [rbp-0x60]
0x140718eb0: mov    rax,QWORD PTR [rcx+0x20]
0x140718eb4: mov    edx,DWORD PTR [r12+rax*1]
0x140718eb8: mov    DWORD PTR [rbp-0x48],edx
0x140718ebb: jmp    0x140718ca3
0x140718ec0: mov    eax,DWORD PTR [r14+r9*1]
0x140718ec4: cmp    eax,DWORD PTR [rdx+0x20]
0x140718ec7: jg     0x140718ee5
0x140718ec9: mov    DWORD PTR [rsp+0x38],0xfffffffd
0x140718ed1: mov    rcx,QWORD PTR [rbp-0x60]
0x140718ed5: mov    rax,QWORD PTR [rcx+0x20]
0x140718ed9: mov    edx,DWORD PTR [r12+rax*1]
0x140718edd: mov    DWORD PTR [rbp-0x70],edx
0x140718ee0: jmp    0x140718ca3
0x140718ee5: cmp    eax,DWORD PTR [rdx+0x24]
0x140718ee8: jg     0x140718f06
0x140718eea: mov    DWORD PTR [rsp+0x38],0xfffffffe
0x140718ef2: mov    rcx,QWORD PTR [rbp-0x60]
0x140718ef6: mov    rax,QWORD PTR [rcx+0x20]
0x140718efa: mov    edx,DWORD PTR [r12+rax*1]
0x140718efe: mov    DWORD PTR [rbp-0x70],edx
0x140718f01: jmp    0x140718ca3
0x140718f06: cmp    eax,DWORD PTR [rdx+0x28]
0x140718f09: jg     0x140718f27
0x140718f0b: mov    DWORD PTR [rsp+0x38],0xffffffff
0x140718f13: mov    rcx,QWORD PTR [rbp-0x60]
0x140718f17: mov    rax,QWORD PTR [rcx+0x20]
0x140718f1b: mov    edx,DWORD PTR [r12+rax*1]
0x140718f1f: mov    DWORD PTR [rbp-0x70],edx
0x140718f22: jmp    0x140718ca3
0x140718f27: cmp    eax,DWORD PTR [rdx+0x34]
0x140718f2a: jl     0x140718f48
0x140718f2c: mov    DWORD PTR [rsp+0x38],0x3
0x140718f34: mov    rcx,QWORD PTR [rbp-0x60]
0x140718f38: mov    rax,QWORD PTR [rcx+0x20]
0x140718f3c: mov    edx,DWORD PTR [r12+rax*1]
0x140718f40: mov    DWORD PTR [rbp-0x70],edx
0x140718f43: jmp    0x140718ca3
0x140718f48: cmp    eax,DWORD PTR [rdx+0x30]
0x140718f4b: jl     0x140718f69
0x140718f4d: mov    DWORD PTR [rsp+0x38],0x2
0x140718f55: mov    rcx,QWORD PTR [rbp-0x60]
0x140718f59: mov    rax,QWORD PTR [rcx+0x20]
0x140718f5d: mov    edx,DWORD PTR [r12+rax*1]
0x140718f61: mov    DWORD PTR [rbp-0x70],edx
0x140718f64: jmp    0x140718ca3
0x140718f69: mov    r11d,DWORD PTR [rsp+0x38]
0x140718f6e: cmp    eax,DWORD PTR [rdx+0x2c]
0x140718f71: mov    eax,0x1
0x140718f76: cmovge r11d,eax
0x140718f7a: mov    DWORD PTR [rsp+0x38],r11d
0x140718f7f: mov    rcx,QWORD PTR [rbp-0x60]
0x140718f83: mov    rax,QWORD PTR [rcx+0x20]
0x140718f87: mov    edx,DWORD PTR [r12+rax*1]
0x140718f8b: mov    DWORD PTR [rbp-0x70],edx
0x140718f8e: jmp    0x140718ca3
0x140718f93: mov    eax,DWORD PTR [r14+r9*1]
0x140718f97: cmp    eax,DWORD PTR [rdx+0x20]
0x140718f9a: jg     0x140718fa4
0x140718f9c: mov    r9d,0xfffffffd
0x140718fa2: jmp    0x140718fe9
0x140718fa4: cmp    eax,DWORD PTR [rdx+0x24]
0x140718fa7: jg     0x140718fb1
0x140718fa9: mov    r9d,0xfffffffe
0x140718faf: jmp    0x140718fe9
0x140718fb1: cmp    eax,DWORD PTR [rdx+0x28]
0x140718fb4: jg     0x140718fbe
0x140718fb6: mov    r9d,0xffffffff
0x140718fbc: jmp    0x140718fe9
0x140718fbe: cmp    eax,DWORD PTR [rdx+0x34]
0x140718fc1: jl     0x140718fcb
0x140718fc3: mov    r9d,0x3
0x140718fc9: jmp    0x140718fe9
0x140718fcb: cmp    eax,DWORD PTR [rdx+0x30]
0x140718fce: jl     0x140718fd8
0x140718fd0: mov    r9d,0x2
0x140718fd6: jmp    0x140718fe9
0x140718fd8: mov    r9d,DWORD PTR [rsp+0x48]
0x140718fdd: cmp    eax,DWORD PTR [rdx+0x2c]
0x140718fe0: mov    eax,0x1
0x140718fe5: cmovge r9d,eax
0x140718fe9: mov    DWORD PTR [rsp+0x48],r9d
0x140718fee: mov    rcx,QWORD PTR [rbp-0x60]
0x140718ff2: mov    rax,QWORD PTR [rcx+0x20]
0x140718ff6: mov    r15d,DWORD PTR [r12+rax*1]
0x140718ffa: jmp    0x140718ca8
0x140718fff: mov    r14d,DWORD PTR [rsp+0x38]
0x140719004: mov    r12d,DWORD PTR [rbp-0x78]
0x140719008: mov    r10,QWORD PTR [rsp+0x40]
0x14071900d: cmp    r15d,DWORD PTR [rsp+0x4c]
0x140719012: jle    0x140719057
0x140719014: lea    eax,[r9+0x1]
0x140719018: cmp    eax,0x2
0x14071901b: jbe    0x140719057
0x14071901d: mov    DWORD PTR [rsp+0x4c],r15d
0x140719022: lea    rcx,[r10+0x13e8]
0x140719029: cmp    r9d,0x2
0x14071902d: jl     0x140719043
0x14071902f: mov    r8d,0xf
0x140719035: lea    rdx,[rip+0xf6d1cc]        # 0x141686208 ; SOURCE 'high-cheekbones'
0x14071903c: call   0x14006f8d0
0x140719041: jmp    0x14071905c
0x140719043: mov    r8d,0xe
0x140719049: lea    rdx,[rip+0xf6d1a8]        # 0x1416861f8 ; SOURCE 'low-cheekbones'
0x140719050: call   0x14006f8d0
0x140719055: jmp    0x14071905c
0x140719057: mov    r15d,DWORD PTR [rsp+0x4c]
0x14071905c: cmp    esi,r15d
0x14071905f: jle    0x1407190b0
0x140719061: lea    eax,[r12+0x1]
0x140719066: cmp    eax,0x2
0x140719069: jbe    0x1407190b0
0x14071906b: mov    r15d,esi
0x14071906e: mov    DWORD PTR [rsp+0x4c],esi
0x140719072: mov    rsi,QWORD PTR [rsp+0x40]
0x140719077: lea    rcx,[rsi+0x13e8]
0x14071907e: cmp    DWORD PTR [rsp+0x48],0x2
0x140719083: jl     0x14071909c
0x140719085: mov    r12d,0xb
0x14071908b: mov    r8d,r12d
0x14071908e: lea    rdx,[rip+0xf6d153]        # 0x1416861e8 ; SOURCE 'square-chin'
0x140719095: call   0x14006f8d0
0x14071909a: jmp    0x1407190bb
0x14071909c: mov    r8d,0xa
0x1407190a2: lea    rdx,[rip+0xf6d12f]        # 0x1416861d8 ; SOURCE 'round-chin'
0x1407190a9: call   0x14006f8d0
0x1407190ae: jmp    0x1407190b5
0x1407190b0: mov    rsi,QWORD PTR [rsp+0x40]
0x1407190b5: mov    r12d,0xb
0x1407190bb: mov    ecx,DWORD PTR [rbp-0x70]
0x1407190be: mov    edx,DWORD PTR [rbp-0x48]
0x1407190c1: cmp    ecx,r15d
0x1407190c4: jg     0x1407190cf
0x1407190c6: cmp    edx,r15d
0x1407190c9: jle    0x1407191fd
0x1407190cf: lea    eax,[r14+0x1]
0x1407190d3: cmp    eax,0x2
0x1407190d6: ja     0x1407190e5
0x1407190d8: lea    eax,[r13+0x1]
0x1407190dc: cmp    eax,0x2
0x1407190df: jbe    0x1407191fd
0x1407190e5: cmp    ecx,r15d
0x1407190e8: cmovg  r15d,ecx
0x1407190ec: cmp    edx,r15d
0x1407190ef: cmovg  r15d,edx
0x1407190f3: mov    DWORD PTR [rsp+0x4c],r15d
0x1407190f8: cmp    r14d,0x3
0x1407190fc: jne    0x140719149
0x1407190fe: cmp    r13d,r14d
0x140719101: jne    0x140719121
0x140719103: lea    rdx,[rip+0xf6d0be]        # 0x1416861c8 ; SOURCE 'massive-chin'
0x14071910a: mov    r8d,0xc
0x140719110: lea    rcx,[rsi+0x13e8]
0x140719117: call   0x14006f8d0
0x14071911c: jmp    0x1407191fd
0x140719121: cmp    r13d,0xfffffffd
0x140719125: jne    0x1407191ab
0x14071912b: mov    r8d,0xd
0x140719131: lea    rdx,[rip+0xf6d080]        # 0x1416861b8 ; SOURCE 'recessed-chin'
0x140719138: lea    rcx,[rsi+0x13e8]
0x14071913f: call   0x14006f8d0
0x140719144: jmp    0x1407191fd
0x140719149: cmp    r14d,0xfffffffd
0x14071914d: jne    0x140719166
0x14071914f: cmp    r13d,0x3
0x140719153: jne    0x14071915e
0x140719155: lea    rdx,[rip+0xf6d04c]        # 0x1416861a8 ; SOURCE 'jutting-chin'
0x14071915c: jmp    0x14071910a
0x14071915e: cmp    r13d,0xfffffffd
0x140719162: jne    0x1407191cc
0x140719164: jmp    0x14071912b
0x140719166: cmp    r14d,0x2
0x14071916a: jne    0x140719192
0x14071916c: cmp    r13d,r14d
0x14071916f: jne    0x14071918c
0x140719171: mov    r8d,0xe
0x140719177: lea    rdx,[rip+0xf6d01a]        # 0x141686198 ; SOURCE 'prominent-chin'
0x14071917e: lea    rcx,[rsi+0x13e8]
0x140719185: call   0x14006f8d0
0x14071918a: jmp    0x1407191fd
0x14071918c: cmp    r13d,0xfffffffe
0x140719190: jmp    0x140719125
0x140719192: cmp    r14d,0xfffffffe
0x140719196: jne    0x1407191a5
0x140719198: cmp    r13d,0x2
0x14071919c: je     0x140719171
0x14071919e: cmp    r13d,r14d
0x1407191a1: jne    0x1407191cc
0x1407191a3: jmp    0x14071912b
0x1407191a5: cmp    r14d,0x2
0x1407191a9: jl     0x1407191c6
0x1407191ab: mov    r8d,0xa
0x1407191b1: lea    rdx,[rip+0xf6cfd0]        # 0x141686188 ; SOURCE 'broad-chin'
0x1407191b8: lea    rcx,[rsi+0x13e8]
0x1407191bf: call   0x14006f8d0
0x1407191c4: jmp    0x1407191fd
0x1407191c6: cmp    r14d,0xfffffffe
0x1407191ca: jg     0x1407191e4
0x1407191cc: mov    r8,r12
0x1407191cf: lea    rdx,[rip+0xf6cfa2]        # 0x141686178 ; SOURCE 'narrow-chin'
0x1407191d6: lea    rcx,[rsi+0x13e8]
0x1407191dd: call   0x14006f8d0
0x1407191e2: jmp    0x1407191fd
0x1407191e4: cmp    r13d,0x3
0x1407191e8: jl     0x140719225
0x1407191ea: lea    rdx,[rip+0xf6cfb7]        # 0x1416861a8 ; SOURCE 'jutting-chin'
0x1407191f1: lea    rcx,[rsi+0x13e8]
0x1407191f8: call   0x14006f580
0x1407191fd: mov    r14,QWORD PTR [rsp+0x50]
0x140719202: mov    r13,QWORD PTR [rsp+0x58]
0x140719207: lea    rcx,[rbp+0x170]
0x14071920e: call   0x14006f850
0x140719213: nop
0x140719214: lea    rcx,[rbp+0x150]
0x14071921b: call   0x14006f850
0x140719220: jmp    0x140718aff
0x140719225: cmp    r13d,0x2
0x140719229: jl     0x140719234
0x14071922b: lea    rdx,[rip+0xf6cf66]        # 0x141686198 ; SOURCE 'prominent-chin'
0x140719232: jmp    0x1407191f1
0x140719234: cmp    r13d,0xfffffffe
0x140719238: jg     0x1407191fd
0x14071923a: lea    rdx,[rip+0xf6cf77]        # 0x1416861b8 ; SOURCE 'recessed-chin'
0x140719241: jmp    0x1407191f1
0x140719243: mov    DWORD PTR [rsp+0x48],r12d
0x140719248: mov    r13d,r12d
0x14071924b: mov    ecx,0xffffffff
0x140719250: mov    WORD PTR [rsp+0x60],cx
0x140719255: mov    DWORD PTR [rbp-0x70],ecx
0x140719258: mov    r11d,DWORD PTR [rsp+0x4c]
0x14071925d: test   r10,r10
0x140719260: je     0x140719202
0x140719262: mov    rcx,r9
0x140719265: mov    r9,QWORD PTR [r14+0x1620]
0x14071926c: mov    QWORD PTR [rbp-0x78],r9
0x140719270: mov    r15,QWORD PTR [rsi+0x708]
0x140719277: mov    QWORD PTR [rsp+0x70],r15
0x14071927c: mov    r14,QWORD PTR [rsi+0x700]
0x140719283: mov    QWORD PTR [rbp-0x48],r14
0x140719287: mov    r8,r15
0x14071928a: sub    r8,r14
0x14071928d: sar    r8,0x2
0x140719291: mov    QWORD PTR [rsp+0x78],r8
0x140719296: mov    rdx,r12
0x140719299: mov    QWORD PTR [rbp-0x68],rdx
0x14071929d: mov    edi,r12d
0x1407192a0: movzx  ebx,WORD PTR [rsp+0x60]
0x1407192a5: jmp    0x1407192b9
0x1407192a7: nop    WORD PTR [rax+rax*1+0x0]
0x1407192b0: mov    r14,QWORD PTR [rbp-0x48]
0x1407192b4: mov    r15,QWORD PTR [rsp+0x70]
0x1407192b9: movsxd rsi,DWORD PTR [rdx+rcx*1]
0x1407192bd: mov    r9,QWORD PTR [r9+rsi*8]
0x1407192c1: mov    rcx,QWORD PTR [rbp-0x60]
0x1407192c5: mov    rax,QWORD PTR [rcx+0x20]
0x1407192c9: mov    eax,DWORD PTR [rax+rdx*1]
0x1407192cc: cmp    eax,r11d
0x1407192cf: cmovle eax,r11d
0x1407192d3: mov    r11d,eax
0x1407192d6: mov    DWORD PTR [rsp+0x38],eax
0x1407192da: test   edi,edi
0x1407192dc: jne    0x1407192fc
0x1407192de: mov    rax,QWORD PTR [r9+0x80]
0x1407192e5: movzx  ebx,WORD PTR [rax]
0x1407192e8: mov    WORD PTR [rsp+0x60],bx
0x1407192ed: mov    rax,QWORD PTR [r9+0x98]
0x1407192f4: movsx  r12d,WORD PTR [rax]
0x1407192f8: mov    DWORD PTR [rbp-0x70],r12d
0x1407192fc: xor    eax,eax
0x1407192fe: mov    r10d,eax
0x140719301: mov    edx,eax
0x140719303: test   r8,r8
0x140719306: je     0x140719348
0x140719308: mov    rax,QWORD PTR [rsp+0x50]
0x14071930d: mov    r11,QWORD PTR [rax+0x1638]
0x140719314: lea    r8,[rdx*4+0x0]
0x14071931c: cmp    DWORD PTR [r11+r8*1],esi
0x140719320: je     0x140719441
0x140719326: inc    r10d
0x140719329: inc    rdx
0x14071932c: mov    rcx,r15
0x14071932f: sub    rcx,r14
0x140719332: sar    rcx,0x2
0x140719336: movsxd rax,r10d
0x140719339: cmp    rax,rcx
0x14071933c: jb     0x140719314
0x14071933e: mov    r11d,DWORD PTR [rsp+0x38]
0x140719343: mov    r8,QWORD PTR [rsp+0x78]
0x140719348: mov    r10d,DWORD PTR [rsp+0x48]
0x14071934d: mov    rsi,QWORD PTR [rsp+0x58]
0x140719352: mov    r14,QWORD PTR [rsp+0x50]
0x140719357: mov    r15,rsi
0x14071935a: mov    r12,r14
0x14071935d: inc    edi
0x14071935f: mov    rdx,QWORD PTR [rbp-0x68]
0x140719363: add    rdx,0x4
0x140719367: mov    QWORD PTR [rbp-0x68],rdx
0x14071936b: mov    rax,QWORD PTR [rbp-0x60]
0x14071936f: mov    rcx,QWORD PTR [rax+0x8]
0x140719373: movsxd rax,edi
0x140719376: cmp    rax,QWORD PTR [rbp-0x50]
0x14071937a: mov    r9,QWORD PTR [rbp-0x78]
0x14071937e: jb     0x1407192b0
0x140719384: cmp    bx,0xffff
0x140719388: mov    rbx,QWORD PTR [rbp-0x40]
0x14071938c: mov    rdi,QWORD PTR [rbp-0x38]
0x140719390: je     0x1407193f5
0x140719392: movsx  r8,WORD PTR [rsp+0x60]
0x140719398: mov    rax,QWORD PTR [rbp+0x130]
0x14071939f: cmp    BYTE PTR [r8+rax*1],0x0
0x1407193a4: jne    0x14071a120
0x1407193aa: movsxd rdx,DWORD PTR [rbp-0x70]
0x1407193ae: mov    r9,QWORD PTR [rsp+0x40]
0x1407193b3: cmp    edx,0xffffffff
0x1407193b6: je     0x1407193e3
0x1407193b8: mov    rax,QWORD PTR [r9+0x5f8]
0x1407193bf: mov    rcx,QWORD PTR [rax]
0x1407193c2: mov    rax,QWORD PTR [rcx+r8*8]
0x1407193c6: mov    rax,QWORD PTR [rax+0x58]
0x1407193ca: mov    rcx,QWORD PTR [rax+rdx*8]
0x1407193ce: movsxd rdx,DWORD PTR [rcx+0x68]
0x1407193d2: mov    rax,QWORD PTR [r9+0x538]
0x1407193d9: test   BYTE PTR [rax+rdx*4],0x1
0x1407193dd: jne    0x14071a135
0x1407193e3: mov    rax,QWORD PTR [r9+0x4f0]
0x1407193ea: test   BYTE PTR [rax+r8*4],0x2
0x1407193ef: jne    0x14071a120
0x1407193f5: cmp    r11d,DWORD PTR [rsp+0x4c]
0x1407193fa: jle    0x14071a120
0x140719400: test   r10d,r10d
0x140719403: jne    0x14071956b
0x140719409: test   r13d,r13d
0x14071940c: je     0x14071a120
0x140719412: cmp    r13d,0xfffffffd
0x140719416: jne    0x1407196e6
0x14071941c: lea    rdx,[rip+0xf6bffd]        # 0x141685420 ; SOURCE 'high-voiced'
0x140719423: mov    rcx,QWORD PTR [rsp+0x68]
0x140719428: call   0x14006f580
0x14071942d: mov    r15d,DWORD PTR [rsp+0x38]
0x140719432: mov    DWORD PTR [rsp+0x4c],r15d
0x140719437: mov    rsi,QWORD PTR [rsp+0x40]
0x14071943c: jmp    0x1407191fd
0x140719441: movsx  ecx,WORD PTR [r9]
0x140719445: sub    ecx,0x16
0x140719448: je     0x1407194f1
0x14071944e: cmp    ecx,0x1
0x140719451: jne    0x14071933e
0x140719457: mov    eax,DWORD PTR [r8+r14*1]
0x14071945b: mov    r11d,DWORD PTR [rsp+0x38]
0x140719460: mov    r8,QWORD PTR [rsp+0x78]
0x140719465: cmp    eax,DWORD PTR [r9+0x20]
0x140719469: jg     0x14071947b
0x14071946b: mov    r10d,0xfffffffd
0x140719471: mov    DWORD PTR [rsp+0x48],r10d
0x140719476: jmp    0x14071934d
0x14071947b: cmp    eax,DWORD PTR [r9+0x24]
0x14071947f: jg     0x140719491
0x140719481: mov    r10d,0xfffffffe
0x140719487: mov    DWORD PTR [rsp+0x48],r10d
0x14071948c: jmp    0x14071934d
0x140719491: cmp    eax,DWORD PTR [r9+0x28]
0x140719495: jg     0x1407194a8
0x140719497: mov    eax,0xffffffff
0x14071949c: mov    r10d,eax
0x14071949f: mov    DWORD PTR [rsp+0x48],eax
0x1407194a3: jmp    0x14071934d
0x1407194a8: cmp    eax,DWORD PTR [r9+0x34]
0x1407194ac: jl     0x1407194bf
0x1407194ae: mov    eax,0x3
0x1407194b3: mov    r10d,eax
0x1407194b6: mov    DWORD PTR [rsp+0x48],eax
0x1407194ba: jmp    0x14071934d
0x1407194bf: cmp    eax,DWORD PTR [r9+0x30]
0x1407194c3: jl     0x1407194d6
0x1407194c5: mov    eax,0x2
0x1407194ca: mov    r10d,eax
0x1407194cd: mov    DWORD PTR [rsp+0x48],eax
0x1407194d1: jmp    0x14071934d
0x1407194d6: cmp    eax,DWORD PTR [r9+0x2c]
0x1407194da: jl     0x140719348
0x1407194e0: mov    eax,0x1
0x1407194e5: mov    r10d,eax
0x1407194e8: mov    DWORD PTR [rsp+0x48],eax
0x1407194ec: jmp    0x14071934d
0x1407194f1: mov    eax,DWORD PTR [r8+r14*1]
0x1407194f5: cmp    eax,DWORD PTR [r9+0x20]
0x1407194f9: jg     0x140719506
0x1407194fb: mov    r13d,0xfffffffd
0x140719501: jmp    0x14071933e
0x140719506: cmp    eax,DWORD PTR [r9+0x24]
0x14071950a: jg     0x140719517
0x14071950c: mov    r13d,0xfffffffe
0x140719512: jmp    0x14071933e
0x140719517: cmp    eax,DWORD PTR [r9+0x28]
0x14071951b: jg     0x140719528
0x14071951d: mov    r13d,0xffffffff
0x140719523: jmp    0x14071933e
0x140719528: mov    r11d,DWORD PTR [rsp+0x38]
0x14071952d: mov    r8,QWORD PTR [rsp+0x78]
0x140719532: cmp    eax,DWORD PTR [r9+0x34]
0x140719536: jl     0x140719543
0x140719538: mov    r13d,0x3
0x14071953e: jmp    0x140719348
0x140719543: mov    r10d,DWORD PTR [rsp+0x48]
0x140719548: cmp    eax,DWORD PTR [r9+0x30]
0x14071954c: jl     0x140719559
0x14071954e: mov    r13d,0x2
0x140719554: jmp    0x14071934d
0x140719559: cmp    eax,DWORD PTR [r9+0x2c]
0x14071955d: mov    eax,0x1
0x140719562: cmovge r13d,eax
0x140719566: jmp    0x14071934d
0x14071956b: cmp    r10d,0x3
0x14071956f: jne    0x1407195e3
0x140719571: cmp    r13d,r10d
0x140719574: jne    0x1407195a1
0x140719576: mov    r8d,0xf
0x14071957c: lea    rdx,[rip+0xf6cdad]        # 0x141686330 ; SOURCE 'guttural-voiced'
0x140719583: mov    rcx,QWORD PTR [rsp+0x68]
0x140719588: call   0x14006f8d0
0x14071958d: mov    r15d,DWORD PTR [rsp+0x38]
0x140719592: mov    DWORD PTR [rsp+0x4c],r15d
0x140719597: mov    rsi,QWORD PTR [rsp+0x40]
0x14071959c: jmp    0x140719202
0x1407195a1: mov    QWORD PTR [rsp+0x50],r14
0x1407195a6: mov    QWORD PTR [rsp+0x58],rsi
0x1407195ab: cmp    r13d,0xfffffffd
0x1407195af: jne    0x140719649
0x1407195b5: mov    r8d,0xe
0x1407195bb: lea    rdx,[rip+0xf6cd5e]        # 0x141686320 ; SOURCE 'grating-voiced'
0x1407195c2: mov    rcx,QWORD PTR [rsp+0x68]
0x1407195c7: call   0x14006f8d0
0x1407195cc: mov    r15d,DWORD PTR [rsp+0x38]
0x1407195d1: mov    DWORD PTR [rsp+0x4c],r15d
0x1407195d6: mov    r13,rsi
0x1407195d9: mov    rsi,QWORD PTR [rsp+0x40]
0x1407195de: jmp    0x140719207
0x1407195e3: cmp    r10d,0xfffffffd
0x1407195e7: jne    0x140719639
0x1407195e9: cmp    r13d,r10d
0x1407195ec: jne    0x1407195fd
0x1407195ee: mov    r8d,0xc
0x1407195f4: lea    rdx,[rip+0xf6be05]        # 0x141685400 ; SOURCE 'clear-voiced'
0x1407195fb: jmp    0x140719583
0x1407195fd: mov    QWORD PTR [rsp+0x50],r12
0x140719602: mov    QWORD PTR [rsp+0x58],r15
0x140719607: cmp    r13d,0x3
0x14071960b: jne    0x14071967f
0x14071960d: mov    r8d,0xb
0x140719613: lea    rdx,[rip+0xf6be16]        # 0x141685430 ; SOURCE 'deep-voiced'
0x14071961a: mov    rcx,QWORD PTR [rsp+0x68]
0x14071961f: call   0x14006f8d0
0x140719624: mov    eax,DWORD PTR [rsp+0x38]
0x140719628: mov    DWORD PTR [rsp+0x4c],eax
0x14071962c: mov    r13,r15
0x14071962f: mov    rsi,QWORD PTR [rsp+0x40]
0x140719634: jmp    0x140719207
0x140719639: mov    QWORD PTR [rsp+0x50],r12
0x14071963e: mov    QWORD PTR [rsp+0x58],rsi
0x140719643: cmp    r10d,0x2
0x140719647: jl     0x140719679
0x140719649: cmp    r13d,0x2
0x14071964d: jl     0x140719661
0x14071964f: mov    r8d,0xc
0x140719655: lea    rdx,[rip+0xf6bdb4]        # 0x141685410 ; SOURCE 'raspy-voiced'
0x14071965c: jmp    0x140719583
0x140719661: cmp    r13d,0xfffffffe
0x140719665: jg     0x140719679
0x140719667: mov    r8d,0xe
0x14071966d: lea    rdx,[rip+0xf6cc9c]        # 0x141686310 ; SOURCE 'squeaky-voiced'
0x140719674: jmp    0x140719583
0x140719679: cmp    r10d,0xfffffffe
0x14071967d: jg     0x1407196b4
0x14071967f: cmp    r13d,0x2
0x140719683: jge    0x1407195ee
0x140719689: cmp    r13d,0xfffffffe
0x14071968d: jg     0x1407196b4
0x14071968f: lea    rdx,[rip+0xf6bd6a]        # 0x141685400 ; SOURCE 'clear-voiced'
0x140719696: mov    rcx,QWORD PTR [rsp+0x68]
0x14071969b: call   0x14006f580
0x1407196a0: mov    r15d,DWORD PTR [rsp+0x38]
0x1407196a5: mov    DWORD PTR [rsp+0x4c],r15d
0x1407196aa: mov    rsi,QWORD PTR [rsp+0x40]
0x1407196af: jmp    0x140719202
0x1407196b4: cmp    r10d,0xfffffffd
0x1407196b8: je     0x1407195ee
0x1407196be: cmp    r10d,0xfffffffe
0x1407196c2: je     0x14071968f
0x1407196c4: cmp    r10d,0x3
0x1407196c8: jne    0x1407196d3
0x1407196ca: lea    rdx,[rip+0xf6cc4f]        # 0x141686320 ; SOURCE 'grating-voiced'
0x1407196d1: jmp    0x140719696
0x1407196d3: cmp    r10d,0x2
0x1407196d7: jne    0x140719412
0x1407196dd: lea    rdx,[rip+0xf6cc1c]        # 0x141686300 ; SOURCE 'scratchy-voiced'
0x1407196e4: jmp    0x140719696
0x1407196e6: cmp    r13d,0xfffffffe
0x1407196ea: jne    0x140719711
0x1407196ec: lea    rdx,[rip+0xf6bd2d]        # 0x141685420 ; SOURCE 'high-voiced'
0x1407196f3: mov    rcx,QWORD PTR [rsp+0x68]
0x1407196f8: call   0x14006f580
0x1407196fd: mov    r15d,DWORD PTR [rsp+0x38]
0x140719702: mov    DWORD PTR [rsp+0x4c],r15d
0x140719707: mov    rsi,QWORD PTR [rsp+0x40]
0x14071970c: jmp    0x1407191fd
0x140719711: cmp    r13d,0x3
0x140719715: jne    0x140719723
0x140719717: lea    rdx,[rip+0xf6bd12]        # 0x141685430 ; SOURCE 'deep-voiced'
0x14071971e: jmp    0x140719423
0x140719723: cmp    r13d,0x2
0x140719727: jne    0x140719437
0x14071972d: lea    rdx,[rip+0xf6cae4]        # 0x141686218 ; SOURCE 'low-voiced'
0x140719734: jmp    0x140719423
0x140719739: test   r10,r10
0x14071973c: je     0x1407197a6
0x14071973e: movsxd rcx,DWORD PTR [r9]
0x140719741: mov    rax,QWORD PTR [r14+0x1620]
0x140719748: mov    rsi,QWORD PTR [rax+rcx*8]
0x14071974c: mov    rax,QWORD PTR [rsi+0x80]
0x140719753: movzx  r12d,WORD PTR [rax]
0x140719757: mov    WORD PTR [rsp+0x60],r12w
0x14071975d: mov    rax,QWORD PTR [rsi+0x98]
0x140719764: movzx  r13d,WORD PTR [rax]
0x140719768: mov    WORD PTR [rsp+0x38],r13w
0x14071976e: lea    rdx,[rsi+0x58]
0x140719772: lea    rax,[rbp+0x170]
0x140719779: cmp    rax,rdx
0x14071977c: je     0x14071979f
0x14071977e: mov    r8,QWORD PTR [rdx+0x10]
0x140719782: cmp    QWORD PTR [rdx+0x18],0xf
0x140719787: jbe    0x14071978c
0x140719789: mov    rdx,QWORD PTR [rdx]
0x14071978c: lea    rcx,[rbp+0x170]
0x140719793: call   0x14006f8d0
0x140719798: mov    r15,QWORD PTR [rbp+0x168]
0x14071979f: movzx  r9d,WORD PTR [rsi+0x78]
0x1407197a4: jmp    0x14071980d
0x1407197a6: mov    rax,QWORD PTR [r11+0x68]
0x1407197aa: movsxd rcx,DWORD PTR [rax]
0x1407197ad: mov    rax,QWORD PTR [r14+0x16c8]
0x1407197b4: mov    rsi,QWORD PTR [rax+rcx*8]
0x1407197b8: mov    rax,QWORD PTR [rsi+0x30]
0x1407197bc: movzx  r12d,WORD PTR [rax]
0x1407197c0: mov    WORD PTR [rsp+0x60],r12w
0x1407197c6: mov    rax,QWORD PTR [rsi+0x48]
0x1407197ca: movzx  r13d,WORD PTR [rax]
0x1407197ce: mov    WORD PTR [rsp+0x38],r13w
0x1407197d4: lea    rdx,[rsi+0x70]
0x1407197d8: lea    rax,[rbp+0x170]
0x1407197df: cmp    rax,rdx
0x1407197e2: je     0x140719805
0x1407197e4: mov    r8,QWORD PTR [rdx+0x10]
0x1407197e8: cmp    QWORD PTR [rdx+0x18],0xf
0x1407197ed: jbe    0x1407197f2
0x1407197ef: mov    rdx,QWORD PTR [rdx]
0x1407197f2: lea    rcx,[rbp+0x170]
0x1407197f9: call   0x14006f8d0
0x1407197fe: mov    r15,QWORD PTR [rbp+0x168]
0x140719805: movzx  r9d,WORD PTR [rsi+0x90]
0x14071980d: movsx  r8,r12w
0x140719811: mov    rax,QWORD PTR [rbp+0x130]
0x140719818: mov    rsi,QWORD PTR [rsp+0x40]
0x14071981d: cmp    BYTE PTR [rax+r8*1],0x0
0x140719822: jne    0x140719202
0x140719828: cmp    r13w,0xffff
0x14071982d: je     0x14071985e
0x14071982f: mov    rax,QWORD PTR [rsi+0x5f8]
0x140719836: mov    rcx,QWORD PTR [rax]
0x140719839: mov    rax,QWORD PTR [rcx+r8*8]
0x14071983d: movsx  rcx,r13w
0x140719841: mov    rax,QWORD PTR [rax+0x58]
0x140719845: mov    rcx,QWORD PTR [rax+rcx*8]
0x140719849: movsxd rdx,DWORD PTR [rcx+0x68]
0x14071984d: mov    rax,QWORD PTR [rsi+0x538]
0x140719854: test   BYTE PTR [rax+rdx*4],0x1
0x140719858: jne    0x140719202
0x14071985e: mov    rax,QWORD PTR [rsi+0x4f0]
0x140719865: test   BYTE PTR [rax+r8*4],0x2
0x14071986a: jne    0x140719202
0x140719870: cmp    r9w,0xffff
0x140719875: je     0x1407198a6
0x140719877: lea    rdx,[rbp+0x170]
0x14071987e: cmp    QWORD PTR [rbp+0x188],0xf
0x140719886: cmova  rdx,QWORD PTR [rbp+0x170]
0x14071988e: mov    r8,QWORD PTR [rbp+0x180]
0x140719895: lea    rcx,[rbp+0x150]
0x14071989c: call   0x14006f8d0
0x1407198a1: jmp    0x140719c6a
0x1407198a6: cmp    r13w,0xffff
0x1407198ab: je     0x140719c4d
0x1407198b1: test   r12w,r12w
0x1407198b5: js     0x140719aed
0x1407198bb: mov    rax,QWORD PTR [rsi+0x5f8]
0x1407198c2: mov    rdx,QWORD PTR [rax]
0x1407198c5: movsx  rsi,r12w
0x1407198c9: mov    rcx,QWORD PTR [rax+0x8]
0x1407198cd: sub    rcx,rdx
0x1407198d0: sar    rcx,0x3
0x1407198d4: cmp    rsi,rcx
0x1407198d7: jae    0x140719aed
0x1407198dd: mov    rax,QWORD PTR [rdx+rsi*8]
0x1407198e1: mov    rcx,QWORD PTR [rax+0x98]
0x1407198e8: sub    rcx,QWORD PTR [rax+0x90]
0x1407198ef: sar    rcx,0x3
0x1407198f3: xor    eax,eax
0x1407198f5: mov    QWORD PTR [rbp+0x160],rax
0x1407198fc: lea    rax,[rbp+0x150]
0x140719903: test   rcx,rcx
0x140719906: je     0x140719968
0x140719908: cmp    r15,0xf
0x14071990c: cmova  rax,QWORD PTR [rbp+0x150]
0x140719914: mov    BYTE PTR [rax],0x0
0x140719917: mov    rax,QWORD PTR [rsp+0x40]
0x14071991c: mov    rax,QWORD PTR [rax+0x5f8]
0x140719923: mov    rcx,QWORD PTR [rax]
0x140719926: mov    rax,QWORD PTR [rcx+rsi*8]
0x14071992a: cmp    DWORD PTR [rax+0x84],0x1
0x140719931: jle    0x14071993f
0x140719933: mov    rcx,QWORD PTR [rax+0xa8]
0x14071993a: mov    rdx,QWORD PTR [rcx]
0x14071993d: jmp    0x140719949
0x14071993f: mov    rax,QWORD PTR [rax+0x90]
0x140719946: mov    rdx,QWORD PTR [rax]
0x140719949: cmp    QWORD PTR [rdx+0x18],0xf
0x14071994e: mov    r8,QWORD PTR [rdx+0x10]
0x140719952: jbe    0x140719957
0x140719954: mov    rdx,QWORD PTR [rdx]
0x140719957: lea    rcx,[rbp+0x150]
0x14071995e: call   0x14006fa10
0x140719963: jmp    0x140719be0
0x140719968: cmp    r15,0xf
0x14071996c: cmova  rax,QWORD PTR [rbp+0x150]
0x140719974: mov    BYTE PTR [rax],0x0
0x140719977: mov    r8d,0x9
0x14071997d: lea    rdx,[rip+0xf676cc]        # 0x141681050 ; SOURCE 'body part'
0x140719984: lea    rcx,[rbp+0x150]
0x14071998b: call   0x14006fa10
0x140719990: mov    rcx,QWORD PTR [rsp+0x40]
0x140719995: mov    rax,QWORD PTR [rcx+0x5f8]
0x14071999c: mov    rcx,QWORD PTR [rax]
0x14071999f: mov    rax,QWORD PTR [rcx+rsi*8]
0x1407199a3: cmp    DWORD PTR [rax+0x84],0x1
0x1407199aa: jle    0x140719be0
0x1407199b0: mov    r14,QWORD PTR [rbp+0x160]
0x1407199b7: mov    r15,QWORD PTR [rbp+0x168]
0x1407199be: cmp    r14,r15
0x1407199c1: jae    0x1407199ed
0x1407199c3: lea    rax,[r14+0x1]
0x1407199c7: mov    QWORD PTR [rbp+0x160],rax
0x1407199ce: lea    rax,[rbp+0x150]
0x1407199d5: cmp    r15,0xf
0x1407199d9: cmova  rax,QWORD PTR [rbp+0x150]
0x1407199e1: mov    WORD PTR [r14+rax*1],0x73
0x1407199e8: jmp    0x140719bdb
0x1407199ed: movabs rdx,0x7fffffffffffffff
0x1407199f7: mov    rax,rdx
0x1407199fa: sub    rax,r14
0x1407199fd: cmp    rax,0x1
0x140719a01: jb     0x14071a255
0x140719a07: lea    r13,[r14+0x1]
0x140719a0b: mov    rsi,r13
0x140719a0e: or     rsi,0xf
0x140719a12: cmp    rsi,rdx
0x140719a15: jbe    0x140719a1c
0x140719a17: mov    rsi,rdx
0x140719a1a: jmp    0x140719a3d
0x140719a1c: mov    rcx,r15
0x140719a1f: shr    rcx,1
0x140719a22: mov    rax,rdx
0x140719a25: sub    rax,rcx
0x140719a28: cmp    r15,rax
0x140719a2b: jbe    0x140719a32
0x140719a2d: mov    rsi,rdx
0x140719a30: jmp    0x140719a3d
0x140719a32: lea    rax,[rcx+r15*1]
0x140719a36: cmp    rsi,rax
0x140719a39: cmovb  rsi,rax
0x140719a3d: lea    rcx,[rsi+0x1]
0x140719a41: call   0x1400707d0
0x140719a46: mov    r12,rax
0x140719a49: mov    QWORD PTR [rbp+0x160],r13
0x140719a50: mov    QWORD PTR [rbp+0x168],rsi
0x140719a57: mov    r8,r14
0x140719a5a: mov    rcx,rax
0x140719a5d: cmp    r15,0xf
0x140719a61: jbe    0x140719ac2
0x140719a63: mov    rsi,QWORD PTR [rbp+0x150]
0x140719a6a: mov    rdx,rsi
0x140719a6d: call   0x14153aa78
0x140719a72: mov    WORD PTR [r12+r14*1],0x73
0x140719a79: lea    rdx,[r15+0x1]
0x140719a7d: cmp    rdx,0x1000
0x140719a84: jb     0x140719aa2
0x140719a86: add    rdx,0x27
0x140719a8a: mov    rcx,QWORD PTR [rsi-0x8]
0x140719a8e: sub    rsi,rcx
0x140719a91: lea    rax,[rsi-0x8]
0x140719a95: cmp    rax,0x1f
0x140719a99: ja     0x14071a14c
0x140719a9f: mov    rsi,rcx
0x140719aa2: mov    rcx,rsi
0x140719aa5: call   0x141539680
0x140719aaa: mov    QWORD PTR [rbp+0x150],r12
0x140719ab1: movzx  r12d,WORD PTR [rsp+0x60]
0x140719ab7: movzx  r13d,WORD PTR [rsp+0x38]
0x140719abd: jmp    0x140719bdb
0x140719ac2: lea    rdx,[rbp+0x150]
0x140719ac9: call   0x14153aa78
0x140719ace: mov    WORD PTR [r12+r14*1],0x73
0x140719ad5: mov    QWORD PTR [rbp+0x150],r12
0x140719adc: movzx  r12d,WORD PTR [rsp+0x60]
0x140719ae2: movzx  r13d,WORD PTR [rsp+0x38]
0x140719ae8: jmp    0x140719bdb
0x140719aed: cmp    r15,0x9
0x140719af1: jb     0x140719b2d
0x140719af3: lea    rsi,[rbp+0x150]
0x140719afa: cmp    r15,0xf
0x140719afe: cmova  rsi,QWORD PTR [rbp+0x150]
0x140719b06: mov    eax,0x9
0x140719b0b: mov    QWORD PTR [rbp+0x160],rax
0x140719b12: mov    r8d,eax
0x140719b15: lea    rdx,[rip+0xf67534]        # 0x141681050 ; SOURCE 'body part'
0x140719b1c: mov    rcx,rsi
0x140719b1f: call   0x14153ae1a
0x140719b24: mov    BYTE PTR [rsi+0x9],0x0
0x140719b28: jmp    0x140719be0
0x140719b2d: mov    rcx,r15
0x140719b30: shr    rcx,1
0x140719b33: movabs rdx,0x7fffffffffffffff
0x140719b3d: mov    rax,rdx
0x140719b40: sub    rax,rcx
0x140719b43: cmp    r15,rax
0x140719b46: jbe    0x140719b4d
0x140719b48: mov    rsi,rdx
0x140719b4b: jmp    0x140719b5d
0x140719b4d: lea    rax,[r15+rcx*1]
0x140719b51: mov    esi,0xf
0x140719b56: cmp    rax,rsi
0x140719b59: cmova  rsi,rax
0x140719b5d: lea    rcx,[rsi+0x1]
0x140719b61: call   0x1400707d0
0x140719b66: mov    r14,rax
0x140719b69: mov    eax,0x9
0x140719b6e: mov    QWORD PTR [rbp+0x160],rax
0x140719b75: mov    QWORD PTR [rbp+0x168],rsi
0x140719b7c: movsd  xmm0,QWORD PTR [rip+0xf674cc]        # 0x141681050 ; SOURCE 'body part'
0x140719b84: movsd  QWORD PTR [r14],xmm0
0x140719b89: movzx  ecx,BYTE PTR [rip+0xf674c8]        # 0x141681058 ; SOURCE 't'
0x140719b90: mov    BYTE PTR [r14+0x8],cl
0x140719b94: mov    BYTE PTR [r14+0x9],0x0
0x140719b99: cmp    r15,0xf
0x140719b9d: jbe    0x140719bd4
0x140719b9f: lea    rdx,[r15+0x1]
0x140719ba3: mov    rcx,QWORD PTR [rbp+0x150]
0x140719baa: mov    rax,rcx
0x140719bad: cmp    rdx,0x1000
0x140719bb4: jb     0x140719bcf
0x140719bb6: add    rdx,0x27
0x140719bba: mov    rcx,QWORD PTR [rcx-0x8]
0x140719bbe: sub    rax,rcx
0x140719bc1: add    rax,0xfffffffffffffff8
0x140719bc5: cmp    rax,0x1f
0x140719bc9: ja     0x14071a14c
0x140719bcf: call   0x141539680
0x140719bd4: mov    QWORD PTR [rbp+0x150],r14
0x140719bdb: mov    r14,QWORD PTR [rsp+0x50]
0x140719be0: movsx  rdx,r12w
0x140719be4: mov    rsi,QWORD PTR [rsp+0x40]
0x140719be9: mov    rax,QWORD PTR [rsi+0x5f8]
0x140719bf0: mov    rcx,QWORD PTR [rax]
0x140719bf3: mov    rax,QWORD PTR [rcx+rdx*8]
0x140719bf7: movsx  rcx,r13w
0x140719bfb: mov    rax,QWORD PTR [rax+0x58]
0x140719bff: mov    rcx,QWORD PTR [rax+rcx*8]
0x140719c03: movsxd rdx,DWORD PTR [rcx+0x20]
0x140719c07: mov    rax,QWORD PTR [rsp+0x58]
0x140719c0c: mov    rax,QWORD PTR [rax+0x208]
0x140719c13: mov    r8,QWORD PTR [rax+rdx*8]
0x140719c17: add    r8,0x30
0x140719c1b: lea    rdx,[rip+0xed3f02]        # 0x1415edb24 ; SOURCE "'s "
0x140719c22: lea    rcx,[rbp+0x190]
0x140719c29: call   0x14014af80
0x140719c2e: nop
0x140719c2f: mov    rdx,rax
0x140719c32: lea    rcx,[rbp+0x150]
0x140719c39: call   0x1400b9d10
0x140719c3e: nop
0x140719c3f: lea    rcx,[rbp+0x190]
0x140719c46: call   0x14006f850
0x140719c4b: jmp    0x140719c6a
0x140719c4d: mov    WORD PTR [rsp+0x20],0x2
0x140719c54: xor    r9d,r9d
0x140719c57: movzx  r8d,r12w
0x140719c5b: lea    rdx,[rbp+0x150]
0x140719c62: mov    rcx,rsi
0x140719c65: call   0x1413345d0
0x140719c6a: xor    r9d,r9d
0x140719c6d: mov    r10d,r9d
0x140719c70: mov    DWORD PTR [rsp+0x70],r9d
0x140719c75: mov    r13d,r9d
0x140719c78: mov    rax,QWORD PTR [rbp-0x60]
0x140719c7c: mov    rdx,QWORD PTR [rax+0x8]
0x140719c80: mov    rax,QWORD PTR [rax+0x10]
0x140719c84: sub    rax,rdx
0x140719c87: sar    rax,0x2
0x140719c8b: test   rax,rax
0x140719c8e: je     0x140719202
0x140719c94: mov    rdi,QWORD PTR [rbp-0x60]
0x140719c98: mov    rbx,QWORD PTR [rsp+0x40]
0x140719c9d: nop    DWORD PTR [rax]
0x140719ca0: movsxd r14,DWORD PTR [rdx+r13*4]
0x140719ca4: mov    rax,QWORD PTR [rsp+0x50]
0x140719ca9: mov    rax,QWORD PTR [rax+0x1620]
0x140719cb0: mov    r15,QWORD PTR [rax+r14*8]
0x140719cb4: cmp    DWORD PTR [r15+0x38],0x0
0x140719cb9: jne    0x14071a0e8
0x140719cbf: mov    rax,QWORD PTR [rdi+0x20]
0x140719cc3: mov    r12d,DWORD PTR [rax+r13*4]
0x140719cc7: cmp    r12d,DWORD PTR [rsp+0x4c]
0x140719ccc: jle    0x14071a0e8
0x140719cd2: mov    esi,0x64
0x140719cd7: mov    r8d,r9d
0x140719cda: mov    rdx,r9
0x140719cdd: mov    r11,QWORD PTR [rbx+0x708]
0x140719ce4: mov    r9,QWORD PTR [rbx+0x700]
0x140719ceb: mov    rax,r11
0x140719cee: sub    rax,r9
0x140719cf1: sar    rax,0x2
0x140719cf5: test   rax,rax
0x140719cf8: je     0x140719d41
0x140719cfa: mov    rax,QWORD PTR [rsp+0x50]
0x140719cff: mov    r10,QWORD PTR [rax+0x1638]
0x140719d06: data16 nop WORD PTR [rax+rax*1+0x0]
0x140719d10: lea    rax,[rdx*4+0x0]
0x140719d18: cmp    DWORD PTR [r10+rax*1],r14d
0x140719d1c: je     0x140719d38
0x140719d1e: inc    r8d
0x140719d21: inc    rdx
0x140719d24: mov    rcx,r11
0x140719d27: sub    rcx,r9
0x140719d2a: sar    rcx,0x2
0x140719d2e: movsxd rax,r8d
0x140719d31: cmp    rax,rcx
0x140719d34: jb     0x140719d10
0x140719d36: jmp    0x140719d3c
0x140719d38: mov    esi,DWORD PTR [r9+rax*1]
0x140719d3c: mov    r10d,DWORD PTR [rsp+0x70]
0x140719d41: xor    r9d,r9d
0x140719d44: cmp    esi,DWORD PTR [r15+0x20]
0x140719d48: jg     0x140719d56
0x140719d4a: mov    edx,0xfffffffd
0x140719d4f: mov    esi,0x1
0x140719d54: jmp    0x140719dad
0x140719d56: cmp    esi,DWORD PTR [r15+0x24]
0x140719d5a: jg     0x140719d68
0x140719d5c: mov    edx,0xfffffffe
0x140719d61: mov    esi,0x1
0x140719d66: jmp    0x140719dad
0x140719d68: cmp    esi,DWORD PTR [r15+0x28]
0x140719d6c: jg     0x140719d7a
0x140719d6e: mov    edx,0xffffffff
0x140719d73: mov    esi,0x1
0x140719d78: jmp    0x140719dad
0x140719d7a: cmp    esi,DWORD PTR [r15+0x34]
0x140719d7e: jl     0x140719d8c
0x140719d80: mov    edx,0x3
0x140719d85: mov    esi,0x1
0x140719d8a: jmp    0x140719dad
0x140719d8c: cmp    esi,DWORD PTR [r15+0x30]
0x140719d90: jl     0x140719d9e
0x140719d92: mov    edx,0x2
0x140719d97: mov    esi,0x1
0x140719d9c: jmp    0x140719dad
0x140719d9e: mov    edx,r9d
0x140719da1: cmp    esi,DWORD PTR [r15+0x2c]
0x140719da5: mov    esi,0x1
0x140719daa: cmovge edx,esi
0x140719dad: movsx  rax,WORD PTR [r15]
0x140719db1: cmp    eax,0x15
0x140719db4: ja     0x14071a0e8
0x140719dba: lea    r8,[rip+0xffffffffff8e623f]        # 0x140000000
0x140719dc1: mov    ecx,DWORD PTR [r8+rax*4+0x71a25c]
0x140719dc9: add    rcx,r8
0x140719dcc: jmp    rcx
0x140719dce: test   edx,edx
0x140719dd0: jle    0x140719dde
0x140719dd2: lea    rdx,[rip+0xf6b077]        # 0x141684e50 ; SOURCE 'tall'
0x140719dd9: jmp    0x14071a08f
0x140719dde: js     0x140719e1d
0x140719de0: jmp    0x14071a0e8
0x140719de5: test   edx,edx
0x140719de7: jle    0x140719df5
0x140719de9: lea    rdx,[rip+0xf6b050]        # 0x141684e40 ; SOURCE 'broad'
0x140719df0: jmp    0x14071a08f
0x140719df5: jns    0x14071a09b
0x140719dfb: lea    rdx,[rip+0xf6b036]        # 0x141684e38 ; SOURCE 'narrow'
0x140719e02: jmp    0x14071a08f
0x140719e07: test   edx,edx
0x140719e09: jle    0x140719e17
0x140719e0b: lea    rdx,[rip+0xf6b01e]        # 0x141684e30 ; SOURCE 'long'
0x140719e12: jmp    0x14071a08f
0x140719e17: jns    0x14071a0e8
0x140719e1d: lea    rdx,[rip+0xf6b024]        # 0x141684e48 ; SOURCE 'short'
0x140719e24: jmp    0x14071a08f
0x140719e29: test   edx,edx
0x140719e2b: jle    0x140719e39
0x140719e2d: lea    rdx,[rip+0xf2ffcc]        # 0x141649e00 ; SOURCE 'high'
0x140719e34: jmp    0x14071a08f
0x140719e39: jns    0x14071a0e8
0x140719e3f: lea    rdx,[rip+0xf2ffc2]        # 0x141649e08 ; SOURCE 'low'
0x140719e46: jmp    0x14071a08f
0x140719e4b: test   edx,edx
0x140719e4d: jle    0x140719e5b
0x140719e4f: lea    rdx,[rip+0xf6b7b2]        # 0x141685608 ; SOURCE 'close-set'
0x140719e56: jmp    0x14071a08f
0x140719e5b: jns    0x14071a0e8
0x140719e61: lea    rdx,[rip+0xf6b790]        # 0x1416855f8 ; SOURCE 'wide-set'
0x140719e68: jmp    0x14071a08f
0x140719e6d: test   edx,edx
0x140719e6f: jle    0x140719e7d
0x140719e71: lea    rdx,[rip+0xf6b754]        # 0x1416855cc ; SOURCE 'sunken'
0x140719e78: jmp    0x14071a08f
0x140719e7d: cmp    edx,0xfffffffd
0x140719e80: jne    0x140719e8e
0x140719e82: lea    rdx,[rip+0xf6b5c7]        # 0x141685450 ; SOURCE 'bulging'
0x140719e89: jmp    0x14071a08f
0x140719e8e: test   edx,edx
0x140719e90: jns    0x14071a0e8
0x140719e96: lea    rdx,[rip+0xf6b723]        # 0x1416855c0 ; SOURCE 'protruding'
0x140719e9d: jmp    0x14071a08f
0x140719ea2: test   edx,edx
0x140719ea4: jle    0x140719eb2
0x140719ea6: lea    rdx,[rip+0xf6b703]        # 0x1416855b0 ; SOURCE 'wrinkled'
0x140719ead: jmp    0x14071a08f
0x140719eb2: jns    0x14071a0e8
0x140719eb8: lea    rdx,[rip+0xf6b6e9]        # 0x1416855a8 ; SOURCE 'smooth'
0x140719ebf: jmp    0x14071a08f
0x140719ec4: cmp    edx,0x3
0x140719ec7: jne    0x140719ed5
0x140719ec9: lea    rdx,[rip+0xf6bcf4]        # 0x141685bc4 ; SOURCE 'coiled'
0x140719ed0: jmp    0x14071a08f
0x140719ed5: cmp    edx,0x2
0x140719ed8: jne    0x140719ee6
0x140719eda: lea    rdx,[rip+0xf6b6ab]        # 0x14168558c ; SOURCE 'curly'
0x140719ee1: jmp    0x14071a08f
0x140719ee6: cmp    edx,0x1
0x140719ee9: jne    0x140719ef7
0x140719eeb: lea    rdx,[rip+0xf6bcca]        # 0x141685bbc ; SOURCE 'wavy'
0x140719ef2: jmp    0x14071a08f
0x140719ef7: test   edx,edx
0x140719ef9: jns    0x14071a0e8
0x140719eff: lea    rdx,[rip+0xf6b67a]        # 0x141685580 ; SOURCE 'straight'
0x140719f06: jmp    0x14071a08f
0x140719f0b: test   edx,edx
0x140719f0d: jle    0x140719f1b
0x140719f0f: lea    rdx,[rip+0xf6b68a]        # 0x1416855a0 ; SOURCE 'convex'
0x140719f16: jmp    0x14071a08f
0x140719f1b: jns    0x14071a0e8
0x140719f21: lea    rdx,[rip+0xf6b670]        # 0x141685598 ; SOURCE 'concave'
0x140719f28: jmp    0x14071a08f
0x140719f2d: test   edx,edx
0x140719f2f: jle    0x140719f3d
0x140719f31: lea    rdx,[rip+0xf6b640]        # 0x141685578 ; SOURCE 'dense'
0x140719f38: jmp    0x14071a08f
0x140719f3d: jns    0x14071a0e8
0x140719f43: lea    rdx,[rip+0xf6b626]        # 0x141685570 ; SOURCE 'sparse'
0x140719f4a: jmp    0x14071a08f
0x140719f4f: test   edx,edx
0x140719f51: jle    0x140719f5f
0x140719f53: lea    rdx,[rip+0xf6b60e]        # 0x141685568 ; SOURCE 'thick'
0x140719f5a: jmp    0x14071a08f
0x140719f5f: jns    0x14071a0e8
0x140719f65: lea    rdx,[rip+0xf6b5f4]        # 0x141685560 ; SOURCE 'thin'
0x140719f6c: jmp    0x14071a08f
0x140719f71: test   edx,edx
0x140719f73: jle    0x140719f81
0x140719f75: lea    rdx,[rip+0xf6b774]        # 0x1416856f0 ; SOURCE 'upturned'
0x140719f7c: jmp    0x14071a08f
0x140719f81: jns    0x14071a0e8
0x140719f87: lea    rdx,[rip+0xf6b756]        # 0x1416856e4 ; SOURCE 'hooked'
0x140719f8e: jmp    0x14071a08f
0x140719f93: test   edx,edx
0x140719f95: jle    0x140719fa3
0x140719f97: lea    rdx,[rip+0xf6c3a2]        # 0x141686340 ; SOURCE 'splayed'
0x140719f9e: jmp    0x14071a08f
0x140719fa3: jns    0x14071a0e8
0x140719fa9: lea    rdx,[rip+0xf6b718]        # 0x1416856c8 ; SOURCE 'flattened'
0x140719fb0: jmp    0x14071a08f
0x140719fb5: cmp    edx,0x3
0x140719fb8: jne    0x140719fc6
0x140719fba: lea    rdx,[rip+0xf6b6f7]        # 0x1416856b8 ; SOURCE 'great-lobed'
0x140719fc1: jmp    0x14071a08f
0x140719fc6: test   edx,edx
0x140719fc8: jle    0x140719fd6
0x140719fca: lea    rdx,[rip+0xf6b967]        # 0x141685938 ; SOURCE 'free-lobed'
0x140719fd1: jmp    0x14071a08f
0x140719fd6: cmp    edx,0xfffffffe
0x140719fd9: jg     0x140719fe7
0x140719fdb: lea    rdx,[rip+0xf6b6c6]        # 0x1416856a8 ; SOURCE 'fuse-lobed'
0x140719fe2: jmp    0x14071a08f
0x140719fe7: cmp    edx,0xffffffff
0x140719fea: jne    0x14071a0e8
0x140719ff0: lea    rdx,[rip+0xf6b919]        # 0x141685910 ; SOURCE 'small-lobed'
0x140719ff7: jmp    0x14071a08f
0x140719ffc: cmp    edx,0x3
0x140719fff: jne    0x14071a00d
0x14071a001: lea    rdx,[rip+0xf6b8f8]        # 0x141685900 ; SOURCE 'widely-spaced'
0x14071a008: jmp    0x14071a08f
0x14071a00d: cmp    edx,0x2
0x14071a010: jne    0x14071a01b
0x14071a012: lea    rdx,[rip+0xf6b687]        # 0x1416856a0 ; SOURCE 'gapped'
0x14071a019: jmp    0x14071a08f
0x14071a01b: cmp    edx,0xfffffffd
0x14071a01e: jne    0x14071a029
0x14071a020: lea    rdx,[rip+0xf6b8d1]        # 0x1416858f8 ; SOURCE 'tangled'
0x14071a027: jmp    0x14071a08f
0x14071a029: cmp    edx,0xfffffffe
0x14071a02c: jne    0x14071a0e8
0x14071a032: lea    rdx,[rip+0xf6b65f]        # 0x141685698 ; SOURCE 'crowded'
0x14071a039: jmp    0x14071a08f
0x14071a03b: test   edx,edx
0x14071a03d: jle    0x14071a048
0x14071a03f: lea    rdx,[rip+0xf6b402]        # 0x141685448 ; SOURCE 'round'
0x14071a046: jmp    0x14071a08f
0x14071a048: cmp    edx,0xfffffffd
0x14071a04b: jne    0x14071a056
0x14071a04d: lea    rdx,[rip+0xf6b874]        # 0x1416858c8 ; SOURCE 'slit'
0x14071a054: jmp    0x14071a08f
0x14071a056: test   edx,edx
0x14071a058: jns    0x14071a0e8
0x14071a05e: lea    rdx,[rip+0xf6add3]        # 0x141684e38 ; SOURCE 'narrow'
0x14071a065: jmp    0x14071a08f
0x14071a067: cmp    edx,0x2
0x14071a06a: jl     0x14071a075
0x14071a06c: lea    rdx,[rip+0xf6b3cd]        # 0x141685440 ; SOURCE 'greasy'
0x14071a073: jmp    0x14071a08f
0x14071a075: cmp    edx,0xfffffffd
0x14071a078: jne    0x14071a083
0x14071a07a: lea    rdx,[rip+0xf6b82f]        # 0x1416858b0 ; SOURCE 'crinkly'
0x14071a081: jmp    0x14071a08f
0x14071a083: cmp    edx,0xfffffffe
0x14071a086: jne    0x14071a0e8
0x14071a088: lea    rdx,[rip+0xf6b3ad]        # 0x14168543c ; SOURCE 'dry'
0x14071a08f: lea    rcx,[rbx+0x13e8]
0x14071a096: call   0x14006f580
0x14071a09b: mov    r8,rsi
0x14071a09e: lea    rdx,[rip+0xf316a7]        # 0x14164b74c ; SOURCE '-'
0x14071a0a5: lea    rcx,[rbx+0x13e8]
0x14071a0ac: call   0x14006fa10
0x14071a0b1: lea    rdx,[rbp+0x150]
0x14071a0b8: cmp    QWORD PTR [rbp+0x168],0xf
0x14071a0c0: cmova  rdx,QWORD PTR [rbp+0x150]
0x14071a0c8: mov    r8,QWORD PTR [rbp+0x160]
0x14071a0cf: lea    rcx,[rbx+0x13e8]
0x14071a0d6: call   0x14006fa10
0x14071a0db: mov    DWORD PTR [rsp+0x4c],r12d
0x14071a0e0: mov    r10d,DWORD PTR [rsp+0x70]
0x14071a0e5: xor    r9d,r9d
0x14071a0e8: inc    r10d
0x14071a0eb: mov    DWORD PTR [rsp+0x70],r10d
0x14071a0f0: inc    r13
0x14071a0f3: mov    rdx,QWORD PTR [rdi+0x8]
0x14071a0f7: mov    rcx,QWORD PTR [rdi+0x10]
0x14071a0fb: sub    rcx,rdx
0x14071a0fe: sar    rcx,0x2
0x14071a102: movsxd rax,r10d
0x14071a105: cmp    rax,rcx
0x14071a108: jb     0x140719ca0
0x14071a10e: mov    rbx,QWORD PTR [rbp-0x40]
0x14071a112: mov    rdi,QWORD PTR [rbp-0x38]
0x14071a116: mov    rsi,QWORD PTR [rsp+0x40]
0x14071a11b: jmp    0x1407191fd
0x14071a120: mov    rsi,QWORD PTR [rsp+0x40]
0x14071a125: mov    r13,r15
0x14071a128: jmp    0x140719207
0x14071a12d: mov    rsi,r10
0x14071a130: jmp    0x1407191fd
0x14071a135: mov    rsi,r9
0x14071a138: mov    r13,r15
0x14071a13b: jmp    0x140719207
0x14071a140: mov    r14,rcx
0x14071a143: add    rbx,0x8
0x14071a147: jmp    0x14071842c
0x14071a14c: call   QWORD PTR [rip+0xecb9d6]        # 0x1415e5b28
0x14071a152: nop
0x14071a153: cmp    QWORD PTR [rsi+0x13f8],0x0
0x14071a15b: jne    0x14071a177
0x14071a15d: lea    rcx,[rsi+0x13e8]
0x14071a164: mov    r8d,0x7
0x14071a16a: lea    rdx,[rip+0xf6c1d7]        # 0x141686348 ; SOURCE 'average'
0x14071a171: call   0x14006f8d0
0x14071a176: nop
0x14071a177: lea    rcx,[rbp-0x30]
0x14071a17b: call   0x1405c0b20
0x14071a180: lea    rcx,[rbp+0x130]
0x14071a187: call   0x14013bc30
0x14071a18c: lea    rcx,[rbp+0x118]
0x14071a193: call   0x140066b70
0x14071a198: lea    rcx,[rbp+0x100]
0x14071a19f: call   0x140066b70
0x14071a1a4: lea    rcx,[rbp+0xc8]
0x14071a1ab: call   0x14006f750
0x14071a1b0: lea    rcx,[rbp+0xb0]
0x14071a1b7: call   0x14006f750
0x14071a1bc: lea    rcx,[rbp+0x98]
0x14071a1c3: call   0x14006f750
0x14071a1c8: lea    rcx,[rbp+0x80]
0x14071a1cf: call   0x14006f750
0x14071a1d4: lea    rcx,[rbp+0x68]
0x14071a1d8: call   0x14006f750
0x14071a1dd: lea    rcx,[rbp+0x50]
0x14071a1e1: call   0x14006f7b0
0x14071a1e6: lea    rcx,[rbp+0x38]
0x14071a1ea: call   0x14006f750
0x14071a1ef: lea    rcx,[rbp+0x20]
0x14071a1f3: call   0x14006f750
0x14071a1f8: lea    rcx,[rbp+0x0]
0x14071a1fc: call   0x14006f750
0x14071a201: lea    rcx,[rbp-0x18]
0x14071a205: call   0x14006f750
0x14071a20a: jmp    0x14071a225
0x14071a20c: mov    r8d,0x7
0x14071a212: lea    rdx,[rip+0xf6c12f]        # 0x141686348 ; SOURCE 'average'
0x14071a219: lea    rcx,[rsi+0x13e8]
0x14071a220: call   0x14006f8d0
0x14071a225: mov    rcx,QWORD PTR [rbp+0x1b0]
0x14071a22c: xor    rcx,rsp
0x14071a22f: call   0x141539660
0x14071a234: lea    r11,[rsp+0x2c0]
0x14071a23c: mov    rbx,QWORD PTR [r11+0x38]
0x14071a240: mov    rsi,QWORD PTR [r11+0x40]
0x14071a244: mov    rdi,QWORD PTR [r11+0x48]
0x14071a248: mov    rsp,r11
0x14071a24b: pop    r15
0x14071a24d: pop    r14
0x14071a24f: pop    r13
0x14071a251: pop    r12
0x14071a253: pop    rbp
0x14071a254: ret
0x14071a255: call   0x140065890
0x14071a25a: nop
0x14071a25b: nop
