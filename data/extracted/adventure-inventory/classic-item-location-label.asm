# classic PE:6a70b91c:0270a000; item-location-label; RVA 0x138e870..0x138f664
0x0138e870: rex push rbp
0x0138e872: push   rbx
0x0138e873: push   rsi
0x0138e874: push   rdi
0x0138e875: push   r12
0x0138e877: push   r14
0x0138e879: push   r15
0x0138e87b: mov    rbp,rsp
0x0138e87e: sub    rsp,0x80
0x0138e885: mov    rax,QWORD PTR [rip+0x5077b4]        # 0x141896040
0x0138e88c: xor    rax,rsp
0x0138e88f: mov    QWORD PTR [rbp-0x10],rax
0x0138e893: mov    rsi,r8
0x0138e896: mov    rdi,rdx
0x0138e899: mov    rbx,rcx
0x0138e89c: xor    r14d,r14d
0x0138e89f: mov    QWORD PTR [rdx+0x10],r14
0x0138e8a3: mov    rax,rdx
0x0138e8a6: cmp    QWORD PTR [rdx+0x18],0xf
0x0138e8ab: jbe    0x14138e8b0
0x0138e8ad: mov    rax,QWORD PTR [rdx]
0x0138e8b0: mov    BYTE PTR [rax],r14b
0x0138e8b3: xorps  xmm0,xmm0
0x0138e8b6: movups XMMWORD PTR [rbp-0x50],xmm0
0x0138e8ba: mov    QWORD PTR [rbp-0x40],r14
0x0138e8be: mov    QWORD PTR [rbp-0x38],0xf
0x0138e8c6: mov    BYTE PTR [rbp-0x50],r14b
0x0138e8ca: movsx  rax,WORD PTR [r8+0x8]
0x0138e8cf: cmp    eax,0xb
0x0138e8d2: ja     0x14138f636
0x0138e8d8: lea    rdx,[rip+0xfffffffffec71721]        # 0x140000000
0x0138e8df: mov    ecx,DWORD PTR [rdx+rax*4+0x138f664]
0x0138e8e6: add    rcx,rdx
0x0138e8e9: jmp    rcx
0x0138e8eb: cmp    DWORD PTR [rip+0x507976],0x0        # 0x141896268
0x0138e8f2: jne    0x14138e92d
0x0138e8f4: mov    r9d,0x99
0x0138e8fa: movzx  r8d,WORD PTR [rbx+0x12c]
0x0138e902: movzx  edx,WORD PTR [rbx+0xa4]
0x0138e909: lea    rcx,[rip+0x1158028]        # 0x1424e6938
0x0138e910: call   0x1400727e0
0x0138e915: test   al,al
0x0138e917: je     0x14138e92d
0x0138e919: lea    rdx,[rip+0x3f0c10]        # 0x14177f530 ; literal="In Mouth"
0x0138e920: mov    rcx,rdi
0x0138e923: call   0x14006f510
0x0138e928: jmp    0x14138f636
0x0138e92d: mov    rcx,QWORD PTR [rbx+0x4d8]
0x0138e934: test   rcx,rcx
0x0138e937: je     0x14138e96b
0x0138e939: mov    edx,0xef
0x0138e93e: movzx  eax,WORD PTR [rcx+0x14]
0x0138e942: sub    ax,dx
0x0138e945: mov    edx,0xfffd
0x0138e94a: test   dx,ax
0x0138e94d: jne    0x14138e95f
0x0138e94f: call   0x140d06a70
0x0138e954: cmp    rax,QWORD PTR [rsi]
0x0138e957: jne    0x14138e95f
0x0138e959: mov    r14d,0x1
0x0138e95f: test   r14d,r14d
0x0138e962: lea    rdx,[rip+0x3f0bbf]        # 0x14177f528 ; literal="Hidden"
0x0138e969: jne    0x14138e972
0x0138e96b: lea    rdx,[rip+0x3f0bda]        # 0x14177f54c ; literal="Hauled"
0x0138e972: mov    rcx,rdi
0x0138e975: call   0x14006f510
0x0138e97a: jmp    0x14138f636
0x0138e97f: movsx  rcx,WORD PTR [r8+0xa]
0x0138e984: test   cx,cx
0x0138e987: js     0x14138eb91
0x0138e98d: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138e994: mov    rdx,QWORD PTR [rax]
0x0138e997: mov    rsi,rcx
0x0138e99a: mov    rcx,QWORD PTR [rax+0x8]
0x0138e99e: sub    rcx,rdx
0x0138e9a1: sar    rcx,0x3
0x0138e9a5: cmp    rsi,rcx
0x0138e9a8: jae    0x14138eb91
0x0138e9ae: mov    rax,QWORD PTR [rdx+rsi*8]
0x0138e9b2: mov    rcx,QWORD PTR [rax+0x98]
0x0138e9b9: mov    rax,QWORD PTR [rax+0x90]
0x0138e9c0: mov    QWORD PTR [rdi+0x10],r14
0x0138e9c4: mov    rdx,QWORD PTR [rdi+0x18]
0x0138e9c8: sub    rcx,rax
0x0138e9cb: sar    rcx,0x3
0x0138e9cf: mov    rax,rdi
0x0138e9d2: test   rcx,rcx
0x0138e9d5: je     0x14138eb42
0x0138e9db: cmp    rdx,0xf
0x0138e9df: jbe    0x14138e9e4
0x0138e9e1: mov    rax,QWORD PTR [rdi]
0x0138e9e4: mov    BYTE PTR [rax],0x0
0x0138e9e7: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138e9ee: mov    rcx,QWORD PTR [rax]
0x0138e9f1: mov    rax,QWORD PTR [rcx+rsi*8]
0x0138e9f5: cmp    DWORD PTR [rax+0x84],0x1
0x0138e9fc: jg     0x14138ea07
0x0138e9fe: mov    rax,QWORD PTR [rax+0x90]
0x0138ea05: jmp    0x14138ea0e
0x0138ea07: mov    rax,QWORD PTR [rax+0xa8]
0x0138ea0e: mov    rdx,QWORD PTR [rax]
0x0138ea11: cmp    QWORD PTR [rdx+0x18],0xf
0x0138ea16: mov    r8,QWORD PTR [rdx+0x10]
0x0138ea1a: jbe    0x14138ea1f
0x0138ea1c: mov    rdx,QWORD PTR [rdx]
0x0138ea1f: mov    rcx,rdi
0x0138ea22: call   0x14006f9a0
0x0138ea27: mov    rcx,rdi
0x0138ea2a: call   0x14052b070
0x0138ea2f: jmp    0x14138f636
0x0138ea34: mov    rcx,QWORD PTR [r8]
0x0138ea37: mov    rax,QWORD PTR [rcx]
0x0138ea3a: mov    edx,DWORD PTR [rbx+0x6b0]
0x0138ea40: call   QWORD PTR [rax+0x380]
0x0138ea46: test   al,al
0x0138ea48: je     0x14138ea6a
0x0138ea4a: mov    rcx,rbx
0x0138ea4d: call   0x141359d60
0x0138ea52: test   al,al
0x0138ea54: jne    0x14138ea6a
0x0138ea56: lea    rdx,[rip+0x3f0ae3]        # 0x14177f540 ; literal="Multigrasp"
0x0138ea5d: mov    rcx,rdi
0x0138ea60: call   0x14006f4f0
0x0138ea65: jmp    0x14138f636
0x0138ea6a: mov    WORD PTR [rsp+0x20],0x2
0x0138ea71: xor    r9d,r9d
0x0138ea74: movzx  r8d,WORD PTR [rsi+0xa]
0x0138ea79: mov    rdx,rdi
0x0138ea7c: mov    rcx,rbx
0x0138ea7f: call   0x14132f540
0x0138ea84: mov    rcx,rdi
0x0138ea87: call   0x14052b070
0x0138ea8c: jmp    0x14138f636
0x0138ea91: movsx  rcx,WORD PTR [r8+0xa]
0x0138ea96: test   cx,cx
0x0138ea99: js     0x14138eb91
0x0138ea9f: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138eaa6: mov    rdx,QWORD PTR [rax]
0x0138eaa9: mov    rsi,rcx
0x0138eaac: mov    rcx,QWORD PTR [rax+0x8]
0x0138eab0: sub    rcx,rdx
0x0138eab3: sar    rcx,0x3
0x0138eab7: cmp    rsi,rcx
0x0138eaba: jae    0x14138eb91
0x0138eac0: mov    rax,QWORD PTR [rdx+rsi*8]
0x0138eac4: mov    rcx,QWORD PTR [rax+0x98]
0x0138eacb: mov    rax,QWORD PTR [rax+0x90]
0x0138ead2: mov    QWORD PTR [rdi+0x10],r14
0x0138ead6: mov    rdx,QWORD PTR [rdi+0x18]
0x0138eada: sub    rcx,rax
0x0138eadd: sar    rcx,0x3
0x0138eae1: mov    rax,rdi
0x0138eae4: test   rcx,rcx
0x0138eae7: je     0x14138eb42
0x0138eae9: cmp    rdx,0xf
0x0138eaed: jbe    0x14138eaf2
0x0138eaef: mov    rax,QWORD PTR [rdi]
0x0138eaf2: mov    BYTE PTR [rax],0x0
0x0138eaf5: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138eafc: mov    rcx,QWORD PTR [rax]
0x0138eaff: mov    rax,QWORD PTR [rcx+rsi*8]
0x0138eb03: cmp    DWORD PTR [rax+0x84],0x1
0x0138eb0a: jg     0x14138eb15
0x0138eb0c: mov    rax,QWORD PTR [rax+0x90]
0x0138eb13: jmp    0x14138eb1c
0x0138eb15: mov    rax,QWORD PTR [rax+0xa8]
0x0138eb1c: mov    rdx,QWORD PTR [rax]
0x0138eb1f: mov    r8,QWORD PTR [rdx+0x10]
0x0138eb23: cmp    QWORD PTR [rdx+0x18],0xf
0x0138eb28: jbe    0x14138eb2d
0x0138eb2a: mov    rdx,QWORD PTR [rdx]
0x0138eb2d: mov    rcx,rdi
0x0138eb30: call   0x14006f9a0
0x0138eb35: mov    rcx,rdi
0x0138eb38: call   0x14052b070
0x0138eb3d: jmp    0x14138f636
0x0138eb42: cmp    rdx,0xf
0x0138eb46: jbe    0x14138eb4b
0x0138eb48: mov    rax,QWORD PTR [rdi]
0x0138eb4b: mov    BYTE PTR [rax],0x0
0x0138eb4e: mov    r8d,0x9
0x0138eb54: lea    rdx,[rip+0x2ed295]        # 0x14167bdf0 ; literal="body part"
0x0138eb5b: mov    rcx,rdi
0x0138eb5e: call   0x14006f9a0
0x0138eb63: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138eb6a: mov    rcx,QWORD PTR [rax]
0x0138eb6d: mov    rax,QWORD PTR [rcx+rsi*8]
0x0138eb71: cmp    DWORD PTR [rax+0x84],0x1
0x0138eb78: jle    0x14138eba6
0x0138eb7a: mov    dl,0x73
0x0138eb7c: mov    rcx,rdi
0x0138eb7f: call   0x1400b9b10
0x0138eb84: mov    rcx,rdi
0x0138eb87: call   0x14052b070
0x0138eb8c: jmp    0x14138f636
0x0138eb91: mov    r8d,0x9
0x0138eb97: lea    rdx,[rip+0x2ed252]        # 0x14167bdf0 ; literal="body part"
0x0138eb9e: mov    rcx,rdi
0x0138eba1: call   0x14006f860
0x0138eba6: mov    rcx,rdi
0x0138eba9: call   0x14052b070
0x0138ebae: jmp    0x14138f636
0x0138ebb3: mov    r8d,0x3
0x0138ebb9: lea    rdx,[rip+0x26a500]        # 0x1415f90c0 ; literal="In "
0x0138ebc0: mov    rcx,rdi
0x0138ebc3: call   0x14006f860
0x0138ebc8: movsx  rcx,WORD PTR [rsi+0xa]
0x0138ebcd: test   cx,cx
0x0138ebd0: js     0x14138eda7
0x0138ebd6: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138ebdd: mov    rdx,QWORD PTR [rax]
0x0138ebe0: mov    rsi,rcx
0x0138ebe3: mov    rcx,QWORD PTR [rax+0x8]
0x0138ebe7: sub    rcx,rdx
0x0138ebea: sar    rcx,0x3
0x0138ebee: cmp    rsi,rcx
0x0138ebf1: jae    0x14138eda7
0x0138ebf7: mov    rcx,QWORD PTR [rdx+rsi*8]
0x0138ebfb: mov    rax,QWORD PTR [rcx+0x98]
0x0138ec02: sub    rax,QWORD PTR [rcx+0x90]
0x0138ec09: sar    rax,0x3
0x0138ec0d: mov    QWORD PTR [rbp-0x40],r14
0x0138ec11: test   rax,rax
0x0138ec14: lea    rax,[rbp-0x50]
0x0138ec18: je     0x14138ec6d
0x0138ec1a: cmp    QWORD PTR [rbp-0x38],0xf
0x0138ec1f: cmova  rax,QWORD PTR [rbp-0x50]
0x0138ec24: mov    BYTE PTR [rax],0x0
0x0138ec27: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138ec2e: mov    rcx,QWORD PTR [rax]
0x0138ec31: mov    rax,QWORD PTR [rcx+rsi*8]
0x0138ec35: cmp    DWORD PTR [rax+0x84],0x1
0x0138ec3c: jg     0x14138ec47
0x0138ec3e: mov    rax,QWORD PTR [rax+0x90]
0x0138ec45: jmp    0x14138ec4e
0x0138ec47: mov    rax,QWORD PTR [rax+0xa8]
0x0138ec4e: mov    rdx,QWORD PTR [rax]
0x0138ec51: cmp    QWORD PTR [rdx+0x18],0xf
0x0138ec56: mov    r8,QWORD PTR [rdx+0x10]
0x0138ec5a: jbe    0x14138ec5f
0x0138ec5c: mov    rdx,QWORD PTR [rdx]
0x0138ec5f: lea    rcx,[rbp-0x50]
0x0138ec63: call   0x14006f9a0
0x0138ec68: jmp    0x14138ee7d
0x0138ec6d: cmp    QWORD PTR [rbp-0x38],0xf
0x0138ec72: cmova  rax,QWORD PTR [rbp-0x50]
0x0138ec77: mov    BYTE PTR [rax],0x0
0x0138ec7a: mov    r8d,0x9
0x0138ec80: lea    rdx,[rip+0x2ed169]        # 0x14167bdf0 ; literal="body part"
0x0138ec87: lea    rcx,[rbp-0x50]
0x0138ec8b: call   0x14006f9a0
0x0138ec90: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138ec97: mov    rcx,QWORD PTR [rax]
0x0138ec9a: mov    rax,QWORD PTR [rcx+rsi*8]
0x0138ec9e: cmp    DWORD PTR [rax+0x84],0x1
0x0138eca5: jle    0x14138ee7d
0x0138ecab: mov    rsi,QWORD PTR [rbp-0x40]
0x0138ecaf: mov    r14,QWORD PTR [rbp-0x38]
0x0138ecb3: cmp    rsi,r14
0x0138ecb6: jae    0x14138ecd8
0x0138ecb8: lea    rax,[rsi+0x1]
0x0138ecbc: mov    QWORD PTR [rbp-0x40],rax
0x0138ecc0: lea    rax,[rbp-0x50]
0x0138ecc4: cmp    r14,0xf
0x0138ecc8: cmova  rax,QWORD PTR [rbp-0x50]
0x0138eccd: mov    WORD PTR [rax+rsi*1],0x73
0x0138ecd3: jmp    0x14138ee7d
0x0138ecd8: movabs rbx,0x7fffffffffffffff
0x0138ece2: mov    rax,rbx
0x0138ece5: sub    rax,rsi
0x0138ece8: cmp    rax,0x1
0x0138ecec: jb     0x14138f65d
0x0138ecf2: lea    r12,[rsi+0x1]
0x0138ecf6: mov    rcx,r12
0x0138ecf9: or     rcx,0xf
0x0138ecfd: cmp    rcx,rbx
0x0138ed00: ja     0x14138ed21
0x0138ed02: mov    rdx,r14
0x0138ed05: shr    rdx,1
0x0138ed08: mov    rax,rbx
0x0138ed0b: sub    rax,rdx
0x0138ed0e: cmp    r14,rax
0x0138ed11: ja     0x14138ed21
0x0138ed13: lea    rax,[r14+rdx*1]
0x0138ed17: mov    rbx,rcx
0x0138ed1a: cmp    rcx,rax
0x0138ed1d: cmovb  rbx,rax
0x0138ed21: lea    rcx,[rbx+0x1]
0x0138ed25: call   0x140070760
0x0138ed2a: mov    r15,rax
0x0138ed2d: cmp    r14,0xf
0x0138ed31: mov    rcx,rax
0x0138ed34: mov    r8,rsi
0x0138ed37: mov    QWORD PTR [rbp-0x38],rbx
0x0138ed3b: mov    QWORD PTR [rbp-0x40],r12
0x0138ed3f: jbe    0x14138ed8e
0x0138ed41: mov    rbx,QWORD PTR [rbp-0x50]
0x0138ed45: mov    rdx,rbx
0x0138ed48: call   0x1415359e8
0x0138ed4d: lea    rdx,[r14+0x1]
0x0138ed51: cmp    rdx,0x1000
0x0138ed58: mov    WORD PTR [rsi+r15*1],0x73
0x0138ed5f: jb     0x14138ed7d
0x0138ed61: add    rdx,0x27
0x0138ed65: mov    rcx,QWORD PTR [rbx-0x8]
0x0138ed69: sub    rbx,rcx
0x0138ed6c: lea    rax,[rbx-0x8]
0x0138ed70: cmp    rax,0x1f
0x0138ed74: ja     0x14138f566
0x0138ed7a: mov    rbx,rcx
0x0138ed7d: mov    rcx,rbx
0x0138ed80: call   0x1415345f0
0x0138ed85: mov    QWORD PTR [rbp-0x50],r15
0x0138ed89: jmp    0x14138ee7d
0x0138ed8e: lea    rdx,[rbp-0x50]
0x0138ed92: call   0x1415359e8
0x0138ed97: mov    WORD PTR [rsi+r15*1],0x73
0x0138ed9e: mov    QWORD PTR [rbp-0x50],r15
0x0138eda2: jmp    0x14138ee7d
0x0138eda7: mov    rsi,QWORD PTR [rbp-0x38]
0x0138edab: cmp    rsi,0x9
0x0138edaf: jb     0x14138ede4
0x0138edb1: lea    rbx,[rbp-0x50]
0x0138edb5: cmp    rsi,0xf
0x0138edb9: cmova  rbx,QWORD PTR [rbp-0x50]
0x0138edbe: mov    QWORD PTR [rbp-0x40],0x9
0x0138edc6: mov    r8d,0x9
0x0138edcc: lea    rdx,[rip+0x2ed01d]        # 0x14167bdf0 ; literal="body part"
0x0138edd3: mov    rcx,rbx
0x0138edd6: call   0x141535d8a
0x0138eddb: mov    BYTE PTR [rbx+0x9],0x0
0x0138eddf: jmp    0x14138ee7d
0x0138ede4: mov    rcx,rsi
0x0138ede7: shr    rcx,1
0x0138edea: movabs rbx,0x7fffffffffffffff
0x0138edf4: mov    rax,rbx
0x0138edf7: sub    rax,rcx
0x0138edfa: cmp    rsi,rax
0x0138edfd: ja     0x14138ee0f
0x0138edff: lea    rax,[rsi+rcx*1]
0x0138ee03: mov    ebx,0xf
0x0138ee08: cmp    rax,rbx
0x0138ee0b: cmova  rbx,rax
0x0138ee0f: lea    rcx,[rbx+0x1]
0x0138ee13: call   0x140070760
0x0138ee18: mov    QWORD PTR [rbp-0x40],0x9
0x0138ee20: mov    QWORD PTR [rbp-0x38],rbx
0x0138ee24: movsd  xmm0,QWORD PTR [rip+0x2ecfc4]        # 0x14167bdf0 ; literal="body part"
0x0138ee2c: movsd  QWORD PTR [rax],xmm0
0x0138ee30: movzx  ecx,BYTE PTR [rip+0x2ecfc1]        # 0x14167bdf8 ; literal="t"
0x0138ee37: mov    BYTE PTR [rax+0x8],cl
0x0138ee3a: cmp    rsi,0xf
0x0138ee3e: mov    BYTE PTR [rax+0x9],0x0
0x0138ee42: mov    r14,rax
0x0138ee45: jbe    0x14138ee79
0x0138ee47: lea    rdx,[rsi+0x1]
0x0138ee4b: mov    rcx,QWORD PTR [rbp-0x50]
0x0138ee4f: cmp    rdx,0x1000
0x0138ee56: mov    rax,rcx
0x0138ee59: jb     0x14138ee74
0x0138ee5b: add    rdx,0x27
0x0138ee5f: mov    rcx,QWORD PTR [rcx-0x8]
0x0138ee63: sub    rax,rcx
0x0138ee66: add    rax,0xfffffffffffffff8
0x0138ee6a: cmp    rax,0x1f
0x0138ee6e: ja     0x14138f566
0x0138ee74: call   0x1415345f0
0x0138ee79: mov    QWORD PTR [rbp-0x50],r14
0x0138ee7d: lea    rcx,[rbp-0x50]
0x0138ee81: call   0x14052b070
0x0138ee86: lea    rdx,[rbp-0x50]
0x0138ee8a: cmp    QWORD PTR [rbp-0x38],0xf
0x0138ee8f: cmova  rdx,QWORD PTR [rbp-0x50]
0x0138ee94: mov    r8,QWORD PTR [rbp-0x40]
0x0138ee98: mov    rcx,rdi
0x0138ee9b: call   0x14006f9a0
0x0138eea0: jmp    0x14138f636
0x0138eea5: mov    r8d,0xf
0x0138eeab: lea    rdx,[rip+0x3f06b6]        # 0x14177f568 ; literal="Wrapped around "
0x0138eeb2: mov    rcx,rdi
0x0138eeb5: call   0x14006f860
0x0138eeba: mov    WORD PTR [rsp+0x20],0x2
0x0138eec1: xor    r9d,r9d
0x0138eec4: movzx  r8d,WORD PTR [rsi+0xa]
0x0138eec9: lea    rdx,[rbp-0x50]
0x0138eecd: mov    rcx,rbx
0x0138eed0: call   0x14132f540
0x0138eed5: jmp    0x14138ee7d
0x0138eed7: mov    r8d,0xc
0x0138eedd: lea    rdx,[rip+0x3f0674]        # 0x14177f558 ; literal="Strapped to "
0x0138eee4: mov    rcx,rdi
0x0138eee7: call   0x14006f860
0x0138eeec: movsx  rcx,WORD PTR [rsi+0xa]
0x0138eef1: test   cx,cx
0x0138eef4: js     0x14138efe5
0x0138eefa: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138ef01: mov    rdx,QWORD PTR [rax]
0x0138ef04: mov    rsi,rcx
0x0138ef07: mov    rcx,QWORD PTR [rax+0x8]
0x0138ef0b: sub    rcx,rdx
0x0138ef0e: sar    rcx,0x3
0x0138ef12: cmp    rsi,rcx
0x0138ef15: jae    0x14138efe5
0x0138ef1b: mov    rcx,QWORD PTR [rdx+rsi*8]
0x0138ef1f: mov    rax,QWORD PTR [rcx+0x98]
0x0138ef26: sub    rax,QWORD PTR [rcx+0x90]
0x0138ef2d: sar    rax,0x3
0x0138ef31: mov    QWORD PTR [rbp-0x40],r14
0x0138ef35: test   rax,rax
0x0138ef38: lea    rax,[rbp-0x50]
0x0138ef3c: je     0x14138ef91
0x0138ef3e: cmp    QWORD PTR [rbp-0x38],0xf
0x0138ef43: cmova  rax,QWORD PTR [rbp-0x50]
0x0138ef48: mov    BYTE PTR [rax],0x0
0x0138ef4b: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138ef52: mov    rcx,QWORD PTR [rax]
0x0138ef55: mov    rax,QWORD PTR [rcx+rsi*8]
0x0138ef59: cmp    DWORD PTR [rax+0x84],0x1
0x0138ef60: jg     0x14138ef6b
0x0138ef62: mov    rax,QWORD PTR [rax+0x90]
0x0138ef69: jmp    0x14138ef72
0x0138ef6b: mov    rax,QWORD PTR [rax+0xa8]
0x0138ef72: mov    rdx,QWORD PTR [rax]
0x0138ef75: cmp    QWORD PTR [rdx+0x18],0xf
0x0138ef7a: mov    r8,QWORD PTR [rdx+0x10]
0x0138ef7e: jbe    0x14138ef83
0x0138ef80: mov    rdx,QWORD PTR [rdx]
0x0138ef83: lea    rcx,[rbp-0x50]
0x0138ef87: call   0x14006f9a0
0x0138ef8c: jmp    0x14138ee7d
0x0138ef91: cmp    QWORD PTR [rbp-0x38],0xf
0x0138ef96: cmova  rax,QWORD PTR [rbp-0x50]
0x0138ef9b: mov    BYTE PTR [rax],0x0
0x0138ef9e: mov    r8d,0x9
0x0138efa4: lea    rdx,[rip+0x2ece45]        # 0x14167bdf0 ; literal="body part"
0x0138efab: lea    rcx,[rbp-0x50]
0x0138efaf: call   0x14006f9a0
0x0138efb4: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138efbb: mov    rcx,QWORD PTR [rax]
0x0138efbe: mov    rax,QWORD PTR [rcx+rsi*8]
0x0138efc2: cmp    DWORD PTR [rax+0x84],0x1
0x0138efc9: jle    0x14138ee7d
0x0138efcf: mov    rsi,QWORD PTR [rbp-0x40]
0x0138efd3: mov    r14,QWORD PTR [rbp-0x38]
0x0138efd7: cmp    rsi,r14
0x0138efda: jb     0x14138ecb8
0x0138efe0: jmp    0x14138ecd8
0x0138efe5: mov    rsi,QWORD PTR [rbp-0x38]
0x0138efe9: cmp    rsi,0x9
0x0138efed: jae    0x14138edb1
0x0138eff3: mov    rcx,rsi
0x0138eff6: shr    rcx,1
0x0138eff9: movabs rbx,0x7fffffffffffffff
0x0138f003: mov    rax,rbx
0x0138f006: sub    rax,rcx
0x0138f009: cmp    rsi,rax
0x0138f00c: ja     0x14138ee0f
0x0138f012: lea    rax,[rcx+rsi*1]
0x0138f016: jmp    0x14138ee03
0x0138f01b: mov    edx,r14d
0x0138f01e: mov    r10,QWORD PTR [rbx+0x410]
0x0138f025: mov    r9,QWORD PTR [rbx+0x408]
0x0138f02c: mov    rax,r10
0x0138f02f: sub    rax,r9
0x0138f032: sar    rax,0x3
0x0138f036: test   rax,rax
0x0138f039: je     0x14138f079
0x0138f03b: mov    r8,r9
0x0138f03e: xchg   ax,ax
0x0138f040: mov    rcx,QWORD PTR [r8]
0x0138f043: movzx  eax,WORD PTR [rcx+0x8]
0x0138f047: cmp    ax,0x2
0x0138f04b: je     0x14138f053
0x0138f04d: cmp    ax,0x5
0x0138f051: jne    0x14138f061
0x0138f053: movzx  eax,WORD PTR [rsi+0xa]
0x0138f057: cmp    WORD PTR [rcx+0xa],ax
0x0138f05b: je     0x14138f108
0x0138f061: inc    edx
0x0138f063: add    r8,0x8
0x0138f067: mov    rcx,r10
0x0138f06a: sub    rcx,r9
0x0138f06d: sar    rcx,0x3
0x0138f071: movsxd rax,edx
0x0138f074: cmp    rax,rcx
0x0138f077: jb     0x14138f040
0x0138f079: movsx  rcx,WORD PTR [rsi+0xa]
0x0138f07e: test   cx,cx
0x0138f081: js     0x14138eb91
0x0138f087: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138f08e: mov    rdx,QWORD PTR [rax]
0x0138f091: mov    rsi,rcx
0x0138f094: mov    rcx,QWORD PTR [rax+0x8]
0x0138f098: sub    rcx,rdx
0x0138f09b: sar    rcx,0x3
0x0138f09f: cmp    rsi,rcx
0x0138f0a2: jae    0x14138eb91
0x0138f0a8: mov    rax,QWORD PTR [rdx+rsi*8]
0x0138f0ac: mov    rcx,QWORD PTR [rax+0x98]
0x0138f0b3: mov    rax,QWORD PTR [rax+0x90]
0x0138f0ba: mov    QWORD PTR [rdi+0x10],r14
0x0138f0be: mov    rdx,QWORD PTR [rdi+0x18]
0x0138f0c2: sub    rcx,rax
0x0138f0c5: sar    rcx,0x3
0x0138f0c9: mov    rax,rdi
0x0138f0cc: test   rcx,rcx
0x0138f0cf: je     0x14138eb42
0x0138f0d5: cmp    rdx,0xf
0x0138f0d9: jbe    0x14138f0de
0x0138f0db: mov    rax,QWORD PTR [rdi]
0x0138f0de: mov    BYTE PTR [rax],0x0
0x0138f0e1: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138f0e8: mov    rcx,QWORD PTR [rax]
0x0138f0eb: mov    rax,QWORD PTR [rcx+rsi*8]
0x0138f0ef: cmp    DWORD PTR [rax+0x84],0x1
0x0138f0f6: jg     0x14138eb15
0x0138f0fc: mov    rax,QWORD PTR [rax+0x90]
0x0138f103: jmp    0x14138eb1c
0x0138f108: movsxd rax,edx
0x0138f10b: mov    rcx,QWORD PTR [r9+rax*8]
0x0138f10f: mov    rcx,QWORD PTR [rcx]
0x0138f112: test   rcx,rcx
0x0138f115: je     0x14138f079
0x0138f11b: mov    r9d,0xffffffff
0x0138f121: xor    r8d,r8d
0x0138f124: mov    rdx,rdi
0x0138f127: call   0x140c62490
0x0138f12c: mov    rcx,rdi
0x0138f12f: call   0x14052b070
0x0138f134: jmp    0x14138f636
0x0138f139: movsxd rcx,DWORD PTR [r8+0xc]
0x0138f13d: mov    QWORD PTR [rdi+0x10],r14
0x0138f141: mov    rax,rdi
0x0138f144: cmp    QWORD PTR [rdi+0x18],0xf
0x0138f149: jbe    0x14138f14e
0x0138f14b: mov    rax,QWORD PTR [rdi]
0x0138f14e: mov    BYTE PTR [rax],0x0
0x0138f151: mov    rax,rcx
0x0138f154: movabs rcx,0x9e3779b97f4a7c15
0x0138f15e: add    rcx,rax
0x0138f161: mov    QWORD PTR [rip+0x518e00],rcx        # 0x1418a7f68
0x0138f168: mov    rax,rcx
0x0138f16b: shr    rax,0x1e
0x0138f16f: xor    rax,rcx
0x0138f172: movabs rcx,0xbf58476d1ce4e5b9
0x0138f17c: imul   rax,rcx
0x0138f180: mov    rcx,rax
0x0138f183: shr    rcx,0x1b
0x0138f187: xor    rcx,rax
0x0138f18a: movabs rax,0x94d049bb133111eb
0x0138f194: imul   rcx,rax
0x0138f198: mov    r11,rcx
0x0138f19b: shr    r11,0x3f
0x0138f19f: shr    rcx,0x20
0x0138f1a3: xor    r11d,ecx
0x0138f1a6: mov    eax,0xaaaaaaab
0x0138f1ab: mul    r11d
0x0138f1ae: shr    edx,1
0x0138f1b0: lea    eax,[rdx+rdx*2]
0x0138f1b3: sub    r11d,eax
0x0138f1b6: data16 nop WORD PTR [rax+rax*1+0x0]
0x0138f1c0: mov    ecx,r11d
0x0138f1c3: test   r11d,r11d
0x0138f1c6: je     0x14138f28e
0x0138f1cc: sub    ecx,0x1
0x0138f1cf: je     0x14138f274
0x0138f1d5: cmp    ecx,0x1
0x0138f1d8: jne    0x14138f1c0
0x0138f1da: movzx  r8d,r14w
0x0138f1de: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138f1e5: mov    r9,QWORD PTR [rax+0x8]
0x0138f1e9: mov    rcx,QWORD PTR [rax]
0x0138f1ec: mov    rax,r9
0x0138f1ef: sub    rax,rcx
0x0138f1f2: sar    rax,0x3
0x0138f1f6: test   rax,rax
0x0138f1f9: je     0x14138f1c0
0x0138f1fb: mov    rdx,r14
0x0138f1fe: mov    r10,QWORD PTR [rbx+0x4f0]
0x0138f205: test   BYTE PTR [r10+rdx*4],0x2
0x0138f20a: jne    0x14138f23e
0x0138f20c: test   r8w,r8w
0x0138f210: js     0x14138f23e
0x0138f212: mov    rax,r9
0x0138f215: sub    rax,rcx
0x0138f218: sar    rax,0x3
0x0138f21c: cmp    rdx,rax
0x0138f21f: jae    0x14138f23e
0x0138f221: mov    rax,QWORD PTR [rcx+rdx*8]
0x0138f225: cmp    DWORD PTR [rax+0x50],0x0
0x0138f229: jle    0x14138f238
0x0138f22b: mov    rax,QWORD PTR [rax+0x48]
0x0138f22f: test   BYTE PTR [rax],0x1
0x0138f232: je     0x14138f238
0x0138f234: mov    al,0x1
0x0138f236: jmp    0x14138f23a
0x0138f238: xor    al,al
0x0138f23a: test   al,al
0x0138f23c: jne    0x14138f25a
0x0138f23e: inc    r8w
0x0138f242: movsx  rdx,r8w
0x0138f246: mov    rax,r9
0x0138f249: sub    rax,rcx
0x0138f24c: sar    rax,0x3
0x0138f250: cmp    rdx,rax
0x0138f253: jb     0x14138f205
0x0138f255: jmp    0x14138f1c0
0x0138f25a: mov    r8d,0x7
0x0138f260: lea    rdx,[rip+0x3ef7f9]        # 0x14177ea60 ; literal="On head"
0x0138f267: mov    rcx,rdi
0x0138f26a: call   0x14006f9a0
0x0138f26f: jmp    0x14138f636
0x0138f274: mov    r8d,0xd
0x0138f27a: lea    rdx,[rip+0x3ef7e7]        # 0x14177ea68 ; literal="Left shoulder"
0x0138f281: mov    rcx,rdi
0x0138f284: call   0x14006f9a0
0x0138f289: jmp    0x14138f636
0x0138f28e: mov    r8d,0xe
0x0138f294: lea    rdx,[rip+0x3ef7ad]        # 0x14177ea48 ; literal="Right shoulder"
0x0138f29b: mov    rcx,rdi
0x0138f29e: call   0x14006f9a0
0x0138f2a3: jmp    0x14138f636
0x0138f2a8: mov    r8d,0x9
0x0138f2ae: lea    rdx,[rip+0x3ef783]        # 0x14177ea38 ; literal="Stuck in "
0x0138f2b5: mov    rcx,rdi
0x0138f2b8: call   0x14006f9a0
0x0138f2bd: movsx  rcx,WORD PTR [rsi+0xa]
0x0138f2c2: test   cx,cx
0x0138f2c5: js     0x14138f49d
0x0138f2cb: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138f2d2: mov    rdx,QWORD PTR [rax]
0x0138f2d5: mov    rsi,rcx
0x0138f2d8: mov    rcx,QWORD PTR [rax+0x8]
0x0138f2dc: sub    rcx,rdx
0x0138f2df: sar    rcx,0x3
0x0138f2e3: cmp    rsi,rcx
0x0138f2e6: jae    0x14138f49d
0x0138f2ec: mov    rcx,QWORD PTR [rdx+rsi*8]
0x0138f2f0: mov    rax,QWORD PTR [rcx+0x98]
0x0138f2f7: sub    rax,QWORD PTR [rcx+0x90]
0x0138f2fe: sar    rax,0x3
0x0138f302: mov    QWORD PTR [rbp-0x40],r14
0x0138f306: test   rax,rax
0x0138f309: lea    rax,[rbp-0x50]
0x0138f30d: je     0x14138f363
0x0138f30f: cmp    QWORD PTR [rbp-0x38],0xf
0x0138f314: cmova  rax,QWORD PTR [rbp-0x50]
0x0138f319: mov    BYTE PTR [rax],0x0
0x0138f31c: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138f323: mov    rcx,QWORD PTR [rax]
0x0138f326: mov    rax,QWORD PTR [rcx+rsi*8]
0x0138f32a: cmp    DWORD PTR [rax+0x84],0x1
0x0138f331: jg     0x14138f34b
0x0138f333: mov    rdx,QWORD PTR [rax+0x90]
0x0138f33a: mov    rdx,QWORD PTR [rdx]
0x0138f33d: lea    rcx,[rbp-0x50]
0x0138f341: call   0x1400b9ca0
0x0138f346: jmp    0x14138f576
0x0138f34b: mov    rdx,QWORD PTR [rax+0xa8]
0x0138f352: mov    rdx,QWORD PTR [rdx]
0x0138f355: lea    rcx,[rbp-0x50]
0x0138f359: call   0x1400b9ca0
0x0138f35e: jmp    0x14138f576
0x0138f363: cmp    QWORD PTR [rbp-0x38],0xf
0x0138f368: cmova  rax,QWORD PTR [rbp-0x50]
0x0138f36d: mov    BYTE PTR [rax],0x0
0x0138f370: mov    r8d,0x9
0x0138f376: lea    rdx,[rip+0x2eca73]        # 0x14167bdf0 ; literal="body part"
0x0138f37d: lea    rcx,[rbp-0x50]
0x0138f381: call   0x14006f9a0
0x0138f386: mov    rax,QWORD PTR [rbx+0x5f8]
0x0138f38d: mov    rcx,QWORD PTR [rax]
0x0138f390: mov    rax,QWORD PTR [rcx+rsi*8]
0x0138f394: cmp    DWORD PTR [rax+0x84],0x1
0x0138f39b: jle    0x14138f576
0x0138f3a1: mov    rsi,QWORD PTR [rbp-0x40]
0x0138f3a5: mov    r14,QWORD PTR [rbp-0x38]
0x0138f3a9: cmp    rsi,r14
0x0138f3ac: jae    0x14138f3ce
0x0138f3ae: lea    rax,[rsi+0x1]
0x0138f3b2: mov    QWORD PTR [rbp-0x40],rax
0x0138f3b6: lea    rax,[rbp-0x50]
0x0138f3ba: cmp    r14,0xf
0x0138f3be: cmova  rax,QWORD PTR [rbp-0x50]
0x0138f3c3: mov    WORD PTR [rax+rsi*1],0x73
0x0138f3c9: jmp    0x14138f576
0x0138f3ce: movabs rbx,0x7fffffffffffffff
0x0138f3d8: mov    rax,rbx
0x0138f3db: sub    rax,rsi
0x0138f3de: cmp    rax,0x1
0x0138f3e2: jb     0x14138f65d
0x0138f3e8: lea    r12,[rsi+0x1]
0x0138f3ec: mov    rcx,r12
0x0138f3ef: or     rcx,0xf
0x0138f3f3: cmp    rcx,rbx
0x0138f3f6: ja     0x14138f417
0x0138f3f8: mov    rdx,r14
0x0138f3fb: shr    rdx,1
0x0138f3fe: mov    rax,rbx
0x0138f401: sub    rax,rdx
0x0138f404: cmp    r14,rax
0x0138f407: ja     0x14138f417
0x0138f409: lea    rax,[rdx+r14*1]
0x0138f40d: mov    rbx,rcx
0x0138f410: cmp    rcx,rax
0x0138f413: cmovb  rbx,rax
0x0138f417: lea    rcx,[rbx+0x1]
0x0138f41b: call   0x140070760
0x0138f420: mov    r15,rax
0x0138f423: mov    QWORD PTR [rbp-0x40],r12
0x0138f427: mov    QWORD PTR [rbp-0x38],rbx
0x0138f42b: mov    r8,rsi
0x0138f42e: mov    rcx,rax
0x0138f431: cmp    r14,0xf
0x0138f435: jbe    0x14138f484
0x0138f437: mov    rbx,QWORD PTR [rbp-0x50]
0x0138f43b: mov    rdx,rbx
0x0138f43e: call   0x1415359e8
0x0138f443: mov    WORD PTR [rsi+r15*1],0x73
0x0138f44a: lea    rdx,[r14+0x1]
0x0138f44e: cmp    rdx,0x1000
0x0138f455: jb     0x14138f473
0x0138f457: add    rdx,0x27
0x0138f45b: mov    rcx,QWORD PTR [rbx-0x8]
0x0138f45f: sub    rbx,rcx
0x0138f462: lea    rax,[rbx-0x8]
0x0138f466: cmp    rax,0x1f
0x0138f46a: ja     0x14138f566
0x0138f470: mov    rbx,rcx
0x0138f473: mov    rcx,rbx
0x0138f476: call   0x1415345f0
0x0138f47b: mov    QWORD PTR [rbp-0x50],r15
0x0138f47f: jmp    0x14138f576
0x0138f484: lea    rdx,[rbp-0x50]
0x0138f488: call   0x1415359e8
0x0138f48d: mov    WORD PTR [rsi+r15*1],0x73
0x0138f494: mov    QWORD PTR [rbp-0x50],r15
0x0138f498: jmp    0x14138f576
0x0138f49d: mov    rsi,QWORD PTR [rbp-0x38]
0x0138f4a1: cmp    rsi,0x9
0x0138f4a5: jb     0x14138f4da
0x0138f4a7: lea    rbx,[rbp-0x50]
0x0138f4ab: cmp    rsi,0xf
0x0138f4af: cmova  rbx,QWORD PTR [rbp-0x50]
0x0138f4b4: mov    QWORD PTR [rbp-0x40],0x9
0x0138f4bc: mov    r8d,0x9
0x0138f4c2: lea    rdx,[rip+0x2ec927]        # 0x14167bdf0 ; literal="body part"
0x0138f4c9: mov    rcx,rbx
0x0138f4cc: call   0x141535d8a
0x0138f4d1: mov    BYTE PTR [rbx+0x9],0x0
0x0138f4d5: jmp    0x14138f576
0x0138f4da: mov    rcx,rsi
0x0138f4dd: shr    rcx,1
0x0138f4e0: movabs rbx,0x7fffffffffffffff
0x0138f4ea: mov    rax,rbx
0x0138f4ed: sub    rax,rcx
0x0138f4f0: cmp    rsi,rax
0x0138f4f3: ja     0x14138f505
0x0138f4f5: lea    rax,[rsi+rcx*1]
0x0138f4f9: mov    ebx,0xf
0x0138f4fe: cmp    rax,rbx
0x0138f501: cmova  rbx,rax
0x0138f505: lea    rcx,[rbx+0x1]
0x0138f509: call   0x140070760
0x0138f50e: mov    r14,rax
0x0138f511: mov    QWORD PTR [rbp-0x40],0x9
0x0138f519: mov    QWORD PTR [rbp-0x38],rbx
0x0138f51d: movsd  xmm0,QWORD PTR [rip+0x2ec8cb]        # 0x14167bdf0 ; literal="body part"
0x0138f525: movsd  QWORD PTR [rax],xmm0
0x0138f529: movzx  ecx,BYTE PTR [rip+0x2ec8c8]        # 0x14167bdf8 ; literal="t"
0x0138f530: mov    BYTE PTR [rax+0x8],cl
0x0138f533: mov    BYTE PTR [rax+0x9],0x0
0x0138f537: cmp    rsi,0xf
0x0138f53b: jbe    0x14138f572
0x0138f53d: lea    rdx,[rsi+0x1]
0x0138f541: mov    rcx,QWORD PTR [rbp-0x50]
0x0138f545: mov    rax,rcx
0x0138f548: cmp    rdx,0x1000
0x0138f54f: jb     0x14138f56d
0x0138f551: add    rdx,0x27
0x0138f555: mov    rcx,QWORD PTR [rcx-0x8]
0x0138f559: sub    rax,rcx
0x0138f55c: add    rax,0xfffffffffffffff8
0x0138f560: cmp    rax,0x1f
0x0138f564: jbe    0x14138f56d
0x0138f566: call   QWORD PTR [rip+0x251534]        # 0x1415e0aa0
0x0138f56c: int3
0x0138f56d: call   0x1415345f0
0x0138f572: mov    QWORD PTR [rbp-0x50],r14
0x0138f576: lea    rcx,[rbp-0x50]
0x0138f57a: call   0x14052b070
0x0138f57f: lea    rdx,[rbp-0x50]
0x0138f583: mov    rcx,rdi
0x0138f586: call   0x1400b9ca0
0x0138f58b: jmp    0x14138f636
0x0138f590: mov    r8d,0xa
0x0138f596: lea    rdx,[rip+0x3ef48b]        # 0x14177ea28 ; literal="Sewn into "
0x0138f59d: mov    rcx,rdi
0x0138f5a0: call   0x14006f9a0
0x0138f5a5: mov    WORD PTR [rsp+0x20],0x2
0x0138f5ac: xor    r9d,r9d
0x0138f5af: movzx  r8d,WORD PTR [rsi+0xa]
0x0138f5b4: lea    rdx,[rbp-0x50]
0x0138f5b8: mov    rcx,rbx
0x0138f5bb: call   0x14132f540
0x0138f5c0: jmp    0x14138f576
0x0138f5c2: lea    rdx,[rip+0x3ef48f]        # 0x14177ea58 ; literal="Nocked"
0x0138f5c9: mov    rcx,rdi
0x0138f5cc: call   0x14006f4f0
0x0138f5d1: mov    edx,DWORD PTR [rsi+0x10]
0x0138f5d4: lea    rcx,[rip+0x104fd65]        # 0x1423df340
0x0138f5db: call   0x140072670
0x0138f5e0: mov    rbx,rax
0x0138f5e3: test   rax,rax
0x0138f5e6: je     0x14138f636
0x0138f5e8: lea    rdx,[rip+0x25893d]        # 0x1415e7f2c ; literal=" in "
0x0138f5ef: mov    rcx,rdi
0x0138f5f2: call   0x14006f4f0
0x0138f5f7: lea    rcx,[rbp-0x30]
0x0138f5fb: call   0x14006f620
0x0138f600: nop
0x0138f601: mov    r9d,0xffffffff
0x0138f607: xor    r8d,r8d
0x0138f60a: lea    rdx,[rbp-0x30]
0x0138f60e: mov    rcx,rbx
0x0138f611: call   0x140c62490
0x0138f616: lea    rcx,[rbp-0x30]
0x0138f61a: call   0x14052b070
0x0138f61f: lea    rdx,[rbp-0x30]
0x0138f623: mov    rcx,rdi
0x0138f626: call   0x1400b9ca0
0x0138f62b: nop
0x0138f62c: lea    rcx,[rbp-0x30]
0x0138f630: call   0x14006f7e0
0x0138f635: nop
0x0138f636: lea    rcx,[rbp-0x50]
0x0138f63a: call   0x14006f7e0
0x0138f63f: mov    rcx,QWORD PTR [rbp-0x10]
0x0138f643: xor    rcx,rsp
0x0138f646: call   0x1415345d0
0x0138f64b: add    rsp,0x80
0x0138f652: pop    r15
0x0138f654: pop    r14
0x0138f656: pop    r12
0x0138f658: pop    rdi
0x0138f659: pop    rsi
0x0138f65a: pop    rbx
0x0138f65b: pop    rbp
0x0138f65c: ret
0x0138f65d: call   0x140065820
0x0138f662: nop
0x0138f663: nop
