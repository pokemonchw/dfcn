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

// Offline decompilation only. The source executable is never modified or run.
public class DecompileOverviewTraitSelection extends GhidraScript {
    private Address rva(String s) { return currentProgram.getImageBase().add(Long.decode(s)); }
    public void run() throws Exception {
        Path dir = Path.of(getScriptArgs()[0]);
        for (String line : Files.readAllLines(dir.resolve("selection-functions.tsv"))) {
            String[] row = line.split("\t");
            Address start = rva(row[0]), end = rva(row[1]).subtract(1);
            AddressSet body = new AddressSet(start, end);
            for (String asm : Files.readAllLines(dir.resolve(row[2] + ".asm"))) {
                if (!asm.startsWith("0x")) continue;
                Address pc = rva(asm.substring(0, asm.indexOf(':')));
                if (!body.contains(pc)) continue;
                if (getInstructionAt(pc) == null) {
                    DisassembleCommand cmd = new DisassembleCommand(pc, body, true);
                    cmd.enableCodeAnalysis(false); cmd.applyTo(currentProgram, monitor);
                }
            }
            Function f = getFunctionAt(start);
            if (f != null) currentProgram.getFunctionManager().removeFunction(start);
            f = currentProgram.getFunctionManager().createFunction(
                "native_" + row[2].replace('-', '_'), start, body, SourceType.USER_DEFINED);
            for (Instruction ins : currentProgram.getListing().getInstructions(body, true)) {
                for (var ref : ins.getReferencesFrom()) {
                    Address target = ref.getToAddress();
                    if (ref.getReferenceType().isCall() && !body.contains(target)
                            && currentProgram.getMemory().contains(target) && getFunctionAt(target) == null)
                        currentProgram.getFunctionManager().createFunction("supplier_" + target,
                            target, new AddressSet(target), SourceType.USER_DEFINED);
                }
            }
            Map<Address, ArrayList<Address>> jumps = new LinkedHashMap<>();
            for (String sw : Files.readAllLines(dir.resolve("selection-switches.tsv"))) {
                String[] s = sw.split("\t", -1);
                if (!s[1].equals(row[2])) continue;
                Address pc = rva(s[2]), target = rva(s[7]);
                getInstructionAt(pc).addOperandReference(0, target, RefType.COMPUTED_JUMP, SourceType.USER_DEFINED);
                var targets = jumps.computeIfAbsent(pc, unused -> new ArrayList<>());
                if (!targets.contains(target)) targets.add(target);
            }
            for (var entry : jumps.entrySet())
                new JumpTable(entry.getKey(), entry.getValue(), true, 0).writeOverride(f);
        }
        DecompInterface d = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxInstructions(100000); opts.setMaxPayloadMBytes(64);
        d.setOptions(opts); d.openProgram(currentProgram);
        try {
            for (String line : Files.readAllLines(dir.resolve("selection-functions.tsv"))) {
                String[] row = line.split("\t");
                var result = d.decompileFunction(getFunctionAt(rva(row[0])), 120, monitor);
                if (!result.decompileCompleted() || result.getDecompiledFunction() == null)
                    throw new IllegalStateException(result.getErrorMessage());
                Files.writeString(dir.resolve(row[2] + ".c"),
                    "/* Actual Ghidra 12.1.4 decompilation; complete native function, RVA "
                    + row[0] + ".." + row[1] + ". Names are analyst labels. */\n"
                    + result.getDecompiledFunction().getC());
                println("Decompiled " + row[2]);
            }
        } finally { d.dispose(); }
    }
}
