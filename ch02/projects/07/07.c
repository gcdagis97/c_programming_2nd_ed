// Purpose: Takes a dollars amount
//          Program shows bill breakdown using the smallest number of $20, $10, $5, and $1 bills
// Author: George Dagis

#include <stdio.h>

int main(void) {

    int dollars;

    printf("Enter dollar amount: ");
    scanf("%d", &dollars);

    printf("$20 bills: %d\n", dollars/20);
    dollars = dollars - 20*(dollars/20);

    printf("$10 bills: %d\n", dollars/10);
    dollars = dollars - 10*(dollars/10);

    printf("$5 bills: %d\n", dollars/5);
    dollars = dollars - 5*(dollars/5);

    printf("$1 bills: %d\n", dollars);
    
    return 0;
}