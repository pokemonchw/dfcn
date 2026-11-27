; line traversal and fortification modes [0x140aa8e50, 0x140aa95c9)
   140aa8e50:	66 44 89 44 24 18                               	mov    WORD PTR [rsp+0x18],r8w
   140aa8e56:	66 89 54 24 10                                  	mov    WORD PTR [rsp+0x10],dx
   140aa8e5b:	66 89 4c 24 08                                  	mov    WORD PTR [rsp+0x8],cx
   140aa8e60:	55                                              	push   rbp
   140aa8e61:	53                                              	push   rbx
   140aa8e62:	56                                              	push   rsi
   140aa8e63:	57                                              	push   rdi
   140aa8e64:	41 54                                           	push   r12
   140aa8e66:	41 55                                           	push   r13
   140aa8e68:	41 56                                           	push   r14
   140aa8e6a:	41 57                                           	push   r15
   140aa8e6c:	48 8d 6c 24 f9                                  	lea    rbp,[rsp-0x7]
   140aa8e71:	48 81 ec a8 00 00 00                            	sub    rsp,0xa8
   140aa8e78:	44 0f b7 55 6f                                  	movzx  r10d,WORD PTR [rbp+0x6f]
   140aa8e7d:	66 44 2b c9                                     	sub    r9w,cx
   140aa8e81:	0f b7 45 77                                     	movzx  eax,WORD PTR [rbp+0x77]
   140aa8e85:	66 44 2b d2                                     	sub    r10w,dx
   140aa8e89:	66 41 2b c0                                     	sub    ax,r8w
   140aa8e8d:	66 44 89 4d b3                                  	mov    WORD PTR [rbp-0x4d],r9w
   140aa8e92:	66 44 89 55 c3                                  	mov    WORD PTR [rbp-0x3d],r10w
   140aa8e97:	45 0f b7 f0                                     	movzx  r14d,r8w
   140aa8e9b:	66 89 45 bb                                     	mov    WORD PTR [rbp-0x45],ax
   140aa8e9f:	44 0f b7 fa                                     	movzx  r15d,dx
   140aa8ea3:	44 0f b7 e1                                     	movzx  r12d,cx
   140aa8ea7:	ba ff ff ff ff                                  	mov    edx,0xffffffff
   140aa8eac:	41 b8 01 00 00 00                               	mov    r8d,0x1
   140aa8eb2:	66 45 85 c9                                     	test   r9w,r9w
   140aa8eb6:	79 0e                                           	jns    0x140aa8ec6
   140aa8eb8:	66 41 f7 d9                                     	neg    r9w
   140aa8ebc:	0f b7 ca                                        	movzx  ecx,dx
   140aa8ebf:	66 44 89 4d b3                                  	mov    WORD PTR [rbp-0x4d],r9w
   140aa8ec4:	eb 03                                           	jmp    0x140aa8ec9
   140aa8ec6:	41 8b c8                                        	mov    ecx,r8d
   140aa8ec9:	66 89 4d bf                                     	mov    WORD PTR [rbp-0x41],cx
   140aa8ecd:	41 0f b7 d9                                     	movzx  ebx,r9w
   140aa8ed1:	66 45 85 d2                                     	test   r10w,r10w
   140aa8ed5:	79 0e                                           	jns    0x140aa8ee5
   140aa8ed7:	66 41 f7 da                                     	neg    r10w
   140aa8edb:	0f b7 ca                                        	movzx  ecx,dx
   140aa8ede:	66 44 89 55 c3                                  	mov    WORD PTR [rbp-0x3d],r10w
   140aa8ee3:	eb 03                                           	jmp    0x140aa8ee8
   140aa8ee5:	41 8b c8                                        	mov    ecx,r8d
   140aa8ee8:	66 89 4d cb                                     	mov    WORD PTR [rbp-0x35],cx
   140aa8eec:	45 0f b7 da                                     	movzx  r11d,r10w
   140aa8ef0:	66 85 c0                                        	test   ax,ax
   140aa8ef3:	79 09                                           	jns    0x140aa8efe
   140aa8ef5:	66 f7 d8                                        	neg    ax
   140aa8ef8:	66 89 45 bb                                     	mov    WORD PTR [rbp-0x45],ax
   140aa8efc:	eb 04                                           	jmp    0x140aa8f02
   140aa8efe:	41 0f b7 d0                                     	movzx  edx,r8w
   140aa8f02:	66 89 55 c7                                     	mov    WORD PTR [rbp-0x39],dx
   140aa8f06:	48 8d 75 cb                                     	lea    rsi,[rbp-0x35]
   140aa8f0a:	48 89 75 df                                     	mov    QWORD PTR [rbp-0x21],rsi
   140aa8f0e:	48 8d 75 5f                                     	lea    rsi,[rbp+0x5f]
   140aa8f12:	48 89 75 f7                                     	mov    QWORD PTR [rbp-0x9],rsi
   140aa8f16:	48 8d 55 4f                                     	lea    rdx,[rbp+0x4f]
   140aa8f1a:	48 89 55 cf                                     	mov    QWORD PTR [rbp-0x31],rdx
   140aa8f1e:	48 8d 7d 57                                     	lea    rdi,[rbp+0x57]
   140aa8f22:	48 89 7d e7                                     	mov    QWORD PTR [rbp-0x19],rdi
   140aa8f26:	4c 8d 6d c7                                     	lea    r13,[rbp-0x39]
   140aa8f2a:	4c 89 6d ef                                     	mov    QWORD PTR [rbp-0x11],r13
   140aa8f2e:	48 8d 75 bb                                     	lea    rsi,[rbp-0x45]
   140aa8f32:	48 8d 55 b3                                     	lea    rdx,[rbp-0x4d]
   140aa8f36:	0f b7 c8                                        	movzx  ecx,ax
   140aa8f39:	4c 8d 45 bf                                     	lea    r8,[rbp-0x41]
   140aa8f3d:	48 8d 7d c3                                     	lea    rdi,[rbp-0x3d]
   140aa8f41:	66 41 3b c1                                     	cmp    ax,r9w
   140aa8f45:	7e 2c                                           	jle    0x140aa8f73
   140aa8f47:	66 41 3b c2                                     	cmp    ax,r10w
   140aa8f4b:	7e 26                                           	jle    0x140aa8f73
   140aa8f4d:	4c 8d 5d 4f                                     	lea    r11,[rbp+0x4f]
   140aa8f51:	48 8d 45 bf                                     	lea    rax,[rbp-0x41]
   140aa8f55:	4c 89 5d f7                                     	mov    QWORD PTR [rbp-0x9],r11
   140aa8f59:	48 8d 5d 5f                                     	lea    rbx,[rbp+0x5f]
   140aa8f5d:	48 89 45 ef                                     	mov    QWORD PTR [rbp-0x11],rax
   140aa8f61:	48 89 5d cf                                     	mov    QWORD PTR [rbp-0x31],rbx
   140aa8f65:	48 8d 75 b3                                     	lea    rsi,[rbp-0x4d]
   140aa8f69:	48 8d 55 bb                                     	lea    rdx,[rbp-0x45]
   140aa8f6d:	4c 8d 45 c7                                     	lea    r8,[rbp-0x39]
   140aa8f71:	eb 3b                                           	jmp    0x140aa8fae
   140aa8f73:	0f b7 cb                                        	movzx  ecx,bx
   140aa8f76:	66 45 3b d1                                     	cmp    r10w,r9w
   140aa8f7a:	7e 2a                                           	jle    0x140aa8fa6
   140aa8f7c:	48 8d 7d 4f                                     	lea    rdi,[rbp+0x4f]
   140aa8f80:	41 0f b7 cb                                     	movzx  ecx,r11w
   140aa8f84:	48 8d 45 bf                                     	lea    rax,[rbp-0x41]
   140aa8f88:	48 89 7d e7                                     	mov    QWORD PTR [rbp-0x19],rdi
   140aa8f8c:	48 8d 5d 57                                     	lea    rbx,[rbp+0x57]
   140aa8f90:	48 89 45 df                                     	mov    QWORD PTR [rbp-0x21],rax
   140aa8f94:	48 8d 7d b3                                     	lea    rdi,[rbp-0x4d]
   140aa8f98:	48 89 5d cf                                     	mov    QWORD PTR [rbp-0x31],rbx
   140aa8f9c:	48 8d 55 c3                                     	lea    rdx,[rbp-0x3d]
   140aa8fa0:	4c 8d 45 cb                                     	lea    r8,[rbp-0x35]
   140aa8fa4:	eb 04                                           	jmp    0x140aa8faa
   140aa8fa6:	48 8d 5d 4f                                     	lea    rbx,[rbp+0x4f]
   140aa8faa:	4c 8d 5d 5f                                     	lea    r11,[rbp+0x5f]
   140aa8fae:	44 0f b7 8d 8f 00 00 00                         	movzx  r9d,WORD PTR [rbp+0x8f]
   140aa8fb6:	33 c0                                           	xor    eax,eax
   140aa8fb8:	44 0f b7 d0                                     	movzx  r10d,ax
   140aa8fbc:	89 05 be ae 6a 01                               	mov    DWORD PTR [rip+0x16aaebe],eax        # 0x142153e80
   140aa8fc2:	44 38 95 87 00 00 00                            	cmp    BYTE PTR [rbp+0x87],r10b
   140aa8fc9:	44 0f b7 e8                                     	movzx  r13d,ax
   140aa8fcd:	8d 41 01                                        	lea    eax,[rcx+0x1]
   140aa8fd0:	66 0f 44 c1                                     	cmove  ax,cx
   140aa8fd4:	83 bd 8f 00 00 00 00                            	cmp    DWORD PTR [rbp+0x8f],0x0
   140aa8fdb:	66 44 0f 4c c8                                  	cmovl  r9w,ax
   140aa8fe0:	66 45 85 c9                                     	test   r9w,r9w
   140aa8fe4:	0f 8e c9 05 00 00                               	jle    0x140aa95b3
   140aa8fea:	0f b7 07                                        	movzx  eax,WORD PTR [rdi]
   140aa8fed:	0f bf 3a                                        	movsx  edi,WORD PTR [rdx]
   140aa8ff0:	0f b7 36                                        	movzx  esi,WORD PTR [rsi]
   140aa8ff3:	8b d7                                           	mov    edx,edi
   140aa8ff5:	45 0f b7 00                                     	movzx  r8d,WORD PTR [r8]
   140aa8ff9:	89 55 b7                                        	mov    DWORD PTR [rbp-0x49],edx
   140aa8ffc:	66 89 45 d7                                     	mov    WORD PTR [rbp-0x29],ax
   140aa9000:	66 89 75 af                                     	mov    WORD PTR [rbp-0x51],si
   140aa9004:	66 44 89 45 77                                  	mov    WORD PTR [rbp+0x77],r8w
   140aa9009:	0f 1f 80 00 00 00 00                            	nop    DWORD PTR [rax+0x0]
   140aa9010:	48 63 05 69 ae 6a 01                            	movsxd rax,DWORD PTR [rip+0x16aae69]        # 0x142153e80
   140aa9017:	66 44 03 55 d7                                  	add    r10w,WORD PTR [rbp-0x29]
   140aa901c:	ff 05 5e ae 6a 01                               	inc    DWORD PTR [rip+0x16aae5e]        # 0x142153e80
   140aa9022:	66 44 89 95 87 00 00 00                         	mov    WORD PTR [rbp+0x87],r10w
   140aa902a:	48 8d 0c 40                                     	lea    rcx,[rax+rax*2]
   140aa902e:	48 8d 05 4b ca 12 01                            	lea    rax,[rip+0x112ca4b]        # 0x141bd5a80
   140aa9035:	66 44 89 24 88                                  	mov    WORD PTR [rax+rcx*4],r12w
   140aa903a:	66 44 89 7c 88 02                               	mov    WORD PTR [rax+rcx*4+0x2],r15w
   140aa9040:	66 44 89 74 88 04                               	mov    WORD PTR [rax+rcx*4+0x4],r14w
   140aa9046:	41 0f bf c2                                     	movsx  eax,r10w
   140aa904a:	03 c0                                           	add    eax,eax
   140aa904c:	3b c2                                           	cmp    eax,edx
   140aa904e:	7e 1a                                           	jle    0x140aa906a
   140aa9050:	48 8b 45 df                                     	mov    rax,QWORD PTR [rbp-0x21]
   140aa9054:	66 44 2b d7                                     	sub    r10w,di
   140aa9058:	48 8b 4d e7                                     	mov    rcx,QWORD PTR [rbp-0x19]
   140aa905c:	66 44 89 95 87 00 00 00                         	mov    WORD PTR [rbp+0x87],r10w
   140aa9064:	0f b7 00                                        	movzx  eax,WORD PTR [rax]
   140aa9067:	66 01 01                                        	add    WORD PTR [rcx],ax
   140aa906a:	66 44 03 ee                                     	add    r13w,si
   140aa906e:	41 0f bf c5                                     	movsx  eax,r13w
   140aa9072:	03 c0                                           	add    eax,eax
   140aa9074:	3b c2                                           	cmp    eax,edx
   140aa9076:	7e 0f                                           	jle    0x140aa9087
   140aa9078:	48 8b 45 ef                                     	mov    rax,QWORD PTR [rbp-0x11]
   140aa907c:	66 44 2b ef                                     	sub    r13w,di
   140aa9080:	0f b7 00                                        	movzx  eax,WORD PTR [rax]
   140aa9083:	66 41 01 03                                     	add    WORD PTR [r11],ax
   140aa9087:	66 44 01 03                                     	add    WORD PTR [rbx],r8w
   140aa908b:	66 41 ff c9                                     	dec    r9w
   140aa908f:	83 bd 8f 00 00 00 ff                            	cmp    DWORD PTR [rbp+0x8f],0xffffffff
   140aa9096:	4c 0f bf 75 5f                                  	movsx  r14,WORD PTR [rbp+0x5f]
   140aa909b:	4c 0f bf 7d 57                                  	movsx  r15,WORD PTR [rbp+0x57]
   140aa90a0:	4c 0f bf 65 4f                                  	movsx  r12,WORD PTR [rbp+0x4f]
   140aa90a5:	66 44 89 4d 6f                                  	mov    WORD PTR [rbp+0x6f],r9w
   140aa90aa:	75 45                                           	jne    0x140aa90f1
   140aa90ac:	66 45 85 e4                                     	test   r12w,r12w
   140aa90b0:	0f 88 fd 04 00 00                               	js     0x140aa95b3
   140aa90b6:	66 45 85 ff                                     	test   r15w,r15w
   140aa90ba:	0f 88 f3 04 00 00                               	js     0x140aa95b3
   140aa90c0:	66 45 85 f6                                     	test   r14w,r14w
   140aa90c4:	0f 88 e9 04 00 00                               	js     0x140aa95b3
   140aa90ca:	44 3b 25 8b 14 a6 01                            	cmp    r12d,DWORD PTR [rip+0x1a6148b]        # 0x14250a55c
   140aa90d1:	0f 8d dc 04 00 00                               	jge    0x140aa95b3
   140aa90d7:	44 3b 3d 82 14 a6 01                            	cmp    r15d,DWORD PTR [rip+0x1a61482]        # 0x14250a560
   140aa90de:	0f 8d cf 04 00 00                               	jge    0x140aa95b3
   140aa90e4:	44 3b 35 79 14 a6 01                            	cmp    r14d,DWORD PTR [rip+0x1a61479]        # 0x14250a564
   140aa90eb:	0f 8d c2 04 00 00                               	jge    0x140aa95b3
   140aa90f1:	80 7d 7f 00                                     	cmp    BYTE PTR [rbp+0x7f],0x0
   140aa90f5:	0f 84 5a 01 00 00                               	je     0x140aa9255
   140aa90fb:	80 bd 97 00 00 00 01                            	cmp    BYTE PTR [rbp+0x97],0x1
   140aa9102:	7c 27                                           	jl     0x140aa912b
   140aa9104:	45 0f b7 ce                                     	movzx  r9d,r14w
   140aa9108:	48 8d 0d 61 a8 94 01                            	lea    rcx,[rip+0x194a861]        # 0x1423f3970
   140aa910f:	45 0f b7 c7                                     	movzx  r8d,r15w
   140aa9113:	41 0f b7 d4                                     	movzx  edx,r12w
   140aa9117:	e8 24 9c a3 00                                  	call   0x1414e2d40
   140aa911c:	84 c0                                           	test   al,al
   140aa911e:	0f 85 89 00 00 00                               	jne    0x140aa91ad
   140aa9124:	32 c0                                           	xor    al,al
   140aa9126:	e9 8a 04 00 00                                  	jmp    0x140aa95b5
   140aa912b:	66 45 85 e4                                     	test   r12w,r12w
   140aa912f:	78 f3                                           	js     0x140aa9124
   140aa9131:	44 3b 25 24 14 a6 01                            	cmp    r12d,DWORD PTR [rip+0x1a61424]        # 0x14250a55c
   140aa9138:	7d ea                                           	jge    0x140aa9124
   140aa913a:	66 45 85 ff                                     	test   r15w,r15w
   140aa913e:	78 e4                                           	js     0x140aa9124
   140aa9140:	44 3b 3d 19 14 a6 01                            	cmp    r15d,DWORD PTR [rip+0x1a61419]        # 0x14250a560
   140aa9147:	7d db                                           	jge    0x140aa9124
   140aa9149:	66 45 85 f6                                     	test   r14w,r14w
   140aa914d:	78 d5                                           	js     0x140aa9124
   140aa914f:	44 3b 35 0e 14 a6 01                            	cmp    r14d,DWORD PTR [rip+0x1a6140e]        # 0x14250a564
   140aa9156:	7d cc                                           	jge    0x140aa9124
   140aa9158:	45 0f b7 ce                                     	movzx  r9d,r14w
   140aa915c:	48 8d 0d 0d a8 94 01                            	lea    rcx,[rip+0x194a80d]        # 0x1423f3970
   140aa9163:	45 0f b7 c7                                     	movzx  r8d,r15w
   140aa9167:	41 0f b7 d4                                     	movzx  edx,r12w
   140aa916b:	e8 30 a9 a1 00                                  	call   0x1414c3aa0
   140aa9170:	84 c0                                           	test   al,al
   140aa9172:	74 b0                                           	je     0x140aa9124
   140aa9174:	41 0f b7 d4                                     	movzx  edx,r12w
   140aa9178:	48 8d 0d f1 a7 94 01                            	lea    rcx,[rip+0x194a7f1]        # 0x1423f3970
   140aa917f:	e8 bc 04 5c ff                                  	call   0x140069640
   140aa9184:	83 e0 07                                        	and    eax,0x7
   140aa9187:	83 e8 06                                        	sub    eax,0x6
   140aa918a:	74 98                                           	je     0x140aa9124
   140aa918c:	83 f8 01                                        	cmp    eax,0x1
   140aa918f:	75 1c                                           	jne    0x140aa91ad
   140aa9191:	45 0f b7 c7                                     	movzx  r8d,r15w
   140aa9195:	48 8d 0d ec 71 96 01                            	lea    rcx,[rip+0x19671ec]        # 0x142410388
   140aa919c:	41 0f b7 d4                                     	movzx  edx,r12w
   140aa91a0:	e8 4b 86 b1 ff                                  	call   0x1405c17f0
   140aa91a5:	84 c0                                           	test   al,al
   140aa91a7:	0f 85 77 ff ff ff                               	jne    0x140aa9124
   140aa91ad:	8b 05 cd ac 6a 01                               	mov    eax,DWORD PTR [rip+0x16aaccd]        # 0x142153e80
   140aa91b3:	ff c8                                           	dec    eax
   140aa91b5:	48 63 c8                                        	movsxd rcx,eax
   140aa91b8:	48 8d 04 49                                     	lea    rax,[rcx+rcx*2]
   140aa91bc:	48 8d 0d bd c8 12 01                            	lea    rcx,[rip+0x112c8bd]        # 0x141bd5a80
   140aa91c3:	0f bf 5c 81 04                                  	movsx  ebx,WORD PTR [rcx+rax*4+0x4]
   140aa91c8:	66 44 3b f3                                     	cmp    r14w,bx
   140aa91cc:	0f 84 85 03 00 00                               	je     0x140aa9557
   140aa91d2:	0f bf 34 81                                     	movsx  esi,WORD PTR [rcx+rax*4]
   140aa91d6:	0f bf 7c 81 02                                  	movsx  edi,WORD PTR [rcx+rax*4+0x2]
   140aa91db:	66 41 3b f4                                     	cmp    si,r12w
   140aa91df:	0f 85 4f 01 00 00                               	jne    0x140aa9334
   140aa91e5:	66 41 3b ff                                     	cmp    di,r15w
   140aa91e9:	0f 85 45 01 00 00                               	jne    0x140aa9334
   140aa91ef:	c7 44 24 40 00 00 00 00                         	mov    DWORD PTR [rsp+0x40],0x0
   140aa91f7:	48 8d 0d 72 a7 94 01                            	lea    rcx,[rip+0x194a772]        # 0x1423f3970
   140aa91fe:	c6 44 24 38 00                                  	mov    BYTE PTR [rsp+0x38],0x0
   140aa9203:	c6 44 24 30 01                                  	mov    BYTE PTR [rsp+0x30],0x1
   140aa9208:	c6 44 24 28 00                                  	mov    BYTE PTR [rsp+0x28],0x0
   140aa920d:	c6 44 24 20 01                                  	mov    BYTE PTR [rsp+0x20],0x1
   140aa9212:	66 41 3b de                                     	cmp    bx,r14w
   140aa9216:	0f 8d 08 01 00 00                               	jge    0x140aa9324
   140aa921c:	45 0f b7 ce                                     	movzx  r9d,r14w
   140aa9220:	45 0f b7 c7                                     	movzx  r8d,r15w
   140aa9224:	41 0f b7 d4                                     	movzx  edx,r12w
   140aa9228:	e8 43 72 9b 00                                  	call   0x141460470
   140aa922d:	84 c0                                           	test   al,al
   140aa922f:	0f 84 ef fe ff ff                               	je     0x140aa9124
   140aa9235:	8b 55 b7                                        	mov    edx,DWORD PTR [rbp-0x49]
   140aa9238:	0f b7 fa                                        	movzx  edi,dx
   140aa923b:	0f b7 75 af                                     	movzx  esi,WORD PTR [rbp-0x51]
   140aa923f:	44 0f b7 4d 6f                                  	movzx  r9d,WORD PTR [rbp+0x6f]
   140aa9244:	44 0f b7 95 87 00 00 00                         	movzx  r10d,WORD PTR [rbp+0x87]
   140aa924c:	48 8b 5d cf                                     	mov    rbx,QWORD PTR [rbp-0x31]
   140aa9250:	44 0f b7 45 77                                  	movzx  r8d,WORD PTR [rbp+0x77]
   140aa9255:	80 bd 97 00 00 00 01                            	cmp    BYTE PTR [rbp+0x97],0x1
   140aa925c:	0f 85 3f 03 00 00                               	jne    0x140aa95a1
   140aa9262:	8d 4a ff                                        	lea    ecx,[rdx-0x1]
   140aa9265:	41 0f bf c1                                     	movsx  eax,r9w
   140aa9269:	3b c1                                           	cmp    eax,ecx
   140aa926b:	0f 8d 30 03 00 00                               	jge    0x140aa95a1
   140aa9271:	66 45 85 e4                                     	test   r12w,r12w
   140aa9275:	0f 88 e4 02 00 00                               	js     0x140aa955f
   140aa927b:	44 3b 25 da 12 a6 01                            	cmp    r12d,DWORD PTR [rip+0x1a612da]        # 0x14250a55c
   140aa9282:	0f 8d d7 02 00 00                               	jge    0x140aa955f
   140aa9288:	66 45 85 ff                                     	test   r15w,r15w
   140aa928c:	0f 88 cd 02 00 00                               	js     0x140aa955f
   140aa9292:	44 3b 3d c7 12 a6 01                            	cmp    r15d,DWORD PTR [rip+0x1a612c7]        # 0x14250a560
   140aa9299:	0f 8d c0 02 00 00                               	jge    0x140aa955f
   140aa929f:	66 45 85 f6                                     	test   r14w,r14w
   140aa92a3:	0f 88 b6 02 00 00                               	js     0x140aa955f
   140aa92a9:	44 3b 35 b4 12 a6 01                            	cmp    r14d,DWORD PTR [rip+0x1a612b4]        # 0x14250a564
   140aa92b0:	0f 8d a9 02 00 00                               	jge    0x140aa955f
   140aa92b6:	48 8b 0d 6b 12 a6 01                            	mov    rcx,QWORD PTR [rip+0x1a6126b]        # 0x14250a528
   140aa92bd:	48 85 c9                                        	test   rcx,rcx
   140aa92c0:	0f 84 99 02 00 00                               	je     0x140aa955f
   140aa92c6:	49 8b c4                                        	mov    rax,r12
   140aa92c9:	49 8b d7                                        	mov    rdx,r15
   140aa92cc:	48 c1 f8 04                                     	sar    rax,0x4
   140aa92d0:	48 c1 fa 04                                     	sar    rdx,0x4
   140aa92d4:	48 8b 04 c1                                     	mov    rax,QWORD PTR [rcx+rax*8]
   140aa92d8:	48 8b 04 d0                                     	mov    rax,QWORD PTR [rax+rdx*8]
   140aa92dc:	4a 8b 14 f0                                     	mov    rdx,QWORD PTR [rax+r14*8]
   140aa92e0:	48 85 d2                                        	test   rdx,rdx
   140aa92e3:	0f 84 76 02 00 00                               	je     0x140aa955f
   140aa92e9:	41 8b c4                                        	mov    eax,r12d
   140aa92ec:	25 0f 00 00 80                                  	and    eax,0x8000000f
   140aa92f1:	7d 07                                           	jge    0x140aa92fa
   140aa92f3:	ff c8                                           	dec    eax
   140aa92f5:	83 c8 f0                                        	or     eax,0xfffffff0
   140aa92f8:	ff c0                                           	inc    eax
   140aa92fa:	48 63 c8                                        	movsxd rcx,eax
   140aa92fd:	41 8b c7                                        	mov    eax,r15d
   140aa9300:	48 83 c1 05                                     	add    rcx,0x5
   140aa9304:	48 c1 e1 04                                     	shl    rcx,0x4
   140aa9308:	25 0f 00 00 80                                  	and    eax,0x8000000f
   140aa930d:	7d 07                                           	jge    0x140aa9316
   140aa930f:	ff c8                                           	dec    eax
   140aa9311:	83 c8 f0                                        	or     eax,0xfffffff0
   140aa9314:	ff c0                                           	inc    eax
   140aa9316:	48 98                                           	cdqe
   140aa9318:	48 03 c8                                        	add    rcx,rax
   140aa931b:	0f b7 04 4a                                     	movzx  eax,WORD PTR [rdx+rcx*2]
   140aa931f:	e9 3d 02 00 00                                  	jmp    0x140aa9561
   140aa9324:	44 0f b7 cb                                     	movzx  r9d,bx
   140aa9328:	44 0f b7 c7                                     	movzx  r8d,di
   140aa932c:	0f b7 d6                                        	movzx  edx,si
   140aa932f:	e9 f4 fe ff ff                                  	jmp    0x140aa9228
   140aa9334:	c7 44 24 40 00 00 00 00                         	mov    DWORD PTR [rsp+0x40],0x0
   140aa933c:	45 0f b7 c7                                     	movzx  r8d,r15w
   140aa9340:	c6 44 24 38 00                                  	mov    BYTE PTR [rsp+0x38],0x0
   140aa9345:	41 0f b7 d4                                     	movzx  edx,r12w
   140aa9349:	c6 44 24 30 01                                  	mov    BYTE PTR [rsp+0x30],0x1
   140aa934e:	48 8d 0d 1b a6 94 01                            	lea    rcx,[rip+0x194a61b]        # 0x1423f3970
   140aa9355:	c6 44 24 28 00                                  	mov    BYTE PTR [rsp+0x28],0x0
   140aa935a:	c6 44 24 20 01                                  	mov    BYTE PTR [rsp+0x20],0x1
   140aa935f:	66 41 3b de                                     	cmp    bx,r14w
   140aa9363:	0f 8d f6 00 00 00                               	jge    0x140aa945f
   140aa9369:	45 0f b7 ce                                     	movzx  r9d,r14w
   140aa936d:	e8 fe 70 9b 00                                  	call   0x141460470
   140aa9372:	84 c0                                           	test   al,al
   140aa9374:	0f 84 b2 00 00 00                               	je     0x140aa942c
   140aa937a:	80 bd 97 00 00 00 01                            	cmp    BYTE PTR [rbp+0x97],0x1
   140aa9381:	7c 1f                                           	jl     0x140aa93a2
   140aa9383:	44 0f b7 cb                                     	movzx  r9d,bx
   140aa9387:	48 8d 0d e2 a5 94 01                            	lea    rcx,[rip+0x194a5e2]        # 0x1423f3970
   140aa938e:	45 0f b7 c7                                     	movzx  r8d,r15w
   140aa9392:	41 0f b7 d4                                     	movzx  edx,r12w
   140aa9396:	e8 a5 99 a3 00                                  	call   0x1414e2d40
   140aa939b:	34 01                                           	xor    al,0x1
   140aa939d:	e9 82 00 00 00                                  	jmp    0x140aa9424
   140aa93a2:	66 45 85 e4                                     	test   r12w,r12w
   140aa93a6:	78 7a                                           	js     0x140aa9422
   140aa93a8:	44 3b 25 ad 11 a6 01                            	cmp    r12d,DWORD PTR [rip+0x1a611ad]        # 0x14250a55c
   140aa93af:	7d 71                                           	jge    0x140aa9422
   140aa93b1:	66 45 85 ff                                     	test   r15w,r15w
   140aa93b5:	78 6b                                           	js     0x140aa9422
   140aa93b7:	44 3b 3d a2 11 a6 01                            	cmp    r15d,DWORD PTR [rip+0x1a611a2]        # 0x14250a560
   140aa93be:	7d 62                                           	jge    0x140aa9422
   140aa93c0:	66 85 db                                        	test   bx,bx
   140aa93c3:	78 5d                                           	js     0x140aa9422
   140aa93c5:	3b 1d 99 11 a6 01                               	cmp    ebx,DWORD PTR [rip+0x1a61199]        # 0x14250a564
   140aa93cb:	7d 55                                           	jge    0x140aa9422
   140aa93cd:	44 0f b7 cb                                     	movzx  r9d,bx
   140aa93d1:	48 8d 0d 98 a5 94 01                            	lea    rcx,[rip+0x194a598]        # 0x1423f3970
   140aa93d8:	45 0f b7 c7                                     	movzx  r8d,r15w
   140aa93dc:	41 0f b7 d4                                     	movzx  edx,r12w
   140aa93e0:	e8 bb a6 a1 00                                  	call   0x1414c3aa0
   140aa93e5:	84 c0                                           	test   al,al
   140aa93e7:	74 39                                           	je     0x140aa9422
   140aa93e9:	41 0f b7 d4                                     	movzx  edx,r12w
   140aa93ed:	48 8d 0d 7c a5 94 01                            	lea    rcx,[rip+0x194a57c]        # 0x1423f3970
   140aa93f4:	e8 47 02 5c ff                                  	call   0x140069640
   140aa93f9:	83 e0 07                                        	and    eax,0x7
   140aa93fc:	83 e8 06                                        	sub    eax,0x6
   140aa93ff:	74 21                                           	je     0x140aa9422
   140aa9401:	83 f8 01                                        	cmp    eax,0x1
   140aa9404:	75 18                                           	jne    0x140aa941e
   140aa9406:	45 0f b7 c7                                     	movzx  r8d,r15w
   140aa940a:	48 8d 0d 77 6f 96 01                            	lea    rcx,[rip+0x1966f77]        # 0x142410388
   140aa9411:	41 0f b7 d4                                     	movzx  edx,r12w
   140aa9415:	e8 d6 83 b1 ff                                  	call   0x1405c17f0
   140aa941a:	84 c0                                           	test   al,al
   140aa941c:	75 04                                           	jne    0x140aa9422
   140aa941e:	32 c0                                           	xor    al,al
   140aa9420:	eb 02                                           	jmp    0x140aa9424
   140aa9422:	b0 01                                           	mov    al,0x1
   140aa9424:	84 c0                                           	test   al,al
   140aa9426:	0f 84 09 fe ff ff                               	je     0x140aa9235
   140aa942c:	c7 44 24 40 00 00 00 00                         	mov    DWORD PTR [rsp+0x40],0x0
   140aa9434:	48 8d 0d 35 a5 94 01                            	lea    rcx,[rip+0x194a535]        # 0x1423f3970
   140aa943b:	c6 44 24 38 00                                  	mov    BYTE PTR [rsp+0x38],0x0
   140aa9440:	45 0f b7 ce                                     	movzx  r9d,r14w
   140aa9444:	c6 44 24 30 01                                  	mov    BYTE PTR [rsp+0x30],0x1
   140aa9449:	44 0f b7 c7                                     	movzx  r8d,di
   140aa944d:	c6 44 24 28 00                                  	mov    BYTE PTR [rsp+0x28],0x0
   140aa9452:	0f b7 d6                                        	movzx  edx,si
   140aa9455:	c6 44 24 20 01                                  	mov    BYTE PTR [rsp+0x20],0x1
   140aa945a:	e9 c9 fd ff ff                                  	jmp    0x140aa9228
   140aa945f:	44 0f b7 cb                                     	movzx  r9d,bx
   140aa9463:	e8 08 70 9b 00                                  	call   0x141460470
   140aa9468:	84 c0                                           	test   al,al
   140aa946a:	0f 85 c5 fd ff ff                               	jne    0x140aa9235
   140aa9470:	c7 44 24 40 00 00 00 00                         	mov    DWORD PTR [rsp+0x40],0x0
   140aa9478:	48 8d 0d f1 a4 94 01                            	lea    rcx,[rip+0x194a4f1]        # 0x1423f3970
   140aa947f:	88 44 24 38                                     	mov    BYTE PTR [rsp+0x38],al
   140aa9483:	44 0f b7 cb                                     	movzx  r9d,bx
   140aa9487:	c6 44 24 30 01                                  	mov    BYTE PTR [rsp+0x30],0x1
   140aa948c:	44 0f b7 c7                                     	movzx  r8d,di
   140aa9490:	88 44 24 28                                     	mov    BYTE PTR [rsp+0x28],al
   140aa9494:	0f b7 d6                                        	movzx  edx,si
   140aa9497:	c6 44 24 20 01                                  	mov    BYTE PTR [rsp+0x20],0x1
   140aa949c:	e8 cf 6f 9b 00                                  	call   0x141460470
   140aa94a1:	84 c0                                           	test   al,al
   140aa94a3:	0f 84 7b fc ff ff                               	je     0x140aa9124
   140aa94a9:	80 bd 97 00 00 00 01                            	cmp    BYTE PTR [rbp+0x97],0x1
   140aa94b0:	7c 1b                                           	jl     0x140aa94cd
   140aa94b2:	45 0f b7 ce                                     	movzx  r9d,r14w
   140aa94b6:	48 8d 0d b3 a4 94 01                            	lea    rcx,[rip+0x194a4b3]        # 0x1423f3970
   140aa94bd:	44 0f b7 c7                                     	movzx  r8d,di
   140aa94c1:	0f b7 d6                                        	movzx  edx,si
   140aa94c4:	e8 77 98 a3 00                                  	call   0x1414e2d40
   140aa94c9:	34 01                                           	xor    al,0x1
   140aa94cb:	eb 7d                                           	jmp    0x140aa954a
   140aa94cd:	66 85 f6                                        	test   si,si
   140aa94d0:	78 76                                           	js     0x140aa9548
   140aa94d2:	3b 35 84 10 a6 01                               	cmp    esi,DWORD PTR [rip+0x1a61084]        # 0x14250a55c
   140aa94d8:	7d 6e                                           	jge    0x140aa9548
   140aa94da:	66 85 ff                                        	test   di,di
   140aa94dd:	78 69                                           	js     0x140aa9548
   140aa94df:	3b 3d 7b 10 a6 01                               	cmp    edi,DWORD PTR [rip+0x1a6107b]        # 0x14250a560
   140aa94e5:	7d 61                                           	jge    0x140aa9548
   140aa94e7:	66 45 85 f6                                     	test   r14w,r14w
   140aa94eb:	78 5b                                           	js     0x140aa9548
   140aa94ed:	44 3b 35 70 10 a6 01                            	cmp    r14d,DWORD PTR [rip+0x1a61070]        # 0x14250a564
   140aa94f4:	7d 52                                           	jge    0x140aa9548
   140aa94f6:	45 0f b7 ce                                     	movzx  r9d,r14w
   140aa94fa:	48 8d 0d 6f a4 94 01                            	lea    rcx,[rip+0x194a46f]        # 0x1423f3970
   140aa9501:	44 0f b7 c7                                     	movzx  r8d,di
   140aa9505:	0f b7 d6                                        	movzx  edx,si
   140aa9508:	e8 93 a5 a1 00                                  	call   0x1414c3aa0
   140aa950d:	84 c0                                           	test   al,al
   140aa950f:	74 37                                           	je     0x140aa9548
   140aa9511:	0f b7 d6                                        	movzx  edx,si
   140aa9514:	48 8d 0d 55 a4 94 01                            	lea    rcx,[rip+0x194a455]        # 0x1423f3970
   140aa951b:	e8 20 01 5c ff                                  	call   0x140069640
   140aa9520:	83 e0 07                                        	and    eax,0x7
   140aa9523:	83 e8 06                                        	sub    eax,0x6
   140aa9526:	74 20                                           	je     0x140aa9548
   140aa9528:	83 f8 01                                        	cmp    eax,0x1
   140aa952b:	75 17                                           	jne    0x140aa9544
   140aa952d:	44 0f b7 c7                                     	movzx  r8d,di
   140aa9531:	48 8d 0d 50 6e 96 01                            	lea    rcx,[rip+0x1966e50]        # 0x142410388
   140aa9538:	0f b7 d6                                        	movzx  edx,si
   140aa953b:	e8 b0 82 b1 ff                                  	call   0x1405c17f0
   140aa9540:	84 c0                                           	test   al,al
   140aa9542:	75 04                                           	jne    0x140aa9548
   140aa9544:	32 c0                                           	xor    al,al
   140aa9546:	eb 02                                           	jmp    0x140aa954a
   140aa9548:	b0 01                                           	mov    al,0x1
   140aa954a:	84 c0                                           	test   al,al
   140aa954c:	0f 85 d2 fb ff ff                               	jne    0x140aa9124
   140aa9552:	e9 de fc ff ff                                  	jmp    0x140aa9235
   140aa9557:	8b 55 b7                                        	mov    edx,DWORD PTR [rbp-0x49]
   140aa955a:	e9 e0 fc ff ff                                  	jmp    0x140aa923f
   140aa955f:	33 c0                                           	xor    eax,eax
   140aa9561:	0f b7 c8                                        	movzx  ecx,ax
   140aa9564:	81 f9 64 01 00 00                               	cmp    ecx,0x164
   140aa956a:	77 20                                           	ja     0x140aa958c
   140aa956c:	0f 84 b2 fb ff ff                               	je     0x140aa9124
   140aa9572:	83 e9 41                                        	sub    ecx,0x41
   140aa9575:	0f 84 a9 fb ff ff                               	je     0x140aa9124
   140aa957b:	81 e9 01 01 00 00                               	sub    ecx,0x101
   140aa9581:	0f 84 9d fb ff ff                               	je     0x140aa9124
   140aa9587:	83 f9 01                                        	cmp    ecx,0x1
   140aa958a:	eb 0f                                           	jmp    0x140aa959b
   140aa958c:	81 e9 b0 01 00 00                               	sub    ecx,0x1b0
   140aa9592:	0f 84 8c fb ff ff                               	je     0x140aa9124
   140aa9598:	83 f9 3a                                        	cmp    ecx,0x3a
   140aa959b:	0f 84 83 fb ff ff                               	je     0x140aa9124
   140aa95a1:	66 45 85 c9                                     	test   r9w,r9w
   140aa95a5:	7e 0c                                           	jle    0x140aa95b3
   140aa95a7:	8b 55 b7                                        	mov    edx,DWORD PTR [rbp-0x49]
   140aa95aa:	4c 8b 5d f7                                     	mov    r11,QWORD PTR [rbp-0x9]
   140aa95ae:	e9 5d fa ff ff                                  	jmp    0x140aa9010
   140aa95b3:	b0 01                                           	mov    al,0x1
   140aa95b5:	48 81 c4 a8 00 00 00                            	add    rsp,0xa8
   140aa95bc:	41 5f                                           	pop    r15
   140aa95be:	41 5e                                           	pop    r14
   140aa95c0:	41 5d                                           	pop    r13
   140aa95c2:	41 5c                                           	pop    r12
   140aa95c4:	5f                                              	pop    rdi
   140aa95c5:	5e                                              	pop    rsi
   140aa95c6:	5b                                              	pop    rbx
   140aa95c7:	5d                                              	pop    rbp
   140aa95c8:	c3                                              	ret
