1407dd040: mov    DWORD PTR [rsp+0x20],r9d
1407dd045: mov    DWORD PTR [rsp+0x18],r8d
1407dd04a: mov    WORD PTR [rsp+0x10],dx
1407dd04f: push   rbx
1407dd050: push   rsi
1407dd051: push   rdi
1407dd052: sub    rsp,0x20
1407dd056: mov    rbx,rcx
1407dd059: movzx  eax,dx
1407dd05c: add    rcx,0xe8
1407dd063: mov    edi,r9d
1407dd066: mov    esi,r8d
1407dd069: mov    rdx,QWORD PTR [rbx+0xf0]
1407dd070: cmp    rdx,QWORD PTR [rbx+0xf8]
1407dd077: je     0x1407dd086
1407dd079: mov    WORD PTR [rdx],ax
1407dd07c: add    QWORD PTR [rbx+0xf0],0x2
1407dd084: jmp    0x1407dd090
1407dd086: lea    r8,[rsp+0x48]
1407dd08b: call   0x140071040
1407dd090: mov    rdx,QWORD PTR [rbx+0x108]
1407dd097: lea    rcx,[rbx+0x100]
1407dd09e: cmp    rdx,QWORD PTR [rbx+0x110]
1407dd0a5: je     0x1407dd0b3
1407dd0a7: mov    DWORD PTR [rdx],esi
1407dd0a9: add    QWORD PTR [rbx+0x108],0x4
1407dd0b1: jmp    0x1407dd0bd
1407dd0b3: lea    r8,[rsp+0x50]
1407dd0b8: call   0x140070e20
1407dd0bd: mov    rdx,QWORD PTR [rbx+0x120]
1407dd0c4: lea    rcx,[rbx+0x118]
1407dd0cb: cmp    rdx,QWORD PTR [rbx+0x128]
1407dd0d2: je     0x1407dd0ec
1407dd0d4: mov    DWORD PTR [rdx],edi
1407dd0d6: add    QWORD PTR [rbx+0x120],0x4
1407dd0de: add    DWORD PTR [rbx+0x130],edi
1407dd0e4: add    rsp,0x20
1407dd0e8: pop    rdi
1407dd0e9: pop    rsi
1407dd0ea: pop    rbx
1407dd0eb: ret
1407dd0ec: lea    r8,[rsp+0x58]
1407dd0f1: call   0x140070e20
1407dd0f6: add    DWORD PTR [rbx+0x130],edi
1407dd0fc: add    rsp,0x20
1407dd100: pop    rdi
1407dd101: pop    rsi
1407dd102: pop    rbx
1407dd103: ret