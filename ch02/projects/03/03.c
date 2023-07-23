// Purpose: Program that computes the volume of a sphere with a user-entered radius
//          Use: v = (4/(3*pi*r^3)
//          Write 4/3 as "4.0f/3.0f"
//          Multiply r by itself twice to get r^3 since C doesn't have an exponentiation operator.
// Author: George Dagis

#include <stdio.h>

int main(void) {

    int radius;
    float pi = 3.14;

    printf("Enter sphere radius in meters: ");
    scanf("%d", &radius);

    float volume = 4.0f/3.0f*pi*radius*radius*radius;
    printf("Volume in cubic meters is: %.2f", volume);

    return 0;
}