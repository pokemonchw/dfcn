; classic; PE:6a70b91c:0270a000; addst-flag; RVA 0xad68b0..0xad699b
0x00ad68b0: mov    QWORD PTR [rsp+0x18],rbx
0x00ad68b5: push   rbp
0x00ad68b6: push   rsi
0x00ad68b7: push   rdi
0x00ad68b8: sub    rsp,0x50
0x00ad68bc: mov    rax,QWORD PTR [rip+0xdbf77d]        # 0x141896040
0x00ad68c3: xor    rax,rsp
0x00ad68c6: mov    QWORD PTR [rsp+0x40],rax
0x00ad68cb: movsxd rbx,r9d
0x00ad68ce: mov    rdi,rcx
0x00ad68d1: cmp    QWORD PTR [rdx+0x10],0x0
0x00ad68d6: je     0x140ad697e
0x00ad68dc: lea    rcx,[rsp+0x20]
0x00ad68e1: call   0x14006f560
0x00ad68e6: nop
0x00ad68e7: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad68ec: test   ebx,ebx
0x00ad68ee: je     0x140ad6906
0x00ad68f0: cmp    rcx,rbx
0x00ad68f3: jbe    0x140ad6906
0x00ad68f5: mov    edx,ebx
0x00ad68f7: lea    rcx,[rsp+0x20]
0x00ad68fc: call   0x14052b330
0x00ad6901: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad6906: xor    ebp,ebp
0x00ad6908: mov    ebx,ebp
0x00ad690a: test   rcx,rcx
0x00ad690d: je     0x140ad6974
0x00ad690f: mov    esi,DWORD PTR [rsp+0x90]
0x00ad6916: data16 nop WORD PTR [rax+rax*1+0x0]
0x00ad6920: mov    eax,DWORD PTR [rdi+0x84]
0x00ad6926: cmp    eax,DWORD PTR [rip+0x18f0d48]        # 0x1423c7674
0x00ad692c: jge    0x140ad6974
0x00ad692e: test   eax,eax
0x00ad6930: jns    0x140ad6942
0x00ad6932: sub    ebx,eax
0x00ad6934: mov    DWORD PTR [rdi+0x84],ebp
0x00ad693a: movsxd rax,ebx
0x00ad693d: cmp    rax,rcx
0x00ad6940: jae    0x140ad6974
0x00ad6942: lea    rax,[rsp+0x20]
0x00ad6947: cmp    QWORD PTR [rsp+0x38],0xf
0x00ad694d: cmova  rax,QWORD PTR [rsp+0x20]
0x00ad6953: movsxd rdx,ebx
0x00ad6956: mov    r9d,esi
0x00ad6959: movzx  edx,BYTE PTR [rdx+rax*1]
0x00ad695d: mov    rcx,rdi
0x00ad6960: call   0x140ad5bc0
0x00ad6965: inc    ebx
0x00ad6967: movsxd rax,ebx
0x00ad696a: mov    rcx,QWORD PTR [rsp+0x30]
0x00ad696f: cmp    rax,rcx
0x00ad6972: jb     0x140ad6920
0x00ad6974: lea    rcx,[rsp+0x20]
0x00ad6979: call   0x14006f7e0
0x00ad697e: mov    rcx,QWORD PTR [rsp+0x40]
0x00ad6983: xor    rcx,rsp
0x00ad6986: call   0x1415345d0
0x00ad698b: mov    rbx,QWORD PTR [rsp+0x80]
0x00ad6993: add    rsp,0x50
0x00ad6997: pop    rdi
0x00ad6998: pop    rsi
0x00ad6999: pop    rbp
0x00ad699a: ret
