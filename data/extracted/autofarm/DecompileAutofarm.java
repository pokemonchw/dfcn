//@category Source extraction
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;
import java.io.*;
import java.nio.charset.StandardCharsets;
public class DecompileAutofarm extends GhidraScript {
 public void run() throws Exception {
  String[] args=getScriptArgs();
  DecompInterface di=new DecompInterface(); di.toggleCCode(true); di.toggleSyntaxTree(true); di.setSimplificationStyle("decompile");
  if(!di.openProgram(currentProgram)) throw new IOException("Cannot open PE");
  long base=currentProgram.getImageBase().getOffset();
  // These leaf callback addresses are stored by the actual Lua function
  // registration constructor at RVA 0x1060; they are not inferred captions.
  long[] callbacks={0x18980,0x18af0,0x18b10,0x21790};
  String[] names={"is_farm_excluded","set_default_threshold","set_farm_excluded","git_description"};
  for(int i=0;i<callbacks.length;i++){
   var address=toAddr(base+callbacks[i]);
   Function f=getFunctionAt(address);
   if(f==null){disassemble(address);f=createFunction(address,"autofarm_"+names[i]);}
   if(f!=null)f.setName("autofarm_"+names[i],SourceType.USER_DEFINED);
  }
  try(PrintWriter out=new PrintWriter(new OutputStreamWriter(new FileOutputStream(args[0]),StandardCharsets.UTF_8))){
   FunctionIterator functions=currentProgram.getFunctionManager().getFunctions(true); int n=0;
   while(functions.hasNext()&&!monitor.isCancelled()){
    Function f=functions.next(); long rva=f.getEntryPoint().getOffset()-base;
    if(rva<0x1000||rva>=0x21800||(f.isThunk()&&!f.getName().startsWith("autofarm_")))continue;
    DecompileResults result=di.decompileFunction(f,120,monitor);
    out.printf("\n/* RVA 0x%x; VA %s; %s */\n",rva,f.getEntryPoint(),f.getName());
    if(result.decompileCompleted()&&result.getDecompiledFunction()!=null)out.println(result.getDecompiledFunction().getC());
    else out.println("/* Actual decompiler error: "+result.getErrorMessage()+" */");
    n++; if(n%50==0)println("Decompiled plugin functions: "+n);
   }
   println("Saved actual Ghidra decompilation of "+n+" plugin functions");
  }finally{di.dispose();}
 }
}
