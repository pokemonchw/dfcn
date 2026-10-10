# steam PE:6a70a6d9:02711000; render-mode-selection; RVA 0x7f3d60..0x7f3dc4
0x007f3d60: movzx  eax,WORD PTR [rip+0x1e4ce09]        # 0x142640b70
0x007f3d67: sub    ax,0x19
0x007f3d6b: cmp    ax,0x1
0x007f3d6f: jbe    0x1407f6ab9
0x007f3d75: cmp    DWORD PTR [rip+0x1e55884],r14d        # 0x142649600
0x007f3d7c: jg     0x1407f3d8e
0x007f3d7e: cmp    BYTE PTR [rip+0x1e557b3],0x1        # 0x142649538
0x007f3d85: jne    0x1407f3dc4
0x007f3d87: mov    BYTE PTR [rip+0x1e557b2],r14b        # 0x142649540
0x007f3d8e: xor    r8d,r8d
0x007f3d91: movzx  edx,r12b
0x007f3d95: xor    ecx,ecx
0x007f3d97: call   0x1408be780
0x007f3d9c: call   0x140846760
0x007f3da1: call   0x140803250
0x007f3da6: call   QWORD PTR [rip+0xdf143c]        # 0x1415e51e8
0x007f3dac: mov    edx,eax
0x007f3dae: call   0x140e9afe0
0x007f3db3: lea    rcx,[rip+0x1ba6866]        # 0x14239a620
0x007f3dba: call   0x140af1190
0x007f3dbf: jmp    0x1407f6ac1
