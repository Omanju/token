#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include "Token.h"
#include "KeyWord.h"

void initCharType();
Token nextToken();
int nextChar();
bool is_ope2(int c1, int c2);
TokenType get_type(const std::string & s);

TokenType ctype[256];
Token token;
std::ifstream fin;

KeyWord tblKeyWord[] = 
{
    KeyWord("if", If),
    KeyWord("else", Else),
    KeyWord("if", If),
    KeyWord("if", If),
    KeyWord("if", If),
    KeyWord("if", If),
    KeyWord("if", If),
    KeyWord("if", If),
    KeyWord("if", If),
};

int main(int argc, char * argv[])
{
    std::cout << "Hello! Token!" << std::endl;
    
    return 0;
}
