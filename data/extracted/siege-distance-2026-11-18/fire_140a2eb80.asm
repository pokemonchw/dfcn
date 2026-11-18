0x140a2eb80: mov    QWORD PTR [rsp+0x18],rbx
0x140a2eb85: push   rbp
0x140a2eb86: push   rsi
0x140a2eb87: push   rdi
0x140a2eb88: push   r12
0x140a2eb8a: push   r13
0x140a2eb8c: push   r14
0x140a2eb8e: push   r15
0x140a2eb90: lea    rbp,[rsp-0x50]
0x140a2eb95: sub    rsp,0x150
0x140a2eb9c: mov    rax,QWORD PTR [rip+0xe8f49d]        # 0x1418be040
0x140a2eba3: xor    rax,rsp
0x140a2eba6: mov    QWORD PTR [rbp+0x40],rax
0x140a2ebaa: mov    QWORD PTR [rbp-0x80],rdx
0x140a2ebae: mov    r13,rcx
0x140a2ebb1: mov    rdi,QWORD PTR [rcx+0x4d8]
0x140a2ebb8: mov    ecx,0x92
0x140a2ebbd: mov    r14d,0xffff8ad0
0x140a2ebc3: cmp    WORD PTR [r13+0xc0],r14w
0x140a2ebcb: jne    0x140a2ebe2
0x140a2ebcd: mov    eax,DWORD PTR [rdi+0x2c]
0x140a2ebd0: and    eax,0xfffffff3
0x140a2ebd3: mov    DWORD PTR [rdi+0x2c],eax
0x140a2ebd6: cmp    WORD PTR [rdi+0x14],cx
0x140a2ebda: je     0x140a2ebe2
0x140a2ebdc: and    eax,0xffffffdf
0x140a2ebdf: mov    DWORD PTR [rdi+0x2c],eax
0x140a2ebe2: mov    eax,DWORD PTR [rdi+0x2c]
0x140a2ebe5: test   al,0x4
0x140a2ebe7: jne    0x140a2fa28
0x140a2ebed: test   al,0x8
0x140a2ebef: jne    0x140a2fa28
0x140a2ebf5: test   al,0x20
0x140a2ebf7: je     0x140a2ec03
0x140a2ebf9: cmp    WORD PTR [rdi+0x14],cx
0x140a2ebfd: jne    0x140a2fa28
0x140a2ec03: mov    rbx,QWORD PTR [rdi+0xb0]
0x140a2ec0a: mov    rdi,QWORD PTR [rdi+0xb8]
0x140a2ec11: xor    r15d,r15d
0x140a2ec14: cmp    rbx,rdi
0x140a2ec17: jae    0x140a2ec3b
0x140a2ec19: mov    rcx,QWORD PTR [rbx]
0x140a2ec1c: mov    rax,QWORD PTR [rcx]
0x140a2ec1f: call   QWORD PTR [rax+0x10]
0x140a2ec22: cmp    eax,0x24
0x140a2ec25: je     0x140a2ec2d
0x140a2ec27: add    rbx,0x8
0x140a2ec2b: jmp    0x140a2ec11
0x140a2ec2d: mov    rcx,QWORD PTR [rbx]
0x140a2ec30: mov    rax,QWORD PTR [rcx]
0x140a2ec33: call   QWORD PTR [rax+0x30]
0x140a2ec36: mov    rsi,rax
0x140a2ec39: jmp    0x140a2ec3e
0x140a2ec3b: mov    rsi,r15
0x140a2ec3e: test   rsi,rsi
0x140a2ec41: jne    0x140a2eced
0x140a2ec47: xorps  xmm0,xmm0
0x140a2ec4a: movups XMMWORD PTR [rbp-0x38],xmm0
0x140a2ec4e: mov    QWORD PTR [rbp-0x28],r15
0x140a2ec52: mov    QWORD PTR [rbp-0x20],0xf
0x140a2ec5a: mov    BYTE PTR [rbp-0x38],r15b
0x140a2ec5e: movups XMMWORD PTR [rbp-0x18],xmm0
0x140a2ec62: mov    QWORD PTR [rbp-0x8],r15
0x140a2ec66: mov    QWORD PTR [rbp+0x0],0xf
0x140a2ec6e: mov    BYTE PTR [rbp-0x18],r15b
0x140a2ec72: movdqa XMMWORD PTR [rbp+0x10],xmm0
0x140a2ec77: mov    QWORD PTR [rbp+0x20],r15
0x140a2ec7b: mov    QWORD PTR [rbp-0x54],r15
0x140a2ec7f: mov    QWORD PTR [rbp-0x4c],r15
0x140a2ec83: mov    DWORD PTR [rbp-0x44],r15d
0x140a2ec87: mov    eax,0xffffffff
0x140a2ec8c: mov    QWORD PTR [rbp+0x8],0xffffffffffffffff
0x140a2ec94: mov    DWORD PTR [rbp+0x28],eax
0x140a2ec97: mov    WORD PTR [rbp+0x2c],ax
0x140a2ec9b: mov    DWORD PTR [rbp+0x30],eax
0x140a2ec9e: mov    DWORD PTR [rbp+0x34],0x8ad08ad0
0x140a2eca5: mov    WORD PTR [rbp+0x38],r14w
0x140a2ecaa: mov    eax,0x20
0x140a2ecaf: mov    WORD PTR [rbp-0x60],ax
0x140a2ecb3: lea    rax,[rbp-0x60]
0x140a2ecb7: mov    QWORD PTR [rsp+0x20],rax
0x140a2ecbc: xor    r9d,r9d
0x140a2ecbf: xor    r8d,r8d
0x140a2ecc2: mov    dl,0x1
0x140a2ecc4: mov    rcx,r13
0x140a2ecc7: call   0x14133d990
0x140a2eccc: nop
0x140a2eccd: lea    rcx,[rbp+0x10]
0x140a2ecd1: call   0x140070d80
0x140a2ecd6: lea    rcx,[rbp-0x18]
0x140a2ecda: call   0x140070e80
0x140a2ecdf: lea    rcx,[rbp-0x38]
0x140a2ece3: call   0x140070e80
0x140a2ece8: jmp    0x140a2fa28
0x140a2eced: mov    rax,QWORD PTR [rsi]
0x140a2ecf0: mov    rcx,rsi
0x140a2ecf3: call   QWORD PTR [rax+0xd0]
0x140a2ecf9: cmp    eax,0x16
0x140a2ecfc: je     0x140a2eda8
0x140a2ed02: xorps  xmm0,xmm0
0x140a2ed05: movups XMMWORD PTR [rbp-0x38],xmm0
0x140a2ed09: mov    QWORD PTR [rbp-0x28],r15
0x140a2ed0d: mov    QWORD PTR [rbp-0x20],0xf
0x140a2ed15: mov    BYTE PTR [rbp-0x38],r15b
0x140a2ed19: movups XMMWORD PTR [rbp-0x18],xmm0
0x140a2ed1d: mov    QWORD PTR [rbp-0x8],r15
0x140a2ed21: mov    QWORD PTR [rbp+0x0],0xf
0x140a2ed29: mov    BYTE PTR [rbp-0x18],r15b
0x140a2ed2d: movdqa XMMWORD PTR [rbp+0x10],xmm0
0x140a2ed32: mov    QWORD PTR [rbp+0x20],r15
0x140a2ed36: mov    QWORD PTR [rbp-0x54],r15
0x140a2ed3a: mov    QWORD PTR [rbp-0x4c],r15
0x140a2ed3e: mov    DWORD PTR [rbp-0x44],r15d
0x140a2ed42: mov    eax,0xffffffff
0x140a2ed47: mov    QWORD PTR [rbp+0x8],0xffffffffffffffff
0x140a2ed4f: mov    DWORD PTR [rbp+0x28],eax
0x140a2ed52: mov    WORD PTR [rbp+0x2c],ax
0x140a2ed56: mov    DWORD PTR [rbp+0x30],eax
0x140a2ed59: mov    DWORD PTR [rbp+0x34],0x8ad08ad0
0x140a2ed60: mov    WORD PTR [rbp+0x38],r14w
0x140a2ed65: mov    eax,0x21
0x140a2ed6a: mov    WORD PTR [rbp-0x60],ax
0x140a2ed6e: lea    rax,[rbp-0x60]
0x140a2ed72: mov    QWORD PTR [rsp+0x20],rax
0x140a2ed77: xor    r9d,r9d
0x140a2ed7a: xor    r8d,r8d
0x140a2ed7d: mov    dl,0x1
0x140a2ed7f: mov    rcx,r13
0x140a2ed82: call   0x14133d990
0x140a2ed87: nop
0x140a2ed88: lea    rcx,[rbp+0x10]
0x140a2ed8c: call   0x140070d80
0x140a2ed91: lea    rcx,[rbp-0x18]
0x140a2ed95: call   0x140070e80
0x140a2ed9a: lea    rcx,[rbp-0x38]
0x140a2ed9e: call   0x140070e80
0x140a2eda3: jmp    0x140a2fa28
0x140a2eda8: cmp    WORD PTR [rsi+0x148],0x1
0x140a2edb0: je     0x140a2ee5c
0x140a2edb6: xorps  xmm0,xmm0
0x140a2edb9: movups XMMWORD PTR [rbp-0x38],xmm0
0x140a2edbd: mov    QWORD PTR [rbp-0x28],r15
0x140a2edc1: mov    QWORD PTR [rbp-0x20],0xf
0x140a2edc9: mov    BYTE PTR [rbp-0x38],r15b
0x140a2edcd: movups XMMWORD PTR [rbp-0x18],xmm0
0x140a2edd1: mov    QWORD PTR [rbp-0x8],r15
0x140a2edd5: mov    QWORD PTR [rbp+0x0],0xf
0x140a2eddd: mov    BYTE PTR [rbp-0x18],r15b
0x140a2ede1: movdqa XMMWORD PTR [rbp+0x10],xmm0
0x140a2ede6: mov    QWORD PTR [rbp+0x20],r15
0x140a2edea: mov    QWORD PTR [rbp-0x54],r15
0x140a2edee: mov    QWORD PTR [rbp-0x4c],r15
0x140a2edf2: mov    DWORD PTR [rbp-0x44],r15d
0x140a2edf6: mov    eax,0xffffffff
0x140a2edfb: mov    QWORD PTR [rbp+0x8],0xffffffffffffffff
0x140a2ee03: mov    DWORD PTR [rbp+0x28],eax
0x140a2ee06: mov    WORD PTR [rbp+0x2c],ax
0x140a2ee0a: mov    DWORD PTR [rbp+0x30],eax
0x140a2ee0d: mov    DWORD PTR [rbp+0x34],0x8ad08ad0
0x140a2ee14: mov    WORD PTR [rbp+0x38],r14w
0x140a2ee19: mov    eax,0x21
0x140a2ee1e: mov    WORD PTR [rbp-0x60],ax
0x140a2ee22: lea    rax,[rbp-0x60]
0x140a2ee26: mov    QWORD PTR [rsp+0x20],rax
0x140a2ee2b: xor    r9d,r9d
0x140a2ee2e: xor    r8d,r8d
0x140a2ee31: mov    dl,0x1
0x140a2ee33: mov    rcx,r13
0x140a2ee36: call   0x14133d990
0x140a2ee3b: nop
0x140a2ee3c: lea    rcx,[rbp+0x10]
0x140a2ee40: call   0x140070d80
0x140a2ee45: lea    rcx,[rbp-0x18]
0x140a2ee49: call   0x140070e80
0x140a2ee4e: lea    rcx,[rbp-0x38]
0x140a2ee52: call   0x140070e80
0x140a2ee57: jmp    0x140a2fa28
0x140a2ee5c: mov    rax,QWORD PTR [rsi+0x130]
0x140a2ee63: sub    rax,QWORD PTR [rsi+0x128]
0x140a2ee6a: sar    rax,0x3
0x140a2ee6e: cmp    rax,0x3
0x140a2ee72: ja     0x140a2ef78
0x140a2ee78: mov    QWORD PTR [rsp+0x20],r15
0x140a2ee7d: xor    r9d,r9d
0x140a2ee80: xor    r8d,r8d
0x140a2ee83: mov    dl,0x1
0x140a2ee85: mov    rcx,r13
0x140a2ee88: call   0x14133d990
0x140a2ee8d: cmp    BYTE PTR [rsi+0x14c],0x1
0x140a2ee94: jl     0x140a2fa28
0x140a2ee9a: cmp    QWORD PTR [r13+0x4d8],r15
0x140a2eea1: jne    0x140a2fa28
0x140a2eea7: mov    rax,QWORD PTR [rsi+0x60]
0x140a2eeab: sub    rax,QWORD PTR [rsi+0x58]
0x140a2eeaf: test   rax,0xfffffffffffffff8
0x140a2eeb5: jne    0x140a2fa28
0x140a2eebb: mov    rax,QWORD PTR [rsi]
0x140a2eebe: mov    rcx,rsi
0x140a2eec1: call   QWORD PTR [rax+0x258]
0x140a2eec7: test   al,al
0x140a2eec9: jne    0x140a2fa28
0x140a2eecf: mov    ecx,0x148
0x140a2eed4: call   0x1415530e0
0x140a2eed9: mov    QWORD PTR [rbp-0x70],rax
0x140a2eedd: xor    edx,edx
0x140a2eedf: mov    rcx,rax
0x140a2eee2: call   0x140d19db0
0x140a2eee7: mov    rbx,rax
0x140a2eeea: mov    WORD PTR [rax+0x14],0x88
0x140a2eef0: lea    rcx,[rax+0x50]
0x140a2eef4: mov    r8d,0x8
0x140a2eefa: lea    rdx,[rip+0xc4f0ef]        # 0x14167dff0
0x140a2ef01: call   0x140070f00
0x140a2ef06: lea    rdx,[rbx+0x20]
0x140a2ef0a: lea    r9,[rbx+0x1e]
0x140a2ef0e: lea    r8,[rbx+0x1c]
0x140a2ef12: movzx  ecx,BYTE PTR [rsi+0x14a]
0x140a2ef19: mov    BYTE PTR [rsp+0x28],cl
0x140a2ef1d: mov    QWORD PTR [rsp+0x20],rdx
0x140a2ef22: mov    rdx,rsi
0x140a2ef25: call   0x140a5aed0
0x140a2ef2a: mov    QWORD PTR [rbp-0x70],rbx
0x140a2ef2e: mov    r8d,DWORD PTR [rsi+0x50]
0x140a2ef32: mov    edx,0x24
0x140a2ef37: mov    rcx,rbx
0x140a2ef3a: call   0x140d21440
0x140a2ef3f: mov    rdx,QWORD PTR [rsi+0x60]
0x140a2ef43: cmp    rdx,QWORD PTR [rsi+0x68]
0x140a2ef47: je     0x140a2ef53
0x140a2ef49: mov    QWORD PTR [rdx],rbx
0x140a2ef4c: add    QWORD PTR [rsi+0x60],0x8
0x140a2ef51: jmp    0x140a2ef60
0x140a2ef53: lea    r8,[rbp-0x70]
0x140a2ef57: lea    rcx,[rsi+0x58]
0x140a2ef5b: call   0x1400bc360
0x140a2ef60: mov    rcx,rbx
0x140a2ef63: call   0x140d21860
0x140a2ef68: mov    rdx,rbx
0x140a2ef6b: mov    rcx,r13
0x140a2ef6e: call   0x141340d60
0x140a2ef73: jmp    0x140a2fa28
0x140a2ef78: cmp    BYTE PTR [rsi+0x14c],0x1
0x140a2ef7f: jg     0x140a2ef9b
0x140a2ef81: mov    QWORD PTR [rsp+0x20],r15
0x140a2ef86: xor    r9d,r9d
0x140a2ef89: xor    r8d,r8d
0x140a2ef8c: mov    dl,0x1
0x140a2ef8e: mov    rcx,r13
0x140a2ef91: call   0x14133d990
0x140a2ef96: jmp    0x140a2fa28
0x140a2ef9b: mov    r12b,0xff
0x140a2ef9e: mov    BYTE PTR [rsp+0x60],r12b
0x140a2efa3: movzx  eax,WORD PTR [rsi+0x20]
0x140a2efa7: mov    WORD PTR [rsp+0x78],ax
0x140a2efac: movsx  rax,BYTE PTR [rsi+0x14a]
0x140a2efb4: lea    rbx,[rip+0xffffffffff5d1045]        # 0x140000000
0x140a2efbb: cmp    eax,0x7
0x140a2efbe: ja     0x140a2f044
0x140a2efc4: mov    ecx,DWORD PTR [rbx+rax*4+0xa2fa50]
0x140a2efcb: add    rcx,rbx
0x140a2efce: jmp    rcx
0x140a2efd0: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2efd4: inc    cx
0x140a2efd7: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2efdb: jmp    0x140a2f04e
0x140a2efdd: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2efe1: inc    cx
0x140a2efe4: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2efe8: inc    ax
0x140a2efeb: jmp    0x140a2f04e
0x140a2efed: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2eff1: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2eff5: inc    ax
0x140a2eff8: jmp    0x140a2f04e
0x140a2effa: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2effe: dec    cx
0x140a2f001: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2f005: inc    ax
0x140a2f008: jmp    0x140a2f04e
0x140a2f00a: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2f00e: dec    cx
0x140a2f011: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2f015: jmp    0x140a2f04e
0x140a2f017: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2f01b: dec    cx
0x140a2f01e: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2f022: dec    ax
0x140a2f025: jmp    0x140a2f04e
0x140a2f027: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2f02b: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2f02f: dec    ax
0x140a2f032: jmp    0x140a2f04e
0x140a2f034: movzx  ecx,WORD PTR [rsi+0x10]
0x140a2f038: inc    cx
0x140a2f03b: movzx  eax,WORD PTR [rsi+0x1c]
0x140a2f03f: dec    ax
0x140a2f042: jmp    0x140a2f04e
0x140a2f044: movzx  eax,WORD PTR [rsp+0x74]
0x140a2f049: movzx  ecx,WORD PTR [rsp+0x74]
0x140a2f04e: mov    WORD PTR [rsp+0x64],ax
0x140a2f053: mov    WORD PTR [rsp+0x66],cx
0x140a2f058: mov    rdx,r15
0x140a2f05b: mov    QWORD PTR [rbp-0x78],rdx
0x140a2f05f: mov    r14d,0xffffffff
0x140a2f065: mov    rax,QWORD PTR [rbp-0x80]
0x140a2f069: cmp    DWORD PTR [rax+0x660],r15d
0x140a2f070: jle    0x140a2f2ab
0x140a2f076: mov    WORD PTR [rsp+0x62],r14w
0x140a2f07c: lea    rdi,[rax+0x20]
0x140a2f080: mov    QWORD PTR [rbp-0x70],rdi
0x140a2f084: mov    DWORD PTR [rsp+0x74],r15d
0x140a2f089: mov    rcx,rax
0x140a2f08c: nop    DWORD PTR [rax+0x0]
0x140a2f090: mov    rdi,QWORD PTR [rdi]
0x140a2f093: cmp    DWORD PTR [rdi+0x3d8],0xffffffff
0x140a2f09a: jne    0x140a2f285
0x140a2f0a0: test   DWORD PTR [rdi+0x110],0x2010000
0x140a2f0aa: jne    0x140a2f285
0x140a2f0b0: cmp    WORD PTR [rdi+0x800],0x0
0x140a2f0b8: jg     0x140a2f285
0x140a2f0be: mov    rcx,rdi
0x140a2f0c1: call   0x1413a7840
0x140a2f0c6: movsx  ecx,ax
0x140a2f0c9: dec    ecx
0x140a2f0cb: cmp    ecx,0xf
0x140a2f0ce: ja     0x140a2f0e8
0x140a2f0d0: movsxd rax,ecx
0x140a2f0d3: mov    ecx,DWORD PTR [rbx+rax*4+0xa2fa70]
0x140a2f0da: add    rcx,rbx
0x140a2f0dd: jmp    rcx
0x140a2f0df: test   BYTE PTR [rdi+0x11c],0x80
0x140a2f0e6: je     0x140a2f0fb
0x140a2f0e8: mov    rdx,rdi
0x140a2f0eb: mov    rcx,r13
0x140a2f0ee: call   0x14140bba0
0x140a2f0f3: test   al,al
0x140a2f0f5: je     0x140a2f27d
0x140a2f0fb: movsx  r14d,WORD PTR [rdi+0xa8]
0x140a2f103: mov    r12d,DWORD PTR [rsi+0x10]
0x140a2f107: mov    eax,r14d
0x140a2f10a: sub    eax,r12d
0x140a2f10d: mov    r8d,eax
0x140a2f110: neg    r8d
0x140a2f113: cmovs  r8d,eax
0x140a2f117: movsx  ebx,WORD PTR [rdi+0xaa]
0x140a2f11e: mov    r15d,DWORD PTR [rsi+0x1c]
0x140a2f122: mov    eax,ebx
0x140a2f124: sub    eax,r15d
0x140a2f127: mov    ecx,eax
0x140a2f129: neg    ecx
0x140a2f12b: cmovs  ecx,eax
0x140a2f12e: movsx  eax,WORD PTR [rdi+0xac]
0x140a2f135: sub    eax,DWORD PTR [rsi+0x20]
0x140a2f138: mov    edx,eax
0x140a2f13a: neg    edx
0x140a2f13c: cmovs  edx,eax
0x140a2f13f: movsx  r9d,cx
0x140a2f143: imul   r9d,r9d
0x140a2f147: movsx  ecx,r8w
0x140a2f14b: imul   ecx,ecx
0x140a2f14e: movsx  r8d,dx
0x140a2f152: imul   r8d,r8d
0x140a2f156: lea    eax,[rcx+r9*1]
0x140a2f15a: cmp    eax,r8d
0x140a2f15d: jl     0x140a2f270
0x140a2f163: cmp    r14d,r12d
0x140a2f166: jne    0x140a2f171
0x140a2f168: cmp    ebx,r15d
0x140a2f16b: je     0x140a2f270
0x140a2f171: lea    eax,[r8+r9*1]
0x140a2f175: add    eax,ecx
0x140a2f177: movd   xmm1,eax
0x140a2f17b: cvtdq2ps xmm1,xmm1
0x140a2f17e: xorps  xmm0,xmm0
0x140a2f181: ucomiss xmm0,xmm1
0x140a2f184: ja     0x140a2f18f
0x140a2f186: xorps  xmm0,xmm0
0x140a2f189: sqrtss xmm0,xmm1
0x140a2f18d: jmp    0x140a2f197
0x140a2f18f: movaps xmm0,xmm1
0x140a2f192: call   0x1415548d6
0x140a2f197: cvttss2si r9d,xmm0
0x140a2f19c: movzx  ecx,WORD PTR [rsp+0x62]
0x140a2f1a1: cmp    cx,0xffff
0x140a2f1a5: je     0x140a2f1b1
0x140a2f1a7: cmp    r9w,cx
0x140a2f1ab: jg     0x140a2f270
0x140a2f1b1: cmp    r9w,0x19
0x140a2f1b6: jg     0x140a2f270
0x140a2f1bc: sub    bx,r15w
0x140a2f1c0: sub    r14w,r12w
0x140a2f1c4: movsx  eax,r14w
0x140a2f1c8: mov    edx,eax
0x140a2f1ca: neg    edx
0x140a2f1cc: cmovs  edx,eax
0x140a2f1cf: movsx  eax,bx
0x140a2f1d2: mov    ecx,eax
0x140a2f1d4: neg    ecx
0x140a2f1d6: cmovs  ecx,eax
0x140a2f1d9: movsx  r8d,dx
0x140a2f1dd: movsx  edx,cx
0x140a2f1e0: test   bx,bx
0x140a2f1e3: jns    0x140a2f1f0
0x140a2f1e5: lea    eax,[r8+r8*1]
0x140a2f1e9: cmp    eax,edx
0x140a2f1eb: jle    0x140a2f23c
0x140a2f1ed: test   bx,bx
0x140a2f1f0: jle    0x140a2f1fe
0x140a2f1f2: lea    eax,[r8+r8*1]
0x140a2f1f6: cmp    eax,edx
0x140a2f1f8: jg     0x140a2f1fe
0x140a2f1fa: mov    al,0x4
0x140a2f1fc: jmp    0x140a2f23e
0x140a2f1fe: test   r14w,r14w
0x140a2f202: jns    0x140a2f21f
0x140a2f204: lea    eax,[rdx+rdx*1]
0x140a2f207: cmp    eax,r8d
0x140a2f20a: jg     0x140a2f210
0x140a2f20c: mov    al,0x6
0x140a2f20e: jmp    0x140a2f23e
0x140a2f210: test   bx,bx
0x140a2f213: jle    0x140a2f219
0x140a2f215: mov    al,0x5
0x140a2f217: jmp    0x140a2f23e
0x140a2f219: jns    0x140a2f23c
0x140a2f21b: mov    al,0x7
0x140a2f21d: jmp    0x140a2f23e
0x140a2f21f: jle    0x140a2f23c
0x140a2f221: lea    eax,[rdx+rdx*1]
0x140a2f224: cmp    eax,r8d
0x140a2f227: jg     0x140a2f22d
0x140a2f229: mov    al,0x2
0x140a2f22b: jmp    0x140a2f23e
0x140a2f22d: test   bx,bx
0x140a2f230: jns    0x140a2f236
0x140a2f232: mov    al,0x1
0x140a2f234: jmp    0x140a2f23e
0x140a2f236: jle    0x140a2f23c
0x140a2f238: mov    al,0x3
0x140a2f23a: jmp    0x140a2f23e
0x140a2f23c: xor    al,al
0x140a2f23e: mov    rcx,QWORD PTR [rbp-0x80]
0x140a2f242: lea    rbx,[rip+0xffffffffff5d0db7]        # 0x140000000
0x140a2f249: cmp    BYTE PTR [rsi+0x14a],al
0x140a2f24f: jne    0x140a2f268
0x140a2f251: mov    rdx,rdi
0x140a2f254: mov    QWORD PTR [rbp-0x78],rdx
0x140a2f258: movzx  r12d,al
0x140a2f25c: mov    BYTE PTR [rsp+0x60],al
0x140a2f260: mov    WORD PTR [rsp+0x62],r9w
0x140a2f266: jmp    0x140a2f285
0x140a2f268: movzx  r12d,BYTE PTR [rsp+0x60]
0x140a2f26e: jmp    0x140a2f281
0x140a2f270: lea    rbx,[rip+0xffffffffff5d0d89]        # 0x140000000
0x140a2f277: movzx  r12d,BYTE PTR [rsp+0x60]
0x140a2f27d: mov    rcx,QWORD PTR [rbp-0x80]
0x140a2f281: mov    rdx,QWORD PTR [rbp-0x78]
0x140a2f285: inc    DWORD PTR [rsp+0x74]
0x140a2f289: mov    rdi,QWORD PTR [rbp-0x70]
0x140a2f28d: add    rdi,0x8
0x140a2f291: mov    QWORD PTR [rbp-0x70],rdi
0x140a2f295: mov    eax,DWORD PTR [rsp+0x74]
0x140a2f299: cmp    eax,DWORD PTR [rcx+0x660]
0x140a2f29f: jl     0x140a2f090
0x140a2f2a5: mov    r14d,0xffffffff
0x140a2f2ab: mov    ecx,0xffff8ad0
0x140a2f2b0: mov    WORD PTR [rsp+0x68],cx
0x140a2f2b5: mov    WORD PTR [rsp+0x6c],cx
0x140a2f2ba: mov    WORD PTR [rsp+0x70],cx
0x140a2f2bf: test   rdx,rdx
0x140a2f2c2: je     0x140a2f34b
0x140a2f2c8: test   DWORD PTR [rdx+0x110],0x2000000
0x140a2f2d2: je     0x140a2f327
0x140a2f2d4: mov    rbx,QWORD PTR [rdx+0x1d8]
0x140a2f2db: mov    rdi,QWORD PTR [rdx+0x1e0]
0x140a2f2e2: cmp    rbx,rdi
0x140a2f2e5: jae    0x140a2f320
0x140a2f2e7: mov    rcx,QWORD PTR [rbx]
0x140a2f2ea: mov    rax,QWORD PTR [rcx]
0x140a2f2ed: call   QWORD PTR [rax+0x10]
0x140a2f2f0: cmp    eax,0xb
0x140a2f2f3: jne    0x140a2f303
0x140a2f2f5: mov    rcx,QWORD PTR [rbx]
0x140a2f2f8: mov    rax,QWORD PTR [rcx]
0x140a2f2fb: call   QWORD PTR [rax+0x18]
0x140a2f2fe: test   rax,rax
0x140a2f301: jne    0x140a2f309
0x140a2f303: add    rbx,0x8
0x140a2f307: jmp    0x140a2f2e2
0x140a2f309: lea    r9,[rsp+0x70]
0x140a2f30e: lea    r8,[rsp+0x6c]
0x140a2f313: lea    rdx,[rsp+0x68]
0x140a2f318: mov    rcx,rax
0x140a2f31b: call   0x140ca3790
0x140a2f320: mov    ecx,0xffff8ad0
0x140a2f325: jmp    0x140a2f34b
0x140a2f327: movzx  eax,WORD PTR [rdx+0xa8]
0x140a2f32e: mov    WORD PTR [rsp+0x68],ax
0x140a2f333: movzx  eax,WORD PTR [rdx+0xaa]
0x140a2f33a: mov    WORD PTR [rsp+0x6c],ax
0x140a2f33f: movzx  eax,WORD PTR [rdx+0xac]
0x140a2f346: mov    WORD PTR [rsp+0x70],ax
0x140a2f34b: xor    r15b,r15b
0x140a2f34e: mov    BYTE PTR [rsp+0x62],r15b
0x140a2f353: cmp    WORD PTR [rsp+0x68],cx
0x140a2f358: jne    0x140a2f718
0x140a2f35e: cmp    BYTE PTR [rsi+0x14c],0x4
0x140a2f365: jne    0x140a2f718
0x140a2f36b: mov    WORD PTR [rsp+0x74],r14w
0x140a2f371: mov    rbx,QWORD PTR [rip+0x19e1d68]        # 0x1424110e0
0x140a2f378: mov    rdi,QWORD PTR [rip+0x19e1d69]        # 0x1424110e8
0x140a2f37f: cmp    rbx,rdi
0x140a2f382: je     0x140a2f5cc
0x140a2f388: nop    DWORD PTR [rax+rax*1+0x0]
0x140a2f390: mov    r15,QWORD PTR [rbx]
0x140a2f393: mov    rax,QWORD PTR [r15]
0x140a2f396: mov    rcx,r15
0x140a2f399: call   QWORD PTR [rax+0x120]
0x140a2f39f: movsx  ecx,WORD PTR [r15+0x120]
0x140a2f3a7: cmp    ecx,eax
0x140a2f3a9: jl     0x140a2f5a9
0x140a2f3af: mov    rax,QWORD PTR [r15]
0x140a2f3b2: mov    rcx,r15
0x140a2f3b5: call   QWORD PTR [rax+0x258]
0x140a2f3bb: test   al,al
0x140a2f3bd: jne    0x140a2f5a9
0x140a2f3c3: mov    r12d,DWORD PTR [r15+0x10]
0x140a2f3c7: mov    r10d,DWORD PTR [rsi+0x10]
0x140a2f3cb: mov    eax,r12d
0x140a2f3ce: sub    eax,r10d
0x140a2f3d1: mov    r8d,eax
0x140a2f3d4: neg    r8d
0x140a2f3d7: cmovs  r8d,eax
0x140a2f3db: mov    r14d,DWORD PTR [r15+0x1c]
0x140a2f3df: mov    r11d,DWORD PTR [rsi+0x1c]
0x140a2f3e3: mov    eax,r14d
0x140a2f3e6: sub    eax,r11d
0x140a2f3e9: mov    ecx,eax
0x140a2f3eb: neg    ecx
0x140a2f3ed: cmovs  ecx,eax
0x140a2f3f0: mov    eax,DWORD PTR [r15+0x20]
0x140a2f3f4: sub    eax,DWORD PTR [rsi+0x20]
0x140a2f3f7: mov    edx,eax
0x140a2f3f9: neg    edx
0x140a2f3fb: cmovs  edx,eax
0x140a2f3fe: movsx  r9d,cx
0x140a2f402: imul   r9d,r9d
0x140a2f406: movsx  ecx,r8w
0x140a2f40a: imul   ecx,ecx
0x140a2f40d: movsx  r8d,dx
0x140a2f411: imul   r8d,r8d
0x140a2f415: lea    eax,[rcx+r9*1]
0x140a2f419: cmp    eax,r8d
0x140a2f41c: jl     0x140a2f5a3
0x140a2f422: lea    eax,[r8+r9*1]
0x140a2f426: add    eax,ecx
0x140a2f428: movd   xmm1,eax
0x140a2f42c: cvtdq2ps xmm1,xmm1
0x140a2f42f: xorps  xmm0,xmm0
0x140a2f432: ucomiss xmm0,xmm1
0x140a2f435: ja     0x140a2f440
0x140a2f437: xorps  xmm0,xmm0
0x140a2f43a: sqrtss xmm0,xmm1
0x140a2f43e: jmp    0x140a2f450
0x140a2f440: movaps xmm0,xmm1
0x140a2f443: call   0x1415548d6
0x140a2f448: mov    r10d,DWORD PTR [rsi+0x10]
0x140a2f44c: mov    r11d,DWORD PTR [rsi+0x1c]
0x140a2f450: cvttss2si eax,xmm0
0x140a2f454: mov    DWORD PTR [rbp-0x80],eax
0x140a2f457: movzx  ecx,WORD PTR [rsp+0x74]
0x140a2f45c: cmp    cx,0xffff
0x140a2f460: je     0x140a2f46b
0x140a2f462: cmp    ax,cx
0x140a2f465: jg     0x140a2f5a3
0x140a2f46b: cmp    ax,0x19
0x140a2f46f: jg     0x140a2f5a3
0x140a2f475: sub    r14w,r11w
0x140a2f479: sub    r12w,r10w
0x140a2f47d: movsx  eax,r12w
0x140a2f481: mov    edx,eax
0x140a2f483: neg    edx
0x140a2f485: cmovs  edx,eax
0x140a2f488: movsx  eax,r14w
0x140a2f48c: mov    ecx,eax
0x140a2f48e: neg    ecx
0x140a2f490: cmovs  ecx,eax
0x140a2f493: movsx  r8d,dx
0x140a2f497: movsx  edx,cx
0x140a2f49a: test   r14w,r14w
0x140a2f49e: jns    0x140a2f4ac
0x140a2f4a0: lea    eax,[r8+r8*1]
0x140a2f4a4: cmp    eax,edx
0x140a2f4a6: jle    0x140a2f501
0x140a2f4a8: test   r14w,r14w
0x140a2f4ac: jle    0x140a2f4bb
0x140a2f4ae: lea    eax,[r8+r8*1]
0x140a2f4b2: cmp    eax,edx
0x140a2f4b4: jg     0x140a2f4bb
0x140a2f4b6: mov    r14b,0x4
0x140a2f4b9: jmp    0x140a2f504
0x140a2f4bb: test   r12w,r12w
0x140a2f4bf: jns    0x140a2f4e0
0x140a2f4c1: lea    eax,[rdx+rdx*1]
0x140a2f4c4: cmp    eax,r8d
0x140a2f4c7: jg     0x140a2f4ce
0x140a2f4c9: mov    r14b,0x6
0x140a2f4cc: jmp    0x140a2f504
0x140a2f4ce: test   r14w,r14w
0x140a2f4d2: jle    0x140a2f4d9
0x140a2f4d4: mov    r14b,0x5
0x140a2f4d7: jmp    0x140a2f504
0x140a2f4d9: jns    0x140a2f501
0x140a2f4db: mov    r14b,0x7
0x140a2f4de: jmp    0x140a2f504
0x140a2f4e0: jle    0x140a2f501
0x140a2f4e2: lea    eax,[rdx+rdx*1]
0x140a2f4e5: cmp    eax,r8d
0x140a2f4e8: jg     0x140a2f4ef
0x140a2f4ea: mov    r14b,0x2
0x140a2f4ed: jmp    0x140a2f504
0x140a2f4ef: test   r14w,r14w
0x140a2f4f3: jns    0x140a2f4fa
0x140a2f4f5: mov    r14b,0x1
0x140a2f4f8: jmp    0x140a2f504
0x140a2f4fa: jle    0x140a2f501
0x140a2f4fc: mov    r14b,0x3
0x140a2f4ff: jmp    0x140a2f504
0x140a2f501: xor    r14b,r14b
0x140a2f504: cmp    BYTE PTR [rsi+0x14a],r14b
0x140a2f50b: jne    0x140a2f5a3
0x140a2f511: mov    rcx,r13
0x140a2f514: call   0x14139bee0
0x140a2f519: test   eax,eax
0x140a2f51b: je     0x140a2f5a3
0x140a2f521: mov    rcx,r13
0x140a2f524: call   0x14139be10
0x140a2f529: movzx  r8d,WORD PTR [r15+0x20]
0x140a2f52e: movzx  r9d,WORD PTR [r15+0x1c]
0x140a2f533: mov    DWORD PTR [rsp+0x30],eax
0x140a2f537: mov    WORD PTR [rsp+0x28],r8w
0x140a2f53d: mov    WORD PTR [rsp+0x20],r9w
0x140a2f543: movzx  r9d,WORD PTR [r15+0x10]
0x140a2f548: movzx  r8d,WORD PTR [r13+0xac]
0x140a2f550: movzx  edx,WORD PTR [r13+0xaa]
0x140a2f558: movzx  ecx,WORD PTR [r13+0xa8]
0x140a2f560: call   0x140aa84d0
0x140a2f565: test   al,al
0x140a2f567: je     0x140a2f5a3
0x140a2f569: movzx  eax,WORD PTR [r15+0x10]
0x140a2f56e: mov    WORD PTR [rsp+0x68],ax
0x140a2f573: movzx  eax,WORD PTR [r15+0x1c]
0x140a2f578: mov    WORD PTR [rsp+0x6c],ax
0x140a2f57d: movzx  eax,WORD PTR [r15+0x20]
0x140a2f582: mov    WORD PTR [rsp+0x70],ax
0x140a2f587: movzx  r12d,r14b
0x140a2f58b: mov    BYTE PTR [rsp+0x60],r14b
0x140a2f590: movzx  eax,WORD PTR [rbp-0x80]
0x140a2f594: mov    WORD PTR [rsp+0x74],ax
0x140a2f599: mov    r15b,0x1
0x140a2f59c: mov    BYTE PTR [rsp+0x62],r15b
0x140a2f5a1: jmp    0x140a2f5af
0x140a2f5a3: movzx  r12d,BYTE PTR [rsp+0x60]
0x140a2f5a9: movzx  r15d,BYTE PTR [rsp+0x62]
0x140a2f5af: add    rbx,0x8
0x140a2f5b3: cmp    rbx,rdi
0x140a2f5b6: jne    0x140a2f390
0x140a2f5bc: mov    ecx,0xffff8ad0
0x140a2f5c1: cmp    WORD PTR [rsp+0x68],cx
0x140a2f5c6: jne    0x140a2f718
0x140a2f5cc: movzx  edx,WORD PTR [rsi+0x10]
0x140a2f5d0: movzx  r8d,WORD PTR [rsi+0x1c]
0x140a2f5d5: movzx  edi,WORD PTR [rsi+0x20]
0x140a2f5d9: movsx  rax,BYTE PTR [rsi+0x14a]
0x140a2f5e1: cmp    eax,0x7
0x140a2f5e4: ja     0x140a2f62b
0x140a2f5e6: lea    r9,[rip+0xffffffffff5d0a13]        # 0x140000000
0x140a2f5ed: mov    ecx,DWORD PTR [r9+rax*4+0xa2fab0]
0x140a2f5f5: add    rcx,r9
0x140a2f5f8: jmp    rcx
0x140a2f5fa: add    dx,0x19
0x140a2f5fe: jmp    0x140a2f626
0x140a2f600: add    dx,0x19
0x140a2f604: jmp    0x140a2f62b
0x140a2f606: add    dx,0x19
0x140a2f60a: add    r8w,0x19
0x140a2f60f: jmp    0x140a2f62b
0x140a2f611: add    dx,0xffe7
0x140a2f615: add    r8w,0x19
0x140a2f61a: jmp    0x140a2f62b
0x140a2f61c: add    dx,0xffe7
0x140a2f620: jmp    0x140a2f62b
0x140a2f622: add    dx,0xffe7
0x140a2f626: add    r8w,0xffe7
0x140a2f62b: xor    r14d,r14d
0x140a2f62e: mov    r11d,r14d
0x140a2f631: test   dx,dx
0x140a2f634: cmovns r11w,dx
0x140a2f639: test   r8w,r8w
0x140a2f63d: jns    0x140a2f642
0x140a2f63f: mov    r8d,r14d
0x140a2f642: movsx  eax,r11w
0x140a2f646: mov    ecx,DWORD PTR [rip+0x1adaf10]        # 0x14250a55c
0x140a2f64c: cmp    eax,ecx
0x140a2f64e: jl     0x140a2f654
0x140a2f650: lea    r11d,[rcx-0x1]
0x140a2f654: movzx  eax,r8w
0x140a2f658: mov    ecx,DWORD PTR [rip+0x1adaf02]        # 0x14250a560
0x140a2f65e: cmp    eax,ecx
0x140a2f660: jl     0x140a2f666
0x140a2f662: lea    r8d,[rcx-0x1]
0x140a2f666: movzx  r9d,r8w
0x140a2f66a: sub    r9w,WORD PTR [rsi+0x1c]
0x140a2f66f: movzx  ebx,r11w
0x140a2f673: sub    bx,WORD PTR [rsi+0x10]
0x140a2f677: movsx  eax,bx
0x140a2f67a: mov    edx,eax
0x140a2f67c: neg    edx
0x140a2f67e: cmovs  edx,eax
0x140a2f681: movsx  eax,r9w
0x140a2f685: mov    ecx,eax
0x140a2f687: neg    ecx
0x140a2f689: cmovs  ecx,eax
0x140a2f68c: movsx  r10d,dx
0x140a2f690: movsx  edx,cx
0x140a2f693: test   r9w,r9w
0x140a2f697: jns    0x140a2f6a5
0x140a2f699: lea    eax,[r10+r10*1]
0x140a2f69d: cmp    eax,edx
0x140a2f69f: jle    0x140a2f6f2
0x140a2f6a1: test   r9w,r9w
0x140a2f6a5: jle    0x140a2f6b3
0x140a2f6a7: lea    eax,[r10+r10*1]
0x140a2f6ab: cmp    eax,edx
0x140a2f6ad: jg     0x140a2f6b3
0x140a2f6af: mov    al,0x4
0x140a2f6b1: jmp    0x140a2f6f4
0x140a2f6b3: test   bx,bx
0x140a2f6b6: jns    0x140a2f6d4
0x140a2f6b8: lea    eax,[rdx+rdx*1]
0x140a2f6bb: cmp    eax,r10d
0x140a2f6be: jg     0x140a2f6c4
0x140a2f6c0: mov    al,0x6
0x140a2f6c2: jmp    0x140a2f6f4
0x140a2f6c4: test   r9w,r9w
0x140a2f6c8: jle    0x140a2f6ce
0x140a2f6ca: mov    al,0x5
0x140a2f6cc: jmp    0x140a2f6f4
0x140a2f6ce: jns    0x140a2f6f2
0x140a2f6d0: mov    al,0x7
0x140a2f6d2: jmp    0x140a2f6f4
0x140a2f6d4: jle    0x140a2f6f2
0x140a2f6d6: lea    eax,[rdx+rdx*1]
0x140a2f6d9: cmp    eax,r10d
0x140a2f6dc: jg     0x140a2f6e2
0x140a2f6de: mov    al,0x2
0x140a2f6e0: jmp    0x140a2f6f4
0x140a2f6e2: test   r9w,r9w
0x140a2f6e6: jns    0x140a2f6ec
0x140a2f6e8: mov    al,0x1
0x140a2f6ea: jmp    0x140a2f6f4
0x140a2f6ec: jle    0x140a2f6f2
0x140a2f6ee: mov    al,0x3
0x140a2f6f0: jmp    0x140a2f6f4
0x140a2f6f2: xor    al,al
0x140a2f6f4: mov    ecx,0xffff8ad0
0x140a2f6f9: cmp    BYTE PTR [rsi+0x14a],al
0x140a2f6ff: jne    0x140a2f71b
0x140a2f701: mov    WORD PTR [rsp+0x68],r11w
0x140a2f707: mov    WORD PTR [rsp+0x6c],r8w
0x140a2f70d: mov    WORD PTR [rsp+0x70],di
0x140a2f712: movzx  r12d,al
0x140a2f716: jmp    0x140a2f71b
0x140a2f718: xor    r14d,r14d
0x140a2f71b: movzx  eax,WORD PTR [rsp+0x66]
0x140a2f720: movzx  r8d,WORD PTR [rsp+0x64]
0x140a2f726: movzx  r9d,WORD PTR [rsp+0x78]
0x140a2f72c: cmp    WORD PTR [r13+0xa8],ax
0x140a2f734: jne    0x140a2fa18
0x140a2f73a: cmp    WORD PTR [r13+0xaa],r8w
0x140a2f742: jne    0x140a2fa18
0x140a2f748: cmp    WORD PTR [r13+0xac],r9w
0x140a2f750: jne    0x140a2fa18
0x140a2f756: cmp    BYTE PTR [rsi+0x14d],0x0
0x140a2f75d: jne    0x140a2fa28
0x140a2f763: cmp    BYTE PTR [rsi+0x14c],0x3
0x140a2f76a: jl     0x140a2fa28
0x140a2f770: cmp    BYTE PTR [rsi+0x14a],r12b
0x140a2f777: jne    0x140a2fa28
0x140a2f77d: cmp    WORD PTR [rsp+0x68],cx
0x140a2f782: je     0x140a2fa28
0x140a2f788: mov    rax,QWORD PTR [rsi+0x128]
0x140a2f78f: mov    rcx,QWORD PTR [rax+0x18]
0x140a2f793: mov    rdi,QWORD PTR [rcx]
0x140a2f796: mov    dl,0x2
0x140a2f798: mov    rcx,rdi
0x140a2f79b: call   0x140c7b1e0
0x140a2f7a0: mov    ecx,0xa0
0x140a2f7a5: call   0x1415530e0
0x140a2f7aa: mov    rbx,rax
0x140a2f7ad: mov    QWORD PTR [rbp-0x70],rax
0x140a2f7b1: xor    edx,edx
0x140a2f7b3: mov    rcx,rax
0x140a2f7b6: call   0x140ebf110
0x140a2f7bb: lea    rax,[rip+0xc48c5e]        # 0x141678420
0x140a2f7c2: mov    QWORD PTR [rbx],rax
0x140a2f7c5: test   DWORD PTR [rdi+0x10],0x20000000
0x140a2f7cc: jne    0x140a2f7d6
0x140a2f7ce: mov    rcx,rdi
0x140a2f7d1: call   0x140c7dc00
0x140a2f7d6: movsxd r14,DWORD PTR [rdi+0x74]
0x140a2f7da: test   DWORD PTR [rdi+0x10],0x20000000
0x140a2f7e1: jne    0x140a2f7eb
0x140a2f7e3: mov    rcx,rdi
0x140a2f7e6: call   0x140c7dc00
0x140a2f7eb: imul   rcx,r14,0xf4240
0x140a2f7f2: movsxd rax,DWORD PTR [rdi+0x78]
0x140a2f7f6: add    rcx,rax
0x140a2f7f9: test   rcx,rcx
0x140a2f7fc: jg     0x140a2f805
0x140a2f7fe: mov    eax,0xc8
0x140a2f803: jmp    0x140a2f80f
0x140a2f805: mov    eax,0x3b9aca00
0x140a2f80a: cqo
0x140a2f80c: idiv   rcx
0x140a2f80f: mov    DWORD PTR [rbx+0x58],eax
0x140a2f812: cmp    eax,0xc8
0x140a2f817: jle    0x140a2f822
0x140a2f819: mov    DWORD PTR [rbx+0x58],0xc8
0x140a2f820: jmp    0x140a2f82e
0x140a2f822: cmp    eax,0x14
0x140a2f825: jge    0x140a2f82e
0x140a2f827: mov    DWORD PTR [rbx+0x58],0x14
0x140a2f82e: movzx  r9d,WORD PTR [rsi+0x10]
0x140a2f833: mov    WORD PTR [rbx+0x20],r9w
0x140a2f838: movzx  r10d,WORD PTR [rsi+0x1c]
0x140a2f83d: mov    WORD PTR [rbx+0x22],r10w
0x140a2f842: movzx  r11d,WORD PTR [rsi+0x20]
0x140a2f847: mov    WORD PTR [rbx+0x24],r11w
0x140a2f84c: movsx  rax,BYTE PTR [rsi+0x14a]
0x140a2f854: movzx  edx,r9w
0x140a2f858: movzx  r8d,r10w
0x140a2f85c: cmp    eax,0x7
0x140a2f85f: ja     0x140a2f8bc
0x140a2f861: lea    r14,[rip+0xffffffffff5d0798]        # 0x140000000
0x140a2f868: mov    ecx,DWORD PTR [r14+rax*4+0xa2fad0]
0x140a2f870: add    rcx,r14
0x140a2f873: jmp    rcx
0x140a2f875: lea    edx,[r9+0x1]
0x140a2f879: jmp    0x140a2f8af
0x140a2f87b: lea    edx,[r9+0x1]
0x140a2f87f: mov    WORD PTR [rbx+0x20],dx
0x140a2f883: jmp    0x140a2f8bc
0x140a2f885: lea    edx,[r9+0x1]
0x140a2f889: mov    WORD PTR [rbx+0x20],dx
0x140a2f88d: lea    r8d,[r10+0x1]
0x140a2f891: jmp    0x140a2f8b7
0x140a2f893: lea    edx,[r9-0x1]
0x140a2f897: mov    WORD PTR [rbx+0x20],dx
0x140a2f89b: lea    r8d,[r10+0x1]
0x140a2f89f: jmp    0x140a2f8b7
0x140a2f8a1: lea    edx,[r9-0x1]
0x140a2f8a5: mov    WORD PTR [rbx+0x20],dx
0x140a2f8a9: jmp    0x140a2f8bc
0x140a2f8ab: lea    edx,[r9-0x1]
0x140a2f8af: mov    WORD PTR [rbx+0x20],dx
0x140a2f8b3: lea    r8d,[r10-0x1]
0x140a2f8b7: mov    WORD PTR [rbx+0x22],r8w
0x140a2f8bc: mov    WORD PTR [rbx+0x32],dx
0x140a2f8c0: mov    WORD PTR [rbx+0x34],r8w
0x140a2f8c5: mov    WORD PTR [rbx+0x36],r11w
0x140a2f8ca: movzx  eax,WORD PTR [rsp+0x68]
0x140a2f8cf: mov    WORD PTR [rbx+0x26],ax
0x140a2f8d3: movzx  eax,WORD PTR [rsp+0x6c]
0x140a2f8d8: mov    WORD PTR [rbx+0x28],ax
0x140a2f8dc: movzx  eax,WORD PTR [rsp+0x70]
0x140a2f8e1: mov    WORD PTR [rbx+0x2a],ax
0x140a2f8e5: xor    r12d,r12d
0x140a2f8e8: mov    DWORD PTR [rbx+0x38],r12d
0x140a2f8ec: mov    DWORD PTR [rbx+0x40],r12d
0x140a2f8f0: mov    DWORD PTR [rbx+0x44],0xffffffff
0x140a2f8f7: mov    DWORD PTR [rbx+0x3c],0xc8
0x140a2f8fe: mov    WORD PTR [rbx+0x2c],dx
0x140a2f902: mov    WORD PTR [rbx+0x2e],r8w
0x140a2f907: mov    WORD PTR [rbx+0x30],r11w
0x140a2f90c: mov    QWORD PTR [rbx+0x98],rdi
0x140a2f913: mov    WORD PTR [rdi+0x8],dx
0x140a2f917: mov    rcx,QWORD PTR [rbx+0x98]
0x140a2f91e: movzx  eax,WORD PTR [rbx+0x2e]
0x140a2f922: mov    WORD PTR [rcx+0xa],ax
0x140a2f926: mov    rcx,QWORD PTR [rbx+0x98]
0x140a2f92d: movzx  eax,WORD PTR [rbx+0x30]
0x140a2f931: mov    WORD PTR [rcx+0xc],ax
0x140a2f935: mov    r8d,DWORD PTR [rbx+0x10]
0x140a2f939: mov    edx,0xc
0x140a2f93e: mov    rcx,QWORD PTR [rbx+0x98]
0x140a2f945: call   0x140073c90
0x140a2f94a: mov    QWORD PTR [rbx+0x18],r12
0x140a2f94e: mov    DWORD PTR [rbx+0x4c],r12d
0x140a2f952: or     DWORD PTR [rdi+0x10],0x2
0x140a2f956: mov    rax,QWORD PTR [rdi]
0x140a2f959: mov    rcx,rdi
0x140a2f95c: call   QWORD PTR [rax]
0x140a2f95e: cmp    ax,0x41
0x140a2f962: je     0x140a2f96a
0x140a2f964: or     DWORD PTR [rbx+0x48],0x4
0x140a2f968: jmp    0x140a2f96e
0x140a2f96a: or     DWORD PTR [rbx+0x48],0x10
0x140a2f96e: mov    r14,QWORD PTR [rbp-0x78]
0x140a2f972: test   r14,r14
0x140a2f975: je     0x140a2f981
0x140a2f977: mov    eax,DWORD PTR [r14+0x130]
0x140a2f97e: mov    DWORD PTR [rbx+0x68],eax
0x140a2f981: mov    eax,0x96
0x140a2f986: mov    ecx,0x32
0x140a2f98b: test   r15b,r15b
0x140a2f98e: cmove  eax,ecx
0x140a2f991: mov    edx,0x3a
0x140a2f996: mov    DWORD PTR [rsp+0x50],0xffffffff
0x140a2f99e: mov    WORD PTR [rsp+0x48],0x2f
0x140a2f9a5: mov    DWORD PTR [rsp+0x40],0x1
0x140a2f9ad: mov    QWORD PTR [rsp+0x38],r12
0x140a2f9b2: mov    QWORD PTR [rsp+0x30],rdi
0x140a2f9b7: mov    DWORD PTR [rsp+0x28],eax
0x140a2f9bb: mov    DWORD PTR [rsp+0x20],eax
0x140a2f9bf: mov    r9d,0xf
0x140a2f9c5: mov    r8d,0xb
0x140a2f9cb: mov    rcx,r13
0x140a2f9ce: call   0x1413812a0
0x140a2f9d3: add    eax,0xc8
0x140a2f9d8: mov    DWORD PTR [rbx+0x50],eax
0x140a2f9db: test   r14,r14
0x140a2f9de: je     0x140a2f9f8
0x140a2f9e0: mov    r9d,0x6
0x140a2f9e6: mov    r8,r14
0x140a2f9e9: mov    rdx,r13
0x140a2f9ec: lea    rcx,[rip+0x19c3f7d]        # 0x1423f3970
0x140a2f9f3: call   0x1414fc5c0
0x140a2f9f8: cmp    WORD PTR [r13+0x814],0x2
0x140a2fa01: jne    0x140a2fa07
0x140a2fa03: or     DWORD PTR [rbx+0x48],0x40
0x140a2fa07: mov    BYTE PTR [rsi+0x14d],0x1
0x140a2fa0e: mov    rcx,r13
0x140a2fa11: call   0x1413843f0
0x140a2fa16: jmp    0x140a2fa28
0x140a2fa18: mov    DWORD PTR [rsp+0x20],r14d
0x140a2fa1d: movzx  edx,ax
0x140a2fa20: mov    rcx,r13
0x140a2fa23: call   0x140074ea0
0x140a2fa28: mov    rcx,QWORD PTR [rbp+0x40]
0x140a2fa2c: xor    rcx,rsp
0x140a2fa2f: call   0x1415530b0
0x140a2fa34: mov    rbx,QWORD PTR [rsp+0x1a0]
0x140a2fa3c: add    rsp,0x150
0x140a2fa43: pop    r15
0x140a2fa45: pop    r14
0x140a2fa47: pop    r13
0x140a2fa49: pop    r12
0x140a2fa4b: pop    rdi
0x140a2fa4c: pop    rsi
0x140a2fa4d: pop    rbp
0x140a2fa4e: ret
0x140a2fa4f: nop
0x140a2fa50: shr    bh,1
0x140a2fa52: movabs ds:0xa2efed00a2efdd00,al
0x140a2fa5b: add    dl,bh
0x140a2fa5d: out    dx,eax
0x140a2fa5e: movabs ds:0xa2f01700a2f00a00,al
0x140a2fa67: add    BYTE PTR [rdi],ah
0x140a2fa69: lock movabs ds:0xa2f0fb00a2f03400,al
0x140a2fa73: add    al,ch
0x140a2fa75: lock movabs ds:0xa2f0e800a2f0e800,al
0x140a2fa7f: add    bl,bh
0x140a2fa81: lock movabs ds:0xa2f0e800a2f0df00,al
0x140a2fa8b: add    al,ch
0x140a2fa8d: lock movabs ds:0xa2f0e800a2f0fb00,al
0x140a2fa97: add    al,ch
0x140a2fa99: lock movabs ds:0xa2f0e800a2f0fb00,al
0x140a2faa3: add    bl,bh
0x140a2faa5: lock movabs ds:0xa2f0fb00a2f0e800,al
0x140a2faaf: add    BYTE PTR [rsi],ah
0x140a2fab1: mul    BYTE PTR [rdx-0x5d0a0600]
0x140a2fab7: add    BYTE PTR [rax],al
0x140a2fab9: mul    BYTE PTR [rdx-0x5d09fa00]
0x140a2fabf: add    BYTE PTR [rdx],cl
0x140a2fac1: mul    BYTE PTR [rdx-0x5d09ef00]
0x140a2fac7: add    BYTE PTR [rsi+rsi*8],bl
0x140a2faca: movabs ds:0xa2f8b300a2f62200,al
0x140a2fad3: add    BYTE PTR [rbp-0x8],dh
0x140a2fad6: movabs ds:0xa2f88500a2f87b00,al
0x140a2fadf: add    BYTE PTR [rbp-0x6cff5d08],cl
0x140a2fae5: clc
0x140a2fae6: movabs ds:0xa2f8ab00a2f8a100,al
