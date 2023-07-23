// Purpose: Takes a dollars and cents amount and adds 5% tax.
// Author: George Dagis

#include <stdio.h>

int main(void) {

    float dollars_and_cents;
    
    printf("Enter an amount: ");
    scanf("%f", &dollars_and_cents);

    printf("With tax added: %.2f", dollars_and_cents*1.05f);

    return 0;
}