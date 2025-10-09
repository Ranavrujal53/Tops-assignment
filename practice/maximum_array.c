#include <stdio.h>

int main() {
    int n, i,max;
    int a[n];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
    	printf("\n enter a[%d]=",i);
        scanf("%d", &a[i]);
    }
    
    max = a[0];  

    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i]; 
        }
    }

    printf("The maximum element in the array is: %d\n", max);
}

