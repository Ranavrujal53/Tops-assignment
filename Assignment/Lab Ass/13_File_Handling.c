#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];
    char ch;

    // Open file in write mode
    fp = fopen("hello.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write to file
    fputs("hello world", fp);
    fputc('\n', fp);
    fclose(fp);

    // Open file in read mode
    fp = fopen("hello.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read a line from file
    fgets(str, sizeof(str), fp);
    printf("\nstr = %s", str);

    // Read next character (if any)
    ch = getc(fp);
    if (ch != EOF)
        printf("\nch = %c", ch);
    else
        printf("\nNo more characters to read.");

    fclose(fp);
    return 0;
}

