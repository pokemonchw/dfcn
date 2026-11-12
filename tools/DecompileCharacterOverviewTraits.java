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

// Actual Ghidra decompilation of a bounded renderer region. Inherited stack
// locals are external inputs; the surrounding renderer is not reconstructed.
public class DecompileCharacterOverviewTraits extends GhidraScript {
    private Address rva(String value) { return currentProgram.getImageBase().add(Long.decode(value)); }
    public void run() throws Exception {
        Path dir = Path.of(getScriptArgs()[0]);
        String edition = getScriptArgs()[1];
        String[] region = null;
        for (String line : Files.readAllLines(dir.resolve("regions.tsv"))) {
            String[] row = line.split("\t", -1);
            if (row[0].equals(edition)) region = row;
        }
        if (region == null) throw new IllegalArgumentException("Unknown edition");
        Address start = rva(region[5]), end = rva(region[6]);
        AddressSet body = new AddressSet(start, end.subtract(1));
        for (String line : Files.readAllLines(dir.resolve("calls.tsv"))) {
            String[] row = line.split("\t", -1);
            if (!row[0].equals(edition) || !row[3].equals("call")) continue;
            Address target = rva(row[2]);
            if (!body.contains(target) && getFunctionAt(target) == null)
                currentProgram.getFunctionManager().createFunction(
                    "external_" + row[2], target, new AddressSet(target), SourceType.USER_DEFINED);
        }
        for (String line : Files.readAllLines(dir.resolve(region[7]))) {
            if (!line.startsWith("0x")) continue;
            Address pc = rva(line.substring(0, line.indexOf(':')));
            if (getInstructionAt(pc) == null) {
                DisassembleCommand cmd = new DisassembleCommand(pc, body, true);
                cmd.enableCodeAnalysis(false); cmd.applyTo(currentProgram, monitor);
            }
            Instruction ins = getInstructionAt(pc);
            if (ins == null) throw new IllegalStateException("Undecoded instruction " + pc);
            Address[] flows = ins.getFlows();
            if (ins.getFlowType().isJump() && flows.length == 1 && !body.contains(flows[0]))
                ins.setFlowOverride(FlowOverride.RETURN);
        }
        Function f = currentProgram.getFunctionManager().createFunction(
            "analysis_region_overview_traits", start, body, SourceType.USER_DEFINED);
        Map<Address, ArrayList<Address>> switches = new LinkedHashMap<>();
        for (String line : Files.readAllLines(dir.resolve("switches.tsv"))) {
            String[] row = line.split("\t", -1);
            if (!row[0].equals(edition)) continue;
            Address pc = rva(row[2]), target = rva(row[7]);
            getInstructionAt(pc).addOperandReference(0, target, RefType.COMPUTED_JUMP, SourceType.USER_DEFINED);
            ArrayList<Address> targets = switches.computeIfAbsent(pc, unused -> new ArrayList<>());
            if (!targets.contains(target)) targets.add(target);
        }
        for (var entry : switches.entrySet())
            new JumpTable(entry.getKey(), entry.getValue(), true, 0).writeOverride(f);
        for (String line : Files.readAllLines(dir.resolve("literals.tsv"))) {
            String[] row = line.split("\t", -1);
            if (!row[0].equals(edition) || !row[3].equals("cstring")) continue;
            Address target = toAddr(row[2].substring(2));
            if (getDataContaining(target) == null) createAsciiString(target);
        }
        DecompInterface d = new DecompInterface();
        DecompileOptions options = new DecompileOptions(); options.setMaxInstructions(100000);
        d.setOptions(options); d.openProgram(currentProgram);
        try {
            DecompileResults result = d.decompileFunction(f, 120, monitor);
            if (!result.decompileCompleted() || result.getDecompiledFunction() == null)
                throw new IllegalStateException(result.getErrorMessage());
            Files.writeString(dir.resolve(edition + "-overview-traits-region.c"),
                "/* Actual Ghidra 12.1.4 C of a native renderer REGION, not a standalone function.\n"
                + "   " + edition + " " + region[1] + "; parent " + region[4] + "; region " + region[5] + ".." + region[6]
                + ".\n   Stack locals are inherited from the parent. Conditional exits to the continuation have\n"
                + "   analysis-only RETURN flow overrides to bound the C view; original PE bytes are unchanged.\n"
                + "   Exact switch selectors, original instructions and operands are in the adjacent TSV/ASM files. */\n"
                + result.getDecompiledFunction().getC());
            println("Decompiled " + edition + " overview trait region");
        } finally { d.dispose(); }
    }
}
