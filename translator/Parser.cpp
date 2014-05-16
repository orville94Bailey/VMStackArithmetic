#include "Parser.h"

Parser::Parser()
{
    std::string filename;
    std::cout<<"Enter filename to parse: ";
    std::cin>>filename;
    ParsingFile.open(filename.c_str());
}

bool Parser::hasMoreCommands()
{
    if(ParsingFile.good())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Parser::advance()
{
    if(hasMoreCommands())
    {
        std::getline(ParsingFile,currentCommand);
    }
    else
    {
        std::cout<<"No more commands read"<<std::endl;
    }
}

Command_Type Parser::commandType()
{
    switch(currentCommand[0])
    {
    case 'a':
        if (currentCommand[1]=='d' && currentCommand[2]=='d')
        {
            return C_ARITHMETIC;
        }
        else if (currentCommand[1]=='n' && currentCommand[2]=='d')
        {
            return C_ARITHMETIC;
        }
        else
        {
            std::cout<<"An error occured reading an instruction."<<std::endl;
        }
        break;

    case 'c':
        if (currentCommand[1]=='a' && currentCommand[2]=='l' &&
            currentCommand[3]=='l')
        {
            return C_CALL;
        }
        else
        {
            std::cout<<"An error occured reading an instruction."<<std::endl;
        }
        break;

    case 'e':
        if(currentCommand[1]=='q')
        {
            return C_ARITHMETIC;
        }
        else
        {
            std::cout<<"An error occured reading an instruction."<<std::endl;
        }
        break;

    case 'f':
        if (currentCommand[1]=='u' &&
            currentCommand[2]=='n' &&
            currentCommand[3]=='c' &&
            currentCommand[4]=='t' &&
            currentCommand[5]=='i' &&
            currentCommand[6]=='o' &&
            currentCommand[7]=='n')
        {
            return C_FUNCTION;
        }
        else
        {
            std::cout<<"An error occured reading an instruction."<<std::endl;
        }
        break;

    case 'g':
        if (currentCommand[1]=='t')
        {
            return C_ARITHMETIC;
        }
        else if (currentCommand[1]=='o' && currentCommand[2]=='t' &&
                 currentCommand[3]=='0')
        {
            return C_GOTO;
        }
        else
        {
            std::cout<<"An error occured reading an instruction."<<std::endl;
        }
        break;

    case 'i':
        if(currentCommand[1]=='f' && currentCommand[2]=='-' &&
           currentCommand[3]=='g' && currentCommand[4]=='o' &&
           currentCommand[5]=='t' && currentCommand[6]=='o')
        {
            return C_IF;
        }
        else
        {
            std::cout<<"An error occured reading an instruction."<<std::endl;
        }
        break;


    case 'l':
        if(currentCommand[1]=='t')
        {
            return C_ARITHMETIC;
        }
        else if(currentCommand[1]=='a' && currentCommand[2]=='b' &&
                currentCommand[3]=='e' && currentCommand[4]=='l')
        {
            return C_LABEL;
        }
        else
        {
            std::cout<<"An error occured reading an instruction."<<std::endl;
        }
        break;

    case 'n':
        if (currentCommand[1]=='e' && currentCommand[2]=='g')
        {
            return C_ARITHMETIC;
        }
        else if(currentCommand[1]=='o' && currentCommand[2]=='t')
        {
            return C_ARITHMETIC;
        }
        else
        {
            std::cout<<"An error occured reading an instruction."<<std::endl;
        }
        break;

    case 'o':
        if(currentCommand[1]=='r')
        {
            return C_ARITHMETIC;
        }
        else
        {
            std::cout<<"An error occured reading an instruction."<<std::endl;
        }
        break;

    case 'p':
        if (currentCommand[1]=='u' && currentCommand[2]=='s' &&
            currentCommand[3]=='h')
        {
            return C_PUSH;
        }
        else if(currentCommand[1]=='o' && currentCommand[2]=='p')
        {
            return C_POP;
        }
        else
        {
            std::cout<<"An error occured reading an instruction."<<std::endl;
        }
        break;

    case 'r':
        if(currentCommand[1]=='e' && currentCommand[2]=='t' &&
           currentCommand[3]=='u' && currentCommand[4]=='r' &&
           currentCommand[5]=='n')
        {
            return C_RETURN;
        }
        else
        {
            std::cout<<"An error occured reading an instruction."<<std::endl;
        }
        break;

    case 's':
        if(currentCommand[1]=='u' && currentCommand[2]=='b')
        {
            return C_ARITHMETIC;
        }
        else
        {
            std::cout<<"An error occured reading an instruction."<<std::endl;
        }
        break;

    default:
        std::cout<<"An error occured reading an instruction."<<std::endl;
        break;
    }
}

std::string Parser::arg1()
{
    std::string arithmeticCommand;
    Command_Type currentCommandType;
    currentCommandType = commandType();
    if (currentCommandType==C_ARITHMETIC)
    {
        currentCommand;
    }
}
