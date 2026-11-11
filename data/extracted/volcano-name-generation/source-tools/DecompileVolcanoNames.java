//@category Source extraction
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.JumpTable;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.util.*;

public class DecompileVolcanoNames extends GhidraScript {
    public void run() throws Exception {
        Path dir=Path.of(getScriptArgs()[0]);
        List<String> rows=Files.readAllLines(dir.resolve("pe-functions.tsv"));
        AddressSet all=new AddressSet();
        for(String line:rows.subList(1,rows.size())){
            String[] r=line.split("\t");
            all.add(toAddr(r[2].substring(2)),toAddr(r[3].substring(2)).subtract(1));
        }
        for(String line:Files.readAllLines(dir.resolve("pe-calls.tsv"))){
            String[] r=line.split("\t");
            if(!r[2].startsWith("0x"))continue;
            Address a=toAddr(r[2].substring(2));
            if(!all.contains(a)&&getFunctionAt(a)==null&&currentProgram.getMemory().contains(a))
                currentProgram.getFunctionManager().createFunction("supplier_"+r[2],a,new AddressSet(a),SourceType.USER_DEFINED);
        }
        for(String line:rows.subList(1,rows.size())){
            String[] r=line.split("\t");
            Address start=toAddr(r[2].substring(2)),end=toAddr(r[3].substring(2)).subtract(1);
            AddressSet body=new AddressSet(start,end);
            clearListing(start,end);
            new DisassembleCommand(start,body,true).applyTo(currentProgram,monitor);
            for(String code:Files.readAllLines(dir.resolve("pe-"+r[1]+".asm"))){
                if(!code.startsWith("0x")||code.contains("(bad)")||code.contains(".byte"))continue;
                Address pc=toAddr(code.substring(2,code.indexOf(':')));
                if(getInstructionAt(pc)==null)new DisassembleCommand(pc,body,false).applyTo(currentProgram,monitor);
            }
            Function f=getFunctionAt(start);
            if(f==null)f=currentProgram.getFunctionManager().createFunction("volcano_"+r[1].replace('-','_'),start,body,SourceType.USER_DEFINED);
            else f.setBody(body);
        }
        Map<Address,ArrayList<Address>> targets=new LinkedHashMap<>();
        for(String line:Files.readAllLines(dir.resolve("pe-switches.tsv"))){
            String[] r=line.split("\t");if(!r[2].startsWith("0x"))continue;
            Address a=toAddr(r[2].substring(2)),target=toAddr(r[5].substring(2));
            getInstructionAt(a).addOperandReference(0,target,RefType.COMPUTED_JUMP,SourceType.USER_DEFINED);
            ArrayList<Address> list=targets.computeIfAbsent(a,k->new ArrayList<>());
            if(!list.contains(target))list.add(target);
        }
        for(var entry:targets.entrySet())new JumpTable(entry.getKey(),entry.getValue(),true,0).writeOverride(getFunctionContaining(entry.getKey()));
        for(String line:Files.readAllLines(dir.resolve("pe-literals.tsv"))){
            String[] r=line.split("\t");if(!r[2].startsWith("0x"))continue;
            Address a=toAddr(r[2].substring(2));
            if(getDataContaining(a)==null)try{createAsciiString(a);}catch(Exception e){}
        }
        DecompInterface d=new DecompInterface();
        DecompileOptions opts=new DecompileOptions();opts.setMaxInstructions(1000000);opts.setMaxPayloadMBytes(128);
        d.setOptions(opts);d.openProgram(currentProgram);
        try{
            for(String line:rows.subList(1,rows.size())){
                String[] r=line.split("\t");Function f=getFunctionAt(toAddr(r[2].substring(2)));
                DecompileResults result=d.decompileFunction(f,600,monitor);
                if(!result.decompileCompleted()||result.getDecompiledFunction()==null)
                    throw new Exception(r[1]+": "+result.getErrorMessage());
                Files.writeString(dir.resolve("pe-"+r[1]+".c"),"/* Actual Ghidra decompilation; "+line+" */\n"+result.getDecompiledFunction().getC());
                println("Extracted "+r[1]);
            }
        }finally{d.dispose();}
    }
}
