#include <stdio.h>

int main() {
    int i, j;
    char ch = 'a';

    for (i = 1; ch <= 'o'; i++) {   // rows until 'o'
        for (j = 1; j <= i && ch <= 'o'; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}

