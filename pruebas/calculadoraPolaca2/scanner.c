#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> /* for atof() */

#include "./scanner.h"

int GetNextToken (struct Token *t) {
    int i = 0;
    char lexeme[MAXOP];
    while ((lexeme[i] = getchar()) == ' ' || lexeme[i] == '\t');
    switch (lexeme[i]) {
        case EOF:
            return 0;
        case Addition:
            t -> type = Addition;
            break;
        case Multiplication:
            t -> type = Multiplication;
            break;
        case Division:
            t -> type = Division;
            break;
        case Modulus:
            t -> type = Modulus;
            break;
        case PopResult:
            t -> type= PopResult;
            break;
        case Substraction:
            if (!isdigit(lexeme[++i] = getchar())) {
                t -> type = Substraction;
                ungetc(lexeme[i], stdin);
                break;
            }
        default:
            if(isdigit(lexeme[i])) {
                while (isdigit(lexeme[++i] = getchar()));
                if(lexeme[i] == '.')
                    while (isdigit(lexeme[++i] = getchar()));
                ungetc(lexeme[i], stdin);
                lexeme[i] = '\0';
                t -> type = Number;
                t -> data.val = atof(lexeme);
                break;
            }
            t -> type = LexError;
            lexeme[1] = '\0';
            t -> data.lexeme = lexeme;
            break;
    }
    return 1;
}
