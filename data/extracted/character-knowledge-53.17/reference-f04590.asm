; reference PE:6aea05a1:02734000; reference-description:general_ref_artifactst; RVA 0xf04590..0xf0480d; code ends 0xf0480d
0x00f04590: mov    QWORD PTR [rsp+0x8],rbx
0x00f04595: mov    QWORD PTR [rsp+0x18],rsi
0x00f0459a: push   rdi
0x00f0459b: sub    rsp,0x70
0x00f0459f: mov    rax,QWORD PTR [rip+0x9b9a9a]        # 0x1418be040
0x00f045a6: xor    rax,rsp
0x00f045a9: mov    QWORD PTR [rsp+0x60],rax
0x00f045ae: mov    esi,r8d
0x00f045b1: mov    rdi,rdx
0x00f045b4: mov    QWORD PTR [rdx+0x10],0x0
0x00f045bc: mov    rax,rdx
0x00f045bf: cmp    QWORD PTR [rdx+0x18],0xf
0x00f045c4: jbe    0x140f045c9
0x00f045c6: mov    rax,QWORD PTR [rdx]
0x00f045c9: mov    BYTE PTR [rax],0x0
0x00f045cc: mov    r10d,DWORD PTR [rcx+0x8]
0x00f045d0: mov    r9,QWORD PTR [rip+0x1504031]        # 0x142408608
0x00f045d7: mov    r11,QWORD PTR [rip+0x1504022]        # 0x142408600
0x00f045de: sub    r9,r11
0x00f045e1: sar    r9,0x3
0x00f045e5: test   r9d,r9d
0x00f045e8: je     0x140f04626
0x00f045ea: cmp    r10d,0xffffffff
0x00f045ee: je     0x140f04626
0x00f045f0: xor    edx,edx
0x00f045f2: sub    r9d,0x1
0x00f045f6: js     0x140f04626
0x00f045f8: nop    DWORD PTR [rax+rax*1+0x0]
0x00f04600: lea    ecx,[rdx+r9*1]
0x00f04604: sar    ecx,1
0x00f04606: movsxd rax,ecx
0x00f04609: mov    rbx,QWORD PTR [r11+rax*8]
0x00f0460d: cmp    DWORD PTR [rbx],r10d
0x00f04610: je     0x140f04628
0x00f04612: lea    eax,[rcx+0x1]
0x00f04615: cmovle edx,eax
0x00f04618: lea    eax,[rcx-0x1]
0x00f0461b: cmovle eax,r9d
0x00f0461f: mov    r9d,eax
0x00f04622: cmp    edx,eax
0x00f04624: jle    0x140f04600
0x00f04626: xor    ebx,ebx
0x00f04628: test   rbx,rbx
0x00f0462b: je     0x140f047d9
0x00f04631: xorps  xmm0,xmm0
0x00f04634: movups XMMWORD PTR [rsp+0x20],xmm0
0x00f04639: mov    QWORD PTR [rsp+0x30],0x0
0x00f04642: mov    QWORD PTR [rsp+0x38],0xf
0x00f0464b: mov    BYTE PTR [rsp+0x20],0x0
0x00f04650: mov    r9d,0x1
0x00f04656: movzx  r8d,r9b
0x00f0465a: lea    rdx,[rsp+0x20]
0x00f0465f: mov    rcx,QWORD PTR [rbx+0x90]
0x00f04666: call   0x140c7d140
0x00f0466b: lea    rax,[rsp+0x20]
0x00f04670: cmp    rdi,rax
0x00f04673: je     0x140f04693
0x00f04675: lea    rdx,[rsp+0x20]
0x00f0467a: cmp    QWORD PTR [rsp+0x38],0xf
0x00f04680: cmova  rdx,QWORD PTR [rsp+0x20]
0x00f04686: mov    r8,QWORD PTR [rsp+0x30]
0x00f0468b: mov    rcx,rdi
0x00f0468e: call   0x140070f00
0x00f04693: cmp    BYTE PTR [rbx+0x7a],0x0
0x00f04697: je     0x140f04797
0x00f0469d: mov    r8d,0x1
0x00f046a3: lea    rdx,[rip+0x6ff346]        # 0x1416039f0 ; literal=" "
0x00f046aa: mov    rcx,rdi
0x00f046ad: call   0x140071040
0x00f046b2: and    esi,0x2
0x00f046b5: je     0x140f046eb
0x00f046b7: mov    r8d,0x10
0x00f046bd: lea    rdx,[rip+0x71512c]        # 0x1416197f0 ; literal="[LPAGE:ARTIFACT:"
0x00f046c4: mov    rcx,rdi
0x00f046c7: call   0x140071040
0x00f046cc: mov    rdx,rdi
0x00f046cf: mov    ecx,DWORD PTR [rbx]
0x00f046d1: call   0x140545610
0x00f046d6: mov    r8d,0x1
0x00f046dc: lea    rdx,[rip+0x714d25]        # 0x141619408 ; literal="]"
0x00f046e3: mov    rcx,rdi
0x00f046e6: call   0x140071040
0x00f046eb: xorps  xmm0,xmm0
0x00f046ee: movups XMMWORD PTR [rsp+0x40],xmm0
0x00f046f3: mov    QWORD PTR [rsp+0x50],0x0
0x00f046fc: mov    QWORD PTR [rsp+0x58],0xf
0x00f04705: mov    BYTE PTR [rsp+0x40],0x0
0x00f0470a: lea    rcx,[rbx+0x8]
0x00f0470e: xor    r9d,r9d
0x00f04711: mov    r8b,0x1
0x00f04714: lea    rdx,[rsp+0x40]
0x00f04719: call   0x140aae180
0x00f0471e: lea    rdx,[rsp+0x40]
0x00f04723: cmp    QWORD PTR [rsp+0x58],0xf
0x00f04729: cmova  rdx,QWORD PTR [rsp+0x40]
0x00f0472f: mov    r8,QWORD PTR [rsp+0x50]
0x00f04734: mov    rcx,rdi
0x00f04737: call   0x140071040
0x00f0473c: test   esi,esi
0x00f0473e: je     0x140f04756
0x00f04740: mov    r8d,0x8
0x00f04746: lea    rdx,[rip+0x7151cb]        # 0x141619918 ; literal="[/LPAGE]"
0x00f0474d: mov    rcx,rdi
0x00f04750: call   0x140071040
0x00f04755: nop
0x00f04756: mov    rdx,QWORD PTR [rsp+0x58]
0x00f0475b: cmp    rdx,0xf
0x00f0475f: jbe    0x140f04797
0x00f04761: inc    rdx
0x00f04764: mov    rcx,QWORD PTR [rsp+0x40]
0x00f04769: mov    rax,rcx
0x00f0476c: cmp    rdx,0x1000
0x00f04773: jb     0x140f04791
0x00f04775: add    rdx,0x27
0x00f04779: mov    rcx,QWORD PTR [rcx-0x8]
0x00f0477d: sub    rax,rcx
0x00f04780: add    rax,0xfffffffffffffff8
0x00f04784: cmp    rax,0x1f
0x00f04788: jbe    0x140f04791
0x00f0478a: call   QWORD PTR [rip+0x6fc3b0]        # 0x141600b40
0x00f04790: int3
0x00f04791: call   0x1415530d0
0x00f04796: nop
0x00f04797: mov    rdx,QWORD PTR [rsp+0x38]
0x00f0479c: cmp    rdx,0xf
0x00f047a0: jbe    0x140f047ee
0x00f047a2: inc    rdx
0x00f047a5: mov    rcx,QWORD PTR [rsp+0x20]
0x00f047aa: mov    rax,rcx
0x00f047ad: cmp    rdx,0x1000
0x00f047b4: jb     0x140f047d2
0x00f047b6: add    rdx,0x27
0x00f047ba: mov    rcx,QWORD PTR [rcx-0x8]
0x00f047be: sub    rax,rcx
0x00f047c1: add    rax,0xfffffffffffffff8
0x00f047c5: cmp    rax,0x1f
0x00f047c9: jbe    0x140f047d2
0x00f047cb: call   QWORD PTR [rip+0x6fc36f]        # 0x141600b40
0x00f047d1: int3
0x00f047d2: call   0x1415530d0
0x00f047d7: jmp    0x140f047ee
0x00f047d9: mov    r8d,0x13
0x00f047df: lea    rdx,[rip+0x7ffde2]        # 0x1417045c8 ; literal="an unknown artifact"
0x00f047e6: mov    rcx,rdi
0x00f047e9: call   0x140070f00
0x00f047ee: mov    rcx,QWORD PTR [rsp+0x60]
0x00f047f3: xor    rcx,rsp
0x00f047f6: call   0x1415530b0
0x00f047fb: lea    r11,[rsp+0x70]
0x00f04800: mov    rbx,QWORD PTR [r11+0x10]
0x00f04804: mov    rsi,QWORD PTR [r11+0x20]
0x00f04808: mov    rsp,r11
0x00f0480b: pop    rdi
0x00f0480c: ret
