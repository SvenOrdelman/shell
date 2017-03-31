#include <iostream>
#include <ANTLRInputStream.h>
#include <CommonTokenStream.h>
#include <tree/ParseTree.h>
#include "../gen/ShellGrammarLexer.h"
#include "../gen/ShellGrammarParser.h"

std::string working_directory = "/";

int main() {
	for(;;) {
		std::cout << working_directory << " $ ";
		std::cout.flush();

		std::string line;
		getline(std::cin, line);
		if(line == "exit"){
			break;
		}

		// Create input stream, create lexer and use lexer to create stream of tokens
		antlr4::ANTLRInputStream inputStream(line);
		ShellGrammarLexer lexer(&inputStream);
		antlr4::CommonTokenStream tokens(&lexer);

		// Create parser
		ShellGrammarParser parser(&tokens);
		antlr4::tree::ParseTree *parseTree = parser.command();

		// Then, visit your tree
		// MyVisitor visitor;
		// visitor.visit(parseTree);
	}
	std::cout << "bye" << std::endl;

	return 0;
}
