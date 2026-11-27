; squad_order_movest::follow_order (vtable 0x141649e28 + 0x38) [0x141106b70, 0x141106be7)
   141106b70:	4d 85 c9                                        	test   r9,r9
   141106b73:	74 71                                           	je     0x141106be6
   141106b75:	48 89 5c 24 08                                  	mov    QWORD PTR [rsp+0x8],rbx
   141106b7a:	57                                              	push   rdi
   141106b7b:	48 83 ec 30                                     	sub    rsp,0x30
   141106b7f:	48 8b da                                        	mov    rbx,rdx
   141106b82:	48 8b f9                                        	mov    rdi,rcx
   141106b85:	0f b7 51 20                                     	movzx  edx,WORD PTR [rcx+0x20]
   141106b89:	49 8b c1                                        	mov    rax,r9
   141106b8c:	b9 d0 8a ff ff                                  	mov    ecx,0xffff8ad0
   141106b91:	66 3b d1                                        	cmp    dx,cx
   141106b94:	74 46                                           	je     0x141106bdc
   141106b96:	44 0f b7 4f 24                                  	movzx  r9d,WORD PTR [rdi+0x24]
   141106b9b:	48 8b c8                                        	mov    rcx,rax
   141106b9e:	44 0f b7 47 22                                  	movzx  r8d,WORD PTR [rdi+0x22]
   141106ba3:	c6 44 24 20 01                                  	mov    BYTE PTR [rsp+0x20],0x1
   141106ba8:	e8 63 66 2b 00                                  	call   0x1413bd210
   141106bad:	84 c0                                           	test   al,al
   141106baf:	74 2b                                           	je     0x141106bdc
   141106bb1:	83 7b 04 4b                                     	cmp    DWORD PTR [rbx+0x4],0x4b
   141106bb5:	7d 25                                           	jge    0x141106bdc
   141106bb7:	c7 03 1f 00 00 00                               	mov    DWORD PTR [rbx],0x1f
   141106bbd:	0f b7 47 20                                     	movzx  eax,WORD PTR [rdi+0x20]
   141106bc1:	66 89 43 30                                     	mov    WORD PTR [rbx+0x30],ax
   141106bc5:	0f b7 47 22                                     	movzx  eax,WORD PTR [rdi+0x22]
   141106bc9:	66 89 43 32                                     	mov    WORD PTR [rbx+0x32],ax
   141106bcd:	0f b7 47 24                                     	movzx  eax,WORD PTR [rdi+0x24]
   141106bd1:	66 89 43 34                                     	mov    WORD PTR [rbx+0x34],ax
   141106bd5:	c7 43 04 4b 00 00 00                            	mov    DWORD PTR [rbx+0x4],0x4b
   141106bdc:	48 8b 5c 24 40                                  	mov    rbx,QWORD PTR [rsp+0x40]
   141106be1:	48 83 c4 30                                     	add    rsp,0x30
   141106be5:	5f                                              	pop    rdi
   141106be6:	c3                                              	ret

