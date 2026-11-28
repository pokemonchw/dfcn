; reference PE:6aea05a1:02734000; reference-description:general_ref_poetic_formst; RVA 0xef7c30..0xef7d24; code ends 0xef7d24
0x00ef7c30: rex push rbx
0x00ef7c32: sub    rsp,0x50
0x00ef7c36: mov    rax,QWORD PTR [rip+0x9c6403]        # 0x1418be040
0x00ef7c3d: xor    rax,rsp
0x00ef7c40: mov    QWORD PTR [rsp+0x40],rax
0x00ef7c45: mov    rbx,rdx
0x00ef7c48: mov    edx,DWORD PTR [rcx+0x8]
0x00ef7c4b: lea    rcx,[rip+0x16126f6]        # 0x14250a348
0x00ef7c52: call   0x140073ba0
0x00ef7c57: test   rax,rax
0x00ef7c5a: je     0x140ef7d11
0x00ef7c60: xorps  xmm0,xmm0
0x00ef7c63: movups XMMWORD PTR [rsp+0x20],xmm0
0x00ef7c68: mov    QWORD PTR [rsp+0x30],0x0
0x00ef7c71: mov    QWORD PTR [rsp+0x38],0xf
0x00ef7c7a: mov    BYTE PTR [rsp+0x20],0x0
0x00ef7c7f: lea    rcx,[rax+0x8]
0x00ef7c83: xor    r9d,r9d
0x00ef7c86: mov    r8b,0x1
0x00ef7c89: lea    rdx,[rsp+0x20]
0x00ef7c8e: call   0x140aae180
0x00ef7c93: lea    rax,[rsp+0x20]
0x00ef7c98: cmp    rbx,rax
0x00ef7c9b: je     0x140ef7cbb
0x00ef7c9d: lea    rdx,[rsp+0x20]
0x00ef7ca2: cmp    QWORD PTR [rsp+0x38],0xf
0x00ef7ca8: cmova  rdx,QWORD PTR [rsp+0x20]
0x00ef7cae: mov    r8,QWORD PTR [rsp+0x30]
0x00ef7cb3: mov    rcx,rbx
0x00ef7cb6: call   0x140070f00
0x00ef7cbb: mov    r8d,0x11
0x00ef7cc1: lea    rdx,[rip+0x8600e0]        # 0x141757da8 ; literal=" as a poetic form"
0x00ef7cc8: mov    rcx,rbx
0x00ef7ccb: call   0x140071040
0x00ef7cd0: nop
0x00ef7cd1: mov    rdx,QWORD PTR [rsp+0x38]
0x00ef7cd6: cmp    rdx,0xf
0x00ef7cda: jbe    0x140ef7d11
0x00ef7cdc: inc    rdx
0x00ef7cdf: mov    rcx,QWORD PTR [rsp+0x20]
0x00ef7ce4: mov    rax,rcx
0x00ef7ce7: cmp    rdx,0x1000
0x00ef7cee: jb     0x140ef7d0c
0x00ef7cf0: add    rdx,0x27
0x00ef7cf4: mov    rcx,QWORD PTR [rcx-0x8]
0x00ef7cf8: sub    rax,rcx
0x00ef7cfb: add    rax,0xfffffffffffffff8
0x00ef7cff: cmp    rax,0x1f
0x00ef7d03: jbe    0x140ef7d0c
0x00ef7d05: call   QWORD PTR [rip+0x708e35]        # 0x141600b40
0x00ef7d0b: int3
0x00ef7d0c: call   0x1415530d0
0x00ef7d11: mov    rcx,QWORD PTR [rsp+0x40]
0x00ef7d16: xor    rcx,rsp
0x00ef7d19: call   0x1415530b0
0x00ef7d1e: add    rsp,0x50
0x00ef7d22: pop    rbx
0x00ef7d23: ret
