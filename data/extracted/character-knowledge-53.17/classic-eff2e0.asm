; classic PE:6aea11a5:0272d000; reference-description:general_ref_artifactst; RVA 0xeff2e0..0xeff55d; code ends 0xeff55d
0x00eff2e0: mov    QWORD PTR [rsp+0x8],rbx
0x00eff2e5: mov    QWORD PTR [rsp+0x18],rsi
0x00eff2ea: push   rdi
0x00eff2eb: sub    rsp,0x70
0x00eff2ef: mov    rax,QWORD PTR [rip+0x9b8d4a]        # 0x1418b8040
0x00eff2f6: xor    rax,rsp
0x00eff2f9: mov    QWORD PTR [rsp+0x60],rax
0x00eff2fe: mov    esi,r8d
0x00eff301: mov    rdi,rdx
0x00eff304: mov    QWORD PTR [rdx+0x10],0x0
0x00eff30c: mov    rax,rdx
0x00eff30f: cmp    QWORD PTR [rdx+0x18],0xf
0x00eff314: jbe    0x140eff319
0x00eff316: mov    rax,QWORD PTR [rdx]
0x00eff319: mov    BYTE PTR [rax],0x0
0x00eff31c: mov    r10d,DWORD PTR [rcx+0x8]
0x00eff320: mov    r9,QWORD PTR [rip+0x15031e1]        # 0x142402508
0x00eff327: mov    r11,QWORD PTR [rip+0x15031d2]        # 0x142402500
0x00eff32e: sub    r9,r11
0x00eff331: sar    r9,0x3
0x00eff335: test   r9d,r9d
0x00eff338: je     0x140eff376
0x00eff33a: cmp    r10d,0xffffffff
0x00eff33e: je     0x140eff376
0x00eff340: xor    edx,edx
0x00eff342: sub    r9d,0x1
0x00eff346: js     0x140eff376
0x00eff348: nop    DWORD PTR [rax+rax*1+0x0]
0x00eff350: lea    ecx,[rdx+r9*1]
0x00eff354: sar    ecx,1
0x00eff356: movsxd rax,ecx
0x00eff359: mov    rbx,QWORD PTR [r11+rax*8]
0x00eff35d: cmp    DWORD PTR [rbx],r10d
0x00eff360: je     0x140eff378
0x00eff362: lea    eax,[rcx+0x1]
0x00eff365: cmovle edx,eax
0x00eff368: lea    eax,[rcx-0x1]
0x00eff36b: cmovle eax,r9d
0x00eff36f: mov    r9d,eax
0x00eff372: cmp    edx,eax
0x00eff374: jle    0x140eff350
0x00eff376: xor    ebx,ebx
0x00eff378: test   rbx,rbx
0x00eff37b: je     0x140eff529
0x00eff381: xorps  xmm0,xmm0
0x00eff384: movups XMMWORD PTR [rsp+0x20],xmm0
0x00eff389: mov    QWORD PTR [rsp+0x30],0x0
0x00eff392: mov    QWORD PTR [rsp+0x38],0xf
0x00eff39b: mov    BYTE PTR [rsp+0x20],0x0
0x00eff3a0: mov    r9d,0x1
0x00eff3a6: movzx  r8d,r9b
0x00eff3aa: lea    rdx,[rsp+0x20]
0x00eff3af: mov    rcx,QWORD PTR [rbx+0x90]
0x00eff3b6: call   0x140c79f60
0x00eff3bb: lea    rax,[rsp+0x20]
0x00eff3c0: cmp    rdi,rax
0x00eff3c3: je     0x140eff3e3
0x00eff3c5: lea    rdx,[rsp+0x20]
0x00eff3ca: cmp    QWORD PTR [rsp+0x38],0xf
0x00eff3d0: cmova  rdx,QWORD PTR [rsp+0x20]
0x00eff3d6: mov    r8,QWORD PTR [rsp+0x30]
0x00eff3db: mov    rcx,rdi
0x00eff3de: call   0x140070e90
0x00eff3e3: cmp    BYTE PTR [rbx+0x7a],0x0
0x00eff3e7: je     0x140eff4e7
0x00eff3ed: mov    r8d,0x1
0x00eff3f3: lea    rdx,[rip+0x6ff572]        # 0x1415fe96c ; literal=" "
0x00eff3fa: mov    rcx,rdi
0x00eff3fd: call   0x140070fd0
0x00eff402: and    esi,0x2
0x00eff405: je     0x140eff43b
0x00eff407: mov    r8d,0x10
0x00eff40d: lea    rdx,[rip+0x7154c4]        # 0x1416148d8 ; literal="[LPAGE:ARTIFACT:"
0x00eff414: mov    rcx,rdi
0x00eff417: call   0x140070fd0
0x00eff41c: mov    rdx,rdi
0x00eff41f: mov    ecx,DWORD PTR [rbx]
0x00eff421: call   0x140542fb0
0x00eff426: mov    r8d,0x1
0x00eff42c: lea    rdx,[rip+0x714f65]        # 0x141614398 ; literal="]"
0x00eff433: mov    rcx,rdi
0x00eff436: call   0x140070fd0
0x00eff43b: xorps  xmm0,xmm0
0x00eff43e: movups XMMWORD PTR [rsp+0x40],xmm0
0x00eff443: mov    QWORD PTR [rsp+0x50],0x0
0x00eff44c: mov    QWORD PTR [rsp+0x58],0xf
0x00eff455: mov    BYTE PTR [rsp+0x40],0x0
0x00eff45a: lea    rcx,[rbx+0x8]
0x00eff45e: xor    r9d,r9d
0x00eff461: mov    r8b,0x1
0x00eff464: lea    rdx,[rsp+0x40]
0x00eff469: call   0x140aaafe0
0x00eff46e: lea    rdx,[rsp+0x40]
0x00eff473: cmp    QWORD PTR [rsp+0x58],0xf
0x00eff479: cmova  rdx,QWORD PTR [rsp+0x40]
0x00eff47f: mov    r8,QWORD PTR [rsp+0x50]
0x00eff484: mov    rcx,rdi
0x00eff487: call   0x140070fd0
0x00eff48c: test   esi,esi
0x00eff48e: je     0x140eff4a6
0x00eff490: mov    r8d,0x8
0x00eff496: lea    rdx,[rip+0x71541b]        # 0x1416148b8 ; literal="[/LPAGE]"
0x00eff49d: mov    rcx,rdi
0x00eff4a0: call   0x140070fd0
0x00eff4a5: nop
0x00eff4a6: mov    rdx,QWORD PTR [rsp+0x58]
0x00eff4ab: cmp    rdx,0xf
0x00eff4af: jbe    0x140eff4e7
0x00eff4b1: inc    rdx
0x00eff4b4: mov    rcx,QWORD PTR [rsp+0x40]
0x00eff4b9: mov    rax,rcx
0x00eff4bc: cmp    rdx,0x1000
0x00eff4c3: jb     0x140eff4e1
0x00eff4c5: add    rdx,0x27
0x00eff4c9: mov    rcx,QWORD PTR [rcx-0x8]
0x00eff4cd: sub    rax,rcx
0x00eff4d0: add    rax,0xfffffffffffffff8
0x00eff4d4: cmp    rax,0x1f
0x00eff4d8: jbe    0x140eff4e1
0x00eff4da: call   QWORD PTR [rip+0x6fc5e8]        # 0x1415fbac8
0x00eff4e0: int3
0x00eff4e1: call   0x14154de20
0x00eff4e6: nop
0x00eff4e7: mov    rdx,QWORD PTR [rsp+0x38]
0x00eff4ec: cmp    rdx,0xf
0x00eff4f0: jbe    0x140eff53e
0x00eff4f2: inc    rdx
0x00eff4f5: mov    rcx,QWORD PTR [rsp+0x20]
0x00eff4fa: mov    rax,rcx
0x00eff4fd: cmp    rdx,0x1000
0x00eff504: jb     0x140eff522
0x00eff506: add    rdx,0x27
0x00eff50a: mov    rcx,QWORD PTR [rcx-0x8]
0x00eff50e: sub    rax,rcx
0x00eff511: add    rax,0xfffffffffffffff8
0x00eff515: cmp    rax,0x1f
0x00eff519: jbe    0x140eff522
0x00eff51b: call   QWORD PTR [rip+0x6fc5a7]        # 0x1415fbac8
0x00eff521: int3
0x00eff522: call   0x14154de20
0x00eff527: jmp    0x140eff53e
0x00eff529: mov    r8d,0x13
0x00eff52f: lea    rdx,[rip+0x7ffe72]        # 0x1416ff3a8 ; literal="an unknown artifact"
0x00eff536: mov    rcx,rdi
0x00eff539: call   0x140070e90
0x00eff53e: mov    rcx,QWORD PTR [rsp+0x60]
0x00eff543: xor    rcx,rsp
0x00eff546: call   0x14154de00
0x00eff54b: lea    r11,[rsp+0x70]
0x00eff550: mov    rbx,QWORD PTR [r11+0x10]
0x00eff554: mov    rsi,QWORD PTR [r11+0x20]
0x00eff558: mov    rsp,r11
0x00eff55b: pop    rdi
0x00eff55c: ret
