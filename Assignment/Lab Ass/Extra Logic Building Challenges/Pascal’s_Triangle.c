#include <stdio.h>

int i;
int factorial(int n)
 {
    int fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}


int combination(int n, int r) 
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
 {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
	 {
        
        for (j = 0; j < n - i - 1; j++)
            printf(" ");
        
        for (j = 0; j <= i; j++)
            printf("%d ", combination(i, j));
        printf("\n");
    }

    return 0;
}

