#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include "Token.h"
#include "TokenTypeTable.h"
#include "KeyWord.h"

Token nextToken();
int nextChar();
bool is_ope2(int c1, int c2);
TokenType get_type(const std::string & s);

TokenTypeTable tokens;
Token token;
std::ifstream fin;

KeyWord tblKeyWord[] = 
{
    KeyWord("if",    If),     KeyWord("else",  Else),
    KeyWord("end",   End),    KeyWord("print", Print),
    KeyWord("(",     Lparen), KeyWord(")",     Rparen),
    KeyWord("+",     Plus),   KeyWord("-",     Minus),
    KeyWord("*",     Multi),  KeyWord("/",     Divi),
    KeyWord("=",     Assign), KeyWord(",",     Comma),
    KeyWord("==",    Equal),  KeyWord("!=",    NotEqual),
    KeyWord("<",     Less),   KeyWord("<=",    LessEq),
    KeyWord(">",     Great),  KeyWord(">=",    GreatEq),
    KeyWord("",      END_List),
};

int main(int argc, char * argv[])
{
    if(argc == 1)
    {
        std::exit(1);
    }

    fin.open(argv[1]);
    if(!fin)
    {
        std::exit(1);
    }

    std::cout << "text   kind intValue" << std::endl;

    for(token = nextToken(); token.type() != EofTkn; token = nextToken())
    {
        std::cout << std::left << std::setw(10) << token.text()
                  << std::right << std::setw(3) << token.type()
                  << " " << token.intValue() << std::endl;
    }
    
    return 0;
}

Token nextToken()
{
    TokenType type;
    int ch0, num = 0;
    std::string txt = "";

    // 空行読み捨て
    static int ch = ' ';
    while(std::isspace(ch))
    {
        ch = nextChar();
    }

    if(ch == EOF)
    {
        return Token(EofTkn, txt);
    }

    switch(tokens[ch])
    {
        case Letter:
            break;
        case String:
            break;
        case IntNum:
            break;
        case Digit:
            break;
        default:
            break;
    }
}

int nextChar()
{
    return 0;
}

