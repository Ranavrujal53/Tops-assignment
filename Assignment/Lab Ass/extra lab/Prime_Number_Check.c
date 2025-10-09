#include <stdio.h>

int main() {
    int n, i = 2, j, isPrime;

    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    while (i <= n) {
        j = 2;
        isPrime = 1;

        while (j <= i / 2) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
            j++;
        }

        if (isPrime)
            printf("%d ", i);

        i++;
    }

    printf("\n");
    return 0;
}

