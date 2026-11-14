//@category Research
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.util.*;

/** Export selected native search bodies from an existing disk-image project. */
public class DecompileSearchAssociation extends GhidraScript {
    public void run() throws Exception {
        Path out = Path.of(getScriptArgs()[0]);
        String expected = getScriptArgs()[1];
        if (!expected.equalsIgnoreCase(currentProgram.getExecutableSHA256()))
            throw new IllegalArgumentException("Project does not contain the selected disk image");
        Files.writeString(out.resolve("decompiler-image.txt"), "path=" + currentProgram.getExecutablePath()
            + "\nsha256=" + currentProgram.getExecutableSHA256()
            + "\nlanguage=" + currentProgram.getLanguageID() + "\n");
        List<String[]> records = new ArrayList<>();
        StringBuilder literals = new StringBuilder("role\tinstruction\tliteral_address\ttext\n");
        for (String line : Files.readAllLines(out.resolve("functions.tsv"))) {
            String[] row = line.split("\t");
            Address start = toAddr(row[1]);
            AddressSet body = new AddressSet();
            for (String part : row[2].split(";")) {
                String[] bounds = part.split("-");
                Address a = toAddr(bounds[0]), b = toAddr(bounds[1]).subtract(1);
                body.add(a, b);
                DisassembleCommand command = new DisassembleCommand(a, new AddressSet(a, b), true);
                command.enableCodeAnalysis(false);
                command.applyTo(currentProgram, monitor);
            }
            Function f = getFunctionAt(start);
            if (f == null) f = currentProgram.getFunctionManager().createFunction(row[0], start, body, SourceType.USER_DEFINED);
            else { f.setBody(body); f.setName(row[0], SourceType.USER_DEFINED); }
            StringBuilder assembly = new StringBuilder();
            InstructionIterator instructions = currentProgram.getListing().getInstructions(body, true);
            while (instructions.hasNext()) {
                Instruction ins = instructions.next();
                assembly.append(ins.getAddress()).append("\t").append(ins).append("\n");
                for (Reference reference : ins.getReferencesFrom()) {
                    Address address = reference.getToAddress();
                    var block = currentProgram.getMemory().getBlock(address);
                    if (block == null || block.isExecute()) continue;
                    StringBuilder value = new StringBuilder();
                    boolean terminated = false, letter = false;
                    for (int n = 0; n < 4096 && block.contains(address.add(n)); ++n) {
                        int c = currentProgram.getMemory().getByte(address.add(n)) & 255;
                        if (c == 0) { terminated = true; break; }
                        if ((c < 32 && c != 10 && c != 13 && c != 9) || c > 126) break;
                        value.append((char)c);
                        letter |= (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
                    }
                    if (!terminated || !letter || value.length() < 3) continue;
                    literals.append(row[0]).append("\t").append(ins.getAddress()).append("\t")
                        .append(address).append("\t").append(value.toString().replace("\n", "\\n")
                        .replace("\r", "\\r").replace("\t", "\\t")).append("\n");
                    if (getDataAt(address) == null) {
                        try { createAsciiString(address); } catch (Exception ignored) {}
                    }
                }
            }
            Files.writeString(out.resolve(row[0] + ".asm"), assembly.toString());
            records.add(row);
        }
        Files.writeString(out.resolve("literals.tsv"), literals.toString());
        DecompInterface decompiler = new DecompInterface();
        DecompileOptions options = new DecompileOptions();
        options.setMaxPayloadMBytes(128);
        decompiler.setOptions(options);
        decompiler.openProgram(currentProgram);
        try {
            for (String[] row : records) {
                DecompileResults result = decompiler.decompileFunction(getFunctionAt(toAddr(row[1])), 90, monitor);
                if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    Files.writeString(out.resolve(row[0] + ".c"),
                        "/* Actual Ghidra output; researcher-assigned role. Native entry " + row[1]
                        + "; image " + expected + ". */\n" + result.getDecompiledFunction().getC());
                    println("DECOMPILED " + row[0]);
                } else println("INCOMPLETE " + row[0] + " " + result.getErrorMessage());
            }
        } finally { decompiler.dispose(); }
    }
}
