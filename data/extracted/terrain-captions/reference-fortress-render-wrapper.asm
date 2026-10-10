; reference; PE:6a70a6d9:02711000; fortress-render-wrapper; RVA 0x8bcc70..0x8be1c8
0x008bcc70: mov    QWORD PTR [rsp+0x18],rbx
0x008bcc75: mov    QWORD PTR [rsp+0x20],rsi
0x008bcc7a: push   rbp
0x008bcc7b: push   rdi
0x008bcc7c: push   r13
0x008bcc7e: push   r14
0x008bcc80: push   r15
0x008bcc82: mov    rbp,rsp
0x008bcc85: sub    rsp,0x80
0x008bcc8c: mov    rax,QWORD PTR [rip+0xfdf3ad]        # 0x14189c040
0x008bcc93: xor    rax,rsp
0x008bcc96: mov    QWORD PTR [rbp-0x10],rax
0x008bcc9a: cmp    BYTE PTR [rip+0x1d8d9d3],0x0        # 0x14264a674
0x008bcca1: jne    0x1408bd068
0x008bcca7: mov    BYTE PTR [rip+0x1d8d9aa],0x0        # 0x14264a658
0x008bccae: mov    DWORD PTR [rip+0x1d8d9a4],0xffffffff        # 0x14264a65c
0x008bccb8: cmp    BYTE PTR [rip+0xfea8f9],0x0        # 0x1418a75b8
0x008bccbf: setne  BYTE PTR [rip+0x1d8d94a]        # 0x14264a610
0x008bccc6: call   0x1403d6950
0x008bcccb: mov    eax,DWORD PTR [rip+0xfdf5f3]        # 0x14189c2c4
0x008bccd1: cmp    BYTE PTR [rip+0x1add526],0x0        # 0x14239a1fe
0x008bccd8: je     0x1408bde6d
0x008bccde: cmp    eax,0x4
0x008bcce1: je     0x1408bde6d
0x008bcce7: lea    rdx,[rbp-0x5c]
0x008bcceb: lea    rcx,[rbp-0x60]
0x008bccef: call   0x140c33370
0x008bccf4: mov    esi,DWORD PTR [rbp-0x60]
0x008bccf7: add    esi,0x5
0x008bccfa: mov    ebx,DWORD PTR [rbp-0x5c]
0x008bccfd: add    ebx,0xfffffffb
0x008bcd00: mov    eax,DWORD PTR [rip+0x1b10a82]        # 0x1423cd788
0x008bcd06: cdq
0x008bcd07: sub    eax,edx
0x008bcd09: sar    eax,1
0x008bcd0b: mov    r13d,eax
0x008bcd0e: lea    r15d,[rax-0x5]
0x008bcd12: lea    r14d,[rax+0x4]
0x008bcd16: mov    DWORD PTR [rip+0x1d8d75c],0x1000006        # 0x14264a47c
0x008bcd20: mov    edi,r15d
0x008bcd23: cmp    r15d,r14d
0x008bcd26: jg     0x1408bcdea
0x008bcd2c: nop    DWORD PTR [rax+0x0]
0x008bcd30: mov    r11d,esi
0x008bcd33: cmp    esi,ebx
0x008bcd35: jg     0x1408bcddf
0x008bcd3b: nop    DWORD PTR [rax+rax*1+0x0]
0x008bcd40: mov    DWORD PTR [rip+0x1d8d72d],r11d        # 0x14264a474
0x008bcd47: mov    DWORD PTR [rip+0x1d8d72b],edi        # 0x14264a478
0x008bcd4d: cmp    edi,r15d
0x008bcd50: jne    0x1408bcd7b
0x008bcd52: cmp    r11d,esi
0x008bcd55: jne    0x1408bcd5f
0x008bcd57: mov    edx,DWORD PTR [rip+0x1b13f47]        # 0x1423d0ca4
0x008bcd5d: jmp    0x1408bcdc7
0x008bcd5f: lea    rcx,[rip+0x1d8d68a]        # 0x14264a3f0
0x008bcd66: cmp    r11d,ebx
0x008bcd69: jne    0x1408bcd73
0x008bcd6b: mov    edx,DWORD PTR [rip+0x1b13f3b]        # 0x1423d0cac
0x008bcd71: jmp    0x1408bcdce
0x008bcd73: mov    edx,DWORD PTR [rip+0x1b13f2f]        # 0x1423d0ca8
0x008bcd79: jmp    0x1408bcdce
0x008bcd7b: cmp    edi,r14d
0x008bcd7e: jne    0x1408bcda9
0x008bcd80: cmp    r11d,esi
0x008bcd83: jne    0x1408bcd8d
0x008bcd85: mov    edx,DWORD PTR [rip+0x1b13f31]        # 0x1423d0cbc
0x008bcd8b: jmp    0x1408bcdc7
0x008bcd8d: lea    rcx,[rip+0x1d8d65c]        # 0x14264a3f0
0x008bcd94: cmp    r11d,ebx
0x008bcd97: jne    0x1408bcda1
0x008bcd99: mov    edx,DWORD PTR [rip+0x1b13f25]        # 0x1423d0cc4
0x008bcd9f: jmp    0x1408bcdce
0x008bcda1: mov    edx,DWORD PTR [rip+0x1b13f19]        # 0x1423d0cc0
0x008bcda7: jmp    0x1408bcdce
0x008bcda9: cmp    r11d,esi
0x008bcdac: jne    0x1408bcdb6
0x008bcdae: mov    edx,DWORD PTR [rip+0x1b13efc]        # 0x1423d0cb0
0x008bcdb4: jmp    0x1408bcdc7
0x008bcdb6: cmp    r11d,ebx
0x008bcdb9: mov    edx,DWORD PTR [rip+0x1b13ef9]        # 0x1423d0cb8
0x008bcdbf: je     0x1408bcdc7
0x008bcdc1: mov    edx,DWORD PTR [rip+0x1b13eed]        # 0x1423d0cb4
0x008bcdc7: lea    rcx,[rip+0x1d8d622]        # 0x14264a3f0
0x008bcdce: call   0x140adaad0
0x008bcdd3: inc    r11d
0x008bcdd6: cmp    r11d,ebx
0x008bcdd9: jle    0x1408bcd40
0x008bcddf: inc    edi
0x008bcde1: cmp    edi,r14d
0x008bcde4: jle    0x1408bcd30
0x008bcdea: mov    DWORD PTR [rip+0x1d8d688],0x1010007        # 0x14264a47c
0x008bcdf4: mov    r9d,DWORD PTR [rip+0x1add555]        # 0x14239a350
0x008bcdfb: mov    r8,QWORD PTR [rip+0x1add58e]        # 0x14239a390
0x008bce02: mov    r10,QWORD PTR [rip+0x1add57f]        # 0x14239a388
0x008bce09: cmp    r9d,0x3
0x008bce0d: jne    0x1408bce2d
0x008bce0f: mov    ecx,DWORD PTR [rip+0x1add597]        # 0x14239a3ac
0x008bce15: cmp    ecx,0xffffffff
0x008bce18: je     0x1408bce4d
0x008bce1a: mov    eax,0x10624dd3
0x008bce1f: imul   ecx
0x008bce21: sar    edx,0x6
0x008bce24: mov    eax,edx
0x008bce26: shr    eax,0x1f
0x008bce29: add    edx,eax
0x008bce2b: jmp    0x1408bce4a
0x008bce2d: jle    0x1408bce4d
0x008bce2f: mov    rcx,r8
0x008bce32: sub    rcx,r10
0x008bce35: sar    rcx,0x3
0x008bce39: mov    eax,0x10624dd3
0x008bce3e: imul   ecx
0x008bce40: sar    edx,0x6
0x008bce43: mov    ecx,edx
0x008bce45: shr    ecx,0x1f
0x008bce48: add    edx,ecx
0x008bce4a: add    r9d,edx
0x008bce4d: sub    r8,r10
0x008bce50: sar    r8,0x3
0x008bce54: mov    eax,0x10624dd3
0x008bce59: imul   r8d
0x008bce5c: sar    edx,0x6
0x008bce5f: mov    r8d,edx
0x008bce62: shr    r8d,0x1f
0x008bce66: add    edx,0x36
0x008bce69: add    r8d,edx
0x008bce6c: add    esi,0x5
0x008bce6f: add    ebx,0xfffffffa
0x008bce72: mov    ecx,ebx
0x008bce74: sub    ecx,esi
0x008bce76: xor    eax,eax
0x008bce78: test   r9d,r9d
0x008bce7b: cmovns eax,r9d
0x008bce7f: imul   eax,ecx
0x008bce82: cdq
0x008bce83: idiv   r8d
0x008bce86: add    eax,esi
0x008bce88: mov    ecx,esi
0x008bce8a: cmp    eax,esi
0x008bce8c: cmovge ecx,eax
0x008bce8f: lea    edi,[rbx-0x1]
0x008bce92: cmp    ecx,edi
0x008bce94: cmovle edi,ecx
0x008bce97: add    r14d,0xfffffffe
0x008bce9b: mov    r11d,esi
0x008bce9e: cmp    esi,ebx
0x008bcea0: jg     0x1408bcf16
0x008bcea2: mov    DWORD PTR [rip+0x1d8d5cb],r11d        # 0x14264a474
0x008bcea9: mov    DWORD PTR [rip+0x1d8d5c8],r14d        # 0x14264a478
0x008bceb0: cmp    r11d,edi
0x008bceb3: jg     0x1408bcee1
0x008bceb5: cmp    r11d,esi
0x008bceb8: jne    0x1408bcec2
0x008bceba: mov    edx,DWORD PTR [rip+0x1b139d0]        # 0x1423d0890
0x008bcec0: jmp    0x1408bceff
0x008bcec2: xor    r8d,r8d
0x008bcec5: lea    rcx,[rip+0x1d8d524]        # 0x14264a3f0
0x008bcecc: cmp    r11d,ebx
0x008bcecf: jne    0x1408bced9
0x008bced1: mov    edx,DWORD PTR [rip+0x1b139c1]        # 0x1423d0898
0x008bced7: jmp    0x1408bcf09
0x008bced9: mov    edx,DWORD PTR [rip+0x1b139b5]        # 0x1423d0894
0x008bcedf: jmp    0x1408bcf09
0x008bcee1: cmp    r11d,esi
0x008bcee4: jne    0x1408bceee
0x008bcee6: mov    edx,DWORD PTR [rip+0x1b139b0]        # 0x1423d089c
0x008bceec: jmp    0x1408bceff
0x008bceee: cmp    r11d,ebx
0x008bcef1: mov    edx,DWORD PTR [rip+0x1b139ad]        # 0x1423d08a4
0x008bcef7: je     0x1408bceff
0x008bcef9: mov    edx,DWORD PTR [rip+0x1b139a1]        # 0x1423d08a0
0x008bceff: xor    r8d,r8d
0x008bcf02: lea    rcx,[rip+0x1d8d4e7]        # 0x14264a3f0
0x008bcf09: call   0x140adb100
0x008bcf0e: inc    r11d
0x008bcf11: cmp    r11d,ebx
0x008bcf14: jle    0x1408bcea2
0x008bcf16: mov    DWORD PTR [rip+0x1d8d55c],0x1010007        # 0x14264a47c
0x008bcf20: mov    DWORD PTR [rip+0x1d8d54e],esi        # 0x14264a474
0x008bcf26: lea    eax,[r14-0x5]
0x008bcf2a: mov    DWORD PTR [rip+0x1d8d548],eax        # 0x14264a478
0x008bcf30: xorps  xmm0,xmm0
0x008bcf33: movups XMMWORD PTR [rbp-0x30],xmm0
0x008bcf37: movdqa xmm1,XMMWORD PTR [rip+0xece291]        # 0x14178b1d0
0x008bcf3f: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008bcf44: movsd  xmm0,QWORD PTR [rip+0xd4760c]        # 0x141604558
0x008bcf4c: movsd  QWORD PTR [rbp-0x30],xmm0
0x008bcf51: movzx  eax,WORD PTR [rip+0xd47608]        # 0x141604560
0x008bcf58: mov    WORD PTR [rbp-0x28],ax
0x008bcf5c: movzx  eax,BYTE PTR [rip+0xd475ff]        # 0x141604562
0x008bcf63: mov    BYTE PTR [rbp-0x26],al
0x008bcf66: mov    BYTE PTR [rbp-0x25],0x0
0x008bcf6a: xor    r9d,r9d
0x008bcf6d: lea    rdx,[rbp-0x30]
0x008bcf71: lea    rcx,[rip+0x1d8d478]        # 0x14264a3f0
0x008bcf78: call   0x140ad9960
0x008bcf7d: nop
0x008bcf7e: lea    rcx,[rbp-0x30]
0x008bcf82: call   0x14006f850
0x008bcf87: mov    DWORD PTR [rip+0x1d8d4eb],0x1010007        # 0x14264a47c
0x008bcf91: mov    DWORD PTR [rip+0x1d8d4dd],esi        # 0x14264a474
0x008bcf97: mov    DWORD PTR [rip+0x1d8d4da],r13d        # 0x14264a478
0x008bcf9e: movsxd rax,DWORD PTR [rip+0x1add3ab]        # 0x14239a350
0x008bcfa5: cmp    eax,0x33
0x008bcfa8: ja     0x1408bd053
0x008bcfae: lea    rdx,[rip+0xffffffffff74304b]        # 0x140000000
0x008bcfb5: mov    ecx,DWORD PTR [rdx+rax*4+0x8be0f8]
0x008bcfbc: add    rcx,rdx
0x008bcfbf: jmp    rcx
0x008bcfc1: xorps  xmm0,xmm0
0x008bcfc4: movups XMMWORD PTR [rbp-0x30],xmm0
0x008bcfc8: movdqa xmm1,XMMWORD PTR [rip+0xece240]        # 0x14178b210
0x008bcfd0: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008bcfd5: movsd  xmm0,QWORD PTR [rip+0xd4758b]        # 0x141604568
0x008bcfdd: movsd  QWORD PTR [rbp-0x30],xmm0
0x008bcfe2: mov    eax,DWORD PTR [rip+0xd47588]        # 0x141604570
0x008bcfe8: mov    DWORD PTR [rbp-0x28],eax
0x008bcfeb: movzx  eax,WORD PTR [rip+0xd47582]        # 0x141604574
0x008bcff2: mov    WORD PTR [rbp-0x24],ax
0x008bcff6: movzx  eax,BYTE PTR [rip+0xd47579]        # 0x141604576
0x008bcffd: mov    BYTE PTR [rbp-0x22],al
0x008bd000: mov    BYTE PTR [rbp-0x21],0x0
0x008bd004: xor    r9d,r9d
0x008bd007: lea    rdx,[rbp-0x30]
0x008bd00b: lea    rcx,[rip+0x1d8d3de]        # 0x14264a3f0
0x008bd012: call   0x140ad9960
0x008bd017: nop
0x008bd018: mov    rdx,QWORD PTR [rbp-0x18]
0x008bd01c: cmp    rdx,0xf
0x008bd020: jbe    0x1408bd053
0x008bd022: inc    rdx
0x008bd025: mov    rcx,QWORD PTR [rbp-0x30]
0x008bd029: mov    rax,rcx
0x008bd02c: cmp    rdx,0x1000
0x008bd033: jb     0x1408bd04e
0x008bd035: add    rdx,0x27
0x008bd039: mov    rcx,QWORD PTR [rcx-0x8]
0x008bd03d: sub    rax,rcx
0x008bd040: add    rax,0xfffffffffffffff8
0x008bd044: cmp    rax,0x1f
0x008bd048: ja     0x1408be0f0
0x008bd04e: call   0x141539680
0x008bd053: cmp    BYTE PTR [rip+0xfea55e],0x0        # 0x1418a75b8
0x008bd05a: je     0x1408bd068
0x008bd05c: lea    rcx,[rip+0xfea555]        # 0x1418a75b8
0x008bd063: call   0x1401e8b20
0x008bd068: mov    rcx,QWORD PTR [rbp-0x10]
0x008bd06c: xor    rcx,rsp
0x008bd06f: call   0x141539660
0x008bd074: lea    r11,[rsp+0x80]
0x008bd07c: mov    rbx,QWORD PTR [r11+0x40]
0x008bd080: mov    rsi,QWORD PTR [r11+0x48]
0x008bd084: mov    rsp,r11
0x008bd087: pop    r15
0x008bd089: pop    r14
0x008bd08b: pop    r13
0x008bd08d: pop    rdi
0x008bd08e: pop    rbp
0x008bd08f: ret
0x008bd090: lea    rdx,[rip+0xd474e1]        # 0x141604578
0x008bd097: lea    rcx,[rbp-0x58]
0x008bd09b: call   0x140068150
0x008bd0a0: nop
0x008bd0a1: xor    r9d,r9d
0x008bd0a4: lea    rdx,[rbp-0x58]
0x008bd0a8: lea    rcx,[rip+0x1d8d341]        # 0x14264a3f0
0x008bd0af: call   0x140ad9960
0x008bd0b4: nop
0x008bd0b5: lea    rcx,[rbp-0x58]
0x008bd0b9: call   0x14006f850
0x008bd0be: jmp    0x1408bd053
0x008bd0c0: lea    rdx,[rip+0xd474d1]        # 0x141604598
0x008bd0c7: lea    rcx,[rbp-0x58]
0x008bd0cb: call   0x140068150
0x008bd0d0: nop
0x008bd0d1: xor    r9d,r9d
0x008bd0d4: lea    rdx,[rbp-0x58]
0x008bd0d8: lea    rcx,[rip+0x1d8d311]        # 0x14264a3f0
0x008bd0df: call   0x140ad9960
0x008bd0e4: nop
0x008bd0e5: lea    rcx,[rbp-0x58]
0x008bd0e9: call   0x14006f850
0x008bd0ee: jmp    0x1408bd053
0x008bd0f3: lea    rdx,[rip+0xd474b6]        # 0x1416045b0
0x008bd0fa: lea    rcx,[rbp-0x58]
0x008bd0fe: call   0x140068150
0x008bd103: nop
0x008bd104: xor    r9d,r9d
0x008bd107: lea    rdx,[rbp-0x58]
0x008bd10b: lea    rcx,[rip+0x1d8d2de]        # 0x14264a3f0
0x008bd112: call   0x140ad9960
0x008bd117: nop
0x008bd118: lea    rcx,[rbp-0x58]
0x008bd11c: call   0x14006f850
0x008bd121: cmp    DWORD PTR [rip+0x1add284],0xffffffff        # 0x14239a3ac
0x008bd128: je     0x1408bd053
0x008bd12e: lea    rcx,[rbp-0x58]
0x008bd132: call   0x14006f690
0x008bd137: nop
0x008bd138: lea    rdx,[rbp-0x58]
0x008bd13c: mov    ecx,DWORD PTR [rip+0x1add26a]        # 0x14239a3ac
0x008bd142: call   0x14052c2b0
0x008bd147: xor    r9d,r9d
0x008bd14a: lea    rdx,[rbp-0x58]
0x008bd14e: lea    rcx,[rip+0x1d8d29b]        # 0x14264a3f0
0x008bd155: call   0x140ad9960
0x008bd15a: mov    r8b,0x1
0x008bd15d: mov    dl,0x2f
0x008bd15f: lea    rcx,[rip+0x1d8d28a]        # 0x14264a3f0
0x008bd166: call   0x1400bb190
0x008bd16b: mov    rcx,QWORD PTR [rip+0x1add21e]        # 0x14239a390
0x008bd172: sub    rcx,QWORD PTR [rip+0x1add20f]        # 0x14239a388
0x008bd179: sar    rcx,0x3
0x008bd17d: lea    rdx,[rbp-0x58]
0x008bd181: call   0x14052c2b0
0x008bd186: xor    r9d,r9d
0x008bd189: lea    rdx,[rbp-0x58]
0x008bd18d: lea    rcx,[rip+0x1d8d25c]        # 0x14264a3f0
0x008bd194: call   0x140ad9960
0x008bd199: nop
0x008bd19a: lea    rcx,[rbp-0x58]
0x008bd19e: call   0x14006f850
0x008bd1a3: jmp    0x1408bd053
0x008bd1a8: lea    rdx,[rip+0xd47419]        # 0x1416045c8
0x008bd1af: lea    rcx,[rbp-0x58]
0x008bd1b3: call   0x140068150
0x008bd1b8: nop
0x008bd1b9: xor    r9d,r9d
0x008bd1bc: lea    rdx,[rbp-0x58]
0x008bd1c0: lea    rcx,[rip+0x1d8d229]        # 0x14264a3f0
0x008bd1c7: call   0x140ad9960
0x008bd1cc: nop
0x008bd1cd: lea    rcx,[rbp-0x58]
0x008bd1d1: call   0x14006f850
0x008bd1d6: jmp    0x1408bd053
0x008bd1db: lea    rdx,[rip+0xd473fe]        # 0x1416045e0
0x008bd1e2: lea    rcx,[rbp-0x58]
0x008bd1e6: call   0x140068150
0x008bd1eb: nop
0x008bd1ec: xor    r9d,r9d
0x008bd1ef: lea    rdx,[rbp-0x58]
0x008bd1f3: lea    rcx,[rip+0x1d8d1f6]        # 0x14264a3f0
0x008bd1fa: call   0x140ad9960
0x008bd1ff: nop
0x008bd200: lea    rcx,[rbp-0x58]
0x008bd204: call   0x14006f850
0x008bd209: jmp    0x1408bd053
0x008bd20e: xorps  xmm0,xmm0
0x008bd211: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd215: mov    ecx,0x20
0x008bd21a: call   0x1400707d0
0x008bd21f: mov    QWORD PTR [rbp-0x58],rax
0x008bd223: movdqa xmm0,XMMWORD PTR [rip+0xece095]        # 0x14178b2c0
0x008bd22b: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd230: movups xmm0,XMMWORD PTR [rip+0xd473b9]        # 0x1416045f0
0x008bd237: movups XMMWORD PTR [rax],xmm0
0x008bd23a: movsd  xmm0,QWORD PTR [rip+0xd473be]        # 0x141604600
0x008bd242: movsd  QWORD PTR [rax+0x10],xmm0
0x008bd247: movzx  ecx,WORD PTR [rip+0xd473ba]        # 0x141604608
0x008bd24e: mov    WORD PTR [rax+0x18],cx
0x008bd252: mov    BYTE PTR [rax+0x1a],0x0
0x008bd256: xor    r9d,r9d
0x008bd259: lea    rdx,[rbp-0x58]
0x008bd25d: lea    rcx,[rip+0x1d8d18c]        # 0x14264a3f0
0x008bd264: call   0x140ad9960
0x008bd269: nop
0x008bd26a: jmp    0x1408bd430
0x008bd26f: xorps  xmm0,xmm0
0x008bd272: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd276: mov    ecx,0x20
0x008bd27b: call   0x1400707d0
0x008bd280: mov    QWORD PTR [rbp-0x58],rax
0x008bd284: movdqa xmm0,XMMWORD PTR [rip+0xecdfc4]        # 0x14178b250
0x008bd28c: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd291: movups xmm0,XMMWORD PTR [rip+0xd47378]        # 0x141604610
0x008bd298: movups XMMWORD PTR [rax],xmm0
0x008bd29b: movzx  ecx,WORD PTR [rip+0xd4737e]        # 0x141604620
0x008bd2a2: mov    WORD PTR [rax+0x10],cx
0x008bd2a6: movzx  ecx,BYTE PTR [rip+0xd47375]        # 0x141604622
0x008bd2ad: mov    BYTE PTR [rax+0x12],cl
0x008bd2b0: mov    BYTE PTR [rax+0x13],0x0
0x008bd2b4: xor    r9d,r9d
0x008bd2b7: lea    rdx,[rbp-0x58]
0x008bd2bb: lea    rcx,[rip+0x1d8d12e]        # 0x14264a3f0
0x008bd2c2: call   0x140ad9960
0x008bd2c7: nop
0x008bd2c8: jmp    0x1408bd430
0x008bd2cd: xorps  xmm0,xmm0
0x008bd2d0: movups XMMWORD PTR [rbp-0x30],xmm0
0x008bd2d4: movdqa xmm1,XMMWORD PTR [rip+0xecdf34]        # 0x14178b210
0x008bd2dc: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008bd2e1: movsd  xmm0,QWORD PTR [rip+0xd4768f]        # 0x141604978
0x008bd2e9: movsd  QWORD PTR [rbp-0x30],xmm0
0x008bd2ee: mov    eax,DWORD PTR [rip+0xd4768c]        # 0x141604980
0x008bd2f4: mov    DWORD PTR [rbp-0x28],eax
0x008bd2f7: movzx  eax,WORD PTR [rip+0xd47686]        # 0x141604984
0x008bd2fe: mov    WORD PTR [rbp-0x24],ax
0x008bd302: movzx  eax,BYTE PTR [rip+0xd4767d]        # 0x141604986
0x008bd309: mov    BYTE PTR [rbp-0x22],al
0x008bd30c: mov    BYTE PTR [rbp-0x21],0x0
0x008bd310: xor    r9d,r9d
0x008bd313: lea    rdx,[rbp-0x30]
0x008bd317: lea    rcx,[rip+0x1d8d0d2]        # 0x14264a3f0
0x008bd31e: call   0x140ad9960
0x008bd323: nop
0x008bd324: jmp    0x1408bd018
0x008bd329: xorps  xmm0,xmm0
0x008bd32c: movups XMMWORD PTR [rbp-0x30],xmm0
0x008bd330: movdqa xmm1,XMMWORD PTR [rip+0xecded8]        # 0x14178b210
0x008bd338: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008bd33d: movsd  xmm0,QWORD PTR [rip+0xd47643]        # 0x141604988
0x008bd345: movsd  QWORD PTR [rbp-0x30],xmm0
0x008bd34a: mov    eax,DWORD PTR [rip+0xd47640]        # 0x141604990
0x008bd350: mov    DWORD PTR [rbp-0x28],eax
0x008bd353: movzx  eax,WORD PTR [rip+0xd4763a]        # 0x141604994
0x008bd35a: mov    WORD PTR [rbp-0x24],ax
0x008bd35e: movzx  eax,BYTE PTR [rip+0xd47631]        # 0x141604996
0x008bd365: mov    BYTE PTR [rbp-0x22],al
0x008bd368: mov    BYTE PTR [rbp-0x21],0x0
0x008bd36c: xor    r9d,r9d
0x008bd36f: lea    rdx,[rbp-0x30]
0x008bd373: lea    rcx,[rip+0x1d8d076]        # 0x14264a3f0
0x008bd37a: call   0x140ad9960
0x008bd37f: nop
0x008bd380: jmp    0x1408bd018
0x008bd385: xorps  xmm0,xmm0
0x008bd388: movups XMMWORD PTR [rbp-0x30],xmm0
0x008bd38c: movdqa xmm1,XMMWORD PTR [rip+0xecde6c]        # 0x14178b200
0x008bd394: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008bd399: movsd  xmm0,QWORD PTR [rip+0xd475f7]        # 0x141604998
0x008bd3a1: movsd  QWORD PTR [rbp-0x30],xmm0
0x008bd3a6: mov    eax,DWORD PTR [rip+0xd475f4]        # 0x1416049a0
0x008bd3ac: mov    DWORD PTR [rbp-0x28],eax
0x008bd3af: movzx  eax,WORD PTR [rip+0xd475ee]        # 0x1416049a4
0x008bd3b6: mov    WORD PTR [rbp-0x24],ax
0x008bd3ba: mov    BYTE PTR [rbp-0x22],0x0
0x008bd3be: xor    r9d,r9d
0x008bd3c1: lea    rdx,[rbp-0x30]
0x008bd3c5: lea    rcx,[rip+0x1d8d024]        # 0x14264a3f0
0x008bd3cc: call   0x140ad9960
0x008bd3d1: nop
0x008bd3d2: jmp    0x1408bd018
0x008bd3d7: xorps  xmm0,xmm0
0x008bd3da: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd3de: mov    ecx,0x20
0x008bd3e3: call   0x1400707d0
0x008bd3e8: mov    QWORD PTR [rbp-0x58],rax
0x008bd3ec: movdqa xmm0,XMMWORD PTR [rip+0xecde5c]        # 0x14178b250
0x008bd3f4: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd3f9: movups xmm0,XMMWORD PTR [rip+0xd475a8]        # 0x1416049a8
0x008bd400: movups XMMWORD PTR [rax],xmm0
0x008bd403: movzx  ecx,WORD PTR [rip+0xd475ae]        # 0x1416049b8
0x008bd40a: mov    WORD PTR [rax+0x10],cx
0x008bd40e: movzx  ecx,BYTE PTR [rip+0xd475a5]        # 0x1416049ba
0x008bd415: mov    BYTE PTR [rax+0x12],cl
0x008bd418: mov    BYTE PTR [rax+0x13],0x0
0x008bd41c: xor    r9d,r9d
0x008bd41f: lea    rdx,[rbp-0x58]
0x008bd423: lea    rcx,[rip+0x1d8cfc6]        # 0x14264a3f0
0x008bd42a: call   0x140ad9960
0x008bd42f: nop
0x008bd430: mov    rdx,QWORD PTR [rbp-0x40]
0x008bd434: cmp    rdx,0xf
0x008bd438: jbe    0x1408bd053
0x008bd43e: inc    rdx
0x008bd441: mov    rcx,QWORD PTR [rbp-0x58]
0x008bd445: jmp    0x1408bd029
0x008bd44a: xorps  xmm0,xmm0
0x008bd44d: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd451: mov    ecx,0x20
0x008bd456: call   0x1400707d0
0x008bd45b: mov    QWORD PTR [rbp-0x58],rax
0x008bd45f: movdqa xmm0,XMMWORD PTR [rip+0xecde09]        # 0x14178b270
0x008bd467: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd46c: movups xmm0,XMMWORD PTR [rip+0xd4754d]        # 0x1416049c0
0x008bd473: movups XMMWORD PTR [rax],xmm0
0x008bd476: mov    ecx,DWORD PTR [rip+0xd47554]        # 0x1416049d0
0x008bd47c: mov    DWORD PTR [rax+0x10],ecx
0x008bd47f: movzx  ecx,BYTE PTR [rip+0xd4754e]        # 0x1416049d4
0x008bd486: mov    BYTE PTR [rax+0x14],cl
0x008bd489: mov    BYTE PTR [rax+0x15],0x0
0x008bd48d: xor    r9d,r9d
0x008bd490: lea    rdx,[rbp-0x58]
0x008bd494: lea    rcx,[rip+0x1d8cf55]        # 0x14264a3f0
0x008bd49b: call   0x140ad9960
0x008bd4a0: nop
0x008bd4a1: jmp    0x1408bd430
0x008bd4a3: xorps  xmm0,xmm0
0x008bd4a6: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd4aa: mov    ecx,0x20
0x008bd4af: call   0x1400707d0
0x008bd4b4: mov    QWORD PTR [rbp-0x58],rax
0x008bd4b8: movdqa xmm0,XMMWORD PTR [rip+0xecdd90]        # 0x14178b250
0x008bd4c0: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd4c5: movups xmm0,XMMWORD PTR [rip+0xd4750c]        # 0x1416049d8
0x008bd4cc: movups XMMWORD PTR [rax],xmm0
0x008bd4cf: movzx  ecx,WORD PTR [rip+0xd47512]        # 0x1416049e8
0x008bd4d6: mov    WORD PTR [rax+0x10],cx
0x008bd4da: movzx  ecx,BYTE PTR [rip+0xd47509]        # 0x1416049ea
0x008bd4e1: mov    BYTE PTR [rax+0x12],cl
0x008bd4e4: mov    BYTE PTR [rax+0x13],0x0
0x008bd4e8: xor    r9d,r9d
0x008bd4eb: lea    rdx,[rbp-0x58]
0x008bd4ef: lea    rcx,[rip+0x1d8cefa]        # 0x14264a3f0
0x008bd4f6: call   0x140ad9960
0x008bd4fb: nop
0x008bd4fc: jmp    0x1408bd430
0x008bd501: xorps  xmm0,xmm0
0x008bd504: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd508: mov    ecx,0x20
0x008bd50d: call   0x1400707d0
0x008bd512: mov    QWORD PTR [rbp-0x58],rax
0x008bd516: movdqa xmm0,XMMWORD PTR [rip+0xecdd22]        # 0x14178b240
0x008bd51e: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd523: movups xmm0,XMMWORD PTR [rip+0xd474c6]        # 0x1416049f0
0x008bd52a: movups XMMWORD PTR [rax],xmm0
0x008bd52d: movzx  ecx,WORD PTR [rip+0xd474cc]        # 0x141604a00
0x008bd534: mov    WORD PTR [rax+0x10],cx
0x008bd538: mov    BYTE PTR [rax+0x12],0x0
0x008bd53c: xor    r9d,r9d
0x008bd53f: lea    rdx,[rbp-0x58]
0x008bd543: lea    rcx,[rip+0x1d8cea6]        # 0x14264a3f0
0x008bd54a: call   0x140ad9960
0x008bd54f: nop
0x008bd550: jmp    0x1408bd430
0x008bd555: xorps  xmm0,xmm0
0x008bd558: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd55c: mov    ecx,0x20
0x008bd561: call   0x1400707d0
0x008bd566: mov    QWORD PTR [rbp-0x58],rax
0x008bd56a: movdqa xmm0,XMMWORD PTR [rip+0xecdcfe]        # 0x14178b270
0x008bd572: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd577: movups xmm0,XMMWORD PTR [rip+0xd4748a]        # 0x141604a08
0x008bd57e: movups XMMWORD PTR [rax],xmm0
0x008bd581: mov    ecx,DWORD PTR [rip+0xd47491]        # 0x141604a18
0x008bd587: mov    DWORD PTR [rax+0x10],ecx
0x008bd58a: movzx  ecx,BYTE PTR [rip+0xd4748b]        # 0x141604a1c
0x008bd591: mov    BYTE PTR [rax+0x14],cl
0x008bd594: mov    BYTE PTR [rax+0x15],0x0
0x008bd598: xor    r9d,r9d
0x008bd59b: lea    rdx,[rbp-0x58]
0x008bd59f: lea    rcx,[rip+0x1d8ce4a]        # 0x14264a3f0
0x008bd5a6: call   0x140ad9960
0x008bd5ab: nop
0x008bd5ac: jmp    0x1408bd430
0x008bd5b1: xorps  xmm0,xmm0
0x008bd5b4: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd5b8: mov    ecx,0x20
0x008bd5bd: call   0x1400707d0
0x008bd5c2: mov    QWORD PTR [rbp-0x58],rax
0x008bd5c6: movdqa xmm0,XMMWORD PTR [rip+0xecdc62]        # 0x14178b230
0x008bd5ce: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd5d3: movups xmm0,XMMWORD PTR [rip+0xd47446]        # 0x141604a20
0x008bd5da: movups XMMWORD PTR [rax],xmm0
0x008bd5dd: movzx  ecx,BYTE PTR [rip+0xd4744c]        # 0x141604a30
0x008bd5e4: mov    BYTE PTR [rax+0x10],cl
0x008bd5e7: mov    BYTE PTR [rax+0x11],0x0
0x008bd5eb: xor    r9d,r9d
0x008bd5ee: lea    rdx,[rbp-0x58]
0x008bd5f2: lea    rcx,[rip+0x1d8cdf7]        # 0x14264a3f0
0x008bd5f9: call   0x140ad9960
0x008bd5fe: nop
0x008bd5ff: jmp    0x1408bd430
0x008bd604: xorps  xmm0,xmm0
0x008bd607: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd60b: mov    ecx,0x20
0x008bd610: call   0x1400707d0
0x008bd615: mov    QWORD PTR [rbp-0x58],rax
0x008bd619: movdqa xmm0,XMMWORD PTR [rip+0xecdc1f]        # 0x14178b240
0x008bd621: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd626: movups xmm0,XMMWORD PTR [rip+0xd4740b]        # 0x141604a38
0x008bd62d: movups XMMWORD PTR [rax],xmm0
0x008bd630: movzx  ecx,WORD PTR [rip+0xd47411]        # 0x141604a48
0x008bd637: mov    WORD PTR [rax+0x10],cx
0x008bd63b: mov    BYTE PTR [rax+0x12],0x0
0x008bd63f: xor    r9d,r9d
0x008bd642: lea    rdx,[rbp-0x58]
0x008bd646: lea    rcx,[rip+0x1d8cda3]        # 0x14264a3f0
0x008bd64d: call   0x140ad9960
0x008bd652: nop
0x008bd653: jmp    0x1408bd430
0x008bd658: xorps  xmm0,xmm0
0x008bd65b: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd65f: mov    ecx,0x30
0x008bd664: call   0x1400707d0
0x008bd669: mov    QWORD PTR [rbp-0x58],rax
0x008bd66d: movdqa xmm0,XMMWORD PTR [rip+0xecdccb]        # 0x14178b340
0x008bd675: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd67a: movups xmm0,XMMWORD PTR [rip+0xd473cf]        # 0x141604a50
0x008bd681: movups XMMWORD PTR [rax],xmm0
0x008bd684: movups xmm1,XMMWORD PTR [rip+0xd473d5]        # 0x141604a60
0x008bd68b: movups XMMWORD PTR [rax+0x10],xmm1
0x008bd68f: movzx  ecx,WORD PTR [rip+0xd473da]        # 0x141604a70
0x008bd696: mov    WORD PTR [rax+0x20],cx
0x008bd69a: mov    BYTE PTR [rax+0x22],0x0
0x008bd69e: xor    r9d,r9d
0x008bd6a1: lea    rdx,[rbp-0x58]
0x008bd6a5: lea    rcx,[rip+0x1d8cd44]        # 0x14264a3f0
0x008bd6ac: call   0x140ad9960
0x008bd6b1: nop
0x008bd6b2: jmp    0x1408bd430
0x008bd6b7: xorps  xmm0,xmm0
0x008bd6ba: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd6be: mov    ecx,0x20
0x008bd6c3: call   0x1400707d0
0x008bd6c8: mov    QWORD PTR [rbp-0x58],rax
0x008bd6cc: movdqa xmm0,XMMWORD PTR [rip+0xecdb4c]        # 0x14178b220
0x008bd6d4: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd6d9: movups xmm0,XMMWORD PTR [rip+0xd47398]        # 0x141604a78
0x008bd6e0: movups XMMWORD PTR [rax],xmm0
0x008bd6e3: mov    BYTE PTR [rax+0x10],0x0
0x008bd6e7: xor    r9d,r9d
0x008bd6ea: lea    rdx,[rbp-0x58]
0x008bd6ee: lea    rcx,[rip+0x1d8ccfb]        # 0x14264a3f0
0x008bd6f5: call   0x140ad9960
0x008bd6fa: nop
0x008bd6fb: jmp    0x1408bd430
0x008bd700: xorps  xmm0,xmm0
0x008bd703: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd707: mov    ecx,0x20
0x008bd70c: call   0x1400707d0
0x008bd711: mov    QWORD PTR [rbp-0x58],rax
0x008bd715: movdqa xmm0,XMMWORD PTR [rip+0xecdb23]        # 0x14178b240
0x008bd71d: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd722: movups xmm0,XMMWORD PTR [rip+0xd47367]        # 0x141604a90
0x008bd729: movups XMMWORD PTR [rax],xmm0
0x008bd72c: movzx  ecx,WORD PTR [rip+0xd4736d]        # 0x141604aa0
0x008bd733: mov    WORD PTR [rax+0x10],cx
0x008bd737: mov    BYTE PTR [rax+0x12],0x0
0x008bd73b: xor    r9d,r9d
0x008bd73e: lea    rdx,[rbp-0x58]
0x008bd742: lea    rcx,[rip+0x1d8cca7]        # 0x14264a3f0
0x008bd749: call   0x140ad9960
0x008bd74e: nop
0x008bd74f: jmp    0x1408bd430
0x008bd754: xorps  xmm0,xmm0
0x008bd757: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd75b: mov    ecx,0x20
0x008bd760: call   0x1400707d0
0x008bd765: mov    QWORD PTR [rbp-0x58],rax
0x008bd769: movdqa xmm0,XMMWORD PTR [rip+0xecdaff]        # 0x14178b270
0x008bd771: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd776: movups xmm0,XMMWORD PTR [rip+0xd4732b]        # 0x141604aa8
0x008bd77d: movups XMMWORD PTR [rax],xmm0
0x008bd780: mov    ecx,DWORD PTR [rip+0xd47332]        # 0x141604ab8
0x008bd786: mov    DWORD PTR [rax+0x10],ecx
0x008bd789: movzx  ecx,BYTE PTR [rip+0xd4732c]        # 0x141604abc
0x008bd790: mov    BYTE PTR [rax+0x14],cl
0x008bd793: mov    BYTE PTR [rax+0x15],0x0
0x008bd797: xor    r9d,r9d
0x008bd79a: lea    rdx,[rbp-0x58]
0x008bd79e: lea    rcx,[rip+0x1d8cc4b]        # 0x14264a3f0
0x008bd7a5: call   0x140ad9960
0x008bd7aa: nop
0x008bd7ab: jmp    0x1408bd430
0x008bd7b0: xorps  xmm0,xmm0
0x008bd7b3: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd7b7: mov    ecx,0x20
0x008bd7bc: call   0x1400707d0
0x008bd7c1: mov    QWORD PTR [rbp-0x58],rax
0x008bd7c5: movdqa xmm0,XMMWORD PTR [rip+0xecdab3]        # 0x14178b280
0x008bd7cd: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd7d2: movups xmm0,XMMWORD PTR [rip+0xd472e7]        # 0x141604ac0
0x008bd7d9: movups XMMWORD PTR [rax],xmm0
0x008bd7dc: mov    ecx,DWORD PTR [rip+0xd472ee]        # 0x141604ad0
0x008bd7e2: mov    DWORD PTR [rax+0x10],ecx
0x008bd7e5: movzx  ecx,WORD PTR [rip+0xd472e8]        # 0x141604ad4
0x008bd7ec: mov    WORD PTR [rax+0x14],cx
0x008bd7f0: mov    BYTE PTR [rax+0x16],0x0
0x008bd7f4: xor    r9d,r9d
0x008bd7f7: lea    rdx,[rbp-0x58]
0x008bd7fb: lea    rcx,[rip+0x1d8cbee]        # 0x14264a3f0
0x008bd802: call   0x140ad9960
0x008bd807: nop
0x008bd808: jmp    0x1408bd430
0x008bd80d: xorps  xmm0,xmm0
0x008bd810: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd814: mov    ecx,0x20
0x008bd819: call   0x1400707d0
0x008bd81e: mov    QWORD PTR [rbp-0x58],rax
0x008bd822: movdqa xmm0,XMMWORD PTR [rip+0xecda96]        # 0x14178b2c0
0x008bd82a: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd82f: movups xmm0,XMMWORD PTR [rip+0xd472a2]        # 0x141604ad8
0x008bd836: movups XMMWORD PTR [rax],xmm0
0x008bd839: movsd  xmm0,QWORD PTR [rip+0xd472a7]        # 0x141604ae8
0x008bd841: movsd  QWORD PTR [rax+0x10],xmm0
0x008bd846: movzx  ecx,WORD PTR [rip+0xd472a3]        # 0x141604af0
0x008bd84d: mov    WORD PTR [rax+0x18],cx
0x008bd851: mov    BYTE PTR [rax+0x1a],0x0
0x008bd855: xor    r9d,r9d
0x008bd858: lea    rdx,[rbp-0x58]
0x008bd85c: lea    rcx,[rip+0x1d8cb8d]        # 0x14264a3f0
0x008bd863: call   0x140ad9960
0x008bd868: nop
0x008bd869: jmp    0x1408bd430
0x008bd86e: xorps  xmm0,xmm0
0x008bd871: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd875: mov    ecx,0x20
0x008bd87a: call   0x1400707d0
0x008bd87f: mov    QWORD PTR [rbp-0x58],rax
0x008bd883: movdqa xmm0,XMMWORD PTR [rip+0xecd995]        # 0x14178b220
0x008bd88b: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd890: movups xmm0,XMMWORD PTR [rip+0xd46f41]        # 0x1416047d8
0x008bd897: movups XMMWORD PTR [rax],xmm0
0x008bd89a: mov    BYTE PTR [rax+0x10],0x0
0x008bd89e: xor    r9d,r9d
0x008bd8a1: lea    rdx,[rbp-0x58]
0x008bd8a5: lea    rcx,[rip+0x1d8cb44]        # 0x14264a3f0
0x008bd8ac: call   0x140ad9960
0x008bd8b1: nop
0x008bd8b2: jmp    0x1408bd430
0x008bd8b7: xorps  xmm0,xmm0
0x008bd8ba: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd8be: mov    ecx,0x20
0x008bd8c3: call   0x1400707d0
0x008bd8c8: mov    QWORD PTR [rbp-0x58],rax
0x008bd8cc: movdqa xmm0,XMMWORD PTR [rip+0xecd98c]        # 0x14178b260
0x008bd8d4: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd8d9: movups xmm0,XMMWORD PTR [rip+0xd46f10]        # 0x1416047f0
0x008bd8e0: movups XMMWORD PTR [rax],xmm0
0x008bd8e3: mov    ecx,DWORD PTR [rip+0xd46f17]        # 0x141604800
0x008bd8e9: mov    DWORD PTR [rax+0x10],ecx
0x008bd8ec: mov    BYTE PTR [rax+0x14],0x0
0x008bd8f0: xor    r9d,r9d
0x008bd8f3: lea    rdx,[rbp-0x58]
0x008bd8f7: lea    rcx,[rip+0x1d8caf2]        # 0x14264a3f0
0x008bd8fe: call   0x140ad9960
0x008bd903: nop
0x008bd904: jmp    0x1408bd430
0x008bd909: xorps  xmm0,xmm0
0x008bd90c: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bd910: mov    ecx,0x20
0x008bd915: call   0x1400707d0
0x008bd91a: mov    QWORD PTR [rbp-0x58],rax
0x008bd91e: movdqa xmm0,XMMWORD PTR [rip+0xecd93a]        # 0x14178b260
0x008bd926: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bd92b: movups xmm0,XMMWORD PTR [rip+0xd46ed6]        # 0x141604808
0x008bd932: movups XMMWORD PTR [rax],xmm0
0x008bd935: mov    ecx,DWORD PTR [rip+0xd46edd]        # 0x141604818
0x008bd93b: mov    DWORD PTR [rax+0x10],ecx
0x008bd93e: mov    BYTE PTR [rax+0x14],0x0
0x008bd942: xor    r9d,r9d
0x008bd945: lea    rdx,[rbp-0x58]
0x008bd949: lea    rcx,[rip+0x1d8caa0]        # 0x14264a3f0
0x008bd950: call   0x140ad9960
0x008bd955: nop
0x008bd956: jmp    0x1408bd430
0x008bd95b: lea    rcx,[rbp-0x58]
0x008bd95f: call   0x1400681b0
0x008bd964: xorps  xmm1,xmm1
0x008bd967: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x008bd96c: mov    r8d,0x16
0x008bd972: lea    rdx,[rip+0xd46ea7]        # 0x141604820
0x008bd979: lea    rcx,[rbp-0x58]
0x008bd97d: call   0x1400681f0
0x008bd982: nop
0x008bd983: xor    r9d,r9d
0x008bd986: lea    rdx,[rbp-0x58]
0x008bd98a: lea    rcx,[rip+0x1d8ca5f]        # 0x14264a3f0
0x008bd991: call   0x140ad9960
0x008bd996: nop
0x008bd997: lea    rcx,[rbp-0x58]
0x008bd99b: call   0x14006f850
0x008bd9a0: jmp    0x1408bd053
0x008bd9a5: lea    rdx,[rip+0xd46e8c]        # 0x141604838
0x008bd9ac: lea    rcx,[rbp-0x58]
0x008bd9b0: call   0x140068150
0x008bd9b5: nop
0x008bd9b6: xor    r9d,r9d
0x008bd9b9: lea    rdx,[rbp-0x58]
0x008bd9bd: lea    rcx,[rip+0x1d8ca2c]        # 0x14264a3f0
0x008bd9c4: call   0x140ad9960
0x008bd9c9: nop
0x008bd9ca: lea    rcx,[rbp-0x58]
0x008bd9ce: call   0x14006f850
0x008bd9d3: jmp    0x1408bd053
0x008bd9d8: lea    rdx,[rip+0xd46e79]        # 0x141604858
0x008bd9df: lea    rcx,[rbp-0x58]
0x008bd9e3: call   0x140068150
0x008bd9e8: nop
0x008bd9e9: xor    r9d,r9d
0x008bd9ec: lea    rdx,[rbp-0x58]
0x008bd9f0: lea    rcx,[rip+0x1d8c9f9]        # 0x14264a3f0
0x008bd9f7: call   0x140ad9960
0x008bd9fc: nop
0x008bd9fd: lea    rcx,[rbp-0x58]
0x008bda01: call   0x14006f850
0x008bda06: jmp    0x1408bd053
0x008bda0b: lea    rdx,[rip+0xd46e5e]        # 0x141604870
0x008bda12: lea    rcx,[rbp-0x58]
0x008bda16: call   0x140068150
0x008bda1b: nop
0x008bda1c: xor    r9d,r9d
0x008bda1f: lea    rdx,[rbp-0x58]
0x008bda23: lea    rcx,[rip+0x1d8c9c6]        # 0x14264a3f0
0x008bda2a: call   0x140ad9960
0x008bda2f: nop
0x008bda30: lea    rcx,[rbp-0x58]
0x008bda34: call   0x14006f850
0x008bda39: jmp    0x1408bd053
0x008bda3e: lea    rdx,[rip+0xd46e43]        # 0x141604888
0x008bda45: lea    rcx,[rbp-0x58]
0x008bda49: call   0x140068150
0x008bda4e: nop
0x008bda4f: xor    r9d,r9d
0x008bda52: lea    rdx,[rbp-0x58]
0x008bda56: lea    rcx,[rip+0x1d8c993]        # 0x14264a3f0
0x008bda5d: call   0x140ad9960
0x008bda62: nop
0x008bda63: lea    rcx,[rbp-0x58]
0x008bda67: call   0x14006f850
0x008bda6c: jmp    0x1408bd053
0x008bda71: lea    rdx,[rip+0xd46e28]        # 0x1416048a0
0x008bda78: lea    rcx,[rbp-0x58]
0x008bda7c: call   0x140068150
0x008bda81: nop
0x008bda82: xor    r9d,r9d
0x008bda85: lea    rdx,[rbp-0x58]
0x008bda89: lea    rcx,[rip+0x1d8c960]        # 0x14264a3f0
0x008bda90: call   0x140ad9960
0x008bda95: nop
0x008bda96: lea    rcx,[rbp-0x58]
0x008bda9a: call   0x14006f850
0x008bda9f: jmp    0x1408bd053
0x008bdaa4: lea    rdx,[rip+0xd46e0d]        # 0x1416048b8
0x008bdaab: lea    rcx,[rbp-0x58]
0x008bdaaf: call   0x140068150
0x008bdab4: nop
0x008bdab5: xor    r9d,r9d
0x008bdab8: lea    rdx,[rbp-0x58]
0x008bdabc: lea    rcx,[rip+0x1d8c92d]        # 0x14264a3f0
0x008bdac3: call   0x140ad9960
0x008bdac8: nop
0x008bdac9: lea    rcx,[rbp-0x58]
0x008bdacd: call   0x14006f850
0x008bdad2: jmp    0x1408bd053
0x008bdad7: lea    rdx,[rip+0xd46df2]        # 0x1416048d0
0x008bdade: lea    rcx,[rbp-0x58]
0x008bdae2: call   0x140068150
0x008bdae7: nop
0x008bdae8: xor    r9d,r9d
0x008bdaeb: lea    rdx,[rbp-0x58]
0x008bdaef: lea    rcx,[rip+0x1d8c8fa]        # 0x14264a3f0
0x008bdaf6: call   0x140ad9960
0x008bdafb: nop
0x008bdafc: lea    rcx,[rbp-0x58]
0x008bdb00: call   0x14006f850
0x008bdb05: jmp    0x1408bd053
0x008bdb0a: lea    rdx,[rip+0xd46ddf]        # 0x1416048f0
0x008bdb11: lea    rcx,[rbp-0x58]
0x008bdb15: call   0x140068150
0x008bdb1a: nop
0x008bdb1b: xor    r9d,r9d
0x008bdb1e: lea    rdx,[rbp-0x58]
0x008bdb22: lea    rcx,[rip+0x1d8c8c7]        # 0x14264a3f0
0x008bdb29: call   0x140ad9960
0x008bdb2e: nop
0x008bdb2f: lea    rcx,[rbp-0x58]
0x008bdb33: call   0x14006f850
0x008bdb38: jmp    0x1408bd053
0x008bdb3d: lea    rdx,[rip+0xd46dcc]        # 0x141604910
0x008bdb44: lea    rcx,[rbp-0x58]
0x008bdb48: call   0x140068150
0x008bdb4d: nop
0x008bdb4e: xor    r9d,r9d
0x008bdb51: lea    rdx,[rbp-0x58]
0x008bdb55: lea    rcx,[rip+0x1d8c894]        # 0x14264a3f0
0x008bdb5c: call   0x140ad9960
0x008bdb61: nop
0x008bdb62: lea    rcx,[rbp-0x58]
0x008bdb66: call   0x14006f850
0x008bdb6b: jmp    0x1408bd053
0x008bdb70: lea    rdx,[rip+0xd46db9]        # 0x141604930
0x008bdb77: lea    rcx,[rbp-0x58]
0x008bdb7b: call   0x140068150
0x008bdb80: nop
0x008bdb81: xor    r9d,r9d
0x008bdb84: lea    rdx,[rbp-0x58]
0x008bdb88: lea    rcx,[rip+0x1d8c861]        # 0x14264a3f0
0x008bdb8f: call   0x140ad9960
0x008bdb94: nop
0x008bdb95: lea    rcx,[rbp-0x58]
0x008bdb99: call   0x14006f850
0x008bdb9e: jmp    0x1408bd053
0x008bdba3: lea    rdx,[rip+0xd46d9e]        # 0x141604948
0x008bdbaa: lea    rcx,[rbp-0x58]
0x008bdbae: call   0x140068150
0x008bdbb3: nop
0x008bdbb4: xor    r9d,r9d
0x008bdbb7: lea    rdx,[rbp-0x58]
0x008bdbbb: lea    rcx,[rip+0x1d8c82e]        # 0x14264a3f0
0x008bdbc2: call   0x140ad9960
0x008bdbc7: nop
0x008bdbc8: lea    rcx,[rbp-0x58]
0x008bdbcc: call   0x14006f850
0x008bdbd1: jmp    0x1408bd053
0x008bdbd6: lea    rdx,[rip+0xd46d83]        # 0x141604960
0x008bdbdd: lea    rcx,[rbp-0x58]
0x008bdbe1: call   0x140068150
0x008bdbe6: nop
0x008bdbe7: xor    r9d,r9d
0x008bdbea: lea    rdx,[rbp-0x58]
0x008bdbee: lea    rcx,[rip+0x1d8c7fb]        # 0x14264a3f0
0x008bdbf5: call   0x140ad9960
0x008bdbfa: nop
0x008bdbfb: lea    rcx,[rbp-0x58]
0x008bdbff: call   0x14006f850
0x008bdc04: jmp    0x1408bd053
0x008bdc09: lea    rdx,[rip+0xd47028]        # 0x141604c38
0x008bdc10: lea    rcx,[rbp-0x58]
0x008bdc14: call   0x140068150
0x008bdc19: nop
0x008bdc1a: xor    r9d,r9d
0x008bdc1d: lea    rdx,[rbp-0x58]
0x008bdc21: lea    rcx,[rip+0x1d8c7c8]        # 0x14264a3f0
0x008bdc28: call   0x140ad9960
0x008bdc2d: nop
0x008bdc2e: lea    rcx,[rbp-0x58]
0x008bdc32: call   0x14006f850
0x008bdc37: jmp    0x1408bd053
0x008bdc3c: lea    rdx,[rip+0xd47015]        # 0x141604c58
0x008bdc43: lea    rcx,[rbp-0x58]
0x008bdc47: call   0x140068150
0x008bdc4c: nop
0x008bdc4d: xor    r9d,r9d
0x008bdc50: lea    rdx,[rbp-0x58]
0x008bdc54: lea    rcx,[rip+0x1d8c795]        # 0x14264a3f0
0x008bdc5b: call   0x140ad9960
0x008bdc60: nop
0x008bdc61: lea    rcx,[rbp-0x58]
0x008bdc65: call   0x14006f850
0x008bdc6a: jmp    0x1408bd053
0x008bdc6f: lea    rdx,[rip+0xd46ffa]        # 0x141604c70
0x008bdc76: lea    rcx,[rbp-0x58]
0x008bdc7a: call   0x140068150
0x008bdc7f: nop
0x008bdc80: xor    r9d,r9d
0x008bdc83: lea    rdx,[rbp-0x58]
0x008bdc87: lea    rcx,[rip+0x1d8c762]        # 0x14264a3f0
0x008bdc8e: call   0x140ad9960
0x008bdc93: nop
0x008bdc94: lea    rcx,[rbp-0x58]
0x008bdc98: call   0x14006f850
0x008bdc9d: jmp    0x1408bd053
0x008bdca2: lea    rdx,[rip+0xd46fe7]        # 0x141604c90
0x008bdca9: lea    rcx,[rbp-0x58]
0x008bdcad: call   0x140068150
0x008bdcb2: nop
0x008bdcb3: xor    r9d,r9d
0x008bdcb6: lea    rdx,[rbp-0x58]
0x008bdcba: lea    rcx,[rip+0x1d8c72f]        # 0x14264a3f0
0x008bdcc1: call   0x140ad9960
0x008bdcc6: nop
0x008bdcc7: lea    rcx,[rbp-0x58]
0x008bdccb: call   0x14006f850
0x008bdcd0: jmp    0x1408bd053
0x008bdcd5: lea    rdx,[rip+0xd46fcc]        # 0x141604ca8
0x008bdcdc: lea    rcx,[rbp-0x58]
0x008bdce0: call   0x140068150
0x008bdce5: nop
0x008bdce6: xor    r9d,r9d
0x008bdce9: lea    rdx,[rbp-0x58]
0x008bdced: lea    rcx,[rip+0x1d8c6fc]        # 0x14264a3f0
0x008bdcf4: call   0x140ad9960
0x008bdcf9: nop
0x008bdcfa: lea    rcx,[rbp-0x58]
0x008bdcfe: call   0x14006f850
0x008bdd03: jmp    0x1408bd053
0x008bdd08: lea    rdx,[rip+0xd46fb9]        # 0x141604cc8
0x008bdd0f: lea    rcx,[rbp-0x58]
0x008bdd13: call   0x140068150
0x008bdd18: nop
0x008bdd19: xor    r9d,r9d
0x008bdd1c: lea    rdx,[rbp-0x58]
0x008bdd20: lea    rcx,[rip+0x1d8c6c9]        # 0x14264a3f0
0x008bdd27: call   0x140ad9960
0x008bdd2c: nop
0x008bdd2d: lea    rcx,[rbp-0x58]
0x008bdd31: call   0x14006f850
0x008bdd36: jmp    0x1408bd053
0x008bdd3b: lea    rdx,[rip+0xd46fa6]        # 0x141604ce8
0x008bdd42: lea    rcx,[rbp-0x58]
0x008bdd46: call   0x140068150
0x008bdd4b: nop
0x008bdd4c: xor    r9d,r9d
0x008bdd4f: lea    rdx,[rbp-0x58]
0x008bdd53: lea    rcx,[rip+0x1d8c696]        # 0x14264a3f0
0x008bdd5a: call   0x140ad9960
0x008bdd5f: nop
0x008bdd60: lea    rcx,[rbp-0x58]
0x008bdd64: call   0x14006f850
0x008bdd69: jmp    0x1408bd053
0x008bdd6e: lea    rdx,[rip+0xd46f8b]        # 0x141604d00
0x008bdd75: lea    rcx,[rbp-0x58]
0x008bdd79: call   0x140068150
0x008bdd7e: nop
0x008bdd7f: xor    r9d,r9d
0x008bdd82: lea    rdx,[rbp-0x58]
0x008bdd86: lea    rcx,[rip+0x1d8c663]        # 0x14264a3f0
0x008bdd8d: call   0x140ad9960
0x008bdd92: nop
0x008bdd93: lea    rcx,[rbp-0x58]
0x008bdd97: call   0x14006f850
0x008bdd9c: jmp    0x1408bd053
0x008bdda1: lea    rdx,[rip+0xd46f80]        # 0x141604d28
0x008bdda8: lea    rcx,[rbp-0x58]
0x008bddac: call   0x140068150
0x008bddb1: nop
0x008bddb2: xor    r9d,r9d
0x008bddb5: lea    rdx,[rbp-0x58]
0x008bddb9: lea    rcx,[rip+0x1d8c630]        # 0x14264a3f0
0x008bddc0: call   0x140ad9960
0x008bddc5: nop
0x008bddc6: lea    rcx,[rbp-0x58]
0x008bddca: call   0x14006f850
0x008bddcf: jmp    0x1408bd053
0x008bddd4: lea    rdx,[rip+0xd46f6d]        # 0x141604d48
0x008bdddb: lea    rcx,[rbp-0x58]
0x008bdddf: call   0x140068150
0x008bdde4: nop
0x008bdde5: xor    r9d,r9d
0x008bdde8: lea    rdx,[rbp-0x58]
0x008bddec: lea    rcx,[rip+0x1d8c5fd]        # 0x14264a3f0
0x008bddf3: call   0x140ad9960
0x008bddf8: nop
0x008bddf9: lea    rcx,[rbp-0x58]
0x008bddfd: call   0x14006f850
0x008bde02: jmp    0x1408bd053
0x008bde07: lea    rdx,[rip+0xd46f5a]        # 0x141604d68
0x008bde0e: lea    rcx,[rbp-0x58]
0x008bde12: call   0x140068150
0x008bde17: nop
0x008bde18: xor    r9d,r9d
0x008bde1b: lea    rdx,[rbp-0x58]
0x008bde1f: lea    rcx,[rip+0x1d8c5ca]        # 0x14264a3f0
0x008bde26: call   0x140ad9960
0x008bde2b: nop
0x008bde2c: lea    rcx,[rbp-0x58]
0x008bde30: call   0x14006f850
0x008bde35: jmp    0x1408bd053
0x008bde3a: lea    rdx,[rip+0xd46f37]        # 0x141604d78
0x008bde41: lea    rcx,[rbp-0x58]
0x008bde45: call   0x140068150
0x008bde4a: nop
0x008bde4b: xor    r9d,r9d
0x008bde4e: lea    rdx,[rbp-0x58]
0x008bde52: lea    rcx,[rip+0x1d8c597]        # 0x14264a3f0
0x008bde59: call   0x140ad9960
0x008bde5e: nop
0x008bde5f: lea    rcx,[rbp-0x58]
0x008bde63: call   0x14006f850
0x008bde68: jmp    0x1408bd053
0x008bde6d: cmp    BYTE PTR [rip+0x1adc53c],0x0        # 0x14239a3b0
0x008bde74: je     0x1408bd053
0x008bde7a: cmp    eax,0x4
0x008bde7d: je     0x1408bd053
0x008bde83: mov    DWORD PTR [rip+0x1d8c5ef],0x1010303        # 0x14264a47c
0x008bde8d: mov    DWORD PTR [rip+0x1d8c5dd],0x14        # 0x14264a474
0x008bde97: mov    DWORD PTR [rip+0x1d8c5d7],0xc        # 0x14264a478
0x008bdea1: xorps  xmm0,xmm0
0x008bdea4: mov    ecx,0x20
0x008bdea9: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bdead: cmp    DWORD PTR [rip+0x1adc558],0xffffffff        # 0x14239a40c
0x008bdeb4: je     0x1408be059
0x008bdeba: call   0x1400707d0
0x008bdebf: mov    QWORD PTR [rbp-0x58],rax
0x008bdec3: movdqa xmm0,XMMWORD PTR [rip+0xecd3b5]        # 0x14178b280
0x008bdecb: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008bded0: movups xmm0,XMMWORD PTR [rip+0xe00ea9]        # 0x1416bed80
0x008bded7: movups XMMWORD PTR [rax],xmm0
0x008bdeda: mov    ecx,DWORD PTR [rip+0xe00eb0]        # 0x1416bed90
0x008bdee0: mov    DWORD PTR [rax+0x10],ecx
0x008bdee3: movzx  ecx,WORD PTR [rip+0xe00eaa]        # 0x1416bed94
0x008bdeea: mov    WORD PTR [rax+0x14],cx
0x008bdeee: mov    BYTE PTR [rax+0x16],0x0
0x008bdef2: xor    r9d,r9d
0x008bdef5: lea    rdx,[rbp-0x58]
0x008bdef9: lea    rcx,[rip+0x1d8c4f0]        # 0x14264a3f0
0x008bdf00: call   0x140ad9960
0x008bdf05: nop
0x008bdf06: lea    rcx,[rbp-0x58]
0x008bdf0a: call   0x14006f850
0x008bdf0f: xorps  xmm0,xmm0
0x008bdf12: movups XMMWORD PTR [rbp-0x30],xmm0
0x008bdf16: movdqa xmm1,XMMWORD PTR [rip+0xecd202]        # 0x14178b120
0x008bdf1e: movdqu XMMWORD PTR [rbp-0x20],xmm1
0x008bdf23: mov    BYTE PTR [rbp-0x30],0x0
0x008bdf27: lea    rdx,[rbp-0x30]
0x008bdf2b: mov    ecx,DWORD PTR [rip+0x1adc4db]        # 0x14239a40c
0x008bdf31: call   0x14052c2b0
0x008bdf36: xor    r9d,r9d
0x008bdf39: lea    rdx,[rbp-0x30]
0x008bdf3d: lea    rcx,[rip+0x1d8c4ac]        # 0x14264a3f0
0x008bdf44: call   0x140ad9960
0x008bdf49: xorps  xmm0,xmm0
0x008bdf4c: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bdf50: movdqa xmm1,XMMWORD PTR [rip+0xecd1d8]        # 0x14178b130
0x008bdf58: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x008bdf5d: mov    WORD PTR [rbp-0x58],0x2f
0x008bdf63: xor    r9d,r9d
0x008bdf66: lea    rdx,[rbp-0x58]
0x008bdf6a: lea    rcx,[rip+0x1d8c47f]        # 0x14264a3f0
0x008bdf71: call   0x140ad9960
0x008bdf76: nop
0x008bdf77: mov    rdx,QWORD PTR [rbp-0x40]
0x008bdf7b: cmp    rdx,0xf
0x008bdf7f: jbe    0x1408bdfb2
0x008bdf81: inc    rdx
0x008bdf84: mov    rcx,QWORD PTR [rbp-0x58]
0x008bdf88: mov    rax,rcx
0x008bdf8b: cmp    rdx,0x1000
0x008bdf92: jb     0x1408bdfad
0x008bdf94: add    rdx,0x27
0x008bdf98: mov    rcx,QWORD PTR [rcx-0x8]
0x008bdf9c: sub    rax,rcx
0x008bdf9f: add    rax,0xfffffffffffffff8
0x008bdfa3: cmp    rax,0x1f
0x008bdfa7: ja     0x1408be047
0x008bdfad: call   0x141539680
0x008bdfb2: mov    rcx,QWORD PTR [rip+0x1adc437]        # 0x14239a3f0
0x008bdfb9: sub    rcx,QWORD PTR [rip+0x1adc428]        # 0x14239a3e8
0x008bdfc0: sar    rcx,0x3
0x008bdfc4: lea    rdx,[rbp-0x30]
0x008bdfc8: call   0x14052c2b0
0x008bdfcd: xor    r9d,r9d
0x008bdfd0: lea    rdx,[rbp-0x30]
0x008bdfd4: lea    rcx,[rip+0x1d8c415]        # 0x14264a3f0
0x008bdfdb: call   0x140ad9960
0x008bdfe0: xorps  xmm0,xmm0
0x008bdfe3: movups XMMWORD PTR [rbp-0x58],xmm0
0x008bdfe7: movdqa xmm1,XMMWORD PTR [rip+0xecd151]        # 0x14178b140
0x008bdfef: movdqu XMMWORD PTR [rbp-0x48],xmm1
0x008bdff4: mov    eax,0x2020
0x008bdff9: mov    WORD PTR [rbp-0x58],ax
0x008bdffd: mov    BYTE PTR [rbp-0x56],0x0
0x008be001: xor    r9d,r9d
0x008be004: lea    rdx,[rbp-0x58]
0x008be008: lea    rcx,[rip+0x1d8c3e1]        # 0x14264a3f0
0x008be00f: call   0x140ad9960
0x008be014: nop
0x008be015: mov    rdx,QWORD PTR [rbp-0x40]
0x008be019: cmp    rdx,0xf
0x008be01d: jbe    0x1408be054
0x008be01f: inc    rdx
0x008be022: mov    rcx,QWORD PTR [rbp-0x58]
0x008be026: mov    rax,rcx
0x008be029: cmp    rdx,0x1000
0x008be030: jb     0x1408be04e
0x008be032: add    rdx,0x27
0x008be036: mov    rcx,QWORD PTR [rcx-0x8]
0x008be03a: sub    rax,rcx
0x008be03d: add    rax,0xfffffffffffffff8
0x008be041: cmp    rax,0x1f
0x008be045: jbe    0x1408be04e
0x008be047: call   QWORD PTR [rip+0xd27adb]        # 0x1415e5b28
0x008be04d: int3
0x008be04e: call   0x141539680
0x008be053: nop
0x008be054: jmp    0x1408bd018
0x008be059: call   0x1400707d0
0x008be05e: mov    rdx,rax
0x008be061: mov    QWORD PTR [rbp-0x58],rax
0x008be065: movdqa xmm0,XMMWORD PTR [rip+0xecd223]        # 0x14178b290
0x008be06d: movdqu XMMWORD PTR [rbp-0x48],xmm0
0x008be072: movups xmm0,XMMWORD PTR [rip+0xe00d1f]        # 0x1416bed98
0x008be079: movups XMMWORD PTR [rax],xmm0
0x008be07c: mov    ecx,DWORD PTR [rip+0xe00d26]        # 0x1416beda8
0x008be082: mov    DWORD PTR [rax+0x10],ecx
0x008be085: movzx  ecx,WORD PTR [rip+0xe00d20]        # 0x1416bedac
0x008be08c: mov    WORD PTR [rax+0x14],cx
0x008be090: movzx  eax,BYTE PTR [rip+0xe00d17]        # 0x1416bedae
0x008be097: mov    BYTE PTR [rdx+0x16],al
0x008be09a: mov    BYTE PTR [rdx+0x17],0x0
0x008be09e: xor    r9d,r9d
0x008be0a1: lea    rdx,[rbp-0x58]
0x008be0a5: lea    rcx,[rip+0x1d8c344]        # 0x14264a3f0
0x008be0ac: call   0x140ad9960
0x008be0b1: nop
0x008be0b2: mov    rdx,QWORD PTR [rbp-0x40]
0x008be0b6: cmp    rdx,0xf
0x008be0ba: jbe    0x1408bd053
0x008be0c0: inc    rdx
0x008be0c3: mov    rcx,QWORD PTR [rbp-0x58]
0x008be0c7: mov    rax,rcx
0x008be0ca: cmp    rdx,0x1000
0x008be0d1: jb     0x1408bd04e
0x008be0d7: add    rdx,0x27
0x008be0db: mov    rcx,QWORD PTR [rcx-0x8]
0x008be0df: sub    rax,rcx
0x008be0e2: add    rax,0xfffffffffffffff8
0x008be0e6: cmp    rax,0x1f
0x008be0ea: jbe    0x1408bd04e
0x008be0f0: call   QWORD PTR [rip+0xd27a32]        # 0x1415e5b28
0x008be0f6: int3
0x008be0f7: nop
0x008be0f8: ror    edi,0x8b
0x008be0fb: add    BYTE PTR [rax-0x3fff7430],dl
0x008be101: ror    BYTE PTR [rbx-0x742f0d00],1
0x008be107: add    BYTE PTR [rax-0x24ff742f],ch
0x008be10d: ror    DWORD PTR [rbx-0x742df200],1
0x008be113: add    BYTE PTR [rdi-0x2e],ch
0x008be116: mov    eax,DWORD PTR [rax]
0x008be118: int    0xd2
0x008be11a: mov    eax,DWORD PTR [rax]
0x008be11c: sub    ebx,edx
0x008be11e: mov    eax,DWORD PTR [rax]
0x008be120: test   ebx,edx
0x008be122: mov    eax,DWORD PTR [rax]
0x008be124: xlat   BYTE PTR [rbx]
0x008be125: ror    DWORD PTR [rbx-0x742bb600],cl
0x008be12b: add    BYTE PTR [rbx+0x1008bd4],ah
0x008be131: {rex2 0x8b} lldt WORD PTR [r13-0x2b]
0x008be136: mov    eax,DWORD PTR [rax]
0x008be138: mov    cl,0xd5
0x008be13a: mov    eax,DWORD PTR [rax]
0x008be13c: add    al,0xd6
0x008be13e: mov    eax,DWORD PTR [rax]
0x008be140: pop    rax
0x008be141: udb
0x008be142: mov    eax,DWORD PTR [rax]
0x008be144: mov    bh,0xd6
0x008be146: mov    eax,DWORD PTR [rax]
0x008be148: add    bh,dl
0x008be14a: mov    eax,DWORD PTR [rax]
0x008be14c: push   rsp
0x008be14d: xlat   BYTE PTR [rbx]
0x008be14e: mov    eax,DWORD PTR [rax]
0x008be150: mov    al,0xd7
0x008be152: mov    eax,DWORD PTR [rax]
0x008be154: or     eax,0x6e008bd8
0x008be159: fmul   DWORD PTR [rbx-0x74274900]
0x008be15f: add    BYTE PTR [rcx],cl
0x008be161: (bad) [rbx-0x7426a500]
0x008be167: add    BYTE PTR [rbp-0x27ff7427],ah
0x008be16d: (bad) [rbx-0x7425f500]
0x008be173: add    BYTE PTR [rsi],bh
0x008be175: fimul  DWORD PTR [rbx-0x74258f00]
0x008be17b: add    BYTE PTR [rdx+rbx*8-0x2528ff75],ah
0x008be182: mov    eax,DWORD PTR [rax]
0x008be184: or     bl,bl
0x008be186: mov    eax,DWORD PTR [rax]
0x008be188: cmp    eax,0x70008bdb
0x008be18d: fisttp DWORD PTR [rbx-0x74245d00]
0x008be193: add    dh,dl
0x008be195: fisttp DWORD PTR [rbx-0x7423f700]
0x008be19b: add    BYTE PTR [rsp+rbx*8],bh
0x008be19e: mov    eax,DWORD PTR [rax]
0x008be1a0: outs   dx,DWORD PTR [rsi]
0x008be1a1: fmul   QWORD PTR [rbx-0x74235e00]
0x008be1a7: add    ch,dl
0x008be1a9: fmul   QWORD PTR [rbx-0x7422f800]
0x008be1af: add    BYTE PTR [rbx],bh
0x008be1b1: fisttp QWORD PTR [rbx-0x74229200]
0x008be1b7: add    BYTE PTR [rcx-0x2bff7423],ah
0x008be1bd: fisttp QWORD PTR [rbx-0x7421f900]
0x008be1c3: add    BYTE PTR [rdx],bh
0x008be1c5: .byte 0xde
0x008be1c6: mov    eax,DWORD PTR [rax]
