; reference; PE:6aea05a1:02734000; 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16; job-object-caption; complete unwind owner
0xd1ae60: sub    rsp,0x88
0xd1ae67: movzx  r8d,WORD PTR [rcx+0x14]
0xd1ae6c: mov    eax,0xa9
0xd1ae71: mov    r10,rdx
0xd1ae74: cmp    r8w,ax
0xd1ae78: je     0x140d1aeed
0xd1ae7a: mov    eax,DWORD PTR [rcx+0x13c]
0xd1ae80: lea    r9,[rcx+0x50]
0xd1ae84: mov    DWORD PTR [rsp+0x70],eax
0xd1ae88: mov    eax,DWORD PTR [rcx+0x138]
0xd1ae8e: mov    DWORD PTR [rsp+0x68],eax
0xd1ae92: mov    eax,DWORD PTR [rcx+0x134]
0xd1ae98: mov    DWORD PTR [rsp+0x60],eax
0xd1ae9c: mov    eax,DWORD PTR [rcx+0x48]
0xd1ae9f: mov    QWORD PTR [rsp+0x58],rcx
0xd1aea4: mov    DWORD PTR [rsp+0x50],eax
0xd1aea8: mov    eax,DWORD PTR [rcx+0x44]
0xd1aeab: mov    DWORD PTR [rsp+0x48],eax
0xd1aeaf: mov    eax,DWORD PTR [rcx+0x40]
0xd1aeb2: mov    DWORD PTR [rsp+0x40],eax
0xd1aeb6: mov    eax,DWORD PTR [rcx+0x34]
0xd1aeb9: mov    QWORD PTR [rsp+0x38],r9
0xd1aebe: movzx  r9d,WORD PTR [rcx+0x3a]
0xd1aec3: mov    DWORD PTR [rsp+0x30],eax
0xd1aec7: movzx  eax,WORD PTR [rcx+0x30]
0xd1aecb: mov    WORD PTR [rsp+0x28],ax
0xd1aed0: movzx  eax,WORD PTR [rcx+0x3c]
0xd1aed4: lea    rcx,[rip+0x16ed755]        # 0x142408630
0xd1aedb: mov    WORD PTR [rsp+0x20],ax
0xd1aee0: call   0x140d1afa0
0xd1aee5: add    rsp,0x88
0xd1aeec: ret
0xd1aeed: mov    QWORD PTR [rdx+0x10],0x0
0xd1aef5: mov    rax,r10
0xd1aef8: cmp    QWORD PTR [rdx+0x18],0xf
0xd1aefd: jbe    0x140d1af02
0xd1aeff: mov    rax,QWORD PTR [rdx]
0xd1af02: mov    BYTE PTR [rax],0x0
0xd1af05: mov    ecx,DWORD PTR [rcx+0x18]
0xd1af08: test   ecx,ecx
0xd1af0a: je     0x140d1af6f
0xd1af0c: sub    ecx,0x1
0xd1af0f: je     0x140d1af53
0xd1af11: sub    ecx,0x1
0xd1af14: je     0x140d1af37
0xd1af16: cmp    ecx,0x1
0xd1af19: jne    0x140d1af6f
0xd1af1b: mov    r8d,0x14
0xd1af21: lea    rdx,[rip+0xa0aab0]        # 0x1417259d8 ; cstring='Remove Rotten Tissue'
0xd1af28: mov    rcx,r10
0xd1af2b: add    rsp,0x88
0xd1af32: jmp    0x140071040
0xd1af37: mov    r8d,0x18
0xd1af3d: lea    rdx,[rip+0xa0aa4c]        # 0x141725990 ; cstring='Repair Compound Fracture'
0xd1af44: mov    rcx,r10
0xd1af47: add    rsp,0x88
0xd1af4e: jmp    0x140071040
0xd1af53: mov    r8d,0xd
0xd1af59: lea    rdx,[rip+0xa0aa50]        # 0x1417259b0 ; cstring='Stop Bleeding'
0xd1af60: mov    rcx,r10
0xd1af63: add    rsp,0x88
0xd1af6a: jmp    0x140071040
0xd1af6f: mov    r8d,0x7
0xd1af75: lea    rdx,[rip+0x9aadf4]        # 0x1416c5d70 ; cstring='Surgery'
0xd1af7c: mov    rcx,r10
0xd1af7f: add    rsp,0x88
0xd1af86: jmp    0x140071040
