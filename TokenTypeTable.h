//==============================================================================
//! @file TokenTypeTable.h
//==============================================================================
#pragma once
#include "TokenType.h"

class TokenTypeTable
{
public:
    static const unsigned int MAX_TOKEN_COUNT = 256;

    TokenTypeTable();
    TokenType operator[](const char key)const;

private:
    TokenType mTable[MAX_TOKEN_COUNT];
};