; SQUAD_ORDER_MOVE / per-member station assignment [0x14151075a, 0x1415109d3)
   14151075a:	83 3d d7 da 3a 00 00                            	cmp    DWORD PTR [rip+0x3adad7],0x0        # 0x1418be238
   141510761:	0f 85 58 02 00 00                               	jne    0x1415109bf
   141510767:	e8 44 4a ed ff                                  	call   0x1413e51b0
   14151076c:	48 85 c0                                        	test   rax,rax
   14151076f:	0f 84 4a 02 00 00                               	je     0x1415109bf
   141510775:	48 8b 10                                        	mov    rdx,QWORD PTR [rax]
   141510778:	48 8b c8                                        	mov    rcx,rax
   14151077b:	ff 52 18                                        	call   QWORD PTR [rdx+0x18]
   14151077e:	85 c0                                           	test   eax,eax
   141510780:	0f 85 39 02 00 00                               	jne    0x1415109bf
   141510786:	b2 01                                           	mov    dl,0x1
   141510788:	49 8b cf                                        	mov    rcx,r15
   14151078b:	e8 b0 64 e4 ff                                  	call   0x141356c40
   141510790:	48 8b d8                                        	mov    rbx,rax
   141510793:	48 85 c0                                        	test   rax,rax
   141510796:	0f 84 23 02 00 00                               	je     0x1415109bf
   14151079c:	48 8b 10                                        	mov    rdx,QWORD PTR [rax]
   14151079f:	48 8b c8                                        	mov    rcx,rax
   1415107a2:	ff 12                                           	call   QWORD PTR [rdx]
   1415107a4:	66 83 f8 18                                     	cmp    ax,0x18
   1415107a8:	0f 85 11 02 00 00                               	jne    0x1415109bf
   1415107ae:	48 8b 83 e8 00 00 00                            	mov    rax,QWORD PTR [rbx+0xe8]
   1415107b5:	66 83 b8 d2 00 00 00 ff                         	cmp    WORD PTR [rax+0xd2],0xffff
   1415107bd:	0f 84 fc 01 00 00                               	je     0x1415109bf
   1415107c3:	41 83 bf f4 01 00 00 00                         	cmp    DWORD PTR [r15+0x1f4],0x0
   1415107cb:	75 36                                           	jne    0x141510803
   1415107cd:	33 c0                                           	xor    eax,eax
   1415107cf:	c7 44 24 28 1e 00 00 00                         	mov    DWORD PTR [rsp+0x28],0x1e
   1415107d7:	66 89 44 24 20                                  	mov    WORD PTR [rsp+0x20],ax
   1415107dc:	45 0f b7 4c 24 34                               	movzx  r9d,WORD PTR [r12+0x34]
   1415107e2:	45 0f b7 44 24 32                               	movzx  r8d,WORD PTR [r12+0x32]
   1415107e8:	41 0f b7 54 24 30                               	movzx  edx,WORD PTR [r12+0x30]
   1415107ee:	49 8b cf                                        	mov    rcx,r15
   1415107f1:	e8 7a 09 e8 ff                                  	call   0x141391170
   1415107f6:	49 8b cf                                        	mov    rcx,r15
   1415107f9:	e8 12 7a e7 ff                                  	call   0x141388210
   1415107fe:	e9 c9 8a 00 00                                  	jmp    0x1415192cc
   141510803:	33 d2                                           	xor    edx,edx
   141510805:	44 8b ea                                        	mov    r13d,edx
   141510808:	41 0f bf 87 a8 00 00 00                         	movsx  eax,WORD PTR [r15+0xa8]
   141510810:	8d 78 ff                                        	lea    edi,[rax-0x1]
   141510813:	8d 48 01                                        	lea    ecx,[rax+0x1]
   141510816:	0f bf c7                                        	movsx  eax,di
   141510819:	3b c1                                           	cmp    eax,ecx
   14151081b:	0f 8f 50 01 00 00                               	jg     0x141510971
   141510821:	44 8b f2                                        	mov    r14d,edx
   141510824:	0f 1f 40 00                                     	nop    DWORD PTR [rax+0x0]
   141510828:	0f 1f 84 00 00 00 00 00                         	nop    DWORD PTR [rax+rax*1+0x0]
   141510830:	41 0f bf b7 aa 00 00 00                         	movsx  esi,WORD PTR [r15+0xaa]
   141510838:	8d 5e ff                                        	lea    ebx,[rsi-0x1]
   14151083b:	8d 4e 01                                        	lea    ecx,[rsi+0x1]
   14151083e:	0f bf c3                                        	movsx  eax,bx
   141510841:	3b c1                                           	cmp    eax,ecx
   141510843:	0f 8f 0e 01 00 00                               	jg     0x141510957
   141510849:	0f b7 d6                                        	movzx  edx,si
   14151084c:	0f 1f 40 00                                     	nop    DWORD PTR [rax+0x0]
   141510850:	66 41 3b bf a8 00 00 00                         	cmp    di,WORD PTR [r15+0xa8]
   141510858:	75 09                                           	jne    0x141510863
   14151085a:	66 3b da                                        	cmp    bx,dx
   14151085d:	0f 84 d8 00 00 00                               	je     0x14151093b
   141510863:	c6 44 24 20 00                                  	mov    BYTE PTR [rsp+0x20],0x0
   141510868:	45 0f b7 8f ac 00 00 00                         	movzx  r9d,WORD PTR [r15+0xac]
   141510870:	44 0f b7 c3                                     	movzx  r8d,bx
   141510874:	0f b7 d7                                        	movzx  edx,di
   141510877:	49 8b cf                                        	mov    rcx,r15
   14151087a:	e8 f1 e8 e6 ff                                  	call   0x14137f170
   14151087f:	84 c0                                           	test   al,al
   141510881:	0f 84 b4 00 00 00                               	je     0x14151093b
   141510887:	8d 57 ff                                        	lea    edx,[rdi-0x1]
   14151088a:	45 0f b7 8f ac 00 00 00                         	movzx  r9d,WORD PTR [r15+0xac]
   141510892:	44 0f b7 c3                                     	movzx  r8d,bx
   141510896:	48 8d 0d d3 30 ee 00                            	lea    rcx,[rip+0xee30d3]        # 0x1423f3970
   14151089d:	e8 0e 8d b5 fe                                  	call   0x1400695b0
   1415108a2:	0f b7 c8                                        	movzx  ecx,ax
   1415108a5:	e8 06 64 db fe                                  	call   0x1402c6cb0
   1415108aa:	84 c0                                           	test   al,al
   1415108ac:	75 75                                           	jne    0x141510923
   1415108ae:	8d 57 01                                        	lea    edx,[rdi+0x1]
   1415108b1:	45 0f b7 8f ac 00 00 00                         	movzx  r9d,WORD PTR [r15+0xac]
   1415108b9:	44 0f b7 c3                                     	movzx  r8d,bx
   1415108bd:	48 8d 0d ac 30 ee 00                            	lea    rcx,[rip+0xee30ac]        # 0x1423f3970
   1415108c4:	e8 e7 8c b5 fe                                  	call   0x1400695b0
   1415108c9:	0f b7 c8                                        	movzx  ecx,ax
   1415108cc:	e8 df 63 db fe                                  	call   0x1402c6cb0
   1415108d1:	84 c0                                           	test   al,al
   1415108d3:	75 4e                                           	jne    0x141510923
   1415108d5:	44 8d 46 fe                                     	lea    r8d,[rsi-0x2]
   1415108d9:	45 0f b7 8f ac 00 00 00                         	movzx  r9d,WORD PTR [r15+0xac]
   1415108e1:	0f b7 d7                                        	movzx  edx,di
   1415108e4:	48 8d 0d 85 30 ee 00                            	lea    rcx,[rip+0xee3085]        # 0x1423f3970
   1415108eb:	e8 c0 8c b5 fe                                  	call   0x1400695b0
   1415108f0:	0f b7 c8                                        	movzx  ecx,ax
   1415108f3:	e8 b8 63 db fe                                  	call   0x1402c6cb0
   1415108f8:	84 c0                                           	test   al,al
   1415108fa:	75 27                                           	jne    0x141510923
   1415108fc:	45 0f b7 8f ac 00 00 00                         	movzx  r9d,WORD PTR [r15+0xac]
   141510904:	44 0f b7 c6                                     	movzx  r8d,si
   141510908:	0f b7 d7                                        	movzx  edx,di
   14151090b:	48 8d 0d 5e 30 ee 00                            	lea    rcx,[rip+0xee305e]        # 0x1423f3970
   141510912:	e8 99 8c b5 fe                                  	call   0x1400695b0
   141510917:	0f b7 c8                                        	movzx  ecx,ax
   14151091a:	e8 91 63 db fe                                  	call   0x1402c6cb0
   14151091f:	84 c0                                           	test   al,al
   141510921:	74 18                                           	je     0x14151093b
   141510923:	66 42 89 bc 75 30 0a 00 00                      	mov    WORD PTR [rbp+r14*2+0xa30],di
   14151092c:	66 42 89 9c 75 40 0a 00 00                      	mov    WORD PTR [rbp+r14*2+0xa40],bx
   141510935:	41 ff c5                                        	inc    r13d
   141510938:	49 ff c6                                        	inc    r14
   14151093b:	66 ff c3                                        	inc    bx
   14151093e:	66 ff c6                                        	inc    si
   141510941:	41 0f bf 97 aa 00 00 00                         	movsx  edx,WORD PTR [r15+0xaa]
   141510949:	8d 4a 01                                        	lea    ecx,[rdx+0x1]
   14151094c:	0f bf c3                                        	movsx  eax,bx
   14151094f:	3b c1                                           	cmp    eax,ecx
   141510951:	0f 8e f9 fe ff ff                               	jle    0x141510850
   141510957:	66 ff c7                                        	inc    di
   14151095a:	41 0f bf 8f a8 00 00 00                         	movsx  ecx,WORD PTR [r15+0xa8]
   141510962:	ff c1                                           	inc    ecx
   141510964:	0f bf c7                                        	movsx  eax,di
   141510967:	3b c1                                           	cmp    eax,ecx
   141510969:	0f 8e c1 fe ff ff                               	jle    0x141510830
   14151096f:	33 d2                                           	xor    edx,edx
   141510971:	49 63 8f f4 01 00 00                            	movsxd rcx,DWORD PTR [r15+0x1f4]
   141510978:	8d 41 ff                                        	lea    eax,[rcx-0x1]
   14151097b:	85 c0                                           	test   eax,eax
   14151097d:	78 40                                           	js     0x1415109bf
   14151097f:	41 3b c5                                        	cmp    eax,r13d
   141510982:	7d 3b                                           	jge    0x1415109bf
   141510984:	c7 44 24 28 1e 00 00 00                         	mov    DWORD PTR [rsp+0x28],0x1e
   14151098c:	66 89 54 24 20                                  	mov    WORD PTR [rsp+0x20],dx
   141510991:	45 0f b7 8f ac 00 00 00                         	movzx  r9d,WORD PTR [r15+0xac]
   141510999:	44 0f b7 84 4d 3e 0a 00 00                      	movzx  r8d,WORD PTR [rbp+rcx*2+0xa3e]
   1415109a2:	0f b7 94 4d 2e 0a 00 00                         	movzx  edx,WORD PTR [rbp+rcx*2+0xa2e]
   1415109aa:	49 8b cf                                        	mov    rcx,r15
   1415109ad:	e8 be 07 e8 ff                                  	call   0x141391170
   1415109b2:	49 8b cf                                        	mov    rcx,r15
   1415109b5:	e8 56 78 e7 ff                                  	call   0x141388210
   1415109ba:	e9 0d 89 00 00                                  	jmp    0x1415192cc
   1415109bf:	c7 44 24 28 1e 00 00 00                         	mov    DWORD PTR [rsp+0x28],0x1e
   1415109c7:	66 c7 44 24 20 03 00                            	mov    WORD PTR [rsp+0x20],0x3
   1415109ce:	e9 09 fe ff ff                                  	jmp    0x1415107dc

