#include <stdio.h>

int main() {
    int num, sum = 0, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;  

    while (num != 0) {
        rem = num % 10;          
        sum = sum + rem;         
        rev = rev * 10 + rem;    
        num = num / 10;          
    }

    printf("Sum of digits of %d = %d\n", temp, sum);
    printf("Reversed number = %d\n", rev);

    return 0;
}

