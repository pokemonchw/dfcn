//@category Source extraction
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
public class DecompileItemColor extends GhidraScript {
 public void run() throws Exception {
  Path dir=Path.of(getScriptArgs()[0]);
  for(String line:Files.readAllLines(dir.resolve("functions.tsv"))) {
   String[] r=line.split("\t");
   Address start=currentProgram.getImageBase().add(Long.decode(r[0]));
   Address end=currentProgram.getImageBase().add(Long.decode(r[1])).subtract(1);
   AddressSet body=new AddressSet(start,end);
   DisassembleCommand cmd=new DisassembleCommand(start,body,true);
   cmd.enableCodeAnalysis(false); cmd.applyTo(currentProgram,monitor);
   Function f=getFunctionAt(start);
   if(f==null) f=createFunction(start,"item_"+r[0]);
   f.setBody(body);
   for(Instruction i:currentProgram.getListing().getInstructions(body,true)) {
    for(var ref:i.getReferencesFrom()) {
     Address a=ref.getToAddress();
     if(ref.getReferenceType().isCall()&&getFunctionAt(a)==null&&currentProgram.getMemory().contains(a))
      currentProgram.getFunctionManager().createFunction("supplier_"+a,a,new AddressSet(a),SourceType.USER_DEFINED);
    }
   }
  }
  for(String line:Files.readAllLines(dir.resolve("literal-addresses.tsv"))) {
   String[] r=line.split("\t",4);
   if(!r[0].startsWith("0x")) continue;
   Address a=currentProgram.getImageBase().add(Long.decode(r[2]));
   if(r[3].isEmpty()) continue;
   clearListing(a,a.add(r[3].length()));
   createAsciiString(a);
  }
  DecompInterface d=new DecompInterface();
  d.openProgram(currentProgram);
  try { for(String line:Files.readAllLines(dir.resolve("functions.tsv"))) {
   String[] r=line.split("\t");
   Function f=getFunctionAt(currentProgram.getImageBase().add(Long.decode(r[0])));
   var result=d.decompileFunction(f,120,monitor);
   if(!result.decompileCompleted()) throw new Exception(result.getErrorMessage());
   Files.writeString(dir.resolve(r[0]+".c"),result.getDecompiledFunction().getC());
   println("Decompiled "+r[0]);
  }} finally {d.dispose();}
 }
}
