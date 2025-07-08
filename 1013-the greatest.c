#include <stdio.h>

int main() {
    int a, b, c;

    // Read 3 integers
    scanf("%d %d %d", &a, &b, &c);

    // Find the greatest using a formula (like max function)
    int maiorAB = (a + b + abs(a - b)) / 2;
    int maior = (maiorAB + c + abs(maiorAB - c)) / 2;

    // Output result
    printf("%d eh o maior\n", maior);

    return 0;
}

