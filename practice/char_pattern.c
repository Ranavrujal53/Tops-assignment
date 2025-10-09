#include <stdio.h>

int main() {
    int i, j, space;
    char ch = 'a';

    for (i = 1; i <= 5; i++) {   // rows
        // print spaces
        for (space = 5; space > i; space--) {
            printf(" ");
        }
        // print letters
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
        ch++;  // go to next character
    }

    return 0;
}

