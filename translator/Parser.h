#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED

#include "Config.h"

class Parser
{
public:
    Parser();
    bool hasMoreCommands();
    void advance();
    Command_Type commandType();
    std::string arg1();
    int arg2();
private:
    std::ifstream ParsingFile;
    std::string currentCommand;
};

#endif // PARSER_H_INCLUDED
