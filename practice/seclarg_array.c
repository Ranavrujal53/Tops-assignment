#include <stdio.h>

int main() {
    int n, i,a[n],larg,seclarg;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
    	printf("\n enter a[%d]=",i);
        scanf("%d", &a[i]);
    }
    
    if(a[0] > a[1])
    {
    	larg=a[0];
    	seclarg=a[1];
	}
	else
	{
		larg=a[1];
		seclarg=a[0];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i] > larg)
		
		{
			seclarg=larg;
			larg=a[i];
		}
		else if(a[i] > seclarg && a[i] != larg)
		{
			seclarg = a[i];
		}
	}
	printf("\n second largest number in array is:%d",seclarg);
}


