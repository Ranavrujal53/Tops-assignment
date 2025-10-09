#include <stdio.h>

// Recursive factorial function
int factorial_recursive(int n) {
    if (n <= 1)
        return 1;   
    return n * factorial_recursive(n - 1);
}


int factorial_iterative(int n) {
    int result = 1;
    int i;  
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter a number (0-12): ");
    scanf("%d", &n);

    if (n < 0 || n > 12) {
        printf("Error: input out of range for int factorial!\n");
        return 1;
    }

    printf("\nFactorial of %d using Recursion = %d", n, factorial_recursive(n));

    printf("\nFactorial of %d using Iteration = %d\n", n, factorial_iterative(n));

    return 0;
}

