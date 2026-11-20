0x141380430: mov    QWORD PTR [rsp+0x8],rbx
0x141380435: mov    QWORD PTR [rsp+0x10],rbp
0x14138043a: mov    QWORD PTR [rsp+0x18],rsi
0x14138043f: push   rdi
0x141380440: sub    rsp,0x20
0x141380444: mov    rdi,r8
0x141380447: mov    rsi,rdx
0x14138044a: mov    rbx,rcx
0x14138044d: test   rdx,rdx
0x141380450: jne    0x14138045f
0x141380452: test   r8,r8
0x141380455: je     0x1413805ad
0x14138045b: xor    ebp,ebp
0x14138045d: jmp    0x141380473
0x14138045f: mov    rax,QWORD PTR [rdx]
0x141380462: mov    rcx,rsi
0x141380465: call   QWORD PTR [rax+0x508]
0x14138046b: movsx  ebp,ax
0x14138046e: test   rdi,rdi
0x141380471: je     0x14138048d
0x141380473: mov    rax,QWORD PTR [rdi]
0x141380476: mov    rcx,rdi
0x141380479: call   QWORD PTR [rax+0x508]
0x14138047f: movsx  ecx,ax
0x141380482: add    ebp,ecx
0x141380484: test   rsi,rsi
0x141380487: jne    0x14138048d
0x141380489: xor    eax,eax
0x14138048b: jmp    0x141380495
0x14138048d: mov    eax,DWORD PTR [rsi+0x10]
0x141380490: and    eax,0x8000000
0x141380495: test   eax,eax
0x141380497: lea    edx,[rbp+0x5]
0x14138049a: cmove  edx,ebp
0x14138049d: test   rdi,rdi
0x1413804a0: je     0x1413804ad
0x1413804a2: mov    ecx,DWORD PTR [rdi+0x10]
0x1413804a5: and    ecx,0x8000000
0x1413804ab: jmp    0x1413804af
0x1413804ad: xor    ecx,ecx
0x1413804af: test   ecx,ecx
0x1413804b1: lea    eax,[rdx+0x5]
0x1413804b4: cmove  eax,edx
0x1413804b7: dec    eax
0x1413804b9: cmp    eax,0x13
0x1413804bc: ja     0x141380573
0x1413804c2: lea    rdx,[rip+0xfffffffffec7fb37]        # 0x140000000
0x1413804c9: cdqe
0x1413804cb: mov    ecx,DWORD PTR [rdx+rax*4+0x13805c4]
0x1413804d2: add    rcx,rdx
0x1413804d5: jmp    rcx
0x1413804d7: mov    eax,DWORD PTR [rbx]
0x1413804d9: lea    ecx,[rax+rax*4]
0x1413804dc: mov    DWORD PTR [rbx],ecx
0x1413804de: jmp    0x141380573
0x1413804e3: mov    eax,DWORD PTR [rbx]
0x1413804e5: lea    ecx,[rax+rax*2]
0x1413804e8: shl    ecx,0x3
0x1413804eb: jmp    0x141380561
0x1413804ed: imul   ecx,DWORD PTR [rbx],0x17
0x1413804f0: jmp    0x141380561
0x1413804f2: imul   ecx,DWORD PTR [rbx],0x16
0x1413804f5: jmp    0x141380561
0x1413804f7: imul   ecx,DWORD PTR [rbx],0x15
0x1413804fa: jmp    0x141380561
0x1413804fc: mov    eax,DWORD PTR [rbx]
0x1413804fe: shl    eax,0x2
0x141380501: mov    DWORD PTR [rbx],eax
0x141380503: jmp    0x141380573
0x141380505: imul   ecx,DWORD PTR [rbx],0x13
0x141380508: jmp    0x141380561
0x14138050a: mov    eax,DWORD PTR [rbx]
0x14138050c: lea    ecx,[rax+rax*8]
0x14138050f: jmp    0x14138055f
0x141380511: imul   ecx,DWORD PTR [rbx],0x11
0x141380514: jmp    0x141380561
0x141380516: mov    ecx,DWORD PTR [rbx]
0x141380518: shl    ecx,0x4
0x14138051b: jmp    0x141380561
0x14138051d: mov    eax,DWORD PTR [rbx]
0x14138051f: lea    ecx,[rax+rax*2]
0x141380522: mov    DWORD PTR [rbx],ecx
0x141380524: jmp    0x141380573
0x141380526: imul   ecx,DWORD PTR [rbx],0xe
0x141380529: jmp    0x141380561
0x14138052b: imul   ecx,DWORD PTR [rbx],0xd
0x14138052e: jmp    0x141380561
0x141380530: mov    eax,DWORD PTR [rbx]
0x141380532: lea    ecx,[rax+rax*2]
0x141380535: shl    ecx,0x2
0x141380538: jmp    0x141380561
0x14138053a: imul   ecx,DWORD PTR [rbx],0xb
0x14138053d: jmp    0x141380561
0x14138053f: mov    eax,DWORD PTR [rbx]
0x141380541: add    eax,eax
0x141380543: mov    DWORD PTR [rbx],eax
0x141380545: jmp    0x141380573
0x141380547: mov    eax,DWORD PTR [rbx]
0x141380549: lea    ecx,[rax+rax*8]
0x14138054c: jmp    0x141380561
0x14138054e: mov    ecx,DWORD PTR [rbx]
0x141380550: shl    ecx,0x3
0x141380553: jmp    0x141380561
0x141380555: imul   ecx,DWORD PTR [rbx],0x7
0x141380558: jmp    0x141380561
0x14138055a: mov    eax,DWORD PTR [rbx]
0x14138055c: lea    ecx,[rax+rax*2]
0x14138055f: add    ecx,ecx
0x141380561: mov    eax,0x66666667
0x141380566: imul   ecx
0x141380568: sar    edx,1
0x14138056a: mov    eax,edx
0x14138056c: shr    eax,0x1f
0x14138056f: add    edx,eax
0x141380571: mov    DWORD PTR [rbx],edx
0x141380573: test   rdi,rdi
0x141380576: je     0x1413805ad
0x141380578: mov    rax,QWORD PTR [rdi]
0x14138057b: mov    rcx,rdi
0x14138057e: call   QWORD PTR [rax]
0x141380580: cmp    ax,0x18
0x141380584: jne    0x1413805ad
0x141380586: mov    rax,QWORD PTR [rdi+0xe8]
0x14138058d: mov    edx,DWORD PTR [rax+0x1d0]
0x141380593: test   edx,edx
0x141380595: jle    0x1413805ad
0x141380597: mov    eax,DWORD PTR [rbx]
0x141380599: mov    ecx,eax
0x14138059b: sub    ecx,edx
0x14138059d: mov    DWORD PTR [rbx],ecx
0x14138059f: test   eax,eax
0x1413805a1: js     0x1413805ad
0x1413805a3: test   ecx,ecx
0x1413805a5: jns    0x1413805ad
0x1413805a7: mov    DWORD PTR [rbx],0x0
0x1413805ad: mov    rbx,QWORD PTR [rsp+0x30]
0x1413805b2: mov    rbp,QWORD PTR [rsp+0x38]
0x1413805b7: mov    rsi,QWORD PTR [rsp+0x40]
0x1413805bc: add    rsp,0x20
0x1413805c0: pop    rdi
0x1413805c1: ret
0x1413805c2: xchg   ax,ax
0x1413805c4: pop    rdx
0x1413805c5: add    eax,0x5550138
0x1413805ca: cmp    BYTE PTR [rcx],al
0x1413805cc: rex.WRX add rax,0x5470138
0x1413805d2: cmp    BYTE PTR [rcx],al
0x1413805d4: (bad)
0x1413805d5: add    eax,0x53a0138
0x1413805da: cmp    BYTE PTR [rcx],al
0x1413805dc: xor    BYTE PTR [rip+0x52b0138],al        # 0x14663071a
0x1413805e2: cmp    BYTE PTR [rcx],al
0x1413805e4: es add eax,0x51d0138
0x1413805ea: cmp    BYTE PTR [rcx],al
0x1413805ec: (bad)
0x1413805ed: add    eax,0x5110138
0x1413805f2: cmp    BYTE PTR [rcx],al
0x1413805f4: or     al,BYTE PTR [rip+0x5050138]        # 0x1463d0732
0x1413805fa: cmp    BYTE PTR [rcx],al
0x1413805fc: cld
0x1413805fd: add    al,0x38
0x1413805ff: add    edi,esi
0x141380601: add    al,0x38
0x141380603: add    edx,esi
0x141380605: add    al,0x38
0x141380607: add    ebp,ebp
0x141380609: add    al,0x38
0x14138060b: add    ebx,esp
0x14138060d: add    al,0x38
0x14138060f: add    edi,edx
0x141380611: add    al,0x38
0x141380613: .byte 0x1
