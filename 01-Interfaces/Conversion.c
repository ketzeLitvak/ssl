/*  Interfaces & Makefile
    Temperaturas
    Ezequiel Litvak
    9/5/2022
*/
#include "Conversion.h"
double Celsius(double fahr){
    return (5.0/9.0) * (fahr - 32);
}

double Fahrenheit(double cels){
    return 32 + (cels * 9.0/5.0);
}