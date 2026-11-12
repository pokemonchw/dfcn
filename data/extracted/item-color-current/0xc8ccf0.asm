
D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe:     file format pei-x86-64


Disassembly of section .text:

0000000140c8ccf0 <.text+0xc8bcf0>:
   140c8ccf0:	rex push rbp
   140c8ccf2:	push   rbx
   140c8ccf3:	push   rsi
   140c8ccf4:	push   rdi
   140c8ccf5:	push   r12
   140c8ccf7:	push   r13
   140c8ccf9:	push   r14
   140c8ccfb:	push   r15
   140c8ccfd:	lea    rbp,[rsp-0x108]
   140c8cd05:	sub    rsp,0x208
   140c8cd0c:	mov    rax,QWORD PTR [rip+0xc3132d]        # 0x1418be040
   140c8cd13:	xor    rax,rsp
   140c8cd16:	mov    QWORD PTR [rbp+0xf0],rax
   140c8cd1d:	movzx  r15d,r9b
   140c8cd21:	mov    BYTE PTR [rsp+0x70],r9b
   140c8cd26:	movzx  r13d,r8b
   140c8cd2a:	mov    BYTE PTR [rsp+0x72],r8b
   140c8cd2f:	mov    rdi,rdx
   140c8cd32:	mov    QWORD PTR [rbp-0x58],rdx
   140c8cd36:	mov    r12,rcx
   140c8cd39:	mov    QWORD PTR [rsp+0x78],rcx
   140c8cd3e:	test   r9b,r9b
   140c8cd41:	jne    0x140c8cd52
   140c8cd43:	lea    rdx,[rip+0xa17bfe]        # 0x1416a4948
   140c8cd4a:	mov    rcx,rdi
   140c8cd4d:	call   0x140070b90
   140c8cd52:	xor    r14b,r14b
   140c8cd55:	mov    rax,QWORD PTR [r12]
   140c8cd59:	mov    rcx,r12
   140c8cd5c:	call   QWORD PTR [rax]
   140c8cd5e:	mov    ebx,0x1
   140c8cd63:	cmp    ax,0x36
   140c8cd67:	jne    0x140c8cd91
   140c8cd69:	mov    rax,QWORD PTR [r12]
   140c8cd6d:	mov    rcx,r12
   140c8cd70:	call   QWORD PTR [rax+0x18]
   140c8cd73:	mov    edx,eax
   140c8cd75:	mov    r8d,0x4
   140c8cd7b:	lea    rcx,[rip+0x1881ff6]        # 0x14250ed78
   140c8cd82:	call   0x14014ef20
   140c8cd87:	movzx  r14d,r14b
   140c8cd8b:	test   al,al
   140c8cd8d:	cmovne r14d,ebx
   140c8cd91:	xor    bl,bl
   140c8cd93:	xor    sil,sil
   140c8cd96:	mov    rax,QWORD PTR [r12]
   140c8cd9a:	mov    rcx,r12
   140c8cd9d:	call   QWORD PTR [rax]
   140c8cd9f:	cmp    ax,0x5
   140c8cda3:	jne    0x140c8cdb9
   140c8cda5:	mov    bl,0x1
   140c8cda7:	test   BYTE PTR [r12+0x10],0x20
   140c8cdad:	movzx  esi,sil
   140c8cdb1:	mov    eax,0x1
   140c8cdb6:	cmove  esi,eax
   140c8cdb9:	mov    rax,QWORD PTR [r12]
   140c8cdbd:	mov    rcx,r12
   140c8cdc0:	call   QWORD PTR [rax]
   140c8cdc2:	cmp    ax,0x3
   140c8cdc6:	je     0x140c8ce40
   140c8cdc8:	mov    rax,QWORD PTR [r12]
   140c8cdcc:	mov    rcx,r12
   140c8cdcf:	call   QWORD PTR [rax]
   140c8cdd1:	cmp    ax,0x1
   140c8cdd5:	je     0x140c8ce40
   140c8cdd7:	mov    rax,QWORD PTR [r12]
   140c8cddb:	mov    rcx,r12
   140c8cdde:	call   QWORD PTR [rax]
   140c8cde0:	cmp    ax,0x2
   140c8cde4:	je     0x140c8ce40
   140c8cde6:	mov    rax,QWORD PTR [r12]
   140c8cdea:	mov    rcx,r12
   140c8cded:	call   QWORD PTR [rax]
   140c8cdef:	cmp    ax,0x3f
   140c8cdf3:	je     0x140c8ce40
   140c8cdf5:	mov    rax,QWORD PTR [r12]
   140c8cdf9:	mov    rcx,r12
   140c8cdfc:	call   QWORD PTR [rax]
   140c8cdfe:	cmp    ax,0x5c
   140c8ce02:	je     0x140c8ce40
   140c8ce04:	mov    rax,QWORD PTR [r12]
   140c8ce08:	mov    rcx,r12
   140c8ce0b:	call   QWORD PTR [rax]
   140c8ce0d:	cmp    ax,0x43
   140c8ce11:	je     0x140c8ce40
   140c8ce13:	mov    rax,QWORD PTR [r12]
   140c8ce17:	mov    rcx,r12
   140c8ce1a:	call   QWORD PTR [rax]
   140c8ce1c:	cmp    ax,0x40
   140c8ce20:	je     0x140c8ce40
   140c8ce22:	mov    rax,QWORD PTR [r12]
   140c8ce26:	mov    rcx,r12
   140c8ce29:	call   QWORD PTR [rax]
   140c8ce2b:	cmp    ax,0x2f
   140c8ce2f:	je     0x140c8ce40
   140c8ce31:	mov    rax,QWORD PTR [r12]
   140c8ce35:	mov    rcx,r12
   140c8ce38:	call   QWORD PTR [rax]
   140c8ce3a:	cmp    ax,0x35
   140c8ce3e:	jne    0x140c8ce45
   140c8ce40:	mov    bl,0x1
   140c8ce42:	movzx  esi,bl
   140c8ce45:	mov    rax,QWORD PTR [r12]
   140c8ce49:	mov    rcx,r12
   140c8ce4c:	call   QWORD PTR [rax]
   140c8ce4e:	cmp    ax,0x39
   140c8ce52:	jne    0x140c8cecf
   140c8ce54:	mov    rax,QWORD PTR [r12]
   140c8ce58:	mov    rcx,r12
   140c8ce5b:	call   QWORD PTR [rax+0x18]
   140c8ce5e:	mov    ebx,eax
   140c8ce60:	mov    rdx,QWORD PTR [r12]
   140c8ce64:	mov    rcx,r12
   140c8ce67:	call   QWORD PTR [rdx+0x10]
   140c8ce6a:	mov    r9d,ebx
   140c8ce6d:	movzx  r8d,ax
   140c8ce71:	mov    edx,0x1e
   140c8ce76:	lea    rcx,[rip+0x1766af3]        # 0x1423f3970
   140c8ce7d:	call   0x141475150
   140c8ce82:	test   al,al
   140c8ce84:	jne    0x140c8ceca
   140c8ce86:	test   DWORD PTR [r12+0x10],0x200
   140c8ce8f:	jne    0x140c8ceca
   140c8ce91:	mov    rax,QWORD PTR [r12]
   140c8ce95:	mov    rcx,r12
   140c8ce98:	call   QWORD PTR [rax+0x18]
   140c8ce9b:	mov    ebx,eax
   140c8ce9d:	mov    rdx,QWORD PTR [r12]
   140c8cea1:	mov    rcx,r12
   140c8cea4:	call   QWORD PTR [rdx+0x10]
   140c8cea7:	mov    r9d,ebx
   140c8ceaa:	movzx  r8d,ax
   140c8ceae:	mov    edx,0x2f
   140c8ceb3:	lea    rcx,[rip+0x1766ab6]        # 0x1423f3970
   140c8ceba:	call   0x141475150
   140c8cebf:	mov    bl,0x1
   140c8cec1:	test   al,al
   140c8cec3:	je     0x140c8cecf
   140c8cec5:	movzx  esi,bl
   140c8cec8:	jmp    0x140c8cecf
   140c8ceca:	xor    bl,bl
   140c8cecc:	xor    sil,sil
   140c8cecf:	mov    rax,QWORD PTR [r12]
   140c8ced3:	mov    rcx,r12
   140c8ced6:	call   QWORD PTR [rax]
   140c8ced8:	cmp    ax,0x3a
   140c8cedc:	je     0x140c8cf29
   140c8cede:	mov    rax,QWORD PTR [r12]
   140c8cee2:	mov    rcx,r12
   140c8cee5:	call   QWORD PTR [rax]
   140c8cee7:	cmp    ax,0x4b
   140c8ceeb:	je     0x140c8cf29
   140c8ceed:	mov    rax,QWORD PTR [r12]
   140c8cef1:	mov    rcx,r12
   140c8cef4:	call   QWORD PTR [rax]
   140c8cef6:	cmp    ax,0x49
   140c8cefa:	je     0x140c8cf29
   140c8cefc:	mov    rax,QWORD PTR [r12]
   140c8cf00:	mov    rcx,r12
   140c8cf03:	call   QWORD PTR [rax]
   140c8cf05:	cmp    ax,0x46
   140c8cf09:	je     0x140c8cf29
   140c8cf0b:	mov    rax,QWORD PTR [r12]
   140c8cf0f:	mov    rcx,r12
   140c8cf12:	call   QWORD PTR [rax]
   140c8cf14:	cmp    ax,0x47
   140c8cf18:	je     0x140c8cf29
   140c8cf1a:	mov    rax,QWORD PTR [r12]
   140c8cf1e:	mov    rcx,r12
   140c8cf21:	call   QWORD PTR [rax]
   140c8cf23:	cmp    ax,0x30
   140c8cf27:	jne    0x140c8cf2b
   140c8cf29:	mov    bl,0x1
   140c8cf2b:	mov    rax,QWORD PTR [r12]
   140c8cf2f:	mov    rcx,r12
   140c8cf32:	call   QWORD PTR [rax]
   140c8cf34:	cmp    ax,0x4
   140c8cf38:	jne    0x140c8cf62
   140c8cf3a:	mov    bl,0x1
   140c8cf3c:	mov    rax,QWORD PTR [r12]
   140c8cf40:	mov    rcx,r12
   140c8cf43:	call   QWORD PTR [rax+0x10]
   140c8cf46:	test   ax,ax
   140c8cf49:	jne    0x140c8cf5f
   140c8cf4b:	mov    rax,QWORD PTR [r12]
   140c8cf4f:	mov    rcx,r12
   140c8cf52:	call   QWORD PTR [rax+0x18]
   140c8cf55:	cmp    eax,0xffffffff
   140c8cf58:	je     0x140c8cf5f
   140c8cf5a:	xor    sil,sil
   140c8cf5d:	jmp    0x140c8cf62
   140c8cf5f:	movzx  esi,bl
   140c8cf62:	mov    rax,QWORD PTR [r12]
   140c8cf66:	mov    rcx,r12
   140c8cf69:	call   QWORD PTR [rax]
   140c8cf6b:	test   ax,ax
   140c8cf6e:	jne    0x140c8cf84
   140c8cf70:	mov    bl,0x1
   140c8cf72:	mov    rax,QWORD PTR [r12]
   140c8cf76:	mov    rcx,r12
   140c8cf79:	call   QWORD PTR [rax+0x10]
   140c8cf7c:	cmp    ax,0x7
   140c8cf80:	setne  sil
   140c8cf84:	mov    rax,QWORD PTR [r12]
   140c8cf88:	mov    rcx,r12
   140c8cf8b:	call   QWORD PTR [rax+0x6c0]
   140c8cf91:	test   al,al
   140c8cf93:	je     0x140c8cfa9
   140c8cf95:	movzx  ebx,bl
   140c8cf98:	cmp    BYTE PTR [r12+0x13a],0x0
   140c8cfa1:	mov    eax,0x1
   140c8cfa6:	cmovne ebx,eax
   140c8cfa9:	mov    rax,QWORD PTR [r12]
   140c8cfad:	mov    rcx,r12
   140c8cfb0:	call   QWORD PTR [rax]
   140c8cfb2:	cmp    ax,0x37
   140c8cfb6:	jne    0x140c8cfc8
   140c8cfb8:	mov    rax,QWORD PTR [r12]
   140c8cfbc:	mov    rcx,r12
   140c8cfbf:	call   QWORD PTR [rax+0x18]
   140c8cfc2:	cmp    eax,0xffffffff
   140c8cfc5:	setne  bl
   140c8cfc8:	mov    rax,QWORD PTR [r12]
   140c8cfcc:	mov    rcx,r12
   140c8cfcf:	call   QWORD PTR [rax+0x478]
   140c8cfd5:	test   r14b,r14b
   140c8cfd8:	jne    0x140c8d08f
   140c8cfde:	mov    rcx,rdi
   140c8cfe1:	cmp    eax,0x1
   140c8cfe4:	jne    0x140c8d049
   140c8cfe6:	lea    rax,[rip+0xa94ad3]        # 0x141721ac0
   140c8cfed:	lea    rdx,[rip+0xa94abc]        # 0x141721ab0
   140c8cff4:	test   sil,sil
   140c8cff7:	cmove  rdx,rax
   140c8cffb:	call   0x140070b90
   140c8d000:	test   bl,bl
   140c8d002:	jne    0x140c8d0df
   140c8d008:	lea    rdx,[rip+0x9d82ed]        # 0x1416652fc
   140c8d00f:	mov    rcx,rdi
   140c8d012:	call   0x140070b90
   140c8d017:	mov    rax,QWORD PTR [r12]
   140c8d01b:	mov    rcx,r12
   140c8d01e:	call   QWORD PTR [rax+0x508]
   140c8d024:	cmp    ax,0x4
   140c8d028:	jne    0x140c8d0df
   140c8d02e:	test   DWORD PTR [r12+0x10],0x40000
   140c8d037:	jne    0x140c8d0df
   140c8d03d:	lea    rdx,[rip+0x9d8310]        # 0x141665354
   140c8d044:	jmp    0x140c8d0d7
   140c8d049:	lea    rdx,[rip+0xa94fe8]        # 0x141722038
   140c8d050:	call   0x140070b90
   140c8d055:	mov    rax,QWORD PTR [r12]
   140c8d059:	mov    rcx,r12
   140c8d05c:	call   QWORD PTR [rax+0x478]
   140c8d062:	cmp    eax,0x1
   140c8d065:	jle    0x140c8d0df
   140c8d067:	lea    rdx,[rip+0x976982]        # 0x1416039f0
   140c8d06e:	mov    rcx,rdi
   140c8d071:	call   0x140070b90
   140c8d076:	mov    rax,QWORD PTR [r12]
   140c8d07a:	mov    rcx,r12
   140c8d07d:	call   QWORD PTR [rax+0x478]
   140c8d083:	mov    ecx,eax
   140c8d085:	mov    rdx,rdi
   140c8d088:	call   0x140545610
   140c8d08d:	jmp    0x140c8d0df
   140c8d08f:	mov    rax,QWORD PTR [r12]
   140c8d093:	mov    rcx,r12
   140c8d096:	call   QWORD PTR [rax+0x478]
   140c8d09c:	cmp    eax,0x1
   140c8d09f:	jle    0x140c8d0d0
   140c8d0a1:	lea    rdx,[rip+0x9a44c8]        # 0x141631570
   140c8d0a8:	mov    rcx,rdi
   140c8d0ab:	call   0x140070b90
   140c8d0b0:	mov    rax,QWORD PTR [r12]
   140c8d0b4:	mov    rcx,r12
   140c8d0b7:	call   QWORD PTR [rax+0x478]
   140c8d0bd:	mov    ecx,eax
   140c8d0bf:	mov    rdx,rdi
   140c8d0c2:	call   0x140545610
   140c8d0c7:	lea    rdx,[rip+0xa94f82]        # 0x141722050
   140c8d0ce:	jmp    0x140c8d0d7
   140c8d0d0:	lea    rdx,[rip+0xa94f89]        # 0x141722060
   140c8d0d7:	mov    rcx,rdi
   140c8d0da:	call   0x140070b90
   140c8d0df:	lea    rcx,[rbp+0x8]
   140c8d0e3:	call   0x140070cc0
   140c8d0e8:	nop
   140c8d0e9:	mov    esi,0xffffffff
   140c8d0ee:	mov    r9d,esi
   140c8d0f1:	mov    r8b,0x1
   140c8d0f4:	lea    rdx,[rbp+0x8]
   140c8d0f8:	mov    rcx,r12
   140c8d0fb:	call   0x140c7d140
   140c8d100:	test   DWORD PTR [r12+0x10],0x8000000
   140c8d109:	jne    0x140c8d1c8
   140c8d10f:	mov    rax,QWORD PTR [r12]
   140c8d113:	mov    rcx,r12
   140c8d116:	call   QWORD PTR [rax]
   140c8d118:	mov    rcx,QWORD PTR [r12]
   140c8d11c:	mov    rdx,QWORD PTR [rcx+0x508]
   140c8d123:	mov    rcx,r12
   140c8d126:	cmp    ax,0x48
   140c8d12a:	jne    0x140c8d177
   140c8d12c:	call   rdx
   140c8d12e:	movsx  ecx,ax
   140c8d131:	sub    ecx,0x1
   140c8d134:	je     0x140c8d16e
   140c8d136:	sub    ecx,0x1
   140c8d139:	je     0x140c8d165
   140c8d13b:	sub    ecx,0x1
   140c8d13e:	je     0x140c8d15c
   140c8d140:	sub    ecx,0x1
   140c8d143:	je     0x140c8d153
   140c8d145:	cmp    ecx,0x1
   140c8d148:	jne    0x140c8d1c8
   140c8d14a:	lea    rdx,[rip+0xa94f7f]        # 0x1417220d0
   140c8d151:	jmp    0x140c8d1c0
   140c8d153:	lea    rdx,[rip+0xa94f5e]        # 0x1417220b8
   140c8d15a:	jmp    0x140c8d1c0
   140c8d15c:	lea    rdx,[rip+0xa94f3d]        # 0x1417220a0
   140c8d163:	jmp    0x140c8d1c0
   140c8d165:	lea    rdx,[rip+0xa94f1c]        # 0x141722088
   140c8d16c:	jmp    0x140c8d1c0
   140c8d16e:	lea    rdx,[rip+0xa94f03]        # 0x141722078
   140c8d175:	jmp    0x140c8d1c0
   140c8d177:	call   rdx
   140c8d179:	movsx  ecx,ax
   140c8d17c:	sub    ecx,0x1
   140c8d17f:	je     0x140c8d1b9
   140c8d181:	sub    ecx,0x1
   140c8d184:	je     0x140c8d1b0
   140c8d186:	sub    ecx,0x1
   140c8d189:	je     0x140c8d1a7
   140c8d18b:	sub    ecx,0x1
   140c8d18e:	je     0x140c8d19e
   140c8d190:	cmp    ecx,0x1
   140c8d193:	jne    0x140c8d1c8
   140c8d195:	lea    rdx,[rip+0xa94f74]        # 0x141722110
   140c8d19c:	jmp    0x140c8d1c0
   140c8d19e:	lea    rdx,[rip+0xa94f5b]        # 0x141722100
   140c8d1a5:	jmp    0x140c8d1c0
   140c8d1a7:	lea    rdx,[rip+0xa94f3a]        # 0x1417220e8
   140c8d1ae:	jmp    0x140c8d1c0
   140c8d1b0:	lea    rdx,[rip+0x9f9bb1]        # 0x141686d68
   140c8d1b7:	jmp    0x140c8d1c0
   140c8d1b9:	lea    rdx,[rip+0x9f9bb8]        # 0x141686d78
   140c8d1c0:	mov    rcx,rdi
   140c8d1c3:	call   0x140070b90
   140c8d1c8:	lea    rdx,[rip+0x976821]        # 0x1416039f0
   140c8d1cf:	mov    rcx,rdi
   140c8d1d2:	call   0x140070b90
   140c8d1d7:	lea    rdx,[rbp+0x8]
   140c8d1db:	mov    rcx,rdi
   140c8d1de:	call   0x1400bb340
   140c8d1e3:	test   DWORD PTR [r12+0x10],0x8000000
   140c8d1ec:	jne    0x140c8d35a
   140c8d1f2:	mov    rax,QWORD PTR [r12]
   140c8d1f6:	mov    rcx,r12
   140c8d1f9:	call   QWORD PTR [rax+0x508]
   140c8d1ff:	cmp    ax,0x5
   140c8d203:	jne    0x140c8d35a
   140c8d209:	mov    rax,QWORD PTR [r12]
   140c8d20d:	mov    rcx,r12
   140c8d210:	call   QWORD PTR [rax+0x1e8]
   140c8d216:	mov    edx,eax
   140c8d218:	lea    rcx,[rip+0x188ef19]        # 0x14251c138
   140c8d21f:	call   0x1400693f0
   140c8d224:	mov    rbx,rax
   140c8d227:	mov    rcx,rdi
   140c8d22a:	test   rax,rax
   140c8d22d:	je     0x140c8d34e
   140c8d233:	lea    rdx,[rip+0xa70a96]        # 0x1416fdcd0
   140c8d23a:	call   0x140070b90
   140c8d23f:	mov    r14d,DWORD PTR [rbp+0x178]
   140c8d246:	mov    esi,r14d
   140c8d249:	and    esi,0x2
   140c8d24c:	je     0x140c8d27a
   140c8d24e:	lea    rdx,[rip+0x98c6b3]        # 0x141619908
   140c8d255:	mov    rcx,rdi
   140c8d258:	call   0x140070b90
   140c8d25d:	mov    rdx,rdi
   140c8d260:	mov    ecx,DWORD PTR [rbx+0xe0]
   140c8d266:	call   0x140545610
   140c8d26b:	lea    rdx,[rip+0x98c196]        # 0x141619408
   140c8d272:	mov    rcx,rdi
   140c8d275:	call   0x140070b90
   140c8d27a:	mov    rcx,rbx
   140c8d27d:	call   0x140c27320
   140c8d282:	test   rax,rax
   140c8d285:	je     0x140c8d299
   140c8d287:	cmp    BYTE PTR [rax+0x72],0x0
   140c8d28b:	je     0x140c8d299
   140c8d28d:	lea    rdx,[rbp+0x8]
   140c8d291:	mov    rcx,rax
   140c8d294:	call   0x140aadad0
   140c8d299:	lea    rdx,[rbp+0x8]
   140c8d29d:	mov    rcx,rdi
   140c8d2a0:	call   0x1400bb340
   140c8d2a5:	test   esi,esi
   140c8d2a7:	je     0x140c8d2b8
   140c8d2a9:	lea    rdx,[rip+0x98c668]        # 0x141619918
   140c8d2b0:	mov    rcx,rdi
   140c8d2b3:	call   0x140070b90
   140c8d2b8:	mov    esi,0xffffffff
   140c8d2bd:	lea    rdx,[rip+0x98c2d4]        # 0x141619598
   140c8d2c4:	mov    rcx,rdi
   140c8d2c7:	call   0x140070b90
   140c8d2cc:	mov    ebx,0x19
   140c8d2d1:	test   DWORD PTR [r12+0x10],0x8000000
   140c8d2da:	je     0x140c8d39b
   140c8d2e0:	lea    rdx,[rip+0xa94e59]        # 0x141722140
   140c8d2e7:	mov    rcx,rdi
   140c8d2ea:	call   0x140070b90
   140c8d2ef:	lea    rcx,[rbp-0x38]
   140c8d2f3:	call   0x140070cc0
   140c8d2f8:	nop
   140c8d2f9:	mov    rax,QWORD PTR [r12]
   140c8d2fd:	mov    rcx,r12
   140c8d300:	call   QWORD PTR [rax+0x590]
   140c8d306:	movzx  edx,ax
   140c8d309:	movzx  r8d,bx
   140c8d30d:	lea    rcx,[rip+0x1881bb4]        # 0x14250eec8
   140c8d314:	call   0x1401bdae0
   140c8d319:	test   al,al
   140c8d31b:	je     0x140c8d366
   140c8d31d:	mov    rax,QWORD PTR [r12]
   140c8d321:	mov    rcx,r12
   140c8d324:	call   QWORD PTR [rax+0x590]
   140c8d32a:	movzx  r8d,ax
   140c8d32e:	mov    BYTE PTR [rsp+0x28],0x0
   140c8d333:	mov    BYTE PTR [rsp+0x20],0x0
   140c8d338:	movzx  r9d,bx
   140c8d33c:	lea    rdx,[rbp-0x38]
   140c8d340:	lea    rcx,[rip+0x1881b81]        # 0x14250eec8
   140c8d347:	call   0x1401bdb30
   140c8d34c:	jmp    0x140c8d376
   140c8d34e:	lea    rdx,[rip+0xa94dcb]        # 0x141722120
   140c8d355:	call   0x140070b90
   140c8d35a:	mov    r14d,DWORD PTR [rbp+0x178]
   140c8d361:	jmp    0x140c8d2bd
   140c8d366:	lea    rdx,[rip+0x9b916b]        # 0x1416464d8
   140c8d36d:	lea    rcx,[rbp-0x38]
   140c8d371:	call   0x140070bb0
   140c8d376:	lea    rdx,[rbp-0x38]
   140c8d37a:	mov    rcx,rdi
   140c8d37d:	call   0x1400bb340
   140c8d382:	lea    rdx,[rip+0xa94dbf]        # 0x141722148
   140c8d389:	mov    rcx,rdi
   140c8d38c:	call   0x140070b90
   140c8d391:	nop
   140c8d392:	lea    rcx,[rbp-0x38]
   140c8d396:	call   0x140069460
   140c8d39b:	mov    rax,QWORD PTR [r12]
   140c8d39f:	mov    rcx,r12
   140c8d3a2:	call   QWORD PTR [rax]
   140c8d3a4:	movsx  ecx,ax
   140c8d3a7:	sub    ecx,0x19
   140c8d3aa:	je     0x140c8d3c0
   140c8d3ac:	sub    ecx,0x1
   140c8d3af:	je     0x140c8d3c0
   140c8d3b1:	sub    ecx,0x2
   140c8d3b4:	je     0x140c8d3c0
   140c8d3b6:	sub    ecx,0x1
   140c8d3b9:	je     0x140c8d3c0
   140c8d3bb:	cmp    ecx,0x1f
   140c8d3be:	jne    0x140c8d439
   140c8d3c0:	mov    rax,QWORD PTR [r12]
   140c8d3c4:	mov    rcx,r12
   140c8d3c7:	call   QWORD PTR [rax+0x590]
   140c8d3cd:	movzx  ebx,ax
   140c8d3d0:	lea    rdx,[rbp-0x70]
   140c8d3d4:	lea    rcx,[rbp-0x78]
   140c8d3d8:	call   0x140ae67e0
   140c8d3dd:	cmp    bx,0xffff
   140c8d3e1:	je     0x140c8d439
   140c8d3e3:	cmp    bx,WORD PTR [rbp-0x78]
   140c8d3e7:	je     0x140c8d439
   140c8d3e9:	lea    rdx,[rip+0xa94d80]        # 0x141722170
   140c8d3f0:	mov    rcx,rdi
   140c8d3f3:	call   0x140070b90
   140c8d3f8:	lea    rcx,[rbp-0x18]
   140c8d3fc:	call   0x140070cc0
   140c8d401:	nop
   140c8d402:	mov    r9d,esi
   140c8d405:	mov    r8b,0x1
   140c8d408:	lea    rdx,[rbp-0x18]
   140c8d40c:	movzx  ecx,bx
   140c8d40f:	call   0x140abd670
   140c8d414:	lea    rdx,[rbp-0x18]
   140c8d418:	mov    rcx,rdi
   140c8d41b:	call   0x1400bb340
   140c8d420:	lea    rdx,[rip+0x98c171]        # 0x141619598
   140c8d427:	mov    rcx,rdi
   140c8d42a:	call   0x140070b90
   140c8d42f:	nop
   140c8d430:	lea    rcx,[rbp-0x18]
   140c8d434:	call   0x140069460
   140c8d439:	mov    rax,QWORD PTR [r12]
   140c8d43d:	lea    r8,[rbp-0x40]
   140c8d441:	lea    rdx,[rbp-0x50]
   140c8d445:	mov    rcx,r12
   140c8d448:	call   QWORD PTR [rax+0x230]
   140c8d44e:	mov    rdx,QWORD PTR [rbp-0x50]
   140c8d452:	test   rdx,rdx
   140c8d455:	je     0x140c8d554
   140c8d45b:	cmp    DWORD PTR [rdx],0xffffffff
   140c8d45e:	jne    0x140c8d496
   140c8d460:	mov    r9d,esi
   140c8d463:	mov    r8d,esi
   140c8d466:	mov    edx,esi
   140c8d468:	mov    rcx,r12
   140c8d46b:	call   0x140ce01c0
   140c8d470:	cmp    DWORD PTR [r12+0x50],0xffffffff
   140c8d476:	je     0x140c8d480
   140c8d478:	mov    rcx,r12
   140c8d47b:	call   0x140ce00d0
   140c8d480:	and    DWORD PTR [r12+0x10],0x7fffffff
   140c8d489:	mov    rdx,QWORD PTR [rbp-0x50]
   140c8d48d:	cmp    DWORD PTR [rdx],0xffffffff
   140c8d490:	je     0x140c8d554
   140c8d496:	mov    r8,QWORD PTR [rbp-0x40]
   140c8d49a:	lea    rcx,[rip+0x17664cf]        # 0x1423f3970
   140c8d4a1:	call   0x14146c4a0
   140c8d4a6:	mov    rbx,rax
   140c8d4a9:	test   rax,rax
   140c8d4ac:	je     0x140c8d554
   140c8d4b2:	lea    rcx,[rbp-0x38]
   140c8d4b6:	call   0x140070cc0
   140c8d4bb:	nop
   140c8d4bc:	mov    ecx,r14d
   140c8d4bf:	shr    ecx,1
   140c8d4c1:	and    cl,0x1
   140c8d4c4:	mov    BYTE PTR [rsp+0x50],cl
   140c8d4c8:	mov    BYTE PTR [rsp+0x48],r15b
   140c8d4cd:	mov    DWORD PTR [rsp+0x40],esi
   140c8d4d1:	mov    WORD PTR [rsp+0x38],si
   140c8d4d6:	mov    DWORD PTR [rsp+0x30],0x4
   140c8d4de:	mov    BYTE PTR [rsp+0x28],r13b
   140c8d4e3:	mov    BYTE PTR [rsp+0x20],0x0
   140c8d4e8:	xor    r9d,r9d
   140c8d4eb:	lea    r8,[rbp-0x38]
   140c8d4ef:	mov    rdx,rbx
   140c8d4f2:	lea    rcx,[rip+0x1766477]        # 0x1423f3970
   140c8d4f9:	call   0x14146ad80
   140c8d4fe:	lea    rcx,[rbp-0x38]
   140c8d502:	call   0x140070960
   140c8d507:	cmp    rax,0x50
   140c8d50b:	jb     0x140c8d53e
   140c8d50d:	test   r15b,r15b
   140c8d510:	jne    0x140c8d53e
   140c8d512:	lea    rdx,[rip+0x9cefc3]        # 0x14165c4dc
   140c8d519:	mov    rcx,rdi
   140c8d51c:	call   0x140070b90
   140c8d521:	lea    rdx,[rbp-0x38]
   140c8d525:	mov    rcx,rdi
   140c8d528:	call   0x1400bb340
   140c8d52d:	lea    rdx,[rip+0x9cefa8]        # 0x14165c4dc
   140c8d534:	mov    rcx,rdi
   140c8d537:	call   0x140070b90
   140c8d53c:	jmp    0x140c8d54b
   140c8d53e:	lea    rdx,[rbp-0x38]
   140c8d542:	mov    rcx,rdi
   140c8d545:	call   0x1400bb340
   140c8d54a:	nop
   140c8d54b:	lea    rcx,[rbp-0x38]
   140c8d54f:	call   0x140069460
   140c8d554:	mov    rax,QWORD PTR [r12]
   140c8d558:	mov    rcx,r12
   140c8d55b:	call   QWORD PTR [rax]
   140c8d55d:	xor    ebx,ebx
   140c8d55f:	cmp    ax,0x48
   140c8d563:	jne    0x140c8d7c0
   140c8d569:	lea    rdx,[rip+0xa94c18]        # 0x141722188
   140c8d570:	mov    rcx,rdi
   140c8d573:	call   0x140070b90
   140c8d578:	lea    r13,[r12+0xe0]
   140c8d580:	mov    rcx,r13
   140c8d583:	call   0x140070480
   140c8d588:	mov    r15,rax
   140c8d58b:	sub    r15d,0x1
   140c8d58f:	js     0x140c8fd55
   140c8d595:	lea    rbx,[rip+0xa94c44]        # 0x1417221e0
   140c8d59c:	nop    DWORD PTR [rax+0x0]
   140c8d5a0:	movsxd r12,r15d
   140c8d5a3:	mov    rdx,r12
   140c8d5a6:	mov    rcx,r13
   140c8d5a9:	call   0x140070850
   140c8d5ae:	mov    rcx,QWORD PTR [rax]
   140c8d5b1:	movsx  edx,WORD PTR [rcx+0x10]
   140c8d5b5:	sub    edx,0x1
   140c8d5b8:	je     0x140c8d5f2
   140c8d5ba:	sub    edx,0x1
   140c8d5bd:	je     0x140c8d5e9
   140c8d5bf:	sub    edx,0x1
   140c8d5c2:	je     0x140c8d5e0
   140c8d5c4:	sub    edx,0x1
   140c8d5c7:	je     0x140c8d5d7
   140c8d5c9:	cmp    edx,0x1
   140c8d5cc:	jne    0x140c8d601
   140c8d5ce:	lea    rdx,[rip+0xa94bfb]        # 0x1417221d0
   140c8d5d5:	jmp    0x140c8d5f9
   140c8d5d7:	lea    rdx,[rip+0xa94be2]        # 0x1417221c0
   140c8d5de:	jmp    0x140c8d5f9
   140c8d5e0:	lea    rdx,[rip+0xa94bc9]        # 0x1417221b0
   140c8d5e7:	jmp    0x140c8d5f9
   140c8d5e9:	lea    rdx,[rip+0xa94bb8]        # 0x1417221a8
   140c8d5f0:	jmp    0x140c8d5f9
   140c8d5f2:	lea    rdx,[rip+0xa94ba7]        # 0x1417221a0
   140c8d5f9:	mov    rcx,rdi
   140c8d5fc:	call   0x140070b90
   140c8d601:	mov    rdx,r12
   140c8d604:	mov    rcx,r13
   140c8d607:	call   0x140070850
   140c8d60c:	mov    rcx,QWORD PTR [rax]
   140c8d60f:	lea    rdx,[rip+0xa94bd2]        # 0x1417221e8
   140c8d616:	cmp    WORD PTR [rcx],0x0
   140c8d61a:	cmove  rdx,rbx
   140c8d61e:	mov    rcx,rdi
   140c8d621:	call   0x140070b90
   140c8d626:	mov    rdx,r12
   140c8d629:	mov    rcx,r13
   140c8d62c:	call   0x140070850
   140c8d631:	mov    rcx,QWORD PTR [rax]
   140c8d634:	mov    r14d,DWORD PTR [rcx+0x8]
   140c8d638:	mov    rdx,r12
   140c8d63b:	mov    rcx,r13
   140c8d63e:	call   0x140070850
   140c8d643:	mov    rcx,QWORD PTR [rax]
   140c8d646:	movzx  esi,WORD PTR [rcx+0x6]
   140c8d64a:	mov    rdx,r12
   140c8d64d:	mov    rcx,r13
   140c8d650:	call   0x140070850
   140c8d655:	mov    rcx,QWORD PTR [rax]
   140c8d658:	movzx  ebx,WORD PTR [rcx+0x4]
   140c8d65c:	mov    rdx,r12
   140c8d65f:	mov    rcx,r13
   140c8d662:	call   0x140070850
   140c8d667:	mov    rcx,QWORD PTR [rax]
   140c8d66a:	xor    eax,eax
   140c8d66c:	mov    DWORD PTR [rsp+0x68],eax
   140c8d670:	mov    DWORD PTR [rsp+0x60],eax
   140c8d674:	mov    BYTE PTR [rsp+0x58],0x1
   140c8d679:	mov    DWORD PTR [rsp+0x50],0xffffffff
   140c8d681:	mov    DWORD PTR [rsp+0x48],0xffffffff
   140c8d689:	mov    QWORD PTR [rsp+0x40],rax
   140c8d68e:	mov    BYTE PTR [rsp+0x38],al
   140c8d692:	mov    DWORD PTR [rsp+0x30],eax
   140c8d696:	mov    DWORD PTR [rsp+0x28],0x1
   140c8d69e:	mov    DWORD PTR [rsp+0x20],r14d
   140c8d6a3:	movzx  r9d,si
   140c8d6a7:	movzx  r8d,bx
   140c8d6ab:	movzx  edx,WORD PTR [rcx+0x2]
   140c8d6af:	lea    rcx,[rbp+0x8]
   140c8d6b3:	call   0x140a9c6b0
   140c8d6b8:	lea    rdx,[rbp+0x8]
   140c8d6bc:	mov    rcx,rdi
   140c8d6bf:	call   0x1400bb340
   140c8d6c4:	cmp    r15d,0x2
   140c8d6c8:	jl     0x140c8d6d3
   140c8d6ca:	lea    rdx,[rip+0x976cc3]        # 0x141604394
   140c8d6d1:	jmp    0x140c8d6f7
   140c8d6d3:	cmp    r15d,0x1
   140c8d6d7:	jne    0x140c8d6f0
   140c8d6d9:	lea    rdx,[rip+0x976cac]        # 0x14160438c
   140c8d6e0:	mov    rcx,rdi
   140c8d6e3:	call   0x140070b90
   140c8d6e8:	dec    r15d
   140c8d6eb:	jmp    0x140c8d595
   140c8d6f0:	lea    rdx,[rip+0x98bea1]        # 0x141619598
   140c8d6f7:	mov    rcx,rdi
   140c8d6fa:	call   0x140070b90
   140c8d6ff:	sub    r15d,0x1
   140c8d703:	lea    rbx,[rip+0xa94ad6]        # 0x1417221e0
   140c8d70a:	jns    0x140c8d5a0
   140c8d710:	mov    r12,QWORD PTR [rsp+0x78]
   140c8d715:	movzx  esi,BYTE PTR [rsp+0x70]
   140c8d71a:	xor    ebx,ebx
   140c8d71c:	mov    rax,QWORD PTR [r12]
   140c8d720:	mov    rcx,r12
   140c8d723:	call   QWORD PTR [rax]
   140c8d725:	cmp    ax,0x59
   140c8d729:	jne    0x140c8ff5c
   140c8d72f:	mov    r12d,ebx
   140c8d732:	mov    r13,QWORD PTR [rsp+0x78]
   140c8d737:	mov    rcx,QWORD PTR [r13+0xd0]
   140c8d73e:	mov    rax,QWORD PTR [r13+0xd8]
   140c8d745:	sub    rax,rcx
   140c8d748:	sar    rax,0x3
   140c8d74c:	test   rax,rax
   140c8d74f:	je     0x140c8ff59
   140c8d755:	xor    eax,eax
   140c8d757:	mov    r15d,eax
   140c8d75a:	nop    WORD PTR [rax+rax*1+0x0]
   140c8d760:	mov    rcx,QWORD PTR [r15+rcx*1]
   140c8d764:	mov    rax,QWORD PTR [rcx]
   140c8d767:	call   QWORD PTR [rax+0x28]
   140c8d76a:	cmp    eax,0x9
   140c8d76d:	jne    0x140c8ff31
   140c8d773:	mov    rdx,rbx
   140c8d776:	lea    rcx,[r13+0xd0]
   140c8d77d:	call   0x140070850
   140c8d782:	mov    rsi,QWORD PTR [rax]
   140c8d785:	lea    rcx,[rsi+0x30]
   140c8d789:	call   0x1400709a0
   140c8d78e:	test   rax,rax
   140c8d791:	jne    0x140c8fd8e
   140c8d797:	movzx  esi,BYTE PTR [rsp+0x70]
   140c8d79c:	mov    rcx,rdi
   140c8d79f:	test   sil,sil
   140c8d7a2:	jne    0x140c8fd5f
   140c8d7a8:	lea    rdx,[rip+0x9ced2d]        # 0x14165c4dc
   140c8d7af:	call   0x140070b90
   140c8d7b4:	lea    rdx,[rip+0x97722d]        # 0x1416049e8
   140c8d7bb:	jmp    0x140c8fec7
   140c8d7c0:	mov    rax,QWORD PTR [r12]
   140c8d7c4:	mov    rcx,r12
   140c8d7c7:	call   QWORD PTR [rax+0x5a8]
   140c8d7cd:	test   al,al
   140c8d7cf:	je     0x140c8fd55
   140c8d7d5:	mov    BYTE PTR [rbp-0x60],bl
   140c8d7d8:	xorps  xmm0,xmm0
   140c8d7db:	xor    eax,eax
   140c8d7dd:	movups XMMWORD PTR [rbp+0x70],xmm0
   140c8d7e1:	movups XMMWORD PTR [rbp+0x80],xmm0
   140c8d7e8:	movups XMMWORD PTR [rbp+0x90],xmm0
   140c8d7ef:	movups XMMWORD PTR [rbp+0xa0],xmm0
   140c8d7f6:	movups XMMWORD PTR [rbp+0xb0],xmm0
   140c8d7fd:	movups XMMWORD PTR [rbp+0xc0],xmm0
   140c8d804:	movups XMMWORD PTR [rbp+0xd0],xmm0
   140c8d80b:	mov    QWORD PTR [rbp+0xe0],rax
   140c8d812:	lea    r13,[r12+0xd0]
   140c8d81a:	mov    rcx,r13
   140c8d81d:	call   0x140070480
   140c8d822:	movzx  r12d,WORD PTR [rbp+0x7e]
   140c8d827:	movzx  esi,WORD PTR [rbp+0x7c]
   140c8d82b:	movzx  r14d,WORD PTR [rbp+0x7a]
   140c8d830:	movzx  r15d,WORD PTR [rbp+0x78]
   140c8d835:	test   rax,rax
   140c8d838:	je     0x140c8d943
   140c8d83e:	mov    edi,ebx
   140c8d840:	mov    rdx,rbx
   140c8d843:	mov    rcx,r13
   140c8d846:	call   0x140070850
   140c8d84b:	mov    rcx,QWORD PTR [rax]
   140c8d84e:	mov    rax,QWORD PTR [rcx]
   140c8d851:	call   QWORD PTR [rax+0x28]
   140c8d854:	mov    rdx,rbx
   140c8d857:	mov    rcx,r13
   140c8d85a:	cmp    eax,0x1
   140c8d85d:	jne    0x140c8d8fe
   140c8d863:	call   0x140070850
   140c8d868:	mov    rbx,QWORD PTR [rax]
   140c8d86b:	test   BYTE PTR [rbx+0x28],0x1
   140c8d86f:	je     0x140c8d87f
   140c8d871:	inc    r12w
   140c8d875:	mov    WORD PTR [rbp+0x7e],r12w
   140c8d87a:	jmp    0x140c8d927
   140c8d87f:	movzx  r8d,WORD PTR [rbx+0x8]
   140c8d884:	test   r8w,r8w
   140c8d888:	jne    0x140c8d8f5
   140c8d88a:	mov    r9d,DWORD PTR [rbx+0xc]
   140c8d88e:	mov    edx,0x2f
   140c8d893:	lea    rcx,[rip+0x17660d6]        # 0x1423f3970
   140c8d89a:	call   0x141475150
   140c8d89f:	test   al,al
   140c8d8a1:	je     0x140c8d8ae
   140c8d8a3:	inc    r14w
   140c8d8a7:	mov    WORD PTR [rbp+0x7a],r14w
   140c8d8ac:	jmp    0x140c8d927
   140c8d8ae:	mov    r9d,DWORD PTR [rbx+0xc]
   140c8d8b2:	movzx  r8d,WORD PTR [rbx+0x8]
   140c8d8b7:	mov    edx,0x1e
   140c8d8bc:	lea    rcx,[rip+0x17660ad]        # 0x1423f3970
   140c8d8c3:	call   0x141475150
   140c8d8c8:	test   al,al
   140c8d8ca:	jne    0x140c8d8f5
   140c8d8cc:	mov    r9d,DWORD PTR [rbx+0xc]
   140c8d8d0:	movzx  r8d,WORD PTR [rbx+0x8]
   140c8d8d5:	mov    edx,0x3e
   140c8d8da:	lea    rcx,[rip+0x176608f]        # 0x1423f3970
   140c8d8e1:	call   0x141475150
   140c8d8e6:	test   al,al
   140c8d8e8:	jne    0x140c8d8f5
   140c8d8ea:	inc    r15w
   140c8d8ee:	mov    WORD PTR [rbp+0x78],r15w
   140c8d8f3:	jmp    0x140c8d927
   140c8d8f5:	inc    si
   140c8d8f8:	mov    WORD PTR [rbp+0x7c],si
   140c8d8fc:	jmp    0x140c8d927
   140c8d8fe:	call   0x140070850
   140c8d903:	mov    rcx,QWORD PTR [rax]
   140c8d906:	mov    rax,QWORD PTR [rcx]
   140c8d909:	call   QWORD PTR [rax+0x28]
   140c8d90c:	movsxd rcx,eax
   140c8d90f:	inc    WORD PTR [rbp+rcx*8+0x70]
   140c8d914:	movzx  r12d,WORD PTR [rbp+0x7e]
   140c8d919:	movzx  esi,WORD PTR [rbp+0x7c]
   140c8d91d:	movzx  r14d,WORD PTR [rbp+0x7a]
   140c8d922:	movzx  r15d,WORD PTR [rbp+0x78]
   140c8d927:	inc    edi
   140c8d929:	movsxd rbx,edi
   140c8d92c:	mov    rcx,r13
   140c8d92f:	call   0x140070480
   140c8d934:	cmp    rbx,rax
   140c8d937:	jb     0x140c8d840
   140c8d93d:	mov    rdi,QWORD PTR [rbp-0x58]
   140c8d941:	xor    ebx,ebx
   140c8d943:	movzx  eax,WORD PTR [rbp+0x88]
   140c8d94a:	test   r15w,r15w
   140c8d94e:	jg     0x140c8d96a
   140c8d950:	test   r14w,r14w
   140c8d954:	jg     0x140c8d96a
   140c8d956:	test   si,si
   140c8d959:	jg     0x140c8d96a
   140c8d95b:	test   r12w,r12w
   140c8d95f:	jg     0x140c8d96a
   140c8d961:	test   ax,ax
   140c8d964:	jle    0x140c8e2bb
   140c8d96a:	mov    ecx,ebx
   140c8d96c:	test   r15w,r15w
   140c8d970:	mov    edx,0x1
   140c8d975:	cmovg  ecx,edx
   140c8d978:	mov    DWORD PTR [rbp-0x80],ecx
   140c8d97b:	test   r14w,r14w
   140c8d97f:	jle    0x140c8d986
   140c8d981:	inc    ecx
   140c8d983:	mov    DWORD PTR [rbp-0x80],ecx
   140c8d986:	test   si,si
   140c8d989:	mov    esi,DWORD PTR [rbp-0x80]
   140c8d98c:	jle    0x140c8d993
   140c8d98e:	inc    esi
   140c8d990:	mov    DWORD PTR [rbp-0x80],esi
   140c8d993:	test   r12w,r12w
   140c8d997:	jle    0x140c8d99e
   140c8d999:	inc    esi
   140c8d99b:	mov    DWORD PTR [rbp-0x80],esi
   140c8d99e:	test   ax,ax
   140c8d9a1:	jle    0x140c8d9a8
   140c8d9a3:	inc    esi
   140c8d9a5:	mov    DWORD PTR [rbp-0x80],esi
   140c8d9a8:	mov    BYTE PTR [rsp+0x71],dl
   140c8d9ac:	xor    r14d,r14d
   140c8d9af:	mov    r13d,r14d
   140c8d9b2:	mov    r12,QWORD PTR [rsp+0x78]
   140c8d9b7:	lea    r15,[r12+0xd0]
   140c8d9bf:	lea    rbx,[rbp+0x78]
   140c8d9c3:	mov    QWORD PTR [rbp-0x68],rbx
   140c8d9c7:	nop    WORD PTR [rax+rax*1+0x0]
   140c8d9d0:	movzx  eax,WORD PTR [rbx]
   140c8d9d3:	mov    WORD PTR [rbp-0x78],ax
   140c8d9d7:	test   ax,ax
   140c8d9da:	jle    0x140c8dfb4
   140c8d9e0:	test   dl,dl
   140c8d9e2:	je     0x140c8d9f8
   140c8d9e4:	lea    rdx,[rip+0xa94805]        # 0x1417221f0
   140c8d9eb:	mov    rcx,rdi
   140c8d9ee:	call   0x140070b90
   140c8d9f3:	mov    BYTE PTR [rsp+0x71],0x0
   140c8d9f8:	mov    ecx,r13d
   140c8d9fb:	test   r13d,r13d
   140c8d9fe:	je     0x140c8da2a
   140c8da00:	sub    ecx,0x1
   140c8da03:	je     0x140c8da21
   140c8da05:	sub    ecx,0x1
   140c8da08:	je     0x140c8da18
   140c8da0a:	cmp    ecx,0x1
   140c8da0d:	jne    0x140c8da39
   140c8da0f:	lea    rdx,[rip+0xa94812]        # 0x141722228
   140c8da16:	jmp    0x140c8da31
   140c8da18:	lea    rdx,[rip+0xa947f9]        # 0x141722218
   140c8da1f:	jmp    0x140c8da31
   140c8da21:	lea    rdx,[rip+0xa947e0]        # 0x141722208
   140c8da28:	jmp    0x140c8da31
   140c8da2a:	lea    rdx,[rip+0xa947c7]        # 0x1417221f8
   140c8da31:	mov    rcx,rdi
   140c8da34:	call   0x140070b90
   140c8da39:	lea    rdx,[rip+0x975fb0]        # 0x1416039f0
   140c8da40:	mov    rcx,rdi
   140c8da43:	call   0x140070b90
   140c8da48:	mov    DWORD PTR [rbp-0x70],r14d
   140c8da4c:	mov    rcx,r15
   140c8da4f:	call   0x140070480
   140c8da54:	test   rax,rax
   140c8da57:	je     0x140c8df82
   140c8da5d:	mov    rsi,r14
   140c8da60:	mov    rdx,rsi
   140c8da63:	mov    rcx,r15
   140c8da66:	call   0x140070850
   140c8da6b:	mov    rcx,QWORD PTR [rax]
   140c8da6e:	mov    rax,QWORD PTR [rcx]
   140c8da71:	call   QWORD PTR [rax+0x28]
   140c8da74:	cmp    eax,0x1
   140c8da77:	jne    0x140c8df5f
   140c8da7d:	mov    rdx,rsi
   140c8da80:	mov    rcx,r15
   140c8da83:	call   0x140070850
   140c8da88:	mov    r14,QWORD PTR [rax]
   140c8da8b:	test   BYTE PTR [r14+0x28],0x1
   140c8da90:	je     0x140c8da9b
   140c8da92:	cmp    r13d,0x3
   140c8da96:	jmp    0x140c8dcca
   140c8da9b:	cmp    r13d,0x2
   140c8da9f:	ja     0x140c8dcd0
   140c8daa5:	mov    rdx,rsi
   140c8daa8:	mov    rcx,r15
   140c8daab:	call   0x140070850
   140c8dab0:	mov    rcx,QWORD PTR [rax]
   140c8dab3:	cmp    WORD PTR [rcx+0x8],0x0
   140c8dab8:	jne    0x140c8db7f
   140c8dabe:	mov    rdx,rsi
   140c8dac1:	mov    rcx,r15
   140c8dac4:	call   0x140070850
   140c8dac9:	mov    rcx,QWORD PTR [rax]
   140c8dacc:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8dacf:	mov    rdx,rsi
   140c8dad2:	mov    rcx,r15
   140c8dad5:	call   0x140070850
   140c8dada:	mov    rcx,QWORD PTR [rax]
   140c8dadd:	mov    r9d,ebx
   140c8dae0:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8dae5:	mov    edx,0x2f
   140c8daea:	lea    rcx,[rip+0x1765e7f]        # 0x1423f3970
   140c8daf1:	call   0x141475150
   140c8daf6:	test   al,al
   140c8daf8:	jne    0x140c8db7f
   140c8dafe:	mov    rdx,rsi
   140c8db01:	mov    rcx,r15
   140c8db04:	call   0x140070850
   140c8db09:	mov    rcx,QWORD PTR [rax]
   140c8db0c:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8db0f:	mov    rdx,rsi
   140c8db12:	mov    rcx,r15
   140c8db15:	call   0x140070850
   140c8db1a:	mov    rcx,QWORD PTR [rax]
   140c8db1d:	mov    r9d,ebx
   140c8db20:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8db25:	mov    edx,0x1e
   140c8db2a:	lea    rcx,[rip+0x1765e3f]        # 0x1423f3970
   140c8db31:	call   0x141475150
   140c8db36:	test   al,al
   140c8db38:	jne    0x140c8db7f
   140c8db3a:	mov    rdx,rsi
   140c8db3d:	mov    rcx,r15
   140c8db40:	call   0x140070850
   140c8db45:	mov    rcx,QWORD PTR [rax]
   140c8db48:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8db4b:	mov    rdx,rsi
   140c8db4e:	mov    rcx,r15
   140c8db51:	call   0x140070850
   140c8db56:	mov    rcx,QWORD PTR [rax]
   140c8db59:	mov    r9d,ebx
   140c8db5c:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8db61:	mov    edx,0x3e
   140c8db66:	lea    rcx,[rip+0x1765e03]        # 0x1423f3970
   140c8db6d:	call   0x141475150
   140c8db72:	test   al,al
   140c8db74:	jne    0x140c8db7f
   140c8db76:	test   r13d,r13d
   140c8db79:	je     0x140c8dcd0
   140c8db7f:	mov    rdx,rsi
   140c8db82:	mov    rcx,r15
   140c8db85:	call   0x140070850
   140c8db8a:	mov    rcx,QWORD PTR [rax]
   140c8db8d:	cmp    WORD PTR [rcx+0x8],0x0
   140c8db92:	jne    0x140c8dc56
   140c8db98:	mov    rdx,rsi
   140c8db9b:	mov    rcx,r15
   140c8db9e:	call   0x140070850
   140c8dba3:	mov    rcx,QWORD PTR [rax]
   140c8dba6:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8dba9:	mov    rdx,rsi
   140c8dbac:	mov    rcx,r15
   140c8dbaf:	call   0x140070850
   140c8dbb4:	mov    rcx,QWORD PTR [rax]
   140c8dbb7:	mov    r9d,ebx
   140c8dbba:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8dbbf:	mov    edx,0x2f
   140c8dbc4:	lea    rcx,[rip+0x1765da5]        # 0x1423f3970
   140c8dbcb:	call   0x141475150
   140c8dbd0:	test   al,al
   140c8dbd2:	jne    0x140c8dc56
   140c8dbd8:	mov    rdx,rsi
   140c8dbdb:	mov    rcx,r15
   140c8dbde:	call   0x140070850
   140c8dbe3:	mov    rcx,QWORD PTR [rax]
   140c8dbe6:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8dbe9:	mov    rdx,rsi
   140c8dbec:	mov    rcx,r15
   140c8dbef:	call   0x140070850
   140c8dbf4:	mov    rcx,QWORD PTR [rax]
   140c8dbf7:	mov    r9d,ebx
   140c8dbfa:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8dbff:	mov    edx,0x1e
   140c8dc04:	lea    rcx,[rip+0x1765d65]        # 0x1423f3970
   140c8dc0b:	call   0x141475150
   140c8dc10:	test   al,al
   140c8dc12:	jne    0x140c8dc50
   140c8dc14:	mov    rdx,rsi
   140c8dc17:	mov    rcx,r15
   140c8dc1a:	call   0x140070850
   140c8dc1f:	mov    rcx,QWORD PTR [rax]
   140c8dc22:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8dc25:	mov    rdx,rsi
   140c8dc28:	mov    rcx,r15
   140c8dc2b:	call   0x140070850
   140c8dc30:	mov    rcx,QWORD PTR [rax]
   140c8dc33:	mov    r9d,ebx
   140c8dc36:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8dc3b:	mov    edx,0x3e
   140c8dc40:	lea    rcx,[rip+0x1765d29]        # 0x1423f3970
   140c8dc47:	call   0x141475150
   140c8dc4c:	test   al,al
   140c8dc4e:	je     0x140c8dc56
   140c8dc50:	cmp    r13d,0x2
   140c8dc54:	je     0x140c8dcd0
   140c8dc56:	mov    rdx,rsi
   140c8dc59:	mov    rcx,r15
   140c8dc5c:	call   0x140070850
   140c8dc61:	mov    rcx,QWORD PTR [rax]
   140c8dc64:	cmp    WORD PTR [rcx+0x8],0x0
   140c8dc69:	jne    0x140c8dcad
   140c8dc6b:	mov    rdx,rsi
   140c8dc6e:	mov    rcx,r15
   140c8dc71:	call   0x140070850
   140c8dc76:	mov    rcx,QWORD PTR [rax]
   140c8dc79:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8dc7c:	mov    rdx,rsi
   140c8dc7f:	mov    rcx,r15
   140c8dc82:	call   0x140070850
   140c8dc87:	mov    rcx,QWORD PTR [rax]
   140c8dc8a:	mov    r9d,ebx
   140c8dc8d:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8dc92:	mov    edx,0x2f
   140c8dc97:	lea    rcx,[rip+0x1765cd2]        # 0x1423f3970
   140c8dc9e:	call   0x141475150
   140c8dca3:	test   al,al
   140c8dca5:	je     0x140c8dcad
   140c8dca7:	cmp    r13d,0x1
   140c8dcab:	je     0x140c8dcd0
   140c8dcad:	mov    rdx,rsi
   140c8dcb0:	mov    rcx,r15
   140c8dcb3:	call   0x140070850
   140c8dcb8:	mov    rcx,QWORD PTR [rax]
   140c8dcbb:	cmp    WORD PTR [rcx+0x8],0x0
   140c8dcc0:	je     0x140c8df5c
   140c8dcc6:	cmp    r13d,0x2
   140c8dcca:	jne    0x140c8df5c
   140c8dcd0:	test   DWORD PTR [r12+0x10],0x8000000
   140c8dcd9:	jne    0x140c8dd80
   140c8dcdf:	mov    rdx,rsi
   140c8dce2:	mov    rcx,r15
   140c8dce5:	call   0x140070850
   140c8dcea:	mov    rcx,QWORD PTR [rax]
   140c8dced:	movsx  edx,WORD PTR [rcx+0x18]
   140c8dcf1:	cmp    r13d,0x3
   140c8dcf5:	jne    0x140c8dd3d
   140c8dcf7:	sub    edx,0x1
   140c8dcfa:	je     0x140c8dd34
   140c8dcfc:	sub    edx,0x1
   140c8dcff:	je     0x140c8dd2b
   140c8dd01:	sub    edx,0x1
   140c8dd04:	je     0x140c8dd22
   140c8dd06:	sub    edx,0x1
   140c8dd09:	je     0x140c8dd19
   140c8dd0b:	cmp    edx,0x1
   140c8dd0e:	jne    0x140c8dd80
   140c8dd10:	lea    rdx,[rip+0xa94579]        # 0x141722290
   140c8dd17:	jmp    0x140c8dd78
   140c8dd19:	lea    rdx,[rip+0xa94558]        # 0x141722278
   140c8dd20:	jmp    0x140c8dd78
   140c8dd22:	lea    rdx,[rip+0xa94537]        # 0x141722260
   140c8dd29:	jmp    0x140c8dd78
   140c8dd2b:	lea    rdx,[rip+0xa94516]        # 0x141722248
   140c8dd32:	jmp    0x140c8dd78
   140c8dd34:	lea    rdx,[rip+0xa944fd]        # 0x141722238
   140c8dd3b:	jmp    0x140c8dd78
   140c8dd3d:	sub    edx,0x1
   140c8dd40:	je     0x140c8dd71
   140c8dd42:	sub    edx,0x1
   140c8dd45:	je     0x140c8dd68
   140c8dd47:	sub    edx,0x1
   140c8dd4a:	je     0x140c8dd22
   140c8dd4c:	sub    edx,0x1
   140c8dd4f:	je     0x140c8dd5f
   140c8dd51:	cmp    edx,0x1
   140c8dd54:	jne    0x140c8dd80
   140c8dd56:	lea    rdx,[rip+0xa94583]        # 0x1417222e0
   140c8dd5d:	jmp    0x140c8dd78
   140c8dd5f:	lea    rdx,[rip+0xa94562]        # 0x1417222c8
   140c8dd66:	jmp    0x140c8dd78
   140c8dd68:	lea    rdx,[rip+0xa94549]        # 0x1417222b8
   140c8dd6f:	jmp    0x140c8dd78
   140c8dd71:	lea    rdx,[rip+0xa94530]        # 0x1417222a8
   140c8dd78:	mov    rcx,rdi
   140c8dd7b:	call   0x140070b90
   140c8dd80:	lea    rcx,[rbp-0x38]
   140c8dd84:	call   0x140070cc0
   140c8dd89:	nop
   140c8dd8a:	mov    r14d,DWORD PTR [r14+0x2c]
   140c8dd8e:	cmp    r14d,0xffffffff
   140c8dd92:	je     0x140c8dde7
   140c8dd94:	mov    rdx,rsi
   140c8dd97:	mov    rcx,r15
   140c8dd9a:	call   0x140070850
   140c8dd9f:	mov    rcx,QWORD PTR [rax]
   140c8dda2:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8dda5:	mov    rdx,rsi
   140c8dda8:	mov    rcx,r15
   140c8ddab:	call   0x140070850
   140c8ddb0:	mov    rcx,QWORD PTR [rax]
   140c8ddb3:	xor    eax,eax
   140c8ddb5:	mov    DWORD PTR [rsp+0x30],eax
   140c8ddb9:	mov    DWORD PTR [rsp+0x28],0xffffffff
   140c8ddc1:	mov    DWORD PTR [rsp+0x20],r14d
   140c8ddc6:	mov    r9d,ebx
   140c8ddc9:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8ddce:	lea    rdx,[rbp-0x38]
   140c8ddd2:	lea    rcx,[rip+0x1765b97]        # 0x1423f3970
   140c8ddd9:	call   0x1414fb130
   140c8ddde:	test   al,al
   140c8dde0:	je     0x140c8dde7
   140c8dde2:	xor    r14d,r14d
   140c8dde5:	jmp    0x140c8de31
   140c8dde7:	mov    rdx,rsi
   140c8ddea:	mov    rcx,r15
   140c8dded:	call   0x140070850
   140c8ddf2:	mov    rcx,QWORD PTR [rax]
   140c8ddf5:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8ddf8:	mov    rdx,rsi
   140c8ddfb:	mov    rcx,r15
   140c8ddfe:	call   0x140070850
   140c8de03:	mov    rcx,QWORD PTR [rax]
   140c8de06:	xor    r14d,r14d
   140c8de09:	mov    WORD PTR [rsp+0x30],r14w
   140c8de0f:	mov    BYTE PTR [rsp+0x28],r14b
   140c8de14:	mov    DWORD PTR [rsp+0x20],r14d
   140c8de19:	mov    r9d,ebx
   140c8de1c:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8de21:	lea    rdx,[rbp-0x38]
   140c8de25:	lea    rcx,[rip+0x1765b44]        # 0x1423f3970
   140c8de2c:	call   0x1414eab90
   140c8de31:	lea    rdx,[rbp-0x38]
   140c8de35:	mov    rcx,rdi
   140c8de38:	call   0x1400bb340
   140c8de3d:	test   DWORD PTR [r12+0x10],0x8000000
   140c8de46:	jne    0x140c8df1b
   140c8de4c:	mov    rdx,rsi
   140c8de4f:	mov    rcx,r15
   140c8de52:	call   0x140070850
   140c8de57:	mov    rcx,QWORD PTR [rax]
   140c8de5a:	cmp    WORD PTR [rcx+0x18],0x5
   140c8de5f:	jne    0x140c8df1b
   140c8de65:	mov    rdx,rsi
   140c8de68:	mov    rcx,r15
   140c8de6b:	call   0x140070850
   140c8de70:	mov    rdx,QWORD PTR [rax]
   140c8de73:	mov    edx,DWORD PTR [rdx+0x10]
   140c8de76:	lea    rcx,[rip+0x188e2bb]        # 0x14251c138
   140c8de7d:	call   0x1400693f0
   140c8de82:	mov    rbx,rax
   140c8de85:	mov    rcx,rdi
   140c8de88:	test   rax,rax
   140c8de8b:	je     0x140c8df0f
   140c8de91:	lea    rdx,[rip+0x97adf0]        # 0x141608c88
   140c8de98:	call   0x140070b90
   140c8de9d:	mov    esi,DWORD PTR [rbp+0x178]
   140c8dea3:	and    esi,0x2
   140c8dea6:	je     0x140c8ded4
   140c8dea8:	lea    rdx,[rip+0x98ba59]        # 0x141619908
   140c8deaf:	mov    rcx,rdi
   140c8deb2:	call   0x140070b90
   140c8deb7:	mov    rdx,rdi
   140c8deba:	mov    ecx,DWORD PTR [rbx+0xe0]
   140c8dec0:	call   0x140545610
   140c8dec5:	lea    rdx,[rip+0x98b53c]        # 0x141619408
   140c8decc:	mov    rcx,rdi
   140c8decf:	call   0x140070b90
   140c8ded4:	mov    rcx,rbx
   140c8ded7:	call   0x140c27320
   140c8dedc:	test   rax,rax
   140c8dedf:	je     0x140c8def3
   140c8dee1:	cmp    BYTE PTR [rax+0x72],0x0
   140c8dee5:	je     0x140c8def3
   140c8dee7:	lea    rdx,[rbp-0x38]
   140c8deeb:	mov    rcx,rax
   140c8deee:	call   0x140aadad0
   140c8def3:	lea    rdx,[rbp-0x38]
   140c8def7:	mov    rcx,rdi
   140c8defa:	call   0x1400bb340
   140c8deff:	test   esi,esi
   140c8df01:	je     0x140c8df1b
   140c8df03:	lea    rdx,[rip+0x98ba0e]        # 0x141619918
   140c8df0a:	mov    rcx,rdi
   140c8df0d:	jmp    0x140c8df16
   140c8df0f:	lea    rdx,[rip+0xa943e2]        # 0x1417222f8
   140c8df16:	call   0x140070b90
   140c8df1b:	movzx  ebx,WORD PTR [rbp-0x78]
   140c8df1f:	dec    bx
   140c8df22:	mov    WORD PTR [rbp-0x78],bx
   140c8df26:	mov    rax,QWORD PTR [rbp-0x68]
   140c8df2a:	mov    WORD PTR [rax],bx
   140c8df2d:	cmp    bx,0x1
   140c8df31:	jle    0x140c8df3c
   140c8df33:	lea    rdx,[rip+0x97645a]        # 0x141604394
   140c8df3a:	jmp    0x140c8df48
   140c8df3c:	test   bx,bx
   140c8df3f:	jle    0x140c8df51
   140c8df41:	lea    rdx,[rip+0x976444]        # 0x14160438c
   140c8df48:	mov    rcx,rdi
   140c8df4b:	call   0x140070b90
   140c8df50:	nop
   140c8df51:	lea    rcx,[rbp-0x38]
   140c8df55:	call   0x140069460
   140c8df5a:	jmp    0x140c8df5f
   140c8df5c:	xor    r14d,r14d
   140c8df5f:	mov    eax,DWORD PTR [rbp-0x70]
   140c8df62:	inc    eax
   140c8df64:	mov    DWORD PTR [rbp-0x70],eax
   140c8df67:	movsxd rsi,eax
   140c8df6a:	mov    rcx,r15
   140c8df6d:	call   0x140070480
   140c8df72:	cmp    rsi,rax
   140c8df75:	jb     0x140c8da60
   140c8df7b:	mov    rbx,QWORD PTR [rbp-0x68]
   140c8df7f:	mov    esi,DWORD PTR [rbp-0x80]
   140c8df82:	dec    esi
   140c8df84:	mov    DWORD PTR [rbp-0x80],esi
   140c8df87:	cmp    esi,0x1
   140c8df8a:	jle    0x140c8df95
   140c8df8c:	lea    rdx,[rip+0x976401]        # 0x141604394
   140c8df93:	jmp    0x140c8dfa7
   140c8df95:	test   esi,esi
   140c8df97:	lea    rdx,[rip+0x9763ee]        # 0x14160438c
   140c8df9e:	jg     0x140c8dfa7
   140c8dfa0:	lea    rdx,[rip+0x98b5f1]        # 0x141619598
   140c8dfa7:	mov    rcx,rdi
   140c8dfaa:	call   0x140070b90
   140c8dfaf:	movzx  edx,BYTE PTR [rsp+0x71]
   140c8dfb4:	inc    r13d
   140c8dfb7:	add    rbx,0x2
   140c8dfbb:	mov    QWORD PTR [rbp-0x68],rbx
   140c8dfbf:	cmp    r13d,0x4
   140c8dfc3:	jl     0x140c8d9d0
   140c8dfc9:	movzx  r12d,WORD PTR [rbp+0x88]
   140c8dfd1:	test   r12w,r12w
   140c8dfd5:	jle    0x140c8e2bb
   140c8dfdb:	test   dl,dl
   140c8dfdd:	je     0x140c8dfee
   140c8dfdf:	lea    rdx,[rip+0xa9420a]        # 0x1417221f0
   140c8dfe6:	mov    rcx,rdi
   140c8dfe9:	call   0x140070b90
   140c8dfee:	lea    rdx,[rip+0xa9431b]        # 0x141722310
   140c8dff5:	mov    rcx,rdi
   140c8dff8:	call   0x140070b90
   140c8dffd:	mov    r13d,r14d
   140c8e000:	mov    rbx,QWORD PTR [rsp+0x78]
   140c8e005:	lea    r14,[rbx+0xd0]
   140c8e00c:	mov    rcx,r14
   140c8e00f:	call   0x140070480
   140c8e014:	test   rax,rax
   140c8e017:	je     0x140c8e291
   140c8e01d:	xor    eax,eax
   140c8e01f:	mov    esi,eax
   140c8e021:	mov    rdx,rsi
   140c8e024:	mov    rcx,r14
   140c8e027:	call   0x140070850
   140c8e02c:	mov    rcx,QWORD PTR [rax]
   140c8e02f:	mov    rax,QWORD PTR [rcx]
   140c8e032:	call   QWORD PTR [rax+0x28]
   140c8e035:	cmp    eax,0x3
   140c8e038:	jne    0x140c8e277
   140c8e03e:	mov    rdx,rsi
   140c8e041:	mov    rcx,r14
   140c8e044:	call   0x140070850
   140c8e049:	mov    r15,QWORD PTR [rax]
   140c8e04c:	test   DWORD PTR [rbx+0x10],0x8000000
   140c8e053:	jne    0x140c8e0b3
   140c8e055:	mov    rdx,rsi
   140c8e058:	mov    rcx,r14
   140c8e05b:	call   0x140070850
   140c8e060:	mov    rcx,QWORD PTR [rax]
   140c8e063:	movsx  edx,WORD PTR [rcx+0x18]
   140c8e067:	sub    edx,0x1
   140c8e06a:	je     0x140c8e0a4
   140c8e06c:	sub    edx,0x1
   140c8e06f:	je     0x140c8e09b
   140c8e071:	sub    edx,0x1
   140c8e074:	je     0x140c8e092
   140c8e076:	sub    edx,0x1
   140c8e079:	je     0x140c8e089
   140c8e07b:	cmp    edx,0x1
   140c8e07e:	jne    0x140c8e0b3
   140c8e080:	lea    rdx,[rip+0xa94259]        # 0x1417222e0
   140c8e087:	jmp    0x140c8e0ab
   140c8e089:	lea    rdx,[rip+0xa94238]        # 0x1417222c8
   140c8e090:	jmp    0x140c8e0ab
   140c8e092:	lea    rdx,[rip+0xa941c7]        # 0x141722260
   140c8e099:	jmp    0x140c8e0ab
   140c8e09b:	lea    rdx,[rip+0xa94216]        # 0x1417222b8
   140c8e0a2:	jmp    0x140c8e0ab
   140c8e0a4:	lea    rdx,[rip+0xa941fd]        # 0x1417222a8
   140c8e0ab:	mov    rcx,rdi
   140c8e0ae:	call   0x140070b90
   140c8e0b3:	lea    rcx,[rbp-0x38]
   140c8e0b7:	call   0x140070cc0
   140c8e0bc:	nop
   140c8e0bd:	mov    r15d,DWORD PTR [r15+0x28]
   140c8e0c1:	cmp    r15d,0xffffffff
   140c8e0c5:	je     0x140c8e115
   140c8e0c7:	mov    rdx,rsi
   140c8e0ca:	mov    rcx,r14
   140c8e0cd:	call   0x140070850
   140c8e0d2:	mov    rcx,QWORD PTR [rax]
   140c8e0d5:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8e0d8:	mov    rdx,rsi
   140c8e0db:	mov    rcx,r14
   140c8e0de:	call   0x140070850
   140c8e0e3:	mov    rcx,QWORD PTR [rax]
   140c8e0e6:	xor    eax,eax
   140c8e0e8:	mov    DWORD PTR [rsp+0x30],eax
   140c8e0ec:	mov    DWORD PTR [rsp+0x28],0xffffffff
   140c8e0f4:	mov    DWORD PTR [rsp+0x20],r15d
   140c8e0f9:	mov    r9d,ebx
   140c8e0fc:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8e101:	lea    rdx,[rbp-0x38]
   140c8e105:	lea    rcx,[rip+0x1765864]        # 0x1423f3970
   140c8e10c:	call   0x1414fb130
   140c8e111:	test   al,al
   140c8e113:	jne    0x140c8e15b
   140c8e115:	mov    rdx,rsi
   140c8e118:	mov    rcx,r14
   140c8e11b:	call   0x140070850
   140c8e120:	mov    rcx,QWORD PTR [rax]
   140c8e123:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8e126:	mov    rdx,rsi
   140c8e129:	mov    rcx,r14
   140c8e12c:	call   0x140070850
   140c8e131:	mov    rcx,QWORD PTR [rax]
   140c8e134:	xor    eax,eax
   140c8e136:	mov    WORD PTR [rsp+0x30],ax
   140c8e13b:	mov    BYTE PTR [rsp+0x28],al
   140c8e13f:	mov    DWORD PTR [rsp+0x20],eax
   140c8e143:	mov    r9d,ebx
   140c8e146:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8e14b:	lea    rdx,[rbp-0x38]
   140c8e14f:	lea    rcx,[rip+0x176581a]        # 0x1423f3970
   140c8e156:	call   0x1414eab90
   140c8e15b:	lea    rdx,[rbp-0x38]
   140c8e15f:	mov    rcx,rdi
   140c8e162:	call   0x1400bb340
   140c8e167:	mov    rbx,QWORD PTR [rsp+0x78]
   140c8e16c:	test   DWORD PTR [rbx+0x10],0x8000000
   140c8e173:	jne    0x140c8e244
   140c8e179:	mov    rdx,rsi
   140c8e17c:	mov    rcx,r14
   140c8e17f:	call   0x140070850
   140c8e184:	mov    rcx,QWORD PTR [rax]
   140c8e187:	cmp    WORD PTR [rcx+0x18],0x5
   140c8e18c:	jne    0x140c8e244
   140c8e192:	mov    rdx,rsi
   140c8e195:	mov    rcx,r14
   140c8e198:	call   0x140070850
   140c8e19d:	mov    rdx,QWORD PTR [rax]
   140c8e1a0:	mov    edx,DWORD PTR [rdx+0x10]
   140c8e1a3:	lea    rcx,[rip+0x188df8e]        # 0x14251c138
   140c8e1aa:	call   0x1400693f0
   140c8e1af:	mov    rbx,rax
   140c8e1b2:	test   rax,rax
   140c8e1b5:	je     0x140c8e23f
   140c8e1bb:	lea    rdx,[rip+0x97aac6]        # 0x141608c88
   140c8e1c2:	mov    rcx,rdi
   140c8e1c5:	call   0x140070b90
   140c8e1ca:	mov    esi,DWORD PTR [rbp+0x178]
   140c8e1d0:	and    esi,0x2
   140c8e1d3:	je     0x140c8e201
   140c8e1d5:	lea    rdx,[rip+0x98b72c]        # 0x141619908
   140c8e1dc:	mov    rcx,rdi
   140c8e1df:	call   0x140070b90
   140c8e1e4:	mov    rdx,rdi
   140c8e1e7:	mov    ecx,DWORD PTR [rbx+0xe0]
   140c8e1ed:	call   0x140545610
   140c8e1f2:	lea    rdx,[rip+0x98b20f]        # 0x141619408
   140c8e1f9:	mov    rcx,rdi
   140c8e1fc:	call   0x140070b90
   140c8e201:	mov    rcx,rbx
   140c8e204:	call   0x140c27320
   140c8e209:	test   rax,rax
   140c8e20c:	je     0x140c8e220
   140c8e20e:	cmp    BYTE PTR [rax+0x72],0x0
   140c8e212:	je     0x140c8e220
   140c8e214:	lea    rdx,[rbp-0x38]
   140c8e218:	mov    rcx,rax
   140c8e21b:	call   0x140aadad0
   140c8e220:	lea    rdx,[rbp-0x38]
   140c8e224:	mov    rcx,rdi
   140c8e227:	call   0x1400bb340
   140c8e22c:	test   esi,esi
   140c8e22e:	je     0x140c8e23f
   140c8e230:	lea    rdx,[rip+0x98b6e1]        # 0x141619918
   140c8e237:	mov    rcx,rdi
   140c8e23a:	call   0x140070b90
   140c8e23f:	mov    rbx,QWORD PTR [rsp+0x78]
   140c8e244:	dec    r12w
   140c8e248:	cmp    r12w,0x1
   140c8e24d:	jle    0x140c8e258
   140c8e24f:	lea    rdx,[rip+0x97613e]        # 0x141604394
   140c8e256:	jmp    0x140c8e265
   140c8e258:	test   r12w,r12w
   140c8e25c:	jle    0x140c8e26e
   140c8e25e:	lea    rdx,[rip+0x976127]        # 0x14160438c
   140c8e265:	mov    rcx,rdi
   140c8e268:	call   0x140070b90
   140c8e26d:	nop
   140c8e26e:	lea    rcx,[rbp-0x38]
   140c8e272:	call   0x140069460
   140c8e277:	inc    r13d
   140c8e27a:	movsxd rsi,r13d
   140c8e27d:	mov    rcx,r14
   140c8e280:	call   0x140070480
   140c8e285:	cmp    rsi,rax
   140c8e288:	jb     0x140c8e021
   140c8e28e:	mov    esi,DWORD PTR [rbp-0x80]
   140c8e291:	dec    esi
   140c8e293:	cmp    esi,0x1
   140c8e296:	jle    0x140c8e2a1
   140c8e298:	lea    rdx,[rip+0x9760f5]        # 0x141604394
   140c8e29f:	jmp    0x140c8e2b3
   140c8e2a1:	test   esi,esi
   140c8e2a3:	lea    rdx,[rip+0x9760e2]        # 0x14160438c
   140c8e2aa:	jg     0x140c8e2b3
   140c8e2ac:	lea    rdx,[rip+0x98b2e5]        # 0x141619598
   140c8e2b3:	mov    rcx,rdi
   140c8e2b6:	call   0x140070b90
   140c8e2bb:	xor    r15d,r15d
   140c8e2be:	cmp    WORD PTR [rbp+0xa8],r15w
   140c8e2c6:	jle    0x140c8e3d7
   140c8e2cc:	mov    r13d,r15d
   140c8e2cf:	mov    rsi,QWORD PTR [rsp+0x78]
   140c8e2d4:	lea    rbx,[rsi+0xd0]
   140c8e2db:	mov    QWORD PTR [rbp-0x68],rbx
   140c8e2df:	mov    rcx,rbx
   140c8e2e2:	call   0x140070480
   140c8e2e7:	test   rax,rax
   140c8e2ea:	je     0x140c8e3d7
   140c8e2f0:	mov    r12d,r15d
   140c8e2f3:	mov    rdx,r12
   140c8e2f6:	mov    rcx,rbx
   140c8e2f9:	call   0x140070850
   140c8e2fe:	mov    rcx,QWORD PTR [rax]
   140c8e301:	mov    rax,QWORD PTR [rcx]
   140c8e304:	call   QWORD PTR [rax+0x28]
   140c8e307:	cmp    eax,0x7
   140c8e30a:	jne    0x140c8e3bd
   140c8e310:	lea    rcx,[rbp-0x18]
   140c8e314:	call   0x140070cc0
   140c8e319:	nop
   140c8e31a:	mov    rdx,r12
   140c8e31d:	mov    rcx,rbx
   140c8e320:	call   0x140070850
   140c8e325:	mov    rcx,QWORD PTR [rax]
   140c8e328:	mov    r15d,DWORD PTR [rcx+0x10]
   140c8e32c:	mov    rdx,r12
   140c8e32f:	mov    rcx,rbx
   140c8e332:	call   0x140070850
   140c8e337:	mov    rcx,QWORD PTR [rax]
   140c8e33a:	mov    r14d,DWORD PTR [rcx+0xc]
   140c8e33e:	mov    rdx,r12
   140c8e341:	mov    rcx,rbx
   140c8e344:	call   0x140070850
   140c8e349:	mov    rcx,QWORD PTR [rax]
   140c8e34c:	movzx  ebx,WORD PTR [rcx+0x8]
   140c8e350:	mov    esi,DWORD PTR [rsi+0x10]
   140c8e353:	shr    esi,0x1b
   140c8e356:	not    sil
   140c8e359:	and    sil,0x1
   140c8e35d:	mov    rdx,r12
   140c8e360:	mov    rcx,QWORD PTR [rbp-0x68]
   140c8e364:	call   0x140070850
   140c8e369:	mov    rcx,QWORD PTR [rax]
   140c8e36c:	mov    eax,DWORD PTR [rbp+0x178]
   140c8e372:	mov    DWORD PTR [rsp+0x38],eax
   140c8e376:	mov    DWORD PTR [rsp+0x30],r15d
   140c8e37b:	mov    DWORD PTR [rsp+0x28],r14d
   140c8e380:	mov    WORD PTR [rsp+0x20],bx
   140c8e385:	movzx  r9d,sil
   140c8e389:	movzx  r8d,BYTE PTR [rcx+0x18]
   140c8e38e:	lea    rdx,[rbp-0x18]
   140c8e392:	lea    rcx,[rip+0x1779537]        # 0x1424078d0
   140c8e399:	call   0x140cc4a60
   140c8e39e:	lea    rdx,[rbp-0x18]
   140c8e3a2:	mov    rcx,rdi
   140c8e3a5:	call   0x1400bb340
   140c8e3aa:	nop
   140c8e3ab:	lea    rcx,[rbp-0x18]
   140c8e3af:	call   0x140069460
   140c8e3b4:	mov    rbx,QWORD PTR [rbp-0x68]
   140c8e3b8:	mov    rsi,QWORD PTR [rsp+0x78]
   140c8e3bd:	inc    r13d
   140c8e3c0:	movsxd r12,r13d
   140c8e3c3:	mov    rcx,rbx
   140c8e3c6:	call   0x140070480
   140c8e3cb:	cmp    r12,rax
   140c8e3ce:	jb     0x140c8e2f3
   140c8e3d4:	xor    r15d,r15d
   140c8e3d7:	mov    r13,QWORD PTR [rsp+0x78]
   140c8e3dc:	cmp    WORD PTR [rbp+0xa0],0x0
   140c8e3e4:	jle    0x140c8e4be
   140c8e3ea:	mov    r14d,r15d
   140c8e3ed:	lea    rsi,[r13+0xd0]
   140c8e3f4:	mov    rcx,rsi
   140c8e3f7:	call   0x140070480
   140c8e3fc:	test   rax,rax
   140c8e3ff:	je     0x140c8e4be
   140c8e405:	mov    rbx,r15
   140c8e408:	mov    r13d,DWORD PTR [rbp+0x178]
   140c8e40f:	nop
   140c8e410:	mov    rdx,rbx
   140c8e413:	mov    rcx,rsi
   140c8e416:	call   0x140070850
   140c8e41b:	mov    rcx,QWORD PTR [rax]
   140c8e41e:	mov    rax,QWORD PTR [rcx]
   140c8e421:	call   QWORD PTR [rax+0x28]
   140c8e424:	cmp    eax,0x6
   140c8e427:	jne    0x140c8e4a2
   140c8e429:	mov    rdx,rbx
   140c8e42c:	mov    rcx,rsi
   140c8e42f:	call   0x140070850
   140c8e434:	mov    rbx,QWORD PTR [rax]
   140c8e437:	lea    rcx,[rbp-0x18]
   140c8e43b:	call   0x140070cc0
   140c8e440:	nop
   140c8e441:	lea    rcx,[rbx+0x40]
   140c8e445:	mov    DWORD PTR [rsp+0x38],r13d
   140c8e44a:	mov    eax,DWORD PTR [rbx+0x30]
   140c8e44d:	mov    DWORD PTR [rsp+0x30],eax
   140c8e451:	mov    QWORD PTR [rsp+0x28],rcx
   140c8e456:	mov    eax,DWORD PTR [rbx+0x2c]
   140c8e459:	mov    DWORD PTR [rsp+0x20],eax
   140c8e45d:	movzx  r9d,WORD PTR [rbx+0x28]
   140c8e462:	movzx  r8d,BYTE PTR [rbx+0x34]
   140c8e467:	lea    rdx,[rbp-0x18]
   140c8e46b:	lea    rcx,[rip+0x177945e]        # 0x1424078d0
   140c8e472:	call   0x140cc4f60
   140c8e477:	lea    rdx,[rbp-0x18]
   140c8e47b:	mov    rcx,rdi
   140c8e47e:	call   0x1400bb340
   140c8e483:	mov    eax,DWORD PTR [rbp-0x60]
   140c8e486:	movzx  eax,al
   140c8e489:	cmp    WORD PTR [rbx+0x28],0xffff
   140c8e48e:	mov    ecx,0x1
   140c8e493:	cmovne eax,ecx
   140c8e496:	mov    DWORD PTR [rbp-0x60],eax
   140c8e499:	lea    rcx,[rbp-0x18]
   140c8e49d:	call   0x140069460
   140c8e4a2:	inc    r14d
   140c8e4a5:	movsxd rbx,r14d
   140c8e4a8:	mov    rcx,rsi
   140c8e4ab:	call   0x140070480
   140c8e4b0:	cmp    rbx,rax
   140c8e4b3:	jb     0x140c8e410
   140c8e4b9:	mov    r13,QWORD PTR [rsp+0x78]
   140c8e4be:	cmp    WORD PTR [rbp+0xe0],0x0
   140c8e4c6:	jle    0x140c8e59d
   140c8e4cc:	mov    r14d,r15d
   140c8e4cf:	lea    rsi,[r13+0xd0]
   140c8e4d6:	mov    rcx,rsi
   140c8e4d9:	call   0x140070480
   140c8e4de:	test   rax,rax
   140c8e4e1:	je     0x140c8e59d
   140c8e4e7:	mov    rbx,r15
   140c8e4ea:	mov    r13d,DWORD PTR [rbp+0x178]
   140c8e4f1:	mov    rdx,rbx
   140c8e4f4:	mov    rcx,rsi
   140c8e4f7:	call   0x140070850
   140c8e4fc:	mov    rcx,QWORD PTR [rax]
   140c8e4ff:	mov    rax,QWORD PTR [rcx]
   140c8e502:	call   QWORD PTR [rax+0x28]
   140c8e505:	cmp    eax,0xe
   140c8e508:	jne    0x140c8e581
   140c8e50a:	mov    rdx,rbx
   140c8e50d:	mov    rcx,rsi
   140c8e510:	call   0x140070850
   140c8e515:	mov    rbx,QWORD PTR [rax]
   140c8e518:	lea    rcx,[rbp-0x18]
   140c8e51c:	call   0x140070cc0
   140c8e521:	nop
   140c8e522:	lea    rcx,[rbx+0x40]
   140c8e526:	mov    DWORD PTR [rsp+0x38],r13d
   140c8e52b:	mov    eax,DWORD PTR [rbx+0x30]
   140c8e52e:	mov    DWORD PTR [rsp+0x30],eax
   140c8e532:	mov    QWORD PTR [rsp+0x28],rcx
   140c8e537:	mov    eax,DWORD PTR [rbx+0x2c]
   140c8e53a:	mov    DWORD PTR [rsp+0x20],eax
   140c8e53e:	movzx  r9d,WORD PTR [rbx+0x28]
   140c8e543:	movzx  r8d,BYTE PTR [rbx+0x34]
   140c8e548:	lea    rdx,[rbp-0x18]
   140c8e54c:	lea    rcx,[rip+0x177937d]        # 0x1424078d0
   140c8e553:	call   0x140cc59a0
   140c8e558:	lea    rdx,[rbp-0x18]
   140c8e55c:	mov    rcx,rdi
   140c8e55f:	call   0x1400bb340
   140c8e564:	movzx  eax,BYTE PTR [rbp-0x60]
   140c8e568:	cmp    WORD PTR [rbx+0x28],0xffff
   140c8e56d:	mov    ecx,0x1
   140c8e572:	cmovne eax,ecx
   140c8e575:	mov    BYTE PTR [rbp-0x60],al
   140c8e578:	lea    rcx,[rbp-0x18]
   140c8e57c:	call   0x140069460
   140c8e581:	inc    r14d
   140c8e584:	movsxd rbx,r14d
   140c8e587:	mov    rcx,rsi
   140c8e58a:	call   0x140070480
   140c8e58f:	cmp    rbx,rax
   140c8e592:	jb     0x140c8e4f1
   140c8e598:	mov    r13,QWORD PTR [rsp+0x78]
   140c8e59d:	cmp    WORD PTR [rbp+0xc8],0x0
   140c8e5a5:	jle    0x140c8e8a6
   140c8e5ab:	xor    esi,esi
   140c8e5ad:	mov    r12d,esi
   140c8e5b0:	lea    r15,[r13+0xd0]
   140c8e5b7:	mov    rcx,r15
   140c8e5ba:	call   0x140070480
   140c8e5bf:	test   rax,rax
   140c8e5c2:	je     0x140c8e8a6
   140c8e5c8:	mov    r14d,esi
   140c8e5cb:	nop    DWORD PTR [rax+rax*1+0x0]
   140c8e5d0:	mov    rdx,r14
   140c8e5d3:	mov    rcx,r15
   140c8e5d6:	call   0x140070850
   140c8e5db:	mov    rcx,QWORD PTR [rax]
   140c8e5de:	mov    rax,QWORD PTR [rcx]
   140c8e5e1:	call   QWORD PTR [rax+0x28]
   140c8e5e4:	cmp    eax,0xb
   140c8e5e7:	jne    0x140c8e88f
   140c8e5ed:	lea    rdx,[rip+0x97a648]        # 0x141608c3c
   140c8e5f4:	mov    rcx,rdi
   140c8e5f7:	call   0x140070b90
   140c8e5fc:	mov    rax,QWORD PTR [r13+0x0]
   140c8e600:	mov    rcx,r13
   140c8e603:	call   QWORD PTR [rax]
   140c8e605:	cmp    ax,0xd
   140c8e609:	jne    0x140c8e6fb
   140c8e60f:	mov    rbx,QWORD PTR [r13+0xe8]
   140c8e616:	mov    rdx,r14
   140c8e619:	mov    rcx,r15
   140c8e61c:	call   0x140070850
   140c8e621:	mov    rsi,QWORD PTR [rax]
   140c8e624:	lea    rdx,[rbp-0x70]
   140c8e628:	lea    rcx,[rbx+0xc8]
   140c8e62f:	call   0x140070870
   140c8e634:	lea    rdx,[rbp-0x68]
   140c8e638:	lea    rcx,[rbx+0xc8]
   140c8e63f:	call   0x140070860
   140c8e644:	lea    r8,[rbp-0x68]
   140c8e648:	lea    rdx,[rsp+0x71]
   140c8e64d:	lea    rcx,[rbp-0x70]
   140c8e651:	call   0x140070450
   140c8e656:	xor    edx,edx
   140c8e658:	movzx  ecx,BYTE PTR [rax]
   140c8e65b:	call   0x140066de0
   140c8e660:	test   al,al
   140c8e662:	je     0x140c8e6f9
   140c8e668:	nop    DWORD PTR [rax+rax*1+0x0]
   140c8e670:	lea    rcx,[rbp-0x70]
   140c8e674:	call   0x140070440
   140c8e679:	lea    rdx,[rsi+0x28]
   140c8e67d:	mov    rcx,QWORD PTR [rax]
   140c8e680:	call   0x140071470
   140c8e685:	test   al,al
   140c8e687:	je     0x140c8e6cc
   140c8e689:	lea    rcx,[rbp-0x70]
   140c8e68d:	call   0x140070440
   140c8e692:	mov    rdx,QWORD PTR [rax]
   140c8e695:	add    rdx,0x48
   140c8e699:	mov    rcx,rdi
   140c8e69c:	call   0x1400bb340
   140c8e6a1:	lea    rcx,[rbp-0x70]
   140c8e6a5:	call   0x140070440
   140c8e6aa:	mov    rcx,QWORD PTR [rax]
   140c8e6ad:	test   BYTE PTR [rcx+0x88],0x2
   140c8e6b4:	mov    rcx,rdi
   140c8e6b7:	lea    rdx,[rip+0xa93c72]        # 0x141722330
   140c8e6be:	jne    0x140c8e6c7
   140c8e6c0:	lea    rdx,[rip+0xa93c79]        # 0x141722340
   140c8e6c7:	call   0x140070b90
   140c8e6cc:	lea    rcx,[rbp-0x70]
   140c8e6d0:	call   0x140070430
   140c8e6d5:	lea    r8,[rbp-0x68]
   140c8e6d9:	lea    rdx,[rsp+0x71]
   140c8e6de:	lea    rcx,[rbp-0x70]
   140c8e6e2:	call   0x140070450
   140c8e6e7:	xor    edx,edx
   140c8e6e9:	movzx  ecx,BYTE PTR [rax]
   140c8e6ec:	call   0x140066de0
   140c8e6f1:	test   al,al
   140c8e6f3:	jne    0x140c8e670
   140c8e6f9:	xor    esi,esi
   140c8e6fb:	mov    rdx,r14
   140c8e6fe:	mov    rcx,r15
   140c8e701:	call   0x140070850
   140c8e706:	mov    rcx,QWORD PTR [rax]
   140c8e709:	movsx  edx,WORD PTR [rcx+0x18]
   140c8e70d:	sub    edx,0x1
   140c8e710:	je     0x140c8e74a
   140c8e712:	sub    edx,0x1
   140c8e715:	je     0x140c8e741
   140c8e717:	sub    edx,0x1
   140c8e71a:	je     0x140c8e738
   140c8e71c:	sub    edx,0x1
   140c8e71f:	je     0x140c8e72f
   140c8e721:	cmp    edx,0x1
   140c8e724:	jne    0x140c8e759
   140c8e726:	lea    rdx,[rip+0xa93bb3]        # 0x1417222e0
   140c8e72d:	jmp    0x140c8e751
   140c8e72f:	lea    rdx,[rip+0xa93b92]        # 0x1417222c8
   140c8e736:	jmp    0x140c8e751
   140c8e738:	lea    rdx,[rip+0xa93b21]        # 0x141722260
   140c8e73f:	jmp    0x140c8e751
   140c8e741:	lea    rdx,[rip+0xa93b70]        # 0x1417222b8
   140c8e748:	jmp    0x140c8e751
   140c8e74a:	lea    rdx,[rip+0xa93b57]        # 0x1417222a8
   140c8e751:	mov    rcx,rdi
   140c8e754:	call   0x140070b90
   140c8e759:	mov    rdx,r14
   140c8e75c:	mov    rcx,r15
   140c8e75f:	call   0x140070850
   140c8e764:	mov    rcx,QWORD PTR [rax]
   140c8e767:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8e76a:	mov    rdx,r14
   140c8e76d:	mov    rcx,r15
   140c8e770:	call   0x140070850
   140c8e775:	mov    rcx,QWORD PTR [rax]
   140c8e778:	mov    WORD PTR [rsp+0x30],si
   140c8e77d:	mov    BYTE PTR [rsp+0x28],0x0
   140c8e782:	mov    DWORD PTR [rsp+0x20],esi
   140c8e786:	mov    r9d,ebx
   140c8e789:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8e78e:	lea    rdx,[rbp+0x8]
   140c8e792:	lea    rcx,[rip+0x17651d7]        # 0x1423f3970
   140c8e799:	call   0x1414eab90
   140c8e79e:	lea    rdx,[rbp+0x8]
   140c8e7a2:	mov    rcx,rdi
   140c8e7a5:	call   0x1400bb340
   140c8e7aa:	test   DWORD PTR [r13+0x10],0x8000000
   140c8e7b2:	jne    0x140c8e880
   140c8e7b8:	mov    rdx,r14
   140c8e7bb:	mov    rcx,r15
   140c8e7be:	call   0x140070850
   140c8e7c3:	mov    rcx,QWORD PTR [rax]
   140c8e7c6:	cmp    WORD PTR [rcx+0x18],0x5
   140c8e7cb:	jne    0x140c8e880
   140c8e7d1:	mov    rdx,r14
   140c8e7d4:	mov    rcx,r15
   140c8e7d7:	call   0x140070850
   140c8e7dc:	mov    rdx,QWORD PTR [rax]
   140c8e7df:	mov    edx,DWORD PTR [rdx+0x10]
   140c8e7e2:	lea    rcx,[rip+0x188d94f]        # 0x14251c138
   140c8e7e9:	call   0x1400693f0
   140c8e7ee:	mov    rbx,rax
   140c8e7f1:	test   rax,rax
   140c8e7f4:	je     0x140c8e880
   140c8e7fa:	lea    rdx,[rip+0x97a487]        # 0x141608c88
   140c8e801:	mov    rcx,rdi
   140c8e804:	call   0x140070b90
   140c8e809:	mov    esi,DWORD PTR [rbp+0x178]
   140c8e80f:	and    esi,0x2
   140c8e812:	je     0x140c8e840
   140c8e814:	lea    rdx,[rip+0x98b0ed]        # 0x141619908
   140c8e81b:	mov    rcx,rdi
   140c8e81e:	call   0x140070b90
   140c8e823:	mov    rdx,rdi
   140c8e826:	mov    ecx,DWORD PTR [rbx+0xe0]
   140c8e82c:	call   0x140545610
   140c8e831:	lea    rdx,[rip+0x98abd0]        # 0x141619408
   140c8e838:	mov    rcx,rdi
   140c8e83b:	call   0x140070b90
   140c8e840:	mov    rcx,rbx
   140c8e843:	call   0x140c27320
   140c8e848:	test   rax,rax
   140c8e84b:	je     0x140c8e85f
   140c8e84d:	cmp    BYTE PTR [rax+0x72],0x0
   140c8e851:	je     0x140c8e85f
   140c8e853:	lea    rdx,[rbp+0x8]
   140c8e857:	mov    rcx,rax
   140c8e85a:	call   0x140aadad0
   140c8e85f:	lea    rdx,[rbp+0x8]
   140c8e863:	mov    rcx,rdi
   140c8e866:	call   0x1400bb340
   140c8e86b:	test   esi,esi
   140c8e86d:	je     0x140c8e87e
   140c8e86f:	lea    rdx,[rip+0x98b0a2]        # 0x141619918
   140c8e876:	mov    rcx,rdi
   140c8e879:	call   0x140070b90
   140c8e87e:	xor    esi,esi
   140c8e880:	lea    rdx,[rip+0x98ad11]        # 0x141619598
   140c8e887:	mov    rcx,rdi
   140c8e88a:	call   0x140070b90
   140c8e88f:	inc    r12d
   140c8e892:	movsxd r14,r12d
   140c8e895:	mov    rcx,r15
   140c8e898:	call   0x140070480
   140c8e89d:	cmp    r14,rax
   140c8e8a0:	jb     0x140c8e5d0
   140c8e8a6:	xor    r12d,r12d
   140c8e8a9:	cmp    WORD PTR [rbp+0x98],r12w
   140c8e8b1:	jle    0x140c8eaf5
   140c8e8b7:	mov    r15d,r12d
   140c8e8ba:	lea    r14,[r13+0xd0]
   140c8e8c1:	mov    rcx,r14
   140c8e8c4:	call   0x140070480
   140c8e8c9:	test   rax,rax
   140c8e8cc:	je     0x140c8eaf5
   140c8e8d2:	mov    esi,r12d
   140c8e8d5:	mov    rdx,rsi
   140c8e8d8:	mov    rcx,r14
   140c8e8db:	call   0x140070850
   140c8e8e0:	mov    rcx,QWORD PTR [rax]
   140c8e8e3:	mov    rax,QWORD PTR [rcx]
   140c8e8e6:	call   QWORD PTR [rax+0x28]
   140c8e8e9:	cmp    eax,0x5
   140c8e8ec:	jne    0x140c8eade
   140c8e8f2:	mov    rdx,rsi
   140c8e8f5:	mov    rcx,r14
   140c8e8f8:	call   0x140070850
   140c8e8fd:	mov    rcx,QWORD PTR [rax]
   140c8e900:	mov    edx,DWORD PTR [rcx+0x28]
   140c8e903:	test   edx,edx
   140c8e905:	je     0x140c8e931
   140c8e907:	sub    edx,0x1
   140c8e90a:	je     0x140c8e928
   140c8e90c:	sub    edx,0x1
   140c8e90f:	je     0x140c8e91f
   140c8e911:	cmp    edx,0x1
   140c8e914:	jne    0x140c8e940
   140c8e916:	lea    rdx,[rip+0xa93a83]        # 0x1417223a0
   140c8e91d:	jmp    0x140c8e938
   140c8e91f:	lea    rdx,[rip+0xa93a6a]        # 0x141722390
   140c8e926:	jmp    0x140c8e938
   140c8e928:	lea    rdx,[rip+0xa93a41]        # 0x141722370
   140c8e92f:	jmp    0x140c8e938
   140c8e931:	lea    rdx,[rip+0xa93a18]        # 0x141722350
   140c8e938:	mov    rcx,rdi
   140c8e93b:	call   0x140070b90
   140c8e940:	test   DWORD PTR [r13+0x10],0x8000000
   140c8e948:	jne    0x140c8e9a8
   140c8e94a:	mov    rdx,rsi
   140c8e94d:	mov    rcx,r14
   140c8e950:	call   0x140070850
   140c8e955:	mov    rcx,QWORD PTR [rax]
   140c8e958:	movsx  edx,WORD PTR [rcx+0x18]
   140c8e95c:	sub    edx,0x1
   140c8e95f:	je     0x140c8e999
   140c8e961:	sub    edx,0x1
   140c8e964:	je     0x140c8e990
   140c8e966:	sub    edx,0x1
   140c8e969:	je     0x140c8e987
   140c8e96b:	sub    edx,0x1
   140c8e96e:	je     0x140c8e97e
   140c8e970:	cmp    edx,0x1
   140c8e973:	jne    0x140c8e9a8
   140c8e975:	lea    rdx,[rip+0xa93964]        # 0x1417222e0
   140c8e97c:	jmp    0x140c8e9a0
   140c8e97e:	lea    rdx,[rip+0xa93943]        # 0x1417222c8
   140c8e985:	jmp    0x140c8e9a0
   140c8e987:	lea    rdx,[rip+0xa938d2]        # 0x141722260
   140c8e98e:	jmp    0x140c8e9a0
   140c8e990:	lea    rdx,[rip+0xa93921]        # 0x1417222b8
   140c8e997:	jmp    0x140c8e9a0
   140c8e999:	lea    rdx,[rip+0xa93908]        # 0x1417222a8
   140c8e9a0:	mov    rcx,rdi
   140c8e9a3:	call   0x140070b90
   140c8e9a8:	mov    rdx,rsi
   140c8e9ab:	mov    rcx,r14
   140c8e9ae:	call   0x140070850
   140c8e9b3:	mov    rcx,QWORD PTR [rax]
   140c8e9b6:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8e9b9:	mov    rdx,rsi
   140c8e9bc:	mov    rcx,r14
   140c8e9bf:	call   0x140070850
   140c8e9c4:	mov    rcx,QWORD PTR [rax]
   140c8e9c7:	mov    WORD PTR [rsp+0x30],r12w
   140c8e9cd:	mov    BYTE PTR [rsp+0x28],r12b
   140c8e9d2:	mov    DWORD PTR [rsp+0x20],r12d
   140c8e9d7:	mov    r9d,ebx
   140c8e9da:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8e9df:	lea    rdx,[rbp+0x8]
   140c8e9e3:	lea    rcx,[rip+0x1764f86]        # 0x1423f3970
   140c8e9ea:	call   0x1414eab90
   140c8e9ef:	lea    rdx,[rbp+0x8]
   140c8e9f3:	mov    rcx,rdi
   140c8e9f6:	call   0x1400bb340
   140c8e9fb:	test   DWORD PTR [r13+0x10],0x8000000
   140c8ea03:	jne    0x140c8eacf
   140c8ea09:	mov    rdx,rsi
   140c8ea0c:	mov    rcx,r14
   140c8ea0f:	call   0x140070850
   140c8ea14:	mov    rcx,QWORD PTR [rax]
   140c8ea17:	cmp    WORD PTR [rcx+0x18],0x5
   140c8ea1c:	jne    0x140c8eacf
   140c8ea22:	mov    rdx,rsi
   140c8ea25:	mov    rcx,r14
   140c8ea28:	call   0x140070850
   140c8ea2d:	mov    rdx,QWORD PTR [rax]
   140c8ea30:	mov    edx,DWORD PTR [rdx+0x10]
   140c8ea33:	lea    rcx,[rip+0x188d6fe]        # 0x14251c138
   140c8ea3a:	call   0x1400693f0
   140c8ea3f:	mov    rbx,rax
   140c8ea42:	test   rax,rax
   140c8ea45:	je     0x140c8eacf
   140c8ea4b:	lea    rdx,[rip+0x97a236]        # 0x141608c88
   140c8ea52:	mov    rcx,rdi
   140c8ea55:	call   0x140070b90
   140c8ea5a:	mov    esi,DWORD PTR [rbp+0x178]
   140c8ea60:	and    esi,0x2
   140c8ea63:	je     0x140c8ea91
   140c8ea65:	lea    rdx,[rip+0x98ae9c]        # 0x141619908
   140c8ea6c:	mov    rcx,rdi
   140c8ea6f:	call   0x140070b90
   140c8ea74:	mov    rdx,rdi
   140c8ea77:	mov    ecx,DWORD PTR [rbx+0xe0]
   140c8ea7d:	call   0x140545610
   140c8ea82:	lea    rdx,[rip+0x98a97f]        # 0x141619408
   140c8ea89:	mov    rcx,rdi
   140c8ea8c:	call   0x140070b90
   140c8ea91:	mov    rcx,rbx
   140c8ea94:	call   0x140c27320
   140c8ea99:	test   rax,rax
   140c8ea9c:	je     0x140c8eab0
   140c8ea9e:	cmp    BYTE PTR [rax+0x72],r12b
   140c8eaa2:	je     0x140c8eab0
   140c8eaa4:	lea    rdx,[rbp+0x8]
   140c8eaa8:	mov    rcx,rax
   140c8eaab:	call   0x140aadad0
   140c8eab0:	lea    rdx,[rbp+0x8]
   140c8eab4:	mov    rcx,rdi
   140c8eab7:	call   0x1400bb340
   140c8eabc:	test   esi,esi
   140c8eabe:	je     0x140c8eacf
   140c8eac0:	lea    rdx,[rip+0x98ae51]        # 0x141619918
   140c8eac7:	mov    rcx,rdi
   140c8eaca:	call   0x140070b90
   140c8eacf:	lea    rdx,[rip+0x98aac2]        # 0x141619598
   140c8ead6:	mov    rcx,rdi
   140c8ead9:	call   0x140070b90
   140c8eade:	inc    r15d
   140c8eae1:	movsxd rsi,r15d
   140c8eae4:	mov    rcx,r14
   140c8eae7:	call   0x140070480
   140c8eaec:	cmp    rsi,rax
   140c8eaef:	jb     0x140c8e8d5
   140c8eaf5:	movzx  r13d,WORD PTR [rbp+0x90]
   140c8eafd:	movzx  r14d,WORD PTR [rbp+0x80]
   140c8eb05:	test   r14w,r14w
   140c8eb09:	jg     0x140c8eb19
   140c8eb0b:	test   r13w,r13w
   140c8eb0f:	jle    0x140c8f033
   140c8eb15:	test   r14w,r14w
   140c8eb19:	mov    eax,0x1
   140c8eb1e:	cmovg  r12d,eax
   140c8eb22:	mov    DWORD PTR [rbp-0x80],r12d
   140c8eb26:	test   r13w,r13w
   140c8eb2a:	jle    0x140c8eb33
   140c8eb2c:	inc    r12d
   140c8eb2f:	mov    DWORD PTR [rbp-0x80],r12d
   140c8eb33:	movzx  ebx,al
   140c8eb36:	test   r14w,r14w
   140c8eb3a:	jle    0x140c8edbd
   140c8eb40:	lea    rdx,[rip+0xa93869]        # 0x1417223b0
   140c8eb47:	mov    rcx,rdi
   140c8eb4a:	call   0x140070b90
   140c8eb4f:	xor    bl,bl
   140c8eb51:	mov    BYTE PTR [rsp+0x71],bl
   140c8eb55:	lea    rdx,[rip+0xa93864]        # 0x1417223c0
   140c8eb5c:	mov    rcx,rdi
   140c8eb5f:	call   0x140070b90
   140c8eb64:	xor    esi,esi
   140c8eb66:	mov    r12d,esi
   140c8eb69:	mov    r15,QWORD PTR [rsp+0x78]
   140c8eb6e:	add    r15,0xd0
   140c8eb75:	mov    rcx,r15
   140c8eb78:	call   0x140070480
   140c8eb7d:	test   rax,rax
   140c8eb80:	je     0x140c8ed88
   140c8eb86:	mov    r13,QWORD PTR [rsp+0x78]
   140c8eb8b:	nop    DWORD PTR [rax+rax*1+0x0]
   140c8eb90:	mov    rdx,rsi
   140c8eb93:	mov    rcx,r15
   140c8eb96:	call   0x140070850
   140c8eb9b:	mov    rcx,QWORD PTR [rax]
   140c8eb9e:	mov    rax,QWORD PTR [rcx]
   140c8eba1:	call   QWORD PTR [rax+0x28]
   140c8eba4:	cmp    eax,0x2
   140c8eba7:	jne    0x140c8ed64
   140c8ebad:	test   DWORD PTR [r13+0x10],0x8000000
   140c8ebb5:	jne    0x140c8ec15
   140c8ebb7:	mov    rdx,rsi
   140c8ebba:	mov    rcx,r15
   140c8ebbd:	call   0x140070850
   140c8ebc2:	mov    rcx,QWORD PTR [rax]
   140c8ebc5:	movsx  edx,WORD PTR [rcx+0x18]
   140c8ebc9:	sub    edx,0x1
   140c8ebcc:	je     0x140c8ec06
   140c8ebce:	sub    edx,0x1
   140c8ebd1:	je     0x140c8ebfd
   140c8ebd3:	sub    edx,0x1
   140c8ebd6:	je     0x140c8ebf4
   140c8ebd8:	sub    edx,0x1
   140c8ebdb:	je     0x140c8ebeb
   140c8ebdd:	cmp    edx,0x1
   140c8ebe0:	jne    0x140c8ec15
   140c8ebe2:	lea    rdx,[rip+0xa936f7]        # 0x1417222e0
   140c8ebe9:	jmp    0x140c8ec0d
   140c8ebeb:	lea    rdx,[rip+0xa936d6]        # 0x1417222c8
   140c8ebf2:	jmp    0x140c8ec0d
   140c8ebf4:	lea    rdx,[rip+0xa93665]        # 0x141722260
   140c8ebfb:	jmp    0x140c8ec0d
   140c8ebfd:	lea    rdx,[rip+0xa936b4]        # 0x1417222b8
   140c8ec04:	jmp    0x140c8ec0d
   140c8ec06:	lea    rdx,[rip+0xa9369b]        # 0x1417222a8
   140c8ec0d:	mov    rcx,rdi
   140c8ec10:	call   0x140070b90
   140c8ec15:	mov    rdx,rsi
   140c8ec18:	mov    rcx,r15
   140c8ec1b:	call   0x140070850
   140c8ec20:	mov    rcx,QWORD PTR [rax]
   140c8ec23:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8ec26:	mov    rdx,rsi
   140c8ec29:	mov    rcx,r15
   140c8ec2c:	call   0x140070850
   140c8ec31:	mov    rcx,QWORD PTR [rax]
   140c8ec34:	xor    eax,eax
   140c8ec36:	mov    WORD PTR [rsp+0x30],ax
   140c8ec3b:	mov    BYTE PTR [rsp+0x28],al
   140c8ec3f:	mov    DWORD PTR [rsp+0x20],eax
   140c8ec43:	mov    r9d,ebx
   140c8ec46:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8ec4b:	lea    rdx,[rbp+0x8]
   140c8ec4f:	lea    rcx,[rip+0x1764d1a]        # 0x1423f3970
   140c8ec56:	call   0x1414eab90
   140c8ec5b:	lea    rdx,[rbp+0x8]
   140c8ec5f:	mov    rcx,rdi
   140c8ec62:	call   0x1400bb340
   140c8ec67:	test   DWORD PTR [r13+0x10],0x8000000
   140c8ec6f:	jne    0x140c8ed3b
   140c8ec75:	mov    rdx,rsi
   140c8ec78:	mov    rcx,r15
   140c8ec7b:	call   0x140070850
   140c8ec80:	mov    rcx,QWORD PTR [rax]
   140c8ec83:	cmp    WORD PTR [rcx+0x18],0x5
   140c8ec88:	jne    0x140c8ed3b
   140c8ec8e:	mov    rdx,rsi
   140c8ec91:	mov    rcx,r15
   140c8ec94:	call   0x140070850
   140c8ec99:	mov    rdx,QWORD PTR [rax]
   140c8ec9c:	mov    edx,DWORD PTR [rdx+0x10]
   140c8ec9f:	lea    rcx,[rip+0x188d492]        # 0x14251c138
   140c8eca6:	call   0x1400693f0
   140c8ecab:	mov    rbx,rax
   140c8ecae:	test   rax,rax
   140c8ecb1:	je     0x140c8ed3b
   140c8ecb7:	lea    rdx,[rip+0x979fca]        # 0x141608c88
   140c8ecbe:	mov    rcx,rdi
   140c8ecc1:	call   0x140070b90
   140c8ecc6:	mov    esi,DWORD PTR [rbp+0x178]
   140c8eccc:	and    esi,0x2
   140c8eccf:	je     0x140c8ecfd
   140c8ecd1:	lea    rdx,[rip+0x98ac30]        # 0x141619908
   140c8ecd8:	mov    rcx,rdi
   140c8ecdb:	call   0x140070b90
   140c8ece0:	mov    rdx,rdi
   140c8ece3:	mov    ecx,DWORD PTR [rbx+0xe0]
   140c8ece9:	call   0x140545610
   140c8ecee:	lea    rdx,[rip+0x98a713]        # 0x141619408
   140c8ecf5:	mov    rcx,rdi
   140c8ecf8:	call   0x140070b90
   140c8ecfd:	mov    rcx,rbx
   140c8ed00:	call   0x140c27320
   140c8ed05:	test   rax,rax
   140c8ed08:	je     0x140c8ed1c
   140c8ed0a:	cmp    BYTE PTR [rax+0x72],0x0
   140c8ed0e:	je     0x140c8ed1c
   140c8ed10:	lea    rdx,[rbp+0x8]
   140c8ed14:	mov    rcx,rax
   140c8ed17:	call   0x140aadad0
   140c8ed1c:	lea    rdx,[rbp+0x8]
   140c8ed20:	mov    rcx,rdi
   140c8ed23:	call   0x1400bb340
   140c8ed28:	test   esi,esi
   140c8ed2a:	je     0x140c8ed3b
   140c8ed2c:	lea    rdx,[rip+0x98abe5]        # 0x141619918
   140c8ed33:	mov    rcx,rdi
   140c8ed36:	call   0x140070b90
   140c8ed3b:	dec    r14w
   140c8ed3f:	cmp    r14w,0x1
   140c8ed44:	jle    0x140c8ed4f
   140c8ed46:	lea    rdx,[rip+0x975647]        # 0x141604394
   140c8ed4d:	jmp    0x140c8ed5c
   140c8ed4f:	test   r14w,r14w
   140c8ed53:	jle    0x140c8ed64
   140c8ed55:	lea    rdx,[rip+0x975630]        # 0x14160438c
   140c8ed5c:	mov    rcx,rdi
   140c8ed5f:	call   0x140070b90
   140c8ed64:	inc    r12d
   140c8ed67:	movsxd rsi,r12d
   140c8ed6a:	mov    rcx,r15
   140c8ed6d:	call   0x140070480
   140c8ed72:	cmp    rsi,rax
   140c8ed75:	jb     0x140c8eb90
   140c8ed7b:	movzx  r13d,WORD PTR [rbp+0x90]
   140c8ed83:	movzx  ebx,BYTE PTR [rsp+0x71]
   140c8ed88:	mov    r12d,DWORD PTR [rbp-0x80]
   140c8ed8c:	dec    r12d
   140c8ed8f:	mov    DWORD PTR [rbp-0x80],r12d
   140c8ed93:	cmp    r12d,0x1
   140c8ed97:	jle    0x140c8eda2
   140c8ed99:	lea    rdx,[rip+0x9755f4]        # 0x141604394
   140c8eda0:	jmp    0x140c8edb5
   140c8eda2:	test   r12d,r12d
   140c8eda5:	lea    rdx,[rip+0x9755e0]        # 0x14160438c
   140c8edac:	jg     0x140c8edb5
   140c8edae:	lea    rdx,[rip+0x98a7e3]        # 0x141619598
   140c8edb5:	mov    rcx,rdi
   140c8edb8:	call   0x140070b90
   140c8edbd:	test   r13w,r13w
   140c8edc1:	jle    0x140c8f033
   140c8edc7:	test   bl,bl
   140c8edc9:	je     0x140c8edda
   140c8edcb:	lea    rdx,[rip+0xa935de]        # 0x1417223b0
   140c8edd2:	mov    rcx,rdi
   140c8edd5:	call   0x140070b90
   140c8edda:	lea    rdx,[rip+0xa93607]        # 0x1417223e8
   140c8ede1:	mov    rcx,rdi
   140c8ede4:	call   0x140070b90
   140c8ede9:	xor    esi,esi
   140c8edeb:	mov    r15d,esi
   140c8edee:	mov    rbx,QWORD PTR [rsp+0x78]
   140c8edf3:	lea    r14,[rbx+0xd0]
   140c8edfa:	mov    rcx,r14
   140c8edfd:	call   0x140070480
   140c8ee02:	test   rax,rax
   140c8ee05:	je     0x140c8f006
   140c8ee0b:	mov    r12d,DWORD PTR [rbp+0x178]
   140c8ee12:	mov    rdx,rsi
   140c8ee15:	mov    rcx,r14
   140c8ee18:	call   0x140070850
   140c8ee1d:	mov    rcx,QWORD PTR [rax]
   140c8ee20:	mov    rax,QWORD PTR [rcx]
   140c8ee23:	call   QWORD PTR [rax+0x28]
   140c8ee26:	cmp    eax,0x4
   140c8ee29:	jne    0x140c8efeb
   140c8ee2f:	test   DWORD PTR [rbx+0x10],0x8000000
   140c8ee36:	jne    0x140c8ee96
   140c8ee38:	mov    rdx,rsi
   140c8ee3b:	mov    rcx,r14
   140c8ee3e:	call   0x140070850
   140c8ee43:	mov    rcx,QWORD PTR [rax]
   140c8ee46:	movsx  edx,WORD PTR [rcx+0x18]
   140c8ee4a:	sub    edx,0x1
   140c8ee4d:	je     0x140c8ee87
   140c8ee4f:	sub    edx,0x1
   140c8ee52:	je     0x140c8ee7e
   140c8ee54:	sub    edx,0x1
   140c8ee57:	je     0x140c8ee75
   140c8ee59:	sub    edx,0x1
   140c8ee5c:	je     0x140c8ee6c
   140c8ee5e:	cmp    edx,0x1
   140c8ee61:	jne    0x140c8ee96
   140c8ee63:	lea    rdx,[rip+0xa93476]        # 0x1417222e0
   140c8ee6a:	jmp    0x140c8ee8e
   140c8ee6c:	lea    rdx,[rip+0xa93455]        # 0x1417222c8
   140c8ee73:	jmp    0x140c8ee8e
   140c8ee75:	lea    rdx,[rip+0xa933e4]        # 0x141722260
   140c8ee7c:	jmp    0x140c8ee8e
   140c8ee7e:	lea    rdx,[rip+0xa93433]        # 0x1417222b8
   140c8ee85:	jmp    0x140c8ee8e
   140c8ee87:	lea    rdx,[rip+0xa9341a]        # 0x1417222a8
   140c8ee8e:	mov    rcx,rdi
   140c8ee91:	call   0x140070b90
   140c8ee96:	mov    rdx,rsi
   140c8ee99:	mov    rcx,r14
   140c8ee9c:	call   0x140070850
   140c8eea1:	mov    rcx,QWORD PTR [rax]
   140c8eea4:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8eea7:	mov    rdx,rsi
   140c8eeaa:	mov    rcx,r14
   140c8eead:	call   0x140070850
   140c8eeb2:	mov    rcx,QWORD PTR [rax]
   140c8eeb5:	xor    eax,eax
   140c8eeb7:	mov    WORD PTR [rsp+0x30],ax
   140c8eebc:	mov    BYTE PTR [rsp+0x28],al
   140c8eec0:	mov    DWORD PTR [rsp+0x20],eax
   140c8eec4:	mov    r9d,ebx
   140c8eec7:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8eecc:	lea    rdx,[rbp+0x8]
   140c8eed0:	lea    rcx,[rip+0x1764a99]        # 0x1423f3970
   140c8eed7:	call   0x1414eab90
   140c8eedc:	lea    rdx,[rbp+0x8]
   140c8eee0:	mov    rcx,rdi
   140c8eee3:	call   0x1400bb340
   140c8eee8:	mov    rbx,QWORD PTR [rsp+0x78]
   140c8eeed:	test   DWORD PTR [rbx+0x10],0x8000000
   140c8eef4:	jne    0x140c8efc2
   140c8eefa:	mov    rdx,rsi
   140c8eefd:	mov    rcx,r14
   140c8ef00:	call   0x140070850
   140c8ef05:	mov    rcx,QWORD PTR [rax]
   140c8ef08:	cmp    WORD PTR [rcx+0x18],0x5
   140c8ef0d:	jne    0x140c8efc2
   140c8ef13:	mov    rdx,rsi
   140c8ef16:	mov    rcx,r14
   140c8ef19:	call   0x140070850
   140c8ef1e:	mov    rdx,QWORD PTR [rax]
   140c8ef21:	mov    edx,DWORD PTR [rdx+0x10]
   140c8ef24:	lea    rcx,[rip+0x188d20d]        # 0x14251c138
   140c8ef2b:	call   0x1400693f0
   140c8ef30:	mov    rbx,rax
   140c8ef33:	test   rax,rax
   140c8ef36:	je     0x140c8efbd
   140c8ef3c:	lea    rdx,[rip+0x979d45]        # 0x141608c88
   140c8ef43:	mov    rcx,rdi
   140c8ef46:	call   0x140070b90
   140c8ef4b:	mov    esi,r12d
   140c8ef4e:	and    esi,0x2
   140c8ef51:	je     0x140c8ef7f
   140c8ef53:	lea    rdx,[rip+0x98a9ae]        # 0x141619908
   140c8ef5a:	mov    rcx,rdi
   140c8ef5d:	call   0x140070b90
   140c8ef62:	mov    rdx,rdi
   140c8ef65:	mov    ecx,DWORD PTR [rbx+0xe0]
   140c8ef6b:	call   0x140545610
   140c8ef70:	lea    rdx,[rip+0x98a491]        # 0x141619408
   140c8ef77:	mov    rcx,rdi
   140c8ef7a:	call   0x140070b90
   140c8ef7f:	mov    rcx,rbx
   140c8ef82:	call   0x140c27320
   140c8ef87:	test   rax,rax
   140c8ef8a:	je     0x140c8ef9e
   140c8ef8c:	cmp    BYTE PTR [rax+0x72],0x0
   140c8ef90:	je     0x140c8ef9e
   140c8ef92:	lea    rdx,[rbp+0x8]
   140c8ef96:	mov    rcx,rax
   140c8ef99:	call   0x140aadad0
   140c8ef9e:	lea    rdx,[rbp+0x8]
   140c8efa2:	mov    rcx,rdi
   140c8efa5:	call   0x1400bb340
   140c8efaa:	test   esi,esi
   140c8efac:	je     0x140c8efbd
   140c8efae:	lea    rdx,[rip+0x98a963]        # 0x141619918
   140c8efb5:	mov    rcx,rdi
   140c8efb8:	call   0x140070b90
   140c8efbd:	mov    rbx,QWORD PTR [rsp+0x78]
   140c8efc2:	dec    r13w
   140c8efc6:	cmp    r13w,0x1
   140c8efcb:	jle    0x140c8efd6
   140c8efcd:	lea    rdx,[rip+0x9753c0]        # 0x141604394
   140c8efd4:	jmp    0x140c8efe3
   140c8efd6:	test   r13w,r13w
   140c8efda:	jle    0x140c8efeb
   140c8efdc:	lea    rdx,[rip+0x9753a9]        # 0x14160438c
   140c8efe3:	mov    rcx,rdi
   140c8efe6:	call   0x140070b90
   140c8efeb:	inc    r15d
   140c8efee:	movsxd rsi,r15d
   140c8eff1:	mov    rcx,r14
   140c8eff4:	call   0x140070480
   140c8eff9:	cmp    rsi,rax
   140c8effc:	jb     0x140c8ee12
   140c8f002:	mov    r12d,DWORD PTR [rbp-0x80]
   140c8f006:	dec    r12d
   140c8f009:	cmp    r12d,0x1
   140c8f00d:	jle    0x140c8f018
   140c8f00f:	lea    rdx,[rip+0x97537e]        # 0x141604394
   140c8f016:	jmp    0x140c8f02b
   140c8f018:	test   r12d,r12d
   140c8f01b:	lea    rdx,[rip+0x97536a]        # 0x14160438c
   140c8f022:	jg     0x140c8f02b
   140c8f024:	lea    rdx,[rip+0x98a56d]        # 0x141619598
   140c8f02b:	mov    rcx,rdi
   140c8f02e:	call   0x140070b90
   140c8f033:	xor    esi,esi
   140c8f035:	mov    r12,QWORD PTR [rsp+0x78]
   140c8f03a:	cmp    WORD PTR [rbp+0x70],si
   140c8f03e:	jle    0x140c8f227
   140c8f044:	mov    r15d,esi
   140c8f047:	lea    r14,[r12+0xd0]
   140c8f04f:	mov    rcx,r14
   140c8f052:	call   0x140070480
   140c8f057:	test   rax,rax
   140c8f05a:	je     0x140c8f227
   140c8f060:	mov    rdx,rsi
   140c8f063:	mov    rcx,r14
   140c8f066:	call   0x140070850
   140c8f06b:	mov    rcx,QWORD PTR [rax]
   140c8f06e:	mov    rax,QWORD PTR [rcx]
   140c8f071:	call   QWORD PTR [rax+0x28]
   140c8f074:	test   eax,eax
   140c8f076:	jne    0x140c8f20e
   140c8f07c:	mov    rdx,rsi
   140c8f07f:	mov    rcx,r14
   140c8f082:	call   0x140070850
   140c8f087:	mov    rcx,QWORD PTR [rax]
   140c8f08a:	mov    rax,QWORD PTR [rcx]
   140c8f08d:	mov    rdx,r12
   140c8f090:	call   QWORD PTR [rax]
   140c8f092:	mov    rbx,rax
   140c8f095:	test   rax,rax
   140c8f098:	je     0x140c8f20e
   140c8f09e:	cmp    DWORD PTR [rip+0xc2f193],0x1        # 0x1418be238
   140c8f0a5:	je     0x140c8f0bc
   140c8f0a7:	mov    edx,0xf
   140c8f0ac:	lea    rcx,[rip+0x1724055]        # 0x1423b3108
   140c8f0b3:	call   0x1400735c0
   140c8f0b8:	test   al,al
   140c8f0ba:	je     0x140c8f0cb
   140c8f0bc:	mov    rdx,rbx
   140c8f0bf:	lea    rcx,[rip+0x188d072]        # 0x14251c138
   140c8f0c6:	call   0x140bad470
   140c8f0cb:	lea    rcx,[rbp-0x38]
   140c8f0cf:	call   0x140070cc0
   140c8f0d4:	nop
   140c8f0d5:	mov    eax,DWORD PTR [rbp+0x178]
   140c8f0db:	shr    eax,1
   140c8f0dd:	and    al,0x1
   140c8f0df:	mov    BYTE PTR [rsp+0x50],al
   140c8f0e3:	movzx  r13d,BYTE PTR [rsp+0x70]
   140c8f0e9:	lea    r8,[rbp-0x38]
   140c8f0ed:	mov    rdx,rbx
   140c8f0f0:	lea    rcx,[rip+0x1764879]        # 0x1423f3970
   140c8f0f7:	mov    eax,0xffffffff
   140c8f0fc:	mov    BYTE PTR [rsp+0x48],r13b
   140c8f101:	mov    DWORD PTR [rsp+0x40],eax
   140c8f105:	mov    WORD PTR [rsp+0x38],ax
   140c8f10a:	mov    DWORD PTR [rsp+0x30],0x10
   140c8f112:	movzx  eax,BYTE PTR [rsp+0x72]
   140c8f117:	mov    BYTE PTR [rsp+0x28],al
   140c8f11b:	mov    BYTE PTR [rsp+0x20],0x0
   140c8f120:	test   DWORD PTR [r12+0x10],0x8000000
   140c8f129:	jne    0x140c8f130
   140c8f12b:	xor    r9d,r9d
   140c8f12e:	jmp    0x140c8f133
   140c8f130:	mov    r9b,0x1
   140c8f133:	call   0x14146ad80
   140c8f138:	cmp    DWORD PTR [rbx+0xb0],0x18
   140c8f13f:	jne    0x140c8f1b8
   140c8f145:	lea    rdx,[rip+0xa932b4]        # 0x141722400
   140c8f14c:	lea    rcx,[rbp-0x38]
   140c8f150:	call   0x140070b90
   140c8f155:	mov    rdx,rsi
   140c8f158:	mov    rcx,r14
   140c8f15b:	call   0x140070850
   140c8f160:	mov    rcx,QWORD PTR [rax]
   140c8f163:	mov    ebx,DWORD PTR [rcx+0xc]
   140c8f166:	mov    rdx,rsi
   140c8f169:	mov    rcx,r14
   140c8f16c:	call   0x140070850
   140c8f171:	mov    rcx,QWORD PTR [rax]
   140c8f174:	xor    eax,eax
   140c8f176:	mov    WORD PTR [rsp+0x30],ax
   140c8f17b:	mov    BYTE PTR [rsp+0x28],al
   140c8f17f:	mov    DWORD PTR [rsp+0x20],eax
   140c8f183:	mov    r9d,ebx
   140c8f186:	movzx  r8d,WORD PTR [rcx+0x8]
   140c8f18b:	lea    rdx,[rbp+0x8]
   140c8f18f:	lea    rcx,[rip+0x17647da]        # 0x1423f3970
   140c8f196:	call   0x1414eab90
   140c8f19b:	lea    rdx,[rbp+0x8]
   140c8f19f:	lea    rcx,[rbp-0x38]
   140c8f1a3:	call   0x1400bb340
   140c8f1a8:	lea    rdx,[rip+0x98a3e9]        # 0x141619598
   140c8f1af:	lea    rcx,[rbp-0x38]
   140c8f1b3:	call   0x140070b90
   140c8f1b8:	lea    rcx,[rbp-0x38]
   140c8f1bc:	call   0x140070960
   140c8f1c1:	cmp    rax,0x50
   140c8f1c5:	jb     0x140c8f1f8
   140c8f1c7:	test   r13b,r13b
   140c8f1ca:	jne    0x140c8f1f8
   140c8f1cc:	lea    rdx,[rip+0x9cd309]        # 0x14165c4dc
   140c8f1d3:	mov    rcx,rdi
   140c8f1d6:	call   0x140070b90
   140c8f1db:	lea    rdx,[rbp-0x38]
   140c8f1df:	mov    rcx,rdi
   140c8f1e2:	call   0x1400bb340
   140c8f1e7:	lea    rdx,[rip+0x9cd2ee]        # 0x14165c4dc
   140c8f1ee:	mov    rcx,rdi
   140c8f1f1:	call   0x140070b90
   140c8f1f6:	jmp    0x140c8f205
   140c8f1f8:	lea    rdx,[rbp-0x38]
   140c8f1fc:	mov    rcx,rdi
   140c8f1ff:	call   0x1400bb340
   140c8f204:	nop
   140c8f205:	lea    rcx,[rbp-0x38]
   140c8f209:	call   0x140069460
   140c8f20e:	inc    r15d
   140c8f211:	movsxd rsi,r15d
   140c8f214:	mov    rcx,r14
   140c8f217:	call   0x140070480
   140c8f21c:	cmp    rsi,rax
   140c8f21f:	jb     0x140c8f060
   140c8f225:	xor    esi,esi
   140c8f227:	cmp    WORD PTR [rbp+0xb0],0x0
   140c8f22f:	jle    0x140c8f55c
   140c8f235:	mov    r15d,esi
   140c8f238:	lea    rcx,[r12+0xd0]
   140c8f240:	call   0x140070480
   140c8f245:	test   rax,rax
   140c8f248:	je     0x140c8f55c
   140c8f24e:	mov    rbx,rsi
   140c8f251:	nop    DWORD PTR [rax+0x0]
   140c8f255:	data16 data16 nop WORD PTR [rax+rax*1+0x0]
   140c8f260:	mov    rdx,rbx
   140c8f263:	lea    rcx,[r12+0xd0]
   140c8f26b:	call   0x140070850
   140c8f270:	mov    rcx,QWORD PTR [rax]
   140c8f273:	mov    rax,QWORD PTR [rcx]
   140c8f276:	call   QWORD PTR [rax+0x28]
   140c8f279:	cmp    eax,0x8
   140c8f27c:	jne    0x140c8f540
   140c8f282:	mov    rdx,rbx
   140c8f285:	lea    rcx,[r12+0xd0]
   140c8f28d:	call   0x140070850
   140c8f292:	mov    rcx,QWORD PTR [rax]
   140c8f295:	mov    rax,QWORD PTR [rcx]
   140c8f298:	mov    rdx,r12
   140c8f29b:	call   QWORD PTR [rax]
   140c8f29d:	mov    rsi,rax
   140c8f2a0:	test   rax,rax
   140c8f2a3:	je     0x140c8f53e
   140c8f2a9:	cmp    DWORD PTR [rip+0xc2ef88],0x1        # 0x1418be238
   140c8f2b0:	je     0x140c8f2c7
   140c8f2b2:	mov    edx,0xf
   140c8f2b7:	lea    rcx,[rip+0x1723e4a]        # 0x1423b3108
   140c8f2be:	call   0x1400735c0
   140c8f2c3:	test   al,al
   140c8f2c5:	je     0x140c8f2d6
   140c8f2c7:	mov    rdx,rsi
   140c8f2ca:	lea    rcx,[rip+0x188ce67]        # 0x14251c138
   140c8f2d1:	call   0x140bad470
   140c8f2d6:	lea    rcx,[rbp-0x38]
   140c8f2da:	call   0x140070cc0
   140c8f2df:	nop
   140c8f2e0:	mov    r13d,DWORD PTR [rbp+0x178]
   140c8f2e7:	mov    eax,r13d
   140c8f2ea:	shr    eax,1
   140c8f2ec:	and    al,0x1
   140c8f2ee:	mov    BYTE PTR [rsp+0x50],al
   140c8f2f2:	lea    r8,[rbp-0x38]
   140c8f2f6:	mov    rdx,rsi
   140c8f2f9:	lea    rcx,[rip+0x1764670]        # 0x1423f3970
   140c8f300:	movzx  eax,BYTE PTR [rsp+0x70]
   140c8f305:	mov    BYTE PTR [rsp+0x48],al
   140c8f309:	mov    eax,0xffffffff
   140c8f30e:	mov    DWORD PTR [rsp+0x40],eax
   140c8f312:	mov    WORD PTR [rsp+0x38],ax
   140c8f317:	mov    DWORD PTR [rsp+0x30],0x10
   140c8f31f:	movzx  eax,BYTE PTR [rsp+0x72]
   140c8f324:	mov    BYTE PTR [rsp+0x28],al
   140c8f328:	mov    BYTE PTR [rsp+0x20],0x0
   140c8f32d:	test   DWORD PTR [r12+0x10],0x8000000
   140c8f336:	jne    0x140c8f33d
   140c8f338:	xor    r9d,r9d
   140c8f33b:	jmp    0x140c8f340
   140c8f33d:	mov    r9b,0x1
   140c8f340:	call   0x14146ad80
   140c8f345:	mov    rdx,rbx
   140c8f348:	lea    rcx,[r12+0xd0]
   140c8f350:	call   0x140070850
   140c8f355:	mov    rbx,QWORD PTR [rax]
   140c8f358:	mov    r9d,DWORD PTR [rbx+0xc]
   140c8f35c:	movzx  r8d,WORD PTR [rbx+0x8]
   140c8f361:	mov    edx,0x18
   140c8f366:	lea    rcx,[rip+0x1764603]        # 0x1423f3970
   140c8f36d:	call   0x141475150
   140c8f372:	test   al,al
   140c8f374:	jne    0x140c8f422
   140c8f37a:	mov    r9d,DWORD PTR [rbx+0xc]
   140c8f37e:	movzx  r8d,WORD PTR [rbx+0x8]
   140c8f383:	mov    edx,0x1e
   140c8f388:	lea    rcx,[rip+0x17645e1]        # 0x1423f3970
   140c8f38f:	call   0x141475150
   140c8f394:	test   al,al
   140c8f396:	jne    0x140c8f422
   140c8f39c:	mov    r9d,DWORD PTR [rbx+0xc]
   140c8f3a0:	movzx  r8d,WORD PTR [rbx+0x8]
   140c8f3a5:	mov    edx,0x3e
   140c8f3aa:	lea    rcx,[rip+0x17645bf]        # 0x1423f3970
   140c8f3b1:	call   0x141475150
   140c8f3b6:	test   al,al
   140c8f3b8:	jne    0x140c8f422
   140c8f3ba:	cmp    DWORD PTR [rsi+0xb0],0x18
   140c8f3c1:	jne    0x140c8f4e2
   140c8f3c7:	lea    rdx,[rip+0xa93032]        # 0x141722400
   140c8f3ce:	lea    rcx,[rbp-0x38]
   140c8f3d2:	call   0x140070b90
   140c8f3d7:	xor    esi,esi
   140c8f3d9:	mov    WORD PTR [rsp+0x30],si
   140c8f3de:	mov    BYTE PTR [rsp+0x28],sil
   140c8f3e3:	mov    DWORD PTR [rsp+0x20],esi
   140c8f3e7:	mov    r9d,DWORD PTR [rbx+0xc]
   140c8f3eb:	movzx  r8d,WORD PTR [rbx+0x8]
   140c8f3f0:	lea    rdx,[rbp+0x8]
   140c8f3f4:	lea    rcx,[rip+0x1764575]        # 0x1423f3970
   140c8f3fb:	call   0x1414eab90
   140c8f400:	lea    rdx,[rbp+0x8]
   140c8f404:	lea    rcx,[rbp-0x38]
   140c8f408:	call   0x1400bb340
   140c8f40d:	lea    rdx,[rip+0x98a184]        # 0x141619598
   140c8f414:	lea    rcx,[rbp-0x38]
   140c8f418:	call   0x140070b90
   140c8f41d:	jmp    0x140c8f4e4
   140c8f422:	lea    rcx,[rbp+0x28]
   140c8f426:	call   0x140070cc0
   140c8f42b:	nop
   140c8f42c:	mov    r9d,DWORD PTR [r12+0x10]
   140c8f431:	shr    r9d,0x1b
   140c8f435:	not    r9b
   140c8f438:	and    r9b,0x1
   140c8f43c:	mov    DWORD PTR [rsp+0x38],r13d
   140c8f441:	mov    eax,DWORD PTR [rbx+0x38]
   140c8f444:	mov    DWORD PTR [rsp+0x30],eax
   140c8f448:	mov    eax,DWORD PTR [rbx+0xc]
   140c8f44b:	mov    DWORD PTR [rsp+0x28],eax
   140c8f44f:	movzx  eax,WORD PTR [rbx+0x8]
   140c8f453:	mov    WORD PTR [rsp+0x20],ax
   140c8f458:	movzx  r8d,BYTE PTR [rbx+0x3c]
   140c8f45d:	lea    rdx,[rbp+0x28]
   140c8f461:	lea    rcx,[rip+0x1778468]        # 0x1424078d0
   140c8f468:	call   0x140cc4a60
   140c8f46d:	lea    rdx,[rbp+0x28]
   140c8f471:	lea    rcx,[rbp-0x38]
   140c8f475:	call   0x1400bb340
   140c8f47a:	cmp    WORD PTR [rbx+0x40],0xffff
   140c8f47f:	je     0x140c8f4d9
   140c8f481:	lea    rcx,[rbp-0x18]
   140c8f485:	call   0x140070cc0
   140c8f48a:	nop
   140c8f48b:	lea    rcx,[rbx+0x58]
   140c8f48f:	mov    DWORD PTR [rsp+0x38],r13d
   140c8f494:	mov    eax,DWORD PTR [rbx+0x48]
   140c8f497:	mov    DWORD PTR [rsp+0x30],eax
   140c8f49b:	mov    QWORD PTR [rsp+0x28],rcx
   140c8f4a0:	mov    eax,DWORD PTR [rbx+0x44]
   140c8f4a3:	mov    DWORD PTR [rsp+0x20],eax
   140c8f4a7:	movzx  r9d,WORD PTR [rbx+0x40]
   140c8f4ac:	movzx  r8d,BYTE PTR [rbx+0x4c]
   140c8f4b1:	lea    rdx,[rbp-0x18]
   140c8f4b5:	lea    rcx,[rip+0x1778414]        # 0x1424078d0
   140c8f4bc:	call   0x140cc4f60
   140c8f4c1:	lea    rdx,[rbp-0x18]
   140c8f4c5:	lea    rcx,[rbp-0x38]
   140c8f4c9:	call   0x1400bb340
   140c8f4ce:	nop
   140c8f4cf:	lea    rcx,[rbp-0x18]
   140c8f4d3:	call   0x140069460
   140c8f4d8:	nop
   140c8f4d9:	lea    rcx,[rbp+0x28]
   140c8f4dd:	call   0x140069460
   140c8f4e2:	xor    esi,esi
   140c8f4e4:	lea    rcx,[rbp-0x38]
   140c8f4e8:	call   0x140070960
   140c8f4ed:	cmp    rax,0x50
   140c8f4f1:	jb     0x140c8f526
   140c8f4f3:	cmp    BYTE PTR [rsp+0x70],0x0
   140c8f4f8:	jne    0x140c8f526
   140c8f4fa:	lea    rdx,[rip+0x9ccfdb]        # 0x14165c4dc
   140c8f501:	mov    rcx,rdi
   140c8f504:	call   0x140070b90
   140c8f509:	lea    rdx,[rbp-0x38]
   140c8f50d:	mov    rcx,rdi
   140c8f510:	call   0x1400bb340
   140c8f515:	lea    rdx,[rip+0x9ccfc0]        # 0x14165c4dc
   140c8f51c:	mov    rcx,rdi
   140c8f51f:	call   0x140070b90
   140c8f524:	jmp    0x140c8f533
   140c8f526:	lea    rdx,[rbp-0x38]
   140c8f52a:	mov    rcx,rdi
   140c8f52d:	call   0x1400bb340
   140c8f532:	nop
   140c8f533:	lea    rcx,[rbp-0x38]
   140c8f537:	call   0x140069460
   140c8f53c:	jmp    0x140c8f540
   140c8f53e:	xor    esi,esi
   140c8f540:	inc    r15d
   140c8f543:	movsxd rbx,r15d
   140c8f546:	lea    rcx,[r12+0xd0]
   140c8f54e:	call   0x140070480
   140c8f553:	cmp    rbx,rax
   140c8f556:	jb     0x140c8f260
   140c8f55c:	cmp    WORD PTR [rbp+0xd8],0x0
   140c8f564:	jle    0x140c8fa7d
   140c8f56a:	mov    r14d,esi
   140c8f56d:	mov    DWORD PTR [rbp-0x70],esi
   140c8f570:	lea    rsi,[r12+0xd0]
   140c8f578:	mov    QWORD PTR [rbp-0x48],rsi
   140c8f57c:	mov    rcx,rsi
   140c8f57f:	call   0x140070480
   140c8f584:	test   rax,rax
   140c8f587:	je     0x140c8fa7d
   140c8f58d:	xor    eax,eax
   140c8f58f:	mov    ebx,eax
   140c8f591:	mov    rdx,rbx
   140c8f594:	mov    rcx,rsi
   140c8f597:	call   0x140070850
   140c8f59c:	mov    rcx,QWORD PTR [rax]
   140c8f59f:	mov    rax,QWORD PTR [rcx]
   140c8f5a2:	call   QWORD PTR [rax+0x28]
   140c8f5a5:	cmp    eax,0xd
   140c8f5a8:	jne    0x140c8fa62
   140c8f5ae:	mov    rdx,rbx
   140c8f5b1:	mov    rcx,rsi
   140c8f5b4:	call   0x140070850
   140c8f5b9:	mov    rdx,QWORD PTR [rax]
   140c8f5bc:	mov    edx,DWORD PTR [rdx+0x28]
   140c8f5bf:	lea    rcx,[rip+0x187aed2]        # 0x14250a498
   140c8f5c6:	call   0x140073ba0
   140c8f5cb:	mov    r13,rax
   140c8f5ce:	test   rax,rax
   140c8f5d1:	je     0x140c8fa7d
   140c8f5d7:	mov    eax,0xffffffff
   140c8f5dc:	mov    r14d,eax
   140c8f5df:	mov    r15d,eax
   140c8f5e2:	mov    esi,eax
   140c8f5e4:	mov    r12b,0x1
   140c8f5e7:	lea    rdx,[rbp-0x80]
   140c8f5eb:	lea    rcx,[r13+0x8]
   140c8f5ef:	call   0x140070870
   140c8f5f4:	lea    rdx,[rbp-0x68]
   140c8f5f8:	lea    rcx,[r13+0x8]
   140c8f5fc:	call   0x140070860
   140c8f601:	lea    r8,[rbp-0x68]
   140c8f605:	lea    rdx,[rsp+0x71]
   140c8f60a:	lea    rcx,[rbp-0x80]
   140c8f60e:	call   0x140070450
   140c8f613:	xor    edx,edx
   140c8f615:	movzx  ecx,BYTE PTR [rax]
   140c8f618:	call   0x140066de0
   140c8f61d:	test   al,al
   140c8f61f:	je     0x140c8f6c7
   140c8f625:	xor    edi,edi
   140c8f627:	cmp    r14d,0xffffffff
   140c8f62b:	je     0x140c8f63f
   140c8f62d:	lea    rcx,[rbp-0x80]
   140c8f631:	call   0x140070440
   140c8f636:	mov    rcx,QWORD PTR [rax]
   140c8f639:	cmp    DWORD PTR [rcx+0xc],r14d
   140c8f63d:	jge    0x140c8f64f
   140c8f63f:	lea    rcx,[rbp-0x80]
   140c8f643:	call   0x140070440
   140c8f648:	mov    rcx,QWORD PTR [rax]
   140c8f64b:	mov    r14d,DWORD PTR [rcx+0xc]
   140c8f64f:	cmp    r15d,0xffffffff
   140c8f653:	je     0x140c8f667
   140c8f655:	lea    rcx,[rbp-0x80]
   140c8f659:	call   0x140070440
   140c8f65e:	mov    rcx,QWORD PTR [rax]
   140c8f661:	cmp    DWORD PTR [rcx+0xc],r15d
   140c8f665:	jle    0x140c8f677
   140c8f667:	lea    rcx,[rbp-0x80]
   140c8f66b:	call   0x140070440
   140c8f670:	mov    rcx,QWORD PTR [rax]
   140c8f673:	mov    r15d,DWORD PTR [rcx+0xc]
   140c8f677:	lea    rcx,[rbp-0x80]
   140c8f67b:	call   0x140070440
   140c8f680:	mov    rcx,QWORD PTR [rax]
   140c8f683:	cmp    esi,0xffffffff
   140c8f686:	jne    0x140c8f68c
   140c8f688:	mov    esi,DWORD PTR [rcx]
   140c8f68a:	jmp    0x140c8f696
   140c8f68c:	movzx  r12d,r12b
   140c8f690:	cmp    DWORD PTR [rcx],esi
   140c8f692:	cmovne r12d,edi
   140c8f696:	lea    rcx,[rbp-0x80]
   140c8f69a:	call   0x140070430
   140c8f69f:	lea    r8,[rbp-0x68]
   140c8f6a3:	lea    rdx,[rsp+0x71]
   140c8f6a8:	lea    rcx,[rbp-0x80]
   140c8f6ac:	call   0x140070450
   140c8f6b1:	xor    edx,edx
   140c8f6b3:	movzx  ecx,BYTE PTR [rax]
   140c8f6b6:	call   0x140066de0
   140c8f6bb:	test   al,al
   140c8f6bd:	jne    0x140c8f627
   140c8f6c3:	mov    rdi,QWORD PTR [rbp-0x58]
   140c8f6c7:	mov    bl,0x1
   140c8f6c9:	cmp    DWORD PTR [rip+0xc2eb68],0x1        # 0x1418be238
   140c8f6d0:	jne    0x140c8f708
   140c8f6d2:	mov    rax,QWORD PTR [rip+0x1777eb7]        # 0x142407590
   140c8f6d9:	test   rax,rax
   140c8f6dc:	je     0x140c8f708
   140c8f6de:	mov    rdx,QWORD PTR [rax+0xa98]
   140c8f6e5:	test   rdx,rdx
   140c8f6e8:	je     0x140c8f706
   140c8f6ea:	add    rdx,0x218
   140c8f6f1:	mov    ecx,0x5b
   140c8f6f6:	call   0x1400bb7d0
   140c8f6fb:	test   rax,rax
   140c8f6fe:	je     0x140c8f706
   140c8f700:	cmp    DWORD PTR [rax+0x4],0x0
   140c8f704:	jg     0x140c8f708
   140c8f706:	xor    bl,bl
   140c8f708:	lea    rcx,[rbp+0x28]
   140c8f70c:	call   0x140070cc0
   140c8f711:	nop
   140c8f712:	lea    rcx,[r13+0x8]
   140c8f716:	call   0x140070480
   140c8f71b:	mov    rcx,rax
   140c8f71e:	lea    rdx,[rbp+0x28]
   140c8f722:	call   0x140547840
   140c8f727:	lea    rcx,[rbp-0x38]
   140c8f72b:	call   0x140070cc0
   140c8f730:	nop
   140c8f731:	cmp    DWORD PTR [r13+0x4],0x0
   140c8f736:	jne    0x140c8f748
   140c8f738:	lea    rdx,[rip+0xa92cd9]        # 0x141722418
   140c8f73f:	lea    rcx,[rbp-0x38]
   140c8f743:	call   0x140070b90
   140c8f748:	test   r12b,r12b
   140c8f74b:	je     0x140c8f953
   140c8f751:	cmp    esi,0xffffffff
   140c8f754:	je     0x140c8f953
   140c8f75a:	test   esi,esi
   140c8f75c:	je     0x140c8f92d
   140c8f762:	sub    esi,0x1
   140c8f765:	je     0x140c8f8f3
   140c8f76b:	sub    esi,0x1
   140c8f76e:	je     0x140c8f8ca
   140c8f774:	sub    esi,0x1
   140c8f777:	je     0x140c8f828
   140c8f77d:	cmp    esi,0x1
   140c8f780:	jne    0x140c8f980
   140c8f786:	lea    rdx,[rip+0xa92d23]        # 0x1417224b0
   140c8f78d:	lea    rcx,[rbp-0x38]
   140c8f791:	call   0x140070b90
   140c8f796:	cmp    r14d,0xffffffff
   140c8f79a:	je     0x140c8f980
   140c8f7a0:	cmp    r15d,r14d
   140c8f7a3:	je     0x140c8f980
   140c8f7a9:	lea    rdx,[rip+0xa92cf0]        # 0x1417224a0
   140c8f7b0:	lea    rcx,[rbp-0x38]
   140c8f7b4:	call   0x140070b90
   140c8f7b9:	lea    rcx,[rbp+0x48]
   140c8f7bd:	call   0x140070cc0
   140c8f7c2:	nop
   140c8f7c3:	lea    rdx,[rbp+0x48]
   140c8f7c7:	mov    ecx,r14d
   140c8f7ca:	call   0x140547840
   140c8f7cf:	lea    rdx,[rbp+0x48]
   140c8f7d3:	lea    rcx,[rbp-0x38]
   140c8f7d7:	call   0x1400bb340
   140c8f7dc:	lea    rdx,[rip+0x979051]        # 0x141608834
   140c8f7e3:	lea    rcx,[rbp-0x38]
   140c8f7e7:	call   0x140070b90
   140c8f7ec:	lea    rcx,[rbp-0x18]
   140c8f7f0:	call   0x140070cc0
   140c8f7f5:	nop
   140c8f7f6:	lea    rdx,[rbp-0x18]
   140c8f7fa:	mov    ecx,r15d
   140c8f7fd:	call   0x140547840
   140c8f802:	lea    rdx,[rbp-0x18]
   140c8f806:	lea    rcx,[rbp-0x38]
   140c8f80a:	call   0x1400bb340
   140c8f80f:	nop
   140c8f810:	lea    rcx,[rbp-0x18]
   140c8f814:	call   0x140069460
   140c8f819:	nop
   140c8f81a:	lea    rcx,[rbp+0x48]
   140c8f81e:	call   0x140069460
   140c8f823:	jmp    0x140c8f980
   140c8f828:	lea    rdx,[rip+0xa92c65]        # 0x141722494
   140c8f82f:	lea    rcx,[rbp-0x38]
   140c8f833:	call   0x140070b90
   140c8f838:	cmp    r14d,0xffffffff
   140c8f83c:	je     0x140c8f980
   140c8f842:	cmp    r15d,r14d
   140c8f845:	je     0x140c8f980
   140c8f84b:	lea    rdx,[rip+0xa92c4e]        # 0x1417224a0
   140c8f852:	lea    rcx,[rbp-0x38]
   140c8f856:	call   0x140070b90
   140c8f85b:	lea    rcx,[rbp-0x18]
   140c8f85f:	call   0x140070cc0
   140c8f864:	nop
   140c8f865:	lea    rdx,[rbp-0x18]
   140c8f869:	mov    ecx,r14d
   140c8f86c:	call   0x140547840
   140c8f871:	lea    rdx,[rbp-0x18]
   140c8f875:	lea    rcx,[rbp-0x38]
   140c8f879:	call   0x1400bb340
   140c8f87e:	lea    rdx,[rip+0x978faf]        # 0x141608834
   140c8f885:	lea    rcx,[rbp-0x38]
   140c8f889:	call   0x140070b90
   140c8f88e:	lea    rcx,[rbp+0x48]
   140c8f892:	call   0x140070cc0
   140c8f897:	nop
   140c8f898:	lea    rdx,[rbp+0x48]
   140c8f89c:	mov    ecx,r15d
   140c8f89f:	call   0x140547840
   140c8f8a4:	lea    rdx,[rbp+0x48]
   140c8f8a8:	lea    rcx,[rbp-0x38]
   140c8f8ac:	call   0x1400bb340
   140c8f8b1:	nop
   140c8f8b2:	lea    rcx,[rbp+0x48]
   140c8f8b6:	call   0x140069460
   140c8f8bb:	nop
   140c8f8bc:	lea    rcx,[rbp-0x18]
   140c8f8c0:	call   0x140069460
   140c8f8c5:	jmp    0x140c8f980
   140c8f8ca:	lea    rdx,[rip+0xa92b67]        # 0x141722438
   140c8f8d1:	lea    rcx,[rbp-0x38]
   140c8f8d5:	call   0x140070b90
   140c8f8da:	lea    rdx,[rbp+0x28]
   140c8f8de:	lea    rcx,[rbp-0x38]
   140c8f8e2:	call   0x1400bb340
   140c8f8e7:	lea    rdx,[rip+0xa92b9a]        # 0x141722488
   140c8f8ee:	jmp    0x140c8f977
   140c8f8f3:	lea    rdx,[rip+0xa92b3e]        # 0x141722438
   140c8f8fa:	lea    rcx,[rbp-0x38]
   140c8f8fe:	call   0x140070b90
   140c8f903:	lea    rdx,[rbp+0x28]
   140c8f907:	lea    rcx,[rbp-0x38]
   140c8f90b:	call   0x1400bb340
   140c8f910:	lea    rdx,[rip+0xa92b51]        # 0x141722468
   140c8f917:	lea    rcx,[rbp-0x38]
   140c8f91b:	call   0x140070b90
   140c8f920:	test   bl,bl
   140c8f922:	jne    0x140c8f980
   140c8f924:	lea    rdx,[rip+0xa92b45]        # 0x141722470
   140c8f92b:	jmp    0x140c8f977
   140c8f92d:	lea    rdx,[rip+0xa92b04]        # 0x141722438
   140c8f934:	lea    rcx,[rbp-0x38]
   140c8f938:	call   0x140070b90
   140c8f93d:	lea    rdx,[rbp+0x28]
   140c8f941:	lea    rcx,[rbp-0x38]
   140c8f945:	call   0x1400bb340
   140c8f94a:	lea    rdx,[rip+0xa92b0f]        # 0x141722460
   140c8f951:	jmp    0x140c8f977
   140c8f953:	lea    rdx,[rip+0xa92ade]        # 0x141722438
   140c8f95a:	lea    rcx,[rbp-0x38]
   140c8f95e:	call   0x140070b90
   140c8f963:	lea    rdx,[rbp+0x28]
   140c8f967:	lea    rcx,[rbp-0x38]
   140c8f96b:	call   0x1400bb340
   140c8f970:	lea    rdx,[rip+0xa92ad1]        # 0x141722448
   140c8f977:	lea    rcx,[rbp-0x38]
   140c8f97b:	call   0x140070b90
   140c8f980:	lea    rdx,[rip+0x973ebd]        # 0x141603844
   140c8f987:	lea    rcx,[rbp-0x38]
   140c8f98b:	call   0x140070b90
   140c8f990:	lea    rdx,[rbp-0x38]
   140c8f994:	mov    rcx,rdi
   140c8f997:	call   0x1400bb340
   140c8f99c:	mov    r12,QWORD PTR [rsp+0x78]
   140c8f9a1:	cmp    DWORD PTR [r13+0x4],0x0
   140c8f9a6:	jne    0x140c8fa47
   140c8f9ac:	test   bl,bl
   140c8f9ae:	je     0x140c8fa47
   140c8f9b4:	mov    rax,QWORD PTR [r12]
   140c8f9b8:	mov    rcx,r12
   140c8f9bb:	call   QWORD PTR [rax+0x750]
   140c8f9c1:	movsxd rbx,eax
   140c8f9c4:	test   eax,eax
   140c8f9c6:	js     0x140c8fa47
   140c8f9cc:	lea    rcx,[r13+0x8]
   140c8f9d0:	call   0x140070480
   140c8f9d5:	cmp    ebx,eax
   140c8f9d7:	jge    0x140c8fa47
   140c8f9d9:	test   BYTE PTR [r12+0x10],0x21
   140c8f9df:	je     0x140c8fa47
   140c8f9e1:	lea    rdx,[rip+0x989440]        # 0x141618e28
   140c8f9e8:	mov    rcx,rdi
   140c8f9eb:	call   0x140070b90
   140c8f9f0:	lea    rdx,[rip+0xa92ac1]        # 0x1417224b8
   140c8f9f7:	mov    rcx,rdi
   140c8f9fa:	call   0x140070b90
   140c8f9ff:	lea    rcx,[rbp+0x48]
   140c8fa03:	call   0x140070cc0
   140c8fa08:	nop
   140c8fa09:	mov    rdx,rbx
   140c8fa0c:	lea    rcx,[r13+0x8]
   140c8fa10:	call   0x140070850
   140c8fa15:	lea    rdx,[rbp+0x48]
   140c8fa19:	mov    rcx,QWORD PTR [rax]
   140c8fa1c:	call   0x140877150
   140c8fa21:	lea    rdx,[rbp+0x48]
   140c8fa25:	mov    rcx,rdi
   140c8fa28:	call   0x1400bb340
   140c8fa2d:	lea    rdx,[rip+0x973e10]        # 0x141603844
   140c8fa34:	mov    rcx,rdi
   140c8fa37:	call   0x140070b90
   140c8fa3c:	nop
   140c8fa3d:	lea    rcx,[rbp+0x48]
   140c8fa41:	call   0x140069460
   140c8fa46:	nop
   140c8fa47:	lea    rcx,[rbp-0x38]
   140c8fa4b:	call   0x140069460
   140c8fa50:	nop
   140c8fa51:	lea    rcx,[rbp+0x28]
   140c8fa55:	call   0x140069460
   140c8fa5a:	mov    rsi,QWORD PTR [rbp-0x48]
   140c8fa5e:	mov    r14d,DWORD PTR [rbp-0x70]
   140c8fa62:	inc    r14d
   140c8fa65:	mov    DWORD PTR [rbp-0x70],r14d
   140c8fa69:	movsxd rbx,r14d
   140c8fa6c:	mov    rcx,rsi
   140c8fa6f:	call   0x140070480
   140c8fa74:	cmp    rbx,rax
   140c8fa77:	jb     0x140c8f591
   140c8fa7d:	xor    ebx,ebx
   140c8fa7f:	cmp    WORD PTR [rbp+0xd0],bx
   140c8fa86:	jle    0x140c8fca1
   140c8fa8c:	mov    r15d,ebx
   140c8fa8f:	lea    r14,[r12+0xd0]
   140c8fa97:	mov    rcx,r14
   140c8fa9a:	call   0x140070480
   140c8fa9f:	test   rax,rax
   140c8faa2:	je     0x140c8fca1
   140c8faa8:	mov    r12d,DWORD PTR [rbp+0x178]
   140c8faaf:	nop
   140c8fab0:	mov    rdx,rbx
   140c8fab3:	mov    rcx,r14
   140c8fab6:	call   0x140070850
   140c8fabb:	mov    rcx,QWORD PTR [rax]
   140c8fabe:	mov    rax,QWORD PTR [rcx]
   140c8fac1:	call   QWORD PTR [rax+0x28]
   140c8fac4:	cmp    eax,0xc
   140c8fac7:	jne    0x140c8fc83
   140c8facd:	mov    rdx,rbx
   140c8fad0:	mov    rcx,r14
   140c8fad3:	call   0x140070850
   140c8fad8:	mov    rsi,QWORD PTR [rax]
   140c8fadb:	lea    rcx,[rsi+0x28]
   140c8fadf:	call   0x1400709a0
   140c8fae4:	test   rax,rax
   140c8fae7:	je     0x140c8fc83
   140c8faed:	cmp    DWORD PTR [rip+0xc2e744],0x1        # 0x1418be238
   140c8faf4:	jne    0x140c8fb8d
   140c8fafa:	mov    rax,QWORD PTR [rip+0x1777a8f]        # 0x142407590
   140c8fb01:	test   rax,rax
   140c8fb04:	je     0x140c8fb8d
   140c8fb0a:	mov    rdx,QWORD PTR [rax+0xa98]
   140c8fb11:	test   rdx,rdx
   140c8fb14:	je     0x140c8fc0f
   140c8fb1a:	add    rdx,0x218
   140c8fb21:	mov    ecx,0x5b
   140c8fb26:	call   0x1400bb7d0
   140c8fb2b:	test   rax,rax
   140c8fb2e:	je     0x140c8fc0f
   140c8fb34:	cmp    DWORD PTR [rax+0x4],0x0
   140c8fb38:	jle    0x140c8fc0f
   140c8fb3e:	cmp    DWORD PTR [rip+0xc2e6f3],0x1        # 0x1418be238
   140c8fb45:	jne    0x140c8fb8d
   140c8fb47:	mov    rcx,QWORD PTR [rip+0x1777a42]        # 0x142407590
   140c8fb4e:	test   rcx,rcx
   140c8fb51:	je     0x140c8fb8d
   140c8fb53:	call   0x1413cc070
   140c8fb58:	test   rax,rax
   140c8fb5b:	je     0x140c8fbc1
   140c8fb5d:	mov    rax,QWORD PTR [rax+0x130]
   140c8fb64:	test   rax,rax
   140c8fb67:	je     0x140c8fbc1
   140c8fb69:	mov    rbx,QWORD PTR [rax+0x40]
   140c8fb6d:	test   rbx,rbx
   140c8fb70:	je     0x140c8fbc1
   140c8fb72:	lea    rcx,[rsi+0x28]
   140c8fb76:	xor    edx,edx
   140c8fb78:	call   0x140070990
   140c8fb7d:	lea    rdx,[rbx+0x20]
   140c8fb81:	mov    ecx,DWORD PTR [rax]
   140c8fb83:	call   0x1400bb5a0
   140c8fb88:	cmp    eax,0xffffffff
   140c8fb8b:	je     0x140c8fbc1
   140c8fb8d:	mov    rcx,rdi
   140c8fb90:	cmp    BYTE PTR [rsp+0x70],0x0
   140c8fb95:	jne    0x140c8fc5a
   140c8fb9b:	lea    rdx,[rip+0x9cc93a]        # 0x14165c4dc
   140c8fba2:	call   0x140070b90
   140c8fba7:	mov    r8d,r12d
   140c8fbaa:	mov    rdx,rdi
   140c8fbad:	mov    rcx,rsi
   140c8fbb0:	call   0x140cde700
   140c8fbb5:	lea    rdx,[rip+0x9cc920]        # 0x14165c4dc
   140c8fbbc:	jmp    0x140c8fc7b
   140c8fbc1:	mov    rcx,rdi
   140c8fbc4:	cmp    BYTE PTR [rsp+0x70],0x0
   140c8fbc9:	jne    0x140c8fbf2
   140c8fbcb:	lea    rdx,[rip+0x9cc90a]        # 0x14165c4dc
   140c8fbd2:	call   0x140070b90
   140c8fbd7:	lea    rdx,[rip+0xa928f2]        # 0x1417224d0
   140c8fbde:	mov    rcx,rdi
   140c8fbe1:	call   0x140070b90
   140c8fbe6:	lea    rdx,[rip+0x9cc8ef]        # 0x14165c4dc
   140c8fbed:	jmp    0x140c8fc7b
   140c8fbf2:	lea    rdx,[rip+0x98922f]        # 0x141618e28
   140c8fbf9:	call   0x140070b90
   140c8fbfe:	lea    rdx,[rip+0xa928cb]        # 0x1417224d0
   140c8fc05:	mov    rcx,rdi
   140c8fc08:	call   0x140070b90
   140c8fc0d:	jmp    0x140c8fc74
   140c8fc0f:	mov    rcx,rdi
   140c8fc12:	cmp    BYTE PTR [rsp+0x70],0x0
   140c8fc17:	jne    0x140c8fc3d
   140c8fc19:	lea    rdx,[rip+0x9cc8bc]        # 0x14165c4dc
   140c8fc20:	call   0x140070b90
   140c8fc25:	lea    rdx,[rip+0xa928dc]        # 0x141722508
   140c8fc2c:	mov    rcx,rdi
   140c8fc2f:	call   0x140070b90
   140c8fc34:	lea    rdx,[rip+0x9cc8a1]        # 0x14165c4dc
   140c8fc3b:	jmp    0x140c8fc7b
   140c8fc3d:	lea    rdx,[rip+0x9891e4]        # 0x141618e28
   140c8fc44:	call   0x140070b90
   140c8fc49:	lea    rdx,[rip+0xa928b8]        # 0x141722508
   140c8fc50:	mov    rcx,rdi
   140c8fc53:	call   0x140070b90
   140c8fc58:	jmp    0x140c8fc74
   140c8fc5a:	lea    rdx,[rip+0x9891c7]        # 0x141618e28
   140c8fc61:	call   0x140070b90
   140c8fc66:	mov    r8d,r12d
   140c8fc69:	mov    rdx,rdi
   140c8fc6c:	mov    rcx,rsi
   140c8fc6f:	call   0x140cde700
   140c8fc74:	lea    rdx,[rip+0x9891ad]        # 0x141618e28
   140c8fc7b:	mov    rcx,rdi
   140c8fc7e:	call   0x140070b90
   140c8fc83:	inc    r15d
   140c8fc86:	movsxd rbx,r15d
   140c8fc89:	mov    rcx,r14
   140c8fc8c:	call   0x140070480
   140c8fc91:	cmp    rbx,rax
   140c8fc94:	jb     0x140c8fab0
   140c8fc9a:	mov    r12,QWORD PTR [rsp+0x78]
   140c8fc9f:	xor    ebx,ebx
   140c8fca1:	mov    rax,QWORD PTR [r12]
   140c8fca5:	mov    rcx,r12
   140c8fca8:	call   QWORD PTR [rax]
   140c8fcaa:	cmp    ax,0x3a
   140c8fcae:	jne    0x140c8fd55
   140c8fcb4:	cmp    BYTE PTR [rbp-0x60],0x0
   140c8fcb8:	jne    0x140c8fd55
   140c8fcbe:	mov    rax,QWORD PTR [r12]
   140c8fcc2:	mov    rcx,r12
   140c8fcc5:	call   QWORD PTR [rax+0x6b0]
   140c8fccb:	movsxd rbx,eax
   140c8fcce:	test   eax,eax
   140c8fcd0:	js     0x140c8d715
   140c8fcd6:	lea    rcx,[rip+0x188985b]        # 0x142519538
   140c8fcdd:	call   0x140070480
   140c8fce2:	cmp    ebx,eax
   140c8fce4:	jge    0x140c8d715
   140c8fcea:	lea    rdx,[rip+0xa9284f]        # 0x141722540
   140c8fcf1:	mov    rcx,rdi
   140c8fcf4:	call   0x140070b90
   140c8fcf9:	mov    rdx,rbx
   140c8fcfc:	lea    rcx,[rip+0x1889835]        # 0x142519538
   140c8fd03:	call   0x140070850
   140c8fd08:	mov    rdx,QWORD PTR [rax]
   140c8fd0b:	add    rdx,0x50
   140c8fd0f:	mov    rcx,rdi
   140c8fd12:	call   0x1400bb340
   140c8fd17:	lea    rdx,[rip+0x973b26]        # 0x141603844
   140c8fd1e:	mov    rcx,rdi
   140c8fd21:	call   0x140070b90
   140c8fd26:	movzx  esi,BYTE PTR [rsp+0x70]
   140c8fd2b:	mov    rcx,rdi
   140c8fd2e:	test   sil,sil
   140c8fd31:	jne    0x140c8fd44
   140c8fd33:	lea    rdx,[rip+0x9cc7a2]        # 0x14165c4dc
   140c8fd3a:	call   0x140070b90
   140c8fd3f:	jmp    0x140c8d71a
   140c8fd44:	lea    rdx,[rip+0x9890dd]        # 0x141618e28
   140c8fd4b:	call   0x140070b90
   140c8fd50:	jmp    0x140c8d71a
   140c8fd55:	movzx  esi,BYTE PTR [rsp+0x70]
   140c8fd5a:	jmp    0x140c8d71c
   140c8fd5f:	lea    rdx,[rip+0x9890c2]        # 0x141618e28
   140c8fd66:	call   0x140070b90
   140c8fd6b:	lea    rdx,[rip+0x974c76]        # 0x1416049e8
   140c8fd72:	mov    rcx,rdi
   140c8fd75:	call   0x140070b90
   140c8fd7a:	lea    rdx,[rip+0x9890a7]        # 0x141618e28
   140c8fd81:	mov    rcx,rdi
   140c8fd84:	call   0x140070b90
   140c8fd89:	jmp    0x140c8ff31
   140c8fd8e:	cmp    DWORD PTR [rip+0xc2e4a3],0x1        # 0x1418be238
   140c8fd95:	jne    0x140c8fe2e
   140c8fd9b:	mov    rax,QWORD PTR [rip+0x17777ee]        # 0x142407590
   140c8fda2:	test   rax,rax
   140c8fda5:	je     0x140c8fe2e
   140c8fdab:	mov    rdx,QWORD PTR [rax+0xa98]
   140c8fdb2:	test   rdx,rdx
   140c8fdb5:	je     0x140c8fea7
   140c8fdbb:	add    rdx,0x218
   140c8fdc2:	mov    ecx,0x5b
   140c8fdc7:	call   0x1400bb7d0
   140c8fdcc:	test   rax,rax
   140c8fdcf:	je     0x140c8fea7
   140c8fdd5:	cmp    DWORD PTR [rax+0x4],0x0
   140c8fdd9:	jle    0x140c8fea7
   140c8fddf:	cmp    DWORD PTR [rip+0xc2e452],0x1        # 0x1418be238
   140c8fde6:	jne    0x140c8fe2e
   140c8fde8:	mov    rcx,QWORD PTR [rip+0x17777a1]        # 0x142407590
   140c8fdef:	test   rcx,rcx
   140c8fdf2:	je     0x140c8fe2e
   140c8fdf4:	call   0x1413cc070
   140c8fdf9:	test   rax,rax
   140c8fdfc:	je     0x140c8fe6d
   140c8fdfe:	mov    rax,QWORD PTR [rax+0x130]
   140c8fe05:	test   rax,rax
   140c8fe08:	je     0x140c8fe6d
   140c8fe0a:	mov    rbx,QWORD PTR [rax+0x40]
   140c8fe0e:	test   rbx,rbx
   140c8fe11:	je     0x140c8fe6d
   140c8fe13:	lea    rcx,[rsi+0x30]
   140c8fe17:	xor    edx,edx
   140c8fe19:	call   0x140070990
   140c8fe1e:	lea    rdx,[rbx+0x20]
   140c8fe22:	mov    ecx,DWORD PTR [rax]
   140c8fe24:	call   0x1400bb5a0
   140c8fe29:	cmp    eax,0xffffffff
   140c8fe2c:	je     0x140c8fe6d
   140c8fe2e:	mov    rcx,rdi
   140c8fe31:	cmp    BYTE PTR [rsp+0x70],0x0
   140c8fe36:	jne    0x140c8fef8
   140c8fe3c:	lea    rdx,[rip+0x9cc699]        # 0x14165c4dc
   140c8fe43:	call   0x140070b90
   140c8fe48:	lea    r8,[r13+0xe8]
   140c8fe4f:	mov    r9d,DWORD PTR [rbp+0x178]
   140c8fe56:	mov    rdx,rdi
   140c8fe59:	mov    rcx,rsi
   140c8fe5c:	call   0x140cded10
   140c8fe61:	lea    rdx,[rip+0x9cc674]        # 0x14165c4dc
   140c8fe68:	jmp    0x140c8ff24
   140c8fe6d:	movzx  esi,BYTE PTR [rsp+0x70]
   140c8fe72:	mov    rcx,rdi
   140c8fe75:	test   sil,sil
   140c8fe78:	jne    0x140c8fe8f
   140c8fe7a:	lea    rdx,[rip+0x9cc65b]        # 0x14165c4dc
   140c8fe81:	call   0x140070b90
   140c8fe86:	lea    rdx,[rip+0xa926cb]        # 0x141722558
   140c8fe8d:	jmp    0x140c8fec7
   140c8fe8f:	lea    rdx,[rip+0x988f92]        # 0x141618e28
   140c8fe96:	call   0x140070b90
   140c8fe9b:	lea    rdx,[rip+0xa926b6]        # 0x141722558
   140c8fea2:	jmp    0x140c8fd72
   140c8fea7:	movzx  esi,BYTE PTR [rsp+0x70]
   140c8feac:	mov    rcx,rdi
   140c8feaf:	test   sil,sil
   140c8feb2:	jne    0x140c8fee0
   140c8feb4:	lea    rdx,[rip+0x9cc621]        # 0x14165c4dc
   140c8febb:	call   0x140070b90
   140c8fec0:	lea    rdx,[rip+0xa91c01]        # 0x141721ac8
   140c8fec7:	mov    rcx,rdi
   140c8feca:	call   0x140070b90
   140c8fecf:	lea    rdx,[rip+0x9cc606]        # 0x14165c4dc
   140c8fed6:	mov    rcx,rdi
   140c8fed9:	call   0x140070b90
   140c8fede:	jmp    0x140c8ff31
   140c8fee0:	lea    rdx,[rip+0x988f41]        # 0x141618e28
   140c8fee7:	call   0x140070b90
   140c8feec:	lea    rdx,[rip+0xa91bd5]        # 0x141721ac8
   140c8fef3:	jmp    0x140c8fd72
   140c8fef8:	lea    rdx,[rip+0x988f29]        # 0x141618e28
   140c8feff:	call   0x140070b90
   140c8ff04:	mov    r9d,DWORD PTR [rbp+0x178]
   140c8ff0b:	lea    r8,[r13+0xe8]
   140c8ff12:	mov    rdx,rdi
   140c8ff15:	mov    rcx,rsi
   140c8ff18:	call   0x140cded10
   140c8ff1d:	lea    rdx,[rip+0x988f04]        # 0x141618e28
   140c8ff24:	mov    rcx,rdi
   140c8ff27:	call   0x140070b90
   140c8ff2c:	movzx  esi,BYTE PTR [rsp+0x70]
   140c8ff31:	inc    r12d
   140c8ff34:	add    r15,0x8
   140c8ff38:	mov    rcx,QWORD PTR [r13+0xd0]
   140c8ff3f:	movsxd rbx,r12d
   140c8ff42:	mov    rax,QWORD PTR [r13+0xd8]
   140c8ff49:	sub    rax,rcx
   140c8ff4c:	sar    rax,0x3
   140c8ff50:	cmp    rbx,rax
   140c8ff53:	jb     0x140c8d760
   140c8ff59:	mov    r12,r13
   140c8ff5c:	mov    rax,QWORD PTR [r12]
   140c8ff60:	mov    rcx,r12
   140c8ff63:	call   QWORD PTR [rax]
   140c8ff65:	mov    r13d,0x3
   140c8ff6b:	cmp    ax,0x39
   140c8ff6f:	jne    0x140c9044e
   140c8ff75:	cmp    WORD PTR [r12+0xc0],0xffff
   140c8ff7f:	jne    0x140c90026
   140c8ff85:	cmp    DWORD PTR [r12+0xd8],0xffffffff
   140c8ff8e:	jne    0x140c90026
   140c8ff94:	mov    rax,QWORD PTR [r12]
   140c8ff98:	mov    rcx,r12
   140c8ff9b:	call   QWORD PTR [rax+0x6b0]
   140c8ffa1:	movsxd rbx,eax
   140c8ffa4:	test   eax,eax
   140c8ffa6:	js     0x140c9044e
   140c8ffac:	lea    rcx,[rip+0x1889585]        # 0x142519538
   140c8ffb3:	call   0x140070480
   140c8ffb8:	cmp    ebx,eax
   140c8ffba:	jge    0x140c9044e
   140c8ffc0:	lea    rdx,[rip+0xa92579]        # 0x141722540
   140c8ffc7:	mov    rcx,rdi
   140c8ffca:	call   0x140070b90
   140c8ffcf:	mov    rdx,rbx
   140c8ffd2:	lea    rcx,[rip+0x188955f]        # 0x142519538
   140c8ffd9:	call   0x140070850
   140c8ffde:	mov    rdx,QWORD PTR [rax]
   140c8ffe1:	add    rdx,0x50
   140c8ffe5:	mov    rcx,rdi
   140c8ffe8:	call   0x1400bb340
   140c8ffed:	lea    rdx,[rip+0x973850]        # 0x141603844
   140c8fff4:	mov    rcx,rdi
   140c8fff7:	call   0x140070b90
   140c8fffc:	mov    rcx,rdi
   140c8ffff:	test   sil,sil
   140c90002:	jne    0x140c90015
   140c90004:	lea    rdx,[rip+0x9cc4d1]        # 0x14165c4dc
   140c9000b:	call   0x140070b90
   140c90010:	jmp    0x140c9044e
   140c90015:	lea    rdx,[rip+0x988e0c]        # 0x141618e28
   140c9001c:	call   0x140070b90
   140c90021:	jmp    0x140c9044e
   140c90026:	lea    rdx,[rip+0xa91ad3]        # 0x141721b00
   140c9002d:	mov    rcx,rdi
   140c90030:	call   0x140070b90
   140c90035:	mov    r8d,DWORD PTR [r12+0xc4]
   140c9003d:	movzx  edx,WORD PTR [r12+0xc0]
   140c90046:	lea    rcx,[rip+0x1763923]        # 0x1423f3970
   140c9004d:	call   0x141475520
   140c90052:	mov    ecx,DWORD PTR [r12+0xd8]
   140c9005a:	cmp    ecx,0xffffffff
   140c9005d:	cmove  cx,ax
   140c90061:	cmp    cx,0xffff
   140c90065:	je     0x140c90088
   140c90067:	movsx  rdx,cx
   140c9006b:	lea    rcx,[rip+0x18894c6]        # 0x142519538
   140c90072:	call   0x140070850
   140c90077:	mov    rdx,QWORD PTR [rax]
   140c9007a:	add    rdx,0x50
   140c9007e:	mov    rcx,rdi
   140c90081:	call   0x1400bb340
   140c90086:	jmp    0x140c90097
   140c90088:	lea    rdx,[rip+0xa91a81]        # 0x141721b10
   140c9008f:	mov    rcx,rdi
   140c90092:	call   0x140070b90
   140c90097:	cmp    WORD PTR [r12+0xcc],0x0
   140c900a1:	jle    0x140c90116
   140c900a3:	lea    rdx,[rip+0x9742ea]        # 0x141604394
   140c900aa:	mov    rcx,rdi
   140c900ad:	call   0x140070b90
   140c900b2:	movsx  ecx,WORD PTR [r12+0xcc]
   140c900bb:	sub    ecx,0x1
   140c900be:	je     0x140c900f8
   140c900c0:	sub    ecx,0x1
   140c900c3:	je     0x140c900ef
   140c900c5:	sub    ecx,0x1
   140c900c8:	je     0x140c900e6
   140c900ca:	sub    ecx,0x1
   140c900cd:	je     0x140c900dd
   140c900cf:	cmp    ecx,0x1
   140c900d2:	jne    0x140c90107
   140c900d4:	lea    rdx,[rip+0xa920f5]        # 0x1417221d0
   140c900db:	jmp    0x140c900ff
   140c900dd:	lea    rdx,[rip+0xa920dc]        # 0x1417221c0
   140c900e4:	jmp    0x140c900ff
   140c900e6:	lea    rdx,[rip+0xa91a2b]        # 0x141721b18
   140c900ed:	jmp    0x140c900ff
   140c900ef:	lea    rdx,[rip+0xa920b2]        # 0x1417221a8
   140c900f6:	jmp    0x140c900ff
   140c900f8:	lea    rdx,[rip+0xa920a1]        # 0x1417221a0
   140c900ff:	mov    rcx,rdi
   140c90102:	call   0x140070b90
   140c90107:	lea    rdx,[rip+0xa91a1a]        # 0x141721b28
   140c9010e:	mov    rcx,rdi
   140c90111:	call   0x140070b90
   140c90116:	lea    rcx,[r12+0xe0]
   140c9011e:	call   0x1400709a0
   140c90123:	test   rax,rax
   140c90126:	je     0x140c902da
   140c9012c:	lea    rcx,[rbp+0x28]
   140c90130:	call   0x140067130
   140c90135:	nop
   140c90136:	lea    rcx,[rbp-0x38]
   140c9013a:	call   0x140067130
   140c9013f:	nop
   140c90140:	xor    r15d,r15d
   140c90143:	mov    ebx,r15d
   140c90146:	lea    rcx,[r12+0xe0]
   140c9014e:	call   0x1400709a0
   140c90153:	movsxd r14,eax
   140c90156:	test   eax,eax
   140c90158:	jle    0x140c9018b
   140c9015a:	nop    WORD PTR [rax+rax*1+0x0]
   140c90160:	mov    rax,QWORD PTR [r12+0xf8]
   140c90168:	mov    edx,DWORD PTR [rax+rbx*4]
   140c9016b:	mov    rax,QWORD PTR [r12+0xe0]
   140c90173:	lea    r9,[rbp-0x38]
   140c90177:	lea    r8,[rbp+0x28]
   140c9017b:	mov    ecx,DWORD PTR [rax+rbx*4]
   140c9017e:	call   0x14013dfa0
   140c90183:	inc    rbx
   140c90186:	cmp    rbx,r14
   140c90189:	jl     0x140c90160
   140c9018b:	mov    r8d,0x6
   140c90191:	lea    rdx,[rip+0x9796b0]        # 0x141609848
   140c90198:	mov    rcx,rdi
   140c9019b:	call   0x140071040
   140c901a0:	mov    r12,QWORD PTR [rbp+0x30]
   140c901a4:	mov    rax,r12
   140c901a7:	mov    rcx,QWORD PTR [rbp+0x28]
   140c901ab:	sub    rax,rcx
   140c901ae:	sar    rax,0x2
   140c901b2:	cmp    rax,0x2
   140c901b6:	jb     0x140c901cf
   140c901b8:	lea    rdx,[rip+0xa91971]        # 0x141721b30
   140c901bf:	mov    rcx,rdi
   140c901c2:	call   0x140070b90
   140c901c7:	mov    r12,QWORD PTR [rbp+0x30]
   140c901cb:	mov    rcx,QWORD PTR [rbp+0x28]
   140c901cf:	sub    r12,rcx
   140c901d2:	sar    r12,0x2
   140c901d6:	mov    esi,r15d
   140c901d9:	mov    r14,r15
   140c901dc:	movsxd r15,r12d
   140c901df:	test   r12d,r12d
   140c901e2:	jle    0x140c902c0
   140c901e8:	lea    r13d,[r12-0x1]
   140c901ed:	movzx  ebx,BYTE PTR [rsp+0x71]
   140c901f2:	movzx  edx,bl
   140c901f5:	lea    rcx,[rbp-0x18]
   140c901f9:	call   0x1400697c0
   140c901fe:	lea    rcx,[rbp-0x18]
   140c90202:	call   0x1400711b0
   140c90207:	nop
   140c90208:	mov    rax,QWORD PTR [rbp-0x38]
   140c9020c:	mov    r9d,DWORD PTR [rax+r14*4]
   140c90210:	mov    rax,QWORD PTR [rbp+0x28]
   140c90214:	mov    WORD PTR [rsp+0x30],0x3
   140c9021b:	mov    BYTE PTR [rsp+0x28],0x0
   140c90220:	mov    DWORD PTR [rsp+0x20],0x0
   140c90228:	movzx  r8d,WORD PTR [rax+r14*4]
   140c9022d:	lea    rdx,[rbp-0x18]
   140c90231:	lea    rcx,[rip+0x1763738]        # 0x1423f3970
   140c90238:	call   0x1414eab90
   140c9023d:	lea    rdx,[rbp-0x18]
   140c90241:	mov    rcx,rdi
   140c90244:	call   0x1400bb340
   140c90249:	cmp    esi,r13d
   140c9024c:	jge    0x140c902a3
   140c9024e:	cmp    r15,0x3
   140c90252:	jl     0x140c90269
   140c90254:	mov    r8d,0x2
   140c9025a:	lea    rdx,[rip+0x974133]        # 0x141604394
   140c90261:	mov    rcx,rdi
   140c90264:	call   0x140071040
   140c90269:	lea    eax,[r12-0x2]
   140c9026e:	cmp    esi,eax
   140c90270:	jne    0x140c902a3
   140c90272:	cmp    r15,0x2
   140c90276:	jne    0x140c9028d
   140c90278:	mov    r8d,0x1
   140c9027e:	lea    rdx,[rip+0x97376b]        # 0x1416039f0
   140c90285:	mov    rcx,rdi
   140c90288:	call   0x140071040
   140c9028d:	mov    r8d,0x4
   140c90293:	lea    rdx,[rip+0xa918a6]        # 0x141721b40
   140c9029a:	mov    rcx,rdi
   140c9029d:	call   0x140071040
   140c902a2:	nop
   140c902a3:	lea    rcx,[rbp-0x18]
   140c902a7:	call   0x140070e80
   140c902ac:	inc    esi
   140c902ae:	inc    r14
   140c902b1:	cmp    r14,r15
   140c902b4:	jl     0x140c901f2
   140c902ba:	mov    r13d,0x3
   140c902c0:	lea    rcx,[rbp-0x38]
   140c902c4:	call   0x140070d80
   140c902c9:	nop
   140c902ca:	lea    rcx,[rbp+0x28]
   140c902ce:	call   0x140070d80
   140c902d3:	mov    r12,QWORD PTR [rsp+0x78]
   140c902d8:	jmp    0x140c90333
   140c902da:	cmp    WORD PTR [r12+0xc0],0xffff
   140c902e4:	je     0x140c90333
   140c902e6:	lea    rdx,[rip+0x97955b]        # 0x141609848
   140c902ed:	mov    rcx,rdi
   140c902f0:	call   0x140070b90
   140c902f5:	mov    WORD PTR [rsp+0x30],r13w
   140c902fb:	mov    BYTE PTR [rsp+0x28],0x0
   140c90300:	xor    eax,eax
   140c90302:	mov    DWORD PTR [rsp+0x20],eax
   140c90306:	mov    r9d,DWORD PTR [r12+0xc4]
   140c9030e:	movzx  r8d,WORD PTR [r12+0xc0]
   140c90317:	lea    rdx,[rbp+0x8]
   140c9031b:	lea    rcx,[rip+0x176364e]        # 0x1423f3970
   140c90322:	call   0x1414eab90
   140c90327:	lea    rdx,[rbp+0x8]
   140c9032b:	mov    rcx,rdi
   140c9032e:	call   0x1400bb340
   140c90333:	cmp    WORD PTR [r12+0xcc],0x5
   140c9033d:	jne    0x140c9043c
   140c90343:	mov    edx,DWORD PTR [r12+0xc8]
   140c9034b:	lea    rcx,[rip+0x188bde6]        # 0x14251c138
   140c90352:	call   0x1400693f0
   140c90357:	mov    rsi,rax
   140c9035a:	test   rax,rax
   140c9035d:	je     0x140c9043c
   140c90363:	mov    r8d,0x4
   140c90369:	lea    rdx,[rip+0x978918]        # 0x141608c88
   140c90370:	mov    rcx,rdi
   140c90373:	call   0x140071040
   140c90378:	mov    ebx,DWORD PTR [rbp+0x178]
   140c9037e:	test   bl,0x2
   140c90381:	je     0x140c903e4
   140c90383:	mov    r8d,0xa
   140c90389:	lea    rdx,[rip+0x989578]        # 0x141619908
   140c90390:	mov    rcx,rdi
   140c90393:	call   0x140071040
   140c90398:	mov    ebx,DWORD PTR [rsi+0xe0]
   140c9039e:	lea    rcx,[rbp+0x48]
   140c903a2:	call   0x140070cc0
   140c903a7:	nop
   140c903a8:	lea    rdx,[rbp+0x48]
   140c903ac:	mov    ecx,ebx
   140c903ae:	call   0x140545790
   140c903b3:	lea    rdx,[rbp+0x48]
   140c903b7:	mov    rcx,rdi
   140c903ba:	call   0x1400bb340
   140c903bf:	nop
   140c903c0:	lea    rcx,[rbp+0x48]
   140c903c4:	call   0x140070e80
   140c903c9:	mov    r8d,0x1
   140c903cf:	lea    rdx,[rip+0x989032]        # 0x141619408
   140c903d6:	mov    rcx,rdi
   140c903d9:	call   0x140071040
   140c903de:	mov    ebx,DWORD PTR [rbp+0x178]
   140c903e4:	mov    rcx,rsi
   140c903e7:	call   0x140c272f0
   140c903ec:	test   rax,rax
   140c903ef:	je     0x140c903fb
   140c903f1:	mov    rcx,rax
   140c903f4:	call   0x140c521e0
   140c903f9:	jmp    0x140c903ff
   140c903fb:	lea    rax,[rsi+0x38]
   140c903ff:	test   rax,rax
   140c90402:	je     0x140c90416
   140c90404:	cmp    BYTE PTR [rax+0x72],0x0
   140c90408:	je     0x140c90416
   140c9040a:	lea    rdx,[rbp+0x8]
   140c9040e:	mov    rcx,rax
   140c90411:	call   0x140aadad0
   140c90416:	lea    rdx,[rbp+0x8]
   140c9041a:	mov    rcx,rdi
   140c9041d:	call   0x1400bb340
   140c90422:	test   bl,0x2
   140c90425:	je     0x140c9043c
   140c90427:	mov    r8d,0x8
   140c9042d:	lea    rdx,[rip+0x9894e4]        # 0x141619918
   140c90434:	mov    rcx,rdi
   140c90437:	call   0x140071040
   140c9043c:	mov    r8,r13
   140c9043f:	lea    rdx,[rip+0x989152]        # 0x141619598
   140c90446:	mov    rcx,rdi
   140c90449:	call   0x140071040
   140c9044e:	mov    rax,QWORD PTR [r12]
   140c90452:	mov    rcx,r12
   140c90455:	call   QWORD PTR [rax]
   140c90457:	cmp    ax,0x37
   140c9045b:	jne    0x140c9096c
   140c90461:	cmp    WORD PTR [r12+0xc4],0xffff
   140c9046b:	jne    0x140c90514
   140c90471:	cmp    DWORD PTR [r12+0xd8],0xffffffff
   140c9047a:	jne    0x140c90514
   140c90480:	mov    rax,QWORD PTR [r12]
   140c90484:	mov    rcx,r12
   140c90487:	call   QWORD PTR [rax+0x6b0]
   140c9048d:	movsxd rbx,eax
   140c90490:	test   eax,eax
   140c90492:	js     0x140c9096c
   140c90498:	lea    rcx,[rip+0x1889099]        # 0x142519538
   140c9049f:	call   0x140070480
   140c904a4:	cmp    ebx,eax
   140c904a6:	jge    0x140c9096c
   140c904ac:	lea    rdx,[rip+0xa9208d]        # 0x141722540
   140c904b3:	mov    rcx,rdi
   140c904b6:	call   0x140070b90
   140c904bb:	mov    rdx,rbx
   140c904be:	lea    rcx,[rip+0x1889073]        # 0x142519538
   140c904c5:	call   0x140070850
   140c904ca:	mov    rdx,QWORD PTR [rax]
   140c904cd:	add    rdx,0x50
   140c904d1:	mov    rcx,rdi
   140c904d4:	call   0x1400bb340
   140c904d9:	lea    rdx,[rip+0x973364]        # 0x141603844
   140c904e0:	mov    rcx,rdi
   140c904e3:	call   0x140070b90
   140c904e8:	mov    rcx,rdi
   140c904eb:	cmp    BYTE PTR [rsp+0x70],0x0
   140c904f0:	jne    0x140c90503
   140c904f2:	lea    rdx,[rip+0x9cbfe3]        # 0x14165c4dc
   140c904f9:	call   0x140070b90
   140c904fe:	jmp    0x140c9096c
   140c90503:	lea    rdx,[rip+0x98891e]        # 0x141618e28
   140c9050a:	call   0x140070b90
   140c9050f:	jmp    0x140c9096c
   140c90514:	mov    r8d,0x10
   140c9051a:	lea    rdx,[rip+0xa9201f]        # 0x141722540
   140c90521:	mov    rcx,rdi
   140c90524:	call   0x140071040
   140c90529:	mov    r8d,DWORD PTR [r12+0xc8]
   140c90531:	movzx  edx,WORD PTR [r12+0xc4]
   140c9053a:	lea    rcx,[rip+0x176342f]        # 0x1423f3970
   140c90541:	call   0x141475520
   140c90546:	mov    ecx,DWORD PTR [r12+0xd8]
   140c9054e:	cmp    ecx,0xffffffff
   140c90551:	cmove  cx,ax
   140c90555:	cmp    cx,0xffff
   140c90559:	je     0x140c90578
   140c9055b:	movsx  rcx,cx
   140c9055f:	mov    rax,QWORD PTR [rip+0x1888fd2]        # 0x142519538
   140c90566:	mov    rdx,QWORD PTR [rax+rcx*8]
   140c9056a:	add    rdx,0x50
   140c9056e:	mov    rcx,rdi
   140c90571:	call   0x1400bb340
   140c90576:	jmp    0x140c9058d
   140c90578:	mov    r8d,0x4
   140c9057e:	lea    rdx,[rip+0xa9158b]        # 0x141721b10
   140c90585:	mov    rcx,rdi
   140c90588:	call   0x140071040
   140c9058d:	cmp    WORD PTR [r12+0xd0],0x0
   140c90597:	jle    0x140c9061c
   140c9059d:	mov    r8d,0x2
   140c905a3:	lea    rdx,[rip+0x973dea]        # 0x141604394
   140c905aa:	mov    rcx,rdi
   140c905ad:	call   0x140071040
   140c905b2:	movsx  ecx,WORD PTR [r12+0xd0]
   140c905bb:	sub    ecx,0x1
   140c905be:	je     0x140c905f8
   140c905c0:	sub    ecx,0x1
   140c905c3:	je     0x140c905ef
   140c905c5:	sub    ecx,0x1
   140c905c8:	je     0x140c905e6
   140c905ca:	sub    ecx,0x1
   140c905cd:	je     0x140c905dd
   140c905cf:	cmp    ecx,0x1
   140c905d2:	jne    0x140c90607
   140c905d4:	lea    rdx,[rip+0xa91bf5]        # 0x1417221d0
   140c905db:	jmp    0x140c905ff
   140c905dd:	lea    rdx,[rip+0xa91bdc]        # 0x1417221c0
   140c905e4:	jmp    0x140c905ff
   140c905e6:	lea    rdx,[rip+0xa9152b]        # 0x141721b18
   140c905ed:	jmp    0x140c905ff
   140c905ef:	lea    rdx,[rip+0xa91bb2]        # 0x1417221a8
   140c905f6:	jmp    0x140c905ff
   140c905f8:	lea    rdx,[rip+0xa91ba1]        # 0x1417221a0
   140c905ff:	mov    rcx,rdi
   140c90602:	call   0x140070b90
   140c90607:	mov    r8d,0x7
   140c9060d:	lea    rdx,[rip+0xa91514]        # 0x141721b28
   140c90614:	mov    rcx,rdi
   140c90617:	call   0x140071040
   140c9061c:	mov    rax,QWORD PTR [r12+0xe8]
   140c90624:	sub    rax,QWORD PTR [r12+0xe0]
   140c9062c:	sar    rax,0x2
   140c90630:	test   rax,rax
   140c90633:	je     0x140c907f8
   140c90639:	lea    rcx,[rbp+0x28]
   140c9063d:	call   0x140067130
   140c90642:	nop
   140c90643:	lea    rcx,[rbp-0x38]
   140c90647:	call   0x140067130
   140c9064c:	nop
   140c9064d:	xor    r14d,r14d
   140c90650:	mov    ebx,r14d
   140c90653:	mov    rax,QWORD PTR [r12+0xe8]
   140c9065b:	sub    rax,QWORD PTR [r12+0xe0]
   140c90663:	sar    rax,0x2
   140c90667:	movsxd rsi,eax
   140c9066a:	test   eax,eax
   140c9066c:	jle    0x140c9069b
   140c9066e:	xchg   ax,ax
   140c90670:	mov    rax,QWORD PTR [r12+0xf8]
   140c90678:	mov    edx,DWORD PTR [rax+rbx*4]
   140c9067b:	mov    rax,QWORD PTR [r12+0xe0]
   140c90683:	lea    r9,[rbp-0x38]
   140c90687:	lea    r8,[rbp+0x28]
   140c9068b:	mov    ecx,DWORD PTR [rax+rbx*4]
   140c9068e:	call   0x14013dfa0
   140c90693:	inc    rbx
   140c90696:	cmp    rbx,rsi
   140c90699:	jl     0x140c90670
   140c9069b:	mov    r8d,0x6
   140c906a1:	lea    rdx,[rip+0x9791a0]        # 0x141609848
   140c906a8:	mov    rcx,rdi
   140c906ab:	call   0x140071040
   140c906b0:	mov    r12,QWORD PTR [rbp+0x30]
   140c906b4:	mov    rax,r12
   140c906b7:	mov    rcx,QWORD PTR [rbp+0x28]
   140c906bb:	sub    rax,rcx
   140c906be:	sar    rax,0x2
   140c906c2:	cmp    rax,0x2
   140c906c6:	jb     0x140c906e5
   140c906c8:	mov    r8d,0xd
   140c906ce:	lea    rdx,[rip+0xa9145b]        # 0x141721b30
   140c906d5:	mov    rcx,rdi
   140c906d8:	call   0x140071040
   140c906dd:	mov    r12,QWORD PTR [rbp+0x30]
   140c906e1:	mov    rcx,QWORD PTR [rbp+0x28]
   140c906e5:	sub    r12,rcx
   140c906e8:	sar    r12,0x2
   140c906ec:	mov    esi,r14d
   140c906ef:	movsxd r15,r12d
   140c906f2:	test   r12d,r12d
   140c906f5:	jle    0x140c907de
   140c906fb:	lea    r13d,[r12-0x1]
   140c90700:	movzx  ebx,BYTE PTR [rsp+0x71]
   140c90705:	data16 data16 nop WORD PTR [rax+rax*1+0x0]
   140c90710:	movzx  edx,bl
   140c90713:	lea    rcx,[rbp-0x18]
   140c90717:	call   0x1400697c0
   140c9071c:	lea    rcx,[rbp-0x18]
   140c90720:	call   0x1400711b0
   140c90725:	nop
   140c90726:	mov    rax,QWORD PTR [rbp-0x38]
   140c9072a:	mov    r9d,DWORD PTR [rax+r14*4]
   140c9072e:	mov    rax,QWORD PTR [rbp+0x28]
   140c90732:	mov    WORD PTR [rsp+0x30],0x3
   140c90739:	mov    BYTE PTR [rsp+0x28],0x0
   140c9073e:	mov    DWORD PTR [rsp+0x20],0x0
   140c90746:	movzx  r8d,WORD PTR [rax+r14*4]
   140c9074b:	lea    rdx,[rbp-0x18]
   140c9074f:	lea    rcx,[rip+0x176321a]        # 0x1423f3970
   140c90756:	call   0x1414eab90
   140c9075b:	lea    rdx,[rbp-0x18]
   140c9075f:	mov    rcx,rdi
   140c90762:	call   0x1400bb340
   140c90767:	cmp    esi,r13d
   140c9076a:	jge    0x140c907c1
   140c9076c:	cmp    r15,0x3
   140c90770:	jl     0x140c90787
   140c90772:	mov    r8d,0x2
   140c90778:	lea    rdx,[rip+0x973c15]        # 0x141604394
   140c9077f:	mov    rcx,rdi
   140c90782:	call   0x140071040
   140c90787:	lea    eax,[r12-0x2]
   140c9078c:	cmp    esi,eax
   140c9078e:	jne    0x140c907c1
   140c90790:	cmp    r15,0x2
   140c90794:	jne    0x140c907ab
   140c90796:	mov    r8d,0x1
   140c9079c:	lea    rdx,[rip+0x97324d]        # 0x1416039f0
   140c907a3:	mov    rcx,rdi
   140c907a6:	call   0x140071040
   140c907ab:	mov    r8d,0x4
   140c907b1:	lea    rdx,[rip+0xa91388]        # 0x141721b40
   140c907b8:	mov    rcx,rdi
   140c907bb:	call   0x140071040
   140c907c0:	nop
   140c907c1:	lea    rcx,[rbp-0x18]
   140c907c5:	call   0x140070e80
   140c907ca:	inc    esi
   140c907cc:	inc    r14
   140c907cf:	cmp    r14,r15
   140c907d2:	jl     0x140c90710
   140c907d8:	mov    r13d,0x3
   140c907de:	lea    rcx,[rbp-0x38]
   140c907e2:	call   0x140070d80
   140c907e7:	nop
   140c907e8:	lea    rcx,[rbp+0x28]
   140c907ec:	call   0x140070d80
   140c907f1:	mov    r12,QWORD PTR [rsp+0x78]
   140c907f6:	jmp    0x140c90851
   140c907f8:	cmp    WORD PTR [r12+0xc4],0xffff
   140c90802:	je     0x140c90851
   140c90804:	lea    rdx,[rip+0x97903d]        # 0x141609848
   140c9080b:	mov    rcx,rdi
   140c9080e:	call   0x140070b90
   140c90813:	mov    WORD PTR [rsp+0x30],r13w
   140c90819:	mov    BYTE PTR [rsp+0x28],0x0
   140c9081e:	xor    eax,eax
   140c90820:	mov    DWORD PTR [rsp+0x20],eax
   140c90824:	mov    r9d,DWORD PTR [r12+0xc8]
   140c9082c:	movzx  r8d,WORD PTR [r12+0xc4]
   140c90835:	lea    rdx,[rbp+0x8]
   140c90839:	lea    rcx,[rip+0x1763130]        # 0x1423f3970
   140c90840:	call   0x1414eab90
   140c90845:	lea    rdx,[rbp+0x8]
   140c90849:	mov    rcx,rdi
   140c9084c:	call   0x1400bb340
   140c90851:	cmp    WORD PTR [r12+0xd0],0x5
   140c9085b:	jne    0x140c9095a
   140c90861:	mov    edx,DWORD PTR [r12+0xcc]
   140c90869:	lea    rcx,[rip+0x188b8c8]        # 0x14251c138
   140c90870:	call   0x1400693f0
   140c90875:	mov    rsi,rax
   140c90878:	test   rax,rax
   140c9087b:	je     0x140c9095a
   140c90881:	mov    r8d,0x4
   140c90887:	lea    rdx,[rip+0x9783fa]        # 0x141608c88
   140c9088e:	mov    rcx,rdi
   140c90891:	call   0x140071040
   140c90896:	mov    ebx,DWORD PTR [rbp+0x178]
   140c9089c:	test   bl,0x2
   140c9089f:	je     0x140c90902
   140c908a1:	mov    r8d,0xa
   140c908a7:	lea    rdx,[rip+0x98905a]        # 0x141619908
   140c908ae:	mov    rcx,rdi
   140c908b1:	call   0x140071040
   140c908b6:	mov    ebx,DWORD PTR [rsi+0xe0]
   140c908bc:	lea    rcx,[rbp+0x48]
   140c908c0:	call   0x140070cc0
   140c908c5:	nop
   140c908c6:	lea    rdx,[rbp+0x48]
   140c908ca:	mov    ecx,ebx
   140c908cc:	call   0x140545790
   140c908d1:	lea    rdx,[rbp+0x48]
   140c908d5:	mov    rcx,rdi
   140c908d8:	call   0x1400bb340
   140c908dd:	nop
   140c908de:	lea    rcx,[rbp+0x48]
   140c908e2:	call   0x140070e80
   140c908e7:	mov    r8d,0x1
   140c908ed:	lea    rdx,[rip+0x988b14]        # 0x141619408
   140c908f4:	mov    rcx,rdi
   140c908f7:	call   0x140071040
   140c908fc:	mov    ebx,DWORD PTR [rbp+0x178]
   140c90902:	mov    rcx,rsi
   140c90905:	call   0x140c272f0
   140c9090a:	test   rax,rax
   140c9090d:	je     0x140c90919
   140c9090f:	mov    rcx,rax
   140c90912:	call   0x140c521e0
   140c90917:	jmp    0x140c9091d
   140c90919:	lea    rax,[rsi+0x38]
   140c9091d:	test   rax,rax
   140c90920:	je     0x140c90934
   140c90922:	cmp    BYTE PTR [rax+0x72],0x0
   140c90926:	je     0x140c90934
   140c90928:	lea    rdx,[rbp+0x8]
   140c9092c:	mov    rcx,rax
   140c9092f:	call   0x140aadad0
   140c90934:	lea    rdx,[rbp+0x8]
   140c90938:	mov    rcx,rdi
   140c9093b:	call   0x1400bb340
   140c90940:	test   bl,0x2
   140c90943:	je     0x140c9095a
   140c90945:	mov    r8d,0x8
   140c9094b:	lea    rdx,[rip+0x988fc6]        # 0x141619918
   140c90952:	mov    rcx,rdi
   140c90955:	call   0x140071040
   140c9095a:	mov    r8,r13
   140c9095d:	lea    rdx,[rip+0x988c34]        # 0x141619598
   140c90964:	mov    rcx,rdi
   140c90967:	call   0x140071040
   140c9096c:	mov    rax,QWORD PTR [r12]
   140c90970:	mov    rcx,r12
   140c90973:	call   QWORD PTR [rax]
   140c90975:	cmp    ax,0x4a
   140c90979:	jne    0x140c90a5b
   140c9097f:	movsx  rax,WORD PTR [r12+0xe8]
   140c90988:	test   ax,ax
   140c9098b:	js     0x140c90a5b
   140c90991:	mov    rbx,rax
   140c90994:	mov    rax,QWORD PTR [rip+0x176327d]        # 0x1423f3c18
   140c9099b:	mov    rcx,QWORD PTR [rip+0x176326e]        # 0x1423f3c10
   140c909a2:	sub    rax,rcx
   140c909a5:	sar    rax,0x3
   140c909a9:	cmp    rbx,rax
   140c909ac:	jae    0x140c90a5b
   140c909b2:	mov    rbx,QWORD PTR [rcx+rbx*8]
   140c909b6:	movzx  edx,BYTE PTR [rsp+0x71]
   140c909bb:	lea    rcx,[rbp-0x38]
   140c909bf:	call   0x1400697c0
   140c909c4:	lea    rcx,[rbp-0x38]
   140c909c8:	call   0x1400711b0
   140c909cd:	nop
   140c909ce:	mov    r9d,DWORD PTR [rbp+0x178]
   140c909d5:	movzx  r8d,BYTE PTR [rsp+0x72]
   140c909db:	lea    rdx,[rbp-0x38]
   140c909df:	mov    rcx,rbx
   140c909e2:	call   0x1405d8380
   140c909e7:	movzx  r15d,BYTE PTR [rsp+0x70]
   140c909ed:	mov    rcx,rdi
   140c909f0:	test   r15b,r15b
   140c909f3:	jne    0x140c90a1c
   140c909f5:	mov    r8,r13
   140c909f8:	lea    rdx,[rip+0x9cbadd]        # 0x14165c4dc
   140c909ff:	call   0x140071040
   140c90a04:	lea    rdx,[rbp-0x38]
   140c90a08:	mov    rcx,rdi
   140c90a0b:	call   0x1400bb340
   140c90a10:	mov    r8,r13
   140c90a13:	lea    rdx,[rip+0x9cbac2]        # 0x14165c4dc
   140c90a1a:	jmp    0x140c90a47
   140c90a1c:	mov    r8d,0x2
   140c90a22:	lea    rdx,[rip+0x9883ff]        # 0x141618e28
   140c90a29:	call   0x140071040
   140c90a2e:	lea    rdx,[rbp-0x38]
   140c90a32:	mov    rcx,rdi
   140c90a35:	call   0x1400bb340
   140c90a3a:	mov    r8d,0x2
   140c90a40:	lea    rdx,[rip+0x9883e1]        # 0x141618e28
   140c90a47:	mov    rcx,rdi
   140c90a4a:	call   0x140071040
   140c90a4f:	nop
   140c90a50:	lea    rcx,[rbp-0x38]
   140c90a54:	call   0x140070e80
   140c90a59:	jmp    0x140c90a61
   140c90a5b:	movzx  r15d,BYTE PTR [rsp+0x70]
   140c90a61:	mov    rax,QWORD PTR [r12]
   140c90a65:	mov    rcx,r12
   140c90a68:	call   QWORD PTR [rax]
   140c90a6a:	cmp    ax,0x46
   140c90a6e:	jne    0x140c90b0d
   140c90a74:	mov    rax,QWORD PTR [r12]
   140c90a78:	mov    rcx,r12
   140c90a7b:	call   QWORD PTR [rax+0x40]
   140c90a7e:	mov    ebx,eax
   140c90a80:	mov    rdx,QWORD PTR [r12]
   140c90a84:	mov    rcx,r12
   140c90a87:	call   QWORD PTR [rdx+0x38]
   140c90a8a:	mov    r8d,ebx
   140c90a8d:	movzx  edx,ax
   140c90a90:	lea    rcx,[rip+0x1762ed9]        # 0x1423f3970
   140c90a97:	call   0x141475520
   140c90a9c:	movsx  rbx,ax
   140c90aa0:	cmp    bx,0xffff
   140c90aa4:	je     0x140c90b0d
   140c90aa6:	mov    r8d,0x20
   140c90aac:	lea    rdx,[rip+0xa91095]        # 0x141721b48
   140c90ab3:	mov    rcx,rdi
   140c90ab6:	call   0x140071040
   140c90abb:	mov    rax,QWORD PTR [rip+0x1888a76]        # 0x142519538
   140c90ac2:	mov    rdx,QWORD PTR [rax+rbx*8]
   140c90ac6:	add    rdx,0x50
   140c90aca:	mov    rcx,rdi
   140c90acd:	call   0x1400bb340
   140c90ad2:	mov    r8d,0x1
   140c90ad8:	lea    rdx,[rip+0x972d65]        # 0x141603844
   140c90adf:	mov    rcx,rdi
   140c90ae2:	call   0x140071040
   140c90ae7:	mov    rcx,rdi
   140c90aea:	test   r15b,r15b
   140c90aed:	jne    0x140c90afb
   140c90aef:	mov    r8,r13
   140c90af2:	lea    rdx,[rip+0x9cb9e3]        # 0x14165c4dc
   140c90af9:	jmp    0x140c90b08
   140c90afb:	mov    r8d,0x2
   140c90b01:	lea    rdx,[rip+0x988320]        # 0x141618e28
   140c90b08:	call   0x140071040
   140c90b0d:	mov    rax,QWORD PTR [r12]
   140c90b11:	mov    rcx,r12
   140c90b14:	call   QWORD PTR [rax]
   140c90b16:	cmp    ax,0x57
   140c90b1a:	jne    0x140c90e26
   140c90b20:	cmp    QWORD PTR [r12+0xf8],0x0
   140c90b29:	je     0x140c90e26
   140c90b2f:	cmp    DWORD PTR [rip+0xc2d702],0x1        # 0x1418be238
   140c90b36:	jne    0x140c90bf7
   140c90b3c:	mov    rdx,QWORD PTR [rip+0x1776a4d]        # 0x142407590
   140c90b43:	test   rdx,rdx
   140c90b46:	je     0x140c90bf7
   140c90b4c:	mov    rdx,QWORD PTR [rdx+0xa98]
   140c90b53:	add    rdx,0x218
   140c90b5a:	mov    ecx,0x5b
   140c90b5f:	call   0x1400bb7d0
   140c90b64:	test   rax,rax
   140c90b67:	je     0x140c90b73
   140c90b69:	cmp    DWORD PTR [rax+0x4],0x0
   140c90b6d:	jg     0x140c90bf7
   140c90b73:	mov    rcx,rdi
   140c90b76:	test   r15b,r15b
   140c90b79:	jne    0x140c90bb6
   140c90b7b:	mov    r8,r13
   140c90b7e:	lea    rdx,[rip+0x9cb957]        # 0x14165c4dc
   140c90b85:	call   0x140071040
   140c90b8a:	mov    r8d,0x32
   140c90b90:	lea    rdx,[rip+0xa90ff1]        # 0x141721b88
   140c90b97:	mov    rcx,rdi
   140c90b9a:	call   0x140071040
   140c90b9f:	mov    r8,r13
   140c90ba2:	lea    rdx,[rip+0x9cb933]        # 0x14165c4dc
   140c90ba9:	mov    rcx,rdi
   140c90bac:	call   0x140071040
   140c90bb1:	jmp    0x140c90e26
   140c90bb6:	mov    r8d,0x2
   140c90bbc:	lea    rdx,[rip+0x988265]        # 0x141618e28
   140c90bc3:	call   0x140071040
   140c90bc8:	mov    r8d,0x32
   140c90bce:	lea    rdx,[rip+0xa90fb3]        # 0x141721b88
   140c90bd5:	mov    rcx,rdi
   140c90bd8:	call   0x140071040
   140c90bdd:	mov    r8d,0x2
   140c90be3:	lea    rdx,[rip+0x98823e]        # 0x141618e28
   140c90bea:	mov    rcx,rdi
   140c90bed:	call   0x140071040
   140c90bf2:	jmp    0x140c90e26
   140c90bf7:	mov    rcx,rdi
   140c90bfa:	test   r15b,r15b
   140c90bfd:	jne    0x140c90c0b
   140c90bff:	mov    r8,r13
   140c90c02:	lea    rdx,[rip+0x9cb8d3]        # 0x14165c4dc
   140c90c09:	jmp    0x140c90c18
   140c90c0b:	mov    r8d,0x2
   140c90c11:	lea    rdx,[rip+0x988210]        # 0x141618e28
   140c90c18:	call   0x140071040
   140c90c1d:	mov    r8d,0x10
   140c90c23:	lea    rdx,[rip+0xa90f46]        # 0x141721b70
   140c90c2a:	mov    rcx,rdi
   140c90c2d:	call   0x140071040
   140c90c32:	lea    rdx,[r12+0xe8]
   140c90c3a:	mov    rcx,rdi
   140c90c3d:	call   0x1400bb340
   140c90c42:	mov    r8d,0x2
   140c90c48:	lea    rdx,[rip+0x9da41d]        # 0x14166b06c
   140c90c4f:	mov    rcx,rdi
   140c90c52:	call   0x140071040
   140c90c57:	mov    rcx,rdi
   140c90c5a:	test   r15b,r15b
   140c90c5d:	jne    0x140c90c6b
   140c90c5f:	mov    r8,r13
   140c90c62:	lea    rdx,[rip+0x9cb873]        # 0x14165c4dc
   140c90c69:	jmp    0x140c90c78
   140c90c6b:	mov    r8d,0x2
   140c90c71:	lea    rdx,[rip+0x9881b0]        # 0x141618e28
   140c90c78:	call   0x140071040
   140c90c7d:	cmp    DWORD PTR [rip+0xc2d5b4],0x1        # 0x1418be238
   140c90c84:	jne    0x140c90e26
   140c90c8a:	mov    rcx,QWORD PTR [rip+0x17768ff]        # 0x142407590
   140c90c91:	test   rcx,rcx
   140c90c94:	je     0x140c90e26
   140c90c9a:	cmp    WORD PTR [r12+0x10c],0x1a
   140c90ca4:	jne    0x140c90e26
   140c90caa:	cmp    DWORD PTR [r12+0x108],0xffffffff
   140c90cb3:	je     0x140c90e26
   140c90cb9:	call   0x1413cc070
   140c90cbe:	mov    rsi,rax
   140c90cc1:	mov    edx,DWORD PTR [r12+0x108]
   140c90cc9:	lea    rcx,[rip+0x188b468]        # 0x14251c138
   140c90cd0:	call   0x1400693f0
   140c90cd5:	mov    r14,rax
   140c90cd8:	test   rsi,rsi
   140c90cdb:	je     0x140c90e26
   140c90ce1:	test   rax,rax
   140c90ce4:	je     0x140c90e26
   140c90cea:	mov    rax,QWORD PTR [rax+0x130]
   140c90cf1:	test   rax,rax
   140c90cf4:	je     0x140c90e26
   140c90cfa:	mov    rcx,QWORD PTR [rax+0x58]
   140c90cfe:	test   rcx,rcx
   140c90d01:	je     0x140c90e26
   140c90d07:	add    rcx,0x38
   140c90d0b:	lea    rdx,[rsp+0x78]
   140c90d10:	call   0x140070870
   140c90d15:	mov    rax,QWORD PTR [r14+0x130]
   140c90d1c:	mov    rcx,QWORD PTR [rax+0x58]
   140c90d20:	add    rcx,0x38
   140c90d24:	lea    rdx,[rbp-0x58]
   140c90d28:	call   0x140070860
   140c90d2d:	lea    r8,[rbp-0x58]
   140c90d31:	lea    rdx,[rsp+0x71]
   140c90d36:	lea    rcx,[rsp+0x78]
   140c90d3b:	call   0x140070450
   140c90d40:	xor    edx,edx
   140c90d42:	movzx  ecx,BYTE PTR [rax]
   140c90d45:	call   0x140066de0
   140c90d4a:	test   al,al
   140c90d4c:	je     0x140c90e26
   140c90d52:	lea    rcx,[rsp+0x78]
   140c90d57:	call   0x140070440
   140c90d5c:	mov    edx,DWORD PTR [rax]
   140c90d5e:	lea    rcx,[rip+0x1879403]        # 0x14250a168
   140c90d65:	call   0x140073ba0
   140c90d6a:	mov    rbx,rax
   140c90d6d:	test   rax,rax
   140c90d70:	je     0x140c90df7
   140c90d76:	cmp    DWORD PTR [rax+0x90],0x2
   140c90d7d:	jne    0x140c90df7
   140c90d7f:	mov    ecx,DWORD PTR [r14+0xe0]
   140c90d86:	cmp    DWORD PTR [rax+0x8c],ecx
   140c90d8c:	jne    0x140c90df7
   140c90d8e:	mov    rax,QWORD PTR [rsi+0x130]
   140c90d95:	test   rax,rax
   140c90d98:	jne    0x140c90db8
   140c90d9a:	mov    ecx,0x68
   140c90d9f:	call   0x1415530e0
   140c90da4:	mov    QWORD PTR [rbp-0x48],rax
   140c90da8:	mov    rcx,rax
   140c90dab:	call   0x1400766b0
   140c90db0:	nop
   140c90db1:	mov    QWORD PTR [rsi+0x130],rax
   140c90db8:	cmp    QWORD PTR [rax+0x40],0x0
   140c90dbd:	jne    0x140c90de1
   140c90dbf:	mov    ecx,0x170
   140c90dc4:	call   0x1415530e0
   140c90dc9:	mov    QWORD PTR [rbp-0x68],rax
   140c90dcd:	mov    rcx,rax
   140c90dd0:	call   0x1400764b0
   140c90dd5:	nop
   140c90dd6:	mov    rcx,QWORD PTR [rsi+0x130]
   140c90ddd:	mov    QWORD PTR [rcx+0x40],rax
   140c90de1:	mov    rax,QWORD PTR [rsi+0x130]
   140c90de8:	mov    rdx,QWORD PTR [rax+0x40]
   140c90dec:	add    rdx,0x38
   140c90df0:	mov    ecx,DWORD PTR [rbx]
   140c90df2:	call   0x1400bb4a0
   140c90df7:	lea    rcx,[rsp+0x78]
   140c90dfc:	call   0x140070980
   140c90e01:	lea    r8,[rbp-0x58]
   140c90e05:	lea    rdx,[rsp+0x71]
   140c90e0a:	lea    rcx,[rsp+0x78]
   140c90e0f:	call   0x140070450
   140c90e14:	xor    edx,edx
   140c90e16:	movzx  ecx,BYTE PTR [rax]
   140c90e19:	call   0x140066de0
   140c90e1e:	test   al,al
   140c90e20:	jne    0x140c90d52
   140c90e26:	mov    rax,QWORD PTR [r12]
   140c90e2a:	mov    rcx,r12
   140c90e2d:	call   QWORD PTR [rax+0x1d8]
   140c90e33:	movsx  esi,ax
   140c90e36:	test   si,si
   140c90e39:	jle    0x140c90fb0
   140c90e3f:	mov    rdx,QWORD PTR [r12]
   140c90e43:	mov    rcx,r12
   140c90e46:	call   QWORD PTR [rdx]
   140c90e48:	movsx  ecx,ax
   140c90e4b:	add    ecx,0xffffffe9
   140c90e4e:	cmp    ecx,0x41
   140c90e51:	ja     0x140c90e71
   140c90e53:	movsxd rcx,ecx
   140c90e56:	lea    rdx,[rip+0xffffffffff36f1a3]        # 0x140000000
   140c90e5d:	movzx  eax,BYTE PTR [rdx+rcx*1+0xc91358]
   140c90e65:	mov    ecx,DWORD PTR [rdx+rax*4+0xc91350]
   140c90e6c:	add    rcx,rdx
   140c90e6f:	jmp    rcx
   140c90e71:	mov    rax,QWORD PTR [r12]
   140c90e75:	mov    rcx,r12
   140c90e78:	call   QWORD PTR [rax+0x18]
   140c90e7b:	mov    ebx,eax
   140c90e7d:	mov    r8,QWORD PTR [r12]
   140c90e81:	mov    rcx,r12
   140c90e84:	call   QWORD PTR [r8+0x10]
   140c90e88:	mov    r8d,ebx
   140c90e8b:	movzx  edx,ax
   140c90e8e:	lea    rcx,[rip+0x1762adb]        # 0x1423f3970
   140c90e95:	call   0x1414c6fe0
   140c90e9a:	test   rax,rax
   140c90e9d:	je     0x140c90eb8
   140c90e9f:	lea    rcx,[rax+0x290]
   140c90ea6:	mov    edx,0x18
   140c90eab:	call   0x1400735c0
   140c90eb0:	test   al,al
   140c90eb2:	jne    0x140c90f3d
   140c90eb8:	mov    rax,QWORD PTR [r12]
   140c90ebc:	mov    rcx,r12
   140c90ebf:	call   QWORD PTR [rax+0x18]
   140c90ec2:	mov    ebx,eax
   140c90ec4:	mov    rdx,QWORD PTR [r12]
   140c90ec8:	mov    rcx,r12
   140c90ecb:	call   QWORD PTR [rdx+0x10]
   140c90ece:	mov    r8d,ebx
   140c90ed1:	movzx  edx,ax
   140c90ed4:	lea    rcx,[rip+0x1762a95]        # 0x1423f3970
   140c90edb:	call   0x1414c6fe0
   140c90ee0:	test   rax,rax
   140c90ee3:	je     0x140c90efa
   140c90ee5:	lea    rcx,[rax+0x290]
   140c90eec:	mov    edx,0x1e
   140c90ef1:	call   0x1400735c0
   140c90ef6:	test   al,al
   140c90ef8:	jne    0x140c90f3d
   140c90efa:	mov    rax,QWORD PTR [r12]
   140c90efe:	mov    rcx,r12
   140c90f01:	call   QWORD PTR [rax+0x18]
   140c90f04:	mov    ebx,eax
   140c90f06:	mov    r8,QWORD PTR [r12]
   140c90f0a:	mov    rcx,r12
   140c90f0d:	call   QWORD PTR [r8+0x10]
   140c90f11:	mov    r8d,ebx
   140c90f14:	movzx  edx,ax
   140c90f17:	lea    rcx,[rip+0x1762a52]        # 0x1423f3970
   140c90f1e:	call   0x1414c6fe0
   140c90f23:	test   rax,rax
   140c90f26:	je     0x140c90f6c
   140c90f28:	lea    rcx,[rax+0x290]
   140c90f2f:	mov    edx,0x3e
   140c90f34:	call   0x1400735c0
   140c90f39:	test   al,al
   140c90f3b:	je     0x140c90f6c
   140c90f3d:	mov    ecx,esi
   140c90f3f:	sub    ecx,0x1
   140c90f42:	je     0x140c90f9b
   140c90f44:	sub    ecx,0x1
   140c90f47:	je     0x140c90f5d
   140c90f49:	cmp    ecx,0x1
   140c90f4c:	jne    0x140c90fb0
   140c90f4e:	mov    r8d,0x1c
   140c90f54:	lea    rdx,[rip+0xa90cad]        # 0x141721c08
   140c90f5b:	jmp    0x140c90fa8
   140c90f5d:	mov    r8d,0x1c
   140c90f63:	lea    rdx,[rip+0xa90c7e]        # 0x141721be8
   140c90f6a:	jmp    0x140c90fa8
   140c90f6c:	mov    ecx,esi
   140c90f6e:	sub    ecx,0x1
   140c90f71:	je     0x140c90f9b
   140c90f73:	sub    ecx,0x1
   140c90f76:	je     0x140c90f8c
   140c90f78:	cmp    ecx,0x1
   140c90f7b:	jne    0x140c90fb0
   140c90f7d:	mov    r8d,0x19
   140c90f83:	lea    rdx,[rip+0xa90cbe]        # 0x141721c48
   140c90f8a:	jmp    0x140c90fa8
   140c90f8c:	mov    r8d,0x1e
   140c90f92:	lea    rdx,[rip+0xa90c8f]        # 0x141721c28
   140c90f99:	jmp    0x140c90fa8
   140c90f9b:	lea    rdx,[rip+0xa90c1e]        # 0x141721bc0
   140c90fa2:	mov    r8d,0x23
   140c90fa8:	mov    rcx,rdi
   140c90fab:	call   0x140071040
   140c90fb0:	mov    rax,QWORD PTR [r12]
   140c90fb4:	mov    rcx,r12
   140c90fb7:	call   QWORD PTR [rax+0x448]
   140c90fbd:	test   al,al
   140c90fbf:	je     0x140c91125
   140c90fc5:	mov    rax,QWORD PTR [r12]
   140c90fc9:	mov    rcx,r12
   140c90fcc:	call   QWORD PTR [rax]
   140c90fce:	cmp    ax,0x4b
   140c90fd2:	je     0x140c91125
   140c90fd8:	mov    rax,QWORD PTR [r12]
   140c90fdc:	mov    rcx,r12
   140c90fdf:	call   QWORD PTR [rax]
   140c90fe1:	cmp    ax,0x49
   140c90fe5:	je     0x140c91125
   140c90feb:	mov    rcx,QWORD PTR [r12+0x98]
   140c90ff3:	test   rcx,rcx
   140c90ff6:	je     0x140c91125
   140c90ffc:	mov    rax,QWORD PTR [rcx+0x8]
   140c91000:	sub    rax,QWORD PTR [rcx]
   140c91003:	sar    rax,0x3
   140c91007:	test   rax,rax
   140c9100a:	je     0x140c91125
   140c91010:	xor    eax,eax
   140c91012:	mov    r14d,eax
   140c91015:	mov    esi,eax
   140c91017:	movzx  ebx,BYTE PTR [rsp+0x71]
   140c9101c:	nop    DWORD PTR [rax+0x0]
   140c91020:	mov    r8d,0x6
   140c91026:	lea    rdx,[rip+0xa911c3]        # 0x1417221f0
   140c9102d:	mov    rcx,rdi
   140c91030:	call   0x140071040
   140c91035:	mov    rax,QWORD PTR [r12+0x98]
   140c9103d:	mov    rcx,QWORD PTR [rax]
   140c91040:	mov    rax,QWORD PTR [rcx+rsi*1]
   140c91044:	mov    rcx,rdi
   140c91047:	cmp    DWORD PTR [rax+0x10],0x64
   140c9104b:	jl     0x140c9105c
   140c9104d:	mov    r8d,0x6
   140c91053:	lea    rdx,[rip+0xa90c0a]        # 0x141721c64
   140c9105a:	jmp    0x140c91069
   140c9105c:	mov    r8d,0x9
   140c91062:	lea    rdx,[rip+0xa90c07]        # 0x141721c70
   140c91069:	call   0x140071040
   140c9106e:	mov    r8d,0x6
   140c91074:	lea    rdx,[rip+0x9787cd]        # 0x141609848
   140c9107b:	mov    rcx,rdi
   140c9107e:	call   0x140071040
   140c91083:	nop
   140c91084:	movzx  edx,bl
   140c91087:	lea    rcx,[rbp-0x18]
   140c9108b:	call   0x1400697c0
   140c91090:	lea    rcx,[rbp-0x18]
   140c91094:	call   0x1400711b0
   140c91099:	nop
   140c9109a:	mov    rax,QWORD PTR [r12+0x98]
   140c910a2:	mov    rcx,QWORD PTR [rax]
   140c910a5:	mov    rax,QWORD PTR [rcx+rsi*1]
   140c910a9:	movzx  edx,WORD PTR [rax+0x8]
   140c910ad:	mov    WORD PTR [rsp+0x30],dx
   140c910b2:	mov    BYTE PTR [rsp+0x28],0x0
   140c910b7:	mov    DWORD PTR [rsp+0x20],0x0
   140c910bf:	mov    r9d,DWORD PTR [rax+0x4]
   140c910c3:	movzx  r8d,WORD PTR [rax]
   140c910c7:	lea    rdx,[rbp-0x18]
   140c910cb:	lea    rcx,[rip+0x176289e]        # 0x1423f3970
   140c910d2:	call   0x1414eab90
   140c910d7:	lea    rdx,[rbp-0x18]
   140c910db:	mov    rcx,rdi
   140c910de:	call   0x1400bb340
   140c910e3:	mov    r8,r13
   140c910e6:	lea    rdx,[rip+0x9884ab]        # 0x141619598
   140c910ed:	mov    rcx,rdi
   140c910f0:	call   0x140071040
   140c910f5:	nop
   140c910f6:	lea    rcx,[rbp-0x18]
   140c910fa:	call   0x140070e80
   140c910ff:	inc    r14d
   140c91102:	add    rsi,0x8
   140c91106:	mov    rax,QWORD PTR [r12+0x98]
   140c9110e:	mov    rcx,QWORD PTR [rax+0x8]
   140c91112:	sub    rcx,QWORD PTR [rax]
   140c91115:	sar    rcx,0x3
   140c91119:	movsxd rax,r14d
   140c9111c:	cmp    rax,rcx
   140c9111f:	jb     0x140c91020
   140c91125:	mov    rax,QWORD PTR [r12]
   140c91129:	mov    rcx,r12
   140c9112c:	call   QWORD PTR [rax+0x5e0]
   140c91132:	mov    rbx,rax
   140c91135:	test   rax,rax
   140c91138:	je     0x140c911e9
   140c9113e:	mov    r8,rax
   140c91141:	mov    rdx,QWORD PTR [rax]
   140c91144:	lea    rcx,[rsp+0x78]
   140c91149:	call   0x140070d70
   140c9114e:	mov    r8,rbx
   140c91151:	mov    rdx,QWORD PTR [rbx+0x8]
   140c91155:	lea    rcx,[rbp-0x58]
   140c91159:	call   0x140070d70
   140c9115e:	mov    rax,QWORD PTR [rsp+0x78]
   140c91163:	cmp    rax,QWORD PTR [rbp-0x58]
   140c91167:	je     0x140c911e9
   140c9116d:	nop    DWORD PTR [rax]
   140c91170:	mov    r8,QWORD PTR [rax]
   140c91173:	movsxd rdx,DWORD PTR [r8]
   140c91176:	test   edx,edx
   140c91178:	js     0x140c911da
   140c9117a:	mov    rcx,QWORD PTR [rip+0x18887cf]        # 0x142519950
   140c91181:	mov    r9,QWORD PTR [rip+0x18887c0]        # 0x142519948
   140c91188:	sub    rcx,r9
   140c9118b:	sar    rcx,0x3
   140c9118f:	cmp    edx,ecx
   140c91191:	jge    0x140c911da
   140c91193:	mov    rax,QWORD PTR [r9+rdx*8]
   140c91197:	movsxd rcx,DWORD PTR [r8+0x4]
   140c9119b:	mov    rax,QWORD PTR [rax+0x50]
   140c9119f:	mov    rbx,QWORD PTR [rax+rcx*8]
   140c911a3:	mov    rax,QWORD PTR [rbx]
   140c911a6:	mov    rcx,rbx
   140c911a9:	call   QWORD PTR [rax]
   140c911ab:	cmp    ax,0xa
   140c911af:	jne    0x140c911d5
   140c911b1:	lea    rdx,[rbx+0x408]
   140c911b8:	mov    rcx,rdi
   140c911bb:	call   0x1400bb340
   140c911c0:	mov    r8d,0x2
   140c911c6:	lea    rdx,[rip+0x987c5b]        # 0x141618e28
   140c911cd:	mov    rcx,rdi
   140c911d0:	call   0x140071040
   140c911d5:	mov    rax,QWORD PTR [rsp+0x78]
   140c911da:	add    rax,0x8
   140c911de:	mov    QWORD PTR [rsp+0x78],rax
   140c911e3:	cmp    rax,QWORD PTR [rbp-0x58]
   140c911e7:	jne    0x140c91170
   140c911e9:	mov    rax,QWORD PTR [r12]
   140c911ed:	mov    rcx,r12
   140c911f0:	call   QWORD PTR [rax]
   140c911f2:	cmp    ax,0x56
   140c911f6:	jne    0x140c91286
   140c911fc:	mov    rax,QWORD PTR [r12+0xe8]
   140c91204:	cmp    QWORD PTR [rax+0x198],0x0
   140c9120c:	je     0x140c91286
   140c9120e:	mov    rcx,rdi
   140c91211:	test   r15b,r15b
   140c91214:	jne    0x140c91248
   140c91216:	mov    r8,r13
   140c91219:	lea    rdx,[rip+0x987cb0]        # 0x141618ed0
   140c91220:	call   0x140071040
   140c91225:	mov    rdx,QWORD PTR [r12+0xe8]
   140c9122d:	add    rdx,0x188
   140c91234:	mov    rcx,rdi
   140c91237:	call   0x1400bb340
   140c9123c:	mov    r8,r13
   140c9123f:	lea    rdx,[rip+0x987c8a]        # 0x141618ed0
   140c91246:	jmp    0x140c9127e
   140c91248:	mov    r8d,0x2
   140c9124e:	lea    rdx,[rip+0x987bd3]        # 0x141618e28
   140c91255:	call   0x140071040
   140c9125a:	mov    rdx,QWORD PTR [r12+0xe8]
   140c91262:	add    rdx,0x188
   140c91269:	mov    rcx,rdi
   140c9126c:	call   0x1400bb340
   140c91271:	mov    r8d,0x2
   140c91277:	lea    rdx,[rip+0x987baa]        # 0x141618e28
   140c9127e:	mov    rcx,rdi
   140c91281:	call   0x140071040
   140c91286:	mov    rax,QWORD PTR [r12]
   140c9128a:	mov    rcx,r12
   140c9128d:	call   QWORD PTR [rax]
   140c9128f:	cmp    ax,0xd
   140c91293:	jne    0x140c91324
   140c91299:	mov    rax,QWORD PTR [r12+0xe8]
   140c912a1:	cmp    QWORD PTR [rax+0x288],0x0
   140c912a9:	je     0x140c91324
   140c912ab:	mov    rcx,rdi
   140c912ae:	test   r15b,r15b
   140c912b1:	jne    0x140c912e5
   140c912b3:	mov    r8,r13
   140c912b6:	lea    rdx,[rip+0x987c13]        # 0x141618ed0
   140c912bd:	call   0x140071040
   140c912c2:	mov    rdx,QWORD PTR [r12+0xe8]
   140c912ca:	add    rdx,0x278
   140c912d1:	mov    rcx,rdi
   140c912d4:	call   0x1400bb340
   140c912d9:	mov    r8,r13
   140c912dc:	lea    rdx,[rip+0x987bed]        # 0x141618ed0
   140c912e3:	jmp    0x140c9131b
   140c912e5:	mov    r8d,0x2
   140c912eb:	lea    rdx,[rip+0x987b36]        # 0x141618e28
   140c912f2:	call   0x140071040
   140c912f7:	mov    rdx,QWORD PTR [r12+0xe8]
   140c912ff:	add    rdx,0x278
   140c91306:	mov    rcx,rdi
   140c91309:	call   0x1400bb340
   140c9130e:	mov    r8d,0x2
   140c91314:	lea    rdx,[rip+0x987b0d]        # 0x141618e28
   140c9131b:	mov    rcx,rdi
   140c9131e:	call   0x140071040
   140c91323:	nop
   140c91324:	lea    rcx,[rbp+0x8]
   140c91328:	call   0x140070e80
   140c9132d:	mov    rcx,QWORD PTR [rbp+0xf0]
   140c91334:	xor    rcx,rsp
   140c91337:	call   0x1415530b0
   140c9133c:	add    rsp,0x208
   140c91343:	pop    r15
   140c91345:	pop    r14
   140c91347:	pop    r13
   140c91349:	pop    r12
   140c9134b:	pop    rdi
   140c9134c:	pop    rsi
   140c9134d:	pop    rbx
   140c9134e:	pop    rbp
   140c9134f:	ret
   140c91350:	ins    BYTE PTR [rdi],dx
   140c91351:	bswap  ecx
   140c91353:	add    BYTE PTR [rcx+0xe],dh
   140c91356:	leave
   140c91357:	add    BYTE PTR [rax],al
   140c91359:	add    DWORD PTR [rcx],eax
   140c9135b:	add    DWORD PTR [rcx],eax
   140c9135d:	add    DWORD PTR [rcx],eax
   140c9135f:	add    DWORD PTR [rcx],eax
   140c91361:	add    DWORD PTR [rcx],eax
   140c91363:	add    DWORD PTR [rcx],eax
   140c91365:	add    DWORD PTR [rcx],eax
   140c91367:	add    DWORD PTR [rcx],eax
   140c91369:	add    DWORD PTR [rcx],eax
   140c9136b:	add    DWORD PTR [rcx],eax
   140c9136d:	add    DWORD PTR [rcx],eax
   140c9136f:	add    BYTE PTR [rax],al
   140c91371:	add    DWORD PTR [rax],eax
   140c91373:	add    BYTE PTR [rax],al
   140c91375:	add    BYTE PTR [rcx],al
   140c91377:	add    DWORD PTR [rcx],eax
   140c91379:	add    DWORD PTR [rcx],eax
   140c9137b:	add    DWORD PTR [rcx],eax
   140c9137d:	add    DWORD PTR [rcx],eax
   140c9137f:	add    DWORD PTR [rcx],eax
   140c91381:	add    DWORD PTR [rcx],eax
   140c91383:	add    DWORD PTR [rcx],eax
   140c91385:	add    DWORD PTR [rcx],eax
   140c91387:	add    DWORD PTR [rcx],eax
   140c91389:	add    BYTE PTR [rcx],al
   140c9138b:	add    DWORD PTR [rcx],eax
   140c9138d:	add    DWORD PTR [rcx],eax
   140c9138f:	add    DWORD PTR [rcx],eax
   140c91391:	add    DWORD PTR [rcx],eax
   140c91393:	add    DWORD PTR [rcx],eax
   140c91395:	add    DWORD PTR [rcx],eax
   140c91397:	add    DWORD PTR [rcx],eax
	...
