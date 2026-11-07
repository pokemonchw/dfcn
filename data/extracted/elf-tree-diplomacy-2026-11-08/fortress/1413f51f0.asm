; Original disk PE PE:6a70a6d9:02711000; D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe; VA 0x1413f51f0..0x1413f534d
0x1413f51f0: mov    QWORD PTR [rsp+0x8],rbx
0x1413f51f5: mov    QWORD PTR [rsp+0x18],rbp
0x1413f51fa: mov    QWORD PTR [rsp+0x20],rsi
0x1413f51ff: push   rdi
0x1413f5200: push   r12
0x1413f5202: push   r13
0x1413f5204: push   r14
0x1413f5206: push   r15
0x1413f5208: sub    rsp,0x20
0x1413f520c: cmp    DWORD PTR [rdx+0x24],0xffffffff
0x1413f5210: mov    r12d,r9d
0x1413f5213: mov    r13d,r8d
0x1413f5216: mov    r14,rdx
0x1413f5219: mov    r15,rcx
0x1413f521c: je     0x1413f532b
0x1413f5222: mov    rbx,QWORD PTR [rcx]
0x1413f5225: xor    ebp,ebp
0x1413f5227: mov    rdi,QWORD PTR [rcx+0x8]
0x1413f522b: nop    DWORD PTR [rax+rax*1+0x0]
0x1413f5230: cmp    rbx,rdi
0x1413f5233: jae    0x1413f52c6
0x1413f5239: mov    rsi,QWORD PTR [rbx]
0x1413f523c: mov    rdx,r14
0x1413f523f: mov    rcx,rsi
0x1413f5242: call   0x1400bbb30
0x1413f5247: test   al,al
0x1413f5249: je     0x1413f525d
0x1413f524b: mov    eax,DWORD PTR [r14+0x18]
0x1413f524f: cmp    DWORD PTR [rsi+0x18],eax
0x1413f5252: jne    0x1413f525d
0x1413f5254: mov    eax,DWORD PTR [r14+0x1c]
0x1413f5258: cmp    DWORD PTR [rsi+0x1c],eax
0x1413f525b: je     0x1413f5294
0x1413f525d: call   0x1413f4870
0x1413f5262: test   al,al
0x1413f5264: je     0x1413f5273
0x1413f5266: or     DWORD PTR [rsi+0x20],0x1
0x1413f526a: mov    rbp,rsi
0x1413f526d: add    rbx,0x8
0x1413f5271: jmp    0x1413f5230
0x1413f5273: mov    rdx,rsi
0x1413f5276: mov    rcx,r14
0x1413f5279: call   0x1413f4870
0x1413f527e: test   al,al
0x1413f5280: jne    0x1413f532b
0x1413f5286: test   BYTE PTR [rsi+0x20],0x1
0x1413f528a: cmovne rbp,rsi
0x1413f528e: add    rbx,0x8
0x1413f5292: jmp    0x1413f5230
0x1413f5294: test   BYTE PTR [rsi+0x20],0x1
0x1413f5298: jne    0x1413f532b
0x1413f529e: cmp    DWORD PTR [rsi+0x10],r13d
0x1413f52a2: jle    0x1413f52b3
0x1413f52a4: mov    DWORD PTR [rsi+0x10],r13d
0x1413f52a8: mov    eax,0x1
0x1413f52ad: mov    DWORD PTR [rsi+0x14],r12d
0x1413f52b1: jmp    0x1413f5330
0x1413f52b3: jne    0x1413f532b
0x1413f52b5: cmp    DWORD PTR [rsi+0x14],r12d
0x1413f52b9: jle    0x1413f532b
0x1413f52bb: mov    DWORD PTR [rsi+0x14],r12d
0x1413f52bf: mov    eax,0x1
0x1413f52c4: jmp    0x1413f5330
0x1413f52c6: test   rbp,rbp
0x1413f52c9: je     0x1413f52e2
0x1413f52cb: mov    rdx,r14
0x1413f52ce: mov    rcx,rbp
0x1413f52d1: call   0x140488010
0x1413f52d6: xor    eax,eax
0x1413f52d8: mov    DWORD PTR [rbp+0x10],r13d
0x1413f52dc: mov    DWORD PTR [rbp+0x14],r12d
0x1413f52e0: jmp    0x1413f5330
0x1413f52e2: mov    ecx,0x28
0x1413f52e7: call   0x141539690
0x1413f52ec: mov    rcx,rax
0x1413f52ef: mov    QWORD PTR [rsp+0x58],rax
0x1413f52f4: mov    rdx,r14
0x1413f52f7: call   0x140488010
0x1413f52fc: mov    DWORD PTR [rcx+0x10],r13d
0x1413f5300: mov    DWORD PTR [rcx+0x14],r12d
0x1413f5304: mov    rdx,QWORD PTR [r15+0x8]
0x1413f5308: cmp    rdx,QWORD PTR [r15+0x10]
0x1413f530c: je     0x1413f531a
0x1413f530e: mov    QWORD PTR [rdx],rcx
0x1413f5311: add    QWORD PTR [r15+0x8],0x8
0x1413f5316: xor    eax,eax
0x1413f5318: jmp    0x1413f5330
0x1413f531a: lea    r8,[rsp+0x58]
0x1413f531f: mov    rcx,r15
0x1413f5322: call   0x1400bad30
0x1413f5327: xor    eax,eax
0x1413f5329: jmp    0x1413f5330
0x1413f532b: mov    eax,0x2
0x1413f5330: mov    rbx,QWORD PTR [rsp+0x50]
0x1413f5335: mov    rbp,QWORD PTR [rsp+0x60]
0x1413f533a: mov    rsi,QWORD PTR [rsp+0x68]
0x1413f533f: add    rsp,0x20
0x1413f5343: pop    r15
0x1413f5345: pop    r14
0x1413f5347: pop    r13
0x1413f5349: pop    r12
0x1413f534b: pop    rdi
0x1413f534c: ret
