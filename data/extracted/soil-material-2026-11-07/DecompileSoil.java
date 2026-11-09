//@category Research
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;

/** Offline source export from the selected disk image; never executes game code. */
public class DecompileSoil extends GhidraScript {
    public void run() throws Exception {
        Path out = Path.of(getScriptArgs()[0]);
        Files.writeString(out.resolve("image.txt"),
            "path=" + currentProgram.getExecutablePath() +
            "\nsha256=" + currentProgram.getExecutableSHA256() +
            "\nlanguage=" + currentProgram.getLanguageID() + "\n");
        for (String line : Files.readAllLines(out.resolve("functions.tsv"))) {
            String[] row = line.split("\t");
            Address entry = toAddr(row[1]);
            AddressSet body = new AddressSet(entry, toAddr(row[2]).subtract(1));
            DisassembleCommand cmd = new DisassembleCommand(entry, body, true);
            cmd.enableCodeAnalysis(false);
            cmd.applyTo(currentProgram, monitor);
            Function function = getFunctionAt(entry);
            if (function == null) {
                currentProgram.getFunctionManager().createFunction(
                    row[0], entry, body, SourceType.USER_DEFINED);
            } else {
                function.setBody(body);
                function.setName(row[0], SourceType.USER_DEFINED);
            }
        }
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try {
            for (String line : Files.readAllLines(out.resolve("functions.tsv"))) {
                String[] row = line.split("\t");
                DecompileResults result = decompiler.decompileFunction(
                    getFunctionAt(toAddr(row[1])), 90, monitor);
                if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    Files.writeString(out.resolve(row[0] + ".c"),
                        "/* Actual Ghidra output; researcher-assigned name. VA " +
                        row[1] + ".." + row[2] + "; see image.txt for input identity. */\n" +
                        result.getDecompiledFunction().getC());
                    println("DECOMPILED " + row[0]);
                } else {
                    println("INCOMPLETE " + row[0] + " " + result.getErrorMessage());
                }
            }
        } finally {
            decompiler.dispose();
        }
    }
}
