#include <stdio.h>

main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    //  ternary operator 
    (num % 2 == 0) ? printf("%d is Even\n", num) : printf("%d is Odd\n", num);

    return 0;
}

