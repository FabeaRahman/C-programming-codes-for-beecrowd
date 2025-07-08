#include <stdio.h>

int main() {
    int code1, uniop1, code2, uniop2;
    double price1, price2, total;

    // Read the first product's code, quantity, and unit price
    scanf("%d %d %lf", &code1, &uniop1, &price1);

    // Read the second product's code, quantity, and unit price
    scanf("%d %d %lf", &code2, &uniop2, &price2);

    // Calculate total amount to be paid
    total = (uniop1 * price1) + (uniop2 * price2);

    // Print result with 2 decimal places
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}

