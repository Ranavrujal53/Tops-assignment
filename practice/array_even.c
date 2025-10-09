#include <stdio.h>

int main() {
    int n, i;
    int a[n];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
    	printf("\n enter a[%d]=",i);
        scanf("%d", &a[i]);
    }
    printf("\n even number of array:\n");
    for(i = 0; i < n; i++)
	 {
        if(a[i] % 2==0) {
        	printf("%d ", a[i]);
;
        }
    }
}

