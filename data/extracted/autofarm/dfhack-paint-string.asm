
/home/lulika/.local/share/Steam/steamapps/common/DFHack/hack/dfhack.dll:     file format pei-x86-64


Disassembly of section .text:

0000000180426c90 <.text+0x425c90>:
   180426c90:	48 89 5c 24 10       	mov    QWORD PTR [rsp+0x10],rbx
   180426c95:	48 89 6c 24 18       	mov    QWORD PTR [rsp+0x18],rbp
   180426c9a:	56                   	push   rsi
   180426c9b:	57                   	push   rdi
   180426c9c:	41 56                	push   r14
   180426c9e:	48 83 ec 70          	sub    rsp,0x70
   180426ca2:	48 8b 05 97 d8 00 01 	mov    rax,QWORD PTR [rip+0x100d897]        # 0x181434540
   180426ca9:	48 33 c4             	xor    rax,rsp
   180426cac:	48 89 44 24 68       	mov    QWORD PTR [rsp+0x68],rax
   180426cb1:	4c 8b f1             	mov    r14,rcx
   180426cb4:	c7 44 24 30 00 07 00 	mov    DWORD PTR [rsp+0x30],0x700
   180426cbb:	00 
   180426cbc:	48 c7 44 24 34 00 00 	mov    QWORD PTR [rsp+0x34],0x0
   180426cc3:	00 00 
   180426cc5:	c7 44 24 3c 00 00 00 	mov    DWORD PTR [rsp+0x3c],0x0
   180426ccc:	00 
   180426ccd:	66 c7 44 24 40 00 00 	mov    WORD PTR [rsp+0x40],0x0
   180426cd4:	c6 44 24 20 01       	mov    BYTE PTR [rsp+0x20],0x1
   180426cd9:	45 33 c9             	xor    r9d,r9d
   180426cdc:	41 b8 01 00 00 00    	mov    r8d,0x1
   180426ce2:	48 8d 54 24 30       	lea    rdx,[rsp+0x30]
   180426ce7:	e8 34 f3 05 00       	call   0x180486020
   180426cec:	ba 02 00 00 00       	mov    edx,0x2
   180426cf1:	49 8b ce             	mov    rcx,r14
   180426cf4:	ff 15 de b1 75 00    	call   QWORD PTR [rip+0x75b1de]        # 0x180b81ed8
   180426cfa:	48 8b e8             	mov    rbp,rax
   180426cfd:	ba 03 00 00 00       	mov    edx,0x3
   180426d02:	49 8b ce             	mov    rcx,r14
   180426d05:	ff 15 cd b1 75 00    	call   QWORD PTR [rip+0x75b1cd]        # 0x180b81ed8
   180426d0b:	48 8b f0             	mov    rsi,rax
   180426d0e:	45 33 c0             	xor    r8d,r8d
   180426d11:	ba 04 00 00 00       	mov    edx,0x4
   180426d16:	49 8b ce             	mov    rcx,r14
   180426d19:	ff 15 f1 b2 75 00    	call   QWORD PTR [rip+0x75b2f1]        # 0x180b82010
   180426d1f:	48 8b f8             	mov    rdi,rax
   180426d22:	ba 05 00 00 00       	mov    edx,0x5
   180426d27:	49 8b ce             	mov    rcx,r14
   180426d2a:	ff 15 28 b3 75 00    	call   QWORD PTR [rip+0x75b328]        # 0x180b82058
   180426d30:	85 c0                	test   eax,eax
   180426d32:	0f 95 c3             	setne  bl
   180426d35:	0f 57 c0             	xorps  xmm0,xmm0
   180426d38:	0f 11 44 24 48       	movups XMMWORD PTR [rsp+0x48],xmm0
   180426d3d:	0f 57 c9             	xorps  xmm1,xmm1
   180426d40:	f3 0f 7f 4c 24 58    	movdqu XMMWORD PTR [rsp+0x58],xmm1
   180426d46:	48 8b cf             	mov    rcx,rdi
   180426d49:	e8 82 4f 6e 00       	call   0x180b0bcd0
   180426d4e:	4c 8b c0             	mov    r8,rax
   180426d51:	48 8b d7             	mov    rdx,rdi
   180426d54:	48 8d 4c 24 48       	lea    rcx,[rsp+0x48]
   180426d59:	e8 f2 82 cf ff       	call   0x18011f050
   180426d5e:	90                   	nop
   180426d5f:	88 5c 24 20          	mov    BYTE PTR [rsp+0x20],bl
   180426d63:	4c 8d 4c 24 48       	lea    r9,[rsp+0x48]
   180426d68:	44 8b c6             	mov    r8d,esi
   180426d6b:	8b d5                	mov    edx,ebp
   180426d6d:	48 8d 4c 24 30       	lea    rcx,[rsp+0x30]
   180426d72:	e8 99 e9 62 00       	call   0x180a55710
   180426d77:	0f b6 d0             	movzx  edx,al
   180426d7a:	49 8b ce             	mov    rcx,r14
   180426d7d:	ff 15 a5 b2 75 00    	call   QWORD PTR [rip+0x75b2a5]        # 0x180b82028
   180426d83:	90                   	nop
   180426d84:	48 8b 54 24 60       	mov    rdx,QWORD PTR [rsp+0x60]
   180426d89:	48 83 fa 0f          	cmp    rdx,0xf
   180426d8d:	76 48                	jbe    0x180426dd7
   180426d8f:	48 ff c2             	inc    rdx
   180426d92:	48 8b 4c 24 48       	mov    rcx,QWORD PTR [rsp+0x48]
   180426d97:	48 8b c1             	mov    rax,rcx
   180426d9a:	48 81 fa 00 10 00 00 	cmp    rdx,0x1000
   180426da1:	72 2f                	jb     0x180426dd2
   180426da3:	48 83 c2 27          	add    rdx,0x27
   180426da7:	48 8b 49 f8          	mov    rcx,QWORD PTR [rcx-0x8]
   180426dab:	48 2b c1             	sub    rax,rcx
   180426dae:	48 83 e8 08          	sub    rax,0x8
   180426db2:	48 83 f8 1f          	cmp    rax,0x1f
   180426db6:	76 1a                	jbe    0x180426dd2
   180426db8:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
   180426dbf:	00 00 
   180426dc1:	45 33 c9             	xor    r9d,r9d
   180426dc4:	45 33 c0             	xor    r8d,r8d
   180426dc7:	33 d2                	xor    edx,edx
   180426dc9:	33 c9                	xor    ecx,ecx
   180426dcb:	ff 15 4f ae 75 00    	call   QWORD PTR [rip+0x75ae4f]        # 0x180b81c20
   180426dd1:	cc                   	int3
   180426dd2:	e8 81 32 6e 00       	call   0x180b0a058
   180426dd7:	b8 01 00 00 00       	mov    eax,0x1
   180426ddc:	48 8b 4c 24 68       	mov    rcx,QWORD PTR [rsp+0x68]
   180426de1:	48 33 cc             	xor    rcx,rsp
   180426de4:	e8 e7 3b 6e 00       	call   0x180b0a9d0
   180426de9:	4c 8d 5c 24 70       	lea    r11,[rsp+0x70]
   180426dee:	49 8b 5b 28          	mov    rbx,QWORD PTR [r11+0x28]
   180426df2:	49 8b 6b 30          	mov    rbp,QWORD PTR [r11+0x30]
   180426df6:	49 8b e3             	mov    rsp,r11
   180426df9:	41 5e                	pop    r14
   180426dfb:	5f                   	pop    rdi
   180426dfc:	5e                   	pop    rsi
   180426dfd:	c3                   	ret
   180426dfe:	cc                   	int3
   180426dff:	cc                   	int3
