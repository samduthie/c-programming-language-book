/* Sam Duthie 2017
 * Chapter 1 of The C Programming Language
 * Fahrenheit and Celsius temperature outputs
 * */

#include <stdio.h>

#define LOWER 0 
#define UPPER 300
#define STEP 20
main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.lf\n", fahr, (5./9.0) * (fahr-32));
    
}
