#include <stdio.h>

int main() {
    int X;
    float Y, average;

    // Read input values
    scanf("%d", &X);
    scanf("%f", &Y);

    // Calculate average consumption
    average = X / Y;

    // Print result with 3 digits after decimal point
    printf("%.3f km/l\n", average);

    return 0;
}

