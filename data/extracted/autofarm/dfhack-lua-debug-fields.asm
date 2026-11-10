
/home/lulika/.local/share/Steam/steamapps/common/DFHack/hack/lua53.dll:     file format pei-x86-64


Disassembly of section .text:

000000018000bd60 <.text+0xad60>:
   18000bd60:	40 53                	rex push rbx
   18000bd62:	55                   	push   rbp
   18000bd63:	56                   	push   rsi
   18000bd64:	41 55                	push   r13
   18000bd66:	41 57                	push   r15
   18000bd68:	48 83 ec 20          	sub    rsp,0x20
   18000bd6c:	0f b6 02             	movzx  eax,BYTE PTR [rdx]
   18000bd6f:	4d 8b f9             	mov    r15,r9
   18000bd72:	49 8b d8             	mov    rbx,r8
   18000bd75:	48 8b f2             	mov    rsi,rdx
   18000bd78:	4c 8b e9             	mov    r13,rcx
   18000bd7b:	bd 01 00 00 00       	mov    ebp,0x1
   18000bd80:	84 c0                	test   al,al
   18000bd82:	0f 84 23 01 00 00    	je     0x18000beab
   18000bd88:	4c 89 64 24 58       	mov    QWORD PTR [rsp+0x58],r12
   18000bd8d:	4c 8d 0d 04 79 02 00 	lea    r9,[rip+0x27904]        # 0x180033698
   18000bd94:	4c 89 74 24 60       	mov    QWORD PTR [rsp+0x60],r14
   18000bd99:	4c 8d 25 60 42 ff ff 	lea    r12,[rip+0xffffffffffff4260]        # 0x180000000
   18000bda0:	4c 8b 74 24 70       	mov    r14,QWORD PTR [rsp+0x70]
   18000bda5:	4c 8d 05 dc 78 02 00 	lea    r8,[rip+0x278dc]        # 0x180033688
   18000bdac:	48 89 7c 24 50       	mov    QWORD PTR [rsp+0x50],rdi
   18000bdb1:	4c 8d 15 00 6a 02 00 	lea    r10,[rip+0x26a00]        # 0x1800327b8
   18000bdb8:	41 bb 00 01 00 00    	mov    r11d,0x100
   18000bdbe:	48 8d 15 e3 78 02 00 	lea    rdx,[rip+0x278e3]        # 0x1800336a8
   18000bdc5:	66 66 66 0f 1f 84 00 	data16 data16 nop WORD PTR [rax+rax*1+0x0]
   18000bdcc:	00 00 00 00 
   18000bdd0:	0f be c0             	movsx  eax,al
   18000bdd3:	83 c0 b4             	add    eax,0xffffffb4
   18000bdd6:	83 f8 29             	cmp    eax,0x29
   18000bdd9:	0f 87 d8 02 00 00    	ja     0x18000c0b7
   18000bddf:	48 98                	cdqe
   18000bde1:	41 0f b6 84 04 dc c0 	movzx  eax,BYTE PTR [r12+rax*1+0xc0dc]
   18000bde8:	00 00 
   18000bdea:	41 8b 8c 84 c0 c0 00 	mov    ecx,DWORD PTR [r12+rax*4+0xc0c0]
   18000bdf1:	00 
   18000bdf2:	49 03 cc             	add    rcx,r12
   18000bdf5:	ff e1                	jmp    rcx
   18000bdf7:	4d 85 ff             	test   r15,r15
   18000bdfa:	74 3f                	je     0x18000be3b
   18000bdfc:	41 80 7f 08 26       	cmp    BYTE PTR [r15+0x8],0x26
   18000be01:	74 38                	je     0x18000be3b
   18000be03:	4d 8b 47 18          	mov    r8,QWORD PTR [r15+0x18]
   18000be07:	49 8b 50 68          	mov    rdx,QWORD PTR [r8+0x68]
   18000be0b:	48 85 d2             	test   rdx,rdx
   18000be0e:	74 06                	je     0x18000be16
   18000be10:	48 83 c2 18          	add    rdx,0x18
   18000be14:	eb 07                	jmp    0x18000be1d
   18000be16:	48 8d 15 77 78 02 00 	lea    rdx,[rip+0x27877]        # 0x180033694
   18000be1d:	48 89 53 20          	mov    QWORD PTR [rbx+0x20],rdx
   18000be21:	48 8d 0d 78 78 02 00 	lea    rcx,[rip+0x27878]        # 0x1800336a0
   18000be28:	41 8b 40 28          	mov    eax,DWORD PTR [r8+0x28]
   18000be2c:	85 c0                	test   eax,eax
   18000be2e:	89 43 2c             	mov    DWORD PTR [rbx+0x2c],eax
   18000be31:	41 8b 40 2c          	mov    eax,DWORD PTR [r8+0x2c]
   18000be35:	49 0f 44 c9          	cmove  rcx,r9
   18000be39:	eb 1a                	jmp    0x18000be55
   18000be3b:	4c 89 43 20          	mov    QWORD PTR [rbx+0x20],r8
   18000be3f:	48 8d 0d 4a 78 02 00 	lea    rcx,[rip+0x2784a]        # 0x180033690
   18000be46:	c7 43 2c ff ff ff ff 	mov    DWORD PTR [rbx+0x2c],0xffffffff
   18000be4d:	b8 ff ff ff ff       	mov    eax,0xffffffff
   18000be52:	49 8b d0             	mov    rdx,r8
   18000be55:	89 43 30             	mov    DWORD PTR [rbx+0x30],eax
   18000be58:	41 b8 3c 00 00 00    	mov    r8d,0x3c
   18000be5e:	48 89 4b 18          	mov    QWORD PTR [rbx+0x18],rcx
   18000be62:	48 8d 4b 38          	lea    rcx,[rbx+0x38]
   18000be66:	e8 95 e1 00 00       	call   0x18001a000
   18000be6b:	4c 8d 05 16 78 02 00 	lea    r8,[rip+0x27816]        # 0x180033688
   18000be72:	4c 8d 0d 1f 78 02 00 	lea    r9,[rip+0x2781f]        # 0x180033698
   18000be79:	0f b6 46 01          	movzx  eax,BYTE PTR [rsi+0x1]
   18000be7d:	48 8d 15 24 78 02 00 	lea    rdx,[rip+0x27824]        # 0x1800336a8
   18000be84:	48 ff c6             	inc    rsi
   18000be87:	4c 8d 15 2a 69 02 00 	lea    r10,[rip+0x2692a]        # 0x1800327b8
   18000be8e:	41 bb 00 01 00 00    	mov    r11d,0x100
   18000be94:	84 c0                	test   al,al
   18000be96:	0f 85 34 ff ff ff    	jne    0x18000bdd0
   18000be9c:	4c 8b 74 24 60       	mov    r14,QWORD PTR [rsp+0x60]
   18000bea1:	4c 8b 64 24 58       	mov    r12,QWORD PTR [rsp+0x58]
   18000bea6:	48 8b 7c 24 50       	mov    rdi,QWORD PTR [rsp+0x50]
   18000beab:	8b c5                	mov    eax,ebp
   18000bead:	48 83 c4 20          	add    rsp,0x20
   18000beb1:	41 5f                	pop    r15
   18000beb3:	41 5d                	pop    r13
   18000beb5:	5e                   	pop    rsi
   18000beb6:	5d                   	pop    rbp
   18000beb7:	5b                   	pop    rbx
   18000beb8:	c3                   	ret
   18000beb9:	4d 85 f6             	test   r14,r14
   18000bebc:	74 31                	je     0x18000beef
   18000bebe:	41 f6 46 42 02       	test   BYTE PTR [r14+0x42],0x2
   18000bec3:	74 2a                	je     0x18000beef
   18000bec5:	49 8b 06             	mov    rax,QWORD PTR [r14]
   18000bec8:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   18000becb:	48 8b 51 18          	mov    rdx,QWORD PTR [rcx+0x18]
   18000becf:	48 8b 4a 48          	mov    rcx,QWORD PTR [rdx+0x48]
   18000bed3:	48 85 c9             	test   rcx,rcx
   18000bed6:	74 17                	je     0x18000beef
   18000bed8:	49 8b 46 28          	mov    rax,QWORD PTR [r14+0x28]
   18000bedc:	48 2b 42 38          	sub    rax,QWORD PTR [rdx+0x38]
   18000bee0:	48 c1 f8 02          	sar    rax,0x2
   18000bee4:	48 98                	cdqe
   18000bee6:	8b 4c 81 fc          	mov    ecx,DWORD PTR [rcx+rax*4-0x4]
   18000beea:	89 4b 28             	mov    DWORD PTR [rbx+0x28],ecx
   18000beed:	eb 8a                	jmp    0x18000be79
   18000beef:	b9 ff ff ff ff       	mov    ecx,0xffffffff
   18000bef4:	89 4b 28             	mov    DWORD PTR [rbx+0x28],ecx
   18000bef7:	eb 80                	jmp    0x18000be79
   18000bef9:	4d 85 ff             	test   r15,r15
   18000befc:	75 12                	jne    0x18000bf10
   18000befe:	44 88 7b 34          	mov    BYTE PTR [rbx+0x34],r15b
   18000bf02:	32 c9                	xor    cl,cl
   18000bf04:	c6 43 36 01          	mov    BYTE PTR [rbx+0x36],0x1
   18000bf08:	88 4b 35             	mov    BYTE PTR [rbx+0x35],cl
   18000bf0b:	e9 69 ff ff ff       	jmp    0x18000be79
   18000bf10:	41 0f b6 47 0a       	movzx  eax,BYTE PTR [r15+0xa]
   18000bf15:	88 43 34             	mov    BYTE PTR [rbx+0x34],al
   18000bf18:	41 80 7f 08 26       	cmp    BYTE PTR [r15+0x8],0x26
   18000bf1d:	74 e3                	je     0x18000bf02
   18000bf1f:	49 8b 47 18          	mov    rax,QWORD PTR [r15+0x18]
   18000bf23:	0f b6 48 0b          	movzx  ecx,BYTE PTR [rax+0xb]
   18000bf27:	88 4b 36             	mov    BYTE PTR [rbx+0x36],cl
   18000bf2a:	49 8b 47 18          	mov    rax,QWORD PTR [r15+0x18]
   18000bf2e:	0f b6 48 0a          	movzx  ecx,BYTE PTR [rax+0xa]
   18000bf32:	88 4b 35             	mov    BYTE PTR [rbx+0x35],cl
   18000bf35:	e9 3f ff ff ff       	jmp    0x18000be79
   18000bf3a:	4d 85 f6             	test   r14,r14
   18000bf3d:	74 0f                	je     0x18000bf4e
   18000bf3f:	41 0f b6 46 42       	movzx  eax,BYTE PTR [r14+0x42]
   18000bf44:	24 20                	and    al,0x20
   18000bf46:	88 43 37             	mov    BYTE PTR [rbx+0x37],al
   18000bf49:	e9 2b ff ff ff       	jmp    0x18000be79
   18000bf4e:	32 c0                	xor    al,al
   18000bf50:	88 43 37             	mov    BYTE PTR [rbx+0x37],al
   18000bf53:	e9 21 ff ff ff       	jmp    0x18000be79
   18000bf58:	4c 8d 4b 08          	lea    r9,[rbx+0x8]
   18000bf5c:	4d 85 f6             	test   r14,r14
   18000bf5f:	0f 84 33 01 00 00    	je     0x18000c098
   18000bf65:	41 0f b7 46 42       	movzx  eax,WORD PTR [r14+0x42]
   18000bf6a:	66 41 85 c3          	test   r11w,ax
   18000bf6e:	74 0c                	je     0x18000bf7c
   18000bf70:	4d 89 11             	mov    QWORD PTR [r9],r10
   18000bf73:	48 89 53 10          	mov    QWORD PTR [rbx+0x10],rdx
   18000bf77:	e9 f6 fe ff ff       	jmp    0x18000be72
   18000bf7c:	a8 20                	test   al,0x20
   18000bf7e:	0f 85 14 01 00 00    	jne    0x18000c098
   18000bf84:	49 8b 56 10          	mov    rdx,QWORD PTR [r14+0x10]
   18000bf88:	44 0f b7 42 42       	movzx  r8d,WORD PTR [rdx+0x42]
   18000bf8d:	41 f6 c0 02          	test   r8b,0x2
   18000bf91:	0f 84 01 01 00 00    	je     0x18000c098
   18000bf97:	48 8b 02             	mov    rax,QWORD PTR [rdx]
   18000bf9a:	48 8b 08             	mov    rcx,QWORD PTR [rax]
   18000bf9d:	48 8b 42 28          	mov    rax,QWORD PTR [rdx+0x28]
   18000bfa1:	4c 8b 59 18          	mov    r11,QWORD PTR [rcx+0x18]
   18000bfa5:	49 8b 4b 38          	mov    rcx,QWORD PTR [r11+0x38]
   18000bfa9:	48 2b c1             	sub    rax,rcx
   18000bfac:	48 c1 f8 02          	sar    rax,0x2
   18000bfb0:	8d 78 ff             	lea    edi,[rax-0x1]
   18000bfb3:	48 98                	cdqe
   18000bfb5:	8b 54 81 fc          	mov    edx,DWORD PTR [rcx+rax*4-0x4]
   18000bfb9:	41 f6 c0 04          	test   r8b,0x4
   18000bfbd:	74 16                	je     0x18000bfd5
   18000bfbf:	48 8d 05 de 65 02 00 	lea    rax,[rip+0x265de]        # 0x1800325a4
   18000bfc6:	49 89 01             	mov    QWORD PTR [r9],rax
   18000bfc9:	48 8d 05 1c 77 02 00 	lea    rax,[rip+0x2771c]        # 0x1800336ec
   18000bfd0:	e9 b0 00 00 00       	jmp    0x18000c085
   18000bfd5:	44 8b d2             	mov    r10d,edx
   18000bfd8:	41 83 e2 3f          	and    r10d,0x3f
   18000bfdc:	41 8d 42 fa          	lea    eax,[r10-0x6]
