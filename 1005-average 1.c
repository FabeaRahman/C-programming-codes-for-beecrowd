#include <stdio.h>

int main() {
    double A, B, MEDIA;

    // Read two double precision values
    scanf("%lf", &A);
    scanf("%lf", &B);

    // Calculate the weighted average
    MEDIA = (A * 3.5 + B * 7.5) / 11.0;

    // Print the result with 5 digits after the decimal point
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
