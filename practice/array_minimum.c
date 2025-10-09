#include <stdio.h>

int main() {
    int n, i, min;
    int a[n];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
    	printf("\n enter a[%d]=",i);
        scanf("%d", &a[i]);
    }
    
    min = a[0];  

    for(i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i]; 
        }
    }

    printf("The minimum element in the array is: %d\n", min);
}

