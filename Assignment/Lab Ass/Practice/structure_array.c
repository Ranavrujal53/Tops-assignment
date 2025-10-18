#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3]; 
    int i;

    printf("Enter details of 3 students:\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n===== Student Details =====\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", s[i].roll);
        printf("Name   : %s\n", s[i].name);
        printf("Marks  : %.2f\n", s[i].marks);
    }

    return 0;
}

