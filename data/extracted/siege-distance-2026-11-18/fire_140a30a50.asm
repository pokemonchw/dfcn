0x140a30a50: mov    QWORD PTR [rsp+0x18],rbx
0x140a30a55: push   rbp
0x140a30a56: push   rsi
0x140a30a57: push   rdi
0x140a30a58: push   r12
0x140a30a5a: push   r13
0x140a30a5c: push   r14
0x140a30a5e: push   r15
0x140a30a60: lea    rbp,[rsp-0xd0]
0x140a30a68: sub    rsp,0x1d0
0x140a30a6f: mov    rax,QWORD PTR [rip+0xe8d5ca]        # 0x1418be040
0x140a30a76: xor    rax,rsp
0x140a30a79: mov    QWORD PTR [rbp+0xc0],rax
0x140a30a80: mov    rsi,rdx
0x140a30a83: mov    QWORD PTR [rbp-0x68],rdx
0x140a30a87: mov    r14,rcx
0x140a30a8a: mov    QWORD PTR [rbp-0x78],rcx
0x140a30a8e: mov    rdi,QWORD PTR [rcx+0x4d8]
0x140a30a95: mov    ecx,0x92
0x140a30a9a: mov    r13d,0xffff8ad0
0x140a30aa0: cmp    WORD PTR [r14+0xc0],r13w
0x140a30aa8: jne    0x140a30abf
0x140a30aaa: mov    eax,DWORD PTR [rdi+0x2c]
0x140a30aad: and    eax,0xfffffff3
0x140a30ab0: mov    DWORD PTR [rdi+0x2c],eax
0x140a30ab3: cmp    WORD PTR [rdi+0x14],cx
0x140a30ab7: je     0x140a30abf
0x140a30ab9: and    eax,0xffffffdf
0x140a30abc: mov    DWORD PTR [rdi+0x2c],eax
0x140a30abf: mov    eax,DWORD PTR [rdi+0x2c]
0x140a30ac2: test   al,0x4
0x140a30ac4: jne    0x140a32408
0x140a30aca: test   al,0x8
0x140a30acc: jne    0x140a32408
0x140a30ad2: test   al,0x20
0x140a30ad4: je     0x140a30ae0
0x140a30ad6: cmp    WORD PTR [rdi+0x14],cx
0x140a30ada: jne    0x140a32408
0x140a30ae0: mov    rbx,QWORD PTR [rdi+0xb0]
0x140a30ae7: mov    rdi,QWORD PTR [rdi+0xb8]
0x140a30aee: xchg   ax,ax
0x140a30af0: xor    r12d,r12d
0x140a30af3: cmp    rbx,rdi
0x140a30af6: jae    0x140a30b1a
0x140a30af8: mov    rcx,QWORD PTR [rbx]
0x140a30afb: mov    rax,QWORD PTR [rcx]
0x140a30afe: call   QWORD PTR [rax+0x10]
0x140a30b01: cmp    eax,0x24
0x140a30b04: je     0x140a30b0c
0x140a30b06: add    rbx,0x8
0x140a30b0a: jmp    0x140a30af0
0x140a30b0c: mov    rcx,QWORD PTR [rbx]
0x140a30b0f: mov    rax,QWORD PTR [rcx]
0x140a30b12: call   QWORD PTR [rax+0x30]
0x140a30b15: mov    r15,rax
0x140a30b18: jmp    0x140a30b1d
0x140a30b1a: mov    r15,r12
0x140a30b1d: mov    QWORD PTR [rbp-0x58],r15
0x140a30b21: test   r15,r15
0x140a30b24: jne    0x140a30be2
0x140a30b2a: xorps  xmm0,xmm0
0x140a30b2d: movups XMMWORD PTR [rbp+0x28],xmm0
0x140a30b31: mov    QWORD PTR [rbp+0x38],r12
0x140a30b35: mov    QWORD PTR [rbp+0x40],0xf
0x140a30b3d: mov    BYTE PTR [rbp+0x28],r12b
0x140a30b41: movups XMMWORD PTR [rbp+0x48],xmm0
0x140a30b45: mov    QWORD PTR [rbp+0x58],r12
0x140a30b49: mov    QWORD PTR [rbp+0x60],0xf
0x140a30b51: mov    BYTE PTR [rbp+0x48],r12b
0x140a30b55: movdqa XMMWORD PTR [rbp+0x70],xmm0
0x140a30b5a: mov    QWORD PTR [rbp+0x80],r12
0x140a30b61: mov    QWORD PTR [rbp+0xc],r12
0x140a30b65: mov    QWORD PTR [rbp+0x14],r12
0x140a30b69: mov    DWORD PTR [rbp+0x1c],r12d
0x140a30b6d: mov    eax,0xffffffff
0x140a30b72: mov    QWORD PTR [rbp+0x68],0xffffffffffffffff
0x140a30b7a: mov    DWORD PTR [rbp+0x88],eax
0x140a30b80: mov    WORD PTR [rbp+0x8c],ax
0x140a30b87: mov    DWORD PTR [rbp+0x90],eax
0x140a30b8d: mov    DWORD PTR [rbp+0x94],0x8ad08ad0
0x140a30b97: mov    WORD PTR [rbp+0x98],r13w
0x140a30b9f: mov    eax,0x20
0x140a30ba4: mov    WORD PTR [rbp+0x0],ax
0x140a30ba8: lea    rax,[rbp+0x0]
0x140a30bac: mov    QWORD PTR [rsp+0x20],rax
0x140a30bb1: xor    r9d,r9d
0x140a30bb4: xor    r8d,r8d
0x140a30bb7: mov    dl,0x1
0x140a30bb9: mov    rcx,r14
0x140a30bbc: call   0x14133d990
0x140a30bc1: nop
0x140a30bc2: lea    rcx,[rbp+0x70]
0x140a30bc6: call   0x140070d80
0x140a30bcb: lea    rcx,[rbp+0x48]
0x140a30bcf: call   0x140070e80
0x140a30bd4: lea    rcx,[rbp+0x28]
0x140a30bd8: call   0x140070e80
0x140a30bdd: jmp    0x140a32408
0x140a30be2: mov    rax,QWORD PTR [r15]
0x140a30be5: mov    rcx,r15
0x140a30be8: call   QWORD PTR [rax+0xd0]
0x140a30bee: cmp    eax,0x16
0x140a30bf1: je     0x140a30caf
0x140a30bf7: xorps  xmm0,xmm0
0x140a30bfa: movups XMMWORD PTR [rbp+0x28],xmm0
0x140a30bfe: mov    QWORD PTR [rbp+0x38],r12
0x140a30c02: mov    QWORD PTR [rbp+0x40],0xf
0x140a30c0a: mov    BYTE PTR [rbp+0x28],r12b
0x140a30c0e: movups XMMWORD PTR [rbp+0x48],xmm0
0x140a30c12: mov    QWORD PTR [rbp+0x58],r12
0x140a30c16: mov    QWORD PTR [rbp+0x60],0xf
0x140a30c1e: mov    BYTE PTR [rbp+0x48],r12b
0x140a30c22: movdqa XMMWORD PTR [rbp+0x70],xmm0
0x140a30c27: mov    QWORD PTR [rbp+0x80],r12
0x140a30c2e: mov    QWORD PTR [rbp+0xc],r12
0x140a30c32: mov    QWORD PTR [rbp+0x14],r12
0x140a30c36: mov    DWORD PTR [rbp+0x1c],r12d
0x140a30c3a: mov    eax,0xffffffff
0x140a30c3f: mov    QWORD PTR [rbp+0x68],0xffffffffffffffff
0x140a30c47: mov    DWORD PTR [rbp+0x88],eax
0x140a30c4d: mov    WORD PTR [rbp+0x8c],ax
0x140a30c54: mov    DWORD PTR [rbp+0x90],eax
0x140a30c5a: mov    DWORD PTR [rbp+0x94],0x8ad08ad0
0x140a30c64: mov    WORD PTR [rbp+0x98],r13w
0x140a30c6c: mov    eax,0x21
0x140a30c71: mov    WORD PTR [rbp+0x0],ax
0x140a30c75: lea    rax,[rbp+0x0]
0x140a30c79: mov    QWORD PTR [rsp+0x20],rax
0x140a30c7e: xor    r9d,r9d
0x140a30c81: xor    r8d,r8d
0x140a30c84: mov    dl,0x1
0x140a30c86: mov    rcx,r14
0x140a30c89: call   0x14133d990
0x140a30c8e: nop
0x140a30c8f: lea    rcx,[rbp+0x70]
0x140a30c93: call   0x140070d80
0x140a30c98: lea    rcx,[rbp+0x48]
0x140a30c9c: call   0x140070e80
0x140a30ca1: lea    rcx,[rbp+0x28]
0x140a30ca5: call   0x140070e80
0x140a30caa: jmp    0x140a32408
0x140a30caf: cmp    WORD PTR [r15+0x148],0x2
0x140a30cb8: je     0x140a30d76
0x140a30cbe: xorps  xmm0,xmm0
0x140a30cc1: movups XMMWORD PTR [rbp+0x28],xmm0
0x140a30cc5: mov    QWORD PTR [rbp+0x38],r12
0x140a30cc9: mov    QWORD PTR [rbp+0x40],0xf
0x140a30cd1: mov    BYTE PTR [rbp+0x28],r12b
0x140a30cd5: movups XMMWORD PTR [rbp+0x48],xmm0
0x140a30cd9: mov    QWORD PTR [rbp+0x58],r12
0x140a30cdd: mov    QWORD PTR [rbp+0x60],0xf
0x140a30ce5: mov    BYTE PTR [rbp+0x48],r12b
0x140a30ce9: movdqa XMMWORD PTR [rbp+0x70],xmm0
0x140a30cee: mov    QWORD PTR [rbp+0x80],r12
0x140a30cf5: mov    QWORD PTR [rbp+0xc],r12
0x140a30cf9: mov    QWORD PTR [rbp+0x14],r12
0x140a30cfd: mov    DWORD PTR [rbp+0x1c],r12d
0x140a30d01: mov    eax,0xffffffff
0x140a30d06: mov    QWORD PTR [rbp+0x68],0xffffffffffffffff
0x140a30d0e: mov    DWORD PTR [rbp+0x88],eax
0x140a30d14: mov    WORD PTR [rbp+0x8c],ax
0x140a30d1b: mov    DWORD PTR [rbp+0x90],eax
0x140a30d21: mov    DWORD PTR [rbp+0x94],0x8ad08ad0
0x140a30d2b: mov    WORD PTR [rbp+0x98],r13w
0x140a30d33: mov    eax,0x21
0x140a30d38: mov    WORD PTR [rbp+0x0],ax
0x140a30d3c: lea    rax,[rbp+0x0]
0x140a30d40: mov    QWORD PTR [rsp+0x20],rax
0x140a30d45: xor    r9d,r9d
0x140a30d48: xor    r8d,r8d
0x140a30d4b: mov    dl,0x1
0x140a30d4d: mov    rcx,r14
0x140a30d50: call   0x14133d990
0x140a30d55: nop
0x140a30d56: lea    rcx,[rbp+0x70]
0x140a30d5a: call   0x140070d80
0x140a30d5f: lea    rcx,[rbp+0x48]
0x140a30d63: call   0x140070e80
0x140a30d68: lea    rcx,[rbp+0x28]
0x140a30d6c: call   0x140070e80
0x140a30d71: jmp    0x140a32408
0x140a30d76: mov    rax,QWORD PTR [r15+0x130]
0x140a30d7d: sub    rax,QWORD PTR [r15+0x128]
0x140a30d84: sar    rax,0x3
0x140a30d88: cmp    rax,0x4
0x140a30d8c: ja     0x140a31247
0x140a30d92: mov    QWORD PTR [rsp+0x20],r12
0x140a30d97: xor    r9d,r9d
0x140a30d9a: xor    r8d,r8d
0x140a30d9d: mov    dl,0x1
0x140a30d9f: mov    rcx,r14
0x140a30da2: call   0x14133d990
0x140a30da7: cmp    BYTE PTR [r15+0x14c],0x1
0x140a30daf: jl     0x140a32408
0x140a30db5: cmp    QWORD PTR [r14+0x4d8],r12
0x140a30dbc: jne    0x140a32408
0x140a30dc2: lea    rax,[r15+0x58]
0x140a30dc6: mov    QWORD PTR [rbp-0x48],rax
0x140a30dca: mov    rax,QWORD PTR [r15+0x60]
0x140a30dce: sub    rax,QWORD PTR [r15+0x58]
0x140a30dd2: test   rax,0xfffffffffffffff8
0x140a30dd8: jne    0x140a32408
0x140a30dde: mov    rax,QWORD PTR [r15]
0x140a30de1: mov    rcx,r15
0x140a30de4: call   QWORD PTR [rax+0x258]
0x140a30dea: test   al,al
0x140a30dec: jne    0x140a32408
0x140a30df2: mov    r12,QWORD PTR [rip+0x19d6c6f]        # 0x142407a68
0x140a30df9: mov    r13,QWORD PTR [rip+0x19d6c70]        # 0x142407a70
0x140a30e00: cmp    r12,r13
0x140a30e03: je     0x140a311a7
0x140a30e09: nop    DWORD PTR [rax+0x0]
0x140a30e10: mov    rsi,QWORD PTR [r12]
0x140a30e14: mov    QWORD PTR [rbp-0x50],rsi
0x140a30e18: mov    rcx,rsi
0x140a30e1b: call   0x140cab070
0x140a30e20: test   al,al
0x140a30e22: je     0x140a31196
0x140a30e28: mov    eax,DWORD PTR [rsi+0x10]
0x140a30e2b: test   al,0x20
0x140a30e2d: jne    0x140a31196
0x140a30e33: test   BYTE PTR [rsi+0x14],0x8
0x140a30e37: jne    0x140a31196
0x140a30e3d: test   eax,0xe92c12
0x140a30e42: jne    0x140a31196
0x140a30e48: test   al,al
0x140a30e4a: js     0x140a31196
0x140a30e50: mov    rax,QWORD PTR [rsi]
0x140a30e53: mov    r8,QWORD PTR [rax+0x490]
0x140a30e5a: xorps  xmm0,xmm0
0x140a30e5d: movups XMMWORD PTR [rbp+0xa0],xmm0
0x140a30e64: mov    QWORD PTR [rbp+0xb0],0x4
0x140a30e6f: mov    QWORD PTR [rbp+0xb8],0xf
0x140a30e7a: mov    eax,DWORD PTR [rip+0xbec968]        # 0x14161d7e8
0x140a30e80: mov    DWORD PTR [rbp+0xa0],eax
0x140a30e86: mov    BYTE PTR [rbp+0xa4],0x0
0x140a30e8d: lea    rdx,[rbp+0xa0]
0x140a30e94: mov    rcx,rsi
0x140a30e97: call   r8
0x140a30e9a: movzx  ebx,al
0x140a30e9d: lea    rcx,[rbp+0xa0]
0x140a30ea4: call   0x140070e80
0x140a30ea9: test   bl,bl
0x140a30eab: je     0x140a31196
0x140a30eb1: mov    BYTE PTR [rsp+0x6c],0x0
0x140a30eb6: mov    BYTE PTR [rsp+0x64],0x0
0x140a30ebb: mov    r14d,DWORD PTR [rsi+0x1c]
0x140a30ebf: mov    r8d,r14d
0x140a30ec2: lea    rdx,[rip+0x198a71f]        # 0x1423bb5e8
0x140a30ec9: lea    rcx,[rbp-0x38]
0x140a30ecd: call   0x1400bc210
0x140a30ed2: mov    DWORD PTR [rbp-0x68],0xffffffff
0x140a30ed9: xor    r11d,r11d
0x140a30edc: mov    DWORD PTR [rbp-0x64],r11d
0x140a30ee0: mov    rax,QWORD PTR [rbp-0x68]
0x140a30ee4: cmp    BYTE PTR [rbp-0x30],r11b
0x140a30ee8: cmovne rax,QWORD PTR [rbp-0x38]
0x140a30eed: cmp    eax,0xffffffff
0x140a30ef0: je     0x140a3107e
0x140a30ef6: mov    rbx,QWORD PTR [rip+0x198ae13]        # 0x1423bbd10
0x140a30efd: mov    rdi,QWORD PTR [rip+0x198ae14]        # 0x1423bbd18
0x140a30f04: cmp    rbx,rdi
0x140a30f07: je     0x140a30f57
0x140a30f09: mov    DWORD PTR [rbp-0x60],0xffffffff
0x140a30f10: mov    DWORD PTR [rbp-0x5c],r11d
0x140a30f14: mov    rsi,QWORD PTR [rbp-0x60]
0x140a30f18: nop    DWORD PTR [rax+rax*1+0x0]
0x140a30f20: mov    rdx,QWORD PTR [rbx]
0x140a30f23: add    rdx,0x18
0x140a30f27: mov    r8d,r14d
0x140a30f2a: lea    rcx,[rbp-0x28]
0x140a30f2e: call   0x1400bc210
0x140a30f33: mov    rax,rsi
0x140a30f36: cmp    BYTE PTR [rbp-0x20],0x0
0x140a30f3a: cmovne rax,QWORD PTR [rbp-0x28]
0x140a30f3f: cmp    eax,0xffffffff
0x140a30f42: jne    0x140a30f4f
0x140a30f44: add    rbx,0x8
0x140a30f48: cmp    rbx,rdi
0x140a30f4b: jne    0x140a30f20
0x140a30f4d: jmp    0x140a30f54
0x140a30f4f: mov    BYTE PTR [rsp+0x6c],0x1
0x140a30f54: xor    r11d,r11d
0x140a30f57: mov    r15,QWORD PTR [rip+0x198b70a]        # 0x1423bc668
0x140a30f5e: mov    r14,QWORD PTR [r15+0x11c8]
0x140a30f65: mov    r15,QWORD PTR [r15+0x11d0]
0x140a30f6c: cmp    r14,r15
0x140a30f6f: je     0x140a31062
0x140a30f75: mov    rax,QWORD PTR [rip+0x1ad4ccc]        # 0x142505c48
0x140a30f7c: mov    r8,QWORD PTR [rip+0x1ad4cbd]        # 0x142505c40
0x140a30f83: sub    rax,r8
0x140a30f86: sar    rax,0x3
0x140a30f8a: mov    QWORD PTR [rbp-0x70],rax
0x140a30f8e: xchg   ax,ax
0x140a30f90: mov    r9d,DWORD PTR [r14]
0x140a30f93: test   rax,rax
0x140a30f96: je     0x140a3104d
0x140a30f9c: cmp    r9d,0xffffffff
0x140a30fa0: je     0x140a3104d
0x140a30fa6: sub    eax,0x1
0x140a30fa9: mov    edx,r11d
0x140a30fac: js     0x140a30fdc
0x140a30fae: xchg   ax,ax
0x140a30fb0: mov    r10d,eax
0x140a30fb3: lea    ecx,[rdx+rax*1]
0x140a30fb6: sar    ecx,1
0x140a30fb8: movsxd rax,ecx
0x140a30fbb: mov    rdi,QWORD PTR [r8+rax*8]
0x140a30fbf: cmp    DWORD PTR [rdi],r9d
0x140a30fc2: je     0x140a30fdf
0x140a30fc4: lea    eax,[rcx+0x1]
0x140a30fc7: cmovle edx,eax
0x140a30fca: lea    eax,[rcx-0x1]
0x140a30fcd: cmovle eax,r10d
0x140a30fd1: cmp    edx,eax
0x140a30fd3: mov    r8,QWORD PTR [rip+0x1ad4c66]        # 0x142505c40
0x140a30fda: jle    0x140a30fb0
0x140a30fdc: mov    rdi,r11
0x140a30fdf: test   rdi,rdi
0x140a30fe2: je     0x140a31042
0x140a30fe4: mov    rbx,QWORD PTR [rdi+0x140]
0x140a30feb: mov    rdi,QWORD PTR [rdi+0x148]
0x140a30ff2: cmp    rbx,rdi
0x140a30ff5: je     0x140a31042
0x140a30ff7: mov    DWORD PTR [rbp-0x40],0xffffffff
0x140a30ffe: mov    DWORD PTR [rbp-0x3c],r11d
0x140a31002: mov    rsi,QWORD PTR [rbp-0x40]
0x140a31006: data16 nop WORD PTR [rax+rax*1+0x0]
0x140a31010: mov    rdx,QWORD PTR [rbx]
0x140a31013: add    rdx,0x18
0x140a31017: mov    rax,QWORD PTR [rbp-0x50]
0x140a3101b: mov    r8d,DWORD PTR [rax+0x1c]
0x140a3101f: lea    rcx,[rbp-0x18]
0x140a31023: call   0x1400bc210
0x140a31028: mov    rax,rsi
0x140a3102b: cmp    BYTE PTR [rbp-0x10],0x0
0x140a3102f: cmovne rax,QWORD PTR [rbp-0x18]
0x140a31034: cmp    eax,0xffffffff
0x140a31037: jne    0x140a3105e
0x140a31039: add    rbx,0x8
0x140a3103d: cmp    rbx,rdi
0x140a31040: jne    0x140a31010
0x140a31042: mov    r8,QWORD PTR [rip+0x1ad4bf7]        # 0x142505c40
0x140a31049: mov    rax,QWORD PTR [rbp-0x70]
0x140a3104d: add    r14,0x4
0x140a31051: cmp    r14,r15
0x140a31054: je     0x140a31062
0x140a31056: xor    r11d,r11d
0x140a31059: jmp    0x140a30f90
0x140a3105e: mov    al,0x1
0x140a31060: jmp    0x140a31067
0x140a31062: movzx  eax,BYTE PTR [rsp+0x64]
0x140a31067: cmp    BYTE PTR [rsp+0x6c],0x0
0x140a3106c: jne    0x140a31196
0x140a31072: test   al,al
0x140a31074: jne    0x140a31196
0x140a3107a: mov    rsi,QWORD PTR [rbp-0x50]
0x140a3107e: mov    r14d,0xffff8ad0
0x140a31084: mov    WORD PTR [rsp+0x60],r14w
0x140a3108a: mov    eax,DWORD PTR [rsi+0x10]
0x140a3108d: test   al,0x10
0x140a3108f: jne    0x140a31196
0x140a31095: test   al,0x8
0x140a31097: je     0x140a3114f
0x140a3109d: mov    rbx,QWORD PTR [rsi+0x38]
0x140a310a1: mov    rdi,QWORD PTR [rsi+0x40]
0x140a310a5: cmp    rbx,rdi
0x140a310a8: jae    0x140a31114
0x140a310aa: mov    rcx,QWORD PTR [rbx]
0x140a310ad: mov    rax,QWORD PTR [rcx]
0x140a310b0: call   QWORD PTR [rax+0x10]
0x140a310b3: cmp    eax,0xb
0x140a310b6: je     0x140a310e7
0x140a310b8: cmp    eax,0x12
0x140a310bb: jne    0x140a310f5
0x140a310bd: mov    rcx,QWORD PTR [rbx]
0x140a310c0: mov    rax,QWORD PTR [rcx]
0x140a310c3: call   QWORD PTR [rax+0x20]
0x140a310c6: test   rax,rax
0x140a310c9: je     0x140a310f5
0x140a310cb: lea    r9,[rsp+0x74]
0x140a310d0: lea    r8,[rsp+0x70]
0x140a310d5: lea    rdx,[rsp+0x60]
0x140a310da: mov    rcx,rax
0x140a310dd: call   0x14137fd40
0x140a310e2: jmp    0x140a3116a
0x140a310e7: mov    rcx,QWORD PTR [rbx]
0x140a310ea: mov    rax,QWORD PTR [rcx]
0x140a310ed: call   QWORD PTR [rax+0x18]
0x140a310f0: test   rax,rax
0x140a310f3: jne    0x140a310fb
0x140a310f5: add    rbx,0x8
0x140a310f9: jmp    0x140a310a5
0x140a310fb: lea    r9,[rsp+0x74]
0x140a31100: lea    r8,[rsp+0x70]
0x140a31105: lea    rdx,[rsp+0x60]
0x140a3110a: mov    rcx,rax
0x140a3110d: call   0x140ca3790
0x140a31112: jmp    0x140a3116a
0x140a31114: mov    rax,QWORD PTR [rsi+0x20]
0x140a31118: mov    rcx,QWORD PTR [rsi+0x28]
0x140a3111c: nop    DWORD PTR [rax+0x0]
0x140a31120: cmp    rax,rcx
0x140a31123: jae    0x140a3116a
0x140a31125: mov    rdx,QWORD PTR [rax]
0x140a31128: cmp    DWORD PTR [rdx],0x7
0x140a3112b: je     0x140a31133
0x140a3112d: add    rax,0x8
0x140a31131: jmp    0x140a31120
0x140a31133: mov    rcx,QWORD PTR [rdx+0x8]
0x140a31137: movzx  eax,WORD PTR [rcx+0x4]
0x140a3113b: mov    WORD PTR [rsp+0x60],ax
0x140a31140: movzx  eax,WORD PTR [rcx+0x6]
0x140a31144: mov    WORD PTR [rsp+0x70],ax
0x140a31149: movzx  eax,WORD PTR [rcx+0x8]
0x140a3114d: jmp    0x140a31165
0x140a3114f: movzx  eax,WORD PTR [rsi+0x8]
0x140a31153: mov    WORD PTR [rsp+0x60],ax
0x140a31158: movzx  eax,WORD PTR [rsi+0xa]
0x140a3115c: mov    WORD PTR [rsp+0x70],ax
0x140a31161: movzx  eax,WORD PTR [rsi+0xc]
0x140a31165: mov    WORD PTR [rsp+0x74],ax
0x140a3116a: movzx  edx,WORD PTR [rsp+0x60]
0x140a3116f: cmp    dx,r14w
0x140a31173: je     0x140a31196
0x140a31175: mov    BYTE PTR [rsp+0x20],0x1
0x140a3117a: movzx  r9d,WORD PTR [rsp+0x74]
0x140a31180: movzx  r8d,WORD PTR [rsp+0x70]
0x140a31186: mov    r14,QWORD PTR [rbp-0x78]
0x140a3118a: mov    rcx,r14
0x140a3118d: call   0x1413bd210
0x140a31192: test   al,al
0x140a31194: jne    0x140a311b6
0x140a31196: add    r12,0x8
0x140a3119a: cmp    r12,r13
0x140a3119d: jne    0x140a30e10
0x140a311a3: mov    r15,QWORD PTR [rbp-0x58]
0x140a311a7: mov    WORD PTR [r15+0x14e],0x64
0x140a311b1: jmp    0x140a32408
0x140a311b6: mov    ecx,0x148
0x140a311bb: call   0x1415530e0
0x140a311c0: mov    QWORD PTR [rbp-0x50],rax
0x140a311c4: xor    edx,edx
0x140a311c6: mov    rcx,rax
0x140a311c9: call   0x140d19db0
0x140a311ce: mov    rbx,rax
0x140a311d1: mov    WORD PTR [rax+0x14],0xf6
0x140a311d7: mov    r8,QWORD PTR [rbp-0x58]
0x140a311db: movzx  ecx,WORD PTR [r8+0x10]
0x140a311e0: mov    WORD PTR [rax+0x1c],cx
0x140a311e4: movzx  ecx,WORD PTR [r8+0x1c]
0x140a311e9: mov    WORD PTR [rax+0x1e],cx
0x140a311ed: movzx  ecx,WORD PTR [r8+0x20]
0x140a311f2: mov    WORD PTR [rax+0x20],cx
0x140a311f6: mov    QWORD PTR [rbp-0x50],rax
0x140a311fa: mov    r8d,DWORD PTR [r8+0x50]
0x140a311fe: mov    edx,0x24
0x140a31203: mov    rcx,rax
0x140a31206: call   0x140d21440
0x140a3120b: mov    rax,QWORD PTR [rbp-0x48]
0x140a3120f: mov    rdx,QWORD PTR [rax+0x8]
0x140a31213: cmp    rdx,QWORD PTR [rax+0x10]
0x140a31217: je     0x140a31223
0x140a31219: mov    QWORD PTR [rdx],rbx
0x140a3121c: add    QWORD PTR [rax+0x8],0x8
0x140a31221: jmp    0x140a3122f
0x140a31223: lea    r8,[rbp-0x50]
0x140a31227: mov    rcx,rax
0x140a3122a: call   0x1400bc360
0x140a3122f: mov    rcx,rbx
0x140a31232: call   0x140d21860
0x140a31237: mov    rdx,rbx
0x140a3123a: mov    rcx,r14
0x140a3123d: call   0x141340d60
0x140a31242: jmp    0x140a32408
0x140a31247: cmp    BYTE PTR [r15+0x14c],0x1
0x140a3124f: jle    0x140a323f3
0x140a31255: movzx  eax,BYTE PTR [r15+0x14b]
0x140a3125d: mov    BYTE PTR [rsp+0x64],al
0x140a31261: mov    r8d,r13d
0x140a31264: movzx  r12d,r8w
0x140a31268: mov    WORD PTR [rsp+0x70],r8w
0x140a3126e: xor    ecx,ecx
0x140a31270: mov    edx,ecx
0x140a31272: mov    QWORD PTR [rbp-0x70],rcx
0x140a31276: mov    r14d,0xffffffff
0x140a3127c: lea    rbx,[rip+0xffffffffff5ced7d]        # 0x140000000
0x140a31283: cmp    DWORD PTR [rsi+0x660],ecx
0x140a31289: jle    0x140a3158a
0x140a3128f: mov    WORD PTR [rsp+0x60],r14w
0x140a31295: lea    rdi,[rsi+0x20]
0x140a31299: mov    QWORD PTR [rbp-0x50],rdi
0x140a3129d: mov    DWORD PTR [rsp+0x74],ecx
0x140a312a1: movzx  r14d,WORD PTR [rsp+0x68]
0x140a312a7: movzx  esi,WORD PTR [rsp+0x68]
0x140a312ac: mov    rcx,QWORD PTR [rbp-0x68]
0x140a312b0: mov    rdi,QWORD PTR [rdi]
0x140a312b3: cmp    DWORD PTR [rdi+0x3d8],0xffffffff
0x140a312ba: jne    0x140a31564
0x140a312c0: test   DWORD PTR [rdi+0x110],0x2010000
0x140a312ca: jne    0x140a31564
0x140a312d0: cmp    WORD PTR [rdi+0x800],0x0
0x140a312d8: jg     0x140a31564
0x140a312de: mov    rcx,rdi
0x140a312e1: call   0x1413a7840
0x140a312e6: movsx  ecx,ax
0x140a312e9: dec    ecx
0x140a312eb: cmp    ecx,0xf
0x140a312ee: ja     0x140a31308
0x140a312f0: movsxd rax,ecx
0x140a312f3: mov    ecx,DWORD PTR [rbx+rax*4+0xa32434]
0x140a312fa: add    rcx,rbx
0x140a312fd: jmp    rcx
0x140a312ff: test   BYTE PTR [rdi+0x11c],0x80
0x140a31306: je     0x140a3131c
0x140a31308: mov    rdx,rdi
0x140a3130b: mov    rcx,QWORD PTR [rbp-0x78]
0x140a3130f: call   0x14140bba0
0x140a31314: test   al,al
0x140a31316: je     0x140a31556
0x140a3131c: movsx  r9d,WORD PTR [rdi+0xa8]
0x140a31324: mov    WORD PTR [rsp+0x68],r9w
0x140a3132a: mov    eax,r9d
0x140a3132d: mov    r11d,DWORD PTR [r15+0x10]
0x140a31331: sub    eax,r11d
0x140a31334: mov    r8d,eax
0x140a31337: neg    r8d
0x140a3133a: cmovs  r8d,eax
0x140a3133e: movsx  ebx,WORD PTR [rdi+0xaa]
0x140a31345: mov    eax,ebx
0x140a31347: mov    r10d,DWORD PTR [r15+0x1c]
0x140a3134b: sub    eax,r10d
0x140a3134e: mov    ecx,eax
0x140a31350: neg    ecx
0x140a31352: cmovs  ecx,eax
0x140a31355: mov    edx,DWORD PTR [r15+0x20]
0x140a31359: mov    DWORD PTR [rbp-0x60],edx
0x140a3135c: movsx  eax,WORD PTR [rdi+0xac]
0x140a31363: sub    eax,edx
0x140a31365: mov    edx,eax
0x140a31367: neg    edx
0x140a31369: cmovs  edx,eax
0x140a3136c: movsx  eax,cx
0x140a3136f: imul   eax,eax
0x140a31372: mov    DWORD PTR [rbp-0x58],eax
0x140a31375: movsx  ecx,r8w
0x140a31379: imul   ecx,ecx
0x140a3137c: movsx  r8d,dx
0x140a31380: imul   r8d,r8d
0x140a31384: add    eax,ecx
0x140a31386: cmp    eax,r8d
0x140a31389: jl     0x140a3154f
0x140a3138f: cmp    r9d,r11d
0x140a31392: jne    0x140a3139d
0x140a31394: cmp    ebx,r10d
0x140a31397: je     0x140a3154f
0x140a3139d: mov    eax,DWORD PTR [rbp-0x58]
0x140a313a0: add    eax,r8d
0x140a313a3: add    eax,ecx
0x140a313a5: movd   xmm1,eax
0x140a313a9: cvtdq2ps xmm1,xmm1
0x140a313ac: xorps  xmm0,xmm0
0x140a313af: ucomiss xmm0,xmm1
0x140a313b2: ja     0x140a313bd
0x140a313b4: xorps  xmm0,xmm0
0x140a313b7: sqrtss xmm0,xmm1
0x140a313bb: jmp    0x140a313d3
0x140a313bd: movaps xmm0,xmm1
0x140a313c0: call   0x1415548d6
0x140a313c5: movzx  r9d,WORD PTR [rsp+0x68]
0x140a313cb: mov    r10d,DWORD PTR [r15+0x1c]
0x140a313cf: mov    r11d,DWORD PTR [r15+0x10]
0x140a313d3: cvttss2si eax,xmm0
0x140a313d7: mov    DWORD PTR [rbp-0x58],eax
0x140a313da: movzx  ecx,WORD PTR [rsp+0x60]
0x140a313df: cmp    cx,0xffff
0x140a313e3: je     0x140a313ee
0x140a313e5: cmp    ax,cx
0x140a313e8: jg     0x140a3154f
0x140a313ee: cmp    ax,0x19
0x140a313f2: jg     0x140a3154f
0x140a313f8: sub    bx,r10w
0x140a313fc: sub    r9w,r11w
0x140a31400: movsx  eax,r9w
0x140a31404: mov    edx,eax
0x140a31406: neg    edx
0x140a31408: cmovs  edx,eax
0x140a3140b: movsx  eax,bx
0x140a3140e: mov    ecx,eax
0x140a31410: neg    ecx
0x140a31412: cmovs  ecx,eax
0x140a31415: movsx  r8d,dx
0x140a31419: movsx  edx,cx
0x140a3141c: test   bx,bx
0x140a3141f: jns    0x140a3142c
0x140a31421: lea    eax,[r8+r8*1]
0x140a31425: cmp    eax,edx
0x140a31427: jle    0x140a31478
0x140a31429: test   bx,bx
0x140a3142c: jle    0x140a3143a
0x140a3142e: lea    eax,[r8+r8*1]
0x140a31432: cmp    eax,edx
0x140a31434: jg     0x140a3143a
0x140a31436: mov    bl,0x4
0x140a31438: jmp    0x140a3147a
0x140a3143a: test   r9w,r9w
0x140a3143e: jns    0x140a3145b
0x140a31440: lea    eax,[rdx+rdx*1]
0x140a31443: cmp    eax,r8d
0x140a31446: jg     0x140a3144c
0x140a31448: mov    bl,0x6
0x140a3144a: jmp    0x140a3147a
0x140a3144c: test   bx,bx
0x140a3144f: jle    0x140a31455
0x140a31451: mov    bl,0x5
0x140a31453: jmp    0x140a3147a
0x140a31455: jns    0x140a31478
0x140a31457: mov    bl,0x7
0x140a31459: jmp    0x140a3147a
0x140a3145b: jle    0x140a31478
0x140a3145d: lea    eax,[rdx+rdx*1]
0x140a31460: cmp    eax,r8d
0x140a31463: jg     0x140a31469
0x140a31465: mov    bl,0x2
0x140a31467: jmp    0x140a3147a
0x140a31469: test   bx,bx
0x140a3146c: jns    0x140a31472
0x140a3146e: mov    bl,0x1
0x140a31470: jmp    0x140a3147a
0x140a31472: jle    0x140a31478
0x140a31474: mov    bl,0x3
0x140a31476: jmp    0x140a3147a
0x140a31478: xor    bl,bl
0x140a3147a: movzx  eax,bl
0x140a3147d: cmp    eax,0x7
0x140a31480: ja     0x140a314db
0x140a31482: lea    rdx,[rip+0xffffffffff5ceb77]        # 0x140000000
0x140a31489: mov    ecx,DWORD PTR [rdx+rax*4+0xa32474]
0x140a31490: add    rcx,rdx
0x140a31493: jmp    rcx
0x140a31495: movzx  esi,r11w
0x140a31499: jmp    0x140a314d7
0x140a3149b: lea    esi,[r11-0x1]
0x140a3149f: jmp    0x140a314d7
0x140a314a1: lea    esi,[r11-0x1]
0x140a314a5: movzx  r14d,r10w
0x140a314a9: jmp    0x140a314db
0x140a314ab: lea    esi,[r11-0x1]
0x140a314af: lea    r14d,[r10-0x1]
0x140a314b3: jmp    0x140a314db
0x140a314b5: movzx  esi,r11w
0x140a314b9: lea    r14d,[r10-0x1]
0x140a314bd: jmp    0x140a314db
0x140a314bf: lea    esi,[r11+0x1]
0x140a314c3: lea    r14d,[r10-0x1]
0x140a314c7: jmp    0x140a314db
0x140a314c9: lea    esi,[r11+0x1]
0x140a314cd: movzx  r14d,r10w
0x140a314d1: jmp    0x140a314db
0x140a314d3: lea    esi,[r11+0x1]
0x140a314d7: lea    r14d,[r10+0x1]
0x140a314db: mov    r8d,0xffff8ad0
0x140a314e1: cmp    si,r8w
0x140a314e5: je     0x140a31546
0x140a314e7: mov    BYTE PTR [rsp+0x20],0x0
0x140a314ec: movzx  r9d,WORD PTR [rbp-0x60]
0x140a314f1: movzx  r8d,r14w
0x140a314f5: movzx  edx,si
0x140a314f8: mov    rcx,QWORD PTR [rbp-0x78]
0x140a314fc: call   0x14137f170
0x140a31501: mov    rcx,QWORD PTR [rbp-0x68]
0x140a31505: mov    r8d,0xffff8ad0
0x140a3150b: test   al,al
0x140a3150d: je     0x140a3153d
0x140a3150f: mov    rdx,rdi
0x140a31512: mov    QWORD PTR [rbp-0x70],rdx
0x140a31516: mov    BYTE PTR [rsp+0x64],bl
0x140a3151a: movzx  r13d,si
0x140a3151e: movzx  r12d,r14w
0x140a31522: movzx  eax,WORD PTR [rbp-0x60]
0x140a31526: mov    WORD PTR [rsp+0x70],ax
0x140a3152b: movzx  eax,WORD PTR [rbp-0x58]
0x140a3152f: mov    WORD PTR [rsp+0x60],ax
0x140a31534: lea    rbx,[rip+0xffffffffff5ceac5]        # 0x140000000
0x140a3153b: jmp    0x140a31564
0x140a3153d: lea    rbx,[rip+0xffffffffff5ceabc]        # 0x140000000
0x140a31544: jmp    0x140a31560
0x140a31546: lea    rbx,[rip+0xffffffffff5ceab3]        # 0x140000000
0x140a3154d: jmp    0x140a3155c
0x140a3154f: lea    rbx,[rip+0xffffffffff5ceaaa]        # 0x140000000
0x140a31556: mov    r8d,0xffff8ad0
0x140a3155c: mov    rcx,QWORD PTR [rbp-0x68]
0x140a31560: mov    rdx,QWORD PTR [rbp-0x70]
0x140a31564: inc    DWORD PTR [rsp+0x74]
0x140a31568: mov    rdi,QWORD PTR [rbp-0x50]
0x140a3156c: add    rdi,0x8
0x140a31570: mov    QWORD PTR [rbp-0x50],rdi
0x140a31574: mov    eax,DWORD PTR [rsp+0x74]
0x140a31578: cmp    eax,DWORD PTR [rcx+0x660]
0x140a3157e: jl     0x140a312b0
0x140a31584: mov    r14d,0xffffffff
0x140a3158a: mov    WORD PTR [rsp+0x78],r8w
0x140a31590: mov    WORD PTR [rsp+0x7c],r8w
0x140a31596: mov    WORD PTR [rbp-0x80],r8w
0x140a3159b: test   rdx,rdx
0x140a3159e: je     0x140a31628
0x140a315a4: test   DWORD PTR [rdx+0x110],0x2000000
0x140a315ae: je     0x140a31605
0x140a315b0: mov    rbx,QWORD PTR [rdx+0x1d8]
0x140a315b7: mov    rdi,QWORD PTR [rdx+0x1e0]
0x140a315be: xchg   ax,ax
0x140a315c0: cmp    rbx,rdi
0x140a315c3: jae    0x140a315fd
0x140a315c5: mov    rcx,QWORD PTR [rbx]
0x140a315c8: mov    rax,QWORD PTR [rcx]
0x140a315cb: call   QWORD PTR [rax+0x10]
0x140a315ce: cmp    eax,0xb
0x140a315d1: jne    0x140a315e1
0x140a315d3: mov    rcx,QWORD PTR [rbx]
0x140a315d6: mov    rax,QWORD PTR [rcx]
0x140a315d9: call   QWORD PTR [rax+0x18]
0x140a315dc: test   rax,rax
0x140a315df: jne    0x140a315e7
0x140a315e1: add    rbx,0x8
0x140a315e5: jmp    0x140a315c0
0x140a315e7: lea    r9,[rbp-0x80]
0x140a315eb: lea    r8,[rsp+0x7c]
0x140a315f0: lea    rdx,[rsp+0x78]
0x140a315f5: mov    rcx,rax
0x140a315f8: call   0x140ca3790
0x140a315fd: mov    r8d,0xffff8ad0
0x140a31603: jmp    0x140a31628
0x140a31605: movzx  eax,WORD PTR [rdx+0xa8]
0x140a3160c: mov    WORD PTR [rsp+0x78],ax
0x140a31611: movzx  eax,WORD PTR [rdx+0xaa]
0x140a31618: mov    WORD PTR [rsp+0x7c],ax
0x140a3161d: movzx  eax,WORD PTR [rdx+0xac]
0x140a31624: mov    WORD PTR [rbp-0x80],ax
0x140a31628: mov    BYTE PTR [rsp+0x6c],0x0
0x140a3162d: cmp    WORD PTR [rsp+0x78],r8w
0x140a31633: jne    0x140a31c07
0x140a31639: cmp    BYTE PTR [r15+0x14c],0x4
0x140a31641: jne    0x140a31c07
0x140a31647: mov    WORD PTR [rsp+0x68],r14w
0x140a3164d: mov    rbx,QWORD PTR [rip+0x19dfa8c]        # 0x1424110e0
0x140a31654: mov    rdi,QWORD PTR [rip+0x19dfa8d]        # 0x1424110e8
0x140a3165b: cmp    rbx,rdi
0x140a3165e: je     0x140a319c0
0x140a31664: nop    DWORD PTR [rax+0x0]
0x140a31668: nop    DWORD PTR [rax+rax*1+0x0]
0x140a31670: mov    r14,QWORD PTR [rbx]
0x140a31673: mov    rax,QWORD PTR [r14]
0x140a31676: mov    rcx,r14
0x140a31679: call   QWORD PTR [rax+0x120]
0x140a3167f: movsx  ecx,WORD PTR [r14+0x120]
0x140a31687: cmp    ecx,eax
0x140a31689: jl     0x140a319a1
0x140a3168f: mov    rax,QWORD PTR [r14]
0x140a31692: mov    rcx,r14
0x140a31695: call   QWORD PTR [rax+0x258]
0x140a3169b: test   al,al
0x140a3169d: jne    0x140a319a1
0x140a316a3: mov    r9d,DWORD PTR [r14+0x10]
0x140a316a7: mov    DWORD PTR [rbp-0x58],r9d
0x140a316ab: mov    r11d,DWORD PTR [r15+0x10]
0x140a316af: mov    eax,r9d
0x140a316b2: sub    eax,r11d
0x140a316b5: mov    r8d,eax
0x140a316b8: neg    r8d
0x140a316bb: cmovs  r8d,eax
0x140a316bf: mov    esi,DWORD PTR [r14+0x1c]
0x140a316c3: mov    eax,esi
0x140a316c5: sub    eax,DWORD PTR [r15+0x1c]
0x140a316c9: mov    ecx,eax
0x140a316cb: neg    ecx
0x140a316cd: cmovs  ecx,eax
0x140a316d0: mov    edx,DWORD PTR [r15+0x20]
0x140a316d4: mov    DWORD PTR [rbp-0x60],edx
0x140a316d7: mov    eax,DWORD PTR [r14+0x20]
0x140a316db: sub    eax,edx
0x140a316dd: mov    edx,eax
0x140a316df: neg    edx
0x140a316e1: cmovs  edx,eax
0x140a316e4: movsx  r10d,cx
0x140a316e8: imul   r10d,r10d
0x140a316ec: movsx  ecx,r8w
0x140a316f0: imul   ecx,ecx
0x140a316f3: movsx  r8d,dx
0x140a316f7: imul   r8d,r8d
0x140a316fb: lea    eax,[rcx+r10*1]
0x140a316ff: cmp    eax,r8d
0x140a31702: jl     0x140a319a1
0x140a31708: lea    eax,[r8+r10*1]
0x140a3170c: add    eax,ecx
0x140a3170e: movd   xmm1,eax
0x140a31712: cvtdq2ps xmm1,xmm1
0x140a31715: xorps  xmm0,xmm0
0x140a31718: ucomiss xmm0,xmm1
0x140a3171b: ja     0x140a31726
0x140a3171d: xorps  xmm0,xmm0
0x140a31720: sqrtss xmm0,xmm1
0x140a31724: jmp    0x140a31736
0x140a31726: movaps xmm0,xmm1
0x140a31729: call   0x1415548d6
0x140a3172e: mov    r9d,DWORD PTR [rbp-0x58]
0x140a31732: mov    r11d,DWORD PTR [r15+0x10]
0x140a31736: cvttss2si eax,xmm0
0x140a3173a: mov    DWORD PTR [rbp-0x58],eax
0x140a3173d: movzx  ecx,WORD PTR [rsp+0x68]
0x140a31742: cmp    cx,0xffff
0x140a31746: je     0x140a31751
0x140a31748: cmp    ax,cx
0x140a3174b: jg     0x140a319a1
0x140a31751: cmp    ax,0x19
0x140a31755: jg     0x140a319a1
0x140a3175b: mov    r10d,DWORD PTR [r15+0x1c]
0x140a3175f: sub    si,r10w
0x140a31763: sub    r9w,r11w
0x140a31767: movsx  eax,r9w
0x140a3176b: mov    edx,eax
0x140a3176d: neg    edx
0x140a3176f: cmovs  edx,eax
0x140a31772: movsx  eax,si
0x140a31775: mov    ecx,eax
0x140a31777: neg    ecx
0x140a31779: cmovs  ecx,eax
0x140a3177c: movsx  r8d,dx
0x140a31780: movsx  edx,cx
0x140a31783: test   si,si
0x140a31786: jns    0x140a31793
0x140a31788: lea    eax,[r8+r8*1]
0x140a3178c: cmp    eax,edx
0x140a3178e: jle    0x140a317e6
0x140a31790: test   si,si
0x140a31793: jle    0x140a317a2
0x140a31795: lea    eax,[r8+r8*1]
0x140a31799: cmp    eax,edx
0x140a3179b: jg     0x140a317a2
0x140a3179d: mov    sil,0x4
0x140a317a0: jmp    0x140a317e9
0x140a317a2: test   r9w,r9w
0x140a317a6: jns    0x140a317c6
0x140a317a8: lea    eax,[rdx+rdx*1]
0x140a317ab: cmp    eax,r8d
0x140a317ae: jg     0x140a317b5
0x140a317b0: mov    sil,0x6
0x140a317b3: jmp    0x140a317e9
0x140a317b5: test   si,si
0x140a317b8: jle    0x140a317bf
0x140a317ba: mov    sil,0x5
0x140a317bd: jmp    0x140a317e9
0x140a317bf: jns    0x140a317e6
0x140a317c1: mov    sil,0x7
0x140a317c4: jmp    0x140a317e9
0x140a317c6: jle    0x140a317e6
0x140a317c8: lea    eax,[rdx+rdx*1]
0x140a317cb: cmp    eax,r8d
0x140a317ce: jg     0x140a317d5
0x140a317d0: mov    sil,0x2
0x140a317d3: jmp    0x140a317e9
0x140a317d5: test   si,si
0x140a317d8: jns    0x140a317df
0x140a317da: mov    sil,0x1
0x140a317dd: jmp    0x140a317e9
0x140a317df: jle    0x140a317e6
0x140a317e1: mov    sil,0x3
0x140a317e4: jmp    0x140a317e9
0x140a317e6: xor    sil,sil
0x140a317e9: cmp    BYTE PTR [r15+0x14a],sil
0x140a317f0: jne    0x140a319a1
0x140a317f6: movzx  eax,sil
0x140a317fa: cmp    eax,0x7
0x140a317fd: ja     0x140a318bc
0x140a31803: lea    rdx,[rip+0xffffffffff5ce7f6]        # 0x140000000
0x140a3180a: mov    ecx,DWORD PTR [rdx+rax*4+0xa32494]
0x140a31811: add    rcx,rdx
0x140a31814: jmp    rcx
0x140a31816: movzx  eax,r11w
0x140a3181a: mov    WORD PTR [rsp+0x74],ax
0x140a3181f: lea    ecx,[r10+0x1]
0x140a31823: mov    WORD PTR [rsp+0x60],cx
0x140a31828: jmp    0x140a318c6
0x140a3182d: lea    eax,[r11-0x1]
0x140a31831: mov    WORD PTR [rsp+0x74],ax
0x140a31836: lea    ecx,[r10+0x1]
0x140a3183a: mov    WORD PTR [rsp+0x60],cx
0x140a3183f: jmp    0x140a318c6
0x140a31844: lea    eax,[r11-0x1]
0x140a31848: mov    WORD PTR [rsp+0x74],ax
0x140a3184d: movzx  ecx,r10w
0x140a31851: mov    WORD PTR [rsp+0x60],cx
0x140a31856: jmp    0x140a318c6
0x140a31858: lea    eax,[r11-0x1]
0x140a3185c: mov    WORD PTR [rsp+0x74],ax
0x140a31861: lea    ecx,[r10-0x1]
0x140a31865: mov    WORD PTR [rsp+0x60],cx
0x140a3186a: jmp    0x140a318c6
0x140a3186c: movzx  eax,r11w
0x140a31870: mov    WORD PTR [rsp+0x74],ax
0x140a31875: lea    ecx,[r10-0x1]
0x140a31879: mov    WORD PTR [rsp+0x60],cx
0x140a3187e: jmp    0x140a318c6
0x140a31880: lea    eax,[r11+0x1]
0x140a31884: mov    WORD PTR [rsp+0x74],ax
0x140a31889: lea    ecx,[r10-0x1]
0x140a3188d: mov    WORD PTR [rsp+0x60],cx
0x140a31892: jmp    0x140a318c6
0x140a31894: lea    eax,[r11+0x1]
0x140a31898: mov    WORD PTR [rsp+0x74],ax
0x140a3189d: movzx  ecx,r10w
0x140a318a1: mov    WORD PTR [rsp+0x60],cx
0x140a318a6: jmp    0x140a318c6
0x140a318a8: lea    eax,[r11+0x1]
0x140a318ac: mov    WORD PTR [rsp+0x74],ax
0x140a318b1: lea    ecx,[r10+0x1]
0x140a318b5: mov    WORD PTR [rsp+0x60],cx
0x140a318ba: jmp    0x140a318c6
0x140a318bc: movzx  ecx,WORD PTR [rsp+0x60]
0x140a318c1: movzx  eax,WORD PTR [rsp+0x74]
0x140a318c6: mov    r8d,0xffff8ad0
0x140a318cc: cmp    ax,r8w
0x140a318d0: je     0x140a319a7
0x140a318d6: mov    BYTE PTR [rsp+0x20],0x0
0x140a318db: movzx  r9d,WORD PTR [rbp-0x60]
0x140a318e0: movzx  r8d,cx
0x140a318e4: movzx  edx,ax
0x140a318e7: mov    rcx,QWORD PTR [rbp-0x78]
0x140a318eb: call   0x14137f170
0x140a318f0: test   al,al
0x140a318f2: je     0x140a319a1
0x140a318f8: mov    rcx,QWORD PTR [rbp-0x78]
0x140a318fc: call   0x14139bee0
0x140a31901: test   eax,eax
0x140a31903: je     0x140a319a1
0x140a31909: mov    rcx,QWORD PTR [rbp-0x78]
0x140a3190d: call   0x14139be10
0x140a31912: movzx  r8d,WORD PTR [r14+0x20]
0x140a31917: movzx  r9d,WORD PTR [r14+0x1c]
0x140a3191c: mov    DWORD PTR [rsp+0x30],eax
0x140a31920: mov    WORD PTR [rsp+0x28],r8w
0x140a31926: mov    WORD PTR [rsp+0x20],r9w
0x140a3192c: movzx  r9d,WORD PTR [r14+0x10]
0x140a31931: mov    rax,QWORD PTR [rbp-0x78]
0x140a31935: movzx  r8d,WORD PTR [rax+0xac]
0x140a3193d: movzx  edx,WORD PTR [rax+0xaa]
0x140a31944: movzx  ecx,WORD PTR [rax+0xa8]
0x140a3194b: call   0x140aa84d0
0x140a31950: mov    r8d,0xffff8ad0
0x140a31956: test   al,al
0x140a31958: je     0x140a319a7
0x140a3195a: movzx  eax,WORD PTR [r14+0x10]
0x140a3195f: mov    WORD PTR [rsp+0x78],ax
0x140a31964: movzx  eax,WORD PTR [r14+0x1c]
0x140a31969: mov    WORD PTR [rsp+0x7c],ax
0x140a3196e: movzx  eax,WORD PTR [r14+0x20]
0x140a31973: mov    WORD PTR [rbp-0x80],ax
0x140a31977: mov    BYTE PTR [rsp+0x64],sil
0x140a3197c: movzx  r13d,WORD PTR [rsp+0x74]
0x140a31982: movzx  r12d,WORD PTR [rsp+0x60]
0x140a31988: movzx  eax,WORD PTR [rbp-0x60]
0x140a3198c: mov    WORD PTR [rsp+0x70],ax
0x140a31991: movzx  eax,WORD PTR [rbp-0x58]
0x140a31995: mov    WORD PTR [rsp+0x68],ax
0x140a3199a: mov    BYTE PTR [rsp+0x6c],0x1
0x140a3199f: jmp    0x140a319a7
0x140a319a1: mov    r8d,0xffff8ad0
0x140a319a7: add    rbx,0x8
0x140a319ab: cmp    rbx,rdi
0x140a319ae: jne    0x140a31670
0x140a319b4: cmp    WORD PTR [rsp+0x78],r8w
0x140a319ba: jne    0x140a31c07
0x140a319c0: movzx  edx,WORD PTR [r15+0x10]
0x140a319c5: movzx  esi,WORD PTR [r15+0x1c]
0x140a319ca: movzx  eax,WORD PTR [r15+0x20]
0x140a319cf: mov    WORD PTR [rsp+0x68],ax
0x140a319d4: movsx  rax,BYTE PTR [r15+0x14a]
0x140a319dc: lea    r11,[rip+0xffffffffff5ce61d]        # 0x140000000
0x140a319e3: cmp    eax,0x7
0x140a319e6: ja     0x140a31a23
0x140a319e8: mov    ecx,DWORD PTR [r11+rax*4+0xa324b4]
0x140a319f0: add    rcx,r11
0x140a319f3: jmp    rcx
0x140a319f5: add    dx,0x19
0x140a319f9: jmp    0x140a31a1f
0x140a319fb: add    dx,0x19
0x140a319ff: jmp    0x140a31a23
0x140a31a01: add    dx,0x19
0x140a31a05: add    si,0x19
0x140a31a09: jmp    0x140a31a23
0x140a31a0b: add    dx,0xffe7
0x140a31a0f: add    si,0x19
0x140a31a13: jmp    0x140a31a23
0x140a31a15: add    dx,0xffe7
0x140a31a19: jmp    0x140a31a23
0x140a31a1b: add    dx,0xffe7
0x140a31a1f: add    si,0xffe7
0x140a31a23: xor    eax,eax
0x140a31a25: mov    r9d,eax
0x140a31a28: test   dx,dx
0x140a31a2b: cmovns r9w,dx
0x140a31a30: mov    DWORD PTR [rbp-0x60],r9d
0x140a31a34: test   si,si
0x140a31a37: jns    0x140a31a3b
0x140a31a39: mov    esi,eax
0x140a31a3b: movsx  eax,r9w
0x140a31a3f: mov    ecx,DWORD PTR [rip+0x1ad8b17]        # 0x14250a55c
0x140a31a45: cmp    eax,ecx
0x140a31a47: jl     0x140a31a51
0x140a31a49: lea    r9d,[rcx-0x1]
0x140a31a4d: mov    DWORD PTR [rbp-0x60],r9d
0x140a31a51: movzx  eax,si
0x140a31a54: mov    ecx,DWORD PTR [rip+0x1ad8b06]        # 0x14250a560
0x140a31a5a: cmp    eax,ecx
0x140a31a5c: jl     0x140a31a61
0x140a31a5e: lea    esi,[rcx-0x1]
0x140a31a61: movzx  r8d,si
0x140a31a65: sub    r8w,WORD PTR [r15+0x1c]
0x140a31a6a: movzx  r10d,r9w
0x140a31a6e: sub    r10w,WORD PTR [r15+0x10]
0x140a31a73: movsx  eax,r10w
0x140a31a77: mov    edx,eax
0x140a31a79: neg    edx
0x140a31a7b: cmovs  edx,eax
0x140a31a7e: movsx  eax,r8w
0x140a31a82: mov    ecx,eax
0x140a31a84: neg    ecx
0x140a31a86: cmovs  ecx,eax
0x140a31a89: movsx  r9d,dx
0x140a31a8d: movsx  edx,cx
0x140a31a90: test   r8w,r8w
0x140a31a94: jns    0x140a31aa2
0x140a31a96: lea    eax,[r9+r9*1]
0x140a31a9a: cmp    eax,edx
0x140a31a9c: jle    0x140a31af7
0x140a31a9e: test   r8w,r8w
0x140a31aa2: jle    0x140a31ab1
0x140a31aa4: lea    eax,[r9+r9*1]
0x140a31aa8: cmp    eax,edx
0x140a31aaa: jg     0x140a31ab1
0x140a31aac: mov    r14b,0x4
0x140a31aaf: jmp    0x140a31afa
0x140a31ab1: test   r10w,r10w
0x140a31ab5: jns    0x140a31ad6
0x140a31ab7: lea    eax,[rdx+rdx*1]
0x140a31aba: cmp    eax,r9d
0x140a31abd: jg     0x140a31ac4
0x140a31abf: mov    r14b,0x6
0x140a31ac2: jmp    0x140a31afa
0x140a31ac4: test   r8w,r8w
0x140a31ac8: jle    0x140a31acf
0x140a31aca: mov    r14b,0x5
0x140a31acd: jmp    0x140a31afa
0x140a31acf: jns    0x140a31af7
0x140a31ad1: mov    r14b,0x7
0x140a31ad4: jmp    0x140a31afa
0x140a31ad6: jle    0x140a31af7
0x140a31ad8: lea    eax,[rdx+rdx*1]
0x140a31adb: cmp    eax,r9d
0x140a31ade: jg     0x140a31ae5
0x140a31ae0: mov    r14b,0x2
0x140a31ae3: jmp    0x140a31afa
0x140a31ae5: test   r8w,r8w
0x140a31ae9: jns    0x140a31af0
0x140a31aeb: mov    r14b,0x1
0x140a31aee: jmp    0x140a31afa
0x140a31af0: jle    0x140a31af7
0x140a31af2: mov    r14b,0x3
0x140a31af5: jmp    0x140a31afa
0x140a31af7: xor    r14b,r14b
0x140a31afa: movzx  edx,WORD PTR [r15+0x20]
0x140a31aff: mov    WORD PTR [rsp+0x60],dx
0x140a31b04: movzx  eax,r14b
0x140a31b08: cmp    eax,0x7
0x140a31b0b: ja     0x140a31ba2
0x140a31b11: mov    ecx,DWORD PTR [r11+rax*4+0xa324d4]
0x140a31b19: add    rcx,r11
0x140a31b1c: jmp    rcx
0x140a31b1e: movzx  ebx,WORD PTR [r15+0x10]
0x140a31b23: movzx  edi,WORD PTR [r15+0x1c]
0x140a31b28: inc    di
0x140a31b2b: jmp    0x140a31bac
0x140a31b2d: movzx  ebx,WORD PTR [r15+0x10]
0x140a31b32: dec    bx
0x140a31b35: movzx  edi,WORD PTR [r15+0x1c]
0x140a31b3a: inc    di
0x140a31b3d: jmp    0x140a31bac
0x140a31b3f: movzx  ebx,WORD PTR [r15+0x10]
0x140a31b44: dec    bx
0x140a31b47: movzx  edi,WORD PTR [r15+0x1c]
0x140a31b4c: jmp    0x140a31bac
0x140a31b4e: movzx  ebx,WORD PTR [r15+0x10]
0x140a31b53: dec    bx
0x140a31b56: movzx  edi,WORD PTR [r15+0x1c]
0x140a31b5b: dec    di
0x140a31b5e: jmp    0x140a31bac
0x140a31b60: movzx  ebx,WORD PTR [r15+0x10]
0x140a31b65: movzx  edi,WORD PTR [r15+0x1c]
0x140a31b6a: dec    di
0x140a31b6d: jmp    0x140a31bac
0x140a31b6f: movzx  ebx,WORD PTR [r15+0x10]
0x140a31b74: inc    bx
0x140a31b77: movzx  edi,WORD PTR [r15+0x1c]
0x140a31b7c: dec    di
0x140a31b7f: jmp    0x140a31bac
0x140a31b81: movzx  ebx,WORD PTR [r15+0x10]
0x140a31b86: inc    bx
0x140a31b89: movzx  edi,WORD PTR [r15+0x1c]
0x140a31b8e: jmp    0x140a31bac
0x140a31b90: movzx  ebx,WORD PTR [r15+0x10]
0x140a31b95: inc    bx
0x140a31b98: movzx  edi,WORD PTR [r15+0x1c]
0x140a31b9d: inc    di
0x140a31ba0: jmp    0x140a31bac
0x140a31ba2: movzx  edi,WORD PTR [rsp+0x68]
0x140a31ba7: movzx  ebx,WORD PTR [rsp+0x68]
0x140a31bac: mov    r8d,0xffff8ad0
0x140a31bb2: cmp    bx,r8w
0x140a31bb6: je     0x140a31c07
0x140a31bb8: mov    BYTE PTR [rsp+0x20],0x0
0x140a31bbd: movzx  r9d,dx
0x140a31bc1: movzx  r8d,di
0x140a31bc5: movzx  edx,bx
0x140a31bc8: mov    rcx,QWORD PTR [rbp-0x78]
0x140a31bcc: call   0x14137f170
0x140a31bd1: mov    r8d,0xffff8ad0
0x140a31bd7: test   al,al
0x140a31bd9: je     0x140a31c07
0x140a31bdb: mov    eax,DWORD PTR [rbp-0x60]
0x140a31bde: mov    WORD PTR [rsp+0x78],ax
0x140a31be3: mov    WORD PTR [rsp+0x7c],si
0x140a31be8: movzx  eax,WORD PTR [rsp+0x68]
0x140a31bed: mov    WORD PTR [rbp-0x80],ax
0x140a31bf1: movzx  eax,r14b
0x140a31bf5: movzx  r13d,bx
0x140a31bf9: movzx  r12d,di
0x140a31bfd: movzx  edi,WORD PTR [rsp+0x60]
0x140a31c02: jmp    0x140a31ed2
0x140a31c07: cmp    r13w,r8w
0x140a31c0b: jne    0x140a31ec8
0x140a31c11: movzx  edi,WORD PTR [r15+0x20]
0x140a31c16: movsx  rax,BYTE PTR [r15+0x14a]
0x140a31c1e: cmp    eax,0x7
0x140a31c21: ja     0x140a31ce8
0x140a31c27: lea    rdx,[rip+0xffffffffff5ce3d2]        # 0x140000000
0x140a31c2e: mov    ecx,DWORD PTR [rdx+rax*4+0xa324f4]
0x140a31c35: add    rcx,rdx
0x140a31c38: jmp    rcx
0x140a31c3a: movzx  r13d,WORD PTR [r15+0x10]
0x140a31c3f: jmp    0x140a31cad
0x140a31c41: movzx  r13d,WORD PTR [r15+0x10]
0x140a31c46: dec    r13w
0x140a31c4a: jmp    0x140a31cad
0x140a31c4c: movzx  r13d,WORD PTR [r15+0x10]
0x140a31c51: dec    r13w
0x140a31c55: movzx  r12d,WORD PTR [r15+0x1c]
0x140a31c5a: jmp    0x140a31cb6
0x140a31c5c: movzx  r13d,WORD PTR [r15+0x10]
0x140a31c61: dec    r13w
0x140a31c65: movzx  r12d,WORD PTR [r15+0x1c]
0x140a31c6a: dec    r12w
0x140a31c6e: jmp    0x140a31cb6
0x140a31c70: movzx  r13d,WORD PTR [r15+0x10]
0x140a31c75: movzx  r12d,WORD PTR [r15+0x1c]
0x140a31c7a: dec    r12w
0x140a31c7e: jmp    0x140a31cb6
0x140a31c80: movzx  r13d,WORD PTR [r15+0x10]
0x140a31c85: inc    r13w
0x140a31c89: movzx  r12d,WORD PTR [r15+0x1c]
0x140a31c8e: dec    r12w
0x140a31c92: jmp    0x140a31cb6
0x140a31c94: movzx  r13d,WORD PTR [r15+0x10]
0x140a31c99: inc    r13w
0x140a31c9d: movzx  r12d,WORD PTR [r15+0x1c]
0x140a31ca2: jmp    0x140a31cb6
0x140a31ca4: movzx  r13d,WORD PTR [r15+0x10]
0x140a31ca9: inc    r13w
0x140a31cad: movzx  r12d,WORD PTR [r15+0x1c]
0x140a31cb2: inc    r12w
0x140a31cb6: mov    rsi,QWORD PTR [rbp-0x78]
0x140a31cba: cmp    r13w,r8w
0x140a31cbe: je     0x140a31cec
0x140a31cc0: mov    BYTE PTR [rsp+0x20],0x0
0x140a31cc5: movzx  r9d,di
0x140a31cc9: movzx  r8d,r12w
0x140a31ccd: movzx  edx,r13w
0x140a31cd1: mov    rcx,rsi
0x140a31cd4: call   0x14137f170
0x140a31cd9: mov    r8d,0xffff8ad0
0x140a31cdf: test   al,al
0x140a31ce1: jne    0x140a31cec
0x140a31ce3: mov    r13d,r8d
0x140a31ce6: jmp    0x140a31d02
0x140a31ce8: mov    rsi,QWORD PTR [rbp-0x78]
0x140a31cec: movzx  eax,BYTE PTR [r15+0x14a]
0x140a31cf4: mov    BYTE PTR [rsp+0x64],al
0x140a31cf8: cmp    r13w,r8w
0x140a31cfc: jne    0x140a31ed2
0x140a31d02: xor    r14d,r14d
0x140a31d05: mov    ebx,r14d
0x140a31d08: nop    DWORD PTR [rax+rax*1+0x0]
0x140a31d10: movsx  eax,BYTE PTR [r15+0x14a]
0x140a31d18: cmp    ebx,eax
0x140a31d1a: je     0x140a31de4
0x140a31d20: movzx  edi,WORD PTR [r15+0x20]
0x140a31d25: movsx  rax,bl
0x140a31d29: cmp    eax,0x7
0x140a31d2c: ja     0x140a31dc1
0x140a31d32: lea    rdx,[rip+0xffffffffff5ce2c7]        # 0x140000000
0x140a31d39: mov    ecx,DWORD PTR [rdx+rax*4+0xa32514]
0x140a31d40: add    rcx,rdx
0x140a31d43: jmp    rcx
0x140a31d45: movzx  r13d,WORD PTR [r15+0x10]
0x140a31d4a: jmp    0x140a31db8
0x140a31d4c: movzx  r13d,WORD PTR [r15+0x10]
0x140a31d51: dec    r13w
0x140a31d55: jmp    0x140a31db8
0x140a31d57: movzx  r13d,WORD PTR [r15+0x10]
0x140a31d5c: dec    r13w
0x140a31d60: movzx  r12d,WORD PTR [r15+0x1c]
0x140a31d65: jmp    0x140a31dc1
0x140a31d67: movzx  r13d,WORD PTR [r15+0x10]
0x140a31d6c: dec    r13w
0x140a31d70: movzx  r12d,WORD PTR [r15+0x1c]
0x140a31d75: dec    r12w
0x140a31d79: jmp    0x140a31dc1
0x140a31d7b: movzx  r13d,WORD PTR [r15+0x10]
0x140a31d80: movzx  r12d,WORD PTR [r15+0x1c]
0x140a31d85: dec    r12w
0x140a31d89: jmp    0x140a31dc1
0x140a31d8b: movzx  r13d,WORD PTR [r15+0x10]
0x140a31d90: inc    r13w
0x140a31d94: movzx  r12d,WORD PTR [r15+0x1c]
0x140a31d99: dec    r12w
0x140a31d9d: jmp    0x140a31dc1
0x140a31d9f: movzx  r13d,WORD PTR [r15+0x10]
0x140a31da4: inc    r13w
0x140a31da8: movzx  r12d,WORD PTR [r15+0x1c]
0x140a31dad: jmp    0x140a31dc1
0x140a31daf: movzx  r13d,WORD PTR [r15+0x10]
0x140a31db4: inc    r13w
0x140a31db8: movzx  r12d,WORD PTR [r15+0x1c]
0x140a31dbd: inc    r12w
0x140a31dc1: cmp    r13w,r8w
0x140a31dc5: je     0x140a31de4
0x140a31dc7: mov    BYTE PTR [rsp+0x20],r14b
0x140a31dcc: movzx  r9d,di
0x140a31dd0: movzx  r8d,r12w
0x140a31dd4: movzx  edx,r13w
0x140a31dd8: mov    rcx,rsi
0x140a31ddb: call   0x14137f170
0x140a31de0: test   al,al
0x140a31de2: jne    0x140a31df6
0x140a31de4: inc    ebx
0x140a31de6: cmp    ebx,0x8
0x140a31de9: jge    0x140a31dfb
0x140a31deb: mov    r8d,0xffff8ad0
0x140a31df1: jmp    0x140a31d10
0x140a31df6: movzx  eax,bl
0x140a31df9: jmp    0x140a31e00
0x140a31dfb: movzx  eax,BYTE PTR [rsp+0x64]
0x140a31e00: mov    r8d,0xffff8ad0
0x140a31e06: cmp    r13w,r8w
0x140a31e0a: jne    0x140a31ed2
0x140a31e10: xorps  xmm0,xmm0
0x140a31e13: movups XMMWORD PTR [rbp+0x28],xmm0
0x140a31e17: mov    QWORD PTR [rbp+0x38],r14
0x140a31e1b: mov    QWORD PTR [rbp+0x40],0xf
0x140a31e23: mov    BYTE PTR [rbp+0x28],r14b
0x140a31e27: movups XMMWORD PTR [rbp+0x48],xmm0
0x140a31e2b: mov    QWORD PTR [rbp+0x58],r14
0x140a31e2f: mov    QWORD PTR [rbp+0x60],0xf
0x140a31e37: mov    BYTE PTR [rbp+0x48],r14b
0x140a31e3b: movdqa XMMWORD PTR [rbp+0x70],xmm0
0x140a31e40: mov    QWORD PTR [rbp+0x80],r14
0x140a31e47: mov    QWORD PTR [rbp+0xc],r14
0x140a31e4b: mov    QWORD PTR [rbp+0x14],r14
0x140a31e4f: mov    DWORD PTR [rbp+0x1c],r14d
0x140a31e53: mov    eax,0xffffffff
0x140a31e58: mov    QWORD PTR [rbp+0x68],0xffffffffffffffff
0x140a31e60: mov    DWORD PTR [rbp+0x88],eax
0x140a31e66: mov    WORD PTR [rbp+0x8c],ax
0x140a31e6d: mov    DWORD PTR [rbp+0x90],eax
0x140a31e73: mov    DWORD PTR [rbp+0x94],0x8ad08ad0
0x140a31e7d: mov    WORD PTR [rbp+0x98],r8w
0x140a31e85: mov    eax,0x50
0x140a31e8a: mov    WORD PTR [rbp+0x0],ax
0x140a31e8e: lea    rax,[rbp+0x0]
0x140a31e92: mov    QWORD PTR [rsp+0x20],rax
0x140a31e97: xor    r9d,r9d
0x140a31e9a: xor    r8d,r8d
0x140a31e9d: mov    dl,0x1
0x140a31e9f: mov    rcx,rsi
0x140a31ea2: call   0x14133d990
0x140a31ea7: nop
0x140a31ea8: lea    rcx,[rbp+0x70]
0x140a31eac: call   0x140070d80
0x140a31eb1: lea    rcx,[rbp+0x48]
0x140a31eb5: call   0x140070e80
0x140a31eba: lea    rcx,[rbp+0x28]
0x140a31ebe: call   0x140070e80
0x140a31ec3: jmp    0x140a32408
0x140a31ec8: movzx  edi,WORD PTR [rsp+0x70]
0x140a31ecd: movzx  eax,BYTE PTR [rsp+0x64]
0x140a31ed2: mov    r14,QWORD PTR [rbp-0x78]
0x140a31ed6: cmp    WORD PTR [r14+0xa8],r13w
0x140a31ede: jne    0x140a323d2
0x140a31ee4: cmp    WORD PTR [r14+0xaa],r12w
0x140a31eec: jne    0x140a323d2
0x140a31ef2: cmp    WORD PTR [r14+0xac],di
0x140a31efa: jne    0x140a323d2
0x140a31f00: cmp    BYTE PTR [r15+0x14d],0x0
0x140a31f08: jne    0x140a32408
0x140a31f0e: cmp    BYTE PTR [r15+0x14c],0x3
0x140a31f16: jl     0x140a32363
0x140a31f1c: cmp    BYTE PTR [r15+0x14a],al
0x140a31f23: jne    0x140a32363
0x140a31f29: cmp    WORD PTR [rsp+0x78],r8w
0x140a31f2f: je     0x140a32363
0x140a31f35: mov    rax,QWORD PTR [r15+0x128]
0x140a31f3c: mov    rcx,QWORD PTR [rax+0x20]
0x140a31f40: mov    rbx,QWORD PTR [rcx]
0x140a31f43: mov    rax,QWORD PTR [rbx]
0x140a31f46: mov    rcx,rbx
0x140a31f49: call   QWORD PTR [rax+0x448]
0x140a31f4f: mov    ecx,0x1
0x140a31f54: test   al,al
0x140a31f56: je     0x140a31f88
0x140a31f58: cmp    DWORD PTR [rbx+0x80],ecx
0x140a31f5e: je     0x140a31f88
0x140a31f60: mov    rax,QWORD PTR [rbx]
0x140a31f63: xor    r8d,r8d
0x140a31f66: mov    edx,ecx
0x140a31f68: mov    rcx,rbx
0x140a31f6b: call   QWORD PTR [rax+0x388]
0x140a31f71: mov    rdi,rax
0x140a31f74: mov    rcx,QWORD PTR [rax]
0x140a31f77: mov    r8,QWORD PTR [rcx+0x328]
0x140a31f7e: mov    dl,0x1
0x140a31f80: mov    rcx,rax
0x140a31f83: call   r8
0x140a31f86: jmp    0x140a31f95
0x140a31f88: mov    rdi,rbx
0x140a31f8b: mov    dl,0x2
0x140a31f8d: mov    rcx,rbx
0x140a31f90: call   0x140c7b1e0
0x140a31f95: test   rdi,rdi
0x140a31f98: je     0x140a323f0
0x140a31f9e: movzx  eax,WORD PTR [rsp+0x78]
0x140a31fa3: mov    WORD PTR [rsp+0x68],ax
0x140a31fa8: movzx  eax,WORD PTR [rsp+0x7c]
0x140a31fad: mov    WORD PTR [rsp+0x70],ax
0x140a31fb2: movzx  eax,WORD PTR [rbp-0x80]
0x140a31fb6: mov    WORD PTR [rsp+0x60],ax
0x140a31fbb: mov    eax,DWORD PTR [r14+0x118]
0x140a31fc2: bt     eax,0x16
0x140a31fc6: jae    0x140a31fdb
0x140a31fc8: btr    eax,0x16
0x140a31fcc: mov    DWORD PTR [r14+0x118],eax
0x140a31fd3: mov    rcx,r14
0x140a31fd6: call   0x14065d210
0x140a31fdb: mov    rax,QWORD PTR [rdi]
0x140a31fde: mov    rcx,rdi
0x140a31fe1: call   QWORD PTR [rax+0x710]
0x140a31fe7: lea    rdx,[r14+0xd50]
0x140a31fee: mov    ecx,DWORD PTR [rdi+0x1c]
0x140a31ff1: call   0x1400bb3f0
0x140a31ff6: mov    rbx,rax
0x140a31ff9: test   rax,rax
0x140a31ffc: jne    0x140a32032
0x140a31ffe: mov    ecx,0x10
0x140a32003: call   0x1415530e0
0x140a32008: mov    rbx,rax
0x140a3200b: mov    QWORD PTR [rbp-0x48],rax
0x140a3200f: mov    DWORD PTR [rax],0xffffffff
0x140a32015: xor    eax,eax
0x140a32017: mov    QWORD PTR [rbx+0x4],rax
0x140a3201b: mov    DWORD PTR [rbx+0xc],eax
0x140a3201e: mov    eax,DWORD PTR [rdi+0x1c]
0x140a32021: mov    DWORD PTR [rbx],eax
0x140a32023: lea    rdx,[r14+0xd50]
0x140a3202a: mov    rcx,rbx
0x140a3202d: call   0x1400bb5d0
0x140a32032: inc    DWORD PTR [rbx+0xc]
0x140a32035: mov    eax,DWORD PTR [rip+0xe8c1fd]        # 0x1418be238
0x140a3203b: test   eax,eax
0x140a3203d: jne    0x140a32102
0x140a32043: movzx  eax,BYTE PTR [rip+0xe8c29c]        # 0x1418be2e6
0x140a3204a: cmp    al,0x1
0x140a3204c: je     0x140a320eb
0x140a32052: cmp    al,0x2
0x140a32054: jne    0x140a3211a
0x140a3205a: mov    rax,QWORD PTR [rip+0x198397f]        # 0x1423b59e0
0x140a32061: mov    r12,QWORD PTR [rip+0x1983970]        # 0x1423b59d8
0x140a32068: sub    rax,r12
0x140a3206b: sar    rax,0x3
0x140a3206f: sub    eax,0x1
0x140a32072: js     0x140a3211a
0x140a32078: movsxd rsi,eax
0x140a3207b: mov    r13,QWORD PTR [rip+0x19c1bfe]        # 0x1423f3c80
0x140a32082: mov    r14,QWORD PTR [r12+rsi*8]
0x140a32086: mov    ebx,DWORD PTR [r14+0x4]
0x140a3208a: cmp    ebx,0xffffffff
0x140a3208d: je     0x140a320cd
0x140a3208f: mov    rax,r13
0x140a32092: sub    rax,QWORD PTR [rip+0x19c1bdf]        # 0x1423f3c78
0x140a32099: test   rax,0xfffffffffffffff8
0x140a3209f: je     0x140a320cd
0x140a320a1: lea    rdx,[rip+0x19c1bd0]        # 0x1423f3c78
0x140a320a8: mov    ecx,ebx
0x140a320aa: call   0x1400bb6d0
0x140a320af: test   rax,rax
0x140a320b2: je     0x140a320cd
0x140a320b4: mov    rax,QWORD PTR [rax+0x8]
0x140a320b8: cmp    DWORD PTR [rax+0x3a8],0x0
0x140a320bf: jle    0x140a320cd
0x140a320c1: mov    rax,QWORD PTR [rax+0x3a0]
0x140a320c8: test   BYTE PTR [rax],0x4
0x140a320cb: jne    0x140a320df
0x140a320cd: movzx  eax,WORD PTR [r14+0x18]
0x140a320d2: test   al,0x1
0x140a320d4: je     0x140a320df
0x140a320d6: test   al,0x2
0x140a320d8: je     0x140a320df
0x140a320da: cmp    ebx,0xffffffff
0x140a320dd: jne    0x140a320e7
0x140a320df: sub    rsi,0x1
0x140a320e3: jns    0x140a32082
0x140a320e5: jmp    0x140a3211a
0x140a320e7: mov    r14,QWORD PTR [rbp-0x78]
0x140a320eb: or     DWORD PTR [rdi+0x10],0x80000
0x140a320f2: mov    dl,0x3
0x140a320f4: mov    rcx,rdi
0x140a320f7: call   0x140c7b1e0
0x140a320fc: mov    eax,DWORD PTR [rip+0xe8c136]        # 0x1418be238
0x140a32102: cmp    eax,0x1
0x140a32105: jne    0x140a3211a
0x140a32107: cmp    r14,QWORD PTR [rip+0x19d5482]        # 0x142407590
0x140a3210e: jne    0x140a3211a
0x140a32110: mov    ecx,0x159d
0x140a32115: call   0x1407fdb30
0x140a3211a: mov    ecx,0xa0
0x140a3211f: call   0x1415530e0
0x140a32124: mov    rbx,rax
0x140a32127: mov    QWORD PTR [rbp-0x48],rax
0x140a3212b: xor    edx,edx
0x140a3212d: mov    rcx,rax
0x140a32130: call   0x140ebf110
0x140a32135: lea    rax,[rip+0xc462e4]        # 0x141678420
0x140a3213c: mov    QWORD PTR [rbx],rax
0x140a3213f: test   DWORD PTR [rdi+0x10],0x20000000
0x140a32146: jne    0x140a32150
0x140a32148: mov    rcx,rdi
0x140a3214b: call   0x140c7dc00
0x140a32150: movsxd rsi,DWORD PTR [rdi+0x74]
0x140a32154: test   DWORD PTR [rdi+0x10],0x20000000
0x140a3215b: jne    0x140a32165
0x140a3215d: mov    rcx,rdi
0x140a32160: call   0x140c7dc00
0x140a32165: movsxd r9,DWORD PTR [rdi+0x78]
0x140a32169: imul   rcx,rsi,0xf4240
0x140a32170: add    r9,rcx
0x140a32173: mov    r8d,0xc8
0x140a32179: test   r9,r9
0x140a3217c: jg     0x140a32183
0x140a3217e: mov    eax,r8d
0x140a32181: jmp    0x140a3218d
0x140a32183: mov    eax,0x3b9aca00
0x140a32188: cqo
0x140a3218a: idiv   r9
0x140a3218d: mov    DWORD PTR [rbx+0x58],eax
0x140a32190: cmp    eax,r8d
0x140a32193: jg     0x140a321a3
0x140a32195: mov    r8d,eax
0x140a32198: cmp    eax,0x14
0x140a3219b: jge    0x140a321a7
0x140a3219d: mov    r8d,0x14
0x140a321a3: mov    DWORD PTR [rbx+0x58],r8d
0x140a321a7: movzx  edx,WORD PTR [r15+0x10]
0x140a321ac: mov    WORD PTR [rbx+0x20],dx
0x140a321b0: movzx  r9d,WORD PTR [r15+0x1c]
0x140a321b5: mov    WORD PTR [rbx+0x22],r9w
0x140a321ba: movzx  r10d,WORD PTR [r15+0x20]
0x140a321bf: mov    WORD PTR [rbx+0x24],r10w
0x140a321c4: mov    WORD PTR [rbx+0x32],dx
0x140a321c8: mov    WORD PTR [rbx+0x34],r9w
0x140a321cd: mov    WORD PTR [rbx+0x36],r10w
0x140a321d2: movsx  eax,WORD PTR [rsp+0x68]
0x140a321d7: mov    WORD PTR [rbx+0x26],ax
0x140a321db: movsx  r11d,WORD PTR [rsp+0x70]
0x140a321e1: mov    WORD PTR [rbx+0x28],r11w
0x140a321e6: movzx  ecx,WORD PTR [rsp+0x60]
0x140a321eb: mov    WORD PTR [rbx+0x2a],cx
0x140a321ef: xor    r12d,r12d
0x140a321f2: mov    DWORD PTR [rbx+0x38],r12d
0x140a321f6: mov    DWORD PTR [rbx+0x40],r12d
0x140a321fa: mov    DWORD PTR [rbx+0x3c],r8d
0x140a321fe: cmp    r8d,0x3c
0x140a32202: jle    0x140a3220e
0x140a32204: mov    r8d,0x3c
0x140a3220a: mov    DWORD PTR [rbx+0x3c],r8d
0x140a3220e: mov    rsi,QWORD PTR [rbp-0x70]
0x140a32212: mov    r14,QWORD PTR [rbp-0x78]
0x140a32216: test   rsi,rsi
0x140a32219: je     0x140a3225c
0x140a3221b: test   DWORD PTR [rsi+0x110],0x8000
0x140a32225: je     0x140a3225c
0x140a32227: movsx  ecx,WORD PTR [r14+0xa8]
0x140a3222f: sub    ecx,eax
0x140a32231: mov    r8d,ecx
0x140a32234: neg    r8d
0x140a32237: cmovs  r8d,ecx
0x140a3223b: mov    DWORD PTR [rbx+0x3c],r8d
0x140a3223f: movsx  ecx,WORD PTR [r14+0xaa]
0x140a32247: sub    ecx,r11d
0x140a3224a: mov    eax,ecx
0x140a3224c: neg    eax
0x140a3224e: cmovs  eax,ecx
0x140a32251: cmp    eax,r8d
0x140a32254: jle    0x140a3225c
0x140a32256: mov    DWORD PTR [rbx+0x3c],eax
0x140a32259: mov    r8d,eax
0x140a3225c: lea    eax,[r8-0x1]
0x140a32260: mov    DWORD PTR [rbx+0x44],eax
0x140a32263: mov    WORD PTR [rbx+0x2c],dx
0x140a32267: mov    WORD PTR [rbx+0x2e],r9w
0x140a3226c: mov    WORD PTR [rbx+0x30],r10w
0x140a32271: mov    QWORD PTR [rbx+0x98],rdi
0x140a32278: mov    WORD PTR [rdi+0x8],dx
0x140a3227c: mov    rcx,QWORD PTR [rbx+0x98]
0x140a32283: movzx  eax,WORD PTR [rbx+0x2e]
0x140a32287: mov    WORD PTR [rcx+0xa],ax
0x140a3228b: mov    rcx,QWORD PTR [rbx+0x98]
0x140a32292: movzx  eax,WORD PTR [rbx+0x30]
0x140a32296: mov    WORD PTR [rcx+0xc],ax
0x140a3229a: mov    r8d,DWORD PTR [rbx+0x10]
0x140a3229e: mov    edx,0xc
0x140a322a3: mov    rcx,QWORD PTR [rbx+0x98]
0x140a322aa: call   0x140073c90
0x140a322af: mov    QWORD PTR [rbx+0x18],r14
0x140a322b3: mov    DWORD PTR [rbx+0x4c],r12d
0x140a322b7: or     DWORD PTR [rdi+0x10],0x2
0x140a322bb: test   rsi,rsi
0x140a322be: je     0x140a322c9
0x140a322c0: mov    eax,DWORD PTR [rsi+0x130]
0x140a322c6: mov    DWORD PTR [rbx+0x68],eax
0x140a322c9: mov    eax,0x3
0x140a322ce: cmp    BYTE PTR [rsp+0x6c],r12b
0x140a322d3: mov    r8d,0x1
0x140a322d9: cmove  eax,r8d
0x140a322dd: mov    edx,0x39
0x140a322e2: mov    DWORD PTR [rsp+0x50],0xffffffff
0x140a322ea: mov    WORD PTR [rsp+0x48],0x2f
0x140a322f1: mov    DWORD PTR [rsp+0x40],r8d
0x140a322f6: mov    QWORD PTR [rsp+0x38],r12
0x140a322fb: mov    QWORD PTR [rsp+0x30],rdi
0x140a32300: mov    DWORD PTR [rsp+0x28],eax
0x140a32304: mov    DWORD PTR [rsp+0x20],eax
0x140a32308: mov    r9d,0xf
0x140a3230e: mov    r8d,0xb
0x140a32314: mov    rcx,r14
0x140a32317: call   0x1413812a0
0x140a3231c: add    eax,0x64
0x140a3231f: mov    DWORD PTR [rbx+0x50],eax
0x140a32322: test   rsi,rsi
0x140a32325: je     0x140a3233f
0x140a32327: mov    r9d,0x6
0x140a3232d: mov    r8,rsi
0x140a32330: mov    rdx,r14
0x140a32333: lea    rcx,[rip+0x19c1636]        # 0x1423f3970
0x140a3233a: call   0x1414fc5c0
0x140a3233f: cmp    WORD PTR [r14+0x814],0x2
0x140a32348: jne    0x140a3234e
0x140a3234a: or     DWORD PTR [rbx+0x48],0x40
0x140a3234e: mov    BYTE PTR [r15+0x14d],0x1
0x140a32356: mov    rcx,r14
0x140a32359: call   0x1413843f0
0x140a3235e: jmp    0x140a32408
0x140a32363: movsx  r8d,BYTE PTR [r15+0x14a]
0x140a3236b: cmp    r8b,al
0x140a3236e: je     0x140a32408
0x140a32374: cmp    BYTE PTR [r15+0x150],0x0
0x140a3237c: jg     0x140a32408
0x140a32382: sub    al,r8b
0x140a32385: movzx  edx,al
0x140a32388: lea    eax,[rdx+0x8]
0x140a3238b: movzx  ecx,al
0x140a3238e: cmp    dl,0xfc
0x140a32391: cmovge ecx,edx
0x140a32394: movzx  edx,cl
0x140a32397: lea    eax,[rdx-0x8]
0x140a3239a: movzx  ecx,al
0x140a3239d: cmp    dl,0x4
0x140a323a0: cmovle ecx,edx
0x140a323a3: mov    rdx,r15
0x140a323a6: test   cl,cl
0x140a323a8: mov    ecx,0x14a
0x140a323ad: lea    eax,[r8+0x1]
0x140a323b1: jg     0x140a323b7
0x140a323b3: lea    eax,[r8+0x7]
0x140a323b7: and    eax,0x80000007
0x140a323bc: jge    0x140a323c5
0x140a323be: dec    eax
0x140a323c0: or     eax,0xfffffff8
0x140a323c3: inc    eax
0x140a323c5: mov    BYTE PTR [rdx+rcx*1],al
0x140a323c8: mov    BYTE PTR [r15+0x150],0x4
0x140a323d0: jmp    0x140a32408
0x140a323d2: mov    DWORD PTR [rsp+0x20],0x0
0x140a323da: movzx  r9d,di
0x140a323de: movzx  r8d,r12w
0x140a323e2: movzx  edx,r13w
0x140a323e6: mov    rcx,r14
0x140a323e9: call   0x140074ea0
0x140a323ee: jmp    0x140a32408
0x140a323f0: xor    r12d,r12d
0x140a323f3: mov    QWORD PTR [rsp+0x20],r12
0x140a323f8: xor    r9d,r9d
0x140a323fb: xor    r8d,r8d
0x140a323fe: mov    dl,0x1
0x140a32400: mov    rcx,r14
0x140a32403: call   0x14133d990
0x140a32408: mov    rcx,QWORD PTR [rbp+0xc0]
0x140a3240f: xor    rcx,rsp
0x140a32412: call   0x1415530b0
0x140a32417: mov    rbx,QWORD PTR [rsp+0x220]
0x140a3241f: add    rsp,0x1d0
0x140a32426: pop    r15
0x140a32428: pop    r14
0x140a3242a: pop    r13
0x140a3242c: pop    r12
0x140a3242e: pop    rdi
0x140a3242f: pop    rsi
0x140a32430: pop    rbp
0x140a32431: ret
0x140a32432: xchg   ax,ax
0x140a32434: sbb    al,0x13
0x140a32436: movabs ds:0xa3130800a3130800,eax
0x140a3243f: add    BYTE PTR [rax],cl
0x140a32441: adc    esp,DWORD PTR [rbx-0x5cece400]
0x140a32447: add    bh,bh
0x140a32449: adc    ah,BYTE PTR [rbx-0x5cecf800]
0x140a3244f: add    BYTE PTR [rax],cl
0x140a32451: adc    esp,DWORD PTR [rbx-0x5cece400]
0x140a32457: add    BYTE PTR [rax],cl
0x140a32459: adc    esp,DWORD PTR [rbx-0x5cecf800]
0x140a3245f: add    BYTE PTR [rbx+rdx*1],bl
0x140a32462: movabs ds:0xa3131c00a3130800,eax
0x140a3246b: add    BYTE PTR [rax],cl
0x140a3246d: adc    esp,DWORD PTR [rbx-0x5cece400]
0x140a32473: add    BYTE PTR [rbp-0x64ff5cec],dl
0x140a32479: adc    al,0xa3
0x140a3247b: add    BYTE PTR [rcx-0x54ff5cec],ah
0x140a32481: adc    al,0xa3
0x140a32483: add    BYTE PTR [rbp-0x40ff5cec],dh
0x140a32489: adc    al,0xa3
0x140a3248b: add    cl,cl
0x140a3248d: adc    al,0xa3
0x140a3248f: add    bl,dl
0x140a32491: adc    al,0xa3
0x140a32493: add    BYTE PTR [rsi],dl
0x140a32495: sbb    BYTE PTR [rbx-0x5ce7d300],ah
0x140a3249b: add    BYTE PTR [rax+rbx*1-0x5d],al
0x140a3249f: add    BYTE PTR [rax+0x18],bl
0x140a324a2: movabs ds:0xa3188000a3186c00,eax
0x140a324ab: add    BYTE PTR [rax+rbx*1+0x18a800a3],dl
0x140a324b2: movabs ds:0xa319f500a31a1f00,eax
0x140a324bb: add    bl,bh
0x140a324bd: sbb    DWORD PTR [rbx-0x5ce5ff00],esp
0x140a324c3: add    BYTE PTR [rip+0xb00a31a],al        # 0x14ba3c7e3
0x140a324c9: sbb    ah,BYTE PTR [rbx-0x5ce5eb00]
0x140a324cf: add    BYTE PTR [rbx],bl
0x140a324d1: sbb    ah,BYTE PTR [rbx-0x5ce4e200]
0x140a324d7: add    BYTE PTR [rip+0x3f00a31b],ch        # 0x17fa3c7f8
0x140a324dd: sbb    esp,DWORD PTR [rbx-0x5ce4b200]
0x140a324e3: add    BYTE PTR [rax+0x1b],ah
0x140a324e6: movabs ds:0xa31b8100a31b6f00,eax
0x140a324ef: add    BYTE PTR [rax+0x3a00a31b],dl
0x140a324f5: sbb    al,0xa3
0x140a324f7: add    BYTE PTR [rcx+0x1c],al
0x140a324fa: movabs ds:0xa31c5c00a31c4c00,eax
0x140a32503: add    BYTE PTR [rax+0x1c],dh
0x140a32506: movabs ds:0xa31c9400a31c8000,eax
0x140a3250f: add    BYTE PTR [rsp+rbx*1+0x1d4500a3],ah
0x140a32516: movabs ds:0xa31d5700a31d4c00,eax
0x140a3251f: add    BYTE PTR [rdi+0x1d],ah
0x140a32522: movabs ds:0xa31d8b00a31d7b00,eax
0x140a3252b: add    BYTE PTR [rdi-0x50ff5ce3],bl
0x140a32531: .byte 0x1d
0x140a32532: .byte 0xa3
