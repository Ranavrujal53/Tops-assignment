#include<stdio.h>

int main()
{
	char name[20], name2[20];
	int i = 0, j = 0, len = 0;

	printf("Enter the name: ");
	scanf("%s", name);

	while(name[len] != '\0') {
		len++;
	}
	printf("Length = %d\n", len);

	
	i = len - 1;
	while(i >= 0) {
		name2[j] = name[i];
		i--;
		j++;
	}
	name2[j] = '\0';

	printf("Reversed string = %s\n", name2);

	return 0;
}

