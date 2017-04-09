#include <iostream>
#include <ANTLRInputStream.h>
#include <CommonTokenStream.h>
#include <tree/ParseTree.h>
#include <unistd.h>
#include "../gen/ShellGrammarLexer.h"
#include "../gen/ShellGrammarParser.h"
#include "PearlVisitor.h"

const std::string get_working_directory();

// command history
std::vector<std::string> history;

int main()
{
    for (;;)
    {
        std::cout << "\n" << get_working_directory() << " $ ";
        std::cout.flush();

        std::string line;
        getline(std::cin, line);
        if (line == "exit")
        {
            break;
        }

        // check if a previous command is supposed to be executed
        int count = 0;
        for (unsigned long i = 0; i < line.size(); ++i)
        {
            if (line.at(i) == '^')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count > 0)
        {
            if (count <= history.size())
            {
                line = history.at(history.size() - count);
            }
            else
            {
                std::cerr << "Previous command not available." << std::endl;
                continue;
            }
        }

        // add the command to the history
        history.push_back(line);

        // Create input stream, create lexer and use lexer to create stream of tokens
        try
        {
            // input the line
            antlr4::ANTLRInputStream inputStream(line);
            ShellGrammarLexer lexer(&inputStream);
            antlr4::CommonTokenStream tokens(&lexer);

            // parse the line
            ShellGrammarParser parser(&tokens);
            antlr4::tree::ParseTree *parseTree = parser.line();

            // visit the tree TODO: if parsing succeeded
            PearlVisitor visitor;
            visitor.visit(parseTree);
        }
        catch (...)
        {
            // TODO: does not catch the parse exception
        }
    }
    std::cout << "\n :)" << std::endl;

    return 0;
}

const std::string get_working_directory()
{
    char buf[2048];
    getcwd(buf, 2048);
    return std::string(buf);
}