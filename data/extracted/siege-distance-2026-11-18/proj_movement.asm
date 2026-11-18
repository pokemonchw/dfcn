0x140ec0e90: mov    QWORD PTR [rsp+0x10],rbx
0x140ec0e95: mov    QWORD PTR [rsp+0x18],rsi
0x140ec0e9a: mov    QWORD PTR [rsp+0x20],rdi
0x140ec0e9f: push   rbp
0x140ec0ea0: push   r12
0x140ec0ea2: push   r13
0x140ec0ea4: push   r14
0x140ec0ea6: push   r15
0x140ec0ea8: lea    rbp,[rsp-0xf0]
0x140ec0eb0: sub    rsp,0x1f0
0x140ec0eb7: mov    rax,QWORD PTR [rip+0x9fd182]        # 0x1418be040
0x140ec0ebe: xor    rax,rsp
0x140ec0ec1: mov    QWORD PTR [rbp+0xe0],rax
0x140ec0ec8: mov    r12,rcx
0x140ec0ecb: test   DWORD PTR [rcx+0x48],0x100
0x140ec0ed2: je     0x140ec4d3b
0x140ec0ed8: movsx  edx,WORD PTR [rcx+0x2c]
0x140ec0edc: mov    WORD PTR [rcx+0x32],dx
0x140ec0ee0: movsx  ecx,WORD PTR [rcx+0x2e]
0x140ec0ee4: mov    WORD PTR [r12+0x34],cx
0x140ec0eea: movsx  r10,WORD PTR [r12+0x30]
0x140ec0ef0: mov    WORD PTR [r12+0x36],r10w
0x140ec0ef6: xor    r13d,r13d
0x140ec0ef9: mov    edi,r13d
0x140ec0efc: test   dx,dx
0x140ec0eff: js     0x140ec0fdd
0x140ec0f05: mov    r8d,edx
0x140ec0f08: cmp    edx,DWORD PTR [rip+0x164964e]        # 0x14250a55c
0x140ec0f0e: jge    0x140ec0fdd
0x140ec0f14: test   cx,cx
0x140ec0f17: js     0x140ec0fdd
0x140ec0f1d: mov    r9d,ecx
0x140ec0f20: cmp    ecx,DWORD PTR [rip+0x164963a]        # 0x14250a560
0x140ec0f26: jge    0x140ec0fdd
0x140ec0f2c: test   r10w,r10w
0x140ec0f30: js     0x140ec0fdd
0x140ec0f36: cmp    r10d,DWORD PTR [rip+0x1649627]        # 0x14250a564
0x140ec0f3d: jge    0x140ec0fdd
0x140ec0f43: sar    dx,0x4
0x140ec0f47: sar    cx,0x4
0x140ec0f4b: mov    r11,QWORD PTR [rip+0x16495d6]        # 0x14250a528
0x140ec0f52: test   r11,r11
0x140ec0f55: je     0x140ec0fdd
0x140ec0f5b: movsx  rax,dx
0x140ec0f5f: movsx  rdx,cx
0x140ec0f63: mov    rax,QWORD PTR [r11+rax*8]
0x140ec0f67: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec0f6b: mov    rdx,QWORD PTR [rax+r10*8]
0x140ec0f6f: test   rdx,rdx
0x140ec0f72: je     0x140ec0fdd
0x140ec0f74: and    r8d,0x8000000f
0x140ec0f7b: jge    0x140ec0f87
0x140ec0f7d: dec    r8d
0x140ec0f80: or     r8d,0xfffffff0
0x140ec0f84: inc    r8d
0x140ec0f87: movsx  r8,r8w
0x140ec0f8b: shl    r8,0x4
0x140ec0f8f: and    r9d,0x8000000f
0x140ec0f96: jge    0x140ec0fa2
0x140ec0f98: dec    r9d
0x140ec0f9b: or     r9d,0xfffffff0
0x140ec0f9f: inc    r9d
0x140ec0fa2: movsx  rax,r9w
0x140ec0fa6: add    r8,rax
0x140ec0fa9: mov    r8d,DWORD PTR [rdx+r8*4+0x2a0]
0x140ec0fb1: mov    r15d,r8d
0x140ec0fb4: and    r15d,0x200000
0x140ec0fbb: movzx  eax,r8b
0x140ec0fbf: and    al,0x1
0x140ec0fc1: movzx  edx,al
0x140ec0fc4: lea    eax,[rdx+0x2]
0x140ec0fc7: movzx  esi,al
0x140ec0fca: test   r8b,0x2
0x140ec0fce: cmove  esi,edx
0x140ec0fd1: test   r8b,0x4
0x140ec0fd5: je     0x140ec0fe6
0x140ec0fd7: add    sil,0x4
0x140ec0fdb: jmp    0x140ec0fe6
0x140ec0fdd: mov    r15d,DWORD PTR [rbp-0x30]
0x140ec0fe1: movzx  esi,BYTE PTR [rsp+0x66]
0x140ec0fe6: mov    ecx,0x7d0
0x140ec0feb: cmp    sil,0x2
0x140ec0fef: jl     0x140ec106d
0x140ec0ff1: movsx  eax,sil
0x140ec0ff5: sub    eax,0x2
0x140ec0ff8: cmp    eax,0x5
0x140ec0ffb: ja     0x140ec106d
0x140ec0ffd: cdqe
0x140ec0fff: lea    r14,[rip+0xffffffffff13effa]        # 0x140000000
0x140ec1006: test   r15d,r15d
0x140ec1009: jne    0x140ec103b
0x140ec100b: mov    eax,DWORD PTR [r14+rax*4+0xec5d28]
0x140ec1013: add    rax,r14
0x140ec1016: jmp    rax
0x140ec1018: mov    edi,0x64
0x140ec101d: jmp    0x140ec106d
0x140ec101f: mov    edi,0xc8
0x140ec1024: jmp    0x140ec106d
0x140ec1026: mov    edi,0x12c
0x140ec102b: jmp    0x140ec106d
0x140ec102d: mov    edi,0x190
0x140ec1032: jmp    0x140ec106d
0x140ec1034: mov    edi,0x258
0x140ec1039: jmp    0x140ec106d
0x140ec103b: mov    eax,DWORD PTR [r14+rax*4+0xec5d40]
0x140ec1043: add    rax,r14
0x140ec1046: jmp    rax
0x140ec1048: mov    edi,0x1f4
0x140ec104d: jmp    0x140ec106d
0x140ec104f: mov    edi,0x3e8
0x140ec1054: jmp    0x140ec106d
0x140ec1056: mov    edi,0x5dc
0x140ec105b: jmp    0x140ec106d
0x140ec105d: mov    edi,ecx
0x140ec105f: jmp    0x140ec106d
0x140ec1061: mov    edi,0x9c4
0x140ec1066: jmp    0x140ec106d
0x140ec1068: mov    edi,0xbb8
0x140ec106d: mov    r11d,0x2710
0x140ec1073: cmp    sil,0x7
0x140ec1077: jne    0x140ec1292
0x140ec107d: mov    eax,DWORD PTR [r12+0x80]
0x140ec1085: cmp    eax,0xffffd8f0
0x140ec108a: jl     0x140ec1292
0x140ec1090: cmp    eax,r11d
0x140ec1093: jg     0x140ec1292
0x140ec1099: mov    eax,DWORD PTR [r12+0x84]
0x140ec10a1: cmp    eax,0xffffd8f0
0x140ec10a6: jl     0x140ec1292
0x140ec10ac: cmp    eax,r11d
0x140ec10af: jg     0x140ec1292
0x140ec10b5: mov    eax,DWORD PTR [r12+0x88]
0x140ec10bd: cmp    eax,0xffffd8f0
0x140ec10c2: jl     0x140ec1292
0x140ec10c8: cmp    eax,r11d
0x140ec10cb: jg     0x140ec1292
0x140ec10d1: xor    edx,edx
0x140ec10d3: mov    rcx,QWORD PTR [r12+0x98]
0x140ec10db: call   0x140ca2270
0x140ec10e0: mov    ecx,eax
0x140ec10e2: cmp    eax,0x3c
0x140ec10e5: jl     0x140ec128c
0x140ec10eb: mov    eax,0x88888889
0x140ec10f0: imul   ecx
0x140ec10f2: lea    r14d,[rcx+rdx*1]
0x140ec10f6: sar    r14d,0x5
0x140ec10fa: mov    eax,r14d
0x140ec10fd: shr    eax,0x1f
0x140ec1100: add    r14d,eax
0x140ec1103: movsx  r9,WORD PTR [r12+0x30]
0x140ec1109: movsx  ecx,WORD PTR [r12+0x2e]
0x140ec110f: movsx  edx,WORD PTR [r12+0x2c]
0x140ec1115: test   dx,dx
0x140ec1118: js     0x140ec11b0
0x140ec111e: mov    r10d,edx
0x140ec1121: cmp    edx,DWORD PTR [rip+0x1649435]        # 0x14250a55c
0x140ec1127: jge    0x140ec11b0
0x140ec112d: test   cx,cx
0x140ec1130: js     0x140ec11b0
0x140ec1132: mov    r8d,ecx
0x140ec1135: cmp    ecx,DWORD PTR [rip+0x1649425]        # 0x14250a560
0x140ec113b: jge    0x140ec11b0
0x140ec113d: test   r9w,r9w
0x140ec1141: js     0x140ec11b0
0x140ec1143: cmp    r9d,DWORD PTR [rip+0x164941a]        # 0x14250a564
0x140ec114a: jge    0x140ec11b0
0x140ec114c: sar    dx,0x4
0x140ec1150: sar    cx,0x4
0x140ec1154: mov    r11,QWORD PTR [rip+0x16493cd]        # 0x14250a528
0x140ec115b: test   r11,r11
0x140ec115e: je     0x140ec11b0
0x140ec1160: movsx  rax,dx
0x140ec1164: movsx  rdx,cx
0x140ec1168: mov    rax,QWORD PTR [r11+rax*8]
0x140ec116c: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec1170: mov    rcx,QWORD PTR [rax+r9*8]
0x140ec1174: test   rcx,rcx
0x140ec1177: je     0x140ec11b0
0x140ec1179: and    r8d,0x8000000f
0x140ec1180: jge    0x140ec118c
0x140ec1182: dec    r8d
0x140ec1185: or     r8d,0xfffffff0
0x140ec1189: inc    r8d
0x140ec118c: and    r10d,0x8000000f
0x140ec1193: jge    0x140ec119f
0x140ec1195: dec    r10d
0x140ec1198: or     r10d,0xfffffff0
0x140ec119c: inc    r10d
0x140ec119f: mov    DWORD PTR [rsp+0x20],r15d
0x140ec11a4: mov    r9b,0x6
0x140ec11a7: movzx  edx,r10w
0x140ec11ab: call   0x14054eab0
0x140ec11b0: call   0x14055e570
0x140ec11b5: mov    rbx,rax
0x140ec11b8: mov    DWORD PTR [rax+0x80],r14d
0x140ec11bf: mov    rcx,QWORD PTR [rax]
0x140ec11c2: mov    dl,0x1
0x140ec11c4: mov    r8,QWORD PTR [rcx+0x328]
0x140ec11cb: mov    rcx,rax
0x140ec11ce: test   r15d,r15d
0x140ec11d1: jne    0x140ec122a
0x140ec11d3: mov    WORD PTR [rax+0xc0],0x6
0x140ec11dc: call   r8
0x140ec11df: movzx  ecx,WORD PTR [r12+0x30]
0x140ec11e5: mov    WORD PTR [rsp+0x20],cx
0x140ec11ea: movzx  r9d,WORD PTR [r12+0x2e]
0x140ec11f0: movzx  r8d,WORD PTR [r12+0x2c]
0x140ec11f6: mov    rdx,rbx
0x140ec11f9: lea    rcx,[rip+0x1532770]        # 0x1423f3970
0x140ec1200: call   0x1414be3e0
0x140ec1205: mov    rdx,QWORD PTR [r12+0x98]
0x140ec120d: mov    rcx,rbx
0x140ec1210: call   0x140ca00d0
0x140ec1215: mov    rax,QWORD PTR [rbx]
0x140ec1218: mov    r8b,0x1
0x140ec121b: movzx  edx,r8b
0x140ec121f: mov    rcx,rbx
0x140ec1222: call   QWORD PTR [rax+0x4a8]
0x140ec1228: jmp    0x140ec128c
0x140ec122a: mov    WORD PTR [rax+0xc0],r13w
0x140ec1232: mov    DWORD PTR [rax+0xc4],0xffffffff
0x140ec123c: call   r8
0x140ec123f: movzx  ecx,WORD PTR [r12+0x30]
0x140ec1245: mov    WORD PTR [rsp+0x20],cx
0x140ec124a: movzx  r9d,WORD PTR [r12+0x2e]
0x140ec1250: movzx  r8d,WORD PTR [r12+0x2c]
0x140ec1256: mov    rdx,rbx
0x140ec1259: lea    rcx,[rip+0x1532710]        # 0x1423f3970
0x140ec1260: call   0x1414be3e0
0x140ec1265: mov    rdx,QWORD PTR [r12+0x98]
0x140ec126d: mov    rcx,rbx
0x140ec1270: call   0x140ca00d0
0x140ec1275: mov    rax,QWORD PTR [rbx]
0x140ec1278: mov    edx,0x2ee0
0x140ec127d: xor    r9d,r9d
0x140ec1280: mov    r8b,0x1
0x140ec1283: mov    rcx,rbx
0x140ec1286: call   QWORD PTR [rax+0x4b0]
0x140ec128c: mov    r11d,0x2710
0x140ec1292: test   edi,edi
0x140ec1294: je     0x140ec1330
0x140ec129a: mov    eax,DWORD PTR [r12+0x80]
0x140ec12a2: test   eax,eax
0x140ec12a4: jle    0x140ec12b4
0x140ec12a6: sub    eax,edi
0x140ec12a8: mov    DWORD PTR [r12+0x80],eax
0x140ec12b0: js     0x140ec12c4
0x140ec12b2: jmp    0x140ec12cc
0x140ec12b4: jns    0x140ec12cc
0x140ec12b6: add    eax,edi
0x140ec12b8: mov    DWORD PTR [r12+0x80],eax
0x140ec12c0: test   eax,eax
0x140ec12c2: jle    0x140ec12cc
0x140ec12c4: mov    DWORD PTR [r12+0x80],r13d
0x140ec12cc: mov    eax,DWORD PTR [r12+0x84]
0x140ec12d4: test   eax,eax
0x140ec12d6: jle    0x140ec12e6
0x140ec12d8: sub    eax,edi
0x140ec12da: mov    DWORD PTR [r12+0x84],eax
0x140ec12e2: js     0x140ec12f6
0x140ec12e4: jmp    0x140ec12fe
0x140ec12e6: jns    0x140ec12fe
0x140ec12e8: add    eax,edi
0x140ec12ea: mov    DWORD PTR [r12+0x84],eax
0x140ec12f2: test   eax,eax
0x140ec12f4: jle    0x140ec12fe
0x140ec12f6: mov    DWORD PTR [r12+0x84],r13d
0x140ec12fe: mov    eax,DWORD PTR [r12+0x88]
0x140ec1306: test   eax,eax
0x140ec1308: jle    0x140ec1318
0x140ec130a: sub    eax,edi
0x140ec130c: mov    DWORD PTR [r12+0x88],eax
0x140ec1314: js     0x140ec1328
0x140ec1316: jmp    0x140ec1330
0x140ec1318: jns    0x140ec1330
0x140ec131a: add    eax,edi
0x140ec131c: mov    DWORD PTR [r12+0x88],eax
0x140ec1324: test   eax,eax
0x140ec1326: jle    0x140ec1330
0x140ec1328: mov    DWORD PTR [r12+0x88],r13d
0x140ec1330: mov    ecx,0x41eb0
0x140ec1335: cmp    sil,0x7
0x140ec1339: jne    0x140ec1347
0x140ec133b: mov    ecx,0x1388
0x140ec1340: test   r15d,r15d
0x140ec1343: cmove  ecx,r11d
0x140ec1347: mov    r8d,DWORD PTR [r12+0x80]
0x140ec134f: cmp    r8d,ecx
0x140ec1352: jle    0x140ec1373
0x140ec1354: add    r8d,0xffffd8f0
0x140ec135b: mov    DWORD PTR [r12+0x80],r8d
0x140ec1363: cmp    r8d,ecx
0x140ec1366: jge    0x140ec1373
0x140ec1368: mov    DWORD PTR [r12+0x80],ecx
0x140ec1370: mov    r8d,ecx
0x140ec1373: mov    edx,ecx
0x140ec1375: neg    edx
0x140ec1377: cmp    r8d,edx
0x140ec137a: jge    0x140ec139b
0x140ec137c: add    r8d,0x2710
0x140ec1383: mov    DWORD PTR [r12+0x80],r8d
0x140ec138b: cmp    r8d,edx
0x140ec138e: jle    0x140ec139b
0x140ec1390: mov    DWORD PTR [r12+0x80],edx
0x140ec1398: mov    r8d,edx
0x140ec139b: mov    r9d,DWORD PTR [r12+0x84]
0x140ec13a3: cmp    r9d,ecx
0x140ec13a6: jle    0x140ec13c7
0x140ec13a8: add    r9d,0xffffd8f0
0x140ec13af: mov    DWORD PTR [r12+0x84],r9d
0x140ec13b7: cmp    r9d,ecx
0x140ec13ba: jge    0x140ec13c7
0x140ec13bc: mov    DWORD PTR [r12+0x84],ecx
0x140ec13c4: mov    r9d,ecx
0x140ec13c7: cmp    r9d,edx
0x140ec13ca: jge    0x140ec13eb
0x140ec13cc: add    r9d,0x2710
0x140ec13d3: mov    DWORD PTR [r12+0x84],r9d
0x140ec13db: cmp    r9d,edx
0x140ec13de: jle    0x140ec13eb
0x140ec13e0: mov    DWORD PTR [r12+0x84],edx
0x140ec13e8: mov    r9d,edx
0x140ec13eb: mov    r10d,DWORD PTR [r12+0x88]
0x140ec13f3: cmp    r10d,ecx
0x140ec13f6: jle    0x140ec1408
0x140ec13f8: lea    eax,[r10-0x2710]
0x140ec13ff: mov    r10d,eax
0x140ec1402: cmp    eax,ecx
0x140ec1404: cmovl  r10d,ecx
0x140ec1408: cmp    r10d,edx
0x140ec140b: jge    0x140ec141d
0x140ec140d: lea    eax,[r10+0x2710]
0x140ec1414: mov    r10d,eax
0x140ec1417: cmp    eax,edx
0x140ec1419: cmovg  r10d,edx
0x140ec141d: add    DWORD PTR [r12+0x74],r8d
0x140ec1422: add    DWORD PTR [r12+0x78],r9d
0x140ec1427: add    DWORD PTR [r12+0x7c],r10d
0x140ec142c: lea    eax,[r10-0x1324]
0x140ec1433: mov    DWORD PTR [r12+0x88],eax
0x140ec143b: movzx  esi,WORD PTR [r12+0x32]
0x140ec1441: mov    WORD PTR [rsp+0x68],si
0x140ec1446: movzx  edi,WORD PTR [r12+0x34]
0x140ec144c: mov    WORD PTR [rsp+0x62],di
0x140ec1451: movzx  r15d,WORD PTR [r12+0x36]
0x140ec1457: mov    WORD PTR [rsp+0x64],r15w
0x140ec145d: movzx  eax,BYTE PTR [rsp+0x66]
0x140ec1462: mov    DWORD PTR [rsp+0x6c],eax
0x140ec1466: movzx  eax,BYTE PTR [rsp+0x66]
0x140ec146b: mov    DWORD PTR [rbp-0x80],eax
0x140ec146e: xor    r14d,r14d
0x140ec1471: jmp    0x140ec1478
0x140ec1473: movzx  edi,WORD PTR [rsp+0x62]
0x140ec1478: movzx  ebx,r15w
0x140ec147c: mov    WORD PTR [r12+0x32],si
0x140ec1482: mov    WORD PTR [r12+0x34],di
0x140ec1488: mov    WORD PTR [r12+0x36],r15w
0x140ec148e: mov    edx,DWORD PTR [r12+0x74]
0x140ec1493: mov    DWORD PTR [rbp-0x50],edx
0x140ec1496: mov    r8d,DWORD PTR [r12+0x78]
0x140ec149b: mov    DWORD PTR [rbp-0x68],r8d
0x140ec149f: mov    r9d,DWORD PTR [r12+0x7c]
0x140ec14a4: mov    DWORD PTR [rbp-0x58],r9d
0x140ec14a8: xor    al,al
0x140ec14aa: mov    ecx,edx
0x140ec14ac: cmp    edx,0xffff3cb0
0x140ec14b2: jge    0x140ec14c9
0x140ec14b4: lea    ecx,[rdx+0x186a0]
0x140ec14ba: mov    DWORD PTR [r12+0x74],ecx
0x140ec14bf: dec    si
0x140ec14c2: mov    WORD PTR [rsp+0x68],si
0x140ec14c7: mov    al,0x1
0x140ec14c9: cmp    ecx,0xc350
0x140ec14cf: jle    0x140ec14e6
0x140ec14d1: lea    eax,[rcx-0x186a0]
0x140ec14d7: mov    DWORD PTR [r12+0x74],eax
0x140ec14dc: inc    si
0x140ec14df: mov    WORD PTR [rsp+0x68],si
0x140ec14e4: mov    al,0x1
0x140ec14e6: mov    ecx,r8d
0x140ec14e9: cmp    r8d,0xffff3cb0
0x140ec14f0: jge    0x140ec1508
0x140ec14f2: lea    ecx,[r8+0x186a0]
0x140ec14f9: mov    DWORD PTR [r12+0x78],ecx
0x140ec14fe: dec    di
0x140ec1501: mov    WORD PTR [rsp+0x62],di
0x140ec1506: mov    al,0x1
0x140ec1508: cmp    ecx,0xc350
0x140ec150e: jle    0x140ec1525
0x140ec1510: lea    eax,[rcx-0x186a0]
0x140ec1516: mov    DWORD PTR [r12+0x78],eax
0x140ec151b: inc    di
0x140ec151e: mov    WORD PTR [rsp+0x62],di
0x140ec1523: mov    al,0x1
0x140ec1525: cmp    r9d,0xfffedb08
0x140ec152c: jge    0x140ec1546
0x140ec152e: lea    eax,[r9+0x249f0]
0x140ec1535: mov    DWORD PTR [r12+0x7c],eax
0x140ec153a: dec    r15w
0x140ec153e: mov    WORD PTR [rsp+0x64],r15w
0x140ec1544: mov    al,0x1
0x140ec1546: mov    ecx,DWORD PTR [r12+0x7c]
0x140ec154b: cmp    ecx,0x124f8
0x140ec1551: jle    0x140ec156a
0x140ec1553: lea    eax,[rcx-0x249f0]
0x140ec1559: mov    DWORD PTR [r12+0x7c],eax
0x140ec155e: inc    r15w
0x140ec1562: mov    WORD PTR [rsp+0x64],r15w
0x140ec1568: jmp    0x140ec1572
0x140ec156a: test   al,al
0x140ec156c: je     0x140ec4d4b
0x140ec1572: mov    eax,DWORD PTR [r12+0x80]
0x140ec157a: mov    DWORD PTR [rbp-0x44],eax
0x140ec157d: mov    eax,DWORD PTR [r12+0x84]
0x140ec1585: mov    DWORD PTR [rbp-0x48],eax
0x140ec1588: mov    eax,DWORD PTR [r12+0x88]
0x140ec1590: mov    DWORD PTR [rbp-0x4c],eax
0x140ec1593: movzx  r9d,r15w
0x140ec1597: movzx  r8d,di
0x140ec159b: movzx  edx,si
0x140ec159e: lea    rcx,[rip+0x15323cb]        # 0x1423f3970
0x140ec15a5: call   0x1414e2d40
0x140ec15aa: movzx  r8d,al
0x140ec15ae: mov    BYTE PTR [rsp+0x60],al
0x140ec15b2: xor    r13b,r13b
0x140ec15b5: mov    BYTE PTR [rsp+0x66],r13b
0x140ec15ba: cmp    bx,r15w
0x140ec15be: je     0x140ec215e
0x140ec15c4: test   al,al
0x140ec15c6: je     0x140ec16b1
0x140ec15cc: movzx  edx,WORD PTR [r12+0x32]
0x140ec15d2: cmp    dx,si
0x140ec15d5: jne    0x140ec175b
0x140ec15db: movzx  r8d,WORD PTR [r12+0x34]
0x140ec15e1: cmp    r8w,di
0x140ec15e5: jne    0x140ec175b
0x140ec15eb: mov    DWORD PTR [rsp+0x40],r14d
0x140ec15f0: lea    rcx,[rip+0x1532379]        # 0x1423f3970
0x140ec15f7: mov    BYTE PTR [rsp+0x38],r13b
0x140ec15fc: mov    BYTE PTR [rsp+0x30],r13b
0x140ec1601: mov    BYTE PTR [rsp+0x28],r13b
0x140ec1606: mov    BYTE PTR [rsp+0x20],0x1
0x140ec160b: cmp    bx,r15w
0x140ec160f: jge    0x140ec1644
0x140ec1611: movzx  r8d,di
0x140ec1615: movzx  edx,si
0x140ec1618: call   0x141460470
0x140ec161d: test   al,al
0x140ec161f: je     0x140ec16ac
0x140ec1625: call   0x140ece790
0x140ec162a: mov    ebx,eax
0x140ec162c: mov    eax,0x3
0x140ec1631: mul    ebx
0x140ec1633: mov    ecx,ebx
0x140ec1635: sub    ecx,edx
0x140ec1637: shr    ecx,1
0x140ec1639: add    ecx,edx
0x140ec163b: movzx  r8d,di
0x140ec163f: movzx  edx,si
0x140ec1642: jmp    0x140ec1673
0x140ec1644: movzx  r9d,bx
0x140ec1648: call   0x141460470
0x140ec164d: test   al,al
0x140ec164f: je     0x140ec16ac
0x140ec1651: call   0x140ece790
0x140ec1656: mov    ebx,eax
0x140ec1658: mov    eax,0x3
0x140ec165d: mul    ebx
0x140ec165f: mov    ecx,ebx
0x140ec1661: sub    ecx,edx
0x140ec1663: shr    ecx,1
0x140ec1665: add    ecx,edx
0x140ec1667: movzx  r8d,WORD PTR [r12+0x34]
0x140ec166d: movzx  edx,WORD PTR [r12+0x32]
0x140ec1673: shr    ecx,0x1e
0x140ec1676: imul   ecx,ecx,0x80000001
0x140ec167c: movzx  r9d,r15w
0x140ec1680: add    ebx,ecx
0x140ec1682: lea    rcx,[rip+0x15322e7]        # 0x1423f3970
0x140ec1689: call   0x1400695b0
0x140ec168e: movzx  ecx,ax
0x140ec1691: call   0x140ebefe0
0x140ec1696: mov    r8d,eax
0x140ec1699: mov    eax,0xc7ffffaf
0x140ec169e: mul    ebx
0x140ec16a0: shr    edx,0x18
0x140ec16a3: cmp    edx,r8d
0x140ec16a6: jge    0x140ec196f
0x140ec16ac: mov    BYTE PTR [rsp+0x60],r13b
0x140ec16b1: movzx  r9d,WORD PTR [r12+0x36]
0x140ec16b7: cmp    r15w,r9w
0x140ec16bb: jge    0x140ec16da
0x140ec16bd: movzx  r8d,di
0x140ec16c1: movzx  edx,si
0x140ec16c4: lea    rcx,[rip+0x15322a5]        # 0x1423f3970
0x140ec16cb: call   0x1400695b0
0x140ec16d0: cmp    ax,0x23
0x140ec16d4: je     0x140ec4cc3
0x140ec16da: movzx  r8d,di
0x140ec16de: movzx  edx,si
0x140ec16e1: lea    rcx,[rip+0x1532288]        # 0x1423f3970
0x140ec16e8: test   BYTE PTR [r12+0x48],0x4
0x140ec16ee: je     0x140ec2130
0x140ec16f4: movzx  r15d,r9w
0x140ec16f8: mov    WORD PTR [rsp+0x64],r9w
0x140ec16fe: call   0x1414e2d40
0x140ec1703: movzx  r8d,al
0x140ec1707: mov    BYTE PTR [rsp+0x60],al
0x140ec170b: test   al,al
0x140ec170d: je     0x140ec174e
0x140ec170f: mov    ecx,DWORD PTR [r12+0x80]
0x140ec1717: mov    eax,ecx
0x140ec1719: neg    eax
0x140ec171b: cmovs  eax,ecx
0x140ec171e: mov    edx,0x2710
0x140ec1723: cmp    eax,edx
0x140ec1725: jge    0x140ec20bc
0x140ec172b: mov    eax,DWORD PTR [r12+0x84]
0x140ec1733: neg    eax
0x140ec1735: cmovs  eax,DWORD PTR [r12+0x84]
0x140ec173e: cmp    eax,edx
0x140ec1740: jge    0x140ec20bc
0x140ec1746: xor    r8b,r8b
0x140ec1749: mov    BYTE PTR [rsp+0x60],r8b
0x140ec174e: mov    r13b,0x1
0x140ec1751: mov    BYTE PTR [rsp+0x66],r13b
0x140ec1756: jmp    0x140ec1eb2
0x140ec175b: mov    DWORD PTR [rsp+0x40],r14d
0x140ec1760: movzx  r8d,di
0x140ec1764: movzx  edx,si
0x140ec1767: lea    rcx,[rip+0x1532202]        # 0x1423f3970
0x140ec176e: mov    BYTE PTR [rsp+0x38],r13b
0x140ec1773: mov    BYTE PTR [rsp+0x30],r13b
0x140ec1778: mov    BYTE PTR [rsp+0x28],r13b
0x140ec177d: mov    BYTE PTR [rsp+0x20],0x1
0x140ec1782: cmp    bx,r15w
0x140ec1786: jge    0x140ec184a
0x140ec178c: call   0x141460470
0x140ec1791: test   al,al
0x140ec1793: je     0x140ec17b2
0x140ec1795: movzx  r9d,WORD PTR [r12+0x36]
0x140ec179b: movzx  r8d,di
0x140ec179f: movzx  edx,si
0x140ec17a2: lea    rcx,[rip+0x15321c7]        # 0x1423f3970
0x140ec17a9: call   0x1414e2d40
0x140ec17ae: test   al,al
0x140ec17b0: jne    0x140ec17ef
0x140ec17b2: mov    DWORD PTR [rsp+0x40],r14d
0x140ec17b7: mov    BYTE PTR [rsp+0x38],r13b
0x140ec17bc: mov    BYTE PTR [rsp+0x30],r13b
0x140ec17c1: mov    BYTE PTR [rsp+0x28],r13b
0x140ec17c6: mov    BYTE PTR [rsp+0x20],0x1
0x140ec17cb: movzx  r9d,r15w
0x140ec17cf: movzx  r8d,WORD PTR [r12+0x34]
0x140ec17d5: movzx  edx,WORD PTR [r12+0x32]
0x140ec17db: lea    rcx,[rip+0x153218e]        # 0x1423f3970
0x140ec17e2: call   0x141460470
0x140ec17e7: test   al,al
0x140ec17e9: je     0x140ec16ac
0x140ec17ef: call   0x140ece790
0x140ec17f4: mov    ebx,eax
0x140ec17f6: mov    eax,0x3
0x140ec17fb: mul    ebx
0x140ec17fd: mov    ecx,ebx
0x140ec17ff: sub    ecx,edx
0x140ec1801: shr    ecx,1
0x140ec1803: add    ecx,edx
0x140ec1805: shr    ecx,0x1e
0x140ec1808: imul   ecx,ecx,0x80000001
0x140ec180e: add    ebx,ecx
0x140ec1810: movzx  r9d,r15w
0x140ec1814: movzx  r8d,di
0x140ec1818: movzx  edx,si
0x140ec181b: lea    rcx,[rip+0x153214e]        # 0x1423f3970
0x140ec1822: call   0x1400695b0
0x140ec1827: movzx  ecx,ax
0x140ec182a: call   0x140ebefe0
0x140ec182f: mov    r8d,eax
0x140ec1832: mov    eax,0xc7ffffaf
0x140ec1837: mul    ebx
0x140ec1839: shr    edx,0x18
0x140ec183c: cmp    edx,r8d
0x140ec183f: jl     0x140ec16ac
0x140ec1845: jmp    0x140ec1651
0x140ec184a: movzx  r9d,bx
0x140ec184e: call   0x141460470
0x140ec1853: test   al,al
0x140ec1855: jne    0x140ec18ba
0x140ec1857: mov    DWORD PTR [rsp+0x40],r14d
0x140ec185c: mov    BYTE PTR [rsp+0x38],r13b
0x140ec1861: mov    BYTE PTR [rsp+0x30],r13b
0x140ec1866: mov    BYTE PTR [rsp+0x28],r13b
0x140ec186b: mov    BYTE PTR [rsp+0x20],0x1
0x140ec1870: movzx  r9d,WORD PTR [r12+0x36]
0x140ec1876: movzx  r8d,WORD PTR [r12+0x34]
0x140ec187c: movzx  edx,WORD PTR [r12+0x32]
0x140ec1882: lea    rcx,[rip+0x15320e7]        # 0x1423f3970
0x140ec1889: call   0x141460470
0x140ec188e: test   al,al
0x140ec1890: je     0x140ec16ac
0x140ec1896: movzx  r9d,r15w
0x140ec189a: movzx  r8d,WORD PTR [r12+0x34]
0x140ec18a0: movzx  edx,WORD PTR [r12+0x32]
0x140ec18a6: lea    rcx,[rip+0x15320c3]        # 0x1423f3970
0x140ec18ad: call   0x1414e2d40
0x140ec18b2: test   al,al
0x140ec18b4: je     0x140ec16ac
0x140ec18ba: call   0x140ece790
0x140ec18bf: mov    ebx,eax
0x140ec18c1: mov    eax,0x3
0x140ec18c6: mul    ebx
0x140ec18c8: mov    ecx,ebx
0x140ec18ca: sub    ecx,edx
0x140ec18cc: shr    ecx,1
0x140ec18ce: add    ecx,edx
0x140ec18d0: shr    ecx,0x1e
0x140ec18d3: imul   ecx,ecx,0x80000001
0x140ec18d9: add    ebx,ecx
0x140ec18db: movzx  r9d,WORD PTR [r12+0x36]
0x140ec18e1: movzx  r8d,di
0x140ec18e5: movzx  edx,si
0x140ec18e8: lea    rcx,[rip+0x1532081]        # 0x1423f3970
0x140ec18ef: call   0x1400695b0
0x140ec18f4: movzx  ecx,ax
0x140ec18f7: call   0x140ebefe0
0x140ec18fc: mov    r8d,eax
0x140ec18ff: mov    eax,0xc7ffffaf
0x140ec1904: mul    ebx
0x140ec1906: shr    edx,0x18
0x140ec1909: cmp    edx,r8d
0x140ec190c: jl     0x140ec16ac
0x140ec1912: call   0x140ece790
0x140ec1917: mov    ebx,eax
0x140ec1919: mov    eax,0x3
0x140ec191e: mul    ebx
0x140ec1920: mov    ecx,ebx
0x140ec1922: sub    ecx,edx
0x140ec1924: shr    ecx,1
0x140ec1926: add    ecx,edx
0x140ec1928: shr    ecx,0x1e
0x140ec192b: imul   ecx,ecx,0x80000001
0x140ec1931: add    ebx,ecx
0x140ec1933: movzx  r9d,WORD PTR [r12+0x36]
0x140ec1939: movzx  r8d,WORD PTR [r12+0x34]
0x140ec193f: movzx  edx,WORD PTR [r12+0x32]
0x140ec1945: lea    rcx,[rip+0x1532024]        # 0x1423f3970
0x140ec194c: call   0x1400695b0
0x140ec1951: movzx  ecx,ax
0x140ec1954: call   0x140ebefe0
0x140ec1959: mov    r8d,eax
0x140ec195c: mov    eax,0xc7ffffaf
0x140ec1961: mul    ebx
0x140ec1963: shr    edx,0x18
0x140ec1966: cmp    edx,r8d
0x140ec1969: jl     0x140ec16ac
0x140ec196f: mov    ebx,DWORD PTR [r12+0x80]
0x140ec1977: neg    ebx
0x140ec1979: cmovs  ebx,DWORD PTR [r12+0x80]
0x140ec1982: mov    edi,DWORD PTR [r12+0x84]
0x140ec198a: neg    edi
0x140ec198c: cmovs  edi,DWORD PTR [r12+0x84]
0x140ec1995: mov    esi,DWORD PTR [r12+0x88]
0x140ec199d: neg    esi
0x140ec199f: cmovs  esi,DWORD PTR [r12+0x88]
0x140ec19a8: cmp    ebx,0x4e20
0x140ec19ae: jge    0x140ec19bc
0x140ec19b0: cmp    edi,0x4e20
0x140ec19b6: jl     0x140ec1ea7
0x140ec19bc: cmp    ebx,esi
0x140ec19be: jge    0x140ec19c8
0x140ec19c0: cmp    edi,esi
0x140ec19c2: jl     0x140ec1ea7
0x140ec19c8: movzx  r14d,WORD PTR [r12+0x36]
0x140ec19ce: movzx  r9d,r14w
0x140ec19d2: movzx  r8d,WORD PTR [r12+0x34]
0x140ec19d8: movzx  edx,WORD PTR [r12+0x32]
0x140ec19de: lea    rcx,[rip+0x1531f8b]        # 0x1423f3970
0x140ec19e5: call   0x140142fc0
0x140ec19ea: cmp    al,0x3
0x140ec19ec: jg     0x140ec1ea7
0x140ec19f2: movzx  r9d,r14w
0x140ec19f6: movzx  r8d,WORD PTR [rsp+0x62]
0x140ec19fc: movzx  edx,WORD PTR [rsp+0x68]
0x140ec1a01: lea    rcx,[rip+0x1531f68]        # 0x1423f3970
0x140ec1a08: call   0x140142fc0
0x140ec1a0d: cmp    al,0x3
0x140ec1a0f: jg     0x140ec1ea7
0x140ec1a15: movzx  r9d,r15w
0x140ec1a19: movzx  r8d,WORD PTR [rsp+0x62]
0x140ec1a1f: movzx  edx,WORD PTR [rsp+0x68]
0x140ec1a24: lea    rcx,[rip+0x1531f45]        # 0x1423f3970
0x140ec1a2b: call   0x140142fc0
0x140ec1a30: cmp    al,0x5
0x140ec1a32: jl     0x140ec1ea7
0x140ec1a38: movzx  r9d,r14w
0x140ec1a3c: movzx  r8d,WORD PTR [rsp+0x62]
0x140ec1a42: movsx  r14d,WORD PTR [rsp+0x68]
0x140ec1a48: movzx  edx,r14w
0x140ec1a4c: lea    rcx,[rip+0x1531f1d]        # 0x1423f3970
0x140ec1a53: call   0x1414e2d40
0x140ec1a58: test   al,al
0x140ec1a5a: je     0x140ec1ea7
0x140ec1a60: mov    r15d,DWORD PTR [rip+0x1648afd]        # 0x14250a564
0x140ec1a67: mov    r11d,DWORD PTR [rip+0x1648af2]        # 0x14250a560
0x140ec1a6e: mov    r10d,DWORD PTR [rip+0x1648ae7]        # 0x14250a55c
0x140ec1a75: mov    r9,QWORD PTR [rip+0x1648aac]        # 0x14250a528
0x140ec1a7c: test   r14w,r14w
0x140ec1a80: js     0x140ec1b62
0x140ec1a86: cmp    r14d,r10d
0x140ec1a89: jge    0x140ec1b62
0x140ec1a8f: movsx  ecx,WORD PTR [rsp+0x62]
0x140ec1a94: test   cx,cx
0x140ec1a97: js     0x140ec1b62
0x140ec1a9d: cmp    ecx,r11d
0x140ec1aa0: jge    0x140ec1b62
0x140ec1aa6: movsx  r8,WORD PTR [rsp+0x64]
0x140ec1aac: test   r8w,r8w
0x140ec1ab0: js     0x140ec1b62
0x140ec1ab6: cmp    r8d,r15d
0x140ec1ab9: jge    0x140ec1b62
0x140ec1abf: movzx  eax,r14w
0x140ec1ac3: sar    ax,0x4
0x140ec1ac7: sar    cx,0x4
0x140ec1acb: test   r9,r9
0x140ec1ace: je     0x140ec1b62
0x140ec1ad4: movsx  rax,ax
0x140ec1ad8: movsx  rdx,cx
0x140ec1adc: mov    rax,QWORD PTR [r9+rax*8]
0x140ec1ae0: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec1ae4: mov    rdx,QWORD PTR [rax+r8*8]
0x140ec1ae8: test   rdx,rdx
0x140ec1aeb: je     0x140ec1b62
0x140ec1aed: mov    eax,r14d
0x140ec1af0: and    eax,0x8000000f
0x140ec1af5: jge    0x140ec1afe
0x140ec1af7: dec    eax
0x140ec1af9: or     eax,0xfffffff0
0x140ec1afc: inc    eax
0x140ec1afe: movsx  r8,ax
0x140ec1b02: shl    r8,0x4
0x140ec1b06: movsx  eax,WORD PTR [rsp+0x62]
0x140ec1b0b: and    eax,0x8000000f
0x140ec1b10: jge    0x140ec1b19
0x140ec1b12: dec    eax
0x140ec1b14: or     eax,0xfffffff0
0x140ec1b17: inc    eax
0x140ec1b19: movsx  rax,ax
0x140ec1b1d: add    r8,rax
0x140ec1b20: mov    r8d,DWORD PTR [rdx+r8*4+0x2a0]
0x140ec1b28: mov    eax,r8d
0x140ec1b2b: and    eax,0x200000
0x140ec1b30: mov    DWORD PTR [rsp+0x70],eax
0x140ec1b34: movzx  eax,r8b
0x140ec1b38: and    al,0x1
0x140ec1b3a: movzx  edx,al
0x140ec1b3d: lea    eax,[rdx+0x2]
0x140ec1b40: movzx  r14d,al
0x140ec1b44: test   r8b,0x2
0x140ec1b48: cmove  r14d,edx
0x140ec1b4c: mov    DWORD PTR [rsp+0x6c],r14d
0x140ec1b51: test   r8b,0x4
0x140ec1b55: je     0x140ec1b67
0x140ec1b57: add    r14b,0x4
0x140ec1b5b: mov    DWORD PTR [rsp+0x6c],r14d
0x140ec1b60: jmp    0x140ec1b67
0x140ec1b62: mov    r14d,DWORD PTR [rsp+0x6c]
0x140ec1b67: mov    eax,DWORD PTR [rsp+0x70]
0x140ec1b6b: cmp    eax,0x200000
0x140ec1b70: jne    0x140ec1d63
0x140ec1b76: cmp    r14b,0x5
0x140ec1b7a: jl     0x140ec1e20
0x140ec1b80: mov    r14,QWORD PTR [r12+0x98]
0x140ec1b88: test   DWORD PTR [r14+0x10],0x20000000
0x140ec1b90: jne    0x140ec1bb6
0x140ec1b92: mov    rcx,r14
0x140ec1b95: call   0x140c7dc00
0x140ec1b9a: mov    r15d,DWORD PTR [rip+0x16489c3]        # 0x14250a564
0x140ec1ba1: mov    r11d,DWORD PTR [rip+0x16489b8]        # 0x14250a560
0x140ec1ba8: mov    r10d,DWORD PTR [rip+0x16489ad]        # 0x14250a55c
0x140ec1baf: mov    r9,QWORD PTR [rip+0x1648972]        # 0x14250a528
0x140ec1bb6: mov    ecx,DWORD PTR [r14+0x74]
0x140ec1bba: mov    r8d,0x2710
0x140ec1bc0: cmp    ecx,r8d
0x140ec1bc3: cmovge ecx,r8d
0x140ec1bc7: cmp    ebx,edi
0x140ec1bc9: cmovl  ebx,edi
0x140ec1bcc: cmp    ebx,esi
0x140ec1bce: cmovl  ebx,esi
0x140ec1bd1: mov    eax,0x51eb851f
0x140ec1bd6: imul   ebx
0x140ec1bd8: sar    edx,0x5
0x140ec1bdb: mov    eax,edx
0x140ec1bdd: shr    eax,0x1f
0x140ec1be0: add    edx,eax
0x140ec1be2: cmp    edx,0x1
0x140ec1be5: jge    0x140ec1bee
0x140ec1be7: mov    edx,0x1
0x140ec1bec: jmp    0x140ec1bf8
0x140ec1bee: mov    eax,0x7d0
0x140ec1bf3: cmp    edx,eax
0x140ec1bf5: cmovg  edx,eax
0x140ec1bf8: imul   edx,ecx
0x140ec1bfb: mov    eax,0x68db8bad
0x140ec1c00: imul   edx
0x140ec1c02: mov    ebx,edx
0x140ec1c04: sar    ebx,0xb
0x140ec1c07: mov    eax,ebx
0x140ec1c09: shr    eax,0x1f
0x140ec1c0c: add    ebx,eax
0x140ec1c0e: cmp    ebx,0x1
0x140ec1c11: jl     0x140ec1e20
0x140ec1c17: cmp    ebx,0x64
0x140ec1c1a: jle    0x140ec1c25
0x140ec1c1c: mov    edi,0x64
0x140ec1c21: mov    ebx,edi
0x140ec1c23: jmp    0x140ec1c33
0x140ec1c25: cmp    ebx,0x1
0x140ec1c28: jle    0x140ec1e20
0x140ec1c2e: mov    edi,0x64
0x140ec1c33: movsx  r8,WORD PTR [r12+0x36]
0x140ec1c39: movsx  ecx,WORD PTR [r12+0x34]
0x140ec1c3f: movsx  edx,WORD PTR [r12+0x32]
0x140ec1c45: test   dx,dx
0x140ec1c48: js     0x140ec1c90
0x140ec1c4a: cmp    edx,r10d
0x140ec1c4d: jge    0x140ec1c90
0x140ec1c4f: test   cx,cx
0x140ec1c52: js     0x140ec1c90
0x140ec1c54: cmp    ecx,r11d
0x140ec1c57: jge    0x140ec1c90
0x140ec1c59: test   r8w,r8w
0x140ec1c5d: js     0x140ec1c90
0x140ec1c5f: cmp    r8d,r15d
0x140ec1c62: jge    0x140ec1c90
0x140ec1c64: sar    dx,0x4
0x140ec1c68: sar    cx,0x4
0x140ec1c6c: test   r9,r9
0x140ec1c6f: je     0x140ec1c90
0x140ec1c71: movsx  rax,dx
0x140ec1c75: movsx  rdx,cx
0x140ec1c79: mov    rax,QWORD PTR [r9+rax*8]
0x140ec1c7d: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec1c81: mov    rdx,QWORD PTR [rax+r8*8]
0x140ec1c85: test   rdx,rdx
0x140ec1c88: je     0x140ec1c90
0x140ec1c8a: add    rdx,0x68
0x140ec1c8e: jmp    0x140ec1c97
0x140ec1c90: lea    rdx,[rip+0x16668f1]        # 0x142528588
0x140ec1c97: mov    rax,QWORD PTR [rdx]
0x140ec1c9a: mov    rdx,QWORD PTR [rdx+0x8]
0x140ec1c9e: sub    rdx,rax
0x140ec1ca1: sar    rdx,0x3
0x140ec1ca5: sub    edx,0x1
0x140ec1ca8: js     0x140ec1d10
0x140ec1caa: movsxd r8,edx
0x140ec1cad: lea    r9,[rax+r8*8]
0x140ec1cb1: mov    rcx,QWORD PTR [r9]
0x140ec1cb4: test   BYTE PTR [rcx+0x17],0x1
0x140ec1cb8: jne    0x140ec1ced
0x140ec1cba: movzx  eax,WORD PTR [r12+0x32]
0x140ec1cc0: cmp    WORD PTR [rcx+0xa],ax
0x140ec1cc4: jne    0x140ec1ced
0x140ec1cc6: movzx  eax,WORD PTR [r12+0x34]
0x140ec1ccc: cmp    WORD PTR [rcx+0xc],ax
0x140ec1cd0: jne    0x140ec1ced
0x140ec1cd2: movzx  eax,WORD PTR [r12+0x36]
0x140ec1cd8: cmp    WORD PTR [rcx+0xe],ax
0x140ec1cdc: jne    0x140ec1ced
0x140ec1cde: movzx  eax,WORD PTR [rcx]
0x140ec1ce1: cmp    ax,0x4
0x140ec1ce5: je     0x140ec1cfb
0x140ec1ce7: cmp    ax,0xb
0x140ec1ceb: je     0x140ec1d10
0x140ec1ced: dec    edx
0x140ec1cef: sub    r9,0x8
0x140ec1cf3: sub    r8,0x1
0x140ec1cf7: jns    0x140ec1cb1
0x140ec1cf9: jmp    0x140ec1d10
0x140ec1cfb: movzx  eax,bx
0x140ec1cfe: add    ax,WORD PTR [rcx+0x8]
0x140ec1d02: mov    WORD PTR [rcx+0x8],ax
0x140ec1d06: cmp    ax,0x64
0x140ec1d0a: jle    0x140ec1d10
0x140ec1d0c: mov    WORD PTR [rcx+0x8],di
0x140ec1d10: cmp    edx,0xffffffff
0x140ec1d13: jne    0x140ec1e20
0x140ec1d19: movzx  r9d,WORD PTR [r12+0x36]
0x140ec1d1f: movzx  r8d,WORD PTR [r12+0x34]
0x140ec1d25: movzx  edx,WORD PTR [r12+0x32]
0x140ec1d2b: lea    rcx,[rip+0x164cff6]        # 0x14250ed28
0x140ec1d32: call   0x140a6d290
0x140ec1d37: mov    WORD PTR [rax],0x4
0x140ec1d3c: mov    WORD PTR [rax+0x8],bx
0x140ec1d40: movzx  ecx,WORD PTR [r12+0x32]
0x140ec1d46: mov    WORD PTR [rax+0xa],cx
0x140ec1d4a: movzx  ecx,WORD PTR [r12+0x34]
0x140ec1d50: mov    WORD PTR [rax+0xc],cx
0x140ec1d54: movzx  ecx,WORD PTR [r12+0x36]
0x140ec1d5a: mov    WORD PTR [rax+0xe],cx
0x140ec1d5e: jmp    0x140ec1e20
0x140ec1d63: test   eax,eax
0x140ec1d65: jne    0x140ec1e20
0x140ec1d6b: cmp    r14b,0x5
0x140ec1d6f: jl     0x140ec1e20
0x140ec1d75: mov    r14,QWORD PTR [r12+0x98]
0x140ec1d7d: test   DWORD PTR [r14+0x10],0x20000000
0x140ec1d85: jne    0x140ec1d8f
0x140ec1d87: mov    rcx,r14
0x140ec1d8a: call   0x140c7dc00
0x140ec1d8f: mov    ecx,DWORD PTR [r14+0x74]
0x140ec1d93: mov    eax,0x2710
0x140ec1d98: cmp    ecx,eax
0x140ec1d9a: cmovge ecx,eax
0x140ec1d9d: cmp    ebx,edi
0x140ec1d9f: cmovl  ebx,edi
0x140ec1da2: cmp    ebx,esi
0x140ec1da4: cmovl  ebx,esi
0x140ec1da7: mov    eax,0x51eb851f
0x140ec1dac: imul   ebx
0x140ec1dae: sar    edx,0x5
0x140ec1db1: mov    eax,edx
0x140ec1db3: shr    eax,0x1f
0x140ec1db6: add    edx,eax
0x140ec1db8: cmp    edx,0x1
0x140ec1dbb: jge    0x140ec1dc4
0x140ec1dbd: mov    edx,0x1
0x140ec1dc2: jmp    0x140ec1dce
0x140ec1dc4: mov    eax,0x7d0
0x140ec1dc9: cmp    edx,eax
0x140ec1dcb: cmovg  edx,eax
0x140ec1dce: imul   edx,ecx
0x140ec1dd1: mov    eax,0x10624dd3
0x140ec1dd6: imul   edx
0x140ec1dd8: sar    edx,0x6
0x140ec1ddb: mov    eax,edx
0x140ec1ddd: shr    eax,0x1f
0x140ec1de0: add    edx,eax
0x140ec1de2: cmp    edx,0x1
0x140ec1de5: jl     0x140ec1e20
0x140ec1de7: cmp    edx,0x64
0x140ec1dea: jle    0x140ec1df3
0x140ec1dec: mov    edx,0x64
0x140ec1df1: jmp    0x140ec1df8
0x140ec1df3: cmp    edx,0x1
0x140ec1df6: jle    0x140ec1e20
0x140ec1df8: mov    BYTE PTR [rsp+0x28],r13b
0x140ec1dfd: mov    WORD PTR [rsp+0x20],dx
0x140ec1e02: movzx  r9d,WORD PTR [r12+0x36]
0x140ec1e08: movzx  r8d,WORD PTR [r12+0x34]
0x140ec1e0e: movzx  edx,WORD PTR [r12+0x32]
0x140ec1e14: lea    rcx,[rip+0x1531b55]        # 0x1423f3970
0x140ec1e1b: call   0x14147d170
0x140ec1e20: movzx  r15d,WORD PTR [r12+0x36]
0x140ec1e26: mov    WORD PTR [rsp+0x64],r15w
0x140ec1e2c: mov    DWORD PTR [r12+0x7c],0x0
0x140ec1e35: mov    eax,DWORD PTR [r12+0x88]
0x140ec1e3d: neg    eax
0x140ec1e3f: mov    DWORD PTR [r12+0x88],eax
0x140ec1e47: cmp    eax,0xfffffc18
0x140ec1e4c: jge    0x140ec1e5c
0x140ec1e4e: mov    DWORD PTR [r12+0x88],0xfffffc18
0x140ec1e5a: jmp    0x140ec1e6f
0x140ec1e5c: cmp    eax,0x3e8
0x140ec1e61: jle    0x140ec1e6f
0x140ec1e63: mov    DWORD PTR [r12+0x88],0x3e8
0x140ec1e6f: mov    eax,DWORD PTR [r12+0x80]
0x140ec1e77: lea    eax,[rax+rax*2]
0x140ec1e7a: cdq
0x140ec1e7b: and    edx,0x3
0x140ec1e7e: add    eax,edx
0x140ec1e80: sar    eax,0x2
0x140ec1e83: mov    DWORD PTR [r12+0x80],eax
0x140ec1e8b: mov    eax,DWORD PTR [r12+0x84]
0x140ec1e93: lea    eax,[rax+rax*2]
0x140ec1e96: cdq
0x140ec1e97: and    edx,0x3
0x140ec1e9a: add    eax,edx
0x140ec1e9c: sar    eax,0x2
0x140ec1e9f: mov    DWORD PTR [r12+0x84],eax
0x140ec1ea7: movzx  edi,WORD PTR [rsp+0x62]
0x140ec1eac: movzx  r8d,BYTE PTR [rsp+0x60]
0x140ec1eb2: movzx  esi,r13b
0x140ec1eb6: test   r13b,r13b
0x140ec1eb9: jne    0x140ec2181
0x140ec1ebf: movzx  esi,WORD PTR [rsp+0x68]
0x140ec1ec4: test   si,si
0x140ec1ec7: js     0x140ec25bf
0x140ec1ecd: movsx  eax,si
0x140ec1ed0: cmp    eax,DWORD PTR [rip+0x1648686]        # 0x14250a55c
0x140ec1ed6: jge    0x140ec25bf
0x140ec1edc: test   di,di
0x140ec1edf: js     0x140ec25bf
0x140ec1ee5: movsx  eax,di
0x140ec1ee8: cmp    eax,DWORD PTR [rip+0x1648672]        # 0x14250a560
0x140ec1eee: jge    0x140ec25bf
0x140ec1ef4: test   r15w,r15w
0x140ec1ef8: js     0x140ec25bf
0x140ec1efe: movsx  eax,r15w
0x140ec1f02: cmp    eax,DWORD PTR [rip+0x164865c]        # 0x14250a564
0x140ec1f08: jge    0x140ec25bf
0x140ec1f0e: movzx  edx,di
0x140ec1f11: sar    dx,0x4
0x140ec1f15: mov    rcx,QWORD PTR [rip+0x164860c]        # 0x14250a528
0x140ec1f1c: test   rcx,rcx
0x140ec1f1f: je     0x140ec25bf
0x140ec1f25: movsx  rax,si
0x140ec1f29: sar    rax,0x4
0x140ec1f2d: movsx  rdx,dx
0x140ec1f31: mov    rax,QWORD PTR [rcx+rax*8]
0x140ec1f35: movsx  rcx,r15w
0x140ec1f39: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec1f3d: mov    rdx,QWORD PTR [rax+rcx*8]
0x140ec1f41: test   rdx,rdx
0x140ec1f44: je     0x140ec25bf
0x140ec1f4a: movsx  eax,si
0x140ec1f4d: and    eax,0x8000000f
0x140ec1f52: jge    0x140ec1f5b
0x140ec1f54: dec    eax
0x140ec1f56: or     eax,0xfffffff0
0x140ec1f59: inc    eax
0x140ec1f5b: movsxd rcx,eax
0x140ec1f5e: shl    rcx,0x4
0x140ec1f62: movsx  eax,di
0x140ec1f65: and    eax,0x8000000f
0x140ec1f6a: jge    0x140ec1f73
0x140ec1f6c: dec    eax
0x140ec1f6e: or     eax,0xfffffff0
0x140ec1f71: inc    eax
0x140ec1f73: cdqe
0x140ec1f75: add    rcx,rax
0x140ec1f78: test   BYTE PTR [rdx+rcx*4+0x6a0],0x20
0x140ec1f80: je     0x140ec25bf
0x140ec1f86: test   DWORD PTR [r12+0x48],0x800
0x140ec1f8f: jne    0x140ec25bf
0x140ec1f95: mov    rax,QWORD PTR [rip+0x1648274]        # 0x14250a210
0x140ec1f9c: mov    rcx,QWORD PTR [rip+0x1648275]        # 0x14250a218
0x140ec1fa3: mov    r15,QWORD PTR [rip+0x154592e]        # 0x1424078d8
0x140ec1faa: mov    r14,QWORD PTR [rip+0x154591f]        # 0x1424078d0
0x140ec1fb1: movzx  esi,WORD PTR [rsp+0x64]
0x140ec1fb6: mov    edx,DWORD PTR [rsp+0x70]
0x140ec1fba: mov    r9d,DWORD PTR [rsp+0x6c]
0x140ec1fbf: nop
0x140ec1fc0: mov    r10d,edx
0x140ec1fc3: movzx  ebx,r13b
0x140ec1fc7: movzx  edi,r8b
0x140ec1fcb: cmp    rax,rcx
0x140ec1fce: jae    0x140ec25ba
0x140ec1fd4: mov    r13,QWORD PTR [rax]
0x140ec1fd7: mov    r11d,DWORD PTR [r13+0x8]
0x140ec1fdb: mov    rdx,r15
0x140ec1fde: sub    rdx,r14
0x140ec1fe1: sar    rdx,0x3
0x140ec1fe5: test   edx,edx
0x140ec1fe7: je     0x140ec22bc
0x140ec1fed: cmp    r11d,0xffffffff
0x140ec1ff1: je     0x140ec22bc
0x140ec1ff7: xor    r8d,r8d
0x140ec1ffa: mov    WORD PTR [rsp+0x64],si
0x140ec1fff: mov    BYTE PTR [rsp+0x60],dil
0x140ec2004: mov    BYTE PTR [rsp+0x66],bl
0x140ec2008: mov    DWORD PTR [rsp+0x70],r10d
0x140ec200d: mov    BYTE PTR [rsp+0x6c],r9b
0x140ec2012: sub    edx,0x1
0x140ec2015: js     0x140ec205a
0x140ec2017: mov    WORD PTR [rsp+0x64],si
0x140ec201c: mov    BYTE PTR [rsp+0x60],dil
0x140ec2021: mov    BYTE PTR [rsp+0x66],bl
0x140ec2025: mov    DWORD PTR [rsp+0x70],r10d
0x140ec202a: mov    BYTE PTR [rsp+0x6c],r9b
0x140ec202f: nop
0x140ec2030: mov    edi,edx
0x140ec2032: lea    r9d,[rdx+r8*1]
0x140ec2036: sar    r9d,1
0x140ec2039: movsxd rdx,r9d
0x140ec203c: mov    rbx,QWORD PTR [r14+rdx*8]
0x140ec2040: cmp    DWORD PTR [rbx+0x1c],r11d
0x140ec2044: je     0x140ec205c
0x140ec2046: lea    edx,[r9+0x1]
0x140ec204a: cmovle r8d,edx
0x140ec204e: lea    edx,[r9-0x1]
0x140ec2052: cmovle edx,edi
0x140ec2055: cmp    r8d,edx
0x140ec2058: jle    0x140ec2030
0x140ec205a: xor    ebx,ebx
0x140ec205c: test   rbx,rbx
0x140ec205f: je     0x140ec209e
0x140ec2061: mov    rdi,QWORD PTR [r12+0x98]
0x140ec2069: cmp    rbx,rdi
0x140ec206c: je     0x140ec209e
0x140ec206e: mov    edx,DWORD PTR [rbx+0x1c]
0x140ec2071: cmp    DWORD PTR [r12+0x60],edx
0x140ec2076: je     0x140ec209e
0x140ec2078: test   BYTE PTR [rbx+0x10],0x1
0x140ec207c: je     0x140ec209e
0x140ec207e: movzx  edx,WORD PTR [rsp+0x68]
0x140ec2083: cmp    WORD PTR [rbx+0x8],dx
0x140ec2087: jne    0x140ec209e
0x140ec2089: movzx  edx,WORD PTR [rsp+0x62]
0x140ec208e: cmp    WORD PTR [rbx+0xa],dx
0x140ec2092: jne    0x140ec209e
0x140ec2094: cmp    WORD PTR [rbx+0xc],si
0x140ec2098: je     0x140ec22e3
0x140ec209e: movzx  r13d,BYTE PTR [rsp+0x66]
0x140ec20a4: movzx  r8d,BYTE PTR [rsp+0x60]
0x140ec20aa: mov    edx,DWORD PTR [rsp+0x70]
0x140ec20ae: mov    r9d,DWORD PTR [rsp+0x6c]
0x140ec20b3: add    rax,0x8
0x140ec20b7: jmp    0x140ec1fc0
0x140ec20bc: mov    DWORD PTR [r12+0x7c],r14d
0x140ec20c1: mov    eax,DWORD PTR [r12+0x88]
0x140ec20c9: neg    eax
0x140ec20cb: mov    DWORD PTR [r12+0x88],eax
0x140ec20d3: cmp    eax,0xfffffc18
0x140ec20d8: jge    0x140ec20e8
0x140ec20da: mov    DWORD PTR [r12+0x88],0xfffffc18
0x140ec20e6: jmp    0x140ec20fb
0x140ec20e8: cmp    eax,0x3e8
0x140ec20ed: jle    0x140ec20fb
0x140ec20ef: mov    DWORD PTR [r12+0x88],0x3e8
0x140ec20fb: lea    eax,[rcx+rcx*2]
0x140ec20fe: cdq
0x140ec20ff: and    edx,0x3
0x140ec2102: add    eax,edx
0x140ec2104: sar    eax,0x2
0x140ec2107: mov    DWORD PTR [r12+0x80],eax
0x140ec210f: mov    eax,DWORD PTR [r12+0x84]
0x140ec2117: lea    eax,[rax+rax*2]
0x140ec211a: cdq
0x140ec211b: and    edx,0x3
0x140ec211e: add    eax,edx
0x140ec2120: sar    eax,0x2
0x140ec2123: mov    DWORD PTR [r12+0x84],eax
0x140ec212b: jmp    0x140ec1ec4
0x140ec2130: call   0x1414e2d40
0x140ec2135: test   al,al
0x140ec2137: jne    0x140ec1eac
0x140ec213d: mov    QWORD PTR [r12+0x80],0x0
0x140ec2149: mov    DWORD PTR [r12+0x88],r14d
0x140ec2151: mov    r13b,0x1
0x140ec2154: mov    BYTE PTR [rsp+0x66],r13b
0x140ec2159: jmp    0x140ec1eac
0x140ec215e: test   al,al
0x140ec2160: jne    0x140ec1eb2
0x140ec2166: mov    QWORD PTR [r12+0x80],0x0
0x140ec2172: mov    DWORD PTR [r12+0x88],r14d
0x140ec217a: mov    r13b,0x1
0x140ec217d: movzx  esi,r13b
0x140ec2181: movzx  r14d,WORD PTR [rsp+0x68]
0x140ec2187: movzx  ebx,WORD PTR [rsp+0x62]
0x140ec218c: cmp    DWORD PTR [rip+0x9fc0a5],0x1        # 0x1418be238
0x140ec2193: jne    0x140ec444a
0x140ec2199: test   r14w,r14w
0x140ec219d: js     0x140ec444a
0x140ec21a3: movsx  eax,r14w
0x140ec21a7: cmp    eax,DWORD PTR [rip+0x16483af]        # 0x14250a55c
0x140ec21ad: jge    0x140ec444a
0x140ec21b3: test   bx,bx
0x140ec21b6: js     0x140ec444a
0x140ec21bc: movsx  eax,bx
0x140ec21bf: cmp    eax,DWORD PTR [rip+0x164839b]        # 0x14250a560
0x140ec21c5: jge    0x140ec444a
0x140ec21cb: test   r15w,r15w
0x140ec21cf: js     0x140ec444a
0x140ec21d5: movsx  eax,r15w
0x140ec21d9: cmp    eax,DWORD PTR [rip+0x1648385]        # 0x14250a564
0x140ec21df: jge    0x140ec444a
0x140ec21e5: mov    rcx,QWORD PTR [rip+0x164833c]        # 0x14250a528
0x140ec21ec: test   rcx,rcx
0x140ec21ef: je     0x140ec444a
0x140ec21f5: movsx  rax,r14w
0x140ec21f9: sar    rax,0x4
0x140ec21fd: movsx  rdx,bx
0x140ec2201: sar    rdx,0x4
0x140ec2205: mov    rax,QWORD PTR [rcx+rax*8]
0x140ec2209: movsx  rcx,r15w
0x140ec220d: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec2211: mov    rdx,QWORD PTR [rax+rcx*8]
0x140ec2215: test   rdx,rdx
0x140ec2218: je     0x140ec444a
0x140ec221e: movsx  eax,r14w
0x140ec2222: and    eax,0x8000000f
0x140ec2227: jge    0x140ec2230
0x140ec2229: dec    eax
0x140ec222b: or     eax,0xfffffff0
0x140ec222e: inc    eax
0x140ec2230: movsxd rcx,eax
0x140ec2233: shl    rcx,0x4
0x140ec2237: movsx  eax,bx
0x140ec223a: and    eax,0x8000000f
0x140ec223f: jge    0x140ec2248
0x140ec2241: dec    eax
0x140ec2243: or     eax,0xfffffff0
0x140ec2246: inc    eax
0x140ec2248: cdqe
0x140ec224a: add    rcx,rax
0x140ec224d: test   BYTE PTR [rdx+rcx*4+0x2a0],0x10
0x140ec2255: je     0x140ec444a
0x140ec225b: mov    rcx,QWORD PTR [r12+0x98]
0x140ec2263: mov    rax,QWORD PTR [rcx]
0x140ec2266: call   QWORD PTR [rax+0x38]
0x140ec2269: movzx  edi,ax
0x140ec226c: mov    rcx,QWORD PTR [r12+0x98]
0x140ec2274: mov    rax,QWORD PTR [rcx]
0x140ec2277: call   QWORD PTR [rax+0x40]
0x140ec227a: mov    ebx,eax
0x140ec227c: mov    r8d,eax
0x140ec227f: movzx  edx,di
0x140ec2282: lea    rcx,[rip+0x15316e7]        # 0x1423f3970
0x140ec2289: call   0x1414c6fe0
0x140ec228e: test   rax,rax
0x140ec2291: je     0x140ec4405
0x140ec2297: cmp    DWORD PTR [rax+0x298],0x5
0x140ec229e: jle    0x140ec43f8
0x140ec22a4: mov    rcx,QWORD PTR [rax+0x290]
0x140ec22ab: cmp    BYTE PTR [rcx+0x5],0x0
0x140ec22af: jge    0x140ec43f8
0x140ec22b5: mov    al,0x1
0x140ec22b7: jmp    0x140ec43fa
0x140ec22bc: mov    WORD PTR [rsp+0x64],si
0x140ec22c1: mov    BYTE PTR [rsp+0x60],dil
0x140ec22c6: movzx  r13d,bl
0x140ec22ca: mov    BYTE PTR [rsp+0x66],bl
0x140ec22ce: mov    edx,r10d
0x140ec22d1: mov    DWORD PTR [rsp+0x70],edx
0x140ec22d5: mov    DWORD PTR [rsp+0x6c],r9d
0x140ec22da: add    rax,0x8
0x140ec22de: jmp    0x140ec1fc0
0x140ec22e3: test   DWORD PTR [rdi+0x10],0x20000000
0x140ec22ea: jne    0x140ec22f4
0x140ec22ec: mov    rcx,rdi
0x140ec22ef: call   0x140c7dc00
0x140ec22f4: movsxd r15,DWORD PTR [rdi+0x74]
0x140ec22f8: test   r15,r15
0x140ec22fb: mov    eax,0x1
0x140ec2300: cmovle r15,rax
0x140ec2304: movsxd rdx,DWORD PTR [r12+0x80]
0x140ec230c: mov    rdi,rdx
0x140ec230f: imul   rdi,r15
0x140ec2313: movsxd rcx,DWORD PTR [r12+0x84]
0x140ec231b: mov    rsi,rcx
0x140ec231e: imul   rsi,r15
0x140ec2322: movsxd rax,DWORD PTR [r12+0x88]
0x140ec232a: mov    r14,rax
0x140ec232d: imul   r14,r15
0x140ec2331: mov    r11d,DWORD PTR [r13+0x18]
0x140ec2335: mov    DWORD PTR [rbp-0x78],r11d
0x140ec2339: mov    r8d,DWORD PTR [r13+0x1c]
0x140ec233d: mov    DWORD PTR [rsp+0x78],r8d
0x140ec2342: mov    r10d,DWORD PTR [r13+0x20]
0x140ec2346: mov    DWORD PTR [rbp-0x70],r10d
0x140ec234a: sub    edx,r11d
0x140ec234d: movsxd rdx,edx
0x140ec2350: mov    QWORD PTR [rbp-0x60],rdx
0x140ec2354: sub    ecx,r8d
0x140ec2357: movsxd r9,ecx
0x140ec235a: mov    QWORD PTR [rbp-0x40],r9
0x140ec235e: sub    eax,r10d
0x140ec2361: movsxd r10,eax
0x140ec2364: mov    QWORD PTR [rbp-0x38],r10
0x140ec2368: test   DWORD PTR [rbx+0x10],0x20000000
0x140ec236f: jne    0x140ec2389
0x140ec2371: mov    rcx,rbx
0x140ec2374: call   0x140c7dc00
0x140ec2379: mov    rdx,QWORD PTR [rbp-0x60]
0x140ec237d: mov    r9,QWORD PTR [rbp-0x40]
0x140ec2381: mov    r10,QWORD PTR [rbp-0x38]
0x140ec2385: mov    r11d,DWORD PTR [rbp-0x78]
0x140ec2389: movsxd rcx,DWORD PTR [rbx+0x74]
0x140ec238d: test   rcx,rcx
0x140ec2390: mov    eax,0x1
0x140ec2395: cmovle rcx,rax
0x140ec2399: mov    r8,rcx
0x140ec239c: imul   r8,rdx
0x140ec23a0: test   rdi,rdi
0x140ec23a3: jle    0x140ec23d1
0x140ec23a5: test   r8,r8
0x140ec23a8: js     0x140ec23f3
0x140ec23aa: cmp    rdi,r8
0x140ec23ad: jle    0x140ec23e7
0x140ec23af: mov    eax,DWORD PTR [r12+0x80]
0x140ec23b7: mov    DWORD PTR [r13+0x18],eax
0x140ec23bb: sub    rdi,r8
0x140ec23be: mov    rax,rdi
0x140ec23c1: cqo
0x140ec23c3: idiv   r15
0x140ec23c6: mov    DWORD PTR [r12+0x80],eax
0x140ec23ce: test   rdi,rdi
0x140ec23d1: jns    0x140ec23f3
0x140ec23d3: test   r8,r8
0x140ec23d6: jg     0x140ec23f3
0x140ec23d8: cmp    rdi,r8
0x140ec23db: jge    0x140ec23e7
0x140ec23dd: mov    eax,DWORD PTR [r12+0x80]
0x140ec23e5: jmp    0x140ec23ef
0x140ec23e7: mov    rax,rdi
0x140ec23ea: cqo
0x140ec23ec: idiv   rcx
0x140ec23ef: mov    DWORD PTR [r13+0x18],eax
0x140ec23f3: mov    r8,rcx
0x140ec23f6: imul   r8,r9
0x140ec23fa: test   rsi,rsi
0x140ec23fd: jle    0x140ec242b
0x140ec23ff: test   r8,r8
0x140ec2402: js     0x140ec244d
0x140ec2404: cmp    rsi,r8
0x140ec2407: jle    0x140ec2441
0x140ec2409: mov    eax,DWORD PTR [r12+0x84]
0x140ec2411: mov    DWORD PTR [r13+0x1c],eax
0x140ec2415: sub    rsi,r8
0x140ec2418: mov    rax,rsi
0x140ec241b: cqo
0x140ec241d: idiv   r15
0x140ec2420: mov    DWORD PTR [r12+0x84],eax
0x140ec2428: test   rsi,rsi
0x140ec242b: jns    0x140ec244d
0x140ec242d: test   r8,r8
0x140ec2430: jg     0x140ec244d
0x140ec2432: cmp    rsi,r8
0x140ec2435: jge    0x140ec2441
0x140ec2437: mov    eax,DWORD PTR [r12+0x84]
0x140ec243f: jmp    0x140ec2449
0x140ec2441: mov    rax,rsi
0x140ec2444: cqo
0x140ec2446: idiv   rcx
0x140ec2449: mov    DWORD PTR [r13+0x1c],eax
0x140ec244d: mov    r8,rcx
0x140ec2450: imul   r8,r10
0x140ec2454: test   r14,r14
0x140ec2457: jle    0x140ec2485
0x140ec2459: test   r8,r8
0x140ec245c: js     0x140ec24a7
0x140ec245e: cmp    r14,r8
0x140ec2461: jle    0x140ec249b
0x140ec2463: mov    eax,DWORD PTR [r12+0x88]
0x140ec246b: mov    DWORD PTR [r13+0x20],eax
0x140ec246f: sub    r14,r8
0x140ec2472: mov    rax,r14
0x140ec2475: cqo
0x140ec2477: idiv   r15
0x140ec247a: mov    DWORD PTR [r12+0x88],eax
0x140ec2482: test   r14,r14
0x140ec2485: jns    0x140ec24a7
0x140ec2487: test   r8,r8
0x140ec248a: jg     0x140ec24a7
0x140ec248c: cmp    r14,r8
0x140ec248f: jge    0x140ec249b
0x140ec2491: mov    eax,DWORD PTR [r12+0x88]
0x140ec2499: jmp    0x140ec24a3
0x140ec249b: mov    rax,r14
0x140ec249e: cqo
0x140ec24a0: idiv   rcx
0x140ec24a3: mov    DWORD PTR [r13+0x20],eax
0x140ec24a7: movzx  r14d,WORD PTR [r12+0x32]
0x140ec24ad: mov    WORD PTR [rsp+0x68],r14w
0x140ec24b3: movzx  eax,WORD PTR [r12+0x34]
0x140ec24b9: mov    WORD PTR [rsp+0x62],ax
0x140ec24be: movzx  r15d,WORD PTR [r12+0x36]
0x140ec24c4: mov    WORD PTR [rsp+0x64],r15w
0x140ec24ca: mov    eax,DWORD PTR [rbp-0x50]
0x140ec24cd: mov    DWORD PTR [r12+0x74],eax
0x140ec24d2: mov    ecx,DWORD PTR [rbp-0x68]
0x140ec24d5: mov    DWORD PTR [r12+0x78],ecx
0x140ec24da: mov    edx,DWORD PTR [rbp-0x58]
0x140ec24dd: mov    DWORD PTR [r12+0x7c],edx
0x140ec24e2: cmp    eax,0xc350
0x140ec24e7: jle    0x140ec24f4
0x140ec24e9: mov    DWORD PTR [r12+0x74],0xc350
0x140ec24f2: jmp    0x140ec2504
0x140ec24f4: cmp    eax,0xffff3cb0
0x140ec24f9: jge    0x140ec2504
0x140ec24fb: mov    DWORD PTR [r12+0x74],0xffff3cb0
0x140ec2504: cmp    ecx,0xc350
0x140ec250a: jle    0x140ec2517
0x140ec250c: mov    DWORD PTR [r12+0x78],0xc350
0x140ec2515: jmp    0x140ec2528
0x140ec2517: cmp    ecx,0xffff3cb0
0x140ec251d: jge    0x140ec2528
0x140ec251f: mov    DWORD PTR [r12+0x78],0xffff3cb0
0x140ec2528: cmp    edx,0x124f8
0x140ec252e: jle    0x140ec253b
0x140ec2530: mov    DWORD PTR [r12+0x7c],0x124f8
0x140ec2539: jmp    0x140ec254c
0x140ec253b: cmp    edx,0xfffedb08
0x140ec2541: jge    0x140ec254c
0x140ec2543: mov    DWORD PTR [r12+0x7c],0xfffedb08
0x140ec254c: xor    eax,eax
0x140ec254e: mov    QWORD PTR [r12+0x80],rax
0x140ec2556: mov    DWORD PTR [r12+0x88],eax
0x140ec255e: test   BYTE PTR [rbx+0x10],0x40
0x140ec2562: jne    0x140ec256a
0x140ec2564: test   BYTE PTR [rbx+0x14],0x1
0x140ec2568: je     0x140ec25ac
0x140ec256a: mov    eax,DWORD PTR [rbp-0x70]
0x140ec256d: mov    DWORD PTR [rsp+0x48],eax
0x140ec2571: mov    eax,DWORD PTR [rsp+0x78]
0x140ec2575: mov    DWORD PTR [rsp+0x40],eax
0x140ec2579: mov    DWORD PTR [rsp+0x38],r11d
0x140ec257e: mov    eax,DWORD PTR [r13+0x20]
0x140ec2582: mov    DWORD PTR [rsp+0x30],eax
0x140ec2586: mov    eax,DWORD PTR [r13+0x1c]
0x140ec258a: mov    DWORD PTR [rsp+0x28],eax
0x140ec258e: mov    eax,DWORD PTR [r13+0x18]
0x140ec2592: mov    DWORD PTR [rsp+0x20],eax
0x140ec2596: movzx  r9d,WORD PTR [rbx+0xc]
0x140ec259b: movzx  r8d,WORD PTR [rbx+0xa]
0x140ec25a0: movzx  edx,WORD PTR [rbx+0x8]
0x140ec25a4: mov    rcx,rbx
0x140ec25a7: call   0x140ce0510
0x140ec25ac: mov    sil,0x1
0x140ec25af: movzx  r13d,BYTE PTR [rsp+0x66]
0x140ec25b5: jmp    0x140ec2187
0x140ec25ba: movzx  esi,WORD PTR [rsp+0x68]
0x140ec25bf: mov    rbx,QWORD PTR [rip+0x154ddba]        # 0x142410380
0x140ec25c6: test   rbx,rbx
0x140ec25c9: je     0x140ec2e85
0x140ec25cf: mov    rdx,QWORD PTR [rbx]
0x140ec25d2: test   DWORD PTR [rdx+0x48],0x100
0x140ec25d9: je     0x140ec2ae2
0x140ec25df: cmp    rdx,r12
0x140ec25e2: je     0x140ec2ae2
0x140ec25e8: mov    rax,QWORD PTR [r12+0x98]
0x140ec25f0: mov    ecx,DWORD PTR [rax+0x1c]
0x140ec25f3: cmp    DWORD PTR [rdx+0x60],ecx
0x140ec25f6: je     0x140ec2ae2
0x140ec25fc: cmp    WORD PTR [rdx+0x2c],si
0x140ec2600: jne    0x140ec2ae2
0x140ec2606: movzx  eax,WORD PTR [rsp+0x62]
0x140ec260b: cmp    WORD PTR [rdx+0x2e],ax
0x140ec260f: jne    0x140ec2ae2
0x140ec2615: movzx  eax,WORD PTR [rsp+0x64]
0x140ec261a: cmp    WORD PTR [rdx+0x30],ax
0x140ec261e: jne    0x140ec2ae2
0x140ec2624: mov    rax,QWORD PTR [rdx]
0x140ec2627: mov    rcx,rdx
0x140ec262a: call   QWORD PTR [rax]
0x140ec262c: mov    r13,QWORD PTR [rbx]
0x140ec262f: cmp    eax,0x1
0x140ec2632: jne    0x140ec2aad
0x140ec2638: mov    r8,QWORD PTR [r13+0x98]
0x140ec263f: mov    QWORD PTR [rbp-0x60],r8
0x140ec2643: mov    eax,DWORD PTR [r8+0x130]
0x140ec264a: cmp    DWORD PTR [r12+0x64],eax
0x140ec264f: je     0x140ec2ae2
0x140ec2655: mov    rdi,QWORD PTR [r12+0x98]
0x140ec265d: test   DWORD PTR [rdi+0x10],0x20000000
0x140ec2664: jne    0x140ec2672
0x140ec2666: mov    rcx,rdi
0x140ec2669: call   0x140c7dc00
0x140ec266e: mov    r8,QWORD PTR [rbp-0x60]
0x140ec2672: movsxd r15,DWORD PTR [rdi+0x74]
0x140ec2676: test   r15,r15
0x140ec2679: mov    eax,0x1
0x140ec267e: cmovle r15,rax
0x140ec2682: movsxd rdx,DWORD PTR [r12+0x80]
0x140ec268a: mov    rdi,rdx
0x140ec268d: imul   rdi,r15
0x140ec2691: movsxd rcx,DWORD PTR [r12+0x84]
0x140ec2699: mov    rsi,rcx
0x140ec269c: imul   rsi,r15
0x140ec26a0: movsxd rax,DWORD PTR [r12+0x88]
0x140ec26a8: mov    r14,rax
0x140ec26ab: imul   r14,r15
0x140ec26af: sub    edx,DWORD PTR [r13+0x80]
0x140ec26b6: movsxd rdx,edx
0x140ec26b9: mov    QWORD PTR [rbp-0x38],rdx
0x140ec26bd: sub    ecx,DWORD PTR [r13+0x84]
0x140ec26c4: movsxd rcx,ecx
0x140ec26c7: mov    QWORD PTR [rbp-0x40],rcx
0x140ec26cb: sub    eax,DWORD PTR [r13+0x88]
0x140ec26d2: cdqe
0x140ec26d4: mov    QWORD PTR [rbp-0x28],rax
0x140ec26d8: test   BYTE PTR [r8+0x118],0x80
0x140ec26e0: jne    0x140ec26f2
0x140ec26e2: mov    rcx,r8
0x140ec26e5: call   0x1413ed770
0x140ec26ea: mov    rdx,QWORD PTR [rbp-0x38]
0x140ec26ee: mov    r8,QWORD PTR [rbp-0x60]
0x140ec26f2: movsxd r8,DWORD PTR [r8+0x138c]
0x140ec26f9: test   r8,r8
0x140ec26fc: mov    eax,0x1
0x140ec2701: cmovle r8,rax
0x140ec2705: xor    eax,eax
0x140ec2707: mov    r11d,eax
0x140ec270a: mov    r10d,eax
0x140ec270d: mov    r9d,eax
0x140ec2710: mov    eax,DWORD PTR [r12+0x80]
0x140ec2718: mov    DWORD PTR [rsp+0x78],eax
0x140ec271c: mov    ecx,DWORD PTR [r12+0x84]
0x140ec2724: mov    DWORD PTR [rbp-0x70],ecx
0x140ec2727: mov    ecx,DWORD PTR [r12+0x88]
0x140ec272f: mov    DWORD PTR [rbp-0x78],ecx
0x140ec2732: mov    rcx,r8
0x140ec2735: imul   rcx,rdx
0x140ec2739: test   rdi,rdi
0x140ec273c: jle    0x140ec2765
0x140ec273e: test   rcx,rcx
0x140ec2741: js     0x140ec2ae2
0x140ec2747: cmp    rdi,rcx
0x140ec274a: jle    0x140ec278d
0x140ec274c: mov    r11d,eax
0x140ec274f: sub    rdi,rcx
0x140ec2752: mov    rax,rdi
0x140ec2755: cqo
0x140ec2757: idiv   r15
0x140ec275a: mov    DWORD PTR [r12+0x80],eax
0x140ec2762: test   rdi,rdi
0x140ec2765: jns    0x140ec27ad
0x140ec2767: test   rcx,rcx
0x140ec276a: jg     0x140ec2ae2
0x140ec2770: cmp    rdi,rcx
0x140ec2773: jge    0x140ec279a
0x140ec2775: mov    r11d,eax
0x140ec2778: sub    rdi,rcx
0x140ec277b: mov    rax,rdi
0x140ec277e: cqo
0x140ec2780: idiv   r15
0x140ec2783: mov    DWORD PTR [r12+0x80],eax
0x140ec278b: jmp    0x140ec27ad
0x140ec278d: mov    rax,rdi
0x140ec2790: cqo
0x140ec2792: idiv   r8
0x140ec2795: mov    r11,rax
0x140ec2798: jmp    0x140ec27a5
0x140ec279a: mov    rax,rdi
0x140ec279d: cqo
0x140ec279f: idiv   r8
0x140ec27a2: mov    r11d,eax
0x140ec27a5: mov    DWORD PTR [r12+0x80],r9d
0x140ec27ad: mov    rcx,r8
0x140ec27b0: imul   rcx,QWORD PTR [rbp-0x40]
0x140ec27b5: test   rsi,rsi
0x140ec27b8: jle    0x140ec27e6
0x140ec27ba: test   rcx,rcx
0x140ec27bd: js     0x140ec2ae2
0x140ec27c3: cmp    rsi,rcx
0x140ec27c6: jle    0x140ec2813
0x140ec27c8: mov    r10d,DWORD PTR [r12+0x84]
0x140ec27d0: sub    rsi,rcx
0x140ec27d3: mov    rax,rsi
0x140ec27d6: cqo
0x140ec27d8: idiv   r15
0x140ec27db: mov    DWORD PTR [r12+0x84],eax
0x140ec27e3: test   rsi,rsi
0x140ec27e6: jns    0x140ec2833
0x140ec27e8: test   rcx,rcx
0x140ec27eb: jg     0x140ec2ae2
0x140ec27f1: cmp    rsi,rcx
0x140ec27f4: jge    0x140ec2820
0x140ec27f6: mov    r10d,DWORD PTR [r12+0x84]
0x140ec27fe: sub    rsi,rcx
0x140ec2801: mov    rax,rsi
0x140ec2804: cqo
0x140ec2806: idiv   r15
0x140ec2809: mov    DWORD PTR [r12+0x84],eax
0x140ec2811: jmp    0x140ec2833
0x140ec2813: mov    rax,rsi
0x140ec2816: cqo
0x140ec2818: idiv   r8
0x140ec281b: mov    r10,rax
0x140ec281e: jmp    0x140ec282b
0x140ec2820: mov    rax,rsi
0x140ec2823: cqo
0x140ec2825: idiv   r8
0x140ec2828: mov    r10d,eax
0x140ec282b: mov    DWORD PTR [r12+0x84],r9d
0x140ec2833: mov    rcx,r8
0x140ec2836: imul   rcx,QWORD PTR [rbp-0x28]
0x140ec283b: test   r14,r14
0x140ec283e: jle    0x140ec2870
0x140ec2840: test   rcx,rcx
0x140ec2843: js     0x140ec2ae2
0x140ec2849: cmp    r14,rcx
0x140ec284c: jle    0x140ec2a77
0x140ec2852: mov    r9d,DWORD PTR [r12+0x88]
0x140ec285a: sub    r14,rcx
0x140ec285d: mov    rax,r14
0x140ec2860: cqo
0x140ec2862: idiv   r15
0x140ec2865: mov    DWORD PTR [r12+0x88],eax
0x140ec286d: test   r14,r14
0x140ec2870: jns    0x140ec289f
0x140ec2872: test   rcx,rcx
0x140ec2875: jg     0x140ec2ae2
0x140ec287b: cmp    r14,rcx
0x140ec287e: jge    0x140ec2a92
0x140ec2884: mov    r9d,DWORD PTR [r12+0x88]
0x140ec288c: sub    r14,rcx
0x140ec288f: mov    rax,r14
0x140ec2892: cqo
0x140ec2894: idiv   r15
0x140ec2897: mov    DWORD PTR [r12+0x88],eax
0x140ec289f: xor    r15d,r15d
0x140ec28a2: mov    DWORD PTR [r13+0x80],r11d
0x140ec28a9: mov    DWORD PTR [r13+0x84],r10d
0x140ec28b0: mov    DWORD PTR [r13+0x88],r9d
0x140ec28b7: mov    rax,QWORD PTR [r12+0x98]
0x140ec28bf: mov    ecx,DWORD PTR [rax+0x1c]
0x140ec28c2: mov    DWORD PTR [r13+0x60],ecx
0x140ec28c6: mov    esi,DWORD PTR [rsp+0x78]
0x140ec28ca: neg    esi
0x140ec28cc: cmovs  esi,DWORD PTR [rsp+0x78]
0x140ec28d1: mov    edx,0x2710
0x140ec28d6: mov    r14d,DWORD PTR [rbp-0x70]
0x140ec28da: cmp    esi,edx
0x140ec28dc: jge    0x140ec28fc
0x140ec28de: mov    eax,r14d
0x140ec28e1: neg    eax
0x140ec28e3: cmovs  eax,r14d
0x140ec28e7: cmp    eax,edx
0x140ec28e9: jge    0x140ec28fc
0x140ec28eb: mov    eax,DWORD PTR [rbp-0x78]
0x140ec28ee: neg    eax
0x140ec28f0: cmovs  eax,DWORD PTR [rbp-0x78]
0x140ec28f4: cmp    eax,edx
0x140ec28f6: jl     0x140ec2ae2
0x140ec28fc: mov    ecx,0xa0
0x140ec2901: call   0x1415530e0
0x140ec2906: mov    rdi,rax
0x140ec2909: mov    QWORD PTR [rbp+0x68],rax
0x140ec290d: xor    edx,edx
0x140ec290f: mov    rcx,rax
0x140ec2912: call   0x140ebf110
0x140ec2917: lea    rax,[rip+0x7b5b02]        # 0x141678420
0x140ec291e: mov    QWORD PTR [rdi],rax
0x140ec2921: movzx  ecx,WORD PTR [rsp+0x68]
0x140ec2926: mov    WORD PTR [rdi+0x20],cx
0x140ec292a: movzx  edx,WORD PTR [rsp+0x62]
0x140ec292f: mov    WORD PTR [rdi+0x22],dx
0x140ec2933: movzx  eax,WORD PTR [rsp+0x64]
0x140ec2938: mov    WORD PTR [rdi+0x24],ax
0x140ec293c: mov    WORD PTR [rdi+0x32],cx
0x140ec2940: mov    WORD PTR [rdi+0x34],dx
0x140ec2944: mov    WORD PTR [rdi+0x36],ax
0x140ec2948: mov    WORD PTR [rdi+0x26],cx
0x140ec294c: mov    WORD PTR [rdi+0x28],dx
0x140ec2950: mov    WORD PTR [rdi+0x2a],ax
0x140ec2954: mov    DWORD PTR [rdi+0x38],r15d
0x140ec2958: mov    QWORD PTR [rdi+0x3c],0x1
0x140ec2960: mov    r13d,0x1
0x140ec2966: mov    DWORD PTR [rdi+0x44],r15d
0x140ec296a: mov    WORD PTR [rdi+0x2c],cx
0x140ec296e: mov    WORD PTR [rdi+0x2e],dx
0x140ec2972: mov    WORD PTR [rdi+0x30],ax
0x140ec2976: mov    rax,QWORD PTR [r12+0x98]
0x140ec297e: mov    QWORD PTR [rdi+0x98],rax
0x140ec2985: mov    QWORD PTR [rdi+0x18],r15
0x140ec2989: mov    DWORD PTR [rdi+0x4c],0x0
0x140ec2990: mov    eax,r14d
0x140ec2993: neg    eax
0x140ec2995: cmovs  eax,r14d
0x140ec2999: mov    ecx,DWORD PTR [rbp-0x78]
0x140ec299c: neg    ecx
0x140ec299e: cmovs  ecx,DWORD PTR [rbp-0x78]
0x140ec29a2: cmp    esi,eax
0x140ec29a4: cmovl  esi,eax
0x140ec29a7: cmp    esi,ecx
0x140ec29a9: cmovl  esi,ecx
0x140ec29ac: mov    eax,0x1b4e81b5
0x140ec29b1: imul   esi
0x140ec29b3: sar    edx,0x5
0x140ec29b6: mov    eax,edx
0x140ec29b8: shr    eax,0x1f
0x140ec29bb: add    edx,eax
0x140ec29bd: mov    DWORD PTR [rdi+0x58],edx
0x140ec29c0: mov    eax,DWORD PTR [rdi+0x48]
0x140ec29c3: or     eax,0x10
0x140ec29c6: bts    eax,0xa
0x140ec29ca: mov    DWORD PTR [rdi+0x48],eax
0x140ec29cd: call   0x140ece790
0x140ec29d2: mov    r8d,eax
0x140ec29d5: mov    eax,0x3
0x140ec29da: mul    r8d
0x140ec29dd: mov    ecx,r8d
0x140ec29e0: sub    ecx,edx
0x140ec29e2: shr    ecx,1
0x140ec29e4: add    ecx,edx
0x140ec29e6: shr    ecx,0x1e
0x140ec29e9: imul   ecx,ecx,0x80000001
0x140ec29ef: add    r8d,ecx
0x140ec29f2: mov    eax,0x2bfffffd
0x140ec29f7: mul    r8d
0x140ec29fa: shr    edx,0x19
0x140ec29fd: lea    rcx,[rdi+0x50]
0x140ec2a01: mov    DWORD PTR [rcx],edx
0x140ec2a03: xor    r8d,r8d
0x140ec2a06: mov    rdx,QWORD PTR [r12+0x98]
0x140ec2a0e: call   0x141380430
0x140ec2a13: or     DWORD PTR [rdi+0x48],0x4000
0x140ec2a1a: xor    r9d,r9d
0x140ec2a1d: mov    r8,rdi
0x140ec2a20: mov    rsi,QWORD PTR [rbp-0x60]
0x140ec2a24: mov    rdx,rsi
0x140ec2a27: xor    ecx,ecx
0x140ec2a29: call   0x140663940
0x140ec2a2e: and    DWORD PTR [rdi+0x48],0xffffbfff
0x140ec2a35: test   BYTE PTR [rsi+0x110],0x2
0x140ec2a3c: je     0x140ec2a51
0x140ec2a3e: mov    r8d,0x33
0x140ec2a44: xor    r9d,r9d
0x140ec2a47: xor    edx,edx
0x140ec2a49: mov    rcx,rsi
0x140ec2a4c: call   0x140aa52c0
0x140ec2a51: mov    QWORD PTR [rdi+0x98],r15
0x140ec2a58: mov    rax,QWORD PTR [rdi]
0x140ec2a5b: mov    edx,r13d
0x140ec2a5e: mov    rcx,rdi
0x140ec2a61: call   QWORD PTR [rax+0x40]
0x140ec2a64: mov    eax,0x10
0x140ec2a69: mov    rbx,QWORD PTR [rax+rbx*1]
0x140ec2a6d: movzx  esi,WORD PTR [rsp+0x68]
0x140ec2a72: jmp    0x140ec25c6
0x140ec2a77: mov    rax,r14
0x140ec2a7a: cqo
0x140ec2a7c: idiv   r8
0x140ec2a7f: mov    r9,rax
0x140ec2a82: xor    r15d,r15d
0x140ec2a85: mov    DWORD PTR [r12+0x88],r15d
0x140ec2a8d: jmp    0x140ec28a2
0x140ec2a92: mov    rax,r14
0x140ec2a95: cqo
0x140ec2a97: idiv   r8
0x140ec2a9a: mov    r9d,eax
0x140ec2a9d: xor    r15d,r15d
0x140ec2aa0: mov    DWORD PTR [r12+0x88],r15d
0x140ec2aa8: jmp    0x140ec28a2
0x140ec2aad: mov    rax,QWORD PTR [r13+0x0]
0x140ec2ab1: mov    rcx,r13
0x140ec2ab4: call   QWORD PTR [rax]
0x140ec2ab6: test   eax,eax
0x140ec2ab8: jne    0x140ec2ae2
0x140ec2aba: test   DWORD PTR [r12+0x48],0x800
0x140ec2ac3: jne    0x140ec2ae2
0x140ec2ac5: mov    rdi,QWORD PTR [rbx]
0x140ec2ac8: test   DWORD PTR [rdi+0x48],0x800
0x140ec2acf: jne    0x140ec2ae2
0x140ec2ad1: mov    rax,QWORD PTR [rdi+0x98]
0x140ec2ad8: mov    ecx,DWORD PTR [rax+0x1c]
0x140ec2adb: cmp    DWORD PTR [r12+0x60],ecx
0x140ec2ae0: jne    0x140ec2af5
0x140ec2ae2: mov    eax,0x10
0x140ec2ae7: mov    rbx,QWORD PTR [rax+rbx*1]
0x140ec2aeb: movzx  esi,WORD PTR [rsp+0x68]
0x140ec2af0: jmp    0x140ec25c6
0x140ec2af5: mov    rbx,QWORD PTR [r12+0x98]
0x140ec2afd: test   DWORD PTR [rbx+0x10],0x20000000
0x140ec2b04: jne    0x140ec2b0e
0x140ec2b06: mov    rcx,rbx
0x140ec2b09: call   0x140c7dc00
0x140ec2b0e: movsxd r15,DWORD PTR [rbx+0x74]
0x140ec2b12: test   r15,r15
0x140ec2b15: mov    eax,0x1
0x140ec2b1a: cmovle r15,rax
0x140ec2b1e: movsxd rdx,DWORD PTR [r12+0x80]
0x140ec2b26: mov    rbx,rdx
0x140ec2b29: imul   rbx,r15
0x140ec2b2d: movsxd rcx,DWORD PTR [r12+0x84]
0x140ec2b35: mov    rsi,rcx
0x140ec2b38: imul   rsi,r15
0x140ec2b3c: movsxd rax,DWORD PTR [r12+0x88]
0x140ec2b44: mov    r14,rax
0x140ec2b47: imul   r14,r15
0x140ec2b4b: mov    r11d,DWORD PTR [rdi+0x80]
0x140ec2b52: mov    DWORD PTR [rbp-0x78],r11d
0x140ec2b56: mov    r8d,DWORD PTR [rdi+0x84]
0x140ec2b5d: mov    DWORD PTR [rsp+0x78],r8d
0x140ec2b62: mov    r10d,DWORD PTR [rdi+0x88]
0x140ec2b69: mov    DWORD PTR [rbp-0x70],r10d
0x140ec2b6d: sub    edx,r11d
0x140ec2b70: movsxd rdx,edx
0x140ec2b73: mov    QWORD PTR [rbp-0x28],rdx
0x140ec2b77: sub    ecx,r8d
0x140ec2b7a: movsxd r9,ecx
0x140ec2b7d: mov    QWORD PTR [rbp-0x38],r9
0x140ec2b81: sub    eax,r10d
0x140ec2b84: movsxd r10,eax
0x140ec2b87: mov    QWORD PTR [rbp-0x40],r10
0x140ec2b8b: mov    r13,QWORD PTR [rdi+0x98]
0x140ec2b92: test   DWORD PTR [r13+0x10],0x20000000
0x140ec2b9a: jne    0x140ec2bb4
0x140ec2b9c: mov    rcx,r13
0x140ec2b9f: call   0x140c7dc00
0x140ec2ba4: mov    rdx,QWORD PTR [rbp-0x28]
0x140ec2ba8: mov    r9,QWORD PTR [rbp-0x38]
0x140ec2bac: mov    r10,QWORD PTR [rbp-0x40]
0x140ec2bb0: mov    r11d,DWORD PTR [rbp-0x78]
0x140ec2bb4: movsxd rcx,DWORD PTR [r13+0x74]
0x140ec2bb8: test   rcx,rcx
0x140ec2bbb: mov    eax,0x1
0x140ec2bc0: cmovle rcx,rax
0x140ec2bc4: mov    r8,rcx
0x140ec2bc7: imul   r8,rdx
0x140ec2bcb: test   rbx,rbx
0x140ec2bce: jle    0x140ec2bfe
0x140ec2bd0: test   r8,r8
0x140ec2bd3: js     0x140ec2c47
0x140ec2bd5: cmp    rbx,r8
0x140ec2bd8: jle    0x140ec2c2d
0x140ec2bda: mov    eax,DWORD PTR [r12+0x80]
0x140ec2be2: mov    DWORD PTR [rdi+0x80],eax
0x140ec2be8: sub    rbx,r8
0x140ec2beb: mov    rax,rbx
0x140ec2bee: cqo
0x140ec2bf0: idiv   r15
0x140ec2bf3: mov    DWORD PTR [r12+0x80],eax
0x140ec2bfb: test   rbx,rbx
0x140ec2bfe: jns    0x140ec2c47
0x140ec2c00: test   r8,r8
0x140ec2c03: jg     0x140ec2c47
0x140ec2c05: cmp    rbx,r8
0x140ec2c08: jge    0x140ec2c2d
0x140ec2c0a: mov    eax,DWORD PTR [r12+0x80]
0x140ec2c12: mov    DWORD PTR [rdi+0x80],eax
0x140ec2c18: sub    rbx,r8
0x140ec2c1b: mov    rax,rbx
0x140ec2c1e: cqo
0x140ec2c20: idiv   r15
0x140ec2c23: mov    DWORD PTR [r12+0x80],eax
0x140ec2c2b: jmp    0x140ec2c47
0x140ec2c2d: mov    rax,rbx
0x140ec2c30: cqo
0x140ec2c32: idiv   rcx
0x140ec2c35: mov    DWORD PTR [rdi+0x80],eax
0x140ec2c3b: mov    DWORD PTR [r12+0x80],0x0
0x140ec2c47: mov    r8,rcx
0x140ec2c4a: imul   r8,r9
0x140ec2c4e: test   rsi,rsi
0x140ec2c51: jle    0x140ec2c81
0x140ec2c53: test   r8,r8
0x140ec2c56: js     0x140ec2cca
0x140ec2c58: cmp    rsi,r8
0x140ec2c5b: jle    0x140ec2cb0
0x140ec2c5d: mov    eax,DWORD PTR [r12+0x84]
0x140ec2c65: mov    DWORD PTR [rdi+0x84],eax
0x140ec2c6b: sub    rsi,r8
0x140ec2c6e: mov    rax,rsi
0x140ec2c71: cqo
0x140ec2c73: idiv   r15
0x140ec2c76: mov    DWORD PTR [r12+0x84],eax
0x140ec2c7e: test   rsi,rsi
0x140ec2c81: jns    0x140ec2cca
0x140ec2c83: test   r8,r8
0x140ec2c86: jg     0x140ec2cca
0x140ec2c88: cmp    rsi,r8
0x140ec2c8b: jge    0x140ec2cb0
0x140ec2c8d: mov    eax,DWORD PTR [r12+0x84]
0x140ec2c95: mov    DWORD PTR [rdi+0x84],eax
0x140ec2c9b: sub    rsi,r8
0x140ec2c9e: mov    rax,rsi
0x140ec2ca1: cqo
0x140ec2ca3: idiv   r15
0x140ec2ca6: mov    DWORD PTR [r12+0x84],eax
0x140ec2cae: jmp    0x140ec2cca
0x140ec2cb0: mov    rax,rsi
0x140ec2cb3: cqo
0x140ec2cb5: idiv   rcx
0x140ec2cb8: mov    DWORD PTR [rdi+0x84],eax
0x140ec2cbe: mov    DWORD PTR [r12+0x84],0x0
0x140ec2cca: mov    r8,rcx
0x140ec2ccd: imul   r8,r10
0x140ec2cd1: test   r14,r14
0x140ec2cd4: jle    0x140ec2d08
0x140ec2cd6: test   r8,r8
0x140ec2cd9: js     0x140ec2d35
0x140ec2cdb: cmp    r14,r8
0x140ec2cde: jle    0x140ec2d92
0x140ec2ce4: mov    eax,DWORD PTR [r12+0x88]
0x140ec2cec: mov    DWORD PTR [rdi+0x88],eax
0x140ec2cf2: sub    r14,r8
0x140ec2cf5: mov    rax,r14
0x140ec2cf8: cqo
0x140ec2cfa: idiv   r15
0x140ec2cfd: mov    DWORD PTR [r12+0x88],eax
0x140ec2d05: test   r14,r14
0x140ec2d08: jns    0x140ec2d35
0x140ec2d0a: test   r8,r8
0x140ec2d0d: jg     0x140ec2d35
0x140ec2d0f: cmp    r14,r8
0x140ec2d12: jge    0x140ec2d92
0x140ec2d14: mov    eax,DWORD PTR [r12+0x88]
0x140ec2d1c: mov    DWORD PTR [rdi+0x88],eax
0x140ec2d22: sub    r14,r8
0x140ec2d25: mov    rax,r14
0x140ec2d28: cqo
0x140ec2d2a: idiv   r15
0x140ec2d2d: mov    DWORD PTR [r12+0x88],eax
0x140ec2d35: xor    r14d,r14d
0x140ec2d38: mov    rax,QWORD PTR [r12+0x98]
0x140ec2d40: mov    ecx,DWORD PTR [rax+0x1c]
0x140ec2d43: mov    DWORD PTR [rdi+0x60],ecx
0x140ec2d46: movzx  eax,WORD PTR [r12+0x32]
0x140ec2d4c: mov    WORD PTR [rsp+0x68],ax
0x140ec2d51: movzx  ebx,WORD PTR [r12+0x34]
0x140ec2d57: mov    WORD PTR [rsp+0x62],bx
0x140ec2d5c: movzx  r15d,WORD PTR [r12+0x36]
0x140ec2d62: mov    WORD PTR [rsp+0x64],r15w
0x140ec2d68: mov    eax,DWORD PTR [rbp-0x50]
0x140ec2d6b: mov    DWORD PTR [r12+0x74],eax
0x140ec2d70: mov    ecx,DWORD PTR [rbp-0x68]
0x140ec2d73: mov    DWORD PTR [r12+0x78],ecx
0x140ec2d78: mov    edx,DWORD PTR [rbp-0x58]
0x140ec2d7b: mov    DWORD PTR [r12+0x7c],edx
0x140ec2d80: cmp    eax,0xc350
0x140ec2d85: jle    0x140ec2dad
0x140ec2d87: mov    DWORD PTR [r12+0x74],0xc350
0x140ec2d90: jmp    0x140ec2dbd
0x140ec2d92: mov    rax,r14
0x140ec2d95: cqo
0x140ec2d97: idiv   rcx
0x140ec2d9a: mov    DWORD PTR [rdi+0x88],eax
0x140ec2da0: xor    r14d,r14d
0x140ec2da3: mov    DWORD PTR [r12+0x88],r14d
0x140ec2dab: jmp    0x140ec2d38
0x140ec2dad: cmp    eax,0xffff3cb0
0x140ec2db2: jge    0x140ec2dbd
0x140ec2db4: mov    DWORD PTR [r12+0x74],0xffff3cb0
0x140ec2dbd: cmp    ecx,0xc350
0x140ec2dc3: jle    0x140ec2dd0
0x140ec2dc5: mov    DWORD PTR [r12+0x78],0xc350
0x140ec2dce: jmp    0x140ec2de1
0x140ec2dd0: cmp    ecx,0xffff3cb0
0x140ec2dd6: jge    0x140ec2de1
0x140ec2dd8: mov    DWORD PTR [r12+0x78],0xffff3cb0
0x140ec2de1: cmp    edx,0x124f8
0x140ec2de7: jle    0x140ec2df4
0x140ec2de9: mov    DWORD PTR [r12+0x7c],0x124f8
0x140ec2df2: jmp    0x140ec2e05
0x140ec2df4: cmp    edx,0xfffedb08
0x140ec2dfa: jge    0x140ec2e05
0x140ec2dfc: mov    DWORD PTR [r12+0x7c],0xfffedb08
0x140ec2e05: mov    QWORD PTR [r12+0x80],0x0
0x140ec2e11: mov    DWORD PTR [r12+0x88],r14d
0x140ec2e19: mov    rcx,QWORD PTR [rdi+0x98]
0x140ec2e20: test   BYTE PTR [rcx+0x10],0x40
0x140ec2e24: jne    0x140ec2e2c
0x140ec2e26: test   BYTE PTR [rcx+0x14],0x1
0x140ec2e2a: je     0x140ec2e71
0x140ec2e2c: mov    eax,DWORD PTR [rbp-0x70]
0x140ec2e2f: mov    DWORD PTR [rsp+0x48],eax
0x140ec2e33: mov    eax,DWORD PTR [rsp+0x78]
0x140ec2e37: mov    DWORD PTR [rsp+0x40],eax
0x140ec2e3b: mov    DWORD PTR [rsp+0x38],r11d
0x140ec2e40: mov    eax,DWORD PTR [rdi+0x88]
0x140ec2e46: mov    DWORD PTR [rsp+0x30],eax
0x140ec2e4a: mov    eax,DWORD PTR [rdi+0x84]
0x140ec2e50: mov    DWORD PTR [rsp+0x28],eax
0x140ec2e54: mov    eax,DWORD PTR [rdi+0x80]
0x140ec2e5a: mov    DWORD PTR [rsp+0x20],eax
0x140ec2e5e: movzx  r9d,WORD PTR [rcx+0xc]
0x140ec2e63: movzx  r8d,WORD PTR [rcx+0xa]
0x140ec2e68: movzx  edx,WORD PTR [rcx+0x8]
0x140ec2e6c: call   0x140ce0510
0x140ec2e71: mov    sil,0x1
0x140ec2e74: movzx  r13d,BYTE PTR [rsp+0x66]
0x140ec2e7a: movzx  r14d,WORD PTR [rsp+0x68]
0x140ec2e80: jmp    0x140ec218c
0x140ec2e85: test   si,si
0x140ec2e88: js     0x140ec2f35
0x140ec2e8e: movsx  eax,si
0x140ec2e91: cmp    eax,DWORD PTR [rip+0x16476c5]        # 0x14250a55c
0x140ec2e97: jge    0x140ec2f35
0x140ec2e9d: movsx  ebx,WORD PTR [rsp+0x62]
0x140ec2ea2: test   bx,bx
0x140ec2ea5: js     0x140ec2f3a
0x140ec2eab: cmp    ebx,DWORD PTR [rip+0x16476af]        # 0x14250a560
0x140ec2eb1: jge    0x140ec2f3a
0x140ec2eb7: movsx  r15,WORD PTR [rsp+0x64]
0x140ec2ebd: test   r15w,r15w
0x140ec2ec1: js     0x140ec2f40
0x140ec2ec3: cmp    r15d,DWORD PTR [rip+0x164769a]        # 0x14250a564
0x140ec2eca: jge    0x140ec2f40
0x140ec2ecc: movzx  edx,bx
0x140ec2ecf: sar    dx,0x4
0x140ec2ed3: mov    rcx,QWORD PTR [rip+0x164764e]        # 0x14250a528
0x140ec2eda: test   rcx,rcx
0x140ec2edd: je     0x140ec2f40
0x140ec2edf: movsx  rax,si
0x140ec2ee3: sar    rax,0x4
0x140ec2ee7: movsx  rdx,dx
0x140ec2eeb: mov    rax,QWORD PTR [rcx+rax*8]
0x140ec2eef: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec2ef3: mov    rdx,QWORD PTR [rax+r15*8]
0x140ec2ef7: test   rdx,rdx
0x140ec2efa: je     0x140ec2f40
0x140ec2efc: movsx  eax,si
0x140ec2eff: and    eax,0x8000000f
0x140ec2f04: jge    0x140ec2f0d
0x140ec2f06: dec    eax
0x140ec2f08: or     eax,0xfffffff0
0x140ec2f0b: inc    eax
0x140ec2f0d: movsxd rcx,eax
0x140ec2f10: shl    rcx,0x4
0x140ec2f14: mov    eax,ebx
0x140ec2f16: and    eax,0x8000000f
0x140ec2f1b: jge    0x140ec2f24
0x140ec2f1d: dec    eax
0x140ec2f1f: or     eax,0xfffffff0
0x140ec2f22: inc    eax
0x140ec2f24: cdqe
0x140ec2f26: add    rcx,rax
0x140ec2f29: test   BYTE PTR [rdx+rcx*4+0x6a0],0x8
0x140ec2f31: jne    0x140ec2f5f
0x140ec2f33: jmp    0x140ec2f40
0x140ec2f35: movzx  ebx,WORD PTR [rsp+0x62]
0x140ec2f3a: movzx  r15d,WORD PTR [rsp+0x64]
0x140ec2f40: movzx  r9d,r15w
0x140ec2f44: movzx  r8d,bx
0x140ec2f48: movzx  edx,si
0x140ec2f4b: lea    rcx,[rip+0x1530a1e]        # 0x1423f3970
0x140ec2f52: call   0x140069640
0x140ec2f57: test   al,0x10
0x140ec2f59: je     0x140ec462b
0x140ec2f5f: mov    rcx,QWORD PTR [r12+0x18]
0x140ec2f64: test   rcx,rcx
0x140ec2f67: je     0x140ec2f6e
0x140ec2f69: call   0x1413e51b0
0x140ec2f6e: mov    rbx,QWORD PTR [rip+0x15445d3]        # 0x142407548
0x140ec2f75: mov    rdi,QWORD PTR [rip+0x15445d4]        # 0x142407550
0x140ec2f7c: mov    QWORD PTR [rbp-0x28],rdi
0x140ec2f80: movzx  edx,BYTE PTR [rsp+0x60]
0x140ec2f85: mov    r8d,DWORD PTR [rsp+0x70]
0x140ec2f8a: mov    esi,DWORD PTR [rsp+0x6c]
0x140ec2f8e: mov    QWORD PTR [rbp-0x60],rbx
0x140ec2f92: movzx  r14d,sil
0x140ec2f96: mov    r13d,r8d
0x140ec2f99: mov    BYTE PTR [rsp+0x66],dl
0x140ec2f9d: movzx  esi,r15w
0x140ec2fa1: cmp    rbx,rdi
0x140ec2fa4: jae    0x140ec445d
0x140ec2faa: mov    r15,QWORD PTR [rbx]
0x140ec2fad: mov    WORD PTR [rsp+0x64],si
0x140ec2fb2: mov    DWORD PTR [rsp+0x70],r8d
0x140ec2fb7: mov    BYTE PTR [rsp+0x6c],r14b
0x140ec2fbc: test   DWORD PTR [r15+0x110],0x2010002
0x140ec2fc7: jne    0x140ec43e5
0x140ec2fcd: mov    ecx,DWORD PTR [r15+0x118]
0x140ec2fd4: mov    WORD PTR [rsp+0x64],si
0x140ec2fd9: mov    DWORD PTR [rsp+0x70],r8d
0x140ec2fde: mov    BYTE PTR [rsp+0x6c],r14b
0x140ec2fe3: test   ecx,0x180000
0x140ec2fe9: jne    0x140ec43e5
0x140ec2fef: mov    WORD PTR [rsp+0x64],si
0x140ec2ff4: mov    DWORD PTR [rsp+0x70],r8d
0x140ec2ff9: mov    BYTE PTR [rsp+0x6c],r14b
0x140ec2ffe: shr    ecx,0xa
0x140ec3001: test   cl,0x1
0x140ec3004: jne    0x140ec43e5
0x140ec300a: mov    WORD PTR [rsp+0x64],si
0x140ec300f: mov    BYTE PTR [rsp+0x60],dl
0x140ec3013: mov    DWORD PTR [rsp+0x70],r8d
0x140ec3018: mov    BYTE PTR [rsp+0x6c],r14b
0x140ec301d: movzx  r9d,si
0x140ec3021: movzx  r8d,WORD PTR [rsp+0x62]
0x140ec3027: movzx  edx,WORD PTR [rsp+0x68]
0x140ec302c: mov    rcx,r15
0x140ec302f: call   0x14014f0c0
0x140ec3034: test   al,al
0x140ec3036: je     0x140ec43dd
0x140ec303c: test   BYTE PTR [r12+0x48],0x40
0x140ec3042: jne    0x140ec3096
0x140ec3044: mov    rcx,QWORD PTR [r12+0x18]
0x140ec3049: test   rcx,rcx
0x140ec304c: je     0x140ec3096
0x140ec304e: mov    eax,DWORD PTR [r12+0x68]
0x140ec3053: cmp    DWORD PTR [r15+0x130],eax
0x140ec305a: je     0x140ec3096
0x140ec305c: mov    rdx,r15
0x140ec305f: call   0x14140bba0
0x140ec3064: test   al,al
0x140ec3066: jne    0x140ec3096
0x140ec3068: mov    WORD PTR [rsp+0x64],si
0x140ec306d: movzx  eax,BYTE PTR [rsp+0x66]
0x140ec3072: mov    BYTE PTR [rsp+0x60],al
0x140ec3076: mov    DWORD PTR [rsp+0x70],r13d
0x140ec307b: mov    BYTE PTR [rsp+0x6c],r14b
0x140ec3080: mov    r8,r15
0x140ec3083: mov    rdx,QWORD PTR [r12+0x18]
0x140ec3088: call   0x1414fbca0
0x140ec308d: cmp    eax,0xffffffff
0x140ec3090: je     0x140ec43dd
0x140ec3096: xorps  xmm0,xmm0
0x140ec3099: movdqu XMMWORD PTR [rbp-0x20],xmm0
0x140ec309e: xor    eax,eax
0x140ec30a0: mov    QWORD PTR [rbp-0x10],rax
0x140ec30a4: movdqu XMMWORD PTR [rbp-0x8],xmm0
0x140ec30a9: mov    QWORD PTR [rbp+0x8],rax
0x140ec30ad: mov    edx,0xffffffff
0x140ec30b2: movzx  ecx,dx
0x140ec30b5: mov    WORD PTR [rsp+0x78],dx
0x140ec30ba: mov    WORD PTR [rsp+0x64],si
0x140ec30bf: movzx  eax,BYTE PTR [rsp+0x66]
0x140ec30c4: mov    BYTE PTR [rsp+0x60],al
0x140ec30c8: mov    DWORD PTR [rsp+0x70],r13d
0x140ec30cd: mov    BYTE PTR [rsp+0x6c],r14b
0x140ec30d2: mov    r14,QWORD PTR [rbp-0x18]
0x140ec30d6: mov    QWORD PTR [rbp-0x58],r14
0x140ec30da: mov    rdi,QWORD PTR [rbp+0x0]
0x140ec30de: mov    rbx,QWORD PTR [rbp-0x10]
0x140ec30e2: movzx  r13d,dx
0x140ec30e6: test   cx,cx
0x140ec30e9: jne    0x140ec30f5
0x140ec30eb: test   r13w,r13w
0x140ec30ef: je     0x140ec33a6
0x140ec30f5: cmp    cx,WORD PTR [r12+0x32]
0x140ec30fb: jne    0x140ec3119
0x140ec30fd: cmp    r13w,WORD PTR [r12+0x34]
0x140ec3103: jne    0x140ec3119
0x140ec3105: movzx  eax,WORD PTR [r12+0x36]
0x140ec310b: cmp    WORD PTR [r15+0xac],ax
0x140ec3113: je     0x140ec33a6
0x140ec3119: movsx  r9d,WORD PTR [r15+0xac]
0x140ec3121: movzx  esi,r13w
0x140ec3125: add    si,WORD PTR [r15+0xaa]
0x140ec312d: movzx  r14d,cx
0x140ec3131: add    r14w,WORD PTR [r15+0xa8]
0x140ec3139: js     0x140ec33a6
0x140ec313f: movsx  eax,r14w
0x140ec3143: cmp    eax,DWORD PTR [rip+0x1647413]        # 0x14250a55c
0x140ec3149: jge    0x140ec33a6
0x140ec314f: test   si,si
0x140ec3152: js     0x140ec33a6
0x140ec3158: movsx  eax,si
0x140ec315b: cmp    eax,DWORD PTR [rip+0x16473ff]        # 0x14250a560
0x140ec3161: jge    0x140ec33a6
0x140ec3167: test   r9w,r9w
0x140ec316b: js     0x140ec33a6
0x140ec3171: cmp    r9d,DWORD PTR [rip+0x16473ec]        # 0x14250a564
0x140ec3178: jge    0x140ec33a6
0x140ec317e: movzx  r8d,si
0x140ec3182: movzx  edx,r14w
0x140ec3186: lea    rcx,[rip+0x15307e3]        # 0x1423f3970
0x140ec318d: call   0x1400695b0
0x140ec3192: mov    WORD PTR [rsp+0x66],ax
0x140ec3197: movzx  r8d,si
0x140ec319b: movzx  edx,r14w
0x140ec319f: lea    rcx,[rip+0x15307ca]        # 0x1423f3970
0x140ec31a6: call   0x1414c3aa0
0x140ec31ab: test   al,al
0x140ec31ad: je     0x140ec347e
0x140ec31b3: movzx  eax,WORD PTR [rsp+0x66]
0x140ec31b8: cmp    eax,0x164
0x140ec31bd: ja     0x140ec31de
0x140ec31bf: je     0x140ec347e
0x140ec31c5: sub    eax,0x41
0x140ec31c8: je     0x140ec347e
0x140ec31ce: sub    eax,0x101
0x140ec31d3: je     0x140ec347e
0x140ec31d9: cmp    eax,0x1
0x140ec31dc: jmp    0x140ec31ec
0x140ec31de: sub    eax,0x1b0
0x140ec31e3: je     0x140ec347e
0x140ec31e9: cmp    eax,0x3a
0x140ec31ec: je     0x140ec347e
0x140ec31f2: movzx  edx,r14w
0x140ec31f6: lea    rcx,[rip+0x1530773]        # 0x1423f3970
0x140ec31fd: call   0x140069640
0x140ec3202: and    eax,0x7
0x140ec3205: sub    eax,0x6
0x140ec3208: je     0x140ec347e
0x140ec320e: cmp    eax,0x1
0x140ec3211: jne    0x140ec3267
0x140ec3213: movzx  r8d,si
0x140ec3217: movzx  edx,r14w
0x140ec321b: lea    rcx,[rip+0x154d166]        # 0x142410388
0x140ec3222: call   0x1405c1940
0x140ec3227: test   al,al
0x140ec3229: jne    0x140ec347e
0x140ec322f: movzx  r8d,si
0x140ec3233: movzx  edx,r14w
0x140ec3237: lea    rcx,[rip+0x154d14a]        # 0x142410388
0x140ec323e: call   0x1405c1a20
0x140ec3243: test   al,al
0x140ec3245: jne    0x140ec347e
0x140ec324b: movzx  r8d,si
0x140ec324f: movzx  edx,r14w
0x140ec3253: lea    rcx,[rip+0x154d12e]        # 0x142410388
0x140ec325a: call   0x1405c17f0
0x140ec325f: test   al,al
0x140ec3261: jne    0x140ec347e
0x140ec3267: movsx  r10,WORD PTR [r15+0xac]
0x140ec326f: movzx  r8d,r13w
0x140ec3273: add    r8w,WORD PTR [r15+0xaa]
0x140ec327b: movzx  esi,WORD PTR [rsp+0x78]
0x140ec3280: movzx  r9d,si
0x140ec3284: add    r9w,WORD PTR [r15+0xa8]
0x140ec328c: js     0x140ec333a
0x140ec3292: movsx  eax,r9w
0x140ec3296: cmp    eax,DWORD PTR [rip+0x16472c0]        # 0x14250a55c
0x140ec329c: jge    0x140ec333a
0x140ec32a2: test   r8w,r8w
0x140ec32a6: js     0x140ec333a
0x140ec32ac: movsx  eax,r8w
0x140ec32b0: cmp    eax,DWORD PTR [rip+0x16472aa]        # 0x14250a560
0x140ec32b6: jge    0x140ec333a
0x140ec32bc: test   r10w,r10w
0x140ec32c0: js     0x140ec333a
0x140ec32c2: cmp    r10d,DWORD PTR [rip+0x164729b]        # 0x14250a564
0x140ec32c9: jge    0x140ec333a
0x140ec32cb: movzx  eax,r9w
0x140ec32cf: sar    ax,0x4
0x140ec32d3: movzx  ecx,r8w
0x140ec32d7: sar    cx,0x4
0x140ec32db: mov    r11,QWORD PTR [rip+0x1647246]        # 0x14250a528
0x140ec32e2: test   r11,r11
0x140ec32e5: je     0x140ec333a
0x140ec32e7: movsx  rax,ax
0x140ec32eb: movsx  rdx,cx
0x140ec32ef: mov    rax,QWORD PTR [r11+rax*8]
0x140ec32f3: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec32f7: mov    rdx,QWORD PTR [rax+r10*8]
0x140ec32fb: test   rdx,rdx
0x140ec32fe: je     0x140ec333a
0x140ec3300: movsx  eax,r9w
0x140ec3304: and    eax,0x8000000f
0x140ec3309: jge    0x140ec3312
0x140ec330b: dec    eax
0x140ec330d: or     eax,0xfffffff0
0x140ec3310: inc    eax
0x140ec3312: movsxd rcx,eax
0x140ec3315: shl    rcx,0x4
0x140ec3319: movsx  eax,r8w
0x140ec331d: and    eax,0x8000000f
0x140ec3322: jge    0x140ec332b
0x140ec3324: dec    eax
0x140ec3326: or     eax,0xfffffff0
0x140ec3329: inc    eax
0x140ec332b: cdqe
0x140ec332d: add    rcx,rax
0x140ec3330: test   BYTE PTR [rdx+rcx*4+0x6a0],0x8
0x140ec3338: jne    0x140ec33a3
0x140ec333a: movzx  eax,si
0x140ec333d: add    ax,WORD PTR [r15+0xa8]
0x140ec3345: mov    WORD PTR [rsp+0x66],ax
0x140ec334a: mov    rcx,QWORD PTR [rbp-0x58]
0x140ec334e: cmp    rcx,rbx
0x140ec3351: je     0x140ec3360
0x140ec3353: mov    WORD PTR [rcx],ax
0x140ec3356: add    rcx,0x2
0x140ec335a: mov    QWORD PTR [rbp-0x18],rcx
0x140ec335e: jmp    0x140ec3379
0x140ec3360: lea    r8,[rsp+0x66]
0x140ec3365: mov    rdx,rcx
0x140ec3368: lea    rcx,[rbp-0x20]
0x140ec336c: call   0x140072670
0x140ec3371: mov    rcx,QWORD PTR [rbp-0x18]
0x140ec3375: mov    rbx,QWORD PTR [rbp-0x10]
0x140ec3379: mov    QWORD PTR [rbp-0x58],rcx
0x140ec337d: movzx  eax,r13w
0x140ec3381: add    ax,WORD PTR [r15+0xaa]
0x140ec3389: mov    WORD PTR [rsp+0x66],ax
0x140ec338e: cmp    rdi,QWORD PTR [rbp+0x8]
0x140ec3392: je     0x140ec3464
0x140ec3398: mov    WORD PTR [rdi],ax
0x140ec339b: add    rdi,0x2
0x140ec339f: mov    QWORD PTR [rbp+0x0],rdi
0x140ec33a3: movzx  ecx,si
0x140ec33a6: inc    r13w
0x140ec33aa: cmp    r13w,0x1
0x140ec33af: jle    0x140ec30e6
0x140ec33b5: inc    cx
0x140ec33b8: mov    WORD PTR [rsp+0x78],cx
0x140ec33bd: cmp    cx,0x1
0x140ec33c1: mov    edx,0xffffffff
0x140ec33c6: jle    0x140ec30e2
0x140ec33cc: mov    cl,0x1
0x140ec33ce: movsx  r8,WORD PTR [r15+0x12c]
0x140ec33d6: movsx  rax,WORD PTR [r15+0xa4]
0x140ec33de: test   ax,ax
0x140ec33e1: mov    rbx,QWORD PTR [rbp-0x60]
0x140ec33e5: mov    rdi,QWORD PTR [rbp-0x28]
0x140ec33e9: js     0x140ec3499
0x140ec33ef: mov    rdx,rax
0x140ec33f2: mov    rax,QWORD PTR [rip+0x164baf7]        # 0x14250eef0
0x140ec33f9: mov    r9,QWORD PTR [rip+0x164bae8]        # 0x14250eee8
0x140ec3400: sub    rax,r9
0x140ec3403: sar    rax,0x3
0x140ec3407: cmp    rdx,rax
0x140ec340a: jae    0x140ec3499
0x140ec3410: test   r8w,r8w
0x140ec3414: js     0x140ec3499
0x140ec341a: mov    rax,QWORD PTR [r9+rdx*8]
0x140ec341e: mov    rdx,QWORD PTR [rax+0x178]
0x140ec3425: mov    rax,QWORD PTR [rax+0x180]
0x140ec342c: sub    rax,rdx
0x140ec342f: sar    rax,0x3
0x140ec3433: cmp    r8,rax
0x140ec3436: jae    0x140ec3499
0x140ec3438: mov    rax,QWORD PTR [rdx+r8*8]
0x140ec343c: cmp    DWORD PTR [rax+0x6b0],0x6
0x140ec3443: jle    0x140ec3488
0x140ec3445: mov    rax,QWORD PTR [rax+0x6a8]
0x140ec344c: test   BYTE PTR [rax+0x6],0x2
0x140ec3450: je     0x140ec3488
0x140ec3452: movzx  eax,cl
0x140ec3455: movzx  ecx,cl
0x140ec3458: test   al,al
0x140ec345a: mov    edx,0x0
0x140ec345f: cmovne ecx,edx
0x140ec3462: jmp    0x140ec349b
0x140ec3464: lea    r8,[rsp+0x66]
0x140ec3469: mov    rdx,rdi
0x140ec346c: lea    rcx,[rbp-0x8]
0x140ec3470: call   0x140072670
0x140ec3475: mov    rdi,QWORD PTR [rbp+0x0]
0x140ec3479: jmp    0x140ec33a3
0x140ec347e: movzx  ecx,WORD PTR [rsp+0x78]
0x140ec3483: jmp    0x140ec33a6
0x140ec3488: xor    al,al
0x140ec348a: movzx  ecx,cl
0x140ec348d: test   al,al
0x140ec348f: mov    edx,0x0
0x140ec3494: cmovne ecx,edx
0x140ec3497: jmp    0x140ec349b
0x140ec3499: xor    edx,edx
0x140ec349b: movzx  eax,cl
0x140ec349e: cmp    DWORD PTR [r15+0xd98],0xffffffff
0x140ec34a6: cmove  edx,eax
0x140ec34a9: cmp    WORD PTR [r15+0x800],0x0
0x140ec34b2: jg     0x140ec34c9
0x140ec34b4: cmp    WORD PTR [r15+0x804],0xa
0x140ec34bd: jge    0x140ec34c9
0x140ec34bf: cmp    DWORD PTR [r15+0x978],0x64
0x140ec34c7: jl     0x140ec34cb
0x140ec34c9: xor    dl,dl
0x140ec34cb: test   DWORD PTR [r15+0x110],0x8000000
0x140ec34d6: mov    ecx,0x0
0x140ec34db: mov    r13d,ecx
0x140ec34de: movzx  eax,dl
0x140ec34e1: cmove  r13d,eax
0x140ec34e5: movzx  eax,WORD PTR [r15+0x814]
0x140ec34ed: cmp    ax,0x1
0x140ec34f1: je     0x140ec3504
0x140ec34f3: cmp    ax,0x2
0x140ec34f7: je     0x140ec3504
0x140ec34f9: cmp    WORD PTR [r15+0x360],0x7
0x140ec3502: jne    0x140ec3507
0x140ec3504: xor    r13b,r13b
0x140ec3507: cmp    QWORD PTR [r15+0xd80],rcx
0x140ec350e: jne    0x140ec3c50
0x140ec3514: test   r13b,r13b
0x140ec3517: je     0x140ec3c50
0x140ec351d: xor    edx,edx
0x140ec351f: mov    eax,0xffffffff
0x140ec3524: mov    DWORD PTR [rsp+0x50],eax
0x140ec3528: mov    WORD PTR [rsp+0x48],ax
0x140ec352d: mov    DWORD PTR [rsp+0x40],0x3
0x140ec3535: mov    QWORD PTR [rsp+0x38],rcx
0x140ec353a: mov    QWORD PTR [rsp+0x30],rcx
0x140ec353f: mov    DWORD PTR [rsp+0x28],ecx
0x140ec3543: mov    DWORD PTR [rsp+0x20],0x32
0x140ec354b: mov    r9d,0xf
0x140ec3551: mov    r8d,0xb
0x140ec3557: mov    rcx,r15
0x140ec355a: call   0x1413812a0
0x140ec355f: mov    r9d,eax
0x140ec3562: mov    DWORD PTR [rsp+0x78],eax
0x140ec3566: xor    r14d,r14d
0x140ec3569: mov    rdx,QWORD PTR [r15+0x408]
0x140ec3570: mov    rcx,QWORD PTR [r15+0x410]
0x140ec3577: sub    rcx,rdx
0x140ec357a: sar    rcx,0x3
0x140ec357e: test   rcx,rcx
0x140ec3581: je     0x140ec35d1
0x140ec3583: xor    esi,esi
0x140ec3585: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x140ec3590: mov    rdx,QWORD PTR [rsi+rdx*1]
0x140ec3594: mov    rdx,QWORD PTR [rdx]
0x140ec3597: mov    rcx,r15
0x140ec359a: call   0x141379a00
0x140ec359f: test   al,al
0x140ec35a1: jne    0x140ec35c9
0x140ec35a3: inc    r14d
0x140ec35a6: add    rsi,0x8
0x140ec35aa: mov    rdx,QWORD PTR [r15+0x408]
0x140ec35b1: mov    rcx,QWORD PTR [r15+0x410]
0x140ec35b8: sub    rcx,rdx
0x140ec35bb: sar    rcx,0x3
0x140ec35bf: movsxd rax,r14d
0x140ec35c2: cmp    rax,rcx
0x140ec35c5: jb     0x140ec3590
0x140ec35c7: jmp    0x140ec35cc
0x140ec35c9: xor    r13b,r13b
0x140ec35cc: mov    r9d,DWORD PTR [rsp+0x78]
0x140ec35d1: mov    rcx,QWORD PTR [r15+0xb20]
0x140ec35d8: sub    rcx,QWORD PTR [r15+0xb18]
0x140ec35df: sar    rcx,0x4
0x140ec35e3: xor    r8d,r8d
0x140ec35e6: movzx  eax,r13b
0x140ec35ea: test   rcx,rcx
0x140ec35ed: cmove  r8d,eax
0x140ec35f1: test   DWORD PTR [r15+0x110],0x8000
0x140ec35fc: je     0x140ec3606
0x140ec35fe: sar    r9d,1
0x140ec3601: mov    DWORD PTR [rsp+0x78],r9d
0x140ec3606: mov    rax,QWORD PTR [r15+0x7d0]
0x140ec360d: mov    rcx,QWORD PTR [r15+0x7d8]
0x140ec3614: movzx  r13d,WORD PTR [rsp+0x64]
0x140ec361a: movzx  r9d,BYTE PTR [rsp+0x60]
0x140ec3620: mov    r10d,DWORD PTR [rsp+0x70]
0x140ec3625: mov    r11d,DWORD PTR [rsp+0x6c]
0x140ec362a: nop    WORD PTR [rax+rax*1+0x0]
0x140ec3630: cmp    rax,rcx
0x140ec3633: jae    0x140ec365c
0x140ec3635: mov    rdx,QWORD PTR [rax]
0x140ec3638: mov    WORD PTR [rsp+0x64],r13w
0x140ec363e: mov    BYTE PTR [rsp+0x60],r9b
0x140ec3643: mov    DWORD PTR [rsp+0x70],r10d
0x140ec3648: mov    DWORD PTR [rsp+0x6c],r11d
0x140ec364d: cmp    DWORD PTR [rdx],0x8
0x140ec3650: je     0x140ec3c50
0x140ec3656: add    rax,0x8
0x140ec365a: jmp    0x140ec3630
0x140ec365c: test   r8b,r8b
0x140ec365f: je     0x140ec3c50
0x140ec3665: mov    r14,QWORD PTR [rbp-0x58]
0x140ec3669: mov    rax,r14
0x140ec366c: mov    rsi,QWORD PTR [rbp-0x20]
0x140ec3670: sub    rax,rsi
0x140ec3673: sar    rax,1
0x140ec3676: je     0x140ec3c50
0x140ec367c: mov    edx,0x67
0x140ec3681: mov    r8d,0x3
0x140ec3687: mov    rcx,r15
0x140ec368a: call   0x141354400
0x140ec368f: mov    ecx,DWORD PTR [r15+0x118]
0x140ec3696: mov    eax,ecx
0x140ec3698: shr    eax,0xa
0x140ec369b: test   al,0x1
0x140ec369d: jne    0x140ec36ee
0x140ec369f: cmp    QWORD PTR [r15+0xd80],0x0
0x140ec36a7: jne    0x140ec36ee
0x140ec36a9: bt     ecx,0xc
0x140ec36ad: jb     0x140ec36ee
0x140ec36af: cmp    DWORD PTR [r15+0x1280],0x7
0x140ec36b7: jle    0x140ec36d2
0x140ec36b9: mov    rax,QWORD PTR [r15+0x1278]
0x140ec36c0: cmp    BYTE PTR [rax+0x7],0x0
0x140ec36c4: jge    0x140ec36d2
0x140ec36c6: test   BYTE PTR [r15+0x82c],0x8
0x140ec36ce: je     0x140ec36ee
0x140ec36d0: jmp    0x140ec36e6
0x140ec36d2: test   BYTE PTR [r15+0x82c],0x8
0x140ec36da: jne    0x140ec36e6
0x140ec36dc: test   BYTE PTR [r15+0x828],0x8
0x140ec36e4: jne    0x140ec36ee
0x140ec36e6: add    DWORD PTR [r15+0x984],0xa
0x140ec36ee: mov    ecx,DWORD PTR [r12+0x80]
0x140ec36f6: neg    ecx
0x140ec36f8: cmovs  ecx,DWORD PTR [r12+0x80]
0x140ec3701: mov    eax,DWORD PTR [r12+0x84]
0x140ec3709: neg    eax
0x140ec370b: cmovs  eax,DWORD PTR [r12+0x84]
0x140ec3714: cmp    eax,ecx
0x140ec3716: cmovg  ecx,eax
0x140ec3719: movsxd rcx,ecx
0x140ec371c: imul   rcx,rcx
0x140ec3720: movabs rax,0x55e63b88c230e77f
0x140ec372a: imul   rcx
0x140ec372d: sar    rdx,0x19
0x140ec3731: mov    rax,rdx
0x140ec3734: shr    rax,0x3f
0x140ec3738: add    rdx,rax
0x140ec373b: inc    edx
0x140ec373d: cmp    edx,DWORD PTR [rsp+0x78]
0x140ec3741: jge    0x140ec3c50
0x140ec3747: cmp    DWORD PTR [rip+0x9faaea],0x0        # 0x1418be238
0x140ec374e: jne    0x140ec375e
0x140ec3750: test   BYTE PTR [rip+0x14efc51],0x70        # 0x1423b33a8
0x140ec3757: jne    0x140ec376b
0x140ec3759: jmp    0x140ec3a7a
0x140ec375e: test   BYTE PTR [rip+0x14efc43],0x8        # 0x1423b33a8
0x140ec3765: je     0x140ec3a7a
0x140ec376b: xorps  xmm0,xmm0
0x140ec376e: movups XMMWORD PTR [rbp+0x80],xmm0
0x140ec3775: xor    eax,eax
0x140ec3777: mov    QWORD PTR [rbp+0x90],rax
0x140ec377e: mov    QWORD PTR [rbp+0x98],0xf
0x140ec3789: mov    BYTE PTR [rbp+0x80],al
0x140ec378f: movups XMMWORD PTR [rbp+0xc0],xmm0
0x140ec3796: mov    QWORD PTR [rbp+0xd0],rax
0x140ec379d: mov    QWORD PTR [rbp+0xd8],0xf
0x140ec37a8: mov    BYTE PTR [rbp+0xc0],al
0x140ec37ae: mov    BYTE PTR [rsp+0x20],0x1
0x140ec37b3: mov    r9b,0x1
0x140ec37b6: mov    r8d,0x1
0x140ec37bc: lea    rdx,[rbp+0xc0]
0x140ec37c3: mov    rcx,r15
0x140ec37c6: call   0x141346d40
0x140ec37cb: lea    rdx,[rbp+0xc0]
0x140ec37d2: cmp    QWORD PTR [rbp+0xd8],0xf
0x140ec37da: cmova  rdx,QWORD PTR [rbp+0xc0]
0x140ec37e2: mov    r8,QWORD PTR [rbp+0xd0]
0x140ec37e9: lea    rcx,[rbp+0x80]
0x140ec37f0: call   0x140071040
0x140ec37f5: test   DWORD PTR [r15+0x110],0x8000
0x140ec3800: je     0x140ec388e
0x140ec3806: call   0x140ece790
0x140ec380b: mov    r8d,eax
0x140ec380e: mov    eax,0x3
0x140ec3813: mul    r8d
0x140ec3816: mov    ecx,r8d
0x140ec3819: sub    ecx,edx
0x140ec381b: shr    ecx,1
0x140ec381d: add    ecx,edx
0x140ec381f: shr    ecx,0x1e
0x140ec3822: imul   ecx,ecx,0x80000001
0x140ec3828: add    r8d,ecx
0x140ec382b: cmp    r8d,0x40000000
0x140ec3832: jb     0x140ec3864
0x140ec3834: cmp    DWORD PTR [rip+0x9fa9fd],0x1        # 0x1418be238
0x140ec383b: jne    0x140ec3855
0x140ec383d: cmp    r15,QWORD PTR [rip+0x1543d4c]        # 0x142407590
0x140ec3844: jne    0x140ec3855
0x140ec3846: lea    rdx,[rip+0x7bfba3]        # 0x1416833f0
0x140ec384d: mov    r8d,0x9
0x140ec3853: jmp    0x140ec38bc
0x140ec3855: lea    rdx,[rip+0x7bfb54]        # 0x1416833b0
0x140ec385c: mov    r8d,0xa
0x140ec3862: jmp    0x140ec38bc
0x140ec3864: cmp    DWORD PTR [rip+0x9fa9cd],0x1        # 0x1418be238
0x140ec386b: jne    0x140ec3885
0x140ec386d: cmp    r15,QWORD PTR [rip+0x1543d1c]        # 0x142407590
0x140ec3874: jne    0x140ec3885
0x140ec3876: lea    rdx,[rip+0x7bfb27]        # 0x1416833a4
0x140ec387d: mov    r8d,0x5
0x140ec3883: jmp    0x140ec38bc
0x140ec3885: lea    rdx,[rip+0x7bfb38]        # 0x1416833c4
0x140ec388c: jmp    0x140ec38b6
0x140ec388e: cmp    DWORD PTR [rip+0x9fa9a3],0x1        # 0x1418be238
0x140ec3895: jne    0x140ec38af
0x140ec3897: cmp    r15,QWORD PTR [rip+0x1543cf2]        # 0x142407590
0x140ec389e: jne    0x140ec38af
0x140ec38a0: lea    rdx,[rip+0x7bfb15]        # 0x1416833bc
0x140ec38a7: mov    r8d,0x5
0x140ec38ad: jmp    0x140ec38bc
0x140ec38af: lea    rdx,[rip+0x7bfa9e]        # 0x141683354
0x140ec38b6: mov    r8d,0x6
0x140ec38bc: lea    rcx,[rbp+0x80]
0x140ec38c3: call   0x140071040
0x140ec38c8: mov    r8d,0xf
0x140ec38ce: lea    rdx,[rip+0x88ef23]        # 0x1417527f8
0x140ec38d5: lea    rcx,[rbp+0x80]
0x140ec38dc: call   0x140071040
0x140ec38e1: xorps  xmm0,xmm0
0x140ec38e4: movups XMMWORD PTR [rbp+0xa0],xmm0
0x140ec38eb: mov    QWORD PTR [rbp+0xb0],0x0
0x140ec38f6: mov    QWORD PTR [rbp+0xb8],0xf
0x140ec3901: mov    BYTE PTR [rbp+0xa0],0x0
0x140ec3908: mov    r9d,0xffffffff
0x140ec390e: xor    r8d,r8d
0x140ec3911: lea    rdx,[rbp+0xa0]
0x140ec3918: mov    rcx,QWORD PTR [r12+0x98]
0x140ec3920: call   0x140c7d140
0x140ec3925: lea    rdx,[rbp+0xa0]
0x140ec392c: cmp    QWORD PTR [rbp+0xb8],0xf
0x140ec3934: cmova  rdx,QWORD PTR [rbp+0xa0]
0x140ec393c: mov    r8,QWORD PTR [rbp+0xb0]
0x140ec3943: lea    rcx,[rbp+0x80]
0x140ec394a: call   0x140071040
0x140ec394f: mov    r8d,0x1
0x140ec3955: lea    rdx,[rip+0x745d5c]        # 0x1416096b8
0x140ec395c: lea    rcx,[rbp+0x80]
0x140ec3963: call   0x140071040
0x140ec3968: mov    DWORD PTR [rbp+0x10],0x700a2
0x140ec396f: mov    BYTE PTR [rbp+0x14],0x0
0x140ec3973: mov    ecx,0xffff8ad0
0x140ec3978: mov    DWORD PTR [rbp+0x16],0x8ad08ad0
0x140ec397f: mov    WORD PTR [rbp+0x1a],cx
0x140ec3983: xor    eax,eax
0x140ec3985: mov    DWORD PTR [rbp+0x1c],eax
0x140ec3988: mov    DWORD PTR [rbp+0x20],0x8ad08ad0
0x140ec398f: mov    WORD PTR [rbp+0x24],cx
0x140ec3993: mov    DWORD PTR [rbp+0x28],eax
0x140ec3996: mov    WORD PTR [rbp+0x2c],ax
0x140ec399a: xorps  xmm0,xmm0
0x140ec399d: movdqa XMMWORD PTR [rbp+0x30],xmm0
0x140ec39a2: mov    ecx,0xffffffff
0x140ec39a7: mov    QWORD PTR [rbp+0x40],0xffffffffffffffff
0x140ec39af: mov    DWORD PTR [rbp+0x48],ecx
0x140ec39b2: mov    DWORD PTR [rbp+0x4c],eax
0x140ec39b5: mov    DWORD PTR [rbp+0x50],ecx
0x140ec39b8: cmp    DWORD PTR [rip+0x9fa879],0x1        # 0x1418be238
0x140ec39bf: jne    0x140ec39e4
0x140ec39c1: mov    rax,QWORD PTR [rip+0x1543bc8]        # 0x142407590
0x140ec39c8: cmp    r15,rax
0x140ec39cb: jne    0x140ec39d3
0x140ec39cd: mov    BYTE PTR [rbp+0x14],0x1
0x140ec39d1: jmp    0x140ec3a02
0x140ec39d3: mov    eax,DWORD PTR [rax+0x130]
0x140ec39d9: cmp    DWORD PTR [r15+0x3d0],eax
0x140ec39e0: jne    0x140ec3a0b
0x140ec39e2: jmp    0x140ec3a02
0x140ec39e4: mov    rcx,r15
0x140ec39e7: call   0x1413a7620
0x140ec39ec: test   al,al
0x140ec39ee: je     0x140ec39f6
0x140ec39f0: mov    BYTE PTR [rbp+0x14],0x1
0x140ec39f4: jmp    0x140ec3a02
0x140ec39f6: mov    rcx,r15
0x140ec39f9: call   0x1413a7720
0x140ec39fe: test   al,al
0x140ec3a00: je     0x140ec3a0b
0x140ec3a02: mov    eax,0x4
0x140ec3a07: mov    WORD PTR [rbp+0x12],ax
0x140ec3a0b: mov    eax,0x7d0
0x140ec3a10: mov    WORD PTR [rbp+0x2c],ax
0x140ec3a14: movzx  eax,WORD PTR [r15+0xa8]
0x140ec3a1c: mov    WORD PTR [rbp+0x16],ax
0x140ec3a20: movzx  eax,WORD PTR [r15+0xaa]
0x140ec3a28: mov    WORD PTR [rbp+0x18],ax
0x140ec3a2c: movzx  eax,WORD PTR [r15+0xac]
0x140ec3a34: mov    WORD PTR [rbp+0x1a],ax
0x140ec3a38: mov    QWORD PTR [rbp+0x38],r15
0x140ec3a3c: lea    r8,[rbp+0x10]
0x140ec3a40: lea    rdx,[rbp+0x80]
0x140ec3a47: lea    rcx,[rip+0x1642282]        # 0x142505cd0
0x140ec3a4e: call   0x1400e5250
0x140ec3a53: nop
0x140ec3a54: lea    rcx,[rbp+0xa0]
0x140ec3a5b: call   0x140070e80
0x140ec3a60: nop
0x140ec3a61: lea    rcx,[rbp+0xc0]
0x140ec3a68: call   0x140070e80
0x140ec3a6d: nop
0x140ec3a6e: lea    rcx,[rbp+0x80]
0x140ec3a75: call   0x140070e80
0x140ec3a7a: sub    r14,rsi
0x140ec3a7d: sar    r14,1
0x140ec3a80: cmp    r14d,0x1
0x140ec3a84: ja     0x140ec3a8a
0x140ec3a86: xor    eax,eax
0x140ec3a88: jmp    0x140ec3ac3
0x140ec3a8a: call   0x140ece790
0x140ec3a8f: mov    r8d,eax
0x140ec3a92: mov    eax,0x3
0x140ec3a97: mul    r8d
0x140ec3a9a: mov    ecx,r8d
0x140ec3a9d: sub    ecx,edx
0x140ec3a9f: shr    ecx,1
0x140ec3aa1: add    ecx,edx
0x140ec3aa3: shr    ecx,0x1e
0x140ec3aa6: imul   ecx,ecx,0x80000001
0x140ec3aac: add    r8d,ecx
0x140ec3aaf: xor    edx,edx
0x140ec3ab1: mov    eax,0x7fffffff
0x140ec3ab6: div    r14d
0x140ec3ab9: lea    ecx,[rax+0x1]
0x140ec3abc: xor    edx,edx
0x140ec3abe: mov    eax,r8d
0x140ec3ac1: div    ecx
0x140ec3ac3: cdqe
0x140ec3ac5: lea    rcx,[rax+rax*1]
0x140ec3ac9: mov    rax,QWORD PTR [rbp-0x8]
0x140ec3acd: mov    BYTE PTR [rsp+0x20],0x1
0x140ec3ad2: movzx  r9d,WORD PTR [r15+0xac]
0x140ec3ada: movzx  r8d,WORD PTR [rax+rcx*1]
0x140ec3adf: movzx  edx,WORD PTR [rsi+rcx*1]
0x140ec3ae3: mov    rcx,r15
0x140ec3ae6: call   0x14135a890
0x140ec3aeb: mov    rax,QWORD PTR [r15+0x7d0]
0x140ec3af2: mov    rcx,QWORD PTR [r15+0x7d8]
0x140ec3af9: movzx  r9d,BYTE PTR [rsp+0x60]
0x140ec3aff: mov    r10d,DWORD PTR [rsp+0x70]
0x140ec3b04: mov    esi,DWORD PTR [rsp+0x6c]
0x140ec3b08: cmp    rax,rcx
0x140ec3b0b: jae    0x140ec3b1c
0x140ec3b0d: mov    rdx,QWORD PTR [rax]
0x140ec3b10: mov    DWORD PTR [rdx],0xffffffff
0x140ec3b16: add    rax,0x8
0x140ec3b1a: jmp    0x140ec3b08
0x140ec3b1c: mov    DWORD PTR [rsp+0x6c],esi
0x140ec3b20: mov    DWORD PTR [rsp+0x70],r10d
0x140ec3b25: mov    BYTE PTR [rsp+0x60],r9b
0x140ec3b2a: mov    WORD PTR [rsp+0x64],r13w
0x140ec3b30: mov    BYTE PTR [r15+0x4c4],0x0
0x140ec3b38: mov    DWORD PTR [r15+0x4c8],0x0
0x140ec3b43: mov    rax,QWORD PTR [r15+0xc8]
0x140ec3b4a: cmp    rax,QWORD PTR [r15+0xd0]
0x140ec3b51: je     0x140ec3b5a
0x140ec3b53: mov    QWORD PTR [r15+0xd0],rax
0x140ec3b5a: mov    rax,QWORD PTR [r15+0xe0]
0x140ec3b61: cmp    rax,QWORD PTR [r15+0xe8]
0x140ec3b68: je     0x140ec3b71
0x140ec3b6a: mov    QWORD PTR [r15+0xe8],rax
0x140ec3b71: mov    rax,QWORD PTR [r15+0xf8]
0x140ec3b78: cmp    rax,QWORD PTR [r15+0x100]
0x140ec3b7f: je     0x140ec3b88
0x140ec3b81: mov    QWORD PTR [r15+0x100],rax
0x140ec3b88: and    DWORD PTR [r15+0x110],0xffffbffe
0x140ec3b93: mov    rax,QWORD PTR [r15+0x7d0]
0x140ec3b9a: mov    rcx,QWORD PTR [r15+0x7d8]
0x140ec3ba1: cmp    rax,rcx
0x140ec3ba4: je     0x140ec3c0b
0x140ec3ba6: movzx  edx,sil
0x140ec3baa: mov    DWORD PTR [rsp+0x70],r10d
0x140ec3baf: mov    BYTE PTR [rsp+0x60],r9b
0x140ec3bb4: mov    WORD PTR [rsp+0x64],r13w
0x140ec3bba: mov    DWORD PTR [rsp+0x6c],esi
0x140ec3bbe: jae    0x140ec3c0f
0x140ec3bc0: mov    r8,QWORD PTR [rax]
0x140ec3bc3: cmp    DWORD PTR [r8],0x8
0x140ec3bc7: je     0x140ec3be3
0x140ec3bc9: add    rax,0x8
0x140ec3bcd: mov    WORD PTR [rsp+0x64],r13w
0x140ec3bd3: mov    BYTE PTR [rsp+0x60],r9b
0x140ec3bd8: mov    DWORD PTR [rsp+0x70],r10d
0x140ec3bdd: mov    DWORD PTR [rsp+0x6c],esi
0x140ec3be1: jmp    0x140ec3ba1
0x140ec3be3: cmp    DWORD PTR [r8+0x8],0x3
0x140ec3be8: jge    0x140ec3bf2
0x140ec3bea: mov    DWORD PTR [r8+0x8],0x3
0x140ec3bf2: mov    WORD PTR [rsp+0x64],r13w
0x140ec3bf8: mov    BYTE PTR [rsp+0x60],r9b
0x140ec3bfd: mov    DWORD PTR [rsp+0x70],r10d
0x140ec3c02: movzx  esi,dl
0x140ec3c05: mov    DWORD PTR [rsp+0x6c],esi
0x140ec3c09: jmp    0x140ec3c24
0x140ec3c0b: mov    esi,DWORD PTR [rsp+0x6c]
0x140ec3c0f: mov    rcx,r15
0x140ec3c12: call   0x140660420
0x140ec3c17: mov    DWORD PTR [rax],0x8
0x140ec3c1d: mov    DWORD PTR [rax+0x8],0x3
0x140ec3c24: lea    rcx,[rbp-0x8]
0x140ec3c28: call   0x140070de0
0x140ec3c2d: nop
0x140ec3c2e: lea    rcx,[rbp-0x20]
0x140ec3c32: call   0x140070de0
0x140ec3c37: movzx  edx,BYTE PTR [rsp+0x60]
0x140ec3c3c: mov    r8d,DWORD PTR [rsp+0x70]
0x140ec3c41: add    rbx,0x8
0x140ec3c45: movzx  r15d,WORD PTR [rsp+0x64]
0x140ec3c4b: jmp    0x140ec2f8e
0x140ec3c50: mov    rsi,QWORD PTR [r12+0x98]
0x140ec3c58: test   DWORD PTR [rsi+0x10],0x20000000
0x140ec3c5f: jne    0x140ec3c69
0x140ec3c61: mov    rcx,rsi
0x140ec3c64: call   0x140c7dc00
0x140ec3c69: movsxd r9,DWORD PTR [rsi+0x74]
0x140ec3c6d: test   r9,r9
0x140ec3c70: mov    eax,0x1
0x140ec3c75: cmovle r9,rax
0x140ec3c79: mov    QWORD PTR [rbp-0x38],r9
0x140ec3c7d: movsxd rax,DWORD PTR [r12+0x80]
0x140ec3c85: mov    QWORD PTR [rsp+0x78],rax
0x140ec3c8a: mov    rsi,r9
0x140ec3c8d: imul   rsi,rax
0x140ec3c91: movsxd r11,DWORD PTR [r12+0x84]
0x140ec3c99: mov    QWORD PTR [rbp-0x40],r11
0x140ec3c9d: mov    r14,r9
0x140ec3ca0: imul   r14,r11
0x140ec3ca4: movsxd rax,DWORD PTR [r12+0x88]
0x140ec3cac: mov    QWORD PTR [rbp+0x60],rax
0x140ec3cb0: mov    r13,r9
0x140ec3cb3: imul   r13,rax
0x140ec3cb7: test   BYTE PTR [r15+0x118],0x80
0x140ec3cbf: jne    0x140ec3cd1
0x140ec3cc1: mov    rcx,r15
0x140ec3cc4: call   0x1413ed770
0x140ec3cc9: mov    r9,QWORD PTR [rbp-0x38]
0x140ec3ccd: mov    r11,QWORD PTR [rbp-0x40]
0x140ec3cd1: movsxd rcx,DWORD PTR [r15+0x138c]
0x140ec3cd8: test   rcx,rcx
0x140ec3cdb: mov    eax,0x1
0x140ec3ce0: cmovle rcx,rax
0x140ec3ce4: xor    edx,edx
0x140ec3ce6: mov    eax,edx
0x140ec3ce8: mov    QWORD PTR [rbp-0x78],rax
0x140ec3cec: mov    QWORD PTR [rbp-0x70],rax
0x140ec3cf0: mov    QWORD PTR [rbp-0x60],rax
0x140ec3cf4: mov    edx,DWORD PTR [r12+0x80]
0x140ec3cfc: mov    DWORD PTR [rbp-0x50],edx
0x140ec3cff: mov    eax,DWORD PTR [r12+0x84]
0x140ec3d07: mov    DWORD PTR [rbp-0x58],eax
0x140ec3d0a: mov    eax,DWORD PTR [r12+0x88]
0x140ec3d12: mov    DWORD PTR [rbp-0x68],eax
0x140ec3d15: mov    r8,rcx
0x140ec3d18: imul   r8,QWORD PTR [rsp+0x78]
0x140ec3d1e: mov    eax,edx
0x140ec3d20: test   rsi,rsi
0x140ec3d23: jle    0x140ec3d79
0x140ec3d25: test   r8,r8
0x140ec3d28: jns    0x140ec3d5a
0x140ec3d2a: lea    rcx,[rbp-0x8]
0x140ec3d2e: call   0x140070de0
0x140ec3d33: nop
0x140ec3d34: lea    rcx,[rbp-0x20]
0x140ec3d38: call   0x140070de0
0x140ec3d3d: mov    r8d,DWORD PTR [rsp+0x70]
0x140ec3d42: movzx  edx,BYTE PTR [rsp+0x60]
0x140ec3d47: mov    esi,DWORD PTR [rsp+0x6c]
0x140ec3d4b: add    rbx,0x8
0x140ec3d4f: movzx  r15d,WORD PTR [rsp+0x64]
0x140ec3d55: jmp    0x140ec2f8e
0x140ec3d5a: cmp    rsi,r8
0x140ec3d5d: jle    0x140ec3da1
0x140ec3d5f: mov    QWORD PTR [rbp-0x78],rax
0x140ec3d63: sub    rsi,r8
0x140ec3d66: mov    rax,rsi
0x140ec3d69: cqo
0x140ec3d6b: idiv   r9
0x140ec3d6e: mov    DWORD PTR [r12+0x80],eax
0x140ec3d76: test   rsi,rsi
0x140ec3d79: jns    0x140ec3ddb
0x140ec3d7b: test   r8,r8
0x140ec3d7e: jg     0x140ec3d2a
0x140ec3d80: cmp    rsi,r8
0x140ec3d83: jge    0x140ec3dbe
0x140ec3d85: mov    r10d,eax
0x140ec3d88: mov    QWORD PTR [rbp-0x78],r10
0x140ec3d8c: sub    rsi,r8
0x140ec3d8f: mov    rax,rsi
0x140ec3d92: cqo
0x140ec3d94: idiv   r9
0x140ec3d97: mov    DWORD PTR [r12+0x80],eax
0x140ec3d9f: jmp    0x140ec3ddf
0x140ec3da1: mov    rax,rsi
0x140ec3da4: cqo
0x140ec3da6: idiv   rcx
0x140ec3da9: mov    r10,rax
0x140ec3dac: mov    QWORD PTR [rbp-0x78],rax
0x140ec3db0: mov    DWORD PTR [r12+0x80],0x0
0x140ec3dbc: jmp    0x140ec3ddf
0x140ec3dbe: mov    rax,rsi
0x140ec3dc1: cqo
0x140ec3dc3: idiv   rcx
0x140ec3dc6: mov    r10d,eax
0x140ec3dc9: mov    QWORD PTR [rbp-0x78],r10
0x140ec3dcd: mov    DWORD PTR [r12+0x80],0x0
0x140ec3dd9: jmp    0x140ec3ddf
0x140ec3ddb: mov    r10,QWORD PTR [rbp-0x78]
0x140ec3ddf: mov    r8,rcx
0x140ec3de2: imul   r8,r11
0x140ec3de6: test   r14,r14
0x140ec3de9: jle    0x140ec3e1b
0x140ec3deb: test   r8,r8
0x140ec3dee: js     0x140ec3d2a
0x140ec3df4: cmp    r14,r8
0x140ec3df7: jle    0x140ec3e48
0x140ec3df9: mov    eax,DWORD PTR [r12+0x84]
0x140ec3e01: mov    QWORD PTR [rbp-0x70],rax
0x140ec3e05: sub    r14,r8
0x140ec3e08: mov    rax,r14
0x140ec3e0b: cqo
0x140ec3e0d: idiv   r9
0x140ec3e10: mov    DWORD PTR [r12+0x84],eax
0x140ec3e18: test   r14,r14
0x140ec3e1b: jns    0x140ec3e79
0x140ec3e1d: test   r8,r8
0x140ec3e20: jg     0x140ec3d2a
0x140ec3e26: cmp    r14,r8
0x140ec3e29: jge    0x140ec3e61
0x140ec3e2b: mov    esi,DWORD PTR [r12+0x84]
0x140ec3e33: sub    r14,r8
0x140ec3e36: mov    rax,r14
0x140ec3e39: cqo
0x140ec3e3b: idiv   r9
0x140ec3e3e: mov    DWORD PTR [r12+0x84],eax
0x140ec3e46: jmp    0x140ec3e7d
0x140ec3e48: mov    rax,r14
0x140ec3e4b: cqo
0x140ec3e4d: idiv   rcx
0x140ec3e50: mov    rsi,rax
0x140ec3e53: mov    DWORD PTR [r12+0x84],0x0
0x140ec3e5f: jmp    0x140ec3e7d
0x140ec3e61: mov    rax,r14
0x140ec3e64: cqo
0x140ec3e66: idiv   rcx
0x140ec3e69: mov    esi,eax
0x140ec3e6b: mov    DWORD PTR [r12+0x84],0x0
0x140ec3e77: jmp    0x140ec3e7d
0x140ec3e79: mov    rsi,QWORD PTR [rbp-0x70]
0x140ec3e7d: mov    r8,rcx
0x140ec3e80: imul   r8,QWORD PTR [rbp+0x60]
0x140ec3e85: test   r13,r13
0x140ec3e88: jle    0x140ec3eba
0x140ec3e8a: test   r8,r8
0x140ec3e8d: js     0x140ec3d2a
0x140ec3e93: cmp    r13,r8
0x140ec3e96: jle    0x140ec3ee7
0x140ec3e98: mov    eax,DWORD PTR [r12+0x88]
0x140ec3ea0: mov    QWORD PTR [rbp-0x60],rax
0x140ec3ea4: sub    r13,r8
0x140ec3ea7: mov    rax,r13
0x140ec3eaa: cqo
0x140ec3eac: idiv   r9
0x140ec3eaf: mov    DWORD PTR [r12+0x88],eax
0x140ec3eb7: test   r13,r13
0x140ec3eba: jns    0x140ec3f17
0x140ec3ebc: test   r8,r8
0x140ec3ebf: jg     0x140ec3d2a
0x140ec3ec5: cmp    r13,r8
0x140ec3ec8: jge    0x140ec3eff
0x140ec3eca: mov    r14d,DWORD PTR [r12+0x88]
0x140ec3ed2: sub    r13,r8
0x140ec3ed5: mov    rax,r13
0x140ec3ed8: cqo
0x140ec3eda: idiv   r9
0x140ec3edd: mov    DWORD PTR [r12+0x88],eax
0x140ec3ee5: jmp    0x140ec3f1b
0x140ec3ee7: mov    rax,r13
0x140ec3eea: cqo
0x140ec3eec: idiv   rcx
0x140ec3eef: mov    r14,rax
0x140ec3ef2: xor    r13d,r13d
0x140ec3ef5: mov    DWORD PTR [r12+0x88],r13d
0x140ec3efd: jmp    0x140ec3f1e
0x140ec3eff: mov    rax,r13
0x140ec3f02: cqo
0x140ec3f04: idiv   rcx
0x140ec3f07: mov    r14d,eax
0x140ec3f0a: xor    r13d,r13d
0x140ec3f0d: mov    DWORD PTR [r12+0x88],r13d
0x140ec3f15: jmp    0x140ec3f1e
0x140ec3f17: mov    r14,QWORD PTR [rbp-0x60]
0x140ec3f1b: xor    r13d,r13d
0x140ec3f1e: mov    eax,r10d
0x140ec3f21: neg    eax
0x140ec3f23: cmovs  eax,r10d
0x140ec3f27: cmp    eax,0x1388
0x140ec3f2c: jge    0x140ec3f65
0x140ec3f2e: mov    eax,esi
0x140ec3f30: neg    eax
0x140ec3f32: cmovs  eax,esi
0x140ec3f35: cmp    eax,0x1388
0x140ec3f3a: jge    0x140ec3f65
0x140ec3f3c: mov    eax,r14d
0x140ec3f3f: neg    eax
0x140ec3f41: cmovs  eax,r14d
0x140ec3f45: cmp    eax,0x1388
0x140ec3f4a: jge    0x140ec3f65
0x140ec3f4c: mov    QWORD PTR [r12+0x80],0x0
0x140ec3f58: mov    DWORD PTR [r12+0x88],r13d
0x140ec3f60: jmp    0x140ec4235
0x140ec3f65: call   0x140ece790
0x140ec3f6a: mov    r8d,eax
0x140ec3f6d: mov    eax,0x3
0x140ec3f72: mul    r8d
0x140ec3f75: mov    ecx,r8d
0x140ec3f78: sub    ecx,edx
0x140ec3f7a: shr    ecx,1
0x140ec3f7c: add    ecx,edx
0x140ec3f7e: shr    ecx,0x1e
0x140ec3f81: imul   ecx,ecx,0x7fffffff
0x140ec3f87: sub    r8d,ecx
0x140ec3f8a: mov    eax,0x4fffffcf
0x140ec3f8f: mul    r8d
0x140ec3f92: sub    r8d,edx
0x140ec3f95: shr    r8d,1
0x140ec3f98: add    r8d,edx
0x140ec3f9b: shr    r8d,0x1a
0x140ec3f9f: sub    r8d,0xa
0x140ec3fa3: imul   eax,r8d,0x3e8
0x140ec3faa: mov    r13,QWORD PTR [rbp-0x78]
0x140ec3fae: add    r13d,eax
0x140ec3fb1: call   0x140ece790
0x140ec3fb6: mov    r8d,eax
0x140ec3fb9: mov    eax,0x3
0x140ec3fbe: mul    r8d
0x140ec3fc1: mov    ecx,r8d
0x140ec3fc4: sub    ecx,edx
0x140ec3fc6: shr    ecx,1
0x140ec3fc8: add    ecx,edx
0x140ec3fca: shr    ecx,0x1e
0x140ec3fcd: imul   ecx,ecx,0x80000001
0x140ec3fd3: add    r8d,ecx
0x140ec3fd6: mov    eax,0x4fffffcf
0x140ec3fdb: mul    r8d
0x140ec3fde: sub    r8d,edx
0x140ec3fe1: shr    r8d,1
0x140ec3fe4: add    r8d,edx
0x140ec3fe7: shr    r8d,0x1a
0x140ec3feb: sub    r8d,0xa
0x140ec3fef: imul   eax,r8d,0x3e8
0x140ec3ff6: add    esi,eax
0x140ec3ff8: mov    QWORD PTR [rbp-0x70],rsi
0x140ec3ffc: call   0x140ece790
0x140ec4001: mov    r8d,eax
0x140ec4004: mov    eax,0x3
0x140ec4009: mul    r8d
0x140ec400c: mov    ecx,r8d
0x140ec400f: sub    ecx,edx
0x140ec4011: shr    ecx,1
0x140ec4013: add    ecx,edx
0x140ec4015: shr    ecx,0x1e
0x140ec4018: imul   ecx,ecx,0x80000001
0x140ec401e: add    r8d,ecx
0x140ec4021: mov    eax,0x4fffffcf
0x140ec4026: mul    r8d
0x140ec4029: sub    r8d,edx
0x140ec402c: shr    r8d,1
0x140ec402f: add    r8d,edx
0x140ec4032: shr    r8d,0x1a
0x140ec4036: sub    r8d,0xa
0x140ec403a: imul   eax,r8d,0x3e8
0x140ec4041: add    r14d,eax
0x140ec4044: mov    ecx,0xa0
0x140ec4049: call   0x1415530e0
0x140ec404e: mov    rsi,rax
0x140ec4051: mov    QWORD PTR [rbp+0x70],rax
0x140ec4055: xor    edx,edx
0x140ec4057: mov    rcx,rax
0x140ec405a: call   0x140ebf110
0x140ec405f: lea    rax,[rip+0x7bf7ba]        # 0x141683820
0x140ec4066: mov    QWORD PTR [rsi],rax
0x140ec4069: movzx  ecx,WORD PTR [r15+0xa8]
0x140ec4071: mov    WORD PTR [rsi+0x20],cx
0x140ec4075: movzx  eax,WORD PTR [r15+0xaa]
0x140ec407d: mov    WORD PTR [rsi+0x22],ax
0x140ec4081: movzx  eax,WORD PTR [r15+0xac]
0x140ec4089: mov    WORD PTR [rsi+0x24],ax
0x140ec408d: movzx  eax,WORD PTR [r15+0xa8]
0x140ec4095: mov    WORD PTR [rsi+0x32],ax
0x140ec4099: movzx  eax,WORD PTR [r15+0xaa]
0x140ec40a1: mov    WORD PTR [rsi+0x34],ax
0x140ec40a5: movzx  eax,WORD PTR [r15+0xac]
0x140ec40ad: mov    WORD PTR [rsi+0x36],ax
0x140ec40b1: movzx  eax,WORD PTR [r15+0xa8]
0x140ec40b9: mov    WORD PTR [rsi+0x2c],ax
0x140ec40bd: movzx  eax,WORD PTR [r15+0xaa]
0x140ec40c5: mov    WORD PTR [rsi+0x2e],ax
0x140ec40c9: movzx  eax,WORD PTR [r15+0xac]
0x140ec40d1: mov    WORD PTR [rsi+0x30],ax
0x140ec40d5: mov    QWORD PTR [rsi+0x98],r15
0x140ec40dc: xor    ecx,ecx
0x140ec40de: mov    QWORD PTR [rsi+0x18],rcx
0x140ec40e2: mov    eax,DWORD PTR [rsi+0x48]
0x140ec40e5: or     eax,0x10
0x140ec40e8: bts    eax,0x9
0x140ec40ec: or     eax,0x1
0x140ec40ef: bts    eax,0x8
0x140ec40f3: mov    DWORD PTR [rsi+0x48],eax
0x140ec40f6: mov    QWORD PTR [rsi+0x74],rcx
0x140ec40fa: mov    DWORD PTR [rsi+0x7c],ecx
0x140ec40fd: mov    DWORD PTR [rsi+0x80],r13d
0x140ec4104: mov    rax,QWORD PTR [rbp-0x70]
0x140ec4108: mov    DWORD PTR [rsi+0x84],eax
0x140ec410e: mov    DWORD PTR [rsi+0x88],r14d
0x140ec4115: xor    r13d,r13d
0x140ec4118: mov    QWORD PTR [rsi+0x8c],r13
0x140ec411f: mov    DWORD PTR [rsi+0x94],r13d
0x140ec4126: mov    DWORD PTR [rsi+0x50],r13d
0x140ec412a: mov    rax,QWORD PTR [r12+0x98]
0x140ec4132: mov    ecx,DWORD PTR [rax+0x1c]
0x140ec4135: mov    DWORD PTR [rsi+0x60],ecx
0x140ec4138: mov    rcx,r15
0x140ec413b: call   0x141377450
0x140ec4140: mov    eax,DWORD PTR [r15+0x110]
0x140ec4147: btr    eax,0xf
0x140ec414b: bts    eax,0x10
0x140ec414f: mov    DWORD PTR [r15+0x110],eax
0x140ec4156: mov    eax,0xffff8ad0
0x140ec415b: mov    DWORD PTR [r15+0x4cc],0x8ad08ad0
0x140ec4166: mov    WORD PTR [r15+0x4d0],ax
0x140ec416e: mov    r10d,DWORD PTR [r15+0x4d4]
0x140ec4175: cmp    r10d,0xffffffff
0x140ec4179: je     0x140ec41ed
0x140ec417f: mov    rax,QWORD PTR [rip+0x1543752]        # 0x1424078d8
0x140ec4186: mov    rsi,QWORD PTR [rip+0x1543743]        # 0x1424078d0
0x140ec418d: sub    rax,rsi
0x140ec4190: sar    rax,0x3
0x140ec4194: test   eax,eax
0x140ec4196: je     0x140ec41e2
0x140ec4198: sub    eax,0x1
0x140ec419b: mov    ecx,r13d
0x140ec419e: js     0x140ec41c6
0x140ec41a0: mov    r11d,eax
0x140ec41a3: lea    edx,[rcx+rax*1]
0x140ec41a6: sar    edx,1
0x140ec41a8: movsxd rax,edx
0x140ec41ab: mov    r9,QWORD PTR [rsi+rax*8]
0x140ec41af: cmp    DWORD PTR [r9+0x1c],r10d
0x140ec41b3: je     0x140ec41c9
0x140ec41b5: lea    eax,[rdx+0x1]
0x140ec41b8: cmovle ecx,eax
0x140ec41bb: lea    eax,[rdx-0x1]
0x140ec41be: cmovle eax,r11d
0x140ec41c2: cmp    ecx,eax
0x140ec41c4: jle    0x140ec41a0
0x140ec41c6: mov    r9,r13
0x140ec41c9: test   r9,r9
0x140ec41cc: je     0x140ec41e2
0x140ec41ce: mov    r8d,DWORD PTR [r15+0x130]
0x140ec41d5: mov    edx,0x3a
0x140ec41da: mov    rcx,r9
0x140ec41dd: call   0x140cc9110
0x140ec41e2: mov    DWORD PTR [r15+0x4d4],0xffffffff
0x140ec41ed: mov    BYTE PTR [r15+0x4c4],r13b
0x140ec41f4: mov    DWORD PTR [r15+0x4c8],r13d
0x140ec41fb: mov    rcx,r15
0x140ec41fe: call   0x141367440
0x140ec4203: mov    rcx,r15
0x140ec4206: call   0x141367650
0x140ec420b: test   DWORD PTR [r15+0x118],0x100000
0x140ec4216: je     0x140ec4220
0x140ec4218: mov    rcx,r15
0x140ec421b: call   0x1413678d0
0x140ec4220: test   DWORD PTR [r15+0x118],0x80000
0x140ec422b: je     0x140ec4235
0x140ec422d: mov    rcx,r15
0x140ec4230: call   0x1413679f0
0x140ec4235: mov    r14d,DWORD PTR [rbp-0x50]
0x140ec4239: neg    r14d
0x140ec423c: cmovs  r14d,DWORD PTR [rbp-0x50]
0x140ec4241: mov    edx,0x2710
0x140ec4246: mov    r13d,DWORD PTR [rbp-0x58]
0x140ec424a: cmp    r14d,edx
0x140ec424d: jge    0x140ec426d
0x140ec424f: mov    eax,r13d
0x140ec4252: neg    eax
0x140ec4254: cmovs  eax,r13d
0x140ec4258: cmp    eax,edx
0x140ec425a: jge    0x140ec426d
0x140ec425c: mov    eax,DWORD PTR [rbp-0x68]
0x140ec425f: neg    eax
0x140ec4261: cmovs  eax,DWORD PTR [rbp-0x68]
0x140ec4265: cmp    eax,edx
0x140ec4267: jl     0x140ec3d2a
0x140ec426d: mov    ecx,0xa0
0x140ec4272: call   0x1415530e0
0x140ec4277: mov    rsi,rax
0x140ec427a: mov    QWORD PTR [rbp+0x78],rax
0x140ec427e: xor    edx,edx
0x140ec4280: mov    rcx,rax
0x140ec4283: call   0x140ebf110
0x140ec4288: lea    rax,[rip+0x7b4191]        # 0x141678420
0x140ec428f: mov    QWORD PTR [rsi],rax
0x140ec4292: movzx  edx,WORD PTR [rsp+0x68]
0x140ec4297: mov    WORD PTR [rsi+0x20],dx
0x140ec429b: movzx  r8d,WORD PTR [rsp+0x62]
0x140ec42a1: mov    WORD PTR [rsi+0x22],r8w
0x140ec42a6: movzx  eax,WORD PTR [rsp+0x64]
0x140ec42ab: mov    WORD PTR [rsi+0x24],ax
0x140ec42af: mov    WORD PTR [rsi+0x32],dx
0x140ec42b3: mov    WORD PTR [rsi+0x34],r8w
0x140ec42b8: mov    WORD PTR [rsi+0x36],ax
0x140ec42bc: mov    WORD PTR [rsi+0x26],dx
0x140ec42c0: mov    WORD PTR [rsi+0x28],r8w
0x140ec42c5: mov    WORD PTR [rsi+0x2a],ax
0x140ec42c9: xor    ecx,ecx
0x140ec42cb: mov    DWORD PTR [rsi+0x38],ecx
0x140ec42ce: mov    QWORD PTR [rsi+0x3c],0x1
0x140ec42d6: mov    DWORD PTR [rsi+0x44],ecx
0x140ec42d9: mov    WORD PTR [rsi+0x2c],dx
0x140ec42dd: mov    WORD PTR [rsi+0x2e],r8w
0x140ec42e2: mov    WORD PTR [rsi+0x30],ax
0x140ec42e6: mov    rax,QWORD PTR [r12+0x98]
0x140ec42ee: mov    QWORD PTR [rsi+0x98],rax
0x140ec42f5: mov    QWORD PTR [rsi+0x18],rcx
0x140ec42f9: mov    DWORD PTR [rsi+0x4c],ecx
0x140ec42fc: mov    eax,r13d
0x140ec42ff: neg    eax
0x140ec4301: cmovs  eax,r13d
0x140ec4305: mov    ecx,DWORD PTR [rbp-0x68]
0x140ec4308: neg    ecx
0x140ec430a: cmovs  ecx,DWORD PTR [rbp-0x68]
0x140ec430e: cmp    r14d,eax
0x140ec4311: cmovl  r14d,eax
0x140ec4315: cmp    r14d,ecx
0x140ec4318: cmovl  r14d,ecx
0x140ec431c: mov    eax,0x1b4e81b5
0x140ec4321: imul   r14d
0x140ec4324: sar    edx,0x5
0x140ec4327: mov    eax,edx
0x140ec4329: shr    eax,0x1f
0x140ec432c: add    edx,eax
0x140ec432e: mov    DWORD PTR [rsi+0x58],edx
0x140ec4331: mov    eax,DWORD PTR [rsi+0x48]
0x140ec4334: or     eax,0x10
0x140ec4337: bts    eax,0xa
0x140ec433b: mov    DWORD PTR [rsi+0x48],eax
0x140ec433e: call   0x140ece790
0x140ec4343: mov    r8d,eax
0x140ec4346: mov    eax,0x3
0x140ec434b: mul    r8d
0x140ec434e: mov    ecx,r8d
0x140ec4351: sub    ecx,edx
0x140ec4353: shr    ecx,1
0x140ec4355: add    ecx,edx
0x140ec4357: shr    ecx,0x1e
0x140ec435a: imul   ecx,ecx,0x80000001
0x140ec4360: add    r8d,ecx
0x140ec4363: mov    eax,0x2bfffffd
0x140ec4368: mul    r8d
0x140ec436b: shr    edx,0x19
0x140ec436e: lea    rcx,[rsi+0x50]
0x140ec4372: mov    DWORD PTR [rcx],edx
0x140ec4374: xor    r8d,r8d
0x140ec4377: mov    rdx,QWORD PTR [r12+0x98]
0x140ec437f: call   0x141380430
0x140ec4384: or     DWORD PTR [rsi+0x48],0x4000
0x140ec438b: xor    r9d,r9d
0x140ec438e: mov    r8,rsi
0x140ec4391: mov    rdx,r15
0x140ec4394: xor    ecx,ecx
0x140ec4396: call   0x140663940
0x140ec439b: and    DWORD PTR [rsi+0x48],0xffffbfff
0x140ec43a2: test   BYTE PTR [r15+0x110],0x2
0x140ec43aa: je     0x140ec43bf
0x140ec43ac: mov    r8d,0x33
0x140ec43b2: xor    r9d,r9d
0x140ec43b5: xor    edx,edx
0x140ec43b7: mov    rcx,r15
0x140ec43ba: call   0x140aa52c0
0x140ec43bf: mov    QWORD PTR [rsi+0x98],0x0
0x140ec43ca: mov    rax,QWORD PTR [rsi]
0x140ec43cd: mov    edx,0x1
0x140ec43d2: mov    rcx,rsi
0x140ec43d5: call   QWORD PTR [rax+0x40]
0x140ec43d8: jmp    0x140ec3d2a
0x140ec43dd: mov    r8d,r13d
0x140ec43e0: movzx  edx,BYTE PTR [rsp+0x60]
0x140ec43e5: mov    esi,DWORD PTR [rsp+0x6c]
0x140ec43e9: add    rbx,0x8
0x140ec43ed: movzx  r15d,WORD PTR [rsp+0x64]
0x140ec43f3: jmp    0x140ec2f8e
0x140ec43f8: xor    al,al
0x140ec43fa: test   al,al
0x140ec43fc: je     0x140ec4405
0x140ec43fe: mov    ecx,0x15a3
0x140ec4403: jmp    0x140ec4445
0x140ec4405: mov    r8d,ebx
0x140ec4408: movzx  edx,di
0x140ec440b: lea    rcx,[rip+0x152f55e]        # 0x1423f3970
0x140ec4412: call   0x1414c6fe0
0x140ec4417: test   rax,rax
0x140ec441a: je     0x140ec4440
0x140ec441c: cmp    DWORD PTR [rax+0x298],0x0
0x140ec4423: jle    0x140ec4435
0x140ec4425: mov    rax,QWORD PTR [rax+0x290]
0x140ec442c: test   BYTE PTR [rax],0x1
0x140ec442f: je     0x140ec4435
0x140ec4431: mov    al,0x1
0x140ec4433: jmp    0x140ec4437
0x140ec4435: xor    al,al
0x140ec4437: test   al,al
0x140ec4439: mov    ecx,0x15a0
0x140ec443e: jne    0x140ec4445
0x140ec4440: mov    ecx,0x15a6
0x140ec4445: call   0x1407fdb30
0x140ec444a: test   sil,sil
0x140ec444d: je     0x140ec4458
0x140ec444f: test   r13b,r13b
0x140ec4452: je     0x140ec4cd4
0x140ec4458: movzx  edx,BYTE PTR [rsp+0x60]
0x140ec445d: movzx  ebx,WORD PTR [rsp+0x62]
0x140ec4462: movzx  esi,WORD PTR [rsp+0x68]
0x140ec4467: mov    rcx,QWORD PTR [r12+0x98]
0x140ec446f: test   dl,dl
0x140ec4471: je     0x140ec4a0a
0x140ec4477: mov    WORD PTR [r12+0x2c],si
0x140ec447d: mov    WORD PTR [r12+0x2e],bx
0x140ec4483: mov    WORD PTR [r12+0x30],r15w
0x140ec4489: mov    WORD PTR [rcx+0x8],si
0x140ec448d: mov    rcx,QWORD PTR [r12+0x98]
0x140ec4495: movzx  eax,WORD PTR [r12+0x2e]
0x140ec449b: mov    WORD PTR [rcx+0xa],ax
0x140ec449f: mov    rcx,QWORD PTR [r12+0x98]
0x140ec44a7: movzx  eax,WORD PTR [r12+0x30]
0x140ec44ad: mov    WORD PTR [rcx+0xc],ax
0x140ec44b1: mov    rcx,QWORD PTR [r12+0x98]
0x140ec44b9: test   BYTE PTR [rcx+0x10],0x40
0x140ec44bd: jne    0x140ec44c5
0x140ec44bf: test   BYTE PTR [rcx+0x14],0x1
0x140ec44c3: je     0x140ec450e
0x140ec44c5: mov    eax,DWORD PTR [rbp-0x4c]
0x140ec44c8: mov    DWORD PTR [rsp+0x48],eax
0x140ec44cc: mov    eax,DWORD PTR [rbp-0x48]
0x140ec44cf: mov    DWORD PTR [rsp+0x40],eax
0x140ec44d3: mov    eax,DWORD PTR [rbp-0x44]
0x140ec44d6: mov    DWORD PTR [rsp+0x38],eax
0x140ec44da: mov    eax,DWORD PTR [r12+0x88]
0x140ec44e2: mov    DWORD PTR [rsp+0x30],eax
0x140ec44e6: mov    eax,DWORD PTR [r12+0x84]
0x140ec44ee: mov    DWORD PTR [rsp+0x28],eax
0x140ec44f2: mov    eax,DWORD PTR [r12+0x80]
0x140ec44fa: mov    DWORD PTR [rsp+0x20],eax
0x140ec44fe: movzx  r9d,r15w
0x140ec4502: movzx  r8d,bx
0x140ec4506: movzx  edx,si
0x140ec4509: call   0x140ce0510
0x140ec450e: movzx  r9d,WORD PTR [r12+0x36]
0x140ec4514: movzx  r8d,WORD PTR [r12+0x34]
0x140ec451a: movzx  edx,WORD PTR [r12+0x32]
0x140ec4520: lea    rcx,[rip+0x152f449]        # 0x1423f3970
0x140ec4527: call   0x140142fc0
0x140ec452c: cmp    al,0x3
0x140ec452e: jg     0x140ec496a
0x140ec4534: mov    edi,DWORD PTR [rip+0x164602a]        # 0x14250a564
0x140ec453a: mov    r11d,DWORD PTR [rip+0x164601f]        # 0x14250a560
0x140ec4541: mov    r10d,DWORD PTR [rip+0x1646014]        # 0x14250a55c
0x140ec4548: mov    r9,QWORD PTR [rip+0x1645fd9]        # 0x14250a528
0x140ec454f: test   si,si
0x140ec4552: js     0x140ec4635
0x140ec4558: movsx  eax,si
0x140ec455b: cmp    eax,r10d
0x140ec455e: jge    0x140ec4635
0x140ec4564: test   bx,bx
0x140ec4567: js     0x140ec4635
0x140ec456d: movsx  eax,bx
0x140ec4570: cmp    eax,r11d
0x140ec4573: jge    0x140ec4635
0x140ec4579: test   r15w,r15w
0x140ec457d: js     0x140ec4635
0x140ec4583: movsx  eax,r15w
0x140ec4587: cmp    eax,edi
0x140ec4589: jge    0x140ec4635
0x140ec458f: test   r9,r9
0x140ec4592: je     0x140ec4635
0x140ec4598: movsx  rax,si
0x140ec459c: sar    rax,0x4
0x140ec45a0: movsx  rdx,bx
0x140ec45a4: sar    rdx,0x4
0x140ec45a8: mov    rax,QWORD PTR [r9+rax*8]
0x140ec45ac: movsx  rcx,r15w
0x140ec45b0: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec45b4: mov    rdx,QWORD PTR [rax+rcx*8]
0x140ec45b8: test   rdx,rdx
0x140ec45bb: je     0x140ec4635
0x140ec45c1: movsx  eax,si
0x140ec45c4: and    eax,0x8000000f
0x140ec45c9: jge    0x140ec45d2
0x140ec45cb: dec    eax
0x140ec45cd: or     eax,0xfffffff0
0x140ec45d0: inc    eax
0x140ec45d2: movsx  r8,ax
0x140ec45d6: shl    r8,0x4
0x140ec45da: movsx  eax,bx
0x140ec45dd: and    eax,0x8000000f
0x140ec45e2: jge    0x140ec45eb
0x140ec45e4: dec    eax
0x140ec45e6: or     eax,0xfffffff0
0x140ec45e9: inc    eax
0x140ec45eb: movsx  rax,ax
0x140ec45ef: add    r8,rax
0x140ec45f2: mov    r8d,DWORD PTR [rdx+r8*4+0x2a0]
0x140ec45fa: mov    eax,r8d
0x140ec45fd: and    eax,0x200000
0x140ec4602: mov    DWORD PTR [rbp-0x30],eax
0x140ec4605: movzx  eax,r8b
0x140ec4609: and    al,0x1
0x140ec460b: movzx  edx,al
0x140ec460e: lea    eax,[rdx+0x2]
0x140ec4611: movzx  eax,al
0x140ec4614: test   r8b,0x2
0x140ec4618: cmove  eax,edx
0x140ec461b: mov    DWORD PTR [rbp-0x80],eax
0x140ec461e: test   r8b,0x4
0x140ec4622: je     0x140ec4638
0x140ec4624: add    al,0x4
0x140ec4626: mov    DWORD PTR [rbp-0x80],eax
0x140ec4629: jmp    0x140ec4638
0x140ec462b: movzx  edx,BYTE PTR [rsp+0x60]
0x140ec4630: jmp    0x140ec4467
0x140ec4635: mov    eax,DWORD PTR [rbp-0x80]
0x140ec4638: mov    ecx,DWORD PTR [rbp-0x30]
0x140ec463b: cmp    ecx,0x200000
0x140ec4641: jne    0x140ec4873
0x140ec4647: cmp    al,0x5
0x140ec4649: jl     0x140ec496a
0x140ec464f: mov    rbx,QWORD PTR [r12+0x98]
0x140ec4657: test   DWORD PTR [rbx+0x10],0x20000000
0x140ec465e: jne    0x140ec4683
0x140ec4660: mov    rcx,rbx
0x140ec4663: call   0x140c7dc00
0x140ec4668: mov    edi,DWORD PTR [rip+0x1645ef6]        # 0x14250a564
0x140ec466e: mov    r11d,DWORD PTR [rip+0x1645eeb]        # 0x14250a560
0x140ec4675: mov    r10d,DWORD PTR [rip+0x1645ee0]        # 0x14250a55c
0x140ec467c: mov    r9,QWORD PTR [rip+0x1645ea5]        # 0x14250a528
0x140ec4683: mov    r8d,DWORD PTR [rbx+0x74]
0x140ec4687: mov    eax,0x2710
0x140ec468c: cmp    r8d,eax
0x140ec468f: cmovge r8d,eax
0x140ec4693: mov    eax,DWORD PTR [r12+0x84]
0x140ec469b: neg    eax
0x140ec469d: cmovs  eax,DWORD PTR [r12+0x84]
0x140ec46a6: mov    edx,DWORD PTR [r12+0x88]
0x140ec46ae: neg    edx
0x140ec46b0: cmovs  edx,DWORD PTR [r12+0x88]
0x140ec46b9: mov    ecx,DWORD PTR [r12+0x80]
0x140ec46c1: neg    ecx
0x140ec46c3: cmovs  ecx,DWORD PTR [r12+0x80]
0x140ec46cc: cmp    ecx,eax
0x140ec46ce: cmovl  ecx,eax
0x140ec46d1: cmp    ecx,edx
0x140ec46d3: cmovl  ecx,edx
0x140ec46d6: mov    eax,0x51eb851f
0x140ec46db: imul   ecx
0x140ec46dd: sar    edx,0x5
0x140ec46e0: mov    eax,edx
0x140ec46e2: shr    eax,0x1f
0x140ec46e5: add    edx,eax
0x140ec46e7: cmp    edx,0x1
0x140ec46ea: jge    0x140ec46f3
0x140ec46ec: mov    edx,0x1
0x140ec46f1: jmp    0x140ec46fd
0x140ec46f3: mov    eax,0x7d0
0x140ec46f8: cmp    edx,eax
0x140ec46fa: cmovg  edx,eax
0x140ec46fd: imul   edx,r8d
0x140ec4701: mov    eax,0x68db8bad
0x140ec4706: imul   edx
0x140ec4708: mov    ebx,edx
0x140ec470a: sar    ebx,0xb
0x140ec470d: mov    eax,ebx
0x140ec470f: shr    eax,0x1f
0x140ec4712: add    ebx,eax
0x140ec4714: cmp    ebx,0x1
0x140ec4717: jl     0x140ec496a
0x140ec471d: cmp    ebx,0x64
0x140ec4720: jle    0x140ec472d
0x140ec4722: mov    r14d,0x64
0x140ec4728: mov    ebx,r14d
0x140ec472b: jmp    0x140ec473c
0x140ec472d: cmp    ebx,0x1
0x140ec4730: jle    0x140ec496a
0x140ec4736: mov    r14d,0x64
0x140ec473c: movsx  rcx,WORD PTR [r12+0x36]
0x140ec4742: movsx  rdx,WORD PTR [r12+0x34]
0x140ec4748: movsx  r8,WORD PTR [r12+0x32]
0x140ec474e: test   r8w,r8w
0x140ec4752: js     0x140ec4793
0x140ec4754: cmp    r8d,r10d
0x140ec4757: jge    0x140ec4793
0x140ec4759: test   dx,dx
0x140ec475c: js     0x140ec4793
0x140ec475e: cmp    edx,r11d
0x140ec4761: jge    0x140ec4793
0x140ec4763: test   cx,cx
0x140ec4766: js     0x140ec4793
0x140ec4768: cmp    ecx,edi
0x140ec476a: jge    0x140ec4793
0x140ec476c: test   r9,r9
0x140ec476f: je     0x140ec4793
0x140ec4771: mov    rax,r8
0x140ec4774: sar    rax,0x4
0x140ec4778: sar    rdx,0x4
0x140ec477c: mov    rax,QWORD PTR [r9+rax*8]
0x140ec4780: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec4784: mov    rdx,QWORD PTR [rax+rcx*8]
0x140ec4788: test   rdx,rdx
0x140ec478b: je     0x140ec4793
0x140ec478d: add    rdx,0x68
0x140ec4791: jmp    0x140ec479a
0x140ec4793: lea    rdx,[rip+0x1663dee]        # 0x142528588
0x140ec479a: mov    rax,QWORD PTR [rdx]
0x140ec479d: mov    rdx,QWORD PTR [rdx+0x8]
0x140ec47a1: sub    rdx,rax
0x140ec47a4: sar    rdx,0x3
0x140ec47a8: sub    edx,0x1
0x140ec47ab: js     0x140ec4820
0x140ec47b1: movsxd r8,edx
0x140ec47b4: lea    r9,[rax+r8*8]
0x140ec47b8: nop    DWORD PTR [rax+rax*1+0x0]
0x140ec47c0: mov    rcx,QWORD PTR [r9]
0x140ec47c3: test   BYTE PTR [rcx+0x17],0x1
0x140ec47c7: jne    0x140ec47fc
0x140ec47c9: movzx  eax,WORD PTR [r12+0x32]
0x140ec47cf: cmp    WORD PTR [rcx+0xa],ax
0x140ec47d3: jne    0x140ec47fc
0x140ec47d5: movzx  eax,WORD PTR [r12+0x34]
0x140ec47db: cmp    WORD PTR [rcx+0xc],ax
0x140ec47df: jne    0x140ec47fc
0x140ec47e1: movzx  eax,WORD PTR [r12+0x36]
0x140ec47e7: cmp    WORD PTR [rcx+0xe],ax
0x140ec47eb: jne    0x140ec47fc
0x140ec47ed: movzx  eax,WORD PTR [rcx]
0x140ec47f0: cmp    ax,0x4
0x140ec47f4: je     0x140ec480a
0x140ec47f6: cmp    ax,0xb
0x140ec47fa: je     0x140ec4820
0x140ec47fc: dec    edx
0x140ec47fe: sub    r9,0x8
0x140ec4802: sub    r8,0x1
0x140ec4806: jns    0x140ec47c0
0x140ec4808: jmp    0x140ec4820
0x140ec480a: movzx  eax,bx
0x140ec480d: add    ax,WORD PTR [rcx+0x8]
0x140ec4811: mov    WORD PTR [rcx+0x8],ax
0x140ec4815: cmp    ax,0x64
0x140ec4819: jle    0x140ec4820
0x140ec481b: mov    WORD PTR [rcx+0x8],r14w
0x140ec4820: cmp    edx,0xffffffff
0x140ec4823: jne    0x140ec496a
0x140ec4829: movzx  r9d,WORD PTR [r12+0x36]
0x140ec482f: movzx  r8d,WORD PTR [r12+0x34]
0x140ec4835: movzx  edx,WORD PTR [r12+0x32]
0x140ec483b: lea    rcx,[rip+0x164a4e6]        # 0x14250ed28
0x140ec4842: call   0x140a6d290
0x140ec4847: mov    WORD PTR [rax],0x4
0x140ec484c: mov    WORD PTR [rax+0x8],bx
0x140ec4850: movzx  ecx,WORD PTR [r12+0x32]
0x140ec4856: mov    WORD PTR [rax+0xa],cx
0x140ec485a: movzx  ecx,WORD PTR [r12+0x34]
0x140ec4860: mov    WORD PTR [rax+0xc],cx
0x140ec4864: movzx  ecx,WORD PTR [r12+0x36]
0x140ec486a: mov    WORD PTR [rax+0xe],cx
0x140ec486e: jmp    0x140ec496a
0x140ec4873: test   ecx,ecx
0x140ec4875: jne    0x140ec496a
0x140ec487b: cmp    al,0x5
0x140ec487d: jl     0x140ec496a
0x140ec4883: mov    rbx,QWORD PTR [r12+0x98]
0x140ec488b: test   DWORD PTR [rbx+0x10],0x20000000
0x140ec4892: jne    0x140ec489c
0x140ec4894: mov    rcx,rbx
0x140ec4897: call   0x140c7dc00
0x140ec489c: mov    r8d,DWORD PTR [rbx+0x74]
0x140ec48a0: mov    r11d,0x2710
0x140ec48a6: cmp    r8d,r11d
0x140ec48a9: cmovge r8d,r11d
0x140ec48ad: mov    eax,DWORD PTR [r12+0x84]
0x140ec48b5: neg    eax
0x140ec48b7: cmovs  eax,DWORD PTR [r12+0x84]
0x140ec48c0: mov    edx,DWORD PTR [r12+0x88]
0x140ec48c8: neg    edx
0x140ec48ca: cmovs  edx,DWORD PTR [r12+0x88]
0x140ec48d3: mov    ecx,DWORD PTR [r12+0x80]
0x140ec48db: neg    ecx
0x140ec48dd: cmovs  ecx,DWORD PTR [r12+0x80]
0x140ec48e6: cmp    ecx,eax
0x140ec48e8: cmovl  ecx,eax
0x140ec48eb: cmp    ecx,edx
0x140ec48ed: cmovl  ecx,edx
0x140ec48f0: mov    eax,0x51eb851f
0x140ec48f5: imul   ecx
0x140ec48f7: sar    edx,0x5
0x140ec48fa: mov    eax,edx
0x140ec48fc: shr    eax,0x1f
0x140ec48ff: add    edx,eax
0x140ec4901: cmp    edx,0x1
0x140ec4904: jge    0x140ec490d
0x140ec4906: mov    edx,0x1
0x140ec490b: jmp    0x140ec4917
0x140ec490d: mov    eax,0x7d0
0x140ec4912: cmp    edx,eax
0x140ec4914: cmovg  edx,eax
0x140ec4917: imul   edx,r8d
0x140ec491b: mov    eax,0x10624dd3
0x140ec4920: imul   edx
0x140ec4922: sar    edx,0x6
0x140ec4925: mov    eax,edx
0x140ec4927: shr    eax,0x1f
0x140ec492a: add    edx,eax
0x140ec492c: cmp    edx,0x1
0x140ec492f: jl     0x140ec496a
0x140ec4931: cmp    edx,0x64
0x140ec4934: jle    0x140ec493d
0x140ec4936: mov    edx,0x64
0x140ec493b: jmp    0x140ec4942
0x140ec493d: cmp    edx,0x1
0x140ec4940: jle    0x140ec496a
0x140ec4942: mov    BYTE PTR [rsp+0x28],0x0
0x140ec4947: mov    WORD PTR [rsp+0x20],dx
0x140ec494c: movzx  r9d,WORD PTR [r12+0x36]
0x140ec4952: movzx  r8d,WORD PTR [r12+0x34]
0x140ec4958: movzx  edx,WORD PTR [r12+0x32]
0x140ec495e: lea    rcx,[rip+0x152f00b]        # 0x1423f3970
0x140ec4965: call   0x14147d170
0x140ec496a: mov    rdi,QWORD PTR [r12+0x98]
0x140ec4972: test   BYTE PTR [rdi+0x14],0x1
0x140ec4976: mov    r14d,0x0
0x140ec497c: je     0x140ec1473
0x140ec4982: mov    rbx,QWORD PTR [rdi+0x38]
0x140ec4986: mov    rdi,QWORD PTR [rdi+0x40]
0x140ec498a: nop    WORD PTR [rax+rax*1+0x0]
0x140ec4990: cmp    rbx,rdi
0x140ec4993: mov    r14d,0x0
0x140ec4999: movzx  esi,WORD PTR [rsp+0x68]
0x140ec499e: jae    0x140ec1473
0x140ec49a4: mov    rcx,QWORD PTR [rbx]
0x140ec49a7: mov    rax,QWORD PTR [rcx]
0x140ec49aa: call   QWORD PTR [rax+0x10]
0x140ec49ad: cmp    eax,0x39
0x140ec49b0: jne    0x140ec4a04
0x140ec49b2: mov    rcx,QWORD PTR [rbx]
0x140ec49b5: mov    rax,QWORD PTR [rcx]
0x140ec49b8: call   QWORD PTR [rax+0x20]
0x140ec49bb: mov    rsi,rax
0x140ec49be: test   rax,rax
0x140ec49c1: je     0x140ec4a04
0x140ec49c3: movzx  r9d,WORD PTR [r12+0x30]
0x140ec49c9: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec49cf: movzx  edx,WORD PTR [r12+0x2c]
0x140ec49d5: mov    rcx,rax
0x140ec49d8: call   0x141402560
0x140ec49dd: movzx  ecx,WORD PTR [r12+0x2c]
0x140ec49e3: mov    WORD PTR [rsi+0xa8],cx
0x140ec49ea: movzx  ecx,WORD PTR [r12+0x2e]
0x140ec49f0: mov    WORD PTR [rsi+0xaa],cx
0x140ec49f7: movzx  ecx,WORD PTR [r12+0x30]
0x140ec49fd: mov    WORD PTR [rsi+0xac],cx
0x140ec4a04: add    rbx,0x8
0x140ec4a08: jmp    0x140ec4990
0x140ec4a0a: test   BYTE PTR [rcx+0x10],0x40
0x140ec4a0e: jne    0x140ec4a16
0x140ec4a10: test   BYTE PTR [rcx+0x14],0x1
0x140ec4a14: je     0x140ec4a66
0x140ec4a16: mov    eax,DWORD PTR [rbp-0x4c]
0x140ec4a19: mov    DWORD PTR [rsp+0x48],eax
0x140ec4a1d: mov    eax,DWORD PTR [rbp-0x48]
0x140ec4a20: mov    DWORD PTR [rsp+0x40],eax
0x140ec4a24: mov    eax,DWORD PTR [rbp-0x44]
0x140ec4a27: mov    DWORD PTR [rsp+0x38],eax
0x140ec4a2b: mov    eax,DWORD PTR [r12+0x88]
0x140ec4a33: mov    DWORD PTR [rsp+0x30],eax
0x140ec4a37: mov    eax,DWORD PTR [r12+0x84]
0x140ec4a3f: mov    DWORD PTR [rsp+0x28],eax
0x140ec4a43: mov    eax,DWORD PTR [r12+0x80]
0x140ec4a4b: mov    DWORD PTR [rsp+0x20],eax
0x140ec4a4f: movzx  r9d,WORD PTR [r12+0x30]
0x140ec4a55: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec4a5b: movzx  edx,WORD PTR [r12+0x2c]
0x140ec4a61: call   0x140ce0510
0x140ec4a66: movsx  r10,WORD PTR [r12+0x30]
0x140ec4a6c: movsx  r8,WORD PTR [r12+0x2e]
0x140ec4a72: movsx  r9,WORD PTR [r12+0x2c]
0x140ec4a78: test   r9w,r9w
0x140ec4a7c: js     0x140ec56c9
0x140ec4a82: cmp    r9d,DWORD PTR [rip+0x1645ad3]        # 0x14250a55c
0x140ec4a89: jge    0x140ec56c9
0x140ec4a8f: test   r8w,r8w
0x140ec4a93: js     0x140ec56c9
0x140ec4a99: cmp    r8d,DWORD PTR [rip+0x1645ac0]        # 0x14250a560
0x140ec4aa0: jge    0x140ec56c9
0x140ec4aa6: test   r10w,r10w
0x140ec4aaa: js     0x140ec56c9
0x140ec4ab0: cmp    r10d,DWORD PTR [rip+0x1645aad]        # 0x14250a564
0x140ec4ab7: jge    0x140ec56c9
0x140ec4abd: mov    rcx,QWORD PTR [rip+0x1645a64]        # 0x14250a528
0x140ec4ac4: test   rcx,rcx
0x140ec4ac7: je     0x140ec56c9
0x140ec4acd: mov    rax,r9
0x140ec4ad0: sar    rax,0x4
0x140ec4ad4: mov    rdx,r8
0x140ec4ad7: sar    rdx,0x4
0x140ec4adb: mov    rax,QWORD PTR [rcx+rax*8]
0x140ec4adf: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec4ae3: mov    rcx,QWORD PTR [rax+r10*8]
0x140ec4ae7: test   rcx,rcx
0x140ec4aea: je     0x140ec56c9
0x140ec4af0: and    r8d,0x8000000f
0x140ec4af7: jge    0x140ec4b03
0x140ec4af9: dec    r8d
0x140ec4afc: or     r8d,0xfffffff0
0x140ec4b00: inc    r8d
0x140ec4b03: mov    edx,r9d
0x140ec4b06: and    edx,0x8000000f
0x140ec4b0c: jge    0x140ec4b15
0x140ec4b0e: dec    edx
0x140ec4b10: or     edx,0xfffffff0
0x140ec4b13: inc    edx
0x140ec4b15: xor    r14d,r14d
0x140ec4b18: mov    DWORD PTR [rsp+0x38],r14d
0x140ec4b1d: mov    BYTE PTR [rsp+0x30],r14b
0x140ec4b22: mov    BYTE PTR [rsp+0x28],r14b
0x140ec4b27: mov    BYTE PTR [rsp+0x20],r14b
0x140ec4b2c: xor    r9d,r9d
0x140ec4b2f: call   0x14054e280
0x140ec4b34: test   al,al
0x140ec4b36: je     0x140ec56c9
0x140ec4b3c: movsx  r9,WORD PTR [r12+0x30]
0x140ec4b42: movsx  rbx,WORD PTR [r12+0x2e]
0x140ec4b48: movsx  rdi,WORD PTR [r12+0x2c]
0x140ec4b4e: test   di,di
0x140ec4b51: js     0x140ec56c9
0x140ec4b57: mov    r11d,DWORD PTR [rip+0x16459fe]        # 0x14250a55c
0x140ec4b5e: cmp    edi,r11d
0x140ec4b61: jge    0x140ec56c9
0x140ec4b67: test   bx,bx
0x140ec4b6a: js     0x140ec56c9
0x140ec4b70: mov    r10d,DWORD PTR [rip+0x16459e9]        # 0x14250a560
0x140ec4b77: cmp    ebx,r10d
0x140ec4b7a: jge    0x140ec56c9
0x140ec4b80: test   r9w,r9w
0x140ec4b84: jle    0x140ec56c9
0x140ec4b8a: lea    eax,[r9-0x1]
0x140ec4b8e: mov    r8d,DWORD PTR [rip+0x16459cf]        # 0x14250a564
0x140ec4b95: cmp    eax,r8d
0x140ec4b98: jge    0x140ec56c9
0x140ec4b9e: mov    rcx,QWORD PTR [rip+0x1645983]        # 0x14250a528
0x140ec4ba5: test   rcx,rcx
0x140ec4ba8: je     0x140ec56c9
0x140ec4bae: mov    rax,rdi
0x140ec4bb1: sar    rax,0x4
0x140ec4bb5: mov    rdx,rbx
0x140ec4bb8: sar    rdx,0x4
0x140ec4bbc: mov    rax,QWORD PTR [rcx+rax*8]
0x140ec4bc0: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec4bc4: cmp    QWORD PTR [rax+r9*8-0x8],r14
0x140ec4bc9: je     0x140ec56c9
0x140ec4bcf: dec    r9w
0x140ec4bd3: cmp    edi,r11d
0x140ec4bd6: jge    0x140ec56c9
0x140ec4bdc: cmp    ebx,r10d
0x140ec4bdf: jge    0x140ec56c9
0x140ec4be5: movsx  eax,r9w
0x140ec4be9: cmp    eax,r8d
0x140ec4bec: jge    0x140ec56c9
0x140ec4bf2: movzx  r8d,bx
0x140ec4bf6: movzx  edx,di
0x140ec4bf9: lea    rcx,[rip+0x152ed70]        # 0x1423f3970
0x140ec4c00: call   0x1414c3aa0
0x140ec4c05: test   al,al
0x140ec4c07: je     0x140ec56c9
0x140ec4c0d: movzx  edx,di
0x140ec4c10: lea    rcx,[rip+0x152ed59]        # 0x1423f3970
0x140ec4c17: call   0x140069640
0x140ec4c1c: and    eax,0x7
0x140ec4c1f: sub    eax,0x6
0x140ec4c22: je     0x140ec56c9
0x140ec4c28: cmp    eax,0x1
0x140ec4c2b: jne    0x140ec4c48
0x140ec4c2d: movzx  r8d,bx
0x140ec4c31: movzx  edx,di
0x140ec4c34: lea    rcx,[rip+0x154b74d]        # 0x142410388
0x140ec4c3b: call   0x1405c17f0
0x140ec4c40: test   al,al
0x140ec4c42: jne    0x140ec56c9
0x140ec4c48: call   0x140ece790
0x140ec4c4d: mov    ebx,eax
0x140ec4c4f: movzx  r9d,WORD PTR [r12+0x30]
0x140ec4c55: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec4c5b: movzx  edx,WORD PTR [r12+0x2c]
0x140ec4c61: lea    rcx,[rip+0x152ed08]        # 0x1423f3970
0x140ec4c68: call   0x1400695b0
0x140ec4c6d: movzx  ecx,ax
0x140ec4c70: call   0x140ebefe0
0x140ec4c75: mov    r8d,eax
0x140ec4c78: mov    eax,0x3
0x140ec4c7d: mul    ebx
0x140ec4c7f: mov    ecx,ebx
0x140ec4c81: sub    ecx,edx
0x140ec4c83: shr    ecx,1
0x140ec4c85: add    ecx,edx
0x140ec4c87: shr    ecx,0x1e
0x140ec4c8a: imul   ecx,ecx,0x7fffffff
0x140ec4c90: sub    ebx,ecx
0x140ec4c92: mov    eax,0xc7ffffaf
0x140ec4c97: mul    ebx
0x140ec4c99: shr    edx,0x18
0x140ec4c9c: cmp    edx,r8d
0x140ec4c9f: jge    0x140ec1473
0x140ec4ca5: mov    rax,QWORD PTR [r12]
0x140ec4ca9: xor    edx,edx
0x140ec4cab: mov    rcx,r12
0x140ec4cae: call   QWORD PTR [rax+0x8]
0x140ec4cb1: test   al,al
0x140ec4cb3: je     0x140ec5704
0x140ec4cb9: mov    BYTE PTR [rsp+0x28],r14b
0x140ec4cbe: jmp    0x140ec56de
0x140ec4cc3: mov    rax,QWORD PTR [r12]
0x140ec4cc7: xor    edx,edx
0x140ec4cc9: mov    rcx,r12
0x140ec4ccc: call   QWORD PTR [rax+0x8]
0x140ec4ccf: jmp    0x140ec5704
0x140ec4cd4: mov    rcx,QWORD PTR [r12+0x98]
0x140ec4cdc: test   BYTE PTR [rcx+0x10],0x40
0x140ec4ce0: jne    0x140ec4ce8
0x140ec4ce2: test   BYTE PTR [rcx+0x14],0x1
0x140ec4ce6: je     0x140ec4d4b
0x140ec4ce8: mov    eax,DWORD PTR [rbp-0x4c]
0x140ec4ceb: mov    DWORD PTR [rsp+0x48],eax
0x140ec4cef: mov    eax,DWORD PTR [rbp-0x48]
0x140ec4cf2: mov    DWORD PTR [rsp+0x40],eax
0x140ec4cf6: mov    eax,DWORD PTR [rbp-0x44]
0x140ec4cf9: mov    DWORD PTR [rsp+0x38],eax
0x140ec4cfd: mov    eax,DWORD PTR [r12+0x88]
0x140ec4d05: mov    DWORD PTR [rsp+0x30],eax
0x140ec4d09: mov    eax,DWORD PTR [r12+0x84]
0x140ec4d11: mov    DWORD PTR [rsp+0x28],eax
0x140ec4d15: mov    eax,DWORD PTR [r12+0x80]
0x140ec4d1d: mov    DWORD PTR [rsp+0x20],eax
0x140ec4d21: movzx  r9d,r15w
0x140ec4d25: movzx  r8d,WORD PTR [rsp+0x62]
0x140ec4d2b: movzx  edx,r14w
0x140ec4d2f: call   0x140ce0510
0x140ec4d34: xor    al,al
0x140ec4d36: jmp    0x140ec5706
0x140ec4d3b: movzx  eax,WORD PTR [rcx+0x4c]
0x140ec4d3f: test   ax,ax
0x140ec4d42: jle    0x140ec4d52
0x140ec4d44: dec    ax
0x140ec4d47: mov    WORD PTR [rcx+0x4c],ax
0x140ec4d4b: xor    al,al
0x140ec4d4d: jmp    0x140ec5706
0x140ec4d52: movzx  eax,WORD PTR [rcx+0x4e]
0x140ec4d56: mov    WORD PTR [rcx+0x4c],ax
0x140ec4d5a: mov    edx,DWORD PTR [rcx+0x38]
0x140ec4d5d: cmp    edx,DWORD PTR [rcx+0x3c]
0x140ec4d60: jge    0x140ec57e5
0x140ec4d66: movzx  r10d,WORD PTR [rcx+0x20]
0x140ec4d6b: movzx  ecx,WORD PTR [rcx+0x26]
0x140ec4d6f: cmp    r10w,cx
0x140ec4d73: jne    0x140ec4d95
0x140ec4d75: movzx  eax,WORD PTR [r12+0x28]
0x140ec4d7b: cmp    WORD PTR [r12+0x22],ax
0x140ec4d81: jne    0x140ec4d95
0x140ec4d83: movzx  eax,WORD PTR [r12+0x2a]
0x140ec4d89: cmp    WORD PTR [r12+0x24],ax
0x140ec4d8f: je     0x140ec57e5
0x140ec4d95: lea    eax,[rdx+0x1]
0x140ec4d98: mov    DWORD PTR [r12+0x38],eax
0x140ec4d9d: movzx  r9d,cx
0x140ec4da1: cmp    WORD PTR [r12+0x2c],cx
0x140ec4da7: jne    0x140ec4df1
0x140ec4da9: movzx  eax,WORD PTR [r12+0x28]
0x140ec4daf: cmp    WORD PTR [r12+0x2e],ax
0x140ec4db5: jne    0x140ec4df1
0x140ec4db7: movzx  edx,WORD PTR [r12+0x2a]
0x140ec4dbd: cmp    WORD PTR [r12+0x30],dx
0x140ec4dc3: jne    0x140ec4df1
0x140ec4dc5: add    r9w,r9w
0x140ec4dc9: sub    r9w,r10w
0x140ec4dcd: mov    WORD PTR [r12+0x26],r9w
0x140ec4dd3: add    ax,ax
0x140ec4dd6: sub    ax,WORD PTR [r12+0x22]
0x140ec4ddc: mov    WORD PTR [r12+0x28],ax
0x140ec4de2: add    dx,dx
0x140ec4de5: sub    dx,WORD PTR [r12+0x24]
0x140ec4deb: mov    WORD PTR [r12+0x2a],dx
0x140ec4df1: mov    BYTE PTR [rsp+0x48],0x0
0x140ec4df6: mov    DWORD PTR [rsp+0x40],0xffffffff
0x140ec4dfe: mov    BYTE PTR [rsp+0x38],0x1
0x140ec4e03: mov    BYTE PTR [rsp+0x30],0x0
0x140ec4e08: movzx  eax,WORD PTR [r12+0x2a]
0x140ec4e0e: mov    WORD PTR [rsp+0x28],ax
0x140ec4e13: movzx  eax,WORD PTR [r12+0x28]
0x140ec4e19: mov    WORD PTR [rsp+0x20],ax
0x140ec4e1e: movzx  r8d,WORD PTR [r12+0x24]
0x140ec4e24: movzx  edx,WORD PTR [r12+0x22]
0x140ec4e2a: movzx  ecx,r10w
0x140ec4e2e: call   0x140aa8e50
0x140ec4e33: movsxd rax,DWORD PTR [r12+0x38]
0x140ec4e38: cmp    eax,DWORD PTR [rip+0x128f042]        # 0x142153e80
0x140ec4e3e: jge    0x140ec57a5
0x140ec4e44: lea    rcx,[rax+rax*2]
0x140ec4e48: lea    r14,[rip+0xffffffffff13b1b1]        # 0x140000000
0x140ec4e4f: movsx  rsi,WORD PTR [r14+rcx*4+0x1bd5a80]
0x140ec4e58: movsx  rdi,WORD PTR [r14+rcx*4+0x1bd5a82]
0x140ec4e61: movsx  rbx,WORD PTR [r14+rcx*4+0x1bd5a84]
0x140ec4e6a: movzx  r9d,bx
0x140ec4e6e: movzx  r8d,di
0x140ec4e72: movzx  edx,si
0x140ec4e75: lea    rcx,[rip+0x152eaf4]        # 0x1423f3970
0x140ec4e7c: call   0x1414e2d40
0x140ec4e81: movzx  r15d,al
0x140ec4e85: movzx  r9d,WORD PTR [r12+0x30]
0x140ec4e8b: cmp    r9w,bx
0x140ec4e8f: je     0x140ec50c1
0x140ec4e95: test   al,al
0x140ec4e97: je     0x140ec56b9
0x140ec4e9d: movzx  edx,WORD PTR [r12+0x2c]
0x140ec4ea3: cmp    dx,si
0x140ec4ea6: jne    0x140ec4fba
0x140ec4eac: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec4eb2: cmp    r8w,di
0x140ec4eb6: jne    0x140ec4fba
0x140ec4ebc: cmp    r9w,bx
0x140ec4ec0: jge    0x140ec4f8b
0x140ec4ec6: test   si,si
0x140ec4ec9: js     0x140ec56b9
0x140ec4ecf: cmp    esi,DWORD PTR [rip+0x1645687]        # 0x14250a55c
0x140ec4ed5: jge    0x140ec56b9
0x140ec4edb: test   di,di
0x140ec4ede: js     0x140ec56b9
0x140ec4ee4: cmp    edi,DWORD PTR [rip+0x1645676]        # 0x14250a560
0x140ec4eea: jge    0x140ec56b9
0x140ec4ef0: test   bx,bx
0x140ec4ef3: js     0x140ec56b9
0x140ec4ef9: cmp    ebx,DWORD PTR [rip+0x1645665]        # 0x14250a564
0x140ec4eff: jge    0x140ec56b9
0x140ec4f05: mov    rcx,QWORD PTR [rip+0x164561c]        # 0x14250a528
0x140ec4f0c: test   rcx,rcx
0x140ec4f0f: je     0x140ec56b9
0x140ec4f15: mov    rax,rsi
0x140ec4f18: sar    rax,0x4
0x140ec4f1c: mov    rdx,rdi
0x140ec4f1f: sar    rdx,0x4
0x140ec4f23: mov    rax,QWORD PTR [rcx+rax*8]
0x140ec4f27: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec4f2b: mov    rcx,QWORD PTR [rax+rbx*8]
0x140ec4f2f: test   rcx,rcx
0x140ec4f32: je     0x140ec56b9
0x140ec4f38: mov    r8d,edi
0x140ec4f3b: and    r8d,0x8000000f
0x140ec4f42: jge    0x140ec4f4e
0x140ec4f44: dec    r8d
0x140ec4f47: or     r8d,0xfffffff0
0x140ec4f4b: inc    r8d
0x140ec4f4e: mov    edx,esi
0x140ec4f50: and    edx,0x8000000f
0x140ec4f56: jge    0x140ec4f5f
0x140ec4f58: dec    edx
0x140ec4f5a: or     edx,0xfffffff0
0x140ec4f5d: inc    edx
0x140ec4f5f: xor    r13d,r13d
0x140ec4f62: mov    DWORD PTR [rsp+0x38],r13d
0x140ec4f67: mov    BYTE PTR [rsp+0x30],r13b
0x140ec4f6c: mov    BYTE PTR [rsp+0x28],r13b
0x140ec4f71: mov    BYTE PTR [rsp+0x20],r13b
0x140ec4f76: mov    r9b,0x1
0x140ec4f79: call   0x14054e280
0x140ec4f7e: test   al,al
0x140ec4f80: jne    0x140ec529b
0x140ec4f86: jmp    0x140ec56b9
0x140ec4f8b: xor    r13d,r13d
0x140ec4f8e: mov    DWORD PTR [rsp+0x40],r13d
0x140ec4f93: mov    BYTE PTR [rsp+0x38],r13b
0x140ec4f98: mov    BYTE PTR [rsp+0x30],r13b
0x140ec4f9d: mov    BYTE PTR [rsp+0x28],r13b
0x140ec4fa2: mov    BYTE PTR [rsp+0x20],0x1
0x140ec4fa7: lea    rcx,[rip+0x152e9c2]        # 0x1423f3970
0x140ec4fae: call   0x141460470
0x140ec4fb3: test   al,al
0x140ec4fb5: jmp    0x140ec5295
0x140ec4fba: xor    r13d,r13d
0x140ec4fbd: movzx  r8d,di
0x140ec4fc1: movzx  edx,si
0x140ec4fc4: lea    rcx,[rip+0x152e9a5]        # 0x1423f3970
0x140ec4fcb: mov    DWORD PTR [rsp+0x40],r13d
0x140ec4fd0: mov    BYTE PTR [rsp+0x38],r13b
0x140ec4fd5: mov    BYTE PTR [rsp+0x30],r13b
0x140ec4fda: mov    BYTE PTR [rsp+0x28],r13b
0x140ec4fdf: mov    BYTE PTR [rsp+0x20],0x1
0x140ec4fe4: cmp    r9w,bx
0x140ec4fe8: jge    0x140ec5054
0x140ec4fea: movzx  r9d,bx
0x140ec4fee: call   0x141460470
0x140ec4ff3: test   al,al
0x140ec4ff5: je     0x140ec5018
0x140ec4ff7: movzx  r9d,WORD PTR [r12+0x30]
0x140ec4ffd: movzx  r8d,di
0x140ec5001: movzx  edx,si
0x140ec5004: lea    rcx,[rip+0x152e965]        # 0x1423f3970
0x140ec500b: call   0x1414e2d40
0x140ec5010: test   al,al
0x140ec5012: jne    0x140ec529b
0x140ec5018: mov    DWORD PTR [rsp+0x40],r13d
0x140ec501d: mov    BYTE PTR [rsp+0x38],r13b
0x140ec5022: mov    BYTE PTR [rsp+0x30],r13b
0x140ec5027: mov    BYTE PTR [rsp+0x28],r13b
0x140ec502c: mov    BYTE PTR [rsp+0x20],0x1
0x140ec5031: movzx  r9d,bx
0x140ec5035: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec503b: movzx  edx,WORD PTR [r12+0x2c]
0x140ec5041: lea    rcx,[rip+0x152e928]        # 0x1423f3970
0x140ec5048: call   0x141460470
0x140ec504d: test   al,al
0x140ec504f: jmp    0x140ec5295
0x140ec5054: call   0x141460470
0x140ec5059: test   al,al
0x140ec505b: jne    0x140ec529b
0x140ec5061: mov    DWORD PTR [rsp+0x40],r13d
0x140ec5066: mov    BYTE PTR [rsp+0x38],r13b
0x140ec506b: mov    BYTE PTR [rsp+0x30],r13b
0x140ec5070: mov    BYTE PTR [rsp+0x28],r13b
0x140ec5075: mov    BYTE PTR [rsp+0x20],0x1
0x140ec507a: movzx  r9d,WORD PTR [r12+0x30]
0x140ec5080: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec5086: movzx  edx,WORD PTR [r12+0x2c]
0x140ec508c: lea    rcx,[rip+0x152e8dd]        # 0x1423f3970
0x140ec5093: call   0x141460470
0x140ec5098: test   al,al
0x140ec509a: je     0x140ec56b9
0x140ec50a0: movzx  r9d,bx
0x140ec50a4: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec50aa: movzx  edx,WORD PTR [r12+0x2c]
0x140ec50b0: lea    rcx,[rip+0x152e8b9]        # 0x1423f3970
0x140ec50b7: call   0x1414e2d40
0x140ec50bc: jmp    0x140ec4f7e
0x140ec50c1: movzx  r9d,bx
0x140ec50c5: movzx  r8d,di
0x140ec50c9: movzx  edx,si
0x140ec50cc: lea    rcx,[rip+0x152e89d]        # 0x1423f3970
0x140ec50d3: call   0x1400695b0
0x140ec50d8: xor    r13d,r13d
0x140ec50db: test   ax,ax
0x140ec50de: je     0x140ec5292
0x140ec50e4: movzx  r8d,di
0x140ec50e8: movzx  edx,si
0x140ec50eb: lea    rcx,[rip+0x152e87e]        # 0x1423f3970
0x140ec50f2: call   0x1400695b0
0x140ec50f7: movzx  ecx,ax
0x140ec50fa: call   0x14024b500
0x140ec50ff: test   al,al
0x140ec5101: je     0x140ec5150
0x140ec5103: test   BYTE PTR [r12+0x48],0x10
0x140ec5109: je     0x140ec5150
0x140ec510b: mov    DWORD PTR [rsp+0x28],r13d
0x140ec5110: mov    BYTE PTR [rsp+0x20],0x1
0x140ec5115: movzx  r8d,di
0x140ec5119: movzx  edx,si
0x140ec511c: lea    rcx,[rip+0x152e84d]        # 0x1423f3970
0x140ec5123: call   0x1414dd810
0x140ec5128: movzx  r9d,bx
0x140ec512c: movzx  r8d,di
0x140ec5130: movzx  edx,si
0x140ec5133: lea    rcx,[rip+0x152e836]        # 0x1423f3970
0x140ec513a: call   0x14007f270
0x140ec513f: bt     eax,0xf
0x140ec5143: jb     0x140ec514b
0x140ec5145: inc    DWORD PTR [rip+0x14ee765]        # 0x1423b38b0
0x140ec514b: mov    r15b,0x1
0x140ec514e: jmp    0x140ec517e
0x140ec5150: movzx  r8d,di
0x140ec5154: movzx  edx,si
0x140ec5157: lea    rcx,[rip+0x152e812]        # 0x1423f3970
0x140ec515e: call   0x1400695b0
0x140ec5163: movzx  ecx,ax
0x140ec5166: call   0x14024b500
0x140ec516b: test   al,al
0x140ec516d: je     0x140ec517e
0x140ec516f: test   BYTE PTR [r12+0x48],0x8
0x140ec5175: mov    eax,0x1
0x140ec517a: cmovne r15d,eax
0x140ec517e: movzx  r9d,bx
0x140ec5182: movzx  r8d,di
0x140ec5186: movzx  edx,si
0x140ec5189: lea    rcx,[rip+0x152e7e0]        # 0x1423f3970
0x140ec5190: call   0x1400695b0
0x140ec5195: movzx  r9d,ax
0x140ec5199: cmp    r9d,0x164
0x140ec51a0: ja     0x140ec51be
0x140ec51a2: je     0x140ec51d1
0x140ec51a4: sub    r9d,0x41
0x140ec51a8: je     0x140ec51d1
0x140ec51aa: sub    r9d,0x101
0x140ec51b1: je     0x140ec51d1
0x140ec51b3: cmp    r9d,0x1
0x140ec51b7: je     0x140ec51d1
0x140ec51b9: jmp    0x140ec5292
0x140ec51be: sub    r9d,0x1b0
0x140ec51c5: je     0x140ec51d1
0x140ec51c7: cmp    r9d,0x3a
0x140ec51cb: jne    0x140ec5292
0x140ec51d1: cmp    DWORD PTR [r12+0x38],0x1
0x140ec51d7: jle    0x140ec529b
0x140ec51dd: mov    rcx,QWORD PTR [r12+0x98]
0x140ec51e5: mov    rax,QWORD PTR [rcx]
0x140ec51e8: call   QWORD PTR [rax]
0x140ec51ea: cmp    ax,0x27
0x140ec51ee: je     0x140ec523a
0x140ec51f0: mov    rcx,QWORD PTR [r12+0x98]
0x140ec51f8: mov    rax,QWORD PTR [rcx]
0x140ec51fb: call   QWORD PTR [rax]
0x140ec51fd: cmp    ax,0x41
0x140ec5201: je     0x140ec523a
0x140ec5203: mov    rcx,QWORD PTR [r12+0x98]
0x140ec520b: mov    rax,QWORD PTR [rcx]
0x140ec520e: call   QWORD PTR [rax]
0x140ec5210: cmp    ax,0x4c
0x140ec5214: je     0x140ec523a
0x140ec5216: mov    rcx,QWORD PTR [r12+0x98]
0x140ec521e: mov    rax,QWORD PTR [rcx]
0x140ec5221: call   QWORD PTR [rax]
0x140ec5223: cmp    ax,0x4
0x140ec5227: jne    0x140ec56b9
0x140ec522d: cmp    DWORD PTR [rip+0x9f9004],r13d        # 0x1418be238
0x140ec5234: jne    0x140ec56b9
0x140ec523a: mov    eax,DWORD PTR [r12+0x38]
0x140ec523f: lea    ebx,[rax+rax*4]
0x140ec5242: shl    ebx,0x2
0x140ec5245: cmp    ebx,0x64
0x140ec5248: jle    0x140ec5514
0x140ec524e: mov    ebx,0x64
0x140ec5253: call   0x140ece790
0x140ec5258: mov    r8d,eax
0x140ec525b: mov    eax,0x3
0x140ec5260: mul    r8d
0x140ec5263: mov    ecx,r8d
0x140ec5266: sub    ecx,edx
0x140ec5268: shr    ecx,1
0x140ec526a: add    ecx,edx
0x140ec526c: shr    ecx,0x1e
0x140ec526f: imul   ecx,ecx,0x7fffffff
0x140ec5275: sub    r8d,ecx
0x140ec5278: xor    edx,edx
0x140ec527a: mov    eax,0x7fffffff
0x140ec527f: div    ebx
0x140ec5281: lea    ecx,[rax+0x1]
0x140ec5284: xor    edx,edx
0x140ec5286: mov    eax,r8d
0x140ec5289: div    ecx
0x140ec528b: cmp    eax,DWORD PTR [r12+0x50]
0x140ec5290: jl     0x140ec529b
0x140ec5292: test   r15b,r15b
0x140ec5295: je     0x140ec56b9
0x140ec529b: movzx  eax,WORD PTR [r12+0x2c]
0x140ec52a1: mov    WORD PTR [r12+0x32],ax
0x140ec52a7: movzx  eax,WORD PTR [r12+0x2e]
0x140ec52ad: mov    WORD PTR [r12+0x34],ax
0x140ec52b3: movzx  eax,WORD PTR [r12+0x30]
0x140ec52b9: mov    WORD PTR [r12+0x36],ax
0x140ec52bf: movsxd rax,DWORD PTR [r12+0x38]
0x140ec52c4: lea    rcx,[rax+rax*2]
0x140ec52c8: movzx  edx,WORD PTR [r14+rcx*4+0x1bd5a80]
0x140ec52d1: mov    WORD PTR [r12+0x2c],dx
0x140ec52d7: movzx  eax,WORD PTR [r14+rcx*4+0x1bd5a82]
0x140ec52e0: mov    WORD PTR [r12+0x2e],ax
0x140ec52e6: movzx  eax,WORD PTR [r14+rcx*4+0x1bd5a84]
0x140ec52ef: mov    WORD PTR [r12+0x30],ax
0x140ec52f5: mov    rax,QWORD PTR [r12+0x98]
0x140ec52fd: mov    WORD PTR [rax+0x8],dx
0x140ec5301: mov    rcx,QWORD PTR [r12+0x98]
0x140ec5309: movzx  eax,WORD PTR [r12+0x2e]
0x140ec530f: mov    WORD PTR [rcx+0xa],ax
0x140ec5313: mov    rcx,QWORD PTR [r12+0x98]
0x140ec531b: movzx  eax,WORD PTR [r12+0x30]
0x140ec5321: mov    WORD PTR [rcx+0xc],ax
0x140ec5325: mov    eax,DWORD PTR [r12+0x40]
0x140ec532a: cmp    DWORD PTR [r12+0x38],eax
0x140ec532f: jl     0x140ec4d4b
0x140ec5335: cmp    eax,0xffffffff
0x140ec5338: je     0x140ec4d4b
0x140ec533e: test   BYTE PTR [r12+0x48],0x8
0x140ec5344: jne    0x140ec4d4b
0x140ec534a: movsx  r9,WORD PTR [r12+0x30]
0x140ec5350: movsx  rdi,WORD PTR [r12+0x2e]
0x140ec5356: movsx  rbx,WORD PTR [r12+0x2c]
0x140ec535c: movzx  r8d,di
0x140ec5360: movzx  edx,bx
0x140ec5363: lea    rcx,[rip+0x152e606]        # 0x1423f3970
0x140ec536a: call   0x140069640
0x140ec536f: test   al,0x8
0x140ec5371: jne    0x140ec5425
0x140ec5377: test   bx,bx
0x140ec537a: js     0x140ec4d4b
0x140ec5380: cmp    ebx,DWORD PTR [rip+0x16451d6]        # 0x14250a55c
0x140ec5386: jge    0x140ec4d4b
0x140ec538c: test   di,di
0x140ec538f: js     0x140ec4d4b
0x140ec5395: cmp    edi,DWORD PTR [rip+0x16451c5]        # 0x14250a560
0x140ec539b: jge    0x140ec4d4b
0x140ec53a1: test   r9w,r9w
0x140ec53a5: js     0x140ec4d4b
0x140ec53ab: cmp    r9d,DWORD PTR [rip+0x16451b2]        # 0x14250a564
0x140ec53b2: jge    0x140ec4d4b
0x140ec53b8: mov    rcx,QWORD PTR [rip+0x1645169]        # 0x14250a528
0x140ec53bf: test   rcx,rcx
0x140ec53c2: je     0x140ec4d4b
0x140ec53c8: mov    rax,rbx
0x140ec53cb: sar    rax,0x4
0x140ec53cf: mov    rdx,rdi
0x140ec53d2: sar    rdx,0x4
0x140ec53d6: mov    rax,QWORD PTR [rcx+rax*8]
0x140ec53da: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec53de: mov    rdx,QWORD PTR [rax+r9*8]
0x140ec53e2: test   rdx,rdx
0x140ec53e5: je     0x140ec4d4b
0x140ec53eb: mov    eax,ebx
0x140ec53ed: and    eax,0x8000000f
0x140ec53f2: jge    0x140ec53fb
0x140ec53f4: dec    eax
0x140ec53f6: or     eax,0xfffffff0
0x140ec53f9: inc    eax
0x140ec53fb: movsxd rcx,eax
0x140ec53fe: shl    rcx,0x4
0x140ec5402: mov    eax,edi
0x140ec5404: and    eax,0x8000000f
0x140ec5409: jge    0x140ec5412
0x140ec540b: dec    eax
0x140ec540d: or     eax,0xfffffff0
0x140ec5410: inc    eax
0x140ec5412: cdqe
0x140ec5414: add    rcx,rax
0x140ec5417: test   BYTE PTR [rdx+rcx*4+0x6a0],0x10
0x140ec541f: je     0x140ec4d4b
0x140ec5425: mov    rcx,QWORD PTR [r12+0x18]
0x140ec542a: test   rcx,rcx
0x140ec542d: je     0x140ec5434
0x140ec542f: call   0x1413e51b0
0x140ec5434: mov    r9d,DWORD PTR [r12+0x68]
0x140ec5439: cmp    r9d,0xffffffff
0x140ec543d: je     0x140ec556e
0x140ec5443: mov    rax,QWORD PTR [rip+0x15420ee]        # 0x142407538
0x140ec544a: mov    r11,QWORD PTR [rip+0x15420df]        # 0x142407530
0x140ec5451: sub    rax,r11
0x140ec5454: sar    rax,0x3
0x140ec5458: test   eax,eax
0x140ec545a: je     0x140ec556e
0x140ec5460: sub    eax,0x1
0x140ec5463: mov    ecx,r13d
0x140ec5466: js     0x140ec5499
0x140ec5468: nop    DWORD PTR [rax+rax*1+0x0]
0x140ec5470: mov    r10d,eax
0x140ec5473: lea    edx,[rcx+rax*1]
0x140ec5476: sar    edx,1
0x140ec5478: movsxd rax,edx
0x140ec547b: mov    rbx,QWORD PTR [r11+rax*8]
0x140ec547f: cmp    DWORD PTR [rbx+0x130],r9d
0x140ec5486: je     0x140ec549c
0x140ec5488: lea    eax,[rdx+0x1]
0x140ec548b: cmovle ecx,eax
0x140ec548e: lea    eax,[rdx-0x1]
0x140ec5491: cmovle eax,r10d
0x140ec5495: cmp    ecx,eax
0x140ec5497: jle    0x140ec5470
0x140ec5499: mov    rbx,r13
0x140ec549c: test   rbx,rbx
0x140ec549f: je     0x140ec556e
0x140ec54a5: test   DWORD PTR [rbx+0x110],0x2010002
0x140ec54af: jne    0x140ec556e
0x140ec54b5: movzx  r9d,WORD PTR [r12+0x30]
0x140ec54bb: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec54c1: movzx  edx,WORD PTR [r12+0x2c]
0x140ec54c7: mov    rcx,rbx
0x140ec54ca: call   0x14014f0c0
0x140ec54cf: test   al,al
0x140ec54d1: je     0x140ec556e
0x140ec54d7: test   BYTE PTR [r12+0x48],0x10
0x140ec54dd: je     0x140ec5525
0x140ec54df: call   0x140ece790
0x140ec54e4: mov    r8d,eax
0x140ec54e7: mov    eax,0x3
0x140ec54ec: mul    r8d
0x140ec54ef: mov    ecx,r8d
0x140ec54f2: sub    ecx,edx
0x140ec54f4: shr    ecx,1
0x140ec54f6: add    ecx,edx
0x140ec54f8: shr    ecx,0x1e
0x140ec54fb: imul   ecx,ecx,0x7fffffff
0x140ec5501: sub    r8d,ecx
0x140ec5504: mov    eax,0x1bffffff
0x140ec5509: mul    r8d
0x140ec550c: shr    edx,0x19
0x140ec550f: lea    edi,[rdx+0x1]
0x140ec5512: jmp    0x140ec552a
0x140ec5514: cmp    ebx,0x1
0x140ec5517: ja     0x140ec5253
0x140ec551d: mov    eax,r13d
0x140ec5520: jmp    0x140ec528b
0x140ec5525: mov    edi,0x1
0x140ec552a: and    DWORD PTR [r12+0x48],0xffffdfff
0x140ec5533: test   edi,edi
0x140ec5535: jle    0x140ec56a6
0x140ec553b: nop    DWORD PTR [rax+rax*1+0x0]
0x140ec5540: xor    r9d,r9d
0x140ec5543: mov    r8,r12
0x140ec5546: mov    rdx,rbx
0x140ec5549: xor    ecx,ecx
0x140ec554b: call   0x140663940
0x140ec5550: test   BYTE PTR [rbx+0x110],0x2
0x140ec5557: jne    0x140ec5566
0x140ec5559: inc    r13d
0x140ec555c: cmp    r13d,edi
0x140ec555f: jl     0x140ec5540
0x140ec5561: jmp    0x140ec56a6
0x140ec5566: mov    rcx,rbx
0x140ec5569: jmp    0x140ec5696
0x140ec556e: mov    rbx,QWORD PTR [rip+0x1541fd3]        # 0x142407548
0x140ec5575: mov    rdi,QWORD PTR [rip+0x1541fd4]        # 0x142407550
0x140ec557c: nop    DWORD PTR [rax+0x0]
0x140ec5580: cmp    rbx,rdi
0x140ec5583: jae    0x140ec4d4b
0x140ec5589: mov    rsi,QWORD PTR [rbx]
0x140ec558c: mov    eax,DWORD PTR [rsi+0x110]
0x140ec5592: test   al,0x2
0x140ec5594: jne    0x140ec560f
0x140ec5596: bt     eax,0xf
0x140ec559a: jae    0x140ec55ad
0x140ec559c: mov    ecx,DWORD PTR [r12+0x44]
0x140ec55a1: cmp    DWORD PTR [r12+0x38],ecx
0x140ec55a6: jl     0x140ec560f
0x140ec55a8: cmp    ecx,0xffffffff
0x140ec55ab: je     0x140ec560f
0x140ec55ad: test   eax,0x2010000
0x140ec55b2: jne    0x140ec560f
0x140ec55b4: test   BYTE PTR [r12+0x48],0x40
0x140ec55ba: jne    0x140ec55f1
0x140ec55bc: mov    rcx,QWORD PTR [r12+0x18]
0x140ec55c1: test   rcx,rcx
0x140ec55c4: je     0x140ec55f1
0x140ec55c6: mov    eax,DWORD PTR [r12+0x68]
0x140ec55cb: cmp    DWORD PTR [rsi+0x130],eax
0x140ec55d1: je     0x140ec55f1
0x140ec55d3: mov    rdx,rsi
0x140ec55d6: call   0x14140bba0
0x140ec55db: test   al,al
0x140ec55dd: jne    0x140ec55f1
0x140ec55df: mov    r8,rsi
0x140ec55e2: mov    rdx,QWORD PTR [r12+0x18]
0x140ec55e7: call   0x1414fbca0
0x140ec55ec: cmp    eax,0xffffffff
0x140ec55ef: je     0x140ec560f
0x140ec55f1: movzx  r9d,WORD PTR [r12+0x30]
0x140ec55f7: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec55fd: movzx  edx,WORD PTR [r12+0x2c]
0x140ec5603: mov    rcx,rsi
0x140ec5606: call   0x14014f0c0
0x140ec560b: test   al,al
0x140ec560d: jne    0x140ec5618
0x140ec560f: add    rbx,0x8
0x140ec5613: jmp    0x140ec5580
0x140ec5618: test   BYTE PTR [r12+0x48],0x10
0x140ec561e: je     0x140ec5655
0x140ec5620: call   0x140ece790
0x140ec5625: mov    r8d,eax
0x140ec5628: mov    eax,0x3
0x140ec562d: mul    r8d
0x140ec5630: mov    ecx,r8d
0x140ec5633: sub    ecx,edx
0x140ec5635: shr    ecx,1
0x140ec5637: add    ecx,edx
0x140ec5639: shr    ecx,0x1e
0x140ec563c: imul   ecx,ecx,0x7fffffff
0x140ec5642: sub    r8d,ecx
0x140ec5645: mov    eax,0x1bffffff
0x140ec564a: mul    r8d
0x140ec564d: shr    edx,0x19
0x140ec5650: lea    ebx,[rdx+0x1]
0x140ec5653: jmp    0x140ec565a
0x140ec5655: mov    ebx,0x1
0x140ec565a: and    DWORD PTR [r12+0x48],0xffffdfff
0x140ec5663: test   ebx,ebx
0x140ec5665: jle    0x140ec56a6
0x140ec5667: nop    WORD PTR [rax+rax*1+0x0]
0x140ec5670: xor    r9d,r9d
0x140ec5673: mov    r8,r12
0x140ec5676: mov    rdx,rsi
0x140ec5679: xor    ecx,ecx
0x140ec567b: call   0x140663940
0x140ec5680: test   BYTE PTR [rsi+0x110],0x2
0x140ec5687: jne    0x140ec5693
0x140ec5689: inc    r13d
0x140ec568c: cmp    r13d,ebx
0x140ec568f: jl     0x140ec5670
0x140ec5691: jmp    0x140ec56a6
0x140ec5693: mov    rcx,rsi
0x140ec5696: xor    r9d,r9d
0x140ec5699: mov    r8d,0x3
0x140ec569f: xor    edx,edx
0x140ec56a1: call   0x140aa52c0
0x140ec56a6: mov    eax,DWORD PTR [r12+0x48]
0x140ec56ab: bt     eax,0xd
0x140ec56af: jae    0x140ec4d4b
0x140ec56b5: test   al,0x10
0x140ec56b7: jne    0x140ec5736
0x140ec56b9: mov    rcx,r12
0x140ec56bc: call   0x140ebf240
0x140ec56c1: test   al,al
0x140ec56c3: jne    0x140ec4d4b
0x140ec56c9: mov    rax,QWORD PTR [r12]
0x140ec56cd: xor    edx,edx
0x140ec56cf: mov    rcx,r12
0x140ec56d2: call   QWORD PTR [rax+0x8]
0x140ec56d5: test   al,al
0x140ec56d7: je     0x140ec5704
0x140ec56d9: mov    BYTE PTR [rsp+0x28],0x0
0x140ec56de: movzx  r8d,WORD PTR [r12+0x2c]
0x140ec56e4: movzx  r9d,WORD PTR [r12+0x2e]
0x140ec56ea: movzx  eax,WORD PTR [r12+0x30]
0x140ec56f0: mov    WORD PTR [rsp+0x20],ax
0x140ec56f5: xor    edx,edx
0x140ec56f7: mov    rcx,QWORD PTR [r12+0x98]
0x140ec56ff: call   0x140aced70
0x140ec5704: mov    al,0x1
0x140ec5706: mov    rcx,QWORD PTR [rbp+0xe0]
0x140ec570d: xor    rcx,rsp
0x140ec5710: call   0x1415530b0
0x140ec5715: lea    r11,[rsp+0x1f0]
0x140ec571d: mov    rbx,QWORD PTR [r11+0x38]
0x140ec5721: mov    rsi,QWORD PTR [r11+0x40]
0x140ec5725: mov    rdi,QWORD PTR [r11+0x48]
0x140ec5729: mov    rsp,r11
0x140ec572c: pop    r15
0x140ec572e: pop    r14
0x140ec5730: pop    r13
0x140ec5732: pop    r12
0x140ec5734: pop    rbp
0x140ec5735: ret
0x140ec5736: mov    rbx,QWORD PTR [r12+0x98]
0x140ec573e: test   DWORD PTR [rbx+0x10],0x20000000
0x140ec5745: jne    0x140ec574f
0x140ec5747: mov    rcx,rbx
0x140ec574a: call   0x140c7dc00
0x140ec574f: mov    eax,DWORD PTR [rbx+0x74]
0x140ec5752: cmp    eax,0x96
0x140ec5757: jl     0x140ec5763
0x140ec5759: sub    DWORD PTR [r12+0x3c],0x5
0x140ec575f: xor    al,al
0x140ec5761: jmp    0x140ec5706
0x140ec5763: mov    r8d,DWORD PTR [r12+0x3c]
0x140ec5768: cmp    eax,0x32
0x140ec576b: jg     0x140ec577a
0x140ec576d: lea    eax,[r8-0x32]
0x140ec5771: mov    DWORD PTR [r12+0x3c],eax
0x140ec5776: xor    al,al
0x140ec5778: jmp    0x140ec5706
0x140ec577a: add    eax,0xffffff6a
0x140ec577f: imul   ecx,eax,0x2d
0x140ec5782: mov    eax,0x51eb851f
0x140ec5787: imul   ecx
0x140ec5789: sar    edx,0x5
0x140ec578c: mov    eax,edx
0x140ec578e: shr    eax,0x1f
0x140ec5791: add    eax,0x5
0x140ec5794: add    eax,edx
0x140ec5796: add    eax,r8d
0x140ec5799: mov    DWORD PTR [r12+0x3c],eax
0x140ec579e: xor    al,al
0x140ec57a0: jmp    0x140ec5706
0x140ec57a5: mov    rcx,r12
0x140ec57a8: call   0x140ebf240
0x140ec57ad: test   al,al
0x140ec57af: jne    0x140ec4d4b
0x140ec57b5: mov    rax,QWORD PTR [r12]
0x140ec57b9: mov    dl,0x1
0x140ec57bb: mov    rcx,r12
0x140ec57be: call   QWORD PTR [rax+0x8]
0x140ec57c1: test   al,al
0x140ec57c3: je     0x140ec5704
0x140ec57c9: mov    BYTE PTR [rsp+0x28],0x0
0x140ec57ce: movzx  eax,WORD PTR [r12+0x36]
0x140ec57d4: movzx  r9d,WORD PTR [r12+0x34]
0x140ec57da: movzx  r8d,WORD PTR [r12+0x32]
0x140ec57e0: jmp    0x140ec56f0
0x140ec57e5: cmp    DWORD PTR [rip+0x9f8a4c],0x1        # 0x1418be238
0x140ec57ec: jne    0x140ec58bc
0x140ec57f2: movzx  r9d,WORD PTR [r12+0x30]
0x140ec57f8: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec57fe: movzx  edx,WORD PTR [r12+0x2c]
0x140ec5804: lea    rcx,[rip+0x152e165]        # 0x1423f3970
0x140ec580b: call   0x14007f270
0x140ec5810: test   al,0x10
0x140ec5812: je     0x140ec58bc
0x140ec5818: mov    rcx,QWORD PTR [r12+0x98]
0x140ec5820: mov    rax,QWORD PTR [rcx]
0x140ec5823: call   QWORD PTR [rax+0x38]
0x140ec5826: movzx  edi,ax
0x140ec5829: mov    rcx,QWORD PTR [r12+0x98]
0x140ec5831: mov    rax,QWORD PTR [rcx]
0x140ec5834: call   QWORD PTR [rax+0x40]
0x140ec5837: mov    ebx,eax
0x140ec5839: mov    r8d,eax
0x140ec583c: movzx  edx,di
0x140ec583f: lea    rcx,[rip+0x152e12a]        # 0x1423f3970
0x140ec5846: call   0x1414c6fe0
0x140ec584b: test   rax,rax
0x140ec584e: je     0x140ec5877
0x140ec5850: cmp    DWORD PTR [rax+0x298],0x5
0x140ec5857: jle    0x140ec586a
0x140ec5859: mov    rcx,QWORD PTR [rax+0x290]
0x140ec5860: cmp    BYTE PTR [rcx+0x5],0x0
0x140ec5864: jge    0x140ec586a
0x140ec5866: mov    al,0x1
0x140ec5868: jmp    0x140ec586c
0x140ec586a: xor    al,al
0x140ec586c: test   al,al
0x140ec586e: je     0x140ec5877
0x140ec5870: mov    ecx,0x15a3
0x140ec5875: jmp    0x140ec58b7
0x140ec5877: mov    r8d,ebx
0x140ec587a: movzx  edx,di
0x140ec587d: lea    rcx,[rip+0x152e0ec]        # 0x1423f3970
0x140ec5884: call   0x1414c6fe0
0x140ec5889: test   rax,rax
0x140ec588c: je     0x140ec58b2
0x140ec588e: cmp    DWORD PTR [rax+0x298],0x0
0x140ec5895: jle    0x140ec58a7
0x140ec5897: mov    rax,QWORD PTR [rax+0x290]
0x140ec589e: test   BYTE PTR [rax],0x1
0x140ec58a1: je     0x140ec58a7
0x140ec58a3: mov    al,0x1
0x140ec58a5: jmp    0x140ec58a9
0x140ec58a7: xor    al,al
0x140ec58a9: test   al,al
0x140ec58ab: mov    ecx,0x15a0
0x140ec58b0: jne    0x140ec58b7
0x140ec58b2: mov    ecx,0x15a6
0x140ec58b7: call   0x1407fdb30
0x140ec58bc: mov    rcx,r12
0x140ec58bf: call   0x140ebf240
0x140ec58c4: test   al,al
0x140ec58c6: jne    0x140ec4d4b
0x140ec58cc: test   BYTE PTR [r12+0x48],0x4
0x140ec58d2: je     0x140ec56c9
0x140ec58d8: movzx  eax,WORD PTR [r12+0x4e]
0x140ec58de: inc    ax
0x140ec58e1: mov    WORD PTR [r12+0x4e],ax
0x140ec58e7: mov    WORD PTR [r12+0x4c],ax
0x140ec58ed: cwde
0x140ec58ee: mov    ecx,DWORD PTR [r12+0x3c]
0x140ec58f3: sub    ecx,eax
0x140ec58f5: add    ecx,0x7
0x140ec58f8: mov    DWORD PTR [r12+0x3c],ecx
0x140ec58fd: movzx  r9d,WORD PTR [r12+0x30]
0x140ec5903: movzx  ebx,WORD PTR [r12+0x2e]
0x140ec5909: movzx  edi,WORD PTR [r12+0x2c]
0x140ec590f: movzx  r8d,bx
0x140ec5913: movzx  edx,di
0x140ec5916: lea    rcx,[rip+0x152e053]        # 0x1423f3970
0x140ec591d: call   0x140069640
0x140ec5922: xor    r15d,r15d
0x140ec5925: test   al,0x8
0x140ec5927: jne    0x140ec5944
0x140ec5929: movzx  r8d,bx
0x140ec592d: movzx  edx,di
0x140ec5930: lea    rcx,[rip+0x152e039]        # 0x1423f3970
0x140ec5937: call   0x140069640
0x140ec593c: test   al,0x10
0x140ec593e: je     0x140ec5a54
0x140ec5944: mov    r14d,r15d
0x140ec5947: mov    rax,QWORD PTR [rip+0x1541c02]        # 0x142407550
0x140ec594e: mov    rdx,QWORD PTR [rip+0x1541bf3]        # 0x142407548
0x140ec5955: sub    rax,rdx
0x140ec5958: sar    rax,0x3
0x140ec595c: test   rax,rax
0x140ec595f: je     0x140ec5a54
0x140ec5965: mov    rsi,r15
0x140ec5968: nop    DWORD PTR [rax+rax*1+0x0]
0x140ec5970: mov    rcx,QWORD PTR [rsi+rdx*1]
0x140ec5974: test   DWORD PTR [rcx+0x110],0x2010002
0x140ec597e: jne    0x140ec5a33
0x140ec5984: movzx  r9d,WORD PTR [r12+0x30]
0x140ec598a: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec5990: movzx  edx,WORD PTR [r12+0x2c]
0x140ec5996: call   0x14014f0c0
0x140ec599b: test   al,al
0x140ec599d: je     0x140ec5a2c
0x140ec59a3: call   0x140ece790
0x140ec59a8: mov    r8d,eax
0x140ec59ab: mov    eax,0x3
0x140ec59b0: mul    r8d
0x140ec59b3: mov    ecx,r8d
0x140ec59b6: sub    ecx,edx
0x140ec59b8: shr    ecx,1
0x140ec59ba: add    ecx,edx
0x140ec59bc: shr    ecx,0x1e
0x140ec59bf: imul   ecx,ecx,0x7fffffff
0x140ec59c5: sub    r8d,ecx
0x140ec59c8: mov    eax,0x1bffffff
0x140ec59cd: mul    r8d
0x140ec59d0: mov    edi,edx
0x140ec59d2: shr    edi,0x19
0x140ec59d5: inc    edi
0x140ec59d7: mov    ebx,r15d
0x140ec59da: test   edi,edi
0x140ec59dc: jle    0x140ec5a2c
0x140ec59de: mov    rax,QWORD PTR [rip+0x1541b63]        # 0x142407548
0x140ec59e5: mov    rcx,QWORD PTR [rsi+rax*1]
0x140ec59e9: nop    DWORD PTR [rax+0x0]
0x140ec59f0: xor    r9d,r9d
0x140ec59f3: mov    r8,r12
0x140ec59f6: mov    rdx,rcx
0x140ec59f9: xor    ecx,ecx
0x140ec59fb: call   0x140663940
0x140ec5a00: mov    rdx,QWORD PTR [rip+0x1541b41]        # 0x142407548
0x140ec5a07: mov    rcx,QWORD PTR [rsi+rdx*1]
0x140ec5a0b: test   BYTE PTR [rcx+0x110],0x2
0x140ec5a12: jne    0x140ec5a1c
0x140ec5a14: inc    ebx
0x140ec5a16: cmp    ebx,edi
0x140ec5a18: jl     0x140ec59f0
0x140ec5a1a: jmp    0x140ec5a33
0x140ec5a1c: mov    r8d,0x3
0x140ec5a22: xor    r9d,r9d
0x140ec5a25: xor    edx,edx
0x140ec5a27: call   0x140aa52c0
0x140ec5a2c: mov    rdx,QWORD PTR [rip+0x1541b15]        # 0x142407548
0x140ec5a33: inc    r14d
0x140ec5a36: add    rsi,0x8
0x140ec5a3a: mov    rcx,QWORD PTR [rip+0x1541b0f]        # 0x142407550
0x140ec5a41: sub    rcx,rdx
0x140ec5a44: sar    rcx,0x3
0x140ec5a48: movsxd rax,r14d
0x140ec5a4b: cmp    rax,rcx
0x140ec5a4e: jb     0x140ec5970
0x140ec5a54: movzx  ebx,WORD PTR [r12+0x30]
0x140ec5a5a: movzx  edi,WORD PTR [r12+0x2e]
0x140ec5a60: movzx  esi,WORD PTR [r12+0x2c]
0x140ec5a66: movzx  r9d,bx
0x140ec5a6a: movzx  r8d,di
0x140ec5a6e: movzx  edx,si
0x140ec5a71: lea    rcx,[rip+0x152def8]        # 0x1423f3970
0x140ec5a78: call   0x1400695b0
0x140ec5a7d: movzx  ecx,ax
0x140ec5a80: call   0x14024b500
0x140ec5a85: movzx  r8d,di
0x140ec5a89: movzx  edx,si
0x140ec5a8c: lea    rcx,[rip+0x152dedd]        # 0x1423f3970
0x140ec5a93: test   al,al
0x140ec5a95: je     0x140ec5ad9
0x140ec5a97: mov    DWORD PTR [rsp+0x28],r15d
0x140ec5a9c: mov    BYTE PTR [rsp+0x20],0x1
0x140ec5aa1: call   0x1414dd810
0x140ec5aa6: movzx  r9d,WORD PTR [r12+0x30]
0x140ec5aac: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec5ab2: movzx  edx,WORD PTR [r12+0x2c]
0x140ec5ab8: lea    rcx,[rip+0x152deb1]        # 0x1423f3970
0x140ec5abf: call   0x14007f270
0x140ec5ac4: bt     eax,0xf
0x140ec5ac8: jb     0x140ec5b98
0x140ec5ace: inc    DWORD PTR [rip+0x14edddc]        # 0x1423b38b0
0x140ec5ad4: jmp    0x140ec5b98
0x140ec5ad9: call   0x1400695b0
0x140ec5ade: cmp    ax,0x22
0x140ec5ae2: je     0x140ec5b77
0x140ec5ae8: mov    ecx,0x185
0x140ec5aed: cmp    ax,cx
0x140ec5af0: je     0x140ec5b77
0x140ec5af6: movzx  r8d,di
0x140ec5afa: movzx  edx,si
0x140ec5afd: lea    rcx,[rip+0x152de6c]        # 0x1423f3970
0x140ec5b04: call   0x1400695b0
0x140ec5b09: mov    ecx,0xe3
0x140ec5b0e: cmp    ax,cx
0x140ec5b11: je     0x140ec5b77
0x140ec5b13: mov    ecx,0x184
0x140ec5b18: cmp    ax,cx
0x140ec5b1b: je     0x140ec5b77
0x140ec5b1d: movzx  r8d,di
0x140ec5b21: movzx  edx,si
0x140ec5b24: lea    rcx,[rip+0x152de45]        # 0x1423f3970
0x140ec5b2b: call   0x1400695b0
0x140ec5b30: movzx  ecx,ax
0x140ec5b33: call   0x14024b380
0x140ec5b38: test   al,al
0x140ec5b3a: jne    0x140ec5b77
0x140ec5b3c: movzx  r8d,di
0x140ec5b40: movzx  edx,si
0x140ec5b43: lea    rcx,[rip+0x152de26]        # 0x1423f3970
0x140ec5b4a: call   0x1400695b0
0x140ec5b4f: movzx  r9d,ax
0x140ec5b53: add    r9d,0xfffffea4
0x140ec5b5a: cmp    r9d,0x7
0x140ec5b5e: ja     0x140ec5b98
0x140ec5b60: movsxd rax,r9d
0x140ec5b63: lea    r14,[rip+0xffffffffff13a496]        # 0x140000000
0x140ec5b6a: mov    eax,DWORD PTR [r14+rax*4+0xec5d58]
0x140ec5b72: add    rax,r14
0x140ec5b75: jmp    rax
0x140ec5b77: mov    DWORD PTR [rsp+0x28],r15d
0x140ec5b7c: mov    BYTE PTR [rsp+0x20],0x1
0x140ec5b81: movzx  r9d,bx
0x140ec5b85: movzx  r8d,di
0x140ec5b89: movzx  edx,si
0x140ec5b8c: lea    rcx,[rip+0x152dddd]        # 0x1423f3970
0x140ec5b93: call   0x1414dd810
0x140ec5b98: movsx  r9,WORD PTR [r12+0x30]
0x140ec5b9e: movsx  rbx,WORD PTR [r12+0x2e]
0x140ec5ba4: movsx  rdi,WORD PTR [r12+0x2c]
0x140ec5baa: movzx  r8d,bx
0x140ec5bae: movzx  edx,di
0x140ec5bb1: lea    rcx,[rip+0x152ddb8]        # 0x1423f3970
0x140ec5bb8: call   0x14007f270
0x140ec5bbd: cmp    WORD PTR [r12+0x4e],0x5
0x140ec5bc4: jle    0x140ec5c72
0x140ec5bca: bt     eax,0xf
0x140ec5bce: jb     0x140ec5c54
0x140ec5bd4: test   di,di
0x140ec5bd7: js     0x140ec5c54
0x140ec5bd9: cmp    edi,DWORD PTR [rip+0x164497d]        # 0x14250a55c
0x140ec5bdf: jge    0x140ec5c54
0x140ec5be1: test   bx,bx
0x140ec5be4: js     0x140ec5c54
0x140ec5be6: cmp    ebx,DWORD PTR [rip+0x1644974]        # 0x14250a560
0x140ec5bec: jge    0x140ec5c54
0x140ec5bee: test   r9w,r9w
0x140ec5bf2: js     0x140ec5c54
0x140ec5bf4: cmp    r9d,DWORD PTR [rip+0x1644969]        # 0x14250a564
0x140ec5bfb: jge    0x140ec5c54
0x140ec5bfd: mov    rcx,QWORD PTR [rip+0x1644924]        # 0x14250a528
0x140ec5c04: test   rcx,rcx
0x140ec5c07: je     0x140ec5c54
0x140ec5c09: mov    rax,rdi
0x140ec5c0c: sar    rax,0x4
0x140ec5c10: mov    rdx,rbx
0x140ec5c13: sar    rdx,0x4
0x140ec5c17: mov    rax,QWORD PTR [rcx+rax*8]
0x140ec5c1b: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec5c1f: mov    rcx,QWORD PTR [rax+r9*8]
0x140ec5c23: test   rcx,rcx
0x140ec5c26: je     0x140ec5c54
0x140ec5c28: mov    r8d,ebx
0x140ec5c2b: and    r8d,0x8000000f
0x140ec5c32: jge    0x140ec5c3e
0x140ec5c34: dec    r8d
0x140ec5c37: or     r8d,0xfffffff0
0x140ec5c3b: inc    r8d
0x140ec5c3e: mov    edx,edi
0x140ec5c40: and    edx,0x8000000f
0x140ec5c46: jge    0x140ec5c4f
0x140ec5c48: dec    edx
0x140ec5c4a: or     edx,0xfffffff0
0x140ec5c4d: inc    edx
0x140ec5c4f: call   0x14055c0a0
0x140ec5c54: mov    rax,QWORD PTR [r12]
0x140ec5c58: xor    edx,edx
0x140ec5c5a: mov    rcx,r12
0x140ec5c5d: call   QWORD PTR [rax+0x8]
0x140ec5c60: test   al,al
0x140ec5c62: je     0x140ec5704
0x140ec5c68: mov    BYTE PTR [rsp+0x28],r15b
0x140ec5c6d: jmp    0x140ec56de
0x140ec5c72: bt     eax,0xf
0x140ec5c76: jb     0x140ec5cfc
0x140ec5c7c: test   di,di
0x140ec5c7f: js     0x140ec5cfc
0x140ec5c81: cmp    edi,DWORD PTR [rip+0x16448d5]        # 0x14250a55c
0x140ec5c87: jge    0x140ec5cfc
0x140ec5c89: test   bx,bx
0x140ec5c8c: js     0x140ec5cfc
0x140ec5c8e: cmp    ebx,DWORD PTR [rip+0x16448cc]        # 0x14250a560
0x140ec5c94: jge    0x140ec5cfc
0x140ec5c96: test   r9w,r9w
0x140ec5c9a: js     0x140ec5cfc
0x140ec5c9c: cmp    r9d,DWORD PTR [rip+0x16448c1]        # 0x14250a564
0x140ec5ca3: jge    0x140ec5cfc
0x140ec5ca5: mov    rcx,QWORD PTR [rip+0x164487c]        # 0x14250a528
0x140ec5cac: test   rcx,rcx
0x140ec5caf: je     0x140ec5cfc
0x140ec5cb1: mov    rax,rdi
0x140ec5cb4: sar    rax,0x4
0x140ec5cb8: mov    rdx,rbx
0x140ec5cbb: sar    rdx,0x4
0x140ec5cbf: mov    rax,QWORD PTR [rcx+rax*8]
0x140ec5cc3: mov    rax,QWORD PTR [rax+rdx*8]
0x140ec5cc7: mov    rcx,QWORD PTR [rax+r9*8]
0x140ec5ccb: test   rcx,rcx
0x140ec5cce: je     0x140ec5cfc
0x140ec5cd0: mov    r8d,ebx
0x140ec5cd3: and    r8d,0x8000000f
0x140ec5cda: jge    0x140ec5ce6
0x140ec5cdc: dec    r8d
0x140ec5cdf: or     r8d,0xfffffff0
0x140ec5ce3: inc    r8d
0x140ec5ce6: mov    edx,edi
0x140ec5ce8: and    edx,0x8000000f
0x140ec5cee: jge    0x140ec5cf7
0x140ec5cf0: dec    edx
0x140ec5cf2: or     edx,0xfffffff0
0x140ec5cf5: inc    edx
0x140ec5cf7: call   0x14055c0a0
0x140ec5cfc: movzx  r9d,WORD PTR [r12+0x30]
0x140ec5d02: movzx  r8d,WORD PTR [r12+0x2e]
0x140ec5d08: movzx  edx,WORD PTR [r12+0x2c]
0x140ec5d0e: mov    rcx,QWORD PTR [r12+0x98]
0x140ec5d16: call   0x140a9b070
0x140ec5d1b: test   al,al
0x140ec5d1d: jne    0x140ec5704
0x140ec5d23: jmp    0x140ec5706
0x140ec5d28: sbb    BYTE PTR [rax],dl
0x140ec5d2a: in     al,dx
0x140ec5d2b: add    BYTE PTR [rdi],bl
0x140ec5d2d: adc    ah,ch
0x140ec5d2f: add    BYTE PTR [rsi],ah
0x140ec5d31: adc    ah,ch
0x140ec5d33: add    BYTE PTR [rip+0x4800ec10],ch        # 0x188ed4949
0x140ec5d39: adc    ah,ch
0x140ec5d3b: add    BYTE PTR [rax+rdx*1],dh
0x140ec5d3e: in     al,dx
0x140ec5d3f: add    BYTE PTR [rax+0x10],cl
0x140ec5d42: in     al,dx
0x140ec5d43: add    BYTE PTR [rdi+0x10],cl
0x140ec5d46: in     al,dx
0x140ec5d47: add    BYTE PTR [rsi+0x10],dl
0x140ec5d4a: in     al,dx
0x140ec5d4b: add    BYTE PTR [rbp+0x10],bl
0x140ec5d4e: in     al,dx
0x140ec5d4f: add    BYTE PTR [rcx+0x10],ah
0x140ec5d52: in     al,dx
0x140ec5d53: add    BYTE PTR [rax+0x10],ch
0x140ec5d56: in     al,dx
0x140ec5d57: add    BYTE PTR [rdi+0x5b],dh
0x140ec5d5a: in     al,dx
0x140ec5d5b: add    BYTE PTR [rdi+0x5b],dh
0x140ec5d5e: in     al,dx
0x140ec5d5f: add    BYTE PTR [rdi+0x5b],dh
0x140ec5d62: in     al,dx
0x140ec5d63: add    BYTE PTR [rdi+0x5b],dh
0x140ec5d66: in     al,dx
0x140ec5d67: add    BYTE PTR [rdi+0x5b],dh
0x140ec5d6a: in     al,dx
0x140ec5d6b: add    BYTE PTR [rdi+0x5b],dh
0x140ec5d6e: in     al,dx
0x140ec5d6f: add    BYTE PTR [rdi+0x5b],dh
0x140ec5d72: in     al,dx
0x140ec5d73: add    BYTE PTR [rdi+0x5b],dh
0x140ec5d76: in     al,dx
