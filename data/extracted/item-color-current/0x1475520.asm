
D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe:     file format pei-x86-64


Disassembly of section .text:

0000000141475520 <.text+0x1474520>:
   141475520:	mov    QWORD PTR [rsp+0x8],rbx
   141475525:	mov    QWORD PTR [rsp+0x10],rsi
   14147552a:	push   rdi
   14147552b:	sub    rsp,0x20
   14147552f:	mov    rsi,rcx
   141475532:	movsx  rbx,dx
   141475536:	movzx  ecx,bx
   141475539:	movsxd rdi,r8d
   14147553c:	mov    eax,0x1a3
   141475541:	mov    r9d,0xc7
   141475547:	sub    cx,ax
   14147554a:	cmp    cx,r9w
   14147554e:	ja     0x1414755b9
   141475550:	test   r8d,r8d
   141475553:	js     0x1414755b9
   141475555:	mov    rdx,QWORD PTR [rsi+0x11b408]
   14147555c:	mov    rax,QWORD PTR [rsi+0x11b410]
   141475563:	sub    rax,rdx
   141475566:	sar    rax,0x3
   14147556a:	cmp    rdi,rax
   14147556d:	jae    0x1414755b9
   14147556f:	test   cx,cx
   141475572:	js     0x1414755b9
   141475574:	mov    rcx,QWORD PTR [rdx+rdi*8]
   141475578:	lea    r8,[rbx-0x1a3]
   14147557f:	mov    rdx,QWORD PTR [rcx+0x2a0]
   141475586:	mov    rax,QWORD PTR [rcx+0x2a8]
   14147558d:	sub    rax,rdx
   141475590:	sar    rax,0x3
   141475594:	cmp    r8,rax
   141475597:	jae    0x1414755b9
   141475599:	mov    rax,QWORD PTR [rdx+r8*8]
   14147559d:	test   rax,rax
   1414755a0:	je     0x1414755b9
   1414755a2:	movzx  eax,WORD PTR [rax+0x4e0]
   1414755a9:	mov    rbx,QWORD PTR [rsp+0x30]
   1414755ae:	mov    rsi,QWORD PTR [rsp+0x38]
   1414755b3:	add    rsp,0x20
   1414755b7:	pop    rdi
   1414755b8:	ret
   1414755b9:	lea    eax,[rbx-0x13]
   1414755bc:	cmp    ax,r9w
   1414755c0:	jbe    0x1414755d3
   1414755c2:	mov    ecx,0xdb
   1414755c7:	movzx  eax,bx
   1414755ca:	sub    ax,cx
   1414755cd:	cmp    ax,r9w
   1414755d1:	ja     0x1414755ea
   1414755d3:	lea    rcx,[rsi+0x11b558]
   1414755da:	mov    r8d,edi
   1414755dd:	movzx  edx,bx
   1414755e0:	call   0x14071b460
   1414755e5:	test   rax,rax
   1414755e8:	jne    0x1414755a2
   1414755ea:	test   bx,bx
   1414755ed:	jne    0x14147562d
   1414755ef:	test   edi,edi
   1414755f1:	js     0x14147562d
   1414755f3:	mov    rcx,QWORD PTR [rsi+0x11b3d8]
   1414755fa:	mov    rax,QWORD PTR [rsi+0x11b3e0]
   141475601:	sub    rax,rcx
   141475604:	sar    rax,0x3
   141475608:	cmp    rdi,rax
   14147560b:	jae    0x14147562d
   14147560d:	mov    rax,QWORD PTR [rcx+rdi*8]
   141475611:	test   rax,rax
   141475614:	je     0x14147562d
   141475616:	movzx  eax,WORD PTR [rax+0x688]
   14147561d:	mov    rbx,QWORD PTR [rsp+0x30]
   141475622:	mov    rsi,QWORD PTR [rsp+0x38]
   141475627:	add    rsp,0x20
   14147562b:	pop    rdi
   14147562c:	ret
   14147562d:	mov    rbx,QWORD PTR [rsp+0x30]
   141475632:	mov    eax,0xffffffff
   141475637:	mov    rsi,QWORD PTR [rsp+0x38]
   14147563c:	add    rsp,0x20
   141475640:	pop    rdi
   141475641:	ret
