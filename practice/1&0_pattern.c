#include <stdio.h>

int main() {
    int i, j;
    int n = 6; // number of rows and columns

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            // sum of row and column index decides 1 or 0
            if((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}

