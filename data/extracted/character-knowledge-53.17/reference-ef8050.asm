; reference PE:6aea05a1:02734000; reference-description:general_ref_written_contentst; RVA 0xef8050..0xef818a; code ends 0xef818a
0x00ef8050: mov    QWORD PTR [rsp+0x8],rbx
0x00ef8055: push   rdi
0x00ef8056: sub    rsp,0x20
0x00ef805a: mov    r11,QWORD PTR [rip+0x16120d7]        # 0x14250a138
0x00ef8061: mov    rbx,rdx
0x00ef8064: mov    r10,QWORD PTR [rip+0x16120d5]        # 0x14250a140
0x00ef806b: mov    edi,DWORD PTR [rcx+0x8]
0x00ef806e: sub    r10,r11
0x00ef8071: sar    r10,0x3
0x00ef8075: test   r10d,r10d
0x00ef8078: je     0x140ef817f
0x00ef807e: xor    r9d,r9d
0x00ef8081: cmp    r10d,0x40
0x00ef8085: jle    0x140ef80b3
0x00ef8087: nop    WORD PTR [rax+rax*1+0x0]
0x00ef8090: mov    r8d,r10d
0x00ef8093: shr    r8d,1
0x00ef8096: lea    edx,[r8+r9*1]
0x00ef809a: movsxd rax,edx
0x00ef809d: mov    rcx,QWORD PTR [r11+rax*8]
0x00ef80a1: cmp    edi,DWORD PTR [rcx]
0x00ef80a3: cmovl  edx,r9d
0x00ef80a7: sub    r10d,r8d
0x00ef80aa: mov    r9d,edx
0x00ef80ad: cmp    r10d,0x40
0x00ef80b1: jg     0x140ef8090
0x00ef80b3: lea    eax,[r9+r10*1]
0x00ef80b7: cmp    eax,0xffffffff
0x00ef80ba: je     0x140ef817f
0x00ef80c0: cmp    r9d,eax
0x00ef80c3: jge    0x140ef817f
0x00ef80c9: movsxd rcx,r9d
0x00ef80cc: movsxd rdx,eax
0x00ef80cf: nop
0x00ef80d0: mov    rax,QWORD PTR [r11+rcx*8]
0x00ef80d4: cmp    edi,DWORD PTR [rax]
0x00ef80d6: je     0x140ef80ee
0x00ef80d8: inc    r9d
0x00ef80db: inc    rcx
0x00ef80de: cmp    rcx,rdx
0x00ef80e1: jl     0x140ef80d0
0x00ef80e3: mov    rbx,QWORD PTR [rsp+0x30]
0x00ef80e8: add    rsp,0x20
0x00ef80ec: pop    rdi
0x00ef80ed: ret
0x00ef80ee: movsxd rax,r9d
0x00ef80f1: mov    rdx,QWORD PTR [r11+rax*8]
0x00ef80f5: test   rdx,rdx
0x00ef80f8: je     0x140ef817f
0x00ef80fe: add    rdx,0x8
0x00ef8102: cmp    rbx,rdx
0x00ef8105: je     0x140ef811d
0x00ef8107: cmp    QWORD PTR [rdx+0x18],0xf
0x00ef810c: mov    r8,QWORD PTR [rdx+0x10]
0x00ef8110: jbe    0x140ef8115
0x00ef8112: mov    rdx,QWORD PTR [rdx]
0x00ef8115: mov    rcx,rbx
0x00ef8118: call   0x140070f00
0x00ef811d: cmp    QWORD PTR [rbx+0x10],0x4
0x00ef8122: jb     0x140ef817f
0x00ef8124: mov    rax,QWORD PTR [rbx+0x18]
0x00ef8128: mov    rcx,rbx
0x00ef812b: cmp    rax,0xf
0x00ef812f: jbe    0x140ef8134
0x00ef8131: mov    rcx,QWORD PTR [rbx]
0x00ef8134: cmp    BYTE PTR [rcx],0x54
0x00ef8137: jne    0x140ef817f
0x00ef8139: mov    rcx,rbx
0x00ef813c: cmp    rax,0xf
0x00ef8140: jbe    0x140ef8145
0x00ef8142: mov    rcx,QWORD PTR [rbx]
0x00ef8145: cmp    BYTE PTR [rcx+0x1],0x68
0x00ef8149: jne    0x140ef817f
0x00ef814b: mov    rcx,rbx
0x00ef814e: cmp    rax,0xf
0x00ef8152: jbe    0x140ef8157
0x00ef8154: mov    rcx,QWORD PTR [rbx]
0x00ef8157: cmp    BYTE PTR [rcx+0x2],0x65
0x00ef815b: jne    0x140ef817f
0x00ef815d: mov    rcx,QWORD PTR [rbx+0x18]
0x00ef8161: mov    rax,rbx
0x00ef8164: cmp    rcx,0xf
0x00ef8168: jbe    0x140ef816d
0x00ef816a: mov    rax,QWORD PTR [rbx]
0x00ef816d: cmp    BYTE PTR [rax+0x3],0x20
0x00ef8171: jne    0x140ef817f
0x00ef8173: cmp    rcx,0xf
0x00ef8177: jbe    0x140ef817c
0x00ef8179: mov    rbx,QWORD PTR [rbx]
0x00ef817c: mov    BYTE PTR [rbx],0x74
0x00ef817f: mov    rbx,QWORD PTR [rsp+0x30]
0x00ef8184: add    rsp,0x20
0x00ef8188: pop    rdi
0x00ef8189: ret
