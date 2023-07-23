// Name: celsius.c
// Purpose: Takes user-entered temperature in Fahrenheit and prints the equivalent Celsius temperature.
// Author: George Dagis

#include <stdio.h>

#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0 / 9.0)    // Include decimals to avoid int truncation

int main(void) {
    float fahrenheit;
    float celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    
    printf("Celsius equivalent: %.1f\n", celsius);  // Display temp with 1 digit after the decimal point
    
    return 0;
}