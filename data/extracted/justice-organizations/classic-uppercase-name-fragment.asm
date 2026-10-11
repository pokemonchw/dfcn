# classic PE:6a70b91c:0270a000; uppercase-name-fragment; RVA 0x52ade0..0x52b01e
0x0052ade0: mov    QWORD PTR [rsp+0x10],rbx
0x0052ade5: push   rdi
0x0052ade6: xor    r11d,r11d
0x0052ade9: mov    bl,0x1
0x0052adeb: mov    edi,r11d
0x0052adee: cmp    QWORD PTR [rcx+0x10],rdi
0x0052adf2: jbe    0x14052b017
0x0052adf8: mov    QWORD PTR [rsp+0x10],rsi
0x0052adfd: mov    r8d,r11d
0x0052ae00: lea    rsi,[rip+0xffffffffffad51f9]        # 0x140000000
0x0052ae07: nop    WORD PTR [rax+rax*1+0x0]
0x0052ae10: mov    rax,QWORD PTR [rcx+0x18]
0x0052ae14: mov    r9,rcx
0x0052ae17: mov    rdx,rax
0x0052ae1a: cmp    rax,0xf
0x0052ae1e: jbe    0x14052ae23
0x0052ae20: mov    r9,QWORD PTR [rcx]
0x0052ae23: cmp    BYTE PTR [r8+r9*1],0x5b
0x0052ae28: jne    0x14052ae32
0x0052ae2a: inc    r11d
0x0052ae2d: jmp    0x14052b000
0x0052ae32: mov    r9,rcx
0x0052ae35: cmp    rax,0xf
0x0052ae39: jbe    0x14052ae3e
0x0052ae3b: mov    r9,QWORD PTR [rcx]
0x0052ae3e: cmp    BYTE PTR [r8+r9*1],0x5d
0x0052ae43: jne    0x14052ae4d
0x0052ae45: dec    r11d
0x0052ae48: jmp    0x14052b000
0x0052ae4d: test   r11d,r11d
0x0052ae50: jg     0x14052b000
0x0052ae56: xor    r10b,r10b
0x0052ae59: test   bl,bl
0x0052ae5b: jne    0x14052aee5
0x0052ae61: mov    r9,rcx
0x0052ae64: cmp    rax,0xf
0x0052ae68: jbe    0x14052ae6d
0x0052ae6a: mov    r9,QWORD PTR [rcx]
0x0052ae6d: cmp    BYTE PTR [r8+r9*1-0x1],0x20
0x0052ae73: je     0x14052ae89
0x0052ae75: mov    rax,rcx
0x0052ae78: cmp    rdx,0xf
0x0052ae7c: jbe    0x14052ae81
0x0052ae7e: mov    rax,QWORD PTR [rcx]
0x0052ae81: cmp    BYTE PTR [rax+r8*1-0x1],0x22
0x0052ae87: jne    0x14052ae8c
0x0052ae89: mov    r10b,0x1
0x0052ae8c: mov    r9,rcx
0x0052ae8f: cmp    rdx,0xf
0x0052ae93: jbe    0x14052ae98
0x0052ae95: mov    r9,QWORD PTR [rcx]
0x0052ae98: cmp    BYTE PTR [r9+r8*1-0x1],0x27
0x0052ae9e: mov    rax,rdx
0x0052aea1: jne    0x14052aedc
0x0052aea3: test   edi,edi
0x0052aea5: jle    0x14052aee5
0x0052aea7: cmp    edi,0x2
0x0052aeaa: jl     0x14052aedc
0x0052aeac: mov    rax,rcx
0x0052aeaf: cmp    rdx,0xf
0x0052aeb3: jbe    0x14052aeb8
0x0052aeb5: mov    rax,QWORD PTR [rcx]
0x0052aeb8: cmp    BYTE PTR [rax+r8*1-0x2],0x20
0x0052aebe: je     0x14052aed7
0x0052aec0: mov    r9,rcx
0x0052aec3: cmp    rdx,0xf
0x0052aec7: jbe    0x14052aecc
0x0052aec9: mov    r9,QWORD PTR [rcx]
0x0052aecc: cmp    BYTE PTR [r9+r8*1-0x2],0x2c
0x0052aed2: mov    rax,rdx
0x0052aed5: jne    0x14052aedc
0x0052aed7: mov    rax,rdx
0x0052aeda: jmp    0x14052aee5
0x0052aedc: test   r10b,r10b
0x0052aedf: je     0x14052b000
0x0052aee5: mov    rdx,rcx
0x0052aee8: cmp    rax,0xf
0x0052aeec: jbe    0x14052aef1
0x0052aeee: mov    rdx,QWORD PTR [rcx]
0x0052aef1: cmp    BYTE PTR [r8+rdx*1],0x61
0x0052aef6: jl     0x14052af2e
0x0052aef8: mov    rdx,rcx
0x0052aefb: cmp    rax,0xf
0x0052aeff: jbe    0x14052af04
0x0052af01: mov    rdx,QWORD PTR [rcx]
0x0052af04: cmp    BYTE PTR [rdx+r8*1],0x7a
0x0052af09: jg     0x14052af2e
0x0052af0b: mov    rdx,rcx
0x0052af0e: cmp    rax,0xf
0x0052af12: jbe    0x14052af17
0x0052af14: mov    rdx,QWORD PTR [rcx]
0x0052af17: add    BYTE PTR [rdx+r8*1],0x9f
0x0052af1c: mov    rax,rcx
0x0052af1f: cmp    QWORD PTR [rcx+0x18],0xf
0x0052af24: jbe    0x14052af29
0x0052af26: mov    rax,QWORD PTR [rcx]
0x0052af29: add    BYTE PTR [rax+r8*1],0x41
0x0052af2e: mov    r9,QWORD PTR [rcx+0x18]
0x0052af32: mov    rax,rcx
0x0052af35: cmp    r9,0xf
0x0052af39: jbe    0x14052af3e
0x0052af3b: mov    rax,QWORD PTR [rcx]
0x0052af3e: movsx  eax,BYTE PTR [r8+rax*1]
0x0052af43: add    eax,0x7f
0x0052af46: cmp    eax,0x23
0x0052af49: ja     0x14052affe
0x0052af4f: cdqe
0x0052af51: movzx  eax,BYTE PTR [rsi+rax*1+0x52b044]
0x0052af59: mov    edx,DWORD PTR [rsi+rax*4+0x52b020]
0x0052af60: add    rdx,rsi
0x0052af63: jmp    rdx
0x0052af65: mov    rax,rcx
0x0052af68: cmp    r9,0xf
0x0052af6c: jbe    0x14052af71
0x0052af6e: mov    rax,QWORD PTR [rcx]
0x0052af71: mov    BYTE PTR [rax+r8*1],0x9a
0x0052af76: jmp    0x14052affe
0x0052af7b: mov    rax,rcx
0x0052af7e: cmp    r9,0xf
0x0052af82: jbe    0x14052af87
0x0052af84: mov    rax,QWORD PTR [rcx]
0x0052af87: mov    BYTE PTR [rax+r8*1],0xa5
0x0052af8c: jmp    0x14052affe
0x0052af8e: mov    rax,rcx
0x0052af91: cmp    r9,0xf
0x0052af95: jbe    0x14052af9a
0x0052af97: mov    rax,QWORD PTR [rcx]
0x0052af9a: mov    BYTE PTR [rax+r8*1],0x8e
0x0052af9f: jmp    0x14052affe
0x0052afa1: mov    rax,rcx
0x0052afa4: cmp    r9,0xf
0x0052afa8: jbe    0x14052afad
0x0052afaa: mov    rax,QWORD PTR [rcx]
0x0052afad: mov    BYTE PTR [rax+r8*1],0x8f
0x0052afb2: jmp    0x14052affe
0x0052afb4: mov    rax,rcx
0x0052afb7: cmp    r9,0xf
0x0052afbb: jbe    0x14052afc0
0x0052afbd: mov    rax,QWORD PTR [rcx]
0x0052afc0: mov    BYTE PTR [rax+r8*1],0x90
0x0052afc5: jmp    0x14052affe
0x0052afc7: mov    rax,rcx
0x0052afca: cmp    r9,0xf
0x0052afce: jbe    0x14052afd3
0x0052afd0: mov    rax,QWORD PTR [rcx]
0x0052afd3: mov    BYTE PTR [rax+r8*1],0x99
0x0052afd8: jmp    0x14052affe
0x0052afda: mov    rax,rcx
0x0052afdd: cmp    r9,0xf
0x0052afe1: jbe    0x14052afe6
0x0052afe3: mov    rax,QWORD PTR [rcx]
0x0052afe6: mov    BYTE PTR [rax+r8*1],0x80
0x0052afeb: jmp    0x14052affe
0x0052afed: mov    rax,rcx
0x0052aff0: cmp    r9,0xf
0x0052aff4: jbe    0x14052aff9
0x0052aff6: mov    rax,QWORD PTR [rcx]
0x0052aff9: mov    BYTE PTR [rax+r8*1],0x92
0x0052affe: xor    bl,bl
0x0052b000: inc    edi
0x0052b002: inc    r8
0x0052b005: movsxd rax,edi
0x0052b008: cmp    rax,QWORD PTR [rcx+0x10]
0x0052b00c: jb     0x14052ae10
0x0052b012: mov    rsi,QWORD PTR [rsp+0x10]
0x0052b017: mov    rbx,QWORD PTR [rsp+0x18]
0x0052b01c: pop    rdi
0x0052b01d: ret
