; reference PE:6aea05a1:02734000; load-game-renderer; complete PE unwind owner RVA 0x7dbdf0..0x7ddb0c
0x7dbdf0: mov    QWORD PTR [rsp+0x8],rbx
0x7dbdf5: mov    QWORD PTR [rsp+0x10],rsi
0x7dbdfa: mov    QWORD PTR [rsp+0x18],rdi
0x7dbdff: push   rbp
0x7dbe00: push   r12
0x7dbe02: push   r13
0x7dbe04: push   r14
0x7dbe06: push   r15
0x7dbe08: mov    rbp,rsp
0x7dbe0b: sub    rsp,0x60
0x7dbe0f: mov    rax,QWORD PTR [rip+0x10e222a]        # 0x1418be040
0x7dbe16: xor    rax,rsp
0x7dbe19: mov    QWORD PTR [rbp-0x10],rax
0x7dbe1d: mov    r13,rcx
0x7dbe20: mov    rdx,QWORD PTR [rip+0x1c13dc9]        # 0x1423efbf0
0x7dbe27: mov    r8d,DWORD PTR [rip+0x1c13dca]        # 0x1423efbf8
0x7dbe2e: test   r8d,r8d
0x7dbe31: jle    0x1407dbe46
0x7dbe33: test   BYTE PTR [rdx],0x1
0x7dbe36: je     0x1407dbe46
0x7dbe38: mov    eax,DWORD PTR [rip+0x1e90ca2]        # 0x14266cae0
0x7dbe3e: mov    DWORD PTR [rip+0x1e90c98],eax        # 0x14266cadc
0x7dbe44: jmp    0x1407dbe50
0x7dbe46: mov    DWORD PTR [rip+0x1e90c8c],0xffffffff        # 0x14266cadc
0x7dbe50: mov    BYTE PTR [rip+0x1e90c81],0x0        # 0x14266cad8
0x7dbe57: lea    r9,[rip+0xffffffffff8241a2]        # 0x140000000
0x7dbe5e: test   r8d,r8d
0x7dbe61: jle    0x1407dbeac
0x7dbe63: test   BYTE PTR [rdx],0x1
0x7dbe66: je     0x1407dbeac
0x7dbe68: movsx  rax,WORD PTR [rcx+0x72c]
0x7dbe70: cmp    eax,0xa
0x7dbe73: ja     0x1407dbeac
0x7dbe75: mov    ecx,DWORD PTR [r9+rax*4+0x7dd92c]
0x7dbe7d: add    rcx,r9
0x7dbe80: jmp    rcx
0x7dbe82: mov    DWORD PTR [rip+0x1e90c50],0x6        # 0x14266cadc
0x7dbe8c: mov    DWORD PTR [rip+0x1e90c4a],0x6        # 0x14266cae0
0x7dbe96: jmp    0x1407dbeac
0x7dbe98: mov    DWORD PTR [rip+0x1e90c3a],0x5        # 0x14266cadc
0x7dbea2: mov    DWORD PTR [rip+0x1e90c34],0x5        # 0x14266cae0
0x7dbeac: lea    rdx,[rbp-0x40]
0x7dbeb0: lea    rcx,[rbp-0x3c]
0x7dbeb4: call   0x140c4b030
0x7dbeb9: xor    r8d,r8d
0x7dbebc: mov    dl,0xff
0x7dbebe: xor    ecx,ecx
0x7dbec0: call   0x1408d8160
0x7dbec5: mov    r14d,DWORD PTR [rip+0x1c13d3c]        # 0x1423efc08
0x7dbecc: dec    r14d
0x7dbecf: xor    r12d,r12d
0x7dbed2: mov    ebx,DWORD PTR [rbp-0x40]
0x7dbed5: mov    esi,DWORD PTR [rbp-0x3c]
0x7dbed8: cmp    DWORD PTR [rip+0x1e90bfd],0xffffffff        # 0x14266cadc
0x7dbedf: jne    0x1407dbfb9
0x7dbee5: mov    DWORD PTR [rip+0x1e90a0d],0x1000006        # 0x14266c8fc
0x7dbeef: mov    edi,r12d
0x7dbef2: test   r14d,r14d
0x7dbef5: js     0x1407dbfb9
0x7dbefb: nop    DWORD PTR [rax+rax*1+0x0]
0x7dbf00: mov    r11d,esi
0x7dbf03: cmp    esi,ebx
0x7dbf05: jg     0x1407dbfae
0x7dbf0b: nop    DWORD PTR [rax+rax*1+0x0]
0x7dbf10: mov    DWORD PTR [rip+0x1e909dd],r11d        # 0x14266c8f4
0x7dbf17: mov    DWORD PTR [rip+0x1e909db],edi        # 0x14266c8f8
0x7dbf1d: test   edi,edi
0x7dbf1f: jne    0x1407dbf4a
0x7dbf21: cmp    r11d,esi
0x7dbf24: jne    0x1407dbf2e
0x7dbf26: mov    edx,DWORD PTR [rip+0x1c17200]        # 0x1423f312c
0x7dbf2c: jmp    0x1407dbf96
0x7dbf2e: lea    rcx,[rip+0x1e9093b]        # 0x14266c870
0x7dbf35: cmp    r11d,ebx
0x7dbf38: jne    0x1407dbf42
0x7dbf3a: mov    edx,DWORD PTR [rip+0x1c171f4]        # 0x1423f3134
0x7dbf40: jmp    0x1407dbf9d
0x7dbf42: mov    edx,DWORD PTR [rip+0x1c171e8]        # 0x1423f3130
0x7dbf48: jmp    0x1407dbf9d
0x7dbf4a: cmp    edi,r14d
0x7dbf4d: jne    0x1407dbf78
0x7dbf4f: cmp    r11d,esi
0x7dbf52: jne    0x1407dbf5c
0x7dbf54: mov    edx,DWORD PTR [rip+0x1c171ea]        # 0x1423f3144
0x7dbf5a: jmp    0x1407dbf96
0x7dbf5c: lea    rcx,[rip+0x1e9090d]        # 0x14266c870
0x7dbf63: cmp    r11d,ebx
0x7dbf66: jne    0x1407dbf70
0x7dbf68: mov    edx,DWORD PTR [rip+0x1c171de]        # 0x1423f314c
0x7dbf6e: jmp    0x1407dbf9d
0x7dbf70: mov    edx,DWORD PTR [rip+0x1c171d2]        # 0x1423f3148
0x7dbf76: jmp    0x1407dbf9d
0x7dbf78: cmp    r11d,esi
0x7dbf7b: jne    0x1407dbf85
0x7dbf7d: mov    edx,DWORD PTR [rip+0x1c171b5]        # 0x1423f3138
0x7dbf83: jmp    0x1407dbf96
0x7dbf85: cmp    r11d,ebx
0x7dbf88: mov    edx,DWORD PTR [rip+0x1c171b2]        # 0x1423f3140
0x7dbf8e: je     0x1407dbf96
0x7dbf90: mov    edx,DWORD PTR [rip+0x1c171a6]        # 0x1423f313c
0x7dbf96: lea    rcx,[rip+0x1e908d3]        # 0x14266c870
0x7dbf9d: call   0x140af4570
0x7dbfa2: inc    r11d
0x7dbfa5: cmp    r11d,ebx
0x7dbfa8: jle    0x1407dbf10
0x7dbfae: inc    edi
0x7dbfb0: cmp    edi,r14d
0x7dbfb3: jle    0x1407dbf00
0x7dbfb9: mov    DWORD PTR [rip+0x1e90939],0x1010007        # 0x14266c8fc
0x7dbfc3: mov    edx,DWORD PTR [r13+0x198]
0x7dbfca: add    edx,DWORD PTR [rip+0x1e84f08]        # 0x142660ed8
0x7dbfd0: mov    rcx,QWORD PTR [rip+0x1e84f11]        # 0x142660ee8
0x7dbfd7: sub    rcx,QWORD PTR [rip+0x1e84f02]        # 0x142660ee0
0x7dbfde: sar    rcx,0x3
0x7dbfe2: lea    r8d,[rcx*2+0x35]
0x7dbfea: lea    r15d,[rsi+0x5]
0x7dbfee: lea    edi,[rbx-0x6]
0x7dbff1: mov    eax,edi
0x7dbff3: sub    eax,r15d
0x7dbff6: add    edx,DWORD PTR [rip+0x1e84ed8]        # 0x142660ed4
0x7dbffc: cmovns r12d,edx
0x7dc000: imul   eax,r12d
0x7dc004: cdq
0x7dc005: idiv   r8d
0x7dc008: add    eax,r15d
0x7dc00b: mov    ecx,r15d
0x7dc00e: cmp    eax,r15d
0x7dc011: cmovge ecx,eax
0x7dc014: lea    r12d,[rdi-0x1]
0x7dc018: cmp    ecx,r12d
0x7dc01b: cmovle r12d,ecx
0x7dc01f: mov    eax,0x66666667
0x7dc024: imul   r14d
0x7dc027: sar    edx,1
0x7dc029: mov    r14d,edx
0x7dc02c: shr    r14d,0x1f
0x7dc030: add    r14d,0x6
0x7dc034: add    r14d,edx
0x7dc037: mov    r11d,r15d
0x7dc03a: cmp    r15d,edi
0x7dc03d: jg     0x1407dc0b4
0x7dc03f: nop
0x7dc040: mov    DWORD PTR [rip+0x1e908ad],r11d        # 0x14266c8f4
0x7dc047: mov    DWORD PTR [rip+0x1e908aa],r14d        # 0x14266c8f8
0x7dc04e: cmp    r11d,r12d
0x7dc051: jg     0x1407dc07f
0x7dc053: cmp    r11d,r15d
0x7dc056: jne    0x1407dc060
0x7dc058: mov    edx,DWORD PTR [rip+0x1c16cba]        # 0x1423f2d18
0x7dc05e: jmp    0x1407dc09d
0x7dc060: xor    r8d,r8d
0x7dc063: lea    rcx,[rip+0x1e90806]        # 0x14266c870
0x7dc06a: cmp    r11d,edi
0x7dc06d: jne    0x1407dc077
0x7dc06f: mov    edx,DWORD PTR [rip+0x1c16cab]        # 0x1423f2d20
0x7dc075: jmp    0x1407dc0a7
0x7dc077: mov    edx,DWORD PTR [rip+0x1c16c9f]        # 0x1423f2d1c
0x7dc07d: jmp    0x1407dc0a7
0x7dc07f: cmp    r11d,r15d
0x7dc082: jne    0x1407dc08c
0x7dc084: mov    edx,DWORD PTR [rip+0x1c16c9a]        # 0x1423f2d24
0x7dc08a: jmp    0x1407dc09d
0x7dc08c: cmp    r11d,edi
0x7dc08f: mov    edx,DWORD PTR [rip+0x1c16c97]        # 0x1423f2d2c
0x7dc095: je     0x1407dc09d
0x7dc097: mov    edx,DWORD PTR [rip+0x1c16c8b]        # 0x1423f2d28
0x7dc09d: xor    r8d,r8d
0x7dc0a0: lea    rcx,[rip+0x1e907c9]        # 0x14266c870
0x7dc0a7: call   0x140af4ba0
0x7dc0ac: inc    r11d
0x7dc0af: cmp    r11d,edi
0x7dc0b2: jle    0x1407dc040
0x7dc0b4: mov    DWORD PTR [rip+0x1e9083e],0x1010007        # 0x14266c8fc
0x7dc0be: mov    DWORD PTR [rip+0x1e9082f],r15d        # 0x14266c8f4
0x7dc0c5: lea    eax,[r14-0x5]
0x7dc0c9: mov    DWORD PTR [rip+0x1e90829],eax        # 0x14266c8f8
0x7dc0cf: xorps  xmm0,xmm0
0x7dc0d2: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dc0d6: mov    ecx,0x30
0x7dc0db: call   0x140071e00
0x7dc0e0: mov    QWORD PTR [rbp-0x38],rax
0x7dc0e4: movdqa xmm0,XMMWORD PTR [rip+0xfcfb64]        # 0x1417abc50
0x7dc0ec: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dc0f1: movups xmm0,XMMWORD PTR [rip+0xef18c8]        # 0x1416cd9c0 ; vector='Loading world an'
0x7dc0f8: movups XMMWORD PTR [rax],xmm0
0x7dc0fb: movups xmm1,XMMWORD PTR [rip+0xef18ce]        # 0x1416cd9d0 ; vector='d continuing act'
0x7dc102: movups XMMWORD PTR [rax+0x10],xmm1
0x7dc106: movsd  xmm0,QWORD PTR [rip+0xef18d2]        # 0x1416cd9e0 ; cstring='ive game'
0x7dc10e: movsd  QWORD PTR [rax+0x20],xmm0
0x7dc113: mov    BYTE PTR [rax+0x28],0x0
0x7dc117: xor    r9d,r9d
0x7dc11a: lea    rdx,[rbp-0x38]
0x7dc11e: lea    rcx,[rip+0x1e9074b]        # 0x14266c870
0x7dc125: call   0x140af3400
0x7dc12a: nop
0x7dc12b: mov    rdx,QWORD PTR [rbp-0x20]
0x7dc12f: cmp    rdx,0xf
0x7dc133: jbe    0x1407dc166
0x7dc135: inc    rdx
0x7dc138: mov    rcx,QWORD PTR [rbp-0x38]
0x7dc13c: mov    rax,rcx
0x7dc13f: cmp    rdx,0x1000
0x7dc146: jb     0x1407dc161
0x7dc148: add    rdx,0x27
0x7dc14c: mov    rcx,QWORD PTR [rcx-0x8]
0x7dc150: sub    rax,rcx
0x7dc153: add    rax,0xfffffffffffffff8
0x7dc157: cmp    rax,0x1f
0x7dc15b: ja     0x1407dd563
0x7dc161: call   0x1415530d0
0x7dc166: mov    DWORD PTR [rip+0x1e9078c],0x1010007        # 0x14266c8fc
0x7dc170: mov    DWORD PTR [rip+0x1e9077d],r15d        # 0x14266c8f4
0x7dc177: lea    eax,[r14-0x2]
0x7dc17b: mov    DWORD PTR [rip+0x1e90777],eax        # 0x14266c8f8
0x7dc181: movsxd rax,DWORD PTR [r13+0x198]
0x7dc188: cmp    eax,0x32
0x7dc18b: ja     0x1407dd901
0x7dc191: lea    rdx,[rip+0xffffffffff823e68]        # 0x140000000
0x7dc198: mov    ecx,DWORD PTR [rdx+rax*4+0x7dd958]
0x7dc19f: add    rcx,rdx
0x7dc1a2: jmp    rcx
0x7dc1a4: xorps  xmm0,xmm0
0x7dc1a7: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dc1ab: movdqa xmm1,XMMWORD PTR [rip+0xfcf90d]        # 0x1417abac0
0x7dc1b3: movdqu XMMWORD PTR [rbp-0x28],xmm1
0x7dc1b8: movsd  xmm0,QWORD PTR [rip+0xe44790]        # 0x141620950 ; cstring='Opening file...'
0x7dc1c0: movsd  QWORD PTR [rbp-0x38],xmm0
0x7dc1c5: mov    eax,DWORD PTR [rip+0xe4478d]        # 0x141620958 ; cstring='file...'
0x7dc1cb: mov    DWORD PTR [rbp-0x30],eax
0x7dc1ce: movzx  eax,WORD PTR [rip+0xe44787]        # 0x14162095c ; cstring='...'
0x7dc1d5: mov    WORD PTR [rbp-0x2c],ax
0x7dc1d9: movzx  eax,BYTE PTR [rip+0xe4477e]        # 0x14162095e ; cstring='.'
0x7dc1e0: mov    BYTE PTR [rbp-0x2a],al
0x7dc1e3: mov    BYTE PTR [rbp-0x29],0x0
0x7dc1e7: xor    r9d,r9d
0x7dc1ea: lea    rdx,[rbp-0x38]
0x7dc1ee: lea    rcx,[rip+0x1e9067b]        # 0x14266c870
0x7dc1f5: call   0x140af3400
0x7dc1fa: nop
0x7dc1fb: mov    rdx,QWORD PTR [rbp-0x20]
0x7dc1ff: cmp    rdx,0xf
0x7dc203: jbe    0x1407dd901
0x7dc209: inc    rdx
0x7dc20c: mov    rcx,QWORD PTR [rbp-0x38]
0x7dc210: cmp    rdx,0x1000
0x7dc217: mov    rax,rcx
0x7dc21a: jb     0x1407dc235
0x7dc21c: add    rdx,0x27
0x7dc220: mov    rcx,QWORD PTR [rcx-0x8]
0x7dc224: sub    rax,rcx
0x7dc227: add    rax,0xfffffffffffffff8
0x7dc22b: cmp    rax,0x1f
0x7dc22f: ja     0x1407dd563
0x7dc235: call   0x1415530d0
0x7dc23a: jmp    0x1407dd901
0x7dc23f: mov    eax,DWORD PTR [rip+0x1e84c3b]        # 0x142660e80
0x7dc245: dec    eax
0x7dc247: cmp    eax,0x39
0x7dc24a: ja     0x1407dcc0b
0x7dc250: cdqe
0x7dc252: mov    ecx,DWORD PTR [rdx+rax*4+0x7dda24]
0x7dc259: add    rcx,rdx
0x7dc25c: jmp    rcx
0x7dc25e: movsxd rax,DWORD PTR [rip+0x1e84c6f]        # 0x142660ed4
0x7dc265: test   eax,eax
0x7dc267: js     0x1407dc2d4
0x7dc269: mov    rcx,QWORD PTR [rip+0x1e84cf8]        # 0x142660f68
0x7dc270: sub    rcx,QWORD PTR [rip+0x1e84ce9]        # 0x142660f60
0x7dc277: sar    rcx,0x3
0x7dc27b: cmp    rax,rcx
0x7dc27e: jae    0x1407dc2d4
0x7dc280: lea    rdx,[rip+0xef1029]        # 0x1416cd2b0 ; cstring='Loading object files...  '
0x7dc287: lea    rcx,[rbp-0x38]
0x7dc28b: call   0x140069780
0x7dc290: nop
0x7dc291: xor    r9d,r9d
0x7dc294: lea    rdx,[rbp-0x38]
0x7dc298: lea    rcx,[rip+0x1e905d1]        # 0x14266c870
0x7dc29f: call   0x140af3400
0x7dc2a4: nop
0x7dc2a5: lea    rcx,[rbp-0x38]
0x7dc2a9: call   0x140070e80
0x7dc2ae: movsxd rax,DWORD PTR [rip+0x1e84c1f]        # 0x142660ed4
0x7dc2b5: xor    r9d,r9d
0x7dc2b8: mov    rdx,QWORD PTR [rip+0x1e84ca1]        # 0x142660f60
0x7dc2bf: mov    rdx,QWORD PTR [rdx+rax*8]
0x7dc2c3: lea    rcx,[rip+0x1e905a6]        # 0x14266c870
0x7dc2ca: call   0x140af3400
0x7dc2cf: jmp    0x1407dcc0b
0x7dc2d4: lea    rdx,[rip+0xef0fd5]        # 0x1416cd2b0 ; cstring='Loading object files...  '
0x7dc2db: lea    rcx,[rbp-0x38]
0x7dc2df: call   0x140069780
0x7dc2e4: nop
0x7dc2e5: xor    r9d,r9d
0x7dc2e8: lea    rdx,[rbp-0x38]
0x7dc2ec: lea    rcx,[rip+0x1e9057d]        # 0x14266c870
0x7dc2f3: call   0x140af3400
0x7dc2f8: nop
0x7dc2f9: jmp    0x1407dcc02
0x7dc2fe: lea    rdx,[rip+0xef0fcb]        # 0x1416cd2d0 ; cstring='Sorting text...'
0x7dc305: lea    rcx,[rbp-0x38]
0x7dc309: call   0x140069780
0x7dc30e: nop
0x7dc30f: xor    r9d,r9d
0x7dc312: lea    rdx,[rbp-0x38]
0x7dc316: lea    rcx,[rip+0x1e90553]        # 0x14266c870
0x7dc31d: call   0x140af3400
0x7dc322: nop
0x7dc323: jmp    0x1407dcc02
0x7dc328: lea    rdx,[rip+0xef0f49]        # 0x1416cd278 ; cstring='Sorting material templates...'
0x7dc32f: lea    rcx,[rbp-0x38]
0x7dc333: call   0x140069780
0x7dc338: nop
0x7dc339: xor    r9d,r9d
0x7dc33c: lea    rdx,[rbp-0x38]
0x7dc340: lea    rcx,[rip+0x1e90529]        # 0x14266c870
0x7dc347: call   0x140af3400
0x7dc34c: nop
0x7dc34d: jmp    0x1407dcc02
0x7dc352: lea    rdx,[rip+0xef0f3f]        # 0x1416cd298 ; cstring='Sorting inorganics...'
0x7dc359: lea    rcx,[rbp-0x38]
0x7dc35d: call   0x140069780
0x7dc362: nop
0x7dc363: xor    r9d,r9d
0x7dc366: lea    rdx,[rbp-0x38]
0x7dc36a: lea    rcx,[rip+0x1e904ff]        # 0x14266c870
0x7dc371: call   0x140af3400
0x7dc376: nop
0x7dc377: jmp    0x1407dcc02
0x7dc37c: lea    rdx,[rip+0xef0f8d]        # 0x1416cd310 ; cstring='Sorting plants...'
0x7dc383: lea    rcx,[rbp-0x38]
0x7dc387: call   0x140069780
0x7dc38c: nop
0x7dc38d: xor    r9d,r9d
0x7dc390: lea    rdx,[rbp-0x38]
0x7dc394: lea    rcx,[rip+0x1e904d5]        # 0x14266c870
0x7dc39b: call   0x140af3400
0x7dc3a0: nop
0x7dc3a1: jmp    0x1407dcc02
0x7dc3a6: lea    rdx,[rip+0xef0f7b]        # 0x1416cd328 ; cstring='Sorting tissue templates...'
0x7dc3ad: lea    rcx,[rbp-0x38]
0x7dc3b1: call   0x140069780
0x7dc3b6: nop
0x7dc3b7: xor    r9d,r9d
0x7dc3ba: lea    rdx,[rbp-0x38]
0x7dc3be: lea    rcx,[rip+0x1e904ab]        # 0x14266c870
0x7dc3c5: call   0x140af3400
0x7dc3ca: nop
0x7dc3cb: jmp    0x1407dcc02
0x7dc3d0: lea    rdx,[rip+0xef0f09]        # 0x1416cd2e0 ; cstring='Sorting items...'
0x7dc3d7: lea    rcx,[rbp-0x38]
0x7dc3db: call   0x140069780
0x7dc3e0: nop
0x7dc3e1: xor    r9d,r9d
0x7dc3e4: lea    rdx,[rbp-0x38]
0x7dc3e8: lea    rcx,[rip+0x1e90481]        # 0x14266c870
0x7dc3ef: call   0x140af3400
0x7dc3f4: nop
0x7dc3f5: jmp    0x1407dcc02
0x7dc3fa: lea    rdx,[rip+0xef0ef7]        # 0x1416cd2f8 ; cstring='Sorting buildings...'
0x7dc401: lea    rcx,[rbp-0x38]
0x7dc405: call   0x140069780
0x7dc40a: nop
0x7dc40b: xor    r9d,r9d
0x7dc40e: lea    rdx,[rbp-0x38]
0x7dc412: lea    rcx,[rip+0x1e90457]        # 0x14266c870
0x7dc419: call   0x140af3400
0x7dc41e: nop
0x7dc41f: jmp    0x1407dcc02
0x7dc424: lea    rdx,[rip+0xef0f55]        # 0x1416cd380 ; cstring='Sorting body detail plans...'
0x7dc42b: lea    rcx,[rbp-0x38]
0x7dc42f: call   0x140069780
0x7dc434: nop
0x7dc435: xor    r9d,r9d
0x7dc438: lea    rdx,[rbp-0x38]
0x7dc43c: lea    rcx,[rip+0x1e9042d]        # 0x14266c870
0x7dc443: call   0x140af3400
0x7dc448: nop
0x7dc449: jmp    0x1407dcc02
0x7dc44e: lea    rdx,[rip+0xef0f4b]        # 0x1416cd3a0 ; cstring='Sorting creature bodies...'
0x7dc455: lea    rcx,[rbp-0x38]
0x7dc459: call   0x140069780
0x7dc45e: nop
0x7dc45f: xor    r9d,r9d
0x7dc462: lea    rdx,[rbp-0x38]
0x7dc466: lea    rcx,[rip+0x1e90403]        # 0x14266c870
0x7dc46d: call   0x140af3400
0x7dc472: nop
0x7dc473: jmp    0x1407dcc02
0x7dc478: lea    rdx,[rip+0xef0ec9]        # 0x1416cd348 ; cstring='Sorting creature variations...'
0x7dc47f: lea    rcx,[rbp-0x38]
0x7dc483: call   0x140069780
0x7dc488: nop
0x7dc489: xor    r9d,r9d
0x7dc48c: lea    rdx,[rbp-0x38]
0x7dc490: lea    rcx,[rip+0x1e903d9]        # 0x14266c870
0x7dc497: call   0x140af3400
0x7dc49c: nop
0x7dc49d: jmp    0x1407dcc02
0x7dc4a2: lea    rdx,[rip+0xef0ebf]        # 0x1416cd368 ; cstring='Sorting creatures...'
0x7dc4a9: lea    rcx,[rbp-0x38]
0x7dc4ad: call   0x140069780
0x7dc4b2: nop
0x7dc4b3: xor    r9d,r9d
0x7dc4b6: lea    rdx,[rbp-0x38]
0x7dc4ba: lea    rcx,[rip+0x1e903af]        # 0x14266c870
0x7dc4c1: call   0x140af3400
0x7dc4c6: nop
0x7dc4c7: jmp    0x1407dcc02
0x7dc4cc: lea    rdx,[rip+0xef0b65]        # 0x1416cd038 ; cstring='Sorting entities...'
0x7dc4d3: lea    rcx,[rbp-0x38]
0x7dc4d7: call   0x140069780
0x7dc4dc: nop
0x7dc4dd: xor    r9d,r9d
0x7dc4e0: lea    rdx,[rbp-0x38]
0x7dc4e4: lea    rcx,[rip+0x1e90385]        # 0x14266c870
0x7dc4eb: call   0x140af3400
0x7dc4f0: nop
0x7dc4f1: jmp    0x1407dcc02
0x7dc4f6: lea    rdx,[rip+0xef0b53]        # 0x1416cd050 ; cstring='Sorting languages...'
0x7dc4fd: lea    rcx,[rbp-0x38]
0x7dc501: call   0x140069780
0x7dc506: nop
0x7dc507: xor    r9d,r9d
0x7dc50a: lea    rdx,[rbp-0x38]
0x7dc50e: lea    rcx,[rip+0x1e9035b]        # 0x14266c870
0x7dc515: call   0x140af3400
0x7dc51a: nop
0x7dc51b: jmp    0x1407dcc02
0x7dc520: lea    rdx,[rip+0xef0ae1]        # 0x1416cd008 ; cstring='Sorting descriptors...'
0x7dc527: lea    rcx,[rbp-0x38]
0x7dc52b: call   0x140069780
0x7dc530: nop
0x7dc531: xor    r9d,r9d
0x7dc534: lea    rdx,[rbp-0x38]
0x7dc538: lea    rcx,[rip+0x1e90331]        # 0x14266c870
0x7dc53f: call   0x140af3400
0x7dc544: nop
0x7dc545: jmp    0x1407dcc02
0x7dc54a: lea    rdx,[rip+0xef0acf]        # 0x1416cd020 ; cstring='Sorting reactions...'
0x7dc551: lea    rcx,[rbp-0x38]
0x7dc555: call   0x140069780
0x7dc55a: nop
0x7dc55b: xor    r9d,r9d
0x7dc55e: lea    rdx,[rbp-0x38]
0x7dc562: lea    rcx,[rip+0x1e90307]        # 0x14266c870
0x7dc569: call   0x140af3400
0x7dc56e: nop
0x7dc56f: jmp    0x1407dcc02
0x7dc574: lea    rdx,[rip+0xef0b1d]        # 0x1416cd098 ; cstring='Sorting interactions...'
0x7dc57b: lea    rcx,[rbp-0x38]
0x7dc57f: call   0x140069780
0x7dc584: nop
0x7dc585: xor    r9d,r9d
0x7dc588: lea    rdx,[rbp-0x38]
0x7dc58c: lea    rcx,[rip+0x1e902dd]        # 0x14266c870
0x7dc593: call   0x140af3400
0x7dc598: nop
0x7dc599: jmp    0x1407dcc02
0x7dc59e: lea    rdx,[rip+0xef0b0b]        # 0x1416cd0b0 ; cstring='Sorting music...'
0x7dc5a5: lea    rcx,[rbp-0x38]
0x7dc5a9: call   0x140069780
0x7dc5ae: nop
0x7dc5af: xor    r9d,r9d
0x7dc5b2: lea    rdx,[rbp-0x38]
0x7dc5b6: lea    rcx,[rip+0x1e902b3]        # 0x14266c870
0x7dc5bd: call   0x140af3400
0x7dc5c2: nop
0x7dc5c3: jmp    0x1407dcc02
0x7dc5c8: lea    rdx,[rip+0xef0a99]        # 0x1416cd068 ; cstring='Sorting sounds...'
0x7dc5cf: lea    rcx,[rbp-0x38]
0x7dc5d3: call   0x140069780
0x7dc5d8: nop
0x7dc5d9: xor    r9d,r9d
0x7dc5dc: lea    rdx,[rbp-0x38]
0x7dc5e0: lea    rcx,[rip+0x1e90289]        # 0x14266c870
0x7dc5e7: call   0x140af3400
0x7dc5ec: nop
0x7dc5ed: jmp    0x1407dcc02
0x7dc5f2: lea    rdx,[rip+0xef0a87]        # 0x1416cd080 ; cstring='Processing languages...'
0x7dc5f9: lea    rcx,[rbp-0x38]
0x7dc5fd: call   0x140069780
0x7dc602: nop
0x7dc603: xor    r9d,r9d
0x7dc606: lea    rdx,[rbp-0x38]
0x7dc60a: lea    rcx,[rip+0x1e9025f]        # 0x14266c870
0x7dc611: call   0x140af3400
0x7dc616: nop
0x7dc617: jmp    0x1407dcc02
0x7dc61c: lea    rdx,[rip+0xef0ad5]        # 0x1416cd0f8 ; cstring='Processing inorganics...'
0x7dc623: lea    rcx,[rbp-0x38]
0x7dc627: call   0x140069780
0x7dc62c: nop
0x7dc62d: xor    r9d,r9d
0x7dc630: lea    rdx,[rbp-0x38]
0x7dc634: lea    rcx,[rip+0x1e90235]        # 0x14266c870
0x7dc63b: call   0x140af3400
0x7dc640: nop
0x7dc641: jmp    0x1407dcc02
0x7dc646: lea    rdx,[rip+0xef0acb]        # 0x1416cd118 ; cstring='Processing plants...'
0x7dc64d: lea    rcx,[rbp-0x38]
0x7dc651: call   0x140069780
0x7dc656: nop
0x7dc657: xor    r9d,r9d
0x7dc65a: lea    rdx,[rbp-0x38]
0x7dc65e: lea    rcx,[rip+0x1e9020b]        # 0x14266c870
0x7dc665: call   0x140af3400
0x7dc66a: nop
0x7dc66b: jmp    0x1407dcc02
0x7dc670: lea    rdx,[rip+0xef0a51]        # 0x1416cd0c8 ; cstring='Processing items...'
0x7dc677: lea    rcx,[rbp-0x38]
0x7dc67b: call   0x140069780
0x7dc680: nop
0x7dc681: xor    r9d,r9d
0x7dc684: lea    rdx,[rbp-0x38]
0x7dc688: lea    rcx,[rip+0x1e901e1]        # 0x14266c870
0x7dc68f: call   0x140af3400
0x7dc694: nop
0x7dc695: jmp    0x1407dcc02
0x7dc69a: lea    rdx,[rip+0xef0a3f]        # 0x1416cd0e0 ; cstring='Processing creatures...'
0x7dc6a1: lea    rcx,[rbp-0x38]
0x7dc6a5: call   0x140069780
0x7dc6aa: nop
0x7dc6ab: xor    r9d,r9d
0x7dc6ae: lea    rdx,[rbp-0x38]
0x7dc6b2: lea    rcx,[rip+0x1e901b7]        # 0x14266c870
0x7dc6b9: call   0x140af3400
0x7dc6be: nop
0x7dc6bf: jmp    0x1407dcc02
0x7dc6c4: lea    rdx,[rip+0xef0a9d]        # 0x1416cd168 ; cstring='Processing entities...'
0x7dc6cb: lea    rcx,[rbp-0x38]
0x7dc6cf: call   0x140069780
0x7dc6d4: nop
0x7dc6d5: xor    r9d,r9d
0x7dc6d8: lea    rdx,[rbp-0x38]
0x7dc6dc: lea    rcx,[rip+0x1e9018d]        # 0x14266c870
0x7dc6e3: call   0x140af3400
0x7dc6e8: nop
0x7dc6e9: jmp    0x1407dcc02
0x7dc6ee: lea    rdx,[rip+0xef0a8b]        # 0x1416cd180 ; cstring='Processing reactions...'
0x7dc6f5: lea    rcx,[rbp-0x38]
0x7dc6f9: call   0x140069780
0x7dc6fe: nop
0x7dc6ff: xor    r9d,r9d
0x7dc702: lea    rdx,[rbp-0x38]
0x7dc706: lea    rcx,[rip+0x1e90163]        # 0x14266c870
0x7dc70d: call   0x140af3400
0x7dc712: nop
0x7dc713: jmp    0x1407dcc02
0x7dc718: lea    rdx,[rip+0xef0a11]        # 0x1416cd130 ; cstring='Processing interactions...'
0x7dc71f: lea    rcx,[rbp-0x38]
0x7dc723: call   0x140069780
0x7dc728: nop
0x7dc729: xor    r9d,r9d
0x7dc72c: lea    rdx,[rbp-0x38]
0x7dc730: lea    rcx,[rip+0x1e90139]        # 0x14266c870
0x7dc737: call   0x140af3400
0x7dc73c: nop
0x7dc73d: jmp    0x1407dcc02
0x7dc742: lea    rdx,[rip+0xef0a07]        # 0x1416cd150 ; cstring='Processing music...'
0x7dc749: lea    rcx,[rbp-0x38]
0x7dc74d: call   0x140069780
0x7dc752: nop
0x7dc753: xor    r9d,r9d
0x7dc756: lea    rdx,[rbp-0x38]
0x7dc75a: lea    rcx,[rip+0x1e9010f]        # 0x14266c870
0x7dc761: call   0x140af3400
0x7dc766: nop
0x7dc767: jmp    0x1407dcc02
0x7dc76c: lea    rdx,[rip+0xef0715]        # 0x1416cce88 ; cstring='Processing sounds...'
0x7dc773: lea    rcx,[rbp-0x38]
0x7dc777: call   0x140069780
0x7dc77c: nop
0x7dc77d: xor    r9d,r9d
0x7dc780: lea    rdx,[rbp-0x38]
0x7dc784: lea    rcx,[rip+0x1e900e5]        # 0x14266c870
0x7dc78b: call   0x140af3400
0x7dc790: nop
0x7dc791: jmp    0x1407dcc02
0x7dc796: lea    rdx,[rip+0xe58673]        # 0x141634e10 ; cstring='Finalizing languages...'
0x7dc79d: lea    rcx,[rbp-0x38]
0x7dc7a1: call   0x140069780
0x7dc7a6: nop
0x7dc7a7: xor    r9d,r9d
0x7dc7aa: lea    rdx,[rbp-0x38]
0x7dc7ae: lea    rcx,[rip+0x1e900bb]        # 0x14266c870
0x7dc7b5: call   0x140af3400
0x7dc7ba: nop
0x7dc7bb: jmp    0x1407dcc02
0x7dc7c0: lea    rdx,[rip+0xe58729]        # 0x141634ef0 ; cstring='Finalizing descriptors...'
0x7dc7c7: lea    rcx,[rbp-0x38]
0x7dc7cb: call   0x140069780
0x7dc7d0: nop
0x7dc7d1: xor    r9d,r9d
0x7dc7d4: lea    rdx,[rbp-0x38]
0x7dc7d8: lea    rcx,[rip+0x1e90091]        # 0x14266c870
0x7dc7df: call   0x140af3400
0x7dc7e4: nop
0x7dc7e5: jmp    0x1407dcc02
0x7dc7ea: lea    rdx,[rip+0xe5871f]        # 0x141634f10 ; cstring='Finalizing material templates...'
0x7dc7f1: lea    rcx,[rbp-0x38]
0x7dc7f5: call   0x140069780
0x7dc7fa: nop
0x7dc7fb: xor    r9d,r9d
0x7dc7fe: lea    rdx,[rbp-0x38]
0x7dc802: lea    rcx,[rip+0x1e90067]        # 0x14266c870
0x7dc809: call   0x140af3400
0x7dc80e: nop
0x7dc80f: jmp    0x1407dcc02
0x7dc814: lea    rdx,[rip+0xe5871d]        # 0x141634f38 ; cstring='Finalizing inorganics...'
0x7dc81b: lea    rcx,[rbp-0x38]
0x7dc81f: call   0x140069780
0x7dc824: nop
0x7dc825: xor    r9d,r9d
0x7dc828: lea    rdx,[rbp-0x38]
0x7dc82c: lea    rcx,[rip+0x1e9003d]        # 0x14266c870
0x7dc833: call   0x140af3400
0x7dc838: nop
0x7dc839: jmp    0x1407dcc02
0x7dc83e: lea    rdx,[rip+0xe58713]        # 0x141634f58 ; cstring='Finalizing plants...'
0x7dc845: lea    rcx,[rbp-0x38]
0x7dc849: call   0x140069780
0x7dc84e: nop
0x7dc84f: xor    r9d,r9d
0x7dc852: lea    rdx,[rbp-0x38]
0x7dc856: lea    rcx,[rip+0x1e90013]        # 0x14266c870
0x7dc85d: call   0x140af3400
0x7dc862: nop
0x7dc863: jmp    0x1407dcc02
0x7dc868: lea    rdx,[rip+0xe58611]        # 0x141634e80 ; cstring='Finalizing tissue templates...'
0x7dc86f: lea    rcx,[rbp-0x38]
0x7dc873: call   0x140069780
0x7dc878: nop
0x7dc879: xor    r9d,r9d
0x7dc87c: lea    rdx,[rbp-0x38]
0x7dc880: lea    rcx,[rip+0x1e8ffe9]        # 0x14266c870
0x7dc887: call   0x140af3400
0x7dc88c: nop
0x7dc88d: jmp    0x1407dcc02
0x7dc892: lea    rdx,[rip+0xe58607]        # 0x141634ea0 ; cstring='Finalizing items...'
0x7dc899: lea    rcx,[rbp-0x38]
0x7dc89d: call   0x140069780
0x7dc8a2: nop
0x7dc8a3: xor    r9d,r9d
0x7dc8a6: lea    rdx,[rbp-0x38]
0x7dc8aa: lea    rcx,[rip+0x1e8ffbf]        # 0x14266c870
0x7dc8b1: call   0x140af3400
0x7dc8b6: nop
0x7dc8b7: jmp    0x1407dcc02
0x7dc8bc: lea    rdx,[rip+0xe585f5]        # 0x141634eb8 ; cstring='Finalizing buildings...'
0x7dc8c3: lea    rcx,[rbp-0x38]
0x7dc8c7: call   0x140069780
0x7dc8cc: nop
0x7dc8cd: xor    r9d,r9d
0x7dc8d0: lea    rdx,[rbp-0x38]
0x7dc8d4: lea    rcx,[rip+0x1e8ff95]        # 0x14266c870
0x7dc8db: call   0x140af3400
0x7dc8e0: nop
0x7dc8e1: jmp    0x1407dcc02
0x7dc8e6: lea    rdx,[rip+0xe585e3]        # 0x141634ed0 ; cstring='Finalizing body detail plans...'
0x7dc8ed: lea    rcx,[rbp-0x38]
0x7dc8f1: call   0x140069780
0x7dc8f6: nop
0x7dc8f7: xor    r9d,r9d
0x7dc8fa: lea    rdx,[rbp-0x38]
0x7dc8fe: lea    rcx,[rip+0x1e8ff6b]        # 0x14266c870
0x7dc905: call   0x140af3400
0x7dc90a: nop
0x7dc90b: jmp    0x1407dcc02
0x7dc910: lea    rdx,[rip+0xe58921]        # 0x141635238 ; cstring='Finalizing creature variations...'
0x7dc917: lea    rcx,[rbp-0x38]
0x7dc91b: call   0x140069780
0x7dc920: nop
0x7dc921: xor    r9d,r9d
0x7dc924: lea    rdx,[rbp-0x38]
0x7dc928: lea    rcx,[rip+0x1e8ff41]        # 0x14266c870
0x7dc92f: call   0x140af3400
0x7dc934: nop
0x7dc935: jmp    0x1407dcc02
0x7dc93a: lea    rdx,[rip+0xe5891f]        # 0x141635260 ; cstring='Finalizing creatures...'
0x7dc941: lea    rcx,[rbp-0x38]
0x7dc945: call   0x140069780
0x7dc94a: nop
0x7dc94b: xor    r9d,r9d
0x7dc94e: lea    rdx,[rbp-0x38]
0x7dc952: lea    rcx,[rip+0x1e8ff17]        # 0x14266c870
0x7dc959: call   0x140af3400
0x7dc95e: nop
0x7dc95f: jmp    0x1407dcc02
0x7dc964: lea    rdx,[rip+0xe5890d]        # 0x141635278 ; cstring='Finalizing entities...'
0x7dc96b: lea    rcx,[rbp-0x38]
0x7dc96f: call   0x140069780
0x7dc974: nop
0x7dc975: xor    r9d,r9d
0x7dc978: lea    rdx,[rbp-0x38]
0x7dc97c: lea    rcx,[rip+0x1e8feed]        # 0x14266c870
0x7dc983: call   0x140af3400
0x7dc988: nop
0x7dc989: jmp    0x1407dcc02
0x7dc98e: lea    rdx,[rip+0xe588fb]        # 0x141635290 ; cstring='Finalizing reactions...'
0x7dc995: lea    rcx,[rbp-0x38]
0x7dc999: call   0x140069780
0x7dc99e: nop
0x7dc99f: xor    r9d,r9d
0x7dc9a2: lea    rdx,[rbp-0x38]
0x7dc9a6: lea    rcx,[rip+0x1e8fec3]        # 0x14266c870
0x7dc9ad: call   0x140af3400
0x7dc9b2: nop
0x7dc9b3: jmp    0x1407dcc02
0x7dc9b8: lea    rdx,[rip+0xe58801]        # 0x1416351c0 ; cstring='Finalizing interactions...'
0x7dc9bf: lea    rcx,[rbp-0x38]
0x7dc9c3: call   0x140069780
0x7dc9c8: nop
0x7dc9c9: xor    r9d,r9d
0x7dc9cc: lea    rdx,[rbp-0x38]
0x7dc9d0: lea    rcx,[rip+0x1e8fe99]        # 0x14266c870
0x7dc9d7: call   0x140af3400
0x7dc9dc: nop
0x7dc9dd: jmp    0x1407dcc02
0x7dc9e2: lea    rdx,[rip+0xe587f7]        # 0x1416351e0 ; cstring='Preparing material data...'
0x7dc9e9: lea    rcx,[rbp-0x38]
0x7dc9ed: call   0x140069780
0x7dc9f2: nop
0x7dc9f3: xor    r9d,r9d
0x7dc9f6: lea    rdx,[rbp-0x38]
0x7dc9fa: lea    rcx,[rip+0x1e8fe6f]        # 0x14266c870
0x7dca01: call   0x140af3400
0x7dca06: nop
0x7dca07: jmp    0x1407dcc02
0x7dca0c: lea    rdx,[rip+0xef048d]        # 0x1416ccea0 ; cstring='Generating inorganics...'
0x7dca13: lea    rcx,[rbp-0x38]
0x7dca17: call   0x140069780
0x7dca1c: nop
0x7dca1d: xor    r9d,r9d
0x7dca20: lea    rdx,[rbp-0x38]
0x7dca24: lea    rcx,[rip+0x1e8fe45]        # 0x14266c870
0x7dca2b: call   0x140af3400
0x7dca30: nop
0x7dca31: jmp    0x1407dcc02
0x7dca36: lea    rdx,[rip+0xef041b]        # 0x1416cce58 ; cstring='Generating plants...'
0x7dca3d: lea    rcx,[rbp-0x38]
0x7dca41: call   0x140069780
0x7dca46: nop
0x7dca47: xor    r9d,r9d
0x7dca4a: lea    rdx,[rbp-0x38]
0x7dca4e: lea    rcx,[rip+0x1e8fe1b]        # 0x14266c870
0x7dca55: call   0x140af3400
0x7dca5a: nop
0x7dca5b: jmp    0x1407dcc02
0x7dca60: lea    rdx,[rip+0xef0409]        # 0x1416cce70 ; cstring='Generating items...'
0x7dca67: lea    rcx,[rbp-0x38]
0x7dca6b: call   0x140069780
0x7dca70: nop
0x7dca71: xor    r9d,r9d
0x7dca74: lea    rdx,[rbp-0x38]
0x7dca78: lea    rcx,[rip+0x1e8fdf1]        # 0x14266c870
0x7dca7f: call   0x140af3400
0x7dca84: nop
0x7dca85: jmp    0x1407dcc02
0x7dca8a: lea    rdx,[rip+0xef0467]        # 0x1416ccef8 ; cstring='Generating creatures...'
0x7dca91: lea    rcx,[rbp-0x38]
0x7dca95: call   0x140069780
0x7dca9a: nop
0x7dca9b: xor    r9d,r9d
0x7dca9e: lea    rdx,[rbp-0x38]
0x7dcaa2: lea    rcx,[rip+0x1e8fdc7]        # 0x14266c870
0x7dcaa9: call   0x140af3400
0x7dcaae: nop
0x7dcaaf: jmp    0x1407dcc02
0x7dcab4: lea    rdx,[rip+0xef0455]        # 0x1416ccf10 ; cstring='Generating entities...'
0x7dcabb: lea    rcx,[rbp-0x38]
0x7dcabf: call   0x140069780
0x7dcac4: nop
0x7dcac5: xor    r9d,r9d
0x7dcac8: lea    rdx,[rbp-0x38]
0x7dcacc: lea    rcx,[rip+0x1e8fd9d]        # 0x14266c870
0x7dcad3: call   0x140af3400
0x7dcad8: nop
0x7dcad9: jmp    0x1407dcc02
0x7dcade: lea    rdx,[rip+0xef03db]        # 0x1416ccec0 ; cstring='Generating reactions...'
0x7dcae5: lea    rcx,[rbp-0x38]
0x7dcae9: call   0x140069780
0x7dcaee: nop
0x7dcaef: xor    r9d,r9d
0x7dcaf2: lea    rdx,[rbp-0x38]
0x7dcaf6: lea    rcx,[rip+0x1e8fd73]        # 0x14266c870
0x7dcafd: call   0x140af3400
0x7dcb02: nop
0x7dcb03: jmp    0x1407dcc02
0x7dcb08: lea    rdx,[rip+0xef03c9]        # 0x1416cced8 ; cstring='Generating interactions...'
0x7dcb0f: lea    rcx,[rbp-0x38]
0x7dcb13: call   0x140069780
0x7dcb18: nop
0x7dcb19: xor    r9d,r9d
0x7dcb1c: lea    rdx,[rbp-0x38]
0x7dcb20: lea    rcx,[rip+0x1e8fd49]        # 0x14266c870
0x7dcb27: call   0x140af3400
0x7dcb2c: nop
0x7dcb2d: jmp    0x1407dcc02
0x7dcb32: lea    rdx,[rip+0xef041f]        # 0x1416ccf58 ; cstring='Finalizing generated objects...'
0x7dcb39: lea    rcx,[rbp-0x38]
0x7dcb3d: call   0x140069780
0x7dcb42: nop
0x7dcb43: xor    r9d,r9d
0x7dcb46: lea    rdx,[rbp-0x38]
0x7dcb4a: lea    rcx,[rip+0x1e8fd1f]        # 0x14266c870
0x7dcb51: call   0x140af3400
0x7dcb56: nop
0x7dcb57: jmp    0x1407dcc02
0x7dcb5c: mov    ecx,DWORD PTR [rip+0x1e84376]        # 0x142660ed8
0x7dcb62: test   ecx,ecx
0x7dcb64: js     0x1407dcbb6
0x7dcb66: mov    rax,QWORD PTR [rip+0x1e843fb]        # 0x142660f68
0x7dcb6d: sub    rax,QWORD PTR [rip+0x1e843ec]        # 0x142660f60
0x7dcb74: sar    rax,0x3
0x7dcb78: cmp    ecx,eax
0x7dcb7a: jge    0x1407dcbb6
0x7dcb7c: lea    rdx,[rip+0xef03f5]        # 0x1416ccf78 ; cstring='Preparing graphics...  '
0x7dcb83: lea    rcx,[rbp-0x38]
0x7dcb87: call   0x140069780
0x7dcb8c: nop
0x7dcb8d: xor    r9d,r9d
0x7dcb90: lea    rdx,[rbp-0x38]
0x7dcb94: lea    rcx,[rip+0x1e8fcd5]        # 0x14266c870
0x7dcb9b: call   0x140af3400
0x7dcba0: nop
0x7dcba1: lea    rcx,[rbp-0x38]
0x7dcba5: call   0x140070e80
0x7dcbaa: movsxd rax,DWORD PTR [rip+0x1e84327]        # 0x142660ed8
0x7dcbb1: jmp    0x1407dc2b5
0x7dcbb6: lea    rdx,[rip+0xef03bb]        # 0x1416ccf78 ; cstring='Preparing graphics...  '
0x7dcbbd: lea    rcx,[rbp-0x38]
0x7dcbc1: call   0x140069780
0x7dcbc6: nop
0x7dcbc7: xor    r9d,r9d
0x7dcbca: lea    rdx,[rbp-0x38]
0x7dcbce: lea    rcx,[rip+0x1e8fc9b]        # 0x14266c870
0x7dcbd5: call   0x140af3400
0x7dcbda: nop
0x7dcbdb: jmp    0x1407dcc02
0x7dcbdd: lea    rdx,[rip+0xe43ebc]        # 0x141620aa0 ; cstring='Finishing...'
0x7dcbe4: lea    rcx,[rbp-0x38]
0x7dcbe8: call   0x140069780
0x7dcbed: nop
0x7dcbee: xor    r9d,r9d
0x7dcbf1: lea    rdx,[rbp-0x38]
0x7dcbf5: lea    rcx,[rip+0x1e8fc74]        # 0x14266c870
0x7dcbfc: call   0x140af3400
0x7dcc01: nop
0x7dcc02: lea    rcx,[rbp-0x38]
0x7dcc06: call   0x140070e80
0x7dcc0b: cmp    BYTE PTR [rip+0x1e8427a],0x0        # 0x142660e8c
0x7dcc12: jne    0x1407dcc21
0x7dcc14: cmp    BYTE PTR [rip+0x1e84272],0x0        # 0x142660e8d
0x7dcc1b: je     0x1407dd901
0x7dcc21: mov    r9d,r14d
0x7dcc24: mov    r8d,ebx
0x7dcc27: mov    edx,esi
0x7dcc29: lea    rcx,[rip+0x1e84250]        # 0x142660e80
0x7dcc30: call   0x1407e0450
0x7dcc35: jmp    0x1407dd901
0x7dcc3a: lea    rdx,[rip+0xe43d3f]        # 0x141620980 ; cstring='Allocating space...'
0x7dcc41: lea    rcx,[rbp-0x38]
0x7dcc45: call   0x140069780
0x7dcc4a: nop
0x7dcc4b: xor    r9d,r9d
0x7dcc4e: lea    rdx,[rbp-0x38]
0x7dcc52: lea    rcx,[rip+0x1e8fc17]        # 0x14266c870
0x7dcc59: call   0x140af3400
0x7dcc5e: nop
0x7dcc5f: jmp    0x1407dd8f8
0x7dcc64: lea    rdx,[rip+0xef02bd]        # 0x1416ccf28 ; cstring='Loading items...'
0x7dcc6b: lea    rcx,[rbp-0x38]
0x7dcc6f: call   0x140069780
0x7dcc74: nop
0x7dcc75: xor    r9d,r9d
0x7dcc78: lea    rdx,[rbp-0x38]
0x7dcc7c: lea    rcx,[rip+0x1e8fbed]        # 0x14266c870
0x7dcc83: call   0x140af3400
0x7dcc88: nop
0x7dcc89: jmp    0x1407dd8f8
0x7dcc8e: lea    rdx,[rip+0xef0d5b]        # 0x1416cd9f0 ; cstring='Loading units...'
0x7dcc95: lea    rcx,[rbp-0x38]
0x7dcc99: call   0x140069780
0x7dcc9e: nop
0x7dcc9f: xor    r9d,r9d
0x7dcca2: lea    rdx,[rbp-0x38]
0x7dcca6: lea    rcx,[rip+0x1e8fbc3]        # 0x14266c870
0x7dccad: call   0x140af3400
0x7dccb2: nop
0x7dccb3: jmp    0x1407dd8f8
0x7dccb8: lea    rdx,[rip+0xef0d99]        # 0x1416cda58 ; cstring='Loading jobs...'
0x7dccbf: lea    rcx,[rbp-0x38]
0x7dccc3: call   0x140069780
0x7dccc8: nop
0x7dccc9: xor    r9d,r9d
0x7dcccc: lea    rdx,[rbp-0x38]
0x7dccd0: lea    rcx,[rip+0x1e8fb99]        # 0x14266c870
0x7dccd7: call   0x140af3400
0x7dccdc: nop
0x7dccdd: jmp    0x1407dd8f8
0x7dcce2: xorps  xmm0,xmm0
0x7dcce5: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dcce9: mov    ecx,0x20
0x7dccee: call   0x140071e00
0x7dccf3: mov    QWORD PTR [rbp-0x38],rax
0x7dccf7: movdqa xmm0,XMMWORD PTR [rip+0xfcee11]        # 0x1417abb10
0x7dccff: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dcd04: movups xmm0,XMMWORD PTR [rip+0xef0d5d]        # 0x1416cda68 ; vector='Loading schedule'
0x7dcd0b: movups XMMWORD PTR [rax],xmm0
0x7dcd0e: mov    ecx,DWORD PTR [rip+0xef0d64]        # 0x1416cda78 ; cstring='s...'
0x7dcd14: mov    DWORD PTR [rax+0x10],ecx
0x7dcd17: mov    BYTE PTR [rax+0x14],0x0
0x7dcd1b: xor    r9d,r9d
0x7dcd1e: lea    rdx,[rbp-0x38]
0x7dcd22: lea    rcx,[rip+0x1e8fb47]        # 0x14266c870
0x7dcd29: call   0x140af3400
0x7dcd2e: nop
0x7dcd2f: jmp    0x1407dc1fb
0x7dcd34: xorps  xmm0,xmm0
0x7dcd37: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dcd3b: mov    ecx,0x20
0x7dcd40: call   0x140071e00
0x7dcd45: mov    QWORD PTR [rbp-0x38],rax
0x7dcd49: movdqa xmm0,XMMWORD PTR [rip+0xfceddf]        # 0x1417abb30
0x7dcd51: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dcd56: movups xmm0,XMMWORD PTR [rip+0xef0ccb]        # 0x1416cda28 ; vector='Loading projecti'
0x7dcd5d: movups XMMWORD PTR [rax],xmm0
0x7dcd60: mov    ecx,DWORD PTR [rip+0xef0cd2]        # 0x1416cda38 ; cstring='les...'
0x7dcd66: mov    DWORD PTR [rax+0x10],ecx
0x7dcd69: movzx  ecx,WORD PTR [rip+0xef0ccc]        # 0x1416cda3c ; cstring='..'
0x7dcd70: mov    WORD PTR [rax+0x14],cx
0x7dcd74: mov    BYTE PTR [rax+0x16],0x0
0x7dcd78: xor    r9d,r9d
0x7dcd7b: lea    rdx,[rbp-0x38]
0x7dcd7f: lea    rcx,[rip+0x1e8faea]        # 0x14266c870
0x7dcd86: call   0x140af3400
0x7dcd8b: nop
0x7dcd8c: jmp    0x1407dc1fb
0x7dcd91: xorps  xmm0,xmm0
0x7dcd94: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dcd98: mov    ecx,0x20
0x7dcd9d: call   0x140071e00
0x7dcda2: mov    QWORD PTR [rbp-0x38],rax
0x7dcda6: movdqa xmm0,XMMWORD PTR [rip+0xfced62]        # 0x1417abb10
0x7dcdae: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dcdb3: movups xmm0,XMMWORD PTR [rip+0xef0186]        # 0x1416ccf40 ; vector='Loading building'
0x7dcdba: movups XMMWORD PTR [rax],xmm0
0x7dcdbd: mov    ecx,DWORD PTR [rip+0xef018d]        # 0x1416ccf50 ; cstring='s...'
0x7dcdc3: mov    DWORD PTR [rax+0x10],ecx
0x7dcdc6: mov    BYTE PTR [rax+0x14],0x0
0x7dcdca: xor    r9d,r9d
0x7dcdcd: lea    rdx,[rbp-0x38]
0x7dcdd1: lea    rcx,[rip+0x1e8fa98]        # 0x14266c870
0x7dcdd8: call   0x140af3400
0x7dcddd: nop
0x7dcdde: jmp    0x1407dc1fb
0x7dcde3: xorps  xmm0,xmm0
0x7dcde6: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dcdea: mov    ecx,0x20
0x7dcdef: call   0x140071e00
0x7dcdf4: mov    QWORD PTR [rbp-0x38],rax
0x7dcdf8: movdqa xmm0,XMMWORD PTR [rip+0xfced00]        # 0x1417abb00
0x7dce00: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dce05: movups xmm0,XMMWORD PTR [rip+0xef0c34]        # 0x1416cda40 ; vector='Loading machines'
0x7dce0c: movups XMMWORD PTR [rax],xmm0
0x7dce0f: movzx  ecx,WORD PTR [rip+0xef0c3a]        # 0x1416cda50 ; cstring='...'
0x7dce16: mov    WORD PTR [rax+0x10],cx
0x7dce1a: movzx  ecx,BYTE PTR [rip+0xef0c31]        # 0x1416cda52 ; cstring='.'
0x7dce21: mov    BYTE PTR [rax+0x12],cl
0x7dce24: mov    BYTE PTR [rax+0x13],0x0
0x7dce28: xor    r9d,r9d
0x7dce2b: lea    rdx,[rbp-0x38]
0x7dce2f: lea    rcx,[rip+0x1e8fa3a]        # 0x14266c870
0x7dce36: call   0x140af3400
0x7dce3b: nop
0x7dce3c: jmp    0x1407dc1fb
0x7dce41: xorps  xmm0,xmm0
0x7dce44: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dce48: mov    ecx,0x20
0x7dce4d: call   0x140071e00
0x7dce52: mov    QWORD PTR [rbp-0x38],rax
0x7dce56: movdqa xmm0,XMMWORD PTR [rip+0xfcecd2]        # 0x1417abb30
0x7dce5e: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dce63: movups xmm0,XMMWORD PTR [rip+0xef08ce]        # 0x1416cd738 ; vector='Loading flow gui'
0x7dce6a: movups XMMWORD PTR [rax],xmm0
0x7dce6d: mov    ecx,DWORD PTR [rip+0xef08d5]        # 0x1416cd748 ; cstring='des...'
0x7dce73: mov    DWORD PTR [rax+0x10],ecx
0x7dce76: movzx  ecx,WORD PTR [rip+0xef08cf]        # 0x1416cd74c ; cstring='..'
0x7dce7d: mov    WORD PTR [rax+0x14],cx
0x7dce81: mov    BYTE PTR [rax+0x16],0x0
0x7dce85: xor    r9d,r9d
0x7dce88: lea    rdx,[rbp-0x38]
0x7dce8c: lea    rcx,[rip+0x1e8f9dd]        # 0x14266c870
0x7dce93: call   0x140af3400
0x7dce98: nop
0x7dce99: jmp    0x1407dc1fb
0x7dce9e: xorps  xmm0,xmm0
0x7dcea1: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dcea5: mov    ecx,0x20
0x7dceaa: call   0x140071e00
0x7dceaf: mov    QWORD PTR [rbp-0x38],rax
0x7dceb3: movdqa xmm0,XMMWORD PTR [rip+0xfcec35]        # 0x1417abaf0
0x7dcebb: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dcec0: movups xmm0,XMMWORD PTR [rip+0xef0889]        # 0x1416cd750 ; vector='Loading effects.'
0x7dcec7: movups XMMWORD PTR [rax],xmm0
0x7dceca: movzx  ecx,WORD PTR [rip+0xef088f]        # 0x1416cd760 ; cstring='..'
0x7dced1: mov    WORD PTR [rax+0x10],cx
0x7dced5: mov    BYTE PTR [rax+0x12],0x0
0x7dced9: xor    r9d,r9d
0x7dcedc: lea    rdx,[rbp-0x38]
0x7dcee0: lea    rcx,[rip+0x1e8f989]        # 0x14266c870
0x7dcee7: call   0x140af3400
0x7dceec: nop
0x7dceed: jmp    0x1407dc1fb
0x7dcef2: xorps  xmm0,xmm0
0x7dcef5: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dcef9: mov    ecx,0x20
0x7dcefe: call   0x140071e00
0x7dcf03: mov    QWORD PTR [rbp-0x38],rax
0x7dcf07: movdqa xmm0,XMMWORD PTR [rip+0xfcebf1]        # 0x1417abb00
0x7dcf0f: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dcf14: movups xmm0,XMMWORD PTR [rip+0xef00b5]        # 0x1416ccfd0 ; vector='Loading entities'
0x7dcf1b: movups XMMWORD PTR [rax],xmm0
0x7dcf1e: movzx  ecx,WORD PTR [rip+0xef00bb]        # 0x1416ccfe0 ; cstring='...'
0x7dcf25: mov    WORD PTR [rax+0x10],cx
0x7dcf29: movzx  ecx,BYTE PTR [rip+0xef00b2]        # 0x1416ccfe2 ; cstring='.'
0x7dcf30: mov    BYTE PTR [rax+0x12],cl
0x7dcf33: mov    BYTE PTR [rax+0x13],0x0
0x7dcf37: xor    r9d,r9d
0x7dcf3a: lea    rdx,[rbp-0x38]
0x7dcf3e: lea    rcx,[rip+0x1e8f92b]        # 0x14266c870
0x7dcf45: call   0x140af3400
0x7dcf4a: nop
0x7dcf4b: jmp    0x1407dc1fb
0x7dcf50: xorps  xmm0,xmm0
0x7dcf53: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dcf57: mov    ecx,0x30
0x7dcf5c: call   0x140071e00
0x7dcf61: mov    rdx,rax
0x7dcf64: mov    QWORD PTR [rbp-0x38],rax
0x7dcf68: movdqa xmm0,XMMWORD PTR [rip+0xfcec90]        # 0x1417abc00
0x7dcf70: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dcf75: movups xmm0,XMMWORD PTR [rip+0xef077c]        # 0x1416cd6f8 ; vector='Loading local an'
0x7dcf7c: movups XMMWORD PTR [rax],xmm0
0x7dcf7f: movups xmm1,XMMWORD PTR [rip+0xef0782]        # 0x1416cd708 ; vector='imal populations'
0x7dcf86: movups XMMWORD PTR [rax+0x10],xmm1
0x7dcf8a: movzx  ecx,WORD PTR [rip+0xef0787]        # 0x1416cd718 ; cstring='...'
0x7dcf91: mov    WORD PTR [rax+0x20],cx
0x7dcf95: movzx  eax,BYTE PTR [rip+0xef077e]        # 0x1416cd71a ; cstring='.'
0x7dcf9c: mov    BYTE PTR [rdx+0x22],al
0x7dcf9f: mov    BYTE PTR [rdx+0x23],0x0
0x7dcfa3: xor    r9d,r9d
0x7dcfa6: lea    rdx,[rbp-0x38]
0x7dcfaa: lea    rcx,[rip+0x1e8f8bf]        # 0x14266c870
0x7dcfb1: call   0x140af3400
0x7dcfb6: nop
0x7dcfb7: jmp    0x1407dc1fb
0x7dcfbc: xorps  xmm0,xmm0
0x7dcfbf: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dcfc3: mov    ecx,0x20
0x7dcfc8: call   0x140071e00
0x7dcfcd: mov    QWORD PTR [rbp-0x38],rax
0x7dcfd1: movdqa xmm0,XMMWORD PTR [rip+0xfceb07]        # 0x1417abae0
0x7dcfd9: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dcfde: movups xmm0,XMMWORD PTR [rip+0xef073b]        # 0x1416cd720 ; vector='Loading events..'
0x7dcfe5: movups XMMWORD PTR [rax],xmm0
0x7dcfe8: movzx  ecx,BYTE PTR [rip+0xef0741]        # 0x1416cd730 ; cstring='.'
0x7dcfef: mov    BYTE PTR [rax+0x10],cl
0x7dcff2: mov    BYTE PTR [rax+0x11],0x0
0x7dcff6: xor    r9d,r9d
0x7dcff9: lea    rdx,[rbp-0x38]
0x7dcffd: lea    rcx,[rip+0x1e8f86c]        # 0x14266c870
0x7dd004: call   0x140af3400
0x7dd009: nop
0x7dd00a: jmp    0x1407dc1fb
0x7dd00f: xorps  xmm0,xmm0
0x7dd012: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd016: mov    ecx,0x20
0x7dd01b: call   0x140071e00
0x7dd020: mov    QWORD PTR [rbp-0x38],rax
0x7dd024: movdqa xmm0,XMMWORD PTR [rip+0xfcead4]        # 0x1417abb00
0x7dd02c: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd031: movups xmm0,XMMWORD PTR [rip+0xef0768]        # 0x1416cd7a0 ; vector='Loading mandates'
0x7dd038: movups XMMWORD PTR [rax],xmm0
0x7dd03b: movzx  ecx,WORD PTR [rip+0xef076e]        # 0x1416cd7b0 ; cstring='...'
0x7dd042: mov    WORD PTR [rax+0x10],cx
0x7dd046: movzx  ecx,BYTE PTR [rip+0xef0765]        # 0x1416cd7b2 ; cstring='.'
0x7dd04d: mov    BYTE PTR [rax+0x12],cl
0x7dd050: mov    BYTE PTR [rax+0x13],0x0
0x7dd054: xor    r9d,r9d
0x7dd057: lea    rdx,[rbp-0x38]
0x7dd05b: lea    rcx,[rip+0x1e8f80e]        # 0x14266c870
0x7dd062: call   0x140af3400
0x7dd067: nop
0x7dd068: jmp    0x1407dc1fb
0x7dd06d: xorps  xmm0,xmm0
0x7dd070: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd074: mov    ecx,0x20
0x7dd079: call   0x140071e00
0x7dd07e: mov    QWORD PTR [rbp-0x38],rax
0x7dd082: movdqa xmm0,XMMWORD PTR [rip+0xfceaa6]        # 0x1417abb30
0x7dd08a: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd08f: movups xmm0,XMMWORD PTR [rip+0xef0722]        # 0x1416cd7b8 ; vector='Loading work quo'
0x7dd096: movups XMMWORD PTR [rax],xmm0
0x7dd099: mov    ecx,DWORD PTR [rip+0xef0729]        # 0x1416cd7c8 ; cstring='tas...'
0x7dd09f: mov    DWORD PTR [rax+0x10],ecx
0x7dd0a2: movzx  ecx,WORD PTR [rip+0xef0723]        # 0x1416cd7cc ; cstring='..'
0x7dd0a9: mov    WORD PTR [rax+0x14],cx
0x7dd0ad: mov    BYTE PTR [rax+0x16],0x0
0x7dd0b1: xor    r9d,r9d
0x7dd0b4: lea    rdx,[rbp-0x38]
0x7dd0b8: lea    rcx,[rip+0x1e8f7b1]        # 0x14266c870
0x7dd0bf: call   0x140af3400
0x7dd0c4: nop
0x7dd0c5: jmp    0x1407dc1fb
0x7dd0ca: xorps  xmm0,xmm0
0x7dd0cd: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd0d1: mov    ecx,0x20
0x7dd0d6: call   0x140071e00
0x7dd0db: mov    rdx,rax
0x7dd0de: mov    QWORD PTR [rbp-0x38],rax
0x7dd0e2: movdqa xmm0,XMMWORD PTR [rip+0xfcea56]        # 0x1417abb40
0x7dd0ea: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd0ef: movups xmm0,XMMWORD PTR [rip+0xef0672]        # 0x1416cd768 ; vector='Loading world ev'
0x7dd0f6: movups XMMWORD PTR [rax],xmm0
0x7dd0f9: mov    ecx,DWORD PTR [rip+0xef0679]        # 0x1416cd778 ; cstring='ents...'
0x7dd0ff: mov    DWORD PTR [rax+0x10],ecx
0x7dd102: movzx  ecx,WORD PTR [rip+0xef0673]        # 0x1416cd77c ; cstring='...'
0x7dd109: mov    WORD PTR [rax+0x14],cx
0x7dd10d: movzx  eax,BYTE PTR [rip+0xef066a]        # 0x1416cd77e ; cstring='.'
0x7dd114: mov    BYTE PTR [rdx+0x16],al
0x7dd117: mov    BYTE PTR [rdx+0x17],0x0
0x7dd11b: xor    r9d,r9d
0x7dd11e: lea    rdx,[rbp-0x38]
0x7dd122: lea    rcx,[rip+0x1e8f747]        # 0x14266c870
0x7dd129: call   0x140af3400
0x7dd12e: nop
0x7dd12f: jmp    0x1407dc1fb
0x7dd134: xorps  xmm0,xmm0
0x7dd137: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd13b: mov    ecx,0x20
0x7dd140: call   0x140071e00
0x7dd145: mov    rdx,rax
0x7dd148: mov    QWORD PTR [rbp-0x38],rax
0x7dd14c: movdqa xmm0,XMMWORD PTR [rip+0xfcea2c]        # 0x1417abb80
0x7dd154: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd159: movups xmm0,XMMWORD PTR [rip+0xeefe88]        # 0x1416ccfe8 ; vector='Loading coin inf'
0x7dd160: movups XMMWORD PTR [rax],xmm0
0x7dd163: movsd  xmm0,QWORD PTR [rip+0xeefe8d]        # 0x1416ccff8 ; cstring='ormation...'
0x7dd16b: movsd  QWORD PTR [rax+0x10],xmm0
0x7dd170: movzx  ecx,WORD PTR [rip+0xeefe89]        # 0x1416cd000 ; cstring='...'
0x7dd177: mov    WORD PTR [rax+0x18],cx
0x7dd17b: movzx  eax,BYTE PTR [rip+0xeefe80]        # 0x1416cd002 ; cstring='.'
0x7dd182: mov    BYTE PTR [rdx+0x1a],al
0x7dd185: mov    BYTE PTR [rdx+0x1b],0x0
0x7dd189: xor    r9d,r9d
0x7dd18c: lea    rdx,[rbp-0x38]
0x7dd190: lea    rcx,[rip+0x1e8f6d9]        # 0x14266c870
0x7dd197: call   0x140af3400
0x7dd19c: nop
0x7dd19d: jmp    0x1407dc1fb
0x7dd1a2: xorps  xmm0,xmm0
0x7dd1a5: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd1a9: mov    ecx,0x20
0x7dd1ae: call   0x140071e00
0x7dd1b3: mov    QWORD PTR [rbp-0x38],rax
0x7dd1b7: movdqa xmm0,XMMWORD PTR [rip+0xfce921]        # 0x1417abae0
0x7dd1bf: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd1c4: movups xmm0,XMMWORD PTR [rip+0xef0955]        # 0x1416cdb20 ; vector='Loading squads..'
0x7dd1cb: movups XMMWORD PTR [rax],xmm0
0x7dd1ce: movzx  ecx,BYTE PTR [rip+0xef095b]        # 0x1416cdb30 ; cstring='.'
0x7dd1d5: mov    BYTE PTR [rax+0x10],cl
0x7dd1d8: mov    BYTE PTR [rax+0x11],0x0
0x7dd1dc: xor    r9d,r9d
0x7dd1df: lea    rdx,[rbp-0x38]
0x7dd1e3: lea    rcx,[rip+0x1e8f686]        # 0x14266c870
0x7dd1ea: call   0x140af3400
0x7dd1ef: nop
0x7dd1f0: jmp    0x1407dc1fb
0x7dd1f5: xorps  xmm0,xmm0
0x7dd1f8: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd1fc: mov    ecx,0x20
0x7dd201: call   0x140071e00
0x7dd206: mov    QWORD PTR [rbp-0x38],rax
0x7dd20a: movdqa xmm0,XMMWORD PTR [rip+0xfce90e]        # 0x1417abb20
0x7dd212: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd217: movups xmm0,XMMWORD PTR [rip+0xef091a]        # 0x1416cdb38 ; vector='Loading formatio'
0x7dd21e: movups XMMWORD PTR [rax],xmm0
0x7dd221: mov    ecx,DWORD PTR [rip+0xef0921]        # 0x1416cdb48 ; cstring='ns...'
0x7dd227: mov    DWORD PTR [rax+0x10],ecx
0x7dd22a: movzx  ecx,BYTE PTR [rip+0xef091b]        # 0x1416cdb4c ; cstring='.'
0x7dd231: mov    BYTE PTR [rax+0x14],cl
0x7dd234: mov    BYTE PTR [rax+0x15],0x0
0x7dd238: xor    r9d,r9d
0x7dd23b: lea    rdx,[rbp-0x38]
0x7dd23f: lea    rcx,[rip+0x1e8f62a]        # 0x14266c870
0x7dd246: call   0x140af3400
0x7dd24b: nop
0x7dd24c: jmp    0x1407dc1fb
0x7dd251: xorps  xmm0,xmm0
0x7dd254: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd258: mov    ecx,0x20
0x7dd25d: call   0x140071e00
0x7dd262: mov    QWORD PTR [rbp-0x38],rax
0x7dd266: movdqa xmm0,XMMWORD PTR [rip+0xfce8b2]        # 0x1417abb20
0x7dd26e: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd273: movups xmm0,XMMWORD PTR [rip+0xef0876]        # 0x1416cdaf0 ; vector='Loading activiti'
0x7dd27a: movups XMMWORD PTR [rax],xmm0
0x7dd27d: mov    ecx,DWORD PTR [rip+0xef087d]        # 0x1416cdb00 ; cstring='es...'
0x7dd283: mov    DWORD PTR [rax+0x10],ecx
0x7dd286: movzx  ecx,BYTE PTR [rip+0xef0877]        # 0x1416cdb04 ; cstring='.'
0x7dd28d: mov    BYTE PTR [rax+0x14],cl
0x7dd290: mov    BYTE PTR [rax+0x15],0x0
0x7dd294: xor    r9d,r9d
0x7dd297: lea    rdx,[rbp-0x38]
0x7dd29b: lea    rcx,[rip+0x1e8f5ce]        # 0x14266c870
0x7dd2a2: call   0x140af3400
0x7dd2a7: nop
0x7dd2a8: jmp    0x1407dc1fb
0x7dd2ad: xorps  xmm0,xmm0
0x7dd2b0: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd2b4: mov    ecx,0x20
0x7dd2b9: call   0x140071e00
0x7dd2be: mov    rdx,rax
0x7dd2c1: mov    QWORD PTR [rbp-0x38],rax
0x7dd2c5: movdqa xmm0,XMMWORD PTR [rip+0xfce873]        # 0x1417abb40
0x7dd2cd: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd2d2: movups xmm0,XMMWORD PTR [rip+0xef082f]        # 0x1416cdb08 ; vector='Loading interact'
0x7dd2d9: movups XMMWORD PTR [rax],xmm0
0x7dd2dc: mov    ecx,DWORD PTR [rip+0xef0836]        # 0x1416cdb18 ; cstring='ions...'
0x7dd2e2: mov    DWORD PTR [rax+0x10],ecx
0x7dd2e5: movzx  ecx,WORD PTR [rip+0xef0830]        # 0x1416cdb1c ; cstring='...'
0x7dd2ec: mov    WORD PTR [rax+0x14],cx
0x7dd2f0: movzx  eax,BYTE PTR [rip+0xef0827]        # 0x1416cdb1e ; cstring='.'
0x7dd2f7: mov    BYTE PTR [rdx+0x16],al
0x7dd2fa: mov    BYTE PTR [rdx+0x17],0x0
0x7dd2fe: xor    r9d,r9d
0x7dd301: lea    rdx,[rbp-0x38]
0x7dd305: lea    rcx,[rip+0x1e8f564]        # 0x14266c870
0x7dd30c: call   0x140af3400
0x7dd311: nop
0x7dd312: jmp    0x1407dc1fb
0x7dd317: xorps  xmm0,xmm0
0x7dd31a: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd31e: mov    ecx,0x20
0x7dd323: call   0x140071e00
0x7dd328: mov    QWORD PTR [rbp-0x38],rax
0x7dd32c: movdqa xmm0,XMMWORD PTR [rip+0xfce83c]        # 0x1417abb70
0x7dd334: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd339: movups xmm0,XMMWORD PTR [rip+0xef0840]        # 0x1416cdb80 ; vector='Loading written '
0x7dd340: movups XMMWORD PTR [rax],xmm0
0x7dd343: movsd  xmm0,QWORD PTR [rip+0xef0845]        # 0x1416cdb90 ; cstring='content...'
0x7dd34b: movsd  QWORD PTR [rax+0x10],xmm0
0x7dd350: movzx  ecx,WORD PTR [rip+0xef0841]        # 0x1416cdb98 ; cstring='..'
0x7dd357: mov    WORD PTR [rax+0x18],cx
0x7dd35b: mov    BYTE PTR [rax+0x1a],0x0
0x7dd35f: xor    r9d,r9d
0x7dd362: lea    rdx,[rbp-0x38]
0x7dd366: lea    rcx,[rip+0x1e8f503]        # 0x14266c870
0x7dd36d: call   0x140af3400
0x7dd372: nop
0x7dd373: jmp    0x1407dc1fb
0x7dd378: xorps  xmm0,xmm0
0x7dd37b: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd37f: mov    ecx,0x20
0x7dd384: call   0x140071e00
0x7dd389: mov    QWORD PTR [rbp-0x38],rax
0x7dd38d: movdqa xmm0,XMMWORD PTR [rip+0xfce78b]        # 0x1417abb20
0x7dd395: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd39a: movups xmm0,XMMWORD PTR [rip+0xef07ff]        # 0x1416cdba0 ; vector='Loading identiti'
0x7dd3a1: movups XMMWORD PTR [rax],xmm0
0x7dd3a4: mov    ecx,DWORD PTR [rip+0xef0806]        # 0x1416cdbb0 ; cstring='es...'
0x7dd3aa: mov    DWORD PTR [rax+0x10],ecx
0x7dd3ad: movzx  ecx,BYTE PTR [rip+0xef0800]        # 0x1416cdbb4 ; cstring='.'
0x7dd3b4: mov    BYTE PTR [rax+0x14],cl
0x7dd3b7: mov    BYTE PTR [rax+0x15],0x0
0x7dd3bb: xor    r9d,r9d
0x7dd3be: lea    rdx,[rbp-0x38]
0x7dd3c2: lea    rcx,[rip+0x1e8f4a7]        # 0x14266c870
0x7dd3c9: call   0x140af3400
0x7dd3ce: nop
0x7dd3cf: jmp    0x1407dc1fb
0x7dd3d4: xorps  xmm0,xmm0
0x7dd3d7: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd3db: mov    ecx,0x20
0x7dd3e0: call   0x140071e00
0x7dd3e5: mov    QWORD PTR [rbp-0x38],rax
0x7dd3e9: movdqa xmm0,XMMWORD PTR [rip+0xfce71f]        # 0x1417abb10
0x7dd3f1: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd3f6: movups xmm0,XMMWORD PTR [rip+0xef0753]        # 0x1416cdb50 ; vector='Loading incident'
0x7dd3fd: movups XMMWORD PTR [rax],xmm0
0x7dd400: mov    ecx,DWORD PTR [rip+0xef075a]        # 0x1416cdb60 ; cstring='s...'
0x7dd406: mov    DWORD PTR [rax+0x10],ecx
0x7dd409: mov    BYTE PTR [rax+0x14],0x0
0x7dd40d: xor    r9d,r9d
0x7dd410: lea    rdx,[rbp-0x38]
0x7dd414: lea    rcx,[rip+0x1e8f455]        # 0x14266c870
0x7dd41b: call   0x140af3400
0x7dd420: nop
0x7dd421: jmp    0x1407dc1fb
0x7dd426: xorps  xmm0,xmm0
0x7dd429: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd42d: mov    ecx,0x20
0x7dd432: call   0x140071e00
0x7dd437: mov    QWORD PTR [rbp-0x38],rax
0x7dd43b: movdqa xmm0,XMMWORD PTR [rip+0xfce69d]        # 0x1417abae0
0x7dd443: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd448: movups xmm0,XMMWORD PTR [rip+0xef0719]        # 0x1416cdb68 ; vector='Loading crimes..'
0x7dd44f: movups XMMWORD PTR [rax],xmm0
0x7dd452: movzx  ecx,BYTE PTR [rip+0xef071f]        # 0x1416cdb78 ; cstring='.'
0x7dd459: mov    BYTE PTR [rax+0x10],cl
0x7dd45c: mov    BYTE PTR [rax+0x11],0x0
0x7dd460: xor    r9d,r9d
0x7dd463: lea    rdx,[rbp-0x38]
0x7dd467: lea    rcx,[rip+0x1e8f402]        # 0x14266c870
0x7dd46e: call   0x140af3400
0x7dd473: nop
0x7dd474: jmp    0x1407dc1fb
0x7dd479: xorps  xmm0,xmm0
0x7dd47c: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd480: mov    ecx,0x20
0x7dd485: call   0x140071e00
0x7dd48a: mov    QWORD PTR [rbp-0x38],rax
0x7dd48e: movdqa xmm0,XMMWORD PTR [rip+0xfce66a]        # 0x1417abb00
0x7dd496: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd49b: movups xmm0,XMMWORD PTR [rip+0xef0756]        # 0x1416cdbf8 ; vector='Loading vehicles'
0x7dd4a2: movups XMMWORD PTR [rax],xmm0
0x7dd4a5: movzx  ecx,WORD PTR [rip+0xef075c]        # 0x1416cdc08 ; cstring='...'
0x7dd4ac: mov    WORD PTR [rax+0x10],cx
0x7dd4b0: movzx  ecx,BYTE PTR [rip+0xef0753]        # 0x1416cdc0a ; cstring='.'
0x7dd4b7: mov    BYTE PTR [rax+0x12],cl
0x7dd4ba: mov    BYTE PTR [rax+0x13],0x0
0x7dd4be: xor    r9d,r9d
0x7dd4c1: lea    rdx,[rbp-0x38]
0x7dd4c5: lea    rcx,[rip+0x1e8f3a4]        # 0x14266c870
0x7dd4cc: call   0x140af3400
0x7dd4d1: nop
0x7dd4d2: jmp    0x1407dc1fb
0x7dd4d7: xorps  xmm0,xmm0
0x7dd4da: movups XMMWORD PTR [rbp-0x38],xmm0
0x7dd4de: mov    ecx,0x20
0x7dd4e3: call   0x140071e00
0x7dd4e8: mov    QWORD PTR [rbp-0x38],rax
0x7dd4ec: movdqa xmm0,XMMWORD PTR [rip+0xfce5ec]        # 0x1417abae0
0x7dd4f4: movdqu XMMWORD PTR [rbp-0x28],xmm0
0x7dd4f9: movups xmm0,XMMWORD PTR [rip+0xef0710]        # 0x1416cdc10 ; vector='Loading armies..'
0x7dd500: movups XMMWORD PTR [rax],xmm0
0x7dd503: movzx  ecx,BYTE PTR [rip+0xef0716]        # 0x1416cdc20 ; cstring='.'
0x7dd50a: mov    BYTE PTR [rax+0x10],cl
0x7dd50d: mov    BYTE PTR [rax+0x11],0x0
0x7dd511: xor    r9d,r9d
0x7dd514: lea    rdx,[rbp-0x38]
0x7dd518: lea    rcx,[rip+0x1e8f351]        # 0x14266c870
0x7dd51f: call   0x140af3400
0x7dd524: nop
0x7dd525: mov    rdx,QWORD PTR [rbp-0x20]
0x7dd529: cmp    rdx,0xf
0x7dd52d: jbe    0x1407dd901
0x7dd533: inc    rdx
0x7dd536: mov    rcx,QWORD PTR [rbp-0x38]
0x7dd53a: mov    rax,rcx
0x7dd53d: cmp    rdx,0x1000
0x7dd544: jb     0x1407dc235
0x7dd54a: add    rdx,0x27
0x7dd54e: mov    rcx,QWORD PTR [rcx-0x8]
0x7dd552: sub    rax,rcx
0x7dd555: add    rax,0xfffffffffffffff8
0x7dd559: cmp    rax,0x1f
0x7dd55d: jbe    0x1407dc235
0x7dd563: call   QWORD PTR [rip+0xe235d7]        # 0x141600b40
0x7dd569: int3
0x7dd56a: lea    rdx,[rip+0xef0647]        # 0x1416cdbb8 ; cstring='Loading army controllers...'
0x7dd571: lea    rcx,[rbp-0x38]
0x7dd575: call   0x140069780
0x7dd57a: nop
0x7dd57b: xor    r9d,r9d
0x7dd57e: lea    rdx,[rbp-0x38]
0x7dd582: lea    rcx,[rip+0x1e8f2e7]        # 0x14266c870
0x7dd589: call   0x140af3400
0x7dd58e: nop
0x7dd58f: jmp    0x1407dd8f8
0x7dd594: lea    rdx,[rip+0xef063d]        # 0x1416cdbd8 ; cstring='Loading tracking information...'
0x7dd59b: lea    rcx,[rbp-0x38]
0x7dd59f: call   0x140069780
0x7dd5a4: nop
0x7dd5a5: xor    r9d,r9d
0x7dd5a8: lea    rdx,[rbp-0x38]
0x7dd5ac: lea    rcx,[rip+0x1e8f2bd]        # 0x14266c870
0x7dd5b3: call   0x140af3400
0x7dd5b8: nop
0x7dd5b9: jmp    0x1407dd8f8
0x7dd5be: lea    rdx,[rip+0xef0343]        # 0x1416cd908 ; cstring='Loading cultural identities...'
0x7dd5c5: lea    rcx,[rbp-0x38]
0x7dd5c9: call   0x140069780
0x7dd5ce: nop
0x7dd5cf: xor    r9d,r9d
0x7dd5d2: lea    rdx,[rbp-0x38]
0x7dd5d6: lea    rcx,[rip+0x1e8f293]        # 0x14266c870
0x7dd5dd: call   0x140af3400
0x7dd5e2: nop
0x7dd5e3: jmp    0x1407dd8f8
0x7dd5e8: lea    rdx,[rip+0xef0339]        # 0x1416cd928 ; cstring='Loading agreements...'
0x7dd5ef: lea    rcx,[rbp-0x38]
0x7dd5f3: call   0x140069780
0x7dd5f8: nop
0x7dd5f9: xor    r9d,r9d
0x7dd5fc: lea    rdx,[rbp-0x38]
0x7dd600: lea    rcx,[rip+0x1e8f269]        # 0x14266c870
0x7dd607: call   0x140af3400
0x7dd60c: nop
0x7dd60d: jmp    0x1407dd8f8
0x7dd612: lea    rdx,[rip+0xef02bf]        # 0x1416cd8d8 ; cstring='Loading art forms...'
0x7dd619: lea    rcx,[rbp-0x38]
0x7dd61d: call   0x140069780
0x7dd622: nop
0x7dd623: xor    r9d,r9d
0x7dd626: lea    rdx,[rbp-0x38]
0x7dd62a: lea    rcx,[rip+0x1e8f23f]        # 0x14266c870
0x7dd631: call   0x140af3400
0x7dd636: nop
0x7dd637: jmp    0x1407dd8f8
0x7dd63c: lea    rdx,[rip+0xef02ad]        # 0x1416cd8f0 ; cstring='Loading occupations...'
0x7dd643: lea    rcx,[rbp-0x38]
0x7dd647: call   0x140069780
0x7dd64c: nop
0x7dd64d: xor    r9d,r9d
0x7dd650: lea    rdx,[rbp-0x38]
0x7dd654: lea    rcx,[rip+0x1e8f215]        # 0x14266c870
0x7dd65b: call   0x140af3400
0x7dd660: nop
0x7dd661: jmp    0x1407dd8f8
0x7dd666: lea    rdx,[rip+0xef031b]        # 0x1416cd988 ; cstring='Loading belief systems...'
0x7dd66d: lea    rcx,[rbp-0x38]
0x7dd671: call   0x140069780
0x7dd676: nop
0x7dd677: xor    r9d,r9d
0x7dd67a: lea    rdx,[rbp-0x38]
0x7dd67e: lea    rcx,[rip+0x1e8f1eb]        # 0x14266c870
0x7dd685: call   0x140af3400
0x7dd68a: nop
0x7dd68b: jmp    0x1407dd8f8
0x7dd690: lea    rdx,[rip+0xef0311]        # 0x1416cd9a8 ; cstring='Loading image sets...'
0x7dd697: lea    rcx,[rbp-0x38]
0x7dd69b: call   0x140069780
0x7dd6a0: nop
0x7dd6a1: xor    r9d,r9d
0x7dd6a4: lea    rdx,[rbp-0x38]
0x7dd6a8: lea    rcx,[rip+0x1e8f1c1]        # 0x14266c870
0x7dd6af: call   0x140af3400
0x7dd6b4: nop
0x7dd6b5: jmp    0x1407dd8f8
0x7dd6ba: lea    rdx,[rip+0xef027f]        # 0x1416cd940 ; cstring='Loading divination sets...'
0x7dd6c1: lea    rcx,[rbp-0x38]
0x7dd6c5: call   0x140069780
0x7dd6ca: nop
0x7dd6cb: xor    r9d,r9d
0x7dd6ce: lea    rdx,[rbp-0x38]
0x7dd6d2: lea    rcx,[rip+0x1e8f197]        # 0x14266c870
0x7dd6d9: call   0x140af3400
0x7dd6de: nop
0x7dd6df: jmp    0x1407dd8f8
0x7dd6e4: lea    rdx,[rip+0xef0095]        # 0x1416cd780 ; cstring='Loading announcements...'
0x7dd6eb: lea    rcx,[rbp-0x38]
0x7dd6ef: call   0x140069780
0x7dd6f4: nop
0x7dd6f5: xor    r9d,r9d
0x7dd6f8: lea    rdx,[rbp-0x38]
0x7dd6fc: lea    rcx,[rip+0x1e8f16d]        # 0x14266c870
0x7dd703: call   0x140af3400
0x7dd708: nop
0x7dd709: jmp    0x1407dd8f8
0x7dd70e: lea    rdx,[rip+0xef00f3]        # 0x1416cd808 ; cstring='Loading fortress information...'
0x7dd715: lea    rcx,[rbp-0x38]
0x7dd719: call   0x140069780
0x7dd71e: nop
0x7dd71f: xor    r9d,r9d
0x7dd722: lea    rdx,[rbp-0x38]
0x7dd726: lea    rcx,[rip+0x1e8f143]        # 0x14266c870
0x7dd72d: call   0x140af3400
0x7dd732: nop
0x7dd733: jmp    0x1407dd8f8
0x7dd738: lea    rdx,[rip+0xef00e9]        # 0x1416cd828 ; cstring='Loading world information...'
0x7dd73f: lea    rcx,[rbp-0x38]
0x7dd743: call   0x140069780
0x7dd748: nop
0x7dd749: xor    r9d,r9d
0x7dd74c: lea    rdx,[rbp-0x38]
0x7dd750: lea    rcx,[rip+0x1e8f119]        # 0x14266c870
0x7dd757: call   0x140af3400
0x7dd75c: nop
0x7dd75d: jmp    0x1407dd8f8
0x7dd762: lea    rdx,[rip+0xef0317]        # 0x1416cda80 ; cstring='Loading artifacts...'
0x7dd769: lea    rcx,[rbp-0x38]
0x7dd76d: call   0x140069780
0x7dd772: nop
0x7dd773: xor    r9d,r9d
0x7dd776: lea    rdx,[rbp-0x38]
0x7dd77a: lea    rcx,[rip+0x1e8f0ef]        # 0x14266c870
0x7dd781: call   0x140af3400
0x7dd786: nop
0x7dd787: jmp    0x1407dd8f8
0x7dd78c: lea    rdx,[rip+0xef0305]        # 0x1416cda98 ; cstring='Loading active historical figures...'
0x7dd793: lea    rcx,[rbp-0x38]
0x7dd797: call   0x140069780
0x7dd79c: nop
0x7dd79d: xor    r9d,r9d
0x7dd7a0: lea    rdx,[rbp-0x38]
0x7dd7a4: lea    rcx,[rip+0x1e8f0c5]        # 0x14266c870
0x7dd7ab: call   0x140af3400
0x7dd7b0: nop
0x7dd7b1: jmp    0x1407dd8f8
0x7dd7b6: lea    rdx,[rip+0xef0013]        # 0x1416cd7d0 ; cstring='Loading adventure...'
0x7dd7bd: lea    rcx,[rbp-0x38]
0x7dd7c1: call   0x140069780
0x7dd7c6: nop
0x7dd7c7: xor    r9d,r9d
0x7dd7ca: lea    rdx,[rbp-0x38]
0x7dd7ce: lea    rcx,[rip+0x1e8f09b]        # 0x14266c870
0x7dd7d5: call   0x140af3400
0x7dd7da: nop
0x7dd7db: jmp    0x1407dd8f8
0x7dd7e0: lea    rdx,[rip+0xef0001]        # 0x1416cd7e8 ; cstring='Loading general information...'
0x7dd7e7: lea    rcx,[rbp-0x38]
0x7dd7eb: call   0x140069780
0x7dd7f0: nop
0x7dd7f1: xor    r9d,r9d
0x7dd7f4: lea    rdx,[rbp-0x38]
0x7dd7f8: lea    rcx,[rip+0x1e8f071]        # 0x14266c870
0x7dd7ff: call   0x140af3400
0x7dd804: nop
0x7dd805: jmp    0x1407dd8f8
0x7dd80a: lea    rdx,[rip+0xe4327f]        # 0x141620a90 ; cstring='Closing file...'
0x7dd811: lea    rcx,[rbp-0x38]
0x7dd815: call   0x140069780
0x7dd81a: nop
0x7dd81b: xor    r9d,r9d
0x7dd81e: lea    rdx,[rbp-0x38]
0x7dd822: lea    rcx,[rip+0x1e8f047]        # 0x14266c870
0x7dd829: call   0x140af3400
0x7dd82e: nop
0x7dd82f: jmp    0x1407dd8f8
0x7dd834: lea    rdx,[rip+0xef0125]        # 0x1416cd960 ; cstring='Rebuilding temporary information...'
0x7dd83b: lea    rcx,[rbp-0x38]
0x7dd83f: call   0x140069780
0x7dd844: nop
0x7dd845: xor    r9d,r9d
0x7dd848: lea    rdx,[rbp-0x38]
0x7dd84c: lea    rcx,[rip+0x1e8f01d]        # 0x14266c870
0x7dd853: call   0x140af3400
0x7dd858: nop
0x7dd859: jmp    0x1407dd8f8
0x7dd85e: lea    rdx,[rip+0xef0023]        # 0x1416cd888 ; cstring='Rebuilding more temporary information...'
0x7dd865: lea    rcx,[rbp-0x38]
0x7dd869: call   0x140069780
0x7dd86e: nop
0x7dd86f: xor    r9d,r9d
0x7dd872: lea    rdx,[rbp-0x38]
0x7dd876: lea    rcx,[rip+0x1e8eff3]        # 0x14266c870
0x7dd87d: call   0x140af3400
0x7dd882: nop
0x7dd883: jmp    0x1407dd8f8
0x7dd885: lea    rdx,[rip+0xef002c]        # 0x1416cd8b8 ; cstring='Preparing game screen...'
0x7dd88c: lea    rcx,[rbp-0x38]
0x7dd890: call   0x140069780
0x7dd895: nop
0x7dd896: xor    r9d,r9d
0x7dd899: lea    rdx,[rbp-0x38]
0x7dd89d: lea    rcx,[rip+0x1e8efcc]        # 0x14266c870
0x7dd8a4: call   0x140af3400
0x7dd8a9: nop
0x7dd8aa: jmp    0x1407dd8f8
0x7dd8ac: lea    rdx,[rip+0xeeff95]        # 0x1416cd848 ; cstring='Handling compatibility issues...'
0x7dd8b3: lea    rcx,[rbp-0x38]
0x7dd8b7: call   0x140069780
0x7dd8bc: nop
0x7dd8bd: xor    r9d,r9d
0x7dd8c0: lea    rdx,[rbp-0x38]
0x7dd8c4: lea    rcx,[rip+0x1e8efa5]        # 0x14266c870
0x7dd8cb: call   0x140af3400
0x7dd8d0: nop
0x7dd8d1: jmp    0x1407dd8f8
0x7dd8d3: lea    rdx,[rip+0xe431c6]        # 0x141620aa0 ; cstring='Finishing...'
0x7dd8da: lea    rcx,[rbp-0x38]
0x7dd8de: call   0x140069780
0x7dd8e3: nop
0x7dd8e4: xor    r9d,r9d
0x7dd8e7: lea    rdx,[rbp-0x38]
0x7dd8eb: lea    rcx,[rip+0x1e8ef7e]        # 0x14266c870
0x7dd8f2: call   0x140af3400
0x7dd8f7: nop
0x7dd8f8: lea    rcx,[rbp-0x38]
0x7dd8fc: call   0x140070e80
0x7dd901: mov    rcx,QWORD PTR [rbp-0x10]
0x7dd905: xor    rcx,rsp
0x7dd908: call   0x1415530b0
0x7dd90d: lea    r11,[rsp+0x60]
0x7dd912: mov    rbx,QWORD PTR [r11+0x30]
0x7dd916: mov    rsi,QWORD PTR [r11+0x38]
0x7dd91a: mov    rdi,QWORD PTR [r11+0x40]
0x7dd91e: mov    rsp,r11
0x7dd921: pop    r15
0x7dd923: pop    r14
0x7dd925: pop    r13
0x7dd927: pop    r12
0x7dd929: pop    rbp
0x7dd92a: ret
0x7dd92b: nop
