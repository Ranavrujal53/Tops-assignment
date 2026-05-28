#include <stdio.h>

int i, j, k;

void getarray(int a[2][2])
{
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void printarray(int b[2][2])
{
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }
}

void multiplication(int a[2][2], int b[2][2], int c[2][2])
{
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 2; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int a[2][2], b[2][2], c[2][2];

    printf("\nEnter elements of first matrix:\n");
    getarray(a);

    printf("\nFirst matrix:\n");
    printarray(a);

    printf("\nEnter elements of second matrix:\n");
    getarray(b);

    printf("\nSecond matrix:\n");
    printarray(b);

    multiplication(a, b, c);

    printf("\nResultant 2x2 Matrix (Multiplication):\n");
    printarray(c);

    return 0;
}

