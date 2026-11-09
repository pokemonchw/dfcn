//@category Research
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;

/** Offline export of selected disk-image functions; does not run game code. */
public class DecompileFoodDecay extends GhidraScript {
 public void run() throws Exception {
  Path out=Path.of(getScriptArgs()[0]);
  String manifest=getScriptArgs().length>1 ? getScriptArgs()[1] : "functions.tsv";
  Files.writeString(out.resolve("image.txt"), "path="+currentProgram.getExecutablePath()+
   "\nsha256="+currentProgram.getExecutableSHA256()+"\nlanguage="+currentProgram.getLanguageID()+"\n");
  for(String line:Files.readAllLines(out.resolve(manifest))) {
   String[] r=line.split("\t"); Address a=toAddr(r[1]), b=toAddr(r[2]).subtract(1);
   AddressSet body=new AddressSet(a,b);
   DisassembleCommand dc=new DisassembleCommand(a,body,true);
   dc.enableCodeAnalysis(false); dc.applyTo(currentProgram,monitor);
   Function f=getFunctionAt(a);
   if(f==null) f=currentProgram.getFunctionManager().createFunction(r[0],a,body,SourceType.USER_DEFINED);
   else { f.setBody(body); f.setName(r[0],SourceType.USER_DEFINED); }
  }
  DecompInterface d=new DecompInterface(); DecompileOptions options=new DecompileOptions();
  options.setMaxPayloadMBytes(128); d.setOptions(options); d.openProgram(currentProgram);
  try {
   for(String line:Files.readAllLines(out.resolve(manifest))) {
    String[] r=line.split("\t"); DecompileResults res=d.decompileFunction(getFunctionAt(toAddr(r[1])),90,monitor);
    if(res.decompileCompleted() && res.getDecompiledFunction()!=null) {
     Files.writeString(out.resolve(r[0]+".c"), "/* Actual Ghidra 12.1.4 output; Steam 53.16. Researcher-assigned name. VA "+r[1]+".."+r[2]+" */\n"+res.getDecompiledFunction().getC());
     println("DECOMPILED "+r[0]);
    } else println("INCOMPLETE "+r[0]+" "+res.getErrorMessage());
   }
  } finally { d.dispose(); }
 }
}
