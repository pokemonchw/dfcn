
D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe:     file format pei-x86-64


Disassembly of section .text:

0000000140cc4f60 <.text+0xcc3f60>:
   140cc4f60:	mov    QWORD PTR [rsp+0x8],rbx
   140cc4f65:	push   rbp
   140cc4f66:	push   rsi
   140cc4f67:	push   rdi
   140cc4f68:	push   r12
   140cc4f6a:	push   r13
   140cc4f6c:	push   r14
   140cc4f6e:	push   r15
   140cc4f70:	lea    rbp,[rsp-0x7]
   140cc4f75:	sub    rsp,0xf0
   140cc4f7c:	mov    rax,QWORD PTR [rip+0xbf90bd]        # 0x1418be040
   140cc4f83:	xor    rax,rsp
   140cc4f86:	mov    QWORD PTR [rbp-0x1],rax
   140cc4f8a:	movzx  r14d,r9w
   140cc4f8e:	movsx  ebx,r8b
   140cc4f92:	mov    BYTE PTR [rsp+0x20],bl
   140cc4f96:	mov    r13,rdx
   140cc4f99:	mov    QWORD PTR [rsp+0x58],rdx
   140cc4f9e:	mov    r15,QWORD PTR [rbp+0x6f]
   140cc4fa2:	xorps  xmm0,xmm0
   140cc4fa5:	movups XMMWORD PTR [rbp-0x61],xmm0
   140cc4fa9:	xor    r12d,r12d
   140cc4fac:	mov    QWORD PTR [rbp-0x51],r12
   140cc4fb0:	mov    esi,0xf
   140cc4fb5:	mov    QWORD PTR [rbp-0x49],rsi
   140cc4fb9:	mov    BYTE PTR [rbp-0x61],r12b
   140cc4fbd:	mov    QWORD PTR [rdx+0x10],r12
   140cc4fc1:	mov    rax,rdx
   140cc4fc4:	cmp    QWORD PTR [rdx+0x18],rsi
   140cc4fc8:	jbe    0x140cc4fcd
   140cc4fca:	mov    rax,QWORD PTR [rdx]
   140cc4fcd:	mov    BYTE PTR [rax],0x0
   140cc4fd0:	cmp    r14w,0xffff
   140cc4fd5:	jne    0x140cc4fe1
   140cc4fd7:	cmp    DWORD PTR [r15],0xffffffff
   140cc4fdb:	je     0x140cc596c
   140cc4fe1:	mov    r8d,0xe
   140cc4fe7:	lea    rdx,[rip+0xa5cb12]        # 0x141721b00
   140cc4fee:	mov    rcx,r13
   140cc4ff1:	call   0x140071040
   140cc4ff6:	mov    edi,DWORD PTR [rbp+0x67]
   140cc4ff9:	mov    r8d,edi
   140cc4ffc:	movzx  edx,r14w
   140cc5000:	lea    rcx,[rip+0x172e969]        # 0x1423f3970
   140cc5007:	call   0x141475520
   140cc500c:	mov    ecx,DWORD PTR [r15]
   140cc500f:	cmp    ecx,0xffffffff
   140cc5012:	cmove  cx,ax
   140cc5016:	cmp    cx,0xffff
   140cc501a:	je     0x140cc503f
   140cc501c:	movsx  rcx,cx
   140cc5020:	mov    rax,QWORD PTR [rip+0x1854511]        # 0x142519538
   140cc5027:	mov    rdx,QWORD PTR [rax+rcx*8]
   140cc502b:	add    rdx,0x50
   140cc502f:	mov    r8,QWORD PTR [rdx+0x10]
   140cc5033:	cmp    QWORD PTR [rdx+0x18],0xf
   140cc5038:	jbe    0x140cc504c
   140cc503a:	mov    rdx,QWORD PTR [rdx]
   140cc503d:	jmp    0x140cc504c
   140cc503f:	lea    rdx,[rip+0xa5caca]        # 0x141721b10
   140cc5046:	mov    r8d,0x4
   140cc504c:	mov    rcx,r13
   140cc504f:	call   0x140071040
   140cc5054:	test   bl,bl
   140cc5056:	jle    0x140cc50f2
   140cc505c:	mov    r8d,0x2
   140cc5062:	lea    rdx,[rip+0x93f32b]        # 0x141604394
   140cc5069:	mov    rcx,r13
   140cc506c:	call   0x140071040
   140cc5071:	mov    ecx,ebx
   140cc5073:	sub    ecx,0x1
   140cc5076:	je     0x140cc50c8
   140cc5078:	sub    ecx,0x1
   140cc507b:	je     0x140cc50b9
   140cc507d:	sub    ecx,0x1
   140cc5080:	je     0x140cc50aa
   140cc5082:	sub    ecx,0x1
   140cc5085:	je     0x140cc509b
   140cc5087:	cmp    ecx,0x1
   140cc508a:	jne    0x140cc50dd
   140cc508c:	mov    r8d,0xc
   140cc5092:	lea    rdx,[rip+0xa5d137]        # 0x1417221d0
   140cc5099:	jmp    0x140cc50d5
   140cc509b:	mov    r8d,0xe
   140cc50a1:	lea    rdx,[rip+0xa5d118]        # 0x1417221c0
   140cc50a8:	jmp    0x140cc50d5
   140cc50aa:	mov    r8d,0x9
   140cc50b0:	lea    rdx,[rip+0xa5ca61]        # 0x141721b18
   140cc50b7:	jmp    0x140cc50d5
   140cc50b9:	mov    r8d,0x7
   140cc50bf:	lea    rdx,[rip+0xa5d0e2]        # 0x1417221a8
   140cc50c6:	jmp    0x140cc50d5
   140cc50c8:	mov    r8d,0x5
   140cc50ce:	lea    rdx,[rip+0xa5d0cb]        # 0x1417221a0
   140cc50d5:	mov    rcx,r13
   140cc50d8:	call   0x140071040
   140cc50dd:	mov    r8d,0x7
   140cc50e3:	lea    rdx,[rip+0xa5ca3e]        # 0x141721b28
   140cc50ea:	mov    rcx,r13
   140cc50ed:	call   0x140071040
   140cc50f2:	mov    rax,QWORD PTR [r15+0x10]
   140cc50f6:	sub    rax,QWORD PTR [r15+0x8]
   140cc50fa:	sar    rax,0x2
   140cc50fe:	test   rax,rax
   140cc5101:	je     0x140cc55a9
   140cc5107:	xorps  xmm0,xmm0
   140cc510a:	movdqu XMMWORD PTR [rsp+0x38],xmm0
   140cc5110:	mov    QWORD PTR [rsp+0x48],r12
   140cc5115:	movdqu XMMWORD PTR [rsp+0x68],xmm0
   140cc511b:	mov    r13,r12
   140cc511e:	mov    QWORD PTR [rbp-0x71],r12
   140cc5122:	cdqe
   140cc5124:	mov    QWORD PTR [rsp+0x60],rax
   140cc5129:	mov    rbx,QWORD PTR [rsp+0x40]
   140cc512e:	test   rax,rax
   140cc5131:	jle    0x140cc5220
   140cc5137:	mov    r14,r12
   140cc513a:	mov    r9d,0xff
   140cc5140:	mov    rcx,QWORD PTR [rsp+0x38]
   140cc5145:	mov    QWORD PTR [rsp+0x50],rcx
   140cc514a:	mov    rdi,QWORD PTR [rbp-0x79]
   140cc514e:	xchg   ax,ax
   140cc5150:	mov    rax,QWORD PTR [r15+0x20]
   140cc5154:	mov    esi,DWORD PTR [rax+r14*4]
   140cc5158:	mov    DWORD PTR [rsp+0x30],esi
   140cc515c:	mov    rax,QWORD PTR [r15+0x8]
   140cc5160:	mov    edx,DWORD PTR [rax+r14*4]
   140cc5164:	mov    DWORD PTR [rsp+0x28],edx
   140cc5168:	mov    rax,rcx
   140cc516b:	mov    r8,QWORD PTR [rsp+0x68]
   140cc5170:	sub    r8,rcx
   140cc5173:	cmp    rax,rbx
   140cc5176:	je     0x140cc5195
   140cc5178:	mov    ecx,0x1
   140cc517d:	cmovb  ecx,r9d
   140cc5181:	test   cl,cl
   140cc5183:	jns    0x140cc5195
   140cc5185:	cmp    DWORD PTR [rax],edx
   140cc5187:	jne    0x140cc518f
   140cc5189:	cmp    DWORD PTR [rax+r8*1],esi
   140cc518d:	je     0x140cc51fd
   140cc518f:	add    rax,0x4
   140cc5193:	jmp    0x140cc5173
   140cc5195:	cmp    rbx,r12
   140cc5198:	je     0x140cc51ac
   140cc519a:	mov    DWORD PTR [rbx],edx
   140cc519c:	add    rbx,0x4
   140cc51a0:	mov    QWORD PTR [rsp+0x40],rbx
   140cc51a5:	mov    rcx,QWORD PTR [rsp+0x38]
   140cc51aa:	jmp    0x140cc51d2
   140cc51ac:	lea    r8,[rsp+0x28]
   140cc51b1:	mov    rdx,rbx
   140cc51b4:	lea    rcx,[rsp+0x38]
   140cc51b9:	call   0x140072450
   140cc51be:	mov    rbx,QWORD PTR [rsp+0x40]
   140cc51c3:	mov    rcx,QWORD PTR [rsp+0x38]
   140cc51c8:	mov    QWORD PTR [rsp+0x50],rcx
   140cc51cd:	mov    r12,QWORD PTR [rsp+0x48]
   140cc51d2:	cmp    rdi,r13
   140cc51d5:	je     0x140cc51e3
   140cc51d7:	mov    DWORD PTR [rdi],esi
   140cc51d9:	add    rdi,0x4
   140cc51dd:	mov    QWORD PTR [rbp-0x79],rdi
   140cc51e1:	jmp    0x140cc5202
   140cc51e3:	lea    r8,[rsp+0x30]
   140cc51e8:	mov    rdx,rdi
   140cc51eb:	lea    rcx,[rsp+0x68]
   140cc51f0:	call   0x140072450
   140cc51f5:	mov    r13,QWORD PTR [rbp-0x71]
   140cc51f9:	mov    rdi,QWORD PTR [rbp-0x79]
   140cc51fd:	mov    rcx,QWORD PTR [rsp+0x38]
   140cc5202:	inc    r14
   140cc5205:	cmp    r14,QWORD PTR [rsp+0x60]
   140cc520a:	mov    r9d,0xff
   140cc5210:	jl     0x140cc5150
   140cc5216:	xor    r12d,r12d
   140cc5219:	mov    esi,0xf
   140cc521e:	jmp    0x140cc522a
   140cc5220:	mov    rax,QWORD PTR [rsp+0x38]
   140cc5225:	mov    QWORD PTR [rsp+0x50],rax
   140cc522a:	mov    r8d,0x6
   140cc5230:	lea    rdx,[rip+0x944611]        # 0x141609848
   140cc5237:	mov    r13,QWORD PTR [rsp+0x58]
   140cc523c:	mov    rcx,r13
   140cc523f:	call   0x140071040
   140cc5244:	mov    rcx,QWORD PTR [rsp+0x38]
   140cc5249:	sub    rbx,rcx
   140cc524c:	sar    rbx,0x2
   140cc5250:	cmp    rbx,0x2
   140cc5254:	jb     0x140cc5270
   140cc5256:	mov    r8d,0xd
   140cc525c:	lea    rdx,[rip+0xa5c8cd]        # 0x141721b30
   140cc5263:	mov    rcx,r13
   140cc5266:	call   0x140071040
   140cc526b:	mov    rcx,QWORD PTR [rsp+0x38]
   140cc5270:	mov    r14d,r12d
   140cc5273:	mov    DWORD PTR [rsp+0x28],r12d
   140cc5278:	test   ebx,ebx
   140cc527a:	jle    0x140cc558f
   140cc5280:	movsxd rax,ebx
   140cc5283:	mov    QWORD PTR [rsp+0x58],rax
   140cc5288:	mov    QWORD PTR [rsp+0x60],r12
   140cc528d:	mov    rax,QWORD PTR [rsp+0x68]
   140cc5292:	sub    rax,rcx
   140cc5295:	mov    QWORD PTR [rbp-0x69],rax
   140cc5299:	lea    r15,[rip+0xae45e8]        # 0x1417a9888
   140cc52a0:	mov    r8d,0xc7
   140cc52a6:	mov    edx,0xdb
   140cc52ab:	xorps  xmm0,xmm0
   140cc52ae:	movups XMMWORD PTR [rbp-0x21],xmm0
   140cc52b2:	mov    QWORD PTR [rbp-0x11],r12
   140cc52b6:	mov    QWORD PTR [rbp-0x9],rsi
   140cc52ba:	mov    BYTE PTR [rbp-0x21],0x0
   140cc52be:	mov    esi,DWORD PTR [rcx+rax*1]
   140cc52c1:	movzx  eax,WORD PTR [rcx]
   140cc52c4:	mov    WORD PTR [rsp+0x30],ax
   140cc52c9:	mov    QWORD PTR [rbp-0x11],r12
   140cc52cd:	mov    BYTE PTR [rbp-0x21],0x0
   140cc52d1:	sub    ax,dx
   140cc52d4:	cmp    ax,r8w
   140cc52d8:	ja     0x140cc544b
   140cc52de:	mov    r9,QWORD PTR [rip+0x1856ebb]        # 0x14251c1a0
   140cc52e5:	mov    r10,QWORD PTR [rip+0x1856eac]        # 0x14251c198
   140cc52ec:	sub    r9,r10
   140cc52ef:	sar    r9,0x3
   140cc52f3:	test   r9,r9
   140cc52f6:	je     0x140cc544b
   140cc52fc:	cmp    esi,0xffffffff
   140cc52ff:	je     0x140cc544b
   140cc5305:	mov    edx,r12d
   140cc5308:	sub    r9d,0x1
   140cc530c:	js     0x140cc544b
   140cc5312:	lea    ecx,[r9+rdx*1]
   140cc5316:	sar    ecx,1
   140cc5318:	movsxd rax,ecx
   140cc531b:	mov    rdi,QWORD PTR [r10+rax*8]
   140cc531f:	cmp    DWORD PTR [rdi+0xe0],esi
   140cc5325:	je     0x140cc5341
   140cc5327:	lea    eax,[rcx-0x1]
   140cc532a:	cmovle eax,r9d
   140cc532e:	mov    r9d,eax
   140cc5331:	lea    eax,[rcx+0x1]
   140cc5334:	cmovle edx,eax
   140cc5337:	cmp    edx,r9d
   140cc533a:	jle    0x140cc5312
   140cc533c:	jmp    0x140cc544b
   140cc5341:	test   rdi,rdi
   140cc5344:	je     0x140cc544b
   140cc534a:	cmp    BYTE PTR [rdi+0xaa],0x0
   140cc5351:	je     0x140cc544b
   140cc5357:	xorps  xmm0,xmm0
   140cc535a:	movups XMMWORD PTR [rbp-0x41],xmm0
   140cc535e:	mov    r14,r12
   140cc5361:	mov    QWORD PTR [rbp-0x31],r12
   140cc5365:	mov    r15d,0xf
   140cc536b:	mov    QWORD PTR [rbp-0x29],r15
   140cc536f:	mov    BYTE PTR [rbp-0x41],0x0
   140cc5373:	mov    rax,QWORD PTR [rdi+0x130]
   140cc537a:	test   rax,rax
   140cc537d:	je     0x140cc53ab
   140cc537f:	mov    rcx,QWORD PTR [rax+0x58]
   140cc5383:	test   rcx,rcx
   140cc5386:	je     0x140cc53ab
   140cc5388:	mov    edx,DWORD PTR [rcx+0x30]
   140cc538b:	cmp    edx,0xffffffff
   140cc538e:	je     0x140cc53ab
   140cc5390:	lea    rcx,[rip+0x1844dd1]        # 0x14250a168
   140cc5397:	call   0x140073ba0
   140cc539c:	test   rax,rax
   140cc539f:	je     0x140cc53ab
   140cc53a1:	mov    rcx,rax
   140cc53a4:	call   0x140c521e0
   140cc53a9:	jmp    0x140cc53af
   140cc53ab:	lea    rax,[rdi+0x38]
   140cc53af:	test   rax,rax
   140cc53b2:	je     0x140cc53d4
   140cc53b4:	cmp    BYTE PTR [rax+0x72],0x0
   140cc53b8:	je     0x140cc53d4
   140cc53ba:	xor    r9d,r9d
   140cc53bd:	mov    r8b,0x1
   140cc53c0:	lea    rdx,[rbp-0x41]
   140cc53c4:	mov    rcx,rax
   140cc53c7:	call   0x140aae180
   140cc53cc:	mov    r15,QWORD PTR [rbp-0x29]
   140cc53d0:	mov    r14,QWORD PTR [rbp-0x31]
   140cc53d4:	lea    rdx,[rbp-0x41]
   140cc53d8:	cmp    r15,0xf
   140cc53dc:	cmova  rdx,QWORD PTR [rbp-0x41]
   140cc53e1:	mov    r8,r14
   140cc53e4:	lea    rcx,[rbp-0x21]
   140cc53e8:	call   0x140071040
   140cc53ed:	mov    r8d,0x3
   140cc53f3:	lea    rdx,[rip+0x9439aa]        # 0x141608da4
   140cc53fa:	lea    rcx,[rbp-0x21]
   140cc53fe:	call   0x140071040
   140cc5403:	nop
   140cc5404:	mov    rdx,QWORD PTR [rbp-0x29]
   140cc5408:	cmp    rdx,0xf
   140cc540c:	jbe    0x140cc543f
   140cc540e:	inc    rdx
   140cc5411:	mov    rcx,QWORD PTR [rbp-0x41]
   140cc5415:	mov    rax,rcx
   140cc5418:	cmp    rdx,0x1000
   140cc541f:	jb     0x140cc543a
   140cc5421:	add    rdx,0x27
   140cc5425:	mov    rcx,QWORD PTR [rcx-0x8]
   140cc5429:	sub    rax,rcx
   140cc542c:	add    rax,0xfffffffffffffff8
   140cc5430:	cmp    rax,0x1f
   140cc5434:	ja     0x140cc5588
   140cc543a:	call   0x1415530d0
   140cc543f:	lea    r15,[rip+0xae4442]        # 0x1417a9888
   140cc5446:	mov    r14d,DWORD PTR [rsp+0x28]
   140cc544b:	mov    r8d,esi
   140cc544e:	movzx  edx,WORD PTR [rsp+0x30]
   140cc5453:	lea    rcx,[rip+0x172e516]        # 0x1423f3970
   140cc545a:	call   0x1414c6fe0
   140cc545f:	mov    rdi,rax
   140cc5462:	test   rax,rax
   140cc5465:	je     0x140cc54bc
   140cc5467:	cmp    QWORD PTR [rax+0x530],0x0
   140cc546f:	je     0x140cc54a5
   140cc5471:	lea    rdx,[rax+0x520]
   140cc5478:	mov    r8,QWORD PTR [rdx+0x10]
   140cc547c:	cmp    QWORD PTR [rdx+0x18],0xf
   140cc5481:	jbe    0x140cc5486
   140cc5483:	mov    rdx,QWORD PTR [rdx]
   140cc5486:	lea    rcx,[rbp-0x21]
   140cc548a:	call   0x140071040
   140cc548f:	mov    r8d,0x1
   140cc5495:	lea    rdx,[rip+0x93e554]        # 0x1416039f0
   140cc549c:	lea    rcx,[rbp-0x21]
   140cc54a0:	call   0x140071040
   140cc54a5:	lea    rdx,[rdi+0x118]
   140cc54ac:	mov    r8,QWORD PTR [rdx+0x10]
   140cc54b0:	cmp    QWORD PTR [rdx+0x18],0xf
   140cc54b5:	jbe    0x140cc54c5
   140cc54b7:	mov    rdx,QWORD PTR [rdx]
   140cc54ba:	jmp    0x140cc54c5
   140cc54bc:	mov    rdx,r15
   140cc54bf:	mov    r8d,0x10
   140cc54c5:	lea    rcx,[rbp-0x21]
   140cc54c9:	call   0x140071040
   140cc54ce:	lea    rdx,[rbp-0x21]
   140cc54d2:	cmp    QWORD PTR [rbp-0x9],0xf
   140cc54d7:	cmova  rdx,QWORD PTR [rbp-0x21]
   140cc54dc:	mov    r8,QWORD PTR [rbp-0x11]
   140cc54e0:	mov    rcx,r13
   140cc54e3:	call   0x140071040
   140cc54e8:	lea    eax,[rbx-0x1]
   140cc54eb:	mov    rdi,QWORD PTR [rsp+0x58]
   140cc54f0:	cmp    r14d,eax
   140cc54f3:	jge    0x140cc5549
   140cc54f5:	cmp    rdi,0x3
   140cc54f9:	jl     0x140cc5510
   140cc54fb:	mov    r8d,0x2
   140cc5501:	lea    rdx,[rip+0x93ee8c]        # 0x141604394
   140cc5508:	mov    rcx,r13
   140cc550b:	call   0x140071040
   140cc5510:	lea    eax,[rbx-0x2]
   140cc5513:	cmp    r14d,eax
   140cc5516:	jne    0x140cc5549
   140cc5518:	cmp    rdi,0x2
   140cc551c:	jne    0x140cc5533
   140cc551e:	mov    r8d,0x1
   140cc5524:	lea    rdx,[rip+0x93e4c5]        # 0x1416039f0
   140cc552b:	mov    rcx,r13
   140cc552e:	call   0x140071040
   140cc5533:	mov    r8d,0x4
   140cc5539:	lea    rdx,[rip+0xa5c600]        # 0x141721b40
   140cc5540:	mov    rcx,r13
   140cc5543:	call   0x140071040
   140cc5548:	nop
   140cc5549:	lea    rcx,[rbp-0x21]
   140cc554d:	call   0x140070e80
   140cc5552:	inc    r14d
   140cc5555:	mov    DWORD PTR [rsp+0x28],r14d
   140cc555a:	mov    rdx,QWORD PTR [rsp+0x60]
   140cc555f:	inc    rdx
   140cc5562:	mov    QWORD PTR [rsp+0x60],rdx
   140cc5567:	mov    rcx,QWORD PTR [rsp+0x50]
   140cc556c:	add    rcx,0x4
   140cc5570:	mov    QWORD PTR [rsp+0x50],rcx
   140cc5575:	cmp    rdx,rdi
   140cc5578:	jge    0x140cc558f
   140cc557a:	mov    rax,QWORD PTR [rbp-0x69]
   140cc557e:	mov    esi,0xf
   140cc5583:	jmp    0x140cc52a0
   140cc5588:	call   QWORD PTR [rip+0x93b5b2]        # 0x141600b40
   140cc558e:	nop
   140cc558f:	lea    rcx,[rsp+0x68]
   140cc5594:	call   0x140070d80
   140cc5599:	nop
   140cc559a:	lea    rcx,[rsp+0x38]
   140cc559f:	call   0x140070d80
   140cc55a4:	jmp    0x140cc57f6
   140cc55a9:	mov    r8d,0x6
   140cc55af:	lea    rdx,[rip+0x944292]        # 0x141609848
   140cc55b6:	mov    rcx,r13
   140cc55b9:	call   0x140071040
   140cc55be:	mov    QWORD PTR [rbp-0x51],r12
   140cc55c2:	lea    rax,[rbp-0x61]
   140cc55c6:	cmp    QWORD PTR [rbp-0x49],0xf
   140cc55cb:	cmova  rax,QWORD PTR [rbp-0x61]
   140cc55d0:	mov    BYTE PTR [rax],0x0
   140cc55d3:	mov    ecx,0xdb
   140cc55d8:	movzx  eax,r14w
   140cc55dc:	sub    ax,cx
   140cc55df:	mov    ecx,0xc7
   140cc55e4:	cmp    ax,cx
   140cc55e7:	ja     0x140cc5751
   140cc55ed:	mov    r8,QWORD PTR [rip+0x1856bac]        # 0x14251c1a0
   140cc55f4:	mov    r10,QWORD PTR [rip+0x1856b9d]        # 0x14251c198
   140cc55fb:	sub    r8,r10
   140cc55fe:	sar    r8,0x3
   140cc5602:	test   r8,r8
   140cc5605:	je     0x140cc5751
   140cc560b:	cmp    edi,0xffffffff
   140cc560e:	je     0x140cc5751
   140cc5614:	mov    edx,r12d
   140cc5617:	sub    r8d,0x1
   140cc561b:	js     0x140cc5751
   140cc5621:	lea    ecx,[r8+rdx*1]
   140cc5625:	sar    ecx,1
   140cc5627:	movsxd rax,ecx
   140cc562a:	mov    rbx,QWORD PTR [r10+rax*8]
   140cc562e:	cmp    DWORD PTR [rbx+0xe0],edi
   140cc5634:	je     0x140cc5650
   140cc5636:	lea    eax,[rcx-0x1]
   140cc5639:	cmovle eax,r8d
   140cc563d:	mov    r8d,eax
   140cc5640:	lea    eax,[rcx+0x1]
   140cc5643:	cmovle edx,eax
   140cc5646:	cmp    edx,r8d
   140cc5649:	jle    0x140cc5621
   140cc564b:	jmp    0x140cc5751
   140cc5650:	test   rbx,rbx
   140cc5653:	je     0x140cc5751
   140cc5659:	cmp    BYTE PTR [rbx+0xaa],0x0
   140cc5660:	je     0x140cc5751
   140cc5666:	xorps  xmm0,xmm0
   140cc5669:	movups XMMWORD PTR [rbp-0x41],xmm0
   140cc566d:	mov    rsi,r12
   140cc5670:	mov    QWORD PTR [rbp-0x31],r12
   140cc5674:	mov    r15d,0xf
   140cc567a:	mov    QWORD PTR [rbp-0x29],r15
   140cc567e:	mov    BYTE PTR [rbp-0x41],sil
   140cc5682:	mov    rax,QWORD PTR [rbx+0x130]
   140cc5689:	test   rax,rax
   140cc568c:	je     0x140cc56ba
   140cc568e:	mov    rax,QWORD PTR [rax+0x58]
   140cc5692:	test   rax,rax
   140cc5695:	je     0x140cc56ba
   140cc5697:	mov    edx,DWORD PTR [rax+0x30]
   140cc569a:	cmp    edx,0xffffffff
   140cc569d:	je     0x140cc56ba
   140cc569f:	lea    rcx,[rip+0x1844ac2]        # 0x14250a168
   140cc56a6:	call   0x140073ba0
   140cc56ab:	test   rax,rax
   140cc56ae:	je     0x140cc56ba
   140cc56b0:	mov    rcx,rax
   140cc56b3:	call   0x140c521e0
   140cc56b8:	jmp    0x140cc56be
   140cc56ba:	lea    rax,[rbx+0x38]
   140cc56be:	test   rax,rax
   140cc56c1:	je     0x140cc56e3
   140cc56c3:	cmp    BYTE PTR [rax+0x72],0x0
   140cc56c7:	je     0x140cc56e3
   140cc56c9:	xor    r9d,r9d
   140cc56cc:	mov    r8b,0x1
   140cc56cf:	lea    rdx,[rbp-0x41]
   140cc56d3:	mov    rcx,rax
   140cc56d6:	call   0x140aae180
   140cc56db:	mov    r15,QWORD PTR [rbp-0x29]
   140cc56df:	mov    rsi,QWORD PTR [rbp-0x31]
   140cc56e3:	lea    rdx,[rbp-0x41]
   140cc56e7:	cmp    r15,0xf
   140cc56eb:	cmova  rdx,QWORD PTR [rbp-0x41]
   140cc56f0:	mov    r8,rsi
   140cc56f3:	lea    rcx,[rbp-0x61]
   140cc56f7:	call   0x140071040
   140cc56fc:	mov    r8d,0x3
   140cc5702:	lea    rdx,[rip+0x94369b]        # 0x141608da4
   140cc5709:	lea    rcx,[rbp-0x61]
   140cc570d:	call   0x140071040
   140cc5712:	nop
   140cc5713:	mov    rdx,QWORD PTR [rbp-0x29]
   140cc5717:	cmp    rdx,0xf
   140cc571b:	jbe    0x140cc5751
   140cc571d:	inc    rdx
   140cc5720:	mov    rcx,QWORD PTR [rbp-0x41]
   140cc5724:	mov    rax,rcx
   140cc5727:	cmp    rdx,0x1000
   140cc572e:	jb     0x140cc574c
   140cc5730:	add    rdx,0x27
   140cc5734:	mov    rcx,QWORD PTR [rcx-0x8]
   140cc5738:	sub    rax,rcx
   140cc573b:	add    rax,0xfffffffffffffff8
   140cc573f:	cmp    rax,0x1f
   140cc5743:	jbe    0x140cc574c
   140cc5745:	call   QWORD PTR [rip+0x93b3f5]        # 0x141600b40
   140cc574b:	int3
   140cc574c:	call   0x1415530d0
   140cc5751:	mov    r8d,edi
   140cc5754:	movzx  edx,r14w
   140cc5758:	lea    rcx,[rip+0x172e211]        # 0x1423f3970
   140cc575f:	call   0x1414c6fe0
   140cc5764:	mov    rbx,rax
   140cc5767:	test   rax,rax
   140cc576a:	je     0x140cc57c1
   140cc576c:	cmp    QWORD PTR [rax+0x530],0x0
   140cc5774:	je     0x140cc57aa
   140cc5776:	lea    rdx,[rax+0x520]
   140cc577d:	mov    r8,QWORD PTR [rdx+0x10]
   140cc5781:	cmp    QWORD PTR [rdx+0x18],0xf
   140cc5786:	jbe    0x140cc578b
   140cc5788:	mov    rdx,QWORD PTR [rdx]
   140cc578b:	lea    rcx,[rbp-0x61]
   140cc578f:	call   0x140071040
   140cc5794:	mov    r8d,0x1
   140cc579a:	lea    rdx,[rip+0x93e24f]        # 0x1416039f0
   140cc57a1:	lea    rcx,[rbp-0x61]
   140cc57a5:	call   0x140071040
   140cc57aa:	lea    rax,[rbx+0xb8]
   140cc57b1:	mov    rcx,QWORD PTR [rax+0x10]
   140cc57b5:	cmp    QWORD PTR [rax+0x18],0xf
   140cc57ba:	jbe    0x140cc57cd
   140cc57bc:	mov    rax,QWORD PTR [rax]
   140cc57bf:	jmp    0x140cc57cd
   140cc57c1:	lea    rax,[rip+0xae40c0]        # 0x1417a9888
   140cc57c8:	mov    ecx,0x10
   140cc57cd:	mov    r8,rcx
   140cc57d0:	mov    rdx,rax
   140cc57d3:	lea    rcx,[rbp-0x61]
   140cc57d7:	call   0x140071040
   140cc57dc:	lea    rdx,[rbp-0x61]
   140cc57e0:	cmp    QWORD PTR [rbp-0x49],0xf
   140cc57e5:	cmova  rdx,QWORD PTR [rbp-0x61]
   140cc57ea:	mov    r8,QWORD PTR [rbp-0x51]
   140cc57ee:	mov    rcx,r13
   140cc57f1:	call   0x140071040
   140cc57f6:	cmp    BYTE PTR [rsp+0x20],0x5
   140cc57fb:	jne    0x140cc5956
   140cc5801:	mov    rdx,QWORD PTR [rip+0x1856998]        # 0x14251c1a0
   140cc5808:	mov    r10,QWORD PTR [rip+0x1856989]        # 0x14251c198
   140cc580f:	sub    rdx,r10
   140cc5812:	sar    rdx,0x3
   140cc5816:	test   rdx,rdx
   140cc5819:	je     0x140cc5956
   140cc581f:	mov    r9d,DWORD PTR [rbp+0x77]
   140cc5823:	cmp    r9d,0xffffffff
   140cc5827:	je     0x140cc5956
   140cc582d:	sub    edx,0x1
   140cc5830:	js     0x140cc5956
   140cc5836:	data16 nop WORD PTR [rax+rax*1+0x0]
   140cc5840:	lea    ecx,[rdx+r12*1]
   140cc5844:	sar    ecx,1
   140cc5846:	movsxd rax,ecx
   140cc5849:	mov    rbx,QWORD PTR [r10+rax*8]
   140cc584d:	cmp    DWORD PTR [rbx+0xe0],r9d
   140cc5854:	je     0x140cc586f
   140cc5856:	lea    eax,[rcx-0x1]
   140cc5859:	cmovle eax,edx
   140cc585c:	mov    edx,eax
   140cc585e:	lea    eax,[rcx+0x1]
   140cc5861:	cmovle r12d,eax
   140cc5865:	cmp    r12d,edx
   140cc5868:	jle    0x140cc5840
   140cc586a:	jmp    0x140cc5956
   140cc586f:	test   rbx,rbx
   140cc5872:	je     0x140cc5956
   140cc5878:	mov    r8d,0x4
   140cc587e:	lea    rdx,[rip+0x943403]        # 0x141608c88
   140cc5885:	mov    rcx,r13
   140cc5888:	call   0x140071040
   140cc588d:	mov    edi,DWORD PTR [rbp+0x7f]
   140cc5890:	test   dil,0x2
   140cc5894:	je     0x140cc58ce
   140cc5896:	mov    r8d,0xa
   140cc589c:	lea    rdx,[rip+0x954065]        # 0x141619908
   140cc58a3:	mov    rcx,r13
   140cc58a6:	call   0x140071040
   140cc58ab:	mov    rdx,r13
   140cc58ae:	mov    ecx,DWORD PTR [rbx+0xe0]
   140cc58b4:	call   0x140545610
   140cc58b9:	mov    r8d,0x1
   140cc58bf:	lea    rdx,[rip+0x953b42]        # 0x141619408
   140cc58c6:	mov    rcx,r13
   140cc58c9:	call   0x140071040
   140cc58ce:	mov    rax,QWORD PTR [rbx+0x130]
   140cc58d5:	test   rax,rax
   140cc58d8:	je     0x140cc5906
   140cc58da:	mov    rcx,QWORD PTR [rax+0x58]
   140cc58de:	test   rcx,rcx
   140cc58e1:	je     0x140cc5906
   140cc58e3:	mov    edx,DWORD PTR [rcx+0x30]
   140cc58e6:	cmp    edx,0xffffffff
   140cc58e9:	je     0x140cc5906
   140cc58eb:	lea    rcx,[rip+0x1844876]        # 0x14250a168
   140cc58f2:	call   0x140073ba0
   140cc58f7:	test   rax,rax
   140cc58fa:	je     0x140cc5906
   140cc58fc:	mov    rcx,rax
   140cc58ff:	call   0x140c521e0
   140cc5904:	jmp    0x140cc590a
   140cc5906:	lea    rax,[rbx+0x38]
   140cc590a:	test   rax,rax
   140cc590d:	je     0x140cc5921
   140cc590f:	cmp    BYTE PTR [rax+0x72],0x0
   140cc5913:	je     0x140cc5921
   140cc5915:	lea    rdx,[rbp-0x61]
   140cc5919:	mov    rcx,rax
   140cc591c:	call   0x140aadad0
   140cc5921:	lea    rdx,[rbp-0x61]
   140cc5925:	cmp    QWORD PTR [rbp-0x49],0xf
   140cc592a:	cmova  rdx,QWORD PTR [rbp-0x61]
   140cc592f:	mov    r8,QWORD PTR [rbp-0x51]
   140cc5933:	mov    rcx,r13
   140cc5936:	call   0x140071040
   140cc593b:	test   dil,0x2
   140cc593f:	je     0x140cc5956
   140cc5941:	mov    r8d,0x8
   140cc5947:	lea    rdx,[rip+0x953fca]        # 0x141619918
   140cc594e:	mov    rcx,r13
   140cc5951:	call   0x140071040
   140cc5956:	mov    r8d,0x3
   140cc595c:	lea    rdx,[rip+0x953c35]        # 0x141619598
   140cc5963:	mov    rcx,r13
   140cc5966:	call   0x140071040
   140cc596b:	nop
   140cc596c:	lea    rcx,[rbp-0x61]
   140cc5970:	call   0x140070e80
   140cc5975:	mov    rcx,QWORD PTR [rbp-0x1]
   140cc5979:	xor    rcx,rsp
   140cc597c:	call   0x1415530b0
   140cc5981:	mov    rbx,QWORD PTR [rsp+0x130]
   140cc5989:	add    rsp,0xf0
   140cc5990:	pop    r15
   140cc5992:	pop    r14
   140cc5994:	pop    r13
   140cc5996:	pop    r12
   140cc5998:	pop    rdi
   140cc5999:	pop    rsi
   140cc599a:	pop    rbp
   140cc599b:	ret
