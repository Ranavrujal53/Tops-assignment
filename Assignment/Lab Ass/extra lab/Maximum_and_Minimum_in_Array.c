#include<stdio.h>
main()
{
	int i,j,n,max,min,temp;
	int a[n];
	
	
	 printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("\n Enter %d element\n:",n);
    for(i=0;i<n;i++)
    {
    	printf("\n enter a[%d]=",i);
        scanf("%d", &a[i]);
	}
	
	max=min=a[0];
	//minimum value
	for(i = 1; i < n; i++)
	{
        if(a[i] < min) 
		{
            min = a[i]; 
        }
    }
    //maximum value
    	for(i = 1; i < n; i++)
	{
        if(a[i] > max) 
		{
            max = a[i]; 
        }
    }
    

    printf("\nMinimum value: %d", min);
    printf("\nMaximum value: %d\n", max);
    
    
        //accending order 
    
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(a[i]>a[j])
    		{
    			temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
			}
		}
	}

for(i=0;i<n;i++)
{
	printf("\n a[%d]=%d",i,a[i]);
}

}
