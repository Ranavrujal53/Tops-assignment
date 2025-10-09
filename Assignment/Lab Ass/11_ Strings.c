#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];

    
    printf("Enter first string: ");
    scanf("%s", str1);   // no spaces allowed
    printf("Enter second string: ");
    scanf("%s", str2);

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Display concatenated string and its length
    printf("Concatenated String: %s\n", str1);
    printf("Length: %d\n", strlen(str1));

    return 0;
}

