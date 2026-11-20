0x1400fd210: mov    QWORD PTR [rsp+0x8],rbx
0x1400fd215: mov    QWORD PTR [rsp+0x10],rsi
0x1400fd21a: push   rdi
0x1400fd21b: sub    rsp,0x20
0x1400fd21f: xor    eax,eax
0x1400fd221: mov    rdi,rcx
0x1400fd224: mov    QWORD PTR [rcx+0x74],rax
0x1400fd228: mov    rax,QWORD PTR [rcx]
0x1400fd22b: call   QWORD PTR [rax+0x168]
0x1400fd231: mov    rcx,rdi
0x1400fd234: mov    ebx,eax
0x1400fd236: call   0x1400fd420
0x1400fd23b: mov    r8d,ebx
0x1400fd23e: lea    rcx,[rdi+0x74]
0x1400fd242: mov    edx,eax
0x1400fd244: mov    rbx,QWORD PTR [rsp+0x30]
0x1400fd249: mov    rsi,QWORD PTR [rsp+0x38]
0x1400fd24e: add    rsp,0x20
0x1400fd252: pop    rdi
0x1400fd253: jmp    0x1400fcf60
