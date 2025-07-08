#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;

    // Read coordinates of the first point
    scanf("%lf %lf", &x1, &y1);

    // Read coordinates of the second point
    scanf("%lf %lf", &x2, &y2);

    // Calculate distance using the distance formula
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Print the result with 4 digits after the decimal point
    printf("%.4lf\n", distance);

    return 0;
}

