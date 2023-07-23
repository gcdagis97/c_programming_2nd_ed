// Purpose: Takes a user-entered value for 'x' and computes the following:
//          ((((3x+2)x-5)x-1)x+7)x-6
// Author: George Dagis

#include <stdio.h>

int main(void) {

    int x;
    
    printf("Enter an integer value for x: ");
    scanf("%d", &x);

    printf("Subbing in 'x' in the expression: ((((3x + 2)*x - 5)*x - 1)*x + 7)*x - 6\n");
    printf("Result: %d\n", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    return 0;
}