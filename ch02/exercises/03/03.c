#include <stdio.h>

int main(void) {
    int height = 8, length = 12, width = 10;
    int volume;
    int inches_per_lb = 166;

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / inches_per_lb);
    
    return 0;
}