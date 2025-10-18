#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of V (number of rows): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Print left side spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        // Print first star
        printf("*");

        // Print spaces between two stars
        for (j = 0; j < 2 * (n - i - 1) - 1; j++) {
            printf(" ");
        }

        // Print second star (except last row where only one star is needed)
        if (i != n - 1) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

