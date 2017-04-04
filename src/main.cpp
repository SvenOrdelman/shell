#include <iostream>
#include <ANTLRInputStream.h>
#include <CommonTokenStream.h>
#include <tree/ParseTree.h>
#include "../gen/ShellGrammarLexer.h"
#include "../gen/ShellGrammarParser.h"
#include "PearlVisitor.h"

std::string working_directory = "/home/jeroen/Downloads/week 7";

int main() {
    for(;;) {
        std::cout << working_directory << " $ ";
        std::cout.flush();

        std::string line;
        getline(std::cin, line);
        if (line == "exit"){
            break;
        }

        // Create input stream, create lexer and use lexer to create stream of tokens
        try
        {
            antlr4::ANTLRInputStream inputStream(line);
            ShellGrammarLexer lexer(&inputStream);
            antlr4::CommonTokenStream tokens(&lexer);

            std::cout << lexer. << std::endl;

            // Create parser
            ShellGrammarParser parser(&tokens);
            antlr4::tree::ParseTree *parseTree = parser.line();

            // Then, visit your tree
            PearlVisitor visitor;
            visitor.visit(parseTree);
        }
        catch (...)
        {

        }
    }
    std::cout << "bye" << std::endl;

    return 0;
}