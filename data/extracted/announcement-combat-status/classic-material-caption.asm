; classic PE:6a70b91c:0270a000 C:\Users\WIN11\Downloads\df_53_16_win\Dwarf Fortress.exe
; material caption 0x1414cc890..0x1414ccce9
0x1414cc890: rex push rbx
0x1414cc892: push   rbp
0x1414cc893: push   rsi
0x1414cc894: push   rdi
0x1414cc895: push   r12
0x1414cc897: push   r13
0x1414cc899: push   r14
0x1414cc89b: push   r15
0x1414cc89d: sub    rsp,0x58
0x1414cc8a1: mov    rax,QWORD PTR [rip+0x3c9798]        # 0x141896040
0x1414cc8a8: xor    rax,rsp
0x1414cc8ab: mov    QWORD PTR [rsp+0x40],rax
0x1414cc8b0: mov    esi,r9d
0x1414cc8b3: movzx  r15d,r8w
0x1414cc8b7: mov    rbx,rdx
0x1414cc8ba: mov    r13,rcx
0x1414cc8bd: movsx  r12,WORD PTR [rsp+0xd0]
0x1414cc8c6: xor    r14d,r14d
0x1414cc8c9: mov    QWORD PTR [rdx+0x10],r14
0x1414cc8cd: mov    rax,rdx
0x1414cc8d0: cmp    QWORD PTR [rdx+0x18],0xf
0x1414cc8d5: jbe    0x1414cc8da
0x1414cc8d7: mov    rax,QWORD PTR [rdx]
0x1414cc8da: mov    BYTE PTR [rax],r14b
0x1414cc8dd: cmp    esi,0xffffffff
0x1414cc8e0: jne    0x1414cca99
0x1414cc8e6: mov    eax,DWORD PTR [rsp+0xc0]
0x1414cc8ed: test   al,0x1
0x1414cc8ef: je     0x1414cc90d
0x1414cc8f1: mov    r8d,0x5
0x1414cc8f7: lea    rdx,[rip+0x143416]        # 0x14160fd14 ; SOURCE 'plant'
0x1414cc8fe: mov    rcx,rbx
0x1414cc901: call   0x14006f9a0
0x1414cc906: mov    al,0x1
0x1414cc908: jmp    0x1414ccccb
0x1414cc90d: bt     eax,0xc
0x1414cc911: jae    0x1414cc92f
0x1414cc913: mov    r8d,0x4
0x1414cc919: lea    rdx,[rip+0x143d98]        # 0x1416106b8 ; SOURCE 'yarn'
0x1414cc920: mov    rcx,rbx
0x1414cc923: call   0x14006f9a0
0x1414cc928: mov    al,0x1
0x1414cc92a: jmp    0x1414ccccb
0x1414cc92f: test   al,0x82
0x1414cc931: jne    0x1414cca5f
0x1414cc937: test   al,0x4
0x1414cc939: je     0x1414cc957
0x1414cc93b: mov    r8d,0x5
0x1414cc941: lea    rdx,[rip+0x143d60]        # 0x1416106a8 ; SOURCE 'cloth'
0x1414cc948: mov    rcx,rbx
0x1414cc94b: call   0x14006f9a0
0x1414cc950: mov    al,0x1
0x1414cc952: jmp    0x1414ccccb
0x1414cc957: test   al,0x8
0x1414cc959: je     0x1414cc977
0x1414cc95b: mov    r8d,0x4
0x1414cc961: lea    rdx,[rip+0x143d48]        # 0x1416106b0 ; SOURCE 'silk'
0x1414cc968: mov    rcx,rbx
0x1414cc96b: call   0x14006f9a0
0x1414cc970: mov    al,0x1
0x1414cc972: jmp    0x1414ccccb
0x1414cc977: test   al,0x20
0x1414cc979: je     0x1414cc997
0x1414cc97b: mov    r8d,0x4
0x1414cc981: lea    rdx,[rip+0x143d40]        # 0x1416106c8 ; SOURCE 'bone'
0x1414cc988: mov    rcx,rbx
0x1414cc98b: call   0x14006f9a0
0x1414cc990: mov    al,0x1
0x1414cc992: jmp    0x1414ccccb
0x1414cc997: test   al,0x10
0x1414cc999: je     0x1414cc9b7
0x1414cc99b: mov    r8d,0x7
0x1414cc9a1: lea    rdx,[rip+0x143ce8]        # 0x141610690 ; SOURCE 'leather'
0x1414cc9a8: mov    rcx,rbx
0x1414cc9ab: call   0x14006f9a0
0x1414cc9b0: mov    al,0x1
0x1414cc9b2: jmp    0x1414ccccb
0x1414cc9b7: test   al,0x40
0x1414cc9b9: je     0x1414cc9d7
0x1414cc9bb: mov    r8d,0x5
0x1414cc9c1: lea    rdx,[rip+0x143cf8]        # 0x1416106c0 ; SOURCE 'shell'
0x1414cc9c8: mov    rcx,rbx
0x1414cc9cb: call   0x14006f9a0
0x1414cc9d0: mov    al,0x1
0x1414cc9d2: jmp    0x1414ccccb
0x1414cc9d7: bt     eax,0x8
0x1414cc9db: jae    0x1414cc9f9
0x1414cc9dd: mov    r8d,0x4
0x1414cc9e3: lea    rdx,[rip+0x143cee]        # 0x1416106d8 ; SOURCE 'soap'
0x1414cc9ea: mov    rcx,rbx
0x1414cc9ed: call   0x14006f9a0
0x1414cc9f2: mov    al,0x1
0x1414cc9f4: jmp    0x1414ccccb
0x1414cc9f9: bt     eax,0x9
0x1414cc9fd: jae    0x1414cca1b
0x1414cc9ff: mov    r8d,0xb
0x1414cca05: lea    rdx,[rip+0x2b6094]        # 0x141782aa0 ; SOURCE 'ivory/tooth'
0x1414cca0c: mov    rcx,rbx
0x1414cca0f: call   0x14006f9a0
0x1414cca14: mov    al,0x1
0x1414cca16: jmp    0x1414ccccb
0x1414cca1b: bt     eax,0xa
0x1414cca1f: jae    0x1414cca3d
0x1414cca21: mov    r8d,0x4
0x1414cca27: lea    rdx,[rip+0x143cba]        # 0x1416106e8 ; SOURCE 'horn'
0x1414cca2e: mov    rcx,rbx
0x1414cca31: call   0x14006f9a0
0x1414cca36: mov    al,0x1
0x1414cca38: jmp    0x1414ccccb
0x1414cca3d: bt     eax,0xb
0x1414cca41: jae    0x1414cca99
0x1414cca43: mov    r8d,0x5
0x1414cca49: lea    rdx,[rip+0x143c90]        # 0x1416106e0 ; SOURCE 'pearl'
0x1414cca50: mov    rcx,rbx
0x1414cca53: call   0x14006f9a0
0x1414cca58: mov    al,0x1
0x1414cca5a: jmp    0x1414ccccb
0x1414cca5f: mov    ecx,0x4
0x1414cca64: mov    r8d,0x6
0x1414cca6a: movzx  eax,BYTE PTR [rsp+0xc8]
0x1414cca72: test   al,al
0x1414cca74: cmove  r8d,ecx
0x1414cca78: lea    rcx,[rip+0x143c19]        # 0x141610698 ; SOURCE 'wood'
0x1414cca7f: lea    rdx,[rip+0x1cf7e6]        # 0x14169c26c ; SOURCE 'wooden'
0x1414cca86: cmove  rdx,rcx
0x1414cca8a: mov    rcx,rbx
0x1414cca8d: call   0x14006f9a0
0x1414cca92: mov    al,0x1
0x1414cca94: jmp    0x1414ccccb
0x1414cca99: mov    ecx,0xdb
0x1414cca9e: movzx  eax,r15w
0x1414ccaa2: sub    ax,cx
0x1414ccaa5: mov    ecx,0xc7
0x1414ccaaa: cmp    ax,cx
0x1414ccaad: ja     0x1414ccc25
0x1414ccab3: mov    r9,QWORD PTR [rip+0x1027156]        # 0x1424f3c10
0x1414ccaba: mov    r10,QWORD PTR [rip+0x1027147]        # 0x1424f3c08
0x1414ccac1: sub    r9,r10
0x1414ccac4: sar    r9,0x3
0x1414ccac8: test   r9,r9
0x1414ccacb: je     0x1414ccc25
0x1414ccad1: cmp    esi,0xffffffff
0x1414ccad4: je     0x1414ccc25
0x1414ccada: mov    edx,r14d
0x1414ccadd: sub    r9d,0x1
0x1414ccae1: js     0x1414ccc25
0x1414ccae7: nop    WORD PTR [rax+rax*1+0x0]
0x1414ccaf0: lea    ecx,[r9+rdx*1]
0x1414ccaf4: sar    ecx,1
0x1414ccaf6: movsxd rax,ecx
0x1414ccaf9: mov    rdi,QWORD PTR [r10+rax*8]
0x1414ccafd: cmp    DWORD PTR [rdi+0xe0],esi
0x1414ccb03: je     0x1414ccb1f
0x1414ccb05: lea    eax,[rcx-0x1]
0x1414ccb08: cmovle eax,r9d
0x1414ccb0c: mov    r9d,eax
0x1414ccb0f: lea    eax,[rcx+0x1]
0x1414ccb12: cmovle edx,eax
0x1414ccb15: cmp    edx,r9d
0x1414ccb18: jle    0x1414ccaf0
0x1414ccb1a: jmp    0x1414ccc25
0x1414ccb1f: test   rdi,rdi
0x1414ccb22: je     0x1414ccc25
0x1414ccb28: cmp    BYTE PTR [rdi+0xaa],r14b
0x1414ccb2f: je     0x1414ccc25
0x1414ccb35: xorps  xmm0,xmm0
0x1414ccb38: movups XMMWORD PTR [rsp+0x20],xmm0
0x1414ccb3d: mov    QWORD PTR [rsp+0x30],r14
0x1414ccb42: mov    ebp,0xf
0x1414ccb47: mov    QWORD PTR [rsp+0x38],rbp
0x1414ccb4c: mov    BYTE PTR [rsp+0x20],r14b
0x1414ccb51: mov    rax,QWORD PTR [rdi+0x130]
0x1414ccb58: test   rax,rax
0x1414ccb5b: je     0x1414ccb89
0x1414ccb5d: mov    rax,QWORD PTR [rax+0x58]
0x1414ccb61: test   rax,rax
0x1414ccb64: je     0x1414ccb89
0x1414ccb66: mov    edx,DWORD PTR [rax+0x30]
0x1414ccb69: cmp    edx,0xffffffff
0x1414ccb6c: je     0x1414ccb89
0x1414ccb6e: lea    rcx,[rip+0x1015063]        # 0x1424e1bd8
0x1414ccb75: call   0x140072500
0x1414ccb7a: test   rax,rax
0x1414ccb7d: je     0x1414ccb89
0x1414ccb7f: mov    rcx,rax
0x1414ccb82: call   0x140c37530
0x1414ccb87: jmp    0x1414ccb8d
0x1414ccb89: lea    rax,[rdi+0x38]
0x1414ccb8d: test   rax,rax
0x1414ccb90: je     0x1414ccbb5
0x1414ccb92: cmp    BYTE PTR [rax+0x72],0x0
0x1414ccb96: je     0x1414ccbb5
0x1414ccb98: xor    r9d,r9d
0x1414ccb9b: mov    r8b,0x1
0x1414ccb9e: lea    rdx,[rsp+0x20]
0x1414ccba3: mov    rcx,rax
0x1414ccba6: call   0x140a91760
0x1414ccbab: mov    rbp,QWORD PTR [rsp+0x38]
0x1414ccbb0: mov    r14,QWORD PTR [rsp+0x30]
0x1414ccbb5: lea    rdx,[rsp+0x20]
0x1414ccbba: cmp    rbp,0xf
0x1414ccbbe: cmova  rdx,QWORD PTR [rsp+0x20]
0x1414ccbc4: mov    r8,r14
0x1414ccbc7: mov    rcx,rbx
0x1414ccbca: call   0x14006f9a0
0x1414ccbcf: mov    r8d,0x3
0x1414ccbd5: lea    rdx,[rip+0x11bf7c]        # 0x1415e8b58 ; SOURCE "'s "
0x1414ccbdc: mov    rcx,rbx
0x1414ccbdf: call   0x14006f9a0
0x1414ccbe4: nop
0x1414ccbe5: mov    rdx,QWORD PTR [rsp+0x38]
0x1414ccbea: cmp    rdx,0xf
0x1414ccbee: jbe    0x1414ccc25
0x1414ccbf0: inc    rdx
0x1414ccbf3: mov    rcx,QWORD PTR [rsp+0x20]
0x1414ccbf8: mov    rax,rcx
0x1414ccbfb: cmp    rdx,0x1000
0x1414ccc02: jb     0x1414ccc20
0x1414ccc04: add    rdx,0x27
0x1414ccc08: mov    rcx,QWORD PTR [rcx-0x8]
0x1414ccc0c: sub    rax,rcx
0x1414ccc0f: add    rax,0xfffffffffffffff8
0x1414ccc13: cmp    rax,0x1f
0x1414ccc17: jbe    0x1414ccc20
0x1414ccc19: call   QWORD PTR [rip+0x113e81]        # 0x1415e0aa0
0x1414ccc1f: int3
0x1414ccc20: call   0x1415345f0
0x1414ccc25: mov    r8d,esi
0x1414ccc28: movzx  edx,r15w
0x1414ccc2c: mov    rcx,r13
0x1414ccc2f: call   0x1414a8ce0
0x1414ccc34: mov    rdi,rax
0x1414ccc37: test   rax,rax
0x1414ccc3a: je     0x1414cccb4
0x1414ccc3c: cmp    QWORD PTR [rax+0x530],0x0
0x1414ccc44: je     0x1414ccc78
0x1414ccc46: lea    rdx,[rax+0x520]
0x1414ccc4d: mov    r8,QWORD PTR [rdx+0x10]
0x1414ccc51: cmp    QWORD PTR [rdx+0x18],0xf
0x1414ccc56: jbe    0x1414ccc5b
0x1414ccc58: mov    rdx,QWORD PTR [rdx]
0x1414ccc5b: mov    rcx,rbx
0x1414ccc5e: call   0x14006f9a0
0x1414ccc63: mov    r8d,0x1
0x1414ccc69: lea    rdx,[rip+0x116ab0]        # 0x1415e3720 ; SOURCE ' '
0x1414ccc70: mov    rcx,rbx
0x1414ccc73: call   0x14006f9a0
0x1414ccc78: mov    rax,r12
0x1414ccc7b: shl    rax,0x5
0x1414ccc7f: cmp    BYTE PTR [rsp+0xc8],0x0
0x1414ccc87: lea    rdx,[rax+0x178]
0x1414ccc8e: jne    0x1414ccc97
0x1414ccc90: lea    rdx,[rax+0xb8]
0x1414ccc97: add    rdx,rdi
0x1414ccc9a: cmp    QWORD PTR [rdx+0x18],0xf
0x1414ccc9f: mov    r8,QWORD PTR [rdx+0x10]
0x1414ccca3: jbe    0x1414ccca8
0x1414ccca5: mov    rdx,QWORD PTR [rdx]
0x1414ccca8: mov    rcx,rbx
0x1414cccab: call   0x14006f9a0
0x1414cccb0: mov    al,0x1
0x1414cccb2: jmp    0x1414ccccb
0x1414cccb4: mov    r8d,0x10
0x1414cccba: lea    rdx,[rip+0x2b5def]        # 0x141782ab0 ; SOURCE 'unknown material'
0x1414cccc1: mov    rcx,rbx
0x1414cccc4: call   0x14006f9a0
0x1414cccc9: xor    al,al
0x1414ccccb: mov    rcx,QWORD PTR [rsp+0x40]
0x1414cccd0: xor    rcx,rsp
0x1414cccd3: call   0x1415345d0
0x1414cccd8: add    rsp,0x58
0x1414cccdc: pop    r15
0x1414cccde: pop    r14
0x1414ccce0: pop    r13
0x1414ccce2: pop    r12
0x1414ccce4: pop    rdi
0x1414ccce5: pop    rsi
0x1414ccce6: pop    rbp
0x1414ccce7: pop    rbx
0x1414ccce8: ret
