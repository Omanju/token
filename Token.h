//==============================================================================
//! @file Token.h
//==============================================================================
#pragma once

#include <string>
#include "TokenType.h"

class Token
{
public:
    Token();
    Token(TokenType type, const std::string & text, int intValue);

    // getters
    TokenType type()const;
    const std::string & text()const;
    int intValue()const;

private:
    TokenType mType;
    std::string mText;
    int mIntValue;
};
