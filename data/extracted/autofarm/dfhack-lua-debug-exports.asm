
/home/lulika/.local/share/Steam/steamapps/common/DFHack/hack/lua53.dll:     file format pei-x86-64


Disassembly of section .text:

000000018000d160 <.text+0xc160>:
   18000d160:	48 89 5c 24 08       	mov    QWORD PTR [rsp+0x8],rbx
   18000d165:	48 89 6c 24 10       	mov    QWORD PTR [rsp+0x10],rbp
   18000d16a:	48 89 74 24 18       	mov    QWORD PTR [rsp+0x18],rsi
   18000d16f:	57                   	push   rdi
   18000d170:	41 56                	push   r14
   18000d172:	41 57                	push   r15
   18000d174:	48 83 ec 40          	sub    rsp,0x40
   18000d178:	48 8b d9             	mov    rbx,rcx
   18000d17b:	4d 8b f8             	mov    r15,r8
   18000d17e:	48 8b 49 f8          	mov    rcx,QWORD PTR [rcx-0x8]
   18000d182:	4c 8b f2             	mov    r14,rdx
   18000d185:	ff 15 75 4e 02 00    	call   QWORD PTR [rip+0x24e75]        # 0x180032000
   18000d18b:	80 7b 0c 01          	cmp    BYTE PTR [rbx+0xc],0x1
   18000d18f:	75 1a                	jne    0x18000d1ab
   18000d191:	4c 8b 53 20          	mov    r10,QWORD PTR [rbx+0x20]
   18000d195:	49 8b 42 38          	mov    rax,QWORD PTR [r10+0x38]
   18000d199:	48 03 43 38          	add    rax,QWORD PTR [rbx+0x38]
   18000d19d:	4d 8b 0a             	mov    r9,QWORD PTR [r10]
   18000d1a0:	49 89 02             	mov    QWORD PTR [r10],rax
   18000d1a3:	4c 2b 4b 38          	sub    r9,QWORD PTR [rbx+0x38]
   18000d1a7:	4d 89 4a 38          	mov    QWORD PTR [r10+0x38],r9
   18000d1ab:	33 ff                	xor    edi,edi
   18000d1ad:	41 80 3e 3e          	cmp    BYTE PTR [r14],0x3e
   18000d1b1:	75 13                	jne    0x18000d1c6
   18000d1b3:	48 8b 73 10          	mov    rsi,QWORD PTR [rbx+0x10]
   18000d1b7:	8b cf                	mov    ecx,edi
   18000d1b9:	48 83 c6 f0          	add    rsi,0xfffffffffffffff0
   18000d1bd:	49 ff c6             	inc    r14
   18000d1c0:	48 89 73 10          	mov    QWORD PTR [rbx+0x10],rsi
   18000d1c4:	eb 07                	jmp    0x18000d1cd
   18000d1c6:	49 8b 4f 78          	mov    rcx,QWORD PTR [r15+0x78]
   18000d1ca:	48 8b 31             	mov    rsi,QWORD PTR [rcx]
   18000d1cd:	8b 46 08             	mov    eax,DWORD PTR [rsi+0x8]
   18000d1d0:	83 e0 1f             	and    eax,0x1f
   18000d1d3:	3c 06                	cmp    al,0x6
   18000d1d5:	75 05                	jne    0x18000d1dc
   18000d1d7:	48 8b 2e             	mov    rbp,QWORD PTR [rsi]
   18000d1da:	eb 03                	jmp    0x18000d1df
   18000d1dc:	48 8b ef             	mov    rbp,rdi
   18000d1df:	48 89 4c 24 20       	mov    QWORD PTR [rsp+0x20],rcx
   18000d1e4:	4c 8b cd             	mov    r9,rbp
   18000d1e7:	48 8b cb             	mov    rcx,rbx
   18000d1ea:	4d 8b c7             	mov    r8,r15
   18000d1ed:	49 8b d6             	mov    rdx,r14
   18000d1f0:	e8 6b eb ff ff       	call   0x18000bd60
   18000d1f5:	ba 66 00 00 00       	mov    edx,0x66
   18000d1fa:	49 8b ce             	mov    rcx,r14
   18000d1fd:	44 8b f8             	mov    r15d,eax
   18000d200:	e8 57 41 02 00       	call   0x18003135c
   18000d205:	48 85 c0             	test   rax,rax
   18000d208:	74 0f                	je     0x18000d219
   18000d20a:	48 8b 4b 10          	mov    rcx,QWORD PTR [rbx+0x10]
   18000d20e:	0f 10 06             	movups xmm0,XMMWORD PTR [rsi]
   18000d211:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
   18000d214:	48 83 43 10 10       	add    QWORD PTR [rbx+0x10],0x10
   18000d219:	80 7b 0c 01          	cmp    BYTE PTR [rbx+0xc],0x1
   18000d21d:	75 1a                	jne    0x18000d239
   18000d21f:	48 8b 53 20          	mov    rdx,QWORD PTR [rbx+0x20]
   18000d223:	48 8b 42 38          	mov    rax,QWORD PTR [rdx+0x38]
   18000d227:	48 03 43 38          	add    rax,QWORD PTR [rbx+0x38]
   18000d22b:	48 8b 0a             	mov    rcx,QWORD PTR [rdx]
   18000d22e:	48 89 02             	mov    QWORD PTR [rdx],rax
   18000d231:	48 2b 4b 38          	sub    rcx,QWORD PTR [rbx+0x38]
   18000d235:	48 89 4a 38          	mov    QWORD PTR [rdx+0x38],rcx
   18000d239:	ba 4c 00 00 00       	mov    edx,0x4c
   18000d23e:	49 8b ce             	mov    rcx,r14
   18000d241:	e8 16 41 02 00       	call   0x18003135c
   18000d246:	48 85 c0             	test   rax,rax
   18000d249:	0f 84 81 00 00 00    	je     0x18000d2d0
   18000d24f:	48 85 ed             	test   rbp,rbp
   18000d252:	74 70                	je     0x18000d2c4
   18000d254:	80 7d 08 26          	cmp    BYTE PTR [rbp+0x8],0x26
   18000d258:	74 6a                	je     0x18000d2c4
   18000d25a:	48 8b 45 18          	mov    rax,QWORD PTR [rbp+0x18]
   18000d25e:	48 8b cb             	mov    rcx,rbx
   18000d261:	48 8b 70 48          	mov    rsi,QWORD PTR [rax+0x48]
   18000d265:	e8 46 a6 01 00       	call   0x1800278b0
   18000d26a:	48 8b 4b 10          	mov    rcx,QWORD PTR [rbx+0x10]
   18000d26e:	4c 8b f0             	mov    r14,rax
   18000d271:	48 89 01             	mov    QWORD PTR [rcx],rax
   18000d274:	c7 41 08 45 00 00 00 	mov    DWORD PTR [rcx+0x8],0x45
   18000d27b:	48 83 43 10 10       	add    QWORD PTR [rbx+0x10],0x10
   18000d280:	48 8b 4d 18          	mov    rcx,QWORD PTR [rbp+0x18]
   18000d284:	c7 44 24 30 01 00 00 	mov    DWORD PTR [rsp+0x30],0x1
   18000d28b:	00 
   18000d28c:	c7 44 24 38 01 00 00 	mov    DWORD PTR [rsp+0x38],0x1
   18000d293:	00 
   18000d294:	39 79 1c             	cmp    DWORD PTR [rcx+0x1c],edi
   18000d297:	7e 37                	jle    0x18000d2d0
   18000d299:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
   18000d2a0:	4c 63 06             	movsxd r8,DWORD PTR [rsi]
   18000d2a3:	4c 8d 4c 24 30       	lea    r9,[rsp+0x30]
   18000d2a8:	49 8b d6             	mov    rdx,r14
   18000d2ab:	48 8b cb             	mov    rcx,rbx
   18000d2ae:	e8 fd ac 01 00       	call   0x180027fb0
   18000d2b3:	48 8b 45 18          	mov    rax,QWORD PTR [rbp+0x18]
   18000d2b7:	48 8d 76 04          	lea    rsi,[rsi+0x4]
   18000d2bb:	ff c7                	inc    edi
   18000d2bd:	3b 78 1c             	cmp    edi,DWORD PTR [rax+0x1c]
   18000d2c0:	7c de                	jl     0x18000d2a0
   18000d2c2:	eb 0c                	jmp    0x18000d2d0
   18000d2c4:	48 8b 43 10          	mov    rax,QWORD PTR [rbx+0x10]
   18000d2c8:	89 78 08             	mov    DWORD PTR [rax+0x8],edi
   18000d2cb:	48 83 43 10 10       	add    QWORD PTR [rbx+0x10],0x10
   18000d2d0:	48 8b 4b f8          	mov    rcx,QWORD PTR [rbx-0x8]
   18000d2d4:	ff 15 2e 4d 02 00    	call   QWORD PTR [rip+0x24d2e]        # 0x180032008
   18000d2da:	48 8b 5c 24 60       	mov    rbx,QWORD PTR [rsp+0x60]
   18000d2df:	41 8b c7             	mov    eax,r15d
   18000d2e2:	48 8b 6c 24 68       	mov    rbp,QWORD PTR [rsp+0x68]
   18000d2e7:	48 8b 74 24 70       	mov    rsi,QWORD PTR [rsp+0x70]
   18000d2ec:	48 83 c4 40          	add    rsp,0x40
   18000d2f0:	41 5f                	pop    r15
   18000d2f2:	41 5e                	pop    r14
   18000d2f4:	5f                   	pop    rdi
   18000d2f5:	c3                   	ret
   18000d2f6:	cc                   	int3
   18000d2f7:	cc                   	int3
   18000d2f8:	cc                   	int3
   18000d2f9:	cc                   	int3
   18000d2fa:	cc                   	int3
   18000d2fb:	cc                   	int3
   18000d2fc:	cc                   	int3
   18000d2fd:	cc                   	int3
   18000d2fe:	cc                   	int3
   18000d2ff:	cc                   	int3
   18000d300:	40 56                	rex push rsi
   18000d302:	57                   	push   rdi
   18000d303:	41 56                	push   r14
   18000d305:	41 57                	push   r15
   18000d307:	48 83 ec 28          	sub    rsp,0x28
   18000d30b:	48 89 5c 24 58       	mov    QWORD PTR [rsp+0x58],rbx
   18000d310:	48 8d 79 f8          	lea    rdi,[rcx-0x8]
   18000d314:	48 89 6c 24 60       	mov    QWORD PTR [rsp+0x60],rbp
   18000d319:	48 8b d9             	mov    rbx,rcx
   18000d31c:	48 8b 0f             	mov    rcx,QWORD PTR [rdi]
   18000d31f:	4c 89 64 24 68       	mov    QWORD PTR [rsp+0x68],r12
   18000d324:	45 8b e0             	mov    r12d,r8d
   18000d327:	4c 89 6c 24 20       	mov    QWORD PTR [rsp+0x20],r13
   18000d32c:	4c 8b ea             	mov    r13,rdx
   18000d32f:	ff 15 cb 4c 02 00    	call   QWORD PTR [rip+0x24ccb]        # 0x180032000
   18000d335:	80 7b 0c 01          	cmp    BYTE PTR [rbx+0xc],0x1
   18000d339:	4c 8d 7b 20          	lea    r15,[rbx+0x20]
   18000d33d:	4c 8d 73 38          	lea    r14,[rbx+0x38]
   18000d341:	75 1d                	jne    0x18000d360
   18000d343:	49 8b 17             	mov    rdx,QWORD PTR [r15]
   18000d346:	48 8d 6b f8          	lea    rbp,[rbx-0x8]
   18000d34a:	49 8b 06             	mov    rax,QWORD PTR [r14]
   18000d34d:	48 03 42 38          	add    rax,QWORD PTR [rdx+0x38]
   18000d351:	48 8b 0a             	mov    rcx,QWORD PTR [rdx]
   18000d354:	48 89 02             	mov    QWORD PTR [rdx],rax
   18000d357:	49 2b 0e             	sub    rcx,QWORD PTR [r14]
   18000d35a:	48 89 4a 38          	mov    QWORD PTR [rdx+0x38],rcx
   18000d35e:	eb 03                	jmp    0x18000d363
   18000d360:	48 8b ef             	mov    rbp,rdi
   18000d363:	4d 85 ed             	test   r13,r13
   18000d366:	75 2e                	jne    0x18000d396
   18000d368:	48 8b 4b 10          	mov    rcx,QWORD PTR [rbx+0x10]
   18000d36c:	83 79 f8 46          	cmp    DWORD PTR [rcx-0x8],0x46
   18000d370:	74 08                	je     0x18000d37a
   18000d372:	33 f6                	xor    esi,esi
   18000d374:	48 8d 7b f8          	lea    rdi,[rbx-0x8]
   18000d378:	eb 56                	jmp    0x18000d3d0
   18000d37a:	48 8b 49 f0          	mov    rcx,QWORD PTR [rcx-0x10]
   18000d37e:	45 33 c0             	xor    r8d,r8d
   18000d381:	41 8b d4             	mov    edx,r12d
   18000d384:	48 8b 49 18          	mov    rcx,QWORD PTR [rcx+0x18]
   18000d388:	e8 33 33 00 00       	call   0x1800106c0
   18000d38d:	48 8b f0             	mov    rsi,rax
   18000d390:	48 8d 7b f8          	lea    rdi,[rbx-0x8]
   18000d394:	eb 3a                	jmp    0x18000d3d0
   18000d396:	49 8b 55 78          	mov    rdx,QWORD PTR [r13+0x78]
   18000d39a:	4c 8d 4c 24 50       	lea    r9,[rsp+0x50]
   18000d39f:	33 f6                	xor    esi,esi
   18000d3a1:	45 8b c4             	mov    r8d,r12d
   18000d3a4:	48 8b cb             	mov    rcx,rbx
   18000d3a7:	48 89 74 24 50       	mov    QWORD PTR [rsp+0x50],rsi
   18000d3ac:	e8 df ee ff ff       	call   0x18000c290
   18000d3b1:	48 8b f0             	mov    rsi,rax
   18000d3b4:	48 85 c0             	test   rax,rax
   18000d3b7:	74 17                	je     0x18000d3d0
   18000d3b9:	48 8b 4b 10          	mov    rcx,QWORD PTR [rbx+0x10]
   18000d3bd:	48 8b fd             	mov    rdi,rbp
   18000d3c0:	48 8b 44 24 50       	mov    rax,QWORD PTR [rsp+0x50]
   18000d3c5:	0f 10 00             	movups xmm0,XMMWORD PTR [rax]
   18000d3c8:	0f 11 01             	movups XMMWORD PTR [rcx],xmm0
   18000d3cb:	48 83 43 10 10       	add    QWORD PTR [rbx+0x10],0x10
   18000d3d0:	80 7b 0c 01          	cmp    BYTE PTR [rbx+0xc],0x1
   18000d3d4:	48 8b 5c 24 58       	mov    rbx,QWORD PTR [rsp+0x58]
   18000d3d9:	4c 8b 6c 24 20       	mov    r13,QWORD PTR [rsp+0x20]
   18000d3de:	4c 8b 64 24 68       	mov    r12,QWORD PTR [rsp+0x68]
   18000d3e3:	48 8b 6c 24 60       	mov    rbp,QWORD PTR [rsp+0x60]
   18000d3e8:	75 17                	jne    0x18000d401
   18000d3ea:	49 8b 17             	mov    rdx,QWORD PTR [r15]
   18000d3ed:	49 8b 06             	mov    rax,QWORD PTR [r14]
   18000d3f0:	48 03 42 38          	add    rax,QWORD PTR [rdx+0x38]
   18000d3f4:	48 8b 0a             	mov    rcx,QWORD PTR [rdx]
   18000d3f7:	48 89 02             	mov    QWORD PTR [rdx],rax
   18000d3fa:	49 2b 0e             	sub    rcx,QWORD PTR [r14]
   18000d3fd:	48 89 4a 38          	mov    QWORD PTR [rdx+0x38],rcx
   18000d401:	48 8b 0f             	mov    rcx,QWORD PTR [rdi]
   18000d404:	ff 15 fe 4b 02 00    	call   QWORD PTR [rip+0x24bfe]        # 0x180032008
   18000d40a:	48 8b c6             	mov    rax,rsi
   18000d40d:	48 83 c4 28          	add    rsp,0x28
   18000d411:	41 5f                	pop    r15
   18000d413:	41 5e                	pop    r14
   18000d415:	5f                   	pop    rdi
   18000d416:	5e                   	pop    rsi
   18000d417:	c3                   	ret
   18000d418:	cc                   	int3
   18000d419:	cc                   	int3
   18000d41a:	cc                   	int3
   18000d41b:	cc                   	int3
   18000d41c:	cc                   	int3
   18000d41d:	cc                   	int3
   18000d41e:	cc                   	int3
   18000d41f:	cc                   	int3
   18000d420:	48 89 5c 24 08       	mov    QWORD PTR [rsp+0x8],rbx
   18000d425:	48 89 74 24 10       	mov    QWORD PTR [rsp+0x10],rsi
   18000d42a:	57                   	push   rdi
   18000d42b:	48 83 ec 20          	sub    rsp,0x20
   18000d42f:	49 8b f0             	mov    rsi,r8
   18000d432:	8b da                	mov    ebx,edx
   18000d434:	48 8b f9             	mov    rdi,rcx
   18000d437:	85 d2                	test   edx,edx
   18000d439:	79 12                	jns    0x18000d44d
   18000d43b:	33 c0                	xor    eax,eax
   18000d43d:	48 8b 5c 24 30       	mov    rbx,QWORD PTR [rsp+0x30]
   18000d442:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   18000d447:	48 83 c4 20          	add    rsp,0x20
   18000d44b:	5f                   	pop    rdi
   18000d44c:	c3                   	ret
   18000d44d:	48 8b 49 f8          	mov    rcx,QWORD PTR [rcx-0x8]
   18000d451:	ff 15 a9 4b 02 00    	call   QWORD PTR [rip+0x24ba9]        # 0x180032000
   18000d457:	48 8b 4f 20          	mov    rcx,QWORD PTR [rdi+0x20]
   18000d45b:	85 db                	test   ebx,ebx
   18000d45d:	7e 13                	jle    0x18000d472
   18000d45f:	48 8d 47 60          	lea    rax,[rdi+0x60]
   18000d463:	48 3b c8             	cmp    rcx,rax
   18000d466:	74 20                	je     0x18000d488
   18000d468:	48 8b 49 10          	mov    rcx,QWORD PTR [rcx+0x10]
   18000d46c:	ff cb                	dec    ebx
   18000d46e:	85 db                	test   ebx,ebx
   18000d470:	7f f1                	jg     0x18000d463
   18000d472:	75 14                	jne    0x18000d488
   18000d474:	48 8d 47 60          	lea    rax,[rdi+0x60]
   18000d478:	48 3b c8             	cmp    rcx,rax
   18000d47b:	74 0b                	je     0x18000d488
   18000d47d:	bb 01 00 00 00       	mov    ebx,0x1
   18000d482:	48 89 4e 78          	mov    QWORD PTR [rsi+0x78],rcx
   18000d486:	eb 02                	jmp    0x18000d48a
   18000d488:	33 db                	xor    ebx,ebx
   18000d48a:	48 8b 4f f8          	mov    rcx,QWORD PTR [rdi-0x8]
   18000d48e:	ff 15 74 4b 02 00    	call   QWORD PTR [rip+0x24b74]        # 0x180032008
   18000d494:	48 8b 74 24 38       	mov    rsi,QWORD PTR [rsp+0x38]
   18000d499:	8b c3                	mov    eax,ebx
   18000d49b:	48 8b 5c 24 30       	mov    rbx,QWORD PTR [rsp+0x30]
   18000d4a0:	48 83 c4 20          	add    rsp,0x20
   18000d4a4:	5f                   	pop    rdi
   18000d4a5:	c3                   	ret
   18000d4a6:	cc                   	int3
   18000d4a7:	cc                   	int3
   18000d4a8:	cc                   	int3
   18000d4a9:	cc                   	int3
   18000d4aa:	cc                   	int3
   18000d4ab:	cc                   	int3
   18000d4ac:	cc                   	int3
   18000d4ad:	cc                   	int3
   18000d4ae:	cc                   	int3
   18000d4af:	cc                   	int3
   18000d4b0:	48 85 d2             	test   rdx,rdx
   18000d4b3:	74 05                	je     0x18000d4ba
   18000d4b5:	45 85 c0             	test   r8d,r8d
   18000d4b8:	75 06                	jne    0x18000d4c0
   18000d4ba:	45 33 c0             	xor    r8d,r8d
   18000d4bd:	41 8b d0             	mov    edx,r8d
   18000d4c0:	48 8b 41 20          	mov    rax,QWORD PTR [rcx+0x20]
   18000d4c4:	f6 40 42 02          	test   BYTE PTR [rax+0x42],0x2
   18000d4c8:	74 08                	je     0x18000d4d2
   18000d4ca:	48 8b 40 28          	mov    rax,QWORD PTR [rax+0x28]
   18000d4ce:	48 89 41 28          	mov    QWORD PTR [rcx+0x28],rax
   18000d4d2:	41 0f b6 c0          	movzx  eax,r8b
   18000d4d6:	89 81 c8 00 00 00    	mov    DWORD PTR [rcx+0xc8],eax
   18000d4dc:	48 89 91 a8 00 00 00 	mov    QWORD PTR [rcx+0xa8],rdx
   18000d4e3:	44 89 89 bc 00 00 00 	mov    DWORD PTR [rcx+0xbc],r9d
   18000d4ea:	44                   	rex.R
   18000d4eb:	89                   	.byte 0x89
   18000d4ec:	89 c0                	mov    eax,eax
	...
