// Purpose: Calculate the remaining balance on a loan after the 1st, 2nd, 3rd monthly payments.
// Author: George Dagis

#include <stdio.h>

int main(void) {

    float loan_amt;
    float interest_rate;
    float monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amt);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    loan_amt = loan_amt - monthly_payment + (loan_amt*interest_rate/100/12);
    printf("Balance remaining after first payment: %.2f\n", loan_amt);

    loan_amt = loan_amt - monthly_payment + (loan_amt*interest_rate/100/12);
    printf("Balance remaining after second payment: %.2f\n", loan_amt);

    loan_amt = loan_amt - monthly_payment + (loan_amt*interest_rate/100/12);   
    printf("Balance remaining after third payment: %.2f\n", loan_amt);

    return 0;
}