#include<stdio.h>
main()
{
	int num,first,last,sum;
	
	printf("Enter number:\n");
	scanf("%d",&num);
	
	last=num%10;
	
	first=num;
	
	while(first>=10)
	{
		first=first/10;
	}
	sum=first+last;
	
	printf("Fisrt digits=%d\n",first);
	printf("last digits=%d\n",last);
	printf("Sum of the fisrt and last digists:\n",sum);
}
