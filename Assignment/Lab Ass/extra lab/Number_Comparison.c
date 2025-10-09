#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("\n Enter the three number:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>=b && a>=c)
	{
		printf("\n largest = %d",a);
	}
	 else if(b>=a && b>=c)
	 {
	 	printf("\n largest = %d",b);
	 }
	 else
	 {
	 	printf("\n largest = %d",c);
	 }
	 
	 
	 if(a<=b && a<=c)
	 {
	 	printf("\n smallest = %d",a);
	 }
	 else if(b<=a && b<=c)
	 {
	 	printf("\n smallest = %d",b);
	 }
	 else
	 {
	 	printf("\n smallest = %d",c);
	 }
}
