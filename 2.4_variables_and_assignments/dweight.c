// Name: dweight.c
// Purpose: Computes the dimensional weight of a 12" x 10" x 8" box
//          Shipping companies don't like boxes that are large & light as they take up valuable space
//          Such boxes are charged extra. The new cost is calculated through dimensional weight instead of actual weight
//          Found by dividing volume / 166 (allowable number of cubic inches per lb)
// Author: George Dagis

#include <stdio.h>

int main(void) {
    int height = 8;
    int length = 12;
    int width = 10;
    int volume;
    int weight;
    int inches_per_lb = 166;

    volume = height * length * width;
    weight = (volume + 165) / inches_per_lb;    // Add 165 to get around integer truncation

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    
    return 0;
}