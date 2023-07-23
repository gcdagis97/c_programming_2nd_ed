// Purpose: Takes a user-entered value for 'x' and computes the following:
//          3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
// Author: George Dagis

#include <stdio.h>

int main(void) {

    int x;
    
    printf("Enter an integer value for x: ");
    scanf("%d", &x);

    printf("Subbing in 'x' in the expression: 3x + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Result: %d\n", (3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-6);

    return 0;
}