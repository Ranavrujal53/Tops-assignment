#include <stdio.h>

int main() {
    int i, j;
    int n = 7; // Number of rows

    for(i = 1; i <= n; i++) {
        // Left stars
        for(j = 1; j <= n - i + 1; j++) {
            printf("* ");
        }

        // Spaces in the middle
        for(j = 1; j <= 2*(i-1)-1; j++) {
            printf("  "); // Two spaces for alignment
        }

        // Right stars (skip for first row if only 1 row in middle)
         {
            for(j = 1; j <= n - i + 1; j++) {
                printf("* ");
            }
        }

        printf("\n");
    }

    return 0;
}

