; reference; PE:6aea05a1:02734000; 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16; memorial-choice-refresh; complete unwind owner
0x8db6f0: mov    QWORD PTR [rsp+0x8],rbx
0x8db6f5: mov    QWORD PTR [rsp+0x10],rsi
0x8db6fa: mov    QWORD PTR [rsp+0x18],rdi
0x8db6ff: mov    QWORD PTR [rsp+0x20],r14
0x8db704: push   rbp
0x8db705: mov    rbp,rsp
0x8db708: sub    rsp,0x50
0x8db70c: mov    rax,QWORD PTR [rip+0xfe292d]        # 0x1418be040
0x8db713: xor    rax,rsp
0x8db716: mov    QWORD PTR [rbp-0x10],rax
0x8db71a: mov    esi,r8d
0x8db71d: mov    r14d,edx
0x8db720: cmp    DWORD PTR [rcx+0x48],0xd3
0x8db727: jne    0x1408dbcbc
0x8db72d: mov    r11d,DWORD PTR [rcx+0x80]
0x8db734: mov    r8,QWORD PTR [rip+0x1c40a65]        # 0x14251c1a0
0x8db73b: mov    rbx,QWORD PTR [rip+0x1c40a56]        # 0x14251c198
0x8db742: sub    r8,rbx
0x8db745: sar    r8,0x3
0x8db749: test   r8,r8
0x8db74c: je     0x1408dbcbc
0x8db752: cmp    r11d,0xffffffff
0x8db756: je     0x1408dbcbc
0x8db75c: xor    edx,edx
0x8db75e: sub    r8d,0x1
0x8db762: js     0x1408dbcbc
0x8db768: nop    DWORD PTR [rax+rax*1+0x0]
0x8db770: lea    ecx,[r8+rdx*1]
0x8db774: sar    ecx,1
0x8db776: movsxd rax,ecx
0x8db779: mov    r10,QWORD PTR [rbx+rax*8]
0x8db77d: cmp    DWORD PTR [r10+0xe0],r11d
0x8db784: je     0x1408db7a0
0x8db786: lea    eax,[rcx-0x1]
0x8db789: cmovle eax,r8d
0x8db78d: mov    r8d,eax
0x8db790: lea    eax,[rcx+0x1]
0x8db793: cmovle edx,eax
0x8db796: cmp    edx,r8d
0x8db799: jle    0x1408db770
0x8db79b: jmp    0x1408dbcbc
0x8db7a0: test   r10,r10
0x8db7a3: je     0x1408dbcbc
0x8db7a9: mov    r11d,DWORD PTR [r10+0xd8]
0x8db7b0: mov    r8,QWORD PTR [rip+0x1b2bd81]        # 0x142407538
0x8db7b7: mov    r10,QWORD PTR [rip+0x1b2bd72]        # 0x142407530
0x8db7be: sub    r8,r10
0x8db7c1: sar    r8,0x3
0x8db7c5: test   r8d,r8d
0x8db7c8: je     0x1408dbcbc
0x8db7ce: cmp    r11d,0xffffffff
0x8db7d2: je     0x1408dbcbc
0x8db7d8: xor    edx,edx
0x8db7da: sub    r8d,0x1
0x8db7de: js     0x1408db80a
0x8db7e0: lea    ecx,[rdx+r8*1]
0x8db7e4: sar    ecx,1
0x8db7e6: movsxd rax,ecx
0x8db7e9: mov    rdi,QWORD PTR [r10+rax*8]
0x8db7ed: cmp    DWORD PTR [rdi+0x130],r11d
0x8db7f4: je     0x1408db80c
0x8db7f6: lea    eax,[rcx+0x1]
0x8db7f9: cmovle edx,eax
0x8db7fc: lea    eax,[rcx-0x1]
0x8db7ff: cmovle eax,r8d
0x8db803: mov    r8d,eax
0x8db806: cmp    edx,eax
0x8db808: jle    0x1408db7e0
0x8db80a: xor    edi,edi
0x8db80c: test   rdi,rdi
0x8db80f: je     0x1408dbcbc
0x8db815: xor    ebx,ebx
0x8db817: lea    rdx,[rip+0x1ae0c6a]        # 0x1423bc488
0x8db81e: mov    ecx,DWORD PTR [rdi+0x130]
0x8db824: call   0x1400bb3f0
0x8db829: test   rax,rax
0x8db82c: je     0x1408db954
0x8db832: mov    rax,QWORD PTR [rip+0x1b2c67f]        # 0x142407eb8
0x8db839: mov    rcx,QWORD PTR [rip+0x1b2c680]        # 0x142407ec0
0x8db840: cmp    rax,rcx
0x8db843: jae    0x1408db86a
0x8db845: mov    r8,QWORD PTR [rax]
0x8db848: cmp    WORD PTR [r8+0x10c],0x0
0x8db851: jne    0x1408db864
0x8db853: mov    edx,DWORD PTR [rdi+0xc30]
0x8db859: cmp    DWORD PTR [r8+0x108],edx
0x8db860: jne    0x1408db864
0x8db862: inc    ebx
0x8db864: add    rax,0x8
0x8db868: jmp    0x1408db840
0x8db86a: test   ebx,ebx
0x8db86c: jle    0x1408db954
0x8db872: xorps  xmm0,xmm0
0x8db875: movups XMMWORD PTR [rbp-0x30],xmm0
0x8db879: mov    QWORD PTR [rbp-0x20],0x0
0x8db881: mov    QWORD PTR [rbp-0x18],0xf
0x8db889: mov    BYTE PTR [rbp-0x30],0x0
0x8db88d: cmp    ebx,0x2
0x8db890: jl     0x1408db8b5
0x8db892: lea    rdx,[rbp-0x30]
0x8db896: mov    ecx,ebx
0x8db898: call   0x140545610
0x8db89d: mov    r8d,0xf
0x8db8a3: lea    rdx,[rip+0xe03ca6]        # 0x1416df550 ; cstring=' slabs engraved'
0x8db8aa: lea    rcx,[rbp-0x30]
0x8db8ae: call   0x140071040
0x8db8b3: jmp    0x1408db8e1
0x8db8b5: mov    QWORD PTR [rbp-0x20],0xd
0x8db8bd: movsd  xmm0,QWORD PTR [rip+0xe03c9b]        # 0x1416df560 ; cstring='Slab engraved'
0x8db8c5: movsd  QWORD PTR [rbp-0x30],xmm0
0x8db8ca: mov    eax,DWORD PTR [rip+0xe03c98]        # 0x1416df568 ; cstring='raved'
0x8db8d0: mov    DWORD PTR [rbp-0x28],eax
0x8db8d3: movzx  eax,BYTE PTR [rip+0xe03c92]        # 0x1416df56c ; cstring='d'
0x8db8da: mov    BYTE PTR [rbp-0x24],al
0x8db8dd: mov    BYTE PTR [rbp-0x23],0x0
0x8db8e1: mov    DWORD PTR [rip+0x1d91011],0x1000002        # 0x14266c8fc
0x8db8eb: add    esi,0x2
0x8db8ee: mov    DWORD PTR [rip+0x1d91000],esi        # 0x14266c8f4
0x8db8f4: mov    DWORD PTR [rip+0x1d90ffd],r14d        # 0x14266c8f8
0x8db8fb: xor    r9d,r9d
0x8db8fe: lea    rdx,[rbp-0x30]
0x8db902: lea    rcx,[rip+0x1d90f67]        # 0x14266c870
0x8db909: call   0x140af3400
0x8db90e: nop
0x8db90f: mov    rdx,QWORD PTR [rbp-0x18]
0x8db913: cmp    rdx,0xf
0x8db917: jbe    0x1408db9f7
0x8db91d: inc    rdx
0x8db920: mov    rcx,QWORD PTR [rbp-0x30]
0x8db924: mov    rax,rcx
0x8db927: cmp    rdx,0x1000
0x8db92e: jb     0x1408db9f2
0x8db934: add    rdx,0x27
0x8db938: mov    rcx,QWORD PTR [rcx-0x8]
0x8db93c: sub    rax,rcx
0x8db93f: add    rax,0xfffffffffffffff8
0x8db943: cmp    rax,0x1f
0x8db947: jbe    0x1408db9f2
0x8db94d: call   QWORD PTR [rip+0xd251ed]        # 0x141600b40
0x8db953: int3
0x8db954: mov    DWORD PTR [rip+0x1d90f9e],0x1010006        # 0x14266c8fc
0x8db95e: add    esi,0x2
0x8db961: mov    DWORD PTR [rip+0x1d90f8d],esi        # 0x14266c8f4
0x8db967: mov    DWORD PTR [rip+0x1d90f8a],r14d        # 0x14266c8f8
0x8db96e: xorps  xmm0,xmm0
0x8db971: movups XMMWORD PTR [rbp-0x30],xmm0
0x8db975: mov    ecx,0x20
0x8db97a: call   0x140071e00
0x8db97f: mov    QWORD PTR [rbp-0x30],rax
0x8db983: movdqa xmm0,XMMWORD PTR [rip+0xed0155]        # 0x1417abae0
0x8db98b: movdqu XMMWORD PTR [rbp-0x20],xmm0
0x8db990: movups xmm0,XMMWORD PTR [rip+0xe03b81]        # 0x1416df518 ; vector='No slabs engrave'
0x8db997: movups XMMWORD PTR [rax],xmm0
0x8db99a: movzx  ecx,BYTE PTR [rip+0xe03b87]        # 0x1416df528 ; cstring='d'
0x8db9a1: mov    BYTE PTR [rax+0x10],cl
0x8db9a4: mov    BYTE PTR [rax+0x11],0x0
0x8db9a8: xor    r9d,r9d
0x8db9ab: lea    rdx,[rbp-0x30]
0x8db9af: lea    rcx,[rip+0x1d90eba]        # 0x14266c870
0x8db9b6: call   0x140af3400
0x8db9bb: nop
0x8db9bc: mov    rdx,QWORD PTR [rbp-0x18]
0x8db9c0: cmp    rdx,0xf
0x8db9c4: jbe    0x1408db9f7
0x8db9c6: inc    rdx
0x8db9c9: mov    rcx,QWORD PTR [rbp-0x30]
0x8db9cd: mov    rax,rcx
0x8db9d0: cmp    rdx,0x1000
0x8db9d7: jb     0x1408db9f2
0x8db9d9: add    rdx,0x27
0x8db9dd: mov    rcx,QWORD PTR [rcx-0x8]
0x8db9e1: sub    rax,rcx
0x8db9e4: add    rax,0xfffffffffffffff8
0x8db9e8: cmp    rax,0x1f
0x8db9ec: ja     0x1408dbc71
0x8db9f2: call   0x1415530d0
0x8db9f7: inc    r14d
0x8db9fa: mov    rcx,rdi
0x8db9fd: call   0x1413ee0d0
0x8dba02: movzx  ebx,al
0x8dba05: mov    rcx,rdi
0x8dba08: call   0x1413ee190
0x8dba0d: xorps  xmm0,xmm0
0x8dba10: movups XMMWORD PTR [rbp-0x30],xmm0
0x8dba14: test   bl,bl
0x8dba16: jne    0x1408dbbc4
0x8dba1c: test   al,al
0x8dba1e: jne    0x1408dbb75
0x8dba24: mov    rax,QWORD PTR [rdi+0x380]
0x8dba2b: test   rax,rax
0x8dba2e: je     0x1408dbb1c
0x8dba34: test   BYTE PTR [rax+0x1c],0x1
0x8dba38: mov    DWORD PTR [rip+0x1d90eb6],esi        # 0x14266c8f4
0x8dba3e: mov    DWORD PTR [rip+0x1d90eb3],r14d        # 0x14266c8f8
0x8dba45: je     0x1408dbad0
0x8dba4b: mov    DWORD PTR [rip+0x1d90ea7],0x1010004        # 0x14266c8fc
0x8dba55: movdqa xmm1,XMMWORD PTR [rip+0xecffc3]        # 0x1417aba20
0x8dba5d: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x8dba62: mov    eax,DWORD PTR [rip+0xe03a6c]        # 0x1416df4d4 ; cstring='Ghost'
0x8dba68: mov    DWORD PTR [rbp-0x30],eax
0x8dba6b: movzx  eax,BYTE PTR [rip+0xe03a66]        # 0x1416df4d8 ; cstring='t'
0x8dba72: mov    BYTE PTR [rbp-0x2c],al
0x8dba75: mov    BYTE PTR [rbp-0x2b],bl
0x8dba78: xor    r9d,r9d
0x8dba7b: lea    rdx,[rbp-0x30]
0x8dba7f: lea    rcx,[rip+0x1d90dea]        # 0x14266c870
0x8dba86: call   0x140af3400
0x8dba8b: nop
0x8dba8c: mov    rdx,QWORD PTR [rbp-0x18]
0x8dba90: cmp    rdx,0xf
0x8dba94: jbe    0x1408dbcbc
0x8dba9a: inc    rdx
0x8dba9d: mov    rcx,QWORD PTR [rbp-0x30]
0x8dbaa1: cmp    rdx,0x1000
0x8dbaa8: mov    rax,rcx
0x8dbaab: jb     0x1408dbac6
0x8dbaad: add    rdx,0x27
0x8dbab1: mov    rcx,QWORD PTR [rcx-0x8]
0x8dbab5: sub    rax,rcx
0x8dbab8: add    rax,0xfffffffffffffff8
0x8dbabc: cmp    rax,0x1f
0x8dbac0: ja     0x1408dbc71
0x8dbac6: call   0x1415530d0
0x8dbacb: jmp    0x1408dbcbc
0x8dbad0: mov    DWORD PTR [rip+0x1d90e22],0x1010006        # 0x14266c8fc
0x8dbada: mov    ecx,0x20
0x8dbadf: call   0x140071e00
0x8dbae4: mov    QWORD PTR [rbp-0x30],rax
0x8dbae8: movdqa xmm0,XMMWORD PTR [rip+0xecffe0]        # 0x1417abad0
0x8dbaf0: movdqu XMMWORD PTR [rbp-0x20],xmm0
0x8dbaf5: movups xmm0,XMMWORD PTR [rip+0xe039e4]        # 0x1416df4e0 ; vector='Not memorialized'
0x8dbafc: movups XMMWORD PTR [rax],xmm0
0x8dbaff: mov    BYTE PTR [rax+0x10],0x0
0x8dbb03: xor    r9d,r9d
0x8dbb06: lea    rdx,[rbp-0x30]
0x8dbb0a: lea    rcx,[rip+0x1d90d5f]        # 0x14266c870
0x8dbb11: call   0x140af3400
0x8dbb16: nop
0x8dbb17: jmp    0x1408dbcb3
0x8dbb1c: mov    DWORD PTR [rip+0x1d90dd6],0x1010006        # 0x14266c8fc
0x8dbb26: mov    DWORD PTR [rip+0x1d90dc8],esi        # 0x14266c8f4
0x8dbb2c: mov    DWORD PTR [rip+0x1d90dc5],r14d        # 0x14266c8f8
0x8dbb33: mov    ecx,0x20
0x8dbb38: call   0x140071e00
0x8dbb3d: mov    QWORD PTR [rbp-0x30],rax
0x8dbb41: movdqa xmm0,XMMWORD PTR [rip+0xecff87]        # 0x1417abad0
0x8dbb49: movdqu XMMWORD PTR [rbp-0x20],xmm0
0x8dbb4e: movups xmm0,XMMWORD PTR [rip+0xe0398b]        # 0x1416df4e0 ; vector='Not memorialized'
0x8dbb55: movups XMMWORD PTR [rax],xmm0
0x8dbb58: mov    BYTE PTR [rax+0x10],0x0
0x8dbb5c: xor    r9d,r9d
0x8dbb5f: lea    rdx,[rbp-0x30]
0x8dbb63: lea    rcx,[rip+0x1d90d06]        # 0x14266c870
0x8dbb6a: call   0x140af3400
0x8dbb6f: nop
0x8dbb70: jmp    0x1408dbcb3
0x8dbb75: mov    DWORD PTR [rip+0x1d90d7d],0x1010002        # 0x14266c8fc
0x8dbb7f: mov    DWORD PTR [rip+0x1d90d6f],esi        # 0x14266c8f4
0x8dbb85: mov    DWORD PTR [rip+0x1d90d6c],r14d        # 0x14266c8f8
0x8dbb8c: movdqa xmm1,XMMWORD PTR [rip+0xecfebc]        # 0x1417aba50
0x8dbb94: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x8dbb99: movabs rax,0x6465626d6f746e45 ; inline='Entombed'
0x8dbba3: mov    QWORD PTR [rbp-0x30],rax
0x8dbba7: mov    BYTE PTR [rbp-0x28],0x0
0x8dbbab: xor    r9d,r9d
0x8dbbae: lea    rdx,[rbp-0x30]
0x8dbbb2: lea    rcx,[rip+0x1d90cb7]        # 0x14266c870
0x8dbbb9: call   0x140af3400
0x8dbbbe: nop
0x8dbbbf: jmp    0x1408dba8c
0x8dbbc4: mov    DWORD PTR [rip+0x1d90d2e],0x1010002        # 0x14266c8fc
0x8dbbce: mov    DWORD PTR [rip+0x1d90d20],esi        # 0x14266c8f4
0x8dbbd4: mov    DWORD PTR [rip+0x1d90d1d],r14d        # 0x14266c8f8
0x8dbbdb: test   al,al
0x8dbbdd: je     0x1408dbc78
0x8dbbe3: mov    ecx,0x20
0x8dbbe8: call   0x140071e00
0x8dbbed: mov    QWORD PTR [rbp-0x30],rax
0x8dbbf1: movdqa xmm0,XMMWORD PTR [rip+0xecff67]        # 0x1417abb60
0x8dbbf9: movdqu XMMWORD PTR [rbp-0x20],xmm0
0x8dbbfe: movups xmm0,XMMWORD PTR [rip+0xe0392b]        # 0x1416df530 ; vector='Entombed and mem'
0x8dbc05: movups XMMWORD PTR [rax],xmm0
0x8dbc08: movsd  xmm0,QWORD PTR [rip+0xe03930]        # 0x1416df540 ; cstring='orialized'
0x8dbc10: movsd  QWORD PTR [rax+0x10],xmm0
0x8dbc15: movzx  ecx,BYTE PTR [rip+0xe0392c]        # 0x1416df548 ; cstring='d'
0x8dbc1c: mov    BYTE PTR [rax+0x18],cl
0x8dbc1f: mov    BYTE PTR [rax+0x19],0x0
0x8dbc23: xor    r9d,r9d
0x8dbc26: lea    rdx,[rbp-0x30]
0x8dbc2a: lea    rcx,[rip+0x1d90c3f]        # 0x14266c870
0x8dbc31: call   0x140af3400
0x8dbc36: nop
0x8dbc37: mov    rdx,QWORD PTR [rbp-0x18]
0x8dbc3b: cmp    rdx,0xf
0x8dbc3f: jbe    0x1408dbcbc
0x8dbc41: inc    rdx
0x8dbc44: mov    rcx,QWORD PTR [rbp-0x30]
0x8dbc48: mov    rax,rcx
0x8dbc4b: cmp    rdx,0x1000
0x8dbc52: jb     0x1408dbac6
0x8dbc58: add    rdx,0x27
0x8dbc5c: mov    rcx,QWORD PTR [rcx-0x8]
0x8dbc60: sub    rax,rcx
0x8dbc63: add    rax,0xfffffffffffffff8
0x8dbc67: cmp    rax,0x1f
0x8dbc6b: jbe    0x1408dbac6
0x8dbc71: call   QWORD PTR [rip+0xd24ec9]        # 0x141600b40
0x8dbc77: int3
0x8dbc78: movdqa xmm1,XMMWORD PTR [rip+0xecfe10]        # 0x1417aba90
0x8dbc80: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x8dbc85: movsd  xmm0,QWORD PTR [rip+0xe0386b]        # 0x1416df4f8 ; cstring='Memorialized'
0x8dbc8d: movsd  QWORD PTR [rbp-0x30],xmm0
0x8dbc92: mov    eax,DWORD PTR [rip+0xe03868]        # 0x1416df500 ; cstring='ized'
0x8dbc98: mov    DWORD PTR [rbp-0x28],eax
0x8dbc9b: mov    BYTE PTR [rbp-0x24],0x0
0x8dbc9f: xor    r9d,r9d
0x8dbca2: lea    rdx,[rbp-0x30]
0x8dbca6: lea    rcx,[rip+0x1d90bc3]        # 0x14266c870
0x8dbcad: call   0x140af3400
0x8dbcb2: nop
0x8dbcb3: lea    rcx,[rbp-0x30]
0x8dbcb7: call   0x140070e80
0x8dbcbc: mov    rcx,QWORD PTR [rbp-0x10]
0x8dbcc0: xor    rcx,rsp
0x8dbcc3: call   0x1415530b0
0x8dbcc8: mov    rbx,QWORD PTR [rsp+0x60]
0x8dbccd: mov    rsi,QWORD PTR [rsp+0x68]
0x8dbcd2: mov    rdi,QWORD PTR [rsp+0x70]
0x8dbcd7: mov    r14,QWORD PTR [rsp+0x78]
0x8dbcdc: add    rsp,0x50
0x8dbce0: pop    rbp
0x8dbce1: ret
