#include<stdio.h>
main()
{
	int number,sum;
	
	printf("Enter number:\n");
	scanf("%d",&number);
	
	while(number>0)
	{
		sum=sum+(number%10);
		number=number/10;
	}
	printf("sum of digits=%d",sum);
}
