/*  Interfaces & Makefile
    Temperaturas
    Ezequiel Litvak
    9/5/2022
*/
#ifndef TABLASDECONVERSION_H_INCLUDED
#define TABLASDECONVERSION_H_INCLUDED
void PrintFila(int value, double (*func)(double));
void PrintFilas(double (*func)(double), char* col1, char* col2, int base, int limit, int step);
void PrintTablaCelsius(int base, int limit, int step);
void PrintTablaFahrenheit(int base, int limit, int step);
#endif