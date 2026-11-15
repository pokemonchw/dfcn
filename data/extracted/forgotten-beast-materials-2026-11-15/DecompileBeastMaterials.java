//@category Research
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.JumpTable;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.util.*;

// Disk-only source extraction. Run with -readOnly -noanalysis.
public class DecompileBeastMaterials extends GhidraScript {
    public void run() throws Exception {
        Path out = Path.of(getScriptArgs()[0]);
        Files.writeString(out.resolve("image.txt"), currentProgram.getExecutablePath() + "\nsha256=" + currentProgram.getExecutableSHA256() + "\n");
        List<String[]> rows = new ArrayList<>();
        for (String line : Files.readAllLines(out.resolve("functions.tsv"))) {
            String[] r = line.split("\t"); rows.add(r);
            Address start = toAddr(r[1]), end = toAddr(r[2]).subtract(1);
            AddressSet body = new AddressSet(start,end);
            DisassembleCommand cmd = new DisassembleCommand(start,body,true);
            cmd.enableCodeAnalysis(false); cmd.applyTo(currentProgram,monitor);
            for (String asm : Files.readAllLines(out.resolve(r[0]+".asm"))) {
                if (!asm.startsWith("0x")) continue;
                Address a = toAddr(asm.substring(2,asm.indexOf(':')));
                if (getInstructionAt(a)==null) {
                    cmd = new DisassembleCommand(a,body,true);
                    cmd.enableCodeAnalysis(false); cmd.applyTo(currentProgram,monitor);
                }
            }
            Function f = getFunctionAt(start);
            if (f==null) f=currentProgram.getFunctionManager().createFunction(r[0],start,body,SourceType.USER_DEFINED);
            else { f.setBody(body); f.setName(r[0],SourceType.USER_DEFINED); }
        }
        for (String line : Files.readAllLines(out.resolve("switches.tsv"))) {
            String[] r=line.split("\t");
            Address site=toAddr(r[0]); ArrayList<Address> targets=new ArrayList<>();
            for(int i=1;i<r.length;i++) { Address target=toAddr(r[i]);
                getInstructionAt(site).addOperandReference(0,target,RefType.COMPUTED_JUMP,SourceType.USER_DEFINED);
                targets.add(target);
            }
            new JumpTable(site,targets,true,0).writeOverride(getFunctionContaining(site));
        }
        DecompInterface d=new DecompInterface(); DecompileOptions o=new DecompileOptions();
        o.setMaxInstructions(1000000); o.setMaxPayloadMBytes(128); d.setOptions(o); d.openProgram(currentProgram);
        try { for(String[] r:rows) {
            DecompileResults result=d.decompileFunction(getFunctionAt(toAddr(r[1])),90,monitor);
            if(result.decompileCompleted() && result.getDecompiledFunction()!=null) {
                Files.writeString(out.resolve(r[0]+".c"),"/* Actual Ghidra output, research name; VA "+r[1]+".."+r[2]+". */\n"+result.getDecompiledFunction().getC());
                println("EXPORTED "+r[0]);
            } else println("INCOMPLETE "+r[0]+" "+result.getErrorMessage());
        }} finally { d.dispose(); }
    }
}
