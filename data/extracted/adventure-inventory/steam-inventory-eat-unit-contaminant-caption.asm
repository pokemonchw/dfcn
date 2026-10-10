# steam PE:6a70a6d9:02711000; inventory-eat-unit-contaminant-caption; RVA 0x839850..0x839c95
0x00839850: mov    QWORD PTR [rsp+0x18],rbx
0x00839855: mov    QWORD PTR [rsp+0x20],rsi
0x0083985a: push   rbp
0x0083985b: push   rdi
0x0083985c: push   r12
0x0083985e: push   r14
0x00839860: push   r15
0x00839862: mov    rbp,rsp
0x00839865: sub    rsp,0x50
0x00839869: mov    rax,QWORD PTR [rip+0x10627d0]        # 0x14189c040
0x00839870: xor    rax,rsp
0x00839873: mov    QWORD PTR [rbp-0x10],rax
0x00839877: mov    r12,rdx
0x0083987a: mov    rbx,rcx
0x0083987d: cmp    QWORD PTR [rcx+0x10],0x0
0x00839882: je     0x140839c6a
0x00839888: mov    rax,QWORD PTR [rcx+0x18]
0x0083988c: test   rax,rax
0x0083988f: je     0x140839c6a
0x00839895: movsx  ecx,WORD PTR [rax+0x8]
0x00839899: test   ecx,ecx
0x0083989b: je     0x1408398b5
0x0083989d: sub    ecx,0x1
0x008398a0: je     0x1408398ae
0x008398a2: sub    ecx,0x2
0x008398a5: jne    0x1408398b5
0x008398a7: mov    eax,0x46
0x008398ac: jmp    0x1408398ba
0x008398ae: mov    eax,0x49
0x008398b3: jmp    0x1408398ba
0x008398b5: mov    eax,0x4b
0x008398ba: mov    ecx,0x6
0x008398bf: mov    r8d,0x4
0x008398c5: cmp    ax,0x49
0x008398c9: cmove  r8d,ecx
0x008398cd: lea    rcx,[rip+0xe77458]        # 0x1416b0d2c ; literal="Drink "
0x008398d4: lea    rdx,[rip+0xe7746d]        # 0x1416b0d48 ; literal="Eat "
0x008398db: cmove  rdx,rcx
0x008398df: mov    rcx,r12
0x008398e2: call   0x14006f8d0
0x008398e7: xorps  xmm0,xmm0
0x008398ea: movups XMMWORD PTR [rbp-0x30],xmm0
0x008398ee: xor    esi,esi
0x008398f0: mov    QWORD PTR [rbp-0x20],rsi
0x008398f4: mov    QWORD PTR [rbp-0x18],0xf
0x008398fc: mov    BYTE PTR [rbp-0x30],sil
0x00839900: lea    rdx,[rbp-0x30]
0x00839904: mov    rcx,QWORD PTR [rbx+0x18]
0x00839908: call   0x140657f90
0x0083990d: lea    rdx,[rbp-0x30]
0x00839911: cmp    QWORD PTR [rbp-0x18],0xf
0x00839916: cmova  rdx,QWORD PTR [rbp-0x30]
0x0083991b: mov    r8,QWORD PTR [rbp-0x20]
0x0083991f: mov    rcx,r12
0x00839922: call   0x14006fa10
0x00839927: mov    rdi,QWORD PTR [rbx+0x10]
0x0083992b: mov    rax,QWORD PTR [rbx+0x18]
0x0083992f: movsx  rcx,WORD PTR [rax+0x18]
0x00839934: test   cx,cx
0x00839937: js     0x140839b0e
0x0083993d: mov    rax,QWORD PTR [rdi+0x5f8]
0x00839944: mov    rdx,QWORD PTR [rax]
0x00839947: mov    rbx,rcx
0x0083994a: mov    rcx,QWORD PTR [rax+0x8]
0x0083994e: sub    rcx,rdx
0x00839951: sar    rcx,0x3
0x00839955: cmp    rbx,rcx
0x00839958: jae    0x140839b0e
0x0083995e: mov    rax,QWORD PTR [rdx+rbx*8]
0x00839962: mov    rcx,QWORD PTR [rax+0x98]
0x00839969: sub    rcx,QWORD PTR [rax+0x90]
0x00839970: sar    rcx,0x3
0x00839974: mov    QWORD PTR [rbp-0x20],rsi
0x00839978: lea    rax,[rbp-0x30]
0x0083997c: test   rcx,rcx
0x0083997f: je     0x1408399d4
0x00839981: cmp    QWORD PTR [rbp-0x18],0xf
0x00839986: cmova  rax,QWORD PTR [rbp-0x30]
0x0083998b: mov    BYTE PTR [rax],sil
0x0083998e: mov    rax,QWORD PTR [rdi+0x5f8]
0x00839995: mov    rcx,QWORD PTR [rax]
0x00839998: mov    rax,QWORD PTR [rcx+rbx*8]
0x0083999c: cmp    DWORD PTR [rax+0x84],0x1
0x008399a3: jg     0x1408399ae
0x008399a5: mov    rax,QWORD PTR [rax+0x90]
0x008399ac: jmp    0x1408399b5
0x008399ae: mov    rax,QWORD PTR [rax+0xa8]
0x008399b5: mov    rdx,QWORD PTR [rax]
0x008399b8: cmp    QWORD PTR [rdx+0x18],0xf
0x008399bd: mov    r8,QWORD PTR [rdx+0x10]
0x008399c1: jbe    0x1408399c6
0x008399c3: mov    rdx,QWORD PTR [rdx]
0x008399c6: lea    rcx,[rbp-0x30]
0x008399ca: call   0x14006fa10
0x008399cf: jmp    0x140839be7
0x008399d4: cmp    QWORD PTR [rbp-0x18],0xf
0x008399d9: cmova  rax,QWORD PTR [rbp-0x30]
0x008399de: mov    BYTE PTR [rax],0x0
0x008399e1: mov    r8d,0x9
0x008399e7: lea    rdx,[rip+0xe47662]        # 0x141681050 ; literal="body part"
0x008399ee: lea    rcx,[rbp-0x30]
0x008399f2: call   0x14006fa10
0x008399f7: mov    rax,QWORD PTR [rdi+0x5f8]
0x008399fe: mov    rcx,QWORD PTR [rax]
0x00839a01: mov    rax,QWORD PTR [rcx+rbx*8]
0x00839a05: cmp    DWORD PTR [rax+0x84],0x1
0x00839a0c: jle    0x140839be7
0x00839a12: mov    rdi,QWORD PTR [rbp-0x20]
0x00839a16: mov    rsi,QWORD PTR [rbp-0x18]
0x00839a1a: cmp    rdi,rsi
0x00839a1d: jae    0x140839a3f
0x00839a1f: lea    rax,[rdi+0x1]
0x00839a23: mov    QWORD PTR [rbp-0x20],rax
0x00839a27: lea    rax,[rbp-0x30]
0x00839a2b: cmp    rsi,0xf
0x00839a2f: cmova  rax,QWORD PTR [rbp-0x30]
0x00839a34: mov    WORD PTR [rax+rdi*1],0x73
0x00839a3a: jmp    0x140839be7
0x00839a3f: movabs rbx,0x7fffffffffffffff
0x00839a49: mov    rax,rbx
0x00839a4c: sub    rax,rdi
0x00839a4f: cmp    rax,0x1
0x00839a53: jb     0x140839c8f
0x00839a59: lea    r15,[rdi+0x1]
0x00839a5d: mov    rcx,r15
0x00839a60: or     rcx,0xf
0x00839a64: cmp    rcx,rbx
0x00839a67: ja     0x140839a88
0x00839a69: mov    rdx,rsi
0x00839a6c: shr    rdx,1
0x00839a6f: mov    rax,rbx
0x00839a72: sub    rax,rdx
0x00839a75: cmp    rsi,rax
0x00839a78: ja     0x140839a88
0x00839a7a: lea    rax,[rsi+rdx*1]
0x00839a7e: mov    rbx,rcx
0x00839a81: cmp    rcx,rax
0x00839a84: cmovb  rbx,rax
0x00839a88: lea    rcx,[rbx+0x1]
0x00839a8c: call   0x1400707d0
0x00839a91: mov    r14,rax
0x00839a94: mov    QWORD PTR [rbp-0x20],r15
0x00839a98: mov    QWORD PTR [rbp-0x18],rbx
0x00839a9c: mov    r8,rdi
0x00839a9f: mov    rcx,rax
0x00839aa2: cmp    rsi,0xf
0x00839aa6: jbe    0x140839af5
0x00839aa8: mov    rbx,QWORD PTR [rbp-0x30]
0x00839aac: mov    rdx,rbx
0x00839aaf: call   0x14153aa78
0x00839ab4: mov    WORD PTR [r14+rdi*1],0x73
0x00839abb: lea    rdx,[rsi+0x1]
0x00839abf: cmp    rdx,0x1000
0x00839ac6: jb     0x140839ae4
0x00839ac8: add    rdx,0x27
0x00839acc: mov    rcx,QWORD PTR [rbx-0x8]
0x00839ad0: sub    rbx,rcx
0x00839ad3: lea    rax,[rbx-0x8]
0x00839ad7: cmp    rax,0x1f
0x00839adb: ja     0x140839bd7
0x00839ae1: mov    rbx,rcx
0x00839ae4: mov    rcx,rbx
0x00839ae7: call   0x141539680
0x00839aec: mov    QWORD PTR [rbp-0x30],r14
0x00839af0: jmp    0x140839be7
0x00839af5: lea    rdx,[rbp-0x30]
0x00839af9: call   0x14153aa78
0x00839afe: mov    WORD PTR [r14+rdi*1],0x73
0x00839b05: mov    QWORD PTR [rbp-0x30],r14
0x00839b09: jmp    0x140839be7
0x00839b0e: mov    rdi,QWORD PTR [rbp-0x18]
0x00839b12: cmp    rdi,0x9
0x00839b16: jb     0x140839b4b
0x00839b18: lea    rbx,[rbp-0x30]
0x00839b1c: cmp    rdi,0xf
0x00839b20: cmova  rbx,QWORD PTR [rbp-0x30]
0x00839b25: mov    QWORD PTR [rbp-0x20],0x9
0x00839b2d: mov    r8d,0x9
0x00839b33: lea    rdx,[rip+0xe47516]        # 0x141681050 ; literal="body part"
0x00839b3a: mov    rcx,rbx
0x00839b3d: call   0x14153ae1a
0x00839b42: mov    BYTE PTR [rbx+0x9],0x0
0x00839b46: jmp    0x140839be7
0x00839b4b: mov    rcx,rdi
0x00839b4e: shr    rcx,1
0x00839b51: movabs rbx,0x7fffffffffffffff
0x00839b5b: mov    rax,rbx
0x00839b5e: sub    rax,rcx
0x00839b61: cmp    rdi,rax
0x00839b64: ja     0x140839b76
0x00839b66: lea    rax,[rcx+rdi*1]
0x00839b6a: mov    ebx,0xf
0x00839b6f: cmp    rax,rbx
0x00839b72: cmova  rbx,rax
0x00839b76: lea    rcx,[rbx+0x1]
0x00839b7a: call   0x1400707d0
0x00839b7f: mov    rsi,rax
0x00839b82: mov    QWORD PTR [rbp-0x20],0x9
0x00839b8a: mov    QWORD PTR [rbp-0x18],rbx
0x00839b8e: movsd  xmm0,QWORD PTR [rip+0xe474ba]        # 0x141681050 ; literal="body part"
0x00839b96: movsd  QWORD PTR [rax],xmm0
0x00839b9a: movzx  ecx,BYTE PTR [rip+0xe474b7]        # 0x141681058 ; literal="t"
0x00839ba1: mov    BYTE PTR [rax+0x8],cl
0x00839ba4: mov    BYTE PTR [rax+0x9],0x0
0x00839ba8: cmp    rdi,0xf
0x00839bac: jbe    0x140839be3
0x00839bae: lea    rdx,[rdi+0x1]
0x00839bb2: mov    rcx,QWORD PTR [rbp-0x30]
0x00839bb6: mov    rax,rcx
0x00839bb9: cmp    rdx,0x1000
0x00839bc0: jb     0x140839bde
0x00839bc2: add    rdx,0x27
0x00839bc6: mov    rcx,QWORD PTR [rcx-0x8]
0x00839bca: sub    rax,rcx
0x00839bcd: add    rax,0xfffffffffffffff8
0x00839bd1: cmp    rax,0x1f
0x00839bd5: jbe    0x140839bde
0x00839bd7: call   QWORD PTR [rip+0xdabf4b]        # 0x1415e5b28
0x00839bdd: int3
0x00839bde: call   0x141539680
0x00839be3: mov    QWORD PTR [rbp-0x30],rsi
0x00839be7: mov    r8d,0x2
0x00839bed: lea    rdx,[rip+0xddb94c]        # 0x141615540 ; literal=" ("
0x00839bf4: mov    rcx,r12
0x00839bf7: call   0x14006fa10
0x00839bfc: lea    rdx,[rbp-0x30]
0x00839c00: cmp    QWORD PTR [rbp-0x18],0xf
0x00839c05: cmova  rdx,QWORD PTR [rbp-0x30]
0x00839c0a: mov    r8,QWORD PTR [rbp-0x20]
0x00839c0e: mov    rcx,r12
0x00839c11: call   0x14006fa10
0x00839c16: mov    r8d,0x1
0x00839c1c: lea    rdx,[rip+0xddb95d]        # 0x141615580 ; literal=")"
0x00839c23: mov    rcx,r12
0x00839c26: call   0x14006fa10
0x00839c2b: nop
0x00839c2c: mov    rdx,QWORD PTR [rbp-0x18]
0x00839c30: cmp    rdx,0xf
0x00839c34: jbe    0x140839c6a
0x00839c36: inc    rdx
0x00839c39: mov    rcx,QWORD PTR [rbp-0x30]
0x00839c3d: mov    rax,rcx
0x00839c40: cmp    rdx,0x1000
0x00839c47: jb     0x140839c65
0x00839c49: add    rdx,0x27
0x00839c4d: mov    rcx,QWORD PTR [rcx-0x8]
0x00839c51: sub    rax,rcx
0x00839c54: add    rax,0xfffffffffffffff8
0x00839c58: cmp    rax,0x1f
0x00839c5c: jbe    0x140839c65
0x00839c5e: call   QWORD PTR [rip+0xdabec4]        # 0x1415e5b28
0x00839c64: int3
0x00839c65: call   0x141539680
0x00839c6a: mov    rcx,QWORD PTR [rbp-0x10]
0x00839c6e: xor    rcx,rsp
0x00839c71: call   0x141539660
0x00839c76: lea    r11,[rsp+0x50]
0x00839c7b: mov    rbx,QWORD PTR [r11+0x40]
0x00839c7f: mov    rsi,QWORD PTR [r11+0x48]
0x00839c83: mov    rsp,r11
0x00839c86: pop    r15
0x00839c88: pop    r14
0x00839c8a: pop    r12
0x00839c8c: pop    rdi
0x00839c8d: pop    rbp
0x00839c8e: ret
0x00839c8f: call   0x140065890
0x00839c94: nop
