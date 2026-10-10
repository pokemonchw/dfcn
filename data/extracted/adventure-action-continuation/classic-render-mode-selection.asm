# classic PE:6a70b91c:0270a000; render-mode-selection; RVA 0x7f15e0..0x7f1644
0x007f15e0: movzx  eax,WORD PTR [rip+0x1e49479]        # 0x14263aa60
0x007f15e7: sub    ax,0x19
0x007f15eb: cmp    ax,0x1
0x007f15ef: jbe    0x1407f4339
0x007f15f5: cmp    DWORD PTR [rip+0x1e51ef4],r14d        # 0x1426434f0
0x007f15fc: jg     0x1407f160e
0x007f15fe: cmp    BYTE PTR [rip+0x1e51e23],0x1        # 0x142643428
0x007f1605: jne    0x1407f1644
0x007f1607: mov    BYTE PTR [rip+0x1e51e22],r14b        # 0x142643430
0x007f160e: xor    r8d,r8d
0x007f1611: movzx  edx,r12b
0x007f1615: xor    ecx,ecx
0x007f1617: call   0x1408bc000
0x007f161c: call   0x140843fe0
0x007f1621: call   0x140800ad0
0x007f1626: call   QWORD PTR [rip+0xdeebbc]        # 0x1415e01e8
0x007f162c: mov    edx,eax
0x007f162e: call   0x140e95f50
0x007f1633: lea    rcx,[rip+0x1ba2ed6]        # 0x142394510
0x007f163a: call   0x140aee1d0
0x007f163f: jmp    0x1407f4341
