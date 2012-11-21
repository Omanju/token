#include "TokenTypeTable.h"

TokenTypeTable::TokenTypeTable()
{
    for(int i=0; i<MAX_TOKEN_COUNT; ++i)
    {
        mTable[i] = Others;
    }
    for(int i='0'; i<'9'; ++i)
    {
        mTable[i] = Digit;
    }
    for(int i='A'; i<'Z'; ++i)
    {
        mTable[i] = Letter;
    }
    for(int i='a'; i<'z'; ++i)
    {
        mTable[i] = Letter;
    }
    mTable['('] = Lparen;
    mTable[')'] = Rparen;
    mTable['<'] = Less;
    mTable['>'] = Great;
    mTable['+'] = Plus;
    mTable['-'] = Minus;
    mTable['*'] = Multi;
    mTable['_'] = Letter;
    mTable['='] = Assign;
    mTable[','] = Comma;
    mTable['"'] = DblQ;
}

TokenType TokenTypeTable::operator[](const char key)const
{
    return mTable[key];
}
