#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];   // add to sum
    }

    avg = sum / n;

    
    printf("\nSum of array elements = %.2f", sum);
    printf("\nAverage of array elements = %.2f\n", avg);

    return 0;
}

