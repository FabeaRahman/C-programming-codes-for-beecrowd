#include <stdio.h>
int main() {
    double A, B, C, MEDIA;
    // Read three double precision values
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    // Calculate the weighted average
    MEDIA = (A * 2 + B * 3 + C*5) / 10.0;
    // Print the result with 1 digits after the decimal point
    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;
}

