# classic; PE:6a70b91c:0270a000; catalog-refresh; RVA 0x46d660..0x46fa6e; PE disassembly
0x0046d660: mov    QWORD PTR [rsp+0x10],rbx
0x0046d665: mov    QWORD PTR [rsp+0x18],rsi
0x0046d66a: mov    QWORD PTR [rsp+0x20],rdi
0x0046d66f: push   rbp
0x0046d670: push   r12
0x0046d672: push   r13
0x0046d674: push   r14
0x0046d676: push   r15
0x0046d678: lea    rbp,[rsp-0x220]
0x0046d680: sub    rsp,0x320
0x0046d687: mov    rax,QWORD PTR [rip+0x14289b2]        # 0x141896040
0x0046d68e: xor    rax,rsp
0x0046d691: mov    QWORD PTR [rbp+0x218],rax
0x0046d698: mov    r12,rcx
0x0046d69b: mov    QWORD PTR [rsp+0x30],rcx
0x0046d6a0: xor    r13d,r13d
0x0046d6a3: mov    DWORD PTR [rsp+0x38],r13d
0x0046d6a8: call   0x14030ec90
0x0046d6ad: call   0x140e4d200
0x0046d6b2: movsx  ecx,ax
0x0046d6b5: mov    DWORD PTR [r12+0x17c],ecx
0x0046d6bd: call   0x140e4d2e0
0x0046d6c2: movsx  ecx,ax
0x0046d6c5: mov    DWORD PTR [r12+0x180],ecx
0x0046d6cd: xorps  xmm0,xmm0
0x0046d6d0: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046d6d7: mov    esi,0x4
0x0046d6dc: mov    QWORD PTR [rbp+0x170],rsi
0x0046d6e3: mov    QWORD PTR [rbp+0x178],0xf
0x0046d6ee: mov    eax,DWORD PTR [rip+0x1184a40]        # 0x1415f2134 ; literal='Tabs'
0x0046d6f4: mov    DWORD PTR [rbp+0x160],eax
0x0046d6fa: mov    BYTE PTR [rbp+0x164],r13b
0x0046d701: lea    r8,[rbp+0x160]
0x0046d708: lea    rdx,[rbp-0x70]
0x0046d70c: mov    rcx,r12
0x0046d70f: call   0x1400eff90
0x0046d714: nop
0x0046d715: mov    rdx,QWORD PTR [rbp+0x178]
0x0046d71c: cmp    rdx,0xf
0x0046d720: jbe    0x14046d759
0x0046d722: inc    rdx
0x0046d725: mov    rcx,QWORD PTR [rbp+0x160]
0x0046d72c: mov    rax,rcx
0x0046d72f: cmp    rdx,0x1000
0x0046d736: jb     0x14046d754
0x0046d738: add    rdx,0x27
0x0046d73c: mov    rcx,QWORD PTR [rcx-0x8]
0x0046d740: sub    rax,rcx
0x0046d743: add    rax,0xfffffffffffffff8
0x0046d747: cmp    rax,0x1f
0x0046d74b: jbe    0x14046d754
0x0046d74d: call   QWORD PTR [rip+0x117334d]        # 0x1415e0aa0
0x0046d753: int3
0x0046d754: call   0x1415345f0
0x0046d759: mov    rbx,QWORD PTR [rbp-0x70]
0x0046d75d: mov    rax,QWORD PTR [rbx]
0x0046d760: mov    rcx,rbx
0x0046d763: call   QWORD PTR [rax+0x30]
0x0046d766: mov    DWORD PTR [rbx+0x1b0],0x2
0x0046d770: mov    dl,0xd
0x0046d772: mov    rcx,rbx
0x0046d775: call   0x14140b2f0
0x0046d77a: mov    dl,0xd
0x0046d77c: mov    rcx,r12
0x0046d77f: call   0x14140b2f0
0x0046d784: lea    r8,[rip+0x11cc655]        # 0x141639de0 ; literal='Open cases'
0x0046d78b: lea    rdx,[rbp-0x20]
0x0046d78f: mov    rcx,rbx
0x0046d792: call   0x1404825b0
0x0046d797: nop
0x0046d798: xorps  xmm0,xmm0
0x0046d79b: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046d7a2: mov    QWORD PTR [rbp+0x170],0xb
0x0046d7ad: mov    QWORD PTR [rbp+0x178],0xf
0x0046d7b8: movsd  xmm0,QWORD PTR [rip+0x11ca3d8]        # 0x141637b98 ; literal='Right panel'
0x0046d7c0: movsd  QWORD PTR [rbp+0x160],xmm0
0x0046d7c8: movzx  eax,WORD PTR [rip+0x11ca3d1]        # 0x141637ba0 ; literal='nel'
0x0046d7cf: mov    WORD PTR [rbp+0x168],ax
0x0046d7d6: movzx  eax,BYTE PTR [rip+0x11ca3c5]        # 0x141637ba2 ; literal='l'
0x0046d7dd: mov    BYTE PTR [rbp+0x16a],al
0x0046d7e3: mov    BYTE PTR [rbp+0x16b],0x0
0x0046d7ea: lea    r8,[rbp+0x160]
0x0046d7f1: lea    rdx,[rsp+0x70]
0x0046d7f6: mov    rcx,QWORD PTR [rbp-0x20]
0x0046d7fa: call   0x1403c6860
0x0046d7ff: nop
0x0046d800: mov    rdx,QWORD PTR [rbp+0x178]
0x0046d807: cmp    rdx,0xf
0x0046d80b: jbe    0x14046d844
0x0046d80d: inc    rdx
0x0046d810: mov    rcx,QWORD PTR [rbp+0x160]
0x0046d817: mov    rax,rcx
0x0046d81a: cmp    rdx,0x1000
0x0046d821: jb     0x14046d83f
0x0046d823: add    rdx,0x27
0x0046d827: mov    rcx,QWORD PTR [rcx-0x8]
0x0046d82b: sub    rax,rcx
0x0046d82e: add    rax,0xfffffffffffffff8
0x0046d832: cmp    rax,0x1f
0x0046d836: jbe    0x14046d83f
0x0046d838: call   QWORD PTR [rip+0x1173262]        # 0x1415e0aa0
0x0046d83e: int3
0x0046d83f: call   0x1415345f0
0x0046d844: mov    dl,0xf
0x0046d846: mov    rbx,QWORD PTR [rsp+0x70]
0x0046d84b: mov    rcx,rbx
0x0046d84e: call   0x14140b5a0
0x0046d853: mov    DWORD PTR [rbx+0xa8],0x3
0x0046d85d: mov    r14d,0xffffffff
0x0046d863: mov    rcx,QWORD PTR [rsp+0x78]
0x0046d868: test   rcx,rcx
0x0046d86b: je     0x14046d89f
0x0046d86d: mov    eax,r14d
0x0046d870: lock xadd DWORD PTR [rcx+0x8],eax
0x0046d875: cmp    eax,0x1
0x0046d878: jne    0x14046d89f
0x0046d87a: mov    rbx,QWORD PTR [rsp+0x78]
0x0046d87f: mov    rax,QWORD PTR [rbx]
0x0046d882: mov    rcx,rbx
0x0046d885: call   QWORD PTR [rax]
0x0046d887: mov    eax,r14d
0x0046d88a: lock xadd DWORD PTR [rbx+0xc],eax
0x0046d88f: cmp    eax,0x1
0x0046d892: jne    0x14046d89f
0x0046d894: mov    rcx,QWORD PTR [rsp+0x78]
0x0046d899: mov    rax,QWORD PTR [rcx]
0x0046d89c: call   QWORD PTR [rax+0x8]
0x0046d89f: xorps  xmm0,xmm0
0x0046d8a2: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046d8a9: mov    QWORD PTR [rbp+0x170],0x5
0x0046d8b4: mov    QWORD PTR [rbp+0x178],0xf
0x0046d8bf: mov    eax,DWORD PTR [rip+0x11cc513]        # 0x141639dd8 ; literal='Cases'
0x0046d8c5: mov    DWORD PTR [rbp+0x160],eax
0x0046d8cb: movzx  eax,BYTE PTR [rip+0x11cc50a]        # 0x141639ddc ; literal='s'
0x0046d8d2: mov    BYTE PTR [rbp+0x164],al
0x0046d8d8: mov    BYTE PTR [rbp+0x165],0x0
0x0046d8df: lea    r8,[rbp+0x160]
0x0046d8e6: lea    rdx,[rsp+0x70]
0x0046d8eb: mov    rcx,QWORD PTR [rbp-0x20]
0x0046d8ef: call   0x140462bc0
0x0046d8f4: nop
0x0046d8f5: mov    rdx,QWORD PTR [rbp+0x178]
0x0046d8fc: cmp    rdx,0xf
0x0046d900: jbe    0x14046d939
0x0046d902: inc    rdx
0x0046d905: mov    rcx,QWORD PTR [rbp+0x160]
0x0046d90c: mov    rax,rcx
0x0046d90f: cmp    rdx,0x1000
0x0046d916: jb     0x14046d934
0x0046d918: add    rdx,0x27
0x0046d91c: mov    rcx,QWORD PTR [rcx-0x8]
0x0046d920: sub    rax,rcx
0x0046d923: add    rax,0xfffffffffffffff8
0x0046d927: cmp    rax,0x1f
0x0046d92b: jbe    0x14046d934
0x0046d92d: call   QWORD PTR [rip+0x117316d]        # 0x1415e0aa0
0x0046d933: int3
0x0046d934: call   0x1415345f0
0x0046d939: mov    dl,0xe
0x0046d93b: mov    rcx,QWORD PTR [rsp+0x70]
0x0046d940: call   0x14140b5a0
0x0046d945: lea    r8,[rip+0x11cc47c]        # 0x141639dc8 ; literal='Closed cases'
0x0046d94c: lea    rdx,[rbp-0x50]
0x0046d950: mov    rcx,QWORD PTR [rbp-0x70]
0x0046d954: call   0x1404825b0
0x0046d959: nop
0x0046d95a: xorps  xmm0,xmm0
0x0046d95d: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046d964: mov    QWORD PTR [rbp+0x170],0xb
0x0046d96f: mov    QWORD PTR [rbp+0x178],0xf
0x0046d97a: movsd  xmm0,QWORD PTR [rip+0x11ca216]        # 0x141637b98 ; literal='Right panel'
0x0046d982: movsd  QWORD PTR [rbp+0x160],xmm0
0x0046d98a: movzx  eax,WORD PTR [rip+0x11ca20f]        # 0x141637ba0 ; literal='nel'
0x0046d991: mov    WORD PTR [rbp+0x168],ax
0x0046d998: movzx  eax,BYTE PTR [rip+0x11ca203]        # 0x141637ba2 ; literal='l'
0x0046d99f: mov    BYTE PTR [rbp+0x16a],al
0x0046d9a5: mov    BYTE PTR [rbp+0x16b],0x0
0x0046d9ac: lea    r8,[rbp+0x160]
0x0046d9b3: lea    rdx,[rsp+0x60]
0x0046d9b8: mov    rcx,QWORD PTR [rbp-0x50]
0x0046d9bc: call   0x1403c6860
0x0046d9c1: nop
0x0046d9c2: mov    rdx,QWORD PTR [rbp+0x178]
0x0046d9c9: cmp    rdx,0xf
0x0046d9cd: jbe    0x14046da06
0x0046d9cf: inc    rdx
0x0046d9d2: mov    rcx,QWORD PTR [rbp+0x160]
0x0046d9d9: mov    rax,rcx
0x0046d9dc: cmp    rdx,0x1000
0x0046d9e3: jb     0x14046da01
0x0046d9e5: add    rdx,0x27
0x0046d9e9: mov    rcx,QWORD PTR [rcx-0x8]
0x0046d9ed: sub    rax,rcx
0x0046d9f0: add    rax,0xfffffffffffffff8
0x0046d9f4: cmp    rax,0x1f
0x0046d9f8: jbe    0x14046da01
0x0046d9fa: call   QWORD PTR [rip+0x11730a0]        # 0x1415e0aa0
0x0046da00: int3
0x0046da01: call   0x1415345f0
0x0046da06: mov    dl,0xf
0x0046da08: mov    rbx,QWORD PTR [rsp+0x60]
0x0046da0d: mov    rcx,rbx
0x0046da10: call   0x14140b5a0
0x0046da15: mov    DWORD PTR [rbx+0xa8],0x3
0x0046da1f: mov    rcx,QWORD PTR [rsp+0x68]
0x0046da24: test   rcx,rcx
0x0046da27: je     0x14046da5b
0x0046da29: mov    eax,r14d
0x0046da2c: lock xadd DWORD PTR [rcx+0x8],eax
0x0046da31: cmp    eax,0x1
0x0046da34: jne    0x14046da5b
0x0046da36: mov    rbx,QWORD PTR [rsp+0x68]
0x0046da3b: mov    rax,QWORD PTR [rbx]
0x0046da3e: mov    rcx,rbx
0x0046da41: call   QWORD PTR [rax]
0x0046da43: mov    eax,r14d
0x0046da46: lock xadd DWORD PTR [rbx+0xc],eax
0x0046da4b: cmp    eax,0x1
0x0046da4e: jne    0x14046da5b
0x0046da50: mov    rcx,QWORD PTR [rsp+0x68]
0x0046da55: mov    rax,QWORD PTR [rcx]
0x0046da58: call   QWORD PTR [rax+0x8]
0x0046da5b: xorps  xmm0,xmm0
0x0046da5e: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046da65: mov    QWORD PTR [rbp+0x170],0x5
0x0046da70: mov    QWORD PTR [rbp+0x178],0xf
0x0046da7b: mov    eax,DWORD PTR [rip+0x11cc357]        # 0x141639dd8 ; literal='Cases'
0x0046da81: mov    DWORD PTR [rbp+0x160],eax
0x0046da87: movzx  eax,BYTE PTR [rip+0x11cc34e]        # 0x141639ddc ; literal='s'
0x0046da8e: mov    BYTE PTR [rbp+0x164],al
0x0046da94: mov    BYTE PTR [rbp+0x165],0x0
0x0046da9b: lea    r8,[rbp+0x160]
0x0046daa2: lea    rdx,[rbp-0x30]
0x0046daa6: mov    rcx,QWORD PTR [rbp-0x50]
0x0046daaa: call   0x140462bc0
0x0046daaf: nop
0x0046dab0: mov    rdx,QWORD PTR [rbp+0x178]
0x0046dab7: cmp    rdx,0xf
0x0046dabb: jbe    0x14046daf4
0x0046dabd: inc    rdx
0x0046dac0: mov    rcx,QWORD PTR [rbp+0x160]
0x0046dac7: mov    rax,rcx
0x0046daca: cmp    rdx,0x1000
0x0046dad1: jb     0x14046daef
0x0046dad3: add    rdx,0x27
0x0046dad7: mov    rcx,QWORD PTR [rcx-0x8]
0x0046dadb: sub    rax,rcx
0x0046dade: add    rax,0xfffffffffffffff8
0x0046dae2: cmp    rax,0x1f
0x0046dae6: jbe    0x14046daef
0x0046dae8: call   QWORD PTR [rip+0x1172fb2]        # 0x1415e0aa0
0x0046daee: int3
0x0046daef: call   0x1415345f0
0x0046daf4: mov    dl,0xe
0x0046daf6: mov    rcx,QWORD PTR [rbp-0x30]
0x0046dafa: call   0x14140b5a0
0x0046daff: lea    r8,[rip+0x11cc34a]        # 0x141639e50 ; literal='Cold cases'
0x0046db06: lea    rdx,[rbp-0x40]
0x0046db0a: mov    rcx,QWORD PTR [rbp-0x70]
0x0046db0e: call   0x1404825b0
0x0046db13: nop
0x0046db14: xorps  xmm0,xmm0
0x0046db17: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046db1e: mov    QWORD PTR [rbp+0x170],0xb
0x0046db29: mov    QWORD PTR [rbp+0x178],0xf
0x0046db34: movsd  xmm0,QWORD PTR [rip+0x11ca05c]        # 0x141637b98 ; literal='Right panel'
0x0046db3c: movsd  QWORD PTR [rbp+0x160],xmm0
0x0046db44: movzx  eax,WORD PTR [rip+0x11ca055]        # 0x141637ba0 ; literal='nel'
0x0046db4b: mov    WORD PTR [rbp+0x168],ax
0x0046db52: movzx  eax,BYTE PTR [rip+0x11ca049]        # 0x141637ba2 ; literal='l'
0x0046db59: mov    BYTE PTR [rbp+0x16a],al
0x0046db5f: mov    BYTE PTR [rbp+0x16b],0x0
0x0046db66: lea    r8,[rbp+0x160]
0x0046db6d: lea    rdx,[rsp+0x60]
0x0046db72: mov    rcx,QWORD PTR [rbp-0x40]
0x0046db76: call   0x1403c6860
0x0046db7b: nop
0x0046db7c: mov    rdx,QWORD PTR [rbp+0x178]
0x0046db83: cmp    rdx,0xf
0x0046db87: jbe    0x14046dbc0
0x0046db89: inc    rdx
0x0046db8c: mov    rcx,QWORD PTR [rbp+0x160]
0x0046db93: mov    rax,rcx
0x0046db96: cmp    rdx,0x1000
0x0046db9d: jb     0x14046dbbb
0x0046db9f: add    rdx,0x27
0x0046dba3: mov    rcx,QWORD PTR [rcx-0x8]
0x0046dba7: sub    rax,rcx
0x0046dbaa: add    rax,0xfffffffffffffff8
0x0046dbae: cmp    rax,0x1f
0x0046dbb2: jbe    0x14046dbbb
0x0046dbb4: call   QWORD PTR [rip+0x1172ee6]        # 0x1415e0aa0
0x0046dbba: int3
0x0046dbbb: call   0x1415345f0
0x0046dbc0: mov    dl,0xf
0x0046dbc2: mov    rbx,QWORD PTR [rsp+0x60]
0x0046dbc7: mov    rcx,rbx
0x0046dbca: call   0x14140b5a0
0x0046dbcf: mov    DWORD PTR [rbx+0xa8],0x3
0x0046dbd9: mov    rcx,QWORD PTR [rsp+0x68]
0x0046dbde: test   rcx,rcx
0x0046dbe1: je     0x14046dc15
0x0046dbe3: mov    eax,r14d
0x0046dbe6: lock xadd DWORD PTR [rcx+0x8],eax
0x0046dbeb: cmp    eax,0x1
0x0046dbee: jne    0x14046dc15
0x0046dbf0: mov    rbx,QWORD PTR [rsp+0x68]
0x0046dbf5: mov    rax,QWORD PTR [rbx]
0x0046dbf8: mov    rcx,rbx
0x0046dbfb: call   QWORD PTR [rax]
0x0046dbfd: mov    eax,r14d
0x0046dc00: lock xadd DWORD PTR [rbx+0xc],eax
0x0046dc05: cmp    eax,0x1
0x0046dc08: jne    0x14046dc15
0x0046dc0a: mov    rcx,QWORD PTR [rsp+0x68]
0x0046dc0f: mov    rax,QWORD PTR [rcx]
0x0046dc12: call   QWORD PTR [rax+0x8]
0x0046dc15: xorps  xmm0,xmm0
0x0046dc18: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046dc1f: mov    QWORD PTR [rbp+0x170],0x5
0x0046dc2a: mov    QWORD PTR [rbp+0x178],0xf
0x0046dc35: mov    eax,DWORD PTR [rip+0x11cc19d]        # 0x141639dd8 ; literal='Cases'
0x0046dc3b: mov    DWORD PTR [rbp+0x160],eax
0x0046dc41: movzx  eax,BYTE PTR [rip+0x11cc194]        # 0x141639ddc ; literal='s'
0x0046dc48: mov    BYTE PTR [rbp+0x164],al
0x0046dc4e: mov    BYTE PTR [rbp+0x165],0x0
0x0046dc55: lea    r8,[rbp+0x160]
0x0046dc5c: lea    rdx,[rsp+0x60]
0x0046dc61: mov    rcx,QWORD PTR [rbp-0x40]
0x0046dc65: call   0x140462bc0
0x0046dc6a: nop
0x0046dc6b: mov    rdx,QWORD PTR [rbp+0x178]
0x0046dc72: cmp    rdx,0xf
0x0046dc76: jbe    0x14046dcaf
0x0046dc78: inc    rdx
0x0046dc7b: mov    rcx,QWORD PTR [rbp+0x160]
0x0046dc82: mov    rax,rcx
0x0046dc85: cmp    rdx,0x1000
0x0046dc8c: jb     0x14046dcaa
0x0046dc8e: add    rdx,0x27
0x0046dc92: mov    rcx,QWORD PTR [rcx-0x8]
0x0046dc96: sub    rax,rcx
0x0046dc99: add    rax,0xfffffffffffffff8
0x0046dc9d: cmp    rax,0x1f
0x0046dca1: jbe    0x14046dcaa
0x0046dca3: call   QWORD PTR [rip+0x1172df7]        # 0x1415e0aa0
0x0046dca9: int3
0x0046dcaa: call   0x1415345f0
0x0046dcaf: mov    dl,0xe
0x0046dcb1: mov    rcx,QWORD PTR [rsp+0x60]
0x0046dcb6: call   0x14140b5a0
0x0046dcbb: lea    r8,[rip+0x11cc17e]        # 0x141639e40 ; literal='Fortress guard'
0x0046dcc2: lea    rdx,[rbp+0x30]
0x0046dcc6: mov    rcx,QWORD PTR [rbp-0x70]
0x0046dcca: call   0x1404825b0
0x0046dccf: nop
0x0046dcd0: mov    dl,0xd
0x0046dcd2: mov    r15,QWORD PTR [rbp+0x30]
0x0046dcd6: mov    rcx,r15
0x0046dcd9: call   0x14140b5a0
0x0046dcde: mov    BYTE PTR [rbp+0x16f],0x0
0x0046dce5: mov    QWORD PTR [rbp+0x170],0xf
0x0046dcf0: mov    QWORD PTR [rbp+0x178],0xf
0x0046dcfb: movsd  xmm0,QWORD PTR [rip+0x11cc12d]        # 0x141639e30 ; literal='Cage/Chain Reqs'
0x0046dd03: movsd  QWORD PTR [rbp+0x160],xmm0
0x0046dd0b: mov    eax,DWORD PTR [rip+0x11cc127]        # 0x141639e38 ; literal='in Reqs'
0x0046dd11: mov    DWORD PTR [rbp+0x168],eax
0x0046dd17: movzx  eax,WORD PTR [rip+0x11cc11e]        # 0x141639e3c ; literal='eqs'
0x0046dd1e: mov    WORD PTR [rbp+0x16c],ax
0x0046dd25: movzx  eax,BYTE PTR [rip+0x11cc112]        # 0x141639e3e ; literal='s'
0x0046dd2c: mov    BYTE PTR [rbp+0x16e],al
0x0046dd32: mov    BYTE PTR [rbp+0x16f],0x0
0x0046dd39: lea    r8,[rbp+0x160]
0x0046dd40: lea    rdx,[rbp+0x20]
0x0046dd44: mov    rcx,r15
0x0046dd47: call   0x140462fc0
0x0046dd4c: nop
0x0046dd4d: mov    rdx,QWORD PTR [rbp+0x178]
0x0046dd54: cmp    rdx,0xf
0x0046dd58: jbe    0x14046dd91
0x0046dd5a: inc    rdx
0x0046dd5d: mov    rcx,QWORD PTR [rbp+0x160]
0x0046dd64: mov    rax,rcx
0x0046dd67: cmp    rdx,0x1000
0x0046dd6e: jb     0x14046dd8c
0x0046dd70: add    rdx,0x27
0x0046dd74: mov    rcx,QWORD PTR [rcx-0x8]
0x0046dd78: sub    rax,rcx
0x0046dd7b: add    rax,0xfffffffffffffff8
0x0046dd7f: cmp    rax,0x1f
0x0046dd83: jbe    0x14046dd8c
0x0046dd85: call   QWORD PTR [rip+0x1172d15]        # 0x1415e0aa0
0x0046dd8b: int3
0x0046dd8c: call   0x1415345f0
0x0046dd91: call   0x140e4d200
0x0046dd96: movsx  edi,ax
0x0046dd99: call   0x140e4d2e0
0x0046dd9e: movsx  ebx,ax
0x0046dda1: xorps  xmm0,xmm0
0x0046dda4: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046ddab: mov    QWORD PTR [rbp+0x170],r13
0x0046ddb2: mov    QWORD PTR [rbp+0x178],r13
0x0046ddb9: mov    ecx,0x30
0x0046ddbe: call   0x140070760
0x0046ddc3: mov    rcx,rax
0x0046ddc6: mov    QWORD PTR [rbp+0x160],rax
0x0046ddcd: mov    QWORD PTR [rbp+0x170],0x2c
0x0046ddd8: mov    QWORD PTR [rbp+0x178],0x2f
0x0046dde3: movups xmm0,XMMWORD PTR [rip+0x11cc016]        # 0x141639e00 ; literal='Desired metal cages and chains in dungeons: '
0x0046ddea: movups XMMWORD PTR [rax],xmm0
0x0046dded: movups xmm1,XMMWORD PTR [rip+0x11cc01c]        # 0x141639e10 ; literal='ges and chains in dungeons: '
0x0046ddf4: movups XMMWORD PTR [rax+0x10],xmm1
0x0046ddf8: movsd  xmm0,QWORD PTR [rip+0x11cc020]        # 0x141639e20 ; literal='n dungeons: '
0x0046de00: movsd  QWORD PTR [rax+0x20],xmm0
0x0046de05: mov    eax,DWORD PTR [rip+0x11cc01d]        # 0x141639e28 ; literal='ns: '
0x0046de0b: mov    DWORD PTR [rcx+0x28],eax
0x0046de0e: mov    BYTE PTR [rcx+0x2c],0x0
0x0046de12: mov    ecx,ebx
0x0046de14: lea    rdx,[rbp+0x160]
0x0046de1b: call   0x140529cf0
0x0046de20: mov    r8,rsi
0x0046de23: lea    rdx,[rip+0x11786a6]        # 0x1415e64d0 ; literal=' of '
0x0046de2a: lea    rcx,[rbp+0x160]
0x0046de31: call   0x14006f9a0
0x0046de36: mov    ecx,edi
0x0046de38: lea    rdx,[rbp+0x160]
0x0046de3f: call   0x140529cf0
0x0046de44: mov    rsi,QWORD PTR [rbp+0x20]
0x0046de48: mov    rax,QWORD PTR [rsi]
0x0046de4b: lea    rdx,[rbp+0x160]
0x0046de52: mov    rcx,rsi
0x0046de55: call   QWORD PTR [rax+0x48]
0x0046de58: mov    BYTE PTR [rsi+0x174],0x1
0x0046de5f: cmp    bx,di
0x0046de62: mov    ebx,0x2
0x0046de67: jl     0x14046de71
0x0046de69: mov    DWORD PTR [rsi+0x170],ebx
0x0046de6f: jmp    0x14046de7b
0x0046de71: mov    DWORD PTR [rsi+0x170],0x4
0x0046de7b: lea    rcx,[rbp+0x160]
0x0046de82: call   0x14006f7e0
0x0046de87: xorps  xmm0,xmm0
0x0046de8a: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046de91: mov    QWORD PTR [rbp+0x170],0xb
0x0046de9c: mov    QWORD PTR [rbp+0x178],0xf
0x0046dea7: movsd  xmm0,QWORD PTR [rip+0x11cbe71]        # 0x141639d20 ; literal='Guards List'
0x0046deaf: movsd  QWORD PTR [rbp+0x160],xmm0
0x0046deb7: movzx  eax,WORD PTR [rip+0x11cbe6a]        # 0x141639d28 ; literal='ist'
0x0046debe: mov    WORD PTR [rbp+0x168],ax
0x0046dec5: movzx  eax,BYTE PTR [rip+0x11cbe5e]        # 0x141639d2a ; literal='t'
0x0046decc: mov    BYTE PTR [rbp+0x16a],al
0x0046ded2: mov    BYTE PTR [rbp+0x16b],0x0
0x0046ded9: lea    r8,[rbp+0x160]
0x0046dee0: lea    rdx,[rbp-0x60]
0x0046dee4: mov    rcx,r15
0x0046dee7: call   0x1403c5e10
0x0046deec: nop
0x0046deed: mov    rdx,QWORD PTR [rbp+0x178]
0x0046def4: cmp    rdx,0xf
0x0046def8: jbe    0x14046df31
0x0046defa: inc    rdx
0x0046defd: mov    rcx,QWORD PTR [rbp+0x160]
0x0046df04: mov    rax,rcx
0x0046df07: cmp    rdx,0x1000
0x0046df0e: jb     0x14046df2c
0x0046df10: add    rdx,0x27
0x0046df14: mov    rcx,QWORD PTR [rcx-0x8]
0x0046df18: sub    rax,rcx
0x0046df1b: add    rax,0xfffffffffffffff8
0x0046df1f: cmp    rax,0x1f
0x0046df23: jbe    0x14046df2c
0x0046df25: call   QWORD PTR [rip+0x1172b75]        # 0x1415e0aa0
0x0046df2b: int3
0x0046df2c: call   0x1415345f0
0x0046df31: mov    dl,0xd
0x0046df33: mov    rdi,QWORD PTR [rbp-0x60]
0x0046df37: mov    rcx,rdi
0x0046df3a: call   0x14140b5a0
0x0046df3f: mov    DWORD PTR [rdi+0xb0],ebx
0x0046df45: lea    r8,[rip+0x11cbdc4]        # 0x141639d10 ; literal='Convicts'
0x0046df4c: lea    rdx,[rbp+0x10]
0x0046df50: mov    rcx,QWORD PTR [rbp-0x70]
0x0046df54: call   0x1404825b0
0x0046df59: nop
0x0046df5a: mov    dl,0xd
0x0046df5c: mov    rbx,QWORD PTR [rbp+0x10]
0x0046df60: mov    rcx,rbx
0x0046df63: call   0x14140b2f0
0x0046df68: xor    r15d,r15d
0x0046df6b: mov    DWORD PTR [rbp+0x16c],r15d
0x0046df72: mov    QWORD PTR [rbp+0x170],0xc
0x0046df7d: mov    QWORD PTR [rbp+0x178],0xf
0x0046df88: movsd  xmm0,QWORD PTR [rip+0x11cbd70]        # 0x141639d00 ; literal='Convict list'
0x0046df90: movsd  QWORD PTR [rbp+0x160],xmm0
0x0046df98: mov    eax,DWORD PTR [rip+0x11cbd6a]        # 0x141639d08 ; literal='list'
0x0046df9e: mov    DWORD PTR [rbp+0x168],eax
0x0046dfa4: mov    BYTE PTR [rbp+0x16c],r15b
0x0046dfab: lea    r8,[rbp+0x160]
0x0046dfb2: lea    rdx,[rbp-0x80]
0x0046dfb6: call   0x1403c5e10
0x0046dfbb: nop
0x0046dfbc: mov    rdx,QWORD PTR [rbp+0x178]
0x0046dfc3: cmp    rdx,0xf
0x0046dfc7: jbe    0x14046e000
0x0046dfc9: inc    rdx
0x0046dfcc: mov    rcx,QWORD PTR [rbp+0x160]
0x0046dfd3: mov    rax,rcx
0x0046dfd6: cmp    rdx,0x1000
0x0046dfdd: jb     0x14046dffb
0x0046dfdf: add    rdx,0x27
0x0046dfe3: mov    rcx,QWORD PTR [rcx-0x8]
0x0046dfe7: sub    rax,rcx
0x0046dfea: add    rax,0xfffffffffffffff8
0x0046dfee: cmp    rax,0x1f
0x0046dff2: jbe    0x14046dffb
0x0046dff4: call   QWORD PTR [rip+0x1172aa6]        # 0x1415e0aa0
0x0046dffa: int3
0x0046dffb: call   0x1415345f0
0x0046e000: mov    dl,0xe
0x0046e002: mov    rcx,QWORD PTR [rbp-0x80]
0x0046e006: call   0x14140b5a0
0x0046e00b: xorps  xmm0,xmm0
0x0046e00e: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046e015: mov    QWORD PTR [rbp+0x170],0xb
0x0046e020: mov    QWORD PTR [rbp+0x178],0xf
0x0046e02b: movsd  xmm0,QWORD PTR [rip+0x11c9b65]        # 0x141637b98 ; literal='Right panel'
0x0046e033: movsd  QWORD PTR [rbp+0x160],xmm0
0x0046e03b: movzx  eax,WORD PTR [rip+0x11c9b5e]        # 0x141637ba0 ; literal='nel'
0x0046e042: mov    WORD PTR [rbp+0x168],ax
0x0046e049: movzx  eax,BYTE PTR [rip+0x11c9b52]        # 0x141637ba2 ; literal='l'
0x0046e050: mov    BYTE PTR [rbp+0x16a],al
0x0046e056: mov    BYTE PTR [rbp+0x16b],0x0
0x0046e05d: lea    r8,[rbp+0x160]
0x0046e064: lea    rdx,[rsp+0x50]
0x0046e069: mov    rcx,rbx
0x0046e06c: call   0x140482800
0x0046e071: nop
0x0046e072: mov    rdx,QWORD PTR [rbp+0x178]
0x0046e079: cmp    rdx,0xf
0x0046e07d: jbe    0x14046e0b6
0x0046e07f: inc    rdx
0x0046e082: mov    rcx,QWORD PTR [rbp+0x160]
0x0046e089: mov    rax,rcx
0x0046e08c: cmp    rdx,0x1000
0x0046e093: jb     0x14046e0b1
0x0046e095: add    rdx,0x27
0x0046e099: mov    rcx,QWORD PTR [rcx-0x8]
0x0046e09d: sub    rax,rcx
0x0046e0a0: add    rax,0xfffffffffffffff8
0x0046e0a4: cmp    rax,0x1f
0x0046e0a8: jbe    0x14046e0b1
0x0046e0aa: call   QWORD PTR [rip+0x11729f0]        # 0x1415e0aa0
0x0046e0b0: int3
0x0046e0b1: call   0x1415345f0
0x0046e0b6: mov    dl,0xf
0x0046e0b8: mov    rbx,QWORD PTR [rsp+0x50]
0x0046e0bd: mov    rcx,rbx
0x0046e0c0: call   0x14140b5a0
0x0046e0c5: mov    DWORD PTR [rbx+0xa8],0x4
0x0046e0cf: xorps  xmm2,xmm2
0x0046e0d2: movdqa XMMWORD PTR [rsp+0x20],xmm2
0x0046e0d8: mov    rcx,QWORD PTR [rsp+0x58]
0x0046e0dd: test   rcx,rcx
0x0046e0e0: je     0x14046e0f7
0x0046e0e2: movaps xmm0,XMMWORD PTR [rsp+0x50]
0x0046e0e7: movdqa XMMWORD PTR [rsp+0x20],xmm0
0x0046e0ed: lock inc DWORD PTR [rcx+0xc]
0x0046e0f1: movdqa xmm2,XMMWORD PTR [rsp+0x20]
0x0046e0f7: mov    r9,QWORD PTR [rbp-0x80]
0x0046e0fb: xorps  xmm0,xmm0
0x0046e0fe: movdqa XMMWORD PTR [rbp+0x180],xmm0
0x0046e106: movdqa xmm1,xmm2
0x0046e10a: psrldq xmm1,0x8
0x0046e10f: movq   rbx,xmm1
0x0046e114: test   rbx,rbx
0x0046e117: je     0x14046e12a
0x0046e119: movdqa XMMWORD PTR [rbp+0x180],xmm2
0x0046e121: lock inc DWORD PTR [rbx+0xc]
0x0046e125: mov    rbx,QWORD PTR [rsp+0x28]
0x0046e12a: mov    rdx,QWORD PTR [r9+0x240]
0x0046e131: cmp    rdx,QWORD PTR [r9+0x248]
0x0046e138: je     0x14046e172
0x0046e13a: lea    rax,[rip+0x11ce51f]        # 0x14163c660
0x0046e141: mov    QWORD PTR [rdx],rax
0x0046e144: mov    rax,QWORD PTR [rbp+0x180]
0x0046e14b: mov    QWORD PTR [rdx+0x8],rax
0x0046e14f: mov    rax,QWORD PTR [rbp+0x188]
0x0046e156: mov    QWORD PTR [rdx+0x10],rax
0x0046e15a: mov    rcx,r15
0x0046e15d: mov    QWORD PTR [rbp+0x188],rcx
0x0046e164: mov    QWORD PTR [rdx+0x38],rdx
0x0046e168: add    QWORD PTR [r9+0x240],0x40
0x0046e170: jmp    0x14046e18c
0x0046e172: lea    r8,[rbp+0x180]
0x0046e179: lea    rcx,[r9+0x238]
0x0046e180: call   0x140483b20
0x0046e185: mov    rcx,QWORD PTR [rbp+0x188]
0x0046e18c: test   rcx,rcx
0x0046e18f: je     0x14046e1b0
0x0046e191: mov    eax,r14d
0x0046e194: lock xadd DWORD PTR [rcx+0xc],eax
0x0046e199: cmp    eax,0x1
0x0046e19c: jne    0x14046e1ab
0x0046e19e: mov    rcx,QWORD PTR [rbp+0x188]
0x0046e1a5: mov    rax,QWORD PTR [rcx]
0x0046e1a8: call   QWORD PTR [rax+0x8]
0x0046e1ab: mov    rbx,QWORD PTR [rsp+0x28]
0x0046e1b0: test   rbx,rbx
0x0046e1b3: je     0x14046e1ce
0x0046e1b5: mov    eax,r14d
0x0046e1b8: lock xadd DWORD PTR [rbx+0xc],eax
0x0046e1bd: cmp    eax,0x1
0x0046e1c0: jne    0x14046e1ce
0x0046e1c2: mov    rcx,QWORD PTR [rsp+0x28]
0x0046e1c7: mov    rax,QWORD PTR [rcx]
0x0046e1ca: call   QWORD PTR [rax+0x8]
0x0046e1cd: nop
0x0046e1ce: mov    rcx,QWORD PTR [rsp+0x58]
0x0046e1d3: test   rcx,rcx
0x0046e1d6: je     0x14046e20a
0x0046e1d8: mov    eax,r14d
0x0046e1db: lock xadd DWORD PTR [rcx+0x8],eax
0x0046e1e0: cmp    eax,0x1
0x0046e1e3: jne    0x14046e20a
0x0046e1e5: mov    rbx,QWORD PTR [rsp+0x58]
0x0046e1ea: mov    rax,QWORD PTR [rbx]
0x0046e1ed: mov    rcx,rbx
0x0046e1f0: call   QWORD PTR [rax]
0x0046e1f2: mov    eax,r14d
0x0046e1f5: lock xadd DWORD PTR [rbx+0xc],eax
0x0046e1fa: cmp    eax,0x1
0x0046e1fd: jne    0x14046e20a
0x0046e1ff: mov    rcx,QWORD PTR [rsp+0x58]
0x0046e204: mov    rax,QWORD PTR [rcx]
0x0046e207: call   QWORD PTR [rax+0x8]
0x0046e20a: lea    rdx,[rbp+0x0]
0x0046e20e: mov    rcx,QWORD PTR [rbp-0x70]
0x0046e212: call   0x140482ad0
0x0046e217: nop
0x0046e218: mov    dl,0xd
0x0046e21a: mov    rcx,QWORD PTR [rbp+0x0]
0x0046e21e: call   0x14140b2f0
0x0046e223: movdqa xmm0,XMMWORD PTR [rip+0x1317e15]        # 0x141786040
0x0046e22b: movdqu XMMWORD PTR [rbp+0x160],xmm0
0x0046e233: mov    DWORD PTR [rbp+0x170],0xd
0x0046e23d: mov    DWORD PTR [rbp+0x174],0xf
0x0046e247: xorps  xmm0,xmm0
0x0046e24a: movdqu XMMWORD PTR [rbp+0x1a0],xmm0
0x0046e252: mov    ecx,0x18
0x0046e257: call   0x140070760
0x0046e25c: mov    rbx,rax
0x0046e25f: mov    QWORD PTR [rbp+0x1a0],rax
0x0046e266: lea    rcx,[rax+0x18]
0x0046e26a: mov    QWORD PTR [rbp+0x1b0],rcx
0x0046e271: mov    r8d,0x18
0x0046e277: lea    rdx,[rbp+0x160]
0x0046e27e: mov    rcx,rax
0x0046e281: call   0x141535d8a
0x0046e286: lea    rax,[rbx+0x18]
0x0046e28a: mov    QWORD PTR [rbp+0x1a8],rax
0x0046e291: lea    rdx,[rbp+0x1a0]
0x0046e298: mov    rcx,QWORD PTR [rbp-0x80]
0x0046e29c: call   0x141420170
0x0046e2a1: nop
0x0046e2a2: mov    rcx,QWORD PTR [rbp+0x1a0]
0x0046e2a9: test   rcx,rcx
0x0046e2ac: je     0x14046e2f1
0x0046e2ae: mov    rax,QWORD PTR [rbp+0x1b0]
0x0046e2b5: sub    rax,rcx
0x0046e2b8: sar    rax,0x2
0x0046e2bc: lea    rdx,[rax*4+0x0]
0x0046e2c4: mov    rax,rcx
0x0046e2c7: cmp    rdx,0x1000
0x0046e2ce: jb     0x14046e2ec
0x0046e2d0: add    rdx,0x27
0x0046e2d4: mov    rcx,QWORD PTR [rcx-0x8]
0x0046e2d8: sub    rax,rcx
0x0046e2db: add    rax,0xfffffffffffffff8
0x0046e2df: cmp    rax,0x1f
0x0046e2e3: jbe    0x14046e2ec
0x0046e2e5: call   QWORD PTR [rip+0x11727b5]        # 0x1415e0aa0
0x0046e2eb: int3
0x0046e2ec: call   0x1415345f0
0x0046e2f1: mov    r13,QWORD PTR [rbp-0x80]
0x0046e2f5: add    r13,0x2d8
0x0046e2fc: mov    rax,QWORD PTR [r13+0x0]
0x0046e300: cmp    rax,QWORD PTR [r13+0x8]
0x0046e304: je     0x14046e30a
0x0046e306: mov    QWORD PTR [r13+0x8],rax
0x0046e30a: lea    rcx,[rbp+0xe0]
0x0046e311: call   0x1400ec340
0x0046e316: nop
0x0046e317: mov    rbx,QWORD PTR [rip+0x207391a]        # 0x1424e1c38
0x0046e31e: mov    rdi,QWORD PTR [rip+0x207391b]        # 0x1424e1c40
0x0046e325: cmp    rbx,rdi
0x0046e328: je     0x14046e927
0x0046e32e: lea    r12,[rip+0x11ce39b]        # 0x14163c6d0
0x0046e335: mov    r9,QWORD PTR [rbx]
0x0046e338: test   BYTE PTR [r9+0xa0],0x2
0x0046e340: je     0x14046e915
0x0046e346: mov    eax,DWORD PTR [rip+0x1f1f218]        # 0x14238d564
0x0046e34c: cmp    DWORD PTR [r9+0xb8],eax
0x0046e353: jne    0x14046e915
0x0046e359: mov    eax,DWORD PTR [rip+0x1f1f209]        # 0x14238d568
0x0046e35f: cmp    DWORD PTR [r9+0xbc],eax
0x0046e366: jne    0x14046e915
0x0046e36c: mov    r9d,DWORD PTR [r9+0x40]
0x0046e370: mov    rax,QWORD PTR [rip+0x1f70c31]        # 0x1423defa8
0x0046e377: mov    rsi,QWORD PTR [rip+0x1f70c22]        # 0x1423defa0
0x0046e37e: sub    rax,rsi
0x0046e381: sar    rax,0x3
0x0046e385: test   eax,eax
0x0046e387: je     0x14046e3f0
0x0046e389: cmp    r9d,0xffffffff
0x0046e38d: je     0x14046e3f0
0x0046e38f: sub    eax,0x1
0x0046e392: mov    edx,r15d
0x0046e395: js     0x14046e3c9
0x0046e397: nop    WORD PTR [rax+rax*1+0x0]
0x0046e3a0: mov    r11d,eax
0x0046e3a3: lea    ecx,[rdx+rax*1]
0x0046e3a6: sar    ecx,1
0x0046e3a8: movsxd rax,ecx
0x0046e3ab: mov    r10,QWORD PTR [rsi+rax*8]
0x0046e3af: cmp    DWORD PTR [r10+0x130],r9d
0x0046e3b6: je     0x14046e3cc
0x0046e3b8: lea    eax,[rcx+0x1]
0x0046e3bb: cmovle edx,eax
0x0046e3be: lea    eax,[rcx-0x1]
0x0046e3c1: cmovle eax,r11d
0x0046e3c5: cmp    edx,eax
0x0046e3c7: jle    0x14046e3a0
0x0046e3c9: mov    r10,r15
0x0046e3cc: mov    QWORD PTR [rsp+0x38],r10
0x0046e3d1: test   r10,r10
0x0046e3d4: je     0x14046e3f5
0x0046e3d6: lea    r8,[rsp+0x38]
0x0046e3db: lea    rdx,[rbp+0x1a0]
0x0046e3e2: lea    rcx,[rbp+0xe0]
0x0046e3e9: call   0x1400ec910
0x0046e3ee: jmp    0x14046e3f5
0x0046e3f0: mov    QWORD PTR [rsp+0x38],r15
0x0046e3f5: mov    rdx,QWORD PTR [rbx]
0x0046e3f8: lea    rcx,[rbp+0x1f8]
0x0046e3ff: call   0x14046b220
0x0046e404: nop
0x0046e405: mov    r15,QWORD PTR [rbx]
0x0046e408: test   BYTE PTR [r15+0xa0],0x4
0x0046e410: je     0x14046e966
0x0046e416: mov    r9d,DWORD PTR [r15+0x40]
0x0046e41a: mov    rax,QWORD PTR [rip+0x1f70b87]        # 0x1423defa8
0x0046e421: mov    rsi,QWORD PTR [rip+0x1f70b78]        # 0x1423defa0
0x0046e428: sub    rax,rsi
0x0046e42b: sar    rax,0x3
0x0046e42f: test   eax,eax
0x0046e431: je     0x14046e688
0x0046e437: cmp    r9d,0xffffffff
0x0046e43b: je     0x14046e688
0x0046e441: xor    edx,edx
0x0046e443: sub    eax,0x1
0x0046e446: js     0x14046e479
0x0046e448: nop    DWORD PTR [rax+rax*1+0x0]
0x0046e450: mov    r11d,eax
0x0046e453: lea    ecx,[rdx+rax*1]
0x0046e456: sar    ecx,1
0x0046e458: movsxd rax,ecx
0x0046e45b: mov    r10,QWORD PTR [rsi+rax*8]
0x0046e45f: cmp    DWORD PTR [r10+0x130],r9d
0x0046e466: je     0x14046e47c
0x0046e468: lea    eax,[rcx+0x1]
0x0046e46b: cmovle edx,eax
0x0046e46e: lea    eax,[rcx-0x1]
0x0046e471: cmovle eax,r11d
0x0046e475: cmp    edx,eax
0x0046e477: jle    0x14046e450
0x0046e479: xor    r10d,r10d
0x0046e47c: test   r10,r10
0x0046e47f: je     0x14046e688
0x0046e485: xorps  xmm0,xmm0
0x0046e488: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046e48f: mov    QWORD PTR [rbp+0x170],0xb
0x0046e49a: mov    QWORD PTR [rbp+0x178],0xf
0x0046e4a5: movsd  xmm0,QWORD PTR [rip+0x11c96eb]        # 0x141637b98 ; literal='Right panel'
0x0046e4ad: movsd  QWORD PTR [rbp+0x160],xmm0
0x0046e4b5: movzx  eax,WORD PTR [rip+0x11c96e4]        # 0x141637ba0 ; literal='nel'
0x0046e4bc: mov    WORD PTR [rbp+0x168],ax
0x0046e4c3: movzx  eax,BYTE PTR [rip+0x11c96d8]        # 0x141637ba2 ; literal='l'
0x0046e4ca: mov    BYTE PTR [rbp+0x16a],al
0x0046e4d0: mov    BYTE PTR [rbp+0x16b],0x0
0x0046e4d7: lea    r8,[rbp+0x160]
0x0046e4de: lea    rdx,[rbp-0x10]
0x0046e4e2: mov    rcx,QWORD PTR [rbp-0x50]
0x0046e4e6: call   0x1403c6860
0x0046e4eb: xorps  xmm0,xmm0
0x0046e4ee: movdqu XMMWORD PTR [rsp+0x20],xmm0
0x0046e4f4: mov    rcx,QWORD PTR [rax+0x8]
0x0046e4f8: test   rcx,rcx
0x0046e4fb: je     0x14046e50e
0x0046e4fd: mov    rax,QWORD PTR [rax]
0x0046e500: mov    QWORD PTR [rsp+0x20],rax
0x0046e505: mov    QWORD PTR [rsp+0x28],rcx
0x0046e50a: lock inc DWORD PTR [rcx+0xc]
0x0046e50e: mov    rsi,QWORD PTR [rbp-0x8]
0x0046e512: test   rsi,rsi
0x0046e515: je     0x14046e543
0x0046e517: mov    eax,r14d
0x0046e51a: lock xadd DWORD PTR [rsi+0x8],eax
0x0046e51f: cmp    eax,0x1
0x0046e522: jne    0x14046e543
0x0046e524: mov    rax,QWORD PTR [rsi]
0x0046e527: mov    rcx,rsi
0x0046e52a: call   QWORD PTR [rax]
0x0046e52c: mov    eax,r14d
0x0046e52f: lock xadd DWORD PTR [rsi+0xc],eax
0x0046e534: cmp    eax,0x1
0x0046e537: jne    0x14046e543
0x0046e539: mov    rax,QWORD PTR [rsi]
0x0046e53c: mov    rcx,rsi
0x0046e53f: call   QWORD PTR [rax+0x8]
0x0046e542: nop
0x0046e543: mov    rdx,QWORD PTR [rbp+0x178]
0x0046e54a: cmp    rdx,0xf
0x0046e54e: jbe    0x14046e584
0x0046e550: inc    rdx
0x0046e553: mov    rcx,QWORD PTR [rbp+0x160]
0x0046e55a: mov    rax,rcx
0x0046e55d: cmp    rdx,0x1000
0x0046e564: jb     0x14046e57f
0x0046e566: add    rdx,0x27
0x0046e56a: mov    rcx,QWORD PTR [rcx-0x8]
0x0046e56e: sub    rax,rcx
0x0046e571: add    rax,0xfffffffffffffff8
0x0046e575: cmp    rax,0x1f
0x0046e579: ja     0x14046eb3e
0x0046e57f: call   0x1415345f0
0x0046e584: mov    rax,QWORD PTR [rbx]
0x0046e587: mov    QWORD PTR [rbp+0x160],rax
0x0046e58e: xorps  xmm0,xmm0
0x0046e591: movdqu XMMWORD PTR [rbp+0x168],xmm0
0x0046e599: mov    rsi,QWORD PTR [rsp+0x28]
0x0046e59e: test   rsi,rsi
0x0046e5a1: je     0x14046e5c6
0x0046e5a3: mov    rax,QWORD PTR [rsp+0x20]
0x0046e5a8: mov    QWORD PTR [rbp+0x168],rax
0x0046e5af: mov    QWORD PTR [rbp+0x170],rsi
0x0046e5b6: lock inc DWORD PTR [rsi+0xc]
0x0046e5ba: mov    rsi,QWORD PTR [rsp+0x28]
0x0046e5bf: mov    rax,QWORD PTR [rbp+0x160]
0x0046e5c6: mov    QWORD PTR [rbp+0x1b8],r12
0x0046e5cd: mov    QWORD PTR [rbp+0x1c0],rax
0x0046e5d4: mov    rax,QWORD PTR [rbp+0x168]
0x0046e5db: mov    QWORD PTR [rbp+0x1c8],rax
0x0046e5e2: mov    rax,QWORD PTR [rbp+0x170]
0x0046e5e9: mov    QWORD PTR [rbp+0x1d0],rax
0x0046e5f0: movdqu XMMWORD PTR [rbp+0x168],xmm0
0x0046e5f8: lea    rax,[rbp+0x1b8]
0x0046e5ff: mov    QWORD PTR [rbp+0x1f0],rax
0x0046e606: lea    r9,[rbp+0x1b8]
0x0046e60d: lea    r8,[rbp+0x1f8]
0x0046e614: lea    rdx,[rsp+0x50]
0x0046e619: mov    rcx,QWORD PTR [rbp-0x30]
0x0046e61d: call   0x141410fb0
0x0046e622: mov    r15,QWORD PTR [rsp+0x58]
0x0046e627: test   r15,r15
0x0046e62a: je     0x14046e65e
0x0046e62c: mov    eax,r14d
0x0046e62f: lock xadd DWORD PTR [r15+0x8],eax
0x0046e635: cmp    eax,0x1
0x0046e638: jne    0x14046e659
0x0046e63a: mov    rax,QWORD PTR [r15]
0x0046e63d: mov    rcx,r15
0x0046e640: call   QWORD PTR [rax]
0x0046e642: mov    eax,r14d
0x0046e645: lock xadd DWORD PTR [r15+0xc],eax
0x0046e64b: cmp    eax,0x1
0x0046e64e: jne    0x14046e659
0x0046e650: mov    rax,QWORD PTR [r15]
0x0046e653: mov    rcx,r15
0x0046e656: call   QWORD PTR [rax+0x8]
0x0046e659: mov    rsi,QWORD PTR [rsp+0x28]
0x0046e65e: test   rsi,rsi
0x0046e661: je     0x14046e906
0x0046e667: mov    eax,r14d
0x0046e66a: lock xadd DWORD PTR [rsi+0xc],eax
0x0046e66f: cmp    eax,0x1
0x0046e672: jne    0x14046e906
0x0046e678: mov    rcx,QWORD PTR [rsp+0x28]
0x0046e67d: mov    rax,QWORD PTR [rcx]
0x0046e680: call   QWORD PTR [rax+0x8]
0x0046e683: jmp    0x14046e906
0x0046e688: xor    r12b,r12b
0x0046e68b: mov    eax,DWORD PTR [r15+0xb0]
0x0046e692: cmp    eax,0xffffffff
0x0046e695: je     0x14046e6c2
0x0046e697: inc    eax
0x0046e699: cmp    eax,DWORD PTR [rip+0x1efff65]        # 0x14236e604
0x0046e69f: jge    0x14046e6a6
0x0046e6a1: mov    r12b,0x1
0x0046e6a4: jmp    0x14046e6c2
0x0046e6a6: jne    0x14046e6c2
0x0046e6a8: movzx  r12d,r12b
0x0046e6ac: mov    eax,DWORD PTR [r15+0xb4]
0x0046e6b3: cmp    DWORD PTR [rip+0x1f1382b],eax        # 0x142381ee4
0x0046e6b9: mov    eax,0x1
0x0046e6be: cmovge r12d,eax
0x0046e6c2: xorps  xmm0,xmm0
0x0046e6c5: movdqa XMMWORD PTR [rsp+0x20],xmm0
0x0046e6cb: test   r12b,r12b
0x0046e6ce: je     0x14046e777
0x0046e6d4: lea    rdx,[rip+0x11c94bd]        # 0x141637b98 ; literal='Right panel'
0x0046e6db: lea    rcx,[rbp+0x1b8]
0x0046e6e2: call   0x1400680e0
0x0046e6e7: nop
0x0046e6e8: lea    r8,[rbp+0x1b8]
0x0046e6ef: lea    rdx,[rbp+0xc0]
0x0046e6f6: mov    rcx,QWORD PTR [rbp-0x40]
0x0046e6fa: call   0x1403c6860
0x0046e6ff: xorps  xmm0,xmm0
0x0046e702: movdqa XMMWORD PTR [rbp+0x180],xmm0
0x0046e70a: mov    rcx,QWORD PTR [rax+0x8]
0x0046e70e: test   rcx,rcx
0x0046e711: je     0x14046e730
0x0046e713: mov    rax,QWORD PTR [rax]
0x0046e716: mov    QWORD PTR [rbp+0x180],rax
0x0046e71d: mov    QWORD PTR [rbp+0x188],rcx
0x0046e724: lock inc DWORD PTR [rcx+0xc]
0x0046e728: movdqa xmm0,XMMWORD PTR [rbp+0x180]
0x0046e730: movdqa XMMWORD PTR [rsp+0x20],xmm0
0x0046e736: mov    rsi,QWORD PTR [rbp+0xc8]
0x0046e73d: test   rsi,rsi
0x0046e740: je     0x14046e76e
0x0046e742: mov    eax,r14d
0x0046e745: lock xadd DWORD PTR [rsi+0x8],eax
0x0046e74a: cmp    eax,0x1
0x0046e74d: jne    0x14046e76e
0x0046e74f: mov    rax,QWORD PTR [rsi]
0x0046e752: mov    rcx,rsi
0x0046e755: call   QWORD PTR [rax]
0x0046e757: mov    eax,r14d
0x0046e75a: lock xadd DWORD PTR [rsi+0xc],eax
0x0046e75f: cmp    eax,0x1
0x0046e762: jne    0x14046e76e
0x0046e764: mov    rax,QWORD PTR [rsi]
0x0046e767: mov    rcx,rsi
0x0046e76a: call   QWORD PTR [rax+0x8]
0x0046e76d: nop
0x0046e76e: lea    rcx,[rbp+0x1b8]
0x0046e775: jmp    0x14046e7d5
0x0046e777: lea    rcx,[rbp+0x180]
0x0046e77e: call   0x140068120
0x0046e783: mov    r8d,0xb
0x0046e789: lea    rdx,[rip+0x11c9408]        # 0x141637b98 ; literal='Right panel'
0x0046e790: lea    rcx,[rbp+0x180]
0x0046e797: call   0x140068180
0x0046e79c: nop
0x0046e79d: lea    r8,[rbp+0x180]
0x0046e7a4: lea    rdx,[rbp+0xd0]
0x0046e7ab: mov    rcx,QWORD PTR [rbp-0x20]
0x0046e7af: call   0x1403c6860
0x0046e7b4: mov    rdx,rax
0x0046e7b7: lea    rcx,[rsp+0x20]
0x0046e7bc: call   0x140482df0
0x0046e7c1: lea    rcx,[rbp+0xd0]
0x0046e7c8: call   0x1400e1070
0x0046e7cd: nop
0x0046e7ce: lea    rcx,[rbp+0x180]
0x0046e7d5: call   0x14006f7e0
0x0046e7da: xorps  xmm0,xmm0
0x0046e7dd: movdqu XMMWORD PTR [rbp+0x160],xmm0
0x0046e7e5: mov    r15,QWORD PTR [rsp+0x28]
0x0046e7ea: test   r15,r15
0x0046e7ed: je     0x14046e80c
0x0046e7ef: mov    rax,QWORD PTR [rsp+0x20]
0x0046e7f4: mov    QWORD PTR [rbp+0x160],rax
0x0046e7fb: mov    QWORD PTR [rbp+0x168],r15
0x0046e802: lock inc DWORD PTR [r15+0xc]
0x0046e807: mov    r15,QWORD PTR [rsp+0x28]
0x0046e80c: mov    rax,QWORD PTR [rbx]
0x0046e80f: mov    QWORD PTR [rbp+0x170],rax
0x0046e816: lea    rax,[rbp+0x120]
0x0046e81d: lea    rdx,[rbp+0x160]
0x0046e824: lea    rcx,[rbp+0x120]
0x0046e82b: mov    QWORD PTR [rbp+0x180],rax
0x0046e832: call   0x140483330
0x0046e837: mov    rsi,rax
0x0046e83a: test   r12b,r12b
0x0046e83d: je     0x14046e875
0x0046e83f: mov    rdx,QWORD PTR [rbx]
0x0046e842: lea    rcx,[rbp+0x1b8]
0x0046e849: call   0x14046b220
0x0046e84e: nop
0x0046e84f: mov    r9,rsi
0x0046e852: mov    r8,rax
0x0046e855: lea    rdx,[rbp+0x90]
0x0046e85c: mov    rcx,QWORD PTR [rsp+0x60]
0x0046e861: call   0x141410fb0
0x0046e866: lea    rcx,[rbp+0x90]
0x0046e86d: call   0x1400e1070
0x0046e872: nop
0x0046e873: jmp    0x14046e8a9
0x0046e875: mov    rdx,QWORD PTR [rbx]
0x0046e878: lea    rcx,[rbp+0x1b8]
0x0046e87f: call   0x14046b220
0x0046e884: nop
0x0046e885: mov    r9,rsi
0x0046e888: mov    r8,rax
0x0046e88b: lea    rdx,[rbp+0xa0]
0x0046e892: mov    rcx,QWORD PTR [rsp+0x70]
0x0046e897: call   0x141410fb0
0x0046e89c: lea    rcx,[rbp+0xa0]
0x0046e8a3: call   0x1400e1070
0x0046e8a8: nop
0x0046e8a9: lea    rcx,[rbp+0x1b8]
0x0046e8b0: call   0x14006f7e0
0x0046e8b5: nop
0x0046e8b6: mov    rcx,QWORD PTR [rbp+0x168]
0x0046e8bd: test   rcx,rcx
0x0046e8c0: je     0x14046e8e1
0x0046e8c2: mov    eax,r14d
0x0046e8c5: lock xadd DWORD PTR [rcx+0xc],eax
0x0046e8ca: cmp    eax,0x1
0x0046e8cd: jne    0x14046e8dc
0x0046e8cf: mov    rcx,QWORD PTR [rbp+0x168]
0x0046e8d6: mov    rax,QWORD PTR [rcx]
0x0046e8d9: call   QWORD PTR [rax+0x8]
0x0046e8dc: mov    r15,QWORD PTR [rsp+0x28]
0x0046e8e1: test   r15,r15
0x0046e8e4: je     0x14046e8ff
0x0046e8e6: mov    eax,r14d
0x0046e8e9: lock xadd DWORD PTR [r15+0xc],eax
0x0046e8ef: cmp    eax,0x1
0x0046e8f2: jne    0x14046e8ff
0x0046e8f4: mov    rcx,QWORD PTR [rsp+0x28]
0x0046e8f9: mov    rax,QWORD PTR [rcx]
0x0046e8fc: call   QWORD PTR [rax+0x8]
0x0046e8ff: lea    r12,[rip+0x11cddca]        # 0x14163c6d0
0x0046e906: lea    rcx,[rbp+0x1f8]
0x0046e90d: call   0x14006f7e0
0x0046e912: xor    r15d,r15d
0x0046e915: add    rbx,0x8
0x0046e919: cmp    rbx,rdi
0x0046e91c: jne    0x14046e335
0x0046e922: mov    r12,QWORD PTR [rsp+0x30]
0x0046e927: mov    rdi,QWORD PTR [rbp+0xe8]
0x0046e92e: mov    rbx,QWORD PTR [rdi]
0x0046e931: cmp    rbx,rdi
0x0046e934: je     0x14046eb59
0x0046e93a: nop    WORD PTR [rax+rax*1+0x0]
0x0046e940: lea    r8,[rbx+0x10]
0x0046e944: mov    rdx,QWORD PTR [r13+0x8]
0x0046e948: cmp    rdx,QWORD PTR [r13+0x10]
0x0046e94c: je     0x14046eb45
0x0046e952: mov    rax,QWORD PTR [r8]
0x0046e955: mov    QWORD PTR [rdx],rax
0x0046e958: mov    BYTE PTR [rdx+0x8],0x0
0x0046e95c: add    QWORD PTR [r13+0x8],0x10
0x0046e961: jmp    0x14046eb4d
0x0046e966: xorps  xmm0,xmm0
0x0046e969: movups XMMWORD PTR [rbp+0x160],xmm0
0x0046e970: mov    QWORD PTR [rbp+0x170],0xb
0x0046e97b: mov    QWORD PTR [rbp+0x178],0xf
0x0046e986: movsd  xmm0,QWORD PTR [rip+0x11c920a]        # 0x141637b98 ; literal='Right panel'
0x0046e98e: movsd  QWORD PTR [rbp+0x160],xmm0
0x0046e996: movzx  eax,WORD PTR [rip+0x11c9203]        # 0x141637ba0 ; literal='nel'
0x0046e99d: mov    WORD PTR [rbp+0x168],ax
0x0046e9a4: movzx  eax,BYTE PTR [rip+0x11c91f7]        # 0x141637ba2 ; literal='l'
0x0046e9ab: mov    BYTE PTR [rbp+0x16a],al
0x0046e9b1: mov    BYTE PTR [rbp+0x16b],0x0
0x0046e9b8: lea    r8,[rbp+0x160]
0x0046e9bf: lea    rdx,[rbp+0xb0]
0x0046e9c6: mov    rcx,QWORD PTR [rbp-0x50]
0x0046e9ca: call   0x1403c6860
0x0046e9cf: xorps  xmm0,xmm0
0x0046e9d2: movdqu XMMWORD PTR [rsp+0x20],xmm0
0x0046e9d8: mov    rcx,QWORD PTR [rax+0x8]
0x0046e9dc: test   rcx,rcx
0x0046e9df: je     0x14046e9f2
0x0046e9e1: mov    rax,QWORD PTR [rax]
0x0046e9e4: mov    QWORD PTR [rsp+0x20],rax
0x0046e9e9: mov    QWORD PTR [rsp+0x28],rcx
0x0046e9ee: lock inc DWORD PTR [rcx+0xc]
0x0046e9f2: mov    rsi,QWORD PTR [rbp+0xb8]
0x0046e9f9: test   rsi,rsi
0x0046e9fc: je     0x14046ea2a
0x0046e9fe: mov    eax,r14d
0x0046ea01: lock xadd DWORD PTR [rsi+0x8],eax
0x0046ea06: cmp    eax,0x1
0x0046ea09: jne    0x14046ea2a
0x0046ea0b: mov    rax,QWORD PTR [rsi]
0x0046ea0e: mov    rcx,rsi
0x0046ea11: call   QWORD PTR [rax]
0x0046ea13: mov    eax,r14d
0x0046ea16: lock xadd DWORD PTR [rsi+0xc],eax
0x0046ea1b: cmp    eax,0x1
0x0046ea1e: jne    0x14046ea2a
0x0046ea20: mov    rax,QWORD PTR [rsi]
0x0046ea23: mov    rcx,rsi
0x0046ea26: call   QWORD PTR [rax+0x8]
0x0046ea29: nop
0x0046ea2a: lea    rcx,[rbp+0x160]
0x0046ea31: call   0x14006f7e0
0x0046ea36: xorps  xmm0,xmm0
0x0046ea39: movdqu XMMWORD PTR [rbp+0x160],xmm0
0x0046ea41: mov    rsi,QWORD PTR [rsp+0x28]
0x0046ea46: test   rsi,rsi
0x0046ea49: je     0x14046ea67
0x0046ea4b: mov    rax,QWORD PTR [rsp+0x20]
0x0046ea50: mov    QWORD PTR [rbp+0x160],rax
0x0046ea57: mov    QWORD PTR [rbp+0x168],rsi
0x0046ea5e: lock inc DWORD PTR [rsi+0xc]
0x0046ea62: mov    rsi,QWORD PTR [rsp+0x28]
0x0046ea67: mov    rcx,QWORD PTR [rbx]
0x0046ea6a: mov    QWORD PTR [rbp+0x170],rcx
0x0046ea71: lea    rax,[rip+0x11cdd00]        # 0x14163c778
0x0046ea78: mov    QWORD PTR [rbp+0x1b8],rax
0x0046ea7f: mov    rax,QWORD PTR [rbp+0x160]
0x0046ea86: mov    QWORD PTR [rbp+0x1c0],rax
0x0046ea8d: mov    rax,QWORD PTR [rbp+0x168]
0x0046ea94: mov    QWORD PTR [rbp+0x1c8],rax
0x0046ea9b: movdqu XMMWORD PTR [rbp+0x160],xmm0
0x0046eaa3: mov    QWORD PTR [rbp+0x1d0],rcx
0x0046eaaa: lea    rax,[rbp+0x1b8]
0x0046eab1: mov    QWORD PTR [rbp+0x1f0],rax
0x0046eab8: lea    r9,[rbp+0x1b8]
0x0046eabf: lea    r8,[rbp+0x1f8]
0x0046eac6: lea    rdx,[rbp+0x80]
0x0046eacd: mov    rcx,QWORD PTR [rbp-0x30]
0x0046ead1: call   0x141410fb0
0x0046ead6: mov    r15,QWORD PTR [rbp+0x88]
0x0046eadd: test   r15,r15
0x0046eae0: je     0x14046eb14
0x0046eae2: mov    eax,r14d
0x0046eae5: lock xadd DWORD PTR [r15+0x8],eax
0x0046eaeb: cmp    eax,0x1
0x0046eaee: jne    0x14046eb0f
0x0046eaf0: mov    rax,QWORD PTR [r15]
0x0046eaf3: mov    rcx,r15
0x0046eaf6: call   QWORD PTR [rax]
0x0046eaf8: mov    eax,r14d
0x0046eafb: lock xadd DWORD PTR [r15+0xc],eax
0x0046eb01: cmp    eax,0x1
0x0046eb04: jne    0x14046eb0f
0x0046eb06: mov    rax,QWORD PTR [r15]
0x0046eb09: mov    rcx,r15
0x0046eb0c: call   QWORD PTR [rax+0x8]
0x0046eb0f: mov    rsi,QWORD PTR [rsp+0x28]
0x0046eb14: test   rsi,rsi
0x0046eb17: je     0x14046e906
0x0046eb1d: mov    eax,r14d
0x0046eb20: lock xadd DWORD PTR [rsi+0xc],eax
0x0046eb25: cmp    eax,0x1
0x0046eb28: jne    0x14046e906
0x0046eb2e: mov    rcx,QWORD PTR [rsp+0x28]
0x0046eb33: mov    rax,QWORD PTR [rcx]
0x0046eb36: call   QWORD PTR [rax+0x8]
0x0046eb39: jmp    0x14046e906
0x0046eb3e: call   QWORD PTR [rip+0x1171f5c]        # 0x1415e0aa0
0x0046eb44: nop
0x0046eb45: mov    rcx,r13
0x0046eb48: call   0x1403c93c0
0x0046eb4d: mov    rbx,QWORD PTR [rbx]
0x0046eb50: cmp    rbx,rdi
0x0046eb53: jne    0x14046e940
0x0046eb59: mov    rcx,QWORD PTR [rbp-0x80]
0x0046eb5d: call   0x141427d00
0x0046eb62: lea    r8,[rip+0x143b1ef]        # 0x1418a9d58 ; literal='Unit List'
0x0046eb69: lea    rdx,[rbp+0x180]
0x0046eb70: mov    rcx,QWORD PTR [rbp-0x80]
0x0046eb74: call   0x1403c5060
0x0046eb79: mov    DWORD PTR [rsp+0x38],0x10
0x0046eb81: mov    dl,0xb
0x0046eb83: mov    rcx,QWORD PTR [rbp+0x180]
0x0046eb8a: call   0x14140b2f0
0x0046eb8f: mov    rax,QWORD PTR [rbp+0x180]
0x0046eb96: mov    DWORD PTR [rax+0xa8],0xfffffffe
0x0046eba0: mov    rax,QWORD PTR [rbp+0x180]
0x0046eba7: mov    rcx,QWORD PTR [rax+0x188]
0x0046ebae: mov    DWORD PTR [rcx+0x178],r15d
0x0046ebb5: mov    rax,QWORD PTR [rbp+0x180]
0x0046ebbc: mov    rcx,QWORD PTR [rax+0x178]
0x0046ebc3: mov    r13d,0x1
0x0046ebc9: mov    DWORD PTR [rcx+0x178],r13d
0x0046ebd0: mov    rax,QWORD PTR [rbp+0x180]
0x0046ebd7: mov    BYTE PTR [rax+0x1b0],0x0
0x0046ebde: mov    rax,QWORD PTR [rbp+0x180]
0x0046ebe5: mov    rcx,QWORD PTR [rax+0x188]
0x0046ebec: mov    rdi,QWORD PTR [rcx+0x160]
0x0046ebf3: mov    rsi,QWORD PTR [rcx+0x168]
0x0046ebfa: mov    rbx,QWORD PTR [rbp+0x188]
0x0046ec01: test   rbx,rbx
0x0046ec04: je     0x14046ec31
0x0046ec06: mov    eax,r14d
0x0046ec09: lock xadd DWORD PTR [rbx+0x8],eax
0x0046ec0e: cmp    eax,r13d
0x0046ec11: jne    0x14046ec31
0x0046ec13: mov    rax,QWORD PTR [rbx]
0x0046ec16: mov    rcx,rbx
0x0046ec19: call   QWORD PTR [rax]
0x0046ec1b: mov    eax,r14d
0x0046ec1e: lock xadd DWORD PTR [rbx+0xc],eax
0x0046ec23: cmp    eax,r13d
0x0046ec26: jne    0x14046ec31
0x0046ec28: mov    rax,QWORD PTR [rbx]
0x0046ec2b: mov    rcx,rbx
0x0046ec2e: call   QWORD PTR [rax+0x8]
0x0046ec31: cmp    rdi,rsi
0x0046ec34: je     0x14046ed2e
0x0046ec3a: lea    r8,[rip+0x143b117]        # 0x1418a9d58 ; literal='Unit List'
0x0046ec41: lea    rdx,[rbp+0x180]
0x0046ec48: mov    rcx,QWORD PTR [rbp-0x80]
0x0046ec4c: call   0x1403c5060
0x0046ec51: mov    DWORD PTR [rsp+0x38],0x30
0x0046ec59: mov    dl,0xb
0x0046ec5b: mov    rcx,QWORD PTR [rbp+0x180]
0x0046ec62: call   0x14140b2f0
0x0046ec67: mov    rcx,QWORD PTR [rbp+0x180]
0x0046ec6e: mov    DWORD PTR [rcx+0xa8],0xfffffffe
0x0046ec78: mov    rax,QWORD PTR [rbp+0x180]
0x0046ec7f: mov    rcx,QWORD PTR [rax+0x188]
0x0046ec86: mov    DWORD PTR [rcx+0x178],r15d
0x0046ec8d: mov    rax,QWORD PTR [rbp+0x180]
0x0046ec94: mov    rcx,QWORD PTR [rax+0x178]
0x0046ec9b: mov    DWORD PTR [rcx+0x178],r13d
0x0046eca2: mov    rax,QWORD PTR [rbp+0x180]
0x0046eca9: mov    BYTE PTR [rax+0x1b0],0x0
0x0046ecb0: mov    rax,QWORD PTR [rbp+0x180]
0x0046ecb7: mov    rax,QWORD PTR [rax+0x188]
0x0046ecbe: mov    rax,QWORD PTR [rax+0x160]
0x0046ecc5: mov    rdi,QWORD PTR [rax]
0x0046ecc8: mov    rbx,QWORD PTR [rdi+0x68]
0x0046eccc: mov    rsi,QWORD PTR [rdi+0x70]
0x0046ecd0: cmp    rbx,rsi
0x0046ecd3: je     0x14046ecf7
0x0046ecd5: mov    rcx,QWORD PTR [rbx+0x38]
0x0046ecd9: test   rcx,rcx
0x0046ecdc: je     0x14046ecee
0x0046ecde: mov    QWORD PTR [rsp+0x50],rdi
0x0046ece3: mov    rax,QWORD PTR [rcx]
0x0046ece6: lea    rdx,[rsp+0x50]
0x0046eceb: call   QWORD PTR [rax+0x10]
0x0046ecee: add    rbx,0x40
0x0046ecf2: cmp    rbx,rsi
0x0046ecf5: jne    0x14046ecd5
0x0046ecf7: mov    rbx,QWORD PTR [rbp+0x188]
0x0046ecfe: test   rbx,rbx
0x0046ed01: je     0x14046ed2e
0x0046ed03: mov    eax,r14d
0x0046ed06: lock xadd DWORD PTR [rbx+0x8],eax
0x0046ed0b: cmp    eax,0x1
0x0046ed0e: jne    0x14046ed2e
0x0046ed10: mov    rax,QWORD PTR [rbx]
0x0046ed13: mov    rcx,rbx
0x0046ed16: call   QWORD PTR [rax]
0x0046ed18: mov    eax,r14d
0x0046ed1b: lock xadd DWORD PTR [rbx+0xc],eax
0x0046ed20: cmp    eax,0x1
0x0046ed23: jne    0x14046ed2e
0x0046ed25: mov    rax,QWORD PTR [rbx]
0x0046ed28: mov    rcx,rbx
0x0046ed2b: call   QWORD PTR [rax+0x8]
0x0046ed2e: movdqa xmm0,XMMWORD PTR [rip+0x131730a]        # 0x141786040
0x0046ed36: movdqu XMMWORD PTR [rbp+0x1a0],xmm0
0x0046ed3e: mov    DWORD PTR [rbp+0x1b0],0xd
0x0046ed48: xorps  xmm0,xmm0
0x0046ed4b: movdqu XMMWORD PTR [rbp+0x160],xmm0
0x0046ed53: mov    ecx,0x14
0x0046ed58: call   0x140070760
0x0046ed5d: mov    rbx,rax
0x0046ed60: mov    QWORD PTR [rbp+0x160],rax
0x0046ed67: lea    rcx,[rax+0x14]
0x0046ed6b: mov    QWORD PTR [rbp+0x170],rcx
0x0046ed72: mov    r8d,0x14
0x0046ed78: lea    rdx,[rbp+0x1a0]
0x0046ed7f: mov    rcx,rax
0x0046ed82: call   0x141535d8a
0x0046ed87: lea    rax,[rbx+0x14]
0x0046ed8b: mov    QWORD PTR [rbp+0x168],rax
0x0046ed92: lea    rdx,[rbp+0x160]
0x0046ed99: mov    rdi,QWORD PTR [rbp-0x60]
0x0046ed9d: mov    rcx,rdi
0x0046eda0: call   0x141420170
0x0046eda5: nop
0x0046eda6: lea    rcx,[rbp+0x160]
0x0046edad: call   0x14006f6e0
0x0046edb2: lea    r8,[rip+0x143af9f]        # 0x1418a9d58 ; literal='Unit List'
0x0046edb9: lea    rdx,[rsp+0x50]
0x0046edbe: mov    rcx,rdi
0x0046edc1: call   0x1403c5060
0x0046edc6: or     DWORD PTR [rsp+0x38],0x1
0x0046edcb: mov    dl,0xb
0x0046edcd: mov    rcx,QWORD PTR [rsp+0x50]
0x0046edd2: call   0x14140b2f0
0x0046edd7: mov    rcx,QWORD PTR [rsp+0x50]
0x0046eddc: mov    DWORD PTR [rcx+0xa8],0xfffffffe
0x0046ede6: mov    rax,QWORD PTR [rsp+0x50]
0x0046edeb: mov    rcx,QWORD PTR [rax+0x188]
0x0046edf2: mov    DWORD PTR [rcx+0x178],r15d
0x0046edf9: mov    rax,QWORD PTR [rsp+0x50]
0x0046edfe: mov    rcx,QWORD PTR [rax+0x178]
0x0046ee05: mov    DWORD PTR [rcx+0x178],r13d
0x0046ee0c: mov    rax,QWORD PTR [rsp+0x50]
0x0046ee11: mov    BYTE PTR [rax+0x1b0],0x0
0x0046ee18: mov    rax,QWORD PTR [rsp+0x50]
0x0046ee1d: mov    rsi,QWORD PTR [rax+0x178]
0x0046ee24: mov    ecx,0x1b0
0x0046ee29: call   0x141534600
0x0046ee2e: mov    r15,rax
0x0046ee31: mov    QWORD PTR [rbp+0x180],rax
0x0046ee38: xorps  xmm0,xmm0
0x0046ee3b: movups XMMWORD PTR [rax],xmm0
0x0046ee3e: mov    DWORD PTR [rax+0x8],r13d
0x0046ee42: mov    DWORD PTR [rax+0xc],r13d
0x0046ee46: lea    rax,[rip+0x11ba47b]        # 0x1416292c8
0x0046ee4d: mov    QWORD PTR [r15],rax
0x0046ee50: lea    rbx,[r15+0x10]
0x0046ee54: lea    rax,[rip+0x11cdcfd]        # 0x14163cb58
0x0046ee5b: mov    QWORD PTR [rbp+0x1b8],rax
0x0046ee62: lea    rax,[rbp+0x1b8]
0x0046ee69: mov    QWORD PTR [rbp+0x1f0],rax
0x0046ee70: lea    r8,[rbp+0x1b8]
0x0046ee77: mov    rdx,rdi
0x0046ee7a: mov    rcx,rbx
0x0046ee7d: call   0x1403d2220
0x0046ee82: nop
0x0046ee83: mov    QWORD PTR [rbp-0x10],rbx
0x0046ee87: mov    QWORD PTR [rbp-0x8],r15
0x0046ee8b: or     DWORD PTR [rsp+0x38],0xc
0x0046ee90: mov    QWORD PTR [rbx+0x8],rsi
0x0046ee94: lock inc DWORD PTR [r15+0x8]
0x0046ee99: mov    rcx,QWORD PTR [rbp-0x10]
0x0046ee9d: mov    QWORD PTR [rsp+0x20],rcx
0x0046eea2: mov    QWORD PTR [rsp+0x28],r15
0x0046eea7: mov    rdx,QWORD PTR [rsi+0x168]
0x0046eeae: cmp    rdx,QWORD PTR [rsi+0x170]
0x0046eeb5: je     0x14046eecf
0x0046eeb7: mov    QWORD PTR [rdx],rcx
0x0046eeba: mov    QWORD PTR [rdx+0x8],r15
0x0046eebe: xor    ecx,ecx
0x0046eec0: mov    QWORD PTR [rsp+0x28],rcx
0x0046eec5: add    QWORD PTR [rsi+0x168],0x10
0x0046eecd: jmp    0x14046eee5
0x0046eecf: lea    r8,[rsp+0x20]
0x0046eed4: lea    rcx,[rsi+0x160]
0x0046eedb: call   0x1400f2040
0x0046eee0: mov    rcx,QWORD PTR [rsp+0x28]
0x0046eee5: test   rcx,rcx
0x0046eee8: je     0x14046ef1c
0x0046eeea: mov    eax,r14d
0x0046eeed: lock xadd DWORD PTR [rcx+0x8],eax
0x0046eef2: cmp    eax,0x1
0x0046eef5: jne    0x14046ef1c
0x0046eef7: mov    rbx,QWORD PTR [rsp+0x28]
0x0046eefc: mov    rax,QWORD PTR [rbx]
0x0046eeff: mov    rcx,rbx
0x0046ef02: call   QWORD PTR [rax]
0x0046ef04: mov    eax,r14d
0x0046ef07: lock xadd DWORD PTR [rbx+0xc],eax
0x0046ef0c: cmp    eax,0x1
0x0046ef0f: jne    0x14046ef1c
0x0046ef11: mov    rcx,QWORD PTR [rsp+0x28]
0x0046ef16: mov    rax,QWORD PTR [rcx]
0x0046ef19: call   QWORD PTR [rax+0x8]
0x0046ef1c: mov    rax,QWORD PTR [rsi]
0x0046ef1f: mov    rcx,rsi
0x0046ef22: call   QWORD PTR [rax+0x20]
0x0046ef25: nop
0x0046ef26: mov    rbx,QWORD PTR [rsp+0x58]
0x0046ef2b: test   rbx,rbx
0x0046ef2e: je     0x14046ef5b
0x0046ef30: mov    eax,r14d
0x0046ef33: lock xadd DWORD PTR [rbx+0x8],eax
0x0046ef38: cmp    eax,0x1
0x0046ef3b: jne    0x14046ef5b
0x0046ef3d: mov    rax,QWORD PTR [rbx]
0x0046ef40: mov    rcx,rbx
0x0046ef43: call   QWORD PTR [rax]
0x0046ef45: mov    eax,r14d
0x0046ef48: lock xadd DWORD PTR [rbx+0xc],eax
0x0046ef4d: cmp    eax,0x1
0x0046ef50: jne    0x14046ef5b
0x0046ef52: mov    rax,QWORD PTR [rbx]
0x0046ef55: mov    rcx,rbx
0x0046ef58: call   QWORD PTR [rax+0x8]
0x0046ef5b: lea    rcx,[rbp+0x40]
0x0046ef5f: call   0x1400ec340
0x0046ef64: nop
0x0046ef65: mov    rax,QWORD PTR [rip+0x1f2516c]        # 0x1423940d8
0x0046ef6c: mov    rcx,QWORD PTR [rax+0x18d8]
0x0046ef73: sub    rcx,QWORD PTR [rax+0x18d0]
0x0046ef7a: sar    rcx,0x3
0x0046ef7e: sub    ecx,0x1
0x0046ef81: movsxd rdi,ecx
0x0046ef84: mov    rbx,QWORD PTR [rbp+0x58]
0x0046ef88: js     0x14046f149
0x0046ef8e: mov    r14,QWORD PTR [rbp-0x60]
0x0046ef92: mov    rax,QWORD PTR [rip+0x1f2513f]        # 0x1423940d8
0x0046ef99: mov    rax,QWORD PTR [rax+0x18d0]
0x0046efa0: mov    rcx,QWORD PTR [rax+rdi*8]
0x0046efa4: mov    edx,DWORD PTR [rcx+0x4]
0x0046efa7: cmp    edx,0xffffffff
0x0046efaa: je     0x14046f139
0x0046efb0: lea    rcx,[rip+0x1f6ffe9]        # 0x1423defa0
0x0046efb7: call   0x1413c7440
0x0046efbc: mov    r10,rax
0x0046efbf: mov    QWORD PTR [rsp+0x40],rax
0x0046efc4: mov    r11,rax
0x0046efc7: shr    r11,0x38
0x0046efcb: mov    rsi,rax
0x0046efce: shr    rsi,0x30
0x0046efd2: mov    r15,rax
0x0046efd5: shr    r15,0x28
0x0046efd9: mov    r12,rax
0x0046efdc: shr    r12,0x20
0x0046efe0: mov    r13,rax
0x0046efe3: shr    r13,0x18
0x0046efe7: shr    rax,0x10
0x0046efeb: mov    QWORD PTR [rsp+0x38],rax
0x0046eff0: mov    rax,r10
0x0046eff3: shr    rax,0x8
0x0046eff7: mov    QWORD PTR [rsp+0x50],rax
0x0046effc: test   r10,r10
0x0046efff: je     0x14046f134
0x0046f005: test   BYTE PTR [r10+0x110],0x2
0x0046f00d: jne    0x14046f134
0x0046f013: mov    rcx,r10
0x0046f016: call   0x141389c90
0x0046f01b: test   al,al
0x0046f01d: je     0x14046f134
0x0046f023: movzx  edx,r10b
0x0046f027: movabs rax,0xcbf29ce484222325
0x0046f031: xor    rdx,rax
0x0046f034: movabs r8,0x100000001b3
0x0046f03e: imul   rdx,r8
0x0046f042: movzx  eax,BYTE PTR [rsp+0x50]
0x0046f047: xor    rdx,rax
0x0046f04a: imul   rdx,r8
0x0046f04e: movzx  eax,BYTE PTR [rsp+0x38]
0x0046f053: xor    rdx,rax
0x0046f056: imul   rdx,r8
0x0046f05a: movzx  eax,r13b
0x0046f05e: xor    rdx,rax
0x0046f061: imul   rdx,r8
0x0046f065: movzx  eax,r12b
0x0046f069: xor    rdx,rax
0x0046f06c: imul   rdx,r8
0x0046f070: movzx  eax,r15b
0x0046f074: xor    rdx,rax
0x0046f077: imul   rdx,r8
0x0046f07b: movzx  eax,sil
0x0046f07f: xor    rdx,rax
0x0046f082: imul   rdx,r8
0x0046f086: xor    rdx,r11
0x0046f089: imul   rdx,r8
0x0046f08d: and    rdx,QWORD PTR [rbp+0x70]
0x0046f091: mov    rax,rdx
0x0046f094: add    rax,rax
0x0046f097: mov    rcx,QWORD PTR [rbx+rax*8+0x8]
0x0046f09c: cmp    rcx,QWORD PTR [rbp+0x48]
0x0046f0a0: je     0x14046f0c1
0x0046f0a2: add    rdx,rdx
0x0046f0a5: mov    rax,QWORD PTR [rbx+rdx*8]
0x0046f0a9: cmp    r10,QWORD PTR [rcx+0x10]
0x0046f0ad: je     0x14046f0c3
0x0046f0af: nop
0x0046f0b0: cmp    rcx,rax
0x0046f0b3: je     0x14046f0c1
0x0046f0b5: mov    rcx,QWORD PTR [rcx+0x8]
0x0046f0b9: cmp    r10,QWORD PTR [rcx+0x10]
0x0046f0bd: jne    0x14046f0b0
0x0046f0bf: jmp    0x14046f0c3
0x0046f0c1: xor    ecx,ecx
0x0046f0c3: test   rcx,rcx
0x0046f0c6: jne    0x14046f134
0x0046f0c8: lea    rcx,[r14+0x2d8]
0x0046f0cf: mov    rdx,QWORD PTR [rcx+0x8]
0x0046f0d3: cmp    rdx,QWORD PTR [rcx+0x10]
0x0046f0d7: je     0x14046f0e7
0x0046f0d9: mov    QWORD PTR [rdx],r10
0x0046f0dc: mov    BYTE PTR [rdx+0x8],0x0
0x0046f0e0: add    QWORD PTR [rcx+0x8],0x10
0x0046f0e5: jmp    0x14046f0f1
0x0046f0e7: lea    r8,[rsp+0x40]
0x0046f0ec: call   0x1403c93c0
0x0046f0f1: mov    r12,QWORD PTR [rsp+0x30]
0x0046f0f6: lea    rcx,[r12+0x3e0]
0x0046f0fe: lea    r8,[rsp+0x40]
0x0046f103: lea    rdx,[rbp+0x1a0]
0x0046f10a: call   0x140483380
0x0046f10f: mov    rcx,QWORD PTR [rax]
0x0046f112: mov    DWORD PTR [rcx+0x18],0xf4240
0x0046f119: lea    r8,[rsp+0x40]
0x0046f11e: lea    rdx,[rbp+0x80]
0x0046f125: lea    rcx,[rbp+0x40]
0x0046f129: call   0x1400ec910
0x0046f12e: mov    rbx,QWORD PTR [rbp+0x58]
0x0046f132: jmp    0x14046f139
0x0046f134: mov    r12,QWORD PTR [rsp+0x30]
0x0046f139: sub    rdi,0x1
0x0046f13d: jns    0x14046ef92
0x0046f143: mov    r14d,0xffffffff
0x0046f149: mov    rax,QWORD PTR [rip+0x1f24f88]        # 0x1423940d8
0x0046f150: mov    rcx,QWORD PTR [rax+0x17b8]
0x0046f157: sub    rcx,QWORD PTR [rax+0x17b0]
0x0046f15e: sar    rcx,0x3
0x0046f162: sub    ecx,0x1
0x0046f165: movsxd rdx,ecx
0x0046f168: mov    QWORD PTR [rsp+0x38],rdx
0x0046f16d: js     0x14046f5d5
0x0046f173: mov    r15,QWORD PTR [rip+0x206e536]        # 0x1424dd6b0
0x0046f17a: nop    WORD PTR [rax+rax*1+0x0]
0x0046f180: mov    rax,QWORD PTR [rip+0x1f24f51]        # 0x1423940d8
0x0046f187: mov    rax,QWORD PTR [rax+0x17b0]
0x0046f18e: mov    rax,QWORD PTR [rax+rdx*8]
0x0046f192: mov    QWORD PTR [rsp+0x50],rax
0x0046f197: mov    edx,DWORD PTR [rax+0x4]
0x0046f19a: cmp    edx,0xffffffff
0x0046f19d: je     0x14046f5bb
0x0046f1a3: mov    r9d,DWORD PTR [rax+0x28]
0x0046f1a7: cmp    r9d,0xffffffff
0x0046f1ab: je     0x14046f424
0x0046f1b1: mov    rax,QWORD PTR [rip+0x206e500]        # 0x1424dd6b8
0x0046f1b8: sub    rax,r15
0x0046f1bb: sar    rax,0x3
0x0046f1bf: test   rax,rax
0x0046f1c2: je     0x14046f5bb
0x0046f1c8: xor    edx,edx
0x0046f1ca: sub    eax,0x1
0x0046f1cd: js     0x14046f1f5
0x0046f1cf: nop
0x0046f1d0: mov    r10d,eax
0x0046f1d3: lea    ecx,[rdx+rax*1]
0x0046f1d6: sar    ecx,1
0x0046f1d8: movsxd rax,ecx
0x0046f1db: mov    rdi,QWORD PTR [r15+rax*8]
0x0046f1df: cmp    DWORD PTR [rdi],r9d
0x0046f1e2: je     0x14046f1f7
0x0046f1e4: lea    eax,[rcx+0x1]
0x0046f1e7: cmovle edx,eax
0x0046f1ea: lea    eax,[rcx-0x1]
0x0046f1ed: cmovle eax,r10d
0x0046f1f1: cmp    edx,eax
0x0046f1f3: jle    0x14046f1d0
0x0046f1f5: xor    edi,edi
0x0046f1f7: test   rdi,rdi
0x0046f1fa: je     0x14046f5bb
0x0046f200: mov    rax,QWORD PTR [rdi+0xa8]
0x0046f207: sub    rax,QWORD PTR [rdi+0xa0]
0x0046f20e: sar    rax,0x3
0x0046f212: sub    eax,0x1
0x0046f215: movsxd rsi,eax
0x0046f218: js     0x14046f5bb
0x0046f21e: mov    r14,QWORD PTR [rsp+0x50]
0x0046f223: nop    DWORD PTR [rax+0x0]
0x0046f227: nop    WORD PTR [rax+rax*1+0x0]
0x0046f230: mov    rax,QWORD PTR [rdi+0xa0]
0x0046f237: mov    rcx,QWORD PTR [rax+rsi*8]
0x0046f23b: mov    edx,DWORD PTR [rcx]
0x0046f23d: cmp    edx,0xffffffff
0x0046f240: je     0x14046f40e
0x0046f246: lea    rcx,[rip+0x1f6fd53]        # 0x1423defa0
0x0046f24d: call   0x1413c7440
0x0046f252: mov    rcx,rax
0x0046f255: mov    QWORD PTR [rsp+0x40],rax
0x0046f25a: mov    r10,rax
0x0046f25d: shr    r10,0x38
0x0046f261: mov    r11,rax
0x0046f264: shr    r11,0x30
0x0046f268: mov    r15,rax
0x0046f26b: shr    r15,0x28
0x0046f26f: mov    r12,rax
0x0046f272: shr    r12,0x20
0x0046f276: mov    r13,rax
0x0046f279: shr    r13,0x18
0x0046f27d: shr    rax,0x10
0x0046f281: mov    QWORD PTR [rsp+0x20],rax
0x0046f286: mov    rax,rcx
0x0046f289: shr    rax,0x8
0x0046f28d: mov    QWORD PTR [rsp+0x50],rax
0x0046f292: test   rcx,rcx
0x0046f295: je     0x14046f409
0x0046f29b: test   BYTE PTR [rcx+0x110],0x2
0x0046f2a2: jne    0x14046f409
0x0046f2a8: call   0x141389c90
0x0046f2ad: test   al,al
0x0046f2af: je     0x14046f409
0x0046f2b5: movzx  edx,cl
0x0046f2b8: movabs rax,0xcbf29ce484222325
0x0046f2c2: xor    rdx,rax
0x0046f2c5: movabs r8,0x100000001b3
0x0046f2cf: imul   rdx,r8
0x0046f2d3: movzx  eax,BYTE PTR [rsp+0x50]
0x0046f2d8: xor    rdx,rax
0x0046f2db: imul   rdx,r8
0x0046f2df: movzx  eax,BYTE PTR [rsp+0x20]
0x0046f2e4: xor    rdx,rax
0x0046f2e7: imul   rdx,r8
0x0046f2eb: movzx  eax,r13b
0x0046f2ef: xor    rdx,rax
0x0046f2f2: imul   rdx,r8
0x0046f2f6: movzx  eax,r12b
0x0046f2fa: xor    rdx,rax
0x0046f2fd: imul   rdx,r8
0x0046f301: movzx  eax,r15b
0x0046f305: xor    rdx,rax
0x0046f308: imul   rdx,r8
0x0046f30c: movzx  eax,r11b
0x0046f310: xor    rdx,rax
0x0046f313: imul   rdx,r8
0x0046f317: xor    rdx,r10
0x0046f31a: imul   rdx,r8
0x0046f31e: and    rdx,QWORD PTR [rbp+0x70]
0x0046f322: mov    rax,rdx
0x0046f325: add    rax,rax
0x0046f328: mov    rax,QWORD PTR [rbx+rax*8+0x8]
0x0046f32d: cmp    rax,QWORD PTR [rbp+0x48]
0x0046f331: je     0x14046f351
0x0046f333: add    rdx,rdx
0x0046f336: mov    r8,QWORD PTR [rbx+rdx*8]
0x0046f33a: cmp    rcx,QWORD PTR [rax+0x10]
0x0046f33e: je     0x14046f353
0x0046f340: cmp    rax,r8
0x0046f343: je     0x14046f351
0x0046f345: mov    rax,QWORD PTR [rax+0x8]
0x0046f349: cmp    rcx,QWORD PTR [rax+0x10]
0x0046f34d: jne    0x14046f340
0x0046f34f: jmp    0x14046f353
0x0046f351: xor    eax,eax
0x0046f353: test   rax,rax
0x0046f356: jne    0x14046f409
0x0046f35c: mov    rax,QWORD PTR [rbp-0x60]
0x0046f360: mov    rdx,QWORD PTR [rax+0x2e0]
0x0046f367: cmp    rdx,QWORD PTR [rax+0x2e8]
0x0046f36e: je     0x14046f381
0x0046f370: mov    QWORD PTR [rdx],rcx
0x0046f373: mov    BYTE PTR [rdx+0x8],0x0
0x0046f377: add    QWORD PTR [rax+0x2e0],0x10
0x0046f37f: jmp    0x14046f392
0x0046f381: lea    r8,[rsp+0x40]
0x0046f386: lea    rcx,[rax+0x2d8]
0x0046f38d: call   0x1403c93c0
0x0046f392: mov    r12,QWORD PTR [rsp+0x30]
0x0046f397: lea    r8,[rsp+0x40]
0x0046f39c: lea    rdx,[rbp+0x1a0]
0x0046f3a3: lea    rcx,[r12+0x3e0]
0x0046f3ab: call   0x140483380
0x0046f3b0: mov    rcx,QWORD PTR [rax]
0x0046f3b3: mov    DWORD PTR [rcx+0x18],0x3e8
0x0046f3ba: lea    r8,[rsp+0x40]
0x0046f3bf: lea    rdx,[rbp+0x80]
0x0046f3c6: lea    rcx,[rbp+0x40]
0x0046f3ca: call   0x1400ec910
0x0046f3cf: mov    ecx,DWORD PTR [r14+0x4]
0x0046f3d3: mov    rax,QWORD PTR [rsp+0x40]
0x0046f3d8: cmp    DWORD PTR [rax+0xc30],ecx
0x0046f3de: jne    0x14046f403
0x0046f3e0: lea    r8,[rsp+0x40]
0x0046f3e5: lea    rdx,[rbp+0xb0]
0x0046f3ec: lea    rcx,[r12+0x3e0]
0x0046f3f4: call   0x140483380
0x0046f3f9: mov    rcx,QWORD PTR [rax]
0x0046f3fc: add    DWORD PTR [rcx+0x18],0x3e8
0x0046f403: mov    rbx,QWORD PTR [rbp+0x58]
0x0046f407: jmp    0x14046f40e
0x0046f409: mov    r12,QWORD PTR [rsp+0x30]
0x0046f40e: sub    rsi,0x1
0x0046f412: jns    0x14046f230
0x0046f418: mov    r15,QWORD PTR [rip+0x206e291]        # 0x1424dd6b0
0x0046f41f: jmp    0x14046f5bb
0x0046f424: lea    rcx,[rip+0x1f6fb75]        # 0x1423defa0
0x0046f42b: call   0x1413c7440
0x0046f430: mov    r10,rax
0x0046f433: mov    QWORD PTR [rsp+0x40],rax
0x0046f438: mov    r11,rax
0x0046f43b: shr    r11,0x38
0x0046f43f: mov    rdi,rax
0x0046f442: shr    rdi,0x30
0x0046f446: mov    rsi,rax
0x0046f449: shr    rsi,0x28
0x0046f44d: mov    r12,rax
0x0046f450: shr    r12,0x20
0x0046f454: mov    r13,rax
0x0046f457: shr    r13,0x18
0x0046f45b: shr    rax,0x10
0x0046f45f: mov    QWORD PTR [rsp+0x50],rax
0x0046f464: mov    rax,r10
0x0046f467: shr    rax,0x8
0x0046f46b: mov    QWORD PTR [rsp+0x20],rax
0x0046f470: test   r10,r10
0x0046f473: je     0x14046f5b6
0x0046f479: test   BYTE PTR [r10+0x110],0x2
0x0046f481: jne    0x14046f5b6
0x0046f487: mov    rcx,r10
0x0046f48a: call   0x141389c90
0x0046f48f: test   al,al
0x0046f491: je     0x14046f5b6
0x0046f497: movzx  edx,r10b
0x0046f49b: movabs rax,0xcbf29ce484222325
0x0046f4a5: xor    rdx,rax
0x0046f4a8: movabs r8,0x100000001b3
0x0046f4b2: imul   rdx,r8
0x0046f4b6: movzx  eax,BYTE PTR [rsp+0x20]
0x0046f4bb: xor    rdx,rax
0x0046f4be: imul   rdx,r8
0x0046f4c2: movzx  eax,BYTE PTR [rsp+0x50]
0x0046f4c7: xor    rdx,rax
0x0046f4ca: imul   rdx,r8
0x0046f4ce: movzx  eax,r13b
0x0046f4d2: xor    rdx,rax
0x0046f4d5: imul   rdx,r8
0x0046f4d9: movzx  eax,r12b
0x0046f4dd: xor    rdx,rax
0x0046f4e0: imul   rdx,r8
0x0046f4e4: movzx  eax,sil
0x0046f4e8: xor    rdx,rax
0x0046f4eb: imul   rdx,r8
0x0046f4ef: movzx  eax,dil
0x0046f4f3: xor    rdx,rax
0x0046f4f6: imul   rdx,r8
0x0046f4fa: xor    rdx,r11
0x0046f4fd: imul   rdx,r8
0x0046f501: and    rdx,QWORD PTR [rbp+0x70]
0x0046f505: mov    rax,rdx
0x0046f508: add    rax,rax
0x0046f50b: mov    rcx,QWORD PTR [rbx+rax*8+0x8]
0x0046f510: cmp    rcx,QWORD PTR [rbp+0x48]
0x0046f514: je     0x14046f534
0x0046f516: add    rdx,rdx
0x0046f519: mov    rax,QWORD PTR [rbx+rdx*8]
0x0046f51d: cmp    r10,QWORD PTR [rcx+0x10]
0x0046f521: je     0x14046f536
0x0046f523: cmp    rcx,rax
0x0046f526: je     0x14046f534
0x0046f528: mov    rcx,QWORD PTR [rcx+0x8]
0x0046f52c: cmp    r10,QWORD PTR [rcx+0x10]
0x0046f530: jne    0x14046f523
0x0046f532: jmp    0x14046f536
0x0046f534: xor    ecx,ecx
0x0046f536: test   rcx,rcx
0x0046f539: jne    0x14046f5b6
0x0046f53f: mov    rcx,QWORD PTR [rbp-0x60]
0x0046f543: add    rcx,0x2d8
0x0046f54a: mov    rdx,QWORD PTR [rcx+0x8]
0x0046f54e: cmp    rdx,QWORD PTR [rcx+0x10]
0x0046f552: je     0x14046f562
0x0046f554: mov    QWORD PTR [rdx],r10
0x0046f557: mov    BYTE PTR [rdx+0x8],0x0
0x0046f55b: add    QWORD PTR [rcx+0x8],0x10
0x0046f560: jmp    0x14046f56c
0x0046f562: lea    r8,[rsp+0x40]
0x0046f567: call   0x1403c93c0
0x0046f56c: mov    r12,QWORD PTR [rsp+0x30]
0x0046f571: lea    rcx,[r12+0x3e0]
0x0046f579: lea    r8,[rsp+0x40]
0x0046f57e: lea    rdx,[rbp+0xa0]
0x0046f585: call   0x140483380
0x0046f58a: mov    rcx,QWORD PTR [rax]
0x0046f58d: mov    DWORD PTR [rcx+0x18],0x2710
0x0046f594: lea    r8,[rsp+0x40]
0x0046f599: lea    rdx,[rbp+0x90]
0x0046f5a0: lea    rcx,[rbp+0x40]
0x0046f5a4: call   0x1400ec910
0x0046f5a9: mov    r15,QWORD PTR [rip+0x206e100]        # 0x1424dd6b0
0x0046f5b0: mov    rbx,QWORD PTR [rbp+0x58]
0x0046f5b4: jmp    0x14046f5bb
0x0046f5b6: mov    r12,QWORD PTR [rsp+0x30]
0x0046f5bb: mov    rdx,QWORD PTR [rsp+0x38]
0x0046f5c0: sub    rdx,0x1
0x0046f5c4: mov    QWORD PTR [rsp+0x38],rdx
0x0046f5c9: jns    0x14046f180
0x0046f5cf: mov    r14d,0xffffffff
0x0046f5d5: xor    ebx,ebx
0x0046f5d7: mov    DWORD PTR [r12+0x290],ebx
0x0046f5df: lea    rcx,[r12+0x218]
0x0046f5e7: lea    rax,[rip+0x206e23a]        # 0x1424dd828
0x0046f5ee: cmp    rcx,rax
0x0046f5f1: je     0x14046f60d
0x0046f5f3: mov    r8,QWORD PTR [rip+0x206e236]        # 0x1424dd830
0x0046f5fa: mov    rdx,QWORD PTR [rip+0x206e227]        # 0x1424dd828
0x0046f601: sub    r8,rdx
0x0046f604: sar    r8,0x3
0x0046f608: call   0x1400e1640
0x0046f60d: mov    rax,QWORD PTR [rip+0x1f24ac4]        # 0x1423940d8
0x0046f614: test   rax,rax
0x0046f617: je     0x14046f633
0x0046f619: cmp    QWORD PTR [rax+0x1358],rbx
0x0046f620: je     0x14046f633
0x0046f622: mov    r8,r12
0x0046f625: xor    edx,edx
0x0046f627: lea    rcx,[rip+0x1f5bdb2]        # 0x1423cb3e0
0x0046f62e: call   0x1402b4320
0x0046f633: lea    rax,[r12+0x298]
0x0046f63b: mov    QWORD PTR [rax+0x10],rbx
0x0046f63f: cmp    QWORD PTR [rax+0x18],0xf
0x0046f644: jbe    0x14046f649
0x0046f646: mov    rax,QWORD PTR [rax]
0x0046f649: mov    BYTE PTR [rax],bl
0x0046f64b: mov    DWORD PTR [r12+0x294],ebx
0x0046f653: mov    QWORD PTR [r12+0x2c0],rbx
0x0046f65b: mov    DWORD PTR [r12+0x2c8],ebx
0x0046f663: mov    BYTE PTR [r12+0x2cc],bl
0x0046f66b: mov    QWORD PTR [r12+0x230],rbx
0x0046f673: mov    DWORD PTR [r12+0x238],ebx
0x0046f67b: mov    BYTE PTR [r12+0x23c],bl
0x0046f683: mov    DWORD PTR [r12+0x240],ebx
0x0046f68b: mov    BYTE PTR [r12+0x244],bl
0x0046f693: mov    rcx,r12
0x0046f696: call   0x140476ef0
0x0046f69b: cmp    BYTE PTR [rip+0x1431ee7],bl        # 0x1418a1588
0x0046f6a1: jne    0x14046f6e9
0x0046f6a3: mov    r8d,0x12
0x0046f6a9: lea    rdx,[rip+0x1f242f8]        # 0x1423939a8
0x0046f6b0: lea    rcx,[rsp+0x20]
0x0046f6b5: call   0x1400bab70
0x0046f6ba: mov    DWORD PTR [rsp+0x30],r14d
0x0046f6bf: mov    DWORD PTR [rsp+0x34],ebx
0x0046f6c3: mov    rax,QWORD PTR [rsp+0x30]
0x0046f6c8: cmp    BYTE PTR [rsp+0x28],bl
0x0046f6cc: cmovne rax,QWORD PTR [rsp+0x20]
0x0046f6d2: cmp    eax,0xffffffff
0x0046f6d5: jne    0x14046f6e9
0x0046f6d7: mov    edx,0x12
0x0046f6dc: lea    rcx,[rip+0x1431ea5]        # 0x1418a1588
0x0046f6e3: call   0x1401f22a0
0x0046f6e8: nop
0x0046f6e9: lea    rcx,[rbp+0x58]
0x0046f6ed: call   0x140066b00
0x0046f6f2: lea    rcx,[rbp+0x48]
0x0046f6f6: call   0x1400ec460
0x0046f6fb: nop
0x0046f6fc: mov    eax,r14d
0x0046f6ff: mov    rbx,QWORD PTR [rbp+0x180]
0x0046f706: lock xadd DWORD PTR [rbx+0x8],eax
0x0046f70b: cmp    eax,0x1
0x0046f70e: jne    0x14046f72f
0x0046f710: mov    rax,QWORD PTR [rbx]
0x0046f713: mov    rcx,rbx
0x0046f716: call   QWORD PTR [rax]
0x0046f718: mov    eax,r14d
0x0046f71b: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f720: cmp    eax,0x1
0x0046f723: jne    0x14046f72f
0x0046f725: mov    rax,QWORD PTR [rbx]
0x0046f728: mov    rcx,rbx
0x0046f72b: call   QWORD PTR [rax+0x8]
0x0046f72e: nop
0x0046f72f: lea    rcx,[rbp+0xf8]
0x0046f736: call   0x140066b00
0x0046f73b: lea    rcx,[rbp+0xe8]
0x0046f742: call   0x1400ec460
0x0046f747: nop
0x0046f748: mov    rcx,QWORD PTR [rbp+0x8]
0x0046f74c: test   rcx,rcx
0x0046f74f: je     0x14046f782
0x0046f751: mov    eax,r14d
0x0046f754: lock xadd DWORD PTR [rcx+0x8],eax
0x0046f759: cmp    eax,0x1
0x0046f75c: jne    0x14046f782
0x0046f75e: mov    rbx,QWORD PTR [rbp+0x8]
0x0046f762: mov    rax,QWORD PTR [rbx]
0x0046f765: mov    rcx,rbx
0x0046f768: call   QWORD PTR [rax]
0x0046f76a: mov    eax,r14d
0x0046f76d: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f772: cmp    eax,0x1
0x0046f775: jne    0x14046f782
0x0046f777: mov    rcx,QWORD PTR [rbp+0x8]
0x0046f77b: mov    rax,QWORD PTR [rcx]
0x0046f77e: call   QWORD PTR [rax+0x8]
0x0046f781: nop
0x0046f782: mov    rcx,QWORD PTR [rbp-0x78]
0x0046f786: test   rcx,rcx
0x0046f789: je     0x14046f7bc
0x0046f78b: mov    eax,r14d
0x0046f78e: lock xadd DWORD PTR [rcx+0x8],eax
0x0046f793: cmp    eax,0x1
0x0046f796: jne    0x14046f7bc
0x0046f798: mov    rbx,QWORD PTR [rbp-0x78]
0x0046f79c: mov    rax,QWORD PTR [rbx]
0x0046f79f: mov    rcx,rbx
0x0046f7a2: call   QWORD PTR [rax]
0x0046f7a4: mov    eax,r14d
0x0046f7a7: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f7ac: cmp    eax,0x1
0x0046f7af: jne    0x14046f7bc
0x0046f7b1: mov    rcx,QWORD PTR [rbp-0x78]
0x0046f7b5: mov    rax,QWORD PTR [rcx]
0x0046f7b8: call   QWORD PTR [rax+0x8]
0x0046f7bb: nop
0x0046f7bc: mov    rcx,QWORD PTR [rbp+0x18]
0x0046f7c0: test   rcx,rcx
0x0046f7c3: je     0x14046f7f6
0x0046f7c5: mov    eax,r14d
0x0046f7c8: lock xadd DWORD PTR [rcx+0x8],eax
0x0046f7cd: cmp    eax,0x1
0x0046f7d0: jne    0x14046f7f6
0x0046f7d2: mov    rbx,QWORD PTR [rbp+0x18]
0x0046f7d6: mov    rax,QWORD PTR [rbx]
0x0046f7d9: mov    rcx,rbx
0x0046f7dc: call   QWORD PTR [rax]
0x0046f7de: mov    eax,r14d
0x0046f7e1: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f7e6: cmp    eax,0x1
0x0046f7e9: jne    0x14046f7f6
0x0046f7eb: mov    rcx,QWORD PTR [rbp+0x18]
0x0046f7ef: mov    rax,QWORD PTR [rcx]
0x0046f7f2: call   QWORD PTR [rax+0x8]
0x0046f7f5: nop
0x0046f7f6: mov    rcx,QWORD PTR [rbp-0x58]
0x0046f7fa: test   rcx,rcx
0x0046f7fd: je     0x14046f830
0x0046f7ff: mov    eax,r14d
0x0046f802: lock xadd DWORD PTR [rcx+0x8],eax
0x0046f807: cmp    eax,0x1
0x0046f80a: jne    0x14046f830
0x0046f80c: mov    rbx,QWORD PTR [rbp-0x58]
0x0046f810: mov    rax,QWORD PTR [rbx]
0x0046f813: mov    rcx,rbx
0x0046f816: call   QWORD PTR [rax]
0x0046f818: mov    eax,r14d
0x0046f81b: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f820: cmp    eax,0x1
0x0046f823: jne    0x14046f830
0x0046f825: mov    rcx,QWORD PTR [rbp-0x58]
0x0046f829: mov    rax,QWORD PTR [rcx]
0x0046f82c: call   QWORD PTR [rax+0x8]
0x0046f82f: nop
0x0046f830: mov    rcx,QWORD PTR [rbp+0x28]
0x0046f834: test   rcx,rcx
0x0046f837: je     0x14046f86a
0x0046f839: mov    eax,r14d
0x0046f83c: lock xadd DWORD PTR [rcx+0x8],eax
0x0046f841: cmp    eax,0x1
0x0046f844: jne    0x14046f86a
0x0046f846: mov    rbx,QWORD PTR [rbp+0x28]
0x0046f84a: mov    rax,QWORD PTR [rbx]
0x0046f84d: mov    rcx,rbx
0x0046f850: call   QWORD PTR [rax]
0x0046f852: mov    eax,r14d
0x0046f855: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f85a: cmp    eax,0x1
0x0046f85d: jne    0x14046f86a
0x0046f85f: mov    rcx,QWORD PTR [rbp+0x28]
0x0046f863: mov    rax,QWORD PTR [rcx]
0x0046f866: call   QWORD PTR [rax+0x8]
0x0046f869: nop
0x0046f86a: mov    rcx,QWORD PTR [rbp+0x38]
0x0046f86e: test   rcx,rcx
0x0046f871: je     0x14046f8a4
0x0046f873: mov    eax,r14d
0x0046f876: lock xadd DWORD PTR [rcx+0x8],eax
0x0046f87b: cmp    eax,0x1
0x0046f87e: jne    0x14046f8a4
0x0046f880: mov    rbx,QWORD PTR [rbp+0x38]
0x0046f884: mov    rax,QWORD PTR [rbx]
0x0046f887: mov    rcx,rbx
0x0046f88a: call   QWORD PTR [rax]
0x0046f88c: mov    eax,r14d
0x0046f88f: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f894: cmp    eax,0x1
0x0046f897: jne    0x14046f8a4
0x0046f899: mov    rcx,QWORD PTR [rbp+0x38]
0x0046f89d: mov    rax,QWORD PTR [rcx]
0x0046f8a0: call   QWORD PTR [rax+0x8]
0x0046f8a3: nop
0x0046f8a4: mov    rcx,QWORD PTR [rsp+0x68]
0x0046f8a9: test   rcx,rcx
0x0046f8ac: je     0x14046f8e1
0x0046f8ae: mov    eax,r14d
0x0046f8b1: lock xadd DWORD PTR [rcx+0x8],eax
0x0046f8b6: cmp    eax,0x1
0x0046f8b9: jne    0x14046f8e1
0x0046f8bb: mov    rbx,QWORD PTR [rsp+0x68]
0x0046f8c0: mov    rax,QWORD PTR [rbx]
0x0046f8c3: mov    rcx,rbx
0x0046f8c6: call   QWORD PTR [rax]
0x0046f8c8: mov    eax,r14d
0x0046f8cb: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f8d0: cmp    eax,0x1
0x0046f8d3: jne    0x14046f8e1
0x0046f8d5: mov    rcx,QWORD PTR [rsp+0x68]
0x0046f8da: mov    rax,QWORD PTR [rcx]
0x0046f8dd: call   QWORD PTR [rax+0x8]
0x0046f8e0: nop
0x0046f8e1: mov    rcx,QWORD PTR [rbp-0x38]
0x0046f8e5: test   rcx,rcx
0x0046f8e8: je     0x14046f91b
0x0046f8ea: mov    eax,r14d
0x0046f8ed: lock xadd DWORD PTR [rcx+0x8],eax
0x0046f8f2: cmp    eax,0x1
0x0046f8f5: jne    0x14046f91b
0x0046f8f7: mov    rbx,QWORD PTR [rbp-0x38]
0x0046f8fb: mov    rax,QWORD PTR [rbx]
0x0046f8fe: mov    rcx,rbx
0x0046f901: call   QWORD PTR [rax]
0x0046f903: mov    eax,r14d
0x0046f906: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f90b: cmp    eax,0x1
0x0046f90e: jne    0x14046f91b
0x0046f910: mov    rcx,QWORD PTR [rbp-0x38]
0x0046f914: mov    rax,QWORD PTR [rcx]
0x0046f917: call   QWORD PTR [rax+0x8]
0x0046f91a: nop
0x0046f91b: mov    rcx,QWORD PTR [rbp-0x28]
0x0046f91f: test   rcx,rcx
0x0046f922: je     0x14046f955
0x0046f924: mov    eax,r14d
0x0046f927: lock xadd DWORD PTR [rcx+0x8],eax
0x0046f92c: cmp    eax,0x1
0x0046f92f: jne    0x14046f955
0x0046f931: mov    rbx,QWORD PTR [rbp-0x28]
0x0046f935: mov    rax,QWORD PTR [rbx]
0x0046f938: mov    rcx,rbx
0x0046f93b: call   QWORD PTR [rax]
0x0046f93d: mov    eax,r14d
0x0046f940: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f945: cmp    eax,0x1
0x0046f948: jne    0x14046f955
0x0046f94a: mov    rcx,QWORD PTR [rbp-0x28]
0x0046f94e: mov    rax,QWORD PTR [rcx]
0x0046f951: call   QWORD PTR [rax+0x8]
0x0046f954: nop
0x0046f955: mov    rcx,QWORD PTR [rbp-0x48]
0x0046f959: test   rcx,rcx
0x0046f95c: je     0x14046f98f
0x0046f95e: mov    eax,r14d
0x0046f961: lock xadd DWORD PTR [rcx+0x8],eax
0x0046f966: cmp    eax,0x1
0x0046f969: jne    0x14046f98f
0x0046f96b: mov    rbx,QWORD PTR [rbp-0x48]
0x0046f96f: mov    rax,QWORD PTR [rbx]
0x0046f972: mov    rcx,rbx
0x0046f975: call   QWORD PTR [rax]
0x0046f977: mov    eax,r14d
0x0046f97a: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f97f: cmp    eax,0x1
0x0046f982: jne    0x14046f98f
0x0046f984: mov    rcx,QWORD PTR [rbp-0x48]
0x0046f988: mov    rax,QWORD PTR [rcx]
0x0046f98b: call   QWORD PTR [rax+0x8]
0x0046f98e: nop
0x0046f98f: mov    rcx,QWORD PTR [rsp+0x78]
0x0046f994: test   rcx,rcx
0x0046f997: je     0x14046f9cc
0x0046f999: mov    eax,r14d
0x0046f99c: lock xadd DWORD PTR [rcx+0x8],eax
0x0046f9a1: cmp    eax,0x1
0x0046f9a4: jne    0x14046f9cc
0x0046f9a6: mov    rbx,QWORD PTR [rsp+0x78]
0x0046f9ab: mov    rax,QWORD PTR [rbx]
0x0046f9ae: mov    rcx,rbx
0x0046f9b1: call   QWORD PTR [rax]
0x0046f9b3: mov    eax,r14d
0x0046f9b6: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f9bb: cmp    eax,0x1
0x0046f9be: jne    0x14046f9cc
0x0046f9c0: mov    rcx,QWORD PTR [rsp+0x78]
0x0046f9c5: mov    rax,QWORD PTR [rcx]
0x0046f9c8: call   QWORD PTR [rax+0x8]
0x0046f9cb: nop
0x0046f9cc: mov    rcx,QWORD PTR [rbp-0x18]
0x0046f9d0: test   rcx,rcx
0x0046f9d3: je     0x14046fa06
0x0046f9d5: mov    eax,r14d
0x0046f9d8: lock xadd DWORD PTR [rcx+0x8],eax
0x0046f9dd: cmp    eax,0x1
0x0046f9e0: jne    0x14046fa06
0x0046f9e2: mov    rbx,QWORD PTR [rbp-0x18]
0x0046f9e6: mov    rax,QWORD PTR [rbx]
0x0046f9e9: mov    rcx,rbx
0x0046f9ec: call   QWORD PTR [rax]
0x0046f9ee: mov    eax,r14d
0x0046f9f1: lock xadd DWORD PTR [rbx+0xc],eax
0x0046f9f6: cmp    eax,0x1
0x0046f9f9: jne    0x14046fa06
0x0046f9fb: mov    rcx,QWORD PTR [rbp-0x18]
0x0046f9ff: mov    rax,QWORD PTR [rcx]
0x0046fa02: call   QWORD PTR [rax+0x8]
0x0046fa05: nop
0x0046fa06: mov    rcx,QWORD PTR [rbp-0x68]
0x0046fa0a: test   rcx,rcx
0x0046fa0d: je     0x14046fa3e
0x0046fa0f: mov    eax,r14d
0x0046fa12: lock xadd DWORD PTR [rcx+0x8],eax
0x0046fa17: cmp    eax,0x1
0x0046fa1a: jne    0x14046fa3e
0x0046fa1c: mov    rbx,QWORD PTR [rbp-0x68]
0x0046fa20: mov    rax,QWORD PTR [rbx]
0x0046fa23: mov    rcx,rbx
0x0046fa26: call   QWORD PTR [rax]
0x0046fa28: lock xadd DWORD PTR [rbx+0xc],r14d
0x0046fa2e: cmp    r14d,0x1
0x0046fa32: jne    0x14046fa3e
0x0046fa34: mov    rcx,QWORD PTR [rbp-0x68]
0x0046fa38: mov    rax,QWORD PTR [rcx]
0x0046fa3b: call   QWORD PTR [rax+0x8]
0x0046fa3e: mov    rcx,QWORD PTR [rbp+0x218]
0x0046fa45: xor    rcx,rsp
0x0046fa48: call   0x1415345d0
0x0046fa4d: lea    r11,[rsp+0x320]
0x0046fa55: mov    rbx,QWORD PTR [r11+0x38]
0x0046fa59: mov    rsi,QWORD PTR [r11+0x40]
0x0046fa5d: mov    rdi,QWORD PTR [r11+0x48]
0x0046fa61: mov    rsp,r11
0x0046fa64: pop    r15
0x0046fa66: pop    r14
0x0046fa68: pop    r13
0x0046fa6a: pop    r12
0x0046fa6c: pop    rbp
0x0046fa6d: ret
