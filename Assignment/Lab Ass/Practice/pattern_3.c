#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		k='a';
		for(j=1;j<=i;j++)
		{
			printf("%c",k);
			k++;
		}
		printf("\n");
	}
}
