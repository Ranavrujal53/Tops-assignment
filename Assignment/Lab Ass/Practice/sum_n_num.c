#include<stdio.h>
// find the sum of given n number of series
main()
{
	int n,sum=0,i,num;
	 printf("\n Enter how many number you add in sum:");
	 scanf("%d",&n);
	 
	 for(i=1;i<=n;i++)
	 {
	 	printf("Enter number %d: ",i);
	 	scanf("%d",&num);
	 	sum=sum+num;
	 }
	 printf("sum of %d number = %d\n",n,sum);
}
