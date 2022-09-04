#include <stdio.h>
#include "./stack.h"
#include "./scanner.h"
#include <math.h>

#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */

int main() {
    struct Token token;
    double op2;

    while (GetNextToken(&token)) {
        switch (token.type) {
            case Number:
                push(token.data.val);
                break;
            case Addition:
                push(pop() + pop());
                break;
            case Multiplication:
                push(pop() * pop());
                break;
            case Substraction:
                op2 = pop();
                push(pop() - op2);
                break; 
            case Division:
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("Cant have zero as divisor\n");
                break;
            case Modulus:
                op2 = pop();
                if (op2 != 0.0) {
                    //push((int) pop() % (int) op2); // int modulus
                    push(fmod(pop(), op2)); // double modulus
                } else
                    printf("Cant have zero as modulus\n");
                break;
            case PopResult:
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("Unknown command %s\n", token.data.lexeme);
                break;
        }
    }
    return 0;
}