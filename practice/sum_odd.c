#include<stdio.h>
//find the sum of only odd number in the n number of the series
main()
{
	int start,end,sum=0,i;
	 printf("\n Enter staring number:");
	 scanf("%d",&start);
	 
	 printf("\n Enter ending number:");
	 scanf("%d",&end);
	 
	 printf("Odd number of the series:");
	 
	 for(i=start;i<=end;i++)
	 {
	 	if(i%2 != 0)
	 	{
	 		printf("%d ",i);
	 		sum=sum+i;
		 }
	 }
	 printf("\nsum of the odd number is %d to %d:=%d",start,end,sum);
}
