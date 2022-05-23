/* K&R
 * Exercise 1.15. Rewrite the temperature conversion program
 * of Section 1.2 to use a function for conversion.
 * JMS
 * 2016
 */
#include <stdio.h>
#include "Conversion.h"

int main(void){
    const int LOWER = 0; // lower limit of table
    const int UPPER = 300; // upper limit
    const int STEP = 20; // step size
    for(int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, GetCelsFromFahr(fahr) );
}