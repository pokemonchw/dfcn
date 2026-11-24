   1414ca790:	mov    QWORD PTR [rsp+0x10],rbx
   1414ca795:	mov    QWORD PTR [rsp+0x18],rbp
   1414ca79a:	mov    QWORD PTR [rsp+0x20],rsi
   1414ca79f:	push   rdi
   1414ca7a0:	push   r14
   1414ca7a2:	push   r15
   1414ca7a4:	sub    rsp,0x30
   1414ca7a8:	movsxd rdi,DWORD PTR [rsp+0x70]
   1414ca7ad:	lea    rbx,[rcx+0x11b408]
   1414ca7b4:	movzx  r14d,r8w
   1414ca7b8:	movzx  r15d,dx
   1414ca7bc:	mov    rbp,rcx
   1414ca7bf:	test   edi,edi
   1414ca7c1:	js     0x1414ca802
   1414ca7c3:	mov    rcx,QWORD PTR [rbx]
   1414ca7c6:	mov    rax,QWORD PTR [rbx+0x8]
   1414ca7ca:	sub    rax,rcx
   1414ca7cd:	sar    rax,0x3
   1414ca7d1:	cmp    rdi,rax
   1414ca7d4:	jae    0x1414ca802
   1414ca7d6:	lea    rdx,[rdi*8+0x0]
   1414ca7de:	mov    rax,QWORD PTR [rdx+rcx*1]
   1414ca7e2:	cmp    DWORD PTR [rax+0x48],0x9
   1414ca7e6:	jle    0x1414ca7f6
   1414ca7e8:	mov    rax,QWORD PTR [rax+0x40]
   1414ca7ec:	test   BYTE PTR [rax+0x9],0x40
   1414ca7f0:	je     0x1414ca7f6
   1414ca7f2:	mov    al,0x1
   1414ca7f4:	jmp    0x1414ca7f8
   1414ca7f6:	xor    al,al
   1414ca7f8:	test   al,al
   1414ca7fa:	jne    0x1414ca977
   1414ca800:	jmp    0x1414ca821
   1414ca802:	lea    rdx,[rdi*8+0x0]
   1414ca80a:	test   edi,edi
   1414ca80c:	js     0x1414ca84c
   1414ca80e:	mov    rcx,QWORD PTR [rbx]
   1414ca811:	mov    rax,QWORD PTR [rbx+0x8]
   1414ca815:	sub    rax,rcx
   1414ca818:	sar    rax,0x3
   1414ca81c:	cmp    rdi,rax
   1414ca81f:	jae    0x1414ca84c
   1414ca821:	mov    rax,QWORD PTR [rcx+rdx*1]
   1414ca825:	cmp    DWORD PTR [rax+0x48],0x9
   1414ca829:	jle    0x1414ca839
   1414ca82b:	mov    rax,QWORD PTR [rax+0x40]
   1414ca82f:	cmp    BYTE PTR [rax+0x9],0x0
   1414ca833:	jge    0x1414ca839
   1414ca835:	mov    al,0x1
   1414ca837:	jmp    0x1414ca83b
   1414ca839:	xor    al,al
   1414ca83b:	test   al,al
   1414ca83d:	jne    0x1414ca977
   1414ca843:	lea    rsi,[rbp+0x11b408]
   1414ca84a:	jmp    0x1414ca84f
   1414ca84c:	mov    rsi,rbx
   1414ca84f:	movzx  edx,r15w
   1414ca853:	mov    rcx,rbp
   1414ca856:	call   0x14007f270
   1414ca85b:	mov    rcx,rbp
   1414ca85e:	bt     eax,0xf
   1414ca862:	jae    0x1414ca8db
   1414ca864:	movzx  r8d,r14w
   1414ca868:	movzx  edx,r15w
   1414ca86c:	call   0x1414eb3a0
   1414ca871:	test   al,al
   1414ca873:	je     0x1414ca977
   1414ca879:	test   edi,edi
   1414ca87b:	js     0x1414ca977
   1414ca881:	mov    rcx,QWORD PTR [rbx]
   1414ca884:	mov    rax,QWORD PTR [rbx+0x8]
   1414ca888:	sub    rax,rcx
   1414ca88b:	sar    rax,0x3
   1414ca88f:	cmp    rdi,rax
   1414ca892:	jae    0x1414ca977
   1414ca898:	mov    rcx,QWORD PTR [rcx+rdi*8]
   1414ca89c:	mov    edx,DWORD PTR [rcx+0x48]
   1414ca89f:	cmp    edx,0x6
   1414ca8a2:	jle    0x1414ca977
   1414ca8a8:	mov    rax,QWORD PTR [rcx+0x40]
   1414ca8ac:	test   BYTE PTR [rax+0x6],0x20
   1414ca8b0:	jne    0x1414ca8d4
   1414ca8b2:	cmp    edx,0x6
   1414ca8b5:	jle    0x1414ca977
   1414ca8bb:	test   BYTE PTR [rax+0x6],0x40
   1414ca8bf:	jne    0x1414ca8d4
   1414ca8c1:	cmp    edx,0x6
   1414ca8c4:	jle    0x1414ca977
   1414ca8ca:	cmp    BYTE PTR [rax+0x6],0x0
   1414ca8ce:	jge    0x1414ca977
   1414ca8d4:	mov    al,0x1
   1414ca8d6:	jmp    0x1414ca979
   1414ca8db:	mov    WORD PTR [rsp+0x28],r9w
   1414ca8e1:	lea    r8,[rsp+0x70]
   1414ca8e6:	movzx  r9d,r15w
   1414ca8ea:	mov    WORD PTR [rsp+0x20],r14w
   1414ca8f0:	lea    rdx,[rsp+0x50]
   1414ca8f5:	call   0x14007f300
   1414ca8fa:	movzx  r8d,WORD PTR [rsp+0x70]
   1414ca900:	movzx  edx,WORD PTR [rsp+0x50]
   1414ca905:	mov    rcx,QWORD PTR [rbp+0x11a668]
   1414ca90c:	call   0x140f6e8b0
   1414ca911:	mov    edx,eax
   1414ca913:	call   0x140dadb40
   1414ca918:	mov    r9d,eax
   1414ca91b:	test   di,di
   1414ca91e:	js     0x1414ca977
   1414ca920:	mov    rdx,QWORD PTR [rsi]
   1414ca923:	mov    rcx,QWORD PTR [rsi+0x8]
   1414ca927:	sub    rcx,rdx
   1414ca92a:	movsx  rax,di
   1414ca92e:	sar    rcx,0x3
   1414ca932:	cmp    rax,rcx
   1414ca935:	jae    0x1414ca977
   1414ca937:	cmp    r9d,0xffffffff
   1414ca93b:	je     0x1414ca8d4
   1414ca93d:	mov    rdx,QWORD PTR [rdx+rax*8]
   1414ca941:	test   r9d,r9d
   1414ca944:	js     0x1414ca977
   1414ca946:	mov    eax,r9d
   1414ca949:	sar    eax,0x3
   1414ca94c:	test   eax,eax
   1414ca94e:	js     0x1414ca977
   1414ca950:	cmp    eax,DWORD PTR [rdx+0x48]
   1414ca953:	jge    0x1414ca977
   1414ca955:	and    r9d,0x7
   1414ca959:	mov    r8d,0x1
   1414ca95f:	movzx  ecx,r9b
   1414ca963:	shl    r8d,cl
   1414ca966:	movsxd rcx,eax
   1414ca969:	mov    rax,QWORD PTR [rdx+0x40]
   1414ca96d:	test   BYTE PTR [rcx+rax*1],r8b
   1414ca971:	jne    0x1414ca8d4
   1414ca977:	xor    al,al
   1414ca979:	mov    rbx,QWORD PTR [rsp+0x58]
   1414ca97e:	mov    rbp,QWORD PTR [rsp+0x60]
   1414ca983:	mov    rsi,QWORD PTR [rsp+0x68]
   1414ca988:	add    rsp,0x30
   1414ca98c:	pop    r15
   1414ca98e:	pop    r14
   1414ca990:	pop    rdi
   1414ca991:	ret
