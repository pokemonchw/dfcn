; six tile IDs accepted by the fortification predicate [0x1402c6cb0, 0x1402c6ce2)
   1402c6cb0:	0f b7 d1                                        	movzx  edx,cx
   1402c6cb3:	81 fa 64 01 00 00                               	cmp    edx,0x164
   1402c6cb9:	77 14                                           	ja     0x1402c6ccf
   1402c6cbb:	74 22                                           	je     0x1402c6cdf
   1402c6cbd:	83 ea 41                                        	sub    edx,0x41
   1402c6cc0:	74 1d                                           	je     0x1402c6cdf
   1402c6cc2:	81 ea 01 01 00 00                               	sub    edx,0x101
   1402c6cc8:	74 15                                           	je     0x1402c6cdf
   1402c6cca:	83 fa 01                                        	cmp    edx,0x1
   1402c6ccd:	eb 0b                                           	jmp    0x1402c6cda
   1402c6ccf:	81 ea b0 01 00 00                               	sub    edx,0x1b0
   1402c6cd5:	74 08                                           	je     0x1402c6cdf
   1402c6cd7:	83 fa 3a                                        	cmp    edx,0x3a
   1402c6cda:	74 03                                           	je     0x1402c6cdf
   1402c6cdc:	32 c0                                           	xor    al,al
   1402c6cde:	c3                                              	ret
   1402c6cdf:	b0 01                                           	mov    al,0x1
   1402c6ce1:	c3                                              	ret
