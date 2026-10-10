# classic PE:6a70b91c:0270a000; force-place-field; RVA 0x5c1180..0x5c1241
0x005c1180: mov    QWORD PTR [rsp+0x10],rbx
0x005c1185: mov    QWORD PTR [rsp+0x18],rbp
0x005c118a: mov    QWORD PTR [rsp+0x20],rsi
0x005c118f: push   rdi
0x005c1190: push   r14
0x005c1192: push   r15
0x005c1194: sub    rsp,0x30
0x005c1198: mov    rax,QWORD PTR [rcx+0x238]
0x005c119f: mov    r15d,edx
0x005c11a2: mov    rdi,QWORD PTR [rcx+0x240]
0x005c11a9: mov    rbp,rcx
0x005c11ac: sub    rdi,rax
0x005c11af: sar    rdi,0x3
0x005c11b3: sub    edi,0x1
0x005c11b6: js     0x1405c1216
0x005c11b8: movsxd rsi,edi
0x005c11bb: mov    DWORD PTR [rsp+0x50],0xffffffff
0x005c11c3: mov    DWORD PTR [rsp+0x54],0x0
0x005c11cb: mov    rbx,QWORD PTR [rsp+0x50]
0x005c11d0: lea    r14,[rax+rsi*8]
0x005c11d4: nop    DWORD PTR [rax+0x0]
0x005c11d8: nop    DWORD PTR [rax+rax*1+0x0]
0x005c11e0: mov    rdx,QWORD PTR [r14]
0x005c11e3: lea    rcx,[rsp+0x20]
0x005c11e8: add    rdx,0x250
0x005c11ef: mov    r8d,r15d
0x005c11f2: call   0x1400bab70
0x005c11f7: cmp    BYTE PTR [rsp+0x28],0x0
0x005c11fc: mov    rax,rbx
0x005c11ff: cmovne rax,QWORD PTR [rsp+0x20]
0x005c1205: cmp    eax,0xffffffff
0x005c1208: jne    0x1405c1231
0x005c120a: dec    edi
0x005c120c: sub    r14,0x8
0x005c1210: sub    rsi,0x1
0x005c1214: jns    0x1405c11e0
0x005c1216: xor    eax,eax
0x005c1218: mov    rbx,QWORD PTR [rsp+0x58]
0x005c121d: mov    rbp,QWORD PTR [rsp+0x60]
0x005c1222: mov    rsi,QWORD PTR [rsp+0x68]
0x005c1227: add    rsp,0x30
0x005c122b: pop    r15
0x005c122d: pop    r14
0x005c122f: pop    rdi
0x005c1230: ret
0x005c1231: mov    rax,QWORD PTR [rbp+0x238]
0x005c1238: movsxd rcx,edi
0x005c123b: mov    rax,QWORD PTR [rax+rcx*8]
0x005c123f: jmp    0x1405c1218