; write station coordinates, threshold and type [0x141391170, 0x1413911d4)
   141391170:	48 89 5c 24 08                                  	mov    QWORD PTR [rsp+0x8],rbx
   141391175:	48 89 6c 24 10                                  	mov    QWORD PTR [rsp+0x10],rbp
   14139117a:	48 89 74 24 18                                  	mov    QWORD PTR [rsp+0x18],rsi
   14139117f:	48 89 7c 24 20                                  	mov    QWORD PTR [rsp+0x20],rdi
   141391184:	41 56                                           	push   r14
   141391186:	83 3d ab d0 52 00 01                            	cmp    DWORD PTR [rip+0x52d0ab],0x1        # 0x1418be238
   14139118d:	41 0f b7 f1                                     	movzx  esi,r9w
   141391191:	8b 5c 24 38                                     	mov    ebx,DWORD PTR [rsp+0x38]
   141391195:	44 0f b7 f2                                     	movzx  r14d,dx
   141391199:	0f b7 44 24 30                                  	movzx  eax,WORD PTR [rsp+0x30]
   14139119e:	75 0d                                           	jne    0x1413911ad
   1413911a0:	66 83 f8 03                                     	cmp    ax,0x3
   1413911a4:	75 07                                           	jne    0x1413911ad
   1413911a6:	83 fb ff                                        	cmp    ebx,0xffffffff
   1413911a9:	75 02                                           	jne    0x1413911ad
   1413911ab:	33 c0                                           	xor    eax,eax
   1413911ad:	0f bf f8                                        	movsx  edi,ax
   1413911b0:	89 b9 b4 00 00 00                               	mov    DWORD PTR [rcx+0xb4],edi
   1413911b6:	66 44 89 b1 ae 00 00 00                         	mov    WORD PTR [rcx+0xae],r14w
   1413911be:	66 44 89 81 b0 00 00 00                         	mov    WORD PTR [rcx+0xb0],r8w
   1413911c6:	66 89 b1 b2 00 00 00                            	mov    WORD PTR [rcx+0xb2],si
   1413911cd:	66 89 99 b8 00 00 00                            	mov    WORD PTR [rcx+0xb8],bx
