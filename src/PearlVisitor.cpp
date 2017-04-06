//
// Created by sven on 31-3-17.
//

#include <unistd.h>
#include <wait.h>
#include "PearlVisitor.h"

std::string bin = "/bin/";

int file_descriptor;

std::string program;
std::string parameter;

std::list<std::string> parameters;
std::list<char *[]> commands;

bool pipeline;
int direction = 0;

int change_working_directory(std::list<std::string>* list);

antlrcpp::Any PearlVisitor::visitLine(ShellGrammarParser::LineContext *ctx) {

    antlrcpp::Any any = visitChildren(ctx);

    for (std::list<char *[]>::const_iterator i = commands.cbegin(); i != commands.cend(); ++i)
    {
        int pid = fork();
        // child
        if (pid == 0)
        {
            // execute the program
            execvp((*i)[0], (*i));
            std::cerr << "No program '" << program << "' found." << std::endl;
            exit(0);
        }
    }

    commands.clear();

    return any;
}

antlrcpp::Any PearlVisitor::visitCommand(ShellGrammarParser::CommandContext *ctx) {

    antlrcpp::Any any = visitChildren(ctx);

    if (program == "cd") {
        int result = change_working_directory(&parameters);
        if (result == -1)
        {
            std::cerr << "Directory not found. " << std::endl;
        }
        return any;
    }

    // get the whole command
    char *args[parameters.size() + 2];
    args[0] = (char *) bin.append(program).c_str();

    int c = 0;
    for (std::list<std::string>::const_iterator i = parameters.cbegin(); i != parameters.cend(); ++i)
    {
        ++c;
        args[c] = (char *) i->c_str();
    }
    args[c + 1] = NULL;
    parameters.clear();

    commands.push_back(args);

    return any;
}

antlrcpp::Any PearlVisitor::visitExtra(ShellGrammarParser::ExtraContext *ctx) {
    return ShellGrammarBaseVisitor::visitExtra(ctx);
}

antlrcpp::Any PearlVisitor::visitInput(ShellGrammarParser::InputContext *ctx) {
    std::cout << "Input?: " << parameter << std::endl;
    direction = -1;
    return ShellGrammarBaseVisitor::visitInput(ctx);
}

antlrcpp::Any PearlVisitor::visitOutput(ShellGrammarParser::OutputContext *ctx) {
    std::cout << "Output?: " << parameter << std::endl;
    direction = 1;
    return ShellGrammarBaseVisitor::visitOutput(ctx);
}

int change_working_directory(std::list<std::string>* list) {
    int result = -1;
    if (list->size() > 0) {
        result = chdir(list->back().c_str());
        list->pop_back();
    }
    return result;
}