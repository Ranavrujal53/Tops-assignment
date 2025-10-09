#include<stdio.h>

main()
{
	int age;
	
	printf("\n Enter age to eligibe for voting:");
	scanf("%d",&age);
	
	(age >= 18) ? printf("%d age eligible to vote.\n", age) : printf("%d age not eligible to vote.\n", age);
	
	return 0;
}
