#pragma once

class KeyWord
{
public:
    KeyWord(const char * keyName, TokenType type)
        :mKeyName(keyName)
        ,mType(type)
    {
    }
    const char * keyName()const
    {
        return mKeyName;
    }
    TokenType type()const
    {
        return mType;
    }
private:
    const char * mKeyName;
    TokenType    mType;
};
