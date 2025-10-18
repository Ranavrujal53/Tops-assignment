#include<stdio.h>
#include<string.h>
main()
{
	char str1[20],str2[20];
	
	printf("\n Enter the string:");
	scanf("%s",str1);
	
	printf("\n str1=%s",str1);
	printf("\n len of string=%d",strlen(str1));
	
	strcpy(str2,str1);
	printf("\n compare =%d",strcmp(str1,str2));
	
	printf("\n uppere case str2=%s",strupr(str2));
	
	printf("\n reverse str2=%s",strrev(str2));
}

