# classic PE:6a70b91c:0270a000; shortcut-name; RVA 0x8ea360..0x8ea662
0x008ea360: mov    QWORD PTR [rsp+0x8],rbx
0x008ea365: mov    QWORD PTR [rsp+0x18],rbp
0x008ea36a: mov    QWORD PTR [rsp+0x20],rsi
0x008ea36f: push   rdi
0x008ea370: push   r12
0x008ea372: push   r13
0x008ea374: push   r14
0x008ea376: push   r15
0x008ea378: sub    rsp,0x80
0x008ea37f: mov    rax,QWORD PTR [rip+0xfabcba]        # 0x141896040
0x008ea386: xor    rax,rsp
0x008ea389: mov    QWORD PTR [rsp+0x78],rax
0x008ea38e: mov    ebx,r8d
0x008ea391: mov    rdi,rdx
0x008ea394: mov    QWORD PTR [rsp+0x28],rdx
0x008ea399: xor    r13d,r13d
0x008ea39c: mov    rdx,QWORD PTR [rip+0x1aa01a5]        # 0x14238a548
0x008ea3a3: mov    rax,QWORD PTR [rdx+0x8]
0x008ea3a7: mov    rcx,rdx
0x008ea3aa: cmp    BYTE PTR [rax+0x19],r13b
0x008ea3ae: jne    0x1408ea3c7
0x008ea3b0: cmp    DWORD PTR [rax+0x20],ebx
0x008ea3b3: jge    0x1408ea3bb
0x008ea3b5: mov    rax,QWORD PTR [rax+0x10]
0x008ea3b9: jmp    0x1408ea3c1
0x008ea3bb: mov    rcx,rax
0x008ea3be: mov    rax,QWORD PTR [rax]
0x008ea3c1: cmp    BYTE PTR [rax+0x19],r13b
0x008ea3c5: je     0x1408ea3b0
0x008ea3c7: cmp    BYTE PTR [rcx+0x19],r13b
0x008ea3cb: jne    0x1408ea3d2
0x008ea3cd: cmp    ebx,DWORD PTR [rcx+0x20]
0x008ea3d0: jge    0x1408ea3d5
0x008ea3d2: mov    rcx,rdx
0x008ea3d5: cmp    rcx,rdx
0x008ea3d8: je     0x1408ea3f8
0x008ea3da: cmp    QWORD PTR [rcx+0x30],r13
0x008ea3de: je     0x1408ea3f8
0x008ea3e0: mov    rcx,QWORD PTR [rcx+0x28]
0x008ea3e4: mov    rdx,QWORD PTR [rcx]
0x008ea3e7: add    rdx,0x20
0x008ea3eb: mov    rcx,rdi
0x008ea3ee: call   0x14006f560
0x008ea3f3: jmp    0x1408ea625
0x008ea3f8: mov    r12,QWORD PTR [rip+0xcf5fa9]        # 0x1415e03a8
0x008ea3ff: mov    rsi,QWORD PTR [rip+0x1da92fa]        # 0x142693700
0x008ea406: mov    rax,QWORD PTR [rsi+0x8]
0x008ea40a: mov    QWORD PTR [rsp+0x40],rax
0x008ea40f: mov    DWORD PTR [rsp+0x48],r13d
0x008ea414: mov    rcx,rsi
0x008ea417: cmp    BYTE PTR [rax+0x19],r13b
0x008ea41b: jne    0x1408ea449
0x008ea41d: nop    DWORD PTR [rax]
0x008ea420: mov    QWORD PTR [rsp+0x40],rax
0x008ea425: cmp    DWORD PTR [rax+0x20],ebx
0x008ea428: jge    0x1408ea435
0x008ea42a: mov    DWORD PTR [rsp+0x48],r13d
0x008ea42f: mov    rax,QWORD PTR [rax+0x10]
0x008ea433: jmp    0x1408ea443
0x008ea435: mov    DWORD PTR [rsp+0x48],0x1
0x008ea43d: mov    rcx,rax
0x008ea440: mov    rax,QWORD PTR [rax]
0x008ea443: cmp    BYTE PTR [rax+0x19],r13b
0x008ea447: je     0x1408ea420
0x008ea449: cmp    BYTE PTR [rcx+0x19],r13b
0x008ea44d: jne    0x1408ea454
0x008ea44f: cmp    ebx,DWORD PTR [rcx+0x20]
0x008ea452: jge    0x1408ea4cf
0x008ea454: movabs rax,0x38e38e38e38e38e
0x008ea45e: cmp    QWORD PTR [rip+0x1da92a3],rax        # 0x142693708
0x008ea465: je     0x1408ea65c
0x008ea46b: lea    rbp,[rip+0x1da928e]        # 0x142693700
0x008ea472: mov    QWORD PTR [rsp+0x30],rbp
0x008ea477: mov    QWORD PTR [rsp+0x38],r13
0x008ea47c: mov    ecx,0x48
0x008ea481: call   0x141534600
0x008ea486: nop
0x008ea487: mov    DWORD PTR [rax+0x20],ebx
0x008ea48a: xorps  xmm0,xmm0
0x008ea48d: movups XMMWORD PTR [rax+0x28],xmm0
0x008ea491: mov    QWORD PTR [rax+0x38],r13
0x008ea495: mov    QWORD PTR [rax+0x40],0xf
0x008ea49d: mov    BYTE PTR [rax+0x28],0x0
0x008ea4a1: mov    QWORD PTR [rax],rsi
0x008ea4a4: mov    QWORD PTR [rax+0x8],rsi
0x008ea4a8: mov    QWORD PTR [rax+0x10],rsi
0x008ea4ac: mov    WORD PTR [rax+0x18],0x0
0x008ea4b2: movups xmm0,XMMWORD PTR [rsp+0x40]
0x008ea4b7: movaps XMMWORD PTR [rsp+0x30],xmm0
0x008ea4bc: mov    r8,rax
0x008ea4bf: lea    rdx,[rsp+0x30]
0x008ea4c4: mov    rcx,rbp
0x008ea4c7: call   0x1400bade0
0x008ea4cc: mov    rcx,rax
0x008ea4cf: lea    rsi,[rcx+0x28]
0x008ea4d3: mov    r15,QWORD PTR [rsi+0x10]
0x008ea4d7: movabs rcx,0x7fffffffffffffff
0x008ea4e1: mov    rax,rcx
0x008ea4e4: sub    rax,r15
0x008ea4e7: cmp    rax,0x1b
0x008ea4eb: jb     0x1408ea656
0x008ea4f1: cmp    QWORD PTR [rsi+0x18],0xf
0x008ea4f6: jbe    0x1408ea4fb
0x008ea4f8: mov    rsi,QWORD PTR [rsi]
0x008ea4fb: xorps  xmm0,xmm0
0x008ea4fe: movups XMMWORD PTR [rsp+0x58],xmm0
0x008ea503: xorps  xmm1,xmm1
0x008ea506: movdqu XMMWORD PTR [rsp+0x68],xmm1
0x008ea50c: lea    rbp,[r15+0x1b]
0x008ea510: mov    ebx,0xf
0x008ea515: lea    r14,[rsp+0x58]
0x008ea51a: cmp    rbp,rbx
0x008ea51d: jbe    0x1408ea54d
0x008ea51f: mov    rbx,rbp
0x008ea522: or     rbx,0xf
0x008ea526: cmp    rbx,rcx
0x008ea529: jbe    0x1408ea530
0x008ea52b: mov    rbx,rcx
0x008ea52e: jmp    0x1408ea53c
0x008ea530: mov    eax,0x16
0x008ea535: cmp    rbx,rax
0x008ea538: cmovb  rbx,rax
0x008ea53c: lea    rcx,[rbx+0x1]
0x008ea540: call   0x140070760
0x008ea545: mov    r14,rax
0x008ea548: mov    QWORD PTR [rsp+0x58],rax
0x008ea54d: mov    QWORD PTR [rsp+0x68],rbp
0x008ea552: mov    QWORD PTR [rsp+0x70],rbx
0x008ea557: movups xmm0,XMMWORD PTR [rip+0xdcfeea]        # 0x1416ba448 ; literal="Missing binding displayed: "
0x008ea55e: movups XMMWORD PTR [r14],xmm0
0x008ea562: movsd  xmm0,QWORD PTR [rip+0xdcfeee]        # 0x1416ba458 ; literal="displayed: "
0x008ea56a: movsd  QWORD PTR [r14+0x10],xmm0
0x008ea570: movzx  eax,WORD PTR [rip+0xdcfee9]        # 0x1416ba460 ; literal="d: "
0x008ea577: mov    WORD PTR [r14+0x18],ax
0x008ea57c: movzx  eax,BYTE PTR [rip+0xdcfedf]        # 0x1416ba462 ; literal=" "
0x008ea583: mov    BYTE PTR [r14+0x1a],al
0x008ea587: lea    rcx,[r14+0x1b]
0x008ea58b: mov    r8,r15
0x008ea58e: mov    rdx,rsi
0x008ea591: call   0x1415359e8
0x008ea596: mov    BYTE PTR [r14+rbp*1],0x0
0x008ea59b: lea    rdx,[rsp+0x58]
0x008ea5a0: cmp    QWORD PTR [rsp+0x70],0xf
0x008ea5a6: cmova  rdx,QWORD PTR [rsp+0x58]
0x008ea5ac: mov    r8,QWORD PTR [rsp+0x68]
0x008ea5b1: mov    rcx,r12
0x008ea5b4: call   0x1400708b0
0x008ea5b9: lea    rdx,[rip+0xffffffffff785c50]        # 0x140070210
0x008ea5c0: mov    rcx,rax
0x008ea5c3: call   QWORD PTR [rip+0xcf5e3f]        # 0x1415e0408
0x008ea5c9: nop
0x008ea5ca: mov    rdx,QWORD PTR [rsp+0x70]
0x008ea5cf: cmp    rdx,0xf
0x008ea5d3: jbe    0x1408ea60a
0x008ea5d5: inc    rdx
0x008ea5d8: mov    rcx,QWORD PTR [rsp+0x58]
0x008ea5dd: mov    rax,rcx
0x008ea5e0: cmp    rdx,0x1000
0x008ea5e7: jb     0x1408ea605
0x008ea5e9: add    rdx,0x27
0x008ea5ed: mov    rcx,QWORD PTR [rcx-0x8]
0x008ea5f1: sub    rax,rcx
0x008ea5f4: add    rax,0xfffffffffffffff8
0x008ea5f8: cmp    rax,0x1f
0x008ea5fc: jbe    0x1408ea605
0x008ea5fe: call   QWORD PTR [rip+0xcf649c]        # 0x1415e0aa0
0x008ea604: int3
0x008ea605: call   0x1415345f0
0x008ea60a: xorps  xmm0,xmm0
0x008ea60d: movups XMMWORD PTR [rdi],xmm0
0x008ea610: mov    QWORD PTR [rdi+0x10],0x1
0x008ea618: mov    QWORD PTR [rdi+0x18],0xf
0x008ea620: mov    WORD PTR [rdi],0x3f
0x008ea625: mov    rax,rdi
0x008ea628: mov    rcx,QWORD PTR [rsp+0x78]
0x008ea62d: xor    rcx,rsp
0x008ea630: call   0x1415345d0
0x008ea635: lea    r11,[rsp+0x80]
0x008ea63d: mov    rbx,QWORD PTR [r11+0x30]
0x008ea641: mov    rbp,QWORD PTR [r11+0x40]
0x008ea645: mov    rsi,QWORD PTR [r11+0x48]
0x008ea649: mov    rsp,r11
0x008ea64c: pop    r15
0x008ea64e: pop    r14
0x008ea650: pop    r13
0x008ea652: pop    r12
0x008ea654: pop    rdi
0x008ea655: ret
0x008ea656: call   0x140065820
0x008ea65b: int3
0x008ea65c: call   0x140071e00
0x008ea661: int3
