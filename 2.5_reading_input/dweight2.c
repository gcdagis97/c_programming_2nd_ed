// Name: dweight2.c
// Purpose: Computes the dimensional weight of a box described through user input.
//          Shipping companies don't like boxes that are large & light as they take up valuable space
//          Such boxes are charged extra. The new cost is calculated through dimensional weight instead of actual weight
//          Found by dividing volume / 166 (allowable number of cubic inches per lb)
// Author: George Dagis
// *Program will not work correctly if the user enters nonnumeric input

#include <stdio.h>

int main(void) {
    int height;
    int length;
    int width;
    int volume;
    int weight;
    int inches_per_lb = 166;

    printf("Enter the height of box: ");
    scanf("%d", &height);
    printf("Enter the length of box: ");
    scanf("%d", &length);
    printf("Enter the width of box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / inches_per_lb;    // Add 165 to get around integer truncation

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    
    return 0;
}