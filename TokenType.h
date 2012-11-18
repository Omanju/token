//==============================================================================
//! @file TokenType.h
//==============================================================================
#pragma once

enum TokenType
{
    Lparen = 1,                 // (
    Rparen,                     // )
    Plus,                       // +
    Minus,                      // -
    Multi,                      // *
    Divi,                       // /
    Assign,                     // =
    Comma,                      // ,
    DblQ,                       // "
    Equal,                      // ==
    NotEqual,                   // !=
    Less,                       // <
    LessEq,                     // <=
    Great,                      // >
    GreatEq,                    // >=
    If,                         // if
    Else,                       // else
    End,                        // end
    Print,                      // print
    Ident,                      //
    IntNum,                     // 100
    String,                     // "foo"
    Letter,                     // 'a'
    Digit,                      // '1'
    EofTkn,                     // EOF
    Others,
    END_List
};
