; reference; PE:6aea05a1:02734000; 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16; string-length-error; complete unwind owner
0x66ec0: sub    rsp,0x28
0x66ec4: lea    rcx,[rip+0x159c30d]        # 0x1416031d8 ; cstring='string too long'
0x66ecb: call   QWORD PTR [rip+0x15995cf]        # 0x1416004a0
0x66ed1: int3
