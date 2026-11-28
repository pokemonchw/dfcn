; classic PE:6aea11a5:0272d000; reference-description:general_ref_item_typest; RVA 0xf07a40..0xf07ae3; code ends 0xf07ae3
0x00f07a40: mov    QWORD PTR [rsp+0x8],rbx
0x00f07a45: mov    QWORD PTR [rsp+0x10],rsi
0x00f07a4a: push   rdi
0x00f07a4b: sub    rsp,0x70
0x00f07a4f: xor    esi,esi
0x00f07a51: mov    rbx,rdx
0x00f07a54: mov    QWORD PTR [rdx+0x10],rsi
0x00f07a58: mov    rdi,rcx
0x00f07a5b: cmp    QWORD PTR [rdx+0x18],0xf
0x00f07a60: mov    rax,rdx
0x00f07a63: jbe    0x140f07a68
0x00f07a65: mov    rax,QWORD PTR [rdx]
0x00f07a68: mov    r8d,0x2
0x00f07a6e: mov    BYTE PTR [rax],sil
0x00f07a71: lea    rdx,[rip+0x6fbe10]        # 0x141603888 ; literal="a "
0x00f07a78: mov    rcx,rbx
0x00f07a7b: call   0x140070fd0
0x00f07a80: movsx  eax,WORD PTR [rdi+0x12]
0x00f07a84: mov    rcx,rbx
0x00f07a87: movzx  r9d,WORD PTR [rdi+0x10]
0x00f07a8c: movzx  r8d,WORD PTR [rdi+0xc]
0x00f07a91: movzx  edx,WORD PTR [rdi+0x8]
0x00f07a95: mov    DWORD PTR [rsp+0x68],esi
0x00f07a99: mov    DWORD PTR [rsp+0x60],esi
0x00f07a9d: mov    BYTE PTR [rsp+0x58],sil
0x00f07aa2: mov    DWORD PTR [rsp+0x50],0xffffffff
0x00f07aaa: mov    DWORD PTR [rsp+0x48],0xffffffff
0x00f07ab2: mov    QWORD PTR [rsp+0x40],rsi
0x00f07ab7: mov    BYTE PTR [rsp+0x38],0x1
0x00f07abc: mov    DWORD PTR [rsp+0x30],esi
0x00f07ac0: mov    DWORD PTR [rsp+0x28],0x1
0x00f07ac8: mov    DWORD PTR [rsp+0x20],eax
0x00f07acc: call   0x140a99510
0x00f07ad1: lea    r11,[rsp+0x70]
0x00f07ad6: mov    rbx,QWORD PTR [r11+0x10]
0x00f07ada: mov    rsi,QWORD PTR [r11+0x18]
0x00f07ade: mov    rsp,r11
0x00f07ae1: pop    rdi
0x00f07ae2: ret
