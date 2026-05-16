// Exports all Ghidra-recognized functions to C-like pseudocode files.
// Run with analyzeHeadless using -postScript ExportAllDecompiled.java <output_dir>.

import java.io.File;
import java.io.PrintWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.util.task.ConsoleTaskMonitor;

public class ExportAllDecompiled extends GhidraScript {
	@Override
	protected void run() throws Exception {
		if ( getScriptArgs().length < 1 ) {
			printerr( "Usage: ExportAllDecompiled.java <output_dir>" );
			return;
		}

		File outDir = new File( getScriptArgs()[0] );
		if ( !outDir.exists() && !outDir.mkdirs() ) {
			printerr( "Could not create output directory: " + outDir.getAbsolutePath() );
			return;
		}

		DecompInterface decompiler = new DecompInterface();
		DecompileOptions options = new DecompileOptions();
		options.grabFromProgram( currentProgram );
		decompiler.setOptions( options );
		decompiler.openProgram( currentProgram );

		File indexFile = new File( outDir, "index.tsv" );
		int count = 0;
		int failed = 0;

		try ( PrintWriter index = new PrintWriter( indexFile, "UTF-8" ) ) {
			index.println( "address\tname\tfile\tstatus" );
			FunctionIterator functions = currentProgram.getFunctionManager().getFunctions( true );
			while ( functions.hasNext() && !monitor.isCancelled() ) {
				Function function = functions.next();
				String address = function.getEntryPoint().toString();
				String name = function.getName();
				String safeName = name.replaceAll( "[^A-Za-z0-9_.$-]", "_" );
				String fileName = address + "_" + safeName + ".c";
				File outFile = new File( outDir, fileName );
				String status = "ok";

				try ( PrintWriter out = new PrintWriter( outFile, "UTF-8" ) ) {
					out.println( "/*" );
					out.println( " * Function: " + name );
					out.println( " * Entry:    " + address );
					out.println( " * Warning:  Decompiled pseudocode, not original source." );
					out.println( " */" );
					out.println();

					DecompileResults results = decompiler.decompileFunction( function, 60, new ConsoleTaskMonitor() );
					if ( results.decompileCompleted() && results.getDecompiledFunction() != null ) {
						out.println( results.getDecompiledFunction().getC() );
					} else {
						status = "failed";
						failed++;
						out.println( "/* decompilation failed */" );
						out.println( "/* " + results.getErrorMessage() + " */" );
					}
				}

				index.println( address + "\t" + name + "\t" + fileName + "\t" + status );
				count++;
			}
		}

		decompiler.dispose();
		println( "Exported " + count + " functions to " + outDir.getAbsolutePath() + " (" + failed + " failed)" );
	}
}
