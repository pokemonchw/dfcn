0x1400fd420: mov    QWORD PTR [rsp+0x8],rbx
0x1400fd425: mov    QWORD PTR [rsp+0x10],rsi
0x1400fd42a: push   rdi
0x1400fd42b: sub    rsp,0x20
0x1400fd42f: mov    rax,QWORD PTR [rcx]
0x1400fd432: mov    rbx,rcx
0x1400fd435: call   QWORD PTR [rax+0x620]
0x1400fd43b: mov    edi,eax
0x1400fd43d: mov    rcx,rbx
0x1400fd440: mov    rax,QWORD PTR [rbx]
0x1400fd443: call   QWORD PTR [rax+0x628]
0x1400fd449: mov    rdx,QWORD PTR [rbx]
0x1400fd44c: mov    rcx,rbx
0x1400fd44f: mov    esi,eax
0x1400fd451: call   QWORD PTR [rdx+0x478]
0x1400fd457: imul   edi,eax
0x1400fd45a: test   esi,esi
0x1400fd45c: jle    0x1400fd472
0x1400fd45e: mov    edx,edi
0x1400fd460: mov    ecx,esi
0x1400fd462: sar    edi,cl
0x1400fd464: test   edx,edx
0x1400fd466: jle    0x1400fd472
0x1400fd468: test   edi,edi
0x1400fd46a: mov    eax,0x1
0x1400fd46f: cmovle edi,eax
0x1400fd472: mov    rbx,QWORD PTR [rsp+0x30]
0x1400fd477: mov    eax,edi
0x1400fd479: mov    rsi,QWORD PTR [rsp+0x38]
0x1400fd47e: add    rsp,0x20
0x1400fd482: pop    rdi
0x1400fd483: ret
