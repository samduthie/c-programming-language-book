/* Sam Duthie 2017
 * Chapter 1 of The C Programming Language
 * count characters in input
 * */

#include <stdio.h>

main()
{
    long nc;

    nc = 0;

        while(getchar() != EOF)
            ++nc;
    printf("%ld\n", nc);
}


