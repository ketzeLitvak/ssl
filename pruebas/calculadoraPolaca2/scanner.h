#pragma once
#define MAXOP 100 /* max size of operand or operator */

typedef enum TokenType TokenType;

enum TokenType {
    Number,
    Addition = '+',
    Multiplication = '*',
    Substraction = '-',
    Division = '/',
    Modulus = '%',
    PopResult = '\n',
    LexError
};

union TokenData {
   double val;
   char* lexeme;
};

struct Token {
    TokenType type;
    union TokenData data;
};

int GetNextToken(struct Token *t); //Returns true if a token was read, the read token is stored in t.
