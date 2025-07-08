#include <stdio.h>

int main() {
    int distance, time;

    // Read the input distance
    scanf("%d", &distance);

    // Each kilometer takes 2 minutes to close the gap
    time = distance * 2;

    // Print the result
    printf("%d minutos\n", time);

    return 0;
}

