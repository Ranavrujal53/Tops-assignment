#include <stdio.h>

// Function declaration
void checkEvenPrime(int num);

int main() 
{
    int n;

    printf("Enter an even number: ");
    scanf("%d", &n);

    if (n % 2 != 0) 
	{
        printf("%d is not an even number.\n", n);
    }
	 else 
	 {
        checkEvenPrime(n);  // call void function
    }

    return 0;
}

// Function definition
void checkEvenPrime(int num) {
    if (num == 2) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}

