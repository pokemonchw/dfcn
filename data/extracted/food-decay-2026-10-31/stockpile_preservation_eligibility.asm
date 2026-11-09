140c738a0: mov    QWORD PTR [rsp+0x8],rbx
140c738a5: mov    QWORD PTR [rsp+0x10],rsi
140c738aa: push   rdi
140c738ab: sub    rsp,0x20
140c738af: mov    rax,QWORD PTR [rcx]
140c738b2: movzx  edi,dl
140c738b5: mov    rbx,rcx
140c738b8: call   QWORD PTR [rax]
140c738ba: movsx  r8d,ax
140c738be: add    r8d,0xffffffef
140c738c2: cmp    r8d,0x47
140c738c6: ja     0x140c73961
140c738cc: lea    rcx,[rip+0xffffffffff38c72d]        # 0x140000000
140c738d3: movsxd rax,r8d
140c738d6: movzx  eax,BYTE PTR [rcx+rax*1+0xc73a30]
140c738de: mov    edx,DWORD PTR [rcx+rax*4+0xc73a1c]
140c738e5: add    rdx,rcx
140c738e8: jmp    rdx
140c738ea: test   BYTE PTR [rbx+0x10],0x40
140c738ee: je     0x140c73961
140c738f0: test   dil,dil
140c738f3: je     0x140c73961
140c738f5: mov    rdx,QWORD PTR [rbx+0x38]
140c738f9: xor    esi,esi
140c738fb: mov    rax,QWORD PTR [rbx+0x40]
140c738ff: sub    rax,rdx
140c73902: sar    rax,0x3
140c73906: test   rax,rax
140c73909: je     0x140c73961
140c7390b: mov    edi,esi
140c7390d: nop    DWORD PTR [rax]
140c73910: mov    rcx,QWORD PTR [rdi+rdx*1]
140c73914: mov    rax,QWORD PTR [rcx]
140c73917: call   QWORD PTR [rax+0x10]
140c7391a: cmp    eax,0xa
140c7391d: jne    0x140c73944
140c7391f: mov    rax,QWORD PTR [rbx+0x38]
140c73923: mov    rcx,QWORD PTR [rdi+rax*1]
140c73927: mov    rax,QWORD PTR [rcx]
140c7392a: call   QWORD PTR [rax+0x18]
140c7392d: test   rax,rax
140c73930: je     0x140c73944
140c73932: mov    dl,0x1
140c73934: mov    rcx,rax
140c73937: call   0x140c738a0
140c7393c: test   al,al
140c7393e: jne    0x140c73a09
140c73944: mov    rdx,QWORD PTR [rbx+0x38]
140c73948: inc    esi
140c7394a: mov    rcx,QWORD PTR [rbx+0x40]
140c7394e: add    rdi,0x8
140c73952: sub    rcx,rdx
140c73955: movsxd rax,esi
140c73958: sar    rcx,0x3
140c7395c: cmp    rax,rcx
140c7395f: jb     0x140c73910
140c73961: xor    al,al
140c73963: mov    rbx,QWORD PTR [rsp+0x30]
140c73968: mov    rsi,QWORD PTR [rsp+0x38]
140c7396d: add    rsp,0x20
140c73971: pop    rdi
140c73972: ret
140c73973: mov    rax,QWORD PTR [rbx]
140c73976: mov    rcx,rbx
140c73979: call   QWORD PTR [rax+0x10]
140c7397c: mov    edx,0x1a3
140c73981: movzx  ecx,ax
140c73984: sub    cx,dx
140c73987: mov    edx,0xc7
140c7398c: cmp    cx,dx
140c7398f: jbe    0x140c73a09
140c73991: lea    ecx,[rax-0x13]
140c73994: cmp    cx,dx
140c73997: jbe    0x140c73a09
140c73999: mov    ecx,0xdb
140c7399e: sub    ax,cx
140c739a1: cmp    ax,dx
140c739a4: jbe    0x140c73a09
140c739a6: xor    al,al
140c739a8: mov    rbx,QWORD PTR [rsp+0x30]
140c739ad: mov    rsi,QWORD PTR [rsp+0x38]
140c739b2: add    rsp,0x20
140c739b6: pop    rdi
140c739b7: ret
140c739b8: mov    eax,DWORD PTR [rbx+0xc4]
140c739be: movzx  r8d,WORD PTR [rbx+0xb8]
140c739c6: mov    r9d,DWORD PTR [rbx+0xbc]
140c739cd: test   al,0x2
140c739cf: je     0x140c739d8
140c739d1: mov    edx,0x22
140c739d6: jmp    0x140c739e6
140c739d8: mov    edx,0x21
140c739dd: test   al,0x4
140c739df: jne    0x140c739e6
140c739e1: mov    edx,0xd
140c739e6: call   0x140d66790
140c739eb: cmp    eax,0xffffffff
140c739ee: je     0x140c73961
140c739f4: mov    eax,DWORD PTR [rbx+0x10]
140c739f7: test   al,al
140c739f9: js     0x140c73961
140c739ff: bt     eax,0x8
140c73a03: jb     0x140c73961
140c73a09: mov    rbx,QWORD PTR [rsp+0x30]
140c73a0e: mov    al,0x1
140c73a10: mov    rsi,QWORD PTR [rsp+0x38]
140c73a15: add    rsp,0x20
140c73a19: pop    rdi
140c73a1a: ret
140c73a1b: nop
140c73a1c: (bad)
140c73a1d: cmp    bh,al
140c73a1f: add    ah,dh
140c73a21: cmp    edi,eax
140c73a23: add    BYTE PTR [rbx+0x39],dh
140c73a26: mov    DWORD PTR [rax],0xc739b8
140c73a2c: (bad)
140c73a2d: cmp    edi,eax
140c73a2f: add    BYTE PTR [rax],al
140c73a31: add    al,0x4
140c73a33: add    al,0x4
140c73a35: add    al,0x4
140c73a37: add    al,0x4
140c73a39: add    al,0x4
140c73a3b: add    al,0x4
140c73a3d: add    al,0x0
140c73a3f: add    al,0x4
140c73a41: add    al,0x4
140c73a43: add    al,0x4
140c73a45: add    al,0x4
140c73a47: add    al,0x4
140c73a49: add    al,0x4
140c73a4b: add    al,0x4
140c73a4d: add    al,0x4
140c73a4f: add    DWORD PTR [rcx],eax
140c73a51: add    DWORD PTR [rsp+rax*1],eax
140c73a54: add    DWORD PTR [rcx],eax
140c73a56: add    al,0x1
140c73a58: add    al,0x4
140c73a5a: add    al,0x4
140c73a5c: add    al,0x4
140c73a5e: add    al,0x4
140c73a60: add    al,0x4
140c73a62: add    al,0x4
140c73a64: add    al,0x2
140c73a66: add    DWORD PTR [rcx],eax
140c73a68: add    al,0x4
140c73a6a: add    eax,DWORD PTR [rsp+rax*1]
140c73a6d: add    al,0x4
140c73a6f: add    al,0x4
140c73a71: add    al,0x4
140c73a73: add    al,0x4
140c73a75: add    BYTE PTR [rcx+rax*1],al