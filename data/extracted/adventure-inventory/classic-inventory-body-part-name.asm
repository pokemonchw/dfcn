# classic PE:6a70b91c:0270a000; inventory-body-part-name; RVA 0x132f540..0x132f789
0x0132f540: mov    QWORD PTR [rsp+0x8],rbx
0x0132f545: mov    QWORD PTR [rsp+0x10],rbp
0x0132f54a: mov    QWORD PTR [rsp+0x18],rsi
0x0132f54f: push   rdi
0x0132f550: sub    rsp,0x20
0x0132f554: movsxd rdi,r9d
0x0132f557: mov    rbx,rdx
0x0132f55a: mov    rsi,rcx
0x0132f55d: test   r8w,r8w
0x0132f561: js     0x14132f74d
0x0132f567: mov    rax,QWORD PTR [rcx+0x5f8]
0x0132f56e: movsx  rbp,r8w
0x0132f572: mov    rcx,QWORD PTR [rax]
0x0132f575: mov    r8,QWORD PTR [rax+0x8]
0x0132f579: sub    r8,rcx
0x0132f57c: sar    r8,0x3
0x0132f580: cmp    rbp,r8
0x0132f583: jae    0x14132f74d
0x0132f589: mov    rax,QWORD PTR [rcx+rbp*8]
0x0132f58d: mov    rcx,QWORD PTR [rax+0x98]
0x0132f594: sub    rcx,QWORD PTR [rax+0x90]
0x0132f59b: sar    rcx,0x3
0x0132f59f: test   rcx,rcx
0x0132f5a2: je     0x14132f6da
0x0132f5a8: test   r9d,r9d
0x0132f5ab: jle    0x14132f618
0x0132f5ad: cmp    rcx,rdi
0x0132f5b0: jbe    0x14132f618
0x0132f5b2: cmp    WORD PTR [rsp+0x50],0x0
0x0132f5b8: jne    0x14132f5e9
0x0132f5ba: mov    rax,QWORD PTR [rax+0xa8]
0x0132f5c1: mov    rdx,QWORD PTR [rax+rdi*8]
0x0132f5c5: cmp    rbx,rdx
0x0132f5c8: je     0x14132f774
0x0132f5ce: cmp    QWORD PTR [rdx+0x18],0xf
0x0132f5d3: mov    r8,QWORD PTR [rdx+0x10]
0x0132f5d7: jbe    0x14132f5dc
0x0132f5d9: mov    rdx,QWORD PTR [rdx]
0x0132f5dc: mov    rcx,rbx
0x0132f5df: call   0x14006f860
0x0132f5e4: jmp    0x14132f774
0x0132f5e9: mov    rax,QWORD PTR [rax+0x90]
0x0132f5f0: mov    rdx,QWORD PTR [rax+rdi*8]
0x0132f5f4: cmp    rbx,rdx
0x0132f5f7: je     0x14132f774
0x0132f5fd: cmp    QWORD PTR [rdx+0x18],0xf
0x0132f602: mov    r8,QWORD PTR [rdx+0x10]
0x0132f606: jbe    0x14132f60b
0x0132f608: mov    rdx,QWORD PTR [rdx]
0x0132f60b: mov    rcx,rbx
0x0132f60e: call   0x14006f860
0x0132f613: jmp    0x14132f774
0x0132f618: mov    QWORD PTR [rdx+0x10],0x0
0x0132f620: mov    rax,rbx
0x0132f623: cmp    QWORD PTR [rdx+0x18],0xf
0x0132f628: jbe    0x14132f62d
0x0132f62a: mov    rax,QWORD PTR [rdx]
0x0132f62d: mov    BYTE PTR [rax],0x0
0x0132f630: test   r9d,r9d
0x0132f633: jle    0x14132f649
0x0132f635: xor    r8d,r8d
0x0132f638: mov    ecx,edi
0x0132f63a: call   0x14052c590
0x0132f63f: mov    dl,0x20
0x0132f641: mov    rcx,rbx
0x0132f644: call   0x1400b9b10
0x0132f649: movzx  edx,WORD PTR [rsp+0x50]
0x0132f64e: test   dx,dx
0x0132f651: je     0x14132f6a7
0x0132f653: test   edi,edi
0x0132f655: jne    0x14132f674
0x0132f657: mov    rax,QWORD PTR [rsi+0x5f8]
0x0132f65e: mov    rcx,QWORD PTR [rax]
0x0132f661: mov    rax,QWORD PTR [rcx+rbp*8]
0x0132f665: cmp    DWORD PTR [rax+0x84],0x1
0x0132f66c: jle    0x14132f674
0x0132f66e: cmp    dx,0x2
0x0132f672: je     0x14132f6a7
0x0132f674: mov    rax,QWORD PTR [rsi+0x5f8]
0x0132f67b: mov    rcx,QWORD PTR [rax]
0x0132f67e: mov    rax,QWORD PTR [rcx+rbp*8]
0x0132f682: mov    rcx,QWORD PTR [rax+0x90]
0x0132f689: mov    rdx,QWORD PTR [rcx]
0x0132f68c: cmp    QWORD PTR [rdx+0x18],0xf
0x0132f691: mov    r8,QWORD PTR [rdx+0x10]
0x0132f695: jbe    0x14132f69a
0x0132f697: mov    rdx,QWORD PTR [rdx]
0x0132f69a: mov    rcx,rbx
0x0132f69d: call   0x14006f9a0
0x0132f6a2: jmp    0x14132f774
0x0132f6a7: mov    rax,QWORD PTR [rsi+0x5f8]
0x0132f6ae: mov    rcx,QWORD PTR [rax]
0x0132f6b1: mov    rax,QWORD PTR [rcx+rbp*8]
0x0132f6b5: mov    rcx,QWORD PTR [rax+0xa8]
0x0132f6bc: mov    rdx,QWORD PTR [rcx]
0x0132f6bf: cmp    QWORD PTR [rdx+0x18],0xf
0x0132f6c4: mov    r8,QWORD PTR [rdx+0x10]
0x0132f6c8: jbe    0x14132f6cd
0x0132f6ca: mov    rdx,QWORD PTR [rdx]
0x0132f6cd: mov    rcx,rbx
0x0132f6d0: call   0x14006f9a0
0x0132f6d5: jmp    0x14132f774
0x0132f6da: mov    QWORD PTR [rdx+0x10],0x0
0x0132f6e2: mov    rax,rbx
0x0132f6e5: cmp    QWORD PTR [rdx+0x18],0xf
0x0132f6ea: jbe    0x14132f6ef
0x0132f6ec: mov    rax,QWORD PTR [rdx]
0x0132f6ef: mov    BYTE PTR [rax],0x0
0x0132f6f2: test   r9d,r9d
0x0132f6f5: jle    0x14132f70b
0x0132f6f7: xor    r8d,r8d
0x0132f6fa: mov    ecx,edi
0x0132f6fc: call   0x14052c590
0x0132f701: mov    dl,0x20
0x0132f703: mov    rcx,rbx
0x0132f706: call   0x1400b9b10
0x0132f70b: mov    r8d,0x9
0x0132f711: lea    rdx,[rip+0x34c6d8]        # 0x14167bdf0 ; literal="body part"
0x0132f718: mov    rcx,rbx
0x0132f71b: call   0x14006f9a0
0x0132f720: movzx  edx,WORD PTR [rsp+0x50]
0x0132f725: test   dx,dx
0x0132f728: je     0x14132f76a
0x0132f72a: test   edi,edi
0x0132f72c: jne    0x14132f774
0x0132f72e: mov    rax,QWORD PTR [rsi+0x5f8]
0x0132f735: mov    rcx,QWORD PTR [rax]
0x0132f738: mov    rax,QWORD PTR [rcx+rbp*8]
0x0132f73c: cmp    DWORD PTR [rax+0x84],0x1
0x0132f743: jle    0x14132f774
0x0132f745: cmp    dx,0x2
0x0132f749: je     0x14132f76a
0x0132f74b: jmp    0x14132f774
0x0132f74d: mov    r8d,0x9
0x0132f753: lea    rdx,[rip+0x34c696]        # 0x14167bdf0 ; literal="body part"
0x0132f75a: mov    rcx,rbx
0x0132f75d: call   0x14006f860
0x0132f762: cmp    WORD PTR [rsp+0x50],0x0
0x0132f768: jne    0x14132f774
0x0132f76a: mov    dl,0x73
0x0132f76c: mov    rcx,rbx
0x0132f76f: call   0x1400b9b10
0x0132f774: mov    rbx,QWORD PTR [rsp+0x30]
0x0132f779: mov    rbp,QWORD PTR [rsp+0x38]
0x0132f77e: mov    rsi,QWORD PTR [rsp+0x40]
0x0132f783: add    rsp,0x20
0x0132f787: pop    rdi
0x0132f788: ret
