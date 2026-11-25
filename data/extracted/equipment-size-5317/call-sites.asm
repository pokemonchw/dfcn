; unit_race_to_size_compare
   1413bb7ad:	0f b7 93 a4 00 00 00 	movzx  edx,WORD PTR [rbx+0xa4]
   1413bb7b4:	48 8b cf             	mov    rcx,rdi
   1413bb7b7:	e8 a4 df fb ff       	call   0x141379760
   1413bb7bc:	85 c0                	test   eax,eax
   1413bb7be:	0f 85 31 05 00 00    	jne    0x1413bbcf5

; unit_base_size_to_two_handed
   141383c7d:	8b 97 b0 06 00 00    	mov    edx,DWORD PTR [rdi+0x6b0]
   141383c83:	ff 90 80 03 00 00    	call   QWORD PTR [rax+0x380]
   141383c89:	84 c0                	test   al,al
   141383c8b:	0f 84 d6 00 00 00    	je     0x141383d67

; item_name_size_prefix
   140a9c7b8:	e8 13 d0 8d 00       	call   0x1413797d0
   140a9c7bd:	83 e8 01             	sub    eax,0x1
   140a9c7c0:	74 17                	je     0x140a9c7d9
   140a9c7c2:	83 f8 01             	cmp    eax,0x1
   140a9c7c5:	75 33                	jne    0x140a9c7fa
   140a9c7c7:	8b 05 df 98 bc 00    	mov    eax,DWORD PTR [rip+0xbc98df]        # 0x1416660ac
   140a9c7cd:	89 45 88             	mov    DWORD PTR [rbp-0x78],eax
   140a9c7d0:	0f b6 05 d9 98 bc 00 	movzx  eax,BYTE PTR [rip+0xbc98d9]        # 0x1416660b0
   140a9c7d7:	eb 10                	jmp    0x140a9c7e9
   140a9c7d9:	8b 05 b1 96 c0 00    	mov    eax,DWORD PTR [rip+0xc096b1]        # 0x1416a5e90
   140a9c7df:	89 45 88             	mov    DWORD PTR [rbp-0x78],eax
   140a9c7e2:	0f b6 05 ab 96 c0 00 	movzx  eax,BYTE PTR [rip+0xc096ab]        # 0x1416a5e94

; switch_targets_and_item_type_remap
 141379928 83983701 df983701 b2983701 00010102  ..7...7...7.....
 141379938 01010202 02020202 02020202 02020202  ................
 141379948 02020202 02020202 02020202 02020202  ................
 141379958 01                                   .               
; large
 1416660ac 6c617267 6500                        large.          
; small
 1416a5e90 736d616c 6c00                        small.          
