#include <stdio.h>

/*Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.*/

main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	
	printf("\n Address=%p And value=%d",ptr,*ptr);
	
	*ptr=90;
	printf("\n a=%d",a);
}

