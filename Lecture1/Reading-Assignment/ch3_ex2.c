/* Prints int and float values in various formats */

#include <stdio.h>

int main(void)

{

    int i;          // variable declaration
    float x;

    i = 40;         // assignment of values
    x=839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);        // prints int and float values in formats that specifies minimum field width 
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);         // and making use of conversion specifiers

    return 0;

}