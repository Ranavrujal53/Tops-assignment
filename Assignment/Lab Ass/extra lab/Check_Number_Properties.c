#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is Even.\n", num) : printf("%d is Odd.\n", num);

    (num > 0) ? printf("%d is Positive.\n", num) :
    (num < 0) ? printf("%d is Negative.\n", num) :
                printf("The number is Zero.\n");

    (num % 3 == 0 && num % 5 == 0) ? 
        printf("%d is a multiple of both 3 and 5.\n", num) : 
        printf("%d is NOT a multiple of both 3 and 5.\n", num);

    return 0;
}

