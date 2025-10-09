#include <stdio.h>

struct student {
    int sid;
    char sname[100];
    int marks;
};

int main() {
    struct student s[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &s[i].sid);

        printf("Name: ");
        scanf(" %[^\n]", s[i].sname); 

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID    : %d\n", s[i].sid);
        printf("Name  : %s\n", s[i].sname);
        printf("Marks : %d\n", s[i].marks);
    }
}

