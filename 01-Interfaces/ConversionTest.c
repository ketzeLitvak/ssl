/*  Interfaces & Makefile
    Temperaturas
    Ezequiel Litvak
    9/5/2022
*/
#include "Conversion.h"
#include <assert.h>
#include <stdbool.h> // To change type _Bool to bool
#include <math.h>

bool isInsideRange(double value, double expectedValue, double epsilon) {
    return fabs(expectedValue - value) < epsilon;
}

int main(void) {
    // Happy scenarios
    assert(isInsideRange(Celsius(-200.77), -129.32, 0.01));
    assert(isInsideRange(Celsius(-100.32), -73.51, 0.01));
    assert(isInsideRange(Celsius(-1.3), -18.5, 0.01));
    assert(isInsideRange(Celsius(0), -17.78, 0.01));
    assert(isInsideRange(Celsius(25.3), -3.72, 0.01));
    assert(isInsideRange(Celsius(100), 37.78, 0.01));
    assert(isInsideRange(Celsius(220), 104.44, 0.01));
    assert(isInsideRange(Fahrenheit(-150.91), -239.64, 0.01));
    assert(isInsideRange(Fahrenheit(-23.21), -9.78, 0.01));
    assert(isInsideRange(Fahrenheit(-10.12), 13.78, 0.01));
    assert(isInsideRange(Fahrenheit(0), 32, 0.01));
    assert(isInsideRange(Fahrenheit(152.2), 305.96, 0.01));
    assert(isInsideRange(Fahrenheit(100), 212, 0.01));
    assert(isInsideRange(Fahrenheit(252), 485.6, 0.01));

    // Unhappy scenarios
    assert(!isInsideRange(Celsius(-200.77), -129, 0.01));
    assert(!isInsideRange(Celsius(-100.32), -74, 0.01));
    assert(!isInsideRange(Celsius(-1.3), -19, 0.01));
    assert(!isInsideRange(Celsius(0), -17.8, 0.01));
    assert(!isInsideRange(Celsius(25.3), -3.7, 0.01));
    assert(!isInsideRange(Celsius(100), 37.8, 0.01));
    assert(!isInsideRange(Celsius(220), 104.4, 0.01));
    assert(!isInsideRange(Fahrenheit(-150.91), -239.7, 0.01));
    assert(!isInsideRange(Fahrenheit(-23.21), -9.8, 0.01));
    assert(!isInsideRange(Fahrenheit(-10.12), 13.8, 0.01));
    assert(!isInsideRange(Fahrenheit(0), 30, 0.01));
    assert(!isInsideRange(Fahrenheit(152.2), 306, 0.01));
    assert(!isInsideRange(Fahrenheit(100), 210, 0.01));
    assert(!isInsideRange(Fahrenheit(252), 485.5, 0.01));
    return 0;
}