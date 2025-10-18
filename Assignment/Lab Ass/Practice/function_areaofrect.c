#include<stdio.h>

float areaofrect(float width,float length)
{
	return length*width;
}

main()
{
	float length,width,area;
	
	printf("\n enter the area of lenth and :");
	scanf("%f %f",&length,&width);
	
	area=areaofrect(length,width);
	
	printf("\n area of reactangle is %f",area);
}

