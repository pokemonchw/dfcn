# steam PE:6a70a6d9:02711000; reagent-item-matcher; RVA 0x280010..0x28019e
0x00280010: rex push rbx
0x00280012: push   rbp
0x00280013: sub    rsp,0x28
0x00280017: mov    rax,QWORD PTR [rcx+0x78]
0x0028001b: mov    rbp,rcx
0x0028001e: cmp    rax,QWORD PTR [rcx+0x80]
0x00280025: je     0x14028002e
0x00280027: mov    QWORD PTR [rcx+0x80],rax
0x0028002e: mov    rax,QWORD PTR [rcx+0xc0]
0x00280035: mov    DWORD PTR [rcx+0xcc],0x0
0x0028003f: test   rax,rax
0x00280042: je     0x140280197
0x00280048: movsxd rcx,DWORD PTR [rcx+0xc8]
0x0028004f: test   ecx,ecx
0x00280051: js     0x140280197
0x00280057: mov    rdx,QWORD PTR [rax+0x50]
0x0028005b: mov    rax,QWORD PTR [rax+0x58]
0x0028005f: sub    rax,rdx
0x00280062: sar    rax,0x3
0x00280066: cmp    rcx,rax
0x00280069: jae    0x140280197
0x0028006f: mov    QWORD PTR [rsp+0x50],rdi
0x00280074: mov    QWORD PTR [rsp+0x20],r14
0x00280079: mov    r14,QWORD PTR [rdx+rcx*8]
0x0028007d: mov    QWORD PTR [rsp+0x48],rsi
0x00280082: mov    eax,DWORD PTR [r14+0x28]
0x00280086: mov    DWORD PTR [rbp+0xcc],eax
0x0028008c: mov    rax,QWORD PTR [rbp+0x10]
0x00280090: sub    rax,QWORD PTR [rbp+0x8]
0x00280094: sar    rax,0x3
0x00280098: sub    eax,0x1
0x0028009b: movsxd rdi,eax
0x0028009e: js     0x1402800fc
0x002800a0: mov    rax,QWORD PTR [rbp+0x8]
0x002800a4: mov    rcx,r14
0x002800a7: mov    r8,QWORD PTR [rbp+0xc0]
0x002800ae: mov    rsi,QWORD PTR [rax+rdi*8]
0x002800b2: mov    rax,QWORD PTR [r14]
0x002800b5: mov    rdx,rsi
0x002800b8: mov    r8d,DWORD PTR [r8+0x118]
0x002800bf: mov    QWORD PTR [rsp+0x40],rsi
0x002800c4: call   QWORD PTR [rax+0x28]
0x002800c7: test   al,al
0x002800c9: je     0x1402800f6
0x002800cb: mov    rdx,QWORD PTR [rbp+0x80]
0x002800d2: cmp    rdx,QWORD PTR [rbp+0x88]
0x002800d9: je     0x1402800e8
0x002800db: mov    QWORD PTR [rdx],rsi
0x002800de: add    QWORD PTR [rbp+0x80],0x8
0x002800e6: jmp    0x1402800f6
0x002800e8: lea    r8,[rsp+0x40]
0x002800ed: lea    rcx,[rbp+0x78]
0x002800f1: call   0x1400bad30
0x002800f6: sub    rdi,0x1
0x002800fa: jns    0x1402800a0
0x002800fc: mov    rdi,QWORD PTR [rbp+0x80]
0x00280103: sub    rdi,QWORD PTR [rbp+0x78]
0x00280107: sar    rdi,0x3
0x0028010b: sub    edi,0x1
0x0028010e: js     0x140280188
0x00280114: movsxd rax,edi
0x00280117: lea    rsi,[rax*8+0x0]
0x0028011f: mov    r14,rsi
0x00280122: mov    r9,QWORD PTR [rbp+0x78]
0x00280126: mov    rax,QWORD PTR [rbp+0x90]
0x0028012d: mov    rcx,QWORD PTR [rbp+0x98]
0x00280134: mov    rdx,rax
0x00280137: mov    r8,QWORD PTR [rsi+r9*1]
0x0028013b: nop    DWORD PTR [rax+rax*1+0x0]
0x00280140: cmp    rax,rcx
0x00280143: jae    0x14028017b
0x00280145: cmp    QWORD PTR [rax],r8
0x00280148: je     0x140280150
0x0028014a: add    rax,0x8
0x0028014e: jmp    0x140280140
0x00280150: sub    rax,rdx
0x00280153: sar    rax,0x3
0x00280157: cmp    eax,0xffffffff
0x0028015a: je     0x14028017b
0x0028015c: mov    r8,QWORD PTR [rbp+0x80]
0x00280163: lea    rcx,[r14+r9*1]
0x00280167: lea    rdx,[rcx+0x8]
0x0028016b: sub    r8,rdx
0x0028016e: call   0x14153ae1a
0x00280173: add    QWORD PTR [rbp+0x80],0xfffffffffffffff8
0x0028017b: sub    r14,0x8
0x0028017f: sub    rsi,0x8
0x00280183: sub    edi,0x1
0x00280186: jns    0x140280122
0x00280188: mov    rsi,QWORD PTR [rsp+0x48]
0x0028018d: mov    rdi,QWORD PTR [rsp+0x50]
0x00280192: mov    r14,QWORD PTR [rsp+0x20]
0x00280197: add    rsp,0x28
0x0028019b: pop    rbp
0x0028019c: pop    rbx
0x0028019d: ret
