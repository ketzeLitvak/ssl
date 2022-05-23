/* K&R
 * Exercise 1.15. Rewrite the temperature conversion program
 * of Section 1.2 to use a function for conversion.
 * JMS
 * 2016
 */
#include "Conversion.h"
double GetCelsFromFahr(double f){
    return (5.0/9.0)*(f-32);
}