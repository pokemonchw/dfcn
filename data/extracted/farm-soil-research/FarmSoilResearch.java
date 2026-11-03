//@category Research
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
public class FarmSoilResearch extends GhidraScript {
 public void run() throws Exception {
  Path out=Path.of(getScriptArgs()[0]);
  for(String line:Files.readAllLines(out.resolve("globals.tsv"))){String[] r=line.split("\t");createLabel(toAddr(r[1]),r[0],true);}
  for(String line:Files.readAllLines(out.resolve("functions.tsv"))){
   String[] r=line.split("\t"); Address a=toAddr(r[1]), b=toAddr(r[2]).subtract(1); AddressSet body=new AddressSet(a,b);
   DisassembleCommand dc=new DisassembleCommand(a,body,true);dc.enableCodeAnalysis(false);dc.applyTo(currentProgram,monitor);
   Function f=getFunctionAt(a); if(f==null) f=currentProgram.getFunctionManager().createFunction(r[0],a,body,SourceType.USER_DEFINED); else {f.setBody(body);f.setName(r[0],SourceType.USER_DEFINED);}
  }
  DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
  try {for(String line:Files.readAllLines(out.resolve("functions.tsv"))){String[] r=line.split("\t");Function f=getFunctionAt(toAddr(r[1])); DecompileResults res=d.decompileFunction(f,90,monitor);
   if(res.decompileCompleted()&&res.getDecompiledFunction()!=null){Files.writeString(out.resolve(r[0]+".c"),"/* Actual Ghidra output; current installed Steam PE:6a70a6d9:02711000; VA "+r[1]+".."+r[2]+". Function names assigned by analysis. */\n"+res.getDecompiledFunction().getC());println("DECOMPILED "+r[0]);}else println("FAILED "+r[0]+" "+res.getErrorMessage());
  }}finally{d.dispose();}
 }
}
