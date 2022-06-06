/*  Interfaces & Makefile
    Temperaturas
    Ezequiel Litvak
    9/5/2022
*/
#include <stdio.h>
#include "Conversion.h"
#include "TablasDeConversion.h"

void PrintFila(int value, double (*func)(double)) {
    printf("|%4d | %6.2f |\n", value, func(value));
}

void PrintFilas(double (*func)(double), char* col1, char* col2, int base, int limit, int step) {
    printf(" --------------\n");
    printf("|%4s | %6s |\n", col1, col2);
    printf("|--------------|\n");
    for (int value = base; value <= limit; value = value + step) {
        PrintFila(value, func);
    }
    printf(" --------------\n\n");
}

void PrintTablaCelsius(int base, int limit, int step) {
    PrintFilas(Fahrenheit, "cel", "fahr", base, limit, step);
}

void PrintTablaFahrenheit(int base, int limit, int step) {
    PrintFilas(Celsius, "fahr", "cel", base, limit, step);
}

int main(void) {
    PrintTablaFahrenheit(0, 300, 20);
    PrintTablaCelsius(0, 300, 20);
    return 0;
}