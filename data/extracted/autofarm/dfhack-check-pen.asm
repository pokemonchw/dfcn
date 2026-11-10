
/home/lulika/.local/share/Steam/steamapps/common/DFHack/hack/dfhack.dll:     file format pei-x86-64


Disassembly of section .text:

0000000180486020 <.text+0x485020>:
   180486020:	48 89 5c 24 08       	mov    QWORD PTR [rsp+0x8],rbx
   180486025:	48 89 74 24 10       	mov    QWORD PTR [rsp+0x10],rsi
   18048602a:	48 89 7c 24 18       	mov    QWORD PTR [rsp+0x18],rdi
   18048602f:	4c 89 74 24 20       	mov    QWORD PTR [rsp+0x20],r14
   180486034:	55                   	push   rbp
   180486035:	48 8b ec             	mov    rbp,rsp
   180486038:	48 83 ec 40          	sub    rsp,0x40
   18048603c:	48 8b f2             	mov    rsi,rdx
   18048603f:	45 0f b6 f1          	movzx  r14d,r9b
   180486043:	41 8b d0             	mov    edx,r8d
   180486046:	48 8b d9             	mov    rbx,rcx
   180486049:	ff 15 e1 be 6f 00    	call   QWORD PTR [rip+0x6fbee1]        # 0x180b81f30
   18048604f:	8b d0                	mov    edx,eax
   180486051:	48 8b cb             	mov    rcx,rbx
   180486054:	8b f8                	mov    edi,eax
   180486056:	ff 15 84 be 6f 00    	call   QWORD PTR [rip+0x6fbe84]        # 0x180b81ee0
   18048605c:	8b d7                	mov    edx,edi
   18048605e:	48 8b cb             	mov    rcx,rbx
   180486061:	ff 15 e1 bd 6f 00    	call   QWORD PTR [rip+0x6fbde1]        # 0x180b81e48
   180486067:	85 c0                	test   eax,eax
   180486069:	75 2d                	jne    0x180486098
   18048606b:	45 84 f6             	test   r14b,r14b
   18048606e:	75 12                	jne    0x180486082
   180486070:	4c 8d 05 f9 47 71 00 	lea    r8,[rip+0x7147f9]        # 0x180b9a870
   180486077:	8b d7                	mov    edx,edi
   180486079:	48 8b cb             	mov    rcx,rbx
   18048607c:	ff 15 26 bf 6f 00    	call   QWORD PTR [rip+0x6fbf26]        # 0x180b81fa8
   180486082:	33 c0                	xor    eax,eax
   180486084:	c7 45 e0 00 00 00 00 	mov    DWORD PTR [rbp-0x20],0x0
   18048608b:	48 89 45 e8          	mov    QWORD PTR [rbp-0x18],rax
   18048608f:	c7 45 e4 ff ff ff ff 	mov    DWORD PTR [rbp-0x1c],0xffffffff
   180486096:	eb 6b                	jmp    0x180486103
   180486098:	8b d7                	mov    edx,edi
   18048609a:	48 8b cb             	mov    rcx,rbx
   18048609d:	ff 15 65 bd 6f 00    	call   QWORD PTR [rip+0x6fbd65]        # 0x180b81e08
   1804860a3:	85 c0                	test   eax,eax
   1804860a5:	74 18                	je     0x1804860bf
   1804860a7:	8b d7                	mov    edx,edi
   1804860a9:	48 8b cb             	mov    rcx,rbx
   1804860ac:	e8 9f 8a 00 00       	call   0x18048eb50
   1804860b1:	0f 10 00             	movups xmm0,XMMWORD PTR [rax]
   1804860b4:	0f 11 06             	movups XMMWORD PTR [rsi],xmm0
   1804860b7:	8b 40 10             	mov    eax,DWORD PTR [rax+0x10]
   1804860ba:	89 46 10             	mov    DWORD PTR [rsi+0x10],eax
   1804860bd:	eb 76                	jmp    0x180486135
   1804860bf:	80 7d 30 00          	cmp    BYTE PTR [rbp+0x30],0x0
   1804860c3:	74 51                	je     0x180486116
   1804860c5:	8b d7                	mov    edx,edi
   1804860c7:	48 8b cb             	mov    rcx,rbx
   1804860ca:	ff 15 98 bd 6f 00    	call   QWORD PTR [rip+0x6fbd98]        # 0x180b81e68
   1804860d0:	85 c0                	test   eax,eax
   1804860d2:	74 42                	je     0x180486116
   1804860d4:	45 33 c0             	xor    r8d,r8d
   1804860d7:	8b d7                	mov    edx,edi
   1804860d9:	48 8b cb             	mov    rcx,rbx
   1804860dc:	ff 15 46 bd 6f 00    	call   QWORD PTR [rip+0x6fbd46]        # 0x180b81e28
   1804860e2:	24 0f                	and    al,0xf
   1804860e4:	c6 45 e0 00          	mov    BYTE PTR [rbp-0x20],0x0
   1804860e8:	0f b6 c8             	movzx  ecx,al
   1804860eb:	c6 45 e2 00          	mov    BYTE PTR [rbp-0x1e],0x0
   1804860ef:	24 07                	and    al,0x7
   1804860f1:	c0 e9 03             	shr    cl,0x3
   1804860f4:	88 45 e1             	mov    BYTE PTR [rbp-0x1f],al
   1804860f7:	33 c0                	xor    eax,eax
   1804860f9:	48 89 45 e4          	mov    QWORD PTR [rbp-0x1c],rax
   1804860fd:	89 45 ec             	mov    DWORD PTR [rbp-0x14],eax
   180486100:	88 4d e3             	mov    BYTE PTR [rbp-0x1d],cl
   180486103:	0f 10 45 e0          	movups xmm0,XMMWORD PTR [rbp-0x20]
   180486107:	66 89 45 f0          	mov    WORD PTR [rbp-0x10],ax
   18048610b:	8b 45 f0             	mov    eax,DWORD PTR [rbp-0x10]
   18048610e:	0f 11 06             	movups XMMWORD PTR [rsi],xmm0
   180486111:	89 46 10             	mov    DWORD PTR [rsi+0x10],eax
   180486114:	eb 1f                	jmp    0x180486135
   180486116:	41 b8 05 00 00 00    	mov    r8d,0x5
   18048611c:	8b d7                	mov    edx,edi
   18048611e:	48 8b cb             	mov    rcx,rbx
   180486121:	ff 15 f9 bd 6f 00    	call   QWORD PTR [rip+0x6fbdf9]        # 0x180b81f20
   180486127:	44 8b c7             	mov    r8d,edi
   18048612a:	48 8b d6             	mov    rdx,rsi
   18048612d:	48 8b cb             	mov    rcx,rbx
   180486130:	e8 8b 9f 00 00       	call   0x1804900c0
   180486135:	48 8b 5c 24 50       	mov    rbx,QWORD PTR [rsp+0x50]
   18048613a:	48 8b 74 24 58       	mov    rsi,QWORD PTR [rsp+0x58]
   18048613f:	48 8b 7c 24 60       	mov    rdi,QWORD PTR [rsp+0x60]
   180486144:	4c 8b 74 24 68       	mov    r14,QWORD PTR [rsp+0x68]
   180486149:	48 83 c4 40          	add    rsp,0x40
   18048614d:	5d                   	pop    rbp
   18048614e:	c3                   	ret
   18048614f:	cc                   	int3
   180486150:	40 53                	rex push rbx
   180486152:	48 83 ec 20          	sub    rsp,0x20
   180486156:	48 8b d9             	mov    rbx,rcx
   180486159:	ff 15 d9 be 6f 00    	call   QWORD PTR [rip+0x6fbed9]        # 0x180b82038
   18048615f:	4c 8d 05 fa 45 71 00 	lea    r8,[rip+0x7145fa]        # 0x180b9a760
   180486166:	48 8b cb             	mov    rcx,rbx
   180486169:	8b d0                	mov    edx,eax
   18048616b:	ff 15 af be 6f 00    	call   QWORD PTR [rip+0x6fbeaf]        # 0x180b82020
   180486171:	ba ff ff ff ff       	mov    edx,0xffffffff
   180486176:	48 8b cb             	mov    rcx,rbx
   180486179:	ff 15 61 bc 6f 00    	call   QWORD PTR [rip+0x6fbc61]        # 0x180b81de0
   18048617f:	41 b8 01 00 00 00    	mov    r8d,0x1
   180486185:	48 8d 15 e4 02 71 00 	lea    rdx,[rip+0x7102e4]        # 0x180b96470
   18048618c:	48 8b cb             	mov    rcx,rbx
   18048618f:	ff 15 4b be 6f 00    	call   QWORD PTR [rip+0x6fbe4b]        # 0x180b81fe0
   180486195:	ba ff ff ff ff       	mov    edx,0xffffffff
   18048619a:	48 8b cb             	mov    rcx,rbx
   18048619d:	ff 15 3d bc 6f 00    	call   QWORD PTR [rip+0x6fbc3d]        # 0x180b81de0
   1804861a3:	4c 8d 05 a6 d2 70 00 	lea    r8,[rip+0x70d2a6]        # 0x180b93450
   1804861aa:	ba fe ff ff ff       	mov    edx,0xfffffffe
   1804861af:	48 8b cb             	mov    rcx,rbx
   1804861b2:	ff 15 00 bd 6f 00    	call   QWORD PTR [rip+0x6fbd00]        # 0x180b81eb8
   1804861b8:	ba fe ff ff ff       	mov    edx,0xfffffffe
   1804861bd:	48 8b cb             	mov    rcx,rbx
   1804861c0:	ff 15 aa be 6f 00    	call   QWORD PTR [rip+0x6fbeaa]        # 0x180b82070
   1804861c6:	48 8b cb             	mov    rcx,rbx
   1804861c9:	ff 15 69 be 6f 00    	call   QWORD PTR [rip+0x6fbe69]        # 0x180b82038
   1804861cf:	4c 8d 05 7a 46 71 00 	lea    r8,[rip+0x71467a]        # 0x180b9a850
   1804861d6:	48 8b cb             	mov    rcx,rbx
   1804861d9:	8b d0                	mov    edx,eax
   1804861db:	ff 15 3f be 6f 00    	call   QWORD PTR [rip+0x6fbe3f]        # 0x180b82020
   1804861e1:	ba ff ff ff ff       	mov    edx,0xffffffff
   1804861e6:	48 8b cb             	mov    rcx,rbx
   1804861e9:	ff 15 f1 bb 6f 00    	call   QWORD PTR [rip+0x6fbbf1]        # 0x180b81de0
   1804861ef:	4c 8d 05 ca b8 04 01 	lea    r8,[rip+0x104b8ca]        # 0x1814d1ac0
   1804861f6:	ba d8 b9 f0 ff       	mov    edx,0xfff0b9d8
   1804861fb:	48 8b cb             	mov    rcx,rbx
   1804861fe:	ff 15 8c bc 6f 00    	call   QWORD PTR [rip+0x6fbc8c]        # 0x180b81e90
   180486204:	ba ff ff ff ff       	mov    edx,0xffffffff
   180486209:	48 8b cb             	mov    rcx,rbx
   18048620c:	ff 15 ce bb 6f 00    	call   QWORD PTR [rip+0x6fbbce]        # 0x180b81de0
   180486212:	41 b8 01 00 00 00    	mov    r8d,0x1
   180486218:	48 8d 15 41 03 71 00 	lea    rdx,[rip+0x710341]        # 0x180b96560
   18048621f:	48 8b cb             	mov    rcx,rbx
   180486222:	ff 15 b8 bd 6f 00    	call   QWORD PTR [rip+0x6fbdb8]        # 0x180b81fe0
   180486228:	ba ff ff ff ff       	mov    edx,0xffffffff
   18048622d:	48 8b cb             	mov    rcx,rbx
   180486230:	ff 15 aa bb 6f 00    	call   QWORD PTR [rip+0x6fbbaa]        # 0x180b81de0
   180486236:	4c 8d 05 13 d2 70 00 	lea    r8,[rip+0x70d213]        # 0x180b93450
   18048623d:	ba fe ff ff ff       	mov    edx,0xfffffffe
   180486242:	48 8b cb             	mov    rcx,rbx
   180486245:	ff 15 6d bc 6f 00    	call   QWORD PTR [rip+0x6fbc6d]        # 0x180b81eb8
   18048624b:	ba fe ff ff ff       	mov    edx,0xfffffffe
   180486250:	48 8b cb             	mov    rcx,rbx
   180486253:	ff 15 17 be 6f 00    	call   QWORD PTR [rip+0x6fbe17]        # 0x180b82070
   180486259:	48 8b cb             	mov    rcx,rbx
   18048625c:	ff 15 d6 bd 6f 00    	call   QWORD PTR [rip+0x6fbdd6]        # 0x180b82038
   180486262:	4c 8d 05 5b 46 71 00 	lea    r8,[rip+0x71465b]        # 0x180b9a8c4
   180486269:	48 8b cb             	mov    rcx,rbx
   18048626c:	8b d0                	mov    edx,eax
   18048626e:	ff                   	.byte 0xff
   18048626f:	15                   	.byte 0x15
