0x140ecc5e0: rex push rbx
0x140ecc5e2: sub    rsp,0x20
0x140ecc5e6: mov    rbx,QWORD PTR [rip+0x1543d93]        # 0x142410380
0x140ecc5ed: test   rbx,rbx
0x140ecc5f0: je     0x140ecc6aa
0x140ecc5f6: mov    QWORD PTR [rsp+0x30],rdi
0x140ecc5fb: nop    DWORD PTR [rax+rax*1+0x0]
0x140ecc600: mov    rcx,QWORD PTR [rbx]
0x140ecc603: test   BYTE PTR [rcx+0x48],0x20
0x140ecc607: jne    0x140ecc61a
0x140ecc609: mov    rax,QWORD PTR [rcx]
0x140ecc60c: call   QWORD PTR [rax+0x10]
0x140ecc60f: test   al,al
0x140ecc611: je     0x140ecc6b0
0x140ecc617: mov    rcx,QWORD PTR [rbx]
0x140ecc61a: mov    rbx,QWORD PTR [rbx+0x10]
0x140ecc61e: test   rcx,rcx
0x140ecc621: je     0x140ecc62e
0x140ecc623: mov    rax,QWORD PTR [rcx]
0x140ecc626: mov    edx,0x1
0x140ecc62b: call   QWORD PTR [rax+0x40]
0x140ecc62e: test   rbx,rbx
0x140ecc631: jne    0x140ecc600
0x140ecc633: mov    rbx,QWORD PTR [rip+0x1543d46]        # 0x142410380
0x140ecc63a: mov    rdi,QWORD PTR [rsp+0x30]
0x140ecc63f: test   rbx,rbx
0x140ecc642: je     0x140ecc6aa
0x140ecc644: xor    edx,edx
0x140ecc646: data16 nop WORD PTR [rax+rax*1+0x0]
0x140ecc650: mov    rcx,QWORD PTR [rbx]
0x140ecc653: test   DWORD PTR [rcx+0x48],0x100
0x140ecc65a: je     0x140ecc6a1
0x140ecc65c: mov    eax,DWORD PTR [rcx+0x8c]
0x140ecc662: add    DWORD PTR [rcx+0x80],eax
0x140ecc668: mov    rcx,QWORD PTR [rbx]
0x140ecc66b: mov    eax,DWORD PTR [rcx+0x90]
0x140ecc671: add    DWORD PTR [rcx+0x84],eax
0x140ecc677: mov    rcx,QWORD PTR [rbx]
0x140ecc67a: mov    eax,DWORD PTR [rcx+0x94]
0x140ecc680: add    DWORD PTR [rcx+0x88],eax
0x140ecc686: mov    rax,QWORD PTR [rbx]
0x140ecc689: mov    DWORD PTR [rax+0x8c],edx
0x140ecc68f: mov    rax,QWORD PTR [rbx]
0x140ecc692: mov    DWORD PTR [rax+0x90],edx
0x140ecc698: mov    rax,QWORD PTR [rbx]
0x140ecc69b: mov    DWORD PTR [rax+0x94],edx
0x140ecc6a1: mov    rbx,QWORD PTR [rbx+0x10]
0x140ecc6a5: test   rbx,rbx
0x140ecc6a8: jne    0x140ecc650
0x140ecc6aa: add    rsp,0x20
0x140ecc6ae: pop    rbx
0x140ecc6af: ret
0x140ecc6b0: mov    rbx,QWORD PTR [rbx+0x10]
0x140ecc6b4: jmp    0x140ecc62e
