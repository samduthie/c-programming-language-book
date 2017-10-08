/* Sam Duthie 2017
 * Chapter 1 of The C Programming Language
 * Copy Input to Output 
 * */

#include <stdio.h>

main()
{
    int c;

    while ((c = getchar()) != EOF )
        putchar(c);

}




