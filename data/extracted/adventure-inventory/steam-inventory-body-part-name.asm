# steam PE:6a70a6d9:02711000; inventory-body-part-name; RVA 0x13345d0..0x1334819
0x013345d0: mov    QWORD PTR [rsp+0x8],rbx
0x013345d5: mov    QWORD PTR [rsp+0x10],rbp
0x013345da: mov    QWORD PTR [rsp+0x18],rsi
0x013345df: push   rdi
0x013345e0: sub    rsp,0x20
0x013345e4: movsxd rdi,r9d
0x013345e7: mov    rbx,rdx
0x013345ea: mov    rsi,rcx
0x013345ed: test   r8w,r8w
0x013345f1: js     0x1413347dd
0x013345f7: mov    rax,QWORD PTR [rcx+0x5f8]
0x013345fe: movsx  rbp,r8w
0x01334602: mov    rcx,QWORD PTR [rax]
0x01334605: mov    r8,QWORD PTR [rax+0x8]
0x01334609: sub    r8,rcx
0x0133460c: sar    r8,0x3
0x01334610: cmp    rbp,r8
0x01334613: jae    0x1413347dd
0x01334619: mov    rax,QWORD PTR [rcx+rbp*8]
0x0133461d: mov    rcx,QWORD PTR [rax+0x98]
0x01334624: sub    rcx,QWORD PTR [rax+0x90]
0x0133462b: sar    rcx,0x3
0x0133462f: test   rcx,rcx
0x01334632: je     0x14133476a
0x01334638: test   r9d,r9d
0x0133463b: jle    0x1413346a8
0x0133463d: cmp    rcx,rdi
0x01334640: jbe    0x1413346a8
0x01334642: cmp    WORD PTR [rsp+0x50],0x0
0x01334648: jne    0x141334679
0x0133464a: mov    rax,QWORD PTR [rax+0xa8]
0x01334651: mov    rdx,QWORD PTR [rax+rdi*8]
0x01334655: cmp    rbx,rdx
0x01334658: je     0x141334804
0x0133465e: cmp    QWORD PTR [rdx+0x18],0xf
0x01334663: mov    r8,QWORD PTR [rdx+0x10]
0x01334667: jbe    0x14133466c
0x01334669: mov    rdx,QWORD PTR [rdx]
0x0133466c: mov    rcx,rbx
0x0133466f: call   0x14006f8d0
0x01334674: jmp    0x141334804
0x01334679: mov    rax,QWORD PTR [rax+0x90]
0x01334680: mov    rdx,QWORD PTR [rax+rdi*8]
0x01334684: cmp    rbx,rdx
0x01334687: je     0x141334804
0x0133468d: cmp    QWORD PTR [rdx+0x18],0xf
0x01334692: mov    r8,QWORD PTR [rdx+0x10]
0x01334696: jbe    0x14133469b
0x01334698: mov    rdx,QWORD PTR [rdx]
0x0133469b: mov    rcx,rbx
0x0133469e: call   0x14006f8d0
0x013346a3: jmp    0x141334804
0x013346a8: mov    QWORD PTR [rdx+0x10],0x0
0x013346b0: mov    rax,rbx
0x013346b3: cmp    QWORD PTR [rdx+0x18],0xf
0x013346b8: jbe    0x1413346bd
0x013346ba: mov    rax,QWORD PTR [rdx]
0x013346bd: mov    BYTE PTR [rax],0x0
0x013346c0: test   r9d,r9d
0x013346c3: jle    0x1413346d9
0x013346c5: xor    r8d,r8d
0x013346c8: mov    ecx,edi
0x013346ca: call   0x14052eb70
0x013346cf: mov    dl,0x20
0x013346d1: mov    rcx,rbx
0x013346d4: call   0x1400b9b80
0x013346d9: movzx  edx,WORD PTR [rsp+0x50]
0x013346de: test   dx,dx
0x013346e1: je     0x141334737
0x013346e3: test   edi,edi
0x013346e5: jne    0x141334704
0x013346e7: mov    rax,QWORD PTR [rsi+0x5f8]
0x013346ee: mov    rcx,QWORD PTR [rax]
0x013346f1: mov    rax,QWORD PTR [rcx+rbp*8]
0x013346f5: cmp    DWORD PTR [rax+0x84],0x1
0x013346fc: jle    0x141334704
0x013346fe: cmp    dx,0x2
0x01334702: je     0x141334737
0x01334704: mov    rax,QWORD PTR [rsi+0x5f8]
0x0133470b: mov    rcx,QWORD PTR [rax]
0x0133470e: mov    rax,QWORD PTR [rcx+rbp*8]
0x01334712: mov    rcx,QWORD PTR [rax+0x90]
0x01334719: mov    rdx,QWORD PTR [rcx]
0x0133471c: cmp    QWORD PTR [rdx+0x18],0xf
0x01334721: mov    r8,QWORD PTR [rdx+0x10]
0x01334725: jbe    0x14133472a
0x01334727: mov    rdx,QWORD PTR [rdx]
0x0133472a: mov    rcx,rbx
0x0133472d: call   0x14006fa10
0x01334732: jmp    0x141334804
0x01334737: mov    rax,QWORD PTR [rsi+0x5f8]
0x0133473e: mov    rcx,QWORD PTR [rax]
0x01334741: mov    rax,QWORD PTR [rcx+rbp*8]
0x01334745: mov    rcx,QWORD PTR [rax+0xa8]
0x0133474c: mov    rdx,QWORD PTR [rcx]
0x0133474f: cmp    QWORD PTR [rdx+0x18],0xf
0x01334754: mov    r8,QWORD PTR [rdx+0x10]
0x01334758: jbe    0x14133475d
0x0133475a: mov    rdx,QWORD PTR [rdx]
0x0133475d: mov    rcx,rbx
0x01334760: call   0x14006fa10
0x01334765: jmp    0x141334804
0x0133476a: mov    QWORD PTR [rdx+0x10],0x0
0x01334772: mov    rax,rbx
0x01334775: cmp    QWORD PTR [rdx+0x18],0xf
0x0133477a: jbe    0x14133477f
0x0133477c: mov    rax,QWORD PTR [rdx]
0x0133477f: mov    BYTE PTR [rax],0x0
0x01334782: test   r9d,r9d
0x01334785: jle    0x14133479b
0x01334787: xor    r8d,r8d
0x0133478a: mov    ecx,edi
0x0133478c: call   0x14052eb70
0x01334791: mov    dl,0x20
0x01334793: mov    rcx,rbx
0x01334796: call   0x1400b9b80
0x0133479b: mov    r8d,0x9
0x013347a1: lea    rdx,[rip+0x34c8a8]        # 0x141681050 ; literal="body part"
0x013347a8: mov    rcx,rbx
0x013347ab: call   0x14006fa10
0x013347b0: movzx  edx,WORD PTR [rsp+0x50]
0x013347b5: test   dx,dx
0x013347b8: je     0x1413347fa
0x013347ba: test   edi,edi
0x013347bc: jne    0x141334804
0x013347be: mov    rax,QWORD PTR [rsi+0x5f8]
0x013347c5: mov    rcx,QWORD PTR [rax]
0x013347c8: mov    rax,QWORD PTR [rcx+rbp*8]
0x013347cc: cmp    DWORD PTR [rax+0x84],0x1
0x013347d3: jle    0x141334804
0x013347d5: cmp    dx,0x2
0x013347d9: je     0x1413347fa
0x013347db: jmp    0x141334804
0x013347dd: mov    r8d,0x9
0x013347e3: lea    rdx,[rip+0x34c866]        # 0x141681050 ; literal="body part"
0x013347ea: mov    rcx,rbx
0x013347ed: call   0x14006f8d0
0x013347f2: cmp    WORD PTR [rsp+0x50],0x0
0x013347f8: jne    0x141334804
0x013347fa: mov    dl,0x73
0x013347fc: mov    rcx,rbx
0x013347ff: call   0x1400b9b80
0x01334804: mov    rbx,QWORD PTR [rsp+0x30]
0x01334809: mov    rbp,QWORD PTR [rsp+0x38]
0x0133480e: mov    rsi,QWORD PTR [rsp+0x40]
0x01334813: add    rsp,0x20
0x01334817: pop    rdi
0x01334818: ret
