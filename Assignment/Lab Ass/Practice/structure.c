#include<stdio.h>

struct student
{
	int enroll;
	char name[20];
	char email[20];
	float per;
};

main()
{
 	struct student s1;
 	
 	printf("\n Enter enroll and name:");
 	scanf("%d %s",&s1.enroll,s1.name);
 	
 	printf("\n Enter the email and per:");
 	scanf("%s %f",s1.email,&s1.per);
 	
 	printf("\n enroll=%d",s1.enroll);
 	printf("\n name=%s",s1.name);
 	printf("\n email=%s",s1.email);
 	printf("\n percentage=%f",s1.per);
}
