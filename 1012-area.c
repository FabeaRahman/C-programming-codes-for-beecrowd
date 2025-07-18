
#include <stdio.h>

int main() {
    double A, B, C;
    double triangle, circle, trapezium, square, rectangle;
    const double pi = 3.14159;

    // Read input values
    scanf("%lf %lf %lf", &A, &B, &C);

    // Calculate areas
    triangle = (A * C) / 2.0;
    circle = pi * C * C;
    trapezium = ((A + B) * C) / 2.0;
    square = B * B;
    rectangle = A * B;

    // Print the results with 3 decimal places
    printf("TRIANGULO: %.3lf\n", triangle);
    printf("CIRCULO: %.3lf\n", circle);
    printf("TRAPEZIO: %.3lf\n", trapezium);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);

    return 0;
}

