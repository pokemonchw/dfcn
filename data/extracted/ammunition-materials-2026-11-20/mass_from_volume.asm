0x1400fcf60: mov    QWORD PTR [rsp+0x10],rsi
0x1400fcf65: push   rdi
0x1400fcf66: xor    edi,edi
0x1400fcf68: mov    r9d,r8d
0x1400fcf6b: mov    QWORD PTR [rcx],rdi
0x1400fcf6e: mov    rsi,rcx
0x1400fcf71: test   edx,edx
0x1400fcf73: jle    0x1400fd0a3
0x1400fcf79: test   r8d,r8d
0x1400fcf7c: jle    0x1400fd0a3
0x1400fcf82: mov    QWORD PTR [rsp+0x10],rbx
0x1400fcf87: lea    ebx,[rdx+rdx*4]
0x1400fcf8a: add    ebx,ebx
0x1400fcf8c: cmp    ebx,0x2710
0x1400fcf92: jg     0x1400fcfc2
0x1400fcf94: imul   ebx,r9d
0x1400fcf98: mov    eax,0x431bde83
0x1400fcf9d: imul   ebx
0x1400fcf9f: sar    edx,0x12
0x1400fcfa2: mov    eax,edx
0x1400fcfa4: shr    eax,0x1f
0x1400fcfa7: add    edx,eax
0x1400fcfa9: imul   eax,edx,0xf4240
0x1400fcfaf: mov    DWORD PTR [rcx],edx
0x1400fcfb1: sub    ebx,eax
0x1400fcfb3: mov    DWORD PTR [rcx+0x4],ebx
0x1400fcfb6: mov    rbx,QWORD PTR [rsp+0x10]
0x1400fcfbb: mov    rsi,QWORD PTR [rsp+0x18]
0x1400fcfc0: pop    rdi
0x1400fcfc1: ret
0x1400fcfc2: cmp    ebx,0xf4240
0x1400fcfc8: jl     0x1400fcfe9
0x1400fcfca: mov    eax,0x431bde83
0x1400fcfcf: imul   ebx
0x1400fcfd1: mov    edi,edx
0x1400fcfd3: sar    edi,0x12
0x1400fcfd6: mov    eax,edi
0x1400fcfd8: shr    eax,0x1f
0x1400fcfdb: add    edi,eax
0x1400fcfdd: imul   eax,edi,0xfff0bdc0
0x1400fcfe3: add    ebx,eax
0x1400fcfe5: imul   edi,r9d
0x1400fcfe9: mov    eax,0x68db8bad
0x1400fcfee: imul   ebx
0x1400fcff0: sar    edx,0xc
0x1400fcff3: mov    eax,edx
0x1400fcff5: shr    eax,0x1f
0x1400fcff8: add    edx,eax
0x1400fcffa: mov    eax,0x51eb851f
0x1400fcfff: imul   r8d,edx,0x2710
0x1400fd006: mul    r9d
0x1400fd009: sub    ebx,r8d
0x1400fd00c: mov    eax,0x431bde83
0x1400fd011: imul   ebx,r9d
0x1400fd015: shr    edx,0x5
0x1400fd018: imul   r10d,edx,0x64
0x1400fd01c: imul   ebx
0x1400fd01e: sub    r9d,r10d
0x1400fd021: imul   r9d,r8d
0x1400fd025: mov    r11d,edx
0x1400fd028: sar    r11d,0x12
0x1400fd02c: mov    eax,r11d
0x1400fd02f: shr    eax,0x1f
0x1400fd032: add    r11d,eax
0x1400fd035: imul   eax,r11d,0xfff0bdc0
0x1400fd03c: add    ebx,eax
0x1400fd03e: mov    eax,0x431bde83
0x1400fd043: add    ebx,r9d
0x1400fd046: imul   ebx
0x1400fd048: mov    eax,0x68db8bad
0x1400fd04d: mov    r9d,edx
0x1400fd050: imul   r8d
0x1400fd053: sar    r9d,0x12
0x1400fd057: mov    eax,0x51eb851f
0x1400fd05c: mov    r8d,edx
0x1400fd05f: mov    ecx,r9d
0x1400fd062: sar    r8d,0xc
0x1400fd066: shr    ecx,0x1f
0x1400fd069: add    r9d,ecx
0x1400fd06c: imul   r10d
0x1400fd06f: imul   ecx,r9d,0xf4240
0x1400fd076: sar    edx,0x5
0x1400fd079: mov    eax,edx
0x1400fd07b: shr    eax,0x1f
0x1400fd07e: add    edx,eax
0x1400fd080: sub    ebx,ecx
0x1400fd082: mov    ecx,r8d
0x1400fd085: shr    ecx,0x1f
0x1400fd088: add    r8d,ecx
0x1400fd08b: mov    DWORD PTR [rsi+0x4],ebx
0x1400fd08e: mov    rbx,QWORD PTR [rsp+0x10]
0x1400fd093: imul   r8d,edx
0x1400fd097: add    r8d,r9d
0x1400fd09a: add    r8d,r11d
0x1400fd09d: add    r8d,edi
0x1400fd0a0: mov    DWORD PTR [rsi],r8d
0x1400fd0a3: mov    rsi,QWORD PTR [rsp+0x18]
0x1400fd0a8: pop    rdi
0x1400fd0a9: ret
