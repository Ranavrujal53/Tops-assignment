#include <stdio.h>

int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}


int fibonacci_iterative(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, c, i;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int N, i;
    printf("Enter number of terms: ");
    scanf("%d", &N);

    printf("\nFibonacci sequence up to %d terms:\n", N);
    for (i = 0; i < N; i++) {
        printf("%d ", fibonacci_recursive(i));
    }

    
    printf("\n\n%dth Fibonacci number (Recursive) = %d", N, fibonacci_recursive(N - 1));
    printf("\n%dth Fibonacci number (Iterative) = %d\n", N, fibonacci_iterative(N - 1));

    return 0;
}

