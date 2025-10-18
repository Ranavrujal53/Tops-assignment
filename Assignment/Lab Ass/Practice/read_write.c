#include <stdio.h>

int main() {
    FILE *fp;
    char username[20], email[50], ch;
    int contact, i;

    fp = fopen("user.csv", "a");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    for (i = 1; i <= 3; i++) {
        printf("\nEnter username, email, and contact: ");
        scanf("%s %s %d", username, email, &contact);

        fprintf(fp, "%s,%s,%d\n", username, email, contact); 
    }
    fclose(fp);

    fp = fopen("user.csv", "r");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("\nUsername\tEmail\t\tContact\n");
    printf("--------------------------------------\n");

    while ((ch = getc(fp)) != EOF) {
        if (ch == ',') {
            printf("\t");
            continue;
        }
        if (ch == '\n') {
            printf("\n");
            continue;
        }
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}

