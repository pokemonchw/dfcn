
/home/lulika/.local/share/Steam/steamapps/common/DFHack/hack/dfhack.dll:     file format pei-x86-64


Disassembly of section .text:

00000001803c19c0 <.text+0x3c09c0>:
   1803c19c0:	48 89 5c 24 10       	mov    QWORD PTR [rsp+0x10],rbx
   1803c19c5:	57                   	push   rdi
   1803c19c6:	48 83 ec 70          	sub    rsp,0x70
   1803c19ca:	48 8b 05 6f 2b 07 01 	mov    rax,QWORD PTR [rip+0x1072b6f]        # 0x181434540
   1803c19d1:	48 33 c4             	xor    rax,rsp
   1803c19d4:	48 89 44 24 60       	mov    QWORD PTR [rsp+0x60],rax
   1803c19d9:	48 8b d9             	mov    rbx,rcx
   1803c19dc:	48 8b d1             	mov    rdx,rcx
   1803c19df:	48 8d 4c 24 40       	lea    rcx,[rsp+0x40]
   1803c19e4:	e8 67 8f 05 00       	call   0x18041a950
   1803c19e9:	90                   	nop
   1803c19ea:	4c 8d 05 0f fe 10 01 	lea    r8,[rip+0x110fe0f]        # 0x1814d1800
   1803c19f1:	ba d8 b9 f0 ff       	mov    edx,0xfff0b9d8
   1803c19f6:	48 8b cb             	mov    rcx,rbx
   1803c19f9:	ff 15 59 04 7c 00    	call   QWORD PTR [rip+0x7c0459]        # 0x180b81e58
   1803c19ff:	ba ff ff ff ff       	mov    edx,0xffffffff
   1803c1a04:	48 8b cb             	mov    rcx,rbx
   1803c1a07:	ff 15 eb 03 7c 00    	call   QWORD PTR [rip+0x7c03eb]        # 0x180b81df8
   1803c1a0d:	48 8b f8             	mov    rdi,rax
   1803c1a10:	ba fe ff ff ff       	mov    edx,0xfffffffe
   1803c1a15:	48 8b cb             	mov    rcx,rbx
   1803c1a18:	ff 15 52 06 7c 00    	call   QWORD PTR [rip+0x7c0652]        # 0x180b82070
   1803c1a1e:	48 8d 54 24 40       	lea    rdx,[rsp+0x40]
   1803c1a23:	48 85 ff             	test   rdi,rdi
   1803c1a26:	74 2c                	je     0x1803c1a54
   1803c1a28:	48 83 7c 24 58 0f    	cmp    QWORD PTR [rsp+0x58],0xf
   1803c1a2e:	48 0f 47 54 24 40    	cmova  rdx,QWORD PTR [rsp+0x40]
   1803c1a34:	48 8d 4f 08          	lea    rcx,[rdi+0x8]
   1803c1a38:	4c 8b 44 24 50       	mov    r8,QWORD PTR [rsp+0x50]
   1803c1a3d:	e8 fe 0a da ff       	call   0x180162540
   1803c1a42:	48 8d 15 77 16 dd ff 	lea    rdx,[rip+0xffffffffffdd1677]        # 0x1801930c0
   1803c1a49:	48 8b c8             	mov    rcx,rax
   1803c1a4c:	ff 15 c6 f9 7b 00    	call   QWORD PTR [rip+0x7bf9c6]        # 0x180b81418
   1803c1a52:	eb 20                	jmp    0x1803c1a74
   1803c1a54:	48 8d 05 b1 c4 7c 00 	lea    rax,[rip+0x7cc4b1]        # 0x180b8df0c
   1803c1a5b:	48 89 44 24 30       	mov    QWORD PTR [rsp+0x30],rax
   1803c1a60:	48 c7 44 24 38 03 00 	mov    QWORD PTR [rsp+0x38],0x3
   1803c1a67:	00 00 
   1803c1a69:	48 8d 4c 24 30       	lea    rcx,[rsp+0x30]
   1803c1a6e:	e8 2d 45 01 00       	call   0x1803d5fa0
   1803c1a73:	90                   	nop
   1803c1a74:	48 8b 54 24 58       	mov    rdx,QWORD PTR [rsp+0x58]
   1803c1a79:	48 83 fa 0f          	cmp    rdx,0xf
   1803c1a7d:	76 48                	jbe    0x1803c1ac7
   1803c1a7f:	48 ff c2             	inc    rdx
   1803c1a82:	48 8b 4c 24 40       	mov    rcx,QWORD PTR [rsp+0x40]
   1803c1a87:	48 8b c1             	mov    rax,rcx
   1803c1a8a:	48 81 fa 00 10 00 00 	cmp    rdx,0x1000
   1803c1a91:	72 2f                	jb     0x1803c1ac2
   1803c1a93:	48 83 c2 27          	add    rdx,0x27
   1803c1a97:	48 8b 49 f8          	mov    rcx,QWORD PTR [rcx-0x8]
   1803c1a9b:	48 2b c1             	sub    rax,rcx
   1803c1a9e:	48 83 e8 08          	sub    rax,0x8
   1803c1aa2:	48 83 f8 1f          	cmp    rax,0x1f
   1803c1aa6:	76 1a                	jbe    0x1803c1ac2
   1803c1aa8:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
   1803c1aaf:	00 00 
   1803c1ab1:	45 33 c9             	xor    r9d,r9d
   1803c1ab4:	45 33 c0             	xor    r8d,r8d
   1803c1ab7:	33 d2                	xor    edx,edx
   1803c1ab9:	33 c9                	xor    ecx,ecx
   1803c1abb:	ff 15 5f 01 7c 00    	call   QWORD PTR [rip+0x7c015f]        # 0x180b81c20
   1803c1ac1:	cc                   	int3
   1803c1ac2:	e8 91 85 74 00       	call   0x180b0a058
   1803c1ac7:	33 c0                	xor    eax,eax
   1803c1ac9:	48 8b 4c 24 60       	mov    rcx,QWORD PTR [rsp+0x60]
   1803c1ace:	48 33 cc             	xor    rcx,rsp
   1803c1ad1:	e8 fa 8e 74 00       	call   0x180b0a9d0
   1803c1ad6:	48 8b 9c 24 88 00 00 	mov    rbx,QWORD PTR [rsp+0x88]
   1803c1add:	00 
   1803c1ade:	48 83 c4 70          	add    rsp,0x70
   1803c1ae2:	5f                   	pop    rdi
   1803c1ae3:	c3                   	ret
   1803c1ae4:	cc                   	int3
   1803c1ae5:	cc                   	int3
   1803c1ae6:	cc                   	int3
   1803c1ae7:	cc                   	int3
   1803c1ae8:	cc                   	int3
   1803c1ae9:	cc                   	int3
   1803c1aea:	cc                   	int3
   1803c1aeb:	cc                   	int3
   1803c1aec:	cc                   	int3
   1803c1aed:	cc                   	int3
   1803c1aee:	cc                   	int3
   1803c1aef:	cc                   	int3
