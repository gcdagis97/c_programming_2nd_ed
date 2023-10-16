// Name: tprintf.c
// Purpose: Use printf to print integers and floating-point numbers in various formats.
// Author: George Dagis

#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    // Conversion specifications are in the form "%m.pX" or "%-m.pX" where m and p are integer constants, and X is a letter
    // m = minimum field width
    // p = precision (depends on X)
    // X = conversion specifier (which conversion to apply to value before printing)

    //  %d    displays i in decimal form, using a minimum amount of space.
    //  %5d   displays i in decimal form, using a minimum of 5 characters.
    //  %-5d  displays i in decimal form, using a minimum of 5 characters. i is left-justified.
    //  %5.3d displays i in decimal form, using a minimum of 5 characters. 3 specifies the precision.
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    //  %10.3f displays x in fixed decimal form.
    //  %10.3e displays x in exponential   form. x is left-justified.
    //  %-10g  displays x in either fixed decimal form or exponentnail form. x is left-justified
    printf("|%10.3f|%10.3e|%-10g|\n\n", x, x, x);
    
    // Escape sequences
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n\n");
    printf("\"Hello!\"\n");

    return 0;
}