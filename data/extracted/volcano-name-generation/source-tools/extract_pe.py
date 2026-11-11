import sys,re,struct,csv
from pathlib import Path
sys.path.insert(0,'D:/workspace/dfcn/tools')
from native_caption_image import CaptionImage
im=CaptionImage(Path('D:/program/steam/steamapps/common/Dwarf Fortress/Dwarf Fortress.exe'),'C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/w64devkit-2.9.1/w64devkit/bin/objdump.exe')
out=Path('D:/workspace/dfcn/data/extracted/volcano-name-generation')
roots={
0xaac2a0:('category-dispatch',None),
0xaac300:('name-generate',0xaada6c),
0xd44930:('word-tables',0xd4ba98),
0xd4eb70:('build-selector',None),
0xd4d220:('fill-word-slots',0xd4dbc4),
0xd4dbd0:('select-word',None),
0xf67700:('peak-volcano-create',None),
0xaae180:('english-format',None),
0x826d20:('embark-panel',None)}
functions=[];calls=[];literals=[];switches=[]
for rva,(role,clip) in roots.items():
    start=im.base+rva; unwind=im.functions[start];end=im.base+clip if clip else unwind
    body=list(im.instructions(start,end))
    functions.append((im.identity,role,hex(start),hex(end),hex(unwind)))
    listing=[]
    for pc,ins in body:
        m=re.search(r'# (?:0x)?([0-9a-f]+)',ins)
        value=im.string(int(m[1],16)) if m and 'lea ' in ins else None
        listing.append(f'{pc:#x}: {ins}'+(f' ; {value!r}' if value else ''))
        if value:literals.append((role,hex(pc),hex(int(m[1],16)),'cstring',value))
        m=re.fullmatch(r'(call|jmp)\s+(?:0x)?([0-9a-f]+)',ins)
        if m and (m[1]=='call' or not start<=int(m[2],16)<end):
            calls.append((role,hex(pc),hex(int(m[2],16))))
    (out/f'pe-{role}.asm').write_text('\n'.join(listing)+'\n')
for role,owner,pc,tab,count,remap in [
('name-generate',0xaac300,0xaac653,0xaada6c,55,0xaada94),
('word-tables',0xd44930,0xd44a84,0xd4ba98,68,None)]:
    for i in range(count):
        index=im.raw[im.offset(im.base+remap)+i] if remap else i
        dest=struct.unpack_from('<I',im.raw,im.offset(im.base+tab)+4*index)[0]+im.base
        switches.append((role,hex(im.base+owner),hex(im.base+pc),hex(im.base+tab),i,hex(dest)))
def write(name,head,rows):
    with (out/f'pe-{name}.tsv').open('w') as f:
        w=csv.writer(f,delimiter='\t',lineterminator='\n');w.writerow(head);w.writerows(rows)
write('functions',['image','role','start_va','code_end_va','unwind_end_va'],functions)
write('calls',['role','instruction_va','callee_va'],calls)
write('literals',['role','instruction_va','target_va','kind','text'],literals)
write('switches',['role','owner_va','instruction_va','table_va','selector','target_va'],switches)
print('\n'.join('\t'.join(row) for row in functions))
