#include<stdio.h>
main()
{
	int choice, i, start,end;
	
	printf("Enter choice 1 for forward and 2 for reverse:\n");
	scanf("%d",&choice);
	
	printf("Enter start of range:\n");
	scanf("%d",&start);
	
	printf("Enter end of range:\n");
	scanf("%d",&end);
	
	if(choice==1)
	{
		printf("Forward loop:\n");
		for(i=start;i<=end;i++)
		printf("%d ",i);
	}
	else if(choice==2)
	{
		printf("reverse loop:\n");
		for(i=end;i>=start;i--)
		printf("%d ",i);
	}
	else
	{
		printf("invalid choice:");
	}
}
