# classic PE:6a70b91c:0270a000; put-item-modal-action; RVA 0x8937a0..0x893845
0x008937a0: rex push rbx
0x008937a2: sub    rsp,0x20
0x008937a6: mov    rax,QWORD PTR [rip+0x1c49fb3]        # 0x1424dd760
0x008937ad: xor    ebx,ebx
0x008937af: mov    r8,QWORD PTR [rip+0x1c49fa2]        # 0x1424dd758
0x008937b6: mov    r10,rcx
0x008937b9: sub    rax,r8
0x008937bc: mov    r9d,ebx
0x008937bf: sar    rax,0x3
0x008937c3: test   rax,rax
0x008937c6: je     0x1408937fb
0x008937c8: mov    edx,ebx
0x008937ca: nop    WORD PTR [rax+rax*1+0x0]
0x008937d0: mov    rax,QWORD PTR [rdx+r8*1]
0x008937d4: lea    rdx,[rdx+0x8]
0x008937d8: inc    r9d
0x008937db: mov    DWORD PTR [rax+0x2c],ebx
0x008937de: mov    rcx,QWORD PTR [rip+0x1c49f7b]        # 0x1424dd760
0x008937e5: mov    r8,QWORD PTR [rip+0x1c49f6c]        # 0x1424dd758
0x008937ec: sub    rcx,r8
0x008937ef: movsxd rax,r9d
0x008937f2: sar    rcx,0x3
0x008937f6: cmp    rax,rcx
0x008937f9: jb     0x1408937d0
0x008937fb: mov    DWORD PTR [rip+0x100eb9f],0x7        # 0x1418a23a4
0x00893805: lea    r8,[r10+0x20]
0x00893809: mov    rax,QWORD PTR [r10+0x10]
0x0089380d: lea    rcx,[rip+0x100eba4]        # 0x1418a23b8
0x00893814: mov    QWORD PTR [rip+0x100eb8d],rax        # 0x1418a23a8
0x0089381b: cmp    rcx,r8
0x0089381e: je     0x140893833
0x00893820: mov    rdx,QWORD PTR [r8]
0x00893823: mov    r8,QWORD PTR [r8+0x8]
0x00893827: sub    r8,rdx
0x0089382a: sar    r8,0x3
0x0089382e: call   0x1400e1640
0x00893833: mov    DWORD PTR [rip+0x100ec73],ebx        # 0x1418a24ac
0x00893839: mov    BYTE PTR [rip+0x100ec69],bl        # 0x1418a24a8
0x0089383f: add    rsp,0x20
0x00893843: pop    rbx
0x00893844: ret
