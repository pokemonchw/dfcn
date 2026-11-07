import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.util.*;
public class DecompileWarThreshold extends GhidraScript {
 public void run() throws Exception {
  Path out=Path.of(getScriptArgs()[0]); List<String[]> rows=new ArrayList<>();
  for(String line:Files.readAllLines(out.resolve("functions.tsv"))) {
   if(line.startsWith("name"))continue; String[] row=line.split("\t");rows.add(row);
   Address a=toAddr(Long.decode(row[1])),b=toAddr(Long.decode(row[2])).subtract(1);AddressSet body=new AddressSet(a,b);
   DisassembleCommand c=new DisassembleCommand(a,body,true);c.enableCodeAnalysis(false);c.applyTo(currentProgram,monitor);
   Function f=getFunctionAt(a);if(f==null)f=currentProgram.getFunctionManager().createFunction(row[0],a,body,SourceType.USER_DEFINED);else f.setBody(body);
   
  }
  for(String[] row:rows)for(String line:Files.readAllLines(out.resolve(row[0]+".asm"))){int i=line.indexOf("call   0x");if(i<0)continue;String n=line.substring(i+7).split(" ")[0];Address a=toAddr(Long.decode(n));if(getFunctionContaining(a)==null&&currentProgram.getMemory().contains(a))currentProgram.getFunctionManager().createFunction("supplier_"+n,a,new AddressSet(a),SourceType.USER_DEFINED);}
  Function cookie=getFunctionAt(toAddr(0x141539660L));if(cookie!=null)cookie.setCallFixup("security_check_cookie"); DecompInterface d=new DecompInterface();DecompileOptions opt=new DecompileOptions();opt.setMaxInstructions(500000);d.setOptions(opt);d.openProgram(currentProgram);
  try{for(String[] row:rows){DecompileResults r=d.decompileFunction(getFunctionAt(toAddr(Long.decode(row[1]))),90,monitor);if(!r.decompileCompleted())throw new Exception(r.getErrorMessage());Files.writeString(out.resolve(row[0]+".c"),"/* Actual Ghidra decompilation; current Steam Windows 53.16; "+row[1]+".."+row[2]+" */\n"+r.getDecompiledFunction().getC());println("Decompiled "+row[0]);}}finally{d.dispose();}
 }
}
