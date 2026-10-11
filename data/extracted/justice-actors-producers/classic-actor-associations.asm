# classic PE:6a70b91c:0270a000; actor-associations; RVA 0xd17d0..0xd1e7b
0x000d17d0: mov    QWORD PTR [rsp+0x10],rbx
0x000d17d5: mov    QWORD PTR [rsp+0x18],rsi
0x000d17da: mov    QWORD PTR [rsp+0x20],rdi
0x000d17df: push   rbp
0x000d17e0: push   r12
0x000d17e2: push   r13
0x000d17e4: push   r14
0x000d17e6: push   r15
0x000d17e8: lea    rbp,[rsp-0x37]
0x000d17ed: sub    rsp,0xd0
0x000d17f4: mov    rax,QWORD PTR [rip+0x17c4845]        # 0x141896040
0x000d17fb: xor    rax,rsp
0x000d17fe: mov    QWORD PTR [rbp+0x2f],rax
0x000d1802: mov    r13,rcx
0x000d1805: mov    r15d,0x3a
0x000d180b: cmp    DWORD PTR [rip+0x17c4a56],0x0        # 0x141896268
0x000d1812: jne    0x1400d181f
0x000d1814: mov    r15d,DWORD PTR [rip+0x22f5e59]        # 0x1423c7674
0x000d181b: add    r15d,0xfffffffc
0x000d181f: cmp    QWORD PTR [rcx+0x68],0x0
0x000d1824: jne    0x1400d185d
0x000d1826: lea    rdx,[rcx+0x18]
0x000d182a: lea    rbx,[rcx+0x58]
0x000d182e: cmp    rbx,rdx
0x000d1831: je     0x1400d1849
0x000d1833: mov    r8,QWORD PTR [rdx+0x10]
0x000d1837: cmp    QWORD PTR [rdx+0x18],0xf
0x000d183c: jbe    0x1400d1841
0x000d183e: mov    rdx,QWORD PTR [rdx]
0x000d1841: mov    rcx,rbx
0x000d1844: call   0x14006f860
0x000d1849: movsxd rax,r15d
0x000d184c: cmp    QWORD PTR [rbx+0x10],rax
0x000d1850: jbe    0x1400d185d
0x000d1852: mov    edx,r15d
0x000d1855: mov    rcx,rbx
0x000d1858: call   0x14052b330
0x000d185d: mov    rax,QWORD PTR [r13+0x80]
0x000d1864: sub    rax,QWORD PTR [r13+0x78]
0x000d1868: sar    rax,0x3
0x000d186c: test   rax,rax
0x000d186f: jne    0x1400d1e4e
0x000d1875: mov    rdi,QWORD PTR [r13+0xa8]
0x000d187c: mov    rbx,QWORD PTR [r13+0xa0]
0x000d1883: mov    rax,rdi
0x000d1886: sub    rax,rbx
0x000d1889: sar    rax,0x2
0x000d188d: xor    r12d,r12d
0x000d1890: test   rax,rax
0x000d1893: je     0x1400d19ec
0x000d1899: nop    DWORD PTR [rax+0x0]
0x000d18a0: cmp    rbx,rdi
0x000d18a3: jae    0x1400d19ec
0x000d18a9: mov    rcx,QWORD PTR [r13+0x8]
0x000d18ad: test   rcx,rcx
0x000d18b0: je     0x1400d18bc
0x000d18b2: mov    eax,DWORD PTR [rbx]
0x000d18b4: cmp    DWORD PTR [rcx],eax
0x000d18b6: je     0x1400d19e3
0x000d18bc: mov    edx,DWORD PTR [rbx]
0x000d18be: lea    rcx,[rip+0x2410313]        # 0x1424e1bd8
0x000d18c5: call   0x140072500
0x000d18ca: mov    rdx,rax
0x000d18cd: test   rax,rax
0x000d18d0: je     0x1400d19e3
0x000d18d6: cmp    BYTE PTR [rax+0x7a],0x0
0x000d18da: je     0x1400d19e3
0x000d18e0: xorps  xmm0,xmm0
0x000d18e3: movups XMMWORD PTR [rbp-0x11],xmm0
0x000d18e7: mov    QWORD PTR [rbp-0x1],0x7
0x000d18ef: mov    QWORD PTR [rbp+0x7],0xf
0x000d18f7: mov    rcx,QWORD PTR [rip+0x15166b2]        # 0x1415e7fb0 ; literal="Alias: "
0x000d18fe: mov    DWORD PTR [rbp-0x11],ecx
0x000d1901: movzx  ecx,WORD PTR [rip+0x15166ac]        # 0x1415e7fb4 ; literal="s: "
0x000d1908: mov    WORD PTR [rbp-0xd],cx
0x000d190c: movzx  eax,BYTE PTR [rip+0x15166a3]        # 0x1415e7fb6 ; literal=" "
0x000d1913: mov    BYTE PTR [rbp-0xb],al
0x000d1916: mov    BYTE PTR [rbp-0xa],0x0
0x000d191a: movups XMMWORD PTR [rbp+0xf],xmm0
0x000d191e: mov    QWORD PTR [rbp+0x1f],r12
0x000d1922: mov    QWORD PTR [rbp+0x27],0xf
0x000d192a: mov    BYTE PTR [rbp+0xf],0x0
0x000d192e: lea    rcx,[rdx+0x8]
0x000d1932: xor    r9d,r9d
0x000d1935: mov    r8b,0x1
0x000d1938: lea    rdx,[rbp+0xf]
0x000d193c: call   0x140a91760
0x000d1941: lea    rdx,[rbp+0xf]
0x000d1945: cmp    QWORD PTR [rbp+0x27],0xf
0x000d194a: cmova  rdx,QWORD PTR [rbp+0xf]
0x000d194f: mov    r8,QWORD PTR [rbp+0x1f]
0x000d1953: lea    rcx,[rbp-0x11]
0x000d1957: call   0x14006f9a0
0x000d195c: mov    ecx,0x20
0x000d1961: call   0x141534600
0x000d1966: mov    r14,rax
0x000d1969: xorps  xmm0,xmm0
0x000d196c: movups XMMWORD PTR [rax],xmm0
0x000d196f: mov    QWORD PTR [rax+0x10],r12
0x000d1973: mov    QWORD PTR [rax+0x18],0xf
0x000d197b: mov    BYTE PTR [rax],0x0
0x000d197e: mov    QWORD PTR [rbp-0x79],rax
0x000d1982: lea    rax,[rbp-0x11]
0x000d1986: cmp    r14,rax
0x000d1989: je     0x1400d19a5
0x000d198b: lea    rdx,[rbp-0x11]
0x000d198f: cmp    QWORD PTR [rbp+0x7],0xf
0x000d1994: cmova  rdx,QWORD PTR [rbp-0x11]
0x000d1999: mov    r8,QWORD PTR [rbp-0x1]
0x000d199d: mov    rcx,r14
0x000d19a0: call   0x14006f860
0x000d19a5: mov    rdx,QWORD PTR [r13+0x80]
0x000d19ac: cmp    rdx,QWORD PTR [r13+0x88]
0x000d19b3: je     0x1400d19c2
0x000d19b5: mov    QWORD PTR [rdx],r14
0x000d19b8: add    QWORD PTR [r13+0x80],0x8
0x000d19c0: jmp    0x1400d19d0
0x000d19c2: lea    r8,[rbp-0x79]
0x000d19c6: lea    rcx,[r13+0x78]
0x000d19ca: call   0x1400bacc0
0x000d19cf: nop
0x000d19d0: lea    rcx,[rbp+0xf]
0x000d19d4: call   0x14006f7e0
0x000d19d9: nop
0x000d19da: lea    rcx,[rbp-0x11]
0x000d19de: call   0x14006f7e0
0x000d19e3: add    rbx,0x4
0x000d19e7: jmp    0x1400d18a0
0x000d19ec: mov    rax,QWORD PTR [r13+0xb8]
0x000d19f3: test   rax,rax
0x000d19f6: je     0x1400d1bb5
0x000d19fc: mov    ecx,0x20
0x000d1a01: cmp    QWORD PTR [rax+0x90],r13
0x000d1a08: jne    0x1400d1a72
0x000d1a0a: call   0x141534600
0x000d1a0f: mov    rbx,rax
0x000d1a12: xorps  xmm0,xmm0
0x000d1a15: movups XMMWORD PTR [rax],xmm0
0x000d1a18: mov    QWORD PTR [rax+0x10],r12
0x000d1a1c: mov    QWORD PTR [rax+0x18],0xf
0x000d1a24: mov    BYTE PTR [rax],0x0
0x000d1a27: mov    QWORD PTR [rbp-0x79],rax
0x000d1a2b: mov    r8d,0x1d
0x000d1a31: lea    rdx,[rip+0x1516538]        # 0x1415e7f70 ; literal="Highest known in organization"
0x000d1a38: mov    rcx,rax
0x000d1a3b: call   0x14006f860
0x000d1a40: mov    rdx,QWORD PTR [r13+0x80]
0x000d1a47: cmp    rdx,QWORD PTR [r13+0x88]
0x000d1a4e: je     0x1400d1a60
0x000d1a50: mov    QWORD PTR [rdx],rbx
0x000d1a53: add    QWORD PTR [r13+0x80],0x8
0x000d1a5b: jmp    0x1400d1bb5
0x000d1a60: lea    r8,[rbp-0x79]
0x000d1a64: lea    rcx,[r13+0x78]
0x000d1a68: call   0x1400bacc0
0x000d1a6d: jmp    0x1400d1bb5
0x000d1a72: xorps  xmm0,xmm0
0x000d1a75: movups XMMWORD PTR [rbp-0x71],xmm0
0x000d1a79: mov    QWORD PTR [rbp-0x61],r12
0x000d1a7d: mov    QWORD PTR [rbp-0x59],r12
0x000d1a81: call   0x140070760
0x000d1a86: mov    QWORD PTR [rbp-0x71],rax
0x000d1a8a: mov    QWORD PTR [rbp-0x61],0x19
0x000d1a92: mov    QWORD PTR [rbp-0x59],0x1f
0x000d1a9a: movups xmm0,XMMWORD PTR [rip+0x15164ef]        # 0x1415e7f90 ; literal="Associated Organization: "
0x000d1aa1: movups XMMWORD PTR [rax],xmm0
0x000d1aa4: movsd  xmm0,QWORD PTR [rip+0x15164f4]        # 0x1415e7fa0 ; literal="ization: "
0x000d1aac: movsd  QWORD PTR [rax+0x10],xmm0
0x000d1ab1: movzx  ecx,BYTE PTR [rip+0x15164f0]        # 0x1415e7fa8 ; literal=" "
0x000d1ab8: mov    BYTE PTR [rax+0x18],cl
0x000d1abb: mov    BYTE PTR [rax+0x19],0x0
0x000d1abf: mov    rdx,QWORD PTR [r13+0xb8]
0x000d1ac6: add    rdx,0x18
0x000d1aca: mov    r8,QWORD PTR [rdx+0x10]
0x000d1ace: cmp    QWORD PTR [rdx+0x18],0xf
0x000d1ad3: jbe    0x1400d1ad8
0x000d1ad5: mov    rdx,QWORD PTR [rdx]
0x000d1ad8: lea    rcx,[rbp-0x71]
0x000d1adc: call   0x14006f9a0
0x000d1ae1: movsxd rdx,r15d
0x000d1ae4: mov    rax,QWORD PTR [rbp-0x61]
0x000d1ae8: cmp    rax,rdx
0x000d1aeb: jbe    0x1400d1b03
0x000d1aed: mov    QWORD PTR [rbp-0x61],rdx
0x000d1af1: lea    rax,[rbp-0x71]
0x000d1af5: cmp    QWORD PTR [rbp-0x59],0xf
0x000d1afa: cmova  rax,QWORD PTR [rbp-0x71]
0x000d1aff: mov    BYTE PTR [rax+rdx*1],0x0
0x000d1b03: mov    ecx,0x20
0x000d1b08: call   0x141534600
0x000d1b0d: mov    rbx,rax
0x000d1b10: xorps  xmm0,xmm0
0x000d1b13: movups XMMWORD PTR [rax],xmm0
0x000d1b16: mov    QWORD PTR [rax+0x10],r12
0x000d1b1a: mov    QWORD PTR [rax+0x18],0xf
0x000d1b22: mov    BYTE PTR [rax],0x0
0x000d1b25: mov    QWORD PTR [rbp-0x79],rax
0x000d1b29: lea    rax,[rbp-0x71]
0x000d1b2d: cmp    rbx,rax
0x000d1b30: je     0x1400d1b4c
0x000d1b32: lea    rdx,[rbp-0x71]
0x000d1b36: cmp    QWORD PTR [rbp-0x59],0xf
0x000d1b3b: cmova  rdx,QWORD PTR [rbp-0x71]
0x000d1b40: mov    r8,QWORD PTR [rbp-0x61]
0x000d1b44: mov    rcx,rbx
0x000d1b47: call   0x14006f860
0x000d1b4c: mov    rdx,QWORD PTR [r13+0x80]
0x000d1b53: cmp    rdx,QWORD PTR [r13+0x88]
0x000d1b5a: je     0x1400d1b69
0x000d1b5c: mov    QWORD PTR [rdx],rbx
0x000d1b5f: add    QWORD PTR [r13+0x80],0x8
0x000d1b67: jmp    0x1400d1b77
0x000d1b69: lea    r8,[rbp-0x79]
0x000d1b6d: lea    rcx,[r13+0x78]
0x000d1b71: call   0x1400bacc0
0x000d1b76: nop
0x000d1b77: mov    rdx,QWORD PTR [rbp-0x59]
0x000d1b7b: cmp    rdx,0xf
0x000d1b7f: jbe    0x1400d1bb5
0x000d1b81: inc    rdx
0x000d1b84: mov    rcx,QWORD PTR [rbp-0x71]
0x000d1b88: mov    rax,rcx
0x000d1b8b: cmp    rdx,0x1000
0x000d1b92: jb     0x1400d1bb0
0x000d1b94: add    rdx,0x27
0x000d1b98: mov    rcx,QWORD PTR [rcx-0x8]
0x000d1b9c: sub    rax,rcx
0x000d1b9f: add    rax,0xfffffffffffffff8
0x000d1ba3: cmp    rax,0x1f
0x000d1ba7: jbe    0x1400d1bb0
0x000d1ba9: call   QWORD PTR [rip+0x150eef1]        # 0x1415e0aa0
0x000d1baf: int3
0x000d1bb0: call   0x1415345f0
0x000d1bb5: mov    rbx,QWORD PTR [r13+0xc0]
0x000d1bbc: mov    rdi,QWORD PTR [r13+0xc8]
0x000d1bc3: movsxd r15,r15d
0x000d1bc6: cmp    rbx,rdi
0x000d1bc9: jae    0x1400d1d2a
0x000d1bcf: mov    rax,QWORD PTR [r13+0xb8]
0x000d1bd6: cmp    QWORD PTR [rbx],rax
0x000d1bd9: je     0x1400d1d1a
0x000d1bdf: xorps  xmm0,xmm0
0x000d1be2: movups XMMWORD PTR [rbp-0x51],xmm0
0x000d1be6: mov    QWORD PTR [rbp-0x41],r12
0x000d1bea: mov    QWORD PTR [rbp-0x39],r12
0x000d1bee: mov    ecx,0x20
0x000d1bf3: call   0x140070760
0x000d1bf8: mov    QWORD PTR [rbp-0x51],rax
0x000d1bfc: mov    QWORD PTR [rbp-0x41],0x19
0x000d1c04: mov    QWORD PTR [rbp-0x39],0x1f
0x000d1c0c: movups xmm0,XMMWORD PTR [rip+0x151637d]        # 0x1415e7f90 ; literal="Associated Organization: "
0x000d1c13: movups XMMWORD PTR [rax],xmm0
0x000d1c16: movsd  xmm0,QWORD PTR [rip+0x1516382]        # 0x1415e7fa0 ; literal="ization: "
0x000d1c1e: movsd  QWORD PTR [rax+0x10],xmm0
0x000d1c23: movzx  ecx,BYTE PTR [rip+0x151637e]        # 0x1415e7fa8 ; literal=" "
0x000d1c2a: mov    BYTE PTR [rax+0x18],cl
0x000d1c2d: mov    BYTE PTR [rax+0x19],0x0
0x000d1c31: mov    rdx,QWORD PTR [rbx]
0x000d1c34: add    rdx,0x18
0x000d1c38: mov    r8,QWORD PTR [rdx+0x10]
0x000d1c3c: cmp    QWORD PTR [rdx+0x18],0xf
0x000d1c41: jbe    0x1400d1c46
0x000d1c43: mov    rdx,QWORD PTR [rdx]
0x000d1c46: lea    rcx,[rbp-0x51]
0x000d1c4a: call   0x14006f9a0
0x000d1c4f: mov    rax,QWORD PTR [rbp-0x41]
0x000d1c53: cmp    rax,r15
0x000d1c56: jbe    0x1400d1c6f
0x000d1c58: mov    QWORD PTR [rbp-0x41],r15
0x000d1c5c: lea    rax,[rbp-0x51]
0x000d1c60: cmp    QWORD PTR [rbp-0x39],0xf
0x000d1c65: cmova  rax,QWORD PTR [rbp-0x51]
0x000d1c6a: mov    BYTE PTR [rax+r15*1],0x0
0x000d1c6f: mov    ecx,0x20
0x000d1c74: call   0x141534600
0x000d1c79: mov    r14,rax
0x000d1c7c: xorps  xmm0,xmm0
0x000d1c7f: movups XMMWORD PTR [rax],xmm0
0x000d1c82: mov    QWORD PTR [rax+0x10],r12
0x000d1c86: mov    QWORD PTR [rax+0x18],0xf
0x000d1c8e: mov    BYTE PTR [rax],0x0
0x000d1c91: mov    QWORD PTR [rbp-0x79],rax
0x000d1c95: lea    rax,[rbp-0x51]
0x000d1c99: cmp    r14,rax
0x000d1c9c: je     0x1400d1cb8
0x000d1c9e: lea    rdx,[rbp-0x51]
0x000d1ca2: cmp    QWORD PTR [rbp-0x39],0xf
0x000d1ca7: cmova  rdx,QWORD PTR [rbp-0x51]
0x000d1cac: mov    r8,QWORD PTR [rbp-0x41]
0x000d1cb0: mov    rcx,r14
0x000d1cb3: call   0x14006f860
0x000d1cb8: mov    rdx,QWORD PTR [r13+0x80]
0x000d1cbf: cmp    rdx,QWORD PTR [r13+0x88]
0x000d1cc6: je     0x1400d1cd5
0x000d1cc8: mov    QWORD PTR [rdx],r14
0x000d1ccb: add    QWORD PTR [r13+0x80],0x8
0x000d1cd3: jmp    0x1400d1ce3
0x000d1cd5: lea    r8,[rbp-0x79]
0x000d1cd9: lea    rcx,[r13+0x78]
0x000d1cdd: call   0x1400bacc0
0x000d1ce2: nop
0x000d1ce3: mov    rdx,QWORD PTR [rbp-0x39]
0x000d1ce7: cmp    rdx,0xf
0x000d1ceb: jbe    0x1400d1d1a
0x000d1ced: inc    rdx
0x000d1cf0: mov    rcx,QWORD PTR [rbp-0x51]
0x000d1cf4: mov    rax,rcx
0x000d1cf7: cmp    rdx,0x1000
0x000d1cfe: jb     0x1400d1d15
0x000d1d00: add    rdx,0x27
0x000d1d04: mov    rcx,QWORD PTR [rcx-0x8]
0x000d1d08: sub    rax,rcx
0x000d1d0b: add    rax,0xfffffffffffffff8
0x000d1d0f: cmp    rax,0x1f
0x000d1d13: ja     0x1400d1d23
0x000d1d15: call   0x1415345f0
0x000d1d1a: add    rbx,0x8
0x000d1d1e: jmp    0x1400d1bc6
0x000d1d23: call   QWORD PTR [rip+0x150ed77]        # 0x1415e0aa0
0x000d1d29: int3
0x000d1d2a: mov    rbx,QWORD PTR [r13+0xd8]
0x000d1d31: mov    rdi,QWORD PTR [r13+0xe0]
0x000d1d38: nop    DWORD PTR [rax+rax*1+0x0]
0x000d1d40: cmp    rbx,rdi
0x000d1d43: jae    0x1400d1e4e
0x000d1d49: xorps  xmm0,xmm0
0x000d1d4c: movups XMMWORD PTR [rbp-0x31],xmm0
0x000d1d50: mov    QWORD PTR [rbp-0x21],r12
0x000d1d54: mov    QWORD PTR [rbp-0x19],r12
0x000d1d58: mov    ecx,0x20
0x000d1d5d: call   0x140070760
0x000d1d62: mov    QWORD PTR [rbp-0x31],rax
0x000d1d66: mov    QWORD PTR [rbp-0x21],0x11
0x000d1d6e: mov    QWORD PTR [rbp-0x19],0x1f
0x000d1d76: movups xmm0,XMMWORD PTR [rip+0x151624b]        # 0x1415e7fc8 ; literal="Associated Plot: "
0x000d1d7d: movups XMMWORD PTR [rax],xmm0
0x000d1d80: movzx  ecx,BYTE PTR [rip+0x1516251]        # 0x1415e7fd8 ; literal=" "
0x000d1d87: mov    BYTE PTR [rax+0x10],cl
0x000d1d8a: mov    BYTE PTR [rax+0x11],0x0
0x000d1d8e: mov    rdx,QWORD PTR [rbx]
0x000d1d91: mov    r8,QWORD PTR [rdx+0x10]
0x000d1d95: cmp    QWORD PTR [rdx+0x18],0xf
0x000d1d9a: jbe    0x1400d1d9f
0x000d1d9c: mov    rdx,QWORD PTR [rdx]
0x000d1d9f: lea    rcx,[rbp-0x31]
0x000d1da3: call   0x14006f9a0
0x000d1da8: mov    rax,QWORD PTR [rbp-0x21]
0x000d1dac: cmp    rax,r15
0x000d1daf: jbe    0x1400d1dc8
0x000d1db1: mov    QWORD PTR [rbp-0x21],r15
0x000d1db5: lea    rax,[rbp-0x31]
0x000d1db9: cmp    QWORD PTR [rbp-0x19],0xf
0x000d1dbe: cmova  rax,QWORD PTR [rbp-0x31]
0x000d1dc3: mov    BYTE PTR [rax+r15*1],0x0
0x000d1dc8: mov    ecx,0x20
0x000d1dcd: call   0x141534600
0x000d1dd2: mov    r14,rax
0x000d1dd5: xorps  xmm0,xmm0
0x000d1dd8: movups XMMWORD PTR [rax],xmm0
0x000d1ddb: mov    QWORD PTR [rax+0x10],r12
0x000d1ddf: mov    QWORD PTR [rax+0x18],0xf
0x000d1de7: mov    BYTE PTR [rax],0x0
0x000d1dea: mov    QWORD PTR [rbp-0x79],rax
0x000d1dee: lea    rax,[rbp-0x31]
0x000d1df2: cmp    r14,rax
0x000d1df5: je     0x1400d1e11
0x000d1df7: lea    rdx,[rbp-0x31]
0x000d1dfb: cmp    QWORD PTR [rbp-0x19],0xf
0x000d1e00: cmova  rdx,QWORD PTR [rbp-0x31]
0x000d1e05: mov    r8,QWORD PTR [rbp-0x21]
0x000d1e09: mov    rcx,r14
0x000d1e0c: call   0x14006f860
0x000d1e11: mov    rdx,QWORD PTR [r13+0x80]
0x000d1e18: cmp    rdx,QWORD PTR [r13+0x88]
0x000d1e1f: je     0x1400d1e2e
0x000d1e21: mov    QWORD PTR [rdx],r14
0x000d1e24: add    QWORD PTR [r13+0x80],0x8
0x000d1e2c: jmp    0x1400d1e3c
0x000d1e2e: lea    r8,[rbp-0x79]
0x000d1e32: lea    rcx,[r13+0x78]
0x000d1e36: call   0x1400bacc0
0x000d1e3b: nop
0x000d1e3c: lea    rcx,[rbp-0x31]
0x000d1e40: call   0x14006f7e0
0x000d1e45: add    rbx,0x8
0x000d1e49: jmp    0x1400d1d40
0x000d1e4e: mov    rcx,QWORD PTR [rbp+0x2f]
0x000d1e52: xor    rcx,rsp
0x000d1e55: call   0x1415345d0
0x000d1e5a: lea    r11,[rsp+0xd0]
0x000d1e62: mov    rbx,QWORD PTR [r11+0x38]
0x000d1e66: mov    rsi,QWORD PTR [r11+0x40]
0x000d1e6a: mov    rdi,QWORD PTR [r11+0x48]
0x000d1e6e: mov    rsp,r11
0x000d1e71: pop    r15
0x000d1e73: pop    r14
0x000d1e75: pop    r13
0x000d1e77: pop    r12
0x000d1e79: pop    rbp
0x000d1e7a: ret
