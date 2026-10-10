# reference PE:6a70a6d9:02711000; domain-field; RVA 0x756500..0x756688
0x00756500: mov    QWORD PTR [rsp+0x18],rbx
0x00756505: push   rdi
0x00756506: sub    rsp,0x50
0x0075650a: mov    rax,QWORD PTR [rip+0x1145b2f]        # 0x14189c040
0x00756511: xor    rax,rsp
0x00756514: mov    QWORD PTR [rsp+0x40],rax
0x00756519: mov    rbx,rdx
0x0075651c: movsx  edi,cx
0x0075651f: xorps  xmm0,xmm0
0x00756522: movups XMMWORD PTR [rsp+0x20],xmm0
0x00756527: xor    r8d,r8d
0x0075652a: mov    QWORD PTR [rsp+0x30],r8
0x0075652f: mov    QWORD PTR [rsp+0x38],0xf
0x00756538: mov    BYTE PTR [rsp+0x20],r8b
0x0075653d: lea    eax,[rdi-0x13]
0x00756540: cmp    eax,0x6b
0x00756543: ja     0x140756579
0x00756545: cdqe
0x00756547: lea    rdx,[rip+0xffffffffff8a9ab2]        # 0x140000000
0x0075654e: movzx  eax,BYTE PTR [rdx+rax*1+0x75661c]
0x00756556: mov    ecx,DWORD PTR [rdx+rax*4+0x756614]
0x0075655d: add    rcx,rdx
0x00756560: jmp    rcx
0x00756562: mov    r8d,0x4
0x00756568: lea    rdx,[rip+0xe928d9]        # 0x1415e8e48 ; literal="the "
0x0075656f: mov    rcx,rbx
0x00756572: call   0x14006f8d0
0x00756577: jmp    0x14075658d
0x00756579: mov    QWORD PTR [rbx+0x10],r8
0x0075657d: mov    rax,rbx
0x00756580: cmp    QWORD PTR [rbx+0x18],0xf
0x00756585: jbe    0x14075658a
0x00756587: mov    rax,QWORD PTR [rbx]
0x0075658a: mov    BYTE PTR [rax],0x0
0x0075658d: lea    rdx,[rsp+0x20]
0x00756592: movzx  ecx,di
0x00756595: call   0x140756690
0x0075659a: lea    rdx,[rsp+0x20]
0x0075659f: cmp    QWORD PTR [rsp+0x38],0xf
0x007565a5: cmova  rdx,QWORD PTR [rsp+0x20]
0x007565ab: mov    r8,QWORD PTR [rsp+0x30]
0x007565b0: mov    rcx,rbx
0x007565b3: call   0x14006fa10
0x007565b8: nop
0x007565b9: mov    rdx,QWORD PTR [rsp+0x38]
0x007565be: cmp    rdx,0xf
0x007565c2: jbe    0x1407565f9
0x007565c4: inc    rdx
0x007565c7: mov    rcx,QWORD PTR [rsp+0x20]
0x007565cc: mov    rax,rcx
0x007565cf: cmp    rdx,0x1000
0x007565d6: jb     0x1407565f4
0x007565d8: add    rdx,0x27
0x007565dc: mov    rcx,QWORD PTR [rcx-0x8]
0x007565e0: sub    rax,rcx
0x007565e3: add    rax,0xfffffffffffffff8
0x007565e7: cmp    rax,0x1f
0x007565eb: jbe    0x1407565f4
0x007565ed: call   QWORD PTR [rip+0xe8f535]        # 0x1415e5b28
0x007565f3: int3
0x007565f4: call   0x141539680
0x007565f9: mov    rcx,QWORD PTR [rsp+0x40]
0x007565fe: xor    rcx,rsp
0x00756601: call   0x141539660
0x00756606: mov    rbx,QWORD PTR [rsp+0x70]
0x0075660b: add    rsp,0x50
0x0075660f: pop    rdi
0x00756610: ret
0x00756611: nop    DWORD PTR [rax]
0x00756614: (bad)
0x00756619: gs jne 0x14075661c
0x0075661c: add    BYTE PTR [rcx],al
0x0075661e: add    DWORD PTR [rcx],eax
0x00756620: add    DWORD PTR [rcx],eax
0x00756622: add    DWORD PTR [rcx],eax
0x00756624: add    DWORD PTR [rcx],eax
0x00756626: add    DWORD PTR [rcx],eax
0x00756628: add    DWORD PTR [rcx],eax
0x0075662a: add    DWORD PTR [rcx],eax
0x0075662c: add    DWORD PTR [rcx],eax
0x0075662e: add    DWORD PTR [rcx],eax
0x00756630: add    DWORD PTR [rcx],eax
0x00756632: add    DWORD PTR [rcx],eax
0x00756634: add    DWORD PTR [rcx],eax
0x00756636: add    DWORD PTR [rcx],eax
0x00756638: add    DWORD PTR [rcx],eax
0x0075663a: add    DWORD PTR [rcx],eax
0x0075663c: add    DWORD PTR [rcx],eax
0x0075663e: add    DWORD PTR [rcx],eax
0x00756640: add    DWORD PTR [rcx],eax
0x00756642: add    DWORD PTR [rcx],eax
0x00756644: add    DWORD PTR [rcx],eax
0x00756646: add    DWORD PTR [rcx],eax
0x00756648: add    DWORD PTR [rcx],eax
0x0075664a: add    DWORD PTR [rcx],eax
0x0075664c: add    DWORD PTR [rcx],eax
0x0075664e: add    DWORD PTR [rax],eax
0x00756650: add    DWORD PTR [rcx],eax
0x00756652: add    DWORD PTR [rcx],eax
0x00756654: add    DWORD PTR [rax],eax
0x00756656: add    DWORD PTR [rcx],eax
0x00756658: add    DWORD PTR [rcx],eax
0x0075665a: add    DWORD PTR [rcx],eax
0x0075665c: add    DWORD PTR [rcx],eax
0x0075665e: add    DWORD PTR [rcx],eax
0x00756660: add    BYTE PTR [rcx],al
0x00756662: add    DWORD PTR [rcx],eax
0x00756664: add    DWORD PTR [rcx],eax
0x00756666: add    DWORD PTR [rcx],eax
0x00756668: add    DWORD PTR [rcx],eax
0x0075666a: add    DWORD PTR [rax],eax
0x0075666c: add    DWORD PTR [rax],eax
0x0075666e: add    DWORD PTR [rcx],eax
0x00756670: add    BYTE PTR [rcx],al
0x00756672: add    DWORD PTR [rcx],eax
0x00756674: add    BYTE PTR [rcx],al
0x00756676: add    DWORD PTR [rcx],eax
0x00756678: add    DWORD PTR [rcx],eax
0x0075667a: add    DWORD PTR [rcx],eax
0x0075667c: add    DWORD PTR [rcx],eax
0x0075667e: add    DWORD PTR [rcx],eax
0x00756680: add    DWORD PTR [rcx],eax
0x00756682: add    DWORD PTR [rcx],eax
0x00756684: add    DWORD PTR [rcx],eax
