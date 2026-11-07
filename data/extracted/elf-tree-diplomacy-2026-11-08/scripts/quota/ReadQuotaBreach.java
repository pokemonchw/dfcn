//@category Research
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
public class ReadQuotaBreach extends GhidraScript {
 public void run() throws Exception {
  Path out=Path.of(getScriptArgs()[0]);
  java.util.List<long[]> targets=new java.util.ArrayList<>(); for(String row:Files.readAllLines(out.resolve("attack-functions.tsv"))) {String[] cols=row.split("\\t");targets.add(new long[]{Long.parseLong(cols[0],16),Long.parseLong(cols[1],16)});}
  DecompInterface d=new DecompInterface();
  try {
   for(long[] t:targets) {
    Address a=toAddr(t[0]),b=toAddr(t[1]-1); AddressSet body=new AddressSet(a,b);
    DisassembleCommand cmd=new DisassembleCommand(a,body,true);cmd.enableCodeAnalysis(false);cmd.applyTo(currentProgram,monitor);
    Function f=getFunctionAt(a);if(f==null)f=currentProgram.getFunctionManager().createFunction("quota_"+Long.toHexString(t[0]),a,body,SourceType.USER_DEFINED);else f.setBody(body);
   }
   d.openProgram(currentProgram);
   for(long[] t:targets) {
    DecompileResults r=d.decompileFunction(getFunctionAt(toAddr(t[0])),90,monitor);
    if(r.decompileCompleted())Files.writeString(out.resolve(Long.toHexString(t[0])+".c"),r.getDecompiledFunction().getC());
    println("EXPORT "+Long.toHexString(t[0])+" "+r.decompileCompleted()+" "+r.getErrorMessage());
   }
  } finally {d.dispose();}
 }
}

