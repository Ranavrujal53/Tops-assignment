#include <stdio.h>

int main() {
    int num, start, end, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Multiplication Table of %d from %d to %d:\n", num, start, end);

    for (i = start; i <= end; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

