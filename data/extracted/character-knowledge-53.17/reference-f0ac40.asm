; reference PE:6aea05a1:02734000; reference-description:general_ref_subregionst; RVA 0xf0ac40..0xf0ad98; code ends 0xf0ad98
0x00f0ac40: mov    QWORD PTR [rsp+0x18],rbx
0x00f0ac45: mov    QWORD PTR [rsp+0x20],rsi
0x00f0ac4a: push   rdi
0x00f0ac4b: sub    rsp,0x50
0x00f0ac4f: mov    rax,QWORD PTR [rip+0x9b33ea]        # 0x1418be040
0x00f0ac56: xor    rax,rsp
0x00f0ac59: mov    QWORD PTR [rsp+0x40],rax
0x00f0ac5e: mov    edi,r8d
0x00f0ac61: mov    rbx,rdx
0x00f0ac64: mov    QWORD PTR [rdx+0x10],0x0
0x00f0ac6c: mov    rax,rdx
0x00f0ac6f: cmp    QWORD PTR [rdx+0x18],0xf
0x00f0ac74: jbe    0x140f0ac79
0x00f0ac76: mov    rax,QWORD PTR [rdx]
0x00f0ac79: mov    BYTE PTR [rax],0x0
0x00f0ac7c: mov    edx,DWORD PTR [rcx+0x8]
0x00f0ac7f: mov    rcx,QWORD PTR [rip+0x1603352]        # 0x14250dfd8
0x00f0ac86: call   0x1400bd6b0
0x00f0ac8b: mov    rsi,rax
0x00f0ac8e: test   rax,rax
0x00f0ac91: je     0x140f0ad7b
0x00f0ac97: and    edi,0x2
0x00f0ac9a: je     0x140f0acd1
0x00f0ac9c: mov    r8d,0xa
0x00f0aca2: lea    rdx,[rip+0x7f989f]        # 0x141704548 ; literal="[LPAGE:SR:"
0x00f0aca9: mov    rcx,rbx
0x00f0acac: call   0x140071040
0x00f0acb1: mov    rdx,rbx
0x00f0acb4: mov    ecx,DWORD PTR [rsi+0x78]
0x00f0acb7: call   0x140545610
0x00f0acbc: mov    r8d,0x1
0x00f0acc2: lea    rdx,[rip+0x70e73f]        # 0x141619408 ; literal="]"
0x00f0acc9: mov    rcx,rbx
0x00f0accc: call   0x140071040
0x00f0acd1: xorps  xmm0,xmm0
0x00f0acd4: movups XMMWORD PTR [rsp+0x20],xmm0
0x00f0acd9: mov    QWORD PTR [rsp+0x30],0x0
0x00f0ace2: mov    QWORD PTR [rsp+0x38],0xf
0x00f0aceb: mov    BYTE PTR [rsp+0x20],0x0
0x00f0acf0: xor    r9d,r9d
0x00f0acf3: mov    r8b,0x1
0x00f0acf6: lea    rdx,[rsp+0x20]
0x00f0acfb: mov    rcx,rsi
0x00f0acfe: call   0x140aae180
0x00f0ad03: lea    rdx,[rsp+0x20]
0x00f0ad08: cmp    QWORD PTR [rsp+0x38],0xf
0x00f0ad0e: cmova  rdx,QWORD PTR [rsp+0x20]
0x00f0ad14: mov    r8,QWORD PTR [rsp+0x30]
0x00f0ad19: mov    rcx,rbx
0x00f0ad1c: call   0x140071040
0x00f0ad21: test   edi,edi
0x00f0ad23: je     0x140f0ad3b
0x00f0ad25: mov    r8d,0x8
0x00f0ad2b: lea    rdx,[rip+0x70ebe6]        # 0x141619918 ; literal="[/LPAGE]"
0x00f0ad32: mov    rcx,rbx
0x00f0ad35: call   0x140071040
0x00f0ad3a: nop
0x00f0ad3b: mov    rdx,QWORD PTR [rsp+0x38]
0x00f0ad40: cmp    rdx,0xf
0x00f0ad44: jbe    0x140f0ad7b
0x00f0ad46: inc    rdx
0x00f0ad49: mov    rcx,QWORD PTR [rsp+0x20]
0x00f0ad4e: mov    rax,rcx
0x00f0ad51: cmp    rdx,0x1000
0x00f0ad58: jb     0x140f0ad76
0x00f0ad5a: add    rdx,0x27
0x00f0ad5e: mov    rcx,QWORD PTR [rcx-0x8]
0x00f0ad62: sub    rax,rcx
0x00f0ad65: add    rax,0xfffffffffffffff8
0x00f0ad69: cmp    rax,0x1f
0x00f0ad6d: jbe    0x140f0ad76
0x00f0ad6f: call   QWORD PTR [rip+0x6f5dcb]        # 0x141600b40
0x00f0ad75: int3
0x00f0ad76: call   0x1415530d0
0x00f0ad7b: mov    rcx,QWORD PTR [rsp+0x40]
0x00f0ad80: xor    rcx,rsp
0x00f0ad83: call   0x1415530b0
0x00f0ad88: mov    rbx,QWORD PTR [rsp+0x70]
0x00f0ad8d: mov    rsi,QWORD PTR [rsp+0x78]
0x00f0ad92: add    rsp,0x50
0x00f0ad96: pop    rdi
0x00f0ad97: ret
