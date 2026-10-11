# reference PE:6a70a6d9:02711000; actor-associations; RVA 0xd1840..0xd1eeb
0x000d1840: mov    QWORD PTR [rsp+0x10],rbx
0x000d1845: mov    QWORD PTR [rsp+0x18],rsi
0x000d184a: mov    QWORD PTR [rsp+0x20],rdi
0x000d184f: push   rbp
0x000d1850: push   r12
0x000d1852: push   r13
0x000d1854: push   r14
0x000d1856: push   r15
0x000d1858: lea    rbp,[rsp-0x37]
0x000d185d: sub    rsp,0xd0
0x000d1864: mov    rax,QWORD PTR [rip+0x17ca7d5]        # 0x14189c040
0x000d186b: xor    rax,rsp
0x000d186e: mov    QWORD PTR [rbp+0x2f],rax
0x000d1872: mov    r13,rcx
0x000d1875: mov    r15d,0x3a
0x000d187b: cmp    DWORD PTR [rip+0x17caa16],0x0        # 0x14189c298
0x000d1882: jne    0x1400d188f
0x000d1884: mov    r15d,DWORD PTR [rip+0x22fbef9]        # 0x1423cd784
0x000d188b: add    r15d,0xfffffffc
0x000d188f: cmp    QWORD PTR [rcx+0x68],0x0
0x000d1894: jne    0x1400d18cd
0x000d1896: lea    rdx,[rcx+0x18]
0x000d189a: lea    rbx,[rcx+0x58]
0x000d189e: cmp    rbx,rdx
0x000d18a1: je     0x1400d18b9
0x000d18a3: mov    r8,QWORD PTR [rdx+0x10]
0x000d18a7: cmp    QWORD PTR [rdx+0x18],0xf
0x000d18ac: jbe    0x1400d18b1
0x000d18ae: mov    rdx,QWORD PTR [rdx]
0x000d18b1: mov    rcx,rbx
0x000d18b4: call   0x14006f8d0
0x000d18b9: movsxd rax,r15d
0x000d18bc: cmp    QWORD PTR [rbx+0x10],rax
0x000d18c0: jbe    0x1400d18cd
0x000d18c2: mov    edx,r15d
0x000d18c5: mov    rcx,rbx
0x000d18c8: call   0x14052d910
0x000d18cd: mov    rax,QWORD PTR [r13+0x80]
0x000d18d4: sub    rax,QWORD PTR [r13+0x78]
0x000d18d8: sar    rax,0x3
0x000d18dc: test   rax,rax
0x000d18df: jne    0x1400d1ebe
0x000d18e5: mov    rdi,QWORD PTR [r13+0xa8]
0x000d18ec: mov    rbx,QWORD PTR [r13+0xa0]
0x000d18f3: mov    rax,rdi
0x000d18f6: sub    rax,rbx
0x000d18f9: sar    rax,0x2
0x000d18fd: xor    r12d,r12d
0x000d1900: test   rax,rax
0x000d1903: je     0x1400d1a5c
0x000d1909: nop    DWORD PTR [rax+0x0]
0x000d1910: cmp    rbx,rdi
0x000d1913: jae    0x1400d1a5c
0x000d1919: mov    rcx,QWORD PTR [r13+0x8]
0x000d191d: test   rcx,rcx
0x000d1920: je     0x1400d192c
0x000d1922: mov    eax,DWORD PTR [rbx]
0x000d1924: cmp    DWORD PTR [rcx],eax
0x000d1926: je     0x1400d1a53
0x000d192c: mov    edx,DWORD PTR [rbx]
0x000d192e: lea    rcx,[rip+0x24163b3]        # 0x1424e7ce8
0x000d1935: call   0x140072570
0x000d193a: mov    rdx,rax
0x000d193d: test   rax,rax
0x000d1940: je     0x1400d1a53
0x000d1946: cmp    BYTE PTR [rax+0x7a],0x0
0x000d194a: je     0x1400d1a53
0x000d1950: xorps  xmm0,xmm0
0x000d1953: movups XMMWORD PTR [rbp-0x11],xmm0
0x000d1957: mov    QWORD PTR [rbp-0x1],0x7
0x000d195f: mov    QWORD PTR [rbp+0x7],0xf
0x000d1967: mov    rcx,QWORD PTR [rip+0x151b632]        # 0x1415ecfa0 ; literal="Alias: "
0x000d196e: mov    DWORD PTR [rbp-0x11],ecx
0x000d1971: movzx  ecx,WORD PTR [rip+0x151b62c]        # 0x1415ecfa4 ; literal="s: "
0x000d1978: mov    WORD PTR [rbp-0xd],cx
0x000d197c: movzx  eax,BYTE PTR [rip+0x151b623]        # 0x1415ecfa6 ; literal=" "
0x000d1983: mov    BYTE PTR [rbp-0xb],al
0x000d1986: mov    BYTE PTR [rbp-0xa],0x0
0x000d198a: movups XMMWORD PTR [rbp+0xf],xmm0
0x000d198e: mov    QWORD PTR [rbp+0x1f],r12
0x000d1992: mov    QWORD PTR [rbp+0x27],0xf
0x000d199a: mov    BYTE PTR [rbp+0xf],0x0
0x000d199e: lea    rcx,[rdx+0x8]
0x000d19a2: xor    r9d,r9d
0x000d19a5: mov    r8b,0x1
0x000d19a8: lea    rdx,[rbp+0xf]
0x000d19ac: call   0x140a946e0
0x000d19b1: lea    rdx,[rbp+0xf]
0x000d19b5: cmp    QWORD PTR [rbp+0x27],0xf
0x000d19ba: cmova  rdx,QWORD PTR [rbp+0xf]
0x000d19bf: mov    r8,QWORD PTR [rbp+0x1f]
0x000d19c3: lea    rcx,[rbp-0x11]
0x000d19c7: call   0x14006fa10
0x000d19cc: mov    ecx,0x20
0x000d19d1: call   0x141539690
0x000d19d6: mov    r14,rax
0x000d19d9: xorps  xmm0,xmm0
0x000d19dc: movups XMMWORD PTR [rax],xmm0
0x000d19df: mov    QWORD PTR [rax+0x10],r12
0x000d19e3: mov    QWORD PTR [rax+0x18],0xf
0x000d19eb: mov    BYTE PTR [rax],0x0
0x000d19ee: mov    QWORD PTR [rbp-0x79],rax
0x000d19f2: lea    rax,[rbp-0x11]
0x000d19f6: cmp    r14,rax
0x000d19f9: je     0x1400d1a15
0x000d19fb: lea    rdx,[rbp-0x11]
0x000d19ff: cmp    QWORD PTR [rbp+0x7],0xf
0x000d1a04: cmova  rdx,QWORD PTR [rbp-0x11]
0x000d1a09: mov    r8,QWORD PTR [rbp-0x1]
0x000d1a0d: mov    rcx,r14
0x000d1a10: call   0x14006f8d0
0x000d1a15: mov    rdx,QWORD PTR [r13+0x80]
0x000d1a1c: cmp    rdx,QWORD PTR [r13+0x88]
0x000d1a23: je     0x1400d1a32
0x000d1a25: mov    QWORD PTR [rdx],r14
0x000d1a28: add    QWORD PTR [r13+0x80],0x8
0x000d1a30: jmp    0x1400d1a40
0x000d1a32: lea    r8,[rbp-0x79]
0x000d1a36: lea    rcx,[r13+0x78]
0x000d1a3a: call   0x1400bad30
0x000d1a3f: nop
0x000d1a40: lea    rcx,[rbp+0xf]
0x000d1a44: call   0x14006f850
0x000d1a49: nop
0x000d1a4a: lea    rcx,[rbp-0x11]
0x000d1a4e: call   0x14006f850
0x000d1a53: add    rbx,0x4
0x000d1a57: jmp    0x1400d1910
0x000d1a5c: mov    rax,QWORD PTR [r13+0xb8]
0x000d1a63: test   rax,rax
0x000d1a66: je     0x1400d1c25
0x000d1a6c: mov    ecx,0x20
0x000d1a71: cmp    QWORD PTR [rax+0x90],r13
0x000d1a78: jne    0x1400d1ae2
0x000d1a7a: call   0x141539690
0x000d1a7f: mov    rbx,rax
0x000d1a82: xorps  xmm0,xmm0
0x000d1a85: movups XMMWORD PTR [rax],xmm0
0x000d1a88: mov    QWORD PTR [rax+0x10],r12
0x000d1a8c: mov    QWORD PTR [rax+0x18],0xf
0x000d1a94: mov    BYTE PTR [rax],0x0
0x000d1a97: mov    QWORD PTR [rbp-0x79],rax
0x000d1a9b: mov    r8d,0x1d
0x000d1aa1: lea    rdx,[rip+0x151b548]        # 0x1415ecff0 ; literal="Highest known in organization"
0x000d1aa8: mov    rcx,rax
0x000d1aab: call   0x14006f8d0
0x000d1ab0: mov    rdx,QWORD PTR [r13+0x80]
0x000d1ab7: cmp    rdx,QWORD PTR [r13+0x88]
0x000d1abe: je     0x1400d1ad0
0x000d1ac0: mov    QWORD PTR [rdx],rbx
0x000d1ac3: add    QWORD PTR [r13+0x80],0x8
0x000d1acb: jmp    0x1400d1c25
0x000d1ad0: lea    r8,[rbp-0x79]
0x000d1ad4: lea    rcx,[r13+0x78]
0x000d1ad8: call   0x1400bad30
0x000d1add: jmp    0x1400d1c25
0x000d1ae2: xorps  xmm0,xmm0
0x000d1ae5: movups XMMWORD PTR [rbp-0x71],xmm0
0x000d1ae9: mov    QWORD PTR [rbp-0x61],r12
0x000d1aed: mov    QWORD PTR [rbp-0x59],r12
0x000d1af1: call   0x1400707d0
0x000d1af6: mov    QWORD PTR [rbp-0x71],rax
0x000d1afa: mov    QWORD PTR [rbp-0x61],0x19
0x000d1b02: mov    QWORD PTR [rbp-0x59],0x1f
0x000d1b0a: movups xmm0,XMMWORD PTR [rip+0x151b4ff]        # 0x1415ed010 ; literal="Associated Organization: "
0x000d1b11: movups XMMWORD PTR [rax],xmm0
0x000d1b14: movsd  xmm0,QWORD PTR [rip+0x151b504]        # 0x1415ed020 ; literal="ization: "
0x000d1b1c: movsd  QWORD PTR [rax+0x10],xmm0
0x000d1b21: movzx  ecx,BYTE PTR [rip+0x151b500]        # 0x1415ed028 ; literal=" "
0x000d1b28: mov    BYTE PTR [rax+0x18],cl
0x000d1b2b: mov    BYTE PTR [rax+0x19],0x0
0x000d1b2f: mov    rdx,QWORD PTR [r13+0xb8]
0x000d1b36: add    rdx,0x18
0x000d1b3a: mov    r8,QWORD PTR [rdx+0x10]
0x000d1b3e: cmp    QWORD PTR [rdx+0x18],0xf
0x000d1b43: jbe    0x1400d1b48
0x000d1b45: mov    rdx,QWORD PTR [rdx]
0x000d1b48: lea    rcx,[rbp-0x71]
0x000d1b4c: call   0x14006fa10
0x000d1b51: movsxd rdx,r15d
0x000d1b54: mov    rax,QWORD PTR [rbp-0x61]
0x000d1b58: cmp    rax,rdx
0x000d1b5b: jbe    0x1400d1b73
0x000d1b5d: mov    QWORD PTR [rbp-0x61],rdx
0x000d1b61: lea    rax,[rbp-0x71]
0x000d1b65: cmp    QWORD PTR [rbp-0x59],0xf
0x000d1b6a: cmova  rax,QWORD PTR [rbp-0x71]
0x000d1b6f: mov    BYTE PTR [rax+rdx*1],0x0
0x000d1b73: mov    ecx,0x20
0x000d1b78: call   0x141539690
0x000d1b7d: mov    rbx,rax
0x000d1b80: xorps  xmm0,xmm0
0x000d1b83: movups XMMWORD PTR [rax],xmm0
0x000d1b86: mov    QWORD PTR [rax+0x10],r12
0x000d1b8a: mov    QWORD PTR [rax+0x18],0xf
0x000d1b92: mov    BYTE PTR [rax],0x0
0x000d1b95: mov    QWORD PTR [rbp-0x79],rax
0x000d1b99: lea    rax,[rbp-0x71]
0x000d1b9d: cmp    rbx,rax
0x000d1ba0: je     0x1400d1bbc
0x000d1ba2: lea    rdx,[rbp-0x71]
0x000d1ba6: cmp    QWORD PTR [rbp-0x59],0xf
0x000d1bab: cmova  rdx,QWORD PTR [rbp-0x71]
0x000d1bb0: mov    r8,QWORD PTR [rbp-0x61]
0x000d1bb4: mov    rcx,rbx
0x000d1bb7: call   0x14006f8d0
0x000d1bbc: mov    rdx,QWORD PTR [r13+0x80]
0x000d1bc3: cmp    rdx,QWORD PTR [r13+0x88]
0x000d1bca: je     0x1400d1bd9
0x000d1bcc: mov    QWORD PTR [rdx],rbx
0x000d1bcf: add    QWORD PTR [r13+0x80],0x8
0x000d1bd7: jmp    0x1400d1be7
0x000d1bd9: lea    r8,[rbp-0x79]
0x000d1bdd: lea    rcx,[r13+0x78]
0x000d1be1: call   0x1400bad30
0x000d1be6: nop
0x000d1be7: mov    rdx,QWORD PTR [rbp-0x59]
0x000d1beb: cmp    rdx,0xf
0x000d1bef: jbe    0x1400d1c25
0x000d1bf1: inc    rdx
0x000d1bf4: mov    rcx,QWORD PTR [rbp-0x71]
0x000d1bf8: mov    rax,rcx
0x000d1bfb: cmp    rdx,0x1000
0x000d1c02: jb     0x1400d1c20
0x000d1c04: add    rdx,0x27
0x000d1c08: mov    rcx,QWORD PTR [rcx-0x8]
0x000d1c0c: sub    rax,rcx
0x000d1c0f: add    rax,0xfffffffffffffff8
0x000d1c13: cmp    rax,0x1f
0x000d1c17: jbe    0x1400d1c20
0x000d1c19: call   QWORD PTR [rip+0x1513f09]        # 0x1415e5b28
0x000d1c1f: int3
0x000d1c20: call   0x141539680
0x000d1c25: mov    rbx,QWORD PTR [r13+0xc0]
0x000d1c2c: mov    rdi,QWORD PTR [r13+0xc8]
0x000d1c33: movsxd r15,r15d
0x000d1c36: cmp    rbx,rdi
0x000d1c39: jae    0x1400d1d9a
0x000d1c3f: mov    rax,QWORD PTR [r13+0xb8]
0x000d1c46: cmp    QWORD PTR [rbx],rax
0x000d1c49: je     0x1400d1d8a
0x000d1c4f: xorps  xmm0,xmm0
0x000d1c52: movups XMMWORD PTR [rbp-0x51],xmm0
0x000d1c56: mov    QWORD PTR [rbp-0x41],r12
0x000d1c5a: mov    QWORD PTR [rbp-0x39],r12
0x000d1c5e: mov    ecx,0x20
0x000d1c63: call   0x1400707d0
0x000d1c68: mov    QWORD PTR [rbp-0x51],rax
0x000d1c6c: mov    QWORD PTR [rbp-0x41],0x19
0x000d1c74: mov    QWORD PTR [rbp-0x39],0x1f
0x000d1c7c: movups xmm0,XMMWORD PTR [rip+0x151b38d]        # 0x1415ed010 ; literal="Associated Organization: "
0x000d1c83: movups XMMWORD PTR [rax],xmm0
0x000d1c86: movsd  xmm0,QWORD PTR [rip+0x151b392]        # 0x1415ed020 ; literal="ization: "
0x000d1c8e: movsd  QWORD PTR [rax+0x10],xmm0
0x000d1c93: movzx  ecx,BYTE PTR [rip+0x151b38e]        # 0x1415ed028 ; literal=" "
0x000d1c9a: mov    BYTE PTR [rax+0x18],cl
0x000d1c9d: mov    BYTE PTR [rax+0x19],0x0
0x000d1ca1: mov    rdx,QWORD PTR [rbx]
0x000d1ca4: add    rdx,0x18
0x000d1ca8: mov    r8,QWORD PTR [rdx+0x10]
0x000d1cac: cmp    QWORD PTR [rdx+0x18],0xf
0x000d1cb1: jbe    0x1400d1cb6
0x000d1cb3: mov    rdx,QWORD PTR [rdx]
0x000d1cb6: lea    rcx,[rbp-0x51]
0x000d1cba: call   0x14006fa10
0x000d1cbf: mov    rax,QWORD PTR [rbp-0x41]
0x000d1cc3: cmp    rax,r15
0x000d1cc6: jbe    0x1400d1cdf
0x000d1cc8: mov    QWORD PTR [rbp-0x41],r15
0x000d1ccc: lea    rax,[rbp-0x51]
0x000d1cd0: cmp    QWORD PTR [rbp-0x39],0xf
0x000d1cd5: cmova  rax,QWORD PTR [rbp-0x51]
0x000d1cda: mov    BYTE PTR [rax+r15*1],0x0
0x000d1cdf: mov    ecx,0x20
0x000d1ce4: call   0x141539690
0x000d1ce9: mov    r14,rax
0x000d1cec: xorps  xmm0,xmm0
0x000d1cef: movups XMMWORD PTR [rax],xmm0
0x000d1cf2: mov    QWORD PTR [rax+0x10],r12
0x000d1cf6: mov    QWORD PTR [rax+0x18],0xf
0x000d1cfe: mov    BYTE PTR [rax],0x0
0x000d1d01: mov    QWORD PTR [rbp-0x79],rax
0x000d1d05: lea    rax,[rbp-0x51]
0x000d1d09: cmp    r14,rax
0x000d1d0c: je     0x1400d1d28
0x000d1d0e: lea    rdx,[rbp-0x51]
0x000d1d12: cmp    QWORD PTR [rbp-0x39],0xf
0x000d1d17: cmova  rdx,QWORD PTR [rbp-0x51]
0x000d1d1c: mov    r8,QWORD PTR [rbp-0x41]
0x000d1d20: mov    rcx,r14
0x000d1d23: call   0x14006f8d0
0x000d1d28: mov    rdx,QWORD PTR [r13+0x80]
0x000d1d2f: cmp    rdx,QWORD PTR [r13+0x88]
0x000d1d36: je     0x1400d1d45
0x000d1d38: mov    QWORD PTR [rdx],r14
0x000d1d3b: add    QWORD PTR [r13+0x80],0x8
0x000d1d43: jmp    0x1400d1d53
0x000d1d45: lea    r8,[rbp-0x79]
0x000d1d49: lea    rcx,[r13+0x78]
0x000d1d4d: call   0x1400bad30
0x000d1d52: nop
0x000d1d53: mov    rdx,QWORD PTR [rbp-0x39]
0x000d1d57: cmp    rdx,0xf
0x000d1d5b: jbe    0x1400d1d8a
0x000d1d5d: inc    rdx
0x000d1d60: mov    rcx,QWORD PTR [rbp-0x51]
0x000d1d64: mov    rax,rcx
0x000d1d67: cmp    rdx,0x1000
0x000d1d6e: jb     0x1400d1d85
0x000d1d70: add    rdx,0x27
0x000d1d74: mov    rcx,QWORD PTR [rcx-0x8]
0x000d1d78: sub    rax,rcx
0x000d1d7b: add    rax,0xfffffffffffffff8
0x000d1d7f: cmp    rax,0x1f
0x000d1d83: ja     0x1400d1d93
0x000d1d85: call   0x141539680
0x000d1d8a: add    rbx,0x8
0x000d1d8e: jmp    0x1400d1c36
0x000d1d93: call   QWORD PTR [rip+0x1513d8f]        # 0x1415e5b28
0x000d1d99: int3
0x000d1d9a: mov    rbx,QWORD PTR [r13+0xd8]
0x000d1da1: mov    rdi,QWORD PTR [r13+0xe0]
0x000d1da8: nop    DWORD PTR [rax+rax*1+0x0]
0x000d1db0: cmp    rbx,rdi
0x000d1db3: jae    0x1400d1ebe
0x000d1db9: xorps  xmm0,xmm0
0x000d1dbc: movups XMMWORD PTR [rbp-0x31],xmm0
0x000d1dc0: mov    QWORD PTR [rbp-0x21],r12
0x000d1dc4: mov    QWORD PTR [rbp-0x19],r12
0x000d1dc8: mov    ecx,0x20
0x000d1dcd: call   0x1400707d0
0x000d1dd2: mov    QWORD PTR [rbp-0x31],rax
0x000d1dd6: mov    QWORD PTR [rbp-0x21],0x11
0x000d1dde: mov    QWORD PTR [rbp-0x19],0x1f
0x000d1de6: movups xmm0,XMMWORD PTR [rip+0x151b1d3]        # 0x1415ecfc0 ; literal="Associated Plot: "
0x000d1ded: movups XMMWORD PTR [rax],xmm0
0x000d1df0: movzx  ecx,BYTE PTR [rip+0x151b1d9]        # 0x1415ecfd0 ; literal=" "
0x000d1df7: mov    BYTE PTR [rax+0x10],cl
0x000d1dfa: mov    BYTE PTR [rax+0x11],0x0
0x000d1dfe: mov    rdx,QWORD PTR [rbx]
0x000d1e01: mov    r8,QWORD PTR [rdx+0x10]
0x000d1e05: cmp    QWORD PTR [rdx+0x18],0xf
0x000d1e0a: jbe    0x1400d1e0f
0x000d1e0c: mov    rdx,QWORD PTR [rdx]
0x000d1e0f: lea    rcx,[rbp-0x31]
0x000d1e13: call   0x14006fa10
0x000d1e18: mov    rax,QWORD PTR [rbp-0x21]
0x000d1e1c: cmp    rax,r15
0x000d1e1f: jbe    0x1400d1e38
0x000d1e21: mov    QWORD PTR [rbp-0x21],r15
0x000d1e25: lea    rax,[rbp-0x31]
0x000d1e29: cmp    QWORD PTR [rbp-0x19],0xf
0x000d1e2e: cmova  rax,QWORD PTR [rbp-0x31]
0x000d1e33: mov    BYTE PTR [rax+r15*1],0x0
0x000d1e38: mov    ecx,0x20
0x000d1e3d: call   0x141539690
0x000d1e42: mov    r14,rax
0x000d1e45: xorps  xmm0,xmm0
0x000d1e48: movups XMMWORD PTR [rax],xmm0
0x000d1e4b: mov    QWORD PTR [rax+0x10],r12
0x000d1e4f: mov    QWORD PTR [rax+0x18],0xf
0x000d1e57: mov    BYTE PTR [rax],0x0
0x000d1e5a: mov    QWORD PTR [rbp-0x79],rax
0x000d1e5e: lea    rax,[rbp-0x31]
0x000d1e62: cmp    r14,rax
0x000d1e65: je     0x1400d1e81
0x000d1e67: lea    rdx,[rbp-0x31]
0x000d1e6b: cmp    QWORD PTR [rbp-0x19],0xf
0x000d1e70: cmova  rdx,QWORD PTR [rbp-0x31]
0x000d1e75: mov    r8,QWORD PTR [rbp-0x21]
0x000d1e79: mov    rcx,r14
0x000d1e7c: call   0x14006f8d0
0x000d1e81: mov    rdx,QWORD PTR [r13+0x80]
0x000d1e88: cmp    rdx,QWORD PTR [r13+0x88]
0x000d1e8f: je     0x1400d1e9e
0x000d1e91: mov    QWORD PTR [rdx],r14
0x000d1e94: add    QWORD PTR [r13+0x80],0x8
0x000d1e9c: jmp    0x1400d1eac
0x000d1e9e: lea    r8,[rbp-0x79]
0x000d1ea2: lea    rcx,[r13+0x78]
0x000d1ea6: call   0x1400bad30
0x000d1eab: nop
0x000d1eac: lea    rcx,[rbp-0x31]
0x000d1eb0: call   0x14006f850
0x000d1eb5: add    rbx,0x8
0x000d1eb9: jmp    0x1400d1db0
0x000d1ebe: mov    rcx,QWORD PTR [rbp+0x2f]
0x000d1ec2: xor    rcx,rsp
0x000d1ec5: call   0x141539660
0x000d1eca: lea    r11,[rsp+0xd0]
0x000d1ed2: mov    rbx,QWORD PTR [r11+0x38]
0x000d1ed6: mov    rsi,QWORD PTR [r11+0x40]
0x000d1eda: mov    rdi,QWORD PTR [r11+0x48]
0x000d1ede: mov    rsp,r11
0x000d1ee1: pop    r15
0x000d1ee3: pop    r14
0x000d1ee5: pop    r13
0x000d1ee7: pop    r12
0x000d1ee9: pop    rbp
0x000d1eea: ret
