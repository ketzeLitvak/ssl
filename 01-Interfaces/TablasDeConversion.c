/*  Interfaces & Makefile
    Temperaturas
    Ezequiel Litvak
    9/5/2022
*/
#include <stdio.h>
#include "Conversion.h"

void printFilas(double (*func)(double), char* col1, char* col2, int base, int limit, int step) {
    printf(" --------------\n");
    printf("|%4s | %6s |\n", col1, col2);
    printf("|--------------|\n");
    for (int value = base; value <= limit; value = value + step) {
        printf("|%4d | %6.2f |\n", value, func(value));
    }
    printf(" --------------\n\n");
}

int main(void) {
    printFilas(Celsius, "fahr", "cel", 0, 300, 20);
    printFilas(Fahrenheit, "cel", "fahr", 0, 300, 20);
    return 0;
}