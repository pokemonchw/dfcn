# classic PE:6a70b91c:0270a000; domain-field; RVA 0x753f20..0x7540a8
0x00753f20: mov    QWORD PTR [rsp+0x18],rbx
0x00753f25: push   rdi
0x00753f26: sub    rsp,0x50
0x00753f2a: mov    rax,QWORD PTR [rip+0x114210f]        # 0x141896040
0x00753f31: xor    rax,rsp
0x00753f34: mov    QWORD PTR [rsp+0x40],rax
0x00753f39: mov    rbx,rdx
0x00753f3c: movsx  edi,cx
0x00753f3f: xorps  xmm0,xmm0
0x00753f42: movups XMMWORD PTR [rsp+0x20],xmm0
0x00753f47: xor    r8d,r8d
0x00753f4a: mov    QWORD PTR [rsp+0x30],r8
0x00753f4f: mov    QWORD PTR [rsp+0x38],0xf
0x00753f58: mov    BYTE PTR [rsp+0x20],r8b
0x00753f5d: lea    eax,[rdi-0x13]
0x00753f60: cmp    eax,0x6b
0x00753f63: ja     0x140753f99
0x00753f65: cdqe
0x00753f67: lea    rdx,[rip+0xffffffffff8ac092]        # 0x140000000
0x00753f6e: movzx  eax,BYTE PTR [rdx+rax*1+0x75403c]
0x00753f76: mov    ecx,DWORD PTR [rdx+rax*4+0x754034]
0x00753f7d: add    rcx,rdx
0x00753f80: jmp    rcx
0x00753f82: mov    r8d,0x4
0x00753f88: lea    rdx,[rip+0xe8fea5]        # 0x1415e3e34 ; literal="the "
0x00753f8f: mov    rcx,rbx
0x00753f92: call   0x14006f860
0x00753f97: jmp    0x140753fad
0x00753f99: mov    QWORD PTR [rbx+0x10],r8
0x00753f9d: mov    rax,rbx
0x00753fa0: cmp    QWORD PTR [rbx+0x18],0xf
0x00753fa5: jbe    0x140753faa
0x00753fa7: mov    rax,QWORD PTR [rbx]
0x00753faa: mov    BYTE PTR [rax],0x0
0x00753fad: lea    rdx,[rsp+0x20]
0x00753fb2: movzx  ecx,di
0x00753fb5: call   0x1407540b0
0x00753fba: lea    rdx,[rsp+0x20]
0x00753fbf: cmp    QWORD PTR [rsp+0x38],0xf
0x00753fc5: cmova  rdx,QWORD PTR [rsp+0x20]
0x00753fcb: mov    r8,QWORD PTR [rsp+0x30]
0x00753fd0: mov    rcx,rbx
0x00753fd3: call   0x14006f9a0
0x00753fd8: nop
0x00753fd9: mov    rdx,QWORD PTR [rsp+0x38]
0x00753fde: cmp    rdx,0xf
0x00753fe2: jbe    0x140754019
0x00753fe4: inc    rdx
0x00753fe7: mov    rcx,QWORD PTR [rsp+0x20]
0x00753fec: mov    rax,rcx
0x00753fef: cmp    rdx,0x1000
0x00753ff6: jb     0x140754014
0x00753ff8: add    rdx,0x27
0x00753ffc: mov    rcx,QWORD PTR [rcx-0x8]
0x00754000: sub    rax,rcx
0x00754003: add    rax,0xfffffffffffffff8
0x00754007: cmp    rax,0x1f
0x0075400b: jbe    0x140754014
0x0075400d: call   QWORD PTR [rip+0xe8ca8d]        # 0x1415e0aa0
0x00754013: int3
0x00754014: call   0x1415345f0
0x00754019: mov    rcx,QWORD PTR [rsp+0x40]
0x0075401e: xor    rcx,rsp
0x00754021: call   0x1415345d0
0x00754026: mov    rbx,QWORD PTR [rsp+0x70]
0x0075402b: add    rsp,0x50
0x0075402f: pop    rdi
0x00754030: ret
0x00754031: nop    DWORD PTR [rax]
0x00754034: (bad)
0x00754035: (bad)
0x00754036: jne    0x140754038
0x00754038: cdq
0x00754039: (bad)
0x0075403a: jne    0x14075403c
0x0075403c: add    BYTE PTR [rcx],al
0x0075403e: add    DWORD PTR [rcx],eax
0x00754040: add    DWORD PTR [rcx],eax
0x00754042: add    DWORD PTR [rcx],eax
0x00754044: add    DWORD PTR [rcx],eax
0x00754046: add    DWORD PTR [rcx],eax
0x00754048: add    DWORD PTR [rcx],eax
0x0075404a: add    DWORD PTR [rcx],eax
0x0075404c: add    DWORD PTR [rcx],eax
0x0075404e: add    DWORD PTR [rcx],eax
0x00754050: add    DWORD PTR [rcx],eax
0x00754052: add    DWORD PTR [rcx],eax
0x00754054: add    DWORD PTR [rcx],eax
0x00754056: add    DWORD PTR [rcx],eax
0x00754058: add    DWORD PTR [rcx],eax
0x0075405a: add    DWORD PTR [rcx],eax
0x0075405c: add    DWORD PTR [rcx],eax
0x0075405e: add    DWORD PTR [rcx],eax
0x00754060: add    DWORD PTR [rcx],eax
0x00754062: add    DWORD PTR [rcx],eax
0x00754064: add    DWORD PTR [rcx],eax
0x00754066: add    DWORD PTR [rcx],eax
0x00754068: add    DWORD PTR [rcx],eax
0x0075406a: add    DWORD PTR [rcx],eax
0x0075406c: add    DWORD PTR [rcx],eax
0x0075406e: add    DWORD PTR [rax],eax
0x00754070: add    DWORD PTR [rcx],eax
0x00754072: add    DWORD PTR [rcx],eax
0x00754074: add    DWORD PTR [rax],eax
0x00754076: add    DWORD PTR [rcx],eax
0x00754078: add    DWORD PTR [rcx],eax
0x0075407a: add    DWORD PTR [rcx],eax
0x0075407c: add    DWORD PTR [rcx],eax
0x0075407e: add    DWORD PTR [rcx],eax
0x00754080: add    BYTE PTR [rcx],al
0x00754082: add    DWORD PTR [rcx],eax
0x00754084: add    DWORD PTR [rcx],eax
0x00754086: add    DWORD PTR [rcx],eax
0x00754088: add    DWORD PTR [rcx],eax
0x0075408a: add    DWORD PTR [rax],eax
0x0075408c: add    DWORD PTR [rax],eax
0x0075408e: add    DWORD PTR [rcx],eax
0x00754090: add    BYTE PTR [rcx],al
0x00754092: add    DWORD PTR [rcx],eax
0x00754094: add    BYTE PTR [rcx],al
0x00754096: add    DWORD PTR [rcx],eax
0x00754098: add    DWORD PTR [rcx],eax
0x0075409a: add    DWORD PTR [rcx],eax
0x0075409c: add    DWORD PTR [rcx],eax
0x0075409e: add    DWORD PTR [rcx],eax
0x007540a0: add    DWORD PTR [rcx],eax
0x007540a2: add    DWORD PTR [rcx],eax
0x007540a4: add    DWORD PTR [rcx],eax
