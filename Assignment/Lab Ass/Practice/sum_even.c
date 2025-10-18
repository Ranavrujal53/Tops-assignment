#include<stdio.h>
// find only fum of even number to n number of serise
main()
{
	int start,end,i,sum=0;
	
	printf("Enter starting number:\n");
	scanf("%d",&start);
	
	printf("\nEnter ending number:");
	scanf("%d",&end);
	
	printf("Even number in the series:");

	for(i=start;i<=end;i++) 
	{
		if(i%2==0)
		{
			printf("%d ",i);
			sum=sum+i;
		}
	}
	printf("\nsum of the even number is %d to %d:=%d",start,end,sum);
}
