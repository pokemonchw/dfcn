//@category Source extraction
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.JumpTable;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

// Actual Windows PE source decompilation. Read the configured image on disk;
// decode every executable branch and restore every native selector alias.
// This is source extraction, with no attachment to the running game.
public class DecompileLoadGameModDialogPE extends GhidraScript {
    private Address rva(String value) {
        return currentProgram.getImageBase().add(Long.decode(value));
    }

    @Override public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2)
            throw new IllegalArgumentException("source directory, edition, optional roles");
        Path directory = Path.of(args[0]);
        String edition = args[1];
        List<String> requested = new ArrayList<>();
        for (int index = 2; index < args.length; ++index)
            requested.addAll(Arrays.asList(args[index].split(",")));
        List<String[]> bodies = new ArrayList<>();
        for (String row : Files.readAllLines(directory.resolve("pe-ghidra-functions.tsv"))) {
            String[] fields = row.split("\t", -1);
            if (fields[0].equals(edition) && (requested.isEmpty() || requested.contains(fields[2])))
                bodies.add(fields);
        }
        if (!requested.isEmpty()) {
            bodies.sort(Comparator.comparingInt(fields -> requested.indexOf(fields[2])));
        }
        Set<String> selectedRoles = new HashSet<>();
        for (String[] fields : bodies) selectedRoles.add(fields[2]);
        // Give every external supplier a boundary, preventing Ghidra from
        // absorbing another complete unwind owner at a small tail-called getter.
        for (String row : Files.readAllLines(directory.resolve("pe-calls.tsv"))) {
            String[] fields = row.split("\t", -1);
            if (fields.length != 5 || !fields[0].equals(edition)) continue;
            Address entry = rva(fields[3]);
            if (getFunctionAt(entry) == null && currentProgram.getMemory().contains(entry))
                currentProgram.getFunctionManager().createFunction("load_supplier_" + fields[3],
                    entry, new AddressSet(entry), SourceType.USER_DEFINED);
        }
        for (String[] fields : bodies) {
            Address start = rva(fields[3]), end = rva(fields[4]).subtract(1);
            AddressSet body = new AddressSet(start, end);
            DisassembleCommand initial = new DisassembleCommand(start, body, true);
            initial.enableCodeAnalysis(false);
            initial.applyTo(currentProgram, monitor);
            for (String line : Files.readAllLines(directory.resolve(fields[5]))) {
                if (!line.startsWith("0x")) continue;
                Address pc = rva(line.substring(0, line.indexOf(':')));
                if (!body.contains(pc)) continue;
                if (getInstructionAt(pc) == null) {
                    DisassembleCommand command = new DisassembleCommand(pc, body, true);
                    command.enableCodeAnalysis(false);
                    command.applyTo(currentProgram, monitor);
                }
                Instruction instruction = getInstructionAt(pc);
                if (instruction == null) throw new IOException("Cannot decode original instruction " + pc);
                Address[] flows = instruction.getFlows();
                if (instruction.getFlowType().isJump() && !instruction.getFlowType().isConditional()
                        && flows.length == 1 && !body.contains(flows[0]))
                    instruction.setFlowOverride(FlowOverride.CALL_RETURN);
            }
            Function function = getFunctionAt(start);
            if (function == null) function = currentProgram.getFunctionManager().createFunction(
                "load_" + fields[2].replace('-', '_'), start, body, SourceType.USER_DEFINED);
            else {
                if (function.isThunk()) function.setThunkedFunction(null);
                function.setBody(body);
                function.setName("load_" + fields[2].replace('-', '_'), SourceType.USER_DEFINED);
            }
        }
        Map<Address, ArrayList<Address>> switches = new LinkedHashMap<>();
        for (String row : Files.readAllLines(directory.resolve("pe-switches.tsv"))) {
            String[] fields = row.split("\t", -1);
            if (!fields[0].equals(edition)) continue;
            if (!selectedRoles.contains(fields[1])) continue;
            Address site = rva(fields[2]), target = rva(fields[7]);
            getInstructionAt(site).addOperandReference(0, target, RefType.COMPUTED_JUMP, SourceType.USER_DEFINED);
            ArrayList<Address> targets = switches.computeIfAbsent(site, unused -> new ArrayList<>());
            if (!targets.contains(target)) targets.add(target);
        }
        for (Map.Entry<Address, ArrayList<Address>> entry : switches.entrySet())
            new JumpTable(entry.getKey(), entry.getValue(), true, 0)
                .writeOverride(getFunctionContaining(entry.getKey()));
        for (String row : Files.readAllLines(directory.resolve("pe-literals.tsv"))) {
            String[] fields = row.split("\t", -1);
            if (fields.length != 6 || !fields[0].equals(edition) || !fields[4].equals("cstring")) continue;
            Address address = toAddr(fields[3].substring(2));
            if (getDataContaining(address) == null)
                try { createAsciiString(address); } catch (Exception sharedSuffix) { }
        }
        DecompInterface decompiler = new DecompInterface();
        DecompileOptions options = new DecompileOptions();
        options.setMaxInstructions(1000000);
        options.setMaxPayloadMBytes(256);
        options.setMaxJumpTableEntries(4096);
        decompiler.setOptions(options);
        decompiler.toggleCCode(true);
        if (!decompiler.openProgram(currentProgram)) throw new IOException("openProgram failed");
        try (PrintWriter output = new PrintWriter(Files.newBufferedWriter(
                directory.resolve("pe-" + edition + (!requested.isEmpty() ? "-selected" : "") + "-ghidra-decompiled.c"), StandardCharsets.UTF_8))) {
            for (String[] fields : bodies) {
                decompiler.setSimplificationStyle("decompile");
                DecompileResults result = decompiler.decompileFunction(
                    getFunctionAt(rva(fields[3])), 600, monitor);
                if (!result.decompileCompleted() || result.getDecompiledFunction() == null)
                    throw new IOException("Decompilation failed at " + fields[3] + ": " + result.getErrorMessage());
                String code = "/* " + edition + " " + fields[1] + "; " + fields[2]
                    + "; RVA " + fields[3] + ".." + fields[4] + " */\n"
                    + result.getDecompiledFunction().getC();
                output.println(code);
                output.flush();
                Files.writeString(directory.resolve("pe-" + edition + "-" + fields[2] + ".c"),
                    code, StandardCharsets.UTF_8);
                println("Decompiled " + edition + " " + fields[2] + " at " + fields[3]);
            }
        } finally { decompiler.dispose(); }
    }
}

